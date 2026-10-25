// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14177f640 NotifyUObjectDeleted body=74 status=ok
// SIG undefined NotifyUObjectDeleted(void)

void FUObjectAnnotationDense<FArchetypeInfo,1>::NotifyUObjectDeleted
               (longlong param_1,undefined8 param_2,int param_3)

{
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  if (param_3 < *(int *)(param_1 + 0x10)) {
    *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)param_3 * 8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014177f683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  return;
}



// FUNCTION 14177f690 `scalar_deleting_destructor' body=87 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FUObjectAnnotationDense<FArchetypeInfo,1>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d309c8;
  RemoveAllAnnotations();
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14177f6f0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FUObjectAnnotationSparse<FBoolAnnotation,1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~FUObjectAnnotationSparse<FBoolAnnotation,1>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14177f730 Emplace<TTuple<UObject_*,FSparseItemInfo>_const_&> body=430 status=ok
// SIG undefined Emplace<TTuple<UObject_*,FSparseItemInfo>_const_&>(void)

int * TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<UObject_*,FSparseItemInfo>_const_&>
                (longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar11 = false;
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
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*local_30);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)local_res8[0] * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = local_res8[0];
      goto LAB_14177f8b6;
    }
  }
  cVar5 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar5 == '\0') {
    iVar9 = (int)(*local_30 >> 4);
    uVar8 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar10 = -(uVar8 + iVar9) ^ uVar8 >> 0xd;
    uVar7 = (iVar9 - uVar8) - uVar10 ^ uVar10 >> 0xc;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 0x10;
    uVar10 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 5;
    uVar7 = (uVar7 - uVar8) - uVar10 ^ uVar10 >> 3;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 10;
    uVar7 = ((uVar10 - uVar8) - uVar7 ^ uVar8 >> 0xf) & (int)param_1[9] - 1U;
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
LAB_14177f8b6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 14177f8e0 Emplace<TTuple<FName,float>_const_&> body=414 status=ok
// SIG undefined Emplace<TTuple<FName,float>_const_&>(void)

int * TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
      Emplace<TTuple<FName,float>_const_&>
                (longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar11 = false;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *param_2 = local_38[0];
  *(undefined4 *)local_30 = uVar2;
  *(undefined4 *)((longlong)local_30 + 4) = uVar3;
  *(undefined4 *)(local_30 + 1) = uVar4;
  *(undefined4 *)((longlong)local_30 + 0xc) = uVar5;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    lVar1 = *local_30;
    if (iVar10 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x18) == lVar1) goto LAB_14177f9ac;
          iVar9 = *(int *)(*param_1 + 0x10 + (longlong)iVar9 * 0x18);
        } while (iVar9 != -1);
      }
    }
    iVar9 = -1;
LAB_14177f9ac:
    bVar11 = iVar9 != -1;
    if (bVar11) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar9;
      goto LAB_14177fa56;
    }
  }
  cVar6 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar6 == '\0') {
    uVar8 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar8;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_14177fa56:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 14177fa80 Emplace<TKeyInitializer<VkImage_T_*_const_&>_> body=435 status=ok
// SIG undefined Emplace<TKeyInitializer<VkImage_T_*_const_&>_>(void)

int * TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<VkImage_T_*_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulonglong *puVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (ulonglong *)*param_3;
  bVar8 = false;
  *param_2 = local_38[0];
  *local_30 = *puVar1;
  *(undefined4 *)(local_30 + 1) = 0;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)local_res8[0] * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = local_res8[0];
      goto LAB_14177fc0b;
    }
  }
  cVar2 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    iVar6 = (int)(*local_30 >> 4);
    uVar5 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
    uVar7 = -(uVar5 + iVar6) ^ uVar5 >> 0xd;
    uVar4 = (iVar6 - uVar5) - uVar7 ^ uVar7 >> 0xc;
    uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 << 0x10;
    uVar7 = (uVar7 - uVar5) - uVar4 ^ uVar5 >> 5;
    uVar4 = (uVar4 - uVar5) - uVar7 ^ uVar7 >> 3;
    uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 << 10;
    uVar4 = ((uVar7 - uVar5) - uVar4 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar4;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_14177fc0b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 14177fc40 FUN_14177fc40 body=882 status=ok
// SIG undefined FUN_14177fc40(void)

int * FUN_14177fc40(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong *_Src;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  bool local_res8;
  
  iVar17 = -1;
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
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar15 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar15;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar15 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar11;
  local_res8 = false;
  lVar8 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar16 = (uint *)((longlong)plVar9 + lVar8);
  *puVar16 = *puVar16 | 1 << ((byte)iVar11 & 0x1f);
  puVar2 = (ulonglong *)param_3[1];
  lVar1 = (longlong)iVar11 * 0x18;
  _Src = (ulonglong *)(*param_1 + lVar1);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  _Src[1] = *puVar2;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  iVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar15 != 1) {
    iVar7 = iVar17;
    if (iVar15 != 0) {
      iVar13 = (int)(uVar3 >> 4);
      uVar12 = 0x9e3779b9U - iVar13 ^ iVar13 << 8;
      uVar10 = -(uVar12 + iVar13) ^ uVar12 >> 0xd;
      uVar14 = (iVar13 - uVar12) - uVar10 ^ uVar10 >> 0xc;
      uVar12 = (uVar12 - uVar14) - uVar10 ^ uVar14 << 0x10;
      uVar10 = (uVar10 - uVar12) - uVar14 ^ uVar12 >> 5;
      uVar14 = (uVar14 - uVar12) - uVar10 ^ uVar10 >> 3;
      uVar12 = (uVar12 - uVar14) - uVar10 ^ uVar14 << 10;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar13 = *(int *)((longlong)plVar9 +
                       (((longlong)(int)((uVar10 - uVar12) - uVar14) ^ (ulonglong)(uVar12 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar13 != -1) {
        do {
          iVar7 = iVar13;
          if (*(ulonglong *)(*param_1 + (longlong)iVar13 * 0x18) == uVar3) break;
          iVar13 = *(int *)(*param_1 + 0x10 + (longlong)iVar13 * 0x18);
          iVar7 = iVar17;
        } while (iVar13 != -1);
      }
    }
    local_res8 = iVar7 != -1;
    if (local_res8) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar7 * 0x18),_Src,0x10);
      bVar5 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar11;
      }
      lVar4 = *param_1;
      *(undefined4 *)(lVar1 + lVar4) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar4) = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar16 = (uint *)((longlong)plVar9 + lVar8);
      *puVar16 = *puVar16 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_14177ff83;
    }
  }
  cVar6 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar15,0);
  if (cVar6 == '\0') {
    iVar17 = (int)(*_Src >> 4);
    uVar12 = 0x9e3779b9U - iVar17 ^ iVar17 << 8;
    uVar14 = -(uVar12 + iVar17) ^ uVar12 >> 0xd;
    uVar10 = (iVar17 - uVar12) - uVar14 ^ uVar14 >> 0xc;
    uVar12 = (uVar12 - uVar10) - uVar14 ^ uVar10 << 0x10;
    uVar14 = (uVar14 - uVar12) - uVar10 ^ uVar12 >> 5;
    uVar10 = (uVar10 - uVar12) - uVar14 ^ uVar14 >> 3;
    uVar12 = (uVar12 - uVar10) - uVar14 ^ uVar10 << 10;
    uVar10 = ((uVar14 - uVar12) - uVar10 ^ uVar12 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar10;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_14177ff83:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14177ffc0 FUN_14177ffc0 body=808 status=ok
// SIG undefined FUN_14177ffc0(void)

int * FUN_14177ffc0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  longlong *_Src;
  void *_Dst;
  bool local_res8;
  
  iVar8 = 1;
  iVar11 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)((longlong)iVar9 * 0x70 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar10 * 0x70 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  plVar7 = (longlong *)param_3[1];
  _Src = (longlong *)((longlong)iVar9 * 0x70 + *param_1);
  *_Src = *(longlong *)*param_3;
  _Src[1] = *plVar7;
  _Src[2] = plVar7[1];
  _Src[3] = 0;
  _Src[4] = 0;
  _Src[7] = 0;
  _Src[8] = 0;
  *(undefined4 *)(_Src + 9) = 0xffffffff;
  *(undefined4 *)((longlong)_Src + 0x4c) = 0;
  _Src[0xb] = 0;
  *(undefined4 *)(_Src + 0xc) = 0;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  operator=(_Src + 3,plVar7 + 2);
  *(undefined4 *)(_Src + 0xd) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar13 != 1) {
    lVar2 = *_Src;
    iVar9 = iVar11;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar7 +
                       ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        do {
          iVar9 = iVar10;
          if (*(longlong *)((longlong)iVar10 * 0x70 + *param_1) == lVar2) break;
          iVar10 = *(int *)((longlong)iVar10 * 0x70 + 0x68 + *param_1);
          iVar9 = iVar11;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar9 * 0x70 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x60) = 0;
      if (*(longlong *)((longlong)_Dst + 0x58) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 0x18);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x68);
      iVar8 = *param_2;
      bVar3 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x70 + *param_1) = iVar8;
      }
      puVar6 = (undefined4 *)((longlong)iVar8 * 0x70 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar11 = (int)param_1[6];
      }
      puVar6[1] = iVar11;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1417802c6;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar11;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar11;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar13 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x6c) = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xd) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FName,FDynamicClassStaticData>,TDefaultMapHashableKeyFuncs<FName,FDynamicClassStaticData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1417802c6:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1417802f0 FUN_1417802f0 body=505 status=ok
// SIG undefined FUN_1417802f0(void)

int * FUN_1417802f0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
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
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  puVar2 = (ulonglong *)(*param_1 + (longlong)iVar11 * 0x28);
  puVar4 = (undefined4 *)param_3[1];
  *puVar2 = *(ulonglong *)*param_3;
  uVar5 = puVar4[1];
  uVar6 = puVar4[2];
  uVar7 = puVar4[3];
  *(undefined4 *)(puVar2 + 1) = *puVar4;
  *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
  *(undefined4 *)(puVar2 + 2) = uVar6;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uVar7;
  *(undefined4 *)(puVar2 + 3) = puVar4[4];
  *(undefined4 *)((longlong)puVar2 + 0x1c) = puVar4[5];
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  cVar8 = TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar8 == '\0') {
    iVar11 = (int)(*puVar2 >> 4);
    uVar13 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar14 = -(iVar11 + uVar13) ^ uVar13 >> 0xd;
    uVar12 = (iVar11 - uVar13) - uVar14 ^ uVar14 >> 0xc;
    uVar13 = (uVar13 - uVar12) - uVar14 ^ uVar12 << 0x10;
    uVar14 = (uVar14 - uVar13) - uVar12 ^ uVar13 >> 5;
    uVar12 = (uVar12 - uVar13) - uVar14 ^ uVar14 >> 3;
    uVar13 = (uVar13 - uVar12) - uVar14 ^ uVar12 << 10;
    uVar12 = ((uVar14 - uVar13) - uVar12 ^ uVar13 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)puVar2 + 0x24) = uVar12;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(puVar2 + 4) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  return param_2;
}



// FUNCTION 1417804f0 FUN_1417804f0 body=642 status=ok
// SIG undefined FUN_1417804f0(void)

uint * FUN_1417804f0(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  void *_Dst;
  uint uVar9;
  ulonglong *_Src;
  bool bVar10;
  uint local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar5 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar5 + 1)) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,uVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar5 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)((longlong)(int)uVar5 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar8 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = uVar5;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar4 +
                   (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar5 & 0x1f);
  _Src = (ulonglong *)((longlong)(int)uVar5 * 0x60 + *param_1);
  TPairInitializer<ULevel_*_&,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_&&>
  ::
  operator<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>_TTuple<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>
            (param_3,_Src);
  *(undefined4 *)(_Src + 0xb) = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (iVar8 != 1) {
    TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*_Src);
    uVar5 = local_res8[0];
    lVar7 = (longlong)(int)local_res8[0];
    bVar10 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar10);
    if (bVar10) {
      _Dst = (void *)(lVar7 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x58);
      TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar5;
      goto LAB_14178073f;
    }
  }
  cVar2 = TSet<TTuple<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar8,0);
  if (cVar2 == '\0') {
    iVar8 = (int)(*_Src >> 4);
    uVar6 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
    uVar9 = -(uVar6 + iVar8) ^ uVar6 >> 0xd;
    uVar5 = (iVar8 - uVar6) - uVar9 ^ uVar9 >> 0xc;
    uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 0x10;
    uVar9 = (uVar9 - uVar6) - uVar5 ^ uVar6 >> 5;
    uVar5 = (uVar5 - uVar6) - uVar9 ^ uVar9 >> 3;
    uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 10;
    uVar5 = ((uVar9 - uVar6) - uVar5 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x5c) = uVar5;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xb) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(uint *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_14178073f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141780780 HeapSortInternal<UObject_*,FIdentityFunctor,TDereferenceWrapper<UObject_*,FCompareUObjectByLinkerAndOffset>_> body=916 status=ok
// SIG undefined HeapSortInternal<UObject_*,FIdentityFunctor,TDereferenceWrapper<UObject_*,FCompareUObjectByLinkerAndOffset>_>(void)

void AlgoImpl::
     HeapSortInternal<UObject_*,FIdentityFunctor,TDereferenceWrapper<UObject_*,FCompareUObjectByLinkerAndOffset>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    iVar7 = iVar4 * 2 + 1;
    iVar9 = iVar7;
    iVar8 = iVar4;
joined_r0x0001417807ca:
    do {
      if (iVar7 < param_2) {
        iVar7 = iVar4 * 2;
        iVar13 = iVar7 + 1;
        if (iVar7 + 2 < param_2) {
          uVar1 = param_1[iVar13];
          uVar2 = param_1[(longlong)iVar7 + 2];
          uVar10 = FUN_1417a53c0(uVar2);
          uVar11 = FUN_1417a53c0(uVar1);
          if ((uVar10 == 0) || (uVar11 == 0)) {
            if (uVar10 == uVar11) {
              bVar14 = false;
            }
            else {
              bVar14 = uVar10 != 0;
            }
          }
          else {
            bVar14 = uVar10 < uVar11;
            if (uVar10 == uVar11) {
              iVar5 = FUN_1417a5490(uVar2);
              lVar12 = *(longlong *)(uVar10 + 0x18);
              iVar6 = FUN_1417a5490(uVar1);
              bVar14 = *(longlong *)((longlong)iVar5 * 0x88 + 0x30 + lVar12) <
                       *(longlong *)((longlong)iVar6 * 0x88 + 0x30 + *(longlong *)(uVar11 + 0x18));
            }
          }
          if (bVar14) {
            iVar13 = iVar7;
          }
          iVar13 = iVar13 + 1;
        }
        uVar1 = param_1[iVar13];
        uVar2 = param_1[iVar4];
        uVar10 = FUN_1417a53c0(uVar2);
        uVar11 = FUN_1417a53c0(uVar1);
        if ((uVar10 == 0) || (uVar11 == 0)) {
          if (uVar10 == uVar11) goto LAB_141780931;
          bVar14 = uVar10 != 0;
        }
        else {
          bVar14 = uVar10 < uVar11;
          if (uVar10 == uVar11) {
            iVar7 = FUN_1417a5490(uVar2);
            lVar12 = *(longlong *)(uVar10 + 0x18);
            iVar5 = FUN_1417a5490(uVar1);
            bVar14 = *(longlong *)((longlong)iVar7 * 0x88 + 0x30 + lVar12) <
                     *(longlong *)((longlong)iVar5 * 0x88 + 0x30 + *(longlong *)(uVar11 + 0x18));
          }
        }
        if (bVar14) {
          uVar1 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar13];
          iVar7 = iVar13 * 2 + 1;
          param_1[iVar13] = uVar1;
          iVar4 = iVar13;
          goto joined_r0x0001417807ca;
        }
      }
LAB_141780931:
      iVar4 = iVar8 + -1;
      iVar7 = iVar9 + -2;
      iVar9 = iVar7;
      iVar8 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  lVar12 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar4 = 0;
      uVar1 = *param_1;
      *param_1 = param_1[lVar12];
      param_1[lVar12] = uVar1;
      if (1 < param_2) {
        do {
          iVar9 = iVar4 * 2;
          iVar7 = iVar9 + 1;
          if (iVar9 + 2 < param_2) {
            uVar1 = param_1[iVar7];
            uVar2 = param_1[(longlong)iVar9 + 2];
            uVar10 = FUN_1417a53c0(uVar2);
            uVar11 = FUN_1417a53c0(uVar1);
            if ((uVar10 == 0) || (uVar11 == 0)) {
              if (uVar10 == uVar11) {
                bVar14 = false;
              }
              else {
                bVar14 = uVar10 != 0;
              }
            }
            else {
              bVar14 = uVar10 < uVar11;
              if (uVar10 == uVar11) {
                iVar8 = FUN_1417a5490(uVar2);
                lVar3 = *(longlong *)(uVar10 + 0x18);
                iVar13 = FUN_1417a5490(uVar1);
                bVar14 = *(longlong *)((longlong)iVar8 * 0x88 + 0x30 + lVar3) <
                         *(longlong *)
                          ((longlong)iVar13 * 0x88 + 0x30 + *(longlong *)(uVar11 + 0x18));
              }
            }
            if (bVar14) {
              iVar7 = iVar9;
            }
            iVar7 = iVar7 + 1;
          }
          uVar1 = param_1[iVar7];
          uVar2 = param_1[iVar4];
          uVar10 = FUN_1417a53c0(uVar2);
          uVar11 = FUN_1417a53c0(uVar1);
          if ((uVar10 == 0) || (uVar11 == 0)) {
            if (uVar10 == uVar11) break;
            bVar14 = uVar10 != 0;
          }
          else {
            bVar14 = uVar10 < uVar11;
            if (uVar10 == uVar11) {
              iVar9 = FUN_1417a5490(uVar2);
              lVar3 = *(longlong *)(uVar10 + 0x18);
              iVar8 = FUN_1417a5490(uVar1);
              bVar14 = *(longlong *)((longlong)iVar9 * 0x88 + 0x30 + lVar3) <
                       *(longlong *)((longlong)iVar8 * 0x88 + 0x30 + *(longlong *)(uVar11 + 0x18));
            }
          }
          if (!bVar14) break;
          uVar1 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar7];
          param_1[iVar7] = uVar1;
          iVar4 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      lVar12 = lVar12 + -1;
      param_2 = param_2 + -1;
    } while (0 < lVar12);
  }
  return;
}



// FUNCTION 141780b20 InternalConstructor<UTextProperty> body=48 status=ok
// SIG undefined InternalConstructor<UTextProperty>(void)

void InternalConstructor<UTextProperty>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x18;
    *puVar1 = &PTR_FUN_144d30d98;
  }
  return;
}



// FUNCTION 141780b50 InternalVTableHelperCtorCaller<UTextProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UTextProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UTextProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UTextProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR_FUN_144d30d98;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141780be0 IntroSortInternal<UObject_*,FIdentityFunctor,TDereferenceWrapper<UObject_*,FCompareUObjectByLinkerAndOffset>_> body=1196 status=ok
// SIG undefined IntroSortInternal<UObject_*,FIdentityFunctor,TDereferenceWrapper<UObject_*,FCompareUObjectByLinkerAndOffset>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<UObject_*,FIdentityFunctor,TDereferenceWrapper<UObject_*,FCompareUObjectByLinkerAndOffset>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_3b8 [32];
  undefined1 local_398;
  longlong *local_390;
  int local_388;
  undefined8 *local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  longlong local_350;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar13 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar13 = fVar13 + 1.8446744e+19;
    }
    local_398 = param_3;
    local_368 = param_4;
    local_348 = param_1;
    fVar13 = ::_guard_xfg_dispatch_icall_nop(fVar13);
    local_338 = (undefined4)(longlong)(fVar13 + fVar13);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    local_390 = &local_348;
    do {
      puVar8 = (undefined8 *)*local_390;
      local_380 = (undefined8 *)local_390[1];
      local_350 = local_390[2];
      local_388 = (int)local_350;
      lVar7 = ((longlong)local_380 - (longlong)puVar8 >> 3) + 1;
      puVar9 = puVar8;
      if ((int)local_350 != 0) {
LAB_141780cd6:
        puVar2 = local_380;
        puVar8 = local_380;
        if (8 < lVar7) {
          if (lVar7 < 0) {
            lVar7 = lVar7 + 1;
          }
          puVar10 = local_380 + 1;
          uVar1 = puVar9[lVar7 >> 1];
          puVar9[lVar7 >> 1] = *puVar9;
          *puVar9 = uVar1;
          puVar8 = puVar9;
LAB_141780d10:
          puVar8 = puVar8 + 1;
          if (puVar8 <= puVar2) {
            local_378 = *puVar9;
            uVar1 = *puVar8;
            local_370 = uVar1;
            uVar5 = FUN_1417a53c0(local_378);
            uVar6 = FUN_1417a53c0(uVar1);
            if ((uVar5 == 0) || (uVar6 == 0)) goto LAB_141780d98;
            bVar12 = uVar5 < uVar6;
            if (uVar5 == uVar6) {
              iVar3 = FUN_1417a5490(local_378);
              lVar7 = *(longlong *)(uVar5 + 0x18);
              iVar4 = FUN_1417a5490(local_370);
              bVar12 = *(longlong *)((longlong)iVar3 * 0x88 + 0x30 + lVar7) <
                       *(longlong *)((longlong)iVar4 * 0x88 + 0x30 + *(longlong *)(uVar6 + 0x18));
            }
            goto LAB_141780da7;
          }
          goto LAB_141780db0;
        }
        for (; puVar10 = puVar9, puVar2 = puVar9, puVar9 < puVar8; puVar8 = puVar8 + -1) {
          while (puVar11 = puVar10, puVar2 = puVar2 + 1, puVar2 <= puVar8) {
            local_370 = *puVar11;
            local_378 = *puVar2;
            uVar5 = FUN_1417a53c0(local_370);
            uVar6 = FUN_1417a53c0();
            if ((uVar5 == 0) || (uVar6 == 0)) {
              if (uVar5 == uVar6) {
                bVar12 = false;
              }
              else {
                bVar12 = uVar5 != 0;
              }
            }
            else {
              bVar12 = uVar5 < uVar6;
              if (uVar5 == uVar6) {
                iVar3 = FUN_1417a5490(local_370);
                lVar7 = *(longlong *)(uVar5 + 0x18);
                iVar4 = FUN_1417a5490(local_378);
                bVar12 = *(longlong *)((longlong)iVar3 * 0x88 + 0x30 + lVar7) <
                         *(longlong *)((longlong)iVar4 * 0x88 + 0x30 + *(longlong *)(uVar6 + 0x18));
              }
            }
            puVar10 = puVar2;
            if (!bVar12) {
              puVar10 = puVar11;
            }
          }
          uVar1 = *puVar11;
          *puVar11 = *puVar8;
          *puVar8 = uVar1;
          param_4 = local_368;
          param_3 = local_398;
        }
        goto LAB_141780f34;
      }
LAB_141780f20:
      HeapSortInternal<UObject_*,FIdentityFunctor,TDereferenceWrapper<UObject_*,FCompareUObjectByLinkerAndOffset>_>
                (puVar8,lVar7,param_3,param_4);
LAB_141780f34:
      local_390 = local_390 + -3;
    } while (&local_348 <= local_390);
  }
  return;
LAB_141780d98:
  if (uVar5 == uVar6) goto LAB_141780d10;
  bVar12 = uVar5 != 0;
LAB_141780da7:
  if (!bVar12) goto LAB_141780d10;
LAB_141780db0:
  do {
    puVar11 = puVar10;
    puVar10 = puVar11 + -1;
    if (puVar10 <= puVar9) break;
    local_370 = *puVar10;
    uVar1 = *puVar9;
    local_378 = uVar1;
    uVar5 = FUN_1417a53c0(local_370);
    uVar6 = FUN_1417a53c0(uVar1);
    if ((uVar5 == 0) || (uVar6 == 0)) {
      if (uVar5 == uVar6) goto LAB_141780db0;
      bVar12 = uVar5 != 0;
    }
    else {
      bVar12 = uVar5 < uVar6;
      if (uVar5 == uVar6) {
        iVar3 = FUN_1417a5490(local_370);
        lVar7 = *(longlong *)(uVar5 + 0x18);
        iVar4 = FUN_1417a5490(local_378);
        bVar12 = *(longlong *)((longlong)iVar3 * 0x88 + 0x30 + lVar7) <
                 *(longlong *)((longlong)iVar4 * 0x88 + 0x30 + *(longlong *)(uVar6 + 0x18));
      }
    }
  } while (!bVar12);
  if (puVar8 <= puVar10) {
    uVar1 = *puVar8;
    *puVar8 = *puVar10;
    *puVar10 = uVar1;
    goto LAB_141780d10;
  }
  uVar1 = *puVar9;
  *puVar9 = *puVar10;
  local_388 = local_388 + -1;
  *puVar10 = uVar1;
  param_4 = local_368;
  if ((longlong)((longlong)puVar10 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar2 - (longlong)puVar8 & 0xfffffffffffffff8U)) {
    if (puVar8 < local_380) {
      *local_390 = (longlong)puVar8;
      local_390[1] = (longlong)local_380;
      *(int *)(local_390 + 2) = local_388;
      local_390 = local_390 + 3;
    }
    if (puVar10 <= puVar9 + 1) goto LAB_141780f34;
    local_380 = puVar11 + -2;
    puVar8 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar10) {
      *local_390 = (longlong)puVar9;
      local_390[1] = (longlong)(puVar11 + -2);
      *(int *)(local_390 + 2) = local_388;
      local_390 = local_390 + 3;
    }
    if (local_380 <= puVar8) goto LAB_141780f34;
  }
  lVar7 = ((longlong)local_380 - (longlong)puVar8 >> 3) + 1;
  puVar9 = puVar8;
  if (local_388 == 0) goto LAB_141780f20;
  goto LAB_141780cd6;
}



// FUNCTION 141781090 MultiFind<FDefaultAllocator> body=547 status=ok
// SIG undefined MultiFind<FDefaultAllocator>(void)

void TMultiMap<FLinkerLoad_*,FDeferredScriptLoader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,FDeferredScriptLoader,1>_>
     ::MultiFind<FDefaultAllocator>
               (longlong *param_1,ulonglong param_2,longlong *param_3,char param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint uVar15;
  undefined8 *puVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  
  TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if ((int)param_1[9] != 0) {
    iVar20 = (int)(param_2 >> 4);
    uVar18 = 0x9e3779b9U - iVar20 ^ iVar20 << 8;
    uVar15 = -(uVar18 + iVar20) ^ uVar18 >> 0xd;
    uVar21 = (iVar20 - uVar18) - uVar15 ^ uVar15 >> 0xc;
    uVar18 = (uVar18 - uVar21) - uVar15 ^ uVar21 << 0x10;
    uVar15 = (uVar15 - uVar18) - uVar21 ^ uVar18 >> 5;
    uVar21 = (uVar21 - uVar18) - uVar15 ^ uVar15 >> 3;
    uVar18 = (uVar18 - uVar21) - uVar15 ^ uVar21 << 10;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    iVar20 = *(int *)((longlong)plVar14 +
                     (((longlong)(int)((uVar15 - uVar18) - uVar21) ^ (ulonglong)(uVar18 >> 0xf)) &
                     (longlong)(int)param_1[9] - 1U) * 4);
    iVar17 = iVar20;
    if (iVar20 != -1) {
      do {
        iVar20 = *(int *)(*param_1 + 0x20 + (longlong)iVar17 * 0x28);
        if (*(ulonglong *)(*param_1 + (longlong)iVar17 * 0x28) == param_2) break;
        iVar17 = iVar20;
      } while (iVar20 != -1);
    }
joined_r0x00014178119c:
    if (iVar17 != -1) {
      iVar6 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar6 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_3,iVar6);
      }
      puVar1 = (undefined4 *)(*param_3 + (longlong)iVar6 * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*param_1 + 8 + (longlong)iVar17 * 0x28);
        uVar8 = puVar4[1];
        uVar9 = puVar4[2];
        uVar10 = puVar4[3];
        lVar2 = *param_1 + (longlong)iVar17 * 0x28;
        *puVar1 = *puVar4;
        puVar1[1] = uVar8;
        puVar1[2] = uVar9;
        puVar1[3] = uVar10;
        puVar1[4] = *(undefined4 *)(lVar2 + 0x18);
        puVar1[5] = *(undefined4 *)(lVar2 + 0x1c);
      }
      if (iVar20 == -1) goto LAB_14178123c;
      iVar17 = iVar20;
      do {
        iVar20 = *(int *)(*param_1 + 0x20 + (longlong)iVar17 * 0x28);
        if (*(ulonglong *)(*param_1 + (longlong)iVar17 * 0x28) == param_2) break;
        iVar17 = iVar20;
      } while (iVar20 != -1);
      goto joined_r0x00014178119c;
    }
  }
LAB_14178123c:
  if (param_4 != '\0') {
    iVar20 = (int)param_3[1];
    puVar7 = (undefined8 *)*param_3;
    if (0 < iVar20 / 2) {
      uVar19 = (ulonglong)(uint)(iVar20 / 2);
      puVar16 = puVar7;
      do {
        iVar20 = iVar20 + -1;
        puVar3 = puVar7 + (longlong)iVar20 * 3;
        if (puVar16 != puVar3) {
          uVar11 = puVar3[1];
          uVar12 = *puVar16;
          uVar13 = puVar16[1];
          uVar5 = puVar16[2];
          *puVar16 = *puVar3;
          puVar16[1] = uVar11;
          puVar16[2] = puVar3[2];
          *puVar3 = uVar12;
          puVar3[1] = uVar13;
          puVar3[2] = uVar5;
        }
        puVar16 = puVar16 + 3;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  return;
}



// FUNCTION 1417812c0 FEditorScriptExecutionGuard body=20 status=ok
// SIG undefined FEditorScriptExecutionGuard(void)

undefined1 * FEditorScriptExecutionGuard::FEditorScriptExecutionGuard(undefined1 *param_1)

{
  *param_1 = DAT_1468b6147;
  DAT_1468b6147 = 1;
  return param_1;
}



// FUNCTION 1417812e0 FUN_1417812e0 body=169 status=ok
// SIG undefined FUN_1417812e0(void)

longlong * FUN_1417812e0(longlong *param_1,longlong param_2,longlong param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 3) = 0xefffff7b;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xff800000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[7] = *(longlong *)(*param_1 + 0x10);
  return param_1;
}



// FUNCTION 141781390 FUN_141781390 body=224 status=ok
// SIG undefined FUN_141781390(void)

undefined8 *
FUN_141781390(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  code *local_18;
  undefined1 *puStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x11) = param_5;
  param_1[3] = param_6;
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xfe;
  param_1[0x28] = 0;
  param_5 = 0;
  puStack_10 = &param_5;
  local_18 = FUN_1406ddef0;
  lVar2 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  *(int *)(lVar2 + 0x5c) = *(int *)(lVar2 + 0x5c) + 1;
  param_1[0x28] = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x60) = *param_1;
  iVar1 = *(int *)(lVar2 + 0x20);
  *(int *)(lVar2 + 0x20) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x24) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(lVar2 + 0x18),iVar1);
  }
  *(undefined8 **)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar1 * 8) = param_1;
  return param_1;
}



// FUNCTION 141781470 FUN_141781470 body=211 status=ok
// SIG undefined FUN_141781470(void)

undefined8 * FUN_141781470(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *puStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xfe;
  param_1[0x28] = 0;
  local_res8[0] = 0;
  puStack_10 = local_res8;
  local_18 = FUN_1406ddef0;
  lVar2 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  *(int *)(lVar2 + 0x5c) = *(int *)(lVar2 + 0x5c) + 1;
  param_1[0x28] = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x60) = *param_1;
  iVar1 = *(int *)(lVar2 + 0x20);
  *(int *)(lVar2 + 0x20) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x24) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(lVar2 + 0x18),iVar1);
  }
  *(undefined8 **)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar1 * 8) = param_1;
  return param_1;
}



// FUNCTION 141781550 FReferenceCollector body=24 status=ok
// SIG undefined FReferenceCollector(void)

undefined8 * FReferenceCollector::FReferenceCollector(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d309f8;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 141781570 FSimpleObjectReferenceCollectorArchive body=133 status=ok
// SIG undefined FSimpleObjectReferenceCollectorArchive(void)

undefined8 *
FSimpleObjectReferenceCollectorArchive::FSimpleObjectReferenceCollectorArchive
          (undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  
  FArchive::FArchive();
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) | 8;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d31130;
  param_1[0x12] = param_2;
  param_1[0x15] = param_3;
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3);
  FArchive::SetIsPersistent(param_1,uVar1);
  bVar2 = (**(code **)(*param_3 + 8))(param_3);
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xdf;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | (bVar2 & 1) << 5;
  return param_1;
}



// FUNCTION 141781600 FSoftObjectPath body=77 status=ok
// SIG undefined FSoftObjectPath(void)

undefined8 * FSoftObjectPath::FSoftObjectPath(undefined8 *param_1,longlong param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    local_18 = 0;
    local_10 = 0;
    UObjectBaseUtility::GetPathName(param_2,0,&local_18);
    FUN_1417978e0(param_1,&local_18);
  }
  return param_1;
}



// FUNCTION 141781650 FUN_141781650 body=300 status=ok
// SIG undefined FUN_141781650(void)

int * FUN_141781650(int *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  param_1[2] = -1;
  param_1[3] = -1;
  param_1[0] = 0;
  param_1[1] = 0;
  if ((*(byte *)(param_3 + 5) & 1) != 0) {
    piVar2 = *(int **)param_3[1];
    if ((int *)((undefined8 *)param_3[1])[1] < piVar2 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,param_1,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,param_1,4);
      }
    }
    else {
      *param_1 = *piVar2;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    piVar2 = *(int **)param_3[1];
    if ((int *)((undefined8 *)param_3[1])[1] < piVar2 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,param_1 + 1,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,param_1 + 1,4);
      }
    }
    else {
      param_1[1] = *piVar2;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    if (0 < param_1[1]) {
      uVar3 = (**(code **)(*param_3 + 0x90))(param_3);
      *(undefined8 *)(param_1 + 2) = uVar3;
    }
    iVar1 = *param_1;
    *(undefined4 *)(param_2 + 0x50) = 0;
    if (*(int *)(param_2 + 0x54) != iVar1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo();
    }
    *(undefined4 *)(param_2 + 0x80) = 0;
    if (*(int *)(param_2 + 0x84) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2 + 0x78,0);
    }
  }
  return param_1;
}



// FUNCTION 141781780 FUObjectArray body=186 status=ok
// SIG undefined FUObjectArray(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUObjectArray::FUObjectArray(undefined4 *param_1)

{
  param_1[1] = 0xffffffff;
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xc),4000);
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x60),4000);
  param_1[0x6a] = 1000;
  _DAT_1468c21e0 = &DAT_1469e91b0;
  return param_1;
}



// FUNCTION 141781840 FUN_141781840 body=121 status=ok
// SIG undefined FUN_141781840(void)

undefined8 * FUN_141781840(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_143f3f648;
  UObject::EnsureNotRetrievingVTablePtr();
  if (((undefined8 *)*param_2 != (undefined8 *)0x0) && ((undefined8 *)*param_2 != param_1)) {
    LowLevelFatalErrorHandler
              ("Unknown",0xa81,
               L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
              );
    FDebug::AssertFailed
              (&DAT_144d28d1f,"Unknown",0xa81,
               L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
              );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  return param_1;
}



// FUNCTION 1417818c0 FUN_1417818c0 body=386 status=ok
// SIG undefined FUN_1417818c0(void)

undefined8 * FUN_1417818c0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  code *local_18;
  undefined1 *puStack_10;
  
  *param_1 = &PTR_FUN_143f3f648;
  UObject::EnsureNotRetrievingVTablePtr();
  puStack_10 = local_res8;
  local_res8[0] = 0;
  local_18 = FUN_1406ddef0;
  lVar1 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  if (*(int *)(lVar1 + 0x20) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x18) + -8 + (longlong)*(int *)(lVar1 + 0x20) * 8)
    ;
    if (plVar2 != (longlong *)0x0) goto LAB_1417819e8;
  }
  local_res10 = param_1[3];
  FName::ToString(&local_res10,&local_18);
  pcVar3 = (code *)&DAT_143f3eda8;
  if ((int)puStack_10 != 0) {
    pcVar3 = local_18;
  }
  LowLevelFatalErrorHandler
            ("Unknown",0xa76,
             L"%s is not being constructed with either NewObject, NewNamedObject or ConstructObject."
             ,pcVar3);
  if (local_18 != (code *)0x0) {
    FMemory::Free();
  }
  local_res10 = param_1[3];
  FName::ToString(&local_res10,&local_18);
  pcVar3 = (code *)&DAT_143f3eda8;
  if ((int)puStack_10 != 0) {
    pcVar3 = local_18;
  }
  FDebug::AssertFailed
            (&DAT_144d28d17,"Unknown",0xa76,
             L"%s is not being constructed with either NewObject, NewNamedObject or ConstructObject."
             ,pcVar3);
  if (local_18 != (code *)0x0) {
    FMemory::Free();
  }
LAB_1417819e8:
  if (((undefined8 *)*plVar2 != (undefined8 *)0x0) && ((undefined8 *)*plVar2 != param_1)) {
    LowLevelFatalErrorHandler
              ("Unknown",0xa78,
               L"UObject() constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
              );
    FDebug::AssertFailed
              (&DAT_144d28d1e,"Unknown",0xa78,
               L"UObject() constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
              );
  }
  *plVar2 = (longlong)param_1;
  *(undefined1 *)((longlong)plVar2 + 0x12) = 0;
  return param_1;
}



// FUNCTION 141781a50 UObjectBase body=38 status=ok
// SIG undefined UObjectBase(void)

undefined8 * UObjectBase::UObjectBase(undefined8 *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  *param_1 = &PTR_FUN_144d1a9e8;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 141781a80 FUN_141781a80 body=78 status=ok
// SIG undefined FUN_141781a80(void)

undefined8 *
FUN_141781a80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5,undefined8 param_6)

{
  FUN_14174d7e0(param_1,param_2,0,param_4,param_5 | 0x8001040000200);
  param_1[0xe] = param_6;
  *param_1 = &PTR__scalar_deleting_destructor__144d25038;
  *(undefined4 *)((longlong)param_1 + 0x34) = 8;
  return param_1;
}



// FUNCTION 141781ad0 USoftObjectProperty body=78 status=ok
// SIG undefined USoftObjectProperty(void)

undefined8 *
USoftObjectProperty::USoftObjectProperty
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          ulonglong param_5,undefined8 param_6)

{
  FUN_14174d7e0(param_1,param_2,0,param_4,param_5 | 0x8000000000000);
  param_1[0xe] = param_6;
  *param_1 = &PTR__scalar_deleting_destructor__144d25b00;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x28;
  return param_1;
}



// FUNCTION 141781b20 FUN_141781b20 body=69 status=ok
// SIG undefined FUN_141781b20(void)

undefined8 *
FUN_141781b20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  FUN_14174d7e0(param_1,param_2,0,param_4,param_5 | 0x8001040000200);
  *(undefined4 *)((longlong)param_1 + 0x34) = 8;
  *param_1 = &PTR_FUN_144d24498;
  return param_1;
}



// FUNCTION 141781b70 ~FUObjectAnnotationSparse<FBoolAnnotation,1> body=306 status=ok
// SIG undefined ~FUObjectAnnotationSparse<FBoolAnnotation,1>(void)

void FUObjectAnnotationSparse<FBoolAnnotation,1>::~FUObjectAnnotationSparse<FBoolAnnotation,1>
               (undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d309d8;
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  }
  uVar6 = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  iVar1 = *(int *)(param_1 + 2);
  iVar2 = *(int *)((longlong)param_1 + 0x3c);
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 1,0);
  }
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 3,0);
  }
  if (0 < (int)*(uint *)(param_1 + 10)) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 10);
    do {
      puVar5 = (undefined8 *)param_1[9];
      if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
        puVar5 = param_1 + 8;
      }
      uVar4 = (longlong)*(int *)(param_1 + 10) - 1U & uVar6;
      uVar6 = uVar6 + 1;
      *(undefined4 *)((longlong)puVar5 + uVar4 * 4) = 0xffffffff;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (0 < iVar1 - iVar2) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
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
  return;
}



// FUNCTION 141781cb0 ~FUObjectAnnotationSparse<FDuplicatedObject,0> body=161 status=ok
// SIG undefined ~FUObjectAnnotationSparse<FDuplicatedObject,0>(void)

void FUObjectAnnotationSparse<FDuplicatedObject,0>::~FUObjectAnnotationSparse<FDuplicatedObject,0>
               (undefined8 *param_1)

{
  BOOL BVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d31120;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 1,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
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
  return;
}



// FUNCTION 141781d60 FUN_141781d60 body=442 status=ok
// SIG undefined FUN_141781d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141781d60(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  BOOL BVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_144d31110;
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  }
  local_58 = 0xffffffff;
  puVar1 = param_1 + 0x11;
  param_1[0x10] = 0;
  local_50 = 0;
  local_40 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  if (puVar1 != &local_88) {
    TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::operator=(puVar1,&local_88);
    lVar4 = local_48;
    if (local_48 == 0) {
      _guard_xfg_dispatch_icall_nop(param_1 + 0x18,&local_50,4);
    }
    if (param_1[0x19] != 0) {
      FMemory::Free();
    }
    param_1[0x19] = lVar4;
    *(undefined4 *)(param_1 + 0x1a) = (undefined4)local_40;
  }
  local_48 = 0;
  local_40 = local_40 & 0xffffffff00000000;
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  iVar2 = *(int *)(param_1 + 2);
  iVar3 = *(int *)((longlong)param_1 + 0x3c);
  TSet<TTuple<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 1,0);
  if (0 < iVar2 - iVar3) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (puVar1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 1,0);
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 141781f20 ~TArray<FUObjectCluster,FDefaultAllocator> body=137 status=ok
// SIG undefined ~TArray<FUObjectCluster,FDefaultAllocator>(void)

void TArray<FUObjectCluster,FDefaultAllocator>::~TArray<FUObjectCluster,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x28);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-2] != 0) {
        FMemory::Free();
      }
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 10;
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



// FUNCTION 141781fb0 ~FEditorScriptExecutionGuard body=10 status=ok
// SIG undefined ~FEditorScriptExecutionGuard(void)

void FEditorScriptExecutionGuard::~FEditorScriptExecutionGuard(undefined1 *param_1)

{
  DAT_1468b6147 = *param_1;
  return;
}



// FUNCTION 141781fc0 FUN_141781fc0 body=266 status=ok
// SIG undefined FUN_141781fc0(void)

void FUN_141781fc0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *puStack_10;
  
  if ((*(byte *)(param_1 + 0x29) & 1) == 0) {
    puStack_10 = local_res8;
    local_res8[0] = 0;
    local_18 = FUN_1406ddef0;
    lVar3 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + -1;
    *(int *)(lVar3 + 0x5c) = *(int *)(lVar3 + 0x5c) + -1;
    *(longlong *)(lVar3 + 0x60) = param_1[0x28];
    lVar3 = *param_1;
  }
  else {
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_141782095;
  }
  plVar1 = *(longlong **)(lVar3 + 0x10);
  plVar4 = (longlong *)UObject::GetPrivateStaticClass();
  if (((plVar1 != plVar4) && (param_1[1] == 0)) && (plVar1[2] != 0)) {
    lVar3 = plVar1[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar3 = plVar1[0x1f];
    }
    param_1[1] = lVar3;
  }
  cVar2 = FUN_1416fba20();
  if (cVar2 == '\0') {
    lVar3 = FUN_1416efc30(param_1);
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x148) = *(byte *)(lVar3 + 0x148) | 1;
      goto LAB_141782095;
    }
  }
  FUN_141792d90(param_1);
LAB_141782095:
  if (param_1[0x26] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1417820d0 ~FReferenceCollector body=69 status=ok
// SIG undefined ~FReferenceCollector(void)

void FReferenceCollector::~FReferenceCollector(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d309f8;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014178210c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 141782120 FUN_141782120 body=427 status=ok
// SIG undefined FUN_141782120(void)

void FUN_141782120(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  *param_1 = &PTR_FUN_144d1a9e8;
  if (((DAT_1469e7e13 != '\0') && (param_1[2] != 0)) && (DAT_1468c2174 == '\0')) {
    lVar9 = 0;
    FUN_1417a8df0();
    param_1[3] = 0;
    FUN_1417a6460(param_1);
    iVar4 = *(int *)((longlong)param_1 + 0xc);
    uVar7 = iVar4 >> 0x1f & 0xffff;
    uVar5 = iVar4 + uVar7;
    lVar2 = (longlong)((int)uVar5 >> 0x10) * 8;
    lVar3 = (longlong)(int)((uVar5 & 0xffff) - uVar7) * 0x18;
    plVar1 = (longlong *)(lVar3 + *(longlong *)(lVar2 + DAT_1469e91b0));
    LOCK();
    puVar6 = (undefined8 *)*plVar1;
    if (param_1 == puVar6) {
      *plVar1 = 0;
      puVar6 = param_1;
    }
    UNLOCK();
    if (puVar6 == (undefined8 *)0x0) {
      LowLevelFatalErrorHandler("Unknown",0xd4,L"Unexpected concurency while adding new object");
      FDebug::AssertFailed
                (&DAT_144d2898b,"Unknown",0xd4,L"Unexpected concurency while adding new object");
    }
    lVar8 = (longlong)(DAT_1469e9318 + -1);
    if (-1 < DAT_1469e9318 + -1) {
      do {
        plVar1 = *(longlong **)(DAT_1469e9310 + lVar8 * 8);
        (**(code **)(*plVar1 + 8))(plVar1,param_1,iVar4);
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
    }
    if ((DAT_1469e91a4 < iVar4) && (DAT_1468c2185 == '\0')) {
      lVar8 = lVar9;
      if (iVar4 < (int)DAT_1469e91c4) {
        lVar8 = *(longlong *)(lVar2 + DAT_1469e91b0) + lVar3;
      }
      *(undefined8 *)(lVar8 + 8) = 0;
      *(undefined4 *)(lVar8 + 0x10) = 0;
      uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
      if (uVar5 != 0) {
        lVar9 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
      }
      *(longlong *)(lVar9 + 8) = (longlong)iVar4;
      FLockFreePointerListLIFORoot<128,1>::Push(&DAT_1469e91f8);
    }
  }
  return;
}



// FUNCTION 1417822d0 operator= body=506 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<UTexture2D_const_*,FTextureInstanceView::FTextureDesc>,TDefaultMapHashableKeyFuncs<UTexture2D_const_*,FTextureInstanceView::FTextureDesc,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
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
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14178242b;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_14178242b:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
        ::Emplace<TTuple<UObject_*,FSparseItemInfo>_const_&>
                  (param_1,local_res8,*param_2 + (longlong)iStack_4c * 0x18,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 1417824d0 operator= body=506 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::operator=
          (longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
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
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14178262b;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_14178262b:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        Emplace<TTuple<FName,float>_const_&>
                  (param_1,local_res8,*param_2 + (longlong)iStack_4c * 0x18,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 1417826d0 operator= body=109 status=ok
// SIG undefined operator=(void)

undefined8 * FSoftObjectPath::operator=(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = param_2 + 1;
  plVar2 = param_1 + 1;
  *param_1 = *param_2;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    param_2[2] = 0;
  }
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141782740 operator<< body=146 status=ok
// SIG undefined operator<<(void)

longlong FArchiveScriptReferenceCollector::operator<<(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_2 == 0) {
    return param_1;
  }
  plVar3 = *(longlong **)(param_1 + 0x90);
  plVar4 = (longlong *)*plVar3;
  iVar2 = (int)plVar3[1];
  plVar1 = plVar4 + iVar2;
  while( true ) {
    if (plVar4 == plVar1) {
      *(int *)(plVar3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3);
      }
      *(longlong *)((longlong)iVar2 * 8 + *plVar3) = *param_2;
      return param_1;
    }
    if (*plVar4 == *param_2) break;
    plVar4 = plVar4 + 1;
  }
  return param_1;
}



// FUNCTION 1417827e0 operator<< body=268 status=ok
// SIG undefined operator<<(void)

longlong FPersistentFrameCollectorArchive::operator<<(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (*param_2 == 0) {
    return param_1;
  }
  if (((*(uint *)(*param_2 + 8) >> 0x18 & 1) == 0) &&
     (lVar1 = *(longlong *)(param_1 + 0x78), lVar1 != 0)) {
    lVar5 = UObjectProperty::GetPrivateStaticClass();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x30))
                          (*(longlong **)(param_1 + 0xa8),param_2), cVar4 != '\0')) {
      return param_1;
    }
  }
  if (*param_2 == 0) {
    return param_1;
  }
  plVar2 = *(longlong **)(param_1 + 0xa8);
  uVar6 = (**(code **)(*plVar2 + 0x28))(plVar2);
  (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined8 *)(param_1 + 0x78));
  (**(code **)(*plVar2 + 0x38))
            (plVar2,param_2,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x78));
  (**(code **)(*plVar2 + 0x20))(plVar2,uVar6);
  return param_1;
}



// FUNCTION 1417828f0 operator<< body=126 status=ok
// SIG undefined operator<<(void)

longlong FSimpleObjectReferenceCollectorArchive::operator<<(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0xa8);
    uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 *)(param_1 + 0x78));
    (**(code **)(*plVar1 + 0x38))
              (plVar1,param_2,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x78));
    (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
  }
  return param_1;
}



// FUNCTION 141782970 operator== body=70 status=ok
// SIG undefined operator==(void)

undefined8 FSoftObjectPath::operator==(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  if (*param_1 == *param_2) {
    puVar2 = &DAT_143f3eda8;
    if ((int)param_2[2] == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)param_2[1];
    }
    if ((int)param_1[2] != 0) {
      puVar2 = (undefined2 *)param_1[1];
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1417829c0 FUN_1417829c0 body=150 status=ok
// SIG undefined FUN_1417829c0(void)

void FUN_1417829c0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int local_res8 [2];
  undefined8 *local_res10;
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_2,local_res8,param_1[2]);
  if ((local_res8[0] == -1) || (lVar1 = *param_2 + (longlong)local_res8[0] * 0x18, lVar1 == 0)) {
    local_res10 = param_1 + 2;
    TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<VkImage_T_*_const_&>_>(param_2,local_res8,&local_res10,0);
    lVar1 = *param_2 + (longlong)local_res8[0] * 0x18;
  }
  (**(code **)param_1[1])(((undefined8 *)param_1[1])[1],(undefined4 *)(lVar1 + 8));
  *(undefined4 *)*param_1 = *(undefined4 *)(lVar1 + 8);
  return;
}



// FUNCTION 141782a60 FUN_141782a60 body=124 status=ok
// SIG undefined FUN_141782a60(void)

undefined8 * FUN_141782a60(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x68);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_1440104d0;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(puVar2 + 2) = DVar1;
    *puVar2 = &PTR__scalar_deleting_destructor__144d30d90;
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



// FUNCTION 141782ae0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FUObjectAnnotationSparse<FDuplicatedObject,0>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~FUObjectAnnotationSparse<FDuplicatedObject,0>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 141782b20 FUN_141782b20 body=52 status=ok
// SIG undefined FUN_141782b20(void)

undefined8 FUN_141782b20(undefined8 param_1,ulonglong param_2)

{
  FUN_141781d60();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 141782b60 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TDefaultReferenceCollector<FClusterReferenceProcessor,0,0>::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d309f8;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141782bc0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneEvaluationTemplateGenerator::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 3);
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 141782c30 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FFrame::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d30b60;
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 141782c80 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPersistentFrameCollectorArchive::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FArchive::~FArchive();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 141782cc0 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FReferenceCollector::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d309f8;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141782d20 FUN_141782d20 body=633 status=ok
// SIG undefined FUN_141782d20(void)

void FUN_141782d20(longlong *param_1,undefined4 *param_2,longlong param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined4 *local_res10;
  undefined4 *local_res20;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_res10 = param_2;
  uVar5 = (*(code *)*param_4)(param_4[1],&local_res10);
  local_48 = *param_5;
  uStack_44 = param_5[1];
  uStack_40 = param_5[2];
  uStack_3c = param_5[3];
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    param_5 = param_2;
    iVar6 = (*(code *)*param_4)(param_4[1],&param_5);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    iVar6 = *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar6) * 4);
    if (iVar6 != -1) {
      uVar2 = CONCAT44(uStack_3c,uStack_40);
      pcVar1 = (code *)CONCAT44(uStack_44,local_48);
      do {
        puVar13 = (undefined4 *)((longlong)(*(int *)(param_3 + 0x18) * iVar6) + *param_1);
        local_res20 = param_2;
        param_5 = puVar13;
        cVar4 = (*pcVar1)(uVar2,&local_res20,&param_5);
        if (cVar4 != '\0') goto LAB_141782e18;
        iVar6 = *(int *)((longlong)*(int *)(param_3 + 4) + (longlong)puVar13);
      } while (iVar6 != -1);
    }
  }
  iVar6 = -1;
LAB_141782e18:
  puVar3 = param_6;
  if (iVar6 != -1) {
    lVar12 = (longlong)(*(int *)(param_3 + 0x18) * iVar6) + *param_1;
    param_5 = (undefined4 *)lVar12;
    (*(code *)*param_7)(param_7[1],&param_5);
    param_5 = (undefined4 *)lVar12;
    (*(code *)*puVar3)(puVar3[1],&param_5);
    return;
  }
  iVar6 = FScriptSparseArray::AddUninitialized(param_1,param_3 + 0x10);
  lVar12 = (longlong)(*(int *)(param_3 + 0x18) * iVar6) + *param_1;
  param_5 = (undefined4 *)lVar12;
  (*(code *)*puVar3)(puVar3[1],&param_5);
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar7 < 4) {
    iVar9 = 1;
  }
  else {
    uVar7 = uVar7 >> 1;
    uVar8 = uVar7 + 8;
    iVar9 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar11 = 0x20;
    if (uVar8 != 0) {
      iVar11 = 0x1f - iVar9;
    }
    uVar7 = uVar7 + 7;
    iVar9 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar9 = 1;
    }
    else {
      iVar9 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar9) & 0x1f);
    }
  }
  iVar11 = (int)param_1[9];
  if ((iVar11 != 0) && (iVar9 <= iVar11)) {
    uVar5 = iVar11 - 1U & uVar5;
    uVar14 = (longlong)iVar11 - 1U & (longlong)(int)uVar5;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(uint *)(*(int *)(param_3 + 8) + lVar12) = uVar5;
    *(undefined4 *)(*(int *)(param_3 + 4) + lVar12) =
         *(undefined4 *)((longlong)plVar10 + uVar14 * 4);
    *(int *)((longlong)plVar10 + uVar14 * 4) = iVar6;
    return;
  }
  local_48 = *(undefined4 *)param_4;
  uStack_44 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_40 = *(undefined4 *)(param_4 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
  FScriptSet::Rehash(param_1,param_3,&local_48);
  return;
}



// FUNCTION 141782fa0 FUN_141782fa0 body=206 status=ok
// SIG undefined FUN_141782fa0(void)

void FUN_141782fa0(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  *(undefined8 *)(param_1 + 0x18) = param_2;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar8 = DVar3 == DAT_1468c21c0;
    if (!bVar8) goto LAB_141782fe6;
  }
  bVar8 = true;
LAB_141782fe6:
  uVar4 = *(uint *)(param_1 + 8);
  uVar7 = param_3 | 0x4000000;
  if (bVar8) {
    uVar7 = param_3;
  }
  if ((char)uVar4 < '\0') {
    uVar7 = uVar7 | 0x40000000;
    uVar4 = uVar4 & 0xffffff7f;
    *(uint *)(param_1 + 8) = uVar4;
  }
  if ((uVar4 & 4) != 0) {
    uVar7 = uVar7 | 0x2000000;
    *(uint *)(param_1 + 8) = uVar4 & 0xfffffffb;
  }
  AllocateUObjectIndexForCurrentThread(param_1);
  if (uVar7 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | uVar7;
  }
  FUN_1417a6460(param_1);
  return;
}



// FUNCTION 141783070 FUN_141783070 body=2127 status=ok
// SIG undefined FUN_141783070(void)

void FUN_141783070(uint *param_1,uint param_2,ulonglong param_3,longlong *param_4,longlong *param_5,
                  char param_6)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint local_res8 [2];
  uint local_res10 [2];
  
  if (param_2 != *param_1) {
    uVar12 = 0;
    do {
      if (*(int *)(param_3 + 0xc) != 0) {
        return;
      }
      uVar4 = *(uint *)((longlong)param_4 + 0xc);
      if ((int)uVar4 <= DAT_1469e91a4) {
        return;
      }
      uVar5 = uVar12;
      if ((int)uVar4 < (int)DAT_1469e91c4) {
        uVar7 = uVar4 & 0xffff;
        if ((int)uVar4 < 0) {
          uVar4 = uVar4 + 0xffff;
          uVar7 = uVar7 - 0x10000;
        }
        uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)uVar7 * 0x18;
      }
      if ((*(uint *)(uVar5 + 8) >> 0x1e & 1) != 0) {
        return;
      }
      iVar1 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
      }
      *(longlong **)(*param_5 + (longlong)iVar1 * 8) = param_4;
      *(uint *)(param_3 + 0xc) = *param_1;
      lVar11 = *(longlong *)(param_1 + 2);
      iVar1 = *(int *)(lVar11 + 0x10);
      *(int *)(lVar11 + 0x10) = iVar1 + 1;
      if (*(int *)(lVar11 + 0x14) < iVar1 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar11 + 8,iVar1);
      }
      *(uint *)(*(longlong *)(lVar11 + 8) + (longlong)iVar1 * 4) = param_2;
      if (param_6 == '\0') {
        return;
      }
      plVar2 = (longlong *)param_4[4];
      if (plVar2 != (longlong *)0x0) {
        uVar4 = *(uint *)((longlong)plVar2 + 0xc);
        uVar5 = uVar12;
        if ((int)uVar4 < (int)DAT_1469e91c4) {
          uVar8 = uVar4 & 0xffff;
          uVar7 = uVar4;
          if ((int)uVar4 < 0) {
            uVar7 = uVar4 + 0xffff;
            uVar8 = uVar8 - 0x10000;
          }
          uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                  (longlong)(int)uVar8 * 0x18;
        }
        uVar7 = *(uint *)(uVar5 + 0xc);
        if (uVar7 != *param_1) {
          bVar6 = *(byte *)(uVar5 + 0xb) & 1;
          if ((bVar6 == 0) && (uVar7 == 0)) {
            if (DAT_1469e91a4 < (int)uVar4) {
              cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
              if ((cVar3 != '\0') && ((*(uint *)(plVar2 + 1) & 0x1400) == 0)) {
                uVar4 = *(uint *)((longlong)plVar2 + 0xc);
                uVar9 = uVar12;
                if ((int)uVar4 < (int)DAT_1469e91c4) {
                  uVar8 = uVar4 & 0xffff;
                  uVar7 = uVar4;
                  if ((int)uVar4 < 0) {
                    uVar7 = uVar4 + 0xffff;
                    uVar8 = uVar8 - 0x10000;
                  }
                  uVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                          (longlong)(int)uVar8 * 0x18;
                }
                if ((*(uint *)(uVar9 + 8) >> 0x1e & 1) == 0) {
                  FUN_141783070(param_1,uVar4,uVar5,plVar2,param_5,1);
                  goto LAB_1417833e6;
                }
              }
              local_res10[0] = *(uint *)((longlong)plVar2 + 0xc);
              TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                        (*(longlong *)(param_1 + 2) + 0x28,local_res10);
            }
          }
          else if (DAT_1469e8638 == 0) {
            local_res10[0] = uVar4;
            if (bVar6 == 0) {
              local_res10[0] = uVar7;
            }
            uVar5 = uVar12;
            uVar4 = local_res10[0];
            if ((int)local_res10[0] < (int)DAT_1469e91c4) {
              uVar7 = local_res10[0] & 0xffff;
              if ((int)local_res10[0] < 0) {
                uVar4 = local_res10[0] + 0xffff;
                uVar7 = uVar7 - 0x10000;
              }
              uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                      (longlong)(int)uVar7 * 0x18;
              uVar4 = (int)uVar4 >> 0x10;
            }
            lVar11 = (longlong)(int)~*(uint *)(uVar5 + 0xc) * 0x50 + DAT_1469e8f10;
            TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                      (*(longlong *)(param_1 + 2) + 0x18,local_res10,uVar4,param_5);
            TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                      (lVar11 + 0x38,param_1);
            puVar10 = *(uint **)(lVar11 + 0x18);
            uVar5 = (longlong)*(int *)(lVar11 + 0x20) & 0x3fffffffffffffff;
            if (puVar10 + *(int *)(lVar11 + 0x20) < puVar10) {
              uVar5 = uVar12;
            }
            uVar9 = uVar12;
            if (uVar5 != 0) {
              do {
                local_res8[0] = *puVar10;
                if (local_res8[0] != *param_1) {
                  TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                            (*(longlong *)(param_1 + 2) + 0x18,local_res8);
                }
                puVar10 = puVar10 + 1;
                uVar9 = uVar9 + 1;
              } while (uVar9 != uVar5);
            }
            puVar10 = *(uint **)(lVar11 + 0x28);
            uVar5 = (longlong)*(int *)(lVar11 + 0x30) & 0x3fffffffffffffff;
            if (puVar10 + *(int *)(lVar11 + 0x30) < puVar10) {
              uVar5 = uVar12;
            }
            uVar9 = uVar12;
            if (uVar5 != 0) {
              do {
                local_res8[0] = *puVar10;
                TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                          (*(longlong *)(param_1 + 2) + 0x28,local_res8);
                uVar9 = uVar9 + 1;
                puVar10 = puVar10 + 1;
              } while (uVar9 != uVar5);
            }
          }
          else {
            FClusterReferenceProcessor::MergeCluster(param_1,uVar5,plVar2);
          }
        }
      }
LAB_1417833e6:
      plVar2 = (longlong *)param_4[2];
      if ((*(uint *)((longlong)plVar2 + 0xb4) >> 7 & 1) != 0) {
        return;
      }
      if (plVar2 != (longlong *)0x0) {
        uVar4 = *(uint *)((longlong)plVar2 + 0xc);
        uVar5 = uVar12;
        if ((int)uVar4 < (int)DAT_1469e91c4) {
          uVar8 = uVar4 & 0xffff;
          uVar7 = uVar4;
          if ((int)uVar4 < 0) {
            uVar7 = uVar4 + 0xffff;
            uVar8 = uVar8 - 0x10000;
          }
          uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                  (longlong)(int)uVar8 * 0x18;
        }
        uVar7 = *(uint *)(uVar5 + 0xc);
        if (uVar7 != *param_1) {
          bVar6 = *(byte *)(uVar5 + 0xb) & 1;
          if ((bVar6 == 0) && (uVar7 == 0)) {
            if (DAT_1469e91a4 < (int)uVar4) {
              cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
              if ((cVar3 != '\0') && ((*(uint *)(plVar2 + 1) & 0x1400) == 0)) {
                uVar4 = *(uint *)((longlong)plVar2 + 0xc);
                uVar9 = uVar12;
                if ((int)uVar4 < (int)DAT_1469e91c4) {
                  uVar8 = uVar4 & 0xffff;
                  uVar7 = uVar4;
                  if ((int)uVar4 < 0) {
                    uVar7 = uVar4 + 0xffff;
                    uVar8 = uVar8 - 0x10000;
                  }
                  uVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                          (longlong)(int)uVar8 * 0x18;
                }
                if ((*(uint *)(uVar9 + 8) >> 0x1e & 1) == 0) {
                  FUN_141783070(param_1,uVar4,uVar5,plVar2,param_5,1);
                  goto LAB_141783652;
                }
              }
              local_res10[0] = *(uint *)((longlong)plVar2 + 0xc);
              TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                        (*(longlong *)(param_1 + 2) + 0x28,local_res10);
            }
          }
          else if (DAT_1469e8638 == 0) {
            local_res10[0] = uVar4;
            if (bVar6 == 0) {
              local_res10[0] = uVar7;
            }
            uVar5 = uVar12;
            if ((int)local_res10[0] < (int)DAT_1469e91c4) {
              uVar7 = local_res10[0] & 0xffff;
              uVar4 = local_res10[0];
              if ((int)local_res10[0] < 0) {
                uVar4 = local_res10[0] + 0xffff;
                uVar7 = uVar7 - 0x10000;
              }
              uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                      (longlong)(int)uVar7 * 0x18;
            }
            lVar11 = (longlong)(int)~*(uint *)(uVar5 + 0xc) * 0x50 + DAT_1469e8f10;
            TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                      (*(longlong *)(param_1 + 2) + 0x18,local_res10);
            TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                      (lVar11 + 0x38,param_1);
            puVar10 = *(uint **)(lVar11 + 0x18);
            uVar5 = (longlong)*(int *)(lVar11 + 0x20) & 0x3fffffffffffffff;
            if (puVar10 + *(int *)(lVar11 + 0x20) < puVar10) {
              uVar5 = uVar12;
            }
            uVar9 = uVar12;
            if (uVar5 != 0) {
              do {
                local_res8[0] = *puVar10;
                if (local_res8[0] != *param_1) {
                  TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                            (*(longlong *)(param_1 + 2) + 0x18,local_res8);
                }
                puVar10 = puVar10 + 1;
                uVar9 = uVar9 + 1;
              } while (uVar9 != uVar5);
            }
            puVar10 = *(uint **)(lVar11 + 0x28);
            uVar5 = (longlong)*(int *)(lVar11 + 0x30) & 0x3fffffffffffffff;
            if (puVar10 + *(int *)(lVar11 + 0x30) < puVar10) {
              uVar5 = uVar12;
            }
            uVar9 = uVar12;
            if (uVar5 != 0) {
              do {
                local_res8[0] = *puVar10;
                TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                          (*(longlong *)(param_1 + 2) + 0x28,local_res8);
                uVar9 = uVar9 + 1;
                puVar10 = puVar10 + 1;
              } while (uVar9 != uVar5);
            }
          }
          else {
            FClusterReferenceProcessor::MergeCluster(param_1,uVar5,plVar2,param_5);
          }
        }
      }
LAB_141783652:
      param_4 = *(longlong **)(param_4[2] + 0x20);
      if (param_4 == (longlong *)0x0) {
        return;
      }
      uVar4 = *(uint *)((longlong)param_4 + 0xc);
      param_3 = uVar12;
      if ((int)uVar4 < (int)DAT_1469e91c4) {
        uVar8 = uVar4 & 0xffff;
        uVar7 = uVar4;
        if ((int)uVar4 < 0) {
          uVar7 = uVar4 + 0xffff;
          uVar8 = uVar8 - 0x10000;
        }
        param_3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                  (longlong)(int)uVar8 * 0x18;
      }
      uVar7 = *(uint *)(param_3 + 0xc);
      if (uVar7 == *param_1) {
        return;
      }
      bVar6 = *(byte *)(param_3 + 0xb) & 1;
      if ((bVar6 != 0) || (uVar7 != 0)) {
        if (DAT_1469e8638 != 0) {
          FClusterReferenceProcessor::MergeCluster(param_1,param_3,param_4,param_5);
          return;
        }
        local_res10[0] = uVar4;
        if (bVar6 == 0) {
          local_res10[0] = uVar7;
        }
        uVar5 = uVar12;
        if ((int)local_res10[0] < (int)DAT_1469e91c4) {
          uVar7 = (int)local_res10[0] >> 0x1f & 0xffff;
          uVar4 = local_res10[0] + uVar7;
          uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                  (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
        }
        lVar11 = (longlong)(int)~*(uint *)(uVar5 + 0xc) * 0x50 + DAT_1469e8f10;
        TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                  (*(longlong *)(param_1 + 2) + 0x18,local_res10);
        TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                  (lVar11 + 0x38,param_1);
        puVar10 = *(uint **)(lVar11 + 0x18);
        uVar5 = (longlong)*(int *)(lVar11 + 0x20) & 0x3fffffffffffffff;
        if (puVar10 + *(int *)(lVar11 + 0x20) < puVar10) {
          uVar5 = uVar12;
        }
        uVar9 = uVar12;
        if (uVar5 != 0) {
          do {
            local_res8[0] = *puVar10;
            if (local_res8[0] != *param_1) {
              TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                        (*(longlong *)(param_1 + 2) + 0x18,local_res8);
            }
            puVar10 = puVar10 + 1;
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar5);
        }
        puVar10 = *(uint **)(lVar11 + 0x28);
        uVar5 = (longlong)*(int *)(lVar11 + 0x30) & 0x3fffffffffffffff;
        if (puVar10 + *(int *)(lVar11 + 0x30) < puVar10) {
          uVar5 = uVar12;
        }
        if (uVar5 == 0) {
          return;
        }
        do {
          local_res8[0] = *puVar10;
          TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                    (*(longlong *)(param_1 + 2) + 0x28,local_res8);
          uVar12 = uVar12 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar12 != uVar5);
        return;
      }
      if ((int)uVar4 <= DAT_1469e91a4) {
        return;
      }
      cVar3 = (**(code **)(*param_4 + 0x20))(param_4);
      if ((cVar3 == '\0') || ((*(uint *)(param_4 + 1) & 0x1400) != 0)) {
LAB_141783753:
        local_res10[0] = *(uint *)((longlong)param_4 + 0xc);
        TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                  (*(longlong *)(param_1 + 2) + 0x28,local_res10);
        return;
      }
      param_2 = *(uint *)((longlong)param_4 + 0xc);
      uVar5 = uVar12;
      if ((int)param_2 < (int)DAT_1469e91c4) {
        uVar7 = param_2 & 0xffff;
        uVar4 = param_2;
        if ((int)param_2 < 0) {
          uVar4 = param_2 + 0xffff;
          uVar7 = uVar7 - 0x10000;
        }
        uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)uVar7 * 0x18;
      }
      if ((*(uint *)(uVar5 + 8) >> 0x1e & 1) != 0) goto LAB_141783753;
      param_6 = '\x01';
    } while (param_2 != *param_1);
  }
  return;
}



// FUNCTION 1417838c0 AddPIEPackageName body=39 status=ok
// SIG undefined AddPIEPackageName(void)

void FSoftObjectPath::AddPIEPackageName(undefined8 param_1)

{
  undefined8 local_res8;
  undefined1 local_res10 [24];
  
  local_res8 = param_1;
  FUN_140800100(&DAT_1464b5890,local_res10,&local_res8,0);
  return;
}



// FUNCTION 1417838f0 FUN_1417838f0 body=198 status=ok
// SIG undefined FUN_1417838f0(void)

int FUN_1417838f0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  iVar4 = param_2 + -1 + iVar2;
  iVar5 = (int)(iVar4 + (iVar4 >> 0x1f & 0xffffU)) >> 0x10;
  iVar4 = iVar2;
  if (*(int *)((longlong)param_1 + 0x1c) <= iVar5) {
    do {
      lVar3 = *param_1;
      lVar6 = operator_new(0x180000);
      lVar9 = 0;
      if (lVar6 != 0) {
        lVar8 = 0x10000;
        lVar7 = lVar6 + 0xc;
        do {
          *(undefined8 *)(lVar7 + -0xc) = 0;
          *(undefined8 *)(lVar7 + -4) = 0;
          *(undefined4 *)(lVar7 + 4) = 0;
          lVar7 = lVar7 + 0x18;
          lVar8 = lVar8 + -1;
          lVar9 = lVar6;
        } while (lVar8 != 0);
      }
      plVar1 = (longlong *)(lVar3 + (longlong)iVar5 * 8);
      LOCK();
      bVar10 = *plVar1 == 0;
      if (bVar10) {
        *plVar1 = lVar9;
      }
      UNLOCK();
      iVar4 = *(int *)((longlong)param_1 + 0x1c);
      if (bVar10) {
        iVar4 = iVar4 + 1;
        *(int *)((longlong)param_1 + 0x1c) = iVar4;
      }
    } while (iVar4 <= iVar5);
    iVar4 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar4 + param_2;
  return iVar2;
}



// FUNCTION 1417839c0 FUN_1417839c0 body=1492 status=ok
// SIG undefined FUN_1417839c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1417839c0(longlong *param_1,undefined8 param_2,char param_3)

{
  void *_Src;
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  undefined1 local_1f0;
  longlong local_1e8;
  int local_1e0 [2];
  int *local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  int *local_1a8;
  longlong local_1a0;
  int **local_198;
  longlong local_190;
  undefined8 local_108;
  _RTL_CRITICAL_SECTION local_80;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  piVar4 = (int *)FUObjectClusterContainer::GetObjectCluster(&DAT_1469e8f10);
  if (piVar4 == (int *)0x0) {
    return;
  }
  if (param_3 != '\0') {
    iVar11 = *(int *)((longlong)param_1 + 0xc);
    iVar12 = 0;
    iVar6 = -1;
    if (0 < piVar4[0xc]) {
      lVar13 = 0;
      do {
        if (iVar6 != -1) {
          return;
        }
        if (iVar11 < *(int *)(lVar13 + *(longlong *)(piVar4 + 10))) {
          iVar6 = piVar4[0xc];
          piVar4[0xc] = iVar6 + 1;
          if (piVar4[0xd] < iVar6 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(piVar4 + 10,iVar6);
          }
          _Src = (void *)(*(longlong *)(piVar4 + 10) + (longlong)iVar12 * 4);
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)_Src + 4),_Src,(longlong)(iVar6 - iVar12) << 2);
          *(int *)(lVar13 + *(longlong *)(piVar4 + 10)) = iVar11;
          iVar6 = iVar12;
        }
        else if (*(int *)(lVar13 + *(longlong *)(piVar4 + 10)) == iVar11) {
          iVar6 = iVar12;
        }
        iVar12 = iVar12 + 1;
        lVar13 = lVar13 + 4;
      } while (iVar12 < piVar4[0xc]);
      if (iVar6 != -1) {
        return;
      }
    }
    iVar6 = piVar4[0xc];
    piVar4[0xc] = iVar6 + 1;
    if (piVar4[0xd] < iVar6 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(piVar4 + 10,iVar6);
    }
    *(int *)(*(longlong *)(piVar4 + 10) + (longlong)iVar6 * 4) = iVar11;
    return;
  }
  local_1e0[0] = *piVar4;
  local_1d8 = piVar4;
  if (DAT_1469e76c0 == 0) {
    DAT_1469e76c0 = FUN_1417380b0();
  }
  local_1a8 = local_1e0;
  uVar14 = 0;
  local_198 = &local_1a8;
  local_108 = 0;
  local_1a0 = DAT_1469e76c0;
  local_190 = DAT_1469e76c0;
  InitializeCriticalSection(&local_80);
  SetCriticalSectionSpinCount(&local_80,4000);
  piVar4 = local_1d8;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  if (param_1 == (longlong *)0x0) goto LAB_141783ea4;
  iVar11 = *(int *)((longlong)param_1 + 0xc);
  uVar10 = uVar14;
  if (iVar11 < (int)DAT_1469e91c4) {
    uVar9 = iVar11 >> 0x1f & 0xffff;
    uVar3 = iVar11 + uVar9;
    uVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
             (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
  }
  iVar6 = *(int *)(uVar10 + 0xc);
  if (iVar6 == local_1e0[0]) goto LAB_141783ea4;
  bVar5 = *(byte *)(uVar10 + 0xb) & 1;
  if ((bVar5 == 0) && (iVar6 == 0)) {
    if (iVar11 <= DAT_1469e91a4) goto LAB_141783ea4;
    cVar2 = (**(code **)(*param_1 + 0x20))(param_1);
    piVar4 = local_1d8;
    if ((cVar2 != '\0') && ((*(uint *)(param_1 + 1) & 0x1400) == 0)) {
      iVar11 = *(int *)((longlong)param_1 + 0xc);
      if (iVar11 < (int)DAT_1469e91c4) {
        uVar9 = iVar11 >> 0x1f & 0xffff;
        uVar3 = iVar11 + uVar9;
        uVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                 (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
      }
      if ((*(uint *)(uVar14 + 8) >> 0x1e & 1) == 0) {
        local_1f8 = &local_1d0;
        local_1f0 = 1;
        FUN_141783070(local_1e0,iVar11,uVar10,param_1);
        goto LAB_141783e33;
      }
    }
    iVar11 = *(int *)((longlong)param_1 + 0xc);
    piVar1 = *(int **)(local_1d8 + 10);
    iVar6 = local_1d8[0xc];
    for (piVar7 = piVar1; piVar7 != piVar1 + iVar6; piVar7 = piVar7 + 1) {
      if (*piVar7 == iVar11) {
        if ((int)((longlong)piVar7 - (longlong)piVar1 >> 2) != -1) goto LAB_141783e33;
        break;
      }
    }
    local_1d8[0xc] = iVar6 + 1;
    if (local_1d8[0xd] < iVar6 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(local_1d8 + 10,iVar6);
    }
    *(int *)((longlong)iVar6 * 4 + *(longlong *)(piVar4 + 10)) = iVar11;
  }
  else if (DAT_1469e8638 == 0) {
    if (bVar5 == 0) {
      iVar11 = iVar6;
    }
    uVar10 = uVar14;
    if (iVar11 < (int)DAT_1469e91c4) {
      uVar9 = iVar11 >> 0x1f & 0xffff;
      uVar3 = iVar11 + uVar9;
      uVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
               (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
    }
    piVar1 = *(int **)(local_1d8 + 6);
    iVar6 = local_1d8[8];
    lVar13 = (longlong)(int)~*(uint *)(uVar10 + 0xc) * 0x50 + DAT_1469e8f10;
    for (piVar7 = piVar1; local_1e8 = lVar13, piVar7 != piVar1 + iVar6; piVar7 = piVar7 + 1) {
      if (*piVar7 == iVar11) {
        if ((int)((longlong)piVar7 - (longlong)piVar1 >> 2) != -1) goto LAB_141783cea;
        break;
      }
    }
    local_1d8[8] = iVar6 + 1;
    if (local_1d8[9] < iVar6 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(local_1d8 + 6);
    }
    *(int *)((longlong)iVar6 * 4 + *(longlong *)(piVar4 + 6)) = iVar11;
LAB_141783cea:
    TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
              (lVar13 + 0x38,local_1e0);
    piVar4 = *(int **)(lVar13 + 0x18);
    uVar10 = (longlong)*(int *)(lVar13 + 0x20) & 0x3fffffffffffffff;
    if (piVar4 + *(int *)(lVar13 + 0x20) < piVar4) {
      uVar10 = uVar14;
    }
    uVar15 = uVar14;
    if (uVar10 != 0) {
      do {
        piVar1 = local_1d8;
        iVar11 = *piVar4;
        if (iVar11 != local_1e0[0]) {
          piVar7 = *(int **)(local_1d8 + 6);
          iVar6 = local_1d8[8];
          for (piVar8 = piVar7; piVar8 != piVar7 + iVar6; piVar8 = piVar8 + 1) {
            if (*piVar8 == iVar11) {
              if ((int)((longlong)piVar8 - (longlong)piVar7 >> 2) != -1) goto LAB_141783d87;
              break;
            }
          }
          local_1d8[8] = iVar6 + 1;
          if (local_1d8[9] < iVar6 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(local_1d8 + 6);
          }
          *(int *)(*(longlong *)(piVar1 + 6) + (longlong)iVar6 * 4) = iVar11;
        }
LAB_141783d87:
        piVar4 = piVar4 + 1;
        uVar15 = uVar15 + 1;
        lVar13 = local_1e8;
      } while (uVar15 != uVar10);
    }
    piVar4 = *(int **)(lVar13 + 0x28);
    uVar10 = (longlong)*(int *)(lVar13 + 0x30) & 0x3fffffffffffffff;
    if (piVar4 + *(int *)(lVar13 + 0x30) < piVar4) {
      uVar10 = uVar14;
    }
    if (uVar10 != 0) {
      do {
        piVar8 = local_1d8;
        iVar11 = *piVar4;
        piVar1 = *(int **)(local_1d8 + 10);
        iVar6 = local_1d8[0xc];
        for (piVar7 = piVar1; piVar7 != piVar1 + iVar6; piVar7 = piVar7 + 1) {
          if (*piVar7 == iVar11) {
            if ((int)((longlong)piVar7 - (longlong)piVar1 >> 2) != -1) goto LAB_141783e1f;
            break;
          }
        }
        local_1d8[0xc] = iVar6 + 1;
        if (local_1d8[0xd] < iVar6 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(local_1d8 + 10,iVar6);
        }
        *(int *)(*(longlong *)(piVar8 + 10) + (longlong)iVar6 * 4) = iVar11;
LAB_141783e1f:
        piVar4 = piVar4 + 1;
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar10);
    }
  }
  else {
    FClusterReferenceProcessor::MergeCluster(local_1e0,uVar10,param_1,&local_1d0);
  }
LAB_141783e33:
  if ((int)local_1c8 != 0) {
    local_1e8 = 0;
    FUN_141794370(&local_1a8,&local_1d0,&local_1e8);
    if (local_1e8 != 0) {
      LOCK();
      piVar4 = (int *)(local_1e8 + 0x48);
      iVar11 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        FGraphEvent::Recycle(local_1e8);
      }
    }
  }
  if (local_1c0 != 0) {
    FMemory::Free();
  }
  if (local_1d0 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
LAB_141783ea4:
  DeleteCriticalSection(&local_80);
  return;
}



// FUNCTION 141783fa0 AddUObjectDeleteListener body=139 status=ok
// SIG undefined AddUObjectDeleteListener(void)

void FUObjectArray::AddUObjectDeleteListener(longlong param_1,undefined8 param_2)

{
  int iVar1;
  BOOL BVar2;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  }
  iVar1 = *(int *)(param_1 + 0x178);
  *(int *)(param_1 + 0x178) = iVar1 + 1;
  if (*(int *)(param_1 + 0x17c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x170,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x170) + (longlong)iVar1 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000141784024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  return;
}



// FUNCTION 141784030 AddUninitialized body=276 status=ok
// SIG undefined AddUninitialized(void)

int FScriptSparseArray::AddUninitialized(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    uVar4 = *(undefined4 *)(param_2 + 8);
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      FScriptArray::ResizeGrow(param_1,iVar5,uVar4);
    }
    iVar1 = (int)param_1[5];
    *(int *)(param_1 + 5) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x2c) < iVar1 + 1) {
      FScriptBitArray::ReallocGrow(param_1 + 2,iVar1);
    }
    plVar6 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar6 = param_1 + 2;
    }
    puVar2 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) * 4
                     );
    *puVar2 = *puVar2 & ~(1 << ((byte)iVar1 & 0x1f));
  }
  else {
    iVar5 = (int)param_1[6];
    iVar3 = *(int *)((longlong)(iVar5 * *(int *)(param_2 + 8)) + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)(*(int *)(param_2 + 8) * iVar3) + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
  return iVar5;
}



// FUNCTION 141784150 AllocateCluster body=161 status=ok
// SIG undefined AllocateCluster(void)

int FUObjectClusterContainer::AllocateCluster(longlong *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((int)param_1[3] == 0) {
    iVar2 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    puVar1 = (undefined4 *)((longlong)iVar2 * 0x50 + *param_1);
    *puVar1 = 0xffffffff;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 10) = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined1 *)(puVar1 + 0x12) = 0;
  }
  else {
    iVar2 = *(int *)(param_1[2] + -4 + (longlong)(int)param_1[3] * 4);
    *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x50) = param_2;
  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  return iVar2;
}



// FUNCTION 141784200 AllocateObjectPool body=379 status=ok
// SIG undefined AllocateObjectPool(void)

void FUObjectArray::AllocateObjectPool(int *param_1,int param_2,int param_3,char param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = 0;
  param_1[2] = param_3;
  *param_1 = (param_3 < 1) - 1;
  if (param_2 < 1) {
    LowLevelFatalErrorHandler
              ("Unknown",0x28,
               L"Max UObject count is invalid. It must be a number that is greater than 0.");
    FDebug::AssertFailed
              (&DAT_144d2873f,"Unknown",0x28,
               L"Max UObject count is invalid. It must be a number that is greater than 0.");
  }
  iVar6 = ((int)((param_2 >> 0x1f & 0xffffU) + param_2) >> 0x10) + 1;
  param_1[10] = iVar6;
  param_1[8] = iVar6 * 0x10000;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)iVar6;
  uVar3 = SUB168(ZEXT816(8) * auVar1,0);
  if (SUB168(ZEXT816(8) * auVar1,8) != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  _Dst = (void *)operator_new(uVar3);
  *(void **)(param_1 + 4) = _Dst;
  ::_guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)param_1[10] << 3);
  if (param_4 != '\0') {
    uVar10 = (ulonglong)param_1[8];
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar10;
    uVar3 = SUB168(ZEXT816(0x18) * auVar2,0);
    if (SUB168(ZEXT816(0x18) * auVar2,8) != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    uVar4 = operator_new(uVar3);
    uVar5 = uVar9;
    if ((uVar4 != 0) && (uVar5 = uVar4, uVar10 != 0)) {
      lVar7 = uVar4 + 0xc;
      do {
        *(undefined8 *)(lVar7 + -0xc) = 0;
        *(undefined8 *)(lVar7 + -4) = 0;
        *(undefined4 *)(lVar7 + 4) = 0;
        lVar7 = lVar7 + 0x18;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    *(ulonglong *)(param_1 + 6) = uVar5;
    iVar6 = param_1[10];
    uVar10 = uVar9;
    uVar5 = uVar9;
    if (0 < iVar6) {
      do {
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        *(longlong *)(uVar10 + *(longlong *)(param_1 + 4)) =
             *(longlong *)(param_1 + 6) + (longlong)(int)uVar5 * 0x18;
        iVar6 = param_1[10];
        uVar10 = uVar10 + 8;
        uVar5 = (ulonglong)((int)uVar5 + 0x10000);
      } while ((int)uVar8 < iVar6);
    }
    param_1[0xb] = iVar6;
  }
  if (0 < param_1[2]) {
    FUN_1417838f0(param_1 + 4);
  }
  return;
}



// FUNCTION 141784380 FUN_141784380 body=181 status=ok
// SIG undefined FUN_141784380(void)

int FUN_141784380(longlong param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 < *(int *)(param_1 + 0x24)) {
    uVar4 = param_2 >> 0x1f & 0xffff;
    uVar2 = param_2 + uVar4;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
  }
  else {
    lVar6 = 0;
  }
  iVar5 = *(int *)(lVar6 + 0x10);
  if (*(int *)(lVar6 + 0x10) == 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x1a8);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    iVar5 = iVar5 + 1;
    if (iVar5 < 0x3e9) {
      LowLevelFatalErrorHandler
                ("Unknown",0x147,
                 L"UObject serial numbers overflowed (trying to allocate serial number %d).",iVar5);
      FDebug::AssertFailed
                (&DAT_144d28a3a,"Unknown",0x147,
                 L"UObject serial numbers overflowed (trying to allocate serial number %d).",iVar5);
    }
    LOCK();
    iVar3 = *(int *)(lVar6 + 0x10);
    bVar7 = iVar3 == 0;
    if (bVar7) {
      *(int *)(lVar6 + 0x10) = iVar5;
      iVar3 = 0;
    }
    UNLOCK();
    if (!bVar7) {
      iVar5 = iVar3;
    }
  }
  return iVar5;
}



// FUNCTION 141784440 AllocateUObject body=131 status=ok
// SIG undefined AllocateUObject(void)

void FUObjectAllocator::AllocateUObject(int *param_1,int param_2,undefined8 param_3,char param_4)

{
  bool bVar1;
  ulonglong uVar2;
  
  if ((param_4 == '\0') ||
     ((ulonglong)((longlong)*param_1 + *(longlong *)(param_1 + 2)) <
      (*(longlong *)(param_1 + 4) + 0xfU & 0xfffffffffffffff0) + (longlong)param_2)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (param_4 == '\0') {
    if (bVar1) goto LAB_1417844a2;
  }
  else {
    if (bVar1) {
LAB_1417844a2:
      uVar2 = (longlong)param_2 + (*(longlong *)(param_1 + 4) + 0xfU & 0xfffffffffffffff0);
      *(ulonglong *)(param_1 + 4) = uVar2;
      if (*(ulonglong *)(param_1 + 6) < uVar2) {
        *(ulonglong *)(param_1 + 6) = uVar2;
        return;
      }
      return;
    }
    *(ulonglong *)(param_1 + 6) =
         (*(longlong *)(param_1 + 6) + 0xfU & 0xfffffffffffffff0) + (longlong)param_2;
  }
  FMemory::Malloc((longlong)(int)(param_2 + 0xfU & 0xfffffff0),0);
  return;
}



// FUNCTION 1417844d0 FUN_1417844d0 body=543 status=ok
// SIG undefined FUN_1417844d0(void)

void FUN_1417844d0(int *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  BOOL BVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  bool bVar12;
  ulonglong uVar11;
  
  if (((char)param_1[3] == '\0') || (param_1[2] < 1)) {
    uVar9 = FUN_141594c40(param_1 + 0x16);
    if (uVar9 != 0) {
      uVar11 = *(ulonglong *)
                ((&DAT_1468a81f8)[uVar9 >> 0xe] + 8 + (ulonglong)(uVar9 & 0x3fff) * 0x18);
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar9);
      if (uVar11 != 0) goto LAB_14178460d;
    }
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
    }
    uVar9 = FUN_1417838f0(param_1 + 4,1);
  }
  else {
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
    }
    iVar10 = param_1[2];
    uVar9 = param_1[1] + 1;
    param_1[1] = uVar9;
    uVar7 = uVar9;
    if ((iVar10 <= (int)uVar9) && (-1 < *param_1)) {
      LowLevelFatalErrorHandler
                ("Unknown",0x8f,L"Unable to add more objects to disregard for GC pool (Max: %d)");
      FDebug::AssertFailed
                (&DAT_144d28983,"Unknown",0x8f,
                 L"Unable to add more objects to disregard for GC pool (Max: %d)",param_1[2]);
      iVar10 = param_1[2];
      uVar7 = param_1[1];
    }
    if (iVar10 <= (int)uVar7) {
      uVar9 = FUN_1417838f0(param_1 + 4,1);
      uVar7 = param_1[1];
      iVar10 = param_1[2];
    }
    iVar6 = uVar7 + 1;
    if ((int)(uVar7 + 1) <= iVar10) {
      iVar6 = iVar10;
    }
    param_1[2] = iVar6;
  }
  uVar11 = (ulonglong)uVar9;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
LAB_14178460d:
  iVar10 = (int)uVar11;
  *(int *)(param_2 + 0xc) = iVar10;
  uVar7 = iVar10 >> 0x1f & 0xffff;
  uVar9 = iVar10 + uVar7;
  lVar2 = (longlong)((int)uVar9 >> 0x10) * 8;
  lVar3 = (longlong)(int)((uVar9 & 0xffff) - uVar7) * 0x18;
  plVar1 = (longlong *)(lVar3 + *(longlong *)(lVar2 + *(longlong *)(param_1 + 4)));
  LOCK();
  bVar12 = *plVar1 == 0;
  if (bVar12) {
    *plVar1 = param_2;
  }
  UNLOCK();
  if (!bVar12) {
    LowLevelFatalErrorHandler("Unknown",0xb9,L"Unexpected concurency while adding new object");
    FDebug::AssertFailed
              (&DAT_144d2898a,"Unknown",0xb9,L"Unexpected concurency while adding new object");
  }
  uVar8 = 0;
  uVar5 = uVar8;
  if (iVar10 < param_1[9]) {
    uVar5 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 4)) + lVar3;
  }
  *(undefined8 *)(uVar5 + 8) = 0;
  *(undefined4 *)(uVar5 + 0x10) = 0;
  uVar5 = uVar8;
  if (0 < param_1[0x5a]) {
    do {
      (**(code **)(**(longlong **)(uVar5 + *(longlong *)(param_1 + 0x58)) + 8))
                (*(longlong **)(uVar5 + *(longlong *)(param_1 + 0x58)),param_2,uVar11 & 0xffffffff);
      uVar9 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar9;
      uVar5 = uVar5 + 8;
    } while ((int)uVar9 < param_1[0x5a]);
  }
  return;
}



// FUNCTION 1417846f0 FUN_1417846f0 body=158 status=ok
// SIG undefined FUN_1417846f0(void)

void FUN_1417846f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 local_res18 [16];
  code *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res18;
  local_res18[0] = 0;
  local_18 = FUN_1406ddef0;
  lVar1 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  if ((*(int *)(lVar1 + 0x5c) != 0) && (param_1 == *(longlong *)(lVar1 + 0x60))) {
    LowLevelFatalErrorHandler("Unknown",0xce1,&DAT_144d2c230,param_2);
    FDebug::AssertFailed(&DAT_144d28f43,"Unknown",0xce1,&DAT_144d2c240,param_2);
  }
  return;
}



// FUNCTION 141784790 FUN_141784790 body=278 status=ok
// SIG undefined FUN_141784790(void)

void FUN_141784790(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong local_18 [2];
  
  bVar1 = false;
  if (*(char *)((longlong)param_1 + 0x12) == '\0') {
    pwVar3 = L"";
    if (*param_1 == 0) {
      pwVar4 = L"NULL";
    }
    else {
      puVar2 = (undefined8 *)UObjectBaseUtility::GetFullName(*param_1,local_18,0);
      if (*(int *)(puVar2 + 1) == 0) {
        pwVar4 = L"";
        bVar1 = true;
      }
      else {
        pwVar4 = (wchar_t *)*puVar2;
        bVar1 = true;
      }
    }
    LowLevelFatalErrorHandler
              ("Unknown",0xc98,
               L"%s.%s: Subobject class setup is only allowed in base class constructor call (in the initialization list)"
               ,pwVar4,param_2);
    if (bVar1) {
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    bVar1 = false;
    if (*param_1 == 0) {
      pwVar3 = L"NULL";
    }
    else {
      bVar1 = true;
      puVar2 = (undefined8 *)UObjectBaseUtility::GetFullName(*param_1,local_18,0);
      if (*(int *)(puVar2 + 1) != 0) {
        pwVar3 = (wchar_t *)*puVar2;
      }
    }
    FDebug::AssertFailed
              (&DAT_144d28f42,"Unknown",0xc98,
               L"%s.%s: Subobject class setup is only allowed in base class constructor call (in the initialization list)"
               ,pwVar3,param_2);
    if ((bVar1) && (local_18[0] != 0)) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1417848b0 FUN_1417848b0 body=114 status=ok
// SIG undefined FUN_1417848b0(void)

void FUN_1417848b0(void)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res10;
  local_res10[0] = 0;
  local_18 = FUN_1406ddef0;
  lVar2 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  if (*(int *)(lVar2 + 0x30) == 0) {
    cVar1 = (*(code *)PTR_CanBeUsedOnAnyThread_1464a8df0)();
    if (cVar1 == '\0') {
      (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
      FUN_1416f7d70(0xffffffff);
    }
    *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
    return;
  }
  *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
  return;
}



// FUNCTION 141784930 FUN_141784930 body=11 status=ok
// SIG undefined FUN_141784930(void)

void FUN_141784930(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1417586f0(*param_1,*param_2);
  return;
}



// FUNCTION 141784940 thunk_FUN_1417829c0 body=5 status=ok
// SIG undefined thunk_FUN_1417829c0(void)

void thunk_FUN_1417829c0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int aiStackX_8 [2];
  undefined8 *puStackX_10;
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_2,aiStackX_8,param_1[2]);
  if ((aiStackX_8[0] == -1) || (lVar1 = *param_2 + (longlong)aiStackX_8[0] * 0x18, lVar1 == 0)) {
    puStackX_10 = param_1 + 2;
    TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<VkImage_T_*_const_&>_>(param_2,aiStackX_8,&puStackX_10,0);
    lVar1 = *param_2 + (longlong)aiStackX_8[0] * 0x18;
  }
  (**(code **)param_1[1])(((undefined8 *)param_1[1])[1],(undefined4 *)(lVar1 + 8));
  *(undefined4 *)*param_1 = *(undefined4 *)(lVar1 + 8);
  return;
}



// FUNCTION 1417849a0 FUN_1417849a0 body=93 status=ok
// SIG undefined FUN_1417849a0(void)

void FUN_1417849a0(longlong *param_1,undefined8 *param_2)

{
  void *_Dst;
  longlong *plVar1;
  
  _Dst = (void *)*param_2;
  plVar1 = (longlong *)*param_1;
  if ((*(uint *)(plVar1 + 7) >> 9 & 1) == 0) {
    (**(code **)(*plVar1 + 0x330))(plVar1,_Dst);
  }
  else {
    _guard_xfg_dispatch_icall_nop
              (_Dst,0,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
  }
                    /* WARNING: Could not recover jumptable at 0x0001417849f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x300))((longlong *)*param_1,_Dst,param_1[1]);
  return;
}



// FUNCTION 141784a00 FUN_141784a00 body=22 status=ok
// SIG undefined FUN_141784a00(void)

void FUN_141784a00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000141784a0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x2b8))((longlong *)*param_1,*param_2,*param_3,0);
  return;
}



// FUNCTION 141784a20 FUN_141784a20 body=74 status=ok
// SIG undefined FUN_141784a20(void)

void FUN_141784a20(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong local_res8;
  
  lVar1 = *param_2;
  local_res8 = *(int *)((longlong)param_1 + 0x24) + lVar1;
  (*(code *)param_1[2])(param_1[3],&local_res8);
  local_res8 = *(int *)(param_1 + 4) + lVar1;
  (*(code *)*param_1)(param_1[1],&local_res8);
  return;
}



// FUNCTION 141784a70 FUN_141784a70 body=74 status=ok
// SIG undefined FUN_141784a70(void)

void FUN_141784a70(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong local_res8;
  
  lVar1 = *param_2;
  local_res8 = *(int *)(param_1 + 4) + lVar1;
  (*(code *)*param_1)(param_1[1],&local_res8);
  local_res8 = *(int *)((longlong)param_1 + 0x24) + lVar1;
  (*(code *)param_1[2])(param_1[3],&local_res8);
  return;
}



// FUNCTION 141784ac0 FUN_141784ac0 body=1476 status=ok
// SIG undefined FUN_141784ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_141784ac0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong *plVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  void *pvVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  longlong lVar19;
  longlong **pplVar20;
  void *_Dst;
  char cVar21;
  undefined1 local_168 [48];
  char local_138 [8];
  longlong local_130;
  longlong local_128;
  undefined4 local_120;
  undefined2 local_11c;
  undefined1 local_11a;
  uint local_118;
  longlong local_110;
  longlong *local_108;
  undefined **local_f8;
  undefined2 local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_58;
  
  puVar18 = local_168;
  puVar16 = local_168;
  local_58 = DAT_1468387a8 ^ (ulonglong)local_138;
  local_110 = param_3;
  local_108 = param_1;
  if ((*(uint *)(param_4 + 0x88) & 0x400) == 0) {
    local_d0 = (void *)(**(code **)(*(longlong *)param_1[2] + 0x310))
                                 ((longlong *)param_1[2],param_1,param_4);
    cVar21 = local_d0 != (void *)0x0;
    pvVar14 = (void *)0x0;
    puVar17 = local_168;
    local_138[0] = cVar21;
    if (local_d0 == (void *)0x0) {
      iVar4 = *(int *)(param_4 + 0x40);
      if (iVar4 != 0) {
        uVar15 = (longlong)(iVar4 + 0xf) + 0xf;
        if (uVar15 <= (ulonglong)(longlong)(iVar4 + 0xf)) {
          uVar15 = 0xffffffffffffff0;
        }
        puVar16 = local_168 + -(uVar15 & 0xfffffffffffffff0);
        pvVar14 = (void *)((longlong)&local_130 + -(uVar15 & 0xfffffffffffffff0));
      }
      *(undefined8 *)(puVar16 + -8) = 0x141784d7c;
      _guard_xfg_dispatch_icall_nop(pvVar14,0,(longlong)iVar4);
      puVar17 = puVar16;
      local_d0 = pvVar14;
    }
    local_f8 = &PTR__scalar_deleting_destructor__144d30b60;
    pplVar20 = &local_80;
    local_d8 = *(undefined8 *)(param_4 + 0x48);
    local_78 = *(longlong *)(param_4 + 0x38);
    local_f0 = 0x100;
    local_c8 = 0;
    uStack_c0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_80 = (longlong *)0x0;
    local_70 = 0;
    local_68 = 0;
    puVar18 = puVar17;
    local_e8 = param_4;
    local_e0 = param_1;
    local_88 = param_2;
    if ((*(uint *)(param_4 + 0x88) & 0x400000) != 0) {
      local_120 = 0xffffffff;
      local_11c = 0x101;
      local_11a = 0;
      local_130 = param_4;
      local_128 = local_78;
      *(undefined8 *)(puVar17 + -8) = 0x141784e14;
      FUN_140472e10(&local_130);
      while (local_128 != 0) {
        if ((*(uint *)(local_128 + 0x38) >> 10 & 1) != 0) {
          puVar18 = puVar17 + -0x30;
          local_80 = (longlong *)((ulonglong)(puVar17 + 0xf) & 0xfffffffffffffff0);
          local_80[1] = local_110;
          *local_80 = local_128;
          break;
        }
        local_128 = *(longlong *)(local_128 + 0x28);
        *(undefined8 *)(puVar17 + -8) = 0x141784e3b;
        FUN_140472e10(&local_130);
      }
    }
    pcVar7 = *(char **)(param_2 + 0x20);
    plVar8 = *(longlong **)(param_4 + 0x38);
    cVar2 = *pcVar7;
    while (cVar2 != '\x16') {
      *(undefined8 *)(param_2 + 0x38) = 0;
      uVar15 = plVar8[7];
      if ((uVar15 >> 10 & 1) == 0) {
        if ((uVar15 >> 8 & 1) == 0) {
          pvVar14 = (void *)((longlong)*(int *)((longlong)plVar8 + 0x44) + (longlong)local_d0);
          if ((uVar15 >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar8 + 0x330);
            *(undefined8 *)(puVar18 + -8) = 0x141784f49;
            (*pcVar5)(plVar8,pvVar14);
          }
          else {
            iVar4 = *(int *)((longlong)plVar8 + 0x34);
            lVar12 = plVar8[6];
            *(undefined8 *)(puVar18 + -8) = 0x141784f38;
            _guard_xfg_dispatch_icall_nop(pvVar14,0,(longlong)(iVar4 * (int)lVar12));
          }
          bVar1 = **(byte **)(param_2 + 0x20);
          *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
          uVar6 = *(undefined8 *)(param_2 + 0x18);
          pcVar5 = (code *)(&DAT_1469e7e20)[bVar1];
          *(undefined8 *)(puVar18 + -8) = 0x141784f68;
          (*pcVar5)(uVar6,param_2,pvVar14);
        }
        else {
          bVar1 = **(byte **)(param_2 + 0x20);
          *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
          uVar6 = *(undefined8 *)(param_2 + 0x18);
          pcVar5 = (code *)(&DAT_1469e7e20)[bVar1];
          *(undefined8 *)(puVar18 + -8) = 0x141784ecd;
          (*pcVar5)(uVar6,param_2,0);
          lVar12 = *(longlong *)(param_2 + 0x38);
          plVar13 = (longlong *)((ulonglong)(puVar18 + 0xf) & 0xfffffffffffffff0);
          if (lVar12 == 0) {
            lVar12 = (longlong)*(int *)((longlong)plVar8 + 0x44) + (longlong)local_d0;
          }
          plVar13[1] = lVar12;
          *plVar13 = (longlong)plVar8;
          if (*pplVar20 == (longlong *)0x0) {
            *pplVar20 = plVar13;
            puVar18 = puVar18 + -0x30;
          }
          else {
            (*pplVar20)[2] = (longlong)plVar13;
            pplVar20 = (longlong **)(*pplVar20 + 2);
            puVar18 = puVar18 + -0x30;
          }
        }
      }
      pcVar7 = *(char **)(param_2 + 0x20);
      plVar8 = (longlong *)plVar8[5];
      cVar21 = local_138[0];
      param_1 = local_108;
      cVar2 = *pcVar7;
    }
    *(char **)(param_2 + 0x20) = pcVar7 + 1;
    if (cVar21 == '\0') {
      for (plVar8 = *(longlong **)(param_4 + 0x98); plVar8 != (longlong *)0x0;
          plVar8 = (longlong *)plVar8[5]) {
        if ((*(uint *)(plVar8 + 7) >> 9 & 1) == 0) {
          pcVar5 = *(code **)(*plVar8 + 0x330);
          *(undefined8 *)(puVar18 + -8) = 0x141784fd9;
          (*pcVar5)(plVar8);
        }
        else {
          iVar4 = *(int *)((longlong)plVar8 + 0x34);
          lVar12 = plVar8[6];
          pvVar14 = (void *)((longlong)*(int *)((longlong)plVar8 + 0x44) + (longlong)local_d0);
          *(undefined8 *)(puVar18 + -8) = 0x141784fc3;
          _guard_xfg_dispatch_icall_nop(pvVar14,0,(longlong)(iVar4 * (int)lVar12));
        }
      }
    }
    lVar12 = local_110;
    if (((*(uint *)(param_4 + 0x88) & 0x400) != 0) || (0 < *(int *)(param_4 + 0x50))) {
      *(undefined8 *)(puVar18 + -8) = 0x141785005;
      FUN_141793f30(param_1,&local_f8,lVar12);
    }
    if (cVar21 == '\0') {
      for (plVar8 = *(longlong **)(param_4 + 0x68); plVar8 != (longlong *)0x0;
          plVar8 = (longlong *)plVar8[0xc]) {
        if ((((ulonglong)plVar8[7] >> 8 & 1) == 0) &&
           ((~(byte)((ulonglong)plVar8[7] >> 0x24) & 1) != 0)) {
          lVar12 = (longlong)*(int *)((longlong)plVar8 + 0x44) + (longlong)local_d0;
          pcVar5 = *(code **)(*plVar8 + 0x328);
          *(undefined8 *)(puVar18 + -8) = 0x14178503c;
          (*pcVar5)(plVar8,lVar12);
        }
      }
    }
    local_f8 = &PTR__scalar_deleting_destructor__144d30b60;
    if (local_98 != 0) {
      *(undefined8 *)(puVar18 + -8) = 0x141785061;
      FMemory::Free();
    }
  }
  else {
    uVar3 = *(ushort *)(param_4 + 0x8e);
    pvVar14 = (void *)0x0;
    _Dst = pvVar14;
    if (uVar3 != 0) {
      uVar15 = (ulonglong)uVar3 + 0x1e;
      if (uVar15 <= (ulonglong)uVar3 + 0xf) {
        uVar15 = 0xffffffffffffff0;
      }
      puVar18 = local_168 + -(uVar15 & 0xfffffffffffffff0);
      _Dst = (void *)((longlong)&local_130 + -(uVar15 & 0xfffffffffffffff0));
    }
    pcVar5 = *(code **)(*param_1 + 0x210);
    *(undefined8 *)(puVar18 + -8) = 0x141784b6c;
    uVar10 = (*pcVar5)(param_1,param_4,_Dst,param_2);
    local_118 = uVar10;
    if ((uVar10 & 1) != 0) {
      uVar3 = *(ushort *)(param_4 + 0x8e);
      pvVar14 = *(void **)(param_2 + 0x20);
      *(undefined8 *)(puVar18 + -8) = 0x141784b8f;
      _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)uVar3);
      local_128 = *(longlong *)(param_4 + 0x38);
      local_120 = 0xffffffff;
      local_11c = 0x101;
      local_11a = 0;
      local_130 = param_4;
      *(undefined8 *)(puVar18 + -8) = 0x141784bb5;
      FUN_140472e10(&local_130);
      lVar12 = local_128;
      while ((local_128 = lVar12, lVar12 != 0 &&
             (param_1 = local_108, uVar10 = local_118, (*(uint *)(lVar12 + 0x38) & 0x480) == 0x80)))
      {
        lVar19 = (longlong)*(int *)(lVar12 + 0x44) + (longlong)_Dst;
        *(undefined8 *)(puVar18 + -8) = 0x141784bf0;
        lVar11 = UBoolProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if ((bVar9) && (*(int *)(lVar12 + 0x30) == 1)) {
          local_138[0] = '\0';
          bVar1 = **(byte **)(param_2 + 0x20);
          *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
          uVar6 = *(undefined8 *)(param_2 + 0x18);
          pcVar5 = (code *)(&DAT_1469e7e20)[bVar1];
          *(undefined8 *)(puVar18 + -8) = 0x141784c4b;
          (*pcVar5)(uVar6,param_2,local_138);
          if (local_138[0] != '\0') {
            *(byte *)((ulonglong)*(byte *)(lVar12 + 0x71) + lVar19) =
                 ~*(byte *)(lVar12 + 0x73) & *(byte *)((ulonglong)*(byte *)(lVar12 + 0x71) + lVar19)
                 | *(byte *)(lVar12 + 0x72);
          }
        }
        else {
          bVar1 = **(byte **)(param_2 + 0x20);
          *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
          uVar6 = *(undefined8 *)(param_2 + 0x18);
          pcVar5 = (code *)(&DAT_1469e7e20)[bVar1];
          *(undefined8 *)(puVar18 + -8) = 0x141784c85;
          (*pcVar5)(uVar6,param_2,lVar19);
        }
        local_128 = *(longlong *)(lVar12 + 0x28);
        *(undefined8 *)(puVar18 + -8) = 0x141784c96;
        FUN_140472e10(&local_130);
        param_1 = local_108;
        uVar10 = local_118;
        lVar12 = local_128;
      }
      lVar12 = *param_1;
      uVar6 = *(undefined8 *)(param_2 + 0x78);
      *(longlong *)(puVar18 + 0x20) = param_2;
      pcVar5 = *(code **)(lVar12 + 0x218);
      *(undefined8 *)(puVar18 + -8) = 0x141784cc6;
      (*pcVar5)(param_1,param_4,_Dst,uVar6);
      param_3 = local_110;
    }
    if ((uVar10 & 2) == 0) {
      *(undefined8 *)(puVar18 + -8) = 0x141784d00;
      FUN_141797c80(param_1,param_2,param_3,param_4);
    }
    else {
      if (pvVar14 != (void *)0x0) {
        *(void **)(param_2 + 0x20) = pvVar14;
      }
      *(undefined8 *)(puVar18 + -8) = 0x141784cea;
      FUN_14171e390(param_4,param_1,param_2,param_3);
    }
  }
  *(undefined8 *)(puVar18 + -8) = 0x141785070;
  return;
}



// FUNCTION 141785090 FUN_141785090 body=2809 status=ok
// SIG undefined FUN_141785090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
FUN_141785090(longlong *param_1,short *param_2,undefined8 param_3,longlong param_4,char param_5)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  short *psVar7;
  char cVar8;
  longlong lVar9;
  undefined2 **ppuVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong *_Dst;
  longlong *plVar16;
  undefined1 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  undefined1 auStack_338 [48];
  longlong *local_308;
  undefined2 *local_300;
  undefined2 *local_2f8;
  short *local_2f0;
  longlong local_2e8;
  longlong *local_2e0;
  undefined4 local_2d8;
  undefined2 local_2d4;
  undefined1 local_2d2;
  longlong *local_2d0;
  longlong local_2c8;
  ulonglong local_2c0;
  longlong local_2b8;
  longlong *local_2b0;
  undefined4 local_2a8;
  undefined2 local_2a4;
  undefined1 local_2a2;
  longlong local_2a0;
  longlong *local_298;
  undefined4 local_290;
  undefined2 local_28c;
  undefined1 local_28a;
  longlong local_288;
  longlong *local_280;
  undefined4 local_278;
  undefined2 local_274;
  undefined1 local_272;
  longlong local_270;
  undefined8 local_268;
  longlong local_260;
  undefined8 local_258;
  longlong local_250;
  undefined8 local_248;
  undefined2 *local_240;
  undefined8 local_238;
  longlong local_230;
  longlong local_228;
  undefined1 local_220 [8];
  longlong local_218;
  undefined8 local_210;
  undefined8 local_208;
  longlong *local_200;
  undefined4 *local_1f8;
  longlong *local_1f0;
  undefined4 *local_1e8;
  longlong *local_1e0;
  undefined4 *local_1d8;
  longlong local_1d0 [2];
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [4];
  undefined1 local_d8 [8];
  longlong *local_d0;
  char local_c0;
  undefined4 local_b8 [4];
  undefined1 local_a8 [8];
  longlong *local_a0;
  char local_90;
  undefined4 local_88 [4];
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)&local_308;
  _Dst = (longlong *)0x0;
  local_240 = (undefined2 *)0x0;
  local_238 = 0;
  local_2f0 = param_2;
  local_2d0 = param_1;
  local_208 = param_3;
  cVar8 = FParse::Token(&local_2f0,&local_240,1);
  plVar16 = _Dst;
  puVar17 = auStack_338;
  if (cVar8 != '\0') {
    puVar13 = &DAT_143f3eda8;
    if ((int)local_238 != 0) {
      puVar13 = local_240;
    }
    FName::FName(&local_230,puVar13,0);
    local_308 = (longlong *)0x0;
    puVar17 = auStack_338;
    if (((local_230 != 0) &&
        (lVar9 = FUN_141719c60(param_1[2],local_230,1), puVar17 = auStack_338, local_228 = lVar9,
        lVar9 != 0)) &&
       (((*(uint *)(lVar9 + 0x88) & 0x200) != 0 ||
        (plVar16 = (longlong *)0x0, puVar17 = auStack_338, param_5 != '\0')))) {
      local_2b0 = *(longlong **)(lVar9 + 0x38);
      local_308 = (longlong *)0x0;
      local_2a8 = 0xffffffff;
      local_2a4 = 0x101;
      local_2a2 = 0;
      local_2b8 = lVar9;
      FUN_140472e10(&local_2b8);
      plVar16 = _Dst;
      plVar19 = local_308;
      plVar6 = local_2b0;
      while ((plVar6 != (longlong *)0x0 &&
             (plVar19 = plVar16, (*(uint *)(plVar6 + 7) & 0x480) == 0x80))) {
        local_2b0 = (longlong *)plVar6[5];
        FUN_140472e10(&local_2b8);
        plVar16 = plVar6;
        plVar19 = plVar6;
        plVar6 = local_2b0;
      }
      local_308 = plVar19;
      uVar2 = *(ushort *)(lVar9 + 0x8e);
      puVar17 = auStack_338;
      if (uVar2 != 0) {
        uVar14 = (ulonglong)uVar2 + 0x1e;
        if (uVar14 <= (ulonglong)uVar2 + 0xf) {
          uVar14 = 0xffffffffffffff0;
        }
        _Dst = (longlong *)((longlong)&local_300 + -(uVar14 & 0xfffffffffffffff0));
        puVar17 = auStack_338 + -(uVar14 & 0xfffffffffffffff0);
      }
      local_2b0 = plVar6;
      *(undefined8 *)(puVar17 + -8) = 0x141785226;
      _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)uVar2);
      local_298 = *(longlong **)(lVar9 + 0x38);
      local_290 = 0xffffffff;
      local_28c = 0x101;
      local_28a = 0;
      local_2a0 = lVar9;
      *(undefined8 *)(puVar17 + -8) = 0x14178524b;
      FUN_140472e10(&local_2a0);
      plVar19 = local_298;
      while ((local_298 = plVar19, plVar19 != (longlong *)0x0 && ((char)plVar19[7] < '\0'))) {
        if (((ulonglong)plVar19[7] >> 9 & 1) == 0) {
          iVar20 = *(int *)((longlong)plVar19 + 0x44);
          pcVar4 = *(code **)(*plVar19 + 0x330);
          *(undefined8 *)(puVar17 + -8) = 0x141785276;
          (*pcVar4)(plVar19,(longlong)iVar20 + (longlong)_Dst);
        }
        local_298 = (longlong *)plVar19[5];
        *(undefined8 *)(puVar17 + -8) = 0x141785287;
        FUN_140472e10(&local_2a0);
        plVar19 = local_298;
      }
      local_2e0 = *(longlong **)(lVar9 + 0x38);
      iVar20 = 0;
      local_2d2 = 0;
      local_2d8 = 0xffffffff;
      local_2d4 = 0x101;
      local_2e8 = lVar9;
      *(undefined8 *)(puVar17 + -8) = 0x1417852ba;
      FUN_140472e10(&local_2e8);
      if (local_2e0 != (longlong *)0x0) {
        while (plVar19 = local_2e0, param_1 = local_2d0, (*(uint *)(local_2e0 + 7) & 0x480) == 0x80)
        {
          if ((iVar20 == 0) && (param_4 != 0)) {
            *(undefined8 *)(puVar17 + -8) = 0x1417852fb;
            lVar9 = UObjectPropertyBase::GetPrivateStaticClass();
            if ((*(int *)(plVar19[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar19[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                lVar9 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (!bVar5) goto LAB_14178537c;
            iVar3 = *(int *)(plVar19[0xe] + 0x90);
            if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < iVar3) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)iVar3 * 8) !=
                plVar19[0xe] + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (!bVar5) goto LAB_14178537c;
            iVar3 = *(int *)((longlong)plVar19 + 0x44);
            pcVar4 = *(code **)(*plVar19 + 0x380);
            *(undefined8 *)(puVar17 + -8) = 0x141785377;
            (*pcVar4)(plVar19,(longlong)iVar3 + (longlong)_Dst,param_4);
          }
          else {
LAB_14178537c:
            psVar7 = local_2f0;
            local_300 = (undefined2 *)0x0;
            local_2f8 = (undefined2 *)0x0;
            *(undefined8 *)(puVar17 + -8) = 0x14178539c;
            FParse::Token(&local_2f0,&local_300,1);
            if (plVar19 == plVar16) {
              *(undefined8 *)(puVar17 + -8) = 0x1417853aa;
              lVar9 = UStrProperty::GetPrivateStaticClass();
              if ((*(int *)(plVar19[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar19[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                  lVar9 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if ((bVar5) && (*local_2f0 != 0)) {
                local_2c8 = 0;
                local_2c0 = 0;
                if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
                  lVar9 = -1;
                  do {
                    lVar9 = lVar9 + 1;
                  } while (psVar7[lVar9] != 0);
                  uVar15 = (int)lVar9 + 1;
                  local_2c0 = (ulonglong)uVar15;
                  if (0 < (int)uVar15) {
                    *(undefined8 *)(puVar17 + -8) = 0x141785432;
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
                  }
                  lVar9 = local_2c8;
                  *(undefined8 *)(puVar17 + -8) = 0x141785444;
                  FGenericPlatformString::Memcpy(lVar9,psVar7,(longlong)(int)uVar15 * 2);
                }
                *(undefined8 *)(puVar17 + -8) = 0x141785454;
                ppuVar10 = (undefined2 **)FString::TrimStart(&local_2c8,local_1d0);
                if (&local_300 != ppuVar10) {
                  if (local_300 != (undefined2 *)0x0) {
                    *(undefined8 *)(puVar17 + -8) = 0x14178546e;
                    FMemory::Free();
                  }
                  local_300 = *ppuVar10;
                  *ppuVar10 = (undefined2 *)0x0;
                  local_2f8 = ppuVar10[1];
                  ppuVar10[1] = (undefined2 *)0x0;
                }
                if (local_1d0[0] != 0) {
                  *(undefined8 *)(puVar17 + -8) = 0x14178549b;
                  FMemory::Free();
                }
                if (local_2c8 != 0) {
                  *(undefined8 *)(puVar17 + -8) = 0x1417854a9;
                  FMemory::Free();
                }
              }
            }
            uVar11 = DAT_1468b6160;
            iVar3 = *(int *)((longlong)plVar19 + 0x44);
            puVar13 = &DAT_143f3eda8;
            if ((int)local_2f8 != 0) {
              puVar13 = local_300;
            }
            *(undefined8 *)(puVar17 + -8) = 0x1417854d4;
            cVar8 = FUN_141766f20(plVar19,0,DAT_1468b6160);
            if ((cVar8 == '\0') || (puVar13 == (undefined2 *)0x0)) {
              lVar9 = 0;
            }
            else {
              lVar9 = *plVar19;
              *(undefined8 *)(puVar17 + 0x28) = uVar11;
              *(undefined8 *)(puVar17 + 0x20) = 0;
              pcVar4 = *(code **)(lVar9 + 0x2e0);
              *(undefined8 *)(puVar17 + -8) = 0x1417854ff;
              lVar9 = (*pcVar4)(plVar19,puVar13,(longlong)iVar3 + (longlong)_Dst,0);
            }
            if (lVar9 == 0) {
              local_138 = 0;
              local_130 = 0;
              local_118 = 0;
              local_110 = 0;
              local_108 = 0xffffffff;
              local_104 = 0;
              local_f8 = 0;
              local_f0 = 0;
              *(undefined8 *)(puVar17 + -8) = 0x141785679;
              uVar11 = FText::FromName(local_1c0,&local_230);
              local_e8[0] = 4;
              *(undefined8 *)(puVar17 + -8) = 0x141785692;
              FText::FText(local_d8,uVar11);
              local_c0 = '\x01';
              local_270 = 0;
              local_268 = 8;
              *(undefined8 *)(puVar17 + -8) = 0x1417856b9;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_270,0);
              lVar9 = local_270;
              *(undefined8 *)(puVar17 + -8) = 0x1417856d2;
              FGenericPlatformString::Memcpy(lVar9,L"Message",0x10);
              local_1e0 = &local_270;
              local_1d8 = local_e8;
              *(undefined8 *)(puVar17 + -8) = 0x14178570b;
              FUN_1407484b0(&local_138,local_220,&local_1e0,0);
              if (local_270 != 0) {
                *(undefined8 *)(puVar17 + -8) = 0x14178571c;
                FMemory::Free();
              }
              if ((local_c0 != '\0') && (local_c0 = '\0', local_d0 != (longlong *)0x0)) {
                LOCK();
                plVar16 = local_d0 + 1;
                lVar9 = *plVar16;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                plVar19 = local_2e0;
                if ((int)lVar9 == 1) {
                  pcVar4 = *(code **)*local_d0;
                  *(undefined8 *)(puVar17 + -8) = 0x14178574f;
                  (*pcVar4)(local_d0);
                  LOCK();
                  piVar1 = (int *)((longlong)local_d0 + 0xc);
                  iVar20 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  plVar19 = local_2e0;
                  if (iVar20 == 1) {
                    pcVar4 = *(code **)(*local_d0 + 8);
                    *(undefined8 *)(puVar17 + -8) = 0x14178576c;
                    (*pcVar4)(local_d0,1);
                    plVar19 = local_2e0;
                  }
                }
              }
              if (local_1b8 != (longlong *)0x0) {
                LOCK();
                plVar16 = local_1b8 + 1;
                lVar9 = *plVar16;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                plVar19 = local_2e0;
                if ((int)lVar9 == 1) {
                  pcVar4 = *(code **)*local_1b8;
                  *(undefined8 *)(puVar17 + -8) = 0x141785793;
                  (*pcVar4)(local_1b8);
                  LOCK();
                  piVar1 = (int *)((longlong)local_1b8 + 0xc);
                  iVar20 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  plVar19 = local_2e0;
                  if (iVar20 == 1) {
                    pcVar4 = *(code **)(*local_1b8 + 8);
                    *(undefined8 *)(puVar17 + -8) = 0x1417857b0;
                    (*pcVar4)(local_1b8,1);
                    plVar19 = local_2e0;
                  }
                }
              }
              local_218 = plVar19[3];
              *(undefined8 *)(puVar17 + -8) = 0x1417857d2;
              uVar11 = FText::FromName(local_1a8,&local_218);
              local_b8[0] = 4;
              *(undefined8 *)(puVar17 + -8) = 0x1417857eb;
              FText::FText(local_a8,uVar11);
              local_90 = '\x01';
              local_260 = 0;
              local_258 = 0xd;
              *(undefined8 *)(puVar17 + -8) = 0x141785815;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260,0);
              lVar9 = local_260;
              *(undefined8 *)(puVar17 + -8) = 0x14178582c;
              FGenericPlatformString::Memcpy(lVar9,L"PropertyName",0x1a);
              local_200 = &local_260;
              local_1f8 = local_b8;
              *(undefined8 *)(puVar17 + -8) = 0x141785862;
              FUN_1407484b0(&local_138,&local_2d0,&local_200,0);
              if (local_260 != 0) {
                *(undefined8 *)(puVar17 + -8) = 0x141785873;
                FMemory::Free();
              }
              if ((local_90 != '\0') && (local_90 = '\0', local_a0 != (longlong *)0x0)) {
                LOCK();
                plVar16 = local_a0 + 1;
                lVar9 = *plVar16;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  pcVar4 = *(code **)*local_a0;
                  *(undefined8 *)(puVar17 + -8) = 0x1417858a6;
                  (*pcVar4)(local_a0);
                  LOCK();
                  piVar1 = (int *)((longlong)local_a0 + 0xc);
                  iVar20 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar20 == 1) {
                    pcVar4 = *(code **)(*local_a0 + 8);
                    *(undefined8 *)(puVar17 + -8) = 0x1417858c3;
                    (*pcVar4)(local_a0,1);
                  }
                }
              }
              if (local_1a0 != (longlong *)0x0) {
                LOCK();
                plVar16 = local_1a0 + 1;
                lVar9 = *plVar16;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  pcVar4 = *(code **)*local_1a0;
                  *(undefined8 *)(puVar17 + -8) = 0x1417858e6;
                  (*pcVar4)(local_1a0);
                  LOCK();
                  piVar1 = (int *)((longlong)local_1a0 + 0xc);
                  iVar20 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar20 == 1) {
                    pcVar4 = *(code **)(*local_1a0 + 8);
                    *(undefined8 *)(puVar17 + -8) = 0x141785903;
                    (*pcVar4)(local_1a0,1);
                  }
                }
              }
              lVar18 = local_228;
              local_210 = *(undefined8 *)(local_228 + 0x18);
              *(undefined8 *)(puVar17 + -8) = 0x141785928;
              uVar11 = FText::FromName(local_190,&local_210);
              local_88[0] = 4;
              *(undefined8 *)(puVar17 + -8) = 0x141785941;
              FText::FText(local_78,uVar11);
              local_60 = '\x01';
              local_250 = 0;
              local_248 = 0xd;
              *(undefined8 *)(puVar17 + -8) = 0x141785968;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_250,0);
              lVar9 = local_250;
              *(undefined8 *)(puVar17 + -8) = 0x141785981;
              FGenericPlatformString::Memcpy(lVar9,L"FunctionName",0x1a);
              local_1f0 = &local_250;
              local_1e8 = local_88;
              *(undefined8 *)(puVar17 + -8) = 0x1417859b7;
              FUN_1407484b0(&local_138,&local_308,&local_1f0,0);
              if (local_250 != 0) {
                *(undefined8 *)(puVar17 + -8) = 0x1417859c8;
                FMemory::Free();
              }
              if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
                LOCK();
                plVar16 = local_70 + 1;
                lVar9 = *plVar16;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  pcVar4 = *(code **)*local_70;
                  *(undefined8 *)(puVar17 + -8) = 0x1417859fb;
                  (*pcVar4)(local_70);
                  LOCK();
                  piVar1 = (int *)((longlong)local_70 + 0xc);
                  iVar20 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar20 == 1) {
                    pcVar4 = *(code **)(*local_70 + 8);
                    *(undefined8 *)(puVar17 + -8) = 0x141785a18;
                    (*pcVar4)(local_70,1);
                  }
                }
              }
              if (local_188 != (longlong *)0x0) {
                LOCK();
                plVar16 = local_188 + 1;
                lVar9 = *plVar16;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  pcVar4 = *(code **)*local_188;
                  *(undefined8 *)(puVar17 + -8) = 0x141785a3b;
                  (*pcVar4)(local_188);
                  LOCK();
                  piVar1 = (int *)((longlong)local_188 + 0xc);
                  iVar20 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar20 == 1) {
                    pcVar4 = *(code **)(*local_188 + 8);
                    *(undefined8 *)(puVar17 + -8) = 0x141785a58;
                    (*pcVar4)(local_188,1);
                  }
                }
              }
              *(undefined8 *)(puVar17 + -8) = 0x141785a79;
              uVar11 = FInternationalization::
                       ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                 (local_160,
                                  L"\'{Message}\': Bad or missing property \'{PropertyName}\' when trying to call {FunctionName}"
                                  ,L"Core",L"BadProperty");
              *(undefined8 *)(puVar17 + -8) = 0x141785a88;
              uVar11 = FTextFormat::FTextFormat(local_148,uVar11);
              *(undefined8 *)(puVar17 + -8) = 0x141785a9e;
              uVar11 = FText::Format(local_178,uVar11,&local_138);
              *(undefined8 *)(puVar17 + -8) = 0x141785aa6;
              puVar12 = (undefined8 *)FText::ToString(uVar11);
              uVar11 = local_208;
              if (*(int *)(puVar12 + 1) == 0) {
                puVar13 = &DAT_143f3eda8;
              }
              else {
                puVar13 = (undefined2 *)*puVar12;
              }
              *(undefined8 *)(puVar17 + -8) = 0x141785ace;
              FOutputDevice::LogfImpl(uVar11,&DAT_144d2c9e4,puVar13);
              if (local_170 != (longlong *)0x0) {
                LOCK();
                plVar16 = local_170 + 1;
                lVar9 = *plVar16;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  pcVar4 = *(code **)*local_170;
                  *(undefined8 *)(puVar17 + -8) = 0x141785af1;
                  (*pcVar4)(local_170);
                  LOCK();
                  piVar1 = (int *)((longlong)local_170 + 0xc);
                  iVar20 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar20 == 1) {
                    pcVar4 = *(code **)(*local_170 + 8);
                    *(undefined8 *)(puVar17 + -8) = 0x141785b0e;
                    (*pcVar4)(local_170,1);
                  }
                }
              }
              if (local_158 != (longlong *)0x0) {
                LOCK();
                plVar16 = local_158 + 1;
                lVar9 = *plVar16;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  pcVar4 = *(code **)*local_158;
                  *(undefined8 *)(puVar17 + -8) = 0x141785b31;
                  (*pcVar4)(local_158);
                  LOCK();
                  piVar1 = (int *)((longlong)local_158 + 0xc);
                  iVar20 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar20 == 1) {
                    pcVar4 = *(code **)(*local_158 + 8);
                    *(undefined8 *)(puVar17 + -8) = 0x141785b4e;
                    (*pcVar4)(local_158,1);
                  }
                }
              }
              local_f0 = 0;
              if (local_f8 != 0) {
                *(undefined8 *)(puVar17 + -8) = 0x141785b66;
                FMemory::Free();
              }
              *(undefined8 *)(puVar17 + -8) = 0x141785b72;
              TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                        (&local_138);
              if (local_300 != (undefined2 *)0x0) {
                *(undefined8 *)(puVar17 + -8) = 0x141785b84;
                FMemory::Free();
              }
              goto LAB_141785560;
            }
            if (local_300 != (undefined2 *)0x0) {
              *(undefined8 *)(puVar17 + -8) = 0x14178551e;
              FMemory::Free();
            }
          }
          local_2e0 = (longlong *)plVar19[5];
          *(undefined8 *)(puVar17 + -8) = 0x14178552f;
          FUN_140472e10(&local_2e8);
          iVar20 = iVar20 + 1;
          param_1 = local_2d0;
          plVar16 = local_308;
          if (local_2e0 == (longlong *)0x0) break;
        }
      }
      lVar18 = local_228;
      pcVar4 = *(code **)(*param_1 + 0x208);
      *(undefined8 *)(puVar17 + -8) = 0x141785560;
      (*pcVar4)(param_1,lVar18,_Dst);
LAB_141785560:
      local_280 = *(longlong **)(lVar18 + 0x38);
      local_278 = 0xffffffff;
      local_274 = 0x101;
      local_272 = 0;
      local_288 = lVar18;
      *(undefined8 *)(puVar17 + -8) = 0x141785598;
      FUN_140472e10(&local_288);
      plVar16 = local_280;
      while ((local_280 = plVar16, plVar16 != (longlong *)0x0 && ((char)plVar16[7] < '\0'))) {
        if ((~(byte)((ulonglong)plVar16[7] >> 0x24) & 1) != 0) {
          iVar20 = *(int *)((longlong)plVar16 + 0x44);
          pcVar4 = *(code **)(*plVar16 + 0x328);
          *(undefined8 *)(puVar17 + -8) = 0x1417855c9;
          (*pcVar4)(plVar16,(longlong)iVar20 + (longlong)_Dst);
        }
        local_280 = (longlong *)plVar16[5];
        *(undefined8 *)(puVar17 + -8) = 0x1417855e0;
        FUN_140472e10(&local_288);
        plVar16 = local_280;
      }
      plVar16 = (longlong *)0x1;
    }
  }
  if (local_240 != (undefined2 *)0x0) {
    *(undefined8 *)(puVar17 + -8) = 0x1417855ff;
    FMemory::Free();
  }
  *(undefined8 *)(puVar17 + -8) = 0x141785611;
  return plVar16;
}



// FUNCTION 141785b90 FUN_141785b90 body=512 status=ok
// SIG undefined FUN_141785b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_141785b90(longlong param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 uVar8;
  code *pcVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *_Dst;
  ulonglong _Size;
  undefined1 *_Dst_00;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined1 auStack_30 [8];
  
  puVar12 = auStack_58;
  local_38 = DAT_1468387a8 ^ (ulonglong)&local_38;
  plVar4 = *(longlong **)(param_1 + 0x20);
  _Dst = (undefined1 *)0x0;
  lVar5 = *plVar4;
  *(longlong **)(param_1 + 0x20) = plVar4 + 1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  bVar1 = *(byte *)(plVar4 + 1);
  *(longlong *)(param_1 + 0x20) = (longlong)plVar4 + 9;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_1 + 0x18),param_1,0);
  _Size = (ulonglong)*(ushort *)(lVar5 + 0x8e);
  lVar6 = *(longlong *)(param_1 + 0x38);
  if (*(ushort *)(lVar5 + 0x8e) != 0) {
    uVar11 = _Size + 0x1e;
    if (uVar11 <= _Size + 0xf) {
      uVar11 = 0xffffffffffffff0;
    }
    puVar12 = auStack_58 + -(uVar11 & 0xfffffffffffffff0);
    _Dst = auStack_30 + -(uVar11 & 0xfffffffffffffff0);
  }
  *(undefined8 *)(puVar12 + -8) = 0x141785c4f;
  _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
  pcVar7 = *(char **)(param_1 + 0x20);
  plVar4 = *(longlong **)(lVar5 + 0x38);
  cVar2 = *pcVar7;
  while (cVar2 != '\x16') {
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (((ulonglong)plVar4[7] >> 8 & 1) == 0) {
      _Dst_00 = _Dst + *(int *)((longlong)plVar4 + 0x44);
      if (((ulonglong)plVar4[7] >> 9 & 1) == 0) {
        pcVar9 = *(code **)(*plVar4 + 0x330);
        *(undefined8 *)(puVar12 + -8) = 0x141785cde;
        (*pcVar9)(plVar4,_Dst_00);
      }
      else {
        iVar3 = *(int *)((longlong)plVar4 + 0x34);
        lVar10 = plVar4[6];
        *(undefined8 *)(puVar12 + -8) = 0x141785ccd;
        _guard_xfg_dispatch_icall_nop(_Dst_00,0,(longlong)(iVar3 * (int)lVar10));
      }
      bVar1 = **(byte **)(param_1 + 0x20);
      *(byte **)(param_1 + 0x20) = *(byte **)(param_1 + 0x20) + 1;
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      pcVar9 = (code *)(&DAT_1469e7e20)[bVar1];
      *(undefined8 *)(puVar12 + -8) = 0x141785d03;
      (*pcVar9)(uVar8,param_1,_Dst_00);
    }
    else {
      bVar1 = **(byte **)(param_1 + 0x20);
      *(byte **)(param_1 + 0x20) = *(byte **)(param_1 + 0x20) + 1;
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      pcVar9 = (code *)(&DAT_1469e7e20)[bVar1];
      *(undefined8 *)(puVar12 + -8) = 0x141785c8d;
      (*pcVar9)(uVar8,param_1,0);
      if (*(longlong *)(param_1 + 0x38) != 0) {
        pcVar9 = *(code **)(*plVar4 + 0x308);
        *(undefined8 *)(puVar12 + -8) = 0x141785ca9;
        (*pcVar9)(plVar4);
      }
    }
    pcVar7 = *(char **)(param_1 + 0x20);
    plVar4 = (longlong *)plVar4[5];
    cVar2 = *pcVar7;
  }
  *(char **)(param_1 + 0x20) = pcVar7 + 1;
  if (lVar6 != 0) {
    *(undefined8 *)(puVar12 + -8) = 0x141785d2b;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar6,_Dst);
  }
  for (plVar4 = *(longlong **)(lVar5 + 0x68); plVar4 != (longlong *)0x0;
      plVar4 = (longlong *)plVar4[0xc]) {
    if ((~(byte)((ulonglong)plVar4[7] >> 0x24) & 1) != 0) {
      iVar3 = *(int *)((longlong)plVar4 + 0x44);
      pcVar9 = *(code **)(*plVar4 + 0x328);
      *(undefined8 *)(puVar12 + -8) = 0x141785d61;
      (*pcVar9)(plVar4,_Dst + iVar3);
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x141785d76;
  return;
}



// FUNCTION 141785db0 FUN_141785db0 body=140 status=ok
// SIG undefined FUN_141785db0(void)

void FUN_141785db0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res10;
  local_res10[0] = 0;
  local_18 = FUN_1406ddef0;
  lVar1 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  if (*(int *)(lVar1 + 0x5c) == 0) {
    LowLevelFatalErrorHandler
              ("Unknown",0xd2d,L"FObjectFinders can\'t be used outside of constructors to find %s",
               param_1);
    FDebug::AssertFailed
              (&DAT_144d28f47,"Unknown",0xd2d,
               L"FObjectFinders can\'t be used outside of constructors to find %s",param_1);
  }
  return;
}



// FUNCTION 141785e40 CleanupCachedArchetypes body=104 status=ok
// SIG undefined CleanupCachedArchetypes(void)

void CleanupCachedArchetypes(void)

{
  int iVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1464b59b0);
  iVar1 = DAT_1464b59a8;
  DAT_1464b59a8 = 0;
  if (DAT_1464b59ac != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_1464b59a0,0);
  }
  if (0 < iVar1) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,&PTR_PTR_1464b5998);
  }
                    /* WARNING: Could not recover jumptable at 0x000141785ea1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1464b59b0);
  return;
}



// FUNCTION 141785eb0 ClearScriptCode body=67 status=ok
// SIG undefined ClearScriptCode(void)

void FStructScriptLoader::ClearScriptCode(int *param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined4 *)(param_2 + 0x50) = 0;
  if (*(int *)(param_2 + 0x54) != iVar1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_2 + 0x80) = 0;
  if (*(int *)(param_2 + 0x84) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2 + 0x78,0);
    return;
  }
  return;
}



// FUNCTION 141785f00 FUN_141785f00 body=104 status=ok
// SIG undefined FUN_141785f00(void)

void FUN_141785f00(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_28);
  FText::operator=(param_2,local_28);
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



// FUNCTION 141785f70 FUN_141785f70 body=720 status=ok
// SIG undefined FUN_141785f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141785f70(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong local_58;
  int local_50;
  undefined8 *local_48;
  longlong local_40;
  uint local_38;
  uint local_34;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (DAT_1468c217e == '\0') {
    FUN_1417940e0();
  }
  FUN_141717090();
  if (DAT_1464aaa49 != '\0') {
    uVar9 = UObject::GetPrivateStaticClass();
    FObjectIterator::FObjectIterator(&local_58,uVar9,0,0,0);
    puVar14 = local_48;
    iVar13 = local_50;
    if (local_48 != (undefined8 *)0x0) {
      do {
        if (puVar14 == (undefined8 *)0x0) {
          plVar12 = (longlong *)0x0;
        }
        else {
          plVar12 = (longlong *)*puVar14;
        }
        cVar5 = (**(code **)(*plVar12 + 0x1a0))(plVar12);
        iVar2 = *(int *)((longlong)plVar12 + 0xc);
        uVar8 = iVar2 >> 0x1f;
        if (cVar5 == '\0') {
          if (iVar2 < (int)DAT_1469e91c4) {
            uVar7 = iVar2 + (uVar8 & 0xffff);
            lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                     (longlong)(int)((uVar7 & 0xffff) - (uVar8 & 0xffff)) * 0x18;
          }
          else {
            lVar11 = 0;
          }
          if ((*(uint *)(lVar11 + 8) >> 0x1e & 1) != 0) {
            if (iVar2 < (int)DAT_1469e91c4) {
              uVar7 = iVar2 + (uVar8 & 0xffff);
              lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                       (longlong)(int)((uVar7 & 0xffff) - (uVar8 & 0xffff)) * 0x18;
            }
            else {
              lVar11 = 0;
            }
            *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) & 0xbfffffff;
          }
        }
        else if (iVar2 < (int)DAT_1469e91c4) {
          uVar7 = iVar2 + (uVar8 & 0xffff);
          puVar1 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) + 8 +
                           (longlong)(int)((uVar7 & 0xffff) - (uVar8 & 0xffff)) * 0x18);
          *puVar1 = *puVar1 | 0x40000000;
        }
        else {
          _DAT_00000008 = _DAT_00000008 | 0x40000000;
        }
LAB_141786110:
        do {
          do {
            iVar13 = iVar13 + 1;
            if (*(int *)(local_58 + 0x24) <= iVar13) goto LAB_141786182;
            while( true ) {
              uVar7 = iVar13 >> 0x1f & 0xffff;
              uVar8 = iVar13 + uVar7;
              lVar10 = (longlong)(int)((uVar8 & 0xffff) - uVar7);
              lVar11 = *(longlong *)
                        (*(longlong *)(local_58 + 0x10) + (longlong)((int)uVar8 >> 0x10) * 8);
              lVar3 = *(longlong *)(lVar11 + lVar10 * 0x18);
              puVar14 = (undefined8 *)(lVar11 + lVar10 * 0x18);
              if (lVar3 != 0) break;
              iVar13 = iVar13 + 1;
              if (*(int *)(local_58 + 0x24) <= iVar13) goto LAB_141786182;
            }
          } while ((*(uint *)(lVar3 + 8) & local_38) != 0);
          lVar11 = UObject::GetPrivateStaticClass();
          if (local_40 != lVar11) {
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(local_40 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(local_40 + 0x90) * 8) != local_40 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_141786110;
          }
          uVar8 = *(uint *)(lVar3 + 0xc);
          if ((int)uVar8 < (int)DAT_1469e91c4) {
            uVar7 = uVar8 & 0xffff;
            if ((int)uVar8 < 0) {
              uVar8 = uVar8 + 0xffff;
              uVar7 = uVar7 - 0x10000;
            }
            lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                     (longlong)(int)uVar7 * 0x18;
          }
          else {
            lVar11 = 0;
          }
        } while ((*(uint *)(lVar11 + 8) & local_34) != 0);
      } while( true );
    }
LAB_141786182:
    iVar13 = param_1[1] + 1;
    if (param_1[1] + 1 <= *param_1) {
      iVar13 = *param_1;
    }
    *param_1 = iVar13;
  }
  *(undefined1 *)(param_1 + 3) = 0;
  DAT_1464aaa49 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001417861a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141786240 ConstructDynamicType body=506 status=ok
// SIG undefined ConstructDynamicType(void)

undefined8 ConstructDynamicType(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)0x0;
  plVar3 = (longlong *)FUN_14178d970();
  iVar6 = (int)param_1;
  iVar2 = (int)((ulonglong)param_1 >> 0x20);
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    plVar5 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar5 = plVar3 + 7;
    }
    iVar1 = *(int *)((longlong)plVar5 +
                    ((longlong)(iVar2 + iVar6) & (longlong)(int)plVar3[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar1 * 0x70 + *plVar3);
        if (*plVar5 == param_1) {
          if (iVar1 != -1) goto LAB_1417862c1;
          break;
        }
        iVar1 = (int)plVar5[0xd];
      } while (iVar1 != -1);
    }
  }
  plVar5 = plVar7;
LAB_1417862c1:
  plVar3 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar3 = plVar7;
  }
  if (plVar3 != (longlong *)0x0) {
    if (param_2 == '\x01') {
      uVar4 = (*(code *)*plVar3)();
      FUN_14172cc50(uVar4,0);
      return uVar4;
    }
    if (param_2 != '\0') {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000141786311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)plVar3[1])();
    return uVar4;
  }
  plVar3 = (longlong *)FUN_14178da50();
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    plVar5 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar5 = plVar3 + 7;
    }
    iVar1 = *(int *)((longlong)plVar5 +
                    ((longlong)(iVar2 + iVar6) & (longlong)(int)plVar3[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar5 = (longlong *)(*plVar3 + (longlong)iVar1 * 0x18);
        if (*(longlong *)(*plVar3 + (longlong)iVar1 * 0x18) == param_1) {
          if (iVar1 != -1) goto LAB_141786383;
          break;
        }
        iVar1 = (int)plVar5[2];
      } while (iVar1 != -1);
    }
  }
  plVar5 = plVar7;
LAB_141786383:
  plVar3 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar3 = plVar7;
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_14178d9e0();
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar5 = (longlong *)plVar3[8];
      if ((longlong *)plVar3[8] == (longlong *)0x0) {
        plVar5 = plVar3 + 7;
      }
      iVar2 = *(int *)((longlong)plVar5 +
                      ((longlong)(iVar2 + iVar6) & (longlong)(int)plVar3[9] - 1U) * 4);
      if (iVar2 != -1) {
        do {
          plVar5 = (longlong *)(*plVar3 + (longlong)iVar2 * 0x18);
          if (*(longlong *)(*plVar3 + (longlong)iVar2 * 0x18) == param_1) {
            if (iVar2 != -1) goto LAB_141786413;
            break;
          }
          iVar2 = (int)plVar5[2];
        } while (iVar2 != -1);
      }
    }
    plVar5 = plVar7;
LAB_141786413:
    plVar3 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar3 = plVar7;
    }
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001417863a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)*plVar3)();
  return uVar4;
}



// FUNCTION 141786440 FUN_141786440 body=603 status=ok
// SIG undefined FUN_141786440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141786440(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_188 [32];
  int local_168 [2];
  undefined8 local_160;
  undefined1 local_158 [256];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if ((*param_1 == 0) || ((*(uint *)(*param_1 + 0xb4) & 0x20000000) == 0)) {
    puVar7 = (undefined8 *)param_2[1];
    uVar11 = 0;
    uVar8 = (longlong)*(int *)(param_2 + 2) & 0x1fffffffffffffff;
    if (puVar7 + *(int *)(param_2 + 2) < puVar7) {
      uVar8 = uVar11;
    }
    uVar10 = uVar11;
    if (uVar8 != 0) {
      do {
        (*(code *)*puVar7)();
        uVar10 = uVar10 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar10 != uVar8);
    }
    lVar5 = (*(code *)*param_2)();
    *param_1 = lVar5;
    if ((*(uint *)(lVar5 + 0xb4) & 0x20000000) == 0) {
      UObjectForceRegistration(lVar5);
      if (*(longlong *)(lVar5 + 0x30) != 0) {
        *(uint *)(lVar5 + 0xb4) =
             *(uint *)(lVar5 + 0xb4) | *(uint *)(*(longlong *)(lVar5 + 0x30) + 0xb4) & 0x4aa1040e;
      }
      *(uint *)(lVar5 + 0xb4) =
           *(uint *)(lVar5 + 0xb4) | *(uint *)((longlong)param_2 + 0x14) | 0x20000000;
      if ((*(uint *)(lVar5 + 0xb4) & 0x10000000) == 0) {
        *(undefined4 *)(lVar5 + 0x1b8) = 0;
        if (*(int *)(lVar5 + 0x1bc) != 0) {
          TArray<float,FDefaultAllocator>::ResizeTo(lVar5 + 0x1b0,0);
        }
      }
      UClass::CreateLinkAndAddChildFunctionsToMap(lVar5,param_2[3],*(undefined4 *)(param_2 + 4));
      local_168[0] = *(int *)(param_2 + 6);
      local_160 = param_2[5];
      while (local_168[0] != 0) {
        FUN_141786db0(lVar5,&local_160,local_168);
      }
      if (param_2[7] != 0) {
        lVar6 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
                TStringConversion<FUTF8ToTCHAR_Convert,128>(local_158);
        puVar7 = (undefined8 *)FName::FName(&local_160,*(undefined8 *)(lVar6 + 0x108),1);
        *(undefined8 *)(lVar5 + 0xd0) = *puVar7;
        if (local_58 != 0) {
          FMemory::Free();
        }
      }
      iVar3 = *(int *)(param_2 + 10);
      if (iVar3 != 0) {
        plVar1 = (longlong *)(lVar5 + 0x1a0);
        if (*(int *)(lVar5 + 0x1ac) < iVar3) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1,iVar3);
        }
        puVar7 = (undefined8 *)param_2[9];
        puVar12 = puVar7 + (longlong)iVar3 * 2;
        for (; puVar7 != puVar12; puVar7 = puVar7 + 2) {
          uVar8 = uVar11;
          if ((code *)*puVar7 != (code *)0x0) {
            uVar8 = (*(code *)*puVar7)();
          }
          iVar3 = *(int *)(lVar5 + 0x1a8);
          *(int *)(lVar5 + 0x1a8) = iVar3 + 1;
          if (*(int *)(lVar5 + 0x1ac) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
          }
          uVar2 = *(undefined1 *)((longlong)puVar7 + 0xc);
          uVar4 = *(undefined4 *)(puVar7 + 1);
          puVar9 = (ulonglong *)((longlong)iVar3 * 0x10 + *plVar1);
          *puVar9 = uVar8;
          *(undefined4 *)(puVar9 + 1) = uVar4;
          *(undefined1 *)((longlong)puVar9 + 0xc) = uVar2;
        }
      }
      FUN_141726e60(lVar5,0);
    }
  }
  return;
}



// FUNCTION 1417866a0 FUN_1417866a0 body=897 status=ok
// SIG undefined FUN_1417866a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1417866a0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  short *_Src;
  undefined1 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 auStack_448 [32];
  undefined4 local_428;
  undefined1 local_420;
  undefined8 local_418;
  undefined1 *local_408;
  longlong local_400;
  undefined8 local_3f8;
  longlong *local_3f0;
  undefined8 *local_3e8;
  undefined1 local_3e0 [8];
  undefined1 local_3d8 [256];
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  int local_2c8;
  undefined1 local_2b8 [256];
  longlong local_1b8;
  undefined1 local_198 [336];
  ulonglong local_48;
  ulonglong uVar12;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_448;
  plVar15 = (longlong *)0x0;
  iVar14 = 0;
  local_408 = (undefined1 *)((ulonglong)local_408 & 0xffffffff00000000);
  plVar5 = plVar15;
  local_3e8 = param_2;
  if ((code *)*param_2 != (code *)0x0) {
    plVar5 = (longlong *)(*(code *)*param_2)();
  }
  if (*param_1 == 0) {
    lVar6 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                      (local_2b8,param_2[2]);
    uVar2 = *(undefined4 *)(param_2 + 3);
    puVar7 = (undefined8 *)FName::FName(local_3e0,*(undefined8 *)(lVar6 + 0x108),1);
    uVar9 = *puVar7;
    uVar8 = UEnum::GetPrivateStaticClass();
    local_418 = 0;
    local_420 = 0;
    local_428 = 0;
    lVar6 = FUN_141797e10(uVar8,plVar5,uVar9,uVar2);
    local_3f0 = plVar15;
    plVar5 = plVar15;
    if (lVar6 != 0) {
      uVar9 = FUN_141781470(local_198);
      plVar5 = (longlong *)UEnum::UEnum(lVar6,uVar9);
      local_3f0 = plVar5;
      FUN_141781fc0(local_198);
    }
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    *param_1 = (longlong)plVar5;
    iVar4 = *(int *)(param_2 + 8);
    local_400 = 0;
    local_3f8 = 0;
    if (0 < iVar4) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_400,iVar4);
      iVar4 = *(int *)(param_2 + 8);
    }
    plVar17 = (longlong *)param_2[7];
    lVar6 = -1;
    plVar16 = plVar17 + (longlong)iVar4 * 2;
    puVar7 = local_3e8;
    for (; local_3e8 = puVar7, plVar17 != plVar16; plVar17 = plVar17 + 2) {
      lVar13 = *plVar17;
      local_2d8 = (undefined1 *)0x0;
      if (lVar13 == 0) {
        local_2d0 = (undefined1 *)0x0;
        local_2c8 = 0;
      }
      else {
        uVar11 = 0xffffffffffffffff;
        do {
          uVar12 = uVar11;
          uVar11 = uVar12 + 1;
        } while (*(char *)(lVar13 + uVar11) != '\0');
        local_408 = (undefined1 *)((ulonglong)local_408 & 0xffffffff00000000);
        FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                  (&local_408,0x7fffffff,lVar13,uVar11 & 0xffffffff);
        local_2c8 = (int)local_408;
        uVar1 = (int)local_408 + 1;
        if (uVar1 < 0x81) {
          if (local_2d8 != (undefined1 *)0x0) {
            lVar10 = 0;
LAB_141786869:
            local_2d8 = (undefined1 *)FMemory::Realloc(local_2d8,lVar10,0);
          }
        }
        else if ((local_2d8 != (undefined1 *)0x0) || (uVar1 != 0)) {
          lVar10 = (longlong)(int)uVar1 * 2;
          goto LAB_141786869;
        }
        local_408 = local_3d8;
        if (local_2d8 != (undefined1 *)0x0) {
          local_408 = local_2d8;
        }
        local_2d0 = local_408;
        FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_408,uVar1,lVar13,(int)uVar12 + 2);
      }
      puVar3 = local_2d0;
      uVar11 = local_3f8;
      lVar13 = (longlong)(int)local_3f8;
      iVar4 = (int)local_3f8 + 1;
      local_3f8 = CONCAT44(local_3f8._4_4_,iVar4);
      if (local_3f8._4_4_ < iVar4) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_400,uVar11 & 0xffffffff);
      }
      lVar13 = lVar13 * 0x10 + local_400;
      FName::FName(lVar13,puVar3,1);
      *(longlong *)(lVar13 + 8) = plVar17[1];
      if (local_2d8 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      puVar7 = local_3e8;
      plVar5 = local_3f0;
    }
    (**(code **)(*plVar5 + 0x2a0))
              (plVar5,&local_400,*(undefined1 *)(puVar7 + 5),*(int *)(puVar7 + 1) == 0);
    lVar13 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_3d8,puVar7[6]);
    _Src = *(short **)(lVar13 + 0x108);
    if ((short *)plVar5[6] != _Src) {
      if ((_Src != (short *)0x0) && (*_Src != 0)) {
        do {
          lVar6 = lVar6 + 1;
        } while (_Src[lVar6] != 0);
        plVar15 = (longlong *)(ulonglong)((int)lVar6 + 1);
      }
      *(undefined4 *)(plVar5 + 7) = 0;
      iVar4 = (int)plVar15;
      if (*(int *)((longlong)plVar5 + 0x3c) != iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar5 + 6,plVar15);
        iVar14 = (int)plVar5[7];
      }
      *(int *)(plVar5 + 7) = iVar14 + iVar4;
      if (*(int *)((longlong)plVar5 + 0x3c) < iVar14 + iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar5 + 6,iVar14);
      }
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop((void *)plVar5[6],_Src,(longlong)iVar4 * 2);
      }
    }
    if (local_2d8 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (puVar7[4] != 0) {
      plVar5[0xb] = puVar7[4];
    }
    if (local_400 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141786a30 FUN_141786a30 body=599 status=ok
// SIG undefined FUN_141786a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141786a30(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_578 [32];
  undefined8 local_558;
  undefined1 local_550;
  undefined8 local_548;
  int local_538 [2];
  undefined8 local_530;
  undefined1 local_528 [8];
  undefined1 local_520 [8];
  undefined1 local_518 [256];
  longlong local_418;
  undefined1 local_3f8 [256];
  longlong local_2f8;
  undefined1 local_2d8 [336];
  undefined1 local_188 [336];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_578;
  plVar9 = (longlong *)0x0;
  local_538[0] = 0;
  pcVar2 = (code *)param_2[3];
  plVar3 = plVar9;
  if ((code *)*param_2 != (code *)0x0) {
    plVar3 = (longlong *)(*(code *)*param_2)();
  }
  plVar4 = plVar9;
  if (pcVar2 != (code *)0x0) {
    plVar4 = (longlong *)(*pcVar2)();
  }
  if (*param_1 == 0) {
    if ((*(uint *)(param_2 + 4) & 0x100000) == 0) {
      lVar5 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
              TStringConversion<FUTF8ToTCHAR_Convert,128>(local_3f8,param_2[1]);
      uVar1 = *(undefined4 *)(param_2 + 2);
      puVar6 = (undefined8 *)FName::FName(local_520,*(undefined8 *)(lVar5 + 0x108),1);
      uVar8 = *puVar6;
      uVar7 = FUN_14171c5d0();
      local_548 = 0;
      local_550 = 0;
      local_558 = (ulonglong)local_558._4_4_ << 0x20;
      lVar5 = FUN_141797e10(uVar7,plVar3,uVar8,uVar1);
      plVar3 = plVar9;
      if (lVar5 != 0) {
        uVar8 = FUN_141781470(local_188);
        local_558 = param_2[5];
        plVar9 = (longlong *)
                 UDelegateFunction::UDelegateFunction
                           (lVar5,uVar8,plVar4,*(undefined4 *)(param_2 + 4));
        plVar3 = (longlong *)0x2;
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_141781fc0(local_188);
      }
    }
    else {
      lVar5 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
              TStringConversion<FUTF8ToTCHAR_Convert,128>(local_518,param_2[1]);
      uVar1 = *(undefined4 *)(param_2 + 2);
      puVar6 = (undefined8 *)FName::FName(local_528,*(undefined8 *)(lVar5 + 0x108),1);
      uVar8 = *puVar6;
      uVar7 = FUN_14171c1a0();
      local_548 = 0;
      local_550 = 0;
      local_558 = (ulonglong)local_558._4_4_ << 0x20;
      lVar5 = FUN_141797e10(uVar7,plVar3,uVar8,uVar1);
      local_2f8 = local_418;
      if (lVar5 != 0) {
        uVar8 = FUN_141781470(local_2d8);
        local_558 = param_2[5];
        plVar9 = (longlong *)
                 UDelegateFunction::UDelegateFunction
                           (lVar5,uVar8,plVar4,*(undefined4 *)(param_2 + 4));
        FUN_141781fc0(local_2d8);
        local_2f8 = local_418;
      }
    }
    if (local_2f8 != 0) {
      FMemory::Free();
    }
    *param_1 = (longlong)plVar9;
    local_538[0] = *(int *)(param_2 + 7);
    local_530 = param_2[6];
    while (local_538[0] != 0) {
      FUN_141786db0(plVar9,&local_530,local_538);
    }
    (**(code **)(*plVar9 + 0x280))(plVar9);
    FUN_141726e60(plVar9,0);
  }
  return;
}



// FUNCTION 141786c90 ConstructUPackage body=283 status=ok
// SIG undefined ConstructUPackage(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UE4CodeGen_Private::ConstructUPackage(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [256];
  longlong local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if (*param_1 == 0) {
    lVar2 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                      (local_148,*param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x108);
    uVar3 = UPackage::GetPrivateStaticClass();
    puVar4 = (undefined8 *)FName::FName(local_158,uVar1,1);
    uVar5 = 0;
    local_178 = 0;
    local_180 = 0;
    local_188 = 0;
    lVar2 = FUN_141799680(uVar3,0,*puVar4,0);
    if (local_48 != 0) {
      FMemory::Free();
    }
    *param_1 = lVar2;
    *(uint *)(lVar2 + 0x50) = *(uint *)(lVar2 + 0x50) | *(uint *)(param_2 + 1);
    uStack_164 = *(undefined4 *)(param_2 + 2);
    local_168 = *(undefined4 *)((longlong)param_2 + 0xc);
    uStack_160 = 0;
    *(undefined4 *)(lVar2 + 0x30) = local_168;
    *(undefined4 *)(lVar2 + 0x34) = uStack_164;
    *(undefined4 *)(lVar2 + 0x38) = 0;
    *(undefined4 *)(lVar2 + 0x3c) = 0;
    puVar4 = (undefined8 *)param_2[3];
    uVar6 = (longlong)*(int *)(param_2 + 4) & 0x1fffffffffffffff;
    if (puVar4 + *(int *)(param_2 + 4) < puVar4) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      do {
        (*(code *)*puVar4)();
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar5 != uVar6);
    }
  }
  return;
}



// FUNCTION 141786db0 FUN_141786db0 body=6645 status=ok
// SIG undefined FUN_141786db0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141786db0(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  int iVar23;
  undefined8 *puVar24;
  undefined1 auStack_4bd8 [32];
  undefined8 local_4bb8;
  undefined8 *local_4bb0;
  undefined8 local_4ba8;
  undefined1 local_4ba0;
  int local_4b98 [2];
  uint local_4b90 [2];
  int *local_4b88;
  undefined8 *local_4b80;
  undefined1 local_4b78 [8];
  undefined1 local_4b70 [8];
  undefined1 local_4b68 [8];
  undefined1 local_4b60 [8];
  undefined1 local_4b58 [8];
  undefined1 local_4b50 [8];
  undefined1 local_4b48 [8];
  undefined1 local_4b40 [8];
  undefined1 local_4b38 [8];
  undefined1 local_4b30 [8];
  undefined1 local_4b28 [8];
  undefined1 local_4b20 [8];
  undefined1 local_4b18 [8];
  undefined1 local_4b10 [8];
  undefined1 local_4b08 [8];
  undefined1 local_4b00 [8];
  undefined1 local_4af8 [8];
  undefined1 local_4af0 [8];
  undefined1 local_4ae8 [8];
  undefined1 local_4ae0 [8];
  undefined1 local_4ad8 [8];
  undefined1 local_4ad0 [8];
  undefined1 local_4ac8 [8];
  undefined1 local_4ac0 [8];
  undefined1 local_4ab8 [8];
  undefined1 local_4ab0 [8];
  undefined1 local_4aa8 [8];
  undefined1 local_4aa0 [8];
  undefined1 local_4a98 [16];
  undefined1 local_4a88 [256];
  longlong local_4988;
  undefined1 local_4968 [256];
  longlong local_4868;
  undefined1 local_4848 [256];
  longlong local_4748;
  undefined1 local_4728 [256];
  longlong local_4628;
  undefined1 local_4608 [256];
  longlong local_4508;
  undefined1 local_44e8 [256];
  longlong local_43e8;
  undefined1 local_43c8 [256];
  longlong local_42c8;
  undefined1 local_42a8 [256];
  longlong local_41a8;
  undefined1 local_4188 [256];
  longlong local_4088;
  undefined1 local_4068 [256];
  longlong local_3f68;
  undefined1 local_3f48 [256];
  longlong local_3e48;
  undefined1 local_3e28 [256];
  longlong local_3d28;
  undefined1 local_3d08 [256];
  longlong local_3c08;
  undefined1 local_3be8 [256];
  longlong local_3ae8;
  undefined1 local_3ac8 [256];
  longlong local_39c8;
  undefined1 local_39a8 [256];
  longlong local_38a8;
  undefined1 local_3888 [256];
  longlong local_3788;
  undefined1 local_3768 [256];
  longlong local_3668;
  undefined1 local_3648 [256];
  longlong local_3548;
  undefined1 local_3528 [256];
  longlong local_3428;
  undefined1 local_3408 [256];
  longlong local_3308;
  undefined1 local_32e8 [256];
  longlong local_31e8;
  undefined1 local_31c8 [256];
  longlong local_30c8;
  undefined1 local_30a8 [256];
  longlong local_2fa8;
  undefined1 local_2f88 [256];
  longlong local_2e88;
  undefined1 local_2e68 [256];
  longlong local_2d68;
  undefined1 local_2d48 [256];
  longlong local_2c48;
  undefined1 local_2c28 [256];
  longlong local_2b28;
  undefined1 local_2b08 [256];
  longlong local_2a08;
  undefined1 local_29e8 [256];
  longlong local_28e8;
  undefined1 local_28c8 [256];
  longlong local_27c8;
  undefined1 local_27a8 [336];
  undefined1 local_2658 [336];
  undefined1 local_2508 [336];
  undefined1 local_23b8 [336];
  undefined1 local_2268 [336];
  undefined1 local_2118 [336];
  undefined1 local_1fc8 [336];
  undefined1 local_1e78 [336];
  undefined1 local_1d28 [336];
  undefined1 local_1bd8 [336];
  undefined1 local_1a88 [336];
  undefined1 local_1938 [336];
  undefined1 local_17e8 [336];
  undefined1 local_1698 [336];
  undefined1 local_1548 [336];
  undefined1 local_13f8 [336];
  undefined1 local_12a8 [336];
  undefined1 local_1158 [336];
  undefined1 local_1008 [336];
  undefined1 local_eb8 [336];
  undefined1 local_d68 [336];
  undefined1 local_c18 [336];
  undefined1 local_ac8 [336];
  undefined1 local_978 [336];
  undefined1 local_828 [336];
  undefined1 local_6d8 [336];
  undefined1 local_588 [336];
  undefined1 local_438 [336];
  undefined1 local_2e8 [336];
  undefined1 local_198 [336];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4bd8;
  puVar21 = (undefined8 *)0x0;
  bVar15 = false;
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  local_4b90[0] = 0;
  local_4b98[0] = 0;
  puVar2 = *(undefined4 **)*param_2;
  *param_2 = (undefined8 *)*param_2 + 1;
  local_4b88 = param_3;
  local_4b80 = param_2;
  switch(*puVar2) {
  default:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_29e8,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4aa0,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UByteProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar20 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    puVar18 = puVar21;
    if (puVar20 != (undefined8 *)0x0) {
      if (*(code **)(puVar2 + 0xe) != (code *)0x0) {
        puVar21 = (undefined8 *)(**(code **)(puVar2 + 0xe))();
      }
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_198);
      local_4bb8 = uVar4 | 0x8001040000200;
      FUN_14174d7e0(puVar20,uVar22,0,uVar1);
      puVar20[0xe] = puVar21;
      *puVar20 = &PTR__scalar_deleting_destructor__144d1af00;
      *(undefined4 *)((longlong)puVar20 + 0x34) = 1;
      puVar21 = puVar20;
      puVar18 = (undefined8 *)0x1;
    }
    local_2b28 = local_28e8;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_141781fc0(local_198);
      local_2b28 = local_28e8;
    }
    break;
  case 1:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_4a88,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4b90,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UInt8Property::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar20 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    puVar18 = puVar21;
    if (puVar20 != (undefined8 *)0x0) {
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_27a8);
      local_4bb8 = uVar4 | 0x8001040000200;
      FUN_14174d7e0(puVar20,uVar22,0,uVar1);
      *(undefined4 *)((longlong)puVar20 + 0x34) = 1;
      *puVar20 = &PTR_FUN_144d22d58;
      puVar21 = puVar20;
      puVar18 = (undefined8 *)0x2;
    }
    local_2b28 = local_4988;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_141781fc0(local_27a8);
      local_2b28 = local_4988;
    }
    break;
  case 2:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_4968,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4b78,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UInt16Property::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar20 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    puVar18 = puVar21;
    if (puVar20 != (undefined8 *)0x0) {
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_2658);
      local_4bb8 = uVar4 | 0x8001040000200;
      FUN_14174d7e0(puVar20,uVar22,0,uVar1);
      *(undefined4 *)((longlong)puVar20 + 0x34) = 2;
      *puVar20 = &PTR_FUN_144d23138;
      puVar21 = puVar20;
      puVar18 = (undefined8 *)&DAT_00000004;
    }
    local_2b28 = local_4868;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_141781fc0(local_2658);
      local_2b28 = local_4868;
    }
    break;
  case 3:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_4848,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4b70,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UIntProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar20 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    puVar18 = puVar21;
    if (puVar20 != (undefined8 *)0x0) {
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_2508);
      local_4bb8 = uVar4 | 0x8001040000200;
      FUN_14174d7e0(puVar20,uVar22,0,uVar1);
      *(undefined4 *)((longlong)puVar20 + 0x34) = 4;
      *puVar20 = &PTR_FUN_144d23518;
      puVar21 = puVar20;
      puVar18 = (undefined8 *)&DAT_00000008;
    }
    local_2b28 = local_4748;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_141781fc0(local_2508);
      local_2b28 = local_4748;
    }
    break;
  case 4:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_4728,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4b68,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UInt64Property::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar20 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    puVar18 = puVar21;
    if (puVar20 != (undefined8 *)0x0) {
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_23b8);
      local_4bb8 = uVar4 | 0x8001040000200;
      FUN_14174d7e0(puVar20,uVar22,0,uVar1);
      *(undefined4 *)((longlong)puVar20 + 0x34) = 8;
      *puVar20 = &PTR_FUN_144d238f8;
      puVar21 = puVar20;
      puVar18 = (undefined8 *)&DAT_00000010;
    }
    local_2b28 = local_4628;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_141781fc0(local_23b8);
      local_2b28 = local_4628;
    }
    break;
  case 5:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_4608,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4b60,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UUInt16Property::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar20 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    puVar18 = puVar21;
    if (puVar20 != (undefined8 *)0x0) {
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_2268);
      local_4bb8 = uVar4 | 0x8001040000200;
      FUN_14174d7e0(puVar20,uVar22,0,uVar1);
      *(undefined4 *)((longlong)puVar20 + 0x34) = 2;
      *puVar20 = &PTR_FUN_144d23cd8;
      puVar21 = puVar20;
      puVar18 = (undefined8 *)&DAT_00000020;
    }
    local_2b28 = local_4508;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_141781fc0(local_2268);
      local_2b28 = local_4508;
    }
    break;
  case 6:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_44e8,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4b58,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UUInt32Property::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar20 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    puVar18 = puVar21;
    if (puVar20 != (undefined8 *)0x0) {
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_2118);
      local_4bb8 = uVar4 | 0x8001040000200;
      FUN_14174d7e0(puVar20,uVar22,0,uVar1);
      *(undefined4 *)((longlong)puVar20 + 0x34) = 4;
      *puVar20 = &PTR_FUN_144d240b8;
      puVar21 = puVar20;
      puVar18 = (undefined8 *)&DAT_00000040;
    }
    local_2b28 = local_43e8;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_141781fc0(local_2118);
      local_2b28 = local_43e8;
    }
    break;
  case 7:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_43c8,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4b50,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UUInt64Property::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    lVar17 = FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    puVar18 = puVar21;
    if (lVar17 != 0) {
      uVar22 = FUN_141781470(local_1fc8);
      local_4bb8 = *(ulonglong *)(puVar2 + 6);
      puVar21 = (undefined8 *)FUN_141781b20(lVar17,uVar22,0,puVar2[0xc]);
      puVar18 = (undefined8 *)&DAT_00000080;
    }
    local_2b28 = local_42c8;
    if ((char)puVar18 < '\0') {
      FUN_141781fc0(local_1fc8);
      local_2b28 = local_42c8;
    }
    break;
  case 8:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_42a8,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4b48,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UUInt64Property::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    lVar17 = FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    local_2b28 = local_41a8;
    if (lVar17 != 0) {
      uVar22 = FUN_141781470(local_1e78);
      local_4bb8 = *(ulonglong *)(puVar2 + 6);
      puVar21 = (undefined8 *)FUN_141781b20(lVar17,uVar22,0,puVar2[0xc]);
      FUN_141781fc0(local_1e78);
      local_2b28 = local_41a8;
    }
    break;
  case 9:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_4188,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4b40,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UUInt64Property::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    lVar17 = FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    local_2b28 = local_4088;
    if (lVar17 != 0) {
      uVar22 = FUN_141781470(local_1d28);
      local_4bb8 = *(ulonglong *)(puVar2 + 6);
      puVar21 = (undefined8 *)FUN_141781b20(lVar17,uVar22,0,puVar2[0xc]);
      FUN_141781fc0(local_1d28);
      local_2b28 = local_4088;
    }
    break;
  case 10:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_4068,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4b38,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UFloatProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar18 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    local_2b28 = local_3f68;
    if (puVar18 != (undefined8 *)0x0) {
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_1bd8);
      local_4bb8 = uVar4 | 0x8001040000200;
      FUN_14174d7e0(puVar18,uVar22,0,uVar1);
      *(undefined4 *)((longlong)puVar18 + 0x34) = 4;
      *puVar18 = &PTR_FUN_144d24878;
      FUN_141781fc0(local_1bd8);
      local_2b28 = local_3f68;
      puVar21 = puVar18;
    }
    break;
  case 0xb:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_3f48,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4b30,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UDoubleProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar18 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    local_2b28 = local_3e48;
    if (puVar18 != (undefined8 *)0x0) {
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_1a88);
      local_4bb8 = uVar4 | 0x8001040000200;
      FUN_14174d7e0(puVar18,uVar22,0,uVar1);
      *(undefined4 *)((longlong)puVar18 + 0x34) = 8;
      *puVar18 = &PTR_FUN_144d24c58;
      FUN_141781fc0(local_1a88);
      local_2b28 = local_3e48;
      puVar21 = puVar18;
    }
    break;
  case 0xc:
    pcVar3 = *(code **)(puVar2 + 0x10);
    local_4b90[0] = 0;
    puVar18 = puVar21;
    if (pcVar3 != (code *)0x0) {
      puVar20 = *(undefined8 **)(puVar2 + 0xe);
      puVar16 = (undefined8 *)operator_new(puVar20);
      puVar24 = puVar21;
      if (puVar16 != (undefined8 *)0x0) {
        _guard_xfg_dispatch_icall_nop(puVar16,0,(size_t)puVar20);
        puVar24 = puVar16;
      }
      (*pcVar3)(puVar24);
      puVar16 = puVar21;
      if (puVar20 != (undefined8 *)0x0) {
        do {
          if (*(byte *)((longlong)puVar24 + (longlong)puVar16) != 0) {
            local_4b90[0] = (uint)*(byte *)((longlong)puVar24 + (longlong)puVar16);
            puVar18 = puVar16;
            break;
          }
          puVar16 = (undefined8 *)(ulonglong)((int)puVar16 + 1);
          puVar18 = (undefined8 *)0x0;
        } while (puVar16 < puVar20);
      }
      FMemory::operator_delete(puVar24);
    }
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_3e28,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar20 = (undefined8 *)FName::FName(local_4b28,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar20;
    uVar19 = UBoolProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    lVar17 = FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    local_2b28 = local_3d28;
    if (lVar17 != 0) {
      iVar23 = puVar2[0xd];
      uVar22 = FUN_141781470(local_1938);
      local_4ba8 = CONCAT44(local_4ba8._4_4_,puVar2[0xc]);
      local_4bb0 = (undefined8 *)CONCAT44(local_4bb0._4_4_,local_4b90[0]);
      local_4bb8 = *(ulonglong *)(puVar2 + 6);
      local_4ba0 = iVar23 == 1;
      puVar21 = (undefined8 *)FUN_14174d660(lVar17,uVar22,0,puVar18);
      FUN_141781fc0(local_1938);
      local_2b28 = local_3d28;
    }
    break;
  case 0xd:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_3768,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4af8,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = USoftClassProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar18 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    if (puVar18 != (undefined8 *)0x0) {
      if (*(code **)(puVar2 + 0xe) != (code *)0x0) {
        puVar21 = (undefined8 *)(**(code **)(puVar2 + 0xe))();
      }
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_1158);
      uVar19 = FUN_14171bfe0();
      local_4bb8 = uVar4 | 0x8000000000000;
      FUN_14174d7e0(puVar18,uVar22,0,uVar1);
      puVar18[0xf] = puVar21;
      *puVar18 = &PTR_FUN_144d26230;
      bVar10 = true;
      *(undefined4 *)((longlong)puVar18 + 0x34) = 0x28;
      puVar18[0xe] = uVar19;
      puVar21 = puVar18;
    }
    local_2b28 = local_3668;
    if (bVar10) {
      FUN_141781fc0(local_1158);
      local_2b28 = local_3668;
    }
    break;
  case 0xe:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_3be8,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4b18,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UWeakObjectProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar18 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    if (puVar18 != (undefined8 *)0x0) {
      if (*(code **)(puVar2 + 0xe) != (code *)0x0) {
        puVar21 = (undefined8 *)(**(code **)(puVar2 + 0xe))();
      }
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_1698);
      local_4bb8 = uVar4 | 0x8001040000200;
      FUN_14174d7e0(puVar18,uVar22,0,uVar1);
      puVar18[0xe] = puVar21;
      *puVar18 = &PTR__scalar_deleting_destructor__144d253d0;
      bVar6 = true;
      *(undefined4 *)((longlong)puVar18 + 0x34) = 8;
      puVar21 = puVar18;
    }
    local_2b28 = local_3ae8;
    if (bVar6) {
      FUN_141781fc0(local_1698);
      local_2b28 = local_3ae8;
    }
    break;
  case 0xf:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_3ac8,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4b10,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = ULazyObjectProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar18 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    if (puVar18 != (undefined8 *)0x0) {
      if (*(code **)(puVar2 + 0xe) != (code *)0x0) {
        puVar21 = (undefined8 *)(**(code **)(puVar2 + 0xe))();
      }
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_1548);
      local_4bb8 = uVar4 | 0x8001040000000;
      FUN_14174d7e0(puVar18,uVar22,0,uVar1);
      puVar18[0xe] = puVar21;
      *puVar18 = &PTR__scalar_deleting_destructor__144d25768;
      bVar7 = true;
      *(undefined4 *)((longlong)puVar18 + 0x34) = 0x1c;
      puVar21 = puVar18;
    }
    local_2b28 = local_39c8;
    if (bVar7) {
      FUN_141781fc0(local_1548);
      local_2b28 = local_39c8;
    }
    break;
  case 0x10:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_39a8,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4b08,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = USoftObjectProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    lVar17 = FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    if (lVar17 != 0) {
      if (*(code **)(puVar2 + 0xe) != (code *)0x0) {
        puVar21 = (undefined8 *)(**(code **)(puVar2 + 0xe))();
      }
      uVar22 = FUN_141781470(local_13f8);
      local_4bb8 = *(ulonglong *)(puVar2 + 6);
      local_4bb0 = puVar21;
      puVar21 = (undefined8 *)USoftObjectProperty::USoftObjectProperty(lVar17,uVar22,0,puVar2[0xc]);
      bVar8 = true;
    }
    local_2b28 = local_38a8;
    if (bVar8) {
      FUN_141781fc0(local_13f8);
      local_2b28 = local_38a8;
    }
    break;
  case 0x11:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_3888,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4b00,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UClassProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar18 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    if (puVar18 != (undefined8 *)0x0) {
      puVar20 = puVar21;
      if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
        puVar20 = (undefined8 *)(**(code **)(puVar2 + 0x10))();
      }
      if (*(code **)(puVar2 + 0xe) != (code *)0x0) {
        puVar21 = (undefined8 *)(**(code **)(puVar2 + 0xe))();
      }
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_12a8);
      if (puVar20 == (undefined8 *)0x0) {
        puVar20 = (undefined8 *)FUN_14171bfe0();
      }
      local_4bb8 = uVar4 | 0x8001040000200;
      FUN_14174d7e0(puVar18,uVar22,0,uVar1);
      puVar18[0xf] = puVar21;
      *puVar18 = &PTR_FUN_144d25e98;
      bVar9 = true;
      *(undefined4 *)((longlong)puVar18 + 0x34) = 8;
      puVar18[0xe] = puVar20;
      puVar21 = puVar18;
    }
    local_2b28 = local_3788;
    if (bVar9) {
      FUN_141781fc0(local_12a8);
      local_2b28 = local_3788;
    }
    break;
  case 0x12:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_3d08,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4b20,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UObjectProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    lVar17 = FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    if (lVar17 != 0) {
      if (*(code **)(puVar2 + 0xe) != (code *)0x0) {
        puVar21 = (undefined8 *)(**(code **)(puVar2 + 0xe))();
      }
      uVar22 = FUN_141781470(local_17e8);
      local_4bb8 = *(ulonglong *)(puVar2 + 6);
      local_4bb0 = puVar21;
      puVar21 = (undefined8 *)FUN_141781a80(lVar17,uVar22,0,puVar2[0xc]);
      bVar5 = true;
    }
    local_2b28 = local_3c08;
    if (bVar5) {
      FUN_141781fc0(local_17e8);
      local_2b28 = local_3c08;
    }
    break;
  case 0x13:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_3648,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4af0,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UInterfaceProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar18 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    if (puVar18 != (undefined8 *)0x0) {
      if (*(code **)(puVar2 + 0xe) != (code *)0x0) {
        puVar21 = (undefined8 *)(**(code **)(puVar2 + 0xe))();
      }
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_1008);
      local_4bb8 = uVar4 & 0xffffff7ffff7fff7 | 0x1040000200;
      FUN_14174d7e0(puVar18,uVar22,0,uVar1);
      puVar18[0xe] = puVar21;
      *puVar18 = &PTR__scalar_deleting_destructor__144d265c8;
      bVar11 = true;
      *(undefined4 *)((longlong)puVar18 + 0x34) = 0x10;
      puVar21 = puVar18;
    }
    local_2b28 = local_3548;
    if (bVar11) {
      FUN_141781fc0(local_1008);
      local_2b28 = local_3548;
    }
    break;
  case 0x14:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_3528,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4ae8,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UNameProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar18 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    local_2b28 = local_3428;
    if (puVar18 != (undefined8 *)0x0) {
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_eb8);
      local_4bb8 = uVar4 | 0x8001040000200;
      FUN_14174d7e0(puVar18,uVar22,0,uVar1);
      *(undefined4 *)((longlong)puVar18 + 0x34) = 8;
      *puVar18 = &PTR_FUN_144d26938;
      FUN_141781fc0(local_eb8);
      local_2b28 = local_3428;
      puVar21 = puVar18;
    }
    break;
  case 0x15:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_3408,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4ae0,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UStrProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar18 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    local_2b28 = local_3308;
    if (puVar18 != (undefined8 *)0x0) {
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_d68);
      local_4bb8 = uVar4 | 0x8000000000200;
      FUN_14174d7e0(puVar18,uVar22,0,uVar1);
      *(undefined4 *)((longlong)puVar18 + 0x34) = 0x10;
      *puVar18 = &PTR_FUN_144d26ca8;
      FUN_141781fc0(local_d68);
      local_2b28 = local_3308;
      puVar21 = puVar18;
    }
    break;
  case 0x16:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_32e8,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4b98,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UArrayProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar18 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    local_2a08 = local_31e8;
    if (puVar18 != (undefined8 *)0x0) {
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_c18);
      local_4bb8 = uVar4 | 0x200;
      FUN_14174d7e0(puVar18,uVar22,0,uVar1);
      *(undefined4 *)((longlong)puVar18 + 0x34) = 0x10;
      *puVar18 = &PTR__scalar_deleting_destructor__144d1ba40;
      FUN_141781fc0(local_c18);
      local_2a08 = local_31e8;
      puVar21 = puVar18;
    }
    goto LAB_1417885f6;
  case 0x17:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_31c8,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4ad8,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UMapProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    lVar17 = FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    if (lVar17 != 0) {
      uVar22 = FUN_141781470(local_ac8);
      local_4bb8 = *(ulonglong *)(puVar2 + 6);
      puVar21 = (undefined8 *)UMapProperty::UMapProperty(lVar17,uVar22,0,puVar2[0xc]);
      FUN_141781fc0(local_ac8);
    }
    if (local_30c8 != 0) {
      FMemory::Free();
    }
    iVar23 = 2;
    goto LAB_1417886f4;
  case 0x18:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_30a8,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4ad0,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = USetProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    lVar17 = FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    local_2a08 = local_2fa8;
    if (lVar17 != 0) {
      uVar22 = FUN_141781470(local_978);
      local_4bb8 = *(ulonglong *)(puVar2 + 6);
      puVar21 = (undefined8 *)USetProperty::USetProperty(lVar17,uVar22,0,puVar2[0xc]);
      FUN_141781fc0(local_978);
      local_2a08 = local_2fa8;
    }
    goto LAB_1417885f6;
  case 0x19:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_2f88,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4ac8,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UStructProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    lVar17 = FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    if (lVar17 != 0) {
      if (*(code **)(puVar2 + 0xe) != (code *)0x0) {
        puVar21 = (undefined8 *)(**(code **)(puVar2 + 0xe))();
      }
      uVar22 = FUN_141781470(local_828);
      local_4bb8 = *(ulonglong *)(puVar2 + 6);
      local_4bb0 = puVar21;
      puVar21 = (undefined8 *)FUN_141769050(lVar17,uVar22,0,puVar2[0xc]);
      bVar12 = true;
    }
    local_2b28 = local_2e88;
    if (bVar12) {
      FUN_141781fc0(local_828);
      local_2b28 = local_2e88;
    }
    break;
  case 0x1a:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_2e68,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4ac0,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UDelegateProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar18 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    if (puVar18 != (undefined8 *)0x0) {
      if (*(code **)(puVar2 + 0xe) != (code *)0x0) {
        puVar21 = (undefined8 *)(**(code **)(puVar2 + 0xe))();
      }
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_6d8);
      local_4bb8 = uVar4 | 0x1000000200;
      FUN_14174d7e0(puVar18,uVar22,0,uVar1);
      puVar18[0xe] = puVar21;
      *puVar18 = &PTR__scalar_deleting_destructor__144d27a68;
      bVar13 = true;
      *(undefined4 *)((longlong)puVar18 + 0x34) = 0x10;
      puVar21 = puVar18;
    }
    local_2b28 = local_2d68;
    if (bVar13) {
      FUN_141781fc0(local_6d8);
      local_2b28 = local_2d68;
    }
    break;
  case 0x1b:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_2d48,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4ab8,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UMulticastDelegateProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar18 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    if (puVar18 != (undefined8 *)0x0) {
      if (*(code **)(puVar2 + 0xe) != (code *)0x0) {
        puVar21 = (undefined8 *)(**(code **)(puVar2 + 0xe))();
      }
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_588);
      local_4bb8 = uVar4 | 0x200;
      FUN_14174d7e0(puVar18,uVar22,0,uVar1);
      puVar18[0xe] = puVar21;
      *puVar18 = &PTR__scalar_deleting_destructor__144d27dd8;
      bVar14 = true;
      *(undefined4 *)((longlong)puVar18 + 0x34) = 0x10;
      puVar21 = puVar18;
    }
    local_2b28 = local_2c48;
    if (bVar14) {
      FUN_141781fc0(local_588);
      local_2b28 = local_2c48;
    }
    break;
  case 0x1c:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_2c28,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4ab0,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UTextProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    puVar18 = (undefined8 *)FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    if (puVar18 != (undefined8 *)0x0) {
      uVar4 = *(ulonglong *)(puVar2 + 6);
      uVar1 = puVar2[0xc];
      uVar22 = FUN_141781470(local_438);
      local_4bb8 = uVar4;
      FUN_14174d7e0(puVar18,uVar22,0,uVar1);
      *(undefined4 *)((longlong)puVar18 + 0x34) = 0x18;
      *puVar18 = &PTR_FUN_144d30d98;
      FUN_141781fc0(local_438);
      puVar21 = puVar18;
    }
    break;
  case 0x1d:
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_2b08,*(undefined8 *)(puVar2 + 2));
    uVar1 = puVar2[4];
    puVar18 = (undefined8 *)FName::FName(local_4aa8,*(undefined8 *)(lVar17 + 0x108),1);
    uVar22 = *puVar18;
    uVar19 = UEnumProperty::GetPrivateStaticClass();
    local_4ba8 = 0;
    local_4bb0 = (undefined8 *)((ulonglong)local_4bb0 & 0xffffffffffffff00);
    local_4bb8 = (ulonglong)local_4bb8._4_4_ << 0x20;
    lVar17 = FUN_141797e10(uVar19,param_1,uVar22,uVar1);
    if (lVar17 != 0) {
      if (*(code **)(puVar2 + 0xe) != (code *)0x0) {
        puVar21 = (undefined8 *)(**(code **)(puVar2 + 0xe))();
      }
      uVar22 = FUN_141781470(local_2e8);
      local_4bb8 = *(ulonglong *)(puVar2 + 6);
      local_4bb0 = puVar21;
      puVar21 = (undefined8 *)UEnumProperty::UEnumProperty(lVar17,uVar22,0,puVar2[0xc]);
      bVar15 = true;
    }
    if (bVar15) {
      FUN_141781fc0(local_2e8);
    }
LAB_1417885f6:
    if (local_2a08 != 0) {
      FMemory::Free();
    }
    iVar23 = 1;
    goto LAB_1417886f4;
  }
  iVar23 = local_4b98[0];
  if (local_2b28 != 0) {
    FMemory::Free();
    iVar23 = local_4b98[0];
  }
LAB_1417886f4:
  *(undefined4 *)(puVar21 + 6) = puVar2[8];
  if (*(longlong *)(puVar2 + 10) != 0) {
    lVar17 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(local_28c8);
    puVar18 = (undefined8 *)FName::FName(local_4a98,*(undefined8 *)(lVar17 + 0x108),1);
    puVar21[9] = *puVar18;
    if (local_27c8 != 0) {
      FMemory::Free();
    }
  }
  puVar18 = local_4b80;
  *local_4b88 = *local_4b88 + -1;
  for (; iVar23 != 0; iVar23 = iVar23 + -1) {
    FUN_141786db0(puVar21,puVar18,local_4b88);
  }
  return;
}



// FUNCTION 141788820 ConstructUScriptStruct body=436 status=ok
// SIG undefined ConstructUScriptStruct(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UE4CodeGen_Private::ConstructUScriptStruct(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_318 [32];
  undefined4 local_2f8;
  ulonglong local_2f0;
  undefined8 local_2e8;
  int local_2d8 [2];
  undefined8 local_2d0;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [256];
  longlong local_1b8;
  undefined1 local_198 [336];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  lVar11 = 0;
  local_2d8[0] = 0;
  pcVar2 = (code *)param_2[1];
  pcVar3 = (code *)param_2[2];
  lVar4 = lVar11;
  if ((code *)*param_2 != (code *)0x0) {
    lVar4 = (*(code *)*param_2)();
  }
  lVar5 = lVar11;
  if (pcVar2 != (code *)0x0) {
    lVar5 = (*pcVar2)();
  }
  lVar6 = lVar11;
  if (pcVar3 != (code *)0x0) {
    lVar6 = (*pcVar3)();
  }
  if (*param_1 == 0) {
    lVar7 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                      (local_2b8,param_2[3]);
    uVar1 = *(undefined4 *)(param_2 + 4);
    puVar8 = (undefined8 *)FName::FName(local_2c8,*(undefined8 *)(lVar7 + 0x108),1);
    uVar10 = *puVar8;
    uVar9 = FUN_14171c950();
    local_2e8 = 0;
    local_2f0 = local_2f0 & 0xffffffffffffff00;
    local_2f8 = 0;
    lVar4 = FUN_141797e10(uVar9,lVar4,uVar10,uVar1);
    if (lVar4 != 0) {
      uVar10 = FUN_141781470(local_198);
      local_2e8 = param_2[6];
      local_2f0 = param_2[5];
      local_2f8 = *(undefined4 *)((longlong)param_2 + 0x24);
      lVar11 = UScriptStruct::UScriptStruct(lVar4,uVar10,lVar5,lVar6);
      FUN_141781fc0(local_198);
    }
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    *param_1 = lVar11;
    local_2d8[0] = *(int *)(param_2 + 8);
    local_2d0 = param_2[7];
    while (local_2d8[0] != 0) {
      FUN_141786db0(lVar11,&local_2d0,local_2d8);
    }
    FUN_141726e60(lVar11,0);
  }
  return;
}



// FUNCTION 1417889e0 FUN_1417889e0 body=420 status=ok
// SIG undefined FUN_1417889e0(void)

undefined8 FUN_1417889e0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_res10;
  longlong local_48 [2];
  longlong *local_38;
  longlong *local_30;
  uint local_28;
  undefined1 local_20 [8];
  longlong *local_18;
  uint local_10;
  
  local_res10 = 0xd;
  if (*param_2 == 0xd) {
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_14158ce90(param_3,local_48);
    FText::FromString(&local_38,local_48);
    (**(code **)(*local_38 + 0x38))();
    local_28 = local_28 | 4;
    FText::operator=((longlong)*(int *)(param_1 + 0x44) +
                     *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4,
                     &local_38);
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
      return 2;
    }
  }
  else {
    if (*param_2 != 6) {
      return 0;
    }
    local_res10 = 0;
    (**(code **)(*param_3 + 0x40))(param_3,&local_res10);
    FText::FromName(local_20,&local_res10);
    local_10 = local_10 | 4;
    FText::operator=((longlong)*(int *)(param_1 + 0x44) +
                     *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4,
                     local_20);
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
  return 2;
}



// FUNCTION 141788b90 CopyValuesInternal body=70 status=ok
// SIG undefined CopyValuesInternal(void)

void TProperty<FText,UProperty>::CopyValuesInternal
               (undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_3 = param_3 - param_2;
    uVar1 = (ulonglong)param_4;
    do {
      FText::operator=(param_2,param_3 + param_2);
      param_2 = param_2 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 141788be0 CreateCluster body=935 status=ok
// SIG HCLUSTER CreateCluster(PCREATE_CLUSTER_CONFIG pConfig, PCLUSTER_SETUP_PROGRESS_CALLBACK pfnProgressCallback, PVOID pvCallbackArg)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HCLUSTER __stdcall
UObjectBaseUtility::CreateCluster
          (PCREATE_CLUSTER_CONFIG pConfig,PCLUSTER_SETUP_PROGRESS_CALLBACK pfnProgressCallback,
          PVOID pvCallbackArg)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  HCLUSTER extraout_RAX;
  HCLUSTER p_Var5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  undefined1 local_1e7;
  undefined1 local_1e6 [6];
  longlong local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b0 [2];
  longlong local_1a8;
  undefined4 *local_1a0;
  longlong local_198;
  undefined4 **local_190;
  longlong local_188;
  undefined8 local_100;
  _RTL_CRITICAL_SECTION local_78;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  HCLUSTER local_38;
  
  uVar10 = DAT_1469e8f18;
  local_38 = (HCLUSTER)(DAT_1468387a8 ^ (ulonglong)auStack_208);
  iVar4 = *(int *)((longlong)&pConfig->lpszClusterName + 4);
  lVar8 = 0;
  p_Var5 = local_38;
  if (iVar4 < (int)DAT_1469e91c4) {
    uVar7 = iVar4 >> 0x1f & 0xffff;
    uVar3 = iVar4 + uVar7;
    lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    p_Var5 = DAT_1469e91b0;
  }
  if ((*(int *)(lVar8 + 0xc) == 0) && ((*(byte *)(lVar8 + 0xb) & 1) == 0)) {
    if (DAT_1469e8f28 == 0) {
      lVar13 = (longlong)(int)DAT_1469e8f18;
      DAT_1469e8f18 = DAT_1469e8f18 + 1;
      if (DAT_1469e8f1c < (int)DAT_1469e8f18) {
        TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(&DAT_1469e8f10,uVar10);
      }
      puVar6 = (undefined4 *)(lVar13 * 0x50 + DAT_1469e8f10);
      *puVar6 = 0xffffffff;
      *(undefined8 *)(puVar6 + 2) = 0;
      *(undefined8 *)(puVar6 + 4) = 0;
      *(undefined8 *)(puVar6 + 6) = 0;
      *(undefined8 *)(puVar6 + 8) = 0;
      *(undefined8 *)(puVar6 + 10) = 0;
      *(undefined8 *)(puVar6 + 0xc) = 0;
      *(undefined8 *)(puVar6 + 0xe) = 0;
      *(undefined8 *)(puVar6 + 0x10) = 0;
      *(undefined1 *)(puVar6 + 0x12) = 0;
    }
    else {
      uVar10 = *(uint *)(DAT_1469e8f20 + -4 + (longlong)DAT_1469e8f28 * 4);
      DAT_1469e8f28 = DAT_1469e8f28 + -1;
    }
    *(int *)((longlong)(int)uVar10 * 0x50 + DAT_1469e8f10) = iVar4;
    _DAT_1469e8f30 = _DAT_1469e8f30 + 1;
    lVar13 = DAT_1469e8f10 + (longlong)(int)uVar10 * 0x50;
    if (*(int *)(lVar13 + 0x14) < 0x40) {
      TArray<float,FDefaultAllocator>::ResizeTo(lVar13 + 8,0x40);
    }
    local_1b0[0] = *(undefined4 *)((longlong)&pConfig->lpszClusterName + 4);
    local_1a8 = lVar13;
    if (DAT_1469e76c0 == 0) {
      DAT_1469e76c0 = FUN_1417380b0();
    }
    local_1a0 = local_1b0;
    local_190 = &local_1a0;
    local_100 = 0;
    local_198 = DAT_1469e76c0;
    local_188 = DAT_1469e76c0;
    InitializeCriticalSection(&local_78);
    SetCriticalSectionSpinCount(&local_78,4000);
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_3c = 0;
    local_1d8 = (undefined8 *)0x0;
    local_1d0 = 1;
    local_1c8 = 0;
    local_1c0 = 0;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
    *local_1d8 = pConfig;
    uVar12 = 0;
    if ((int)local_1d0 != 0) {
      local_1e0 = 0;
      FUN_141794370(&local_1a0,&local_1d8,&local_1e0);
      if (local_1e0 != 0) {
        LOCK();
        piVar1 = (int *)(local_1e0 + 0x48);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          FGraphEvent::Recycle(local_1e0);
        }
      }
    }
    puVar2 = local_1d8;
    *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x1000000;
    *(uint *)(lVar8 + 0xc) = ~uVar10;
    iVar4 = DAT_1464b56f0;
    if (DAT_1464b56f0 < 2) {
      iVar4 = 1;
    }
    if (*(int *)(lVar13 + 0x10) < iVar4) {
      puVar11 = *(uint **)(lVar13 + 8);
      uVar9 = (longlong)*(int *)(lVar13 + 0x10) & 0x3fffffffffffffff;
      if (puVar11 + *(int *)(lVar13 + 0x10) < puVar11) {
        uVar9 = uVar12;
      }
      if (uVar9 != 0) {
        do {
          uVar3 = *puVar11;
          uVar7 = uVar3 & 0xffff;
          if ((int)uVar3 < 0) {
            uVar3 = uVar3 + 0xffff;
            uVar7 = uVar7 - 0x10000;
          }
          puVar11 = puVar11 + 1;
          uVar12 = uVar12 + 1;
          *(undefined4 *)
           (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) + 0xc +
           (longlong)(int)uVar7 * 0x18) = 0;
        } while (uVar12 != uVar9);
      }
      FUObjectClusterContainer::FreeCluster(&DAT_1469e8f10,uVar10);
    }
    else {
      AlgoImpl::IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
                (*(undefined8 *)(lVar13 + 8),(longlong)*(int *)(lVar13 + 0x10),local_1e8,&local_1e8)
      ;
      AlgoImpl::IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
                (*(undefined8 *)(lVar13 + 0x18),(longlong)*(int *)(lVar13 + 0x20),local_1e7,
                 &local_1e7);
      AlgoImpl::IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
                (*(undefined8 *)(lVar13 + 0x28),(longlong)*(int *)(lVar13 + 0x30),local_1e6[0],
                 local_1e6);
    }
    if (local_1c8 != 0) {
      FMemory::Free();
    }
    if (puVar2 != (undefined8 *)0x0) {
      FMemory::Free(puVar2);
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
    DeleteCriticalSection(&local_78);
    p_Var5 = extraout_RAX;
  }
  return p_Var5;
}



// FUNCTION 141788f90 CreateClustersFromPackage body=184 status=ok
// SIG undefined CreateClustersFromPackage(void)

void CreateClustersFromPackage(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((((DAT_1464aaa49 == '\0') && (DAT_1464b56ec != 0)) && (DAT_1469e91ac == '\0')) &&
     (0 < DAT_1469e91a8)) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar4 = (longlong)*(int *)(param_1 + 0x20) * 0x88 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x88) {
      if ((*(longlong **)(lVar3 + 0x48) != (longlong *)0x0) &&
         (cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x48) + 0x18))(), cVar2 != '\0')) {
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar3 + 0x48);
      }
    }
  }
  return;
}



// FUNCTION 141789050 FUN_141789050 body=1091 status=ok
// SIG undefined FUN_141789050(void)

longlong FUN_141789050(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong *param_5,char param_6,char param_7,char param_8)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  longlong local_res18;
  longlong local_res20;
  undefined2 *in_stack_ffffffffffffff78;
  undefined1 local_58 [16];
  code *local_48;
  undefined1 *puStack_40;
  
  puStack_40 = local_58;
  local_58[0] = 0;
  local_48 = FUN_1406ddef0;
  local_res18 = param_3;
  local_res20 = param_4;
  lVar4 = FUN_1415d8310(&local_48,&DAT_14622e6dc);
  if (*(int *)(lVar4 + 0x5c) == 0) {
    LowLevelFatalErrorHandler
              ("Unknown",0xf00,
               L"Subobjects cannot be created outside of UObject constructors. UObject constructing subobjects cannot be created using new or placement new operator."
              );
    FDebug::AssertFailed(&DAT_144d28f86,"Unknown",0xf00);
  }
  uVar12 = 0;
  local_48 = (code *)0x0;
  if (local_res18 == 0) {
    puVar5 = (undefined8 *)FName::ToString(&local_res18,&local_48);
    in_stack_ffffffffffffff78 = &DAT_143f3eda8;
    if (*(int *)(puVar5 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar5;
    }
    LowLevelFatalErrorHandler("Unknown",0xf03,L"Illegal default subobject name: %s",puVar15);
    if (local_48 != (code *)0x0) {
      FMemory::Free();
    }
    puVar5 = (undefined8 *)FName::ToString(&local_res18,&local_48);
    if (*(int *)(puVar5 + 1) != 0) {
      in_stack_ffffffffffffff78 = (undefined2 *)*puVar5;
    }
    FDebug::AssertFailed
              (&DAT_144d28f87,"Unknown",0xf03,L"Illegal default subobject name: %s",
               in_stack_ffffffffffffff78);
    if (local_48 != (code *)0x0) {
      FMemory::Free();
    }
  }
  plVar11 = param_5;
  if (0 < *(int *)(param_1 + 0xa8)) {
    uVar16 = (ulonglong)(*(ulonglong *)(param_1 + 0xa0) != 0) - 1 & param_1 + 0x20U |
             *(ulonglong *)(param_1 + 0xa0);
    uVar6 = uVar12;
    uVar14 = uVar12;
    do {
      iVar13 = (int)uVar14;
      if (*(longlong *)(uVar6 + uVar16) == local_res18) {
        if (iVar13 != -1) {
          lVar4 = *(longlong *)(uVar16 + 8 + (longlong)iVar13 * 0x10);
          if ((lVar4 == 0) ||
             (cVar2 = FUN_1417905a0(param_1,local_res18,lVar4,param_4), cVar2 == '\0'))
          goto LAB_1417891fd;
          uVar6 = *(ulonglong *)(param_1 + 0xa0);
          if (*(ulonglong *)(param_1 + 0xa0) == 0) {
            uVar6 = param_1 + 0x20U;
          }
          plVar11 = *(longlong **)(uVar6 + 8 + (longlong)iVar13 * 0x10);
        }
        break;
      }
      uVar14 = (ulonglong)(iVar13 + 1U);
      uVar6 = uVar6 + 0x10;
    } while ((int)(iVar13 + 1U) < *(int *)(param_1 + 0xa8));
  }
  if (plVar11 == (longlong *)0x0) {
LAB_1417891fd:
    if (param_6 == '\0') {
      return 0;
    }
    plVar11 = param_5;
    if (param_5 == (longlong *)0x0) {
      return 0;
    }
  }
  if (((*(byte *)((longlong)plVar11 + 0xb4) & 1) != 0) && (param_7 != '\0')) {
    return 0;
  }
  lVar4 = plVar11[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar11 + 0x368))(plVar11);
    lVar4 = plVar11[0x1f];
  }
  uVar3 = *(uint *)(param_2 + 8);
  lVar7 = FUN_14178ca30(param_2);
  lVar7 = *(longlong *)(lVar7 + 0x10);
  lVar8 = *(longlong *)(param_1 + 8);
  uVar10 = *(uint *)(lVar7 + 0xb4);
  if (((lVar8 == 0) || (lVar8 == *(longlong *)(*(longlong *)(param_2 + 0x10) + 0xf8))) ||
     ((*(uint *)(param_2 + 8) >> 4 & 1) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (lVar8 == 0) {
    lVar8 = FUN_14178ca30(param_2);
  }
  uVar6 = UObject::GetDefaultSubobjectByName(lVar8,local_res18);
  if ((uVar6 != 0) && (*(longlong **)(uVar6 + 0x10) != plVar11)) {
    uVar6 = uVar12;
  }
  lVar8 = FUN_1417985e0(plVar11,param_2,local_res18,uVar3 & 0x69 | 0x40000,
                        (ulonglong)in_stack_ffffffffffffff78 & 0xffffffff00000000,uVar6,0,0,0);
  if (param_8 != '\0') goto LAB_141789434;
  if ((uVar10 & 0x10000080) == 0) {
    if (bVar1) goto LAB_141789360;
LAB_14178938b:
    lVar9 = UClass::GetDefaultSubobjectByName(lVar7,local_res18);
    if (lVar9 == 0) goto LAB_141789434;
  }
  else {
    if (!bVar1) goto LAB_141789434;
LAB_141789360:
    lVar9 = UObject::GetDefaultSubobjectByName(*(undefined8 *)(param_1 + 8),local_res18);
    if (lVar9 == 0) goto LAB_14178938b;
  }
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(local_res20 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
       (longlong)*(int *)(local_res20 + 0x90) * 8) != local_res20 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (lVar4 != lVar9)) {
    iVar13 = *(int *)(param_1 + 0x138);
    *(int *)(param_1 + 0x138) = iVar13 + 1;
    if (*(int *)(param_1 + 0x13c) < iVar13 + 1) {
      TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TInlineAllocator<8,FDefaultAllocator>_>
      ::ResizeGrow(param_1 + 0xb0,iVar13);
    }
    lVar4 = *(longlong *)(param_1 + 0x130);
    if (*(longlong *)(param_1 + 0x130) == 0) {
      lVar4 = param_1 + 0xb0;
    }
    plVar11 = (longlong *)(lVar4 + (longlong)iVar13 * 0x10);
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = lVar8;
      plVar11[1] = lVar9;
    }
  }
LAB_141789434:
  *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x40000;
  iVar13 = *(int *)(lVar8 + 0xc);
  if (iVar13 < (int)DAT_1469e91c4) {
    uVar10 = iVar13 >> 0x1f & 0xffff;
    uVar3 = iVar13 + uVar10;
    uVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
             (longlong)(int)((uVar3 & 0xffff) - uVar10) * 0x18;
  }
  *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) & 0xdfffffff;
  return lVar8;
}



// FUNCTION 1417894a0 FUN_1417894a0 body=1243 status=ok
// SIG undefined FUN_1417894a0(void)

/* WARNING: Type propagation algorithm not settling */

longlong FUN_1417894a0(longlong param_1,short *param_2)

{
  longlong lVar1;
  char cVar2;
  wint_t wVar3;
  wint_t wVar4;
  int iVar5;
  undefined8 uVar6;
  wchar_t **ppwVar7;
  code *pcVar8;
  int iVar9;
  longlong lVar10;
  code *pcVar11;
  wint_t *pwVar12;
  code *_Src;
  uint uVar13;
  wchar_t *pwVar14;
  int iVar15;
  longlong local_res8 [4];
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar18;
  short *psVar16;
  wchar_t *pwVar17;
  wchar_t *local_58;
  uint local_50;
  int local_4c;
  code *local_48;
  longlong *plStack_40;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  _Src = (code *)0x0;
  iVar15 = 0;
  local_50 = 0;
  local_4c = 0;
  local_58 = (wchar_t *)0x0;
  local_res8[0] = param_1;
  if (param_2 != (short *)0x0) {
    pcVar11 = _Src;
    if (*param_2 != 0) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (param_2[lVar10] != 0);
      pcVar11 = (code *)(ulonglong)((int)lVar10 + 1);
    }
    iVar5 = (int)pcVar11;
    pcVar8 = _Src;
    if (iVar5 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,pcVar11);
      pcVar8 = (code *)(ulonglong)local_50;
    }
    local_50 = (int)pcVar8 + iVar5;
    if (local_4c < (int)local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
    }
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop(local_58,param_2,(longlong)iVar5 * 2);
    }
  }
  psVar16 = (short *)CONCAT44(uVar18,0xffffffff);
  iVar5 = FUN_141592950(&local_58,&DAT_144d28200,0,0,psVar16);
  if (iVar5 != -1) {
    LowLevelFatalErrorHandler
              ("Unknown",0x2a9,
               L"Attempted to create a package with name containing double slashes. PackageName: %s"
               ,param_2);
    FDebug::AssertFailed
              (&DAT_144d28206,"Unknown",0x2a9,
               L"Attempted to create a package with name containing double slashes. PackageName: %s"
               ,param_2);
    psVar16 = param_2;
  }
  cVar2 = FString::EndsWith(&local_58,&DAT_144d28368,0);
  if (cVar2 != '\0') {
    iVar5 = local_50 - 1;
    if (local_50 == 0) {
      iVar5 = iVar15;
    }
    if (local_50 == 0) {
      pwVar17 = L"";
      iVar9 = iVar15;
    }
    else {
      pwVar17 = local_58;
      iVar9 = local_50 - 1;
    }
    if ((-1 < iVar5 + -1) && (iVar15 = iVar9, iVar5 <= iVar9)) {
      iVar15 = iVar5 + -1;
    }
    local_48 = (code *)0x0;
    uVar13 = iVar15 + 1;
    if (iVar15 == 0) {
      uVar13 = 0;
    }
    plStack_40 = (longlong *)(ulonglong)uVar13;
    if (0 < (int)uVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      _Src = local_48;
      uVar13 = (uint)plStack_40;
      if (0 < (int)(uint)plStack_40) {
        wcsncpy((wchar_t *)local_48,pwVar17,(longlong)iVar15);
        *(undefined2 *)(_Src + (longlong)iVar15 * 2) = 0;
      }
    }
    local_50 = uVar13;
    if ((uVar13 == 0) && (local_4c == 0)) {
      local_4c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,uVar13);
      _guard_xfg_dispatch_icall_nop(local_58,_Src,(longlong)(int)uVar13 * 2);
    }
    if (_Src != (code *)0x0) {
      FMemory::Free(_Src);
    }
  }
  if ((local_50 == 0) || (local_50 == 1)) {
    local_res8[1] = 0;
    uVar6 = UPackage::GetPrivateStaticClass();
    uVar6 = FUN_141791c20(local_res8 + 2,local_res8[0],uVar6,0);
    ppwVar7 = (wchar_t **)FName::ToString(uVar6,&local_48);
    if (&local_58 != ppwVar7) {
      if (local_58 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_58 = *ppwVar7;
      *ppwVar7 = (wchar_t *)0x0;
      local_50 = *(uint *)(ppwVar7 + 1);
      local_4c = *(int *)((longlong)ppwVar7 + 0xc);
      ppwVar7[1] = (wchar_t *)0x0;
    }
    if (local_48 != (code *)0x0) {
      FMemory::Free();
    }
  }
  pwVar17 = (wchar_t *)((ulonglong)psVar16 & 0xffffffff00000000);
  FUN_141796910(local_res8,&local_58,1,0,pwVar17);
  lVar10 = 0;
  if ((local_50 == 0) || (local_50 == 1)) {
    LowLevelFatalErrorHandler
              ("Unknown",0x2be,&DAT_144d284c4,
               L"Attempted to create a package with an empty package name.");
    pwVar17 = L"Attempted to create a package with an empty package name.";
    FDebug::AssertFailed
              (&DAT_144d282b6,"Unknown",0x2be,&DAT_144d284d8,
               L"Attempted to create a package with an empty package name.");
  }
  pwVar12 = &DAT_144d28560;
  pwVar14 = L"";
  if (local_50 != 0) {
    pwVar14 = local_58;
  }
  do {
    wVar3 = *(wint_t *)((longlong)(pwVar14 + -0xa26942b0) + (longlong)pwVar12);
    if ((wVar3 == 0) && (*pwVar12 == 0)) goto LAB_1417898f2;
    if (wVar3 != *pwVar12) {
      wVar3 = towlower(wVar3);
      wVar4 = towlower(*pwVar12);
      lVar1 = local_res8[0];
      if (wVar3 != wVar4) {
        if (wVar3 == wVar4) {
LAB_1417898f2:
          LowLevelFatalErrorHandler
                    ("Unknown",0x2d3,&DAT_144d28584,L"Attempted to create a package named \'None\'")
          ;
          FDebug::AssertFailed
                    (&DAT_144d28366,"Unknown",0x2d3,&DAT_144d28738,
                     L"Attempted to create a package named \'None\'");
        }
        else {
          pwVar14 = L"";
          if (local_50 != 0) {
            pwVar14 = local_58;
          }
          uVar6 = UPackage::GetPrivateStaticClass();
          lVar10 = FUN_141799410(uVar6,lVar1,pwVar14,0);
          if (lVar10 == 0) {
            pwVar14 = L"";
            if (local_50 != 0) {
              pwVar14 = local_58;
            }
            FName::FName(local_res8 + 2,pwVar14,1);
            cVar2 = FPackageName::IsShortPackageName(local_res8[2]);
            lVar1 = local_res8[0];
            if (cVar2 == '\0') {
              local_res8[1] = 0;
              if (local_res8[2] == 0) {
                plStack_40 = local_res8 + 1;
                local_res8[1] = 0;
                local_48 = FUN_1406ddef0;
                lVar10 = FUN_1415d8310(&local_48,&DAT_14622e6dc);
                if ((*(int *)(lVar10 + 0x5c) != 0) && (lVar1 == *(longlong *)(lVar10 + 0x60))) {
                  LowLevelFatalErrorHandler
                            ("Unknown",0xce1,&DAT_144d2c230,
                             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                            );
                  pwVar17 = 
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                  ;
                  FDebug::AssertFailed
                            (&DAT_144d28f43,"Unknown",0xce1,&DAT_144d2c240,
                             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                            );
                }
              }
              uVar6 = UPackage::GetPrivateStaticClass();
              lVar10 = FUN_1417985e0(uVar6,lVar1,local_res8[2],1,
                                     (ulonglong)pwVar17 & 0xffffffff00000000,0,0,0,0);
            }
          }
        }
        if (local_58 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        return lVar10;
      }
    }
    pwVar12 = pwVar12 + 1;
  } while( true );
}



// FUNCTION 141789980 CreatePersistentFrameReferenceCollectorArchive body=88 status=ok
// SIG undefined CreatePersistentFrameReferenceCollectorArchive(void)

void FReferenceCollector::CreatePersistentFrameReferenceCollectorArchive(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xb0);
  if (puVar1 != (undefined8 *)0x0) {
    FSimpleObjectReferenceCollectorArchive::FSimpleObjectReferenceCollectorArchive(puVar1,0,param_1)
    ;
    *puVar1 = &PTR__scalar_deleting_destructor__144d31320;
    *(undefined8 **)(param_1 + 0x10) = puVar1;
    return;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1417899e0 CreateVerySlowReferenceCollectorArchive body=61 status=ok
// SIG undefined CreateVerySlowReferenceCollectorArchive(void)

void FReferenceCollector::CreateVerySlowReferenceCollectorArchive(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = operator_new(0xb0);
  if (lVar1 != 0) {
    uVar2 = FSimpleObjectReferenceCollectorArchive::FSimpleObjectReferenceCollectorArchive
                      (lVar1,0,param_1);
    *(undefined8 *)(param_1 + 8) = uVar2;
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 141789a20 DeferredRegister body=95 status=ok
// SIG undefined DeferredRegister(void)

void UObjectBase::DeferredRegister
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  lVar1 = FUN_1417894a0(0,param_3);
  *(uint *)(lVar1 + 0x50) = *(uint *)(lVar1 + 0x50) | 0x10;
  *(longlong *)(param_1 + 0x20) = lVar1;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  puVar2 = (undefined8 *)FName::FName(local_res8,param_4,1);
  FUN_141782fa0(param_1,*puVar2,0);
  return;
}



// FUNCTION 141789a80 DestroyValueInternal body=132 status=ok
// SIG undefined DestroyValueInternal(void)

void TProperty<FText,UProperty>::DestroyValueInternal(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      plVar4 = *(longlong **)((longlong)(iVar6 * *(int *)(param_1 + 0x34)) + 8 + param_2);
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
    } while (iVar6 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 141789b10 FUN_141789b10 body=17 status=ok
// SIG undefined FUN_141789b10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141789b10(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lStack_58;
  int iStack_50;
  undefined8 *puStack_48;
  longlong lStack_40;
  uint uStack_38;
  uint uStack_34;
  
  param_1[2] = 0;
  *param_1 = 0;
  if ((char)param_1[3] == '\0') {
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (DAT_1468c217e == '\0') {
    FUN_1417940e0();
  }
  FUN_141717090();
  if (DAT_1464aaa49 != '\0') {
    uVar9 = UObject::GetPrivateStaticClass();
    FObjectIterator::FObjectIterator(&lStack_58,uVar9,0,0,0);
    puVar14 = puStack_48;
    iVar13 = iStack_50;
    if (puStack_48 != (undefined8 *)0x0) {
      do {
        if (puVar14 == (undefined8 *)0x0) {
          plVar12 = (longlong *)0x0;
        }
        else {
          plVar12 = (longlong *)*puVar14;
        }
        cVar5 = (**(code **)(*plVar12 + 0x1a0))(plVar12);
        iVar2 = *(int *)((longlong)plVar12 + 0xc);
        uVar8 = iVar2 >> 0x1f;
        if (cVar5 == '\0') {
          if (iVar2 < (int)DAT_1469e91c4) {
            uVar7 = iVar2 + (uVar8 & 0xffff);
            lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                     (longlong)(int)((uVar7 & 0xffff) - (uVar8 & 0xffff)) * 0x18;
          }
          else {
            lVar11 = 0;
          }
          if ((*(uint *)(lVar11 + 8) >> 0x1e & 1) != 0) {
            if (iVar2 < (int)DAT_1469e91c4) {
              uVar7 = iVar2 + (uVar8 & 0xffff);
              lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                       (longlong)(int)((uVar7 & 0xffff) - (uVar8 & 0xffff)) * 0x18;
            }
            else {
              lVar11 = 0;
            }
            *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) & 0xbfffffff;
          }
        }
        else if (iVar2 < (int)DAT_1469e91c4) {
          uVar7 = iVar2 + (uVar8 & 0xffff);
          puVar1 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) + 8 +
                           (longlong)(int)((uVar7 & 0xffff) - (uVar8 & 0xffff)) * 0x18);
          *puVar1 = *puVar1 | 0x40000000;
        }
        else {
          _DAT_00000008 = _DAT_00000008 | 0x40000000;
        }
LAB_141786110:
        do {
          do {
            iVar13 = iVar13 + 1;
            if (*(int *)(lStack_58 + 0x24) <= iVar13) goto LAB_141786182;
            while( true ) {
              uVar7 = iVar13 >> 0x1f & 0xffff;
              uVar8 = iVar13 + uVar7;
              lVar10 = (longlong)(int)((uVar8 & 0xffff) - uVar7);
              lVar11 = *(longlong *)
                        (*(longlong *)(lStack_58 + 0x10) + (longlong)((int)uVar8 >> 0x10) * 8);
              lVar3 = *(longlong *)(lVar11 + lVar10 * 0x18);
              puVar14 = (undefined8 *)(lVar11 + lVar10 * 0x18);
              if (lVar3 != 0) break;
              iVar13 = iVar13 + 1;
              if (*(int *)(lStack_58 + 0x24) <= iVar13) goto LAB_141786182;
            }
          } while ((*(uint *)(lVar3 + 8) & uStack_38) != 0);
          lVar11 = UObject::GetPrivateStaticClass();
          if (lStack_40 != lVar11) {
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lStack_40 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lStack_40 + 0x90) * 8) != lStack_40 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_141786110;
          }
          uVar8 = *(uint *)(lVar3 + 0xc);
          if ((int)uVar8 < (int)DAT_1469e91c4) {
            uVar7 = uVar8 & 0xffff;
            if ((int)uVar8 < 0) {
              uVar8 = uVar8 + 0xffff;
              uVar7 = uVar7 - 0x10000;
            }
            lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                     (longlong)(int)uVar7 * 0x18;
          }
          else {
            lVar11 = 0;
          }
        } while ((*(uint *)(lVar11 + 8) & uStack_34) != 0);
      } while( true );
    }
LAB_141786182:
    iVar13 = param_1[1] + 1;
    if (param_1[1] + 1 <= *param_1) {
      iVar13 = *param_1;
    }
    *param_1 = iVar13;
  }
  *(undefined1 *)(param_1 + 3) = 0;
  DAT_1464aaa49 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001417861a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141789b30 FUN_141789b30 body=113 status=ok
// SIG undefined FUN_141789b30(void)

void FUN_141789b30(undefined8 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  piVar2 = piVar1 + (longlong)*(int *)(param_1 + 1) * 0x14;
  if (piVar1 != piVar2) {
    do {
      if (-1 < *piVar1) {
        FUObjectClusterContainer::DissolveCluster(param_1,piVar1);
      }
      piVar1 = piVar1 + 0x14;
    } while (piVar1 != piVar2);
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  return;
}



// FUNCTION 141789bb0 DissolveCluster body=384 status=ok
// SIG undefined DissolveCluster(void)

void FUObjectClusterContainer::DissolveCluster(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar7 = 0;
  uVar6 = *param_2 >> 0x1f & 0xffff;
  uVar4 = *param_2 + uVar6;
  puVar2 = *(uint **)(param_2 + 0xe);
  lVar5 = (longlong)(int)((uVar4 & 0xffff) - uVar6);
  lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8);
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  iVar1 = param_2[0x10];
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  if ((*(uint *)(lVar3 + 8 + lVar5 * 0x18) >> 0x1c & 1) == 0) {
    puVar9 = *(uint **)(param_2 + 2);
    uVar4 = *(uint *)(lVar3 + 0xc + lVar5 * 0x18);
    uVar8 = (longlong)param_2[4] & 0x3fffffffffffffff;
    if (puVar9 + param_2[4] < puVar9) {
      uVar8 = uVar7;
    }
    uVar11 = uVar7;
    if (uVar8 != 0) {
      do {
        uVar6 = *puVar9;
        uVar10 = uVar6 & 0xffff;
        if ((int)uVar6 < 0) {
          uVar6 = uVar6 + 0xffff;
          uVar10 = uVar10 - 0x10000;
        }
        puVar9 = puVar9 + 1;
        uVar11 = uVar11 + 1;
        *(undefined4 *)
         (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) + 0xc +
         (longlong)(int)uVar10 * 0x18) = 0;
      } while (uVar11 != uVar8);
    }
    FreeCluster(param_1,~uVar4);
  }
  uVar8 = (longlong)iVar1 & 0x3fffffffffffffff;
  if (puVar2 + iVar1 < puVar2) {
    uVar8 = uVar7;
  }
  puVar9 = puVar2;
  if (uVar8 != 0) {
    do {
      uVar4 = *puVar9;
      uVar6 = uVar4 & 0xffff;
      if ((int)uVar4 < 0) {
        uVar4 = uVar4 + 0xffff;
        uVar6 = uVar6 - 0x10000;
      }
      uVar4 = *(uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) + 0xc +
                       (longlong)(int)uVar6 * 0x18);
      if (uVar4 != 0) {
        DissolveCluster(param_1,(longlong)(int)~uVar4 * 0x50 + *param_1);
      }
      puVar9 = puVar9 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar8);
  }
  if (puVar2 != (uint *)0x0) {
    FMemory::Free(puVar2);
  }
  return;
}



// FUNCTION 141789d30 DissolveClusterAndMarkObjectsAsUnreachable body=358 status=ok
// SIG undefined DissolveClusterAndMarkObjectsAsUnreachable(void)

void FUObjectClusterContainer::DissolveClusterAndMarkObjectsAsUnreachable
               (longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar5 = *(uint *)((longlong)param_2 + 0xc);
  uVar7 = 0;
  lVar10 = (longlong)(int)~uVar5 * 0x50 + *param_1;
  puVar3 = *(uint **)(lVar10 + 0x38);
  *(undefined8 *)(lVar10 + 0x38) = 0;
  iVar2 = *(int *)(lVar10 + 0x40);
  *(undefined8 *)(lVar10 + 0x40) = 0;
  puVar9 = *(uint **)(lVar10 + 8);
  uVar8 = (longlong)*(int *)(lVar10 + 0x10) & 0x3fffffffffffffff;
  if (puVar9 + *(int *)(lVar10 + 0x10) < puVar9) {
    uVar8 = uVar7;
  }
  uVar11 = uVar7;
  if (uVar8 != 0) {
    do {
      uVar4 = *puVar9;
      uVar6 = uVar4 & 0xffff;
      if ((int)uVar4 < 0) {
        uVar4 = uVar4 + 0xffff;
        uVar6 = uVar6 - 0x10000;
      }
      puVar9 = puVar9 + 1;
      uVar11 = uVar11 + 1;
      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8);
      puVar1 = (uint *)(lVar10 + 8 + (longlong)(int)uVar6 * 0x18);
      *puVar1 = *puVar1 | 0x10000000;
      *(undefined4 *)(lVar10 + 0xc + (longlong)(int)uVar6 * 0x18) = 0;
    } while (uVar11 != uVar8);
  }
  (**(code **)(*(longlong *)*param_2 + 0x30))();
  FreeCluster(param_1,~uVar5);
  uVar8 = (longlong)iVar2 & 0x3fffffffffffffff;
  if (puVar3 + iVar2 < puVar3) {
    uVar8 = uVar7;
  }
  puVar9 = puVar3;
  if (uVar8 != 0) {
    do {
      uVar5 = *puVar9;
      uVar4 = uVar5 & 0xffff;
      if ((int)uVar5 < 0) {
        uVar5 = uVar5 + 0xffff;
        uVar4 = uVar4 - 0x10000;
      }
      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
               (longlong)(int)uVar4 * 0x18;
      uVar5 = *(uint *)(lVar10 + 8);
      if ((uVar5 >> 0x18 & 1) != 0) {
        *(uint *)(lVar10 + 8) = uVar5 | 0x10000000;
        DissolveClusterAndMarkObjectsAsUnreachable(param_1);
      }
      puVar9 = puVar9 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar8);
  }
  if (puVar3 != (uint *)0x0) {
    FMemory::Free(puVar3);
  }
  return;
}



// FUNCTION 141789ea0 DissolveClusters body=119 status=ok
// SIG undefined DissolveClusters(void)

void FUObjectClusterContainer::DissolveClusters(undefined8 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  piVar2 = piVar1 + (longlong)*(int *)(param_1 + 1) * 0x14;
  if (piVar1 != piVar2) {
    do {
      if ((-1 < *piVar1) && ((char)piVar1[0x12] != '\0')) {
        DissolveCluster(param_1,piVar1);
      }
      piVar1 = piVar1 + 0x14;
    } while (piVar1 != piVar2);
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  return;
}



// FUNCTION 141789f20 FUN_141789f20 body=11 status=ok
// SIG undefined FUN_141789f20(void)

bool FUN_141789f20(void)

{
  return DAT_1469e863c != 0;
}



// FUNCTION 141789f30 FUN_141789f30 body=250 status=ok
// SIG undefined FUN_141789f30(void)

void FUN_141789f30(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar1 < DAT_1469e9100) {
    _Init_thread_header(&DAT_1469e9100);
    if (DAT_1469e9100 == -1) {
      FName::FName(&DAT_1469e90f8,L"Class",1);
      _Init_thread_footer(&DAT_1469e9100);
    }
  }
  if (*piVar1 < DAT_1469e9110) {
    _Init_thread_header(&DAT_1469e9110);
    if (DAT_1469e9110 == -1) {
      FName::FName(&DAT_1469e9108,L"Outer",1);
      _Init_thread_footer(&DAT_1469e9110);
    }
  }
  UClass::EmitObjectReference(param_1,0x10,&DAT_1469e90f8);
  UClass::EmitObjectReference(param_1,0x20,&DAT_1469e9108);
  return;
}



// FUNCTION 14178a030 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
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



// FUNCTION 14178a0b0 FUN_14178a0b0 body=249 status=ok
// SIG undefined FUN_14178a0b0(void)

void FUN_14178a0b0(longlong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  plVar3 = (longlong *)param_1[1];
  iVar5 = (int)plVar3[1] - *(int *)((longlong)plVar3 + 0x34);
  if (iVar5 == 0) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    iVar4 = 0;
    if ((*(ulonglong *)(*param_1 + 0x38) & 0x1040000000) == 0) {
      uVar6 = 1;
      lVar8 = *plVar3;
      uVar1 = *(uint *)((longlong)param_1 + 0x1c);
      do {
        plVar3 = (longlong *)param_1[1];
        if ((-1 < iVar4) && (iVar4 < (int)plVar3[5])) {
          plVar7 = (longlong *)plVar3[4];
          if ((longlong *)plVar3[4] == (longlong *)0x0) {
            plVar7 = plVar3 + 2;
          }
          iVar2 = iVar4;
          if (iVar4 < 0) {
            iVar2 = iVar4 + 0x1f;
          }
          if ((*(uint *)((longlong)plVar7 + (longlong)(iVar2 >> 5) * 4) & uVar6) != 0) {
            plVar7 = (longlong *)*param_1;
            if ((~(byte)((ulonglong)plVar7[7] >> 0x24) & 1) != 0) {
              (**(code **)(*plVar7 + 0x328))(plVar7,*(int *)((longlong)plVar7 + 0x44) + lVar8);
              plVar3 = (longlong *)param_1[1];
            }
            iVar5 = iVar5 + -1;
          }
        }
        lVar8 = lVar8 + (ulonglong)uVar1;
        uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
        iVar4 = iVar4 + 1;
      } while (iVar5 != 0);
    }
  }
  FScriptSet::Empty(plVar3,param_2,param_1 + 2);
  return;
}



// FUNCTION 14178a1b0 FUN_14178a1b0 body=176 status=ok
// SIG undefined FUN_14178a1b0(void)

void FUN_14178a1b0(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  plVar2 = (longlong *)param_1[1];
  uVar1 = *(uint *)(plVar2 + 1);
  uVar4 = (ulonglong)uVar1;
  if (uVar1 == 0) {
    if (param_2 == 0) {
      return;
    }
  }
  else if ((*(ulonglong *)(*param_1 + 0x38) & 0x1040000000) == 0) {
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar2;
    }
    if (0 < (int)uVar1) {
      do {
        plVar2 = (longlong *)*param_1;
        if ((~(byte)((ulonglong)plVar2[7] >> 0x24) & 1) != 0) {
          (**(code **)(*plVar2 + 0x328))(plVar2,lVar3);
        }
        lVar3 = lVar3 + (int)param_1[2];
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      plVar2 = (longlong *)param_1[1];
    }
  }
  lVar3 = param_1[2];
  *(undefined4 *)(plVar2 + 1) = 0;
  if (param_2 != *(int *)((longlong)plVar2 + 0xc)) {
    FScriptArray::ResizeTo(plVar2,param_2,(int)lVar3);
  }
  return;
}



// FUNCTION 14178a260 FUN_14178a260 body=1211 status=ok
// SIG undefined FUN_14178a260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14178a260(void)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined1 local_f5 [5];
  longlong *local_f0;
  uint local_e8;
  uint local_e4;
  longlong local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  code *local_c8;
  undefined1 *puStack_c0;
  code *local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  puStack_c0 = &local_f7;
  local_f7 = 0;
  local_c8 = FUN_1406ddef0;
  local_a8 = 0x406ddef0;
  uStack_a4 = 1;
  puStack_a0 = puStack_c0;
  lVar4 = FUN_1415d8310(&local_a8,&DAT_14622e6dc);
  local_d8 = lVar4;
  cVar3 = (*(code *)PTR_CanBeUsedOnAnyThread_1464a8df0)();
  uVar1 = local_f8;
  iVar8 = *(int *)(lVar4 + 0x30) + -1;
  *(int *)(lVar4 + 0x30) = iVar8;
  if (cVar3 == '\0') {
    while (iVar8 == 0) {
      plVar7 = (longlong *)0x0;
      if (((*(int *)(lVar4 + 0x40) == 0) && (*(int *)(lVar4 + 0x28) == 0)) &&
         (*(int *)(lVar4 + 0x2c) == 0)) break;
      local_f0 = (longlong *)0x0;
      *(undefined4 *)(lVar4 + 0x30) = 1;
      local_e4 = 0;
      local_e8 = 0;
      local_88 = 0;
      local_80 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_48 = 0;
      local_40 = 0;
      plVar10 = plVar7;
      if (*(int *)(lVar4 + 0x40) != 0) {
        local_d0 = (undefined8 *)(lVar4 + 0x38);
        plVar14 = plVar7;
        do {
          puVar2 = local_d0;
          iVar8 = *(int *)(local_d0 + 1);
          if (iVar8 != 0) {
            uVar11 = (uint)plVar14;
            if ((int)plVar7 < (int)((uint)plVar14 + iVar8)) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(&local_f0);
              plVar10 = local_f0;
              uVar11 = local_e8;
            }
            _guard_xfg_dispatch_icall_nop
                      (plVar10 + (int)uVar11,(void *)*puVar2,(longlong)iVar8 << 3);
            local_e8 = uVar11 + iVar8;
            plVar14 = (longlong *)(ulonglong)local_e8;
          }
          *(undefined4 *)(puVar2 + 1) = 0;
          if (*(int *)((longlong)puVar2 + 0xc) != 0) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(puVar2,0);
          }
          iVar8 = (int)plVar14;
          local_e0 = (longlong)iVar8;
          AlgoImpl::
          IntroSortInternal<UObject_*,FIdentityFunctor,TDereferenceWrapper<UObject_*,FCompareUObjectByLinkerAndOffset>_>
                    (plVar10,local_e0,uVar1,local_f5);
          plVar7 = plVar10;
          plVar13 = plVar14;
          if (0 < iVar8) {
            do {
              if ((*(uint *)(*plVar7 + 8) >> 10 & 1) != 0) {
                lVar5 = FUN_1417a53c0(*plVar7);
                FUN_141740c00(lVar5 + 0x200);
              }
              plVar13 = (longlong *)((longlong)plVar13 + -1);
              plVar7 = plVar7 + 1;
            } while (plVar13 != (longlong *)0x0);
          }
          lVar5 = 0;
          bVar15 = false;
          if (*(int *)(lVar4 + 0x40) == 0) {
            local_f6 = 0;
            puStack_b0 = &local_f6;
            local_b8 = FUN_1406ddef0;
            local_98 = 0x406ddef0;
            uStack_94 = 1;
            uStack_90 = puStack_b0;
            lVar4 = FUN_1415d8310();
            local_f8 = *(undefined1 *)(lVar4 + 0x58);
            *(undefined1 *)(lVar4 + 0x58) = 1;
            plVar7 = local_f0;
            if (0 < iVar8) {
              do {
                lVar6 = FUN_1417a53c0(*plVar7);
                if ((lVar6 != 0) && (lVar6 != lVar5)) {
                  FUN_1417364d0(lVar6,0);
                  lVar5 = lVar6;
                }
                FUN_1417510e0();
                plVar14 = (longlong *)((longlong)plVar14 + -1);
                plVar7 = plVar7 + 1;
              } while (plVar14 != (longlong *)0x0);
            }
            lVar5 = local_e0;
            plVar10 = local_f0;
            *(undefined1 *)(lVar4 + 0x58) = local_f8;
            if (DAT_1468c21ab == '\0') {
              plVar7 = local_f0 + local_e0;
              for (plVar14 = local_f0; plVar14 != plVar7; plVar14 = plVar14 + 1) {
                plVar13 = (longlong *)*plVar14;
                if (plVar13 != (longlong *)0x0) {
                  lVar4 = UDynamicClass::GetPrivateStaticClass();
                  if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
                      lVar4 + 0x88)) {
                    bVar15 = false;
                  }
                  else {
                    bVar15 = true;
                  }
                  if ((bVar15) && (plVar13[0x1f] == 0)) {
                    (**(code **)(*plVar13 + 0x368))();
                  }
                }
              }
            }
            if (((DAT_1464aaa49 == '\0') && (DAT_1464b56ec != 0)) && (DAT_1469e91ac == '\0')) {
              uVar9 = 0;
              uVar12 = (ulonglong)((longlong)(plVar10 + lVar5) + (7 - (longlong)plVar10)) >> 3;
              if (plVar10 + lVar5 < plVar10) {
                uVar12 = uVar9;
              }
              plVar7 = plVar10;
              if (uVar12 != 0) {
                do {
                  plVar14 = (longlong *)*plVar7;
                  cVar3 = (**(code **)(*plVar14 + 0x18))(plVar14);
                  if (cVar3 != '\0') {
                    (**(code **)(*plVar14 + 0x28))(plVar14);
                  }
                  plVar7 = plVar7 + 1;
                  uVar9 = uVar9 + 1;
                } while (uVar9 != uVar12);
              }
            }
            lVar4 = local_d8;
            plVar14 = (longlong *)0x0;
            local_e8 = 0;
            uVar11 = *(uint *)(local_d8 + 0x40);
            if (local_e4 != uVar11) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(&local_f0,uVar11);
              uVar11 = *(uint *)(lVar4 + 0x40);
              plVar14 = (longlong *)(ulonglong)local_e8;
              plVar10 = local_f0;
            }
            bVar15 = uVar11 == 0;
          }
          plVar7 = (longlong *)(ulonglong)local_e4;
        } while (!bVar15);
      }
      FUN_1417555a0();
      FUN_141752a10();
      plVar7 = *(longlong **)(lVar4 + 0x48);
      uVar9 = 0;
      *(undefined8 *)(lVar4 + 0x48) = 0;
      iVar8 = *(int *)(lVar4 + 0x50);
      *(undefined8 *)(lVar4 + 0x50) = 0;
      uVar12 = (longlong)iVar8 & 0x1fffffffffffffff;
      if (plVar7 + iVar8 < plVar7) {
        uVar12 = uVar9;
      }
      plVar14 = plVar7;
      if (uVar12 != 0) {
        do {
          lVar5 = *plVar14;
          if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x318) != 0)) &&
             (*(longlong *)(lVar5 + 0xa0) != 0)) {
            ResetLoaders();
          }
          uVar9 = uVar9 + 1;
          plVar14 = plVar14 + 1;
        } while (uVar9 != uVar12);
      }
      FUN_1416f8290();
      if (plVar7 != (longlong *)0x0) {
        FMemory::Free(plVar7);
      }
      local_40 = 0;
      if (local_48 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_88);
      if (plVar10 != (longlong *)0x0) {
        FMemory::Free(plVar10);
      }
      iVar8 = *(int *)(lVar4 + 0x30) + -1;
      *(int *)(lVar4 + 0x30) = iVar8;
    }
    LOCK();
    DAT_1464b56f4 = DAT_1464b56f4 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14178a720 FUN_14178a720 body=353 status=ok
// SIG undefined FUN_14178a720(void)

undefined8
FUN_14178a720(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  void *_Dst;
  void *_Src;
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong local_38 [2];
  longlong local_28;
  longlong local_20 [3];
  
  if ((param_5 & 0x10000000) != 0) {
    return 0;
  }
  local_28 = *param_1;
  if (local_28 == 0) {
    iVar5 = (int)param_2[1];
    iVar2 = (5 - (uint)(iVar5 != 0)) + iVar5;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
    }
    lVar4 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
    builtin_wcsncpy((wchar_t *)(*param_2 + lVar4 * 2),L"None",4);
    *(undefined2 *)(*param_2 + 8 + lVar4 * 2) = 0;
  }
  else {
    FString::FString(local_20,param_1 + 1);
    puVar3 = (undefined8 *)FSoftObjectPath::ToString(&local_28,local_38);
    _Src = (void *)*puVar3;
    iVar5 = *(int *)(puVar3 + 1) + -1;
    if (*(int *)(puVar3 + 1) == 0) {
      iVar5 = 0;
    }
    if (iVar5 != 0) {
      iVar2 = (int)param_2[1];
      iVar1 = (uint)(iVar2 == 0) + iVar5 + iVar2;
      *(int *)(param_2 + 1) = iVar1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      _Dst = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_20[0] != 0) {
      FMemory::Free();
      return 1;
    }
  }
  return 1;
}



// FUNCTION 14178a890 FUN_14178a890 body=642 status=ok
// SIG undefined FUN_14178a890(void)

void FUN_14178a890(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  void *pvVar1;
  undefined2 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong local_38 [4];
  
  if ((param_6 >> 0x1c & 1) == 0) {
    if ((param_6 >> 0x13 & 1) == 0) {
      FUN_14161b800(param_2,param_3,(byte)param_6 >> 1 & 1);
    }
    else if ((param_6 & 2) == 0) {
      puVar6 = (undefined8 *)FText::ToString(param_3);
      pvVar3 = (void *)*puVar6;
      iVar7 = *(int *)(puVar6 + 1) + -1;
      if (*(int *)(puVar6 + 1) == 0) {
        iVar7 = 0;
      }
      if (iVar7 != 0) {
        iVar5 = (int)param_2[1];
        iVar4 = (uint)(iVar5 == 0) + iVar5 + iVar7;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
      }
    }
    else {
      iVar7 = (int)param_2[1];
      iVar5 = (2 - (uint)(iVar7 != 0)) + iVar7;
      *(int *)(param_2 + 1) = iVar5;
      if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
      }
      puVar2 = (undefined2 *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      *puVar2 = 0x22;
      puVar2[1] = 0;
      puVar6 = (undefined8 *)FText::ToString(param_3);
      pvVar3 = (void *)*puVar6;
      iVar7 = *(int *)(puVar6 + 1) + -1;
      if (*(int *)(puVar6 + 1) == 0) {
        iVar7 = 0;
      }
      if (iVar7 != 0) {
        iVar5 = (int)param_2[1];
        iVar4 = (uint)(iVar5 == 0) + iVar5 + iVar7;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
      }
      iVar7 = (int)param_2[1];
      iVar5 = (2 - (uint)(iVar7 != 0)) + iVar7;
      *(int *)(param_2 + 1) = iVar5;
      if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
      }
      puVar2 = (undefined2 *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      *puVar2 = 0x22;
      puVar2[1] = 0;
    }
  }
  else {
    local_38[0] = 0;
    local_38[1] = 0;
    puVar6 = (undefined8 *)UTextProperty::GenerateCppCodeForTextValue(local_38 + 2,param_3,local_38)
    ;
    pvVar3 = (void *)*puVar6;
    iVar7 = *(int *)(puVar6 + 1) + -1;
    if (*(int *)(puVar6 + 1) == 0) {
      iVar7 = 0;
    }
    if (iVar7 != 0) {
      iVar5 = (int)param_2[1];
      iVar4 = (uint)(iVar5 == 0) + iVar5 + iVar7;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
      }
      pvVar1 = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_38[2] != 0) {
      FMemory::Free();
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14178ab20 FUN_14178ab20 body=292 status=ok
// SIG undefined FUN_14178ab20(void)

void FUN_14178ab20(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  LPCWSTR pWVar4;
  bool bVar5;
  wchar_t *pwVar6;
  ulonglong local_res10;
  LPCWSTR local_28;
  int local_20;
  code *local_18;
  ulonglong *puStack_10;
  
  bVar5 = false;
  puStack_10 = &local_res10;
  local_res10 = local_res10 & 0xffffffff00000000;
  local_18 = FUN_1406ddef0;
  lVar2 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  if (((*(int *)(lVar2 + 0x20) == 0) ||
      (plVar1 = *(longlong **)
                 (*(longlong *)(lVar2 + 0x18) + -8 + (longlong)*(int *)(lVar2 + 0x20) * 8),
      plVar1 == (longlong *)0x0)) || (lVar2 = *(longlong *)(*plVar1 + 0x10), lVar2 == 0)) {
    pwVar6 = L"Unknown";
  }
  else {
    local_res10 = *(ulonglong *)(lVar2 + 0x18);
    FName::ToString(&local_res10,&local_18);
    pwVar6 = &DAT_143f3eda8;
    bVar5 = true;
    if ((int)puStack_10 != 0) {
      pwVar6 = (wchar_t *)local_18;
    }
  }
  FString::PrintfImpl(&local_28,L"CDO Constructor (%s): Failed to find %s\n",pwVar6,param_1);
  if ((bVar5) && (local_18 != (code *)0x0)) {
    FMemory::Free();
  }
  pWVar4 = L"";
  if (local_20 != 0) {
    pWVar4 = local_28;
  }
  FWindowsPlatformMisc::LocalPrint(pWVar4);
  pWVar4 = L"";
  if (local_20 != 0) {
    pWVar4 = local_28;
  }
  uVar3 = FUN_14171b4a0();
  FOutputDevice::Log(uVar3,2,pWVar4);
  if (local_28 != (LPCWSTR)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14178ac50 FindFunction body=15 status=ok
// SIG undefined FindFunction(void)

void UObject::FindFunction(longlong param_1,undefined8 param_2)

{
  FUN_141719c60(*(undefined8 *)(param_1 + 0x10),param_2,1);
  return;
}



// FUNCTION 14178ac60 FUN_14178ac60 body=329 status=ok
// SIG undefined FUN_14178ac60(void)

longlong FUN_14178ac60(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 local_res10;
  longlong local_28 [2];
  longlong local_18 [2];
  
  local_res10 = param_2;
  lVar1 = FUN_141719c60(*(undefined8 *)(param_1 + 0x10),param_2,1);
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_18,0);
    puVar3 = &DAT_143f3eda8;
    if (*(int *)(puVar2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar2;
    }
    puVar2 = (undefined8 *)FName::ToString(&local_res10,local_28);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar2;
    }
    LowLevelFatalErrorHandler("Unknown",0x4ab,L"Failed to find function %s in %s",puVar5,puVar4);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    puVar2 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_28,0);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar2;
    }
    puVar2 = (undefined8 *)FName::ToString(&local_res10,local_18);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar3 = (undefined2 *)*puVar2;
    }
    FDebug::AssertFailed
              (&DAT_144d2903b,"Unknown",0x4ab,L"Failed to find function %s in %s",puVar3,puVar4);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  return lVar1;
}



// FUNCTION 14178adb0 FindNearestCommonBaseClass body=104 status=ok
// SIG undefined FindNearestCommonBaseClass(void)

longlong UObjectBaseUtility::FindNearestCommonBaseClass(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar3 = param_2;
    do {
      if (lVar3 == lVar1) {
        return lVar1;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
      lVar2 = lVar1;
    } while (lVar3 != 0);
    for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == param_2) {
        return param_2;
      }
    }
    for (lVar3 = *(longlong *)(param_2 + 0x30); lVar2 = lVar1, lVar3 != 0;
        lVar3 = *(longlong *)(lVar3 + 0x30)) {
      for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar3) {
          return lVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14178ae20 FUN_14178ae20 body=511 status=ok
// SIG undefined FUN_14178ae20(void)

ulonglong FUN_14178ae20(undefined8 param_1,short *param_2)

{
  wint_t wVar1;
  wint_t wVar2;
  undefined2 **ppuVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  wint_t *pwVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  undefined8 in_stack_ffffffffffffffa8;
  uint uVar13;
  undefined2 *local_48;
  uint local_40;
  uint local_3c;
  longlong local_38 [2];
  ulonglong uVar9;
  
  uVar13 = (uint)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar5 = 0;
  local_48 = (undefined2 *)0x0;
  local_40 = 0;
  local_3c = 0;
  local_res8 = param_1;
  if (param_2 == (short *)0x0) {
    local_res10 = 0;
    uVar4 = UPackage::GetPrivateStaticClass();
    uVar4 = FUN_141791c20(local_res18,param_1,uVar4,0);
    ppuVar3 = (undefined2 **)FName::ToString(uVar4,local_38);
    if (&local_48 != ppuVar3) {
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_48 = *ppuVar3;
      *ppuVar3 = (undefined2 *)0x0;
      local_40 = *(uint *)(ppuVar3 + 1);
      local_3c = *(uint *)((longlong)ppuVar3 + 0xc);
      ppuVar3[1] = (undefined2 *)0x0;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    uVar9 = uVar5;
    if (*param_2 != 0) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (param_2[lVar8] != 0);
      uVar9 = (ulonglong)((int)lVar8 + 1);
    }
    iVar7 = (int)uVar9;
    uVar6 = uVar5;
    uVar11 = uVar5;
    if (iVar7 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,uVar9);
      uVar11 = (ulonglong)local_3c;
      uVar6 = (ulonglong)local_40;
    }
    local_40 = iVar7 + (int)uVar6;
    if ((int)uVar11 < (int)local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
    }
    if (iVar7 != 0) {
      _guard_xfg_dispatch_icall_nop(local_48,param_2,(longlong)iVar7 * 2);
    }
  }
  FUN_141796910(&local_res8,&local_48,1,0,(ulonglong)uVar13 << 0x20);
  pwVar10 = &DAT_144d308b0;
  puVar12 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar12 = local_48;
  }
  do {
    wVar1 = *(wint_t *)((longlong)(puVar12 + -0xa2698458) + (longlong)pwVar10);
    if ((wVar1 == 0) && (*pwVar10 == 0)) goto LAB_14178afaf;
    if (wVar1 != *pwVar10) {
      wVar1 = towlower(wVar1);
      wVar2 = towlower(*pwVar10);
      if (wVar1 != wVar2) {
        if (wVar1 == wVar2) {
LAB_14178afaf:
          LowLevelFatalErrorHandler
                    ("Unknown",0x299,&DAT_144d2ffe4,L"Attempted to create a package named \'None\'")
          ;
          FDebug::AssertFailed
                    (&DAT_144d29346,"Unknown",0x299,&DAT_144d30294,
                     L"Attempted to create a package named \'None\'");
        }
        else {
          puVar12 = &DAT_143f3eda8;
          if (local_40 != 0) {
            puVar12 = local_48;
          }
          uVar4 = UPackage::GetPrivateStaticClass();
          uVar5 = FUN_141799410(uVar4,local_res8,puVar12,0);
        }
        if (local_48 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        return uVar5;
      }
    }
    pwVar10 = pwVar10 + 1;
  } while( true );
}



// FUNCTION 14178b020 FixupCoreRedirects body=244 status=ok
// SIG undefined FixupCoreRedirects(void)

undefined8 FSoftObjectPath::FixupCoreRedirects(undefined8 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong local_68 [2];
  undefined1 local_58 [24];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  ToString(param_1,local_68);
  FCoreRedirectObjectName::FCoreRedirectObjectName(&local_28,local_68);
  FCoreRedirects::GetRedirectedName(&local_40,1,&local_28);
  if (((local_28 == CONCAT44(uStack_3c,local_40)) && (local_20 == CONCAT44(uStack_34,uStack_38))) &&
     (local_18 == local_30)) {
    cVar1 = FString::StartsWith(local_68,L"/Script/",1);
    if (cVar1 != '\0') {
      puVar2 = (undefined4 *)FCoreRedirects::GetRedirectedName(local_58,2,&local_28);
      local_40 = *puVar2;
      uStack_3c = puVar2[1];
      uStack_38 = puVar2[2];
      uStack_34 = puVar2[3];
      local_30 = *(longlong *)(puVar2 + 4);
    }
  }
  if (((local_28 == CONCAT44(uStack_3c,local_40)) && (local_20 == CONCAT44(uStack_34,uStack_38))) &&
     (local_18 == local_30)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FCoreRedirectObjectName::ToString(&local_40,local_58);
    FUN_1417978e0(param_1,uVar3);
    uVar3 = 1;
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 14178b120 FreeCluster body=704 status=ok
// SIG undefined FreeCluster(void)

void FUObjectClusterContainer::FreeCluster(longlong *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint *puVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  ulonglong local_res20;
  
  piVar12 = (int *)((longlong)param_2 * 0x50 + *param_1);
  iVar8 = *piVar12;
  uVar2 = 0;
  if (iVar8 < (int)DAT_1469e91c4) {
    uVar4 = iVar8 >> 0x1f & 0xffff;
    uVar1 = iVar8 + uVar4;
    uVar2 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
            (longlong)(int)((uVar1 & 0xffff) - uVar4) * 0x18;
  }
  *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) & 0xfeffffff;
  *(undefined4 *)(uVar2 + 0xc) = 0;
  puVar10 = *(uint **)(piVar12 + 6);
  local_res20 = 0;
  uVar2 = (longlong)piVar12[8] & 0x3fffffffffffffff;
  if (puVar10 + piVar12[8] < puVar10) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    do {
      uVar6 = 0;
      uVar1 = *puVar10;
      if ((-1 < (int)uVar1) &&
         (uVar1 = *(uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) + 0xc
                           + (longlong)(int)(uVar1 & 0xffff) * 0x18), (int)uVar1 < 0)) {
        lVar11 = (longlong)(int)~uVar1 * 0x50 + *param_1;
        lVar5 = (longlong)*(int *)(lVar11 + 0x40);
        if (*(int *)(lVar11 + 0x40) != 0) {
          bVar15 = **(int **)(lVar11 + 0x38) != *piVar12;
          uVar9 = uVar6;
          uVar14 = uVar6;
          do {
            iVar8 = (int)uVar9;
            uVar6 = uVar6 + 1;
            uVar9 = (ulonglong)(iVar8 + 1);
            if ((longlong)uVar6 < lVar5) {
              piVar3 = (int *)(*(longlong *)(lVar11 + 0x38) + uVar6 * 4);
              do {
                if (bVar15 != (*piVar3 != *piVar12)) break;
                uVar9 = (ulonglong)((int)uVar9 + 1);
                uVar6 = uVar6 + 1;
                piVar3 = piVar3 + 1;
              } while ((longlong)uVar6 < lVar5);
            }
            iVar7 = (int)uVar9 - iVar8;
            if (bVar15 != false) {
              iVar13 = (int)uVar14;
              if (iVar13 != iVar8) {
                ::_guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(lVar11 + 0x38) + (longlong)iVar13 * 4),
                           (void *)(*(longlong *)(lVar11 + 0x38) + (longlong)iVar8 * 4),
                           (longlong)iVar7 << 2);
              }
              uVar14 = (ulonglong)(uint)(iVar13 + iVar7);
            }
            bVar15 = (bool)(bVar15 ^ 1);
          } while ((longlong)uVar6 < lVar5);
          *(int *)(lVar11 + 0x40) = (int)uVar14;
        }
      }
      puVar10 = puVar10 + 1;
      local_res20 = local_res20 + 1;
    } while (local_res20 != uVar2);
  }
  *piVar12 = -1;
  piVar12[4] = 0;
  if (0x7fffffff < (uint)piVar12[5]) {
    TArray<float,FDefaultAllocator>::ResizeTo(piVar12 + 2,0);
  }
  piVar12[0xc] = 0;
  if ((piVar12[0xd] < 0) && (piVar12[0xd] != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(piVar12 + 10,0);
  }
  piVar12[8] = 0;
  if ((piVar12[9] < 0) && (piVar12[9] != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(piVar12 + 6,0);
  }
  piVar12[0x10] = 0;
  if ((piVar12[0x11] < 0) && (piVar12[0x11] != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(piVar12 + 0xe,0);
  }
  *(undefined1 *)(piVar12 + 0x12) = 0;
  iVar8 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar8 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar8 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar8);
  }
  *(int *)(param_1[2] + (longlong)iVar8 * 4) = param_2;
  *(int *)(param_1 + 4) = (int)param_1[4] + -1;
  return;
}



// FUNCTION 14178b3e0 FreeUObject body=21 status=ok
// SIG undefined FreeUObject(void)

void FUObjectAllocator::FreeUObject(longlong param_1,ulonglong param_2)

{
  if ((*(ulonglong *)(param_1 + 8) <= param_2) && (param_2 < *(ulonglong *)(param_1 + 0x10))) {
    return;
  }
  FMemory::Free(param_2);
  return;
}



// FUNCTION 14178b400 GatherDefaultSubobjectsForDuplication body=405 status=ok
// SIG undefined GatherDefaultSubobjectsForDuplication(void)

void FObjectDuplicationHelperMethods::GatherDefaultSubobjectsForDuplication
               (undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  BOOL BVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  
  uVar5 = 0;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1417571e0(param_1,&local_60);
  uVar7 = (ulonglong)((longlong)(local_60 + (int)local_58) + (7 - (longlong)local_60)) >> 3;
  if (local_60 + (int)local_58 < local_60) {
    uVar7 = uVar5;
  }
  plVar6 = local_60;
  if (uVar7 != 0) {
    do {
      lVar2 = *plVar6;
      if ((lVar2 != 0) &&
         (lVar4 = UObject::GetDefaultSubobjectByName(param_2,*(undefined8 *)(lVar2 + 0x18)),
         lVar4 != 0)) {
        BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_3 + 0x58));
        if (BVar3 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_3 + 0x58));
        }
        local_50 = (longlong *)(param_3 + 0x80);
        local_48 = (longlong *)(param_3 + 0x88);
        *local_50 = lVar2;
        *local_48 = lVar4;
        FUN_140a9d130(param_3 + 8,local_68,&local_50,0);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_3 + 0x58));
        iVar1 = *(int *)(param_4 + 200);
        *(int *)(param_4 + 200) = iVar1 + 1;
        if (*(int *)(param_4 + 0xcc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    ((longlong *)(param_4 + 0xc0),iVar1);
        }
        *(longlong *)(*(longlong *)(param_4 + 0xc0) + (longlong)iVar1 * 8) = lVar2;
        GatherDefaultSubobjectsForDuplication(lVar2,lVar4,param_3);
      }
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 1;
    } while (uVar5 != uVar7);
  }
  if (local_60 != (longlong *)0x0) {
    FMemory::Free(local_60);
  }
  return;
}



// FUNCTION 14178b5a0 GenerateCppCodeForTextValue body=5023 status=ok
// SIG undefined GenerateCppCodeForTextValue(void)

longlong *
UTextProperty::GenerateCppCodeForTextValue(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  void *pvVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  undefined8 local_res8;
  longlong local_1d8;
  longlong local_1d0;
  void *local_1c8;
  int local_1c0;
  int local_1bc;
  void *local_1b8;
  int local_1b0;
  int local_1ac;
  void *local_1a8;
  int local_1a0;
  int local_19c;
  void *local_198;
  int local_190;
  int local_18c;
  void *local_188;
  int local_180;
  int local_17c;
  longlong local_178;
  int local_170;
  int local_16c;
  longlong local_168;
  int local_160;
  int local_15c;
  longlong local_158 [4];
  void *local_138;
  int local_130;
  void *local_128;
  int local_120;
  void *local_118;
  int local_110;
  void *local_108;
  int local_100;
  void *local_f8;
  int local_f0;
  longlong local_e8;
  int local_e0;
  longlong local_d8;
  int local_d0;
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98 [2];
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar10 = FTextInspector::GetDisplayString(param_2);
  cVar6 = FText::IsEmpty();
  if (cVar6 != '\0') {
    iVar17 = (int)param_1[1];
    iVar7 = (0x12 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar7;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    lVar15 = (longlong)iVar17 - (ulonglong)(iVar17 != 0);
    builtin_wcsncpy((wchar_t *)(*param_1 + lVar15 * 2),L"FText::G",8);
    lVar15 = *param_1 + lVar15 * 2;
    builtin_wcsncpy((wchar_t *)(lVar15 + 0x10),L"etEm",4);
    builtin_wcsncpy((wchar_t *)(lVar15 + 0x18),L"pty(",4);
    *(undefined2 *)(lVar15 + 0x20) = 0x29;
    *(undefined2 *)(lVar15 + 0x22) = 0;
    return param_1;
  }
  cVar6 = FText::IsFromStringTable(param_2);
  if (cVar6 != '\0') {
    local_res8 = 0;
    local_158[0] = 0;
    local_158[1] = 0;
    uVar10 = FUN_141607d00();
    FStringTableRegistry::FindTableIdAndKey(uVar10,param_2,&local_res8,local_158);
    iVar17 = (int)param_1[1];
    iVar7 = (0x19 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar7;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    lVar16 = (longlong)iVar17 - (ulonglong)(iVar17 != 0);
    lVar15 = *param_1;
    builtin_wcsncpy((wchar_t *)(lVar15 + lVar16 * 2),L"FText::F",8);
    builtin_wcsncpy((wchar_t *)(lVar15 + 0x10 + lVar16 * 2),L"romStrin",8);
    builtin_wcsncpy((wchar_t *)(lVar15 + 0x20 + lVar16 * 2),L"gTable(\n",8);
    *(undefined2 *)(lVar15 + 0x30 + lVar16 * 2) = 0;
    pvVar5 = (void *)*param_3;
    iVar17 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar17 = 0;
    }
    if (iVar17 != 0) {
      iVar7 = (int)param_1[1];
      iVar8 = (uint)(iVar7 == 0) + iVar17 + iVar7;
      *(int *)(param_1 + 1) = iVar8;
      if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
      }
      pvVar2 = (void *)(*param_1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar5,(longlong)iVar17 * 2);
      *(undefined2 *)((longlong)iVar17 * 2 + (longlong)pvVar2) = 0;
    }
    iVar17 = (int)param_1[1];
    iVar7 = (2 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar7;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    puVar3 = (undefined2 *)(*param_1 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
    *puVar3 = 9;
    puVar3[1] = 0;
    local_1c0 = *(int *)(param_3 + 1);
    lVar15 = (longlong)local_1c0;
    pvVar5 = (void *)*param_3;
    local_1c8 = (void *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_1c8,(3 - (uint)(local_1c0 != 0)) + local_1c0,0);
    pvVar2 = local_1c8;
    ::_guard_xfg_dispatch_icall_nop(local_1c8,pvVar5,lVar15 * 2);
    iVar17 = local_1c0;
    lVar15 = (longlong)local_1c0;
    local_1c0 = (3 - (uint)(local_1c0 != 0)) + local_1c0;
    local_138 = pvVar2;
    if (local_1bc < local_1c0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,iVar17);
      local_138 = local_1c8;
    }
    puVar4 = (undefined4 *)((longlong)local_138 + (lVar15 - (ulonglong)(iVar17 != 0)) * 2);
    *puVar4 = 0x90009;
    *(undefined2 *)(puVar4 + 1) = 0;
    local_130 = local_1c0;
    uVar10 = FName::ToString(&local_res8,local_b8);
    puVar11 = (undefined8 *)FUN_14176f710(local_c8,uVar10,&local_138);
    pvVar5 = (void *)*puVar11;
    iVar7 = 0;
    iVar17 = *(int *)(puVar11 + 1) + -1;
    if (*(int *)(puVar11 + 1) == 0) {
      iVar17 = iVar7;
    }
    if (iVar17 != 0) {
      iVar8 = (int)param_1[1];
      iVar9 = (uint)(iVar8 == 0) + iVar17 + iVar8;
      *(int *)(param_1 + 1) = iVar9;
      if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
      }
      pvVar2 = (void *)(*param_1 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar5,(longlong)iVar17 * 2);
      *(undefined2 *)((longlong)iVar17 * 2 + (longlong)pvVar2) = 0;
    }
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
    if (local_b8[0] != 0) {
      FMemory::Free();
    }
    if (local_138 != (void *)0x0) {
      FMemory::Free();
    }
    iVar17 = (int)param_1[1];
    iVar8 = (0x19 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar8;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    lVar16 = (longlong)iVar17 - (ulonglong)(iVar17 != 0);
    lVar15 = *param_1;
    builtin_wcsncpy((wchar_t *)(lVar15 + lVar16 * 2),L", /* Str",8);
    builtin_wcsncpy((wchar_t *)(lVar15 + 0x10 + lVar16 * 2),L"ing Tabl",8);
    builtin_wcsncpy((wchar_t *)(lVar15 + 0x20 + lVar16 * 2),L"e ID */\n",8);
    *(undefined2 *)(lVar15 + 0x30 + lVar16 * 2) = 0;
    pvVar5 = (void *)*param_3;
    iVar17 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar17 = iVar7;
    }
    if (iVar17 != 0) {
      iVar8 = (int)param_1[1];
      iVar9 = (uint)(iVar8 == 0) + iVar17 + iVar8;
      *(int *)(param_1 + 1) = iVar9;
      if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
      }
      pvVar2 = (void *)(*param_1 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar5,(longlong)iVar17 * 2);
      *(undefined2 *)((longlong)iVar17 * 2 + (longlong)pvVar2) = 0;
    }
    iVar17 = (int)param_1[1];
    iVar8 = (2 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar8;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    local_1b8 = (void *)0x0;
    puVar3 = (undefined2 *)(*param_1 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
    *puVar3 = 9;
    puVar3[1] = 0;
    local_1b0 = *(int *)(param_3 + 1);
    lVar15 = (longlong)local_1b0;
    pvVar5 = (void *)*param_3;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_1b8,(3 - (uint)(local_1b0 != 0)) + local_1b0,0);
    pvVar2 = local_1b8;
    ::_guard_xfg_dispatch_icall_nop(local_1b8,pvVar5,lVar15 * 2);
    iVar17 = local_1b0;
    lVar15 = (longlong)local_1b0;
    local_1b0 = (3 - (uint)(local_1b0 != 0)) + local_1b0;
    local_128 = pvVar2;
    if (local_1ac < local_1b0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,iVar17);
      local_128 = local_1b8;
    }
    puVar4 = (undefined4 *)((longlong)local_128 + (lVar15 - (ulonglong)(iVar17 != 0)) * 2);
    *puVar4 = 0x90009;
    *(undefined2 *)(puVar4 + 1) = 0;
    local_120 = local_1b0;
    puVar11 = (undefined8 *)FUN_14176f710(local_a8,local_158,&local_128);
    pvVar5 = (void *)*puVar11;
    iVar17 = *(int *)(puVar11 + 1) + -1;
    if (*(int *)(puVar11 + 1) == 0) {
      iVar17 = iVar7;
    }
    if (iVar17 != 0) {
      iVar8 = (int)param_1[1];
      iVar9 = (uint)(iVar8 == 0) + iVar17 + iVar8;
      *(int *)(param_1 + 1) = iVar9;
      if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
      }
      pvVar2 = (void *)(*param_1 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar5,(longlong)iVar17 * 2);
      *(undefined2 *)((longlong)iVar17 * 2 + (longlong)pvVar2) = 0;
    }
    if (local_a8[0] != 0) {
      FMemory::Free();
    }
    if (local_128 != (void *)0x0) {
      FMemory::Free();
    }
    iVar17 = (int)param_1[1];
    iVar8 = (0xc - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar8;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    lVar15 = (longlong)iVar17 - (ulonglong)(iVar17 != 0);
    builtin_wcsncpy((wchar_t *)(*param_1 + lVar15 * 2),L" /* Key ",8);
    lVar15 = *param_1 + lVar15 * 2;
    *(undefined4 *)(lVar15 + 0x10) = 0x2f002a;
    *(undefined2 *)(lVar15 + 0x14) = 10;
    *(undefined2 *)(lVar15 + 0x16) = 0;
    pvVar5 = (void *)*param_3;
    iVar17 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar17 = iVar7;
    }
    if (iVar17 != 0) {
      iVar7 = (int)param_1[1];
      iVar8 = (uint)(iVar7 == 0) + iVar7 + iVar17;
      *(int *)(param_1 + 1) = iVar8;
      if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
      }
      pvVar2 = (void *)(*param_1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar5,(longlong)iVar17 * 2);
      *(undefined2 *)((longlong)iVar17 * 2 + (longlong)pvVar2) = 0;
    }
    iVar17 = (int)param_1[1];
    iVar7 = (3 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar7;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    puVar4 = (undefined4 *)(*param_1 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
    *puVar4 = 0x290009;
    *(undefined2 *)(puVar4 + 1) = 0;
    lVar15 = local_158[0];
    goto LAB_14178c90b;
  }
  cVar6 = FText::IsCultureInvariant();
  if (cVar6 != '\0') {
    iVar17 = (int)param_1[1];
    iVar7 = (0x1b - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar7;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    lVar15 = (longlong)iVar17 - (ulonglong)(iVar17 != 0);
    builtin_wcsncpy((wchar_t *)(*param_1 + lVar15 * 2),L"FText::A",8);
    lVar15 = *param_1 + lVar15 * 2;
    ((wchar_t *)(lVar15 + 0x10))[0] = L's';
    ((wchar_t *)(lVar15 + 0x10))[1] = L'C';
    ((wchar_t *)(lVar15 + 0x14))[0] = L'u';
    ((wchar_t *)(lVar15 + 0x14))[1] = L'l';
    ((wchar_t *)(lVar15 + 0x18))[0] = L't';
    ((wchar_t *)(lVar15 + 0x18))[1] = L'u';
    ((wchar_t *)(lVar15 + 0x1c))[0] = L'r';
    ((wchar_t *)(lVar15 + 0x1c))[1] = L'e';
    ((wchar_t *)(lVar15 + 0x20))[0] = L'I';
    ((wchar_t *)(lVar15 + 0x20))[1] = L'n';
    ((wchar_t *)(lVar15 + 0x24))[0] = L'v';
    ((wchar_t *)(lVar15 + 0x24))[1] = L'a';
    ((wchar_t *)(lVar15 + 0x28))[0] = L'r';
    ((wchar_t *)(lVar15 + 0x28))[1] = L'i';
    ((wchar_t *)(lVar15 + 0x2c))[0] = L'a';
    ((wchar_t *)(lVar15 + 0x2c))[1] = L'n';
    *(undefined4 *)(lVar15 + 0x30) = 0x280074;
    *(undefined2 *)(lVar15 + 0x34) = 0;
    local_1a0 = *(int *)(param_3 + 1);
    lVar15 = (longlong)local_1a0;
    pvVar5 = (void *)*param_3;
    local_1a8 = (void *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_1a8,(2 - (uint)(local_1a0 != 0)) + local_1a0,0);
    pvVar2 = local_1a8;
    ::_guard_xfg_dispatch_icall_nop(local_1a8,pvVar5,lVar15 * 2);
    iVar17 = local_1a0;
    lVar15 = (longlong)local_1a0;
    local_1a0 = (2 - (uint)(local_1a0 != 0)) + local_1a0;
    local_118 = pvVar2;
    if (local_19c < local_1a0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,iVar17);
      local_118 = local_1a8;
    }
    puVar3 = (undefined2 *)((longlong)local_118 + (lVar15 - (ulonglong)(iVar17 != 0)) * 2);
    *puVar3 = 9;
    puVar3[1] = 0;
    local_110 = local_1a0;
    puVar11 = (undefined8 *)FUN_14176f710(local_98,uVar10,&local_118);
    pvVar5 = (void *)*puVar11;
    iVar17 = *(int *)(puVar11 + 1) + -1;
    if (*(int *)(puVar11 + 1) == 0) {
      iVar17 = 0;
    }
    if (iVar17 != 0) {
      iVar7 = (int)param_1[1];
      iVar8 = (uint)(iVar7 == 0) + iVar7 + iVar17;
      *(int *)(param_1 + 1) = iVar8;
      if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
      }
      pvVar2 = (void *)(*param_1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar5,(longlong)iVar17 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar17 * 2) = 0;
    }
    if (local_98[0] != 0) {
      FMemory::Free();
    }
    if (local_118 != (void *)0x0) {
      FMemory::Free();
    }
    iVar17 = (int)param_1[1];
    iVar7 = (2 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar7;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    puVar3 = (undefined2 *)(*param_1 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
    *puVar3 = 0x29;
    puVar3[1] = 0;
    return param_1;
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  lVar15 = FTextInspector::GetSourceString();
  if ((lVar15 == 0) || (cVar6 = FText::ShouldGatherForLocalization(), cVar6 == '\0')) {
LAB_14178c737:
    iVar17 = (int)param_1[1];
    iVar7 = (0x13 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar7;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    local_168 = 0;
    lVar15 = (longlong)iVar17 - (ulonglong)(iVar17 != 0);
    builtin_wcsncpy((wchar_t *)(*param_1 + lVar15 * 2),L"FText::F",8);
    lVar15 = *param_1 + lVar15 * 2;
    ((wchar_t *)(lVar15 + 0x10))[0] = L'r';
    ((wchar_t *)(lVar15 + 0x10))[1] = L'o';
    ((wchar_t *)(lVar15 + 0x14))[0] = L'm';
    ((wchar_t *)(lVar15 + 0x14))[1] = L'S';
    ((wchar_t *)(lVar15 + 0x18))[0] = L't';
    ((wchar_t *)(lVar15 + 0x18))[1] = L'r';
    ((wchar_t *)(lVar15 + 0x1c))[0] = L'i';
    ((wchar_t *)(lVar15 + 0x1c))[1] = L'n';
    *(undefined4 *)(lVar15 + 0x20) = 0x280067;
    *(undefined2 *)(lVar15 + 0x24) = 0;
    TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>
              (&local_168,*param_3,*(int *)(param_3 + 1),0,2 - (uint)(*(int *)(param_3 + 1) != 0));
    iVar17 = local_160;
    lVar15 = (longlong)local_160;
    local_160 = (2 - (uint)(local_160 != 0)) + local_160;
    if (local_15c < local_160) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,iVar17);
    }
    puVar3 = (undefined2 *)(local_168 + (lVar15 - (ulonglong)(iVar17 != 0)) * 2);
    *puVar3 = 9;
    puVar3[1] = 0;
    local_d8 = local_168;
    local_d0 = local_160;
    puVar11 = (undefined8 *)FUN_14176f710(local_38,uVar10,&local_d8);
    pvVar5 = (void *)*puVar11;
    iVar17 = *(int *)(puVar11 + 1) + -1;
    if (*(int *)(puVar11 + 1) == 0) {
      iVar17 = 0;
    }
    if (iVar17 != 0) {
      iVar7 = (int)param_1[1];
      iVar8 = (uint)(iVar7 == 0) + iVar7 + iVar17;
      *(int *)(param_1 + 1) = iVar8;
      if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
      }
      pvVar2 = (void *)(*param_1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar5,(longlong)iVar17 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar17 * 2) = 0;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_d8 != 0) {
      FMemory::Free();
    }
    iVar17 = (int)param_1[1];
    iVar7 = (2 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar7;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    puVar3 = (undefined2 *)(*param_1 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
    *puVar3 = 0x29;
    puVar3[1] = 0;
  }
  else {
    uVar12 = FTextInspector::GetSharedDisplayString(local_88,param_2);
    uVar13 = FUN_141607f00();
    cVar6 = FOutputDevice::CanBeUsedOnAnyThread(uVar13,uVar12,&local_1d8,local_158 + 2);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_80 + 1;
      lVar16 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar17 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    plVar14 = (longlong *)FUN_141618d80(local_78,&local_1d8);
    if (&local_1d8 != plVar14) {
      if (local_1d8 != 0) {
        FMemory::Free();
      }
      local_1d8 = *plVar14;
      *plVar14 = 0;
      local_1d0 = plVar14[1];
      plVar14[1] = 0;
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (cVar6 == '\0') goto LAB_14178c737;
    iVar17 = (int)param_1[1];
    iVar7 = (0x51 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar7;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    builtin_wcsncpy((wchar_t *)(*param_1 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2),
                    L"FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(\n"
                    ,0x51);
    pvVar5 = (void *)*param_3;
    iVar17 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar17 = 0;
    }
    if (iVar17 != 0) {
      iVar7 = (int)param_1[1];
      iVar8 = (uint)(iVar7 == 0) + iVar7 + iVar17;
      *(int *)(param_1 + 1) = iVar8;
      if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
      }
      pvVar2 = (void *)(*param_1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar5,(longlong)iVar17 * 2);
      *(undefined2 *)((longlong)iVar17 * 2 + (longlong)pvVar2) = 0;
    }
    iVar17 = (int)param_1[1];
    iVar7 = (2 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar7;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    local_198 = (void *)0x0;
    puVar3 = (undefined2 *)(*param_1 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
    *puVar3 = 9;
    puVar3[1] = 0;
    local_190 = *(int *)(param_3 + 1);
    lVar16 = (longlong)local_190;
    pvVar5 = (void *)*param_3;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_198,(3 - (uint)(local_190 != 0)) + local_190,0);
    pvVar2 = local_198;
    ::_guard_xfg_dispatch_icall_nop(local_198,pvVar5,lVar16 * 2);
    iVar17 = local_190;
    lVar16 = (longlong)local_190;
    local_190 = (3 - (uint)(local_190 != 0)) + local_190;
    local_108 = pvVar2;
    if (local_18c < local_190) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,iVar17);
      local_108 = local_198;
    }
    puVar4 = (undefined4 *)((longlong)local_108 + (lVar16 - (ulonglong)(iVar17 != 0)) * 2);
    *puVar4 = 0x90009;
    *(undefined2 *)(puVar4 + 1) = 0;
    local_100 = local_190;
    puVar11 = (undefined8 *)FUN_14176f710(local_68,lVar15,&local_108);
    pvVar5 = (void *)*puVar11;
    iVar7 = 0;
    iVar17 = *(int *)(puVar11 + 1) + -1;
    if (*(int *)(puVar11 + 1) == 0) {
      iVar17 = iVar7;
    }
    if (iVar17 != 0) {
      iVar8 = (int)param_1[1];
      iVar9 = (uint)(iVar8 == 0) + iVar8 + iVar17;
      *(int *)(param_1 + 1) = iVar9;
      if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
      }
      pvVar2 = (void *)(*param_1 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar5,(longlong)iVar17 * 2);
      *(undefined2 *)((longlong)iVar17 * 2 + (longlong)pvVar2) = 0;
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (local_108 != (void *)0x0) {
      FMemory::Free();
    }
    iVar17 = (int)param_1[1];
    iVar8 = (0x16 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar8;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    lVar15 = (longlong)iVar17 - (ulonglong)(iVar17 != 0);
    builtin_wcsncpy((wchar_t *)(*param_1 + lVar15 * 2),L", /* Lit",8);
    lVar15 = *param_1 + lVar15 * 2;
    ((wchar_t *)(lVar15 + 0x10))[0] = L'e';
    ((wchar_t *)(lVar15 + 0x10))[1] = L'r';
    ((wchar_t *)(lVar15 + 0x14))[0] = L'a';
    ((wchar_t *)(lVar15 + 0x14))[1] = L'l';
    ((wchar_t *)(lVar15 + 0x18))[0] = L' ';
    ((wchar_t *)(lVar15 + 0x18))[1] = L'T';
    ((wchar_t *)(lVar15 + 0x1c))[0] = L'e';
    ((wchar_t *)(lVar15 + 0x1c))[1] = L'x';
    *(undefined8 *)(lVar15 + 0x20) = 0x2f002a00200074;
    *(undefined2 *)(lVar15 + 0x28) = 10;
    *(undefined2 *)(lVar15 + 0x2a) = 0;
    pvVar5 = (void *)*param_3;
    iVar17 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar17 = iVar7;
    }
    if (iVar17 != 0) {
      iVar8 = (int)param_1[1];
      iVar9 = (uint)(iVar8 == 0) + iVar8 + iVar17;
      *(int *)(param_1 + 1) = iVar9;
      if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
      }
      pvVar2 = (void *)(*param_1 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar5,(longlong)iVar17 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar17 * 2) = 0;
    }
    iVar17 = (int)param_1[1];
    iVar8 = (2 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar8;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    local_188 = (void *)0x0;
    puVar3 = (undefined2 *)(*param_1 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
    *puVar3 = 9;
    puVar3[1] = 0;
    local_180 = *(int *)(param_3 + 1);
    lVar15 = (longlong)local_180;
    pvVar5 = (void *)*param_3;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_188,(3 - (uint)(local_180 != 0)) + local_180,0);
    pvVar2 = local_188;
    ::_guard_xfg_dispatch_icall_nop(local_188,pvVar5,lVar15 * 2);
    iVar17 = local_180;
    lVar15 = (longlong)local_180;
    local_180 = (3 - (uint)(local_180 != 0)) + local_180;
    local_f8 = pvVar2;
    if (local_17c < local_180) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,iVar17);
      local_f8 = local_188;
    }
    puVar4 = (undefined4 *)((longlong)local_f8 + (lVar15 - (ulonglong)(iVar17 != 0)) * 2);
    *puVar4 = 0x90009;
    *(undefined2 *)(puVar4 + 1) = 0;
    local_f0 = local_180;
    puVar11 = (undefined8 *)FUN_14176f710(local_58,&local_1d8,&local_f8);
    pvVar5 = (void *)*puVar11;
    iVar17 = *(int *)(puVar11 + 1) + -1;
    if (*(int *)(puVar11 + 1) == 0) {
      iVar17 = iVar7;
    }
    if (iVar17 != 0) {
      iVar8 = (int)param_1[1];
      iVar9 = (uint)(iVar8 == 0) + iVar8 + iVar17;
      *(int *)(param_1 + 1) = iVar9;
      if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
      }
      pvVar2 = (void *)(*param_1 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar5,(longlong)iVar17 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar17 * 2) = 0;
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_f8 != (void *)0x0) {
      FMemory::Free();
    }
    iVar17 = (int)param_1[1];
    iVar8 = (0x13 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar8;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    lVar15 = (longlong)iVar17 - (ulonglong)(iVar17 != 0);
    builtin_wcsncpy((wchar_t *)(*param_1 + lVar15 * 2),L", /* Nam",8);
    lVar15 = *param_1 + lVar15 * 2;
    ((wchar_t *)(lVar15 + 0x10))[0] = L'e';
    ((wchar_t *)(lVar15 + 0x10))[1] = L's';
    ((wchar_t *)(lVar15 + 0x14))[0] = L'p';
    ((wchar_t *)(lVar15 + 0x14))[1] = L'a';
    ((wchar_t *)(lVar15 + 0x18))[0] = L'c';
    ((wchar_t *)(lVar15 + 0x18))[1] = L'e';
    ((wchar_t *)(lVar15 + 0x1c))[0] = L' ';
    ((wchar_t *)(lVar15 + 0x1c))[1] = L'*';
    *(undefined4 *)(lVar15 + 0x20) = 0xa002f;
    *(undefined2 *)(lVar15 + 0x24) = 0;
    pvVar5 = (void *)*param_3;
    iVar17 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar17 = iVar7;
    }
    if (iVar17 != 0) {
      iVar8 = (int)param_1[1];
      iVar9 = (uint)(iVar8 == 0) + iVar8 + iVar17;
      *(int *)(param_1 + 1) = iVar9;
      if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
      }
      pvVar2 = (void *)(*param_1 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar5,(longlong)iVar17 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar17 * 2) = 0;
    }
    iVar17 = (int)param_1[1];
    iVar8 = (2 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar8;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    local_178 = 0;
    puVar3 = (undefined2 *)(*param_1 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
    *puVar3 = 9;
    puVar3[1] = 0;
    TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>
              (&local_178,*param_3,*(int *)(param_3 + 1),0,3 - (uint)(*(int *)(param_3 + 1) != 0));
    iVar17 = local_170;
    lVar15 = (longlong)local_170;
    local_170 = (3 - (uint)(local_170 != 0)) + local_170;
    if (local_16c < local_170) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,iVar17);
    }
    puVar4 = (undefined4 *)(local_178 + (lVar15 - (ulonglong)(iVar17 != 0)) * 2);
    *puVar4 = 0x90009;
    *(undefined2 *)(puVar4 + 1) = 0;
    local_e8 = local_178;
    local_e0 = local_170;
    puVar11 = (undefined8 *)FUN_14176f710(local_48,local_158 + 2,&local_e8);
    pvVar5 = (void *)*puVar11;
    iVar17 = *(int *)(puVar11 + 1) + -1;
    if (*(int *)(puVar11 + 1) == 0) {
      iVar17 = iVar7;
    }
    if (iVar17 != 0) {
      iVar8 = (int)param_1[1];
      iVar9 = (uint)(iVar8 == 0) + iVar8 + iVar17;
      *(int *)(param_1 + 1) = iVar9;
      if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
      }
      pvVar2 = (void *)(*param_1 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar5,(longlong)iVar17 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar17 * 2) = 0;
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
    iVar17 = (int)param_1[1];
    iVar8 = (0xc - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar8;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    lVar15 = (longlong)iVar17 - (ulonglong)(iVar17 != 0);
    builtin_wcsncpy((wchar_t *)(*param_1 + lVar15 * 2),L" /* Key ",8);
    lVar15 = *param_1 + lVar15 * 2;
    *(undefined4 *)(lVar15 + 0x10) = 0x2f002a;
    *(undefined2 *)(lVar15 + 0x14) = 10;
    *(undefined2 *)(lVar15 + 0x16) = 0;
    pvVar5 = (void *)*param_3;
    iVar17 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar17 = iVar7;
    }
    if (iVar17 != 0) {
      iVar7 = (int)param_1[1];
      iVar8 = (uint)(iVar7 == 0) + iVar7 + iVar17;
      *(int *)(param_1 + 1) = iVar8;
      if (*(int *)((longlong)param_1 + 0xc) < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
      }
      pvVar2 = (void *)(*param_1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar2,pvVar5,(longlong)iVar17 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar17 * 2) = 0;
    }
    iVar17 = (int)param_1[1];
    iVar7 = (3 - (uint)(iVar17 != 0)) + iVar17;
    *(int *)(param_1 + 1) = iVar7;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    puVar4 = (undefined4 *)(*param_1 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
    *puVar4 = 0x290009;
    *(undefined2 *)(puVar4 + 1) = 0;
  }
  lVar15 = local_1d8;
  if (local_158[2] != 0) {
    FMemory::Free();
    lVar15 = local_1d8;
  }
LAB_14178c90b:
  if (lVar15 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14178c940 FUN_14178c940 body=226 status=ok
// SIG undefined FUN_14178c940(void)

longlong FUN_14178c940(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res8;
  local_res8[0] = 0;
  local_18 = FUN_1406ddef0;
  lVar1 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  if (*(int *)(lVar1 + 0x5c) == 0) {
    LowLevelFatalErrorHandler
              ("Unknown",0xce7,
               L"FObjectInitializer::Get() can only be used inside of UObject-derived class constructor."
              );
    FDebug::AssertFailed
              (&DAT_144d28f46,"Unknown",0xce7,
               L"FObjectInitializer::Get() can only be used inside of UObject-derived class constructor."
              );
  }
  if ((*(int *)(lVar1 + 0x20) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + -8 + (longlong)*(int *)(lVar1 + 0x20) * 8)
     , lVar1 != 0)) {
    return lVar1;
  }
  LowLevelFatalErrorHandler
            ("Unknown",0x3c,
             L"Tried to get the current ObjectInitializer, but none is set. Please use NewObject or NewNamedObject to construct new UObject-derived classes."
            );
  FDebug::AssertFailed
            (&DAT_143f3f584,"Unknown",0x3c,
             L"Tried to get the current ObjectInitializer, but none is set. Please use NewObject or NewNamedObject to construct new UObject-derived classes."
            );
  return 0;
}



// FUNCTION 14178ca30 FUN_14178ca30 body=443 status=ok
// SIG undefined FUN_14178ca30(void)

longlong FUN_14178ca30(longlong *param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  
  if ((*(uint *)(param_1 + 1) >> 0x1e & 1) != 0) {
    lVar4 = (**(code **)(*param_1 + 0x248))();
    if (lVar4 != 0) {
      return lVar4;
    }
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xbfffffff;
  }
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  AcquireSRWLockShared((PSRWLOCK)&DAT_1464b59b0);
  lVar4 = 0;
  if (iVar1 < DAT_1464b59a8) {
    lVar4 = *(longlong *)(DAT_1464b59a0 + (longlong)iVar1 * 8);
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_1464b59b0);
  if ((lVar4 == 0) &&
     (lVar4 = FUN_14178cc10(param_1[2],param_1[4],param_1[3],(int)param_1[1],0), lVar4 != 0)) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_1464b59b0);
    if (DAT_1464b59a8 == 0) {
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e9320);
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e9320);
      }
      iVar2 = DAT_1469e9318;
      lVar7 = (longlong)DAT_1469e9318;
      DAT_1469e9318 = DAT_1469e9318 + 1;
      if (DAT_1469e931c < DAT_1469e9318) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_1469e9310,iVar2);
      }
      *(undefined ***)(DAT_1469e9310 + lVar7 * 8) = &PTR_PTR_1464b5998;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e9320);
    }
    iVar2 = DAT_1464b59a8;
    if (DAT_1464b59a8 <= iVar1) {
      iVar6 = (iVar1 - DAT_1464b59a8) + 1;
      DAT_1464b59a8 = DAT_1464b59a8 + iVar6;
      if (DAT_1464b59ac < DAT_1464b59a8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_1464b59a0,iVar2);
      }
      if (iVar6 != 0) {
        lVar7 = (longlong)iVar2 * 8;
        do {
          puVar5 = (undefined8 *)(DAT_1464b59a0 + lVar7);
          lVar7 = lVar7 + 8;
          *puVar5 = 0;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    *(longlong *)(DAT_1464b59a0 + (longlong)iVar1 * 8) = lVar4;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1464b59b0);
  }
  return lVar4;
}



// FUNCTION 14178cbf0 GetArchetypeFromRequiredInfo body=19 status=ok
// SIG undefined GetArchetypeFromRequiredInfo(void)

void UObject::GetArchetypeFromRequiredInfo(void)

{
  FUN_14178cc10();
  return;
}



// FUNCTION 14178cc10 FUN_14178cc10 body=2771 status=ok
// SIG undefined FUN_14178cc10(void)

longlong FUN_14178cc10(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                      char param_5)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  uint uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *local_90;
  undefined8 local_88;
  undefined2 *local_80;
  undefined8 local_78;
  undefined2 *local_70;
  undefined8 local_68;
  undefined2 *local_60;
  undefined8 local_58;
  undefined2 *local_50;
  undefined8 local_48;
  undefined2 *local_40;
  undefined8 local_38;
  
  lVar9 = 0;
  if ((param_4 >> 4 & 1) != 0) {
    if (param_5 == '\0') {
      lVar5 = (**(code **)(*param_1 + 0x358))();
    }
    else {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x2f8))();
      lVar5 = (**(code **)(*plVar4 + 0x358))(plVar4);
    }
    goto LAB_14178d3fb;
  }
  if ((param_2 != 0) &&
     (lVar5 = *(longlong *)(param_2 + 0x10), lVar6 = UPackage::GetPrivateStaticClass(),
     lVar5 != lVar6)) {
    LockUObjectHashTables();
    lVar6 = FUN_14178cc10(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),
                          *(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 8),param_5);
    lVar5 = FUN_1417a3f20(lVar6,param_1,param_3);
    if (lVar5 == 0) {
LAB_14178cd25:
      if (((~(byte)(param_4 >> 0x16) & 1) == 0) && (cVar2 = FUN_140c619d0(param_2), cVar2 != '\0'))
      {
        plVar4 = *(longlong **)(param_2 + 0x30);
        lVar5 = lVar9;
        if (param_5 != '\0') {
          if (plVar4 == (longlong *)0x0) goto LAB_14178d39c;
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2f8))(plVar4);
        }
        while ((plVar4 != (longlong *)0x0 && ((*(uint *)((longlong)plVar4 + 0xb4) >> 0x12 & 1) != 0)
               )) {
          if ((DAT_1468c21ab != '\0') && ((*(uint *)(plVar4 + 1) >> 10 & 1) != 0)) {
            if (*(longlong *)(param_2 + 0x10) == 0) {
              local_68 = 5;
              local_70 = (undefined2 *)0x0;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
              FGenericPlatformString::Memcpy(local_70,&DAT_143f3edc8,10);
            }
            else {
              UObjectBaseUtility::GetFullName(param_2,&local_70,0);
            }
            puVar11 = &DAT_143f3eda8;
            if ((int)local_68 != 0) {
              puVar11 = local_70;
            }
            if ((param_1 == (longlong *)0x0) || (param_1[2] == 0)) {
              local_80 = (undefined2 *)0x0;
              local_78 = 5;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0);
              FGenericPlatformString::Memcpy(local_80,&DAT_143f3edc8,10);
            }
            else {
              UObjectBaseUtility::GetFullName(param_1,&local_80,0);
            }
            puVar12 = &DAT_143f3eda8;
            if ((int)local_78 != 0) {
              puVar12 = local_80;
            }
            if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x10) == 0)) {
              local_88 = 5;
              local_90 = (undefined2 *)0x0;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
              FGenericPlatformString::Memcpy(local_90,&DAT_143f3edc8,10);
            }
            else {
              UObjectBaseUtility::GetFullName(lVar6,&local_90,0);
            }
            puVar8 = &DAT_143f3eda8;
            if ((int)local_88 != 0) {
              puVar8 = local_90;
            }
            LowLevelFatalErrorHandler
                      ("Unknown",0x31,
                       L"%s had RF_NeedLoad when searching supers for an archetype of %s in %s",
                       puVar8,puVar12,puVar11);
            if (local_90 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_80 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_70 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (*(longlong *)(param_2 + 0x10) == 0) {
              local_38 = 5;
              local_40 = (undefined2 *)0x0;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_40,0);
              FGenericPlatformString::Memcpy(local_40,&DAT_143f3edc8,10);
            }
            else {
              UObjectBaseUtility::GetFullName(param_2,&local_40,0);
            }
            puVar11 = &DAT_143f3eda8;
            if ((int)local_38 != 0) {
              puVar11 = local_40;
            }
            if ((param_1 == (longlong *)0x0) || (param_1[2] == 0)) {
              local_50 = (undefined2 *)0x0;
              local_48 = 5;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
              FGenericPlatformString::Memcpy(local_50,&DAT_143f3edc8,10);
            }
            else {
              UObjectBaseUtility::GetFullName(param_1,&local_50,0);
            }
            puVar12 = &DAT_143f3eda8;
            if ((int)local_48 != 0) {
              puVar12 = local_50;
            }
            if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x10) == 0)) {
              local_58 = 5;
              local_60 = (undefined2 *)0x0;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
              FGenericPlatformString::Memcpy(local_60,&DAT_143f3edc8,10);
            }
            else {
              UObjectBaseUtility::GetFullName(lVar6,&local_60,0);
            }
            puVar8 = &DAT_143f3eda8;
            if ((int)local_58 != 0) {
              puVar8 = local_60;
            }
            FDebug::AssertFailed
                      (&DAT_144d28736,"Unknown",0x31,
                       L"%s had RF_NeedLoad when searching supers for an archetype of %s in %s",
                       puVar8,puVar12,puVar11);
            if (local_60 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_50 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_40 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
          lVar5 = FUN_1417a3f20(plVar4);
          if (lVar5 != 0) {
            uVar3 = *(uint *)(lVar5 + 0xc);
            if ((int)uVar3 < (int)DAT_1469e91c4) {
              uVar10 = uVar3 & 0xffff;
              if ((int)uVar3 < 0) {
                uVar3 = uVar3 + 0xffff;
                uVar10 = uVar10 - 0x10000;
              }
              lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                      (longlong)(int)uVar10 * 0x18;
            }
            else {
              lVar9 = 0;
            }
            if (((*(uint *)(lVar9 + 8) >> 0x1d & 1) == 0) && ((*(uint *)(lVar5 + 8) >> 6 & 1) == 0))
            break;
          }
          plVar4 = (longlong *)plVar4[6];
        }
      }
      else {
        if ((DAT_1468c21ab != '\0') && ((*(uint *)(lVar6 + 8) >> 10 & 1) != 0)) {
          if (*(longlong *)(param_2 + 0x10) == 0) {
            local_58 = 5;
            local_60 = (undefined2 *)0x0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
            FGenericPlatformString::Memcpy(local_60,&DAT_143f3edc8,10);
          }
          else {
            UObjectBaseUtility::GetFullName(param_2,&local_60,0);
          }
          puVar11 = &DAT_143f3eda8;
          if ((int)local_58 != 0) {
            puVar11 = local_60;
          }
          if ((param_1 == (longlong *)0x0) || (param_1[2] == 0)) {
            local_50 = (undefined2 *)0x0;
            local_48 = 5;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
            FGenericPlatformString::Memcpy(local_50,&DAT_143f3edc8,10);
          }
          else {
            UObjectBaseUtility::GetFullName(param_1,&local_50,0);
          }
          puVar12 = &DAT_143f3eda8;
          if ((int)local_48 != 0) {
            puVar12 = local_50;
          }
          if (*(longlong *)(lVar6 + 0x10) == 0) {
            local_38 = 5;
            local_40 = (undefined2 *)0x0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_40,0);
            FGenericPlatformString::Memcpy(local_40,&DAT_143f3edc8,10);
          }
          else {
            UObjectBaseUtility::GetFullName(lVar6,&local_40,0);
          }
          puVar8 = &DAT_143f3eda8;
          if ((int)local_38 != 0) {
            puVar8 = local_40;
          }
          LowLevelFatalErrorHandler
                    ("Unknown",0x42,
                     L"%s had RF_NeedLoad when searching for an archetype of %s in %s",puVar8,
                     puVar12,puVar11);
          if (local_40 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_50 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_60 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (*(longlong *)(param_2 + 0x10) == 0) {
            local_58 = 5;
            local_60 = (undefined2 *)0x0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
            FGenericPlatformString::Memcpy(local_60,&DAT_143f3edc8,10);
          }
          else {
            UObjectBaseUtility::GetFullName(param_2,&local_60,0);
          }
          puVar11 = &DAT_143f3eda8;
          if ((int)local_58 != 0) {
            puVar11 = local_60;
          }
          if ((param_1 == (longlong *)0x0) || (param_1[2] == 0)) {
            local_50 = (undefined2 *)0x0;
            local_48 = 5;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
            FGenericPlatformString::Memcpy(local_50,&DAT_143f3edc8,10);
          }
          else {
            UObjectBaseUtility::GetFullName(param_1,&local_50,0);
          }
          puVar12 = &DAT_143f3eda8;
          if ((int)local_48 != 0) {
            puVar12 = local_50;
          }
          if (*(longlong *)(lVar6 + 0x10) == 0) {
            local_38 = 5;
            local_40 = (undefined2 *)0x0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_40,0);
            FGenericPlatformString::Memcpy(local_40,&DAT_143f3edc8,10);
          }
          else {
            UObjectBaseUtility::GetFullName(lVar6,&local_40,0);
          }
          puVar8 = &DAT_143f3eda8;
          if ((int)local_38 != 0) {
            puVar8 = local_40;
          }
          FDebug::AssertFailed
                    (&DAT_144d28737,"Unknown",0x42,
                     L"%s had RF_NeedLoad when searching for an archetype of %s in %s",puVar8,
                     puVar12,puVar11);
          if (local_40 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_50 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_60 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
        lVar5 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x350))
                          (*(longlong **)(lVar6 + 0x10),param_1,param_3);
      }
    }
    else {
      iVar1 = *(int *)(lVar5 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar10 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar10;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar10) * 0x18;
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) goto LAB_14178cd25;
    }
LAB_14178d39c:
    FUN_1417a9740();
    if (lVar5 != 0) goto LAB_14178d3fb;
  }
  if (param_5 == '\0') {
    lVar5 = param_1[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*param_1 + 0x368))(param_1);
      lVar5 = param_1[0x1f];
    }
  }
  else {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x2f8))(param_1);
    lVar5 = plVar4[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar5 = plVar4[0x1f];
    }
  }
LAB_14178d3fb:
  if (((DAT_1468c21ab != '\0') && (lVar5 != 0)) && ((*(uint *)(lVar5 + 8) >> 10 & 1) != 0)) {
    if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) == 0)) {
      local_58 = 5;
      local_60 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
      FGenericPlatformString::Memcpy(local_60,&DAT_143f3edc8,10);
    }
    else {
      UObjectBaseUtility::GetFullName(param_2,&local_60,0);
    }
    puVar11 = &DAT_143f3eda8;
    if ((int)local_58 != 0) {
      puVar11 = local_60;
    }
    if ((param_1 == (longlong *)0x0) || (param_1[2] == 0)) {
      local_50 = (undefined2 *)0x0;
      local_48 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
      FGenericPlatformString::Memcpy(local_50,&DAT_143f3edc8,10);
    }
    else {
      UObjectBaseUtility::GetFullName(param_1,&local_50,0);
    }
    puVar12 = &DAT_143f3eda8;
    if ((int)local_48 != 0) {
      puVar12 = local_50;
    }
    if (*(longlong *)(lVar5 + 0x10) == 0) {
      local_40 = (undefined2 *)0x0;
      local_38 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_40,0);
      FGenericPlatformString::Memcpy(local_40,&DAT_143f3edc8,10);
    }
    else {
      UObjectBaseUtility::GetFullName(lVar5,&local_40,0);
    }
    puVar8 = &DAT_143f3eda8;
    if ((int)local_38 != 0) {
      puVar8 = local_40;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x58,L"%s had RF_NeedLoad when being set up as an archetype of %s in %s",
               puVar8,puVar12,puVar11);
    if (local_40 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_50 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_60 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) == 0)) {
      local_60 = (undefined2 *)0x0;
      local_58 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
      FGenericPlatformString::Memcpy(local_60,&DAT_143f3edc8,10);
    }
    else {
      UObjectBaseUtility::GetFullName(param_2,&local_60,0);
    }
    puVar11 = &DAT_143f3eda8;
    if ((int)local_58 != 0) {
      puVar11 = local_60;
    }
    if ((param_1 == (longlong *)0x0) || (param_1[2] == 0)) {
      local_50 = (undefined2 *)0x0;
      local_48 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
      FGenericPlatformString::Memcpy(local_50,&DAT_143f3edc8,10);
    }
    else {
      UObjectBaseUtility::GetFullName(param_1,&local_50,0);
    }
    puVar12 = &DAT_143f3eda8;
    if ((int)local_48 != 0) {
      puVar12 = local_50;
    }
    if (*(longlong *)(lVar5 + 0x10) == 0) {
      local_40 = (undefined2 *)0x0;
      local_38 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_40,0);
      FGenericPlatformString::Memcpy(local_40,&DAT_143f3edc8,10);
    }
    else {
      UObjectBaseUtility::GetFullName(lVar5,&local_40,0);
    }
    puVar8 = &DAT_143f3eda8;
    if ((int)local_38 != 0) {
      puVar8 = local_40;
    }
    FDebug::AssertFailed
              (&DAT_144d2873e,"Unknown",0x58,
               L"%s had RF_NeedLoad when being set up as an archetype of %s in %s",puVar8,puVar12,
               puVar11);
    if (local_40 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_50 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_60 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return lVar5;
}



// FUNCTION 14178d6f0 GetCPPType body=62 status=ok
// SIG undefined GetCPPType(void)

undefined8 * TProperty<FText,UProperty>::GetCPPType(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FText",0xc);
  return param_2;
}



// FUNCTION 14178d730 GetClass body=8 status=ok
// SIG undefined GetClass(void)

undefined8 FObjectInitializer::GetClass(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x10);
}



// FUNCTION 14178d740 FUN_14178d740 body=108 status=ok
// SIG undefined FUN_14178d740(void)

undefined * FUN_14178d740(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e9184) {
    _Init_thread_header(&DAT_1469e9184);
    if (DAT_1469e9184 == -1) {
      atexit(FUN_143e7d3d0);
      _Init_thread_footer(&DAT_1469e9184);
      return &DAT_1464b5ab0;
    }
  }
  return &DAT_1464b5ab0;
}



// FUNCTION 14178d7b0 FUN_14178d7b0 body=108 status=ok
// SIG undefined FUN_14178d7b0(void)

undefined8 * FUN_14178d7b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e9170) {
    _Init_thread_header(&DAT_1469e9170);
    if (DAT_1469e9170 == -1) {
      atexit((_func_5014 *)&LAB_143e7d400);
      _Init_thread_footer(&DAT_1469e9170);
      return &DAT_1469e9160;
    }
  }
  return &DAT_1469e9160;
}



// FUNCTION 14178d820 FUN_14178d820 body=108 status=ok
// SIG undefined FUN_14178d820(void)

undefined8 * FUN_14178d820(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e9140) {
    _Init_thread_header(&DAT_1469e9140);
    if (DAT_1469e9140 == -1) {
      atexit((_func_5014 *)&LAB_143e7d420);
      _Init_thread_footer(&DAT_1469e9140);
      return &DAT_1469e9130;
    }
  }
  return &DAT_1469e9130;
}



// FUNCTION 14178d890 FUN_14178d890 body=108 status=ok
// SIG undefined FUN_14178d890(void)

undefined8 * FUN_14178d890(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e9158) {
    _Init_thread_header(&DAT_1469e9158);
    if (DAT_1469e9158 == -1) {
      atexit((_func_5014 *)&LAB_143e7d440);
      _Init_thread_footer(&DAT_1469e9158);
      return &DAT_1469e9148;
    }
  }
  return &DAT_1469e9148;
}



// FUNCTION 14178d900 FUN_14178d900 body=108 status=ok
// SIG undefined FUN_14178d900(void)

undefined8 * FUN_14178d900(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e9128) {
    _Init_thread_header(&DAT_1469e9128);
    if (DAT_1469e9128 == -1) {
      atexit((_func_5014 *)&LAB_143e7d460);
      _Init_thread_footer(&DAT_1469e9128);
      return &DAT_1469e9118;
    }
  }
  return &DAT_1469e9118;
}



// FUNCTION 14178d970 FUN_14178d970 body=108 status=ok
// SIG undefined FUN_14178d970(void)

undefined8 * FUN_14178d970(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e9174) {
    _Init_thread_header(&DAT_1469e9174);
    if (DAT_1469e9174 == -1) {
      atexit(FUN_143e7d4a0);
      _Init_thread_footer(&DAT_1469e9174);
      return &DAT_1464b5a60;
    }
  }
  return &DAT_1464b5a60;
}



// FUNCTION 14178d9e0 FUN_14178d9e0 body=108 status=ok
// SIG undefined FUN_14178d9e0(void)

undefined * FUN_14178d9e0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e9144) {
    _Init_thread_header(&DAT_1469e9144);
    if (DAT_1469e9144 == -1) {
      atexit(FUN_143e7d500);
      _Init_thread_footer(&DAT_1469e9144);
      return &DAT_1464b5a10;
    }
  }
  return &DAT_1464b5a10;
}



// FUNCTION 14178da50 FUN_14178da50 body=108 status=ok
// SIG undefined FUN_14178da50(void)

undefined * FUN_14178da50(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e912c) {
    _Init_thread_header(&DAT_1469e912c);
    if (DAT_1469e912c == -1) {
      atexit(FUN_143e7d530);
      _Init_thread_footer(&DAT_1469e912c);
      return &DAT_1464b59c0;
    }
  }
  return &DAT_1464b59c0;
}



// FUNCTION 14178dac0 FUN_14178dac0 body=482 status=ok
// SIG undefined FUN_14178dac0(void)

undefined8 * FUN_14178dac0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)0x0;
  *param_1 = 0;
  plVar3 = (longlong *)FUN_14178d970();
  iVar6 = (int)param_2;
  iVar2 = (int)((ulonglong)param_2 >> 0x20);
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    plVar5 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar5 = plVar3 + 7;
    }
    iVar1 = *(int *)((longlong)plVar5 +
                    ((longlong)(iVar2 + iVar6) & (longlong)(int)plVar3[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar1 * 0x70 + *plVar3);
        if (*plVar5 == param_2) {
          if (iVar1 != -1) goto LAB_14178db51;
          break;
        }
        iVar1 = (int)plVar5[0xd];
      } while (iVar1 != -1);
    }
  }
  plVar5 = plVar7;
LAB_14178db51:
  plVar3 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar3 = plVar7;
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_14178da50();
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar5 = (longlong *)plVar3[8];
      if ((longlong *)plVar3[8] == (longlong *)0x0) {
        plVar5 = plVar3 + 7;
      }
      iVar1 = *(int *)((longlong)plVar5 +
                      ((longlong)(iVar2 + iVar6) & (longlong)(int)plVar3[9] - 1U) * 4);
      if (iVar1 != -1) {
        do {
          plVar5 = (longlong *)(*plVar3 + (longlong)iVar1 * 0x18);
          if (*(longlong *)(*plVar3 + (longlong)iVar1 * 0x18) == param_2) {
            if (iVar1 != -1) goto LAB_14178dbe3;
            break;
          }
          iVar1 = (int)plVar5[2];
        } while (iVar1 != -1);
      }
    }
    plVar5 = plVar7;
LAB_14178dbe3:
    plVar3 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar3 = plVar7;
    }
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_14178d9e0();
      if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
        plVar5 = (longlong *)plVar3[8];
        if ((longlong *)plVar3[8] == (longlong *)0x0) {
          plVar5 = plVar3 + 7;
        }
        iVar2 = *(int *)((longlong)plVar5 +
                        ((longlong)(iVar2 + iVar6) & (longlong)(int)plVar3[9] - 1U) * 4);
        if (iVar2 != -1) {
          do {
            plVar5 = (longlong *)(*plVar3 + (longlong)iVar2 * 0x18);
            if (*(longlong *)(*plVar3 + (longlong)iVar2 * 0x18) == param_2) {
              if (iVar2 != -1) goto LAB_14178dc73;
              break;
            }
            iVar2 = (int)plVar5[2];
          } while (iVar2 != -1);
        }
      }
      plVar5 = plVar7;
LAB_14178dc73:
      plVar3 = plVar5 + 1;
      if (plVar5 == (longlong *)0x0) {
        plVar3 = plVar7;
      }
      if (plVar3 == (longlong *)0x0) {
        return param_1;
      }
      lVar4 = UEnum::GetPrivateStaticClass();
    }
    else {
      lVar4 = FUN_14171c950();
    }
  }
  else {
    lVar4 = UDynamicClass::GetPrivateStaticClass();
  }
  *param_1 = *(undefined8 *)(lVar4 + 0x18);
  return param_1;
}



// FUNCTION 14178dcb0 thunk_FUN_14171a370 body=5 status=ok
// SIG undefined thunk_FUN_14171a370(void)

undefined8 thunk_FUN_14171a370(void)

{
  undefined8 *puVar1;
  undefined1 auStackX_8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e7208) {
    _Init_thread_header(&DAT_1469e7208);
    if (DAT_1469e7208 == -1) {
      puVar1 = (undefined8 *)FName::FName(auStackX_8,L"FallbackStruct",1);
      DAT_1469e7200 = FUN_141726dc0(*puVar1);
      _Init_thread_footer(&DAT_1469e7208);
    }
  }
  return DAT_1469e7200;
}



// FUNCTION 14178dcc0 GetFullGroupName body=209 status=ok
// SIG undefined GetFullGroupName(void)

longlong * UObjectBaseUtility::GetFullGroupName(longlong param_1,longlong *param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_28 [3];
  undefined8 local_10;
  
  lVar4 = 0;
  lVar6 = param_1;
  if (param_3 != '\0') {
    lVar6 = *(longlong *)(param_1 + 0x20);
  }
  if (lVar6 == 0) {
    local_10 = 0;
    plVar5 = local_28 + 2;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x20);
    while (lVar3 = lVar4, lVar3 != 0) {
      param_1 = lVar3;
      lVar4 = *(longlong *)(lVar3 + 0x20);
    }
    local_28[0] = 0;
    local_28[1] = 0;
    GetPathName(lVar6,param_1,local_28);
    plVar5 = local_28;
    bVar2 = true;
    bVar1 = false;
    lVar4 = local_28[0];
  }
  *param_2 = lVar4;
  *plVar5 = 0;
  *(int *)(param_2 + 1) = (int)plVar5[1];
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar5 + 0xc);
  plVar5[1] = 0;
  if ((bVar1) && (local_28[2] != 0)) {
    FMemory::Free();
  }
  if ((bVar2) && (local_28[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14178dda0 GetFullName body=245 status=ok
// SIG undefined GetFullName(void)

longlong * UObjectBaseUtility::GetFullName(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res8;
  
  *param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  if (param_1 != 0) {
    *(undefined4 *)(param_2 + 1) = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x80);
    local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
    FName::AppendString(&local_res8,param_2);
    iVar2 = (int)param_2[1];
    iVar3 = (2 - (uint)(iVar2 != 0)) + iVar2;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    *puVar1 = 0x20;
    puVar1[1] = 0;
    GetPathName(param_1,param_3,param_2);
    return param_2;
  }
  *(undefined4 *)(param_2 + 1) = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  builtin_wcsncpy((wchar_t *)*param_2,L"None",5);
  return param_2;
}



// FUNCTION 14178dea0 GetInterfaceAddress body=233 status=ok
// SIG undefined GetInterfaceAddress(void)

longlong UObjectBaseUtility::GetInterfaceAddress(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = 0;
  if (((param_2 != 0) && ((*(uint *)(param_2 + 0xb4) >> 0xe & 1) != 0)) &&
     (lVar4 = UInterface::GetPrivateStaticClass(), param_2 != lVar4)) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    if ((*(uint *)(param_2 + 0xb4) >> 7 & 1) == 0) {
      cVar3 = UClass::ImplementsInterface(lVar4,param_2);
      lVar7 = 0;
      if (cVar3 != '\0') {
        return param_1;
      }
    }
    else {
      do {
        if (lVar4 == 0) {
          return lVar7;
        }
        for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(lVar4 + 0x1a8))); iVar5 = iVar5 + 1) {
          lVar1 = *(longlong *)(lVar4 + 0x1a0);
          lVar6 = (longlong)iVar5;
          if (*(char *)(lVar1 + 0xc + lVar6 * 0x10) == '\0') {
            for (lVar2 = *(longlong *)(lVar1 + lVar6 * 0x10); lVar2 != 0;
                lVar2 = *(longlong *)(lVar2 + 0x30)) {
              if (lVar2 == param_2) {
                lVar7 = *(int *)(lVar1 + 8 + lVar6 * 0x10) + param_1;
                goto LAB_14178df6d;
              }
            }
          }
        }
LAB_14178df6d:
        lVar4 = *(longlong *)(lVar4 + 0x30);
      } while (lVar7 == 0);
    }
  }
  return lVar7;
}



// FUNCTION 14178df90 FUN_14178df90 body=167 status=ok
// SIG undefined FUN_14178df90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14178df90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e90f0) {
    _Init_thread_header(&DAT_1469e90f0);
    if (DAT_1469e90f0 == -1) {
      _DAT_1469e90d0 = 0xffffffff;
      _DAT_1469e90a0 = 0;
      _DAT_1469e90a8 = 0;
      _DAT_1469e90c0 = 0;
      _DAT_1469e90c8 = 0;
      _DAT_1469e90d4 = 0;
      DAT_1469e90e0 = 0;
      _DAT_1469e90e8 = 0;
      atexit(FUN_143e7d5f0);
      _Init_thread_footer(&DAT_1469e90f0);
      return &DAT_1469e90a0;
    }
  }
  return &DAT_1469e90a0;
}



// FUNCTION 14178e040 GetMinClusterSize body=17 status=ok
// SIG undefined GetMinClusterSize(void)

int FUObjectClusterContainer::GetMinClusterSize(void)

{
  int iVar1;
  
  iVar1 = DAT_1464b56f0;
  if (DAT_1464b56f0 < 2) {
    iVar1 = 1;
  }
  return iVar1;
}



// FUNCTION 14178e060 FUN_14178e060 body=110 status=ok
// SIG undefined FUN_14178e060(void)

longlong FUN_14178e060(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  do {
    if (lVar6 == 0) {
      return 0;
    }
    iVar5 = 0;
    while ((-1 < iVar5 && (iVar5 < *(int *)(lVar6 + 0x1a8)))) {
      lVar2 = *(longlong *)(lVar6 + 0x1a0);
      lVar4 = (longlong)iVar5;
      if ((*(char *)(lVar2 + 0xc + lVar4 * 0x10) == '\0') &&
         (lVar3 = *(longlong *)(lVar2 + lVar4 * 0x10), lVar3 != 0)) {
        do {
          if (lVar3 == param_2) {
            iVar1 = *(int *)(lVar2 + 8 + lVar4 * 0x10);
            if (iVar1 != 0) {
              return iVar1 + param_1;
            }
            goto LAB_14178e0bc;
          }
          lVar3 = *(longlong *)(lVar3 + 0x30);
        } while (lVar3 != 0);
        iVar5 = iVar5 + 1;
      }
      else {
LAB_14178e0bc:
        iVar5 = iVar5 + 1;
      }
    }
    lVar6 = *(longlong *)(lVar6 + 0x30);
  } while( true );
}



// FUNCTION 14178e0d0 GetObjectCluster body=140 status=ok
// SIG undefined GetObjectCluster(void)

longlong FUObjectClusterContainer::GetObjectCluster(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_2 + 0xc);
  uVar5 = iVar6 >> 0x1f & 0xffff;
  uVar2 = iVar6 + uVar5;
  lVar3 = (longlong)(int)((uVar2 & 0xffff) - uVar5);
  lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8);
  lVar1 = lVar4 + lVar3 * 0x18;
  if ((*(byte *)(lVar4 + 0xb + lVar3 * 0x18) & 1) == 0) {
    iVar6 = *(int *)(lVar1 + 0xc);
  }
  lVar4 = 0;
  if (iVar6 != 0) {
    if (iVar6 < 1) {
      uVar2 = *(uint *)(lVar1 + 0xc);
    }
    else {
      if (iVar6 < (int)DAT_1469e91c4) {
        uVar5 = iVar6 >> 0x1f & 0xffff;
        uVar2 = iVar6 + uVar5;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
      }
      uVar2 = *(uint *)(lVar4 + 0xc);
    }
    lVar4 = (longlong)(int)~uVar2 * 0x50 + DAT_1469e8f10;
  }
  return lVar4;
}



// FUNCTION 14178e160 GetOutermost body=32 status=ok
// SIG undefined GetOutermost(void)

longlong UObjectBaseUtility::GetOutermost(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  while (lVar1 = lVar2, lVar1 != 0) {
    param_1 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 0x20);
  }
  return param_1;
}



// FUNCTION 14178e180 GetPathName body=377 status=ok
// SIG undefined GetPathName(void)

void UObjectBaseUtility::GetPathName(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 local_res8;
  
  if ((param_1 == param_2) || (param_1 == 0)) {
    iVar1 = (int)param_3[1];
    iVar3 = (5 - (uint)(iVar1 != 0)) + iVar1;
    *(int *)(param_3 + 1) = iVar3;
    if (*(int *)((longlong)param_3 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
    }
    lVar6 = (longlong)iVar1 - (ulonglong)(iVar1 != 0);
    builtin_wcsncpy((wchar_t *)(*param_3 + lVar6 * 2),L"None",4);
    *(undefined2 *)(*param_3 + 8 + lVar6 * 2) = 0;
    return;
  }
  lVar6 = *(longlong *)(param_1 + 0x20);
  if ((lVar6 == 0) || (lVar6 == param_2)) goto LAB_14178e274;
  GetPathName();
  lVar5 = *(longlong *)(lVar6 + 0x10);
  lVar4 = UPackage::GetPrivateStaticClass();
  if (lVar5 == lVar4) {
LAB_14178e22c:
    iVar1 = (int)param_3[1];
    iVar3 = (2 - (uint)(iVar1 != 0)) + iVar1;
    *(int *)(param_3 + 1) = iVar3;
    if (*(int *)((longlong)param_3 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar7 = (undefined2 *)(*param_3 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
    uVar2 = 0x2e;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x20) + 0x10);
    lVar5 = UPackage::GetPrivateStaticClass();
    if (lVar6 != lVar5) goto LAB_14178e22c;
    iVar1 = (int)param_3[1];
    iVar3 = (2 - (uint)(iVar1 != 0)) + iVar1;
    *(int *)(param_3 + 1) = iVar3;
    if (*(int *)((longlong)param_3 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar7 = (undefined2 *)(*param_3 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
    uVar2 = 0x3a;
  }
  *puVar7 = uVar2;
  puVar7[1] = 0;
LAB_14178e274:
  local_res8 = *(undefined8 *)(param_1 + 0x18);
  FName::AppendString(&local_res8,param_3);
  return;
}



// FUNCTION 14178e300 GetPathName body=41 status=ok
// SIG undefined GetPathName(void)

undefined8 *
UObjectBaseUtility::GetPathName(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  param_2[1] = 0;
  GetPathName(param_1,param_3,param_2);
  return param_2;
}



// FUNCTION 14178e330 FUN_14178e330 body=108 status=ok
// SIG undefined FUN_14178e330(void)

undefined * FUN_14178e330(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e918c) {
    _Init_thread_header(&DAT_1469e918c);
    if (DAT_1469e918c == -1) {
      atexit((_func_5014 *)&LAB_143e7d480);
      _Init_thread_footer(&DAT_1469e918c);
      return &DAT_1464b5b18;
    }
  }
  return &DAT_1464b5b18;
}



// FUNCTION 14178e3a0 FUN_14178e3a0 body=108 status=ok
// SIG undefined FUN_14178e3a0(void)

undefined * FUN_14178e3a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e9188) {
    _Init_thread_header(&DAT_1469e9188);
    if (DAT_1469e9188 == -1) {
      atexit((_func_5014 *)&LAB_143e7d490);
      _Init_thread_footer(&DAT_1469e9188);
      return &DAT_1464b5b00;
    }
  }
  return &DAT_1464b5b00;
}



// FUNCTION 14178e410 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e9090 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"TextProperty",&DAT_1469e9090,
                  AK::MemoryMgr::StartProfileThreadUsage,0x70,0x10000000,0x40000000,L"Engine",
                  InternalConstructor<UTextProperty>,InternalVTableHelperCtorCaller<UTextProperty>,
                  AK::MemoryMgr::StartProfileThreadUsage,UProperty::StaticClass,FUN_14171c410,0);
  }
  return DAT_1469e9090;
}



// FUNCTION 14178e4c0 GetPropertyChain body=229 status=ok
// SIG undefined GetPropertyChain(void)

void FPropertyValueIterator::GetPropertyChain(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1] + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    lVar6 = lVar4 * 0x38;
    do {
      lVar5 = *(longlong *)
               (*(longlong *)(lVar6 + 0x20 + *param_1) +
               (longlong)*(int *)(lVar6 + 0x30 + *param_1) * 0x10);
      if (lVar5 != 0) {
        do {
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
          }
          *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar5;
          lVar5 = *(longlong *)(lVar5 + 0x20);
          if (lVar5 == 0) break;
          lVar3 = UProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        } while (bVar1);
      }
      lVar6 = lVar6 + -0x38;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}



// FUNCTION 14178e5b0 GetStackTrace body=739 status=ok
// SIG undefined GetStackTrace(void)

longlong * FFrame::GetStackTrace(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar6;
  int iVar7;
  longlong lVar8;
  void *local_48;
  ulonglong local_40;
  longlong local_38 [2];
  void *pvVar5;
  
  pvVar3 = (void *)0x0;
  *param_2 = 0;
  local_40 = 0;
  param_2[1] = 0;
  local_48 = (void *)0x0;
  pvVar5 = pvVar3;
  pvVar6 = pvVar3;
  if (param_1 != 0) {
    do {
      iVar7 = (int)pvVar5;
      uVar4 = iVar7 + 1;
      local_40 = CONCAT44(local_40._4_4_,uVar4);
      if ((int)pvVar3 < (int)uVar4) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,pvVar5);
        pvVar3 = (void *)(local_40 >> 0x20);
        pvVar6 = local_48;
        uVar4 = (uint)local_40;
      }
      pvVar5 = (void *)(ulonglong)uVar4;
      *(longlong *)((longlong)pvVar6 + (longlong)iVar7 * 8) = param_1;
      param_1 = *(longlong *)(param_1 + 0x70);
    } while (param_1 != 0);
    if (0 < (int)uVar4) {
      local_48 = (void *)0x0;
      local_40 = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      pvVar3 = local_48;
      FGenericPlatformString::Memcpy(local_48,L"Script call stack:\n",0x28);
      if (((uint)local_40 != 0) && (iVar7 = (uint)local_40 + -1, iVar7 != 0)) {
        iVar1 = (int)param_2[1];
        iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar7;
        *(int *)(param_2 + 1) = iVar2;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        pvVar5 = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar5,pvVar3,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar5) = 0;
      }
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      lVar8 = (longlong)(int)(uVar4 - 1);
      if (-1 < (int)(uVar4 - 1)) {
        do {
          UObjectBaseUtility::GetFullName
                    (*(undefined8 *)(*(longlong *)((longlong)pvVar6 + lVar8 * 8) + 0x10),local_38,0)
          ;
          FString::PrintfImpl(&local_48,L"\t%s\n");
          pvVar3 = local_48;
          iVar7 = 0;
          if ((uint)local_40 != 0) {
            iVar7 = (uint)local_40 + -1;
          }
          if (iVar7 != 0) {
            iVar1 = (int)param_2[1];
            iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar7;
            *(int *)(param_2 + 1) = iVar2;
            if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
            }
            pvVar5 = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
            ::_guard_xfg_dispatch_icall_nop(pvVar5,pvVar3,(longlong)iVar7 * 2);
            *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar5) = 0;
          }
          if (local_48 != (void *)0x0) {
            FMemory::Free(local_48);
          }
          if (local_38[0] != 0) {
            FMemory::Free();
          }
          lVar8 = lVar8 + -1;
        } while (-1 < lVar8);
      }
      goto LAB_14178e85d;
    }
  }
  local_48 = (void *)0x0;
  local_40 = 0x4d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  pvVar3 = local_48;
  FGenericPlatformString::Memcpy
            (local_48,
             L"Script call stack: [Empty] (FFrame::GetStackTrace() called from native code)",0x9a);
  if (((uint)local_40 != 0) && (iVar7 = (uint)local_40 + -1, iVar7 != 0)) {
    iVar1 = (int)param_2[1];
    iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar7;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    pvVar5 = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar5,pvVar3,(longlong)iVar7 * 2);
    *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar5) = 0;
  }
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
LAB_14178e85d:
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  return param_2;
}



// FUNCTION 14178e8a0 GetStaticEnum body=297 status=ok
// SIG undefined GetStaticEnum(void)

undefined8 GetStaticEnum(code *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined8 local_res8;
  undefined2 *local_18;
  int local_10;
  
  lVar3 = *(longlong *)(param_2 + 0x20);
  lVar2 = param_2;
  while (lVar1 = lVar3, lVar1 != 0) {
    lVar2 = lVar1;
    lVar3 = *(longlong *)(lVar1 + 0x20);
  }
  local_res8 = *(undefined8 *)(lVar2 + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar5 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar5 = local_18;
  }
  NotifyRegistrationEvent(puVar5,param_3,3,1,0,0);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar4 = (*param_1)();
  lVar2 = *(longlong *)(param_2 + 0x20);
  while (lVar3 = lVar2, lVar3 != 0) {
    param_2 = lVar3;
    lVar2 = *(longlong *)(lVar3 + 0x20);
  }
  local_res8 = *(undefined8 *)(param_2 + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar5 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar5 = local_18;
  }
  NotifyRegistrationEvent(puVar5,param_3,3,2,0,0);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 14178e9d0 GetStaticStruct body=296 status=ok
// SIG undefined GetStaticStruct(void)

undefined8 GetStaticStruct(code *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined8 local_res8;
  undefined2 *local_18;
  int local_10;
  
  lVar3 = *(longlong *)(param_2 + 0x20);
  lVar2 = param_2;
  while (lVar1 = lVar3, lVar1 != 0) {
    lVar2 = lVar1;
    lVar3 = *(longlong *)(lVar1 + 0x20);
  }
  local_res8 = *(undefined8 *)(lVar2 + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar5 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar5 = local_18;
  }
  NotifyRegistrationEvent(puVar5,param_3,2,1,0,0);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar4 = (*param_1)();
  lVar2 = *(longlong *)(param_2 + 0x20);
  while (lVar3 = lVar2, lVar3 != 0) {
    param_2 = lVar3;
    lVar2 = *(longlong *)(lVar3 + 0x20);
  }
  local_res8 = *(undefined8 *)(param_2 + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar5 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar5 = local_18;
  }
  NotifyRegistrationEvent(puVar5,param_3,2,2,0,0);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 14178eb00 GetTypedOuter body=75 status=ok
// SIG undefined GetTypedOuter(void)

void UObjectBaseUtility::GetTypedOuter(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = 0;
  lVar4 = *(longlong *)(param_1 + 0x20);
  do {
    if (lVar4 == 0) {
      return;
    }
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(param_2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(param_2 + 0x90) * 8
         ) != param_2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar3 = lVar4;
    if (!bVar1) {
      lVar3 = lVar2;
    }
    lVar2 = lVar3;
    lVar4 = *(longlong *)(lVar4 + 0x20);
  } while (lVar3 == 0);
  return;
}



// FUNCTION 14178eb50 FUN_14178eb50 body=658 status=ok
// SIG undefined FUN_14178eb50(void)

void FUN_14178eb50(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 in_stack_ffffffffffffff88;
  longlong local_68;
  int local_60;
  longlong *local_58;
  longlong local_50;
  uint local_48;
  uint local_44;
  
  uVar4 = (uint)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  if ((param_3 != 0) && (param_2 != 0)) {
    uVar5 = UObject::GetPrivateStaticClass();
    FObjectIterator::FObjectIterator(&local_68,uVar5,0,0,(ulonglong)uVar4 << 0x20);
    if (local_58 != (longlong *)0x0) {
      plVar11 = local_58;
      iVar10 = local_60;
      do {
        if (plVar11 == (longlong *)0x0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar11;
        }
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(param_2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(param_2 + 0x90) * 8) != param_2 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          iVar1 = *(int *)(lVar8 + 0xc);
          if (iVar1 < (int)DAT_1469e91c4) {
            uVar9 = iVar1 >> 0x1f & 0xffff;
            uVar4 = iVar1 + uVar9;
            lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                    (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
          }
          else {
            lVar6 = 0;
          }
          if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
            if (DAT_1468c21a8 != '\0') {
              lVar7 = *(longlong *)(lVar8 + 0x20);
              lVar6 = lVar8;
              while (lVar3 = lVar7, lVar3 != 0) {
                lVar6 = lVar3;
                lVar7 = *(longlong *)(lVar3 + 0x20);
              }
              if ((*(uint *)(lVar6 + 0x50) >> 0x14 & 1) == 0) goto LAB_14178ecd0;
            }
            FUN_141759d00(param_3,param_1,*(int *)(param_3 + 0x44) + lVar8,0,lVar8,DAT_1468b6160);
          }
        }
LAB_14178ecd0:
        do {
          do {
            iVar10 = iVar10 + 1;
            if (*(int *)(local_68 + 0x24) <= iVar10) {
              return;
            }
            while( true ) {
              uVar9 = iVar10 >> 0x1f & 0xffff;
              uVar4 = iVar10 + uVar9;
              lVar7 = (longlong)(int)((uVar4 & 0xffff) - uVar9);
              lVar8 = *(longlong *)
                       (*(longlong *)(local_68 + 0x10) + (longlong)((int)uVar4 >> 0x10) * 8);
              lVar6 = *(longlong *)(lVar8 + lVar7 * 0x18);
              plVar11 = (longlong *)(lVar8 + lVar7 * 0x18);
              if (lVar6 != 0) break;
              iVar10 = iVar10 + 1;
              if (*(int *)(local_68 + 0x24) <= iVar10) {
                return;
              }
            }
          } while ((*(uint *)(lVar6 + 8) & local_48) != 0);
          lVar8 = UObject::GetPrivateStaticClass();
          if (local_50 != lVar8) {
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(local_50 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(local_50 + 0x90) * 8) != local_50 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_14178ecd0;
          }
          uVar4 = *(uint *)(lVar6 + 0xc);
          if ((int)uVar4 < (int)DAT_1469e91c4) {
            uVar9 = uVar4 & 0xffff;
            if ((int)uVar4 < 0) {
              uVar4 = uVar4 + 0xffff;
              uVar9 = uVar9 - 0x10000;
            }
            lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                    (longlong)(int)uVar9 * 0x18;
          }
          else {
            lVar8 = 0;
          }
        } while ((*(uint *)(lVar8 + 8) & local_44) != 0);
      } while( true );
    }
  }
  return;
}



// FUNCTION 14178edf0 FUN_14178edf0 body=939 status=ok
// SIG undefined FUN_14178edf0(void)

void FUN_14178edf0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  byte bVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  int *piVar15;
  ulonglong uVar16;
  longlong lVar17;
  
  plVar2 = (longlong *)*param_2;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  piVar4 = *(int **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    iVar13 = *(int *)((longlong)plVar2 + 0xc);
    uVar16 = 0;
    uVar12 = uVar16;
    if (iVar13 < (int)DAT_1469e91c4) {
      uVar11 = iVar13 >> 0x1f & 0xffff;
      uVar7 = iVar13 + uVar11;
      uVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
               (longlong)(int)((uVar7 & 0xffff) - uVar11) * 0x18;
    }
    iVar1 = *(int *)(uVar12 + 0xc);
    if (iVar1 != *piVar4) {
      bVar8 = *(byte *)(uVar12 + 0xb) & 1;
      if ((bVar8 == 0) && (iVar1 == 0)) {
        if (DAT_1469e91a4 < iVar13) {
          cVar6 = (**(code **)(*plVar2 + 0x20))(plVar2);
          if ((cVar6 != '\0') && (lVar5 = *param_2, (*(uint *)(lVar5 + 8) & 0x1400) == 0)) {
            iVar13 = *(int *)(lVar5 + 0xc);
            if (iVar13 < (int)DAT_1469e91c4) {
              uVar11 = iVar13 >> 0x1f & 0xffff;
              uVar7 = iVar13 + uVar11;
              uVar16 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                       (longlong)(int)((uVar7 & 0xffff) - uVar11) * 0x18;
            }
            if ((*(uint *)(uVar16 + 8) >> 0x1e & 1) == 0) {
              FUN_141783070(piVar4,iVar13,uVar12,lVar5,uVar3,1);
              return;
            }
          }
          lVar5 = *(longlong *)(piVar4 + 2);
          iVar13 = *(int *)(*param_2 + 0xc);
          piVar4 = *(int **)(lVar5 + 0x28);
          iVar1 = *(int *)(lVar5 + 0x30);
          for (piVar15 = piVar4; piVar15 != piVar4 + iVar1; piVar15 = piVar15 + 1) {
            if (*piVar15 == iVar13) {
              if ((int)((longlong)piVar15 - (longlong)piVar4 >> 2) != -1) {
                return;
              }
              break;
            }
          }
          *(int *)(lVar5 + 0x30) = iVar1 + 1;
          if (*(int *)(lVar5 + 0x34) < iVar1 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar5 + 0x28);
          }
          *(int *)((longlong)iVar1 * 4 + *(longlong *)(lVar5 + 0x28)) = iVar13;
        }
      }
      else if (DAT_1469e8638 == 0) {
        if (bVar8 == 0) {
          iVar13 = iVar1;
        }
        uVar12 = uVar16;
        if (iVar13 < (int)DAT_1469e91c4) {
          uVar11 = iVar13 >> 0x1f & 0xffff;
          uVar7 = iVar13 + uVar11;
          uVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                   (longlong)(int)((uVar7 & 0xffff) - uVar11) * 0x18;
        }
        lVar5 = *(longlong *)(piVar4 + 2);
        piVar15 = *(int **)(lVar5 + 0x18);
        iVar1 = *(int *)(lVar5 + 0x20);
        lVar17 = (longlong)(int)~*(uint *)(uVar12 + 0xc) * 0x50 + DAT_1469e8f10;
        for (piVar9 = piVar15; piVar9 != piVar15 + iVar1; piVar9 = piVar9 + 1) {
          if (*piVar9 == iVar13) {
            if ((int)((longlong)piVar9 - (longlong)piVar15 >> 2) != -1) goto LAB_14178f038;
            break;
          }
        }
        *(int *)(lVar5 + 0x20) = iVar1 + 1;
        if (*(int *)(lVar5 + 0x24) < iVar1 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar5 + 0x18);
        }
        *(int *)((longlong)iVar1 * 4 + *(longlong *)(lVar5 + 0x18)) = iVar13;
LAB_14178f038:
        TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                  (lVar17 + 0x38,piVar4);
        piVar15 = *(int **)(lVar17 + 0x18);
        uVar12 = (longlong)*(int *)(lVar17 + 0x20) & 0x3fffffffffffffff;
        if (piVar15 + *(int *)(lVar17 + 0x20) < piVar15) {
          uVar12 = uVar16;
        }
        uVar14 = uVar16;
        if (uVar12 != 0) {
          do {
            iVar13 = *piVar15;
            if (iVar13 != *piVar4) {
              lVar5 = *(longlong *)(piVar4 + 2);
              piVar9 = *(int **)(lVar5 + 0x18);
              iVar1 = *(int *)(lVar5 + 0x20);
              for (piVar10 = piVar9; piVar10 != piVar9 + iVar1; piVar10 = piVar10 + 1) {
                if (*piVar10 == iVar13) {
                  if ((int)((longlong)piVar10 - (longlong)piVar9 >> 2) != -1) goto LAB_14178f0cf;
                  break;
                }
              }
              *(int *)(lVar5 + 0x20) = iVar1 + 1;
              if (*(int *)(lVar5 + 0x24) < iVar1 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar5 + 0x18);
              }
              *(int *)((longlong)iVar1 * 4 + *(longlong *)(lVar5 + 0x18)) = iVar13;
            }
LAB_14178f0cf:
            piVar15 = piVar15 + 1;
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar12);
        }
        piVar15 = *(int **)(lVar17 + 0x28);
        uVar12 = (longlong)*(int *)(lVar17 + 0x30) & 0x3fffffffffffffff;
        if (piVar15 + *(int *)(lVar17 + 0x30) < piVar15) {
          uVar12 = uVar16;
        }
        if (uVar12 != 0) {
          do {
            lVar5 = *(longlong *)(piVar4 + 2);
            iVar13 = *piVar15;
            piVar9 = *(int **)(lVar5 + 0x28);
            iVar1 = *(int *)(lVar5 + 0x30);
            for (piVar10 = piVar9; piVar10 != piVar9 + iVar1; piVar10 = piVar10 + 1) {
              if (*piVar10 == iVar13) {
                if ((int)((longlong)piVar10 - (longlong)piVar9 >> 2) != -1) goto LAB_14178f16d;
                break;
              }
            }
            *(int *)(lVar5 + 0x30) = iVar1 + 1;
            if (*(int *)(lVar5 + 0x34) < iVar1 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar5 + 0x28,iVar1);
            }
            *(int *)((longlong)iVar1 * 4 + *(longlong *)(lVar5 + 0x28)) = iVar13;
LAB_14178f16d:
            piVar15 = piVar15 + 1;
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar12);
        }
      }
      else {
        FClusterReferenceProcessor::MergeCluster(piVar4,uVar12,plVar2,uVar3);
      }
    }
  }
  return;
}



// FUNCTION 14178f1a0 FUN_14178f1a0 body=1097 status=ok
// SIG undefined FUN_14178f1a0(void)

void FUN_14178f1a0(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  int *piVar10;
  byte bVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  int *piVar20;
  longlong local_50;
  
  if (0 < param_3) {
    local_50 = 0;
    do {
      uVar16 = 0;
      plVar4 = *(longlong **)(param_2 + local_50 * 8);
      puVar5 = *(uint **)(param_1 + 0x18);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      if (plVar4 != (longlong *)0x0) {
        uVar1 = *(uint *)((longlong)plVar4 + 0xc);
        uVar18 = uVar16;
        if ((int)uVar1 < (int)DAT_1469e91c4) {
          uVar15 = uVar1 & 0xffff;
          uVar9 = uVar1;
          if ((int)uVar1 < 0) {
            uVar9 = uVar1 + 0xffff;
            uVar15 = uVar15 - 0x10000;
          }
          uVar18 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                   (longlong)(int)uVar15 * 0x18;
        }
        uVar9 = *(uint *)(uVar18 + 0xc);
        if (uVar9 != *puVar5) {
          bVar11 = *(byte *)(uVar18 + 0xb) & 1;
          if ((bVar11 == 0) && (uVar9 == 0)) {
            if (DAT_1469e91a4 < (int)uVar1) {
              cVar8 = (**(code **)(*plVar4 + 0x20))(plVar4);
              if ((cVar8 != '\0') &&
                 (lVar7 = *(longlong *)(param_2 + local_50 * 8),
                 (*(uint *)(lVar7 + 8) & 0x1400) == 0)) {
                uVar1 = *(uint *)(lVar7 + 0xc);
                if ((int)uVar1 < (int)DAT_1469e91c4) {
                  uVar15 = uVar1 & 0xffff;
                  uVar9 = uVar1;
                  if ((int)uVar1 < 0) {
                    uVar9 = uVar1 + 0xffff;
                    uVar15 = uVar15 - 0x10000;
                  }
                  uVar16 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                           (longlong)(int)uVar15 * 0x18;
                }
                if ((*(uint *)(uVar16 + 8) >> 0x1e & 1) == 0) {
                  FUN_141783070(puVar5,uVar1,uVar18,lVar7,uVar6,1);
                  goto LAB_14178f5a8;
                }
              }
              lVar7 = *(longlong *)(puVar5 + 2);
              piVar20 = *(int **)(lVar7 + 0x28);
              iVar2 = *(int *)(lVar7 + 0x30);
              iVar3 = *(int *)(*(longlong *)(param_2 + local_50 * 8) + 0xc);
              for (piVar12 = piVar20; piVar12 != piVar20 + iVar2; piVar12 = piVar12 + 1) {
                if (*piVar12 == iVar3) {
                  if ((int)((longlong)piVar12 - (longlong)piVar20 >> 2) != -1) goto LAB_14178f5a8;
                  break;
                }
              }
              *(int *)(lVar7 + 0x30) = iVar2 + 1;
              if (*(int *)(lVar7 + 0x34) < iVar2 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar7 + 0x28,iVar2);
              }
              *(int *)((longlong)iVar2 * 4 + *(longlong *)(lVar7 + 0x28)) = iVar3;
            }
          }
          else if (DAT_1469e8638 == 0) {
            if (bVar11 == 0) {
              uVar1 = uVar9;
            }
            uVar18 = uVar16;
            if ((int)uVar1 < (int)DAT_1469e91c4) {
              uVar15 = uVar1 & 0xffff;
              uVar9 = uVar1;
              if ((int)uVar1 < 0) {
                uVar9 = uVar1 + 0xffff;
                uVar15 = uVar15 - 0x10000;
              }
              uVar18 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                       (longlong)(int)uVar15 * 0x18;
            }
            lVar7 = *(longlong *)(puVar5 + 2);
            puVar17 = *(uint **)(lVar7 + 0x18);
            iVar2 = *(int *)(lVar7 + 0x20);
            lVar19 = (longlong)(int)~*(uint *)(uVar18 + 0xc) * 0x50 + DAT_1469e8f10;
            for (puVar13 = puVar17; puVar13 != puVar17 + iVar2; puVar13 = puVar13 + 1) {
              if (*puVar13 == uVar1) {
                if ((int)((longlong)puVar13 - (longlong)puVar17 >> 2) != -1) goto LAB_14178f446;
                break;
              }
            }
            *(int *)(lVar7 + 0x20) = iVar2 + 1;
            if (*(int *)(lVar7 + 0x24) < iVar2 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar7 + 0x18);
            }
            *(uint *)((longlong)iVar2 * 4 + *(longlong *)(lVar7 + 0x18)) = uVar1;
LAB_14178f446:
            TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                      (lVar19 + 0x38,puVar5);
            puVar17 = *(uint **)(lVar19 + 0x18);
            uVar18 = (longlong)*(int *)(lVar19 + 0x20) & 0x3fffffffffffffff;
            if (puVar17 + *(int *)(lVar19 + 0x20) < puVar17) {
              uVar18 = uVar16;
            }
            if (uVar18 != 0) {
              do {
                uVar1 = *puVar17;
                if (uVar1 != *puVar5) {
                  lVar7 = *(longlong *)(puVar5 + 2);
                  puVar13 = *(uint **)(lVar7 + 0x18);
                  iVar2 = *(int *)(lVar7 + 0x20);
                  for (puVar14 = puVar13; puVar14 != puVar13 + iVar2; puVar14 = puVar14 + 1) {
                    if (*puVar14 == uVar1) {
                      if ((int)((longlong)puVar14 - (longlong)puVar13 >> 2) != -1)
                      goto LAB_14178f4e3;
                      break;
                    }
                  }
                  *(int *)(lVar7 + 0x20) = iVar2 + 1;
                  if (*(int *)(lVar7 + 0x24) < iVar2 + 1) {
                    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar7 + 0x18,iVar2);
                  }
                  *(uint *)((longlong)iVar2 * 4 + *(longlong *)(lVar7 + 0x18)) = uVar1;
                }
LAB_14178f4e3:
                puVar17 = puVar17 + 1;
                uVar16 = uVar16 + 1;
              } while (uVar16 != uVar18);
            }
            uVar18 = 0;
            piVar20 = *(int **)(lVar19 + 0x28);
            uVar16 = (longlong)*(int *)(lVar19 + 0x30) & 0x3fffffffffffffff;
            if (piVar20 + *(int *)(lVar19 + 0x30) < piVar20) {
              uVar16 = uVar18;
            }
            if (uVar16 != 0) {
              do {
                lVar7 = *(longlong *)(puVar5 + 2);
                iVar2 = *piVar20;
                piVar12 = *(int **)(lVar7 + 0x28);
                iVar3 = *(int *)(lVar7 + 0x30);
                for (piVar10 = piVar12; piVar10 != piVar12 + iVar3; piVar10 = piVar10 + 1) {
                  if (*piVar10 == iVar2) {
                    if ((int)((longlong)piVar10 - (longlong)piVar12 >> 2) != -1) goto LAB_14178f57f;
                    break;
                  }
                }
                *(int *)(lVar7 + 0x30) = iVar3 + 1;
                if (*(int *)(lVar7 + 0x34) < iVar3 + 1) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar7 + 0x28,iVar3);
                }
                *(int *)((longlong)iVar3 * 4 + *(longlong *)(lVar7 + 0x28)) = iVar2;
LAB_14178f57f:
                piVar20 = piVar20 + 1;
                uVar18 = uVar18 + 1;
              } while (uVar18 != uVar16);
            }
          }
          else {
            FClusterReferenceProcessor::MergeCluster(puVar5,uVar18,plVar4,uVar6);
          }
        }
      }
LAB_14178f5a8:
      local_50 = local_50 + 1;
    } while (local_50 < param_3);
  }
  return;
}



// FUNCTION 14178f5f0 FUN_14178f5f0 body=222 status=ok
// SIG undefined FUN_14178f5f0(void)

undefined1 FUN_14178f5f0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FText::FText(local_38);
  if (param_3 == 0) {
    lVar5 = FTextInspector::GetDisplayString(local_38);
    uVar4 = *(int *)(lVar5 + 8) < 2;
  }
  else {
    FText::FText(local_20,param_3);
    uVar4 = UTextProperty::Identical_Implementation(local_38,local_20,param_4);
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return uVar4;
}



// FUNCTION 14178f6d0 Identical_Implementation body=541 status=ok
// SIG undefined Identical_Implementation(void)

bool UTextProperty::Identical_Implementation(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  short sVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  short *psVar9;
  bool bVar10;
  undefined2 *puVar11;
  longlong local_res20;
  longlong local_38;
  short *local_30;
  undefined8 local_28;
  undefined2 *local_20;
  undefined8 local_18;
  
  cVar3 = FText::IsCultureInvariant();
  cVar4 = FText::IsCultureInvariant(param_2);
  if (cVar3 == cVar4) {
    cVar3 = FText::IsTransient(param_1);
    cVar4 = FText::IsTransient(param_2);
    if (cVar3 == cVar4) {
      cVar3 = FText::IsEmpty(param_1);
      cVar4 = FText::IsEmpty(param_2);
      if (cVar3 == cVar4) {
        cVar3 = FText::IsEmpty(param_1);
        if (cVar3 == '\0') {
          cVar3 = FText::IdenticalTo(param_1,param_2);
          if (cVar3 == '\0') {
            cVar3 = FText::IsCultureInvariant(param_1);
            if ((cVar3 == '\0') && (cVar3 = FText::IsTransient(param_1), cVar3 == '\0')) {
              return false;
            }
            puVar7 = (undefined8 *)FTextInspector::GetDisplayString(param_2);
            puVar8 = (undefined8 *)FTextInspector::GetDisplayString(param_1);
            psVar9 = &DAT_143f3eda8;
            if (*(int *)(puVar7 + 1) == 0) {
              puVar11 = &DAT_143f3eda8;
            }
            else {
              puVar11 = (undefined2 *)*puVar7;
            }
            if (*(int *)(puVar8 + 1) != 0) {
              psVar9 = (short *)*puVar8;
            }
            lVar5 = (longlong)puVar11 - (longlong)psVar9;
            do {
              sVar1 = *psVar9;
              sVar2 = *(short *)((longlong)psVar9 + lVar5);
              if (sVar1 != sVar2) break;
              psVar9 = psVar9 + 1;
            } while (sVar2 != 0);
            return sVar1 == sVar2;
          }
          cVar3 = FText::IsFromStringTable();
          if (cVar3 != '\0') {
            lVar5 = FTextInspector::GetSourceString(param_1);
            lVar6 = FUN_14160b770();
            if (lVar5 == lVar6) {
              bVar10 = false;
              local_38 = 0;
              local_30 = (short *)0x0;
              local_28 = 0;
              FTextInspector::GetTableIdAndKey(param_1,&local_38,&local_30);
              local_res20 = 0;
              local_20 = (undefined2 *)0x0;
              local_18 = 0;
              FTextInspector::GetTableIdAndKey(param_2,&local_res20,&local_20);
              if (local_38 == local_res20) {
                puVar11 = &DAT_143f3eda8;
                if ((int)local_18 != 0) {
                  puVar11 = local_20;
                }
                psVar9 = &DAT_143f3eda8;
                if ((int)local_28 != 0) {
                  psVar9 = local_30;
                }
                lVar5 = (longlong)puVar11 - (longlong)psVar9;
                do {
                  sVar1 = *psVar9;
                  sVar2 = *(short *)((longlong)psVar9 + lVar5);
                  if (sVar1 != sVar2) break;
                  psVar9 = psVar9 + 1;
                } while (sVar2 != 0);
                if (sVar1 == sVar2) {
                  bVar10 = true;
                }
              }
              if (local_20 != (undefined2 *)0x0) {
                FMemory::Free(local_20);
              }
              if (local_30 != (short *)0x0) {
                FMemory::Free(local_30);
              }
              return bVar10;
            }
          }
        }
        return true;
      }
    }
  }
  return false;
}



// FUNCTION 14178f8f0 ImportTextItem body=414 status=ok
// SIG undefined ImportTextItem(void)

undefined8 FSoftObjectPath::ImportTextItem(undefined8 param_1,longlong *param_2)

{
  short sVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  wint_t wVar4;
  wint_t wVar5;
  longlong lVar6;
  short *psVar7;
  wint_t *pwVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined2 *local_40;
  undefined8 local_38;
  undefined2 *local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  local_40 = (undefined2 *)0x0;
  local_38 = 0;
  lVar6 = UPropertyHelpers::ReadToken(*param_2,&local_40,1);
  if (lVar6 != 0) {
    pwVar8 = &DAT_144d2d8e8;
    *param_2 = lVar6;
    puVar10 = &DAT_143f3eda8;
    if ((int)local_38 != 0) {
      puVar10 = local_40;
    }
    do {
      wVar4 = *(wint_t *)((longlong)(puVar10 + -0xa2696c74) + (longlong)pwVar8);
      if ((wVar4 == 0) && (*pwVar8 == 0)) goto LAB_14178f994;
      if (wVar4 != *pwVar8) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar8);
        uVar2 = local_38;
        if (wVar4 != wVar5) goto LAB_14178f989;
      }
      pwVar8 = pwVar8 + 1;
    } while( true );
  }
  goto LAB_14178fa55;
LAB_14178f989:
  if (wVar4 == wVar5) {
LAB_14178f994:
    if (local_40 != (undefined2 *)&DAT_144d29174) {
      uVar2 = local_38 >> 0x20;
      local_38 = local_38 & 0xffffffff00000000;
      if ((int)uVar2 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_40,0);
      }
      if (local_38._4_4_ < (int)local_38) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_40);
      }
    }
  }
  else if (*(short *)*param_2 == 0x27) {
    uVar3 = local_38 >> 0x20;
    local_38 = local_38 & 0xffffffff00000000;
    *param_2 = (longlong)((short *)*param_2 + 1);
    if (((longlong)uVar2 < 0) && ((int)uVar3 != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_40,0);
    }
    if (local_40 != (undefined2 *)0x0) {
      *local_40 = 0;
    }
    psVar7 = (short *)UPropertyHelpers::ReadToken(*param_2,&local_40,1);
    if (psVar7 != (short *)0x0) {
      *param_2 = (longlong)psVar7;
      sVar1 = *psVar7;
      *param_2 = (longlong)(psVar7 + 1);
      if (sVar1 == 0x27) goto LAB_14178fa29;
    }
LAB_14178fa55:
    uVar9 = 0;
    goto LAB_14178fa57;
  }
LAB_14178fa29:
  local_30 = local_40;
  local_28 = (int)local_38;
  local_24 = local_38._4_4_;
  local_38 = 0;
  local_40 = (undefined2 *)0x0;
  FUN_1417978e0(param_1,&local_30);
  uVar9 = 1;
LAB_14178fa57:
  if (local_40 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar9;
}



// FUNCTION 14178fa90 FUN_14178fa90 body=814 status=ok
// SIG undefined FUN_14178fa90(void)

undefined2 *
FUN_14178fa90(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
             longlong param_5)

{
  undefined2 *_Dst;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *_Src;
  undefined2 *_Src_00;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  int local_54;
  undefined2 *local_50;
  undefined8 local_48;
  
  lVar9 = param_5;
  puVar10 = (undefined2 *)0x0;
  iVar8 = 0;
  puVar12 = puVar10;
  if ((param_5 != 0) && (puVar12 = (undefined2 *)0x0, (*(uint *)(param_1 + 0x38) >> 0xe & 1) != 0))
  {
    cVar4 = UsesPerObjectConfig(param_5);
    if (cVar4 == '\0') {
      if ((*(uint *)(param_1 + 0x38) >> 0x12 & 1) == 0) {
        uVar7 = *(undefined8 *)(lVar9 + 0x10);
      }
      else {
        uVar7 = UField::GetOwnerClass(param_1);
      }
      local_50 = (undefined2 *)0x0;
      local_48 = 0;
      UObjectBaseUtility::GetPathName(uVar7,0,&local_50);
      puVar12 = local_50;
      iVar8 = (int)local_48;
    }
    else {
      lVar6 = *(longlong *)(lVar9 + 0x20);
      lVar2 = lVar9;
      while (lVar1 = lVar6, lVar1 != 0) {
        lVar2 = lVar1;
        lVar6 = *(longlong *)(lVar1 + 0x20);
      }
      lVar6 = GetTransientPackage();
      if (lVar2 == lVar6) {
        local_68 = *(undefined8 *)(lVar9 + 0x18);
        FName::ToString(&local_68,&local_50);
      }
      else {
        local_50 = (undefined2 *)0x0;
        local_48 = 0;
        UObjectBaseUtility::GetPathName(lVar9,lVar2,&local_50);
      }
      _Src = local_50;
      iVar5 = (int)local_48;
      local_68 = *(undefined8 *)(*(longlong *)(lVar9 + 0x10) + 0x18);
      FName::ToString(&local_68,&local_50);
      local_60 = (undefined2 *)0x0;
      local_58 = iVar5;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,(2 - (uint)(iVar5 != 0)) + iVar5,0)
      ;
      puVar11 = local_60;
      _guard_xfg_dispatch_icall_nop(local_60,_Src,(longlong)iVar5 * 2);
      iVar5 = local_58;
      lVar9 = (longlong)local_58;
      local_58 = (2 - (uint)(local_58 != 0)) + local_58;
      if (local_54 < local_58) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,iVar5);
        puVar11 = local_60;
      }
      puVar12 = local_50;
      puVar11[lVar9 - (ulonglong)(iVar5 != 0)] = 0x20;
      (puVar11 + (lVar9 - (ulonglong)(iVar5 != 0)))[1] = 0;
      iVar5 = (int)local_48;
      if (local_58 < 2) {
        local_50 = (undefined2 *)0x0;
        local_48 = 0;
      }
      else {
        if ((int)local_48 != 0) {
          iVar8 = (int)local_48 + -1;
        }
        if ((local_58 != 0) || (iVar5 = 1, iVar8 == 0)) {
          iVar5 = 0;
        }
        local_60 = puVar11;
        if (local_54 < iVar5 + local_58 + iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_60);
        }
        _Src_00 = local_50;
        iVar3 = local_58;
        puVar11 = puVar10;
        puVar12 = local_60;
        iVar5 = local_58;
        if (iVar8 != 0) {
          lVar9 = (longlong)local_58;
          local_58 = iVar8 + (uint)(local_58 == 0) + local_58;
          if (local_54 < local_58) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,iVar3);
          }
          iVar5 = local_58;
          puVar12 = local_60;
          _Dst = local_60 + (lVar9 - (ulonglong)(iVar3 != 0));
          _guard_xfg_dispatch_icall_nop(_Dst,_Src_00,(longlong)iVar8 * 2);
          _Dst[iVar8] = 0;
        }
      }
      if (puVar11 != (undefined2 *)0x0) {
        FMemory::Free(puVar11);
      }
      if (local_50 != (undefined2 *)0x0) {
        FMemory::Free(local_50);
      }
      iVar8 = iVar5;
      if (_Src != (undefined2 *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
  param_5._0_4_ = 0;
  puVar11 = &DAT_143f3eda8;
  if (iVar8 != 0) {
    puVar11 = puVar12;
  }
  cVar4 = FTextStringHelper::ReadFromString
                    (param_2,param_3,puVar11,&DAT_143f3eda8,&param_5,(byte)(param_4 >> 1) & 1,2);
  if (cVar4 != '\0') {
    puVar10 = (undefined2 *)(param_2 + (longlong)(int)param_5 * 2);
  }
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
  return puVar10;
}



// FUNCTION 14178fdc0 FUN_14178fdc0 body=799 status=ok
// SIG undefined FUN_14178fdc0(void)

void FUN_14178fdc0(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  void *pvVar10;
  char cVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  char cVar16;
  bool bVar17;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  uVar14 = *(uint *)((longlong)plVar4 + 0xb4) & 0x10000080;
  cVar16 = uVar14 == 0;
  if ((param_4 == '\0') && (param_2 == plVar4)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  uVar1 = *(uint *)(param_1 + 8);
  lVar15 = 0;
  cVar11 = '\0';
  if ((uVar1 >> 10 & 1) == 0) {
    cVar11 = param_4;
  }
  if ((uVar14 == 0) || (!bVar7)) {
    if ((param_3 == plVar4[0x1f]) && ((uVar1 & 0x20080000) != 0x20080000)) {
      bVar8 = 1;
    }
    else {
      bVar8 = 0;
    }
    bVar7 = (bool)(bVar7 & bVar8);
    if ((bVar7) && (((ulonglong)plVar4[0x17] >> 0x28 & 1) != 0)) {
      bVar7 = false;
    }
    if ((cVar11 != '\0') && (lVar15 = param_2[0x1f], lVar15 == 0)) {
      (**(code **)(*param_2 + 0x368))();
      lVar15 = param_2[0x1f];
    }
    if (bVar7) {
      plVar5 = (longlong *)plVar4[0xe];
    }
    else {
      plVar5 = (longlong *)plVar4[0xb];
    }
    while (plVar5 != (longlong *)0x0) {
      bVar17 = cVar16 != '\0';
      cVar16 = '\0';
      if (bVar17) {
        cVar16 = FUN_1416facb0(plVar5,param_1);
      }
      uVar6 = plVar5[7];
      if ((uVar6 & 0x800000202000) == 0) {
        bVar17 = false;
LAB_14178fff0:
        if ((cVar11 == '\0') || (!bVar17)) {
          if (param_2 == (longlong *)0x0) {
            iVar9 = 0x7fffffff;
          }
          else {
            iVar9 = (int)param_2[8];
          }
          iVar3 = (int)plVar5[6];
          iVar2 = *(int *)((longlong)plVar5 + 0x44);
          iVar13 = *(int *)((longlong)plVar5 + 0x34) * iVar3;
          if (iVar13 + iVar2 <= iVar9) {
            pvVar10 = (void *)(iVar2 + param_1);
            pvVar12 = (void *)(iVar2 + param_3);
            if (pvVar10 != pvVar12) {
              if ((uVar6 >> 0x1e & 1) == 0) goto LAB_141790070;
              _guard_xfg_dispatch_icall_nop(pvVar10,pvVar12,(longlong)iVar13);
            }
          }
        }
        else {
          pvVar12 = (void *)(*(int *)((longlong)plVar5 + 0x44) + lVar15);
          pvVar10 = (void *)(*(int *)((longlong)plVar5 + 0x44) + param_1);
          if (pvVar10 != pvVar12) {
            if ((uVar6 >> 0x1e & 1) == 0) {
              iVar3 = (int)plVar5[6];
LAB_141790070:
              (**(code **)(*plVar5 + 0x2e8))(plVar5,pvVar10,pvVar12,iVar3);
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        (pvVar10,pvVar12,
                         (longlong)(*(int *)((longlong)plVar5 + 0x34) * (int)plVar5[6]));
            }
          }
        }
      }
      else {
        bVar17 = true;
        if ((uVar6 & 0x8000080000) == 0) goto LAB_14178fff0;
      }
      if (bVar7) {
        plVar5 = (longlong *)plVar5[0xd];
      }
      else {
        plVar5 = (longlong *)plVar5[10];
      }
    }
    if (bVar7) {
      (**(code **)(*plVar4 + 0x308))(plVar4,param_1,param_3);
    }
  }
  else if (param_3 != 0) {
    if ((plVar4[0x1f] == param_3) && ((uVar1 & 0x20080000) != 0x20080000)) {
      for (plVar4 = (longlong *)plVar4[0xe]; plVar4 != (longlong *)0x0;
          plVar4 = (longlong *)plVar4[0xd]) {
        pvVar12 = (void *)(*(int *)((longlong)plVar4 + 0x44) + param_3);
        pvVar10 = (void *)(*(int *)((longlong)plVar4 + 0x44) + param_1);
        if (pvVar10 != pvVar12) {
          if ((*(uint *)(plVar4 + 7) >> 0x1e & 1) == 0) {
            (**(code **)(*plVar4 + 0x2e8))(plVar4,pvVar10,pvVar12,(int)plVar4[6]);
          }
          else {
            _guard_xfg_dispatch_icall_nop
                      (pvVar10,pvVar12,
                       (longlong)(*(int *)((longlong)plVar4 + 0x34) * (int)plVar4[6]));
          }
        }
      }
    }
    else {
      for (plVar4 = (longlong *)plVar4[0xb]; plVar4 != (longlong *)0x0;
          plVar4 = (longlong *)plVar4[10]) {
        pvVar12 = (void *)(*(int *)((longlong)plVar4 + 0x44) + param_3);
        pvVar10 = (void *)(*(int *)((longlong)plVar4 + 0x44) + param_1);
        if (pvVar10 != pvVar12) {
          if ((*(uint *)(plVar4 + 7) >> 0x1e & 1) == 0) {
            (**(code **)(*plVar4 + 0x2e8))(plVar4,pvVar10,pvVar12,(int)plVar4[6]);
          }
          else {
            _guard_xfg_dispatch_icall_nop
                      (pvVar10,pvVar12,
                       (longlong)(*(int *)((longlong)plVar4 + 0x34) * (int)plVar4[6]));
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1417900e0 InitializeValueInternal body=72 status=ok
// SIG undefined InitializeValueInternal(void)

void TProperty<FText,UProperty>::InitializeValueInternal(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      FText::FText(iVar1 * *(int *)(param_1 + 0x34) + param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 141790130 InstanceSubobjects body=470 status=ok
// SIG undefined InstanceSubobjects(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FObjectInitializer::InstanceSubobjects
               (longlong *param_1,undefined8 param_2,char param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined1 *local_110;
  undefined1 local_108 [24];
  undefined1 local_f0 [64];
  longlong local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [64];
  longlong local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  FObjectInstancingGraph::FObjectInstancingGraph(local_108,0);
  puVar6 = local_108;
  if ((undefined1 *)param_1[3] != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)param_1[3];
  }
  FObjectInstancingGraph::AddNewObject(puVar6,*param_1,param_1[1]);
  plVar4 = (longlong *)param_1[0x26];
  if ((longlong *)param_1[0x26] == (longlong *)0x0) {
    plVar4 = param_1 + 0x16;
  }
  plVar7 = plVar4 + (longlong)(int)param_1[0x27] * 2;
  for (; plVar4 != plVar7; plVar4 = plVar4 + 2) {
    FObjectInstancingGraph::AddNewObject(puVar6,*plVar4,plVar4[1]);
  }
  if (param_3 != '\0') {
    lVar3 = param_1[1];
    if ((lVar3 == 0) && (lVar3 = FUN_14178ca30(*param_1), lVar3 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar3 + 0x10);
    }
    local_118 = *param_1;
    local_110 = puVar6;
    FUN_14171e2d0(param_2,local_118,lVar3,uVar8);
  }
  if ((param_4 != '\0') && (iVar5 = 0, 0 < (int)param_1[0x27])) {
    lVar3 = 0;
    do {
      plVar4 = (longlong *)param_1[0x26];
      if ((longlong *)param_1[0x26] == (longlong *)0x0) {
        plVar4 = param_1 + 0x16;
      }
      lVar1 = *(longlong *)((longlong)plVar4 + lVar3);
      if (((*(uint *)(lVar1 + 8) >> 10 & 1) == 0) || ((*(byte *)(param_1 + 0x29) & 1) != 0)) {
        lVar2 = *(longlong *)((longlong)plVar4 + lVar3 + 8);
        local_118 = lVar1;
        local_110 = puVar6;
        FUN_14171e2d0(*(undefined8 *)(lVar1 + 0x10),lVar1,lVar2,*(undefined8 *)(lVar2 + 0x10));
      }
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + 0x10;
    } while (iVar5 < (int)param_1[0x27]);
  }
  local_58 = 0;
  if (local_60 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_a0);
  local_a8 = 0;
  if (local_b0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_f0);
  return;
}



// FUNCTION 141790310 FUN_141790310 body=78 status=ok
// SIG undefined FUN_141790310(void)

undefined8 FUN_141790310(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return 0;
  }
  if ((((*(uint *)(*(longlong *)(param_1 + 0x20) + 8) >> 4 & 1) == 0) &&
      ((*(uint *)(param_1 + 8) >> 0x12 & 1) == 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xf8), lVar2 = FUN_14178ca30(),
     lVar2 == lVar1)) {
    return 0;
  }
  return 1;
}



// FUNCTION 141790360 IsIn body=40 status=ok
// SIG undefined IsIn(void)

ulonglong UObjectBaseUtility::IsIn(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  while( true ) {
    if (lVar1 == 0) {
      return (ulonglong)(param_2 == 0);
    }
    if (lVar1 == param_2) break;
    lVar1 = *(longlong *)(lVar1 + 0x20);
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 141790390 IsInA body=74 status=ok
// SIG undefined IsInA(void)

bool UObjectBaseUtility::IsInA(longlong param_1,longlong param_2)

{
  bool bVar1;
  
  if (param_1 != 0) {
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(param_2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(param_2 + 0x90) * 8) != param_2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return true;
      }
      param_1 = *(longlong *)(param_1 + 0x20);
    } while (param_1 != 0);
  }
  return param_2 == 0;
}



// FUNCTION 1417903e0 IsInstancingAllowed body=21 status=ok
// SIG undefined IsInstancingAllowed(void)

longlong FObjectInitializer::IsInstancingAllowed(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x11) == '\0')) {
    return (ulonglong)uVar2 << 8;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 141790400 FUN_141790400 body=71 status=ok
// SIG undefined FUN_141790400(void)

bool FUN_141790400(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res8;
  local_res8[0] = 0;
  local_18 = FUN_1406ddef0;
  lVar1 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  return 0 < *(int *)(lVar1 + 0x30);
}



// FUNCTION 141790450 IsTemplate body=25 status=ok
// SIG undefined IsTemplate(void)

undefined1 UObjectBaseUtility::IsTemplate(longlong param_1,uint param_2)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if ((*(uint *)(param_1 + 8) & param_2) != 0) break;
    param_1 = *(longlong *)(param_1 + 0x20);
  }
  return 1;
}



// FUNCTION 141790470 IsValidLowLevel body=90 status=ok
// SIG undefined IsValidLowLevel(void)

ulonglong UObjectBase::IsValidLowLevel(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong in_RAX;
  uint uVar3;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    uVar2 = *(uint *)(param_1 + 0xc);
    in_RAX = (ulonglong)uVar2;
    if ((uVar2 != 0xffffffff) &&
       ((((int)uVar2 < (int)DAT_1469e91c4 && (-1 < (int)uVar2)) &&
        (uVar3 = (int)uVar2 >> 0x1f & 0xffff, uVar2 = uVar2 + uVar3,
        lVar1 = *(longlong *)
                 (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                 (longlong)(int)((uVar2 & 0xffff) - uVar3) * 0x18), in_RAX = 0, lVar1 != 0)))) {
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 == param_1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1417904d0 FUN_1417904d0 body=194 status=ok
// SIG undefined FUN_1417904d0(void)

ulonglong FUN_1417904d0(longlong *param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  
  if ((((longlong *)0xff < param_1) && (((ulonglong)param_1 & 7) == 0)) && (*param_1 != 0)) {
    lVar2 = param_1[2];
    in_RAX = (ulonglong)(*(uint *)(param_1 + 1) & 0x10000000);
    if ((((((uint)param_1[4] | (uint)lVar2) & 7) == 0 && (*(uint *)(param_1 + 1) & 0x10000000) == 0)
        && (lVar2 != 0)) &&
       ((in_RAX = *(ulonglong *)(lVar2 + 0xf8), in_RAX != 0 && ((in_RAX & 7) == 0)))) {
      if (param_2 != '\0') {
        in_RAX = FUN_1417904d0(lVar2,0);
        if ((char)in_RAX == '\0') goto LAB_141790585;
      }
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      in_RAX = (ulonglong)uVar1;
      if ((((int)uVar1 < (int)DAT_1469e91c4) && (-1 < (int)uVar1)) &&
         (lVar2 = param_1[3], -1 < (int)lVar2)) {
        lVar3 = FName::GetNames();
        in_RAX = (ulonglong)*(uint *)(lVar3 + 0x400);
        if (((int)lVar2 < (int)*(uint *)(lVar3 + 0x400)) && (lVar2 = param_1[3], -1 < (int)lVar2)) {
          lVar3 = FName::GetNames();
          uVar1 = *(uint *)(lVar3 + 0x400);
          in_RAX = (ulonglong)uVar1;
          if ((int)lVar2 < (int)uVar1) {
            return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
          }
        }
      }
    }
  }
LAB_141790585:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1417905a0 FUN_1417905a0 body=473 status=ok
// SIG undefined FUN_1417905a0(void)

undefined8 FUN_1417905a0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined8 local_res10;
  longlong local_48 [2];
  longlong local_38 [2];
  longlong local_28 [2];
  
  if ((param_3 != 0) && (lVar2 = param_3, param_4 != 0)) {
    while (lVar2 != param_4) {
      plVar1 = (longlong *)(lVar2 + 0x30);
      lVar2 = *plVar1;
      if (*plVar1 == 0) {
        local_res10 = param_2;
        puVar3 = (undefined8 *)UObjectBaseUtility::GetFullName(param_4,local_28,0);
        puVar6 = &DAT_143f3eda8;
        if (*(int *)(puVar3 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)*puVar3;
        }
        puVar3 = (undefined8 *)FName::ToString(&local_res10,local_38);
        if (*(int *)(puVar3 + 1) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)*puVar3;
        }
        puVar3 = (undefined8 *)UObjectBaseUtility::GetFullName(param_3,local_48,0);
        if (*(int *)(puVar3 + 1) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = (undefined2 *)*puVar3;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0xc8f,
                   L"%s is not a legal override for component %s because it does not derive from %s."
                   ,puVar7,puVar4,puVar5);
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        puVar3 = (undefined8 *)UObjectBaseUtility::GetFullName(param_4,local_48,0);
        if (*(int *)(puVar3 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)*puVar3;
        }
        puVar3 = (undefined8 *)FName::ToString(&local_res10,local_38);
        if (*(int *)(puVar3 + 1) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)*puVar3;
        }
        puVar3 = (undefined8 *)UObjectBaseUtility::GetFullName(param_3,local_28,0);
        if (*(int *)(puVar3 + 1) != 0) {
          puVar6 = (undefined2 *)*puVar3;
        }
        FDebug::AssertFailed
                  (&DAT_144d28f37,"Unknown",0xc8f,
                   L"%s is not a legal override for component %s because it does not derive from %s."
                   ,puVar6,puVar4,puVar5);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 141790780 IterateToNext body=151 status=ok
// SIG undefined IterateToNext(void)

void FPropertyValueIterator::IterateToNext(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined1 uVar5;
  
  uVar5 = (undefined1)param_1[3];
  if ((char)param_1[4] != '\0') {
    uVar5 = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  cVar3 = NextValue(param_1,uVar5,0);
  while( true ) {
    if (cVar3 == '\0') {
      return;
    }
    lVar4 = (longlong)(int)param_1[1] * 0x38;
    iVar1 = *(int *)(param_1[2] + 0x90);
    lVar4 = *(longlong *)
             (*(longlong *)
               (*(longlong *)(lVar4 + -0x18 + *param_1) +
               (longlong)*(int *)(lVar4 + -8 + *param_1) * 0x10) + 0x10);
    if ((*(int *)(lVar4 + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)iVar1 * 8) != param_1[2] + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) break;
    cVar3 = NextValue(param_1,(char)param_1[3],0);
  }
  return;
}



// FUNCTION 141790820 FUN_141790820 body=164 status=ok
// SIG undefined FUN_141790820(void)

void FUN_141790820(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 == '\x01') {
    LowLevelFatalErrorHandler("Unknown",0x1ce,L"Script Msg: %s\n%s",param_1,&DAT_143f3eda8);
    FDebug::AssertFailed
              (&DAT_144d28f32,"Unknown",0x1ce,L"Script Msg: %s\n%s",param_1,&DAT_143f3eda8);
    return;
  }
  uVar1 = FScriptExceptionHandler::Get();
  FUN_14164f690(uVar1,param_2,param_1,&DAT_143f3eda8);
  return;
}



// FUNCTION 1417908e0 LoadPackage body=378 status=ok
// SIG undefined LoadPackage(void)

undefined8 LoadPackage(undefined8 param_1,short *param_2,undefined4 param_3,undefined8 param_4)

{
  void *_Dst;
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_48;
  int local_40;
  int local_3c;
  longlong local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  lVar5 = local_38;
  FGenericPlatformString::Memcpy(local_38,L"Package ",0x12);
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    iVar3 = (int)lVar4;
    if (((int)local_30 != 0) || (iVar1 = 1, iVar3 == 0)) {
      iVar1 = 0;
    }
    local_48 = lVar5;
    local_40 = (int)local_30;
    local_3c = local_30._4_4_;
    if (local_30._4_4_ < iVar1 + (int)local_30 + iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
    }
    iVar1 = local_40;
    lVar5 = local_48;
    if (iVar3 != 0) {
      local_40 = (uint)(local_40 == 0) + local_40 + iVar3;
      if (local_3c < local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar1);
      }
      lVar5 = local_48;
      _Dst = (void *)(local_48 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,param_2,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
    }
  }
  uVar2 = FUN_141790a60(param_1,param_2,param_3,0,param_4);
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  return uVar2;
}



// FUNCTION 141790a60 FUN_141790a60 body=3611 status=ok
// SIG undefined FUN_141790a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_141790a60(longlong param_1,short *param_2,uint param_3,longlong param_4,
                       undefined8 param_5)

{
  int *piVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined2 **ppuVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  short *psVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  long lVar22;
  undefined1 auStack_408 [32];
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined1 local_3c8;
  undefined1 local_3c7;
  undefined1 local_3c6;
  undefined1 local_3c5 [5];
  undefined2 *local_3c0;
  uint local_3b8;
  int local_3b4;
  short *local_3b0;
  undefined8 local_3a8;
  uint local_3a0;
  void *local_398;
  int local_390;
  int local_38c;
  longlong local_388;
  ulonglong local_380;
  longlong local_378;
  ulonglong local_370;
  void *local_368;
  undefined8 local_360;
  undefined4 *local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  LARGE_INTEGER local_340;
  undefined8 local_338;
  longlong local_330;
  undefined8 local_328;
  longlong local_320;
  LARGE_INTEGER local_318;
  undefined2 *local_310;
  uint local_308;
  int local_304;
  undefined2 *local_300;
  int local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  code *local_2c8;
  undefined1 *puStack_2c0;
  code *local_2b8;
  undefined1 *puStack_2b0;
  code *local_2a8;
  undefined1 *puStack_2a0;
  code *local_298;
  undefined1 *puStack_290;
  undefined1 local_288 [8];
  longlong local_280;
  ulonglong local_278;
  undefined1 local_270 [8];
  longlong local_268 [2];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  undefined4 local_238;
  undefined4 uStack_234;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined1 local_158 [24];
  undefined1 local_140 [24];
  undefined4 local_128 [4];
  undefined1 local_118 [8];
  longlong *local_110;
  char local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  longlong *local_d8;
  undefined4 local_bc;
  undefined1 local_ac;
  longlong local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  longlong local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  uVar9 = 0;
  lVar20 = -1;
  local_338 = param_5;
  local_3a0 = param_3;
  local_330 = param_1;
  local_320 = param_4;
  if (DAT_1468c21ab != '\0') {
    local_398 = (void *)0x0;
    local_388 = 0;
    local_38c = 0;
    local_3b0 = (short *)0x0;
    local_3a8 = 0;
    local_380 = 0;
    if ((param_2 != (short *)0x0) && (lVar19 = lVar20, *param_2 != 0)) {
      do {
        lVar19 = lVar19 + 1;
      } while (param_2[lVar19] != 0);
      uVar17 = (int)lVar19 + 1;
      local_380 = (ulonglong)uVar17;
      if (0 < (int)uVar17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_388,0);
      }
      FGenericPlatformString::Memcpy(local_388,param_2,(longlong)(int)uVar17 * 2);
    }
    cVar4 = FString::EndsWith(&local_388,&DAT_1464b4428,1);
    if ((cVar4 == '\0') && (cVar4 = FString::EndsWith(&local_388,&DAT_1464b4438,1), cVar4 == '\0'))
    {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (local_388 != 0) {
      FMemory::Free();
    }
    if (bVar3) {
      local_370 = 0;
      local_378 = 0;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        do {
          lVar20 = lVar20 + 1;
        } while (param_2[lVar20] != 0);
        uVar17 = (int)lVar20 + 1;
        local_370 = (ulonglong)uVar17;
        if (0 < (int)uVar17) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_378,0);
        }
        FGenericPlatformString::Memcpy(local_378,param_2,(longlong)(int)uVar17 * 2);
      }
      FPackageName::TryConvertFilenameToLongPackageName(&local_378,&local_3b0,0);
      if (local_378 != 0) {
        FMemory::Free();
      }
    }
    else if (local_3b0 != param_2) {
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        do {
          lVar20 = lVar20 + 1;
        } while (param_2[lVar20] != 0);
        uVar9 = (ulonglong)((int)lVar20 + 1);
      }
      iVar18 = (int)uVar9;
      iVar7 = local_3a8._4_4_;
      if (local_3a8._4_4_ != iVar18) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_3b0,uVar9);
        iVar7 = local_3a8._4_4_;
      }
      iVar5 = (int)local_3a8 + iVar18;
      local_3a8 = CONCAT44(local_3a8._4_4_,iVar5);
      if (iVar7 < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3b0);
      }
      if (iVar18 != 0) {
        _guard_xfg_dispatch_icall_nop(local_3b0,param_2,(longlong)iVar18 * 2);
      }
    }
    psVar14 = local_3b0;
    if (param_1 == 0) {
      lVar20 = (longlong)(int)local_3a8;
      local_390 = (int)local_3a8;
      if (((int)local_3a8 != 0) || (local_38c != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_398,local_3a8 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(local_398,psVar14,lVar20 * 2);
        goto LAB_141790cc2;
      }
    }
    else {
      local_368 = (void *)0x0;
      local_360 = 0;
      UObjectBaseUtility::GetPathName(param_1,0,&local_368);
      if (local_398 != (void *)0x0) {
        FMemory::Free();
      }
      local_398 = local_368;
      local_390 = (int)local_360;
      local_38c = local_360._4_4_;
LAB_141790cc2:
      psVar14 = local_3b0;
      if ((int)local_3a8 != 0) goto LAB_141790cd0;
    }
    psVar14 = &DAT_143f3eda8;
LAB_141790cd0:
    FName::FName(&local_348,psVar14,1);
    plVar16 = DAT_1464aef08;
    do {
      if (plVar16 == DAT_1464aef08 + (longlong)DAT_1464aef10 * 2) {
LAB_141790d26:
        local_3d8 = 0;
        psVar14 = &DAT_143f3eda8;
        if ((int)local_3a8 != 0) {
          psVar14 = local_3b0;
        }
        local_3e0._0_4_ = 0xffffffff;
        local_358 = (undefined4 *)0x0;
        uStack_350 = (undefined1 *)((ulonglong)uStack_350._4_4_ << 0x20);
        local_3e8 = (ulonglong)local_3e8._4_4_ << 0x20;
        uVar6 = FUN_1416fe5f0(&local_398,0,psVar14,&local_358);
        FUN_1416f7d70(uVar6);
        uVar8 = UPackage::GetPrivateStaticClass();
        local_3d8 = 0;
        local_3e0 = (ulonglong)local_3e0._4_4_ << 0x20;
        local_3e8 = local_3e8 & 0xffffffffffffff00;
        uVar9 = FUN_141799680(uVar8,0,local_348,0);
        if (local_3b0 != (short *)0x0) {
          FMemory::Free();
        }
        if (local_398 == (void *)0x0) {
          return uVar9;
        }
        FMemory::Free();
        return uVar9;
      }
      if (((int)plVar16[1] != 0) && (*plVar16 != 0)) {
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_1464aef08,&local_398);
        goto LAB_141790d26;
      }
      plVar16 = plVar16 + 2;
    } while( true );
  }
  local_3c0 = (undefined2 *)0x0;
  local_3b8 = 0;
  local_3b4 = 0;
  lVar19 = lVar20;
  if (param_2 == (short *)0x0) {
LAB_141790e39:
    if (param_1 != 0) {
      local_2e0 = *(undefined8 *)(param_1 + 0x18);
      FName::ToString(&local_2e0,&local_310);
      if (local_3c0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_3c0 = local_310;
      local_3b8 = local_308;
      local_3b4 = local_304;
    }
  }
  else {
    do {
      lVar19 = lVar19 + 1;
    } while (param_2[lVar19] != 0);
    if ((int)lVar19 < 1) goto LAB_141790e39;
    if (param_2 != (short *)0x0) {
      uVar21 = uVar9;
      if (*param_2 != 0) {
        do {
          lVar20 = lVar20 + 1;
        } while (param_2[lVar20] != 0);
        uVar21 = (ulonglong)((int)lVar20 + 1);
      }
      iVar7 = (int)uVar21;
      uVar15 = uVar9;
      if (iVar7 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_3c0,uVar21);
        uVar15 = (ulonglong)local_3b8;
      }
      local_3b8 = (int)uVar15 + iVar7;
      if (local_3b4 < (int)local_3b8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c0);
      }
      if (iVar7 != 0) {
        _guard_xfg_dispatch_icall_nop(local_3c0,param_2,(longlong)iVar7 * 2);
      }
    }
  }
  cVar4 = FPackageName::IsShortPackageName(&local_3c0);
  lVar22 = 0x43f3eda8;
  if (cVar4 != '\0') {
    puVar12 = &DAT_143f3eda8;
    if (local_3b8 != 0) {
      puVar12 = local_3c0;
    }
    puVar10 = (undefined8 *)FName::FName(local_288,puVar12,1);
    lVar20 = FPackageName::FindScriptPackageName(*puVar10);
    if (lVar20 == 0) {
      cVar4 = FUN_14170afe0(&local_3c0,&local_3c0,0);
      if (cVar4 == '\0') goto LAB_141791848;
    }
    else {
      ppuVar11 = (undefined2 **)FName::ToString(lVar20,local_268);
      if (&local_3c0 != ppuVar11) {
        if (local_3c0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_3c0 = *ppuVar11;
        *ppuVar11 = (undefined2 *)0x0;
        local_3b8 = *(uint *)(ppuVar11 + 1);
        local_3b4 = *(int *)((longlong)ppuVar11 + 0xc);
        ppuVar11[1] = (undefined2 *)0x0;
      }
      if (local_268[0] != 0) {
        FMemory::Free();
      }
    }
  }
  lVar20 = FText::FromString(local_1a0,&local_3c0);
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_1c8,L"Loading Package \'{0}\'",L"Core",L"LoadingPackage_Scope");
  puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_1b0,uVar8);
  local_128[0] = 4;
  FText::FText(local_118,lVar20);
  local_2d8 = *puVar10;
  local_358 = local_128;
  uStack_350 = local_f8;
  local_2d0 = puVar10[1];
  local_100 = '\x01';
  if (local_2d0 != 0) {
    LOCK();
    *(int *)(local_2d0 + 8) = *(int *)(local_2d0 + 8) + 1;
    UNLOCK();
  }
  local_258 = local_358;
  uStack_250 = uStack_350;
  uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_248,&local_258);
  uVar8 = FText::Format(local_1e0,&local_2d8,uVar8);
  FText::FText(local_1f8,uVar8);
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_1d8 + 1;
    lVar19 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_1d8)(local_1d8);
      LOCK();
      piVar1 = (int *)((longlong)local_1d8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_1d8 + 8))(local_1d8,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_248);
  if ((local_100 != '\0') && (local_100 = '\0', local_110 != (longlong *)0x0)) {
    LOCK();
    plVar16 = local_110 + 1;
    lVar19 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)local_110 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  plVar16 = (longlong *)puVar10[1];
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar16 + 1;
    lVar19 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  plVar16 = *(longlong **)(lVar20 + 8);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar16 + 1;
    lVar20 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  local_3e8 = DAT_1468b6160;
  FUN_141660a80(local_f8,0x42c80000,local_1f8,0);
  FSlowTask::Initialize(local_f8);
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_1f0 + 1;
    lVar20 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar1 = (int *)((longlong)local_1f0 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_1f0 + 8))(local_1f0,1);
      }
    }
  }
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_1c0 + 1;
    lVar20 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar1 = (int *)((longlong)local_1c0 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_1c0 + 8))(local_1c0,1);
      }
    }
  }
  local_bc = 2;
  uVar8 = FText::FText(local_188);
  FSlowTask::EnterProgressFrame(local_f8,0x41200000,uVar8);
  for (plVar16 = DAT_1464aef08; plVar16 != DAT_1464aef08 + (longlong)DAT_1464aef10 * 2;
      plVar16 = plVar16 + 2) {
    if (((int)plVar16[1] != 0) && (*plVar16 != 0)) {
      DAT_1464aef1c = DAT_1464aef1c + 1;
      lVar20 = (longlong)(DAT_1464aef10 + -1);
      bVar3 = false;
      if (DAT_1464aef10 + -1 < 0) goto LAB_14179129e;
      lVar19 = lVar20 << 4;
      bVar3 = false;
      goto LAB_141791260;
    }
  }
  goto LAB_141791335;
LAB_141791774:
  if ((int)((longlong)plVar13 - (longlong)plVar16 >> 3) == -1) goto LAB_141791780;
  goto LAB_1417917a0;
LAB_141791260:
  do {
    if ((*(int *)((longlong)DAT_1464aef08 + lVar19 + 8) == 0) ||
       (plVar16 = *(longlong **)((longlong)DAT_1464aef08 + lVar19), plVar16 == (longlong *)0x0)) {
LAB_141791285:
      bVar3 = true;
    }
    else {
      cVar4 = (**(code **)(*plVar16 + 0x40))(plVar16,&local_3c0);
      if (cVar4 == '\0') goto LAB_141791285;
    }
    lVar19 = lVar19 + -0x10;
    lVar20 = lVar20 + -1;
  } while (-1 < lVar20);
LAB_14179129e:
  iVar7 = DAT_1464aef10;
  DAT_1464aef1c = DAT_1464aef1c + -1;
  if ((bVar3) && (DAT_1464aef1c < 1)) {
    uVar21 = uVar9;
    uVar15 = uVar9;
    if (0 < DAT_1464aef10) {
      do {
        if ((*(int *)((longlong)DAT_1464aef08 + uVar21 + 8) == 0) ||
           (*(longlong **)((longlong)DAT_1464aef08 + uVar21) == (longlong *)0x0)) {
LAB_1417912eb:
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464aef08,uVar15,1,1);
        }
        else {
          cVar4 = (**(code **)(**(longlong **)((longlong)DAT_1464aef08 + uVar21) + 0x10))();
          if (cVar4 != '\0') goto LAB_1417912eb;
          uVar15 = (ulonglong)((int)uVar15 + 1);
          uVar21 = uVar21 + 0x10;
        }
      } while ((int)uVar15 < DAT_1464aef10);
    }
    _DAT_1464aef18 = DAT_1464aef10 * 2;
    if (_DAT_1464aef18 < 3) {
      _DAT_1464aef18 = 2;
    }
    if ((_DAT_1464aef18 < iVar7) && (DAT_1464aef14 != DAT_1464aef10)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464aef08);
    }
  }
LAB_141791335:
  puStack_2c0 = &local_3c8;
  local_3c8 = 0;
  local_2c8 = FUN_1406ddef0;
  local_238 = 0x406ddef0;
  uStack_234 = 1;
  uStack_230 = puStack_2c0;
  lVar20 = FUN_1415d8310(&local_238,&DAT_14622e6dc);
  if (*(int *)(lVar20 + 0x30) == 0) {
    cVar4 = (*(code *)PTR_CanBeUsedOnAnyThread_1464a8df0)();
    if (cVar4 == '\0') {
      (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
      FUN_1416f7d70(0xffffffff);
    }
  }
  *(int *)(lVar20 + 0x30) = *(int *)(lVar20 + 0x30) + 1;
  bVar3 = false;
  uVar8 = FText::FText(local_170);
  FSlowTask::EnterProgressFrame(local_f8,0x41f00000,uVar8);
  QueryPerformanceCounter(&local_340);
  uVar17 = local_3a0;
  puVar12 = &DAT_143f3eda8;
  if (local_3b8 != 0) {
    puVar12 = local_3c0;
  }
  local_3e0 = local_338;
  local_3e8 = 0;
  dVar2 = (double)local_340.QuadPart * DAT_1468b02f8;
  lVar20 = FUN_141739590(local_330,puVar12,local_3a0,0);
  local_280 = lVar20;
  if (lVar20 == 0) {
    FUN_14178a260();
  }
  else {
    uVar9 = *(ulonglong *)(lVar20 + 0xa0);
    local_278 = uVar9;
    if ((*(uint *)(uVar9 + 8) >> 0x13 & 1) == 0) {
      if ((uVar17 >> 0x11 & 1) != 0) {
        *(uint *)(uVar9 + 0x50) = *(uint *)(uVar9 + 0x50) | 0x20;
      }
      puVar12 = &DAT_143f3eda8;
      if (local_3b8 != 0) {
        puVar12 = local_3c0;
      }
      puVar10 = (undefined8 *)FName::FName(local_270,puVar12,1);
      *(undefined8 *)(uVar9 + 0x58) = *puVar10;
      local_328 = *(undefined8 *)(*(longlong *)(lVar20 + 0xa0) + 0x18);
      FName::ToString(&local_328,&local_300);
      puVar12 = &DAT_143f3eda8;
      if (local_2f8 != 0) {
        puVar12 = local_300;
      }
      cVar4 = FSHA1::GetFileSHAHash(puVar12,&local_88,0);
      if (local_300 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (cVar4 != '\0') {
        FLinker::StartScriptSHAGeneration(lVar20);
      }
      uVar8 = FText::FText(local_158);
      FSlowTask::EnterProgressFrame(local_f8,0x41f00000,uVar8);
      if ((local_3a0 & 0x100010) == 0) {
        if (local_320 == 0) {
          local_2e8 = *(undefined8 *)(lVar20 + 0x278);
        }
        else {
          local_2e8 = *(undefined8 *)(local_320 + 0x278);
        }
        local_2f0 = lVar20 + 0x200;
        FUN_141705270(&local_2f0);
        FUN_14173dd80(lVar20,DAT_1468c21ab);
        FSerializedPropertyScope::PopProperty(&local_2f0);
      }
      else {
        bVar3 = true;
      }
      uVar8 = FText::FText(local_140);
      FSlowTask::EnterProgressFrame(local_f8,0x41f00000,uVar8);
      FUN_1417364d0(lVar20,0);
      FUN_14178a260();
      uVar17 = *(uint *)(uVar9 + 0x50) | 0x40000;
      if ((*(byte *)(lVar20 + 0x229) & 8) == 0) {
        uVar17 = *(uint *)(uVar9 + 0x50) & 0xfffbffff;
      }
      *(uint *)(uVar9 + 0x50) = uVar17;
      if (cVar4 != '\0') {
        FLinker::GetScriptSHAKey(lVar20,&local_70);
        if (((local_88 != local_70) || (local_80 != local_68)) || (local_78 != local_60)) {
          if (*(int *)(lVar20 + 0x1e8) != 0) {
            lVar22 = (long)*(undefined8 *)(lVar20 + 0x1e0);
          }
          AK::MemoryMgr::StartProfileThreadUsage(lVar22);
        }
      }
      cVar4 = FUN_141790400();
      if ((cVar4 == '\0') && ((local_3a0 & 0x10) == 0)) {
        QueryPerformanceCounter(&local_318);
        *(float *)(uVar9 + 0x2c) = (float)((double)local_318.QuadPart * DAT_1468b02f8 - dVar2);
      }
      cVar4 = (*(code *)PTR_CanBeUsedOnAnyThread_1464a8df0)();
      if (cVar4 == '\0') {
        puStack_2b0 = &local_3c7;
        local_2b8 = FUN_1406ddef0;
        local_228 = 0x406ddef0;
        uStack_224 = 1;
        local_3c7 = 0;
        uStack_220 = puStack_2b0;
        lVar19 = FUN_1415d8310(&local_228,&DAT_14622e6dc);
        if (*(int *)(lVar19 + 0x30) != 0) {
          puStack_2a0 = &local_3c6;
          local_2a8 = FUN_1406ddef0;
          local_218 = 0x406ddef0;
          uStack_214 = 1;
          local_3c6 = 0;
          uStack_210 = puStack_2a0;
          lVar19 = FUN_1415d8310(&local_218,&DAT_14622e6dc);
          plVar16 = *(longlong **)(lVar19 + 0x48);
          uVar21 = (ulonglong)*(int *)(lVar19 + 0x50);
          for (plVar13 = plVar16; plVar13 != plVar16 + uVar21; plVar13 = plVar13 + 1) {
            uStack_200 = (undefined1 *)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
            if (*plVar13 == lVar20) goto LAB_141791774;
          }
          goto LAB_141791780;
        }
        if (*(longlong *)(lVar20 + 0x318) != 0) {
          ResetLoaders(uVar9);
        }
        if (*(longlong *)(uVar9 + 0x60) != 0) {
          puVar10 = *(undefined8 **)(lVar20 + 0x318);
          if (puVar10 != (undefined8 *)0x0) {
            (**(code **)*puVar10)(puVar10,1);
          }
          *(undefined8 *)(lVar20 + 0x318) = 0;
        }
      }
      else {
        puStack_290 = local_3c5;
        local_298 = FUN_1406ddef0;
        local_208 = 0x406ddef0;
        uStack_204 = 1;
        local_3c5[0] = 0;
        uStack_200 = puStack_290;
        lVar19 = FUN_1415d8310(&local_208,&DAT_14622e6dc);
        plVar16 = *(longlong **)(lVar19 + 0x48);
        uVar21 = (ulonglong)*(int *)(lVar19 + 0x50);
        plVar13 = plVar16;
        while( true ) {
          if (plVar13 == plVar16 + uVar21) break;
          uStack_220 = (undefined1 *)CONCAT44(uStack_220._4_4_,(undefined4)uStack_220);
          uStack_210 = (undefined1 *)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
          if (*plVar13 == lVar20) goto LAB_141791774;
          plVar13 = plVar13 + 1;
        }
LAB_141791780:
        iVar7 = (int)uVar21 + 1;
        *(int *)(lVar19 + 0x50) = iVar7;
        if (*(int *)(lVar19 + 0x54) < iVar7) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (lVar19 + 0x48,uVar21 & 0xffffffff);
        }
        *(longlong *)(*(longlong *)(lVar19 + 0x48) + uVar21 * 8) = lVar20;
      }
LAB_1417917a0:
      if (!bVar3) {
        *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) | 0x80000;
      }
    }
    else {
      FUN_14178a260();
      uVar17 = *(uint *)(uVar9 + 0x50) | 0x40000;
      if ((*(byte *)(lVar20 + 0x229) & 8) == 0) {
        uVar17 = *(uint *)(uVar9 + 0x50) & 0xfffbffff;
      }
      *(uint *)(uVar9 + 0x50) = uVar17;
    }
  }
  FUN_14166a2b0(local_f8);
  local_ac = 0;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_d8 + 1;
    lVar20 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_f0 + 1;
    lVar20 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
LAB_141791848:
  if (local_3c0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar9;
}



// FUNCTION 141791880 FUN_141791880 body=848 status=ok
// SIG undefined FUN_141791880(void)

undefined8 FUN_141791880(int *param_1,longlong *param_2,longlong *param_3,byte param_4)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  undefined1 local_res18 [16];
  int local_118 [4];
  longlong local_108;
  undefined1 *puStack_100;
  longlong *local_f8;
  int *piStack_f0;
  undefined1 local_e8 [8];
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined1 local_d0 [8];
  undefined **local_c8 [5];
  byte local_9f;
  byte local_9e;
  longlong *local_38;
  
  if (((((*(byte *)(param_3 + 5) & 1) != 0) && (0 < param_1[1])) &&
      (*(longlong *)(param_1 + 2) != -1)) && (DAT_1468c2177 == '\0')) {
    if (((*(byte *)(param_3 + 5) & 0x40) == 0) ||
       (lVar4 = (**(code **)(*param_3 + 0x88))(param_3), lVar4 == 0)) {
      bVar9 = 0;
    }
    else {
      bVar9 = 1;
    }
    iVar10 = param_1[1];
    lVar4 = *(longlong *)(param_1 + 2);
    if (((int)param_3[8] < 400) || (*(int *)((longlong)param_3 + 0x44) < 2)) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
    if ((bVar9 & bVar2) == 0) {
      if (((param_4 & bVar9) == 0) || (cVar3 = FUN_141797c40(param_3), cVar3 == '\0')) {
        (**(code **)(*param_3 + 0xa8))(param_3,*(undefined8 *)(param_1 + 2));
        uVar8 = 0;
        if (bVar9 != 0) {
          uVar6 = (**(code **)(*param_3 + 0x88))(param_3);
          if ((uVar6 == 0) || (*(int *)(uVar6 + 0x98) != 1)) {
            uVar6 = uVar8;
          }
          uVar7 = param_1[1];
          local_108 = 0;
          puStack_100 = (undefined1 *)(ulonglong)uVar7;
          if (0 < (int)uVar7) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_108);
            uVar7 = param_1[1];
          }
          (**(code **)(*param_3 + 0x50))(param_3,local_108,(longlong)(int)uVar7);
          (**(code **)(*param_3 + 0x90))(param_3);
          FLinker::UpdateScriptSHAKey(uVar6,&local_108);
          (**(code **)(*param_3 + 0xa8))(param_3,*(undefined8 *)(param_1 + 2));
          if (local_108 != 0) {
            FMemory::Free();
          }
        }
        iVar10 = *param_1;
        *(undefined4 *)(param_2 + 10) = 0;
        if (*(int *)((longlong)param_2 + 0x54) != iVar10) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_2 + 9,iVar10);
          uVar8 = (ulonglong)*(uint *)(param_2 + 10);
        }
        iVar10 = *param_1 + (int)uVar8;
        *(int *)(param_2 + 10) = iVar10;
        if (*(int *)((longlong)param_2 + 0x54) < iVar10) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2 + 9);
        }
        local_118[0] = 0;
        if (0 < *param_1) {
          do {
            (**(code **)(*param_2 + 0x2b8))(param_2,local_118,param_3);
          } while (local_118[0] < *param_1);
        }
        (**(code **)(*param_3 + 0x90))(param_3);
        if (DAT_1469e91a4 < *(int *)((longlong)param_2 + 0xc)) {
          *(undefined4 *)(param_2 + 0x10) = 0;
          if (*(int *)((longlong)param_2 + 0x84) != 0) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(param_2 + 0xf,0);
          }
          FArchive::FArchive(local_c8);
          local_9e = local_9e | 8;
          local_c8[0] = &PTR__scalar_deleting_destructor__144d30ba0;
          local_38 = param_2 + 0xf;
          FArchive::SetIsPersistent(local_c8,0);
          local_9f = local_9f & 0xdf;
          local_118[0] = 0;
          if (0 < *param_1) {
            do {
              (**(code **)(*param_2 + 0x2b8))(param_2,local_118,local_c8);
            } while (local_118[0] < *param_1);
          }
          FArchive::~FArchive(local_c8);
        }
        return 1;
      }
      local_108 = (**(code **)(*param_3 + 0x88))(param_3);
      if ((local_108 == 0) || (*(int *)(local_108 + 0x98) != 1)) {
        local_108 = 0;
      }
      puStack_100 = local_res18;
      local_res18[0] = 0;
      local_f8 = (longlong *)&LAB_141784980;
      piStack_f0 = (int *)puStack_100;
      lVar5 = FUN_1415d8310(&local_f8,&DAT_1464b5c08);
      local_e0 = *param_1;
      iStack_dc = param_1[1];
      iStack_d8 = param_1[2];
      iStack_d4 = param_1[3];
      FWeakObjectPtr::operator=(local_d0,param_2);
      local_f8 = &local_108;
      piStack_f0 = &local_e0;
      FUN_1417802f0(lVar5 + 0x18,local_e8,&local_f8,0);
    }
    else {
      iVar1 = *param_1;
      *param_1 = 0;
      FStructScriptLoader::ClearScriptCode(param_1,param_2);
      *param_1 = iVar1;
    }
    (**(code **)(*param_3 + 0xa8))(param_3,iVar10 + lVar4);
    return 0;
  }
  return 0;
}



// FUNCTION 141791bd0 LowLevelRename body=65 status=ok
// SIG undefined LowLevelRename(void)

void UObjectBase::LowLevelRename(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_1417a8df0();
  *(undefined8 *)(param_1 + 0x18) = param_2;
  if (param_3 != 0) {
    *(longlong *)(param_1 + 0x20) = param_3;
  }
  FUN_1417a6460(param_1);
  return;
}



// FUNCTION 141791c20 FUN_141791c20 body=1035 status=ok
// SIG undefined FUN_141791c20(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong * FUN_141791c20(ulonglong *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  void *pvVar3;
  char cVar4;
  DWORD DVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  uint uVar12;
  short *psVar13;
  undefined2 *puVar14;
  int iVar15;
  ulonglong local_res8 [2];
  undefined2 *local_d8;
  ulonglong local_d0;
  int local_c8;
  uint uStack_c4;
  undefined2 *local_c0;
  int local_b8;
  undefined1 *local_a8;
  ulonglong *puStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined1 local_78 [8];
  longlong local_70 [3];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  longlong local_48 [2];
  
  pvVar3 = ThreadLocalStoragePointer;
  local_res8[0] = 0;
  uVar10 = param_4;
  if (param_4 == 0) {
    param_4 = *(ulonglong *)(param_3 + 0x18);
    local_98 = param_4;
    uVar10 = local_90;
  }
  local_90 = uVar10;
  *param_1 = 0;
  uVar10 = (ulonglong)_tls_index;
  do {
    iVar15 = (int)param_4;
    if (iVar15 == 0xcf) {
      uVar12 = *(uint *)(param_3 + 0xb0);
      uVar12 = (uVar12 + 1 ^ uVar12) & 0x7fffffff ^ uVar12;
      *(uint *)(param_3 + 0xb0) = uVar12;
      if (param_2 != 0) {
        uVar9 = CONCAT44(uVar12,0xef) & 0x7fffffffffffffff;
        goto LAB_141791e3a;
      }
      local_res8[1] = 0xef;
      puVar6 = (undefined8 *)FName::ToString(local_res8 + 1,local_70);
      if (*(int *)(puVar6 + 1) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*puVar6;
      }
      FString::PrintfImpl(&local_c0,L"/Temp/%s",puVar14);
      puVar14 = &DAT_143f3eda8;
      if (local_b8 != 0) {
        puVar14 = local_c0;
      }
      puVar7 = (ulonglong *)FName::FName(local_88,puVar14,uVar12 & 0x7fffffff);
      *param_1 = *puVar7;
      if (local_c0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_70[0] != 0) {
        FMemory::Free();
      }
LAB_141791d2f:
      lVar8 = StaticFindObjectFastInternal(0,param_2,*param_1,0,0,0,0);
    }
    else {
      if (param_2 - 1U < 0xfffffffffffffffe) {
        if (DAT_1468b6146 == '\0') {
          local_a8 = &LAB_141784990;
          puStack_a0 = local_res8;
          local_58 = 0x41784990;
          uStack_54 = 1;
          local_res8[0] = local_res8[0] & 0xffffffffffffff00;
          uStack_50 = puStack_a0;
          uStack_c4 = FUN_14179d140(param_2,param_3,&local_58);
        }
        else {
          if (*(int *)(*(longlong *)((longlong)pvVar3 + uVar10 * 8) + 0x38) < DAT_1469e9198) {
            _Init_thread_header(&DAT_1469e9198);
            if (DAT_1469e9198 == -1) {
              DAT_1469e9194 = 0x7ffffc17;
              _Init_thread_footer(&DAT_1469e9198);
              LOCK();
              UNLOCK();
              uStack_c4 = DAT_1469e9194 - 1;
              DAT_1469e9194 = DAT_1469e9194 + -1;
              goto LAB_141791e2f;
            }
          }
          LOCK();
          UNLOCK();
          uStack_c4 = DAT_1469e9194 - 1;
          DAT_1469e9194 = DAT_1469e9194 + -1;
        }
      }
      else {
        uStack_c4 = *(uint *)(param_3 + 0xb0);
        uStack_c4 = (uStack_c4 + 1 ^ uStack_c4) & 0x7fffffff ^ uStack_c4;
        *(uint *)(param_3 + 0xb0) = uStack_c4;
        uStack_c4 = uStack_c4 & 0x7fffffff;
      }
LAB_141791e2f:
      uVar9 = CONCAT44(uStack_c4,iVar15);
      local_c8 = iVar15;
LAB_141791e3a:
      *param_1 = uVar9;
      if (param_2 != -1) goto LAB_141791d2f;
      puVar6 = (undefined8 *)FName::ToString(param_1,local_48);
      if (*(int *)(puVar6 + 1) == 0) {
        psVar13 = &DAT_143f3eda8;
      }
      else {
        psVar13 = (short *)*puVar6;
      }
      if (DAT_1469e7e10 != '\0') {
        LowLevelFatalErrorHandler
                  ("Unknown",0x148,
                   L"Illegal call to StaticFindObject() while serializing object data!");
        FDebug::AssertFailed
                  (&DAT_144d292f2,"Unknown",0x148,
                   L"Illegal call to StaticFindObject() while serializing object data!");
      }
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar5 = GetCurrentThreadId();
        if (DVar5 == DAT_1468c21c0) goto LAB_141791ed1;
      }
      else {
LAB_141791ed1:
        cVar4 = IsGarbageCollecting();
        if (cVar4 != '\0') {
          LowLevelFatalErrorHandler
                    ("Unknown",0x14d,L"Illegal call to StaticFindObject() while collecting garbage!"
                    );
          FDebug::AssertFailed
                    (&DAT_144d292f3,"Unknown",0x14d,
                     L"Illegal call to StaticFindObject() while collecting garbage!");
        }
      }
      local_80 = 0;
      local_d8 = (undefined2 *)0x0;
      local_d0 = 0;
      if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
        lVar8 = -1;
        do {
          lVar2 = lVar8 + 1;
          lVar8 = lVar8 + 1;
        } while (psVar13[lVar2] != 0);
        uVar12 = (int)lVar8 + 1;
        local_d0 = (ulonglong)uVar12;
        if (0 < (int)uVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
        }
        FGenericPlatformString::Memcpy(local_d8,psVar13,(longlong)(int)uVar12 * 2);
      }
      FUN_14179acf0(&local_d8,0);
      puVar14 = local_d8;
      puVar11 = &DAT_143f3eda8;
      if ((int)local_d0 != 0) {
        puVar11 = local_d8;
      }
      puVar6 = (undefined8 *)FName::FName(local_78,puVar11,1);
      uVar1 = *puVar6;
      if (puVar14 != (undefined2 *)0x0) {
        FMemory::Free(puVar14);
      }
      lVar8 = FUN_141799680(0,0,uVar1,0,1,0,0);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
    if ((lVar8 == 0) && (*param_1 != param_4)) {
      return param_1;
    }
  } while( true );
}



// FUNCTION 141792030 MarkPackageDirty body=394 status=ok
// SIG undefined MarkPackageDirty(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 UObjectBaseUtility::MarkPackageDirty(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  
  if ((*(uint *)(param_1 + 8) >> 6 & 1) == 0) {
    lVar6 = *(longlong *)(param_1 + 0x20);
    while (lVar7 = lVar6, lVar7 != 0) {
      param_1 = lVar7;
      lVar6 = *(longlong *)(lVar7 + 0x20);
    }
    if (DAT_1468b616c == '\0') {
      return 0;
    }
    bVar8 = *(byte *)(param_1 + 0x28) & 1;
    if (bVar8 == 0) {
      FUN_141764920(param_1,1);
    }
    bVar2 = false;
    DAT_1464b4eec = DAT_1464b4eec + 1;
    lVar6 = (longlong)(DAT_1464b4ee0 + -1);
    if (-1 < DAT_1464b4ee0 + -1) {
      lVar7 = lVar6 << 4;
      bVar2 = false;
      do {
        if (((*(int *)(lVar7 + 8 + DAT_1464b4ed8) == 0) ||
            (plVar1 = *(longlong **)(lVar7 + DAT_1464b4ed8), plVar1 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1,bVar8), cVar4 == '\0')) {
          bVar2 = true;
        }
        lVar7 = lVar7 + -0x10;
        lVar6 = lVar6 + -1;
      } while (-1 < lVar6);
    }
    iVar3 = DAT_1464b4ee0;
    DAT_1464b4eec = DAT_1464b4eec + -1;
    if ((bVar2) && (DAT_1464b4eec < 1)) {
      iVar5 = 0;
      if (0 < DAT_1464b4ee0) {
        lVar6 = 0;
        do {
          if (((*(int *)(lVar6 + 8 + DAT_1464b4ed8) == 0) ||
              (*(longlong **)(lVar6 + DAT_1464b4ed8) == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(**(longlong **)(lVar6 + DAT_1464b4ed8) + 0x10))(), cVar4 != '\0')
             ) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464b4ed8,iVar5,1,1);
          }
          else {
            iVar5 = iVar5 + 1;
            lVar6 = lVar6 + 0x10;
          }
        } while (iVar5 < DAT_1464b4ee0);
      }
      _DAT_1464b4ee8 = DAT_1464b4ee0 * 2;
      if (DAT_1464b4ee0 * 2 < 3) {
        _DAT_1464b4ee8 = 2;
      }
      if ((_DAT_1464b4ee8 < iVar3) && (DAT_1464b4ee4 != DAT_1464b4ee0)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464b4ed8);
      }
    }
  }
  return 1;
}



// FUNCTION 1417921c0 MergeCluster body=338 status=ok
// SIG undefined MergeCluster(void)

void FClusterReferenceProcessor::MergeCluster
               (undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  int iVar9;
  ulonglong uVar10;
  
  if ((*(byte *)((longlong)param_2 + 0xb) & 1) == 0) {
    iVar9 = *(int *)((longlong)param_2 + 0xc);
    uVar4 = iVar9 >> 0x1f & 0xffff;
    uVar3 = iVar9 + uVar4;
    param_2 = (undefined8 *)
              (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar4) * 0x18);
  }
  else {
    iVar9 = *(int *)(param_3 + 0xc);
  }
  uVar3 = *(uint *)((longlong)param_2 + 0xc);
  uVar7 = 0;
  puVar8 = *(uint **)(DAT_1469e8f10 + 8 + (longlong)(int)~uVar3 * 0x50);
  uVar5 = (ulonglong)*(int *)(DAT_1469e8f10 + 0x10 + (longlong)(int)~uVar3 * 0x50);
  uVar10 = uVar5 & 0x3fffffffffffffff;
  if (puVar8 + uVar5 < puVar8) {
    uVar10 = uVar7;
  }
  if (uVar10 != 0) {
    do {
      uVar3 = *puVar8;
      uVar6 = uVar3 & 0xffff;
      uVar4 = uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = uVar3 + 0xffff;
        uVar6 = uVar6 - 0x10000;
      }
      lVar1 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8);
      uVar2 = *(undefined8 *)(lVar1 + (longlong)(int)uVar6 * 0x18);
      lVar1 = lVar1 + (longlong)(int)uVar6 * 0x18;
      *(undefined4 *)(lVar1 + 0xc) = 0;
      FUN_141783070(param_1,uVar3,lVar1,uVar2,param_4,1);
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar10);
    uVar3 = *(uint *)((longlong)param_2 + 0xc);
  }
  FUObjectClusterContainer::FreeCluster(&DAT_1469e8f10,~uVar3);
  *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) & 0xfeffffff;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  FUN_141783070(param_1,iVar9,param_2,*param_2,param_4,1);
  return;
}



// FUNCTION 141792320 NextValue body=1913 status=ok
// SIG undefined NextValue(void)

undefined8 FPropertyValueIterator::NextValue(longlong *param_1,char param_2,char param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *pvVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  uint local_res20;
  int local_e8;
  longlong local_e0;
  int local_a0;
  int iStack_9c;
  
  iVar4 = (int)param_1[1];
  if (iVar4 != 0) {
    uVar20 = 0;
    do {
      lVar17 = *param_1 + -0x38 + (longlong)iVar4 * 0x38;
      if (param_3 != '\0') {
        *(int *)(lVar17 + 0x30) = *(int *)(lVar17 + 0x30) + 1;
      }
      iVar4 = *(int *)(lVar17 + 0x30);
      if (iVar4 < *(int *)(lVar17 + 0x28)) {
        plVar7 = (longlong *)(lVar17 + 0x20);
        uVar10 = *(ulonglong *)(*(longlong *)(lVar17 + 0x20) + (longlong)iVar4 * 0x10);
        plVar1 = *(longlong **)(*(longlong *)(lVar17 + 0x20) + 8 + (longlong)iVar4 * 0x10);
        local_res20 = iVar4 + 1;
        if (uVar10 == 0) {
LAB_1417923f5:
          uVar13 = uVar20;
        }
        else {
          lVar6 = UArrayProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(uVar10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          uVar13 = uVar10;
          if (!bVar3) goto LAB_1417923f5;
        }
        uVar8 = (ulonglong)(int)local_res20;
        if (uVar13 != 0) {
          if (param_2 == '\x01') {
            iVar4 = *(int *)(*(longlong *)(uVar13 + 0x70) + 0x34);
            iVar14 = (int)plVar1[1];
            if (0 < iVar14) {
              local_e0 = uVar8 << 4;
              uVar10 = uVar20;
              uVar18 = uVar20;
              do {
                uVar15 = uVar20;
                if (iVar14 != 0) {
                  uVar15 = (longlong)(int)uVar18 + *plVar1;
                }
                iVar14 = *(int *)(lVar17 + 0x28);
                *(int *)(lVar17 + 0x28) = iVar14 + 1;
                uVar16 = (uint)uVar8;
                if (*(int *)(lVar17 + 0x2c) < iVar14 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar14);
                  uVar16 = local_res20;
                }
                pvVar11 = (void *)((longlong)(int)uVar16 * 0x10 + *plVar7);
                ::_guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)pvVar11 + 0x10),pvVar11,
                           (longlong)(int)(iVar14 - uVar16) << 4);
                uVar16 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar16;
                lVar6 = *plVar7;
                uVar18 = (ulonglong)(uint)((int)uVar18 + iVar4);
                *(undefined8 *)(lVar6 + local_e0) = *(undefined8 *)(uVar13 + 0x70);
                *(ulonglong *)(lVar6 + 8 + local_e0) = uVar15;
                local_e0 = local_e0 + 0x10;
                iVar14 = (int)plVar1[1];
                local_res20 = local_res20 + 1;
                uVar8 = (ulonglong)local_res20;
              } while ((int)uVar16 < iVar14);
            }
          }
LAB_1417924d9:
          if (param_3 == '\0') {
            *(int *)(lVar17 + 0x30) = *(int *)(lVar17 + 0x30) + 1;
          }
          goto LAB_1417924e8;
        }
        if (uVar10 == 0) goto LAB_1417924d9;
        lVar6 = UMapProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(uVar10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if (param_2 == '\x01') {
            iVar4 = *(int *)(uVar10 + 0xa0);
            uVar2 = *(undefined8 *)(uVar10 + 0x80);
            local_e8 = (int)plVar1[1] - *(int *)((longlong)plVar1 + 0x34);
            if (local_e8 != 0) {
              local_e0 = uVar8 << 4;
              uVar16 = 1;
              uVar13 = uVar20;
              uVar8 = uVar20;
              do {
                iVar14 = (int)uVar8;
                if ((iVar14 < 0) || ((int)plVar1[5] <= iVar14)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  plVar12 = (longlong *)plVar1[4];
                  if ((longlong *)plVar1[4] == (longlong *)0x0) {
                    plVar12 = plVar1 + 2;
                  }
                  iVar5 = iVar14;
                  if (iVar14 < 0) {
                    iVar5 = iVar14 + 0x1f;
                  }
                  if ((*(uint *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) & uVar16) == 0)
                  goto LAB_141792695;
                  bVar3 = true;
                }
                else {
LAB_141792695:
                  bVar3 = false;
                }
                iVar5 = (int)uVar13;
                if (bVar3) {
                  uVar13 = uVar20;
                  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
                    local_a0 = (int)uVar2;
                    uVar13 = (longlong)local_a0 + (longlong)iVar5 + *plVar1;
                  }
                  iVar19 = *(int *)(lVar17 + 0x28);
                  *(int *)(lVar17 + 0x28) = iVar19 + 1;
                  if (*(int *)(lVar17 + 0x2c) < iVar19 + 1) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar19);
                  }
                  pvVar11 = (void *)((longlong)(int)local_res20 * 0x10 + *plVar7);
                  ::_guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)pvVar11 + 0x10),pvVar11,
                             (longlong)(int)(iVar19 - local_res20) << 4);
                  lVar6 = *plVar7;
                  *(undefined8 *)(lVar6 + local_e0) = *(undefined8 *)(uVar10 + 0x70);
                  *(ulonglong *)(lVar6 + 8 + local_e0) = uVar13;
                  uVar13 = uVar20;
                  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
                    iStack_9c = (int)((ulonglong)uVar2 >> 0x20);
                    uVar13 = (longlong)iStack_9c + (longlong)iVar5 + *plVar1;
                  }
                  iVar19 = *(int *)(lVar17 + 0x28);
                  *(int *)(lVar17 + 0x28) = iVar19 + 1;
                  if (*(int *)(lVar17 + 0x2c) < iVar19 + 1) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar19);
                  }
                  pvVar11 = (void *)((longlong)(int)(local_res20 + 1) * 0x10 + *plVar7);
                  ::_guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)pvVar11 + 0x10),pvVar11,
                             (longlong)(int)(iVar19 - (local_res20 + 1)) << 4);
                  lVar6 = *plVar7;
                  local_res20 = local_res20 + 2;
                  *(undefined8 *)(lVar6 + local_e0 + 0x10) = *(undefined8 *)(uVar10 + 0x78);
                  *(ulonglong *)(lVar6 + 8 + local_e0 + 0x10) = uVar13;
                  local_e0 = local_e0 + 0x20;
                  local_e8 = local_e8 + -1;
                }
                uVar13 = (ulonglong)(uint)(iVar5 + iVar4);
                uVar8 = (ulonglong)(iVar14 + 1);
                uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
              } while (local_e8 != 0);
            }
          }
          goto LAB_1417924d9;
        }
        lVar6 = USetProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(uVar10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if (param_2 == '\x01') {
            iVar4 = *(int *)(uVar10 + 0x90);
            local_e8 = (int)plVar1[1] - *(int *)((longlong)plVar1 + 0x34);
            if (local_e8 != 0) {
              local_e0 = uVar8 << 4;
              uVar16 = 1;
              uVar13 = uVar20;
              uVar8 = uVar20;
              do {
                iVar14 = (int)uVar13;
                if ((iVar14 < 0) || ((int)plVar1[5] <= iVar14)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  plVar12 = (longlong *)plVar1[4];
                  if ((longlong *)plVar1[4] == (longlong *)0x0) {
                    plVar12 = plVar1 + 2;
                  }
                  iVar5 = iVar14;
                  if (iVar14 < 0) {
                    iVar5 = iVar14 + 0x1f;
                  }
                  if ((*(uint *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) & uVar16) == 0)
                  goto LAB_141792888;
                  bVar3 = true;
                }
                else {
LAB_141792888:
                  bVar3 = false;
                }
                if (bVar3) {
                  uVar13 = uVar20;
                  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
                    uVar13 = (longlong)(int)uVar8 + *plVar1;
                  }
                  iVar5 = *(int *)(lVar17 + 0x28);
                  *(int *)(lVar17 + 0x28) = iVar5 + 1;
                  if (*(int *)(lVar17 + 0x2c) < iVar5 + 1) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar5);
                  }
                  pvVar11 = (void *)((longlong)(int)local_res20 * 0x10 + *plVar7);
                  ::_guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)pvVar11 + 0x10),pvVar11,
                             (longlong)(int)(iVar5 - local_res20) << 4);
                  lVar6 = *plVar7;
                  local_res20 = local_res20 + 1;
                  *(undefined8 *)(lVar6 + local_e0) = *(undefined8 *)(uVar10 + 0x70);
                  *(ulonglong *)(lVar6 + 8 + local_e0) = uVar13;
                  local_e0 = local_e0 + 0x10;
                  local_e8 = local_e8 + -1;
                }
                uVar8 = (ulonglong)(uint)((int)uVar8 + iVar4);
                uVar13 = (ulonglong)(iVar14 + 1);
                uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
              } while (local_e8 != 0);
            }
          }
          goto LAB_1417924d9;
        }
        lVar6 = UStructProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(uVar10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((!bVar3) || (param_2 != '\x01')) goto LAB_1417924d9;
        iVar4 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(param_1,iVar4);
        }
        lVar17 = *(longlong *)(uVar10 + 0x70);
        iVar14 = *(int *)((longlong)param_1 + 0x1c);
        plVar7 = (longlong *)((longlong)iVar4 * 0x38 + *param_1);
        *plVar7 = lVar17;
        uVar10 = uVar20;
        if (lVar17 != 0) {
          uVar10 = *(ulonglong *)(lVar17 + 0x38);
        }
        plVar7[1] = uVar10;
        *(undefined4 *)(plVar7 + 2) = 0xffffffff;
        *(undefined1 *)((longlong)plVar7 + 0x14) = 1;
        *(bool *)((longlong)plVar7 + 0x15) = iVar14 == 1;
        *(undefined1 *)((longlong)plVar7 + 0x16) = 0;
        FUN_140472e10(plVar7);
        plVar7[3] = (longlong)plVar1;
        param_3 = '\0';
        plVar7[4] = 0;
        plVar7[5] = 0;
        *(undefined4 *)(plVar7 + 6) = 0;
      }
      else {
LAB_1417924e8:
        if (*(int *)(lVar17 + 0x30) != *(int *)(lVar17 + 0x28)) {
          return 1;
        }
        lVar6 = *(longlong *)(lVar17 + 8);
        if (lVar6 != 0) {
          *(undefined8 *)(lVar17 + 8) = *(undefined8 *)(lVar6 + 0x28);
          FUN_140472e10(lVar17);
          *(undefined4 *)(lVar17 + 0x28) = 0;
          if (0x7fffffff < *(uint *)(lVar17 + 0x2c)) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar17 + 0x20,0);
          }
          *(undefined4 *)(lVar17 + 0x30) = 0;
          if (*(int *)(lVar6 + 0x30) != 0) {
            do {
              iVar4 = *(int *)(lVar17 + 0x28);
              iVar19 = (int)uVar20;
              iVar14 = *(int *)(lVar6 + 0x34);
              iVar5 = *(int *)(lVar6 + 0x44);
              lVar9 = *(longlong *)(lVar17 + 0x18);
              *(int *)(lVar17 + 0x28) = iVar4 + 1;
              if (*(int *)(lVar17 + 0x2c) < iVar4 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar17 + 0x20,iVar4);
              }
              uVar16 = iVar19 + 1;
              uVar20 = (ulonglong)uVar16;
              plVar7 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar17 + 0x20));
              *plVar7 = lVar6;
              plVar7[1] = (longlong)(iVar19 * iVar14) + (longlong)iVar5 + lVar9;
            } while (uVar16 != *(uint *)(lVar6 + 0x30));
          }
          return 1;
        }
        lVar9 = (longlong)(int)param_1[1] * 0x38;
        lVar17 = *param_1;
        lVar6 = *(longlong *)(lVar9 + -0x18 + lVar17);
        *(undefined8 *)(lVar9 + -0x18 + lVar17) = 0;
        *(undefined8 *)(lVar9 + -0x10 + lVar17) = 0;
        iVar4 = (int)param_1[1];
        lVar17 = (longlong)(iVar4 + -1) * 0x38;
        iVar14 = iVar4;
        if (*(longlong *)(lVar17 + 0x20 + *param_1) != 0) {
          FMemory::Free();
          iVar14 = (int)param_1[1];
        }
        iVar5 = (iVar14 - (iVar4 + -1)) + -1;
        if (iVar5 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(lVar17 + *param_1),(void *)((longlong)iVar4 * 0x38 + *param_1),
                     (longlong)iVar5 * 0x38);
          iVar14 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar14 + -1;
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeShrink(param_1);
        if (lVar6 != 0) {
          FMemory::Free(lVar6);
        }
        if ((int)param_1[1] < 1) {
          return 0;
        }
        param_3 = '\x01';
      }
      iVar4 = (int)param_1[1];
    } while (iVar4 != 0);
  }
  return 0;
}



// FUNCTION 141792aa0 FUN_141792aa0 body=363 status=ok
// SIG undefined FUN_141792aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141792aa0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  BOOL BVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x80) = param_2;
  local_40 = 0;
  local_30 = 0;
  local_78 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  if ((undefined8 *)(param_1 + 0x88) != &local_78) {
    TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::operator=((undefined8 *)(param_1 + 0x88),&local_78);
    lVar3 = local_38;
    if (local_38 == 0) {
      _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0xc0),&local_40,4);
    }
    if (*(longlong *)(param_1 + 200) != 0) {
      FMemory::Free();
    }
    *(longlong *)(param_1 + 200) = lVar3;
    *(undefined4 *)(param_1 + 0xd0) = (undefined4)local_30;
  }
  local_38 = 0;
  local_30 = local_30 & 0xffffffff00000000;
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  FUN_141795ca0(param_1 + 8,*(undefined8 *)(param_1 + 0x80));
  if ((0 < iVar1 - iVar2) && (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c))) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 141792c10 FUN_141792c10 body=375 status=ok
// SIG undefined FUN_141792c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141792c10(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
             longlong param_5,undefined1 *param_6)

{
  wchar_t _C;
  char cVar1;
  wint_t wVar2;
  wint_t wVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined1 auStack_8a8 [32];
  undefined4 local_888;
  undefined8 local_880;
  undefined1 local_878;
  wint_t local_858 [1024];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_8a8;
  local_888 = CONCAT31(local_888._1_3_,1);
  cVar1 = FParse::Value(param_1,param_2,local_858,0x400);
  if (cVar1 == '\0') {
    return 0;
  }
  lVar4 = 0;
  do {
    wVar2 = *(wint_t *)((longlong)local_858 + lVar4);
    if ((wVar2 == 0) && (*(short *)((longlong)&DAT_144d28990 + lVar4) == 0)) goto LAB_141792cb6;
    if (wVar2 != *(wint_t *)((longlong)&DAT_144d28990 + lVar4)) {
      wVar2 = towlower(wVar2);
      wVar3 = towlower(*(wint_t *)((longlong)&DAT_144d28990 + lVar4));
      if (wVar2 != wVar3) break;
    }
    lVar4 = lVar4 + 2;
  } while( true );
  if (wVar2 == wVar3) {
LAB_141792cb6:
    lVar4 = 0;
    goto LAB_141792cb8;
  }
  lVar4 = FUN_141799410(param_3,param_5,local_858,0);
  if (DAT_1469e7e12 != '\0') {
    if (lVar4 == 0) {
      if (param_5 == -1) {
        pwVar5 = L"CLASS=";
        do {
          _C = *(wchar_t *)(param_2 + -0x144d289a0 + (longlong)pwVar5);
          if ((_C == L'\0') && (*pwVar5 == L'\0')) goto LAB_141792d2d;
          if (_C != *pwVar5) {
            wVar2 = towlower(_C);
            wVar3 = towlower(*pwVar5);
            if (wVar2 != wVar3) goto LAB_141792d23;
          }
          pwVar5 = pwVar5 + 1;
        } while( true );
      }
      goto LAB_141792d58;
    }
    goto LAB_141792cb8;
  }
  goto LAB_141792d4f;
LAB_141792d23:
  if (wVar2 != wVar3) goto LAB_141792d58;
LAB_141792d2d:
  local_878 = 1;
  local_880 = 0;
  local_888 = 0;
  lVar4 = FUN_141799c90(param_3,0,local_858,0);
LAB_141792d4f:
  if (lVar4 != 0) {
LAB_141792cb8:
    *param_4 = lVar4;
    return 1;
  }
LAB_141792d58:
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 1;
  }
  return 0;
}



// FUNCTION 141792d90 FUN_141792d90 body=1078 status=ok
// SIG undefined FUN_141792d90(void)

void FUN_141792d90(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong in_stack_ffffffffffffffb8;
  
  lVar6 = *param_1;
  if (lVar6 == 0) {
    return;
  }
  uVar15 = *(uint *)(lVar6 + 8);
  plVar2 = *(longlong **)(lVar6 + 0x10);
  uVar3 = uVar15 >> 4;
  plVar9 = (longlong *)plVar2[6];
  if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
    if (((uVar15 >> 0x16 & 1) != 0) && ((*(uint *)(param_1[1] + 8) >> 4 & 1) != 0)) {
      lVar6 = FUN_14178cc10(plVar2,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x18),
                            uVar15,in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
      param_1[1] = lVar6;
    }
    if ((*(int *)(*(longlong *)(param_1[1] + 0x10) + 0xb4) < 0) &&
       (iVar14 = (int)param_1[0x27] + -1, -1 < iVar14)) {
      plVar11 = param_1 + 0x16;
      lVar16 = (longlong)iVar14 << 4;
      lVar6 = lVar16;
      do {
        plVar8 = (longlong *)param_1[0x26];
        if ((longlong *)param_1[0x26] == (longlong *)0x0) {
          plVar8 = plVar11;
        }
        FUN_14178ca30(*(undefined8 *)(*(longlong *)((longlong)plVar8 + lVar6) + 0x20));
        lVar7 = UClass::GetDefaultSubobjectByName();
        if (lVar7 == 0) {
          iVar1 = (int)param_1[0x27];
          iVar10 = (iVar1 - iVar14) + -1;
          if (0 < iVar10) {
            iVar10 = 1;
          }
          if (iVar10 != 0) {
            plVar8 = (longlong *)param_1[0x26];
            if ((longlong *)param_1[0x26] == (longlong *)0x0) {
              plVar8 = plVar11;
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)plVar8 + lVar16),plVar8 + (longlong)(iVar1 - iVar10) * 2,
                       (longlong)iVar10 << 4);
            iVar1 = (int)param_1[0x27];
          }
          *(int *)(param_1 + 0x27) = iVar1 + -1;
          TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TInlineAllocator<8,FDefaultAllocator>_>
          ::ResizeShrink(plVar11);
        }
        else {
          *(longlong *)((longlong)plVar8 + lVar6 + 8) = lVar7;
        }
        lVar16 = lVar16 + -0x10;
        lVar6 = lVar6 + -0x10;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
    }
  }
  if (*(char *)((longlong)param_1 + 0x11) != '\0') {
    if (((uVar3 & 1) == 0) || (DAT_1468c2177 != '\0')) {
      plVar9 = plVar2;
    }
    lVar6 = param_1[1];
    plVar11 = plVar2;
    if (plVar9 != (longlong *)0x0) {
      plVar11 = plVar9;
    }
    if (lVar6 == 0) {
      lVar6 = plVar11[0x1f];
    }
    FUN_14178fdc0(*param_1,plVar11,lVar6,(char)param_1[2]);
  }
  if ((param_1[3] == 0) || (*(char *)(param_1[3] + 0x11) != '\0')) {
    bVar4 = true;
    bVar5 = true;
    if ((*(byte *)(param_1 + 0x29) & 1) == 0) goto LAB_141792f79;
    cVar12 = '\x01';
  }
  else {
    bVar5 = false;
LAB_141792f79:
    bVar4 = bVar5;
    cVar12 = '\0';
  }
  iVar14 = 0;
  if (0 < (int)param_1[0x27]) {
    lVar6 = 0;
    do {
      plVar9 = (longlong *)param_1[0x26];
      if ((longlong *)param_1[0x26] == (longlong *)0x0) {
        plVar9 = param_1 + 0x16;
      }
      lVar16 = *(longlong *)((longlong)plVar9 + lVar6);
      lVar7 = *(longlong *)((longlong)plVar9 + lVar6 + 8);
      FUN_14178fdc0(lVar16,*(undefined8 *)(lVar7 + 0x10),lVar7,0);
      if ((bVar4) && ((*(uint *)(lVar16 + 8) >> 10 & 1) == 0)) {
        cVar12 = '\x01';
      }
      iVar14 = iVar14 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar14 < (int)param_1[0x27]);
  }
  if (DAT_1469e9058 != (longlong *)0x0) {
    (**(code **)(*DAT_1469e9058 + 8))();
    if (DAT_1469e9058 != (longlong *)0x0) {
      (**(code **)*DAT_1469e9058)(DAT_1469e9058,1);
    }
    DAT_1469e9058 = (longlong *)0x0;
  }
  cVar13 = '\0';
  if (((*(uint *)(*param_1 + 8) >> 10 & 1) == 0) || ((*(byte *)(param_1 + 0x29) & 1) != 0)) {
    if ((((uVar3 & 1) == 0) || ((*(uint *)(plVar2 + 1) >> 0x1a & 1) != 0)) &&
       ((*(uint *)((longlong)plVar2 + 0xb4) >> 10 & 1) == 0)) {
      if ((((uVar3 & 1) != 0) && ((*(uint *)(plVar2 + 1) >> 0x1a & 1) != 0)) &&
         ((*(uint *)((longlong)plVar2 + 0xb4) >> 2 & 1) != 0)) {
        uVar15 = 0;
        plVar9 = plVar2;
        goto LAB_1417930b7;
      }
    }
    else {
      uVar15 = uVar3 & 1;
      plVar9 = (longlong *)0x0;
LAB_1417930b7:
      FUN_14175be70(*param_1,plVar9,0,uVar15,0);
    }
    if (bVar4) {
      if (((plVar2[0x1f] == 0) || (plVar2[0x1f] != param_1[1])) ||
         ((*(uint *)((longlong)plVar2 + 0xb4) >> 0x12 & 1) != 0)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((((uVar3 & 1) == 0) || (*(char *)((longlong)param_1 + 0x11) != '\0')) &&
         ((*(uint *)((longlong)plVar2 + 0xb4) >> 0x17 & 1) != 0)) {
        cVar13 = '\0';
        if (bVar4) {
          cVar13 = '\x01';
        }
      }
    }
  }
  plVar9 = (longlong *)*param_1;
  if ((*(uint *)(plVar9 + 1) >> 0x1d & 1) == 0) {
    if ((cVar13 == '\0') && (cVar12 == '\0')) goto LAB_141793155;
  }
  else {
    cVar13 = '\x01';
  }
  FObjectInitializer::InstanceSubobjects(param_1,plVar2,cVar13,cVar12);
  plVar9 = (longlong *)*param_1;
LAB_141793155:
  (**(code **)(*plVar9 + 0x48))();
  (**(code **)(*plVar2 + 0x300))(plVar2,*param_1);
  lVar6 = *param_1;
  if ((((*(uint *)(lVar6 + 8) >> 10 & 1) == 0) || ((*(byte *)(param_1 + 0x29) & 1) != 0)) &&
     ((param_1[3] == 0 || (*(char *)(param_1[3] + 0x11) != '\0')))) {
    FUN_1417508a0(lVar6,0);
    lVar6 = *param_1;
  }
  *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) & 0xfffffdff;
  *param_1 = 0;
  return;
}



// FUNCTION 1417931d0 FUN_1417931d0 body=40 status=ok
// SIG undefined FUN_1417931d0(void)

void FUN_1417931d0(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x318))
            (*(longlong **)(param_1 + 0x10),param_1,1,0,0);
  return;
}



// FUNCTION 141793200 FUN_141793200 body=2460 status=ok
// SIG undefined FUN_141793200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141793200(undefined8 param_1,longlong param_2,void *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  uint *puVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong *plVar17;
  undefined1 auStack_338 [32];
  void *local_318;
  longlong local_310;
  longlong local_308 [3];
  undefined8 local_2f0;
  undefined4 *local_2e8;
  undefined4 *puStack_2e0;
  undefined4 *local_2d8;
  ulonglong *puStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  longlong local_2a0;
  longlong local_298 [2];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278 [16];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  undefined1 local_248 [8];
  longlong *local_240;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined4 local_218 [2];
  undefined1 local_210 [8];
  longlong *local_208;
  undefined4 local_1f8 [2];
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined4 local_1d8 [2];
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [24];
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  undefined4 local_d8 [4];
  undefined1 local_c8 [8];
  longlong *local_c0;
  char local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_338;
  *(undefined8 *)(param_2 + 0x30) = 0;
  local_310 = 0;
  bVar3 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  local_318 = param_3;
  local_2b0 = param_1;
  (*(code *)(&DAT_1469e7e20)[bVar3])(param_1,param_2,&local_310);
  lVar11 = *(longlong *)(param_2 + 0x20);
  if (local_310 == 0) {
LAB_1417932fd:
    cVar9 = *(char *)(param_2 + 0x90);
  }
  else {
    iVar4 = *(int *)(local_310 + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar16 = iVar4 >> 0x1f & 0xffff;
      uVar10 = iVar4 + uVar16;
      lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
               (longlong)(int)((uVar10 & 0xffff) - uVar16) * 0x18;
    }
    else {
      lVar12 = 0;
    }
    if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) != 0) goto LAB_1417932fd;
    *(byte **)(param_2 + 0x20) = (byte *)(lVar11 + 0xc);
    bVar3 = *(byte *)(lVar11 + 0xc);
    *(longlong *)(param_2 + 0x20) = lVar11 + 0xd;
    (*(code *)(&DAT_1469e7e20)[bVar3])(local_310,param_2,param_3);
    cVar9 = *(char *)(param_2 + 0x90);
    if (cVar9 == '\0') {
      return;
    }
  }
  if (cVar9 != '\0') {
    *(undefined1 *)(param_2 + 0x90) = 0;
    *(longlong *)(param_2 + 0x20) = lVar11;
  }
  local_288 = (undefined4 *)CONCAT44(local_288._4_4_,(undefined4)local_288);
  uStack_280 = (ulonglong *)CONCAT44(uStack_280._4_4_,(undefined4)uStack_280);
  local_268 = (undefined4 *)CONCAT44(local_268._4_4_,(undefined4)local_268);
  uStack_260 = (undefined4 *)CONCAT44(uStack_260._4_4_,(undefined4)uStack_260);
  if (param_4 == '\0') {
    if (local_310 == 0) {
LAB_1417937c4:
      if (*(longlong *)(param_2 + 0x30) == 0) {
        uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_158,L"Accessed None",L"ScriptCore",L"AccessNoneNoContext");
        local_1d8[0] = 3;
        FText::FText(local_1d0,uVar13);
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar14 = local_150 + 1;
          lVar11 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_150)(local_150);
            LOCK();
            piVar1 = (int *)((longlong)local_150 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_150 + 8))(local_150,1);
            }
          }
        }
        FUN_14179aee0(param_1,param_2,local_1d8);
        local_288 = (undefined4 *)CONCAT44(local_288._4_4_,(undefined4)local_288);
        uStack_280 = (ulonglong *)CONCAT44(uStack_280._4_4_,(undefined4)uStack_280);
        local_268 = (undefined4 *)CONCAT44(local_268._4_4_,(undefined4)local_268);
        uStack_260 = (undefined4 *)CONCAT44(uStack_260._4_4_,(undefined4)uStack_260);
        if (local_1c8 != (longlong *)0x0) {
          LOCK();
          plVar14 = local_1c8 + 1;
          lVar11 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          local_288 = (undefined4 *)CONCAT44(local_288._4_4_,(undefined4)local_288);
          uStack_280 = (ulonglong *)CONCAT44(uStack_280._4_4_,(undefined4)uStack_280);
          local_268 = (undefined4 *)CONCAT44(local_268._4_4_,(undefined4)local_268);
          uStack_260 = (undefined4 *)CONCAT44(uStack_260._4_4_,(undefined4)uStack_260);
          if ((int)lVar11 == 1) {
            (**(code **)*local_1c8)(local_1c8);
            LOCK();
            piVar1 = (int *)((longlong)local_1c8 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_1c8 + 8))(local_1c8);
            }
          }
        }
        goto LAB_141793767;
      }
      local_2d8 = *(undefined4 **)(*(longlong *)(param_2 + 0x30) + 0x18);
      FName::ToString(&local_2d8,local_298);
      lVar11 = FText::FromString(local_f0,local_298);
      uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_170,L"Accessed None trying to read property {0}",L"ScriptCore",
                          L"AccessNoneContext");
      puVar15 = (undefined8 *)FTextFormat::FTextFormat(local_130,uVar13);
      local_d8[0] = 4;
      FText::FText(local_c8,lVar11);
      local_2a8 = *puVar15;
      local_2e8 = local_d8;
      puStack_2e0 = local_a8;
      local_2a0 = puVar15[1];
      local_b0 = '\x01';
      if (local_2a0 != 0) {
        LOCK();
        *(int *)(local_2a0 + 8) = *(int *)(local_2a0 + 8) + 1;
        UNLOCK();
      }
      local_268 = local_2e8;
      uStack_260 = puStack_2e0;
      uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_258,&local_268);
      uVar13 = FText::Format(local_188,&local_2a8,uVar13);
      FText::FText(local_230,uVar13);
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_180 + 1;
        lVar12 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar1 = (int *)((longlong)local_180 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_180 + 8))(local_180,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_258);
      if ((local_b0 != '\0') && (local_b0 = '\0', local_c0 != (longlong *)0x0)) {
        LOCK();
        plVar14 = local_c0 + 1;
        lVar12 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
      plVar14 = (longlong *)puVar15[1];
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar14 + 1;
        lVar12 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
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
      plVar14 = *(longlong **)(lVar11 + 8);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar14 + 1;
        lVar11 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
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
      local_1f8[0] = 3;
      FText::FText(local_1f0,local_230);
      if (local_228 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_228 + 1;
        lVar11 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_228)(local_228);
          LOCK();
          piVar1 = (int *)((longlong)local_228 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_228 + 8))(local_228,1);
          }
        }
      }
      if (local_168 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_168 + 1;
        lVar11 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_168)(local_168);
          LOCK();
          piVar1 = (int *)((longlong)local_168 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_168 + 8))(local_168,1);
          }
        }
      }
      if (local_298[0] != 0) {
        FMemory::Free();
      }
      FUN_14179aee0(param_1,param_2,local_1f8);
    }
    else {
      iVar4 = *(int *)(local_310 + 0xc);
      if (iVar4 < (int)DAT_1469e91c4) {
        uVar16 = iVar4 >> 0x1f & 0xffff;
        uVar10 = iVar4 + uVar16;
        lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
                 (longlong)(int)((uVar10 & 0xffff) - uVar16) * 0x18;
      }
      else {
        lVar11 = 0;
      }
      if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) == 0) goto LAB_1417937c4;
      lVar11 = *(longlong *)(param_2 + 0x30);
      if (lVar11 == 0) {
        local_2f0 = 5;
        local_308[2] = lVar11;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_308 + 2,0);
        FGenericPlatformString::Memcpy(local_308[2],&DAT_143f3edc8,10);
      }
      else {
        local_2c8 = *(undefined8 *)(lVar11 + 0x18);
        FName::ToString(&local_2c8,local_308 + 2);
      }
      if (local_310 == 0) {
        local_308[0] = local_310;
        local_308[1] = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_308,0);
        FGenericPlatformString::Memcpy(local_308[0],&DAT_143f3edc8,10);
      }
      else {
        local_2c0 = *(undefined8 *)(local_310 + 0x18);
        FName::ToString(&local_2c0,local_308);
      }
      lVar11 = FText::FromString(local_120,local_308 + 2);
      local_2b8 = lVar11;
      lVar12 = FText::FromString(local_108,local_308);
      uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_1a0,
                          L"Attempted to access {0} via property {1}, but {0} is pending kill",
                          L"ScriptCore",L"AccessPendingKill");
      plVar14 = (longlong *)FTextFormat::FTextFormat(local_140,uVar13);
      local_a8[0] = 4;
      FText::FText(local_98,lVar12);
      local_80 = 1;
      local_78 = 4;
      FText::FText(local_68,lVar11);
      local_2d8 = local_a8;
      local_50 = 1;
      puStack_2d0 = local_48;
      local_2e8 = (undefined4 *)*plVar14;
      puStack_2e0 = (undefined4 *)plVar14[1];
      if (puStack_2e0 != (undefined4 *)0x0) {
        LOCK();
        puStack_2e0[2] = puStack_2e0[2] + 1;
        UNLOCK();
      }
      local_288 = local_2d8;
      uStack_280 = puStack_2d0;
      uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_278,&local_288);
      uVar13 = FText::Format(local_1b8,&local_2e8,uVar13);
      FText::FText(local_248,uVar13);
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_1b0 + 1;
        lVar11 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar1 = (int *)((longlong)local_1b0 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1b0 + 8))(local_1b0,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_278);
      lVar11 = 2;
      plVar17 = (longlong *)&stack0xffffffffffffffd0;
      do {
        lVar11 = lVar11 + -1;
        if ((char)plVar17[-4] != '\0') {
          *(undefined1 *)(plVar17 + -4) = 0;
          plVar5 = (longlong *)plVar17[-6];
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar5 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
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
        plVar17 = plVar17 + -6;
      } while (lVar11 != 0);
      plVar14 = (longlong *)plVar14[1];
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar14 + 1;
        lVar11 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
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
      plVar14 = *(longlong **)(lVar12 + 8);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar14 + 1;
        lVar11 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
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
      plVar14 = *(longlong **)(local_2b8 + 8);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar14 + 1;
        lVar11 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
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
      local_218[0] = 3;
      FText::FText(local_210,local_248);
      if (local_240 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_240 + 1;
        lVar11 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_240)(local_240);
          LOCK();
          piVar1 = (int *)((longlong)local_240 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_240 + 8))(local_240,1);
          }
        }
      }
      if (local_198 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_198 + 1;
        lVar11 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_198)(local_198);
          LOCK();
          piVar1 = (int *)((longlong)local_198 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_198 + 8))(local_198,1);
          }
        }
      }
      if (local_308[0] != 0) {
        FMemory::Free();
      }
      if (local_308[2] != 0) {
        FMemory::Free();
      }
      FUN_14179aee0(local_2b0,param_2,local_218);
      local_1e8 = local_208;
    }
    param_3 = local_318;
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_1e8 + 1;
      lVar11 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar1 = (int *)((longlong)local_1e8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        param_3 = local_318;
        if (iVar4 == 1) {
          (**(code **)(*local_1e8 + 8))(local_1e8);
          param_3 = local_318;
        }
      }
    }
  }
LAB_141793767:
  puVar6 = *(uint **)(param_2 + 0x20);
  uVar10 = *puVar6;
  *(uint **)(param_2 + 0x20) = puVar6 + 1;
  plVar14 = *(longlong **)(puVar6 + 1);
  *(uint **)(param_2 + 0x20) = puVar6 + 3;
  if (plVar14 != (longlong *)0x0) {
    lVar11 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) goto LAB_141793b28;
  }
  plVar14 = (longlong *)0x0;
LAB_141793b28:
  *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + (ulonglong)uVar10;
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



// FUNCTION 141793ba0 FUN_141793ba0 body=905 status=ok
// SIG undefined FUN_141793ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_141793ba0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ushort uVar1;
  code *pcVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 *puVar14;
  bool bVar15;
  undefined1 local_128 [32];
  undefined8 local_108;
  undefined4 local_f8 [2];
  undefined1 auStack_f0 [8];
  undefined **local_e8;
  undefined2 local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong lStack_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58;
  ulonglong local_48;
  
  puVar8 = local_128;
  local_48 = DAT_1468387a8 ^ (ulonglong)local_f8;
  iVar11 = *(int *)((longlong)param_1 + 0xc);
  puVar14 = (undefined1 *)0x0;
  puVar4 = puVar14;
  if (iVar11 < (int)DAT_1469e91c4) {
    uVar6 = iVar11 >> 0x1f & 0xffff;
    uVar3 = iVar11 + uVar6;
    puVar4 = (undefined1 *)
             (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
             (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18);
  }
  puVar10 = local_128;
  if ((*(uint *)(puVar4 + 8) >> 0x1d & 1) == 0) {
    if ((*(uint *)(param_2 + 0x88) & 0x400) == 0) {
      uVar3 = *(uint *)(param_2 + 0x50);
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x210))(param_1,param_2,param_3,0);
      if ((uVar3 & 1) != 0) {
        local_108 = 0;
        (**(code **)(*param_1 + 0x218))(param_1,param_2,param_3,0);
      }
      uVar3 = uVar3 & 2;
    }
    puVar10 = local_128;
    if (uVar3 != 0) {
      if (*(longlong *)(param_2 + 0xa0) != 0) {
        local_f8[0] = *(undefined4 *)(param_2 + 0xa8);
        param_2 = *(longlong *)(param_2 + 0xa0);
        param_3 = local_f8;
      }
      puVar4 = (undefined1 *)
               (**(code **)(*(longlong *)param_1[2] + 0x310))
                         ((longlong *)param_1[2],param_1,param_2);
      bVar15 = puVar4 == (undefined1 *)0x0;
      puVar10 = local_128;
      if (puVar4 == (undefined1 *)0x0) {
        iVar11 = *(int *)(param_2 + 0x40);
        puVar4 = puVar14;
        if (iVar11 != 0) {
          uVar5 = (longlong)(iVar11 + 0xf) + 0xf;
          if (uVar5 <= (ulonglong)(longlong)(iVar11 + 0xf)) {
            uVar5 = 0xffffffffffffff0;
          }
          puVar8 = local_128 + -(uVar5 & 0xfffffffffffffff0);
          puVar4 = auStack_f0 + -(uVar5 & 0xfffffffffffffff0);
        }
        uVar1 = *(ushort *)(param_2 + 0x8e);
        *(undefined8 *)(puVar8 + -8) = 0x141793d0e;
        _guard_xfg_dispatch_icall_nop(puVar4 + uVar1,0,(longlong)(int)(iVar11 - (uint)uVar1));
        puVar10 = puVar8;
      }
      uVar1 = *(ushort *)(param_2 + 0x8e);
      *(undefined8 *)(puVar10 + -8) = 0x141793d21;
      _guard_xfg_dispatch_icall_nop(puVar4,param_3,(ulonglong)uVar1);
      lVar13 = *(longlong *)(param_2 + 0x38);
      local_e8 = &PTR__scalar_deleting_destructor__144d30b60;
      local_c8 = *(undefined8 *)(param_2 + 0x48);
      local_e0 = 0x100;
      local_b8 = 0;
      uStack_b0 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      lStack_70 = 0;
      local_68 = lVar13;
      local_60 = 0;
      local_58 = 0;
      if ((*(uint *)(param_2 + 0x88) & 0x400000) != 0) {
        plVar12 = &lStack_70;
        for (; (lVar13 != 0 && ((char)*(ulonglong *)(lVar13 + 0x38) < '\0'));
            lVar13 = *(longlong *)(lVar13 + 0x28)) {
          puVar9 = puVar10;
          if ((*(ulonglong *)(lVar13 + 0x38) >> 8 & 1) != 0) {
            puVar9 = puVar10 + -0x30;
            plVar7 = (longlong *)((ulonglong)(puVar10 + 0xf) & 0xfffffffffffffff0);
            plVar7[1] = (longlong)*(int *)(lVar13 + 0x44) + (longlong)param_3;
            *plVar7 = lVar13;
            if (*plVar12 == 0) {
              *plVar12 = (longlong)plVar7;
            }
            else {
              *(longlong **)(*plVar12 + 0x10) = plVar7;
              plVar12 = (longlong *)(*plVar12 + 0x10);
              puVar9 = puVar10 + -0x30;
            }
          }
          puVar10 = puVar9;
        }
      }
      local_d8 = param_2;
      local_d0 = param_1;
      local_c0 = puVar4;
      if (bVar15) {
        for (plVar12 = *(longlong **)(param_2 + 0x98); plVar12 != (longlong *)0x0;
            plVar12 = (longlong *)plVar12[5]) {
          if ((*(uint *)(plVar12 + 7) >> 9 & 1) == 0) {
            pcVar2 = *(code **)(*plVar12 + 0x330);
            *(undefined8 *)(puVar10 + -8) = 0x141793e37;
            (*pcVar2)(plVar12);
          }
          else {
            iVar11 = *(int *)((longlong)plVar12 + 0x34);
            lVar13 = plVar12[6];
            puVar4 = local_c0 + *(int *)((longlong)plVar12 + 0x44);
            *(undefined8 *)(puVar10 + -8) = 0x141793e22;
            _guard_xfg_dispatch_icall_nop(puVar4,0,(longlong)(iVar11 * (int)lVar13));
          }
        }
      }
      if (*(ushort *)(param_2 + 0x90) != 0xffff) {
        puVar14 = (undefined1 *)((ulonglong)*(ushort *)(param_2 + 0x90) + (longlong)param_3);
      }
      *(undefined8 *)(puVar10 + -8) = 0x141793e70;
      FUN_14171e390(param_2,param_1,&local_e8,puVar14);
      if (bVar15) {
        for (plVar12 = *(longlong **)(param_2 + 0x68); plVar12 != (longlong *)0x0;
            plVar12 = (longlong *)plVar12[0xc]) {
          iVar11 = *(int *)((longlong)plVar12 + 0x34) * (int)plVar12[6];
          lVar13 = (longlong)*(int *)((longlong)plVar12 + 0x44);
          if ((int)(uint)*(ushort *)(param_2 + 0x8e) < *(int *)((longlong)plVar12 + 0x44) + iVar11)
          {
            if ((~(byte)((ulonglong)plVar12[7] >> 0x24) & 1) != 0) {
              puVar4 = local_c0 + lVar13;
              pcVar2 = *(code **)(*plVar12 + 0x328);
              *(undefined8 *)(puVar10 + -8) = 0x141793ebe;
              (*pcVar2)(plVar12,puVar4);
            }
          }
          else if ((~(byte)((ulonglong)plVar12[7] >> 8) & 1) != 0) {
            puVar4 = local_c0 + lVar13;
            *(undefined8 *)(puVar10 + -8) = 0x141793ede;
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)param_3 + lVar13),puVar4,(longlong)iVar11);
          }
        }
      }
      local_e8 = &PTR__scalar_deleting_destructor__144d30b60;
      if (local_88 != 0) {
        *(undefined8 *)(puVar10 + -8) = 0x141793f00;
        FMemory::Free();
      }
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x141793f0f;
  return;
}



// FUNCTION 141793f30 FUN_141793f30 body=418 status=ok
// SIG undefined FUN_141793f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141793f30(longlong *param_1,longlong param_2,void *param_3)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint uVar5;
  byte *pbVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (-1 < *(int *)(param_1[2] + 0xb4)) {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = (**(code **)(*param_1 + 0x210))(param_1,uVar3,*(undefined8 *)(param_2 + 0x28),0);
    iVar9 = 0;
    if ((uVar5 & 1) != 0) {
      local_88 = 0;
      (**(code **)(*param_1 + 0x218))
                (param_1,uVar3,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x78));
    }
    if ((uVar5 & 2) == 0) {
      plVar7 = (longlong *)UFunction::GetReturnProperty(uVar3);
      if ((plVar7 != (longlong *)0x0) && (0 < (int)plVar7[6])) {
        do {
          uVar8 = plVar7[7];
          if ((~(byte)(uVar8 >> 0x24) & 1) != 0) {
            (**(code **)(*plVar7 + 0x328))(plVar7);
            uVar8 = plVar7[7];
          }
          if ((uVar8 & 0x1000000200) == 0x1000000200) {
            _guard_xfg_dispatch_icall_nop(param_3,0,(longlong)*(int *)((longlong)plVar7 + 0x34));
          }
          else {
            (**(code **)(*plVar7 + 800))(plVar7);
          }
          iVar9 = iVar9 + 1;
          param_3 = (void *)((longlong)param_3 + (longlong)*(int *)((longlong)plVar7 + 0x34));
        } while (iVar9 < (int)plVar7[6]);
      }
    }
    else {
      pcVar4 = *(char **)(param_2 + 0x20);
      cVar1 = *pcVar4;
      while (cVar1 != '\x04') {
        bVar2 = **(byte **)(param_2 + 0x20);
        *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
        (*(code *)(&DAT_1469e7e20)[bVar2])(*(undefined8 *)(param_2 + 0x18),param_2,local_78);
        pcVar4 = *(char **)(param_2 + 0x20);
        cVar1 = *pcVar4;
      }
      pbVar6 = (byte *)(pcVar4 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6;
      if (*pbVar6 == 0xb) {
        *(char **)(param_2 + 0x20) = pcVar4 + 2;
      }
      else {
        bVar2 = *pbVar6;
        *(char **)(param_2 + 0x20) = pcVar4 + 2;
        (*(code *)(&DAT_1469e7e20)[bVar2])(*(undefined8 *)(param_2 + 0x18),param_2,param_3);
      }
    }
  }
  return;
}



// FUNCTION 1417940e0 FUN_1417940e0 body=646 status=ok
// SIG undefined FUN_1417940e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417940e0(void)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  int *piVar14;
  undefined8 *puVar15;
  
  puVar6 = (ulonglong *)FUN_14178d7b0();
  uVar13 = 0;
  puVar10 = (undefined8 *)*puVar6;
  uVar11 = (longlong)(int)puVar6[1] & 0x1fffffffffffffff;
  if (puVar10 + (int)puVar6[1] < puVar10) {
    uVar11 = uVar13;
  }
  if (uVar11 != 0) {
    do {
      (*(code *)**(undefined8 **)*puVar10)();
      uVar13 = uVar13 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar13 != uVar11);
  }
  *(undefined4 *)(puVar6 + 1) = 0;
  if (*(int *)((longlong)puVar6 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(puVar6,0);
  }
  lVar7 = FUN_14178d890();
  lVar8 = FUN_14178d900();
  lVar9 = FUN_14178d820();
  bVar2 = false;
  plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  while ((((DAT_1469e9048 != 0 || (*(int *)(lVar7 + 8) != 0)) || (*(int *)(lVar8 + 8) != 0)) ||
         (*(int *)(lVar9 + 8) != 0))) {
    bVar2 = true;
    UObjectProcessRegistrants();
    piVar14 = (int *)(*plVar1 + 0x38);
    if ((*piVar14 < DAT_1469e9140) && (_Init_thread_header(), DAT_1469e9140 == -1)) {
      DAT_1469e9130 = (undefined8 *)0x0;
      _DAT_1469e9138 = 0;
      atexit((_func_5014 *)&LAB_143e7d420);
      _Init_thread_footer();
    }
    puVar5 = DAT_1469e9130;
    puVar12 = DAT_1469e9130 + (longlong)DAT_1469e9138 * 2;
    DAT_1469e9130 = (undefined8 *)0x0;
    _DAT_1469e9138 = 0;
    for (puVar10 = puVar5; puVar10 != puVar12; puVar10 = puVar10 + 2) {
      FUN_1417894a0(0,puVar10[1]);
    }
    if ((*piVar14 < DAT_1469e9128) && (_Init_thread_header(), DAT_1469e9128 == -1)) {
      DAT_1469e9118 = (undefined8 *)0x0;
      _DAT_1469e9120 = 0;
      atexit((_func_5014 *)&LAB_143e7d460);
      _Init_thread_footer();
    }
    puVar4 = DAT_1469e9118;
    puVar15 = DAT_1469e9118 + (longlong)DAT_1469e9120 * 2;
    DAT_1469e9118 = (undefined8 *)0x0;
    _DAT_1469e9120 = 0;
    for (puVar10 = puVar4; puVar3 = puVar5, puVar10 != puVar15; puVar10 = puVar10 + 2) {
      FUN_1417894a0(0,puVar10[1]);
    }
    for (; puVar10 = puVar4, puVar3 != puVar12; puVar3 = puVar3 + 2) {
      (*(code *)*puVar3)();
    }
    for (; puVar10 != puVar15; puVar10 = puVar10 + 2) {
      (*(code *)*puVar10)();
    }
    if (puVar4 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    FUN_14179bfa0();
  }
  if ((bVar2) && (DAT_1464aaa49 == '\0')) {
    FUN_141717090();
  }
  return;
}



// FUNCTION 141794370 FUN_141794370 body=4773 status=ok
// SIG undefined FUN_141794370(void)

void FUN_141794370(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  byte bVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  int *piVar13;
  uint uVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  uint *puVar18;
  int iVar19;
  int *piVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  uint *puVar28;
  longlong *in_stack_fffffffffffffe98;
  undefined4 uVar30;
  undefined8 uVar29;
  undefined4 uVar31;
  longlong *local_138;
  longlong local_120;
  uint local_118;
  longlong local_110;
  longlong *local_100;
  longlong *local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  longlong local_d8;
  undefined2 *local_d0;
  undefined8 local_c8;
  undefined2 *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined2 *local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  
  iVar19 = 0;
  local_48 = param_2;
  local_100 = (longlong *)TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop(param_1[1]);
  if (local_100 == (longlong *)0x0) {
    local_100 = (longlong *)operator_new(0x20);
    if (local_100 == (longlong *)0x0) {
      local_100 = (longlong *)0x0;
    }
    else {
      *local_100 = 0;
      local_100[1] = 0;
      local_100[2] = 0;
      local_100[3] = 0;
    }
  }
  local_f0 = (longlong *)0x0;
  local_e8 = 0x80;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
            (&local_f0,0);
  iVar25 = (int)param_2[1];
  if (*(int *)((longlong)param_2 + 0xc) < iVar25 + 1) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
    iVar25 = (int)param_2[1];
  }
  local_70 = local_f0;
  local_d8 = 0;
  local_138 = local_f0;
  while( true ) {
    local_80 = *param_1;
    local_98 = &PTR__scalar_deleting_destructor__144d31510;
    local_90 = (undefined8 *)0x0;
    puStack_88 = (undefined8 *)0x0;
    local_78 = local_100;
    if (iVar19 < iVar25) break;
LAB_14179556a:
    if ((int)local_100[1] != 0) {
      if (param_2 != local_100) {
        uVar30 = *(undefined4 *)((longlong)local_100 + 4);
        lVar23 = local_100[1];
        uVar31 = *(undefined4 *)((longlong)local_100 + 0xc);
        lVar1 = *param_2;
        lVar22 = param_2[1];
        *(int *)param_2 = (int)*local_100;
        *(undefined4 *)((longlong)param_2 + 4) = uVar30;
        *(int *)(param_2 + 1) = (int)lVar23;
        *(undefined4 *)((longlong)param_2 + 0xc) = uVar31;
        *local_100 = lVar1;
        local_100[1] = lVar22;
      }
      *(undefined4 *)(local_100 + 1) = 0;
      iVar19 = 0;
      local_d8 = 0;
    }
    local_98 = &PTR__scalar_deleting_destructor__144d309f8;
    if (local_90 != (undefined8 *)0x0) {
      (**(code **)*local_90)(local_90,1);
    }
    if (puStack_88 != (undefined8 *)0x0) {
      (**(code **)*puStack_88)(puStack_88,1);
    }
    iVar25 = (int)param_2[1];
    if (iVar25 <= iVar19) {
      uVar29 = param_1[1];
      *(undefined4 *)(local_100 + 1) = 0;
      if (0x7fffffff < *(uint *)((longlong)local_100 + 0xc)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(local_100,0);
      }
      FUN_1415b1b00(uVar29,local_100);
      if (local_138 != (longlong *)0x0) {
        FMemory::Free(local_138);
      }
      return;
    }
  }
LAB_141794460:
  iVar19 = iVar19 + 1;
  lVar1 = *(longlong *)(*param_2 + local_d8 * 8);
  local_d8 = local_d8 + 1;
  iVar25 = *(int *)(*(longlong *)(lVar1 + 0x10) + 0x40);
  iVar3 = FUN_14169da80();
  uVar27 = (longlong)(iVar3 + -1 + iVar25) / (longlong)iVar3;
  uVar24 = uVar27 & 0xffffffff;
  uVar4 = (uint)uVar27;
  while (uVar4 != 0) {
    uVar4 = (int)uVar24 - 1;
    uVar24 = (ulonglong)uVar4;
  }
  lVar22 = *(longlong *)(lVar1 + 0x10);
  if ((*(uint *)(lVar22 + 0xb4) >> 0x16 & 1) == 0) {
    FUN_14172cc50(lVar22);
    lVar22 = *(longlong *)(lVar1 + 0x10);
  }
  uVar24 = 0;
  *(undefined4 *)(local_138 + 1) = 0;
  *local_138 = lVar1;
  *(undefined8 *)((longlong)local_138 + 0xc) = 0xffffffffffffffff;
  plVar16 = local_138;
  lVar23 = lVar1;
  uVar27 = uVar24;
  local_120 = lVar1;
LAB_141794566:
  uVar30 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  iVar3 = 0;
  iVar25 = (int)uVar27;
  if (0 < (int)uVar24) {
    do {
      *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + -1;
      if (0 < *(int *)((longlong)plVar16 + 0xc)) {
        lVar23 = (longlong)(int)plVar16[1] + *plVar16;
        iVar25 = (int)plVar16[2];
        *plVar16 = lVar23;
        local_120 = lVar23;
        break;
      }
      lVar23 = plVar16[-3];
      plVar16 = plVar16 + -3;
      iVar3 = iVar3 + 1;
      local_138 = plVar16;
      local_120 = lVar23;
    } while (iVar3 < (int)uVar24);
  }
  lVar6 = *(longlong *)(lVar22 + 0x1b0);
  uVar26 = iVar25 + 1;
  uVar27 = (ulonglong)uVar26;
  local_118 = *(uint *)(lVar6 + (longlong)iVar25 * 4);
  uVar4 = local_118 >> 8 & 0xf;
  local_e0 = uVar27;
  switch(uVar4) {
  case 1:
    puVar28 = (uint *)*param_1;
    plVar21 = (longlong *)((ulonglong)(local_118 >> 0xc) + lVar23);
    uVar24 = (ulonglong)(local_118 & 0xff);
    plVar15 = (longlong *)*plVar21;
    plVar16 = local_138;
    if (plVar15 == (longlong *)0x0) goto LAB_141794566;
    uVar4 = *(uint *)((longlong)plVar15 + 0xc);
    if ((int)uVar4 < (int)DAT_1469e91c4) {
      uVar14 = uVar4 & 0xffff;
      uVar26 = uVar4;
      if ((int)uVar4 < 0) {
        uVar26 = uVar4 + 0xffff;
        uVar14 = uVar14 - 0x10000;
      }
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar26 >> 0x10) * 8) +
              (longlong)(int)uVar14 * 0x18;
    }
    else {
      lVar6 = 0;
    }
    lVar5 = 0;
    uVar26 = *(uint *)(lVar6 + 0xc);
    if (uVar26 == *puVar28) goto LAB_141794566;
    bVar9 = *(byte *)(lVar6 + 0xb) & 1;
    if ((bVar9 == 0) && (uVar26 == 0)) {
      if (DAT_1469e91a4 < (int)uVar4) {
        cVar2 = (**(code **)(*plVar15 + 0x20))(plVar15);
        if ((cVar2 != '\0') && (lVar23 = *plVar21, (*(uint *)(lVar23 + 8) & 0x1400) == 0)) {
          uVar4 = *(uint *)(lVar23 + 0xc);
          if ((int)uVar4 < (int)DAT_1469e91c4) {
            uVar14 = uVar4 & 0xffff;
            uVar26 = uVar4;
            if ((int)uVar4 < 0) {
              uVar26 = uVar4 + 0xffff;
              uVar14 = uVar14 - 0x10000;
            }
            lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar26 >> 0x10) * 8) +
                    (longlong)(int)uVar14 * 0x18;
          }
          else {
            lVar5 = 0;
          }
          if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) {
LAB_141794704:
            in_stack_fffffffffffffe98 = local_100;
            FUN_141783070(puVar28,uVar4,lVar6,lVar23,local_100,1);
            plVar16 = local_138;
            lVar23 = local_120;
            goto LAB_141794566;
          }
        }
        lVar6 = *(longlong *)(puVar28 + 2);
        iVar25 = *(int *)(*plVar21 + 0xc);
        piVar20 = *(int **)(lVar6 + 0x28);
        iVar3 = *(int *)(lVar6 + 0x30);
        for (piVar10 = piVar20; piVar10 != piVar20 + iVar3; piVar10 = piVar10 + 1) {
          if (*piVar10 == iVar25) {
            lVar23 = local_120;
            if ((int)((longlong)piVar10 - (longlong)piVar20 >> 2) != -1) goto LAB_141794566;
            break;
          }
        }
        *(int *)(lVar6 + 0x30) = iVar3 + 1;
        if (*(int *)(lVar6 + 0x34) < iVar3 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar6 + 0x28);
        }
        *(int *)((longlong)iVar3 * 4 + *(longlong *)(lVar6 + 0x28)) = iVar25;
        lVar23 = local_120;
      }
      goto LAB_141794566;
    }
    if (DAT_1469e8638 != 0) {
LAB_1417947c5:
      FClusterReferenceProcessor::MergeCluster(puVar28,lVar6,plVar15,local_100);
      plVar16 = local_138;
      lVar23 = local_120;
      goto LAB_141794566;
    }
    if (bVar9 == 0) {
      uVar4 = uVar26;
    }
    if ((int)uVar4 < (int)DAT_1469e91c4) {
      uVar14 = uVar4 & 0xffff;
      uVar26 = uVar4;
      if ((int)uVar4 < 0) {
        uVar26 = uVar4 + 0xffff;
        uVar14 = uVar14 - 0x10000;
      }
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar26 >> 0x10) * 8) +
              (longlong)(int)uVar14 * 0x18;
    }
    lVar23 = *(longlong *)(puVar28 + 2);
    puVar18 = *(uint **)(lVar23 + 0x18);
    iVar25 = *(int *)(lVar23 + 0x20);
    lVar6 = (longlong)(int)~*(uint *)(lVar5 + 0xc) * 0x50 + DAT_1469e8f10;
    for (puVar11 = puVar18; puVar11 != puVar18 + iVar25; puVar11 = puVar11 + 1) {
      if (*puVar11 == uVar4) {
        if ((int)((longlong)puVar11 - (longlong)puVar18 >> 2) != -1) goto LAB_14179489e;
        break;
      }
    }
    *(int *)(lVar23 + 0x20) = iVar25 + 1;
    if (*(int *)(lVar23 + 0x24) < iVar25 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar23 + 0x18,iVar25);
    }
    *(uint *)((longlong)iVar25 * 4 + *(longlong *)(lVar23 + 0x18)) = uVar4;
LAB_14179489e:
    TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>(lVar6 + 0x38);
    uVar24 = 0;
    puVar18 = *(uint **)(lVar6 + 0x18);
    uVar27 = (longlong)*(int *)(lVar6 + 0x20) & 0x3fffffffffffffff;
    if (puVar18 + *(int *)(lVar6 + 0x20) < puVar18) {
      uVar27 = uVar24;
    }
    if (uVar27 != 0) {
      do {
        uVar4 = *puVar18;
        if (uVar4 != *puVar28) {
          lVar23 = *(longlong *)(puVar28 + 2);
          puVar11 = *(uint **)(lVar23 + 0x18);
          iVar25 = *(int *)(lVar23 + 0x20);
          for (puVar12 = puVar11; puVar12 != puVar11 + iVar25; puVar12 = puVar12 + 1) {
            if (*puVar12 == uVar4) {
              if ((int)((longlong)puVar12 - (longlong)puVar11 >> 2) != -1) goto LAB_141794943;
              break;
            }
          }
          *(int *)(lVar23 + 0x20) = iVar25 + 1;
          if (*(int *)(lVar23 + 0x24) < iVar25 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar23 + 0x18);
          }
          *(uint *)((longlong)iVar25 * 4 + *(longlong *)(lVar23 + 0x18)) = uVar4;
        }
LAB_141794943:
        puVar18 = puVar18 + 1;
        uVar24 = uVar24 + 1;
      } while (uVar24 != uVar27);
    }
    uVar24 = 0;
    piVar20 = *(int **)(lVar6 + 0x28);
    uVar27 = (longlong)*(int *)(lVar6 + 0x30) & 0x3fffffffffffffff;
    if (piVar20 + *(int *)(lVar6 + 0x30) < piVar20) {
      uVar27 = uVar24;
    }
    if (uVar27 == 0) {
LAB_141795178:
      local_118 = local_118 & 0xff;
      uVar24 = (ulonglong)local_118;
      plVar16 = local_138;
      lVar23 = local_120;
      uVar27 = local_e0;
      goto LAB_141794566;
    }
    do {
      lVar23 = *(longlong *)(puVar28 + 2);
      iVar25 = *piVar20;
      piVar10 = *(int **)(lVar23 + 0x28);
      iVar3 = *(int *)(lVar23 + 0x30);
      for (piVar13 = piVar10; piVar13 != piVar10 + iVar3; piVar13 = piVar13 + 1) {
        if (*piVar13 == iVar25) {
          if ((int)((longlong)piVar13 - (longlong)piVar10 >> 2) != -1) goto LAB_1417949ee;
          break;
        }
      }
      *(int *)(lVar23 + 0x30) = iVar3 + 1;
      if (*(int *)(lVar23 + 0x34) < iVar3 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar23 + 0x28);
      }
      *(int *)((longlong)iVar3 * 4 + *(longlong *)(lVar23 + 0x28)) = iVar25;
LAB_1417949ee:
      piVar20 = piVar20 + 1;
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar27);
    break;
  case 2:
    puVar28 = (uint *)*param_1;
    plVar21 = (longlong *)((ulonglong)(local_118 >> 0xc) + lVar23);
    uVar24 = (ulonglong)(local_118 & 0xff);
    plVar15 = (longlong *)*plVar21;
    plVar16 = local_138;
    if (plVar15 == (longlong *)0x0) goto LAB_141794566;
    uVar4 = *(uint *)((longlong)plVar15 + 0xc);
    if ((int)uVar4 < (int)DAT_1469e91c4) {
      uVar14 = uVar4 & 0xffff;
      uVar26 = uVar4;
      if ((int)uVar4 < 0) {
        uVar26 = uVar4 + 0xffff;
        uVar14 = uVar14 - 0x10000;
      }
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar26 >> 0x10) * 8) +
              (longlong)(int)uVar14 * 0x18;
    }
    else {
      lVar6 = 0;
    }
    lVar5 = 0;
    uVar26 = *(uint *)(lVar6 + 0xc);
    if (uVar26 == *puVar28) goto LAB_141794566;
    bVar9 = *(byte *)(lVar6 + 0xb) & 1;
    if ((bVar9 == 0) && (uVar26 == 0)) {
      if (DAT_1469e91a4 < (int)uVar4) {
        cVar2 = (**(code **)(*plVar15 + 0x20))(plVar15);
        if ((cVar2 != '\0') && (lVar23 = *plVar21, (*(uint *)(lVar23 + 8) & 0x1400) == 0)) {
          uVar4 = *(uint *)(lVar23 + 0xc);
          if ((int)uVar4 < (int)DAT_1469e91c4) {
            uVar14 = uVar4 & 0xffff;
            uVar26 = uVar4;
            if ((int)uVar4 < 0) {
              uVar26 = uVar4 + 0xffff;
              uVar14 = uVar14 - 0x10000;
            }
            lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar26 >> 0x10) * 8) +
                    (longlong)(int)uVar14 * 0x18;
          }
          else {
            lVar5 = 0;
          }
          if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_141794704;
        }
        TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                  (*(longlong *)(puVar28 + 2) + 0x28);
        lVar23 = local_120;
      }
      goto LAB_141794566;
    }
    if (DAT_1469e8638 != 0) goto LAB_1417947c5;
    if (bVar9 == 0) {
      uVar4 = uVar26;
    }
    if ((int)uVar4 < (int)DAT_1469e91c4) {
      uVar14 = uVar4 & 0xffff;
      uVar26 = uVar4;
      if ((int)uVar4 < 0) {
        uVar26 = uVar4 + 0xffff;
        uVar14 = uVar14 - 0x10000;
      }
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar26 >> 0x10) * 8) +
              (longlong)(int)uVar14 * 0x18;
    }
    lVar23 = *(longlong *)(puVar28 + 2);
    puVar18 = *(uint **)(lVar23 + 0x18);
    iVar25 = *(int *)(lVar23 + 0x20);
    plVar16 = (longlong *)((longlong)(int)~*(uint *)(lVar5 + 0xc) * 0x50 + DAT_1469e8f10);
    for (puVar11 = puVar18; local_b0 = plVar16, puVar11 != puVar18 + iVar25; puVar11 = puVar11 + 1)
    {
      if (*puVar11 == uVar4) {
        if ((int)((longlong)puVar11 - (longlong)puVar18 >> 2) != -1) goto LAB_14179509c;
        break;
      }
    }
    *(int *)(lVar23 + 0x20) = iVar25 + 1;
    if (*(int *)(lVar23 + 0x24) < iVar25 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar23 + 0x18,iVar25);
    }
    *(uint *)((longlong)iVar25 * 4 + *(longlong *)(lVar23 + 0x18)) = uVar4;
LAB_14179509c:
    TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>(plVar16 + 7);
    uVar24 = 0;
    puVar18 = (uint *)plVar16[3];
    uVar27 = (longlong)(int)plVar16[4] & 0x3fffffffffffffff;
    if (puVar18 + (int)plVar16[4] < puVar18) {
      uVar27 = uVar24;
    }
    if (uVar27 != 0) {
      do {
        uVar4 = *puVar18;
        if (uVar4 != *puVar28) {
          lVar23 = *(longlong *)(puVar28 + 2);
          puVar11 = *(uint **)(lVar23 + 0x18);
          iVar25 = *(int *)(lVar23 + 0x20);
          for (puVar12 = puVar11; puVar12 != puVar11 + iVar25; puVar12 = puVar12 + 1) {
            if (*puVar12 == uVar4) {
              if ((int)((longlong)puVar12 - (longlong)puVar11 >> 2) != -1) goto LAB_14179513b;
              break;
            }
          }
          *(int *)(lVar23 + 0x20) = iVar25 + 1;
          if (*(int *)(lVar23 + 0x24) < iVar25 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar23 + 0x18);
          }
          *(uint *)((longlong)iVar25 * 4 + *(longlong *)(lVar23 + 0x18)) = uVar4;
        }
LAB_14179513b:
        puVar18 = puVar18 + 1;
        uVar24 = uVar24 + 1;
        plVar16 = local_b0;
      } while (uVar24 != uVar27);
    }
    uVar24 = 0;
    piVar20 = (int *)plVar16[5];
    uVar27 = (longlong)(int)plVar16[6] & 0x3fffffffffffffff;
    if (piVar20 + (int)plVar16[6] < piVar20) {
      uVar27 = uVar24;
    }
    if (uVar27 == 0) goto LAB_141795178;
    do {
      lVar23 = *(longlong *)(puVar28 + 2);
      iVar25 = *piVar20;
      piVar10 = *(int **)(lVar23 + 0x28);
      iVar3 = *(int *)(lVar23 + 0x30);
      for (piVar13 = piVar10; piVar13 != piVar10 + iVar3; piVar13 = piVar13 + 1) {
        if (*piVar13 == iVar25) {
          if ((int)((longlong)piVar13 - (longlong)piVar10 >> 2) != -1) goto LAB_14179520e;
          break;
        }
      }
      *(int *)(lVar23 + 0x30) = iVar3 + 1;
      if (*(int *)(lVar23 + 0x34) < iVar3 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar23 + 0x28);
      }
      *(int *)((longlong)iVar3 * 4 + *(longlong *)(lVar23 + 0x28)) = iVar25;
LAB_14179520e:
      piVar20 = piVar20 + 1;
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar27);
    break;
  case 3:
    uVar24 = (ulonglong)(local_118 & 0xff);
    local_b0 = (longlong *)((ulonglong)(local_118 >> 0xc) + lVar23);
    local_110 = 0;
    local_60 = (longlong)(int)local_b0[1];
    if (local_60 < 1) goto LAB_141794566;
    do {
      plVar15 = *(longlong **)(*local_b0 + local_110 * 8);
      plVar16 = (longlong *)(*local_b0 + local_110 * 8);
      puVar28 = (uint *)*param_1;
      if (plVar15 != (longlong *)0x0) {
        uVar4 = *(uint *)((longlong)plVar15 + 0xc);
        if ((int)uVar4 < (int)DAT_1469e91c4) {
          uVar14 = uVar4 & 0xffff;
          uVar26 = uVar4;
          if ((int)uVar4 < 0) {
            uVar26 = uVar4 + 0xffff;
            uVar14 = uVar14 - 0x10000;
          }
          lVar23 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar26 >> 0x10) * 8) +
                   (longlong)(int)uVar14 * 0x18;
        }
        else {
          lVar23 = 0;
        }
        uVar27 = 0;
        uVar26 = *(uint *)(lVar23 + 0xc);
        if (uVar26 != *puVar28) {
          bVar9 = *(byte *)(lVar23 + 0xb) & 1;
          if ((bVar9 == 0) && (uVar26 == 0)) {
            if (DAT_1469e91a4 < (int)uVar4) {
              cVar2 = (**(code **)(*plVar15 + 0x20))(plVar15);
              if ((cVar2 != '\0') && (lVar6 = *plVar16, (*(uint *)(lVar6 + 8) & 0x1400) == 0)) {
                uVar4 = *(uint *)(lVar6 + 0xc);
                if ((int)uVar4 < (int)DAT_1469e91c4) {
                  uVar14 = uVar4 & 0xffff;
                  uVar26 = uVar4;
                  if ((int)uVar4 < 0) {
                    uVar26 = uVar4 + 0xffff;
                    uVar14 = uVar14 - 0x10000;
                  }
                  uVar27 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar26 >> 0x10) * 8) +
                           (longlong)(int)uVar14 * 0x18;
                }
                if ((*(uint *)(uVar27 + 8) >> 0x1e & 1) == 0) {
                  in_stack_fffffffffffffe98 = local_100;
                  FUN_141783070(puVar28,uVar4,lVar23,lVar6,local_100,1);
                  goto LAB_141794dfd;
                }
              }
              lVar23 = *(longlong *)(puVar28 + 2);
              iVar25 = *(int *)(*plVar16 + 0xc);
              piVar20 = *(int **)(lVar23 + 0x28);
              iVar3 = *(int *)(lVar23 + 0x30);
              for (piVar10 = piVar20; piVar10 != piVar20 + iVar3; piVar10 = piVar10 + 1) {
                if (*piVar10 == iVar25) {
                  if ((int)((longlong)piVar10 - (longlong)piVar20 >> 2) != -1) goto LAB_141794dfd;
                  break;
                }
              }
              *(int *)(lVar23 + 0x30) = iVar3 + 1;
              if (*(int *)(lVar23 + 0x34) < iVar3 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar23 + 0x28,iVar3);
              }
              *(int *)((longlong)iVar3 * 4 + *(longlong *)(lVar23 + 0x28)) = iVar25;
            }
          }
          else if (DAT_1469e8638 == 0) {
            if (bVar9 == 0) {
              uVar4 = uVar26;
            }
            uVar24 = uVar27;
            if ((int)uVar4 < (int)DAT_1469e91c4) {
              uVar14 = uVar4 & 0xffff;
              uVar26 = uVar4;
              if ((int)uVar4 < 0) {
                uVar26 = uVar4 + 0xffff;
                uVar14 = uVar14 - 0x10000;
              }
              uVar24 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar26 >> 0x10) * 8) +
                       (longlong)(int)uVar14 * 0x18;
            }
            lVar23 = *(longlong *)(puVar28 + 2);
            puVar18 = *(uint **)(lVar23 + 0x18);
            iVar25 = *(int *)(lVar23 + 0x20);
            lVar6 = (longlong)(int)~*(uint *)(uVar24 + 0xc) * 0x50 + DAT_1469e8f10;
            for (puVar11 = puVar18; local_68 = lVar6, puVar11 != puVar18 + iVar25;
                puVar11 = puVar11 + 1) {
              if (*puVar11 == uVar4) {
                if ((int)((longlong)puVar11 - (longlong)puVar18 >> 2) != -1) goto LAB_141794c9a;
                break;
              }
            }
            *(int *)(lVar23 + 0x20) = iVar25 + 1;
            if (*(int *)(lVar23 + 0x24) < iVar25 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar23 + 0x18,iVar25);
            }
            *(uint *)((longlong)iVar25 * 4 + *(longlong *)(lVar23 + 0x18)) = uVar4;
LAB_141794c9a:
            TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                      (lVar6 + 0x38,puVar28);
            puVar18 = *(uint **)(lVar6 + 0x18);
            uVar24 = (longlong)*(int *)(lVar6 + 0x20) & 0x3fffffffffffffff;
            if (puVar18 + *(int *)(lVar6 + 0x20) < puVar18) {
              uVar24 = 0;
            }
            if (uVar24 != 0) {
              do {
                uVar4 = *puVar18;
                if (uVar4 != *puVar28) {
                  lVar23 = *(longlong *)(puVar28 + 2);
                  puVar11 = *(uint **)(lVar23 + 0x18);
                  iVar25 = *(int *)(lVar23 + 0x20);
                  for (puVar12 = puVar11; puVar12 != puVar11 + iVar25; puVar12 = puVar12 + 1) {
                    if (*puVar12 == uVar4) {
                      if ((int)((longlong)puVar12 - (longlong)puVar11 >> 2) != -1)
                      goto LAB_141794d3b;
                      break;
                    }
                  }
                  *(int *)(lVar23 + 0x20) = iVar25 + 1;
                  if (*(int *)(lVar23 + 0x24) < iVar25 + 1) {
                    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar23 + 0x18,iVar25);
                  }
                  *(uint *)((longlong)iVar25 * 4 + *(longlong *)(lVar23 + 0x18)) = uVar4;
                }
LAB_141794d3b:
                puVar18 = puVar18 + 1;
                uVar27 = uVar27 + 1;
                lVar6 = local_68;
              } while (uVar27 != uVar24);
            }
            uVar24 = 0;
            piVar20 = *(int **)(lVar6 + 0x28);
            uVar27 = (longlong)*(int *)(lVar6 + 0x30) & 0x3fffffffffffffff;
            if (piVar20 + *(int *)(lVar6 + 0x30) < piVar20) {
              uVar27 = uVar24;
            }
            if (uVar27 != 0) {
              do {
                lVar23 = *(longlong *)(puVar28 + 2);
                iVar25 = *piVar20;
                piVar10 = *(int **)(lVar23 + 0x28);
                iVar3 = *(int *)(lVar23 + 0x30);
                for (piVar13 = piVar10; piVar13 != piVar10 + iVar3; piVar13 = piVar13 + 1) {
                  if (*piVar13 == iVar25) {
                    if ((int)((longlong)piVar13 - (longlong)piVar10 >> 2) != -1) goto LAB_141794ddf;
                    break;
                  }
                }
                *(int *)(lVar23 + 0x30) = iVar3 + 1;
                if (*(int *)(lVar23 + 0x34) < iVar3 + 1) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar23 + 0x28,iVar3);
                }
                *(int *)((longlong)iVar3 * 4 + *(longlong *)(lVar23 + 0x28)) = iVar25;
LAB_141794ddf:
                piVar20 = piVar20 + 1;
                uVar24 = uVar24 + 1;
              } while (uVar24 != uVar27);
            }
          }
          else {
            FClusterReferenceProcessor::MergeCluster(puVar28,lVar23,plVar15,local_100);
          }
        }
      }
LAB_141794dfd:
      local_110 = local_110 + 1;
    } while (local_110 < local_60);
    break;
  case 4:
    local_138 = plVar16 + 3;
    plVar15 = (longlong *)((ulonglong)(local_118 >> 0xc) + lVar23);
    lVar23 = *plVar15;
    *local_138 = lVar23;
    *(undefined4 *)(plVar16 + 4) =
         *(undefined4 *)(*(longlong *)(lVar22 + 0x1b0) + (longlong)(int)uVar26 * 4);
    iVar3 = (int)plVar15[1];
    *(int *)((longlong)plVar16 + 0x24) = iVar3;
    uVar4 = *(int *)(*(longlong *)(lVar22 + 0x1b0) + (longlong)(iVar25 + 2) * 4) +
            (iVar25 + 2) * 0x100;
    *(int *)(plVar16 + 5) = iVar25 + 3;
    local_120 = lVar23;
    if (iVar3 != 0) goto LAB_141795260;
    uVar27 = (ulonglong)(uVar4 >> 8);
    uVar24 = (ulonglong)
             ((uint)*(byte *)(*(longlong *)(lVar22 + 0x1b0) + -4 + uVar27 * 4) - (uVar4 & 0xff));
    plVar16 = local_138;
    goto LAB_141794566;
  case 5:
    plVar16[3] = lVar23;
    *(undefined4 *)(plVar16 + 4) =
         *(undefined4 *)(*(longlong *)(lVar22 + 0x1b0) + (longlong)(int)uVar26 * 4);
    *(undefined4 *)((longlong)plVar16 + 0x24) =
         *(undefined4 *)(*(longlong *)(lVar22 + 0x1b0) + (longlong)(iVar25 + 2) * 4);
    *(int *)(plVar16 + 5) = iVar25 + 3;
LAB_141795260:
    local_138 = plVar16 + 3;
    uVar24 = 0;
    plVar16 = local_138;
    uVar27 = (ulonglong)(iVar25 + 3);
    goto LAB_141794566;
  case 6:
    uVar24 = (ulonglong)(local_118 & 0xff);
    (*(code *)CONCAT44(*(undefined4 *)(lVar6 + (longlong)(iVar25 + 2) * 4),
                       *(undefined4 *)(lVar6 + (longlong)(int)uVar26 * 4)))
              ((ulonglong)(local_118 >> 0xc) + lVar23);
    plVar16 = local_138;
    lVar23 = local_120;
    uVar27 = (ulonglong)(iVar25 + 3);
    goto LAB_141794566;
  case 7:
    uVar24 = (ulonglong)(local_118 & 0xff);
    (*(code *)CONCAT44(*(undefined4 *)(lVar6 + (longlong)(iVar25 + 2) * 4),
                       *(undefined4 *)(lVar6 + (longlong)(int)uVar26 * 4)))(lVar1);
    plVar16 = local_138;
    lVar23 = local_120;
    uVar27 = (ulonglong)(iVar25 + 3);
    goto LAB_141794566;
  case 8:
  case 9:
    uVar24 = (ulonglong)(local_118 & 0xff);
    plVar16 = (longlong *)
              CONCAT44(*(undefined4 *)(lVar6 + (longlong)(iVar25 + 2) * 4),
                       *(undefined4 *)(lVar6 + (longlong)(int)uVar26 * 4));
    puVar7 = local_90;
    if (local_90 == (undefined8 *)0x0) {
      lVar6 = operator_new(0xb0);
      puVar7 = (undefined8 *)0x0;
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)
                 FSimpleObjectReferenceCollectorArchive::FSimpleObjectReferenceCollectorArchive
                           (lVar6,0,&local_98);
      }
    }
    local_90 = puVar7;
    (**(code **)(*plVar16 + 0x2c0))(plVar16,local_90,(ulonglong)(local_118 >> 0xc) + lVar23,0);
    plVar16 = local_138;
    lVar23 = local_120;
    uVar27 = (ulonglong)(iVar25 + 3);
    goto LAB_141794566;
  case 10:
    uVar24 = (ulonglong)(local_118 & 0xff);
    goto LAB_141794566;
  case 0xb:
    goto switchD_1417945ed_caseD_b;
  default:
    goto switchD_1417945ed_default;
  }
  local_118 = local_118 & 0xff;
  uVar24 = (ulonglong)local_118;
  plVar16 = local_138;
  lVar23 = local_120;
  uVar27 = local_e0;
  goto LAB_141794566;
switchD_1417945ed_default:
  if (*(longlong *)(lVar1 + 0x10) == 0) {
    local_d0 = (undefined2 *)0x0;
    local_c8 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d0,0);
    FGenericPlatformString::Memcpy(local_d0,&DAT_143f3edc8,10);
  }
  else {
    local_58 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x18);
    FName::ToString(&local_58,&local_d0);
  }
  puVar17 = &DAT_143f3eda8;
  if ((int)local_c8 != 0) {
    puVar17 = local_d0;
  }
  local_a8 = (undefined2 *)0x0;
  local_a0 = 0;
  UObjectBaseUtility::GetPathName(lVar1,0,&local_a8);
  puVar8 = &DAT_143f3eda8;
  if ((int)local_a0 != 0) {
    puVar8 = local_a8;
  }
  uVar29 = CONCAT44(uVar30,iVar25);
  LowLevelFatalErrorHandler
            ("Unknown",0x328,L"Unknown token. Type:%d ReferenceTokenStreamIndex:%d Class:%s Obj:%s",
             uVar4,uVar29,puVar17,puVar8);
  uVar30 = (undefined4)((ulonglong)uVar29 >> 0x20);
  uVar31 = (undefined4)((ulonglong)puVar17 >> 0x20);
  if (local_a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_d0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar17 = *(undefined2 **)(lVar1 + 0x10);
  if (puVar17 == (undefined2 *)0x0) {
    local_b8 = 5;
    local_c0 = puVar17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c0,0);
    FGenericPlatformString::Memcpy(local_c0,&DAT_143f3edc8,10);
  }
  else {
    local_50 = *(undefined8 *)(puVar17 + 0xc);
    FName::ToString(&local_50,&local_c0);
  }
  puVar17 = &DAT_143f3eda8;
  if ((int)local_b8 != 0) {
    puVar17 = local_c0;
  }
  local_f0 = (longlong *)0x0;
  local_e8 = 0;
  UObjectBaseUtility::GetPathName(lVar1,0,&local_f0);
  plVar16 = (longlong *)&DAT_143f3eda8;
  if ((int)local_e8 != 0) {
    plVar16 = local_f0;
  }
  in_stack_fffffffffffffe98 = (longlong *)(CONCAT44(uVar30,local_118 >> 8) & 0xffffffff0000000f);
  FDebug::AssertFailed
            (&DAT_143f3f584,"Unknown",0x328,
             L"Unknown token. Type:%d ReferenceTokenStreamIndex:%d Class:%s Obj:%s",
             in_stack_fffffffffffffe98,CONCAT44(uVar31,iVar25),puVar17,plVar16);
  if (local_f0 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar16 = local_138;
  lVar23 = local_120;
  if (local_c0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  goto LAB_141794566;
switchD_1417945ed_caseD_b:
  local_138 = local_70;
  param_2 = local_48;
  if ((int)local_48[1] <= iVar19) goto LAB_14179556a;
  goto LAB_141794460;
}



// FUNCTION 141795660 Register body=175 status=ok
// SIG undefined Register(void)

void UObjectBase::Register(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  uVar3 = FUN_14178df90();
  puVar4 = (undefined8 *)operator_new(0x10);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    *puVar4 = param_1;
    puVar4[1] = 0;
  }
  local_28 = &local_res10;
  local_20 = &local_38;
  local_res10 = param_1;
  local_38 = param_3;
  local_30 = param_2;
  FUN_1416e09d0(uVar3,local_res8,&local_28,0);
  puVar2 = puVar4;
  if (DAT_1469e9050 != (undefined8 *)0x0) {
    plVar1 = (longlong *)((longlong)DAT_1469e9050 + 8);
    DAT_1469e9050 = puVar4;
    *plVar1 = (longlong)puVar4;
    puVar4 = DAT_1469e9048;
    puVar2 = DAT_1469e9050;
  }
  DAT_1469e9050 = puVar2;
  DAT_1469e9048 = puVar4;
  return;
}



// FUNCTION 141795710 Rehash body=530 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FName,FDynamicClassStaticData>,TDefaultMapHashableKeyFuncs<FName,FDynamicClassStaticData,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
  undefined8 *puVar11;
  ulonglong uVar12;
  uint *puVar13;
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
      uVar12 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar8 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_14179584f;
        uVar8 = puVar13[lVar5 + 1];
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
LAB_14179584f:
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
        puVar11 = (undefined8 *)((longlong)iStack_1c * 0x70 + *param_1);
        uVar8 = (int)((ulonglong)*puVar11 >> 0x20) + (int)*puVar11 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar11 + 0x6c) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar11 + 0xd) =
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



// FUNCTION 141795930 Remove body=419 status=ok
// SIG undefined Remove(void)

int TSet<TTuple<FLinkerLoad_*,FDeferredScriptLoader>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,FDeferredScriptLoader,1>,FDefaultSetAllocator>
    ::Remove(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  iVar10 = 0;
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar12 = (int)(param_2 >> 4);
  uVar11 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
  uVar6 = -(uVar11 + iVar12) ^ uVar11 >> 0xd;
  uVar13 = (iVar12 - uVar11) - uVar6 ^ uVar6 >> 0xc;
  uVar11 = (uVar11 - uVar13) - uVar6 ^ uVar13 << 0x10;
  uVar6 = (uVar6 - uVar11) - uVar13 ^ uVar11 >> 5;
  uVar13 = (uVar13 - uVar11) - uVar6 ^ uVar6 >> 3;
  uVar11 = (uVar11 - uVar13) - uVar6 ^ uVar13 << 10;
  uVar8 = ((longlong)(int)((uVar6 - uVar11) - uVar13) ^ (ulonglong)(uVar11 >> 0xf)) &
          (longlong)((int)param_1[9] + -1);
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  iVar12 = *(int *)((longlong)plVar5 + uVar8 * 4);
  piVar9 = (int *)((longlong)plVar5 + uVar8 * 4);
  do {
    if (iVar12 == -1) {
      return iVar10;
    }
    lVar4 = *param_1;
    lVar1 = lVar4 + (longlong)iVar12 * 0x28;
    if (*(ulonglong *)(lVar4 + (longlong)iVar12 * 0x28) == param_2) {
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        lVar7 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar1 + 0x24));
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = param_1 + 7;
        }
        puVar2 = (undefined4 *)((longlong)plVar5 + lVar7 * 4);
        iVar3 = *(int *)((longlong)plVar5 + lVar7 * 4);
        while (iVar3 != -1) {
          if (iVar3 == iVar12) {
            *puVar2 = *(undefined4 *)(lVar1 + 0x20);
            break;
          }
          lVar7 = (longlong)iVar3 * 5 + 4;
          puVar2 = (undefined4 *)(lVar4 + lVar7 * 8);
          iVar3 = *(int *)(lVar4 + lVar7 * 8);
        }
      }
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar12,1);
      iVar10 = iVar10 + 1;
    }
    else {
      piVar9 = (int *)(lVar1 + 0x20);
    }
    iVar12 = *piVar9;
  } while( true );
}



// FUNCTION 141795ae0 Remove body=446 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<UObjectBase_const_*,FBoolAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FBoolAnnotation,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar13 = (int)(param_2 >> 4);
  uVar10 = (longlong)(int)param_1[9] - 1;
  uVar12 = 0x9e3779b9U - iVar13 ^ iVar13 << 8;
  uVar7 = -(uVar12 + iVar13) ^ uVar12 >> 0xd;
  uVar14 = (iVar13 - uVar12) - uVar7 ^ uVar7 >> 0xc;
  uVar12 = (uVar12 - uVar14) - uVar7 ^ uVar14 << 0x10;
  uVar7 = (uVar7 - uVar12) - uVar14 ^ uVar12 >> 5;
  uVar14 = (uVar14 - uVar12) - uVar7 ^ uVar7 >> 3;
  uVar12 = (uVar12 - uVar14) - uVar7 ^ uVar14 << 10;
  plVar11 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar11 = param_1 + 7;
  }
  iVar13 = *(int *)((longlong)plVar11 +
                   (((longlong)(int)((uVar7 - uVar12) - uVar14) ^ (ulonglong)(uVar12 >> 0xf)) &
                   uVar10) * 4);
  if (iVar13 != -1) {
    lVar3 = *param_1;
    do {
      lVar8 = (longlong)iVar13;
      if (*(ulonglong *)(lVar3 + lVar8 * 0x18) == param_2) {
        lVar8 = lVar8 * 0x18;
        uVar10 = (longlong)*(int *)(lVar8 + 0x14 + lVar3) & uVar10;
        puVar9 = (undefined4 *)((longlong)plVar11 + uVar10 * 4);
        iVar5 = *(int *)((longlong)plVar11 + uVar10 * 4);
        if (iVar5 != -1) goto LAB_141795c00;
        goto LAB_141795c23;
      }
      iVar13 = *(int *)(lVar3 + 0x10 + lVar8 * 0x18);
    } while (iVar13 != -1);
  }
  return 0;
  while( true ) {
    lVar1 = (longlong)iVar5 * 3 + 2;
    iVar5 = *(int *)(lVar3 + lVar1 * 8);
    puVar9 = (undefined4 *)(lVar3 + lVar1 * 8);
    if (iVar5 == -1) break;
LAB_141795c00:
    if (iVar5 == iVar13) {
      *puVar9 = *(undefined4 *)(lVar8 + lVar3 + 0x10);
      break;
    }
  }
LAB_141795c23:
  bVar4 = (byte)iVar13 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar13;
  }
  lVar3 = *param_1;
  uVar6 = 0xffffffff;
  *(undefined4 *)(lVar3 + lVar8) = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar3 + 4 + lVar8) = uVar6;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = iVar13;
  plVar11 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
  return 1;
}



// FUNCTION 141795ca0 FUN_141795ca0 body=404 status=ok
// SIG undefined FUN_141795ca0(void)

undefined8 FUN_141795ca0(longlong *param_1,ulonglong param_2)

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
        goto joined_r0x000141795dbc;
      }
      iVar8 = *(int *)(lVar3 + 0x58 + lVar2);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x000141795dbc:
  if (iVar1 == -1) {
LAB_141795de3:
    lVar3 = *param_1 + lVar3;
    *(undefined4 *)(lVar3 + 0x50) = 0;
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar3 + 8);
    TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar8,1);
    return 1;
  }
  if (iVar1 == iVar8) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x58);
    goto LAB_141795de3;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x60 + 0x58 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x000141795dbc;
}



// FUNCTION 141795e40 RemoveAllAnnotations body=100 status=ok
// SIG undefined RemoveAllAnnotations(void)

void FUObjectAnnotationDense<FArchetypeInfo,1>::RemoveAllAnnotations(longlong param_1)

{
  int iVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if (0 < iVar1) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000141795e9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  return;
}



// FUNCTION 141795eb0 FUN_141795eb0 body=595 status=ok
// SIG undefined FUN_141795eb0(void)

wchar_t ** FUN_141795eb0(wchar_t **param_1,short *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  uint uVar10;
  wchar_t *pwVar11;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  pwVar8 = (wchar_t *)0x0;
  *param_1 = (wchar_t *)0x0;
  param_1[1] = (wchar_t *)0x0;
  lVar6 = -1;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    iVar2 = (int)lVar6 + 1;
    *(int *)(param_1 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,param_2,(longlong)iVar2 * 2);
  }
  iVar2 = *(int *)(param_1 + 1);
  uVar10 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar10 = 0xffffffff;
  }
  uVar3 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar10 = 0;
  }
  if (1 < uVar10) {
    uVar10 = 1;
  }
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  uVar4 = uVar10;
  if ((uVar10 < 0x80000001) && (uVar4 = uVar3, 0x80000000 < uVar3)) {
    uVar4 = 0x80000000;
  }
  pwVar11 = L"";
  if (iVar2 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = *param_1;
  }
  iVar5 = uVar4 - uVar10;
  local_38 = (wchar_t *)0x0;
  local_2c = 0;
  iVar2 = iVar5 + 1;
  if (iVar5 == 0) {
    iVar2 = 0;
  }
  pwVar7 = pwVar8;
  local_30 = iVar2;
  if ((0 < iVar2) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar2 = local_30,
     pwVar7 = local_38, 0 < local_30)) {
    wcsncpy(local_38,pwVar9 + (int)uVar10,(longlong)iVar5);
    pwVar7[iVar5] = L'\0';
  }
  if (param_1 == &local_38) {
    if (pwVar7 != (wchar_t *)0x0) {
      FMemory::Free(pwVar7);
    }
  }
  else {
    if (*param_1 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    *param_1 = pwVar7;
    *(int *)(param_1 + 1) = iVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
  }
  cVar1 = FString::StartsWith(param_1,L"DEPRECATED_",1);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 1);
    uVar10 = iVar2 - 1;
    if (iVar2 == 0) {
      uVar10 = 0;
    }
    if (0xb < uVar10) {
      uVar10 = 0xb;
    }
    uVar3 = iVar2 - 1;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    uVar4 = uVar10;
    if ((uVar10 < 0x8000000b) && (uVar4 = uVar3, 0x8000000a < uVar3)) {
      uVar4 = 0x8000000a;
    }
    if (iVar2 != 0) {
      pwVar11 = *param_1;
    }
    iVar5 = uVar4 - uVar10;
    local_38 = (wchar_t *)0x0;
    local_2c = 0;
    iVar2 = iVar5 + 1;
    if (iVar5 == 0) {
      iVar2 = 0;
    }
    local_30 = iVar2;
    if ((0 < iVar2) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar2 = local_30,
       pwVar8 = local_38, 0 < local_30)) {
      wcsncpy(local_38,pwVar11 + (int)uVar10,(longlong)iVar5);
      pwVar8[iVar5] = L'\0';
    }
    if (param_1 == &local_38) {
      if (pwVar8 != (wchar_t *)0x0) {
        FMemory::Free(pwVar8);
      }
    }
    else {
      if (*param_1 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *param_1 = pwVar8;
      *(int *)(param_1 + 1) = iVar2;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
    }
  }
  return param_1;
}



// FUNCTION 141796110 RemoveUObjectDeleteListener body=216 status=ok
// SIG undefined RemoveUObjectDeleteListener(void)

void FUObjectArray::RemoveUObjectDeleteListener(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  BOOL BVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  }
  plVar1 = *(longlong **)(param_1 + 0x170);
  iVar6 = *(int *)(param_1 + 0x178);
  plVar4 = plVar1;
  do {
    if (plVar4 == plVar1 + iVar6) {
LAB_1417961cb:
                    /* WARNING: Could not recover jumptable at 0x0001417961e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
      return;
    }
    if (*plVar4 == param_2) {
      iVar3 = (int)((longlong)plVar4 - (longlong)plVar1 >> 3);
      if (iVar3 != -1) {
        iVar5 = (iVar6 - iVar3) + -1;
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    (plVar1 + iVar3,plVar1 + (iVar6 - iVar5),(longlong)iVar5 << 3);
          iVar6 = *(int *)(param_1 + 0x178);
        }
        *(int *)(param_1 + 0x178) = iVar6 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x170);
      }
      goto LAB_1417961cb;
    }
    plVar4 = plVar4 + 1;
  } while( true );
}



// FUNCTION 1417961f0 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 < 9) {
    iVar2 = 8;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x2c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 4,0);
    iVar2 = (int)(uVar3 >> 2);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x2c) = iVar2;
  FUN_1406f49a0(param_1,param_2,iVar2,4);
  return;
}



// FUNCTION 141796280 FUN_141796280 body=321 status=ok
// SIG undefined FUN_141796280(void)

longlong FUN_141796280(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *local_18;
  int local_10;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (DAT_1469e7e10 != '\0') {
    return 0;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 != DAT_1468c21c0) goto LAB_1417962da;
  }
  bVar1 = true;
LAB_1417962da:
  if ((bVar1) && (cVar2 = IsGarbageCollecting(), cVar2 != '\0')) {
    return 0;
  }
  FSoftObjectPath::ToString(param_1,&local_18);
  puVar7 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar7 = local_18;
  }
  uVar4 = UObject::GetPrivateStaticClass();
  for (lVar5 = FUN_141799410(uVar4,0,puVar7,0); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    lVar6 = UObjectRedirector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free(local_18);
  }
  if (lVar5 != 0) {
    lVar6 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar5;
    }
  }
  return 0;
}



// FUNCTION 1417963d0 FUN_1417963d0 body=346 status=ok
// SIG undefined FUN_1417963d0(void)

int FUN_1417963d0(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 local_res8 [16];
  undefined1 *local_38;
  undefined1 *puStack_30;
  
  puStack_30 = local_res8;
  local_res8[0] = 0;
  local_38 = &LAB_141784980;
  lVar7 = FUN_1415d8310(&local_38,&DAT_1464b5c08);
  plVar1 = (longlong *)(param_1 + 0x200);
  if (((((*(byte *)(param_1 + 0x228) & 0x41) == 0x41) &&
       (lVar8 = (**(code **)(*plVar1 + 0x88))(plVar1), lVar8 != 0)) && (*(int *)(lVar8 + 0x98) == 1)
      ) && ((*(uint *)(lVar8 + 0x290) >> 0x14 & 1) != 0)) {
    return 0;
  }
  local_38 = (undefined1 *)0x0;
  puStack_30 = (undefined1 *)0x0;
  TMultiMap<FLinkerLoad_*,FDeferredScriptLoader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,FDeferredScriptLoader,1>_>
  ::MultiFind<FDefaultAllocator>(lVar7 + 0x18,param_1,&local_38,0);
  TSet<TTuple<FLinkerLoad_*,FDeferredScriptLoader>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,FDeferredScriptLoader,1>,FDefaultSetAllocator>
  ::Remove(lVar7 + 0x18,param_1);
  uVar9 = (**(code **)(*plVar1 + 0x90))(plVar1);
  puVar4 = local_38;
  puVar2 = local_38 + (longlong)(int)puStack_30 * 0x18;
  iVar3 = 0;
  for (puVar10 = local_38; puVar10 != puVar2; puVar10 = puVar10 + 0x18) {
    lVar7 = FWeakObjectPtr::Get();
    if (lVar7 == 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = FUN_141791880(puVar10,lVar7,plVar1,1);
    }
    iVar6 = iVar3 + 1;
    if (cVar5 == '\0') {
      iVar6 = iVar3;
    }
    iVar3 = iVar6;
  }
  (**(code **)(*plVar1 + 0xa8))(plVar1,uVar9);
  if (puVar4 != (undefined1 *)0x0) {
    FMemory::Free(puVar4);
  }
  return iVar3;
}



// FUNCTION 141796530 FUN_141796530 body=977 status=ok
// SIG undefined FUN_141796530(void)

undefined8 * FUN_141796530(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  uint uVar9;
  undefined2 *puVar10;
  wchar_t *local_res18;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar11;
  wchar_t *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  uint local_40;
  undefined4 local_3c;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  if (param_3 == (undefined8 *)0x0) {
    if (*(int *)(param_2 + 1) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)*param_2;
    }
    iVar1 = _wcsnicmp(pwVar4,L"engine-ini:",0xb);
    if (iVar1 == 0) {
      param_3 = &DAT_1468e2360;
    }
    else {
      if (*(int *)(param_2 + 1) == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)*param_2;
      }
      iVar1 = _wcsnicmp(pwVar4,L"game-ini:",9);
      if (iVar1 == 0) {
        param_3 = &DAT_1468e2410;
      }
      else {
        if (*(int *)(param_2 + 1) == 0) {
          pwVar4 = L"";
        }
        else {
          pwVar4 = (wchar_t *)*param_2;
        }
        iVar1 = _wcsnicmp(pwVar4,L"input-ini:",10);
        if (iVar1 == 0) {
          param_3 = &DAT_1468e2400;
        }
        else {
          if (*(int *)(param_2 + 1) == 0) {
            pwVar4 = L"";
          }
          else {
            pwVar4 = (wchar_t *)*param_2;
          }
          iVar1 = _wcsnicmp(pwVar4,L"editor-ini:",0xb);
          if (iVar1 != 0) {
            FString::FString(param_1,param_2);
            return param_1;
          }
          param_3 = &DAT_1468e2370;
        }
      }
    }
  }
  iVar2 = FUN_141592950(param_2,&DAT_144d2836c,0,0,CONCAT44(uVar11,0xffffffff));
  iVar1 = *(int *)(param_2 + 1);
  uVar9 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar9 = 0xffffffff;
  }
  uVar7 = iVar1 - 1;
  uVar5 = iVar2 + 0x80000000;
  if (iVar1 == 0) {
    uVar9 = 0;
  }
  if (iVar2 + 1U < uVar9) {
    uVar9 = iVar2 + 1U;
  }
  if (iVar1 == 0) {
    uVar7 = 0xffffffff;
  }
  if (iVar1 == 0) {
    uVar7 = 0;
  }
  uVar6 = uVar9;
  if ((uVar9 <= uVar5) && (uVar6 = uVar7, uVar5 < uVar7)) {
    uVar6 = uVar5;
  }
  if (iVar1 == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*param_2;
  }
  iVar1 = uVar6 - uVar9;
  local_68 = (wchar_t *)0x0;
  local_5c = 0;
  local_60 = iVar1 + 1;
  if (iVar1 == 0) {
    local_60 = 0;
  }
  if ((0 < (int)local_60) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0), pwVar4 = local_68,
     0 < (int)local_60)) {
    wcsncpy(local_68,puVar10 + (int)uVar9,(longlong)iVar1);
    pwVar4[iVar1] = L'\0';
  }
  iVar1 = FUN_141592950(&local_68,&DAT_144d284cc,0,1,0xffffffff);
  pwVar4 = (wchar_t *)0x0;
  uVar9 = 0;
  if (iVar1 != -1) {
    uVar9 = iVar1 + 0x80000000;
    uVar7 = local_60 - 1;
    if (local_60 == 0) {
      uVar7 = 0;
    }
    if (iVar1 + 1U < uVar7) {
      uVar7 = iVar1 + 1U;
    }
    uVar5 = local_60 - 1;
    if (local_60 == 0) {
      uVar5 = 0;
    }
    uVar6 = uVar7;
    if ((uVar7 <= uVar9) && (uVar6 = uVar5, uVar9 < uVar5)) {
      uVar6 = uVar9;
    }
    local_48 = (wchar_t *)0x0;
    local_3c = 0;
    pwVar3 = L"";
    if (local_60 != 0) {
      pwVar3 = local_68;
    }
    iVar2 = uVar6 - uVar7;
    uVar9 = iVar2 + 1;
    if (iVar2 == 0) {
      uVar9 = 0;
    }
    if ((0 < (int)uVar9) &&
       (local_40 = uVar9, TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0),
       uVar9 = local_40, pwVar4 = local_48, 0 < (int)local_40)) {
      wcsncpy(local_48,pwVar3 + (int)uVar7,(longlong)iVar2);
      pwVar4[iVar2] = L'\0';
    }
    pwVar3 = (wchar_t *)0x0;
    if (local_60 == 0) {
      local_res18 = L"";
      iVar2 = 0;
    }
    else {
      iVar2 = local_60 - 1;
      local_res18 = local_68;
    }
    if (iVar1 < 0) {
      iVar2 = 0;
    }
    else if (iVar1 < iVar2) {
      iVar2 = iVar1;
    }
    local_48 = (wchar_t *)0x0;
    local_3c = 0;
    pwVar8 = (wchar_t *)(ulonglong)(iVar2 + 1);
    if (iVar2 == 0) {
      pwVar8 = pwVar3;
    }
    uVar7 = (uint)pwVar8;
    local_40 = uVar7;
    if ((0 < (int)uVar7) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), uVar7 = local_40,
       pwVar3 = local_48, 0 < (int)local_40)) {
      wcsncpy(local_48,local_res18,(longlong)iVar2);
      pwVar3[iVar2] = L'\0';
    }
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_5c = local_3c;
    local_68 = pwVar3;
    local_60 = uVar7;
  }
  local_58 = 0;
  local_50 = 0;
  pwVar3 = L"";
  if (uVar9 != 0) {
    pwVar3 = pwVar4;
  }
  pwVar8 = L"";
  if (local_60 != 0) {
    pwVar8 = local_68;
  }
  FConfigCacheIni::GetString(DAT_1468b6148,pwVar8,pwVar3,&local_58,param_3);
  *param_1 = local_58;
  *(undefined4 *)(param_1 + 1) = (undefined4)local_50;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_50._4_4_;
  local_50 = 0;
  local_58 = 0;
  if (pwVar4 != (wchar_t *)0x0) {
    FMemory::Free(pwVar4);
  }
  if (local_68 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141796910 FUN_141796910 body=1234 status=ok
// SIG undefined FUN_141796910(void)

char FUN_141796910(longlong *param_1,longlong *param_2,char param_3,undefined8 param_4,
                  undefined4 param_5)

{
  bool bVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  wchar_t **ppwVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  wchar_t *pwVar14;
  char cVar15;
  char local_res10;
  char local_res18;
  uint uVar16;
  wchar_t *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  longlong local_78 [2];
  longlong local_68 [2];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  FUN_14179acf0(param_2,0);
  plVar6 = (longlong *)FUN_1416f90e0(&local_b8,param_2);
  if (param_2 != plVar6) {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = *plVar6;
    *plVar6 = 0;
    *(int *)(param_2 + 1) = (int)plVar6[1];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
  }
  if (local_b8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  cVar15 = '\0';
  local_res10 = '\0';
  FString::ReplaceInline(param_2,&DAT_144d28554,&DAT_144d28984,0);
  uVar16 = 0xffffffff;
  iVar4 = FUN_141592950(param_2,&DAT_144d2856c,0,0,0xffffffff);
  if (iVar4 != -1) {
    local_a8 = 0;
    local_a0 = 0;
    local_res18 = param_3;
    do {
      iVar13 = (int)param_2[1];
      if (iVar13 == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)*param_2;
      }
      iVar12 = 0;
      if (iVar13 != 0) {
        iVar12 = iVar13 + -1;
      }
      local_b8 = (wchar_t *)0x0;
      local_ac = 0;
      iVar13 = 0;
      if (iVar4 < 0) {
LAB_141796a3c:
        local_b0 = 0;
      }
      else {
        iVar13 = iVar12;
        if (iVar4 < iVar12) {
          iVar13 = iVar4;
        }
        local_b0 = iVar13 + 1;
        if (iVar13 == 0) goto LAB_141796a3c;
      }
      if ((0 < local_b0) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0), pwVar2 = local_b8,
         0 < local_b0)) {
        wcsncpy(local_b8,pwVar14,(longlong)iVar13);
        pwVar2[iVar13] = L'\0';
        cVar15 = local_res10;
      }
      iVar13 = iVar4 + 1;
      if (iVar13 < 0) {
LAB_141796a9c:
        bVar1 = false;
      }
      else {
        if ((int)param_2[1] == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = (int)param_2[1] + -1;
        }
        if (iVar12 <= iVar13) goto LAB_141796a9c;
        bVar1 = true;
      }
      if (bVar1) {
        lVar8 = *param_2;
        if (*(short *)(lVar8 + ((longlong)iVar4 + 1) * 2) == 0x2e) {
          iVar12 = (int)param_2[1];
          iVar5 = (iVar12 - iVar4) + -1;
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar8 + (longlong)iVar4 * 2),
                       (void *)(lVar8 + ((longlong)iVar4 + 1) * 2),(longlong)iVar5 * 2);
            iVar12 = (int)param_2[1];
          }
          local_res18 = '\0';
          cVar15 = '\x01';
          *(int *)(param_2 + 1) = iVar12 + -1;
          local_res10 = '\x01';
        }
      }
      lVar8 = 0;
      if (cVar15 == '\0') {
        pwVar14 = L"";
        if (local_b0 != 0) {
          pwVar14 = local_b8;
        }
        puVar7 = (undefined8 *)FName::FName(&local_a0,pwVar14,1);
        lVar8 = FPackageName::FindScriptPackageName(*puVar7);
        if (lVar8 != 0) {
          ppwVar9 = (wchar_t **)FName::ToString(lVar8,local_78);
          if (&local_b8 != ppwVar9) {
            if (local_b8 != (wchar_t *)0x0) {
              FMemory::Free();
            }
            local_b8 = *ppwVar9;
            *ppwVar9 = (wchar_t *)0x0;
            local_b0 = *(int *)(ppwVar9 + 1);
            local_ac = *(undefined4 *)((longlong)ppwVar9 + 0xc);
            ppwVar9[1] = (wchar_t *)0x0;
          }
          if (local_78[0] != 0) {
            FMemory::Free();
          }
        }
      }
      pwVar14 = L"";
      if (local_b0 != 0) {
        pwVar14 = local_b8;
      }
      puVar7 = (undefined8 *)FName::FName(&local_a8,pwVar14,1);
      local_88 = *puVar7;
      local_98 = 0;
      local_90 = 0;
      FCoreRedirects::GetRedirectedName(local_58,0x40,&local_98);
      ppwVar9 = (wchar_t **)FName::ToString(local_48,local_68);
      if (&local_b8 != ppwVar9) {
        if (local_b8 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_b8 = *ppwVar9;
        *ppwVar9 = (wchar_t *)0x0;
        local_b0 = *(int *)(ppwVar9 + 1);
        local_ac = *(undefined4 *)((longlong)ppwVar9 + 0xc);
        ppwVar9[1] = (wchar_t *)0x0;
      }
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if (local_res18 == '\0') {
        pwVar14 = L"";
        if (local_b0 != 0) {
          pwVar14 = local_b8;
        }
        lVar8 = *param_1;
        uVar10 = UPackage::GetPrivateStaticClass();
        lVar8 = FUN_141799410(uVar10,lVar8,pwVar14);
        if (lVar8 == 0) {
          lVar8 = *param_1;
          if (lVar8 == 0) {
            lVar8 = -1;
          }
          pwVar14 = L"";
          if (local_b0 != 0) {
            pwVar14 = local_b8;
          }
          uVar10 = UObject::GetPrivateStaticClass();
          lVar8 = FUN_141799410(uVar10,lVar8,pwVar14);
          if (lVar8 == 0) {
            if (local_b8 == (wchar_t *)0x0) {
              return local_res10;
            }
            FMemory::Free();
            return local_res10;
          }
        }
        *param_1 = lVar8;
        cVar15 = local_res10;
      }
      else {
        cVar3 = FPackageName::IsShortPackageName(&local_b8);
        if (cVar3 == '\0') {
          pwVar14 = L"";
          if (local_b0 != 0) {
            pwVar14 = local_b8;
          }
          uVar10 = UPackage::GetPrivateStaticClass();
          puVar7 = (undefined8 *)FName::FName(local_80,pwVar14,1);
          lVar11 = FUN_141799680(uVar10,*param_1,*puVar7,0,uVar16 & 0xffffff00,0,0);
          *param_1 = lVar11;
          if ((lVar8 == 0) && (lVar11 == 0)) {
            pwVar14 = L"";
            if (local_b0 != 0) {
              pwVar14 = local_b8;
            }
            lVar8 = LoadPackage(0,pwVar14,param_5);
            *param_1 = lVar8;
          }
          cVar15 = local_res10;
          if (*param_1 == 0) {
            pwVar14 = L"";
            if (local_b0 != 0) {
              pwVar14 = local_b8;
            }
            lVar8 = FUN_1417894a0(0,pwVar14);
            *param_1 = lVar8;
          }
        }
      }
      if (iVar13 != 0) {
        iVar4 = (int)param_2[1];
        if (iVar4 - iVar13 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)*param_2,(void *)(*param_2 + (longlong)iVar13 * 2),
                     (longlong)(iVar4 - iVar13) * 2);
          iVar4 = (int)param_2[1];
        }
        *(int *)(param_2 + 1) = iVar4 - iVar13;
      }
      if (local_b8 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      uVar16 = 0xffffffff;
      iVar4 = FUN_141592950(param_2,&DAT_144d2856c,0,0,0xffffffff);
    } while (iVar4 != -1);
  }
  return '\x01';
}



// FUNCTION 141796df0 FUN_141796df0 body=260 status=ok
// SIG undefined FUN_141796df0(void)

longlong FUN_141796df0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *local_18;
  int local_10;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (DAT_1469e7e10 != '\0') {
    return 0;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 != DAT_1468c21c0) goto LAB_141796e42;
  }
  bVar1 = true;
LAB_141796e42:
  if ((bVar1) && (cVar2 = IsGarbageCollecting(), cVar2 != '\0')) {
    return 0;
  }
  FSoftObjectPath::ToString(param_1,&local_18);
  puVar7 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar7 = local_18;
  }
  uVar4 = UObject::GetPrivateStaticClass();
  for (lVar5 = FUN_141799410(uVar4,0,puVar7,0); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    lVar6 = UObjectRedirector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free(local_18);
  }
  return lVar5;
}



// FUNCTION 141796f00 FUN_141796f00 body=561 status=ok
// SIG undefined FUN_141796f00(void)

void FUN_141796f00(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  iVar1 = (int)param_1[5];
  puStack_28 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar1 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puStack_28;
    }
    uVar3 = *puVar9;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar3 == 0) {
      lVar6 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar8 = local_78 + 1;
      bVar2 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar8;
      if (bVar2) goto LAB_141796fc1;
      uVar3 = puVar9[lVar6 + 1];
    }
    uStack_74 = -uVar3 & uVar3;
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
    if (iVar1 < local_68._4_4_) {
LAB_141796fc1:
      local_68._4_4_ = iVar1;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(param_1,0);
  local_10._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar2 = local_68._4_4_ < (int)param_1[5];
  local_48 = param_1;
  local_38 = param_1;
  local_10 = param_1;
  local_68 = puStack_28;
  if (bVar2) {
    do {
      lVar5 = *(longlong *)(*param_1 + (longlong)iStack_5c * 0x18);
      lVar6 = *param_1 + (longlong)iStack_5c * 0x18;
      *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) & 0x10000000;
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < (int)DAT_1469e91c4) {
        uVar7 = uVar3 & 0xffff;
        if ((int)uVar3 < 0) {
          uVar3 = uVar3 + 0xffff;
          uVar7 = uVar7 - 0x10000;
        }
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)uVar7 * 0x18;
      }
      else {
        lVar4 = 0;
      }
      *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) & 0x7fffff;
      *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | *(uint *)(lVar6 + 8);
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < (int)DAT_1469e91c4) {
        uVar7 = uVar3 & 0xffff;
        if ((int)uVar3 < 0) {
          uVar3 = uVar3 + 0xffff;
          uVar7 = uVar7 - 0x10000;
        }
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)uVar7 * 0x18;
      }
      else {
        lVar5 = 0;
      }
      *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | *(uint *)(lVar6 + 0xc);
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 141797140 SafeLoadError body=28 status=ok
// SIG undefined SafeLoadError(void)

void SafeLoadError(void)

{
  undefined8 uVar1;
  
  uVar1 = FCommandLine::Get();
  FParse::Param(uVar1,L"TREATLOADWARNINGSASERRORS");
  return;
}



// FUNCTION 141797160 SaveObjectFlags body=579 status=ok
// SIG undefined SaveObjectFlags(void)

void FScopedObjectFlagMarker::SaveObjectFlags(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_res18;
  longlong *local_78;
  undefined4 *local_70;
  longlong local_68;
  int local_60;
  longlong *local_58;
  longlong local_50;
  uint local_48;
  uint local_44;
  
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(param_1,0);
  uVar5 = UObject::GetPrivateStaticClass();
  FObjectIterator::FObjectIterator(&local_68,uVar5,0,0,0);
  if (local_58 == (longlong *)0x0) {
    return;
  }
  local_78 = &local_res18;
  local_70 = &local_res10;
  plVar11 = local_58;
  iVar10 = local_60;
  do {
    if (plVar11 == (longlong *)0x0) {
      local_res18 = 0;
    }
    else {
      local_res18 = *plVar11;
    }
    iVar1 = *(int *)(local_res18 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar9;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar7 = 0;
    }
    local_res14 = *(undefined4 *)(lVar7 + 8);
    local_res10 = *(undefined4 *)(local_res18 + 8);
    FUN_14177fc40(param_1,local_res8,&local_78,0);
LAB_141797290:
    do {
      do {
        iVar10 = iVar10 + 1;
        if (*(int *)(local_68 + 0x24) <= iVar10) {
          return;
        }
        while( true ) {
          uVar9 = iVar10 >> 0x1f & 0xffff;
          uVar4 = iVar10 + uVar9;
          lVar6 = (longlong)(int)((uVar4 & 0xffff) - uVar9);
          lVar7 = *(longlong *)(*(longlong *)(local_68 + 0x10) + (longlong)((int)uVar4 >> 0x10) * 8)
          ;
          lVar2 = *(longlong *)(lVar7 + lVar6 * 0x18);
          plVar11 = (longlong *)(lVar7 + lVar6 * 0x18);
          if (lVar2 != 0) break;
          iVar10 = iVar10 + 1;
          if (*(int *)(local_68 + 0x24) <= iVar10) {
            return;
          }
        }
      } while ((*(uint *)(lVar2 + 8) & local_48) != 0);
      lVar7 = UObject::GetPrivateStaticClass();
      if (local_50 != lVar7) {
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(local_50 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(local_50 + 0x90) * 8) != local_50 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_141797290;
      }
      uVar4 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar4 < (int)DAT_1469e91c4) {
        uVar8 = uVar4 & 0xffff;
        uVar9 = uVar4;
        if ((int)uVar4 < 0) {
          uVar9 = uVar4 + 0xffff;
          uVar8 = (uVar4 & 0xffff) - 0x10000;
        }
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                (longlong)(int)uVar8 * 0x18;
      }
      else {
        lVar7 = 0;
      }
    } while ((*(uint *)(lVar7 + 8) & local_44) != 0);
  } while( true );
}



// FUNCTION 1417973b0 SaveToTransactionBuffer body=116 status=ok
// SIG undefined SaveToTransactionBuffer(void)

undefined8 SaveToTransactionBuffer(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar2 = param_1;
  while (lVar1 = lVar3, lVar1 != 0) {
    lVar2 = lVar1;
    lVar3 = *(longlong *)(lVar1 + 0x20);
  }
  if (((DAT_1468b6150 != (longlong *)0x0) && ((*(uint *)(param_1 + 8) >> 3 & 1) != 0)) &&
     ((*(uint *)(lVar2 + 0x50) & 0x300000) == 0)) {
    if (param_2 != '\0') {
      UObjectBaseUtility::MarkPackageDirty(param_1);
    }
    (**(code **)(*DAT_1468b6150 + 0x18))(DAT_1468b6150,param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 141797430 FUN_141797430 body=480 status=ok
// SIG undefined FUN_141797430(void)

void FUN_141797430(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong local_48 [2];
  longlong local_38 [2];
  longlong local_28 [2];
  
  if (param_3 == '\x02') {
    puVar2 = (undefined8 *)FFrame::GetStackTrace(param_1,local_28);
    puVar4 = &DAT_143f3eda8;
    if (*(int *)(puVar2 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar2;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48);
    puVar2 = (undefined8 *)UObjectBaseUtility::GetFullName(*(longlong *)(param_1 + 0x10),local_38,0)
    ;
    if (*(int *)(puVar2 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar2;
    }
    puVar2 = (undefined8 *)
             UObjectBaseUtility::GetFullName(*(undefined8 *)(param_1 + 0x18),local_48,0);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar2;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x1f0,L"%s\r\n\t%s\r\n\t%s:%04X\r\n\t%s",param_2,puVar3,puVar6,
               *(longlong *)(param_1 + 0x20) - lVar1,puVar5);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    puVar2 = (undefined8 *)FFrame::GetStackTrace(param_1,local_48);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar2;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48);
    puVar2 = (undefined8 *)UObjectBaseUtility::GetFullName(*(longlong *)(param_1 + 0x10),local_38,0)
    ;
    if (*(int *)(puVar2 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar2;
    }
    puVar2 = (undefined8 *)
             UObjectBaseUtility::GetFullName(*(undefined8 *)(param_1 + 0x18),local_28,0);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar4 = (undefined2 *)*puVar2;
    }
    FDebug::AssertFailed
              (&DAT_144d28f36,"Unknown",0x1f0,L"%s\r\n\t%s\r\n\t%s:%04X\r\n\t%s",param_2,puVar4,
               puVar6,*(longlong *)(param_1 + 0x20) - lVar1,puVar5);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141797610 FUN_141797610 body=26 status=ok
// SIG undefined FUN_141797610(void)

undefined8 FUN_141797610(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  return 1;
}



// FUNCTION 141797630 FUN_141797630 body=377 status=ok
// SIG undefined FUN_141797630(void)

undefined8 FUN_141797630(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  void *_Src;
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  int iVar5;
  longlong local_res10;
  void *local_48;
  int local_40;
  int local_3c;
  void *local_38;
  undefined8 local_30;
  
  FSoftObjectPath::ToString(param_1,&local_48);
  pvVar4 = (void *)0x0;
  iVar2 = 0;
  iVar5 = 0;
  if (*param_2 == 5) {
    local_res10 = 0;
    (**(code **)(*param_3 + 0x30))(param_3,&local_res10);
    if (local_res10 != 0) {
      local_38 = (void *)0x0;
      local_30 = 0;
      UObjectBaseUtility::GetPathName(local_res10,0,&local_38);
      if (local_48 != (void *)0x0) {
        FMemory::Free();
      }
      uVar1 = 1;
      pvVar4 = local_38;
      iVar5 = local_30._4_4_;
      iVar2 = (int)local_30;
      goto LAB_141797760;
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
  }
  else {
    local_res10 = 0xd;
    if (*param_2 != 0xd) {
      uVar1 = 0;
      pvVar4 = local_48;
      iVar5 = local_3c;
      iVar2 = local_40;
      goto LAB_141797760;
    }
    local_38 = (void *)0x0;
    local_30 = 0;
    FUN_14158ce90(param_3,&local_38);
    _Src = local_38;
    lVar3 = (longlong)(int)local_30;
    local_40 = (int)local_30;
    if (((int)local_30 != 0) || (pvVar4 = local_48, local_3c != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_30 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar3 * 2);
      pvVar4 = local_48;
      iVar5 = local_3c;
    }
    iVar2 = local_40;
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
      uVar1 = 1;
      goto LAB_141797760;
    }
  }
  uVar1 = 1;
LAB_141797760:
  if ((*(byte *)(param_3 + 5) & 1) == 0) {
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
  }
  else {
    local_30 = CONCAT44(iVar5,iVar2);
    local_38 = pvVar4;
    FUN_1417978e0(param_1,&local_38);
  }
  return uVar1;
}



// FUNCTION 1417977c0 FUN_1417977c0 body=280 status=ok
// SIG undefined FUN_1417977c0(void)

void FUN_1417977c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  if (((*(byte *)(param_2 + 5) & 1) == 0) || (0x201 < (int)param_2[8])) {
    (**(code **)(*param_2 + 0x40))(param_2,param_1);
    FUN_14158ce90(param_2,param_1 + 8);
  }
  else {
    local_28 = 0;
    local_20 = 0;
    FUN_14158ce90(param_2,&local_28);
    if ((int)param_2[8] < 0x1e4) {
      plVar1 = (longlong *)FPackageName::GetNormalizedObjectPath(&local_18,&local_28);
      if (&local_28 != plVar1) {
        if (local_28 != 0) {
          FMemory::Free();
        }
        local_28 = *plVar1;
        *plVar1 = 0;
        local_20 = plVar1[1];
        plVar1[1] = 0;
      }
      if (local_18 != 0) {
        FMemory::Free();
      }
    }
    local_18 = local_28;
    local_10 = (undefined4)local_20;
    local_c = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    FUN_1417978e0(param_1,&local_18);
    if (local_28 != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 1417978e0 FUN_1417978e0 body=828 status=ok
// SIG undefined FUN_1417978e0(void)

void FUN_1417978e0(undefined8 *param_1,longlong *param_2)

{
  wchar_t **ppwVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  short *psVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  wchar_t *pwVar15;
  int iVar16;
  short *psVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  wchar_t *pwVar20;
  short *psVar21;
  uint uVar22;
  wchar_t *pwVar23;
  short *local_res10;
  wchar_t *local_48;
  undefined8 local_40;
  
  psVar21 = &DAT_143f3eda8;
  pwVar23 = (wchar_t *)0x0;
  local_res10 = (short *)((ulonglong)local_res10 & 0xffffffff00000000);
  pwVar15 = local_48;
  pwVar20 = pwVar23;
  if (1 < (int)param_2[1]) {
    local_48 = (wchar_t *)0x0;
    local_40 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pwVar15 = local_48;
    FGenericPlatformString::Memcpy(local_48,L"None",10);
    pwVar18 = L"";
    if ((uint)local_40 != 0) {
      pwVar18 = pwVar15;
    }
    if ((int)param_2[1] == 0) {
      psVar8 = &DAT_143f3eda8;
    }
    else {
      psVar8 = (short *)*param_2;
    }
    pwVar20 = (wchar_t *)0x1;
    lVar19 = (longlong)pwVar18 - (longlong)psVar8;
    do {
      sVar3 = *psVar8;
      sVar4 = *(short *)((longlong)psVar8 + lVar19);
      if (sVar3 != sVar4) break;
      psVar8 = psVar8 + 1;
    } while (sVar4 != 0);
    if (sVar3 != sVar4) {
      bVar5 = false;
      goto LAB_141797998;
    }
  }
  bVar5 = true;
LAB_141797998:
  if ((pwVar20 != (wchar_t *)0x0) && (pwVar15 != (wchar_t *)0x0)) {
    FMemory::Free(pwVar15);
  }
  if (bVar5) {
    local_res10 = (short *)0x0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    if ((*(int *)((longlong)param_1 + 0x14) < 0) && (*(int *)((longlong)param_1 + 0x14) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 1,0);
    }
    if ((undefined2 *)param_1[1] != (undefined2 *)0x0) {
      *(undefined2 *)param_1[1] = 0;
    }
  }
  else {
    cVar6 = FPackageName::IsShortPackageName(param_2);
    if (cVar6 == '\0') {
      if (*(short *)*param_2 != 0x2f) {
        uVar9 = FPackageName::ExportTextPathToObjectPath(&local_48,param_2);
        FString::operator=(param_2,uVar9);
        if (local_48 != (wchar_t *)0x0) {
          FMemory::Free();
        }
      }
      psVar8 = (short *)*param_2;
      iVar13 = (int)param_2[1];
      for (psVar17 = psVar8; psVar17 != psVar8 + iVar13; psVar17 = psVar17 + 1) {
        if (*psVar17 == 0x3a) {
          iVar16 = (int)((longlong)psVar17 - (longlong)psVar8 >> 1);
          goto LAB_141797a54;
        }
      }
      iVar16 = -1;
LAB_141797a54:
      if (iVar16 == -1) {
        if (iVar13 != 0) {
          psVar21 = psVar8;
        }
        FName::FName(&local_res10,psVar21,1);
        *param_1 = local_res10;
        *(undefined4 *)(param_1 + 2) = 0;
        if (*(int *)((longlong)param_1 + 0x14) != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 1,0);
        }
      }
      else {
        uVar11 = iVar13 - 1;
        if (iVar13 == 0) {
          uVar11 = 0;
        }
        uVar2 = iVar16 + 0x80000000;
        uVar22 = uVar11;
        if (iVar16 + 1U < uVar11) {
          uVar22 = iVar16 + 1U;
        }
        uVar12 = uVar22;
        if ((uVar22 <= uVar2) && (uVar12 = uVar11, uVar2 < uVar11)) {
          uVar12 = uVar2;
        }
        local_48 = (wchar_t *)0x0;
        local_res10 = &DAT_143f3eda8;
        if (iVar13 != 0) {
          local_res10 = psVar8;
        }
        iVar13 = uVar12 - uVar22;
        uVar11 = iVar13 + 1;
        if (iVar13 == 0) {
          uVar11 = 0;
        }
        local_40 = (ulonglong)uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          pwVar23 = local_48;
          uVar11 = (uint)local_40;
          if (0 < (int)(uint)local_40) {
            wcsncpy(local_48,local_res10 + (int)uVar22,(longlong)iVar13);
            pwVar23[iVar13] = L'\0';
          }
        }
        ppwVar1 = (wchar_t **)(param_1 + 1);
        if (ppwVar1 == &local_48) {
          if (pwVar23 != (wchar_t *)0x0) {
            FMemory::Free(pwVar23);
          }
        }
        else {
          if (*ppwVar1 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          *ppwVar1 = pwVar23;
          *(uint *)(param_1 + 2) = uVar11;
          *(undefined4 *)((longlong)param_1 + 0x14) = local_40._4_4_;
        }
        iVar7 = (int)param_2[1];
        iVar13 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar13 = 0;
        }
        iVar14 = iVar13 - iVar16;
        if (iVar14 != 0) {
          iVar10 = (iVar7 - iVar14) - iVar16;
          if (iVar10 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar16 * 2),
                       (void *)(*param_2 + (longlong)iVar13 * 2),(longlong)iVar10 * 2);
            iVar7 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = iVar7 - iVar14;
          TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_2);
          iVar7 = (int)param_2[1];
        }
        if (iVar7 != 0) {
          psVar21 = (short *)*param_2;
        }
        FName::FName(&local_res10,psVar21,1);
        *param_1 = local_res10;
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141797c20 SetScriptMaximumLoopIterations body=18 status=ok
// SIG undefined SetScriptMaximumLoopIterations(void)

void FBlueprintCoreDelegates::SetScriptMaximumLoopIterations(int param_1)

{
  if (0 < param_1) {
    DAT_1464b56e0 = param_1;
  }
  return;
}



// FUNCTION 141797c40 FUN_141797c40 body=62 status=ok
// SIG undefined FUN_141797c40(void)

ulonglong FUN_141797c40(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (((*(byte *)(param_1 + 5) & 1) != 0) && ((*(byte *)(param_1 + 5) & 0x40) != 0)) {
    uVar1 = (**(code **)(*param_1 + 0x88))();
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0x98) == 1)) {
      return (ulonglong)(*(uint *)(uVar1 + 0x290) >> 0x14) & 0xffffffffffffff01;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141797c80 FUN_141797c80 body=397 status=ok
// SIG undefined FUN_141797c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_141797c80(undefined8 param_1,longlong param_2,void *param_3,longlong param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  undefined1 *_Dst;
  undefined1 *puVar11;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined1 auStack_30 [8];
  
  puVar10 = auStack_58;
  local_38 = DAT_1468387a8 ^ (ulonglong)&local_38;
  iVar3 = *(int *)(param_4 + 0x40);
  _Dst = (undefined1 *)0x0;
  if (iVar3 != 0) {
    uVar8 = (longlong)(iVar3 + 0xf) + 0xf;
    if (uVar8 <= (ulonglong)(longlong)(iVar3 + 0xf)) {
      uVar8 = 0xffffffffffffff0;
    }
    puVar10 = auStack_58 + -(uVar8 & 0xfffffffffffffff0);
    _Dst = auStack_30 + -(uVar8 & 0xfffffffffffffff0);
  }
  *(undefined8 *)(puVar10 + -8) = 0x141797d05;
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar3);
  pcVar4 = *(char **)(param_2 + 0x20);
  lVar5 = *(longlong *)(param_4 + 0x38);
  cVar1 = *pcVar4;
  while (cVar1 != '\x16') {
    *(undefined8 *)(param_2 + 0x38) = 0;
    puVar11 = (undefined1 *)0x0;
    if ((*(uint *)(lVar5 + 0x38) >> 8 & 1) == 0) {
      puVar11 = _Dst + *(int *)(lVar5 + 0x44);
    }
    bVar2 = **(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    pcVar7 = (code *)(&DAT_1469e7e20)[bVar2];
    *(undefined8 *)(puVar10 + -8) = 0x141797d56;
    (*pcVar7)(uVar6,param_2,puVar11);
    pcVar4 = *(char **)(param_2 + 0x20);
    lVar5 = *(longlong *)(lVar5 + 0x28);
    cVar1 = *pcVar4;
  }
  *(char **)(param_2 + 0x20) = pcVar4 + 1;
  for (plVar9 = *(longlong **)(param_4 + 0x68); plVar9 != (longlong *)0x0;
      plVar9 = (longlong *)plVar9[0xc]) {
    if ((((ulonglong)plVar9[7] >> 8 & 1) == 0) && ((~(byte)((ulonglong)plVar9[7] >> 0x24) & 1) != 0)
       ) {
      pcVar7 = *(code **)(*plVar9 + 0x328);
      *(undefined8 *)(puVar10 + -8) = 0x141797d9b;
      (*pcVar7)(plVar9);
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x141797dac;
  plVar9 = (longlong *)UFunction::GetReturnProperty(param_4);
  if (plVar9 != (longlong *)0x0) {
    if ((~(byte)((ulonglong)plVar9[7] >> 0x24) & 1) != 0) {
      pcVar7 = *(code **)(*plVar9 + 0x328);
      *(undefined8 *)(puVar10 + -8) = 0x141797dd3;
      (*pcVar7)(plVar9);
    }
    iVar3 = *(int *)((longlong)plVar9 + 0x34);
    lVar5 = plVar9[6];
    *(undefined8 *)(puVar10 + -8) = 0x141797de7;
    _guard_xfg_dispatch_icall_nop(param_3,0,(longlong)(iVar3 * (int)lVar5));
  }
  *(undefined8 *)(puVar10 + -8) = 0x141797df3;
  return;
}



// FUNCTION 141797e10 FUN_141797e10 body=1986 status=ok
// SIG undefined FUN_141797e10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_141797e10(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,uint param_5,
             char param_6,undefined1 *param_7)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  uint uVar19;
  LARGE_INTEGER LVar20;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  uint local_res20;
  ulonglong in_stack_ffffffffffffff48;
  ulonglong in_stack_ffffffffffffff50;
  ulonglong in_stack_ffffffffffffff58;
  longlong local_90;
  LARGE_INTEGER local_88;
  undefined8 local_80;
  undefined2 *local_78;
  int local_70;
  longlong local_68 [2];
  longlong local_58 [3];
  
  uVar19 = (uint)param_4;
  plVar13 = (longlong *)0x0;
  uVar3 = param_4 >> 4;
  param_4 = param_4 & 0xffffffff;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res20 = uVar19;
  if ((uVar3 & 1) != 0) {
    local_res18 = param_3;
    plVar9 = (longlong *)UClass::GetDefaultObjectName(param_1,&local_90);
    local_res20 = uVar19 & 0xffffcfff;
    param_4 = (ulonglong)local_res20;
    param_3 = *plVar9;
  }
  local_90 = 0;
  local_res18 = param_3;
  if (param_3 == 0) {
    local_res8 = 0;
    plVar9 = (longlong *)FUN_141791c20(&local_res8,param_2,param_1,0);
    local_res18 = *plVar9;
    plVar9 = plVar13;
  }
  else {
    plVar9 = (longlong *)
             StaticFindObjectFastInternal
                       (0,param_2,param_3,1,in_stack_ffffffffffffff48 & 0xffffffffffffff00,
                        in_stack_ffffffffffffff50 & 0xffffffff00000000,
                        in_stack_ffffffffffffff58 & 0xffffffff00000000);
    if (plVar9 != (longlong *)0x0) {
      for (lVar14 = plVar9[2]; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x30)) {
        if (lVar14 == param_1) goto LAB_1417980ea;
      }
      if (param_2 == 0) {
        plVar17 = plVar13;
        LVar20.QuadPart = (LONGLONG)&DAT_144d28f44;
      }
      else {
        local_88.QuadPart = 0;
        local_80 = 0;
        UObjectBaseUtility::GetPathName(param_2,0,&local_88);
        plVar17 = (longlong *)0x1;
        LVar20.QuadPart = (LONGLONG)&DAT_143f3eda8;
        if ((int)local_80 != 0) {
          LVar20 = local_88;
        }
      }
      puVar10 = (undefined8 *)UObjectBaseUtility::GetFullName(plVar9,local_58,0);
      if (*(int *)(puVar10 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*puVar10;
      }
      puVar10 = (undefined8 *)FName::ToString(&local_res18,local_68);
      if (*(int *)(puVar10 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar10;
      }
      local_90 = *(longlong *)(local_res8 + 0x18);
      FName::ToString(&local_90,&local_78);
      puVar12 = &DAT_143f3eda8;
      if (local_70 != 0) {
        puVar12 = local_78;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x9a1,
                 L"Objects have the same fully qualified name but different paths.\n\tNew Object: %s %s.%s\n\tExisting Object: %s"
                 ,puVar12,LVar20.QuadPart,puVar15,puVar16);
      if (local_78 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if ((plVar17 != (longlong *)0x0) && ((undefined2 *)local_88.QuadPart != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      bVar5 = false;
      if (local_res10 == 0) {
        LVar20.QuadPart = (LONGLONG)&DAT_144d28f54;
      }
      else {
        local_88.QuadPart = 0;
        local_80 = 0;
        bVar5 = true;
        UObjectBaseUtility::GetPathName(local_res10,0,&local_88);
        LVar20.QuadPart = (LONGLONG)&DAT_143f3eda8;
        if ((int)local_80 != 0) {
          LVar20 = local_88;
        }
      }
      puVar10 = (undefined8 *)UObjectBaseUtility::GetFullName(plVar9,local_68,0);
      if (*(int *)(puVar10 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*puVar10;
      }
      puVar10 = (undefined8 *)FName::ToString(&local_res18,local_58);
      if (*(int *)(puVar10 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar10;
      }
      local_90 = *(longlong *)(local_res8 + 0x18);
      FName::ToString(&local_90,&local_78);
      puVar12 = &DAT_143f3eda8;
      if (local_70 != 0) {
        puVar12 = local_78;
      }
      FDebug::AssertFailed
                ((longlong)
                 L"Calling StaticLoadObject during PostLoad may result in hitches during streaming.  [ObjectClass: %ls  InName: %ls  Filename: %ls]"
                 + 0x103,"Unknown",0x9a1,
                 L"Objects have the same fully qualified name but different paths.\n\tNew Object: %s %s.%s\n\tExisting Object: %s"
                 ,puVar12,LVar20.QuadPart,puVar15,puVar16);
      if (local_78 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if ((bVar5) && ((undefined2 *)local_88.QuadPart != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      param_4 = (ulonglong)local_res20;
      param_2 = local_res10;
      param_1 = local_res8;
    }
  }
LAB_1417980ea:
  iVar2 = *(int *)(param_1 + 0x40);
  lVar14 = (longlong)iVar2;
  bVar5 = false;
  local_res8._0_4_ = -1;
  local_res20 = local_res20 & 0xffffff00;
  local_90 = 0;
  local_res10 = CONCAT44(local_res10._4_4_,iVar2);
  if (plVar9 != (longlong *)0x0) {
    DAT_1469e9058 = (**(code **)(*plVar9 + 0x168))(plVar9);
    local_90 = FUN_1417a53c0(plVar9);
    local_res8._0_4_ = FUN_1417a5490(plVar9);
    iVar2 = *(int *)((longlong)plVar9 + 0xc);
    plVar17 = plVar13;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar11 = iVar2 >> 0x1f & 0xffff;
      uVar19 = iVar2 + uVar11;
      plVar17 = (longlong *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar19 >> 0x10) * 8) +
                (longlong)(int)((uVar19 & 0xffff) - uVar11) * 0x18);
    }
    param_5 = param_5 | *(uint *)(plVar17 + 1) & 0x42000000;
    if ((uVar3 & 1) == 0) {
      if (((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 4 & 1) == 0)) &&
         ((*(uint *)(param_2 + 8) >> 5 & 1) != 0)) {
        *(uint *)(plVar9 + 1) = *(uint *)(plVar9 + 1) | 0x40020;
      }
      if (((*(uint *)(plVar9 + 1) >> 0x12 & 1) == 0) &&
         (((param_6 == '\0' || (plVar9[4] == 0)) ||
          (((*(uint *)(plVar9[4] + 8) >> 4 & 1) == 0 &&
           (lVar14 = *(longlong *)(plVar9[2] + 0xf8), lVar18 = FUN_14178ca30(plVar9),
           lVar18 == lVar14)))))) {
        if ((*(byte *)((longlong)plVar9 + 10) & 1) == 0) {
          UObjectBaseUtility::GetFullName(plVar9,local_58,0);
          UObject::ConditionalBeginDestroy(plVar9);
          bVar5 = false;
          cVar7 = (**(code **)(*plVar9 + 0x90))(plVar9);
          if (cVar7 == '\0') {
            do {
              if ((!bVar5) && (DAT_1468b6169 == '\0')) {
                QueryPerformanceCounter(&local_88);
                bVar5 = true;
              }
              FUN_1416b1760(0);
              cVar7 = (**(code **)(*plVar9 + 0x90))(plVar9);
            } while (cVar7 == '\0');
            if (bVar5) {
              QueryPerformanceCounter(&local_88);
            }
          }
          UObject::ConditionalFinishDestroy(plVar9);
          if (local_58[0] != 0) {
            FMemory::Free();
          }
        }
        (**(code **)*plVar9)(plVar9);
        bVar4 = false;
        bVar5 = true;
        goto LAB_14179839e;
      }
    }
    else {
      *(uint *)(plVar9 + 1) = *(uint *)(plVar9 + 1) | (uint)param_4;
      if (iVar2 < (int)DAT_1469e91c4) {
        uVar11 = iVar2 >> 0x1f & 0xffff;
        uVar19 = iVar2 + uVar11;
        puVar1 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar19 >> 0x10) * 8) + 8 +
                         (longlong)(int)((uVar19 & 0xffff) - uVar11) * 0x18);
        *puVar1 = *puVar1 | param_5;
        *(uint *)(plVar9 + 1) = *(uint *)(plVar9 + 1) & 0xffffcfff;
      }
      else {
        _DAT_00000008 = _DAT_00000008 | param_5;
        *(uint *)(plVar9 + 1) = *(uint *)(plVar9 + 1) & 0xffffcfff;
      }
    }
    bVar5 = false;
    bVar4 = true;
    local_res20 = CONCAT31(local_res20._1_3_,1);
    goto LAB_14179839e;
  }
  if ((DAT_1464aaa49 == '\0') ||
     ((ulonglong)(DAT_1469e8ef0 + DAT_1469e8ef8) <
      (DAT_1469e8f00 + 0xf & 0xfffffffffffffff0) + lVar14)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (DAT_1464aaa49 == '\0') {
    if (bVar4) goto LAB_14179818f;
LAB_141798173:
    plVar9 = (longlong *)FMemory::Malloc((longlong)(int)(iVar2 + 0xfU & 0xfffffff0));
  }
  else {
    if (!bVar4) {
      DAT_1469e8f08 = (DAT_1469e8f08 + 0xf & 0xfffffffffffffff0) + lVar14;
      goto LAB_141798173;
    }
LAB_14179818f:
    plVar9 = (longlong *)(DAT_1469e8f00 + 0xf & 0xfffffffffffffff0);
    DAT_1469e8f00 = (longlong)plVar9 + lVar14;
    if (DAT_1469e8f08 < DAT_1469e8f00) {
      bVar4 = false;
      DAT_1469e8f08 = DAT_1469e8f00;
      goto LAB_14179839e;
    }
  }
  bVar4 = false;
LAB_14179839e:
  if ((((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 5 & 1) != 0)) && ((param_4 & 0x40) == 0)) &&
     ((*(uint *)(param_2 + 8) >> 6 & 1) == 0)) {
    param_4 = (ulonglong)((uint)param_4 | 0x40020);
  }
  uVar19 = (uint)param_4;
  if ((((uVar3 & 1) == 0) && ((*(uint *)(param_1 + 0xb4) >> 3 & 1) != 0)) &&
     ((param_4 >> 5 & 1) == 0)) {
    uVar19 = uVar19 | 0x40;
  }
  if (bVar4) {
    *(uint *)(plVar9 + 1) = *(uint *)(plVar9 + 1) | uVar19;
    iVar2 = *(int *)((longlong)plVar9 + 0xc);
    plVar17 = plVar13;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar11 = iVar2 >> 0x1f & 0xffff;
      uVar19 = iVar2 + uVar11;
      plVar17 = (longlong *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar19 >> 0x10) * 8) +
                (longlong)(int)((uVar19 & 0xffff) - uVar11) * 0x18);
    }
    *(uint *)(plVar17 + 1) = *(uint *)(plVar17 + 1) | param_5;
  }
  else {
    _guard_xfg_dispatch_icall_nop(plVar9,0,(longlong)(int)local_res10);
    *plVar9 = (longlong)&PTR_FUN_144d1a9e8;
    *(uint *)(plVar9 + 1) = uVar19 | 0x200;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 0xffffffff;
    plVar9[2] = param_1;
    plVar9[3] = 0;
    plVar9[4] = param_2;
    FUN_141782fa0(plVar9,local_res18,param_5);
  }
  lVar14 = local_90;
  if (bVar5) {
    lVar18 = (longlong)(int)local_res8;
    FUN_1417a7660(plVar9,local_90,(int)local_res8,0);
    if (lVar14 != 0) {
      *(longlong **)(lVar18 * 0x88 + 0x48 + *(longlong *)(lVar14 + 0x18)) = plVar9;
    }
  }
  cVar7 = (*(code *)PTR_CanBeUsedOnAnyThread_1464a8df0)();
  if (cVar7 == '\0') {
    iVar2 = *(int *)((longlong)plVar9 + 0xc);
    plVar17 = plVar13;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar11 = iVar2 >> 0x1f & 0xffff;
      uVar19 = iVar2 + uVar11;
      plVar17 = (longlong *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar19 >> 0x10) * 8) +
                (longlong)(int)((uVar19 & 0xffff) - uVar11) * 0x18);
    }
    *(uint *)(plVar17 + 1) = *(uint *)(plVar17 + 1) & 0xf7ffffff;
    iVar2 = *(int *)((longlong)plVar9 + 0xc);
    plVar17 = plVar13;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar11 = iVar2 >> 0x1f & 0xffff;
      uVar19 = iVar2 + uVar11;
      plVar17 = (longlong *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar19 >> 0x10) * 8) +
                (longlong)(int)((uVar19 & 0xffff) - uVar11) * 0x18);
    }
    if (((*(uint *)(plVar17 + 1) >> 0x1a & 1) != 0) &&
       (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
      iVar2 = *(int *)((longlong)plVar9 + 0xc);
      if (iVar2 < (int)DAT_1469e91c4) {
        uVar11 = iVar2 >> 0x1f & 0xffff;
        uVar19 = iVar2 + uVar11;
        plVar13 = (longlong *)
                  (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar19 >> 0x10) * 8) +
                  (longlong)(int)((uVar19 & 0xffff) - uVar11) * 0x18);
      }
      *(uint *)(plVar13 + 1) = *(uint *)(plVar13 + 1) & 0xfbffffff;
    }
  }
  else {
    uVar6 = (undefined1)local_res20;
    FUN_1416ff930(plVar9,(undefined1)local_res20);
    local_res20._0_1_ = uVar6;
  }
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = (undefined1)local_res20;
  }
  return plVar9;
}



// FUNCTION 1417985e0 FUN_1417985e0 body=445 status=ok
// SIG undefined FUN_1417985e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1417985e0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,longlong param_6,undefined1 param_7,undefined8 param_8,char param_9)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  undefined1 local_1d0;
  char *local_1c8;
  char local_1b8 [16];
  code *local_1a8;
  char *pcStack_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined1 local_188;
  undefined2 local_187;
  undefined8 local_180;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  if ((*(uint *)(param_1 + 0xb4) & 0x10000080) == 0) {
LAB_141798664:
    local_1d0 = 0;
  }
  else {
    if (param_6 != 0) {
      local_1a8 = (code *)0x0;
      if (param_3 == 0) goto LAB_141798664;
      if (param_9 == '\0') {
        local_1d8 = local_1d8 & 0xffffff00;
        lVar2 = FUN_14178cc10();
        if (param_6 != lVar2) goto LAB_141798664;
      }
    }
    local_1d0 = 1;
  }
  local_1c8 = local_1b8;
  local_1b8[0] = '\0';
  local_1d8 = param_5;
  uVar3 = FUN_141797e10(param_1,param_2,param_3,param_4);
  if (local_1b8[0] == '\0') {
    local_50 = local_50 & 0xfe;
    pcStack_1a0 = local_1b8 + 1;
    local_188 = param_7;
    local_180 = param_8;
    local_1a8 = FUN_1406ddef0;
    local_190 = param_6;
    local_187 = 0x101;
    local_f8 = 0;
    local_f0 = 0;
    local_68 = 0;
    local_60 = 0;
    local_1b8[1] = 0;
    local_198 = uVar3;
    lVar2 = FUN_1415d8310(&local_1a8,&DAT_14622e6dc);
    *(int *)(lVar2 + 0x5c) = *(int *)(lVar2 + 0x5c) + 1;
    local_58 = *(undefined8 *)(lVar2 + 0x60);
    *(undefined8 *)(lVar2 + 0x60) = local_198;
    iVar1 = *(int *)(lVar2 + 0x20);
    *(int *)(lVar2 + 0x20) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x24) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(lVar2 + 0x18),iVar1);
    }
    *(undefined8 **)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar1 * 8) = &local_198;
    (**(code **)(param_1 + 0x98))(&local_198);
    FUN_141781fc0(&local_198);
  }
  return uVar3;
}



// FUNCTION 1417987a0 FUN_1417987a0 body=496 status=ok
// SIG undefined FUN_1417987a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1417987a0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5,int param_6,undefined4 param_7)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iStackX_1c;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined4 local_170;
  undefined4 local_168;
  char local_158 [16];
  code *local_148;
  char *pcStack_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  int local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  cVar1 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
  if (cVar1 == '\0') {
    pcStack_140 = local_158;
    local_148 = FUN_1406ddef0;
    local_158[0] = cVar1;
    lVar2 = FUN_1415d8310(&local_148,&DAT_14622e6dc);
    if ((*(int *)(lVar2 + 0x30) < 1) && ((*(uint *)(param_1 + 8) >> 4 & 1) != 0)) {
      ResetLoaders(param_2);
    }
  }
  local_128 = 0;
  local_118 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_138 = param_1;
  local_130 = param_2;
  uVar4 = param_3;
  if ((((int)param_3 == 0) &&
      (iStackX_1c = (int)((ulonglong)param_3 >> 0x20), uVar4 = param_3, iStackX_1c == 0)) &&
     (uVar4 = local_128, *(longlong *)(param_1 + 0x20) != param_2)) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = UObject::GetPrivateStaticClass();
    local_168 = 0;
    local_170 = 0;
    local_178 = 0;
    lVar2 = FUN_141799680(uVar3,param_2,uVar4,0);
    uVar4 = local_128;
    if (lVar2 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
  }
  local_128 = uVar4;
  if (param_5 == 0) {
    local_100 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_100 = param_5;
  }
  local_11c = param_7;
  if (param_6 == 2) {
    local_110 = 0x400000;
  }
  local_108 = param_6;
  local_120 = param_4;
  uVar4 = FUN_141798990(&local_138);
  local_58 = 0;
  if (local_60 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&uStack_a0);
  local_b0 = 0;
  if (local_b8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_f8);
  return uVar4;
}



// FUNCTION 141798990 FUN_141798990 body=2673 status=ok
// SIG undefined FUN_141798990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141798990(longlong *param_1)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  code **ppcVar5;
  uint uVar6;
  int iVar7;
  BOOL BVar8;
  longlong lVar9;
  longlong lVar10;
  code **ppcVar11;
  longlong lVar12;
  code **ppcVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint *puVar17;
  code **ppcVar18;
  code **ppcVar19;
  undefined1 auStack_488 [32];
  longlong local_468;
  code **local_460;
  undefined4 local_458;
  undefined1 *local_450;
  uint local_448;
  undefined1 *local_440;
  longlong local_438;
  undefined1 local_428 [4];
  uint local_424;
  int local_420;
  int local_41c;
  code **local_418;
  code ***local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  uint uStack_3f0;
  int iStack_3ec;
  undefined1 local_3e8 [16];
  code **local_3d8;
  undefined2 local_3d0;
  longlong local_3c8;
  code *local_3b8;
  code ***pppcStack_3b0;
  undefined1 local_3a8 [24];
  code **local_390;
  code ***pppcStack_388;
  uint *puStack_380;
  undefined1 auStack_378 [16];
  undefined8 local_368;
  undefined1 local_358 [44];
  int local_32c;
  undefined **local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  undefined8 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_260;
  undefined4 local_258;
  _RTL_CRITICAL_SECTION local_250;
  code *local_228;
  code **ppcStack_220;
  undefined1 local_218 [17];
  undefined2 local_207;
  undefined1 local_200 [64];
  longlong local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b0 [64];
  longlong local_170;
  undefined4 local_168;
  undefined1 local_158 [192];
  longlong local_98;
  int local_90;
  undefined1 local_88 [64];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_488;
  FObjectInstancingGraph::FObjectInstancingGraph(local_218,0);
  if (DAT_1468c2177 == '\0') {
    *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xffffffef;
    *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) & 0xbfffffff;
  }
  lVar12 = *param_1;
  ppcVar18 = (code **)(param_1 + 8);
  local_207 = 0x100;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(ppcVar18,&local_424,lVar12);
  ppcVar11 = (code **)0x0;
  if (((local_424 == 0xffffffff) || (*ppcVar18 + (longlong)(int)local_424 * 0x18 == (code *)0x0)) ||
     (lVar9 = *(longlong *)(*ppcVar18 + (longlong)(int)local_424 * 0x18 + 8), local_3c8 = lVar9,
     lVar9 == 0)) {
    lVar9 = FUN_14178ca30(lVar12);
    lVar12 = param_1[7];
    local_460 = ppcVar11;
    if (*(longlong *)(lVar9 + 0x10) == lVar12) {
      local_460 = (code **)FUN_14178ca30(*param_1);
      lVar12 = param_1[7];
    }
    iVar2 = *(int *)(*param_1 + 0xc);
    ppcVar13 = ppcVar11;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar14 = iVar2 >> 0x1f & 0xffff;
      uVar6 = iVar2 + uVar14;
      ppcVar13 = (code **)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                          (longlong)(int)((uVar6 & 0xffff) - uVar14) * 0x18);
    }
    local_448 = local_448 & 0xffffff00;
    local_450 = local_218;
    local_458 = CONCAT31(local_458._1_3_,1);
    local_468 = CONCAT44(local_468._4_4_,
                         *(uint *)((longlong)param_1 + 0x24) |
                         *(uint *)((longlong)param_1 + 0x1c) & *(uint *)(ppcVar13 + 1));
    lVar9 = FUN_1417985e0(lVar12,param_1[1],param_1[2],
                          *(uint *)(param_1 + 4) | *(uint *)(param_1 + 3) & *(uint *)(*param_1 + 8))
    ;
  }
  local_3c8 = lVar9;
  FLargeMemoryData::FLargeMemoryData(local_3a8,0);
  local_2a0 = 0;
  local_2a8 = &PTR__scalar_deleting_destructor__144d31120;
  local_298 = 0;
  local_280 = 0;
  local_278 = 0;
  local_270 = 0xffffffff;
  local_26c = 0;
  local_260 = 0;
  local_258 = 0;
  InitializeCriticalSection(&local_250);
  SetCriticalSectionSpinCount(&local_250,4000);
  local_228 = (code *)0x0;
  ppcStack_220 = (code **)0x0;
  local_3f8 = (uint *)CONCAT44(local_3f8._4_4_,(undefined4)local_3f8);
  if (0 < (int)param_1[9] - *(int *)((longlong)param_1 + 0x74)) {
    iVar2 = (int)param_1[0xd];
    puStack_380 = (uint *)(param_1 + 10);
    local_408 = (code *)0x100000000;
    local_3f8._4_4_ = 0;
    uStack_3f0 = 0;
    if (iVar2 != 0) {
      puVar17 = (uint *)param_1[0xc];
      if ((uint *)param_1[0xc] == (uint *)0x0) {
        puVar17 = puStack_380;
      }
      uVar6 = *puVar17;
      ppcVar13 = ppcVar11;
      ppcVar19 = ppcVar11;
      while (uVar6 == 0) {
        iVar7 = (int)ppcVar13;
        uStack_3f0 = (int)ppcVar19 + 0x20;
        ppcVar19 = (code **)(ulonglong)uStack_3f0;
        ppcVar13 = (code **)(ulonglong)(iVar7 + 1U);
        uVar16 = (ulonglong)local_408 >> 0x20;
        local_408 = (code *)CONCAT44((int)uVar16,iVar7 + 1U);
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_141798c20;
        uVar6 = puVar17[(longlong)iVar7 + 1];
      }
      uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
      iVar7 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      local_408 = (code *)CONCAT44(uVar6,SUB84(local_408,0));
      if (uVar6 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      local_3f8._4_4_ = (uStack_3f0 - iVar7) + 0x1f;
      if (iVar2 < local_3f8._4_4_) {
LAB_141798c20:
        local_3f8._4_4_ = iVar2;
      }
    }
    auStack_378._4_4_ = local_3f8._4_4_;
    auStack_378._0_4_ = 0xffffffff;
    auStack_378._8_4_ = uStack_3f0;
    auStack_378._12_4_ = iStack_3ec;
    pppcStack_388 = (code ***)local_408;
    local_3d0 = 0;
    local_368._0_4_ = SUB84(ppcVar18,0);
    local_368._4_4_ = (undefined4)((ulonglong)ppcVar18 >> 0x20);
    uStack_3f0 = 0xffffffff;
    iStack_3ec = local_3f8._4_4_;
    uStack_400 = (code ***)local_408;
    local_3e8._8_4_ = (undefined4)local_368;
    local_3e8._0_8_ = auStack_378._8_8_;
    local_3e8._12_4_ = local_368._4_4_;
    bVar4 = local_3f8._4_4_ < (int)param_1[0xd];
    local_408 = (code *)ppcVar18;
    local_3d8 = ppcVar18;
    local_390 = ppcVar18;
    local_368 = ppcVar18;
    local_3f8 = puStack_380;
    if (bVar4) {
      do {
        pcVar3 = *(code **)(*(code **)local_408 + (longlong)iStack_3ec * 0x18);
        ppcVar18 = *(code ***)(*(code **)local_408 + (longlong)iStack_3ec * 0x18 + 8);
        BVar8 = TryEnterCriticalSection(&local_250);
        if (BVar8 == 0) {
          EnterCriticalSection(&local_250);
        }
        local_228 = pcVar3;
        ppcStack_220 = ppcVar18;
        if (ppcVar18 == (code **)0x0) {
          BVar8 = TryEnterCriticalSection(&local_250);
          if (BVar8 == 0) {
            EnterCriticalSection(&local_250);
          }
          ppcStack_220 = (code **)0x0;
          local_228 = pcVar3;
          TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
          ::Remove(&local_2a0,pcVar3);
          LeaveCriticalSection(&local_250);
        }
        else {
          local_418 = &local_228;
          local_410 = &ppcStack_220;
          FUN_140a9d130(&local_2a0,&local_41c,&local_418,0);
        }
        LeaveCriticalSection(&local_250);
        uStack_3f0 = uStack_3f0 & ~uStack_400._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_400);
      } while (iStack_3ec < (int)local_3f8[6]);
      if (((char)local_3d0 != '\0') && (local_3d0._1_1_ != '\0')) {
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_3d8,*(int *)(local_3d8 + 1) - *(int *)((longlong)local_3d8 + 0x34)
                            ,1);
      }
    }
  }
  local_438 = param_1[5];
  local_440 = local_218;
  local_448 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_450 = (undefined1 *)CONCAT44(local_450._4_4_,*(undefined4 *)((longlong)param_1 + 0x1c));
  local_458 = (undefined4)param_1[4];
  local_460 = (code **)CONCAT44(local_460._4_4_,(int)param_1[3]);
  local_468 = lVar9;
  FUN_141713ce0(local_158,&local_2a8,local_3a8,*param_1);
  if (0 < (int)param_1[0x14] - *(int *)((longlong)param_1 + 0xcc)) {
    TSet<TTuple<UTexture2D_const_*,FTextureInstanceView::FTextureDesc>,TDefaultMapHashableKeyFuncs<UTexture2D_const_*,FTextureInstanceView::FTextureDesc,0>,FDefaultSetAllocator>
    ::operator=(local_88,param_1 + 0x13);
  }
  local_418 = (code **)0x0;
  local_424 = 0;
  local_410 = (code ***)((ulonglong)local_410 & 0xffffffff);
  if (DAT_1468c2177 == '\0') goto LAB_141798e83;
  lVar12 = *param_1;
  if (lVar12 == 0) {
LAB_141798e72:
    lVar12 = 0;
  }
  else {
    lVar10 = FUN_14171cb10();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_141798e72;
  }
  FBlueprintSupport::DuplicateAllFields(lVar12,local_158);
LAB_141798e83:
  FObjectDuplicationHelperMethods::GatherDefaultSubobjectsForDuplication
            (*param_1,lVar9,&local_2a8,local_158);
  FObjectInstancingGraph::SetDestinationRoot(local_218,lVar9,0);
  ppcVar18 = ppcVar11;
  ppcVar13 = ppcVar11;
  uVar6 = local_424;
  while (uVar14 = (uint)ppcVar18, local_90 != 0) {
    iVar2 = local_90 + -1;
    pcVar3 = *(code **)(local_98 + (longlong)iVar2 * 8);
    iVar7 = (local_90 - iVar2) + -1;
    if (iVar7 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(local_98 + (longlong)iVar2 * 8),
                 (void *)(local_98 + (longlong)local_90 * 8),(longlong)iVar7 << 3);
    }
    local_90 = local_90 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_98);
    (**(code **)(*(longlong *)pcVar3 + 0xa8))(pcVar3,local_158);
    uVar6 = uVar14 + 1;
    local_410 = (code ***)CONCAT44(local_410._4_4_,uVar6);
    if ((int)ppcVar11 < (int)uVar6) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_418,ppcVar18);
      ppcVar11 = (code **)((ulonglong)local_410 >> 0x20);
      ppcVar13 = local_418;
      uVar6 = (uint)local_410;
    }
    ppcVar18 = (code **)(ulonglong)uVar6;
    ppcVar13[(int)uVar14] = pcVar3;
  }
  local_468 = param_1[1];
  local_424 = uVar6;
  FUN_141713c60(local_358,&local_2a8,local_3a8,param_1[5]);
  ppcVar11 = ppcVar13;
  ppcVar19 = ppcVar18;
  if (0 < (int)uVar14) {
    do {
      pcVar3 = *ppcVar11;
      BVar8 = TryEnterCriticalSection(&local_250);
      if (BVar8 == 0) {
        EnterCriticalSection(&local_250);
      }
      if (pcVar3 != local_228) {
        local_228 = pcVar3;
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(&local_2a0,&local_420,pcVar3);
        if (((local_420 == -1) || (lVar12 = local_2a0 + (longlong)local_420 * 0x18, lVar12 == 0)) ||
           (plVar15 = (longlong *)(lVar12 + 8), plVar15 == (longlong *)0x0)) {
          ppcStack_220 = (code **)0x0;
        }
        else {
          ppcStack_220 = (code **)*plVar15;
        }
      }
      ppcVar5 = ppcStack_220;
      LeaveCriticalSection(&local_250);
      if ((*(uint *)(pcVar3 + 8) >> 4 & 1) == 0) {
        (**(code **)(*ppcVar5 + 0xa8))();
      }
      else {
        local_32c = local_32c + 1;
        (**(code **)(*ppcVar5 + 0xa8))(ppcVar5,local_358);
        local_32c = local_32c + -1;
      }
      ppcVar19 = (code **)((longlong)ppcVar19 + -1);
      ppcVar11 = ppcVar11 + 1;
    } while (ppcVar19 != (code **)0x0);
  }
  local_207 = CONCAT11(local_207._1_1_,1);
  ppcVar11 = ppcVar13;
  if (0 < (int)uVar14) {
    do {
      pcVar3 = *ppcVar13;
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 8,&local_420,pcVar3);
      if (((local_420 == -1) || (lVar12 = param_1[8] + (longlong)local_420 * 0x18, lVar12 == 0)) ||
         (lVar12 == -8)) {
        BVar8 = TryEnterCriticalSection(&local_250);
        if (BVar8 == 0) {
          EnterCriticalSection(&local_250);
        }
        if (pcVar3 != local_228) {
          local_228 = pcVar3;
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(&local_2a0,&local_41c,pcVar3);
          if (((local_41c == -1) || (lVar12 = local_2a0 + (longlong)local_41c * 0x18, lVar12 == 0))
             || (plVar15 = (longlong *)(lVar12 + 8), plVar15 == (longlong *)0x0)) {
            ppcStack_220 = (code **)0x0;
          }
          else {
            ppcStack_220 = (code **)*plVar15;
          }
        }
        ppcVar19 = ppcStack_220;
        LeaveCriticalSection(&local_250);
        FUN_14178ca30(ppcVar19);
        (**(code **)(*ppcVar19 + 200))(ppcVar19,(int)param_1[6]);
        ppcVar11 = ppcVar19;
        do {
          if (((ulonglong)ppcVar11[1] & 0x30) != 0) goto LAB_1417991c7;
          ppcVar11 = (code **)ppcVar11[4];
        } while (ppcVar11 != (code **)0x0);
        local_428[0] = 0;
        uStack_400 = (code ***)local_428;
        local_3b8 = FUN_1406ddef0;
        local_408 = FUN_1406ddef0;
        pppcStack_3b0 = uStack_400;
        lVar12 = FUN_1415d8310(&local_408,&DAT_14622e6dc);
        uVar1 = *(undefined1 *)(lVar12 + 0x58);
        *(undefined1 *)(lVar12 + 0x58) = 1;
        FUN_1417510e0(ppcVar19);
        *(undefined1 *)(lVar12 + 0x58) = uVar1;
LAB_1417991c7:
        FUN_1417508a0(ppcVar19,0);
      }
      ppcVar13 = ppcVar13 + 1;
      ppcVar18 = (code **)((longlong)ppcVar18 + -1);
      ppcVar11 = local_418;
      uVar14 = local_424;
    } while (ppcVar18 != (code **)0x0);
  }
  if ((param_1[0x12] != 0) && (0 < (int)uVar14)) {
    uVar16 = (ulonglong)uVar14;
    ppcVar18 = ppcVar11;
    do {
      pcVar3 = *ppcVar18;
      local_3b8 = pcVar3;
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 8,&local_41c,pcVar3);
      if (((local_41c == -1) || (lVar12 = param_1[8] + (longlong)local_41c * 0x18, lVar12 == 0)) ||
         (lVar12 == -8)) {
        BVar8 = TryEnterCriticalSection(&local_250);
        if (BVar8 == 0) {
          EnterCriticalSection(&local_250);
        }
        if (pcVar3 != local_228) {
          local_228 = pcVar3;
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(&local_2a0,&local_420,pcVar3);
          if (((local_420 == -1) || (lVar12 = local_2a0 + (longlong)local_420 * 0x18, lVar12 == 0))
             || (plVar15 = (longlong *)(lVar12 + 8), plVar15 == (longlong *)0x0)) {
            ppcStack_220 = (code **)0x0;
          }
          else {
            ppcStack_220 = (code **)*plVar15;
          }
        }
        local_418 = ppcStack_220;
        LeaveCriticalSection(&local_250);
        local_408 = (code *)&local_3b8;
        uStack_400 = &local_418;
        TSet<TTuple<UFlareCompany_*,__int64>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,__int64,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_>
                  (param_1[0x12],&local_424,&local_408,0);
      }
      ppcVar18 = ppcVar18 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  FArchive::~FArchive(local_358);
  if (ppcVar11 != (code **)0x0) {
    FMemory::Free(ppcVar11);
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_88);
  if (local_98 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(local_158);
  FUObjectAnnotationSparse<FDuplicatedObject,0>::~FUObjectAnnotationSparse<FDuplicatedObject,0>
            (&local_2a8);
  FUN_140591050(local_3a8);
  local_168 = 0;
  if (local_170 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_1b0);
  local_1b8 = 0;
  if (local_1c0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_200);
  return local_3c8;
}



// FUNCTION 141799410 FUN_141799410 body=601 status=ok
// SIG undefined FUN_141799410(void)

undefined8 FUN_141799410(undefined8 param_1,longlong param_2,short *param_3,undefined1 param_4)

{
  char cVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong local_res10;
  undefined1 local_48 [8];
  undefined2 *local_40;
  ulonglong local_38;
  
  if (DAT_1469e7e10 != '\0') {
    LowLevelFatalErrorHandler
              ("Unknown",0x148,L"Illegal call to StaticFindObject() while serializing object data!")
    ;
    FDebug::AssertFailed
              (&DAT_144d292f2,"Unknown",0x148,
               L"Illegal call to StaticFindObject() while serializing object data!");
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((((cVar1 != '\0') || (DAT_1468c21ae == '\0')) ||
      (DVar2 = GetCurrentThreadId(), DVar2 == DAT_1468c21c0)) &&
     (cVar1 = IsGarbageCollecting(), cVar1 != '\0')) {
    LowLevelFatalErrorHandler
              ("Unknown",0x14d,L"Illegal call to StaticFindObject() while collecting garbage!");
    FDebug::AssertFailed
              (&DAT_144d292f3,"Unknown",0x14d,
               L"Illegal call to StaticFindObject() while collecting garbage!");
  }
  local_38 = 0;
  local_res10 = param_2;
  if (param_2 == -1) {
    local_res10 = 0;
  }
  local_40 = (undefined2 *)0x0;
  if (param_2 == -1) {
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (param_3[lVar8] != 0);
      uVar7 = (int)lVar8 + 1;
      local_38 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_40,0);
      }
      FGenericPlatformString::Memcpy(local_40,param_3,(longlong)(int)uVar7 * 2);
    }
    FUN_14179acf0(&local_40,0);
    puVar5 = local_40;
    puVar6 = &DAT_143f3eda8;
    if ((int)local_38 != 0) {
      puVar6 = local_40;
    }
    puVar3 = (undefined8 *)FName::FName(local_48,puVar6,1);
    uVar4 = *puVar3;
  }
  else {
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (param_3[lVar8] != 0);
      uVar7 = (int)lVar8 + 1;
      local_38 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_40,0);
      }
      FGenericPlatformString::Memcpy(local_40,param_3,(longlong)(int)uVar7 * 2);
    }
    cVar1 = FUN_141796910(&local_res10,&local_40,0,0,0);
    if (cVar1 == '\0') {
      if (local_40 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return 0;
    }
    puVar5 = &DAT_143f3eda8;
    if ((int)local_38 != 0) {
      puVar5 = local_40;
    }
    puVar3 = (undefined8 *)FName::FName(local_48,puVar5,1);
    uVar4 = *puVar3;
    puVar5 = local_40;
  }
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  uVar4 = FUN_141799680(param_1,local_res10,uVar4,param_4,param_2 == -1,0,0);
  return uVar4;
}



// FUNCTION 141799670 StaticFindObjectChecked body=5 status=ok
// SIG undefined StaticFindObjectChecked(void)

undefined8
StaticFindObjectChecked(undefined8 param_1,longlong param_2,short *param_3,undefined1 param_4)

{
  char cVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lStackX_10;
  undefined1 auStack_48 [8];
  undefined2 *puStack_40;
  ulonglong uStack_38;
  
  if (DAT_1469e7e10 != '\0') {
    LowLevelFatalErrorHandler
              ("Unknown",0x148,L"Illegal call to StaticFindObject() while serializing object data!")
    ;
    FDebug::AssertFailed
              (&DAT_144d292f2,"Unknown",0x148,
               L"Illegal call to StaticFindObject() while serializing object data!");
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((((cVar1 != '\0') || (DAT_1468c21ae == '\0')) ||
      (DVar2 = GetCurrentThreadId(), DVar2 == DAT_1468c21c0)) &&
     (cVar1 = IsGarbageCollecting(), cVar1 != '\0')) {
    LowLevelFatalErrorHandler
              ("Unknown",0x14d,L"Illegal call to StaticFindObject() while collecting garbage!");
    FDebug::AssertFailed
              (&DAT_144d292f3,"Unknown",0x14d,
               L"Illegal call to StaticFindObject() while collecting garbage!");
  }
  uStack_38 = 0;
  lStackX_10 = param_2;
  if (param_2 == -1) {
    lStackX_10 = 0;
  }
  puStack_40 = (undefined2 *)0x0;
  if (param_2 == -1) {
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (param_3[lVar8] != 0);
      uVar7 = (int)lVar8 + 1;
      uStack_38 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&puStack_40,0);
      }
      FGenericPlatformString::Memcpy(puStack_40,param_3,(longlong)(int)uVar7 * 2);
    }
    FUN_14179acf0(&puStack_40,0);
    puVar5 = puStack_40;
    puVar6 = &DAT_143f3eda8;
    if ((int)uStack_38 != 0) {
      puVar6 = puStack_40;
    }
    puVar3 = (undefined8 *)FName::FName(auStack_48,puVar6,1);
    uVar4 = *puVar3;
  }
  else {
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (param_3[lVar8] != 0);
      uVar7 = (int)lVar8 + 1;
      uStack_38 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&puStack_40,0);
      }
      FGenericPlatformString::Memcpy(puStack_40,param_3,(longlong)(int)uVar7 * 2);
    }
    cVar1 = FUN_141796910(&lStackX_10,&puStack_40,0,0,0);
    if (cVar1 == '\0') {
      if (puStack_40 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return 0;
    }
    puVar5 = &DAT_143f3eda8;
    if ((int)uStack_38 != 0) {
      puVar5 = puStack_40;
    }
    puVar3 = (undefined8 *)FName::FName(auStack_48,puVar5,1);
    uVar4 = *puVar3;
    puVar5 = puStack_40;
  }
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  uVar4 = FUN_141799680(param_1,lStackX_10,uVar4,param_4,param_2 == -1,0,0);
  return uVar4;
}



// FUNCTION 141799680 FUN_141799680 body=247 status=ok
// SIG undefined FUN_141799680(void)

void FUN_141799680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  
  if (DAT_1469e7e10 == '\0') {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      bVar1 = false;
      if (DVar3 == DAT_1468c21c0) goto LAB_1417996d5;
    }
    else {
LAB_1417996d5:
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = IsGarbageCollecting(), cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) goto LAB_141799726;
  }
  LowLevelFatalErrorHandler
            ("Unknown",0x130,
             L"Illegal call to StaticFindObjectFast() while serializing object data or garbage collecting!"
            );
  FDebug::AssertFailed
            (&DAT_144d292bb,"Unknown",0x130,
             L"Illegal call to StaticFindObjectFast() while serializing object data or garbage collecting!"
            );
LAB_141799726:
  (*(code *)PTR_CanBeUsedOnAnyThread_1464a8df0)();
  StaticFindObjectFastInternal(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 141799780 FUN_141799780 body=163 status=ok
// SIG undefined FUN_141799780(void)

undefined8
FUN_141799780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  DWORD DVar2;
  undefined8 uVar3;
  undefined1 local_18 [16];
  
  if (DAT_1469e7e10 == '\0') {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar2 = GetCurrentThreadId();
      if (DVar2 == DAT_1468c21c0) goto LAB_1417997d5;
    }
    else {
LAB_1417997d5:
      cVar1 = IsGarbageCollecting();
      if (cVar1 != '\0') goto LAB_14179980c;
    }
    FUN_141729b50(local_18);
    uVar3 = FUN_141799410(param_1,param_2,param_3,param_4);
    FUN_14172a400(local_18);
  }
  else {
LAB_14179980c:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 141799830 FUN_141799830 body=1110 status=ok
// SIG undefined FUN_141799830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141799830(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  longlong local_1e8 [4];
  void *local_1c8;
  int local_1c0;
  undefined1 local_1b8 [4];
  undefined1 local_1b4 [4];
  longlong *local_1b0;
  undefined4 *local_1a8;
  longlong *local_1a0;
  undefined4 *local_198;
  longlong local_190 [2];
  longlong local_180 [2];
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [24];
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  uVar4 = FUN_14171bfe0();
  local_1f8 = 1;
  local_200 = param_6;
  local_208 = param_5;
  lVar5 = FUN_141799c90(uVar4,param_2,param_3,param_4);
  lVar7 = lVar5;
  if (lVar5 != 0) {
    do {
      if (lVar7 == param_1) {
        return lVar5;
      }
      plVar1 = (longlong *)(lVar7 + 0x30);
      lVar7 = *plVar1;
    } while (*plVar1 != 0);
    local_f8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_b8 = 0;
    local_b0 = 0;
    uVar4 = UObjectBaseUtility::GetFullName(lVar5,local_190,0);
    uVar4 = FText::FromString(local_170,uVar4);
    local_a8[0] = 4;
    FText::FText(local_98,uVar4);
    local_80 = '\x01';
    local_1e8[0] = 0;
    local_1e8[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e8,0);
    FGenericPlatformString::Memcpy(local_1e8[0],L"ClassName",0x14);
    local_1b0 = local_1e8;
    local_1a8 = local_a8;
    FUN_1407484b0(&local_f8,local_1b8,&local_1b0,0);
    if (local_1e8[0] != 0) {
      FMemory::Free();
    }
    if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_168 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_168)(local_168);
        LOCK();
        piVar2 = (int *)((longlong)local_168 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_168 + 8))(local_168,1);
        }
      }
    }
    if (local_190[0] != 0) {
      FMemory::Free();
    }
    uVar4 = UObjectBaseUtility::GetFullName(param_1,local_180,0);
    uVar4 = FText::FromString(local_158,uVar4);
    local_78[0] = 4;
    FText::FText(local_68,uVar4);
    local_50 = '\x01';
    local_1e8[2] = 0;
    local_1e8[3] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e8 + 2,0);
    FGenericPlatformString::Memcpy(local_1e8[2],L"BaseClassName",0x1c);
    local_1a0 = local_1e8 + 2;
    local_198 = local_78;
    FUN_1407484b0(&local_f8,local_1b4,&local_1a0,0);
    if (local_1e8[2] != 0) {
      FMemory::Free();
    }
    if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_150 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar2 = (int *)((longlong)local_150 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
    if (local_180[0] != 0) {
      FMemory::Free();
    }
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_128,L"{ClassName} is not a child class of {BaseClassName}",L"Core",
                       L"LoadClassMismatch");
    uVar4 = FTextFormat::FTextFormat(local_110,uVar4);
    uVar4 = FText::Format(local_140,uVar4,&local_f8);
    puVar6 = (undefined8 *)FText::ToString(uVar4);
    local_1c8 = (void *)0x0;
    local_1c0 = *(int *)(puVar6 + 1);
    lVar7 = (longlong)local_1c0;
    _Src = (void *)*puVar6;
    if (local_1c0 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1c8,local_1c0,0);
      _guard_xfg_dispatch_icall_nop(local_1c8,_Src,lVar7 * 2);
    }
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_138 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar2 = (int *)((longlong)local_138 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_138 + 8))(local_138,1);
        }
      }
    }
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_120 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar2 = (int *)((longlong)local_120 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
    uVar4 = FCommandLine::Get();
    FParse::Param(uVar4,L"TREATLOADWARNINGSASERRORS");
    if (local_1c8 != (void *)0x0) {
      FMemory::Free();
    }
    local_b0 = 0;
    if (local_b8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_f8);
  }
  return 0;
}



// FUNCTION 141799c90 FUN_141799c90 body=2505 status=ok
// SIG undefined FUN_141799c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141799c90(longlong param_1,longlong param_2,wchar_t *param_3,undefined8 param_4,
                      uint param_5,ulonglong param_6,undefined1 param_7)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  char cVar3;
  wint_t wVar4;
  wint_t wVar5;
  longlong lVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  wint_t *pwVar14;
  longlong lVar15;
  int iVar16;
  undefined2 *puVar17;
  bool bVar18;
  undefined1 auStack_348 [32];
  uint local_328;
  ulonglong local_320;
  undefined4 local_318;
  char local_308;
  longlong local_300;
  uint local_2f8 [2];
  undefined2 *local_2f0;
  uint local_2e8;
  int local_2e4;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  ulonglong local_2c8;
  undefined1 local_2c0 [8];
  undefined2 *local_2b8;
  undefined8 local_2b0;
  longlong local_2a8 [4];
  undefined2 *local_288;
  undefined8 local_280;
  undefined2 *local_278;
  undefined8 local_270;
  longlong local_268 [4];
  void *local_248;
  int local_240;
  longlong *local_238;
  undefined4 *local_230;
  longlong local_228 [2];
  longlong *local_218;
  undefined4 *local_210;
  longlong *local_208;
  undefined4 *local_200;
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [8];
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
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [24];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [4];
  undefined1 local_d8 [8];
  longlong *local_d0;
  char local_c0;
  undefined4 local_b8 [4];
  undefined1 local_a8 [8];
  longlong *local_a0;
  char local_90;
  undefined4 local_88 [4];
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  bVar18 = false;
  local_318 = CONCAT31(local_318._1_3_,param_7);
  local_320 = param_6;
  local_2f8[0] = 0;
  local_328 = param_5;
  local_300 = param_2;
  local_2e0 = param_1;
  lVar6 = FUN_14179a660(param_1,param_2,param_3);
  if (lVar6 != 0) {
    return lVar6;
  }
  local_2d0 = 0;
  local_2c8 = 0;
  lVar15 = -1;
  local_2d8 = lVar6;
  if ((param_3 != (wchar_t *)0x0) && (lVar13 = lVar15, *param_3 != L'\0')) {
    do {
      lVar13 = lVar13 + 1;
    } while (param_3[lVar13] != L'\0');
    uVar11 = (int)lVar13 + 1;
    local_2c8 = (ulonglong)uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d0,0);
    }
    FGenericPlatformString::Memcpy(local_2d0,param_3,(longlong)(int)uVar11 * 2);
  }
  local_328 = param_5 & 4;
  local_2f8[0] = local_328;
  FUN_141796910(&local_300,&local_2d0,1);
  if (local_300 == 0) {
LAB_141799dde:
    cVar3 = '\0';
  }
  else {
    local_278 = (undefined2 *)0x0;
    local_270 = 0;
    UObjectBaseUtility::GetPathName(local_300,0,&local_278);
    puVar10 = &DAT_143f3eda8;
    if ((int)local_270 != 0) {
      puVar10 = local_278;
    }
    puVar7 = (undefined8 *)FName::FName(local_1f8,puVar10,1);
    bVar18 = true;
    cVar3 = FLinkerLoad::IsKnownMissingPackage(*puVar7);
    if (cVar3 == '\0') goto LAB_141799dde;
    cVar3 = '\x01';
  }
  local_308 = cVar3;
  if ((bVar18) && (local_278 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if (local_300 != 0) {
    lVar13 = lVar15;
    if (cVar3 == '\0') {
      do {
        lVar13 = lVar13 + 1;
      } while (param_3[lVar13] != L'\0');
      pwVar8 = _guard_xfg_dispatch_icall_nop(param_3,L".");
      if (2 < (int)lVar13) {
        pwVar14 = &DAT_144d28d10;
        do {
          wVar4 = *(wint_t *)
                   ((longlong)pwVar14 + (longlong)(param_3 + (longlong)(int)lVar13 + -0xa269468a));
          if ((wVar4 == 0) && (*pwVar14 == 0)) goto LAB_141799e91;
          if (wVar4 != *pwVar14) {
            wVar4 = towlower(wVar4);
            wVar5 = towlower(*pwVar14);
            if (wVar4 != wVar5) goto LAB_141799e86;
          }
          pwVar14 = pwVar14 + 1;
        } while( true );
      }
      goto LAB_141799e95;
    }
    goto LAB_14179a047;
  }
LAB_14179a057:
  local_2d8 = *(longlong *)(param_1 + 0x18);
  local_138 = 0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_108 = 0xffffffff;
  FName::ToString(&local_2d8,local_228);
  uVar9 = FText::FromString(local_1e0,local_228);
  local_e8[0] = 4;
  FText::FText(local_d8,uVar9);
  local_c0 = '\x01';
  local_268[0] = 0;
  local_268[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_268,0);
  FGenericPlatformString::Memcpy(local_268[0],L"ClassName",0x14);
  local_238 = local_268;
  local_230 = local_e8;
  FUN_1407484b0(&local_138,local_2c0,&local_238,0);
  if (local_268[0] != 0) {
    FMemory::Free();
  }
  if ((local_c0 != '\0') && (local_c0 = '\0', local_d0 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_d0 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1d8 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_1d8)(local_1d8);
      LOCK();
      piVar2 = (int *)((longlong)local_1d8 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_1d8 + 8))(local_1d8,1);
      }
    }
  }
  if (local_228[0] != 0) {
    FMemory::Free();
  }
  bVar18 = local_300 == 0;
  if (bVar18) {
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1c8,L"None",L"Core",L"None");
  }
  else {
    local_268[2] = 0;
    local_268[3] = 0;
    UObjectBaseUtility::GetPathName(local_300,0,local_268 + 2);
    uVar9 = FText::FromString(local_1b0,local_268 + 2);
  }
  local_b8[0] = 4;
  FText::FText(local_a8,uVar9);
  local_90 = '\x01';
  local_2a8[0] = 0;
  local_2a8[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2a8,0);
  FGenericPlatformString::Memcpy(local_2a8[0],L"OuterName",0x14);
  local_218 = local_2a8;
  local_210 = local_b8;
  FUN_1407484b0(&local_138,local_2f8,&local_218,0);
  if (local_2a8[0] != 0) {
    FMemory::Free();
  }
  if ((local_90 != '\0') && (local_90 = '\0', local_a0 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_a0 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if ((bVar18) && (local_1c0 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_1c0 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar2 = (int *)((longlong)local_1c0 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_1c0 + 8))(local_1c0,1);
      }
    }
  }
  if ((!bVar18) && (local_1a8 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_1a8 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_1a8)(local_1a8);
      LOCK();
      piVar2 = (int *)((longlong)local_1a8 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_1a8 + 8))(local_1a8,1);
      }
    }
  }
  if ((!bVar18) && (local_268[2] != 0)) {
    FMemory::Free();
  }
  uVar9 = FText::FromString(local_198,&local_2d0);
  local_88[0] = 4;
  FText::FText(local_78,uVar9);
  local_60 = '\x01';
  local_2a8[2] = 0;
  local_2a8[3] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2a8 + 2,0);
  FGenericPlatformString::Memcpy(local_2a8[2],L"ObjectName",0x16);
  local_208 = local_2a8 + 2;
  local_200 = local_88;
  FUN_1407484b0(&local_138,&local_2e0,&local_208,0);
  if (local_2a8[2] != 0) {
    FMemory::Free();
  }
  if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_190 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar2 = (int *)((longlong)local_190 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_190 + 8))(local_190,1);
      }
    }
  }
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_168,L"Failed to find object \'{ClassName} {OuterName}.{ObjectName}\'",
                     L"Core",L"ObjectNotFound");
  uVar9 = FTextFormat::FTextFormat(local_150,uVar9);
  uVar9 = FText::Format(local_180,uVar9,&local_138);
  puVar7 = (undefined8 *)FText::ToString(uVar9);
  local_248 = (void *)0x0;
  local_240 = *(int *)(puVar7 + 1);
  lVar15 = (longlong)local_240;
  _Src = (void *)*puVar7;
  if (local_240 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,local_240,0);
    _guard_xfg_dispatch_icall_nop(local_248,_Src,lVar15 * 2);
  }
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_178 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar2 = (int *)((longlong)local_178 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_178 + 8))(local_178,1);
      }
    }
  }
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_160 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar2 = (int *)((longlong)local_160 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_160 + 8))(local_160,1);
      }
    }
  }
  uVar9 = FCommandLine::Get();
  FParse::Param(uVar9,L"TREATLOADWARNINGSASERRORS");
  if (local_300 != 0) {
    local_288 = (undefined2 *)0x0;
    local_280 = 0;
    UObjectBaseUtility::GetPathName(local_300,0,local_2a8 + 4);
    puVar10 = &DAT_143f3eda8;
    if ((int)local_280 != 0) {
      puVar10 = local_288;
    }
    puVar7 = (undefined8 *)FName::FName(local_1e8,puVar10,1);
    FLinkerLoad::AddKnownMissingPackage(*puVar7);
    if (local_288 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (local_248 != (void *)0x0) {
    FMemory::Free();
  }
  local_f0 = 0;
  if (local_f8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_138);
LAB_14179a624:
  if (local_2d0 != 0) {
    FMemory::Free();
  }
  return lVar6;
LAB_141799e86:
  if (wVar4 == wVar5) {
LAB_141799e91:
    bVar18 = true;
  }
  else {
LAB_141799e95:
    bVar18 = false;
  }
  param_1 = local_2e0;
  lVar6 = local_2d8;
  cVar3 = local_308;
  if ((pwVar8 != (wchar_t *)0x0) && (!bVar18)) {
    local_2b8 = (undefined2 *)0x0;
    local_2b0 = 0;
    puVar10 = (undefined2 *)0x0;
    puVar17 = (undefined2 *)0x0;
    local_2e4 = 0;
    if ((param_3 == (wchar_t *)0x0) ||
       (puVar10 = (undefined2 *)0x0, puVar17 = (undefined2 *)0x0, local_2e4 = 0, *param_3 == L'\0'))
    {
LAB_141799f18:
      iVar16 = 3;
    }
    else {
      do {
        lVar15 = lVar15 + 1;
      } while (param_3[lVar15] != L'\0');
      uVar12 = (int)lVar15 + 1;
      local_2b0 = (ulonglong)uVar12;
      uVar11 = uVar12;
      local_2e4 = 0;
      if (0 < (int)uVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,0);
        uVar11 = (uint)local_2b0;
        local_2e4 = local_2b0._4_4_;
      }
      puVar10 = local_2b8;
      puVar17 = (undefined2 *)(ulonglong)uVar11;
      FGenericPlatformString::Memcpy(local_2b8,param_3,(longlong)(int)uVar12 * 2);
      iVar16 = 2;
      if (uVar11 == 0) goto LAB_141799f18;
    }
    local_2e8 = (uint)puVar17;
    local_2f0 = puVar10;
    if (local_2e4 < (int)(iVar16 + local_2e8)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
      puVar17 = (undefined2 *)(ulonglong)local_2e8;
    }
    iVar16 = (int)puVar17;
    local_2e8 = (3 - (uint)(iVar16 != 0)) + iVar16;
    if (local_2e4 < (int)local_2e8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f0,puVar17);
    }
    *(undefined4 *)(local_2f0 + ((longlong)iVar16 - (ulonglong)(iVar16 != 0))) = 0x43005f;
    *(undefined2 *)((longlong)(local_2f0 + ((longlong)iVar16 - (ulonglong)(iVar16 != 0))) + 4) = 0;
    local_328 = local_2f8[0];
    FUN_141796910(&local_300,&local_2f0,1);
    puVar10 = &DAT_143f3eda8;
    if (local_2e8 != 0) {
      puVar10 = local_2f0;
    }
    puVar7 = (undefined8 *)FName::FName(local_1f0,puVar10,1);
    param_1 = local_2e0;
    local_318 = 0;
    local_320 = local_320 & 0xffffffff00000000;
    local_328 = local_328 & 0xffffff00;
    lVar6 = FUN_141799680(local_2e0,local_300,*puVar7,0);
    lVar15 = lVar6;
    if ((lVar6 != 0) && (lVar15 = 0, (*(uint *)(lVar6 + 8) & 0x8003400) == 0)) {
      if (local_2f0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      goto LAB_14179a624;
    }
    lVar6 = lVar15;
    cVar3 = local_308;
    if (local_2f0 != (undefined2 *)0x0) {
      FMemory::Free();
      cVar3 = local_308;
    }
  }
LAB_14179a047:
  if ((local_300 != 0) && (cVar3 != '\0')) goto LAB_14179a624;
  goto LAB_14179a057;
}



// FUNCTION 14179a660 FUN_14179a660 body=1369 status=ok
// SIG undefined FUN_14179a660(void)

longlong FUN_14179a660(longlong param_1,longlong param_2,wchar_t *param_3,undefined8 param_4,
                      uint param_5,undefined8 param_6,char param_7)

{
  undefined8 uVar1;
  void *_Src;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  int iVar11;
  wchar_t *pwVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong local_res10;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar18;
  ulonglong uVar17;
  ulonglong in_stack_ffffffffffffff90;
  wchar_t *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_50 = 0;
  local_58 = (wchar_t *)0x0;
  lVar16 = -1;
  local_res10 = param_2;
  if ((param_3 != (wchar_t *)0x0) && (lVar14 = lVar16, *param_3 != L'\0')) {
    do {
      lVar14 = lVar14 + 1;
    } while (param_3[lVar14] != L'\0');
    uVar13 = (int)lVar14 + 1;
    local_50 = (ulonglong)uVar13;
    if (0 < (int)uVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    FGenericPlatformString::Memcpy(local_58,param_3,(longlong)(int)uVar13 * 2);
  }
  pwVar6 = _guard_xfg_dispatch_icall_nop(param_3,L".");
  uVar17 = CONCAT44(uVar18,param_5) & 0xffffffff00102006;
  FUN_141796910(&local_res10,&local_58,1,1,uVar17);
  lVar3 = local_res10;
  lVar14 = 0;
  if (local_res10 != 0) {
    if ((param_7 != '\0') && (pwVar6 != (wchar_t *)0x0)) {
      pwVar12 = L"";
      if ((int)local_50 != 0) {
        pwVar12 = local_58;
      }
      puVar7 = (undefined8 *)FName::FName(&local_res10,pwVar12,1);
      in_stack_ffffffffffffff90 = in_stack_ffffffffffffff90 & 0xffffffff00000000;
      uVar17 = uVar17 & 0xffffffffffffff00;
      lVar14 = FUN_141799680(param_1,lVar3,*puVar7,0,uVar17,in_stack_ffffffffffffff90,0);
      if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) & 0x8003400) == 0)) goto LAB_14179ab90;
    }
    lVar8 = *(longlong *)(lVar3 + 0x20);
    lVar14 = lVar3;
    while (lVar4 = lVar8, lVar4 != 0) {
      lVar14 = lVar4;
      lVar8 = *(longlong *)(lVar4 + 0x20);
    }
    lVar4 = *(longlong *)(lVar3 + 0x20);
    lVar8 = lVar3;
    if ((*(uint *)(lVar14 + 0x50) >> 4 & 1) == 0) {
      while (lVar14 = lVar4, lVar14 != 0) {
        lVar8 = lVar14;
        lVar4 = *(longlong *)(lVar14 + 0x20);
      }
      local_res10 = *(longlong *)(lVar8 + 0x18);
      FName::ToString(&local_res10,&local_48);
      puVar9 = &DAT_143f3eda8;
      if ((int)local_40 != 0) {
        puVar9 = local_48;
      }
      LoadPackage(0,puVar9,param_5 & 0xffffffef,0);
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    pwVar12 = L"";
    if ((int)local_50 != 0) {
      pwVar12 = local_58;
    }
    puVar7 = (undefined8 *)FName::FName(&local_res10,pwVar12,1);
    in_stack_ffffffffffffff90 = in_stack_ffffffffffffff90 & 0xffffffff00000000;
    puVar9 = (undefined2 *)(uVar17 & 0xffffffffffffff00);
    lVar8 = FUN_141799680(param_1,lVar3,*puVar7,0,puVar9,in_stack_ffffffffffffff90,0);
    if (DAT_1468c21ab == '\0') {
LAB_14179a96c:
      lVar14 = lVar8;
      if (lVar8 != 0) goto LAB_14179ab90;
    }
    else if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 8) & 0x8003400) != 0) {
        if (*(longlong *)(lVar8 + 0x10) == 0) {
          local_40 = 5;
          local_48 = (undefined2 *)0x0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          FGenericPlatformString::Memcpy(local_48,&DAT_143f3edc8,10);
        }
        else {
          UObjectBaseUtility::GetFullName(lVar8,&local_48,0);
        }
        puVar9 = &DAT_143f3eda8;
        if ((int)local_40 != 0) {
          puVar9 = local_48;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x3db,
                   L"Return an object still needing load from StaticLoadObjectInternal %s",puVar9);
        if (local_48 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar8 + 0x10) == 0) {
          local_40 = 5;
          local_48 = (undefined2 *)0x0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          FGenericPlatformString::Memcpy(local_48,&DAT_143f3edc8,10);
        }
        else {
          UObjectBaseUtility::GetFullName(lVar8,&local_48,0);
        }
        puVar9 = &DAT_143f3eda8;
        if ((int)local_40 != 0) {
          puVar9 = local_48;
        }
        FDebug::AssertFailed
                  (&DAT_144d284ca,"Unknown",0x3db,
                   L"Return an object still needing load from StaticLoadObjectInternal %s",puVar9);
        if (local_48 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      goto LAB_14179a96c;
    }
    if ((param_5 >> 0x10 & 1) == 0) {
      pwVar12 = L"";
      if ((int)local_50 != 0) {
        pwVar12 = local_58;
      }
      puVar7 = (undefined8 *)FName::FName(&local_res10,pwVar12,1);
      uVar1 = *puVar7;
      uVar10 = UObjectRedirector::GetPrivateStaticClass();
      lVar14 = FUN_141799680(uVar10,lVar3,uVar1,0,(ulonglong)puVar9 & 0xffffffffffffff00,
                             in_stack_ffffffffffffff90 & 0xffffffff00000000,0);
      if ((lVar14 != 0) && (lVar14 = *(longlong *)(lVar14 + 0x28), lVar14 != 0)) {
        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(param_1 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
             (longlong)*(int *)(param_1 + 0x90) * 8) != param_1 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) goto LAB_14179ab90;
      }
    }
    lVar14 = lVar8;
    if (lVar8 != 0) goto LAB_14179ab90;
  }
  if (pwVar6 == (wchar_t *)0x0) {
    if (local_58 != param_3) {
      if ((param_3 == (wchar_t *)0x0) || (*param_3 == L'\0')) {
        iVar15 = 0;
      }
      else {
        do {
          lVar16 = lVar16 + 1;
        } while (param_3[lVar16] != L'\0');
        iVar15 = (int)lVar16 + 1;
      }
      iVar11 = 0;
      uVar17 = local_50 >> 0x20;
      local_50 = local_50 & 0xffffffff00000000;
      if ((int)uVar17 != iVar15) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,iVar15);
        iVar11 = (int)local_50;
      }
      local_50 = CONCAT44(local_50._4_4_,iVar15 + iVar11);
      if (local_50._4_4_ < iVar15 + iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow();
      }
      if (iVar15 != 0) {
        _guard_xfg_dispatch_icall_nop(local_58,param_3,(longlong)iVar15 * 2);
      }
    }
    uVar17 = local_50;
    iVar15 = (int)local_50;
    lVar16 = (longlong)(int)local_50;
    iVar11 = (2 - (uint)((int)local_50 != 0)) + (int)local_50;
    local_50 = CONCAT44(local_50._4_4_,iVar11);
    if (local_50._4_4_ < iVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,uVar17 & 0xffffffff);
    }
    local_58[lVar16 - (ulonglong)(iVar15 != 0)] = L'.';
    (local_58 + (lVar16 - (ulonglong)(iVar15 != 0)))[1] = L'\0';
    puVar7 = (undefined8 *)FPackageName::GetShortName(&local_48,param_3);
    uVar17 = local_50;
    _Src = (void *)*puVar7;
    iVar15 = *(int *)(puVar7 + 1) + -1;
    if (*(int *)(puVar7 + 1) == 0) {
      iVar15 = 0;
    }
    if (iVar15 != 0) {
      iVar11 = (int)local_50;
      lVar16 = (longlong)(int)local_50;
      iVar5 = (uint)((int)local_50 == 0) + (int)local_50 + iVar15;
      local_50 = CONCAT44(local_50._4_4_,iVar5);
      if (local_50._4_4_ < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,uVar17 & 0xffffffff);
      }
      pwVar6 = local_58 + (lVar16 - (ulonglong)(iVar11 != 0));
      _guard_xfg_dispatch_icall_nop(pwVar6,_Src,(longlong)iVar15 * 2);
      pwVar6[iVar15] = L'\0';
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    pwVar6 = L"";
    if ((int)local_50 != 0) {
      pwVar6 = local_58;
    }
    lVar14 = FUN_14179a660(param_1,lVar3,pwVar6,param_4,param_5,param_6,param_7);
  }
LAB_14179ab90:
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return lVar14;
}



// FUNCTION 14179abc0 FUN_14179abc0 body=172 status=ok
// SIG undefined FUN_14179abc0(void)

void FUN_14179abc0(void)

{
  ProcessAsyncLoading(1);
  if (DAT_1469e7e18 != 0) {
    LowLevelFatalErrorHandler("Unknown",0x233,L"Duplicate native registered: %i");
    FDebug::AssertFailed(L"","Unknown",0x233,L"Duplicate native registered: %i",DAT_1469e7e18);
  }
  if (DAT_1469e7e1c != 0) {
    LowLevelFatalErrorHandler("Unknown",0x239,L"Duplicate cast registered: %i");
    FDebug::AssertFailed
              ((longlong)L", /* Namespace */\n" + 0x27,"Unknown",0x239,
               L"Duplicate cast registered: %i",DAT_1469e7e1c);
  }
  return;
}



// FUNCTION 14179ac70 Step body=38 status=ok
// SIG undefined Step(void)

void FFrame::Step(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_1 + 0x20);
  *(byte **)(param_1 + 0x20) = *(byte **)(param_1 + 0x20) + 1;
                    /* WARNING: Jumptable at 0x00014179ac92 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1469e7e20)[bVar1])(param_2,param_1);
  return;
}



// FUNCTION 14179aca0 FUN_14179aca0 body=75 status=ok
// SIG undefined FUN_14179aca0(void)

void FUN_14179aca0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(uint *)(param_3 + 7) >> 8 & 1) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x78);
    plVar2 = (longlong *)*plVar1;
    while (plVar2 != param_3) {
      plVar1 = (longlong *)plVar1[2];
      plVar2 = (longlong *)*plVar1;
    }
    *(longlong *)(param_1 + 0x38) = plVar1[1];
    return;
  }
  *(longlong *)(param_1 + 0x38) =
       (longlong)*(int *)((longlong)param_3 + 0x44) + *(longlong *)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00014179ace4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x308))(param_3);
  return;
}



// FUNCTION 14179acf0 FUN_14179acf0 body=494 status=ok
// SIG undefined FUN_14179acf0(void)

void FUN_14179acf0(wchar_t **param_1,char param_2)

{
  wchar_t *pwVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  uint uVar9;
  wchar_t *local_28;
  int local_20;
  undefined4 local_1c;
  
  pwVar1 = *param_1;
  iVar6 = *(int *)(param_1 + 1);
  pwVar8 = pwVar1 + iVar6;
  pwVar7 = pwVar1;
  if (pwVar1 != pwVar8) {
    while (*pwVar7 != L'\'') {
      pwVar7 = pwVar7 + 1;
      if (pwVar7 == pwVar8) {
        return;
      }
    }
    iVar5 = (int)((longlong)pwVar7 - (longlong)pwVar1 >> 1);
    if (iVar5 != -1) {
      do {
        if (pwVar8 == pwVar1) {
          uVar2 = 0xffffffff;
          goto LAB_14179ad53;
        }
        pwVar8 = pwVar8 + -1;
      } while (*pwVar8 != L'\'');
      uVar2 = (uint)((longlong)pwVar8 - (longlong)pwVar1 >> 1);
LAB_14179ad53:
      if (iVar5 < (int)uVar2) {
        uVar9 = iVar6 - 1;
        if (iVar6 == 0) {
          uVar9 = 0xffffffff;
        }
        pwVar8 = (wchar_t *)0x0;
        if (iVar6 == 0) {
          uVar9 = 0;
        }
        if (iVar5 + 1U < uVar9) {
          uVar9 = iVar5 + 1U;
        }
        uVar3 = iVar6 - 1;
        if (iVar6 == 0) {
          uVar3 = 0;
        }
        uVar4 = uVar9;
        if ((uVar9 <= uVar2) && (uVar4 = uVar3, uVar2 < uVar3)) {
          uVar4 = uVar2;
        }
        local_28 = (wchar_t *)0x0;
        local_1c = 0;
        pwVar7 = L"";
        if (iVar6 != 0) {
          pwVar7 = pwVar1;
        }
        iVar5 = uVar4 - uVar9;
        iVar6 = iVar5 + 1;
        if (iVar5 == 0) {
          iVar6 = 0;
        }
        local_20 = iVar6;
        if ((0 < iVar6) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0), iVar6 = local_20,
           pwVar8 = local_28, 0 < local_20)) {
          wcsncpy(local_28,pwVar7 + (int)uVar9,(longlong)iVar5);
          pwVar8[iVar5] = L'\0';
        }
        if (param_1 == &local_28) {
          if (pwVar8 != (wchar_t *)0x0) {
            FMemory::Free(pwVar8);
          }
        }
        else {
          if (*param_1 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          *param_1 = pwVar8;
          *(int *)(param_1 + 1) = iVar6;
          *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
        }
      }
      else if (param_2 != '\0') {
        pwVar8 = L"";
        pwVar7 = L"";
        if (iVar6 != 0) {
          pwVar7 = pwVar1;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0xd3e,L"Bad path name: %s, missing \' or an incorrect format",pwVar7);
        if (*(int *)(param_1 + 1) != 0) {
          pwVar8 = *param_1;
        }
        FDebug::AssertFailed
                  (&DAT_144d28f52,"Unknown",0xd3e,
                   L"Bad path name: %s, missing \' or an incorrect format",pwVar8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14179aee0 FUN_14179aee0 body=608 status=ok
// SIG undefined FUN_14179aee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14179aee0(longlong param_1,longlong param_2,uint *param_3)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_48 [4];
  
  uVar8 = 0;
  if ((((2 < *param_3) && (param_1 != 0)) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (*param_3 == 3)) {
    bVar11 = *(longlong *)(param_1 + 0x20) == 0;
    if (bVar11) {
      local_48[2] = 0;
      plVar9 = local_48 + 2;
      local_48[3] = 0;
    }
    else {
      local_48[0] = 0;
      local_48[1] = 0;
      UObjectBaseUtility::GetPathName(*(longlong *)(param_1 + 0x20),0,local_48);
      plVar9 = local_48;
    }
    uVar6 = uVar8;
    if (*(longlong *)(param_2 + 0x30) != 0) {
      uVar6 = *(ulonglong *)(*(longlong *)(param_2 + 0x30) + 0x18);
    }
    puVar4 = (undefined8 *)FText::ToString(param_3 + 2);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar4;
    }
    FUN_1415b3a60(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18),
                  *(undefined8 *)(param_1 + 0x18),uVar6,plVar9,puVar5);
    if ((bVar11) && (local_48[2] != 0)) {
      FMemory::Free();
    }
    if ((!bVar11) && (local_48[0] != 0)) {
      FMemory::Free();
    }
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)) {
    bVar11 = false;
    DAT_1464b570c = DAT_1464b570c + 1;
    lVar7 = (longlong)(DAT_1464b5700 + -1);
    if (-1 < DAT_1464b5700 + -1) {
      lVar10 = lVar7 << 4;
      bVar11 = false;
      do {
        if (((*(int *)(lVar10 + 8 + DAT_1464b56f8) == 0) ||
            (plVar9 = *(longlong **)(lVar10 + DAT_1464b56f8), plVar9 == (longlong *)0x0)) ||
           (cVar2 = (**(code **)(*plVar9 + 0x40))(plVar9,param_1,param_2,param_3), cVar2 == '\0')) {
          bVar11 = true;
        }
        lVar10 = lVar10 + -0x10;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    iVar1 = DAT_1464b5700;
    DAT_1464b570c = DAT_1464b570c + -1;
    if ((bVar11) && (DAT_1464b570c < 1)) {
      uVar6 = uVar8;
      if (0 < DAT_1464b5700) {
        do {
          if (((*(int *)(uVar8 + 8 + DAT_1464b56f8) == 0) ||
              (*(longlong **)(uVar8 + DAT_1464b56f8) == (longlong *)0x0)) ||
             (cVar2 = (**(code **)(**(longlong **)(uVar8 + DAT_1464b56f8) + 0x10))(), cVar2 != '\0')
             ) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464b56f8,uVar6,1,1);
          }
          else {
            uVar6 = (ulonglong)((int)uVar6 + 1);
            uVar8 = uVar8 + 0x10;
          }
        } while ((int)uVar6 < DAT_1464b5700);
      }
      _DAT_1464b5708 = DAT_1464b5700 * 2;
      if (_DAT_1464b5708 < 3) {
        _DAT_1464b5708 = 2;
      }
      if ((_DAT_1464b5708 < iVar1) && (DAT_1464b5704 != DAT_1464b5700)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464b56f8);
      }
    }
  }
  return;
}



// FUNCTION 14179b140 ToString body=608 status=ok
// SIG undefined ToString(void)

longlong * FSoftObjectPath::ToString(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  int iVar7;
  longlong lVar8;
  longlong local_58;
  int local_50;
  int local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  
  if (*param_1 == 0) {
    local_48 = (void *)0x0;
    local_40 = 0;
    local_3c = 0;
  }
  else {
    FName::ToString(param_1,&local_48);
  }
  iVar4 = (int)param_1[2];
  if (iVar4 < 2) {
    *param_2 = (longlong)local_48;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_3c;
    *(int *)(param_2 + 1) = local_40;
    return param_2;
  }
  local_58 = 0;
  local_4c = 0;
  iVar3 = local_40 + -1;
  if (local_40 == 0) {
    iVar3 = 0;
  }
  local_50 = 0;
  iVar2 = 1;
  if (iVar4 != 0) {
    iVar2 = iVar4;
  }
  iVar4 = 0;
  if (iVar2 + iVar3 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,iVar2 + iVar3);
    iVar4 = local_50;
  }
  pvVar1 = local_48;
  iVar3 = local_40 + -1;
  if (local_40 == 0) {
    iVar3 = 0;
  }
  lVar8 = local_58;
  iVar2 = iVar4;
  iVar7 = local_4c;
  if (iVar3 != 0) {
    local_50 = iVar4 + (uint)(iVar4 == 0) + iVar3;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar4);
    }
    iVar7 = local_4c;
    iVar2 = local_50;
    lVar8 = local_58;
    pvVar6 = (void *)(((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2 + local_58);
    ::_guard_xfg_dispatch_icall_nop(pvVar6,pvVar1,(longlong)iVar3 * 2);
    *(undefined2 *)((longlong)iVar3 * 2 + (longlong)pvVar6) = 0;
  }
  iVar4 = iVar2 + -1;
  if (iVar2 < 1) {
    iVar4 = 0;
  }
  local_50 = (iVar2 < 1) + 1 + iVar2;
  if (iVar7 < local_50) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar2);
    lVar8 = local_58;
    iVar7 = local_4c;
  }
  iVar3 = local_50;
  *(undefined4 *)(lVar8 + (longlong)iVar4 * 2) = 0x3a;
  iVar4 = (int)param_1[2] + -1;
  pvVar1 = (void *)param_1[1];
  if ((int)param_1[2] == 0) {
    iVar4 = 0;
  }
  iVar2 = local_50;
  if (iVar4 != 0) {
    lVar5 = (longlong)local_50;
    local_50 = iVar4 + (uint)(local_50 == 0) + local_50;
    if (iVar7 < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar3);
      lVar8 = local_58;
      iVar7 = local_4c;
    }
    iVar2 = local_50;
    pvVar6 = (void *)((lVar5 - (ulonglong)(iVar3 != 0)) * 2 + lVar8);
    ::_guard_xfg_dispatch_icall_nop(pvVar6,pvVar1,(longlong)iVar4 * 2);
    *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar6) = 0;
  }
  *param_2 = lVar8;
  *(int *)((longlong)param_2 + 0xc) = iVar7;
  *(int *)(param_2 + 1) = iVar2;
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14179b3a0 TryLoad body=200 status=ok
// SIG undefined TryLoad(void)

longlong FSoftObjectPath::TryLoad(longlong *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong local_18 [2];
  
  if (*param_1 == 0) {
    return 0;
  }
  puVar2 = (undefined8 *)ToString(param_1,local_18);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar2;
  }
  uVar3 = UObject::GetPrivateStaticClass();
  lVar4 = FUN_141799c90(uVar3,0,puVar6,0,0,0,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  while( true ) {
    if (lVar4 == 0) {
      return 0;
    }
    lVar5 = UObjectRedirector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    lVar4 = *(longlong *)(lVar4 + 0x28);
  }
  return lVar4;
}



// FUNCTION 14179b470 UClassCompiledInDefer body=90 status=ok
// SIG undefined UClassCompiledInDefer(void)

void UClassCompiledInDefer(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  FName::FName(local_res8,param_2,1);
  plVar2 = (longlong *)FUN_14178d7b0();
  iVar1 = (int)plVar2[1];
  *(int *)(plVar2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  return;
}



// FUNCTION 14179b4d0 UClassRegisterAllCompiledInClasses body=147 status=ok
// SIG undefined UClassRegisterAllCompiledInClasses(void)

void UClassRegisterAllCompiledInClasses(void)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar1 = (ulonglong *)FUN_14178d7b0();
  uVar4 = 0;
  puVar2 = (undefined8 *)*puVar1;
  uVar3 = (longlong)(int)puVar1[1] & 0x1fffffffffffffff;
  if (puVar2 + (int)puVar1[1] < puVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      (*(code *)**(undefined8 **)*puVar2)();
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 != uVar3);
  }
  *(undefined4 *)(puVar1 + 1) = 0;
  if (*(int *)((longlong)puVar1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(puVar1,0);
  }
  return;
}



// FUNCTION 14179b570 FUN_14179b570 body=350 status=ok
// SIG undefined FUN_14179b570(void)

void FUN_14179b570(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_28 [3];
  
  DAT_1464b56e4 = TlsAlloc();
  local_res20[0] = 0x200000;
  local_res18[0] = 0;
  local_res10[0] = 0;
  local_res8[0] = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  uVar2 = FCommandLine::Get();
  cVar1 = FParse::Value(uVar2,L"-filehostip=",local_28,1);
  if (cVar1 == '\0') {
    FConfigCacheIni::GetInt
              (DAT_1468b6148,L"/Script/Engine.GarbageCollectionSettings",
               L"gc.MaxObjectsNotConsideredByGC",local_res18,&DAT_1468e2360);
    FConfigCacheIni::GetInt
              (DAT_1468b6148,L"/Script/Engine.GarbageCollectionSettings",
               L"gc.SizeOfPermanentObjectPool",local_res10,&DAT_1468e2360);
  }
  else {
    DAT_1464b56ec = 0;
  }
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"/Script/Engine.GarbageCollectionSettings",L"gc.MaxObjectsInGame",
             local_res20,&DAT_1468e2360);
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"/Script/Engine.GarbageCollectionSettings",L"gc.PreAllocateUObjectArray"
             ,local_res8,&DAT_1468e2360);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  DAT_1469e8ef0 = local_res10[0];
  DAT_1469e8ef8 = FMemory::Malloc((longlong)local_res10[0],0);
  DAT_1469e8f00 = DAT_1469e8ef8;
  DAT_1469e8f08 = DAT_1469e8ef8;
  FUObjectArray::AllocateObjectPool(&DAT_1469e91a0,local_res20[0],local_res18[0],local_res8[0]);
  FUN_1416fabe0();
  DAT_1469e7e13 = 1;
  UObjectProcessRegistrants();
  return;
}



// FUNCTION 14179b6d0 FUN_14179b6d0 body=38 status=ok
// SIG undefined FUN_14179b6d0(void)

void FUN_14179b6d0(void)

{
  TlsFree(DAT_1464b56e4);
  DAT_1464b56e4 = 0xffffffff;
  DAT_1469e7e13 = 0;
  return;
}



// FUNCTION 14179b700 UObjectCompiledInDefer body=1459 status=ok
// SIG undefined UObjectCompiledInDefer(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObjectCompiledInDefer
               (undefined8 param_1,undefined8 param_2,short *param_3,undefined2 *param_4,
               char param_5,short *param_6,code *param_7)

{
  int iVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_110;
  undefined2 *local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  int local_e0;
  int local_dc;
  undefined2 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_118 = param_1;
  local_e8 = param_4;
  local_c8 = param_1;
  if (param_5 != '\0') {
    local_a8 = 0;
    lVar12 = -1;
    local_a0 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = 0;
    local_60 = 0;
    local_b8 = param_1;
    local_b0 = param_2;
    if (param_7 != (code *)0x0) {
      (*param_7)(&local_a8);
    }
    puVar3 = (undefined2 *)FName::FName(&local_e8,param_6,1);
    uVar4 = FUN_14178d970();
    local_100 = &local_b8;
    local_108 = puVar3;
    FUN_14177ffc0(uVar4,&local_d8,&local_108,0);
    local_f0 = 0;
    local_f8 = (undefined2 *)0x0;
    if ((param_6 != (short *)0x0) && (*param_6 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (param_6[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      local_f0 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
      }
      FGenericPlatformString::Memcpy(local_f8,param_6,(longlong)(int)uVar8 * 2);
    }
    local_100 = (undefined8 *)0x0;
    local_108 = (undefined2 *)0x0;
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (param_3[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      local_100 = (undefined8 *)(ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
      }
      FGenericPlatformString::Memcpy(local_108,param_3,(longlong)(int)uVar8 * 2);
    }
    FString::RemoveFromEnd(&local_f8,&local_108,1);
    if (local_108 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_108 = (undefined2 *)0x0;
    local_100 = (undefined8 *)0x2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    FGenericPlatformString::Memcpy(local_108,&DAT_144d28fbc,4);
    FString::RemoveFromEnd(&local_f8,&local_108,1);
    if (local_108 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_110 = 1;
    puVar3 = &DAT_143f3eda8;
    if ((int)local_f0 != 0) {
      puVar3 = local_f8;
    }
    NotifyRegistrationEvent(puVar3,param_3,0,0);
    local_108 = (undefined2 *)0x0;
    local_100 = (undefined8 *)0xa;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    puVar3 = local_108;
    FGenericPlatformString::Memcpy(local_108,L"Default__",0x14);
    iVar1 = (int)local_100;
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      do {
        lVar12 = lVar12 + 1;
      } while (param_3[lVar12] != 0);
      iVar6 = (int)lVar12;
      if (((int)local_100 != 0) || (iVar1 = 1, iVar6 == 0)) {
        iVar1 = 0;
      }
      local_e8 = puVar3;
      local_e0 = (int)local_100;
      local_dc = local_100._4_4_;
      if (local_100._4_4_ < (int)local_100 + iVar6 + iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8);
      }
      iVar7 = local_e0;
      puVar3 = local_e8;
      iVar1 = local_e0;
      if (iVar6 != 0) {
        lVar12 = (longlong)local_e0;
        local_e0 = local_e0 + (uint)(local_e0 == 0) + iVar6;
        if (local_dc < local_e0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,iVar7);
        }
        iVar1 = local_e0;
        puVar3 = local_e8;
        puVar5 = local_e8 + (lVar12 - (ulonglong)(iVar7 != 0));
        _guard_xfg_dispatch_icall_nop(puVar5,param_3,(longlong)iVar6 * 2);
        puVar5[iVar6] = 0;
      }
    }
    local_110 = 1;
    puVar5 = &DAT_143f3eda8;
    if (iVar1 != 0) {
      puVar5 = puVar3;
    }
    local_118 = local_c8;
    puVar10 = &DAT_143f3eda8;
    if ((int)local_f0 != 0) {
      puVar10 = local_f8;
    }
    NotifyRegistrationEvent(puVar10,puVar5,1);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (local_f8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_60 = 0;
    if (local_68 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_a8);
    return;
  }
  FUN_141795eb0(&local_108,param_3);
  local_110 = 0;
  puVar3 = &DAT_143f3eda8;
  if ((int)local_100 != 0) {
    puVar3 = local_108;
  }
  NotifyRegistrationEvent(param_4,puVar3,0,0);
  puVar10 = (undefined2 *)0x0;
  local_d0 = 10;
  local_d8 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  puVar5 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,L"Default__",0x14);
  puVar3 = local_108;
  iVar1 = (int)local_100;
  if ((int)local_d0 < 2) {
    local_f8 = (undefined2 *)0x0;
    bVar13 = true;
    puVar11 = puVar10;
    puVar10 = puVar5;
    local_f0._0_4_ = iVar1;
    if (iVar1 == 0) goto LAB_14179b8da;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,(ulonglong)local_100 & 0xffffffff,0);
    puVar11 = local_f8;
    _guard_xfg_dispatch_icall_nop(local_f8,puVar3,(longlong)iVar1 * 2);
    iVar7 = (int)local_f0;
  }
  else {
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    if (((int)local_d0 != 0) || (iVar1 = 1, iVar6 == 0)) {
      iVar1 = 0;
    }
    local_f8 = puVar5;
    local_f0._0_4_ = (int)local_d0;
    local_f0._4_4_ = local_d0._4_4_;
    if (local_d0._4_4_ < (int)local_d0 + iVar1 + iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8);
    }
    iVar1 = (int)local_f0;
    local_d8 = local_108;
    puVar11 = local_f8;
    iVar7 = (int)local_f0;
    if (iVar6 != 0) {
      lVar12 = (longlong)(int)local_f0;
      local_f0._0_4_ = (int)local_f0 + (uint)((int)local_f0 == 0) + iVar6;
      if (local_f0._4_4_ < (int)local_f0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,iVar1);
      }
      iVar7 = (int)local_f0;
      puVar11 = local_f8;
      puVar3 = local_f8 + (lVar12 - (ulonglong)(iVar1 != 0));
      _guard_xfg_dispatch_icall_nop(puVar3,local_d8,(longlong)iVar6 * 2);
      puVar3[iVar6] = 0;
    }
  }
  bVar13 = iVar7 == 0;
LAB_14179b8da:
  uVar4 = local_c8;
  puVar3 = &DAT_143f3eda8;
  if (!bVar13) {
    puVar3 = puVar11;
  }
  local_110 = 0;
  local_118 = local_c8;
  NotifyRegistrationEvent(local_e8,puVar3,1);
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  plVar2 = (longlong *)FUN_14178d890();
  iVar1 = (int)plVar2[1];
  *(int *)(plVar2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = uVar4;
  if (local_108 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14179bcc0 UObjectCompiledInDeferEnum body=283 status=ok
// SIG undefined UObjectCompiledInDeferEnum(void)

void UObjectCompiledInDeferEnum
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,
               undefined8 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined8 local_res8;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  local_res8 = param_1;
  local_res18 = param_3;
  if (param_4 == '\0') {
    local_38 = param_1;
    uStack_30 = param_2;
    plVar3 = (longlong *)FUN_14178d820();
    iVar2 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar2);
    }
    puVar1 = (undefined4 *)(*plVar3 + (longlong)iVar2 * 0x10);
    *puVar1 = (undefined4)local_38;
    puVar1[1] = local_38._4_4_;
    puVar1[2] = (undefined4)uStack_30;
    puVar1[3] = uStack_30._4_4_;
  }
  else {
    FName::FName(&local_38,param_5,1);
    uVar4 = FUN_14178d9e0();
    local_28 = &local_38;
    local_20 = &local_res8;
    TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
              (uVar4,local_res20,&local_28,0);
  }
  puVar5 = (undefined8 *)FName::ToString(&local_res18,&local_28);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar5;
  }
  NotifyRegistrationEvent(param_2,puVar6,3,0,local_res8,param_4);
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14179bde0 UObjectCompiledInDeferStruct body=283 status=ok
// SIG undefined UObjectCompiledInDeferStruct(void)

void UObjectCompiledInDeferStruct
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,
               undefined8 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined8 local_res8;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  local_res8 = param_1;
  local_res18 = param_3;
  if (param_4 == '\0') {
    local_38 = param_1;
    uStack_30 = param_2;
    plVar3 = (longlong *)FUN_14178d900();
    iVar2 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar2);
    }
    puVar1 = (undefined4 *)(*plVar3 + (longlong)iVar2 * 0x10);
    *puVar1 = (undefined4)local_38;
    puVar1[1] = local_38._4_4_;
    puVar1[2] = (undefined4)uStack_30;
    puVar1[3] = uStack_30._4_4_;
  }
  else {
    FName::FName(&local_38,param_5,1);
    uVar4 = FUN_14178da50();
    local_28 = &local_38;
    local_20 = &local_res8;
    TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
              (uVar4,local_res20,&local_28,0);
  }
  puVar5 = (undefined8 *)FName::ToString(&local_res18,&local_28);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar5;
  }
  NotifyRegistrationEvent(param_2,puVar6,2,0,local_res8,param_4);
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14179bf00 UObjectForceRegistration body=155 status=ok
// SIG undefined UObjectForceRegistration(void)

void UObjectForceRegistration(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int local_res10 [2];
  
  plVar3 = (longlong *)FUN_14178df90();
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(plVar3,local_res10,param_1);
  puVar6 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar6 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *plVar3);
  }
  puVar5 = puVar6 + 1;
  if (puVar6 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  if (puVar5 != (undefined8 *)0x0) {
    uVar1 = puVar5[1];
    uVar2 = *puVar5;
    TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
    ::Remove(plVar3,param_1);
    uVar4 = FUN_14171bfe0();
    (**(code **)(*param_1 + 0x10))(param_1,uVar4,uVar1,uVar2);
  }
  return;
}



// FUNCTION 14179bfa0 FUN_14179bfa0 body=1983 status=ok
// SIG undefined FUN_14179bfa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14179bfa0(void)

{
  longlong **pplVar1;
  int *piVar2;
  void *_Dst;
  undefined2 *puVar3;
  void *_Src;
  longlong lVar4;
  longlong lVar5;
  BOOL BVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  longlong *plVar21;
  int iVar22;
  longlong *plVar23;
  longlong *plVar24;
  undefined1 auStack_178 [32];
  longlong *local_158;
  undefined8 local_150;
  longlong local_148;
  uint local_140;
  uint local_13c;
  longlong *local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  undefined4 *local_108;
  ulonglong *puStack_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  undefined4 local_60 [4];
  undefined1 local_50 [8];
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469e9180) && (_Init_thread_header(&DAT_1469e9180), DAT_1469e9180 == -1))
  {
    FName::FName(&DAT_1469e9178,L"/Script/Engine");
    _Init_thread_footer(&DAT_1469e9180);
  }
  puVar7 = (ulonglong *)FUN_14178d890();
  if ((int)puVar7[1] != 0) {
    puVar11 = (undefined8 *)*puVar7;
    plVar15 = (longlong *)0x0;
    iVar19 = 0;
    *puVar7 = 0;
    uVar16 = puVar7[1];
    puVar7[1] = 0;
    local_118 = (longlong *)0x0;
    iVar13 = 0;
    local_110 = 0;
    local_128 = (longlong *)0x0;
    local_158 = (longlong *)((longlong)(int)uVar16 & 0x1fffffffffffffff);
    if (puVar11 + (int)uVar16 < puVar11) {
      local_158 = plVar15;
    }
    local_120 = 0;
    local_138 = (longlong *)0x0;
    local_130 = 0;
    plVar21 = plVar15;
    plVar23 = plVar15;
    plVar24 = plVar15;
    iVar22 = iVar19;
    local_f8 = puVar11;
    if (local_158 != (longlong *)0x0) {
      do {
        lVar8 = (*(code *)*puVar11)();
        lVar4 = *(longlong *)(lVar8 + 0x20);
        lVar14 = lVar8;
        while (lVar5 = lVar4, lVar5 != 0) {
          lVar14 = lVar5;
          lVar4 = *(longlong *)(lVar5 + 0x20);
        }
        lVar5 = *(longlong *)(lVar8 + 0x20);
        lVar4 = lVar8;
        if (*(longlong *)(lVar14 + 0x18) == DAT_1468e2358) {
          lVar14 = (longlong)(int)plVar15;
          uVar17 = (int)plVar15 + 1;
          local_120 = CONCAT44(local_120._4_4_,uVar17);
          if (local_120._4_4_ < (int)uVar17) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_128,plVar15);
            uVar17 = (uint)local_120;
          }
          plVar15 = (longlong *)(ulonglong)uVar17;
          plVar9 = local_128;
        }
        else {
          while (lVar14 = lVar5, lVar14 != 0) {
            lVar4 = lVar14;
            lVar5 = *(longlong *)(lVar14 + 0x20);
          }
          if (*(longlong *)(lVar4 + 0x18) == DAT_1469e9178) {
            lVar14 = (longlong)(int)plVar23;
            uVar17 = (int)plVar23 + 1;
            local_130 = CONCAT44(local_130._4_4_,uVar17);
            if (local_130._4_4_ < (int)uVar17) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_138,plVar23);
              uVar17 = (uint)local_130;
            }
            plVar23 = (longlong *)(ulonglong)uVar17;
            plVar9 = local_138;
          }
          else {
            lVar14 = (longlong)(int)plVar24;
            uVar17 = (int)plVar24 + 1;
            local_110 = CONCAT44(local_110._4_4_,uVar17);
            if (local_110._4_4_ < (int)uVar17) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_118,plVar24);
              uVar17 = (uint)local_110;
            }
            plVar24 = (longlong *)(ulonglong)uVar17;
            plVar9 = local_118;
          }
        }
        iVar13 = (int)plVar24;
        iVar22 = (int)plVar23;
        iVar19 = (int)plVar15;
        puVar11 = puVar11 + 1;
        plVar9[lVar14] = lVar8;
        plVar21 = (longlong *)((longlong)plVar21 + 1);
      } while (plVar21 != local_158);
    }
    uVar12 = 0;
    iVar18 = 0;
    uVar16 = (ulonglong)((longlong)(local_128 + iVar19) + (7 - (longlong)local_128)) >> 3;
    if (local_128 + iVar19 < local_128) {
      uVar16 = uVar12;
    }
    plVar15 = local_128;
    uVar20 = uVar12;
    if (uVar16 != 0) {
      do {
        if (((longlong *)*plVar15)[0x1f] == 0) {
          (**(code **)(*(longlong *)*plVar15 + 0x368))();
        }
        plVar15 = plVar15 + 1;
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar16);
    }
    uVar16 = (ulonglong)((longlong)(local_138 + iVar22) + (7 - (longlong)local_138)) >> 3;
    if (local_138 + iVar22 < local_138) {
      uVar16 = uVar12;
    }
    plVar15 = local_138;
    uVar20 = uVar12;
    if (uVar16 != 0) {
      do {
        if (((longlong *)*plVar15)[0x1f] == 0) {
          (**(code **)(*(longlong *)*plVar15 + 0x368))();
        }
        uVar20 = uVar20 + 1;
        plVar15 = plVar15 + 1;
      } while (uVar20 != uVar16);
    }
    uVar16 = (ulonglong)((longlong)(local_118 + iVar13) + (7 - (longlong)local_118)) >> 3;
    if (local_118 + iVar13 < local_118) {
      uVar16 = uVar12;
    }
    plVar15 = local_118;
    uVar20 = uVar12;
    if (uVar16 != 0) {
      do {
        if (((longlong *)*plVar15)[0x1f] == 0) {
          (**(code **)(*(longlong *)*plVar15 + 0x368))();
        }
        uVar20 = uVar20 + 1;
        plVar15 = plVar15 + 1;
      } while (uVar20 != uVar16);
    }
    lVar14 = FUN_14171b4a0();
    if ((*(int *)(lVar14 + 0x30) != 0) || (*(int *)(lVar14 + 0x20) != 0)) {
      local_158 = (longlong *)0x0;
      local_150 = 0;
      BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar14 + 0x38));
      if (BVar6 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar14 + 0x38));
      }
      pplVar1 = (longlong **)(lVar14 + 0x28);
      iVar19 = 0;
      if (&local_158 != pplVar1) {
        local_158 = *pplVar1;
        *pplVar1 = (longlong *)0x0;
        iVar18 = *(int *)(lVar14 + 0x30);
        iVar19 = *(int *)(lVar14 + 0x34);
        local_150 = *(undefined8 *)(lVar14 + 0x30);
        *(undefined8 *)(lVar14 + 0x30) = 0;
      }
      iVar13 = *(int *)(lVar14 + 0x20);
      if (iVar13 != 0) {
        if (iVar19 < iVar13 + iVar18) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_158);
        }
        _guard_xfg_dispatch_icall_nop
                  (local_158 + (longlong)(int)local_150 * 2,*(void **)(lVar14 + 0x18),
                   (longlong)iVar13 << 4);
        iVar18 = (int)local_150 + iVar13;
        *(undefined4 *)(lVar14 + 0x20) = 0;
        local_150 = CONCAT44(local_150._4_4_,iVar18);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar14 + 0x38));
      plVar21 = local_158 + (longlong)iVar18 * 2;
      local_148 = 0;
      local_140 = 0;
      local_13c = 0;
      uVar16 = uVar12;
      plVar15 = local_158;
      if (local_158 != plVar21) {
        while( true ) {
          _Src = (void *)*plVar15;
          iVar19 = (int)plVar15[1] + -1;
          if ((int)plVar15[1] == 0) {
            iVar19 = 0;
          }
          uVar17 = (uint)uVar12;
          if (iVar19 != 0) {
            iVar13 = (int)uVar16;
            local_140 = (uint)(iVar13 == 0) + iVar13 + iVar19;
            if ((int)(uint)uVar12 < (int)local_140) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,uVar16);
            }
            _Dst = (void *)(local_148 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar19 * 2);
            *(undefined2 *)((longlong)iVar19 * 2 + (longlong)_Dst) = 0;
            uVar16 = (ulonglong)local_140;
            uVar17 = local_13c;
          }
          iVar19 = (int)uVar16;
          local_140 = (2 - (uint)(iVar19 != 0)) + iVar19;
          if ((int)uVar17 < (int)local_140) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,uVar16);
          }
          plVar15 = plVar15 + 2;
          puVar3 = (undefined2 *)(local_148 + ((longlong)iVar19 - (ulonglong)(iVar19 != 0)) * 2);
          *puVar3 = 10;
          puVar3[1] = 0;
          if (plVar15 == plVar21) break;
          uVar12 = (ulonglong)local_13c;
          uVar16 = (ulonglong)local_140;
        }
      }
      lVar14 = FText::FromString(local_78,&local_148);
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_a0,L"Default Property warnings and errors:\n{0}",L"Core",
                          L"DefaultPropertyWarningAndErrors");
      puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_88,uVar10);
      local_60[0] = 4;
      FText::FText(local_50,lVar14);
      local_f0 = *puVar11;
      local_108 = local_60;
      puStack_100 = &local_30;
      local_e8 = puVar11[1];
      local_38 = '\x01';
      if (local_e8 != 0) {
        LOCK();
        *(int *)(local_e8 + 8) = *(int *)(local_e8 + 8) + 1;
        UNLOCK();
      }
      uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_e0,&local_108);
      uVar10 = FText::Format(local_b8,&local_f0,uVar10);
      FText::FText(local_d0,uVar10);
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_b0 + 1;
        lVar4 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar2 = (int *)((longlong)local_b0 + 0xc);
          iVar19 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_e0);
      if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
        LOCK();
        plVar15 = local_48 + 1;
        lVar4 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)local_48 + 0xc);
          iVar19 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      plVar15 = (longlong *)puVar11[1];
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar21 = plVar15 + 1;
        lVar4 = *plVar21;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          iVar19 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      plVar15 = *(longlong **)(lVar14 + 8);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar21 = plVar15 + 1;
        lVar14 = *plVar21;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          iVar19 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      FUN_1416786b0(0,local_d0,0);
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_c8 + 1;
        lVar14 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar2 = (int *)((longlong)local_c8 + 0xc);
          iVar19 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*local_c8 + 8))(local_c8,1);
          }
        }
      }
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_98 + 1;
        lVar14 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)local_98 + 0xc);
          iVar19 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
      if (local_148 != 0) {
        FMemory::Free();
      }
      plVar15 = local_158;
      for (iVar19 = (int)local_150; iVar19 != 0; iVar19 = iVar19 + -1) {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 2;
      }
      if (local_158 != (longlong *)0x0) {
        FMemory::Free(local_158);
      }
    }
    if (local_f8 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free(local_138);
    }
    if (local_128 != (longlong *)0x0) {
      FMemory::Free(local_128);
    }
    if (local_118 != (longlong *)0x0) {
      FMemory::Free(local_118);
    }
  }
  return;
}



// FUNCTION 14179c760 UObjectProcessRegistrants body=382 status=ok
// SIG undefined UObjectProcessRegistrants(void)

void UObjectProcessRegistrants(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_38;
  uint local_30;
  uint local_2c;
  ulonglong uVar10;
  
  puVar5 = DAT_1469e9048;
  uVar6 = 0;
  local_38 = 0;
  local_2c = 0;
  DAT_1469e9048 = (undefined4 *)0x0;
  DAT_1469e9050 = 0;
  uVar8 = uVar6;
  uVar12 = uVar6;
  while (iVar7 = (int)uVar8, puVar5 != (undefined4 *)0x0) {
    local_30 = iVar7 + 1;
    if ((int)uVar12 < (int)local_30) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_38,uVar8);
      uVar12 = (ulonglong)local_2c;
      uVar6 = local_38;
    }
    uVar8 = (ulonglong)local_30;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    puVar1 = (undefined4 *)(uVar6 + (longlong)iVar7 * 0x10);
    *puVar1 = *puVar5;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    puVar1 = *(undefined4 **)(puVar5 + 2);
    FMemory::operator_delete(puVar5,0x10);
    puVar5 = puVar1;
  }
  uVar10 = 0;
  uVar11 = uVar10;
  if (0 < iVar7) {
    do {
      UObjectForceRegistration(*(undefined8 *)(uVar6 + uVar11));
      puVar5 = DAT_1469e9048;
      DAT_1469e9048 = (undefined4 *)0x0;
      DAT_1469e9050 = 0;
      while (iVar7 = (int)uVar8, puVar5 != (undefined4 *)0x0) {
        local_30 = iVar7 + 1;
        if ((int)uVar12 < (int)local_30) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_38,uVar8);
          uVar12 = (ulonglong)local_2c;
          uVar6 = local_38;
        }
        uVar8 = (ulonglong)local_30;
        uVar2 = puVar5[1];
        uVar3 = puVar5[2];
        uVar4 = puVar5[3];
        puVar1 = (undefined4 *)(uVar6 + (longlong)iVar7 * 0x10);
        *puVar1 = *puVar5;
        puVar1[1] = uVar2;
        puVar1[2] = uVar3;
        puVar1[3] = uVar4;
        puVar1 = *(undefined4 **)(puVar5 + 2);
        FMemory::operator_delete(puVar5,0x10);
        puVar5 = puVar1;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar11 = uVar11 + 0x10;
    } while ((int)uVar9 < iVar7);
  }
  if (uVar6 != 0) {
    FMemory::Free(uVar6);
    return;
  }
  return;
}


