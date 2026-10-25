// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140d5ebd0 FUN_140d5ebd0 body=876 status=ok
// SIG undefined FUN_140d5ebd0(void)

int * FUN_140d5ebd0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *_Src;
  void *_Dst;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  undefined4 uVar15;
  bool local_res8;
  int local_68 [2];
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  
  uVar15 = 0xffffffff;
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
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar14 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar14;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar11 = (uint *)((longlong)plVar13 +
                    (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar11 = *puVar11 | 1 << ((byte)iVar14 & 0x1f);
  _Src = (undefined8 *)(*param_1 + (longlong)iVar14 * 0x28);
  puVar12 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  *_Src = *puVar12;
  lVar4 = puVar12[1];
  _Src[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
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
    plVar13 = (longlong *)_Src[1];
    local_50 = *_Src;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_48 = plVar13;
    FUN_140549810(param_1,local_68,&local_50);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar13 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_48)();
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    local_res8 = local_68[0] != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)local_68[0] * 0x28);
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      iVar14 = *param_2;
      bVar6 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar14;
      }
      lVar4 = *param_1;
      *(undefined4 *)(lVar4 + (longlong)iVar14 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar4 + 4 + (longlong)iVar14 * 0x28) = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar13 = (longlong *)param_1[4];
      *param_2 = local_68[0];
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar13 +
                        (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_140d5ef0a;
    }
  }
  cVar7 = TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar7 == '\0') {
    plVar13 = (longlong *)_Src[1];
    plVar5 = (longlong *)*_Src;
    iVar14 = *param_2;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_60 = plVar5;
    local_58 = plVar13;
    uVar9 = (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *plVar5;
    if (uVar9 < 4) {
      pbVar10 = (byte *)(**(code **)(lVar4 + 0x10))(plVar5);
      uVar9 = (uint)*pbVar10;
    }
    else if (uVar9 < 8) {
      puVar11 = (uint *)(**(code **)(lVar4 + 0x10))();
      uVar9 = *puVar11;
    }
    else {
      puVar12 = (undefined8 *)(**(code **)(lVar4 + 0x10))(plVar5);
      uVar9 = (int)*puVar12 + (int)((ulonglong)*puVar12 >> 0x20) * 0x17;
    }
    plVar5 = local_58;
    *(uint *)((longlong)_Src + 0x24) = (int)param_1[9] - 1U & uVar9;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar13 + 1;
      lVar4 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar13 +
          ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x24)) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 +
            ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x24)) * 4) =
         iVar14;
  }
LAB_140d5ef0a:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140d5ef40 FUN_140d5ef40 body=839 status=ok
// SIG undefined FUN_140d5ef40(void)

int * FUN_140d5ef40(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  void *_Dst;
  undefined8 *_Src;
  bool local_res8;
  int local_res10 [2];
  undefined8 local_48;
  longlong *local_40;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow(param_1);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar12 * 0x80 + 4 + *param_1);
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x80 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar9 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar9 = *puVar9 | 1 << ((byte)iVar12 & 0x1f);
  _Src = (undefined8 *)((longlong)iVar12 * 0x80 + *param_1);
  FUN_140d5b990(param_3,_Src);
  *(undefined4 *)(_Src + 0xf) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    plVar11 = (longlong *)_Src[1];
    local_48 = *_Src;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_40 = plVar11;
    FUN_140d76bb0(param_1,local_res10,&local_48);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar11 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)();
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    iVar12 = local_res10[0];
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_res10[0] * 0x80 + *param_1);
      FUN_140d658c0((longlong)_Dst + 0x10);
      plVar11 = *(longlong **)((longlong)_Dst + 8);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar11 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        iVar12 = local_res10[0];
        if ((int)lVar5 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          iVar12 = local_res10[0];
          if (iVar2 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
            iVar12 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x78);
      FUN_140483a60(param_1,*param_2,1);
      *param_2 = iVar12;
      goto LAB_140d5f249;
    }
  }
  cVar6 = FUN_140d6f970(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar6 == '\0') {
    plVar11 = (longlong *)_Src[1];
    plVar4 = (longlong *)*_Src;
    iVar12 = *param_2;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    uVar7 = (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar5 = *plVar4;
    if (uVar7 < 4) {
      pbVar8 = (byte *)(**(code **)(lVar5 + 0x10))(plVar4);
      uVar7 = (uint)*pbVar8;
    }
    else if (uVar7 < 8) {
      puVar9 = (uint *)(**(code **)(lVar5 + 0x10))();
      uVar7 = *puVar9;
    }
    else {
      puVar10 = (undefined8 *)(**(code **)(lVar5 + 0x10))(plVar4);
      uVar7 = (int)*puVar10 + (int)((ulonglong)*puVar10 >> 0x20) * 0x17;
    }
    *(uint *)((longlong)_Src + 0x7c) = (int)param_1[9] - 1U & uVar7;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar11 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xf) =
         *(undefined4 *)
          ((longlong)plVar11 +
          ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x7c)) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 +
            ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x7c)) * 4) =
         iVar12;
  }
LAB_140d5f249:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140d5f290 FUN_140d5f290 body=641 status=ok
// SIG undefined FUN_140d5f290(void)

int * FUN_140d5f290(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  undefined8 *_Src;
  longlong *plVar12;
  bool bVar13;
  int local_res8 [2];
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar7 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  puVar3 = (undefined8 *)param_3[1];
  _Src = (undefined8 *)((longlong)iVar7 * 0x38 + *param_1);
  FString::FString(_Src,*param_3);
  _Src[2] = *puVar3;
  lVar4 = puVar3[1];
  _Src[3] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  bVar13 = false;
  _Src[4] = puVar3[2];
  _Src[5] = puVar3[3];
  puVar3[3] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(_Src + 6) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar13 = local_res8[0] != -1;
    if (bVar13) {
      plVar12 = (longlong *)((longlong)local_res8[0] * 0x38 + *param_1);
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
                (plVar12 + 2);
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar12,_Src,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140d5f4e8;
    }
  }
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    uVar6 = (uVar10 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar11 = '\0';
    if (uVar6 != 0) {
      iVar7 = 0x1f - iVar9;
    }
    uVar6 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    iVar9 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*_Src;
    }
    uVar10 = FUN_140438070(puVar8);
    uVar10 = (int)param_1[9] - 1U & uVar10;
    *(uint *)((longlong)_Src + 0x34) = uVar10;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 6) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140d5f4e8:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 140d5f520 FUN_140d5f520 body=99 status=ok
// SIG undefined FUN_140d5f520(void)

longlong FUN_140d5f520(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x238);
  plVar1 = plVar3 + *(int *)(param_1 + 0x240);
  while( true ) {
    if (plVar3 == plVar1) {
      plVar3 = *(longlong **)(param_1 + 0x248);
      plVar1 = plVar3 + *(int *)(param_1 + 0x250);
      while( true ) {
        if (plVar3 == plVar1) {
          return 0;
        }
        lVar2 = *plVar3;
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xc0) == param_2)) break;
        plVar3 = plVar3 + 1;
      }
      return lVar2;
    }
    lVar2 = *plVar3;
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xc0) == param_2)) break;
    plVar3 = plVar3 + 1;
  }
  return lVar2;
}



// FUNCTION 140d5f590 FUN_140d5f590 body=207 status=ok
// SIG undefined FUN_140d5f590(void)

undefined8 FUN_140d5f590(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int local_res8 [2];
  int local_res10 [2];
  int *local_res20;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  local_res10[0] = param_2;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar3 = param_1 + 0x48;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *plVar1 + (longlong)iVar2 * 0x28;
        if (*(int *)(*plVar1 + (longlong)iVar2 * 0x28) == param_2) {
          if ((iVar2 != -1) && (lVar3 != 0)) goto LAB_140d5f634;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = local_res10;
  FUN_140d5cca0(plVar1,local_res8,&local_res20,0);
  lVar3 = *plVar1 + (longlong)local_res8[0] * 0x28;
LAB_140d5f634:
  if (*(int *)(lVar3 + 8) == 0) {
    return 0;
  }
  FVariantData::GetValue((int *)(lVar3 + 8),param_3);
  return 1;
}



// FUNCTION 140d5f660 FUN_140d5f660 body=207 status=ok
// SIG undefined FUN_140d5f660(void)

undefined8 FUN_140d5f660(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int local_res8 [2];
  int local_res10 [2];
  int *local_res20;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  local_res10[0] = param_2;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar3 = param_1 + 0x48;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *plVar1 + (longlong)iVar2 * 0x28;
        if (*(int *)(*plVar1 + (longlong)iVar2 * 0x28) == param_2) {
          if ((iVar2 != -1) && (lVar3 != 0)) goto LAB_140d5f704;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = local_res10;
  FUN_140d5cca0(plVar1,local_res8,&local_res20,0);
  lVar3 = *plVar1 + (longlong)local_res8[0] * 0x28;
LAB_140d5f704:
  if (*(int *)(lVar3 + 8) == 0) {
    return 0;
  }
  FVariantData::GetValue((int *)(lVar3 + 8),param_3);
  return 1;
}



// FUNCTION 140d5f730 FUN_140d5f730 body=207 status=ok
// SIG undefined FUN_140d5f730(void)

undefined8 FUN_140d5f730(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int local_res8 [2];
  int local_res10 [2];
  int *local_res20;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  local_res10[0] = param_2;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar3 = param_1 + 0x48;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *plVar1 + (longlong)iVar2 * 0x28;
        if (*(int *)(*plVar1 + (longlong)iVar2 * 0x28) == param_2) {
          if ((iVar2 != -1) && (lVar3 != 0)) goto LAB_140d5f7d4;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = local_res10;
  FUN_140d5cca0(plVar1,local_res8,&local_res20,0);
  lVar3 = *plVar1 + (longlong)local_res8[0] * 0x28;
LAB_140d5f7d4:
  if (*(int *)(lVar3 + 8) == 0) {
    return 0;
  }
  FUN_1404b0a70((int *)(lVar3 + 8),param_3);
  return 1;
}



// FUNCTION 140d5f800 FUN_140d5f800 body=207 status=ok
// SIG undefined FUN_140d5f800(void)

undefined8 FUN_140d5f800(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int local_res8 [2];
  int local_res10 [2];
  int *local_res20;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  local_res10[0] = param_2;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar3 = param_1 + 0x48;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *plVar1 + (longlong)iVar2 * 0x28;
        if (*(int *)(*plVar1 + (longlong)iVar2 * 0x28) == param_2) {
          if ((iVar2 != -1) && (lVar3 != 0)) goto LAB_140d5f8a4;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = local_res10;
  FUN_140d5cca0(plVar1,local_res8,&local_res20,0);
  lVar3 = *plVar1 + (longlong)local_res8[0] * 0x28;
LAB_140d5f8a4:
  if (*(int *)(lVar3 + 8) == 0) {
    return 0;
  }
  FVariantData::GetValue((int *)(lVar3 + 8),param_3);
  return 1;
}



// FUNCTION 140d5f8d0 FUN_140d5f8d0 body=920 status=ok
// SIG undefined FUN_140d5f8d0(void)

void FUN_140d5f8d0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  
  iVar12 = (param_2 + -2) / 2;
  if (-1 < iVar12) {
    iVar16 = iVar12 * 2 + 1;
    do {
      iVar6 = iVar12;
      if (iVar16 < param_2) {
        do {
          iVar5 = iVar6 * 2;
          iVar15 = iVar5 + 1;
          if (iVar5 + 2 < param_2) {
            lVar13 = (longlong)iVar5 + 2;
            lVar14 = (longlong)iVar15;
            if (*(char *)(param_1 + lVar13 * 5 + 2) == '\0') {
              if (*(char *)(param_1 + lVar14 * 5 + 2) != '\0') goto LAB_140d5f953;
LAB_140d5f95b:
              if ((double)*(uint *)(param_1 + lVar13 * 5 + 4) <=
                  (double)*(uint *)(param_1 + lVar14 * 5 + 4) * 1.5) {
                if ((double)*(uint *)(param_1 + lVar14 * 5 + 4) <=
                    (double)*(uint *)(param_1 + lVar13 * 5 + 4) * 1.5) {
                  bVar4 = (double)param_1[lVar13 * 5 + 3] < (double)param_1[lVar14 * 5 + 3];
                }
                else {
                  bVar4 = false;
                }
              }
              else {
                bVar4 = true;
              }
            }
            else if (*(char *)(param_1 + lVar14 * 5 + 2) == '\0') {
              bVar4 = false;
            }
            else {
LAB_140d5f953:
              if (*(char *)(param_1 + lVar13 * 5 + 2) != '\0') goto LAB_140d5f95b;
              bVar4 = true;
            }
            if (bVar4) {
              iVar15 = iVar5;
            }
            iVar15 = iVar15 + 1;
          }
          puVar17 = param_1 + (longlong)iVar6 * 5;
          puVar1 = param_1 + (longlong)iVar15 * 5;
          if ((*(char *)(puVar17 + 2) != '\0') && (*(char *)(puVar1 + 2) == '\0')) break;
          if ((*(char *)(puVar1 + 2) == '\0') || (*(char *)(puVar17 + 2) != '\0')) {
            if (((double)*(uint *)(puVar17 + 4) <= (double)*(uint *)(puVar1 + 4) * 1.5) &&
               (((double)*(uint *)(puVar17 + 4) * 1.5 < (double)*(uint *)(puVar1 + 4) ||
                ((double)puVar1[3] <= (double)puVar17[3])))) break;
          }
          if (puVar17 != puVar1) {
            uVar7 = puVar1[1];
            uVar8 = *puVar17;
            uVar9 = puVar17[1];
            uVar10 = puVar17[2];
            uVar11 = puVar17[3];
            uVar3 = puVar17[4];
            *puVar17 = *puVar1;
            puVar17[1] = uVar7;
            uVar7 = puVar1[3];
            puVar17[2] = puVar1[2];
            puVar17[3] = uVar7;
            puVar17[4] = puVar1[4];
            *puVar1 = uVar8;
            puVar1[1] = uVar9;
            puVar1[2] = uVar10;
            puVar1[3] = uVar11;
            puVar1[4] = uVar3;
          }
          iVar6 = iVar15;
          if (param_2 <= iVar15 * 2 + 1) break;
        } while( true );
      }
      iVar16 = iVar16 + -2;
      iVar12 = iVar12 + -1;
    } while (-1 < iVar12);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar17 = param_1 + (longlong)param_2 * 5;
    do {
      if (param_1 != puVar17) {
        uVar7 = puVar17[1];
        uVar8 = *param_1;
        uVar9 = param_1[1];
        uVar10 = param_1[2];
        uVar11 = param_1[3];
        uVar3 = param_1[4];
        *param_1 = *puVar17;
        param_1[1] = uVar7;
        uVar7 = puVar17[3];
        param_1[2] = puVar17[2];
        param_1[3] = uVar7;
        param_1[4] = puVar17[4];
        *puVar17 = uVar8;
        puVar17[1] = uVar9;
        puVar17[2] = uVar10;
        puVar17[3] = uVar11;
        puVar17[4] = uVar3;
      }
      iVar12 = 0;
      if (1 < param_2) {
        do {
          iVar6 = iVar12 * 2;
          iVar16 = iVar6 + 1;
          if (iVar6 + 2 < param_2) {
            lVar13 = (longlong)iVar6 + 2;
            lVar14 = (longlong)iVar16;
            if (*(char *)(param_1 + lVar13 * 5 + 2) == '\0') {
              if (*(char *)(param_1 + lVar14 * 5 + 2) != '\0') goto LAB_140d5fb33;
LAB_140d5fb3b:
              if ((double)*(uint *)(param_1 + lVar13 * 5 + 4) <=
                  (double)*(uint *)(param_1 + lVar14 * 5 + 4) * 1.5) {
                if ((double)*(uint *)(param_1 + lVar14 * 5 + 4) <=
                    (double)*(uint *)(param_1 + lVar13 * 5 + 4) * 1.5) {
                  bVar4 = (double)param_1[lVar13 * 5 + 3] < (double)param_1[lVar14 * 5 + 3];
                }
                else {
                  bVar4 = false;
                }
              }
              else {
                bVar4 = true;
              }
            }
            else if (*(char *)(param_1 + lVar14 * 5 + 2) == '\0') {
              bVar4 = false;
            }
            else {
LAB_140d5fb33:
              if (*(char *)(param_1 + lVar13 * 5 + 2) != '\0') goto LAB_140d5fb3b;
              bVar4 = true;
            }
            if (bVar4) {
              iVar16 = iVar6;
            }
            iVar16 = iVar16 + 1;
          }
          puVar1 = param_1 + (longlong)iVar12 * 5;
          puVar2 = param_1 + (longlong)iVar16 * 5;
          if ((*(char *)(puVar1 + 2) != '\0') && (*(char *)(puVar2 + 2) == '\0')) break;
          if ((*(char *)(puVar2 + 2) == '\0') || (*(char *)(puVar1 + 2) != '\0')) {
            if (((double)*(uint *)(puVar1 + 4) <= (double)*(uint *)(puVar2 + 4) * 1.5) &&
               (((double)*(uint *)(puVar1 + 4) * 1.5 < (double)*(uint *)(puVar2 + 4) ||
                ((double)puVar2[3] <= (double)puVar1[3])))) break;
          }
          if (puVar1 != puVar2) {
            uVar7 = puVar2[1];
            uVar8 = *puVar1;
            uVar9 = puVar1[1];
            uVar10 = puVar1[2];
            uVar11 = puVar1[3];
            uVar3 = puVar1[4];
            *puVar1 = *puVar2;
            puVar1[1] = uVar7;
            uVar7 = puVar2[3];
            puVar1[2] = puVar2[2];
            puVar1[3] = uVar7;
            puVar1[4] = puVar2[4];
            *puVar2 = uVar8;
            puVar2[1] = uVar9;
            puVar2[2] = uVar10;
            puVar2[3] = uVar11;
            puVar2[4] = uVar3;
          }
          iVar12 = iVar16;
          if (param_2 <= iVar16 * 2 + 1) break;
        } while( true );
      }
      param_2 = param_2 + -1;
      puVar17 = puVar17 + -5;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140d5fc70 FUN_140d5fc70 body=552 status=ok
// SIG undefined FUN_140d5fc70(void)

void FUN_140d5fc70(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  
  iVar11 = (param_2 + -2) / 2;
  if (-1 < iVar11) {
    iVar12 = iVar11 * 2 + 1;
    iVar4 = iVar12;
    iVar14 = iVar11;
joined_r0x000140d5fca6:
    do {
      if (iVar12 < param_2) {
        iVar12 = iVar11 * 2;
        iVar13 = iVar12 + 1;
        if (iVar12 + 2 < param_2) {
          cVar2 = *(char *)(param_1[(longlong)iVar13 * 2] + 0x30);
          if (*(char *)(param_1[((longlong)iVar12 + 2) * 2] + 0x30) == '\0') {
            if (cVar2 == '\0') goto LAB_140d5fcf4;
            bVar3 = false;
          }
          else if (cVar2 == '\0') {
            bVar3 = true;
          }
          else {
LAB_140d5fcf4:
            bVar3 = *(double *)(param_1[(longlong)iVar13 * 2] + 0x28) <
                    *(double *)(param_1[((longlong)iVar12 + 2) * 2] + 0x28);
          }
          if (bVar3) {
            iVar13 = iVar12;
          }
          iVar13 = iVar13 + 1;
        }
        plVar16 = param_1 + (longlong)iVar11 * 2;
        plVar1 = param_1 + (longlong)iVar13 * 2;
        cVar2 = *(char *)(param_1[(longlong)iVar13 * 2] + 0x30);
        if (*(char *)(*plVar16 + 0x30) != '\0') {
          if (cVar2 != '\0') {
LAB_140d5fd3c:
            if (*(double *)(*plVar16 + 0x28) <= *(double *)(param_1[(longlong)iVar13 * 2] + 0x28))
            goto LAB_140d5fd75;
          }
          if (plVar16 != plVar1) {
            lVar5 = plVar1[1];
            lVar6 = *plVar16;
            lVar7 = plVar16[1];
            *plVar16 = *plVar1;
            plVar16[1] = lVar5;
            *plVar1 = lVar6;
            plVar1[1] = lVar7;
          }
          iVar12 = iVar13 * 2 + 1;
          iVar11 = iVar13;
          goto joined_r0x000140d5fca6;
        }
        if (cVar2 == '\0') goto LAB_140d5fd3c;
      }
LAB_140d5fd75:
      iVar12 = iVar4 + -2;
      iVar11 = iVar14 + -1;
      iVar4 = iVar12;
      iVar14 = iVar11;
    } while (-1 < iVar11);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar15 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar15) {
        uVar8 = puVar15[1];
        uVar9 = *param_1;
        uVar10 = param_1[1];
        *param_1 = *puVar15;
        param_1[1] = uVar8;
        *puVar15 = uVar9;
        puVar15[1] = uVar10;
      }
      iVar11 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar11 * 2;
          iVar12 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            cVar2 = *(char *)(param_1[(longlong)iVar12 * 2] + 0x30);
            if (*(char *)(param_1[((longlong)iVar4 + 2) * 2] + 0x30) == '\0') {
              if (cVar2 == '\0') goto LAB_140d5fe04;
              bVar3 = false;
            }
            else if (cVar2 == '\0') {
              bVar3 = true;
            }
            else {
LAB_140d5fe04:
              bVar3 = *(double *)(param_1[(longlong)iVar12 * 2] + 0x28) <
                      *(double *)(param_1[((longlong)iVar4 + 2) * 2] + 0x28);
            }
            if (bVar3) {
              iVar12 = iVar4;
            }
            iVar12 = iVar12 + 1;
          }
          plVar16 = param_1 + (longlong)iVar11 * 2;
          plVar1 = param_1 + (longlong)iVar12 * 2;
          cVar2 = *(char *)(param_1[(longlong)iVar12 * 2] + 0x30);
          if (*(char *)(*plVar16 + 0x30) == '\0') {
            if (cVar2 != '\0') break;
LAB_140d5fe4c:
            if (*(double *)(*plVar16 + 0x28) <= *(double *)(param_1[(longlong)iVar12 * 2] + 0x28))
            break;
          }
          else if (cVar2 != '\0') goto LAB_140d5fe4c;
          if (plVar16 != plVar1) {
            lVar5 = plVar1[1];
            lVar6 = *plVar16;
            lVar7 = plVar16[1];
            *plVar16 = *plVar1;
            plVar16[1] = lVar5;
            *plVar1 = lVar6;
            plVar1[1] = lVar7;
          }
          iVar11 = iVar12;
        } while (iVar12 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar15 = puVar15 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140d5fea0 FUN_140d5fea0 body=1207 status=ok
// SIG undefined FUN_140d5fea0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d5fea0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + param_2 * 0x28 + -0x28;
    fVar17 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar17 = fVar17 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar17 = _guard_xfg_dispatch_icall_nop(fVar17);
    local_338 = (undefined4)(longlong)(fVar17 + fVar17);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar16 = &local_348;
    do {
      puVar13 = (undefined8 *)*plVar16;
      puVar10 = (undefined8 *)plVar16[1];
      lVar1 = plVar16[2];
      local_358._0_4_ = (int)lVar1;
      lVar9 = ((longlong)puVar10 - (longlong)puVar13) / 0x28 + 1;
      puVar12 = puVar13;
      if ((int)local_358 != 0) {
LAB_140d5ffa0:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          puVar13 = puVar12 + (lVar9 >> 1) * 5;
          if (puVar13 != puVar12) {
            uVar4 = puVar12[1];
            uVar5 = *puVar13;
            uVar6 = puVar13[1];
            uVar7 = puVar13[2];
            uVar8 = puVar13[3];
            uVar2 = puVar13[4];
            *puVar13 = *puVar12;
            puVar13[1] = uVar4;
            uVar4 = puVar12[3];
            puVar13[2] = puVar12[2];
            puVar13[3] = uVar4;
            puVar13[4] = puVar12[4];
            *puVar12 = uVar5;
            puVar12[1] = uVar6;
            puVar12[2] = uVar7;
            puVar12[3] = uVar8;
            puVar12[4] = uVar2;
          }
          puVar14 = puVar10 + 5;
          puVar13 = puVar12;
LAB_140d60000:
          puVar11 = puVar13;
          puVar13 = puVar11 + 5;
          if (puVar13 <= puVar10) goto code_r0x000140d60009;
          goto LAB_140d60066;
        }
        for (; puVar13 = puVar12, puVar14 = puVar12, puVar12 < puVar10; puVar10 = puVar10 + -5) {
          while (puVar11 = puVar13, puVar13 = puVar14 + 5, puVar13 <= puVar10) {
            if (*(char *)(puVar11 + 2) == '\0') {
              if (*(char *)(puVar14 + 7) != '\0') goto LAB_140d602a9;
LAB_140d602b1:
              if ((double)*(uint *)(puVar11 + 4) <= (double)*(uint *)(puVar14 + 9) * 1.5) {
                if ((double)*(uint *)(puVar14 + 9) <= (double)*(uint *)(puVar11 + 4) * 1.5) {
                  bVar3 = (double)puVar11[3] < (double)puVar14[8];
                }
                else {
                  bVar3 = false;
                }
              }
              else {
                bVar3 = true;
              }
            }
            else if (*(char *)(puVar14 + 7) == '\0') {
              bVar3 = false;
            }
            else {
LAB_140d602a9:
              if (*(char *)(puVar11 + 2) != '\0') goto LAB_140d602b1;
              bVar3 = true;
            }
            puVar14 = puVar13;
            if (!bVar3) {
              puVar13 = puVar11;
            }
          }
          if (puVar11 != puVar10) {
            uVar4 = puVar10[1];
            uVar5 = *puVar11;
            uVar6 = puVar11[1];
            uVar7 = puVar11[2];
            uVar8 = puVar11[3];
            uVar2 = puVar11[4];
            *puVar11 = *puVar10;
            puVar11[1] = uVar4;
            uVar4 = puVar10[3];
            puVar11[2] = puVar10[2];
            puVar11[3] = uVar4;
            puVar11[4] = puVar10[4];
            *puVar10 = uVar5;
            puVar10[1] = uVar6;
            puVar10[2] = uVar7;
            puVar10[3] = uVar8;
            puVar10[4] = uVar2;
          }
        }
        goto LAB_140d60216;
      }
LAB_140d60207:
      local_358 = lVar1;
      FUN_140d5f8d0(puVar13,lVar9,param_3,param_4);
LAB_140d60216:
      plVar16 = plVar16 + -3;
    } while (&local_348 <= plVar16);
  }
  return;
code_r0x000140d60009:
  if ((*(char *)(puVar12 + 2) != '\0') && (*(char *)(puVar11 + 7) == '\0')) goto LAB_140d60000;
  if ((*(char *)(puVar11 + 7) == '\0') || (*(char *)(puVar12 + 2) != '\0')) {
    if (((double)*(uint *)(puVar12 + 4) <= (double)*(uint *)(puVar11 + 9) * 1.5) &&
       (((double)*(uint *)(puVar12 + 4) * 1.5 < (double)*(uint *)(puVar11 + 9) ||
        ((double)puVar11[8] <= (double)puVar12[3])))) goto LAB_140d60000;
  }
LAB_140d60066:
  while (puVar15 = puVar14, puVar14 = puVar15 + -5, puVar12 < puVar14) {
    if ((*(char *)(puVar15 + -3) == '\0') || (*(char *)(puVar12 + 2) != '\0')) {
      if ((*(char *)(puVar12 + 2) != '\0') && (*(char *)(puVar15 + -3) == '\0')) break;
      if (((double)*(uint *)(puVar12 + 4) * 1.5 < (double)*(uint *)(puVar15 + -1)) ||
         (((double)*(uint *)(puVar12 + 4) <= (double)*(uint *)(puVar15 + -1) * 1.5 &&
          ((double)puVar15[-2] < (double)puVar12[3])))) break;
    }
  }
  if (puVar13 <= puVar14) {
    if (puVar13 != puVar14) {
      uVar4 = puVar15[-4];
      uVar5 = *puVar13;
      uVar6 = puVar11[6];
      uVar7 = puVar11[7];
      uVar8 = puVar11[8];
      uVar2 = puVar11[9];
      *puVar13 = *puVar14;
      puVar11[6] = uVar4;
      uVar4 = puVar15[-2];
      puVar11[7] = puVar15[-3];
      puVar11[8] = uVar4;
      puVar11[9] = puVar15[-1];
      *puVar14 = uVar5;
      puVar15[-4] = uVar6;
      puVar15[-3] = uVar7;
      puVar15[-2] = uVar8;
      puVar15[-1] = uVar2;
    }
    goto LAB_140d60000;
  }
  if (puVar12 != puVar14) {
    uVar4 = puVar15[-4];
    uVar5 = *puVar12;
    uVar6 = puVar12[1];
    uVar7 = puVar12[2];
    uVar8 = puVar12[3];
    uVar2 = puVar12[4];
    *puVar12 = *puVar14;
    puVar12[1] = uVar4;
    uVar4 = puVar15[-2];
    puVar12[2] = puVar15[-3];
    puVar12[3] = uVar4;
    puVar12[4] = puVar15[-1];
    *puVar14 = uVar5;
    puVar15[-4] = uVar6;
    puVar15[-3] = uVar7;
    puVar15[-2] = uVar8;
    puVar15[-1] = uVar2;
  }
  local_358._0_4_ = (int)local_358 + -1;
  if (((longlong)puVar14 + (-0x28 - (longlong)puVar12)) / 0x28 <
      ((longlong)puVar10 - (longlong)puVar13) / 0x28) {
    if (puVar13 < puVar10) {
      *plVar16 = (longlong)puVar13;
      plVar16[1] = (longlong)puVar10;
      *(int *)(plVar16 + 2) = (int)local_358;
      plVar16 = plVar16 + 3;
    }
    if (puVar14 <= puVar12 + 5) goto LAB_140d60216;
    puVar10 = puVar15 + -10;
    puVar13 = puVar12;
  }
  else {
    if (puVar12 + 5 < puVar14) {
      *plVar16 = (longlong)puVar12;
      plVar16[1] = (longlong)(puVar15 + -10);
      *(int *)(plVar16 + 2) = (int)local_358;
      plVar16 = plVar16 + 3;
    }
    if (puVar10 <= puVar13) goto LAB_140d60216;
  }
  lVar9 = ((longlong)puVar10 - (longlong)puVar13) / 0x28 + 1;
  puVar12 = puVar13;
  if ((int)local_358 == 0) goto LAB_140d60207;
  goto LAB_140d5ffa0;
}



// FUNCTION 140d60360 FUN_140d60360 body=743 status=ok
// SIG undefined FUN_140d60360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d60360(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x10 + -0x10 + param_1;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar16 = _guard_xfg_dispatch_icall_nop(fVar16);
    local_318 = (undefined4)(longlong)(fVar16 + fVar16);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar15 = &local_328;
    do {
      plVar13 = (longlong *)*plVar15;
      plVar14 = (longlong *)plVar15[1];
      lVar1 = plVar15[2];
      local_338._0_4_ = (int)lVar1;
      lVar8 = ((longlong)plVar14 - (longlong)plVar13 >> 4) + 1;
      plVar12 = plVar13;
      if ((int)local_338 != 0) {
LAB_140d60430:
        if (8 < lVar8) {
          plVar13 = plVar12 + (lVar8 / 2) * 2;
          if (plVar13 != plVar12) {
            uVar4 = *(undefined4 *)((longlong)plVar12 + 4);
            lVar7 = plVar12[1];
            uVar5 = *(undefined4 *)((longlong)plVar12 + 0xc);
            lVar8 = *plVar13;
            lVar6 = plVar13[1];
            *(int *)plVar13 = (int)*plVar12;
            *(undefined4 *)((longlong)plVar13 + 4) = uVar4;
            *(int *)(plVar13 + 1) = (int)lVar7;
            *(undefined4 *)((longlong)plVar13 + 0xc) = uVar5;
            *plVar12 = lVar8;
            plVar12[1] = lVar6;
          }
          plVar9 = plVar14 + 2;
          plVar13 = plVar12;
LAB_140d60466:
          plVar11 = plVar13;
          plVar13 = plVar11 + 2;
          if (plVar13 <= plVar14) {
            cVar2 = *(char *)(*plVar13 + 0x30);
            if (*(char *)(*plVar12 + 0x30) == '\0') goto LAB_140d60486;
            if (cVar2 == '\0') goto LAB_140d604a0;
            goto LAB_140d6048a;
          }
          goto LAB_140d604a0;
        }
        for (; plVar9 = plVar12, plVar13 = plVar12, plVar12 < plVar14; plVar14 = plVar14 + -2) {
          while (plVar11 = plVar9, plVar13 = plVar13 + 2, plVar13 <= plVar14) {
            cVar2 = *(char *)(*plVar13 + 0x30);
            if (*(char *)(*plVar11 + 0x30) == '\0') {
              if (cVar2 == '\0') goto LAB_140d60601;
              bVar3 = false;
            }
            else if (cVar2 == '\0') {
              bVar3 = true;
            }
            else {
LAB_140d60601:
              bVar3 = *(double *)(*plVar13 + 0x28) < *(double *)(*plVar11 + 0x28);
            }
            plVar9 = plVar13;
            if (!bVar3) {
              plVar9 = plVar11;
            }
          }
          if (plVar11 != plVar14) {
            lVar6 = plVar14[1];
            lVar1 = *plVar11;
            lVar8 = plVar11[1];
            *plVar11 = *plVar14;
            plVar11[1] = lVar6;
            *plVar14 = lVar1;
            plVar14[1] = lVar8;
          }
        }
        goto LAB_140d6058d;
      }
LAB_140d6057e:
      local_338 = lVar1;
      FUN_140d5fc70(plVar13,lVar8,param_3,param_4);
LAB_140d6058d:
      plVar15 = plVar15 + -3;
    } while (&local_328 <= plVar15);
  }
  return;
LAB_140d60486:
  if (cVar2 != '\0') goto LAB_140d60466;
LAB_140d6048a:
  if (*(double *)(*plVar12 + 0x28) <= *(double *)(*plVar13 + 0x28)) goto LAB_140d60466;
LAB_140d604a0:
  do {
    plVar10 = plVar9;
    plVar9 = plVar10 + -2;
    if (plVar9 <= plVar12) break;
    cVar2 = *(char *)(*plVar12 + 0x30);
    if (*(char *)(*plVar9 + 0x30) == '\0') {
      if (cVar2 != '\0') goto LAB_140d604a0;
    }
    else if (cVar2 == '\0') break;
  } while (*(double *)(*plVar9 + 0x28) <= *(double *)(*plVar12 + 0x28));
  if (plVar13 <= plVar9) {
    if (plVar13 != plVar9) {
      uVar4 = *(undefined4 *)((longlong)plVar10 + -0xc);
      lVar7 = plVar10[-1];
      uVar5 = *(undefined4 *)((longlong)plVar10 + -4);
      lVar8 = *plVar13;
      lVar6 = plVar11[3];
      *(int *)plVar13 = (int)*plVar9;
      *(undefined4 *)((longlong)plVar11 + 0x14) = uVar4;
      *(int *)(plVar11 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)plVar11 + 0x1c) = uVar5;
      *plVar9 = lVar8;
      plVar10[-1] = lVar6;
    }
    goto LAB_140d60466;
  }
  if (plVar12 != plVar9) {
    uVar4 = *(undefined4 *)((longlong)plVar10 + -0xc);
    lVar7 = plVar10[-1];
    uVar5 = *(undefined4 *)((longlong)plVar10 + -4);
    lVar8 = *plVar12;
    lVar6 = plVar12[1];
    *(int *)plVar12 = (int)*plVar9;
    *(undefined4 *)((longlong)plVar12 + 4) = uVar4;
    *(int *)(plVar12 + 1) = (int)lVar7;
    *(undefined4 *)((longlong)plVar12 + 0xc) = uVar5;
    *plVar9 = lVar8;
    plVar10[-1] = lVar6;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)plVar9 + (-0x10 - (longlong)plVar12) & 0xfffffffffffffff0U) <
      (longlong)((longlong)plVar14 - (longlong)plVar13 & 0xfffffffffffffff0U)) {
    if (plVar13 < plVar14) {
      *plVar15 = (longlong)plVar13;
      plVar15[1] = (longlong)plVar14;
      *(int *)(plVar15 + 2) = (int)local_338;
      plVar15 = plVar15 + 3;
    }
    if (plVar9 <= plVar12 + 2) goto LAB_140d6058d;
    plVar14 = plVar10 + -4;
    plVar13 = plVar12;
  }
  else {
    if (plVar12 + 2 < plVar9) {
      *plVar15 = (longlong)plVar12;
      plVar15[1] = (longlong)(plVar10 + -4);
      *(int *)(plVar15 + 2) = (int)local_338;
      plVar15 = plVar15 + 3;
    }
    if (plVar14 <= plVar13) goto LAB_140d6058d;
  }
  lVar8 = ((longlong)plVar14 - (longlong)plVar13 >> 4) + 1;
  plVar12 = plVar13;
  if ((int)local_338 == 0) goto LAB_140d6057e;
  goto LAB_140d60430;
}



// FUNCTION 140d60650 FUN_140d60650 body=125 status=ok
// SIG undefined FUN_140d60650(void)

undefined8 * FUN_140d60650(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x88);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_144531478;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = &PTR_FUN_143f769a0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140d606d0 FUN_140d606d0 body=316 status=ok
// SIG undefined FUN_140d606d0(void)

undefined8 * FUN_140d606d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  puVar3 = (undefined8 *)operator_new(0x80);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar3 + 1) = 1;
  *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
  *puVar3 = &PTR_LAB_144531730;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = *param_1;
  lVar2 = param_1[1];
  puVar3[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar3[6] = 0;
  iVar5 = *(int *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  *(int *)(puVar3 + 7) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar3 + 6,iVar5,0);
    puVar4 = (undefined8 *)puVar3[6];
    do {
      *puVar4 = 0;
      iVar1 = *(int *)(param_2 + 1);
      _Src = (void *)*param_2;
      *(int *)(puVar4 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar4,_Src,(longlong)iVar1 * 2);
      }
      puVar4 = puVar4 + 2;
      param_2 = param_2 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)puVar3 + 0x44) = 100;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  *(undefined1 *)(puVar3 + 0xd) = 0;
  puVar3[0xe] = 0;
  *(undefined4 *)(puVar3 + 0xf) = 0;
  return puVar3;
}



// FUNCTION 140d60810 FUN_140d60810 body=754 status=ok
// SIG undefined FUN_140d60810(void)

void FUN_140d60810(longlong *param_1,longlong param_2,int param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int local_res10 [2];
  int local_res18 [4];
  longlong *local_48;
  int local_40;
  longlong *local_38;
  longlong **local_30;
  
  if (param_2 == 0) {
    return;
  }
  local_res18[0] = param_3;
  if ((char)param_1[10] == '\0') {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x54);
    *(undefined1 *)(param_1 + 10) = 1;
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    local_48 = (longlong *)0x0;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_40 = 3;
    local_48 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      plVar5[1] = (longlong)param_1;
      *plVar5 = (longlong)&PTR_GetPoolName_143f3f4f8;
      plVar5[2] = (longlong)FUN_140d6a230;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar6;
    }
    uVar7 = FUN_14164ab60();
    plVar5 = (longlong *)
             FUN_14158f860(uVar7,local_res10,&local_48,
                           L"TFriendEventMergeGroup_BatchTimerInitialExpire",
                           *(undefined4 *)((longlong)param_1 + 0x54));
    param_1[0x10] = *plVar5;
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_140d60940;
      (**(code **)(*local_48 + 0x28))(local_48,0);
      if (local_48 != (longlong *)0x0) {
        local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
      }
      local_40 = 0;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else {
    fVar1 = *(float *)((longlong)param_1 + 0x5c);
    *(float *)((longlong)param_1 + 0x5c) = fVar1 * *(float *)(param_1 + 0xb);
    *(float *)(param_1 + 0xc) = fVar1 + *(float *)(param_1 + 0xc);
  }
LAB_140d60940:
  if (*(uint *)(param_1 + 0xf) < *(uint *)((longlong)param_1 + 0x7c)) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)local_res18[0]) * 4);
      if (iVar4 != -1) {
        do {
          lVar6 = *param_1 + (longlong)iVar4 * 0x18;
          if (*(int *)(*param_1 + (longlong)iVar4 * 0x18) == local_res18[0]) {
            if ((iVar4 != -1) && (lVar6 != 0)) goto LAB_140d609d0;
            break;
          }
          iVar4 = *(int *)(lVar6 + 0x10);
        } while (iVar4 != -1);
      }
    }
    local_48 = (longlong *)local_res18;
    TSet<TTuple<int,FVisitedCoordinates_*>,TDefaultMapHashableKeyFuncs<int,FVisitedCoordinates_*,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<int_const_&>_>(param_1,local_res10,&local_48,0);
    lVar6 = *param_1 + (longlong)local_res10[0] * 0x18;
LAB_140d609d0:
    lVar6 = *(longlong *)(lVar6 + 8);
    if (lVar6 == 0) {
      plVar5 = (longlong *)((longlong)(int)param_1[0xf] * 0x188 + param_1[0xd]);
      *(int *)(param_1 + 0xf) = (int)param_1[0xf] + 1;
      FUN_140d87ff0(plVar5,param_1 + 0x13,param_2);
      uVar2 = *param_6;
      uVar3 = *param_5;
      *(undefined4 *)(plVar5 + 0x2f) = *param_4;
      local_38 = (longlong *)local_res18;
      local_30 = &local_48;
      *(undefined4 *)((longlong)plVar5 + 0x17c) = uVar3;
      *(undefined4 *)(plVar5 + 0x30) = uVar2;
      local_48 = plVar5;
      TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,unsigned___int64_const_&>_>
                (param_1,local_res10,&local_38,0);
      return;
    }
  }
  else {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)local_res18[0]) * 4);
      if (iVar4 != -1) {
        do {
          plVar5 = (longlong *)(*param_1 + (longlong)iVar4 * 0x18);
          if (*(int *)(*param_1 + (longlong)iVar4 * 0x18) == local_res18[0]) {
            if (iVar4 != -1) goto LAB_140d60ab3;
            break;
          }
          iVar4 = (int)plVar5[2];
        } while (iVar4 != -1);
      }
    }
    plVar5 = (longlong *)0x0;
LAB_140d60ab3:
    plVar8 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    if (plVar8 == (longlong *)0x0) {
      return;
    }
    lVar6 = *plVar8;
    if (lVar6 == 0) {
      return;
    }
  }
  uVar2 = *param_5;
  uVar3 = *param_4;
  *(undefined4 *)(lVar6 + 0x180) = *param_6;
  *(undefined4 *)(lVar6 + 0x17c) = uVar2;
  *(undefined4 *)(lVar6 + 0x178) = uVar3;
  return;
}



// FUNCTION 140d60b10 FUN_140d60b10 body=441 status=ok
// SIG undefined FUN_140d60b10(void)

int FUN_140d60b10(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  iVar3 = (int)param_1[1];
  lVar6 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  iVar11 = 0;
  cVar5 = (**(code **)**(undefined8 **)*param_2)(*(undefined8 **)*param_2,**(undefined8 **)*param_1)
  ;
  bVar14 = cVar5 == '\0';
  lVar10 = 0;
  iVar12 = 0;
  do {
    iVar13 = iVar12 + 1;
    lVar10 = lVar10 + 1;
    if (lVar10 < lVar6) {
      lVar7 = lVar10 * 0x10;
      do {
        cVar5 = (**(code **)**(undefined8 **)*param_2)
                          (*(undefined8 **)*param_2,**(undefined8 **)(lVar7 + *param_1));
        if (bVar14 != (cVar5 == '\0')) break;
        iVar13 = iVar13 + 1;
        lVar10 = lVar10 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar10 < lVar6);
    }
    iVar8 = iVar13 - iVar12;
    if (bVar14 == false) {
      if (iVar8 != 0) {
        plVar9 = (longlong *)((longlong)iVar12 * 0x10 + 8 + *param_1);
        do {
          plVar4 = (longlong *)*plVar9;
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
              iVar12 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar9 = plVar9 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    else {
      if (iVar11 != iVar12) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar11 * 0x10 + *param_1),
                   (void *)((longlong)iVar12 * 0x10 + *param_1),(longlong)iVar8 << 4);
      }
      iVar11 = iVar11 + iVar8;
    }
    bVar14 = (bool)(bVar14 ^ 1);
    iVar12 = iVar13;
    if (lVar6 <= lVar10) {
      *(int *)(param_1 + 1) = iVar11;
      return iVar3 - iVar11;
    }
  } while( true );
}



// FUNCTION 140d60cd0 FUN_140d60cd0 body=442 status=ok
// SIG undefined FUN_140d60cd0(void)

int FUN_140d60cd0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  byte bVar16;
  
  iVar3 = (int)param_1[1];
  lVar12 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar13 = 0;
  puVar4 = *(undefined8 **)(*param_1 + 8);
  iVar8 = 0;
  if ((puVar4 == (undefined8 *)0x0) ||
     (cVar6 = (**(code **)*puVar4)(puVar4,*(undefined8 *)*param_2), cVar6 == '\0')) {
    bVar16 = 1;
    uVar15 = uVar13;
  }
  else {
    bVar16 = 0;
    uVar15 = uVar13;
  }
  do {
    iVar14 = (int)uVar15;
    uVar13 = uVar13 + 1;
    uVar15 = (ulonglong)(iVar14 + 1);
    if ((longlong)uVar13 < lVar12) {
      lVar9 = uVar13 * 0x18;
      do {
        puVar4 = *(undefined8 **)(lVar9 + 8 + *param_1);
        if ((puVar4 == (undefined8 *)0x0) ||
           (cVar6 = (**(code **)*puVar4)(puVar4,*(undefined8 *)*param_2), cVar6 == '\0')) {
          bVar7 = 1;
        }
        else {
          bVar7 = 0;
        }
        if (bVar16 != bVar7) break;
        uVar15 = (ulonglong)((int)uVar15 + 1);
        uVar13 = uVar13 + 1;
        lVar9 = lVar9 + 0x18;
      } while ((longlong)uVar13 < lVar12);
    }
    iVar10 = (int)uVar15 - iVar14;
    if (bVar16 == 0) {
      if (iVar10 != 0) {
        plVar11 = (longlong *)(*param_1 + 0x10 + (longlong)iVar14 * 0x18);
        do {
          plVar5 = (longlong *)*plVar11;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar14 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          plVar11 = plVar11 + 3;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    else {
      if (iVar8 != iVar14) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar8 * 0x18),
                   (void *)(*param_1 + (longlong)iVar14 * 0x18),(longlong)iVar10 * 0x18);
      }
      iVar8 = iVar8 + iVar10;
    }
    bVar16 = bVar16 ^ 1;
    if (lVar12 <= (longlong)uVar13) {
      *(int *)(param_1 + 1) = iVar8;
      return iVar3 - iVar8;
    }
  } while( true );
}



// FUNCTION 140d60e90 FUN_140d60e90 body=606 status=ok
// SIG undefined FUN_140d60e90(void)

int FUN_140d60e90(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  undefined8 local_58;
  longlong *local_50;
  
  iVar3 = (int)param_1[1];
  lVar11 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar9 = 0;
  iVar8 = 0;
  cVar7 = FUN_140d67ba0(param_2,*param_1);
  bVar16 = cVar7 == '\0';
  uVar15 = uVar9;
  do {
    iVar14 = (int)uVar15;
    uVar15 = (ulonglong)(iVar14 + 1);
    uVar9 = uVar9 + 1;
    if ((longlong)uVar9 < lVar11) {
      lVar13 = uVar9 * 0x10;
      do {
        lVar4 = *param_1;
        lVar5 = *(longlong *)(lVar4 + lVar13);
        if (((lVar5 == 0) || (plVar12 = *(longlong **)(lVar5 + 0x10), plVar12 == (longlong *)0x0))
           || (cVar7 = (**(code **)(*plVar12 + 0x20))(), cVar7 == '\0')) {
          bVar17 = true;
        }
        else {
          lVar4 = *(longlong *)(lVar4 + lVar13);
          plVar12 = *(longlong **)(lVar4 + 0x18);
          local_58 = *(undefined8 *)(lVar4 + 0x10);
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          local_50 = plVar12;
          cVar7 = FUN_140d89890(*param_2,param_2[1],&local_58,0);
          bVar17 = cVar7 == '\0';
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar12 + 1;
            lVar4 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
        }
        if (bVar16 != (bool)(bVar17 ^ 1U)) break;
        uVar15 = (ulonglong)((int)uVar15 + 1);
        uVar9 = uVar9 + 1;
        lVar13 = lVar13 + 0x10;
      } while ((longlong)uVar9 < lVar11);
    }
    iVar10 = (int)uVar15 - iVar14;
    if (bVar16 == false) {
      if (iVar10 != 0) {
        plVar12 = (longlong *)((longlong)iVar14 * 0x10 + 8 + *param_1);
        do {
          plVar6 = (longlong *)*plVar12;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar6 + 1;
            lVar13 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          plVar12 = plVar12 + 2;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    else {
      if (iVar8 != iVar14) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar8 * 0x10 + *param_1),
                   (void *)((longlong)iVar14 * 0x10 + *param_1),(longlong)iVar10 << 4);
      }
      iVar8 = iVar8 + iVar10;
    }
    bVar16 = (bool)(bVar16 ^ 1);
    if (lVar11 <= (longlong)uVar9) {
      *(int *)(param_1 + 1) = iVar8;
      return iVar3 - iVar8;
    }
  } while( true );
}



// FUNCTION 140d610f0 FUN_140d610f0 body=598 status=ok
// SIG undefined FUN_140d610f0(void)

int FUN_140d610f0(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  undefined8 local_58;
  longlong *local_50;
  
  iVar3 = (int)param_1[1];
  lVar10 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar8 = 0;
  iVar7 = 0;
  cVar6 = FUN_140d67c80(param_2,*param_1);
  bVar15 = cVar6 == '\0';
  uVar14 = uVar8;
  do {
    iVar13 = (int)uVar14;
    uVar14 = (ulonglong)(iVar13 + 1);
    uVar8 = uVar8 + 1;
    if ((longlong)uVar8 < lVar10) {
      lVar12 = uVar8 * 0x10;
      do {
        lVar4 = *param_1;
        plVar11 = *(longlong **)(lVar4 + lVar12);
        if ((plVar11 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar11 + 0x30))(), cVar6 == '\0')) {
          bVar16 = false;
        }
        else {
          lVar4 = *(longlong *)(lVar4 + lVar12);
          plVar11 = *(longlong **)(lVar4 + 0x18);
          local_58 = *(undefined8 *)(lVar4 + 0x10);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          local_50 = plVar11;
          cVar6 = FUN_140d89890(*param_2,param_2[1],&local_58,0);
          bVar16 = cVar6 == '\0';
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar11 + 1;
            lVar4 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
        }
        if (bVar15 != (bool)(bVar16 ^ 1U)) break;
        uVar14 = (ulonglong)((int)uVar14 + 1);
        uVar8 = uVar8 + 1;
        lVar12 = lVar12 + 0x10;
      } while ((longlong)uVar8 < lVar10);
    }
    iVar9 = (int)uVar14 - iVar13;
    if (bVar15 == false) {
      if (iVar9 != 0) {
        plVar11 = (longlong *)((longlong)iVar13 * 0x10 + 8 + *param_1);
        do {
          plVar5 = (longlong *)*plVar11;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar5 + 1;
            lVar12 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          plVar11 = plVar11 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else {
      if (iVar7 != iVar13) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar7 * 0x10 + *param_1),
                   (void *)((longlong)iVar13 * 0x10 + *param_1),(longlong)iVar9 << 4);
      }
      iVar7 = iVar7 + iVar9;
    }
    bVar15 = (bool)(bVar15 ^ 1);
    if (lVar10 <= (longlong)uVar8) {
      *(int *)(param_1 + 1) = iVar7;
      return iVar3 - iVar7;
    }
  } while( true );
}



// FUNCTION 140d61350 FUN_140d61350 body=500 status=ok
// SIG undefined FUN_140d61350(void)

int FUN_140d61350(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  
  iVar3 = (int)param_1[1];
  lVar9 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar8 = 0;
  uVar11 = 0;
  uVar13 = 0;
  iVar5 = (**(code **)(**(longlong **)*param_1 + 0x30))();
  iVar12 = *param_2;
  if (iVar12 == 3) {
    bVar14 = iVar5 == 4;
    uVar8 = 0;
  }
  else {
    uVar11 = uVar8;
    if (iVar12 == 4) {
      bVar14 = iVar5 == 3;
      uVar8 = 0;
    }
    else if (iVar12 == 5) {
      bVar14 = iVar5 == 2;
      uVar8 = 0;
    }
    else {
      bVar14 = iVar5 == 1;
      uVar13 = uVar8;
    }
  }
  do {
    iVar12 = (int)uVar13;
    uVar13 = (ulonglong)(iVar12 + 1);
    uVar8 = uVar8 + 1;
    if ((longlong)uVar8 < lVar9) {
      lVar7 = uVar8 * 0x10;
      do {
        iVar6 = (**(code **)(**(longlong **)(lVar7 + *param_1) + 0x30))();
        iVar5 = *param_2;
        if (iVar5 == 3) {
          bVar15 = iVar6 == 4;
        }
        else if (iVar5 == 4) {
          bVar15 = iVar6 == 3;
        }
        else if (iVar5 == 5) {
          bVar15 = iVar6 == 2;
        }
        else {
          bVar15 = iVar6 == 1;
        }
        if (bVar14 != bVar15) break;
        uVar13 = (ulonglong)((int)uVar13 + 1);
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((longlong)uVar8 < lVar9);
    }
    iVar5 = (int)uVar13 - iVar12;
    if (bVar14 == false) {
      if (iVar5 != 0) {
        plVar10 = (longlong *)((longlong)iVar12 * 0x10 + 8 + *param_1);
        do {
          plVar4 = (longlong *)*plVar10;
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
              iVar12 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar10 = plVar10 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else {
      iVar6 = (int)uVar11;
      if (iVar6 != iVar12) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar6 * 0x10 + *param_1),
                   (void *)((longlong)iVar12 * 0x10 + *param_1),(longlong)iVar5 << 4);
      }
      uVar11 = (ulonglong)(uint)(iVar6 + iVar5);
    }
    bVar14 = (bool)(bVar14 ^ 1);
    if (lVar9 <= (longlong)uVar8) {
      *(int *)(param_1 + 1) = (int)uVar11;
      return iVar3 - (int)uVar11;
    }
  } while( true );
}



// FUNCTION 140d61560 FUN_140d61560 body=714 status=ok
// SIG undefined FUN_140d61560(void)

int FUN_140d61560(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined8 local_50;
  longlong *local_48;
  
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 == 0) {
    return 0;
  }
  uVar9 = 0;
  iVar12 = 0;
  cVar6 = FUN_140d67d50(param_2,*param_1);
  bVar17 = cVar6 == '\0';
  uVar8 = (ulonglong)(int)uVar3;
  uVar11 = uVar8;
  uVar16 = uVar9;
  do {
    iVar15 = (int)uVar16;
    uVar16 = (ulonglong)(iVar15 + 1);
    uVar9 = uVar9 + 1;
    if ((longlong)uVar9 < (longlong)uVar11) {
      lVar13 = uVar9 * 0x10;
      do {
        lVar4 = *param_1;
        plVar14 = *(longlong **)(*(longlong *)(lVar4 + lVar13) + 0x10);
        if ((plVar14 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar14 + 0x20))(), cVar6 == '\0')) {
LAB_140d61698:
          bVar7 = false;
        }
        else {
          lVar4 = *(longlong *)(lVar4 + lVar13);
          local_50 = *(undefined8 *)(lVar4 + 0x10);
          local_48 = *(longlong **)(lVar4 + 0x18);
          if (local_48 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
          }
          cVar6 = FUN_140bca1f0(*(undefined8 *)(*param_2 + 0x10),&local_50,1);
          if (cVar6 != '\0') {
LAB_140d6165f:
            plVar14 = local_48;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              plVar5 = local_48 + 1;
              lVar4 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*local_48)(local_48);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            goto LAB_140d61698;
          }
          cVar6 = FUN_140d89890(param_2[2],param_2[1],&local_50,0);
          plVar14 = local_48;
          if (cVar6 == '\0') goto LAB_140d6165f;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_48 + 1;
            lVar4 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
          }
          bVar7 = true;
        }
        if (bVar17 != bVar7) break;
        uVar16 = (ulonglong)((int)uVar16 + 1);
        uVar9 = uVar9 + 1;
        lVar13 = lVar13 + 0x10;
      } while ((longlong)uVar9 < (longlong)uVar11);
      uVar8 = (ulonglong)uVar3;
    }
    iVar10 = (int)uVar16 - iVar15;
    if (bVar17 == false) {
      if (iVar10 != 0) {
        plVar14 = (longlong *)((longlong)iVar15 * 0x10 + 8 + *param_1);
        do {
          plVar5 = (longlong *)*plVar14;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar5 + 1;
            lVar13 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          plVar14 = plVar14 + 2;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        uVar8 = (ulonglong)uVar3;
      }
    }
    else {
      if (iVar12 != iVar15) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar12 * 0x10 + *param_1),
                   (void *)((longlong)iVar15 * 0x10 + *param_1),(longlong)iVar10 << 4);
      }
      uVar8 = (ulonglong)uVar3;
      iVar12 = iVar12 + iVar10;
    }
    bVar17 = (bool)(bVar17 ^ 1);
    uVar11 = (ulonglong)(int)uVar8;
    if ((longlong)uVar11 <= (longlong)uVar9) {
      *(int *)(param_1 + 1) = iVar12;
      return (int)uVar8 - iVar12;
    }
  } while( true );
}



// FUNCTION 140d61830 FUN_140d61830 body=343 status=ok
// SIG undefined FUN_140d61830(void)

void FUN_140d61830(longlong *param_1,char param_2,undefined4 param_3,undefined4 *param_4,
                  longlong *param_5)

{
  undefined4 local_res18 [2];
  longlong local_118;
  longlong *local_110;
  byte local_ef;
  longlong local_88;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  local_res18[0] = param_3;
  FUN_1423e4ec0(&local_118,param_1,0);
  local_30 = local_30 & 0xdf | param_2 << 5;
  if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
    (**(code **)(local_118 + 0x50))(&local_118,local_res18,4);
    if ((local_ef & 0x10) != 0) {
      FArchive::ByteSwap(&local_118,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(undefined4 *)*local_110;
    *local_110 = *local_110 + 4;
  }
  if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
    (**(code **)(local_118 + 0x50))(&local_118,param_4,4);
    if ((local_ef & 0x10) != 0) {
      FArchive::ByteSwap(&local_118,param_4,4);
    }
  }
  else {
    *param_4 = *(undefined4 *)*local_110;
    *local_110 = *local_110 + 4;
  }
  (**(code **)(*param_5 + 0x20))(param_5,&local_118);
  (**(code **)(*param_1 + 0x2c8))(param_1,&param_5,&local_118,0);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_118);
  return;
}



// FUNCTION 140d61990 FUN_140d61990 body=343 status=ok
// SIG undefined FUN_140d61990(void)

void FUN_140d61990(longlong *param_1,char param_2,undefined4 param_3,undefined4 *param_4,
                  longlong *param_5)

{
  undefined4 local_res18 [2];
  longlong local_118;
  longlong *local_110;
  byte local_ef;
  longlong local_88;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  local_res18[0] = param_3;
  FUN_1423e4ec0(&local_118,param_1,0);
  local_30 = local_30 & 0xdf | param_2 << 5;
  if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
    (**(code **)(local_118 + 0x50))(&local_118,local_res18,4);
    if ((local_ef & 0x10) != 0) {
      FArchive::ByteSwap(&local_118,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(undefined4 *)*local_110;
    *local_110 = *local_110 + 4;
  }
  if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
    (**(code **)(local_118 + 0x50))(&local_118,param_4,4);
    if ((local_ef & 0x10) != 0) {
      FArchive::ByteSwap(&local_118,param_4,4);
    }
  }
  else {
    *param_4 = *(undefined4 *)*local_110;
    *local_110 = *local_110 + 4;
  }
  (**(code **)(*param_5 + 8))(param_5,&local_118);
  (**(code **)(*param_1 + 0x2c8))(param_1,&param_5,&local_118,0);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_118);
  return;
}



// FUNCTION 140d61af0 FUN_140d61af0 body=487 status=ok
// SIG undefined FUN_140d61af0(void)

void FUN_140d61af0(undefined8 param_1,longlong param_2,undefined1 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined **local_48 [2];
  longlong *local_38;
  longlong local_30;
  
  lVar6 = FUN_140d79450(param_1,param_2 + 8);
  if (lVar6 != 0) {
    FUN_140d62830(lVar6,param_3,param_4,param_5);
    return;
  }
  lVar6 = FUN_140d82cf0(param_1);
  if (lVar6 != 0) {
    uVar7 = FUN_140d82f60(local_48,lVar6,param_2 + 8);
    if ((*(longlong **)(lVar6 + 0x48) != (longlong *)0x0) &&
       (cVar5 = (**(code **)(**(longlong **)(lVar6 + 0x48) + 0x390))(), cVar5 != '\0')) {
      plVar9 = *(longlong **)(*(longlong *)(lVar6 + 0x48) + 0x98);
      plVar2 = plVar9 + *(int *)(*(longlong *)(lVar6 + 0x48) + 0xa0);
      for (; plVar9 != plVar2; plVar9 = plVar9 + 1) {
        lVar6 = *plVar9;
        if ((lVar6 != 0) &&
           (cVar5 = FUniqueNetIdWrapper::operator==(lVar6 + 0x158,uVar7), cVar5 != '\0')) {
          lVar6 = FUN_1425bd330(lVar6,6);
          if (lVar6 != 0) {
            lVar8 = FUN_1404e6fc0();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              FUN_140d61830(lVar6,param_3,param_4,param_5,param_6);
            }
          }
          break;
        }
      }
    }
    local_48[0] = &PTR_FUN_143f740c8;
    if (local_30 != 0) {
      FMemory::Free();
    }
    local_48[0] = &PTR_FUN_143f73d18;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 140d61ce0 FUN_140d61ce0 body=487 status=ok
// SIG undefined FUN_140d61ce0(void)

void FUN_140d61ce0(undefined8 param_1,longlong param_2,undefined1 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined **local_48 [2];
  longlong *local_38;
  longlong local_30;
  
  lVar6 = FUN_140d79450(param_1,param_2 + 8);
  if (lVar6 != 0) {
    FUN_140d628d0(lVar6,param_3,param_4,param_5);
    return;
  }
  lVar6 = FUN_140d82cf0(param_1);
  if (lVar6 != 0) {
    uVar7 = FUN_140d82f60(local_48,lVar6,param_2 + 8);
    if ((*(longlong **)(lVar6 + 0x48) != (longlong *)0x0) &&
       (cVar5 = (**(code **)(**(longlong **)(lVar6 + 0x48) + 0x390))(), cVar5 != '\0')) {
      plVar9 = *(longlong **)(*(longlong *)(lVar6 + 0x48) + 0x98);
      plVar2 = plVar9 + *(int *)(*(longlong *)(lVar6 + 0x48) + 0xa0);
      for (; plVar9 != plVar2; plVar9 = plVar9 + 1) {
        lVar6 = *plVar9;
        if ((lVar6 != 0) &&
           (cVar5 = FUniqueNetIdWrapper::operator==(lVar6 + 0x158,uVar7), cVar5 != '\0')) {
          lVar6 = FUN_1425bd330(lVar6,6);
          if (lVar6 != 0) {
            lVar8 = FUN_1404e6fc0();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              FUN_140d61990(lVar6,param_3,param_4,param_5,param_6);
            }
          }
          break;
        }
      }
    }
    local_48[0] = &PTR_FUN_143f740c8;
    if (local_30 != 0) {
      FMemory::Free();
    }
    local_48[0] = &PTR_FUN_143f73d18;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 140d61ed0 FUN_140d61ed0 body=1176 status=ok
// SIG undefined FUN_140d61ed0(void)

void FUN_140d61ed0(longlong *param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *local_78;
  undefined8 local_58;
  longlong *local_50;
  
  bVar12 = false;
  bVar10 = false;
  lVar14 = FUN_140d82cf0();
  if (((lVar14 != 0) && (*(longlong **)(lVar14 + 0x48) != (longlong *)0x0)) &&
     (cVar13 = (**(code **)(**(longlong **)(lVar14 + 0x48) + 0x390))(), cVar13 != '\0')) {
    plVar22 = *(longlong **)(*(longlong *)(lVar14 + 0x48) + 0x98);
    plVar19 = plVar22 + *(int *)(*(longlong *)(lVar14 + 0x48) + 0xa0);
    for (; plVar22 != plVar19; plVar22 = plVar22 + 1) {
      if ((*plVar22 != 0) && (lVar15 = FUN_1425bd330(*plVar22,6), lVar15 != 0)) {
        lVar16 = FUN_1404e6fc0();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          FUN_140d61830(lVar15,param_2,param_3,param_4,param_5);
        }
      }
    }
  }
  plVar19 = (longlong *)param_1[8];
  plVar17 = plVar19 + (longlong)(int)param_1[9] * 2;
  plVar18 = param_1;
  plVar22 = local_78;
  do {
    if (plVar19 == plVar17) {
      return;
    }
    bVar8 = false;
    if (lVar14 == 0) {
LAB_140d62205:
      plVar5 = (longlong *)((undefined8 *)*plVar19)[1];
      local_58 = *(undefined8 *)*plVar19;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_50 = plVar5;
      lVar15 = FUN_140d79450(param_1,&local_58);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar20 = plVar5 + 1;
        lVar16 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
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
        LOCK();
        plVar20 = plVar5 + 1;
        lVar16 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
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
      if (((lVar15 != 0) && (*(longlong *)(lVar15 + 200) != 0)) &&
         (lVar15 = FUN_1425bd330(*(longlong *)(lVar15 + 200),6), lVar15 != 0)) {
        lVar16 = FUN_1404e6fc0();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          FUN_140d61830(lVar15,param_2,param_3,param_4,param_5);
        }
      }
    }
    else {
      plVar5 = *(longlong **)(lVar14 + 0x60);
      iVar4 = *(int *)(lVar14 + 0x68);
      if (plVar5 == plVar5 + (longlong)iVar4 * 8) goto LAB_140d62205;
      plVar20 = plVar5 + 2;
      do {
        if (((longlong *)*plVar20 == (longlong *)0x0) ||
           (cVar13 = (**(code **)(*(longlong *)*plVar20 + 0x20))(), cVar13 == '\0')) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          bVar10 = true;
          plVar22 = (longlong *)((undefined8 *)*plVar19)[1];
          puVar6 = *(undefined8 **)*plVar19;
          if (plVar22 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
            UNLOCK();
          }
          cVar13 = (**(code **)*puVar6)(puVar6,*plVar20);
          local_78 = plVar22;
          if (cVar13 == '\0') goto LAB_140d620a1;
          bVar9 = true;
        }
        else {
LAB_140d620a1:
          bVar9 = false;
        }
        if ((bVar10) && (bVar10 = false, plVar22 != (longlong *)0x0)) {
          LOCK();
          plVar7 = plVar22 + 1;
          lVar15 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar22 + 8))(plVar22,1);
            }
          }
        }
        lVar15 = plVar20[5];
        if (bVar9) {
          bVar8 = true;
        }
        plVar7 = (longlong *)plVar20[4];
        if (plVar7 != plVar7 + (longlong)(int)lVar15 * 5) {
          plVar21 = plVar7 + 1;
          do {
            bVar9 = true;
            if (((longlong *)*plVar21 == (longlong *)0x0) ||
               (cVar13 = (**(code **)(*(longlong *)*plVar21 + 0x20))(), bVar11 = bVar9,
               cVar13 == '\0')) {
              bVar11 = false;
            }
            if (bVar11) {
              bVar12 = true;
              puVar6 = *(undefined8 **)*plVar19;
              plVar18 = (longlong *)((undefined8 *)*plVar19)[1];
              if (plVar18 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
                UNLOCK();
              }
              cVar13 = (**(code **)*puVar6)(puVar6,*plVar21);
              if (cVar13 == '\0') goto LAB_140d62166;
            }
            else {
LAB_140d62166:
              bVar9 = false;
            }
            if ((bVar12) && (bVar12 = false, plVar18 != (longlong *)0x0)) {
              LOCK();
              plVar22 = plVar18 + 1;
              lVar16 = *plVar22;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)lVar16 == 1) {
                (**(code **)*plVar18)(plVar18);
                LOCK();
                piVar1 = (int *)((longlong)plVar18 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar18 + 8))(plVar18,1);
                }
              }
            }
            if (bVar9) {
              bVar8 = true;
            }
            plVar2 = plVar21 + 4;
            plVar21 = plVar21 + 5;
            plVar22 = local_78;
          } while (plVar2 != plVar7 + (longlong)(int)lVar15 * 5);
        }
        plVar7 = plVar20 + 6;
        plVar20 = plVar20 + 8;
      } while (plVar7 != plVar5 + (longlong)iVar4 * 8);
      if (!bVar8) goto LAB_140d62205;
    }
    plVar19 = plVar19 + 2;
  } while( true );
}



// FUNCTION 140d62380 FUN_140d62380 body=1176 status=ok
// SIG undefined FUN_140d62380(void)

void FUN_140d62380(longlong *param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *local_78;
  undefined8 local_58;
  longlong *local_50;
  
  bVar12 = false;
  bVar10 = false;
  lVar14 = FUN_140d82cf0();
  if (((lVar14 != 0) && (*(longlong **)(lVar14 + 0x48) != (longlong *)0x0)) &&
     (cVar13 = (**(code **)(**(longlong **)(lVar14 + 0x48) + 0x390))(), cVar13 != '\0')) {
    plVar22 = *(longlong **)(*(longlong *)(lVar14 + 0x48) + 0x98);
    plVar19 = plVar22 + *(int *)(*(longlong *)(lVar14 + 0x48) + 0xa0);
    for (; plVar22 != plVar19; plVar22 = plVar22 + 1) {
      if ((*plVar22 != 0) && (lVar15 = FUN_1425bd330(*plVar22,6), lVar15 != 0)) {
        lVar16 = FUN_1404e6fc0();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          FUN_140d61990(lVar15,param_2,param_3,param_4,param_5);
        }
      }
    }
  }
  plVar19 = (longlong *)param_1[8];
  plVar17 = plVar19 + (longlong)(int)param_1[9] * 2;
  plVar18 = param_1;
  plVar22 = local_78;
  do {
    if (plVar19 == plVar17) {
      return;
    }
    bVar8 = false;
    if (lVar14 == 0) {
LAB_140d626b5:
      plVar5 = (longlong *)((undefined8 *)*plVar19)[1];
      local_58 = *(undefined8 *)*plVar19;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_50 = plVar5;
      lVar15 = FUN_140d79450(param_1,&local_58);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar20 = plVar5 + 1;
        lVar16 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
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
        LOCK();
        plVar20 = plVar5 + 1;
        lVar16 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
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
      if (((lVar15 != 0) && (*(longlong *)(lVar15 + 200) != 0)) &&
         (lVar15 = FUN_1425bd330(*(longlong *)(lVar15 + 200),6), lVar15 != 0)) {
        lVar16 = FUN_1404e6fc0();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          FUN_140d61990(lVar15,param_2,param_3,param_4,param_5);
        }
      }
    }
    else {
      plVar5 = *(longlong **)(lVar14 + 0x60);
      iVar4 = *(int *)(lVar14 + 0x68);
      if (plVar5 == plVar5 + (longlong)iVar4 * 8) goto LAB_140d626b5;
      plVar20 = plVar5 + 2;
      do {
        if (((longlong *)*plVar20 == (longlong *)0x0) ||
           (cVar13 = (**(code **)(*(longlong *)*plVar20 + 0x20))(), cVar13 == '\0')) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          bVar10 = true;
          plVar22 = (longlong *)((undefined8 *)*plVar19)[1];
          puVar6 = *(undefined8 **)*plVar19;
          if (plVar22 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
            UNLOCK();
          }
          cVar13 = (**(code **)*puVar6)(puVar6,*plVar20);
          local_78 = plVar22;
          if (cVar13 == '\0') goto LAB_140d62551;
          bVar9 = true;
        }
        else {
LAB_140d62551:
          bVar9 = false;
        }
        if ((bVar10) && (bVar10 = false, plVar22 != (longlong *)0x0)) {
          LOCK();
          plVar7 = plVar22 + 1;
          lVar15 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar22 + 8))(plVar22,1);
            }
          }
        }
        lVar15 = plVar20[5];
        if (bVar9) {
          bVar8 = true;
        }
        plVar7 = (longlong *)plVar20[4];
        if (plVar7 != plVar7 + (longlong)(int)lVar15 * 5) {
          plVar21 = plVar7 + 1;
          do {
            bVar9 = true;
            if (((longlong *)*plVar21 == (longlong *)0x0) ||
               (cVar13 = (**(code **)(*(longlong *)*plVar21 + 0x20))(), bVar11 = bVar9,
               cVar13 == '\0')) {
              bVar11 = false;
            }
            if (bVar11) {
              bVar12 = true;
              puVar6 = *(undefined8 **)*plVar19;
              plVar18 = (longlong *)((undefined8 *)*plVar19)[1];
              if (plVar18 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
                UNLOCK();
              }
              cVar13 = (**(code **)*puVar6)(puVar6,*plVar21);
              if (cVar13 == '\0') goto LAB_140d62616;
            }
            else {
LAB_140d62616:
              bVar9 = false;
            }
            if ((bVar12) && (bVar12 = false, plVar18 != (longlong *)0x0)) {
              LOCK();
              plVar22 = plVar18 + 1;
              lVar16 = *plVar22;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)lVar16 == 1) {
                (**(code **)*plVar18)(plVar18);
                LOCK();
                piVar1 = (int *)((longlong)plVar18 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar18 + 8))(plVar18,1);
                }
              }
            }
            if (bVar9) {
              bVar8 = true;
            }
            plVar2 = plVar21 + 4;
            plVar21 = plVar21 + 5;
            plVar22 = local_78;
          } while (plVar2 != plVar7 + (longlong)(int)lVar15 * 5);
        }
        plVar7 = plVar20 + 6;
        plVar20 = plVar20 + 8;
      } while (plVar7 != plVar5 + (longlong)iVar4 * 8);
      if (!bVar8) goto LAB_140d626b5;
    }
    plVar19 = plVar19 + 2;
  } while( true );
}



// FUNCTION 140d62830 FUN_140d62830 body=158 status=ok
// SIG undefined FUN_140d62830(void)

void FUN_140d62830(longlong param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 200) != 0) &&
     (lVar2 = FUN_1425bd330(*(longlong *)(param_1 + 200),6), lVar2 != 0)) {
    lVar3 = FUN_1404e6fc0();
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
      FUN_140d61830(lVar2,param_2,param_3,param_4,param_5);
    }
  }
  return;
}



// FUNCTION 140d628d0 FUN_140d628d0 body=158 status=ok
// SIG undefined FUN_140d628d0(void)

void FUN_140d628d0(longlong param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 200) != 0) &&
     (lVar2 = FUN_1425bd330(*(longlong *)(param_1 + 200),6), lVar2 != 0)) {
    lVar3 = FUN_1404e6fc0();
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
      FUN_140d61990(lVar2,param_2,param_3,param_4,param_5);
    }
  }
  return;
}



// FUNCTION 140d62970 FUN_140d62970 body=214 status=ok
// SIG undefined FUN_140d62970(void)

undefined8 *
FUN_140d62970(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong **param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *local_18;
  int local_10;
  
  local_10 = 0;
  local_18 = (longlong *)0x0;
  if (((param_4 != &local_18) && (*(int *)(param_4 + 1) != 0)) &&
     (plVar1 = *param_4, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_18);
  }
  param_1[1] = param_2;
  *param_1 = &PTR_GetPoolName_144531880;
  param_1[2] = param_3;
  param_1[3] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (((&local_18 != (longlong **)(param_1 + 3)) && (local_10 != 0)) &&
     (local_18 != (longlong *)0x0)) {
    (**(code **)(*local_18 + 0x30))();
  }
  uVar2 = FDelegateHandle::GenerateNewID();
  param_1[5] = uVar2;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  *param_1 = &PTR_GetPoolName_1445318c8;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return param_1;
}



// FUNCTION 140d62a50 FUN_140d62a50 body=416 status=ok
// SIG undefined FUN_140d62a50(void)

undefined8 *
FUN_140d62a50(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *_Dst;
  uint uVar7;
  
  uVar7 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = param_4;
  *(undefined4 *)(param_1 + 0xb) = param_5;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = param_6;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (((param_2 != param_1 + 0x11) && ((int)param_2[1] != 0)) &&
     ((longlong *)*param_2 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*param_2 + 0x30))();
  }
  param_1[0x13] = *param_3;
  lVar4 = param_3[1];
  param_1[0x14] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  FUN_140d73ef0(param_1 + 0xd);
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    do {
      iVar3 = *(int *)(param_1 + 0xe);
      iVar6 = iVar3 + 1;
      *(int *)(param_1 + 0xe) = iVar6;
      if (*(int *)((longlong)param_1 + 0x74) < iVar6) {
        TArray<FEnvQueryInstanceCache,FDefaultAllocator>::ResizeGrow(param_1 + 0xd);
      }
      _Dst = (undefined8 *)((longlong)iVar3 * 0x188 + param_1[0xd]);
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x188);
      FUN_140d63580(_Dst);
      uVar7 = uVar7 + 1;
      *(undefined4 *)(_Dst + 0x2f) = 0;
      *(undefined8 *)((longlong)_Dst + 0x17c) = 0xffffffffffffffff;
      *_Dst = &PTR_FUN_144530608;
      *(undefined1 *)(_Dst + 0xb) = 0xb;
    } while (uVar7 < *(uint *)((longlong)param_1 + 0x7c));
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  plVar5 = (longlong *)param_3[1];
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



// FUNCTION 140d62bf0 TMap<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_> body=163 status=ok
// SIG undefined TMap<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>(void)

undefined8 *
TMap<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>::
TMap<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>
          (undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 7,(void *)(param_2 + 0x38),4);
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 140d62ca0 FUN_140d62ca0 body=1402 status=ok
// SIG undefined FUN_140d62ca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140d62ca0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_c8;
  int local_c0;
  longlong *local_b8;
  int local_b0;
  longlong *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  longlong *local_58;
  
  *param_1 = param_2;
  uVar7 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
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
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined2 *)(param_1 + 0x3b) = 0x2a;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 2;
  FUN_140d64890(param_1 + 0x3f,param_1);
  FUN_1404cf890(&local_78,0);
  if (local_78 != (longlong *)0x0) {
    local_c8 = (longlong *)0x0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_c0 = 3;
    local_c8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)IDelegateInstance::vftable;
      *plVar4 = (longlong)&DAT_143f3ed00;
      plVar4[2] = (longlong)FUN_140d8d820;
      plVar4[1] = (longlong)param_1;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar6 = (undefined8 *)(**(code **)(*local_78 + 0x1c8))(local_78,local_res10,&local_c8);
    param_1[0x1f] = *puVar6;
    if (local_c0 == 0) {
LAB_140d62ef4:
      if (local_c8 != (longlong *)0x0) {
        FMemory::Free(local_c8);
      }
    }
    else if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x28))(local_c8,0);
      if (local_c8 != (longlong *)0x0) {
        local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
      }
      local_c0 = 0;
      goto LAB_140d62ef4;
    }
    local_b8 = (longlong *)0x0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    local_b0 = 3;
    local_b8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&DAT_143f3ed00;
      plVar4[1] = (longlong)param_1;
      plVar4[2] = (longlong)FUN_140d8d4a0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar6 = (undefined8 *)(**(code **)(*local_78 + 0x80))(local_78,local_res18,&local_b8);
    param_1[0x20] = *puVar6;
    if (local_b0 == 0) {
LAB_140d62fa2:
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free(local_b8);
      }
    }
    else if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x28))(local_b8,0);
      if (local_b8 != (longlong *)0x0) {
        local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
      }
      local_b0 = 0;
      goto LAB_140d62fa2;
    }
    local_98 = 0;
    local_90 = 0;
    (**(code **)(*local_78 + 0x70))(local_78,&local_98);
    lVar8 = (longlong)(int)local_90 * 0x10 + local_98;
    for (lVar5 = local_98; lVar5 != lVar8; lVar5 = lVar5 + 0x10) {
      FUN_140d938f0(param_1,lVar5);
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_98);
  }
  puVar6 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
  FUN_1404cf890(&local_88,*puVar6);
  if (local_88 != (longlong *)0x0) {
    local_a8 = (longlong *)0x0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    local_a0 = 3;
    local_a8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&DAT_143f3ed00;
      plVar4[1] = (longlong)param_1;
      plVar4[2] = (longlong)FUN_140d8f230;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar6 = (undefined8 *)(**(code **)(*local_88 + 0x80))(local_88,local_68,&local_a8);
    param_1[0x21] = *puVar6;
    if (local_a0 != 0) {
      if (local_a8 == (longlong *)0x0) goto LAB_140d630da;
      (**(code **)(*local_a8 + 0x28))(local_a8,0);
      if (local_a8 != (longlong *)0x0) {
        local_a8 = (longlong *)FMemory::Realloc(local_a8,0,0);
      }
      local_a0 = 0;
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free(local_a8);
    }
  }
LAB_140d630da:
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_58 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = (longlong)param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_140d8aab0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af3b8,1);
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_60);
    iVar3 = DAT_1464af3c0;
    lVar5 = (longlong)DAT_1464af3c0;
    uVar7 = *puVar6;
    DAT_1464af3c0 = DAT_1464af3c0 + 1;
    if (DAT_1464af3c4 < DAT_1464af3c0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af3b8,iVar3);
    }
    puVar6 = (undefined8 *)(lVar5 * 0x10 + _DAT_1464af3b8);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  plVar4 = local_80;
  param_1[0x22] = uVar7;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140d63220 FUN_140d63220 body=863 status=ok
// SIG undefined FUN_140d63220(void)

undefined8 *
FUN_140d63220(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  
  plVar10 = (longlong *)0x0;
  plVar1 = param_1 + 4;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14452fa48;
  *plVar1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = param_4;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar6 = FUN_140dbc720(param_3);
  if (iVar6 == 0) {
    plVar8 = (longlong *)operator_new(0x98);
    if (plVar8 != (longlong *)0x0) {
      *(undefined4 *)(plVar8 + 1) = 1;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      *plVar8 = (longlong)&PTR_FUN_144531650;
      FUN_140da88b0(plVar8 + 2);
      plVar10 = plVar8;
    }
    local_58 = plVar10 + 2;
    local_50 = plVar10;
    SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
    plVar10 = local_58;
    uVar7 = FUN_140dbc590();
    *(undefined4 *)((longlong)plVar10 + 0x1c) = uVar7;
    FUN_140db08e0(local_58,param_2,param_3);
    plVar8 = local_50;
    plVar10 = local_58;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    iVar6 = *(int *)(param_1 + 5);
    *(int *)(param_1 + 5) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0x2c) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar6);
    }
    puVar9 = (undefined8 *)((longlong)iVar6 * 0x10 + *plVar1);
    *puVar9 = plVar10;
    puVar9[1] = plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar8 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    plVar1 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_50 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
  }
  else if (0 < iVar6) {
    do {
      plVar8 = (longlong *)operator_new(0x98);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plVar8 + 1) = 1;
        *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
        *plVar8 = (longlong)&PTR_FUN_144531650;
        FUN_140da88b0(plVar8 + 2);
      }
      local_48 = plVar8 + 2;
      local_40 = plVar8;
      SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
      plVar8 = local_48;
      uVar7 = FUN_140dbc590();
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar7;
      FUN_140dcd220(param_2,param_3,plVar10,&local_48);
      plVar3 = local_40;
      plVar8 = local_48;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      iVar4 = *(int *)(param_1 + 5);
      *(int *)(param_1 + 5) = iVar4 + 1;
      if (*(int *)((longlong)param_1 + 0x2c) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar4);
      }
      puVar9 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar1);
      *puVar9 = plVar8;
      puVar9[1] = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        plVar8 = plVar3 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar3)(plVar3);
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
      plVar8 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      uVar11 = (int)plVar10 + 1;
      plVar10 = (longlong *)(ulonglong)uVar11;
    } while ((int)uVar11 < iVar6);
  }
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"FindSessionsMatchmakingSearch",L"MaxSearchRetries",
             (longlong)param_1 + 0x6c,&DAT_1468e2410);
  return param_1;
}



// FUNCTION 140d63580 FUN_140d63580 body=203 status=ok
// SIG undefined FUN_140d63580(void)

undefined8 * FUN_140d63580(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144530530;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = &PTR_FUN_143f740c8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = &PTR_FUN_143f740c8;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0xf] = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  if (*(int *)((longlong)param_1 + 0x154) < 4) {
    FUN_140d97d80(param_1 + 0x15,4);
  }
  if (*(int *)((longlong)param_1 + 0x174) < 4) {
    TArray<float,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(param_1 + 0x2b,4);
  }
  return param_1;
}



// FUNCTION 140d63650 FUN_140d63650 body=556 status=ok
// SIG undefined FUN_140d63650(void)

undefined8 * FUN_140d63650(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void *_Src;
  int iVar7;
  longlong lVar8;
  
  *param_1 = &PTR_FUN_144530530;
  param_1[1] = &PTR_FUN_143f73d18;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  lVar5 = *(longlong *)(param_2 + 0x18);
  param_1[3] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  param_1[1] = &PTR_FUN_143f740c8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = &PTR_FUN_143f73d18;
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  lVar5 = *(longlong *)(param_2 + 0x40);
  param_1[8] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  param_1[6] = &PTR_FUN_143f740c8;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  uVar2 = *(undefined4 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0xe) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x80);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  FString::FString(param_1 + 0x11,param_2 + 0x88);
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  param_1[0x29] = 0;
  iVar7 = *(int *)(param_2 + 0x150);
  lVar5 = *(longlong *)(param_2 + 0x148);
  *(int *)(param_1 + 0x2a) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  }
  else {
    FUN_140d978b0(param_1 + 0x15,iVar7,0);
    puVar6 = (undefined8 *)param_1[0x29];
    if ((undefined8 *)param_1[0x29] == (undefined8 *)0x0) {
      puVar6 = param_1 + 0x15;
    }
    if (lVar5 == 0) {
      lVar5 = param_2 + 0xa8;
    }
    lVar8 = (longlong)puVar6 - lVar5;
    puVar4 = (undefined8 *)(lVar5 + 8);
    do {
      *puVar6 = &PTR_FUN_143f73d18;
      *(undefined8 *)((longlong)puVar4 + lVar8) = *puVar4;
      lVar5 = puVar4[1];
      *(longlong *)((longlong)puVar4 + lVar8 + 8) = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      *puVar6 = &PTR_FUN_143f740c8;
      puVar6 = puVar6 + 5;
      *(undefined8 *)((longlong)puVar4 + lVar8 + 0x10) = 0;
      *(undefined8 *)((longlong)puVar4 + lVar8 + 0x18) = 0;
      puVar4 = puVar4 + 5;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  param_1[0x2d] = 0;
  iVar7 = *(int *)(param_2 + 0x170);
  _Src = *(void **)(param_2 + 0x168);
  *(int *)(param_1 + 0x2e) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  }
  else {
    TArray<unsigned_int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
              (param_1 + 0x2b,iVar7,0);
    if (_Src == (void *)0x0) {
      _Src = (void *)(param_2 + 0x158);
    }
    puVar6 = (undefined8 *)param_1[0x2d];
    if ((undefined8 *)param_1[0x2d] == (undefined8 *)0x0) {
      puVar6 = param_1 + 0x2b;
    }
    _guard_xfg_dispatch_icall_nop(puVar6,_Src,(longlong)iVar7 << 2);
  }
  return param_1;
}



// FUNCTION 140d63880 FUN_140d63880 body=47 status=ok
// SIG undefined FUN_140d63880(void)

undefined8 * FUN_140d63880(undefined8 *param_1)

{
  FUN_140d63580();
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_144530740;
  *(undefined1 *)(param_1 + 0xb) = 0x16;
  return param_1;
}



// FUNCTION 140d638b0 FUN_140d638b0 body=68 status=ok
// SIG undefined FUN_140d638b0(void)

undefined8 * FUN_140d638b0(undefined8 *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x188);
  FUN_140d63580();
  *(undefined1 *)(param_1 + 0xb) = 0xc;
  *param_1 = &PTR_FUN_144530788;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return param_1;
}



// FUNCTION 140d63900 FUN_140d63900 body=74 status=ok
// SIG undefined FUN_140d63900(void)

undefined8 * FUN_140d63900(undefined8 *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x188);
  FUN_140d63580(param_1);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_144530608;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0xb) = 0xb;
  return param_1;
}



// FUNCTION 140d63950 FUN_140d63950 body=53 status=ok
// SIG undefined FUN_140d63950(void)

undefined8 * FUN_140d63950(undefined8 *param_1)

{
  FUN_140d63580();
  *param_1 = &PTR_FUN_1445307d0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0x17;
  return param_1;
}



// FUNCTION 140d63990 FUN_140d63990 body=63 status=ok
// SIG undefined FUN_140d63990(void)

undefined8 * FUN_140d63990(undefined8 *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x180);
  FUN_140d63580(param_1);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_144530828;
  *(undefined1 *)(param_1 + 0xb) = 0xe;
  return param_1;
}



// FUNCTION 140d639d0 FUN_140d639d0 body=53 status=ok
// SIG undefined FUN_140d639d0(void)

undefined8 * FUN_140d639d0(undefined8 *param_1)

{
  FUN_140d63580();
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *param_1 = &PTR_FUN_144530578;
  *(undefined1 *)(param_1 + 0xb) = 0x19;
  return param_1;
}



// FUNCTION 140d63a10 FUN_140d63a10 body=53 status=ok
// SIG undefined FUN_140d63a10(void)

undefined8 * FUN_140d63a10(undefined8 *param_1)

{
  FUN_140d63580();
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *param_1 = &PTR_FUN_1445308b8;
  *(undefined1 *)(param_1 + 0xb) = 0x14;
  return param_1;
}



// FUNCTION 140d63a50 FUN_140d63a50 body=53 status=ok
// SIG undefined FUN_140d63a50(void)

undefined8 * FUN_140d63a50(undefined8 *param_1)

{
  FUN_140d63580();
  *param_1 = &PTR_FUN_144530578;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0xb) = 3;
  return param_1;
}



// FUNCTION 140d63a90 FUN_140d63a90 body=53 status=ok
// SIG undefined FUN_140d63a90(void)

undefined8 * FUN_140d63a90(undefined8 *param_1)

{
  FUN_140d63580();
  *param_1 = &PTR_FUN_144530870;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0xb) = 2;
  return param_1;
}



// FUNCTION 140d63ad0 FUN_140d63ad0 body=59 status=ok
// SIG undefined FUN_140d63ad0(void)

undefined8 * FUN_140d63ad0(undefined8 *param_1)

{
  FUN_140d63580();
  param_1[0x2f] = 0xffffffffffffffff;
  *param_1 = &PTR_FUN_144530900;
  param_1[0x30] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0xb) = 10;
  return param_1;
}



// FUNCTION 140d63b10 FUN_140d63b10 body=53 status=ok
// SIG undefined FUN_140d63b10(void)

undefined8 * FUN_140d63b10(undefined8 *param_1)

{
  FUN_140d63580();
  *param_1 = &PTR_FUN_1445309d8;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0x18;
  return param_1;
}



// FUNCTION 140d63b50 FUN_140d63b50 body=63 status=ok
// SIG undefined FUN_140d63b50(void)

undefined8 * FUN_140d63b50(undefined8 *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x180);
  FUN_140d63580(param_1);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_144530a68;
  *(undefined1 *)(param_1 + 0xb) = 4;
  return param_1;
}



// FUNCTION 140d63b90 FUN_140d63b90 body=63 status=ok
// SIG undefined FUN_140d63b90(void)

undefined8 * FUN_140d63b90(undefined8 *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x180);
  FUN_140d63580(param_1);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_144530ab0;
  *(undefined1 *)(param_1 + 0xb) = 6;
  return param_1;
}



// FUNCTION 140d63bd0 FUN_140d63bd0 body=63 status=ok
// SIG undefined FUN_140d63bd0(void)

undefined8 * FUN_140d63bd0(undefined8 *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x180);
  FUN_140d63580(param_1);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_144530af8;
  *(undefined1 *)(param_1 + 0xb) = 0xd;
  return param_1;
}



// FUNCTION 140d63c10 FUN_140d63c10 body=63 status=ok
// SIG undefined FUN_140d63c10(void)

undefined8 * FUN_140d63c10(undefined8 *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x180);
  FUN_140d63580(param_1);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_144530b40;
  *(undefined1 *)(param_1 + 0xb) = 0xf;
  return param_1;
}



// FUNCTION 140d63c50 FUN_140d63c50 body=63 status=ok
// SIG undefined FUN_140d63c50(void)

undefined8 * FUN_140d63c50(undefined8 *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x180);
  FUN_140d63580(param_1);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_144530a68;
  *(undefined1 *)(param_1 + 0xb) = 5;
  return param_1;
}



// FUNCTION 140d63c90 FUN_140d63c90 body=209 status=ok
// SIG undefined FUN_140d63c90(void)

undefined8 * FUN_140d63c90(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144530678;
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
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
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
  return param_1;
}



// FUNCTION 140d63d70 FUN_140d63d70 body=266 status=ok
// SIG undefined FUN_140d63d70(void)

undefined8 * FUN_140d63d70(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144530718;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = &PTR_FUN_143f740c8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = &PTR_FUN_144530650;
  *(undefined4 *)(param_1 + 8) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 1;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x82) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  FUN_140d63c90(param_1 + 0x12);
  param_1[0x35] = &PTR_FUN_1445306a0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = &PTR_FUN_1445306c8;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = &PTR_FUN_1445306f0;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return param_1;
}



// FUNCTION 140d63e80 FUN_140d63e80 body=102 status=ok
// SIG undefined FUN_140d63e80(void)

undefined8 * FUN_140d63e80(undefined8 *param_1,undefined4 param_2)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = &PTR_FUN_143f740c8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = &PTR_FUN_143f740c8;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_144530e38;
  *(undefined4 *)(param_1 + 0xb) = param_2;
  return param_1;
}



// FUNCTION 140d63ef0 FUN_140d63ef0 body=110 status=ok
// SIG undefined FUN_140d63ef0(void)

undefined8 * FUN_140d63ef0(undefined8 *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = &PTR_FUN_143f740c8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = &PTR_FUN_143f740c8;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_144530ee8;
  param_1[0xc] = &PTR_FUN_1445306f0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xb) = 6;
  return param_1;
}



// FUNCTION 140d63f60 FUN_140d63f60 body=142 status=ok
// SIG undefined FUN_140d63f60(void)

undefined8 * FUN_140d63f60(undefined8 *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = &PTR_FUN_143f740c8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = &PTR_FUN_143f740c8;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_144530f98;
  param_1[0xc] = &PTR_FUN_1445306c8;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0xb) = 5;
  return param_1;
}



// FUNCTION 140d63ff0 FUN_140d63ff0 body=104 status=ok
// SIG undefined FUN_140d63ff0(void)

undefined8 * FUN_140d63ff0(undefined8 *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = &PTR_FUN_143f740c8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = &PTR_FUN_143f740c8;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_144531008;
  FUN_140d63c90(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 3;
  return param_1;
}



// FUNCTION 140d64060 FUN_140d64060 body=178 status=ok
// SIG undefined FUN_140d64060(void)

undefined8 * FUN_140d64060(undefined8 *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = &PTR_FUN_143f740c8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = &PTR_FUN_143f740c8;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_144531070;
  param_1[0xc] = &PTR_FUN_144530650;
  *(undefined4 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 1;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0xaa) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb) = 2;
  return param_1;
}



// FUNCTION 140d64120 FUN_140d64120 body=120 status=ok
// SIG undefined FUN_140d64120(void)

undefined8 * FUN_140d64120(undefined8 *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = &PTR_FUN_143f740c8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = &PTR_FUN_143f740c8;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_1445310d8;
  param_1[0xc] = &PTR_FUN_1445306a0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0xb) = 4;
  return param_1;
}



// FUNCTION 140d641a0 FUN_140d641a0 body=110 status=ok
// SIG undefined FUN_140d641a0(void)

undefined8 * FUN_140d641a0(undefined8 *param_1,undefined4 param_2)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = &PTR_FUN_143f740c8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = &PTR_FUN_143f740c8;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_144531148;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xb) = param_2;
  return param_1;
}



// FUNCTION 140d64210 FUN_140d64210 body=103 status=ok
// SIG undefined FUN_140d64210(void)

undefined8 * FUN_140d64210(undefined8 *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = &PTR_FUN_143f740c8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = &PTR_FUN_143f740c8;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_144531268;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xb) = 8;
  return param_1;
}



// FUNCTION 140d64280 FUN_140d64280 body=103 status=ok
// SIG undefined FUN_140d64280(void)

undefined8 * FUN_140d64280(undefined8 *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = &PTR_FUN_143f740c8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = &PTR_FUN_143f740c8;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_1445313c0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xb) = 9;
  return param_1;
}



// FUNCTION 140d642f0 FUN_140d642f0 body=589 status=ok
// SIG undefined FUN_140d642f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140d642f0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  int local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  puVar7 = param_1 + 1;
  *puVar7 = param_2[1];
  lVar6 = param_2[2];
  param_1[2] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = *param_2;
  uStack_60 = (longlong *)param_2[2];
  local_68 = param_2[1];
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_60 + 1) = (int)uStack_60[1] + 1;
    UNLOCK();
  }
  if (&local_68 != puVar7) {
    local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uVar4 = *puVar7;
    plVar5 = (longlong *)param_1[2];
    local_40 = (undefined4)local_68;
    uStack_3c = local_68._4_4_;
    uStack_38 = (undefined4)uStack_60;
    uStack_34 = uStack_60._4_4_;
    *(undefined4 *)puVar7 = (undefined4)local_68;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_68._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_60._4_4_;
    local_68 = uVar4;
    uStack_60 = plVar5;
  }
  plVar5 = uStack_60;
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_60 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*uStack_60)(uStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_60 + 8))(uStack_60,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  Online::GetSessionInterface(&local_58);
  if (local_58 != (longlong *)0x0) {
    local_78 = (longlong *)0x0;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    local_70 = 3;
    local_78 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      plVar5[1] = (longlong)param_1;
      *plVar5 = (longlong)&PTR_GetPoolName_144531740;
      plVar5[2] = (longlong)FUN_140d8d880;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar6;
      *plVar5 = (longlong)&PTR_GetPoolName_144531788;
    }
    puVar7 = (undefined8 *)(**(code **)(*local_58 + 0x118))(local_58,local_48,&local_78);
    param_1[5] = *puVar7;
    if (local_70 != 0) {
      if (local_78 == (longlong *)0x0) goto LAB_140d644a5;
      (**(code **)(*local_78 + 0x28))(local_78,0);
      if (local_78 != (longlong *)0x0) {
        local_78 = (longlong *)FMemory::Realloc(local_78,0,0);
      }
      local_70 = 0;
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free(local_78);
    }
  }
LAB_140d644a5:
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  plVar5 = (longlong *)param_2[2];
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
  return param_1;
}



// FUNCTION 140d64540 FUN_140d64540 body=365 status=ok
// SIG undefined FUN_140d64540(void)

undefined8 * FUN_140d64540(undefined8 *param_1)

{
  *param_1 = L"ClientFriendBeacon";
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x40a00000;
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 2;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 2;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 2;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 2;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 2;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 2;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 2;
  param_1[0x33] = 0;
  return param_1;
}



// FUNCTION 140d646b0 FUN_140d646b0 body=301 status=ok
// SIG undefined FUN_140d646b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140d646b0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  FWeakObjectPtr::operator=();
  *(undefined8 *)(param_1 + 8) = *param_3;
  lVar2 = param_3[1];
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) goto LAB_140d647c2;
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_10 = 3;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    plVar1[1] = param_1;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[2] = (longlong)FUN_140da0a10;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  uVar3 = FUN_14164ab60();
  puVar4 = (undefined8 *)FUN_14158f860(uVar3,local_res8,&local_18,L"FFriendsRefreshTimer_Tick",0);
  *(undefined8 *)(param_1 + 0x20) = *puVar4;
  if (local_10 == 0) {
LAB_140d647af:
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  else if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
    goto LAB_140d647af;
  }
  _DAT_14686e820 = _DAT_14686e820 + 1;
LAB_140d647c2:
  FUN_140d817d0(param_1);
  return param_1;
}



// FUNCTION 140d647e0 FUN_140d647e0 body=169 status=ok
// SIG undefined FUN_140d647e0(void)

longlong FUN_140d647e0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1,uVar1);
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1 + 0x18,uVar1);
  *(undefined1 *)(param_1 + 0x30) = 0;
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1 + 0x38,uVar1);
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1 + 0x50,uVar1);
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined2 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return param_1;
}



// FUNCTION 140d64890 FUN_140d64890 body=448 status=ok
// SIG undefined FUN_140d64890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140d64890(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int local_res8 [2];
  undefined1 local_res10 [8];
  
  FGCObject::FGCObject();
  uVar6 = 0;
  *param_1 = &PTR_FUN_14452f980;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 2;
  param_1[5] = param_2;
  param_1[6] = 0xa00000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  local_res8[0] = 0;
  cVar2 = FConfigCacheIni::GetInt
                    (DAT_1468b6148,L"ProfileImageCache",L"MaxCacheSizeBytes",local_res8,
                     &DAT_1468e2360);
  if ((cVar2 != '\0') && (0 < local_res8[0])) {
    *(int *)(param_1 + 6) = local_res8[0];
  }
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = (longlong)param_1;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)&LAB_140d8abb0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af3b8,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = DAT_1464af3c0;
    lVar4 = (longlong)DAT_1464af3c0;
    uVar6 = *puVar5;
    DAT_1464af3c0 = DAT_1464af3c0 + 1;
    if (DAT_1464af3c4 < DAT_1464af3c0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af3b8,iVar1);
    }
    puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af3b8);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  param_1[0x1f] = uVar6;
  return param_1;
}



// FUNCTION 140d64a50 FUN_140d64a50 body=246 status=ok
// SIG undefined FUN_140d64a50(void)

undefined8 * FUN_140d64a50(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  *param_1 = &PTR_FUN_143f73d18;
  plVar2 = *(longlong **)(param_2 + 0x10);
  plVar5 = plVar2;
  plVar6 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = (longlong *)0x0, plVar6 = (longlong *)0x0, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_2 + 8);
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          LOCK();
          plVar5 = plVar2 + 1;
          lVar3 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          plVar5 = plVar2;
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
  param_1[1] = plVar6;
  param_1[2] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  *param_1 = &PTR_FUN_143f740c8;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 140d64b50 FUN_140d64b50 body=111 status=ok
// SIG undefined FUN_140d64b50(void)

undefined8 * FUN_140d64b50(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__1445302b0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x41200000;
  *(undefined4 *)(param_1 + 0xe) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x44160000;
  *(undefined4 *)(param_1 + 0xf) = 0x43340000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x42b40000;
  *(undefined4 *)(param_1 + 0x10) = 0x41f00000;
  return param_1;
}



// FUNCTION 140d64bc0 FUN_140d64bc0 body=121 status=ok
// SIG undefined FUN_140d64bc0(void)

void FUN_140d64bc0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  plVar4 = *(longlong **)(param_1 + 0x18);
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
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d64c31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar5)(puVar5,1);
  return;
}



// FUNCTION 140d64c40 FUN_140d64c40 body=230 status=ok
// SIG undefined FUN_140d64c40(void)

void FUN_140d64c40(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  
  puVar6 = (undefined8 *)param_1[0x14];
  iVar7 = *(int *)(param_1 + 0x15);
  puVar8 = puVar6;
  if (puVar6 == (undefined8 *)0x0) {
    puVar8 = param_1;
  }
  if (iVar7 != 0) {
    do {
      *puVar8 = &PTR_FUN_143f740c8;
      if (puVar8[3] != 0) {
        FMemory::Free();
      }
      *puVar8 = &PTR_FUN_143f73d18;
      plVar4 = (longlong *)puVar8[2];
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
      puVar8 = puVar8 + 5;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    puVar6 = (undefined8 *)param_1[0x14];
  }
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140d64d30 FUN_140d64d30 body=209 status=ok
// SIG undefined FUN_140d64d30(void)

void FUN_140d64d30(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  plVar9 = (longlong *)*param_1;
  iVar6 = *(int *)(param_1 + 1);
  if (iVar6 != 0) {
    do {
      iVar7 = (int)plVar9[1];
      lVar5 = *plVar9;
      if (iVar7 != 0) {
        plVar8 = (longlong *)(lVar5 + 8);
        do {
          plVar4 = (longlong *)*plVar8;
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
          plVar8 = plVar8 + 2;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        lVar5 = *plVar9;
      }
      if (lVar5 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar9 = (longlong *)*param_1;
  }
  if (plVar9 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar9);
  return;
}



// FUNCTION 140d64e10 FUN_140d64e10 body=157 status=ok
// SIG undefined FUN_140d64e10(void)

void FUN_140d64e10(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0xa8;
    do {
      if (*(longlong *)(lVar1 + 0xc0) != 0) {
        FMemory::Free();
      }
      FUN_140d64c40(lVar1);
      if (*(longlong *)(lVar1 + -0x20) != 0) {
        FMemory::Free();
      }
      FUN_1404bf980(lVar1 + -0x78);
      FUN_1404bf980(lVar1 + -0xa0);
      lVar1 = lVar1 + 0x188;
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



// FUNCTION 140d64eb0 ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=392 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_140d64f71;
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
LAB_140d64f71:
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
      FLoadingScreenAttributes::~FLoadingScreenAttributes(*param_1 + (longlong)iStack_1c * 0x28);
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
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d65040 FUN_140d65040 body=396 status=ok
// SIG undefined FUN_140d65040(void)

void FUN_140d65040(longlong *param_1)

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
      if (bVar4) goto LAB_140d65101;
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
LAB_140d65101:
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
      FUN_140d65de0((longlong)iStack_1c * 0x50 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1,0);
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



// FUNCTION 140d651d0 ~TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=392 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_140d65291;
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
LAB_140d65291:
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
      FVariantData::Empty((longlong)iStack_1c * 0x38 + 8 + *param_1);
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



// FUNCTION 140d65360 ~TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=448 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
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
  local_58 = 0;
  uStack_54 = 1;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar3 = *puVar8;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar7 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar7;
      if (bVar4) goto LAB_140d65421;
      uVar3 = puVar8[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
    if (iVar2 < iStack_44) {
LAB_140d65421:
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
      plVar6 = (longlong *)((longlong)iStack_1c * 0x38 + *param_1);
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
                (plVar6 + 2);
      if (*plVar6 != 0) {
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
    return;
  }
  return;
}



// FUNCTION 140d65520 ~FLoadingScreenAttributes body=142 status=ok
// SIG undefined ~FLoadingScreenAttributes(void)

void FLoadingScreenAttributes::~FLoadingScreenAttributes(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x18);
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + 0x10);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  plVar4 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 140d655b0 ~FCallPixelHandler_GameThread body=109 status=ok
// SIG undefined ~FCallPixelHandler_GameThread(void)

void FCallPixelHandler_GameThread::~FCallPixelHandler_GameThread(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_140d65040(param_1 + 0x10);
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



// FUNCTION 140d65620 FUN_140d65620 body=671 status=ok
// SIG undefined FUN_140d65620(void)

void FUN_140d65620(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res10 [8];
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  FUN_1404cf890(&local_28,0);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x1d0))(local_28,param_1 + 0xf8);
    (**(code **)(*local_28 + 0x88))(local_28,param_1 + 0x100);
  }
  puVar6 = (undefined8 *)FName::FName(local_res10,L"SPARK",1);
  FUN_1404cf890(&local_38,*puVar6);
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x88))(local_38,param_1 + 0x108);
  }
  TBaseMulticastDelegate<void>::Remove(&DAT_1464af3b8,*(undefined8 *)(param_1 + 0x110));
  uVar7 = FUN_14164ab60();
  FUN_141597530(uVar7,*(undefined8 *)(param_1 + 0x118));
  uVar7 = FUN_14164ab60();
  FUN_141597530(uVar7,*(undefined8 *)(param_1 + 0x1d0));
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
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
  FUN_140d66100(param_1 + 0x1f8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1e0);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TArray<TSharedPtr<FRule,0>,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x170,0);
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TArray<TSharedPtr<FRule,0>,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x120,0);
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  FUN_140d74a50(param_1 + 0x58,0);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_140d74a50(param_1 + 8,0);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d658c0 FUN_140d658c0 body=150 status=ok
// SIG undefined FUN_140d658c0(void)

void FUN_140d658c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
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



// FUNCTION 140d65960 FUN_140d65960 body=608 status=ok
// SIG undefined FUN_140d65960(void)

void FUN_140d65960(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x110);
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
  plVar4 = *(longlong **)(param_1 + 0x100);
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
  plVar4 = *(longlong **)(param_1 + 0xf0);
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
  plVar4 = *(longlong **)(param_1 + 0xe0);
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
  plVar4 = *(longlong **)(param_1 + 0xd0);
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
  plVar4 = *(longlong **)(param_1 + 0xc0);
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
  plVar4 = *(longlong **)(param_1 + 0xb0);
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
  plVar4 = *(longlong **)(param_1 + 0xa0);
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
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d65bc0 FUN_140d65bc0 body=121 status=ok
// SIG undefined FUN_140d65bc0(void)

void FUN_140d65bc0(longlong param_1)

{
  FUN_140ce1610(param_1 + 0x220);
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  FUN_140d65960(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_1404bf980(param_1 + 8);
  return;
}



// FUNCTION 140d65c40 FUN_140d65c40 body=411 status=ok
// SIG undefined FUN_140d65c40(void)

void FUN_140d65c40(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x18,0);
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x68,0);
  plVar1 = (longlong *)(param_1 + 0xd0);
  TSet<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>,0>,FDefaultSetAllocator>
  ::Empty(plVar1,0);
  plVar2 = (longlong *)(param_1 + 0x120);
  TSet<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>,0>,FDefaultSetAllocator>
  ::Empty(plVar2,0);
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(plVar2,0);
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(plVar1,0);
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x68,0);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x18,0);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1);
  return;
}



// FUNCTION 140d65de0 FUN_140d65de0 body=196 status=ok
// SIG undefined FUN_140d65de0(void)

void FUN_140d65de0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *local_18;
  longlong *local_10;
  
  Online::GetSessionInterface(&local_18,*(undefined8 *)(param_1 + 0x20));
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x120))(local_18,param_1 + 0x28);
  }
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x30);
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



// FUNCTION 140d65eb0 FUN_140d65eb0 body=160 status=ok
// SIG undefined FUN_140d65eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d65eb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar7 = FUN_14164ab60();
    FUN_141597530(uVar7,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    _DAT_14686e820 = _DAT_14686e820 + -1;
  }
  cVar6 = FUN_14044af00(param_1,0);
  if (cVar6 != '\0') {
    uVar7 = FWeakObjectPtr::Get(param_1);
    uVar7 = FUN_140bb74b0(uVar7);
    TBaseMulticastDelegate<void>::Remove(uVar7,*(undefined8 *)(param_1 + 0x28));
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



// FUNCTION 140d65f50 FUN_140d65f50 body=283 status=ok
// SIG undefined FUN_140d65f50(void)

void FUN_140d65f50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
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



// FUNCTION 140d66070 FUN_140d66070 body=133 status=ok
// SIG undefined FUN_140d66070(void)

void FUN_140d66070(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14452f9a0;
  param_1[4] = &PTR_FUN_14452f998;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 5);
  iVar2 = *(int *)(param_1 + 2);
  lVar1 = param_1[1];
  if (iVar2 != 0) {
    do {
      FUN_1404bf650(lVar1);
      lVar1 = lVar1 + 0xc0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = param_1[1];
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 140d66100 FUN_140d66100 body=191 status=ok
// SIG undefined FUN_140d66100(void)

void FUN_140d66100(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14452f980;
  TBaseMulticastDelegate<void>::Remove(&DAT_1464af3b8,param_1[0x1f]);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xb);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 9);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 7);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 2);
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 1) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1);
  }
  return;
}



// FUNCTION 140d661c0 FUN_140d661c0 body=307 status=ok
// SIG undefined FUN_140d661c0(void)

void FUN_140d661c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 0x50);
  plVar4 = *(longlong **)(param_1 + 0x48);
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + 0x48);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  plVar4 = *(longlong **)(param_1 + 0x40);
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
  iVar5 = *(int *)(param_1 + 0x28);
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
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
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}



// FUNCTION 140d66300 FUN_140d66300 body=673 status=ok
// SIG undefined FUN_140d66300(void)

longlong * FUN_140d66300(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
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
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_140d663dd;
        uVar2 = puVar7[lVar6 + 1];
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
LAB_140d663dd:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_140d66493;
        uVar5 = puVar7[(longlong)iVar4 + 1];
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
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_140d66493:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      FUN_140d65de0((longlong)(int)uStack_3c * 0x50 + 8 + *param_1);
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



// FUNCTION 140d665b0 operator= body=673 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
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
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_140d6668d;
        uVar2 = puVar7[lVar6 + 1];
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
LAB_140d6668d:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_140d66743;
        uVar5 = puVar7[(longlong)iVar4 + 1];
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
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_140d66743:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      FVariantData::Empty(*param_1 + ((longlong)(int)uStack_3c * 5 + 1) * 8);
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
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
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



// FUNCTION 140d66860 FUN_140d66860 body=56 status=ok
// SIG undefined FUN_140d66860(void)

longlong FUN_140d66860(longlong param_1,longlong param_2)

{
  FUN_140a52100(param_1 + 8,param_2 + 8);
  FUN_140a51f90(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 140d668a0 FUN_140d668a0 body=1338 status=ok
// SIG undefined FUN_140d668a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140d668a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong *plStack_120;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  FString::operator=(param_1 + 8,param_2 + 8);
  FString::operator=(param_1 + 0x18,param_2 + 0x18);
  FString::operator=(param_1 + 0x28,param_2 + 0x28);
  FString::operator=(param_1 + 0x38,param_2 + 0x38);
  FString::operator=(param_1 + 0x48,param_2 + 0x48);
  FString::operator=(param_1 + 0x58,param_2 + 0x58);
  FString::operator=(param_1 + 0x68,param_2 + 0x68);
  FString::operator=(param_1 + 0x78,param_2 + 0x78);
  puVar3 = (undefined8 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  plVar5 = *(longlong **)(param_2 + 0xa0);
  uVar6 = *(undefined8 *)(param_2 + 0x98);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_128 = uVar6;
  plStack_120 = plVar5;
  if (&local_128 != puVar3) {
    local_128 = *puVar3;
    plStack_120 = *(longlong **)(param_1 + 0xa0);
    *puVar3 = uVar6;
    *(longlong **)(param_1 + 0xa0) = plVar5;
    local_a8 = uVar6;
    plStack_a0 = plVar5;
  }
  plVar5 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_120 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_120 + 8))(plStack_120,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_2 + 0xb0);
  puVar3 = (undefined8 *)(param_1 + 0xa8);
  uVar6 = *(undefined8 *)(param_2 + 0xa8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_118 = uVar6;
  plStack_110 = plVar5;
  if (&local_118 != puVar3) {
    local_118 = *puVar3;
    plStack_110 = *(longlong **)(param_1 + 0xb0);
    *puVar3 = uVar6;
    *(longlong **)(param_1 + 0xb0) = plVar5;
    local_98 = uVar6;
    plStack_90 = plVar5;
  }
  plVar5 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_110 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_110 + 8))(plStack_110,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_2 + 0xc0);
  puVar3 = (undefined8 *)(param_1 + 0xb8);
  uVar6 = *(undefined8 *)(param_2 + 0xb8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_108 = uVar6;
  plStack_100 = plVar5;
  if (&local_108 != puVar3) {
    local_108 = *puVar3;
    plStack_100 = *(longlong **)(param_1 + 0xc0);
    *puVar3 = uVar6;
    *(longlong **)(param_1 + 0xc0) = plVar5;
    local_88 = uVar6;
    plStack_80 = plVar5;
  }
  plVar5 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_100 + 8))(plStack_100,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_2 + 0xd0);
  puVar3 = (undefined8 *)(param_1 + 200);
  uVar6 = *(undefined8 *)(param_2 + 200);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_f8 = uVar6;
  plStack_f0 = plVar5;
  if (&local_f8 != puVar3) {
    local_f8 = *puVar3;
    plStack_f0 = *(longlong **)(param_1 + 0xd0);
    *puVar3 = uVar6;
    *(longlong **)(param_1 + 0xd0) = plVar5;
    local_78 = uVar6;
    plStack_70 = plVar5;
  }
  plVar5 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_f0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_2 + 0xe0);
  puVar3 = (undefined8 *)(param_1 + 0xd8);
  uVar6 = *(undefined8 *)(param_2 + 0xd8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_e8 = uVar6;
  plStack_e0 = plVar5;
  if (&local_e8 != puVar3) {
    local_e8 = *puVar3;
    plStack_e0 = *(longlong **)(param_1 + 0xe0);
    *puVar3 = uVar6;
    *(longlong **)(param_1 + 0xe0) = plVar5;
    local_68 = uVar6;
    plStack_60 = plVar5;
  }
  plVar5 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_e0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_2 + 0xf0);
  puVar3 = (undefined8 *)(param_1 + 0xe8);
  uVar6 = *(undefined8 *)(param_2 + 0xe8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_d8 = uVar6;
  plStack_d0 = plVar5;
  if (&local_d8 != puVar3) {
    local_d8 = *puVar3;
    plStack_d0 = *(longlong **)(param_1 + 0xf0);
    *puVar3 = uVar6;
    *(longlong **)(param_1 + 0xf0) = plVar5;
    local_58 = uVar6;
    plStack_50 = plVar5;
  }
  plVar5 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_2 + 0x100);
  puVar3 = (undefined8 *)(param_1 + 0xf8);
  uVar6 = *(undefined8 *)(param_2 + 0xf8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_c8 = uVar6;
  plStack_c0 = plVar5;
  if (&local_c8 != puVar3) {
    local_c8 = *puVar3;
    plStack_c0 = *(longlong **)(param_1 + 0x100);
    *puVar3 = uVar6;
    *(longlong **)(param_1 + 0x100) = plVar5;
    local_48 = uVar6;
    plStack_40 = plVar5;
  }
  plVar5 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_2 + 0x110);
  puVar3 = (undefined8 *)(param_1 + 0x108);
  uVar6 = *(undefined8 *)(param_2 + 0x108);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_b8 = uVar6;
  plStack_b0 = plVar5;
  if (&local_b8 != puVar3) {
    local_b8 = *puVar3;
    plStack_b0 = *(longlong **)(param_1 + 0x110);
    *puVar3 = uVar6;
    *(longlong **)(param_1 + 0x110) = plVar5;
    local_38 = uVar6;
    plStack_30 = plVar5;
  }
  plVar5 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140d66de0 FUN_140d66de0 body=135 status=ok
// SIG undefined FUN_140d66de0(void)

longlong FUN_140d66de0(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  FString::operator=(param_1 + 0x10,param_2 + 0x10);
  FString::operator=(param_1 + 0x20,param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_2 + 0x4a);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  return param_1;
}



// FUNCTION 140d66e70 FUN_140d66e70 body=151 status=ok
// SIG undefined FUN_140d66e70(void)

longlong FUN_140d66e70(longlong param_1,longlong param_2)

{
  void *pvVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  pvVar1 = (void *)(param_1 + 8);
  if (pvVar1 != (void *)(param_2 + 8)) {
    iVar2 = *(int *)(param_2 + 0x40);
    _Src = *(void **)(param_2 + 0x38);
    *(int *)(param_1 + 0x40) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x44) == 0)) {
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    else {
      FUN_140d97840(pvVar1,iVar2);
      if (_Src == (void *)0x0) {
        _Src = (void *)(param_2 + 8);
      }
      _Dst = *(void **)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x38) == (void *)0x0) {
        _Dst = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar2 << 4);
    }
  }
  return param_1;
}



// FUNCTION 140d66f10 FUN_140d66f10 body=186 status=ok
// SIG undefined FUN_140d66f10(void)

longlong * FUN_140d66f10(longlong *param_1,undefined4 *param_2)

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
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 1,4);
  }
  return param_1;
}



// FUNCTION 140d66fd0 FUN_140d66fd0 body=429 status=ok
// SIG undefined FUN_140d66fd0(void)

longlong * FUN_140d66fd0(longlong *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar9;
  int local_res8 [2];
  undefined4 *puVar8;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)*(int *)(param_2 + 0x38) << 4,(longlong)*(int *)(param_2 + 0x3c) << 4
            );
  puVar9 = (undefined4 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = *(int *)(param_2 + 0x38);
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
      *(int *)(param_2 + 0x38) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar4 = *(longlong *)(param_2 + 0x30);
          if (*(longlong *)(param_2 + 0x30) == 0) {
            lVar4 = param_2;
          }
          FUN_140d66f10(param_1,lVar4 + (longlong)(int)puVar9 * 0x10);
          uVar7 = (int)puVar9 + 1;
          puVar9 = (undefined4 *)(ulonglong)uVar7;
        } while ((int)uVar7 < *(int *)(param_2 + 0x38));
      }
      return param_1;
    }
    *(undefined4 *)(param_2 + 0x38) = 0;
    if (*(int *)(param_2 + 0x3c) != local_res8[0]) {
      FUN_140d97d10(param_2,local_res8[0]);
    }
    puVar8 = puVar9;
    if (0 < local_res8[0]) {
      do {
        iVar2 = *(int *)(param_2 + 0x38);
        *(int *)(param_2 + 0x38) = iVar2 + 1;
        if (*(int *)(param_2 + 0x3c) < iVar2 + 1) {
          TArray<FCurveHandle,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2;
        }
        puVar5 = (undefined4 *)(lVar4 + (longlong)iVar2 * 0x10);
        puVar6 = puVar9;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0xffffffff;
          *(undefined8 *)(puVar5 + 1) = 0;
          puVar5[3] = 0;
          puVar6 = puVar5;
        }
        FUN_140d66f10(param_1,puVar6);
        uVar7 = (int)puVar8 + 1;
        puVar8 = (undefined4 *)(ulonglong)uVar7;
      } while ((int)uVar7 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 140d67180 FUN_140d67180 body=574 status=ok
// SIG undefined FUN_140d67180(void)

undefined8
FUN_140d67180(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_68);
  FUN_140d64a50(local_58,*puVar5);
  plVar6 = (longlong *)FUN_140d3ae40(param_3);
  lVar12 = 0;
  lVar10 = lVar12;
  if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
    if ((local_50 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*local_50 + 0x20))(local_50), cVar3 == '\0')) {
      iVar4 = -1;
    }
    else {
      iVar4 = GetTypeHash(local_50);
    }
    plVar7 = (longlong *)plVar6[8];
    if ((longlong *)plVar6[8] == (longlong *)0x0) {
      plVar7 = plVar6 + 7;
    }
    iVar4 = *(int *)((longlong)plVar7 + ((longlong)(int)plVar6[9] - 1U & (longlong)iVar4) * 4);
    if (iVar4 != -1) {
      lVar8 = *plVar6;
      do {
        lVar11 = (longlong)iVar4 * 0x40;
        plVar7 = *(longlong **)(lVar11 + 8 + lVar8);
        if ((((plVar7 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar7 + 0x20))(), cVar3 == '\0')) ||
            (local_50 == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(*local_50 + 0x20))(local_50), cVar3 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        plVar7 = *(longlong **)(lVar11 + lVar8 + 8);
        if ((((plVar7 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar7 + 0x20))(), cVar3 == '\0')) &&
            ((local_50 == (longlong *)0x0 ||
             (cVar3 = (**(code **)(*local_50 + 0x20))(local_50), cVar3 == '\0')))) ||
           ((bVar2 && (cVar3 = (**(code **)*local_50)(local_50,*(undefined8 *)(lVar11 + lVar8 + 8)),
                      cVar3 != '\0')))) {
          if (iVar4 != -1) {
            lVar10 = *plVar6 + lVar11;
          }
          break;
        }
        lVar8 = *plVar6;
        iVar4 = *(int *)(lVar11 + 0x38 + lVar8);
      } while (iVar4 != -1);
    }
  }
  lVar8 = lVar10 + 0x28;
  if (lVar10 == 0) {
    lVar8 = lVar12;
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  plVar6 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_48 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_60 + 1;
    lVar10 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar8 == 0) {
    return 0;
  }
  uVar9 = FUN_140d3b120(lVar8,param_4);
  return uVar9;
}



// FUNCTION 140d673c0 FUN_140d673c0 body=617 status=ok
// SIG undefined FUN_140d673c0(void)

void FUN_140d673c0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong local_38 [2];
  
  puVar5 = *(undefined8 **)*param_1;
  puVar6 = puVar5 + (longlong)(int)((longlong *)*param_1)[1] * 2;
  iVar1 = 0;
  iVar3 = 0;
  for (; puVar5 != puVar6; puVar5 = puVar5 + 2) {
    lVar4 = (**(code **)(*(longlong *)*puVar5 + 0x38))();
    iVar2 = iVar3 + 1;
    if ((*(byte *)(lVar4 + 0x10) & 1) == 0) {
      iVar2 = iVar3;
    }
    lVar4 = (**(code **)(*(longlong *)*puVar5 + 0x38))();
    iVar3 = iVar1 + 1;
    if ((*(byte *)(lVar4 + 0x10) & 4) == 0) {
      iVar3 = iVar1;
    }
    iVar1 = iVar3;
    iVar3 = iVar2;
  }
  local_38[0] = 0;
  local_38[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"friend_count",0x1a);
  (**(code **)(*param_3 + 0x18))(param_3,local_38,*(undefined4 *)(*param_1 + 8));
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"online_count",0x1a);
  (**(code **)(*param_3 + 0x18))(param_3,local_38,iVar3);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"playing_this_game_count",0x30);
  (**(code **)(*param_3 + 0x18))(param_3,local_38,iVar1);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"connected_count",0x20);
  (**(code **)(*param_3 + 0x18))(param_3,local_38,*(undefined4 *)param_1[1]);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"max_host_connections",0x2a);
  (**(code **)(*param_3 + 0x18))(param_3,local_38,*(undefined4 *)((longlong)param_1 + 0x14));
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"max_client_connections",0x2e);
  (**(code **)(*param_3 + 0x18))(param_3,local_38,(int)param_1[2]);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d67630 FUN_140d67630 body=1152 status=ok
// SIG undefined FUN_140d67630(void)

void FUN_140d67630(longlong *param_1,char param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  short sVar3;
  longlong lVar4;
  void *_Src;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  void **ppvVar18;
  int local_res10;
  void *local_98;
  int local_90;
  int local_8c;
  longlong local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  
  iVar10 = (int)param_1[2];
  lVar15 = param_1[1];
  local_88 = 0;
  local_80 = iVar10;
  if (iVar10 == 0) {
    local_7c = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_88,iVar10,0);
    lVar15 = lVar15 - local_88;
    lVar14 = local_88 + 0x10;
    do {
      *(undefined8 *)(lVar14 + -0x10) = *(undefined8 *)(lVar15 + -0x10 + lVar14);
      lVar4 = *(longlong *)(lVar15 + -8 + lVar14);
      *(longlong *)(lVar14 + -8) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      FString::FString(lVar14,lVar15 + lVar14);
      FString::FString(lVar14 + 0x10,lVar15 + 0x10 + lVar14);
      lVar14 = lVar14 + 0x30;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  uVar16 = 0;
  if (param_2 == '\0') {
    local_res10 = 0;
    if (0 < (int)param_3[1]) {
      lVar15 = -0x10 - local_88;
      ppvVar18 = (void **)(local_88 + 0x10);
      do {
        iVar9 = 0;
        local_98 = (void *)0x0;
        local_90 = 0;
        local_8c = 0;
        iVar10 = iVar9;
        iVar13 = iVar9;
        while( true ) {
          iVar11 = *(int *)(*param_3 + 8 + uVar16);
          iVar6 = iVar11 + -1;
          if (iVar11 == 0) {
            iVar6 = 0;
          }
          if (iVar6 <= iVar9) break;
          sVar3 = *(short *)(*param_1 + 0x1d8);
          if (sVar3 != 0) {
            iVar11 = iVar10 + -1;
            if (iVar10 < 1) {
              iVar11 = 0;
            }
            local_90 = (iVar10 < 1) + 1 + iVar10;
            if (iVar13 < local_90) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
              iVar13 = local_8c;
            }
            *(short *)((longlong)local_98 + (longlong)iVar11 * 2) = sVar3;
            *(undefined2 *)((longlong)local_98 + (longlong)iVar11 * 2 + 2) = 0;
            iVar10 = local_90;
          }
          iVar9 = iVar9 + 1;
        }
        if (ppvVar18 != &local_98) {
          *(int *)(ppvVar18 + 1) = iVar10;
          if ((iVar10 == 0) && (*(int *)((longlong)ppvVar18 + 0xc) == 0)) {
            *(undefined4 *)((longlong)ppvVar18 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar18,iVar10);
            _guard_xfg_dispatch_icall_nop(*ppvVar18,local_98,(longlong)iVar10 * 2);
          }
        }
        local_58 = *(undefined8 *)((longlong)ppvVar18 + param_1[1] + lVar15);
        local_50 = *(longlong **)((longlong)ppvVar18 + param_1[1] + 8 + lVar15);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        lVar14 = (longlong)local_res10 * 0x30 + local_88;
        FUN_140d68fa0(*param_1,&local_58,lVar14 + 0x10,lVar14 + 0x20,0);
        plVar5 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        local_48 = *(undefined8 *)((longlong)ppvVar18 + param_1[1] + lVar15);
        local_40 = *(longlong **)((longlong)ppvVar18 + param_1[1] + 8 + lVar15);
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        FUN_140d76db0(*param_1,&local_48);
        plVar5 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        if (local_98 != (void *)0x0) {
          FMemory::Free();
        }
        local_res10 = local_res10 + 1;
        uVar16 = uVar16 + 0x10;
        ppvVar18 = ppvVar18 + 6;
      } while (local_res10 < (int)param_3[1]);
    }
  }
  else if (0 < (int)param_3[1]) {
    lVar15 = -0x10 - local_88;
    puVar12 = (undefined8 *)(local_88 + 0x10);
    uVar17 = uVar16;
    do {
      puVar7 = (undefined8 *)(*param_3 + uVar17);
      if (puVar12 != puVar7) {
        iVar10 = *(int *)(puVar7 + 1);
        _Src = (void *)*puVar7;
        *(int *)(puVar12 + 1) = iVar10;
        if ((iVar10 == 0) && (*(int *)((longlong)puVar12 + 0xc) == 0)) {
          *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar12,iVar10);
          _guard_xfg_dispatch_icall_nop((void *)*puVar12,_Src,(longlong)iVar10 * 2);
        }
      }
      local_78 = *(undefined8 *)((longlong)puVar12 + param_1[1] + lVar15);
      local_70 = *(longlong **)((longlong)puVar12 + param_1[1] + 8 + lVar15);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      lVar14 = (longlong)(int)uVar16 * 0x30 + local_88;
      FUN_140d68fa0(*param_1,&local_78,lVar14 + 0x10,lVar14 + 0x20,0);
      plVar5 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      local_68 = *(undefined8 *)((longlong)puVar12 + param_1[1] + lVar15);
      local_60 = *(longlong **)((longlong)puVar12 + param_1[1] + 8 + lVar15);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      FUN_140d76db0(*param_1,&local_68);
      plVar5 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      uVar8 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar8;
      uVar17 = uVar17 + 0x10;
      puVar12 = puVar12 + 6;
    } while ((int)uVar8 < (int)param_3[1]);
  }
  TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::
  ~TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>(&local_88);
  return;
}



// FUNCTION 140d67ab0 FUN_140d67ab0 body=237 status=ok
// SIG undefined FUN_140d67ab0(void)

void FUN_140d67ab0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar4 = *param_1;
  puVar9 = (undefined8 *)param_1[1];
  param_1[1] = 0;
  plVar8 = (longlong *)param_1[3];
  uVar5 = param_1[2];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_28 = 0;
  local_18 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x28,local_48);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_144531638;
    puVar7[1] = uVar4;
    puVar7[2] = puVar9;
    puVar9 = (undefined8 *)0x0;
    puVar7[3] = uVar5;
    puVar7[4] = plVar8;
    plVar8 = (longlong *)0x0;
  }
  local_58[0] = FUN_140d6ef40;
  FUN_14158fcd0(2,local_58);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9,1);
  }
  return;
}



// FUNCTION 140d67ba0 FUN_140d67ba0 body=211 status=ok
// SIG undefined FUN_140d67ba0(void)

bool FUN_140d67ba0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 local_18;
  longlong *local_10;
  
  if ((*param_2 != 0) && (plVar4 = *(longlong **)(*param_2 + 0x10), plVar4 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar4 + 0x20))();
    if (cVar6 != '\0') {
      plVar4 = *(longlong **)(*param_2 + 0x18);
      local_18 = *(undefined8 *)(*param_2 + 0x10);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_10 = plVar4;
      cVar6 = FUN_140d89890(*param_1,param_1[1],&local_18,0);
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
      return cVar6 == '\0';
    }
  }
  return true;
}



// FUNCTION 140d67c80 FUN_140d67c80 body=198 status=ok
// SIG undefined FUN_140d67c80(void)

ulonglong FUN_140d67c80(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  ulonglong in_RAX;
  undefined8 local_18;
  longlong *local_10;
  
  if ((longlong *)*param_2 != (longlong *)0x0) {
    in_RAX = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if ((char)in_RAX != '\0') {
      plVar4 = *(longlong **)(*param_2 + 0x18);
      local_18 = *(undefined8 *)(*param_2 + 0x10);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_10 = plVar4;
      cVar6 = FUN_140d89890(*param_1,param_1[1],&local_18,0);
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
      return (ulonglong)(cVar6 == '\0');
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140d67d50 FUN_140d67d50 body=228 status=ok
// SIG undefined FUN_140d67d50(void)

undefined8 FUN_140d67d50(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 local_18;
  longlong *local_10;
  
  if (*(longlong **)(*param_2 + 0x10) == (longlong *)0x0) {
    return 1;
  }
  cVar6 = (**(code **)(**(longlong **)(*param_2 + 0x10) + 0x20))();
  if (cVar6 != '\0') {
    local_18 = *(undefined8 *)(*param_2 + 0x10);
    local_10 = *(longlong **)(*param_2 + 0x18);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    cVar6 = FUN_140bca1f0(*(undefined8 *)(*param_1 + 0x10),&local_18,1);
    if ((cVar6 == '\0') && (cVar6 = FUN_140d89890(param_1[2],param_1[1],&local_18,0), cVar6 != '\0')
       ) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
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
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    return uVar7;
  }
  return 1;
}



// FUNCTION 140d67e40 FUN_140d67e40 body=66 status=ok
// SIG undefined FUN_140d67e40(void)

undefined8 * FUN_140d67e40(undefined8 *param_1,ulonglong param_2)

{
  TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::
  ~TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>(param_1 + 2);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140d67e90 FUN_140d67e90 body=208 status=ok
// SIG undefined FUN_140d67e90(void)

longlong FUN_140d67e90(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    FUN_140d8abf0();
    uVar6 = FUN_14164ab60();
    FUN_141597530(uVar6,*(undefined8 *)(param_1 + 0x80));
  }
  plVar4 = *(longlong **)(param_1 + 0xa0);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x88);
  FUN_140d64e10(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 140d67f60 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_d8e34ae39ecb18b94489326e440868a5>,1>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_140d64bc0(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140d67fb0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<TLocalizedTextData<FTextHistory_AsNumber>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 140d67fe0 FUN_140d67fe0 body=43 status=ok
// SIG undefined FUN_140d67fe0(void)

undefined8 * FUN_140d67fe0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140d68010 FUN_140d68010 body=52 status=ok
// SIG undefined FUN_140d68010(void)

undefined8 FUN_140d68010(undefined8 param_1,ulonglong param_2)

{
  FUN_142b1e040();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140d68050 FUN_140d68050 body=252 status=ok
// SIG undefined FUN_140d68050(void)

undefined8 * FUN_140d68050(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  plVar3 = (longlong *)param_1[0xc];
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
  iVar5 = *(int *)(param_1 + 9);
  lVar4 = param_1[8];
  if (iVar5 != 0) {
    do {
      FUN_1404bf650(lVar4);
      lVar4 = lVar4 + 0xc0;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar4 = param_1[8];
  }
  if (lVar4 != 0) {
    FMemory::Free(lVar4);
  }
  iVar5 = *(int *)(param_1 + 7);
  lVar4 = param_1[6];
  if (iVar5 != 0) {
    do {
      FUN_1404bf650(lVar4);
      lVar4 = lVar4 + 0xc0;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar4 = param_1[6];
  }
  if (lVar4 != 0) {
    FMemory::Free(lVar4);
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 4);
  *param_1 = &PTR__scalar_deleting_destructor__14452f9d0;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 140d68150 FUN_140d68150 body=33 status=ok
// SIG undefined FUN_140d68150(void)

undefined8 FUN_140d68150(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140d68180 FUN_140d68180 body=80 status=ok
// SIG undefined FUN_140d68180(void)

longlong FUN_140d68180(longlong param_1,ulonglong param_2)

{
  FUN_140ce1610(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x10);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140d681d0 FUN_140d681d0 body=112 status=ok
// SIG undefined FUN_140d681d0(void)

longlong FUN_140d681d0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  FUN_140d64c40(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  FUN_1404bf980(param_1 + 0x30);
  FUN_1404bf980(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 140d68240 FUN_140d68240 body=112 status=ok
// SIG undefined FUN_140d68240(void)

longlong FUN_140d68240(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  FUN_140d64c40(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  FUN_1404bf980(param_1 + 0x30);
  FUN_1404bf980(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 140d682b0 FUN_140d682b0 body=112 status=ok
// SIG undefined FUN_140d682b0(void)

longlong FUN_140d682b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  FUN_140d64c40(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  FUN_1404bf980(param_1 + 0x30);
  FUN_1404bf980(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 140d68320 FUN_140d68320 body=124 status=ok
// SIG undefined FUN_140d68320(void)

longlong FUN_140d68320(longlong param_1,ulonglong param_2)

{
  FUN_140d64e10(param_1 + 0x178);
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  FUN_140d64c40(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  FUN_1404bf980(param_1 + 0x30);
  FUN_1404bf980(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 140d683a0 FUN_140d683a0 body=129 status=ok
// SIG undefined FUN_140d683a0(void)

longlong FUN_140d683a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  FUN_140d64c40(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  FUN_1404bf980(param_1 + 0x30);
  FUN_1404bf980(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 140d68430 FUN_140d68430 body=129 status=ok
// SIG undefined FUN_140d68430(void)

longlong FUN_140d68430(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  FUN_140d64c40(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  FUN_1404bf980(param_1 + 0x30);
  FUN_1404bf980(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 140d684c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FBuildTileConesCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140d65960();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 140d68500 FUN_140d68500 body=76 status=ok
// SIG undefined FUN_140d68500(void)

longlong FUN_140d68500(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 140d68550 FUN_140d68550 body=62 status=ok
// SIG undefined FUN_140d68550(void)

longlong FUN_140d68550(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140d68590 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FOpenXRARSystem::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140d65bc0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x248);
  }
  return param_1;
}



// FUNCTION 140d685d0 FUN_140d685d0 body=65 status=ok
// SIG undefined FUN_140d685d0(void)

longlong FUN_140d685d0(longlong param_1,ulonglong param_2)

{
  FUN_1404bf980(param_1 + 0x30);
  FUN_1404bf980(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 140d68620 FUN_140d68620 body=65 status=ok
// SIG undefined FUN_140d68620(void)

longlong FUN_140d68620(longlong param_1,ulonglong param_2)

{
  FUN_1404bf980(param_1 + 0x30);
  FUN_1404bf980(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 140d68670 FUN_140d68670 body=104 status=ok
// SIG undefined FUN_140d68670(void)

longlong FUN_140d68670(longlong param_1,ulonglong param_2)

{
  FUN_140ce1610(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x70);
  FUN_1404bf980(param_1 + 0x30);
  FUN_1404bf980(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 140d686e0 FUN_140d686e0 body=74 status=ok
// SIG undefined FUN_140d686e0(void)

longlong FUN_140d686e0(longlong param_1,ulonglong param_2)

{
  FUN_140d65960(param_1 + 0x60);
  FUN_1404bf980(param_1 + 0x30);
  FUN_1404bf980(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 140d68730 FUN_140d68730 body=97 status=ok
// SIG undefined FUN_140d68730(void)

longlong FUN_140d68730(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  FUN_1404bf980(param_1 + 0x30);
  FUN_1404bf980(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 140d687a0 FUN_140d687a0 body=83 status=ok
// SIG undefined FUN_140d687a0(void)

longlong FUN_140d687a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  FUN_1404bf980(param_1 + 0x30);
  FUN_1404bf980(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 140d68800 FUN_140d68800 body=80 status=ok
// SIG undefined FUN_140d68800(void)

longlong FUN_140d68800(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  FUN_1404bf980(param_1 + 0x30);
  FUN_1404bf980(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 140d68850 FUN_140d68850 body=163 status=ok
// SIG undefined FUN_140d68850(void)

longlong FUN_140d68850(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_140d64d30(param_1 + 0x10);
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140d68900 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSlateCanvasRenderTarget::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14452f9d0;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140d68950 FUN_140d68950 body=98 status=ok
// SIG undefined FUN_140d68950(void)

undefined8 * FUN_140d68950(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14452f998;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 140d689c0 FUN_140d689c0 body=52 status=ok
// SIG undefined FUN_140d689c0(void)

undefined8 FUN_140d689c0(undefined8 param_1,ulonglong param_2)

{
  FUN_140d66070();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140d68a00 FUN_140d68a00 body=228 status=ok
// SIG undefined FUN_140d68a00(void)

longlong FUN_140d68a00(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *local_18;
  longlong *local_10;
  
  Online::GetSessionInterface(&local_18,*(undefined8 *)(param_1 + 0x28));
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x18))(local_18,param_1 + 0x68);
  }
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x48);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x38);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x10);
  plVar4 = *(longlong **)(param_1 + 8);
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 140d68af0 FUN_140d68af0 body=52 status=ok
// SIG undefined FUN_140d68af0(void)

undefined8 FUN_140d68af0(undefined8 param_1,ulonglong param_2)

{
  FUN_140d66100();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 140d68b30 FUN_140d68b30 body=134 status=ok
// SIG undefined FUN_140d68b30(void)

undefined8 * FUN_140d68b30(undefined8 *param_1,ulonglong param_2)

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
  *param_1 = &PTR_FUN_143f4c8e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140d68bc0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleMeshRotation::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140d68c10 FUN_140d68c10 body=52 status=ok
// SIG undefined FUN_140d68c10(void)

undefined8 FUN_140d68c10(undefined8 param_1,ulonglong param_2)

{
  FUN_142b0f4f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140d68c50 FUN_140d68c50 body=449 status=ok
// SIG undefined FUN_140d68c50(void)

void FUN_140d68c50(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *local_res18;
  undefined8 *local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar7 = (longlong *)FUN_140d78ad0(param_1,local_28,param_2);
  lVar4 = *plVar7;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_20 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
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
  if (lVar4 == 0) {
    local_38 = (undefined8 *)operator_new(0x10);
    if (local_38 == (undefined8 *)0x0) {
      local_38 = (undefined8 *)0x0;
    }
    else {
      *local_38 = *param_2;
      lVar4 = param_2[1];
      local_38[1] = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
    }
    local_30 = (longlong *)operator_new(0x18);
    if (local_30 != (longlong *)0x0) {
      *(undefined4 *)(local_30 + 1) = 1;
      *local_30 = (longlong)&PTR_DestroyObject_144531910;
      *(undefined4 *)((longlong)local_30 + 0xc) = 1;
      local_30[2] = (longlong)local_38;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_38,local_38,local_38);
    plVar7 = local_30;
    puVar6 = local_38;
    if (local_38 != (undefined8 *)0x0) {
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      iVar3 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar3);
      }
      puVar8 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_1);
      *puVar8 = puVar6;
      puVar8[1] = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar7 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
      }
      local_res18 = param_2;
      FUN_140d60cd0(param_1 + 2,&local_res18);
    }
    plVar7 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
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
  }
  return;
}



// FUNCTION 140d68e20 FUN_140d68e20 body=382 status=ok
// SIG undefined FUN_140d68e20(void)

ulonglong FUN_140d68e20(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  
  iVar9 = (int)param_2[1];
  iVar11 = 0;
  iVar10 = iVar9;
  if (0 < iVar9) {
    plVar12 = (longlong *)*param_2;
    do {
      lVar3 = *plVar12;
      if (lVar3 != 0) {
        lVar4 = *param_3;
        uVar6 = *(uint *)(lVar3 + 0x68) ^ *(uint *)(lVar4 + 0x68);
        if (((*(int *)(lVar4 + 0x74) == *(int *)(lVar3 + 0x74) &&
             *(int *)(lVar4 + 0x70) == *(int *)(lVar3 + 0x70)) &&
            *(int *)(lVar4 + 0x6c) == *(int *)(lVar3 + 0x6c)) && uVar6 == 0) {
          return CONCAT71((uint7)(uint3)(uVar6 >> 8),1);
        }
        if ((*(longlong *)(lVar3 + 0x60) <= *(longlong *)(lVar4 + 0x60)) && (iVar11 <= iVar10)) {
          iVar10 = iVar11;
        }
      }
      iVar11 = iVar11 + 1;
      plVar12 = plVar12 + 2;
    } while (iVar11 < iVar9);
  }
  if (iVar10 != -1) {
    lVar3 = *param_3;
    lVar4 = param_3[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
      iVar9 = (int)param_2[1];
    }
    *(int *)(param_2 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
    }
    lVar8 = (longlong)iVar10 * 0x10;
    _guard_xfg_dispatch_icall_nop
              ((void *)(*param_2 + lVar8 + 0x10),(void *)(*param_2 + lVar8),
               (longlong)(iVar9 - iVar10) << 4);
    lVar5 = *param_2;
    *(longlong *)(lVar8 + lVar5) = lVar3;
    *(longlong *)(lVar8 + 8 + lVar5) = lVar4;
  }
  uVar7 = (ulonglong)(int)param_2[1];
  if (*(int *)(param_1 + 0x58) <= (int)param_2[1]) {
    lVar3 = *param_2;
    plVar12 = *(longlong **)(lVar3 + -8 + uVar7 * 0x10);
    *(undefined8 *)(lVar3 + -8 + uVar7 * 0x10) = 0;
    *(undefined8 *)(lVar3 + -0x10 + uVar7 * 0x10) = 0;
    uVar7 = TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (param_2,(int)param_2[1] + -1,1);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar12 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar6 = (int)lVar3 - 1;
      uVar7 = (ulonglong)uVar6;
      if (uVar6 == 0) {
        uVar7 = (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          uVar7 = (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
  }
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 140d68fa0 FUN_140d68fa0 body=592 status=ok
// SIG undefined FUN_140d68fa0(void)

void FUN_140d68fa0(longlong param_1,undefined8 *param_2,undefined8 *param_3,void **param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  int local_res8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_48 [8];
  undefined8 *local_40;
  undefined8 *local_38;
  
  FUN_140d76bb0(param_1 + 8,local_res8,param_2);
  lVar6 = 0;
  if (local_res8[0] != -1) {
    lVar6 = (longlong)local_res8[0] * 0x80 + *(longlong *)(param_1 + 8);
  }
  lVar8 = lVar6 + 0x10;
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  if (lVar8 == 0) {
    local_b8 = *param_2;
    local_b0 = (longlong *)param_2[1];
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_58 = 0;
    FUN_140d9f2d0(&local_b8,param_3);
    if (&local_68 != param_4) {
      iVar4 = *(int *)(param_4 + 1);
      _Src = *param_4;
      local_60 = CONCAT44(local_60._4_4_,iVar4);
      if ((iVar4 == 0) && (local_60._4_4_ == 0)) {
        local_60 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar4);
        _guard_xfg_dispatch_icall_nop(local_68,_Src,(longlong)iVar4 * 2);
      }
    }
    local_58 = param_5;
    local_38 = &local_b8;
    local_40 = param_2;
    FUN_140d5ef40(param_1 + 8,local_48,&local_40,0);
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
    plVar3 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_b0)(local_b0);
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
  else {
    puVar9 = &DAT_143f3eda8;
    if (*(int *)(param_3 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_3;
    }
    if (*(int *)(lVar8 + 0x18) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = *(undefined2 **)(lVar8 + 0x10);
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar7);
    if (iVar4 == 0) {
      if (*(int *)(param_4 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = *param_4;
      }
      if (*(int *)(lVar8 + 0x58) != 0) {
        puVar9 = *(undefined2 **)(lVar8 + 0x50);
      }
      iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar7);
      if (iVar4 == 0) {
        return;
      }
    }
    FUN_140d9f2d0(lVar8,param_3);
    FString::operator=(lVar8 + 0x50,param_4);
    *(undefined1 *)(lVar8 + 0x60) = param_5;
  }
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x1e0,param_2);
  return;
}



// FUNCTION 140d691f0 FUN_140d691f0 body=55 status=ok
// SIG undefined FUN_140d691f0(void)

/* WARNING: Removing unreachable block (ram,0x000140d69219) */

void FUN_140d691f0(void)

{
  FUN_140d68fa0();
  return;
}



// FUNCTION 140d69230 FUN_140d69230 body=1122 status=ok
// SIG undefined FUN_140d69230(void)

void FUN_140d69230(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  void *pvVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  LARGE_INTEGER local_res20;
  undefined1 local_88 [8];
  undefined8 *local_80;
  longlong *local_78;
  longlong *local_70;
  int local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  
  if (param_3 == 0) {
    return;
  }
  plVar5 = (longlong *)FUN_140d84620(param_1,local_50,param_2);
  local_78 = (longlong *)plVar5[1];
  puVar12 = (undefined8 *)*plVar5;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  local_80 = puVar12;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_48 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  plVar5 = local_78;
  if (puVar12 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)operator_new(0x38);
    puVar12 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_14452fa30;
      puVar6[1] = *param_2;
      lVar9 = param_2[1];
      puVar6[2] = lVar9;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      pvVar2 = ThreadLocalStoragePointer;
      uVar11 = (ulonglong)_tls_index;
      *(undefined4 *)(puVar6 + 3) = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      lVar9 = *(longlong *)((longlong)pvVar2 + uVar11 * 8);
      *(undefined2 *)(puVar6 + 6) = 0;
      if ((*(int *)(lVar9 + 0x38) < DAT_146852c60) &&
         (_Init_thread_header(&DAT_146852c60), DAT_146852c60 == -1)) {
        FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
        _Init_thread_footer(&DAT_146852c60);
      }
      uVar10 = DAT_146852c58;
      uVar7 = FUN_14168dc80();
      plVar5 = (longlong *)FModuleManager::GetModule(uVar7,uVar10);
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x50))(plVar5,0);
      puVar12 = puVar6;
      if (plVar5 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5,puVar6 + 1);
        *(undefined1 *)(puVar6 + 6) = uVar3;
      }
    }
    plVar5 = (longlong *)0x0;
    plVar8 = (longlong *)operator_new(0x18);
    if (plVar8 != (longlong *)0x0) {
      *(undefined4 *)(plVar8 + 1) = 1;
      *plVar8 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      plVar8[2] = (longlong)puVar12;
      plVar5 = plVar8;
    }
    local_58 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_60,puVar12,puVar12);
    local_60 = 0;
    local_80 = puVar12;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_78,&local_58);
    plVar5 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_58 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_58)(local_58);
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
    plVar5 = local_78;
    if (local_80 == (undefined8 *)0x0) goto LAB_140d695ee;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
    }
    iVar4 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar4 + 1;
    if (*(int *)(param_1 + 0x44) < iVar4 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x38,iVar4);
    }
    plVar8 = local_78;
    puVar12 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x38));
    *puVar12 = local_80;
    puVar12[1] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar5 = plVar5 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      plVar5 = local_78;
      if ((int)lVar9 == 1) {
        (**(code **)*local_78)(local_78);
        plVar5 = local_78;
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
  }
  puVar12 = local_80;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - *(int *)(local_80 + 3);
  *(byte *)(param_3 + 0x4b) = *(byte *)(param_3 + 0x4b) & 0xfe;
  local_80[4] = param_3;
  QueryPerformanceCounter(&local_res20);
  puVar12[5] = (double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0;
  iVar4 = (**(code **)(*(longlong *)puVar12[4] + 0x2d0))((longlong *)puVar12[4],0);
  *(int *)(puVar12 + 3) = iVar4;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar4;
  if ((*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) && (*(longlong *)(param_1 + 0x100) == 0)
     ) {
    local_70 = (longlong *)0x0;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_68 = 3;
    local_70 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      plVar8[1] = param_1;
      *plVar8 = (longlong)&PTR_GetPoolName_143f3f4f8;
      plVar8[2] = (longlong)FUN_140d98070;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar8[4] = lVar9;
    }
    uVar10 = FUN_14164ab60();
    puVar12 = (undefined8 *)
              FUN_14158f860(uVar10,local_88,&local_70,L"FProfileImageCache_RunEviction",0);
    *(undefined8 *)(param_1 + 0x100) = *puVar12;
    if (local_68 != 0) {
      if (local_70 == (longlong *)0x0) goto LAB_140d695e2;
      (**(code **)(*local_70 + 0x28))(local_70,0);
      if (local_70 != (longlong *)0x0) {
        local_70 = (longlong *)FMemory::Realloc(local_70,0,0);
      }
      local_68 = 0;
    }
    if (local_70 != (longlong *)0x0) {
      FMemory::Free(local_70);
    }
  }
LAB_140d695e2:
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x10,param_2);
LAB_140d695ee:
  plVar8 = local_78;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar5 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  return;
}



// FUNCTION 140d696a0 FUN_140d696a0 body=355 status=ok
// SIG undefined FUN_140d696a0(void)

void FUN_140d696a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  char cVar8;
  longlong lVar9;
  int iVar10;
  LARGE_INTEGER local_res8;
  undefined8 local_38;
  longlong *local_30 [3];
  
  QueryPerformanceCounter(&local_res8);
  iVar10 = 0;
  dVar7 = (double)local_res8.QuadPart * DAT_1468b02f8;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar9 = 0;
    do {
      cVar8 = (*(code *)**(undefined8 **)*param_2)
                        ((undefined8 *)*param_2,
                         *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8 + lVar9));
      if (cVar8 != '\0') {
        if (iVar10 != -1) goto LAB_140d697dc;
        break;
      }
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 0x18;
    } while (iVar10 < *(int *)(param_1 + 0x18));
  }
  iVar10 = *(int *)(param_1 + 0x18);
  lVar9 = (longlong)iVar10;
  plVar1 = (longlong *)(param_1 + 0x10);
  *(int *)(param_1 + 0x18) = iVar10 + 1;
  if (*(int *)(param_1 + 0x1c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,iVar10);
  }
  lVar6 = *plVar1;
  *(undefined8 *)(lVar6 + lVar9 * 0x18) = 0;
  *(undefined8 *)(lVar6 + 8 + lVar9 * 0x18) = 0;
  *(undefined8 *)(lVar6 + 0x10 + lVar9 * 0x18) = 0;
  local_30[0] = (longlong *)param_2[1];
  local_38 = *param_2;
  if (local_30[0] != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30[0] + 1) = (int)local_30[0][1] + 1;
    UNLOCK();
  }
  puVar4 = (undefined8 *)(*plVar1 + 8 + lVar9 * 0x18);
  if (puVar4 != &local_38) {
    *puVar4 = local_38;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(puVar4 + 1,local_30);
  }
  plVar1 = local_30[0];
  if (local_30[0] != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30[0] + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30[0])(local_30[0]);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_30[0] + 8))(local_30[0],1);
      }
    }
  }
LAB_140d697dc:
  *(double *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar10 * 0x18) = dVar7 + 16777216.0;
  return;
}



// FUNCTION 140d69810 FUN_140d69810 body=102 status=ok
// SIG undefined FUN_140d69810(void)

void FUN_140d69810(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong local_res8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x40) * 2;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    local_res8 = (**(code **)(*(longlong *)*puVar1 + 0x10))();
    if (local_res8 != 0) {
      (**(code **)(*param_2 + 0x38))(param_2,&local_res8,0,0);
    }
  }
  return;
}



// FUNCTION 140d69880 FUN_140d69880 body=550 status=ok
// SIG undefined FUN_140d69880(void)

undefined8 FUN_140d69880(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  undefined8 uVar19;
  longlong local_48 [2];
  longlong local_38 [2];
  
  lVar2 = *(longlong *)(param_2 + 8);
  plVar3 = *(longlong **)(param_2 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_3 + 0x10);
  puVar15 = *(undefined8 **)(param_3 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  bVar11 = false;
  if ((lVar2 != 0) && (puVar15 != (undefined8 *)0x0)) {
    cVar13 = (**(code **)*puVar15)();
    bVar11 = false;
    if (cVar13 != '\0') {
      bVar11 = true;
    }
  }
  plVar5 = *(longlong **)(param_2 + 0xa0);
  plVar6 = *(longlong **)(param_2 + 0xa8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(param_3 + 0xa0);
  plVar8 = *(longlong **)(param_3 + 0xa8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  bVar9 = false;
  bVar10 = false;
  if ((plVar5 != (longlong *)0x0) && (bVar9 = false, bVar10 = false, plVar7 != (longlong *)0x0)) {
    puVar15 = (undefined8 *)(**(code **)(*plVar7 + 0x38))(plVar7,local_38);
    puVar16 = (undefined8 *)(**(code **)(*plVar5 + 0x38))(plVar5,local_48);
    puVar17 = &DAT_143f3eda8;
    if (*(int *)(puVar15 + 1) == 0) {
      puVar18 = &DAT_143f3eda8;
    }
    else {
      puVar18 = (undefined2 *)*puVar15;
    }
    if (*(int *)(puVar16 + 1) != 0) {
      puVar17 = (undefined2 *)*puVar16;
    }
    bVar10 = true;
    bVar9 = true;
    iVar14 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar17,puVar18);
    if (iVar14 == 0) {
      bVar12 = true;
      goto LAB_140d69979;
    }
  }
  bVar12 = false;
LAB_140d69979:
  if (bVar9) {
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if ((bVar10) && (local_38[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar11) && (bVar12)) {
    uVar19 = 1;
  }
  else {
    uVar19 = 0;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar8 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  return uVar19;
}



// FUNCTION 140d69ab0 FUN_140d69ab0 body=1769 status=ok
// SIG undefined FUN_140d69ab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d69ab0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *plStack_160;
  longlong *local_158;
  int local_150;
  undefined8 local_148;
  longlong *local_140;
  longlong local_138;
  longlong *plStack_130;
  longlong *local_128;
  longlong *local_120;
  undefined8 local_118;
  longlong *local_110;
  longlong local_108;
  longlong *plStack_100;
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined **local_78 [2];
  longlong *local_68;
  longlong local_60;
  longlong local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar6 = UGameInstance::GetFirstGamePlayer();
  if (lVar6 == 0) {
    return;
  }
  lVar6 = FUN_142547b50(lVar6,local_78);
  plVar3 = *(longlong **)(lVar6 + 0x10);
  lVar6 = *(longlong *)(lVar6 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_78[0] = &PTR_FUN_143f740c8;
  if (local_60 != 0) {
    FMemory::Free();
  }
  local_78[0] = &PTR_FUN_143f73d18;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_68 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
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
  if (lVar6 == 0) goto LAB_140d6a130;
  puVar7 = (undefined8 *)FName::FName(local_f8,L"SPARK",1);
  FUN_1404d0c50(&local_128,*puVar7);
  if (local_128 != (longlong *)0x0) {
    local_168 = 0;
    plStack_160 = (longlong *)0x0;
    puVar7 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_d8);
    plVar9 = (longlong *)*puVar7;
    plVar8 = (longlong *)FName::FName(local_f0,L"SPARK",1);
    plVar9 = (longlong *)(**(code **)(*plVar9 + 8))(plVar9,local_e8);
    lVar6 = *plVar8;
    lVar4 = *plVar9;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_d0 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    plVar9 = (longlong *)*param_2;
    if (lVar4 == lVar6) {
      plVar9 = (longlong *)(**(code **)(*plVar9 + 8))(plVar9,local_c8);
      local_110 = (longlong *)plVar9[1];
      local_168 = *plVar9;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_110 + 1) = (int)local_110[1] + 1;
        UNLOCK();
      }
      local_118 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_160,&local_110);
      plVar9 = local_110;
      local_90 = local_c0;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_110 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          local_90 = local_c0;
          if (iVar2 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
            local_90 = local_c0;
          }
        }
      }
LAB_140d69e58:
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_90 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      if (local_168 == 0) goto LAB_140d6a051;
      plVar9 = (longlong *)(param_1 + 0xb8);
      local_138 = local_168;
      plStack_130 = plStack_160;
      if (plStack_160 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
        UNLOCK();
      }
      if (&local_138 != plVar9) {
        local_138 = *plVar9;
        plStack_130 = *(longlong **)(param_1 + 0xc0);
        local_50 = local_168;
        plStack_48 = plStack_160;
        *plVar9 = local_168;
        *(longlong **)(param_1 + 0xc0) = plStack_160;
      }
      plVar9 = plStack_130;
      if (plStack_130 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_130 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_130)(plStack_130);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_130 + 8))(plStack_130,1);
          }
        }
      }
      plVar9 = plStack_160;
      local_158 = (longlong *)0x0;
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      local_150 = 3;
      local_158 = plVar8;
      if (plVar8 != (longlong *)0x0) {
        plVar8[1] = param_1;
        *plVar8 = (longlong)&DAT_143f3ed00;
        plVar8[2] = (longlong)FUN_140d8cc10;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar8[4] = lVar6;
        *plVar8 = (longlong)&PTR_GetPoolName_143f3ed48;
      }
      puVar7 = (undefined8 *)(**(code **)(*local_128 + 0x2a8))(local_128,local_e0,&local_158);
      *(undefined8 *)(param_1 + 0xb0) = *puVar7;
      if (local_150 == 0) {
LAB_140d69fdd:
        if (local_158 != (longlong *)0x0) {
          FMemory::Free(local_158);
        }
      }
      else if (local_158 != (longlong *)0x0) {
        (**(code **)(*local_158 + 0x28))(local_158,0);
        if (local_158 != (longlong *)0x0) {
          local_158 = (longlong *)FMemory::Realloc(local_158,0,0);
        }
        local_150 = 0;
        goto LAB_140d69fdd;
      }
      local_108 = local_168;
      plStack_100 = plStack_160;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        plVar9 = plStack_160;
      }
      (**(code **)(*local_128 + 0x2a0))(local_128,&local_108);
      plVar8 = plStack_100;
      if (plStack_100 != (longlong *)0x0) {
        LOCK();
        plVar9 = plStack_100 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        plVar9 = plStack_160;
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_100)(plStack_100);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar9 = plStack_160;
          if (iVar2 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
            plVar9 = plStack_160;
          }
        }
      }
    }
    else {
      uVar11 = (**(code **)(*plVar9 + 8))(plVar9,local_a8);
      uVar10 = FUN_140bb74b0(*(undefined8 *)(param_1 + 8));
      plVar9 = (longlong *)FUN_140d84960(uVar10,local_b8,uVar11);
      if (&local_168 != plVar9) {
        local_168 = *plVar9;
        *plVar9 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_160,plVar9 + 1);
      }
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_b0 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)local_b0 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_a0 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      if (local_168 != 0) {
        puVar7 = (undefined8 *)
                 (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_98);
        local_140 = (longlong *)puVar7[1];
        local_148 = *puVar7;
        if (local_140 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_140 + 1) = (int)local_140[1] + 1;
          UNLOCK();
        }
        if ((undefined8 *)(param_1 + 200) != &local_148) {
          *(undefined8 *)(param_1 + 200) = local_148;
          local_148 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd0,&local_140);
        }
        plVar9 = local_140;
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_140 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_140)(local_140);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_140 + 8))(local_140,1);
            }
          }
        }
        goto LAB_140d69e58;
      }
LAB_140d6a051:
      uVar11 = (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_88);
      FUN_140d696a0(param_1 + 0x40,uVar11);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_80 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      FUN_140d6a1a0(param_1);
      plVar9 = plStack_160;
    }
    plVar8 = plStack_160;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar9 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_160)(plStack_160);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_160 + 8))(plStack_160,1);
        }
      }
    }
  }
  plVar9 = local_120;
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_120 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
LAB_140d6a130:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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



// FUNCTION 140d6a1a0 FUN_140d6a1a0 body=133 status=ok
// SIG undefined FUN_140d6a1a0(void)

void FUN_140d6a1a0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = FUN_140d83f00();
  if (((iVar2 != *(int *)(param_1 + 0x20)) && (*(longlong *)(param_1 + 0x70) == 0)) &&
     (*(longlong *)(param_1 + 0xb0) == 0)) {
    lVar3 = *(longlong *)(param_1 + 0x60);
    lVar4 = (longlong)*(int *)(param_1 + 0x68) * 0x10 + lVar3;
    if (lVar3 != lVar4) {
      while (cVar1 = FUN_140d9fcd0(param_1,lVar3), cVar1 == '\0') {
        lVar3 = lVar3 + 0x10;
        if (lVar3 == lVar4) {
          return;
        }
      }
      FUN_140d69ab0(param_1,lVar3);
    }
  }
  return;
}



// FUNCTION 140d6a230 FUN_140d6a230 body=274 status=ok
// SIG undefined FUN_140d6a230(void)

ulonglong FUN_140d6a230(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  if (ABS(*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x60)) <= 1e-08) {
    uVar1 = FUN_140d8abf0();
    return uVar1 & 0xffffffffffffff00;
  }
  local_18 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  local_10 = 3;
  local_18 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = param_1;
    *plVar2 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar2[2] = (longlong)FUN_140d6a350;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
  }
  uVar4 = FUN_14164ab60();
  puVar5 = (undefined8 *)
           FUN_14158f860(uVar4,local_res8,&local_18,L"TFriendEventMergeGroup_BatchTimerTick",0);
  *(undefined8 *)(param_1 + 0x80) = *puVar5;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140d6a33a;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  puVar5 = (undefined8 *)0x0;
  if (local_18 != (longlong *)0x0) {
    puVar5 = (undefined8 *)FMemory::Free(local_18);
  }
LAB_140d6a33a:
  return (ulonglong)puVar5 & 0xffffffffffffff00;
}



// FUNCTION 140d6a350 FUN_140d6a350 body=45 status=ok
// SIG undefined FUN_140d6a350(void)

undefined1 FUN_140d6a350(longlong param_1,float param_2)

{
  param_2 = *(float *)(param_1 + 0x60) - param_2;
  *(float *)(param_1 + 0x60) = param_2;
  if (param_2 <= 0.0) {
    FUN_140d8abf0();
    return 0;
  }
  return 1;
}



// FUNCTION 140d6a380 FUN_140d6a380 body=117 status=ok
// SIG undefined FUN_140d6a380(void)

void FUN_140d6a380(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_10 = 0;
  puVar1 = (undefined8 *)operator_new(0x28,&local_18);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &DAT_143f3ed00;
    puVar1[2] = FUN_140d8f170;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[4] = uVar2;
    *puVar1 = &PTR_GetPoolName_143f3ed48;
  }
  FUN_140d943a0(*param_1,param_1 + 1,&local_18);
  return;
}



// FUNCTION 140d6a400 FUN_140d6a400 body=404 status=ok
// SIG undefined FUN_140d6a400(void)

void FUN_140d6a400(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar6 = (undefined8 *)operator_new(0x180);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      FUN_140d63580(puVar6);
      *(undefined4 *)(puVar6 + 0x2f) = 0;
      *puVar6 = &PTR_FUN_144530740;
      *(undefined1 *)(puVar6 + 0xb) = 0x16;
    }
    local_10 = (longlong *)operator_new(0x18);
    if (local_10 != (longlong *)0x0) {
      *(undefined4 *)(local_10 + 1) = 1;
      *local_10 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)local_10 + 0xc) = 1;
      local_10[2] = (longlong)puVar6;
    }
    local_18 = puVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_18,puVar6,puVar6);
    FUN_140d87ff0(local_18,param_2,*(undefined8 *)(param_1 + 0x10));
    plVar5 = local_10;
    puVar6 = local_18;
    *(undefined4 *)(local_18 + 0x2f) = param_3;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar3 + 1;
    if (*(int *)(param_1 + 0xb4) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa8,iVar3);
    }
    puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0xa8));
    *puVar7 = puVar6;
    puVar7[1] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d6a5a0 FUN_140d6a5a0 body=415 status=ok
// SIG undefined FUN_140d6a5a0(void)

void FUN_140d6a5a0(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) && (param_3 != 0)) {
    lVar4 = operator_new(0x188);
    if (lVar4 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = FUN_140d638b0(lVar4);
    }
    local_10 = (longlong *)operator_new(0x18);
    if (local_10 != (longlong *)0x0) {
      *(undefined4 *)(local_10 + 1) = 1;
      *local_10 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)local_10 + 0xc) = 1;
      local_10[2] = local_18;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
    FUN_140d87ff0(local_18,param_2,*(undefined8 *)(param_1 + 0x10));
    plVar3 = local_10;
    lVar4 = local_18;
    *(int *)(local_18 + 0x178) = param_3;
    *(undefined4 *)(local_18 + 0x180) = param_4;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    iVar2 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xb4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa8,iVar2);
    }
    plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xa8));
    *plVar5 = lVar4;
    plVar5[1] = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar5 = plVar3 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    plVar3 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_10 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
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
  }
  return;
}



// FUNCTION 140d6a740 FUN_140d6a740 body=1463 status=ok
// SIG undefined FUN_140d6a740(void)

void FUN_140d6a740(longlong param_1,undefined8 *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar14;
  undefined8 in_stack_fffffffffffffef0;
  undefined4 uVar15;
  int local_108 [2];
  longlong local_100;
  longlong *local_f8;
  undefined **local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined ***local_a8;
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  FUN_140d64a50(local_98,*param_2);
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
  plVar2 = (longlong *)(param_1 + 0xd0);
  iVar13 = -1;
  iVar6 = iVar13;
  if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
    if ((local_90 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*local_90 + 0x20))(local_90), cVar4 == '\0')) {
      iVar5 = -1;
    }
    else {
      iVar5 = GetTypeHash(local_90);
    }
    uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
    uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
    lVar7 = *(longlong *)(param_1 + 0x110);
    if (*(longlong *)(param_1 + 0x110) == 0) {
      lVar7 = param_1 + 0x108;
    }
    iVar5 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x118) - 1U & (longlong)iVar5) * 4);
    if (iVar5 != -1) {
      lVar7 = *plVar2;
      do {
        lVar12 = (longlong)iVar5 * 0x40;
        plVar11 = *(longlong **)(lVar7 + 8 + lVar12);
        if ((((plVar11 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar11 + 0x20))(), cVar4 == '\0')) ||
            (local_90 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*local_90 + 0x20))(local_90), cVar4 == '\0')) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        plVar11 = *(longlong **)(lVar7 + 8 + lVar12);
        iVar6 = iVar5;
        if ((plVar11 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar11 + 0x20))(), cVar4 == '\0')) {
          uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
          uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
          if (local_90 == (longlong *)0x0) break;
          cVar4 = (**(code **)(*local_90 + 0x20))(local_90);
          uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
          uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
          if (cVar4 == '\0') break;
        }
        if (bVar3) {
          cVar4 = (**(code **)*local_90)(local_90,*(undefined8 *)(lVar7 + 8 + lVar12));
          uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
          uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
          if (cVar4 != '\0') break;
        }
        uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
        uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
        lVar7 = *plVar2;
        iVar5 = *(int *)(lVar7 + 0x38 + lVar12);
        iVar6 = iVar13;
      } while (iVar5 != -1);
    }
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  plVar11 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_88 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  if (iVar6 == -1) {
    lVar7 = operator_new(0xa8);
    if (lVar7 == 0) {
      local_100 = 0;
    }
    else {
      local_b8 = *param_2;
      local_b0 = param_2[1];
      if (local_b0 != 0) {
        LOCK();
        *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
        UNLOCK();
      }
      local_c8 = 0;
      local_c0 = 0;
      puVar8 = (undefined8 *)operator_new(0x28,&local_c8);
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[1] = param_1;
        *puVar8 = &PTR_GetPoolName_144531660;
        puVar8[2] = FUN_140d6ad00;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[4] = uVar9;
        *puVar8 = &PTR_GetPoolName_1445316a8;
      }
      local_100 = FUN_140d62a50(lVar7,&local_c8,&local_b8,*(undefined4 *)(param_1 + 200),
                                CONCAT44(uVar14,*(undefined4 *)(param_1 + 0xcc)),CONCAT44(uVar15,8))
      ;
    }
    plVar11 = (longlong *)0x0;
    plVar10 = (longlong *)operator_new(0x18);
    if (plVar10 != (longlong *)0x0) {
      *(undefined4 *)(plVar10 + 1) = 1;
      *plVar10 = (longlong)&PTR_FUN_144531940;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      plVar10[2] = local_100;
      plVar11 = plVar10;
    }
    local_f8 = plVar11;
    SharedPointerInternals::EnableSharedFromThis(&local_100,local_100,local_100);
    local_e8 = *param_2;
    local_e0 = (longlong *)param_2[1];
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    local_a8 = &local_f0;
    local_d8 = 0;
    local_a0 = &local_100;
    local_f0 = &PTR_FUN_143f740c8;
    local_d0 = 0;
    FUN_140d5def0(plVar2,local_108,&local_a8,0);
    FUN_140d60810(*(undefined8 *)((longlong)local_108[0] * 0x40 + 0x28 + *plVar2),
                  *(undefined8 *)(param_1 + 0x10),local_res18[0],local_res18,local_res20,
                  &stack0x00000028);
    local_f0 = &PTR_FUN_143f740c8;
    if (local_d8 != 0) {
      FMemory::Free();
    }
    plVar2 = local_e0;
    local_f0 = &PTR_FUN_143f73d18;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_e0 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_e0)(local_e0);
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
    plVar2 = local_f8;
    if (local_f8 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar11 = local_f8 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) {
      return;
    }
    (**(code **)*local_f8)(local_f8);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 != 1) {
      return;
    }
    lVar7 = *plVar2;
    local_60 = plVar2;
    goto LAB_140d6aca0;
  }
  FUN_140d64a50(local_70,*param_2);
  if (*(int *)(param_1 + 0xd8) == *(int *)(param_1 + 0x104)) {
LAB_140d6ac2f:
    lVar12 = 0;
  }
  else {
    if ((local_68 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*local_68 + 0x20))(local_68), cVar4 == '\0')) {
      iVar6 = -1;
    }
    else {
      iVar6 = GetTypeHash(local_68);
    }
    lVar12 = 0;
    lVar7 = *(longlong *)(param_1 + 0x110);
    if (*(longlong *)(param_1 + 0x110) == 0) {
      lVar7 = param_1 + 0x108;
    }
    iVar6 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x118) - 1U & (longlong)iVar6) * 4);
    if (iVar6 != -1) {
      lVar7 = *plVar2;
      do {
        lVar12 = (longlong)iVar6 * 0x40;
        plVar11 = *(longlong **)(lVar7 + 8 + lVar12);
        if ((((plVar11 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar11 + 0x20))(), cVar4 == '\0')) ||
            (local_68 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*local_68 + 0x20))(local_68), cVar4 == '\0')) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        plVar11 = *(longlong **)(lVar7 + 8 + lVar12);
        if ((((plVar11 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar11 + 0x20))(), cVar4 == '\0')) &&
            ((local_68 == (longlong *)0x0 ||
             (cVar4 = (**(code **)(*local_68 + 0x20))(local_68), cVar4 == '\0')))) ||
           ((bVar3 && (cVar4 = (**(code **)*local_68)(local_68,*(undefined8 *)(lVar7 + 8 + lVar12)),
                      cVar4 != '\0')))) {
          if (iVar6 != -1) {
            lVar12 = *plVar2 + lVar12;
            goto LAB_140d6ac32;
          }
          break;
        }
        lVar7 = *plVar2;
        iVar6 = *(int *)(lVar7 + 0x38 + lVar12);
      } while (iVar6 != -1);
      goto LAB_140d6ac2f;
    }
  }
LAB_140d6ac32:
  FUN_140d60810(*(undefined8 *)(lVar12 + 0x28),*(undefined8 *)(param_1 + 0x10),local_res18[0],
                local_res18,local_res20,&stack0x00000028);
  if (local_58 != 0) {
    FMemory::Free();
  }
  plVar2 = local_60;
  if (local_60 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar11 = local_60 + 1;
  lVar7 = *plVar11;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)lVar7 != 1) {
    return;
  }
  (**(code **)*local_60)(local_60);
  LOCK();
  piVar1 = (int *)((longlong)plVar2 + 0xc);
  iVar6 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar6 != 1) {
    return;
  }
  lVar7 = *local_60;
LAB_140d6aca0:
  (**(code **)(lVar7 + 8))(local_60,1);
  return;
}



// FUNCTION 140d6ad00 FUN_140d6ad00 body=497 status=ok
// SIG undefined FUN_140d6ad00(void)

void FUN_140d6ad00(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar7 = (longlong *)*param_2;
    if ((*(int *)(param_2 + 1) < 1) || (lVar4 = *plVar7, *(longlong *)(lVar4 + 0x10) == 0))
    goto LAB_140d6aede;
    lVar5 = operator_new(0x188);
    if (lVar5 == 0) {
      local_38 = (longlong *)0x0;
    }
    else {
      local_38 = (longlong *)FUN_140d63950(lVar5);
    }
    local_30 = (longlong *)operator_new(0x18);
    if (local_30 != (longlong *)0x0) {
      *(undefined4 *)(local_30 + 1) = 1;
      *local_30 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)local_30 + 0xc) = 1;
      local_30[2] = (longlong)local_38;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_38,local_38,local_38);
    plVar7 = *(longlong **)(lVar4 + 0x18);
    local_28 = *(undefined8 *)(lVar4 + 0x10);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_20 = plVar7;
    FUN_140d87ff0(local_38,&local_28,*(undefined8 *)(param_1 + 0x10));
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
    (**(code **)(*local_38 + 0x48))(local_38,param_2);
    plVar1 = local_30;
    plVar7 = local_38;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar3 + 1;
    if (*(int *)(param_1 + 0xb4) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0xa8),iVar3);
    }
    puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0xa8));
    *puVar6 = plVar7;
    puVar6[1] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar1 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
    }
    plVar7 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
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
  }
  plVar7 = (longlong *)*param_2;
LAB_140d6aede:
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d6af00 FUN_140d6af00 body=503 status=ok
// SIG undefined FUN_140d6af00(void)

void FUN_140d6af00(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  puVar6 = (undefined8 *)operator_new(0x180);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    _guard_xfg_dispatch_icall_nop(puVar6,0,0x180);
    FUN_140d63580(puVar6);
    *(undefined4 *)(puVar6 + 0x2f) = 0;
    *puVar6 = &PTR_FUN_144530828;
    *(undefined1 *)(puVar6 + 0xb) = 0xe;
  }
  local_10 = (longlong *)operator_new(0x18);
  if (local_10 != (longlong *)0x0) {
    *(undefined4 *)(local_10 + 1) = 1;
    *local_10 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_10 + 0xc) = 1;
    local_10[2] = (longlong)puVar6;
  }
  local_18 = puVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_18,puVar6,puVar6);
  if (local_18 != (undefined8 *)0x0) {
    FUN_140d87ff0(local_18,param_2,*(undefined8 *)(param_1 + 0x10));
    plVar5 = local_10;
    puVar6 = local_18;
    *(undefined4 *)(local_18 + 0x2f) = param_3;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    if (local_18 != (undefined8 *)0x0) {
      if (local_10 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_10 + 1) = (int)local_10[1] + 1;
        UNLOCK();
      }
      iVar3 = *(int *)(param_1 + 0xb0);
      *(int *)(param_1 + 0xb0) = iVar3 + 1;
      if (*(int *)(param_1 + 0xb4) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa8,iVar3);
      }
      puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0xa8));
      *puVar7 = puVar6;
      puVar7[1] = plVar5;
      if (plVar5 == (longlong *)0x0) goto LAB_140d6b0a9;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
  }
LAB_140d6b0a9:
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
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 140d6b100 FUN_140d6b100 body=457 status=ok
// SIG undefined FUN_140d6b100(void)

void FUN_140d6b100(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *local_28;
  longlong *local_20;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (cVar4 = (**(code **)(*(longlong *)*param_2 + 0x20))(), cVar4 != '\0')) {
    puVar5 = (undefined8 *)operator_new(400);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      FUN_140d63580(puVar5);
      puVar5[0x2f] = 0;
      puVar5[0x30] = 0;
      *puVar5 = &PTR_FUN_144530578;
      *(undefined1 *)(puVar5 + 0xb) = 0x19;
    }
    plVar7 = (longlong *)0x0;
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)(plVar6 + 1) = 1;
      *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      plVar6[2] = (longlong)puVar5;
      plVar7 = plVar6;
    }
    local_28 = puVar5;
    local_20 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_28,puVar5,puVar5);
    FUN_140d87ff0(local_28,param_2,*(undefined8 *)(param_1 + 0x10));
    FString::operator=(local_28 + 0x2f,param_3);
    plVar7 = local_20;
    puVar5 = local_28;
    *(undefined1 *)(local_28 + 0x31) = param_4;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    iVar2 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xb4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0xa8),iVar2);
    }
    puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xa8));
    *puVar8 = puVar5;
    puVar8[1] = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar7 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    plVar7 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_20 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_20)(local_20);
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
  return;
}



// FUNCTION 140d6b2d0 FUN_140d6b2d0 body=457 status=ok
// SIG undefined FUN_140d6b2d0(void)

void FUN_140d6b2d0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *local_28;
  longlong *local_20;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (cVar4 = (**(code **)(*(longlong *)*param_2 + 0x20))(), cVar4 != '\0')) {
    puVar5 = (undefined8 *)operator_new(400);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      FUN_140d63580(puVar5);
      *puVar5 = &PTR_FUN_144530578;
      puVar5[0x2f] = 0;
      puVar5[0x30] = 0;
      *(undefined1 *)(puVar5 + 0xb) = 3;
    }
    plVar7 = (longlong *)0x0;
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)(plVar6 + 1) = 1;
      *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      plVar6[2] = (longlong)puVar5;
      plVar7 = plVar6;
    }
    local_28 = puVar5;
    local_20 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_28,puVar5,puVar5);
    FUN_140d87ff0(local_28,param_2,*(undefined8 *)(param_1 + 0x10));
    FString::operator=(local_28 + 0x2f,param_3);
    plVar7 = local_20;
    puVar5 = local_28;
    *(undefined1 *)(local_28 + 0x31) = param_4;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    iVar2 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xb4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0xa8),iVar2);
    }
    puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xa8));
    *puVar8 = puVar5;
    puVar8[1] = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar7 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    plVar7 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_20 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_20)(local_20);
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
  return;
}



// FUNCTION 140d6b4a0 FUN_140d6b4a0 body=471 status=ok
// SIG undefined FUN_140d6b4a0(void)

void FUN_140d6b4a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_28;
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar6 = (undefined8 *)operator_new(0x188);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      FUN_140d63580(puVar6);
      puVar6[0x2f] = 0xffffffffffffffff;
      *puVar6 = &PTR_FUN_144530900;
      puVar6[0x30] = 0xffffffffffffffff;
      *(undefined1 *)(puVar6 + 0xb) = 10;
    }
    local_20 = (longlong *)operator_new(0x18);
    if (local_20 != (longlong *)0x0) {
      *(undefined4 *)(local_20 + 1) = 1;
      *local_20 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)local_20 + 0xc) = 1;
      local_20[2] = (longlong)puVar6;
    }
    local_28 = puVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_28,puVar6,puVar6);
    FUN_140d87ff0(local_28,param_2,*(undefined8 *)(param_1 + 0x10));
    plVar5 = local_20;
    puVar6 = local_28;
    *(undefined4 *)(local_28 + 0x2f) = param_3;
    *(undefined4 *)((longlong)local_28 + 0x17c) = param_4;
    *(undefined4 *)(local_28 + 0x30) = param_5;
    *(undefined4 *)((longlong)local_28 + 0x184) = param_6;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar3 + 1;
    if (*(int *)(param_1 + 0xb4) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa8,iVar3);
    }
    puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0xa8));
    *puVar7 = puVar6;
    puVar7[1] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d6b680 FUN_140d6b680 body=1377 status=ok
// SIG undefined FUN_140d6b680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d6b680(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_178 [32];
  longlong *local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  undefined4 *local_d0;
  longlong local_c8 [2];
  undefined1 local_b8 [8];
  longlong local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  plVar4 = (longlong *)0x0;
  local_150 = (longlong *)0x0;
  if (param_3 == '\a') {
    plVar3 = (longlong *)operator_new(0x180);
    plVar8 = plVar4;
    if (plVar3 != (longlong *)0x0) {
      FUN_140d63580(plVar3);
      *(undefined1 *)(plVar3 + 0xb) = 7;
      *plVar3 = (longlong)&PTR_FUN_144530948;
      plVar8 = plVar3;
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      plVar3[2] = (longlong)plVar8;
      plVar4 = plVar3;
    }
    local_138 = plVar4;
    SharedPointerInternals::EnableSharedFromThis(&local_140,plVar8,plVar8);
    local_140 = 0;
    local_158 = plVar8;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_150,&local_138);
    local_108 = local_138;
LAB_140d6b769:
    if (local_108 == (longlong *)0x0) goto LAB_140d6ba7a;
    LOCK();
    plVar4 = local_108 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) goto LAB_140d6ba7a;
    (**(code **)*local_108)(local_108);
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_140d6ba7a;
    lVar6 = *local_108;
  }
  else {
    if (param_3 == '\b') {
      plVar3 = (longlong *)operator_new(0x180);
      plVar8 = plVar4;
      if (plVar3 != (longlong *)0x0) {
        FUN_140d63580(plVar3);
        *(undefined1 *)(plVar3 + 0xb) = 8;
        *plVar3 = (longlong)&PTR_FUN_144530948;
        plVar8 = plVar3;
      }
      plVar3 = (longlong *)operator_new(0x18);
      if (plVar3 != (longlong *)0x0) {
        *(undefined4 *)(plVar3 + 1) = 1;
        *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
        plVar3[2] = (longlong)plVar8;
        plVar4 = plVar3;
      }
      local_128 = plVar4;
      SharedPointerInternals::EnableSharedFromThis(&local_130,plVar8,plVar8);
      local_130 = 0;
      local_158 = plVar8;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_150,&local_128);
      local_108 = local_128;
      goto LAB_140d6b769;
    }
    if (param_3 != '\t') {
      return;
    }
    plVar3 = (longlong *)operator_new(0x180);
    plVar8 = plVar4;
    if (plVar3 != (longlong *)0x0) {
      FUN_140d63580(plVar3);
      *(undefined1 *)(plVar3 + 0xb) = 9;
      *plVar3 = (longlong)&PTR_FUN_144530948;
      plVar8 = plVar3;
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      plVar3[2] = (longlong)plVar8;
      plVar4 = plVar3;
    }
    local_118 = plVar4;
    SharedPointerInternals::EnableSharedFromThis(&local_120,plVar8,plVar8);
    local_120 = 0;
    local_158 = plVar8;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_150,&local_118);
    plVar4 = local_118;
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_118 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_118)(local_118);
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
    local_148 = 0;
    FUN_140d7d890(&local_110,0);
    if (local_110 != (longlong *)0x0) {
      local_98 = 0;
      local_90 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      FUN_140bf9ed0(local_b8,param_4,*(longlong *)(DAT_146b33f38 + 0x88) + 0x210);
      FName::FName(local_f8,"boss_name",1);
      uVar5 = FUN_140c124f0(local_b8,local_c8);
      local_f0[0] = 0;
      local_e8 = 0;
      local_e0 = 0;
      FVariantData::SetValue(local_f0,uVar5);
      local_d8 = local_f8;
      local_d0 = local_f0;
      FUN_140d5e210(&local_98,local_100,&local_d8,0);
      FVariantData::Empty(local_f0);
      if (local_c8[0] != 0) {
        FMemory::Free();
      }
      (**(code **)(*local_110 + 0x10))(local_110,param_2,L"boss_kill",&local_98);
      if (local_b0 != 0) {
        FMemory::Free();
      }
      local_50 = 0;
      if (local_58 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_98);
    }
    plVar4 = local_108;
    if (local_108 == (longlong *)0x0) goto LAB_140d6ba7a;
    LOCK();
    plVar8 = local_108 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) goto LAB_140d6ba7a;
    (**(code **)*local_108)(local_108);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_140d6ba7a;
    lVar6 = *local_108;
  }
  (**(code **)(lVar6 + 8))(local_108,1);
LAB_140d6ba7a:
  plVar8 = local_158;
  plVar4 = local_150;
  if (local_158 != (longlong *)0x0) {
    FUN_140d87ff0(local_158,param_2,*(undefined8 *)(param_1 + 0x10));
    plVar4 = local_150;
    *(undefined4 *)(plVar8 + 0x2f) = param_4;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
      plVar8 = local_158;
    }
    iVar2 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xb4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa8,iVar2);
    }
    plVar3 = local_150;
    puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xa8));
    *puVar7 = plVar8;
    puVar7[1] = plVar4;
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar4 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
    plVar8 = local_150;
    LOCK();
    plVar4 = plVar4 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    plVar4 = local_150;
    if ((int)lVar6 == 1) {
      (**(code **)*local_150)(local_150);
      plVar4 = local_150;
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
  plVar8 = local_150;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar4 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 140d6bbf0 FUN_140d6bbf0 body=707 status=ok
// SIG undefined FUN_140d6bbf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d6bbf0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar6 = (longlong *)0x0;
  local_e8 = 0;
  FUN_140d7d890(&local_e0,0);
  if (local_e0 != (longlong *)0x0) {
    local_98 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FName::FName(local_c8,"level",1);
    local_c0[0] = 0;
    local_b8 = 0;
    local_b0 = 0;
    FVariantData::SetValue(local_c0,param_3);
    local_a8 = local_c8;
    local_a0 = local_c0;
    FUN_140d5e210(&local_98,local_d0,&local_a8,0);
    FVariantData::Empty(local_c0);
    (**(code **)(*local_e0 + 0x10))(local_e0,param_2,L"level_up",&local_98);
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_98);
  }
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (cVar4 = (**(code **)(*(longlong *)*param_2 + 0x20))(), cVar4 != '\0')) {
    plVar5 = (longlong *)operator_new(0x178);
    plVar8 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      FUN_140d63580(plVar5);
      *(undefined1 *)(plVar5 + 0xb) = 1;
      *plVar5 = (longlong)&PTR_FUN_144530990;
      plVar8 = plVar5;
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      plVar5[2] = (longlong)plVar8;
      plVar6 = plVar5;
    }
    local_f8 = plVar8;
    local_f0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_f8,plVar8,plVar8);
    FUN_140d87ff0(local_f8,param_2,*(undefined8 *)(param_1 + 0x10));
    plVar8 = local_f0;
    plVar6 = local_f8;
    *(undefined4 *)(local_f8 + 0xf) = param_3;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
      UNLOCK();
    }
    iVar2 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xb4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa8,iVar2);
    }
    puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xa8));
    *puVar7 = plVar6;
    puVar7[1] = plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar8 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    plVar6 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_f0 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_f0)(local_f0);
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
  plVar6 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_d8 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  return;
}



// FUNCTION 140d6bec0 FUN_140d6bec0 body=380 status=ok
// SIG undefined FUN_140d6bec0(void)

void FUN_140d6bec0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar5 = (undefined8 *)operator_new(0x178);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      FUN_140d63580(puVar5);
      *(undefined1 *)(puVar5 + 0xb) = 0x15;
      *puVar5 = &PTR_FUN_144530990;
    }
    local_10 = (longlong *)operator_new(0x18);
    if (local_10 != (longlong *)0x0) {
      *(undefined4 *)(local_10 + 1) = 1;
      *local_10 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)local_10 + 0xc) = 1;
      local_10[2] = (longlong)puVar5;
    }
    local_18 = puVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_18,puVar5,puVar5);
    FUN_140d87ff0(local_18,param_2,*(undefined8 *)(param_1 + 0x10));
    plVar4 = local_10;
    puVar5 = local_18;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    iVar2 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xb4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa8,iVar2);
    }
    plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xa8));
    *plVar6 = (longlong)puVar5;
    plVar6[1] = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar4 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_10 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
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
  }
  return;
}



// FUNCTION 140d6c040 FUN_140d6c040 body=1253 status=ok
// SIG undefined FUN_140d6c040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d6c040(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_178 [32];
  longlong *local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined4 local_100 [2];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  undefined4 *local_e0;
  longlong local_d8 [2];
  undefined1 local_c8 [8];
  longlong local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_140c14280(local_b0,param_4);
  plVar6 = (longlong *)0x0;
  local_150 = (longlong *)0x0;
  if (param_3 == '\x05') {
    lVar3 = operator_new(0x180);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140d63c50(lVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_138 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_140,plVar4,plVar4);
    local_140 = 0;
    local_158 = plVar4;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_150,&local_138);
    local_118 = local_138;
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_138 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          lVar3 = *local_118;
LAB_140d6c387:
          (**(code **)(lVar3 + 8))(local_118,1);
        }
      }
    }
  }
  else {
    if (param_3 != '\x04') goto LAB_140d6c4c8;
    lVar3 = operator_new(0x180);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140d63b50(lVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_128 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_130,plVar4,plVar4);
    local_130 = 0;
    local_158 = plVar4;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_150,&local_128);
    plVar6 = local_128;
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_128 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_128)(local_128);
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
    local_148 = 0;
    FUN_140d7d890(&local_120,0);
    if (local_120 != (longlong *)0x0) {
      local_98 = 0;
      local_90 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      FUN_140bf9ed0(local_c8,param_4,*(longlong *)(DAT_146b33f38 + 0x88) + 0x120);
      FName::FName(local_108,"mission_name",1);
      uVar7 = FUN_140c124f0(local_c8,local_d8);
      local_100[0] = 0;
      local_f8 = 0;
      local_f0 = 0;
      FVariantData::SetValue(local_100,uVar7);
      local_e8 = local_108;
      local_e0 = local_100;
      FUN_140d5e210(&local_98,local_110,&local_e8,0);
      FVariantData::Empty(local_100);
      if (local_d8[0] != 0) {
        FMemory::Free();
      }
      (**(code **)(*local_120 + 0x10))(local_120,param_2,L"mission_complete",&local_98);
      if (local_c0 != 0) {
        FMemory::Free();
      }
      local_50 = 0;
      if (local_58 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_98);
    }
    plVar6 = local_118;
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_118 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          lVar3 = *local_118;
          goto LAB_140d6c387;
        }
      }
    }
  }
  plVar4 = local_158;
  plVar6 = local_150;
  if (local_158 != (longlong *)0x0) {
    FUN_140d87ff0(local_158,param_2,*(undefined8 *)(param_1 + 0x10));
    plVar6 = local_150;
    *(undefined4 *)(plVar4 + 0x2f) = param_4;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
      plVar4 = local_158;
    }
    iVar2 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xb4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa8,iVar2);
    }
    plVar5 = local_150;
    puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xa8));
    *puVar8 = plVar4;
    puVar8[1] = plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_140d6c4c8;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar6 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
    plVar4 = local_150;
    LOCK();
    plVar6 = plVar6 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    plVar6 = local_150;
    if ((int)lVar3 == 1) {
      (**(code **)*local_150)(local_150);
      plVar6 = local_150;
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  plVar4 = local_150;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar6 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
LAB_140d6c4c8:
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_a8 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 140d6c530 FUN_140d6c530 body=380 status=ok
// SIG undefined FUN_140d6c530(void)

void FUN_140d6c530(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar5 = (undefined8 *)operator_new(0x178);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      FUN_140d63580(puVar5);
      *(undefined1 *)(puVar5 + 0xb) = 0x12;
      *puVar5 = &PTR_FUN_144530a20;
    }
    local_10 = (longlong *)operator_new(0x18);
    if (local_10 != (longlong *)0x0) {
      *(undefined4 *)(local_10 + 1) = 1;
      *local_10 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)local_10 + 0xc) = 1;
      local_10[2] = (longlong)puVar5;
    }
    local_18 = puVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_18,puVar5,puVar5);
    FUN_140d87ff0(local_18,param_2,*(undefined8 *)(param_1 + 0x10));
    plVar4 = local_10;
    puVar5 = local_18;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    iVar2 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xb4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa8,iVar2);
    }
    plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xa8));
    *plVar6 = (longlong)puVar5;
    plVar6[1] = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar4 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_10 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
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
  }
  return;
}



// FUNCTION 140d6c6b0 FUN_140d6c6b0 body=420 status=ok
// SIG undefined FUN_140d6c6b0(void)

void FUN_140d6c6b0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar6 = (undefined8 *)operator_new(0x180);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      _guard_xfg_dispatch_icall_nop(puVar6,0,0x180);
      FUN_140d63580(puVar6);
      *(undefined4 *)(puVar6 + 0x2f) = 0;
      *puVar6 = &PTR_FUN_144530ab0;
      *(undefined1 *)(puVar6 + 0xb) = 6;
    }
    local_10 = (longlong *)operator_new(0x18);
    if (local_10 != (longlong *)0x0) {
      *(undefined4 *)(local_10 + 1) = 1;
      *local_10 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)local_10 + 0xc) = 1;
      local_10[2] = (longlong)puVar6;
    }
    local_18 = puVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_18,puVar6,puVar6);
    FUN_140d87ff0(local_18,param_2,*(undefined8 *)(param_1 + 0x10));
    plVar5 = local_10;
    puVar6 = local_18;
    *(undefined4 *)(local_18 + 0x2f) = param_3;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar3 + 1;
    if (*(int *)(param_1 + 0xb4) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa8,iVar3);
    }
    puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0xa8));
    *puVar7 = puVar6;
    puVar7[1] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d6c860 FUN_140d6c860 body=503 status=ok
// SIG undefined FUN_140d6c860(void)

void FUN_140d6c860(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  puVar6 = (undefined8 *)operator_new(0x180);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    _guard_xfg_dispatch_icall_nop(puVar6,0,0x180);
    FUN_140d63580(puVar6);
    *(undefined4 *)(puVar6 + 0x2f) = 0;
    *puVar6 = &PTR_FUN_144530af8;
    *(undefined1 *)(puVar6 + 0xb) = 0xd;
  }
  local_10 = (longlong *)operator_new(0x18);
  if (local_10 != (longlong *)0x0) {
    *(undefined4 *)(local_10 + 1) = 1;
    *local_10 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_10 + 0xc) = 1;
    local_10[2] = (longlong)puVar6;
  }
  local_18 = puVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_18,puVar6,puVar6);
  if (local_18 != (undefined8 *)0x0) {
    FUN_140d87ff0(local_18,param_2,*(undefined8 *)(param_1 + 0x10));
    plVar5 = local_10;
    puVar6 = local_18;
    *(undefined4 *)(local_18 + 0x2f) = param_3;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    if (local_18 != (undefined8 *)0x0) {
      if (local_10 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_10 + 1) = (int)local_10[1] + 1;
        UNLOCK();
      }
      iVar3 = *(int *)(param_1 + 0xb0);
      *(int *)(param_1 + 0xb0) = iVar3 + 1;
      if (*(int *)(param_1 + 0xb4) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa8,iVar3);
      }
      puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0xa8));
      *puVar7 = puVar6;
      puVar7[1] = plVar5;
      if (plVar5 == (longlong *)0x0) goto LAB_140d6ca09;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
  }
LAB_140d6ca09:
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
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 140d6ca60 FUN_140d6ca60 body=503 status=ok
// SIG undefined FUN_140d6ca60(void)

void FUN_140d6ca60(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  puVar6 = (undefined8 *)operator_new(0x180);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    _guard_xfg_dispatch_icall_nop(puVar6,0,0x180);
    FUN_140d63580(puVar6);
    *(undefined4 *)(puVar6 + 0x2f) = 0;
    *puVar6 = &PTR_FUN_144530b40;
    *(undefined1 *)(puVar6 + 0xb) = 0xf;
  }
  local_10 = (longlong *)operator_new(0x18);
  if (local_10 != (longlong *)0x0) {
    *(undefined4 *)(local_10 + 1) = 1;
    *local_10 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_10 + 0xc) = 1;
    local_10[2] = (longlong)puVar6;
  }
  local_18 = puVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_18,puVar6,puVar6);
  if (local_18 != (undefined8 *)0x0) {
    FUN_140d87ff0(local_18,param_2,*(undefined8 *)(param_1 + 0x10));
    plVar5 = local_10;
    puVar6 = local_18;
    *(undefined4 *)(local_18 + 0x2f) = param_3;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    if (local_18 != (undefined8 *)0x0) {
      if (local_10 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_10 + 1) = (int)local_10[1] + 1;
        UNLOCK();
      }
      iVar3 = *(int *)(param_1 + 0xb0);
      *(int *)(param_1 + 0xb0) = iVar3 + 1;
      if (*(int *)(param_1 + 0xb4) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa8,iVar3);
      }
      puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0xa8));
      *puVar7 = puVar6;
      puVar7[1] = plVar5;
      if (plVar5 == (longlong *)0x0) goto LAB_140d6cc09;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
  }
LAB_140d6cc09:
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
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 140d6cc60 FUN_140d6cc60 body=380 status=ok
// SIG undefined FUN_140d6cc60(void)

void FUN_140d6cc60(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar5 = (undefined8 *)operator_new(0x178);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      FUN_140d63580(puVar5);
      *(undefined1 *)(puVar5 + 0xb) = 0x11;
      *puVar5 = &PTR_FUN_144530bd0;
    }
    local_10 = (longlong *)operator_new(0x18);
    if (local_10 != (longlong *)0x0) {
      *(undefined4 *)(local_10 + 1) = 1;
      *local_10 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)local_10 + 0xc) = 1;
      local_10[2] = (longlong)puVar5;
    }
    local_18 = puVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_18,puVar5,puVar5);
    FUN_140d87ff0(local_18,param_2,*(undefined8 *)(param_1 + 0x10));
    plVar4 = local_10;
    puVar5 = local_18;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    iVar2 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xb4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa8,iVar2);
    }
    plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xa8));
    *plVar6 = (longlong)puVar5;
    plVar6[1] = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar4 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_10 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
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
  }
  return;
}



// FUNCTION 140d6cde0 FUN_140d6cde0 body=380 status=ok
// SIG undefined FUN_140d6cde0(void)

void FUN_140d6cde0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar5 = (undefined8 *)operator_new(0x178);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      FUN_140d63580(puVar5);
      *(undefined1 *)(puVar5 + 0xb) = 0x10;
      *puVar5 = &PTR_FUN_144530a20;
    }
    local_10 = (longlong *)operator_new(0x18);
    if (local_10 != (longlong *)0x0) {
      *(undefined4 *)(local_10 + 1) = 1;
      *local_10 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)local_10 + 0xc) = 1;
      local_10[2] = (longlong)puVar5;
    }
    local_18 = puVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_18,puVar5,puVar5);
    FUN_140d87ff0(local_18,param_2,*(undefined8 *)(param_1 + 0x10));
    plVar4 = local_10;
    puVar5 = local_18;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    iVar2 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xb4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa8,iVar2);
    }
    plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xa8));
    *plVar6 = (longlong)puVar5;
    plVar6[1] = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar4 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_10 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
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
  }
  return;
}



// FUNCTION 140d6cf60 FUN_140d6cf60 body=1821 status=ok
// SIG undefined FUN_140d6cf60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140d6d3d6) */
/* WARNING: Removing unreachable block (ram,0x000140d6d3e5) */
/* WARNING: Removing unreachable block (ram,0x000140d6d400) */

ulonglong FUN_140d6cf60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined **ppuVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined4 *puVar22;
  undefined1 auStack_1a8 [32];
  uint local_188;
  longlong local_180;
  undefined **local_178;
  undefined **local_170;
  longlong *local_168;
  longlong *local_160;
  longlong local_158;
  undefined8 local_150;
  int local_148 [2];
  longlong *local_140;
  longlong *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_118;
  undefined **local_110;
  longlong *local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  longlong *local_b8;
  undefined ***local_b0;
  undefined8 *local_a8;
  undefined **local_a0;
  undefined **local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined **local_70 [2];
  longlong *local_60;
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined **local_38;
  
  ppuVar10 = (undefined **)(DAT_1468387a8 ^ (ulonglong)auStack_1a8);
  uVar15 = 0;
  local_188 = 0;
  local_180 = param_1;
  local_38 = ppuVar10;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar11 = (undefined8 *)UListView::OnItemSelectionChanged();
    ppuVar18 = (undefined **)*puVar11;
    ppuVar10 = ppuVar18 + *(int *)(puVar11 + 1);
    local_178 = ppuVar18;
    local_a0 = ppuVar10;
    if (ppuVar18 != ppuVar10) {
      do {
        plVar16 = (longlong *)0x0;
        local_178 = ppuVar18;
        if (*ppuVar18 == (undefined *)0x0) {
          local_188 = uVar15 | 4;
          local_138 = (longlong *)0x0;
          local_140 = (longlong *)0x0;
          uVar15 = local_188;
        }
        else {
          uVar15 = uVar15 | 3;
          local_188 = uVar15;
          lVar12 = FUN_142547b50(*ppuVar18,local_70);
          plVar16 = *(longlong **)(lVar12 + 0x10);
          local_140 = *(longlong **)(lVar12 + 8);
          ppuVar10 = (undefined **)(plVar16 + 1);
          local_b8 = plVar16;
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            *(int *)ppuVar10 = *(int *)ppuVar10 + 1;
            UNLOCK();
            LOCK();
            *(int *)ppuVar10 = *(int *)ppuVar10 + 1;
            UNLOCK();
          }
        }
        plVar3 = local_b8;
        plVar4 = local_138;
        plVar21 = local_140;
        if (((uVar15 & 4) != 0) &&
           (uVar15 = uVar15 & 0xfffffffb, local_188 = uVar15, local_138 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_138 + 1;
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          uVar8 = (int)lVar12 - 1;
          ppuVar10 = (undefined **)(ulonglong)uVar8;
          if (uVar8 == 0) {
            (**(code **)*local_138)(local_138);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            ppuVar10 = (undefined **)(ulonglong)(iVar9 - 1U);
            if (iVar9 - 1U == 0) {
              ppuVar10 = (undefined **)(**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        if (((uVar15 & 2) != 0) &&
           (uVar15 = uVar15 & 0xfffffffd, local_188 = uVar15, plVar3 != (longlong *)0x0)) {
          LOCK();
          plVar4 = plVar3 + 1;
          lVar12 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          uVar8 = (int)lVar12 - 1;
          ppuVar10 = (undefined **)(ulonglong)uVar8;
          if (uVar8 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            ppuVar10 = (undefined **)(ulonglong)(iVar9 - 1U);
            if (iVar9 - 1U == 0) {
              ppuVar10 = (undefined **)(**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        if ((uVar15 & 1) != 0) {
          local_188 = uVar15 & 0xfffffffe;
          local_70[0] = &PTR_FUN_143f740c8;
          if (local_58 != 0) {
            ppuVar10 = (undefined **)FMemory::Free();
          }
          plVar4 = local_60;
          local_70[0] = &PTR_FUN_143f73d18;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_60 + 1;
            lVar12 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            uVar15 = (int)lVar12 - 1;
            ppuVar10 = (undefined **)(ulonglong)uVar15;
            if (uVar15 == 0) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar9 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              ppuVar10 = (undefined **)(ulonglong)(iVar9 - 1U);
              if (iVar9 - 1U == 0) {
                ppuVar10 = (undefined **)(**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
        }
        if (plVar21 != (longlong *)0x0) {
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
            UNLOCK();
          }
          local_170 = &PTR_FUN_143f740c8;
          plVar4 = (longlong *)(param_1 + 0xf0);
          local_158 = 0;
          local_150 = 0;
          local_168 = plVar21;
          local_160 = plVar16;
          if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
            if ((plVar21 == (longlong *)0x0) ||
               (cVar7 = (**(code **)(*plVar21 + 0x20))(plVar21), cVar7 == '\0')) {
              iVar9 = -1;
            }
            else {
              iVar9 = GetTypeHash(local_168);
            }
            lVar12 = *(longlong *)(param_1 + 0x130);
            if (*(longlong *)(param_1 + 0x130) == 0) {
              lVar12 = param_1 + 0x128;
            }
            iVar9 = *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 0x138) - 1U & (longlong)iVar9) *
                                      4);
            if (iVar9 != -1) {
              lVar12 = *plVar4;
              do {
                lVar20 = (longlong)iVar9 * 0x90;
                plVar21 = *(longlong **)(lVar12 + 8 + lVar20);
                if ((((plVar21 == (longlong *)0x0) ||
                     (cVar7 = (**(code **)(*plVar21 + 0x20))(), cVar7 == '\0')) ||
                    (local_168 == (longlong *)0x0)) ||
                   (cVar7 = (**(code **)(*local_168 + 0x20))(local_168), cVar7 == '\0')) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                plVar21 = *(longlong **)(lVar12 + lVar20 + 8);
                if ((((plVar21 == (longlong *)0x0) ||
                     (cVar7 = (**(code **)(*plVar21 + 0x20))(), cVar7 == '\0')) &&
                    ((local_168 == (longlong *)0x0 ||
                     (cVar7 = (**(code **)(*local_168 + 0x20))(local_168), cVar7 == '\0')))) ||
                   ((bVar6 && (cVar7 = (**(code **)*local_168)
                                                 (local_168,*(undefined8 *)(lVar12 + lVar20 + 8)),
                              cVar7 != '\0')))) {
                  if ((iVar9 != -1) && (lVar20 = *plVar4 + lVar20, lVar20 != 0)) goto LAB_140d6d2e4;
                  break;
                }
                lVar12 = *plVar4;
                iVar9 = *(int *)(lVar12 + 0x88 + lVar20);
              } while (iVar9 != -1);
            }
          }
          local_b0 = &local_170;
          FUN_140d5d290(plVar4,local_148,&local_b0,0);
          lVar20 = (longlong)local_148[0] * 0x90 + *plVar4;
LAB_140d6d2e4:
          local_a8 = (undefined8 *)(lVar20 + 0x28);
          uVar17 = 0;
          puVar22 = (undefined4 *)*local_a8;
          uVar19 = (longlong)*(int *)(lVar20 + 0x30) & 0x3fffffffffffffff;
          if (puVar22 + *(int *)(lVar20 + 0x30) < puVar22) {
            uVar19 = uVar17;
          }
          plVar21 = local_140;
          if (uVar19 != 0) {
            do {
              uVar5 = *puVar22;
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                UNLOCK();
              }
              local_98 = &PTR_FUN_143f740c8;
              local_80 = 0;
              local_78 = 0;
              local_90 = plVar21;
              local_88 = plVar16;
              cVar7 = (**(code **)(*plVar21 + 0x20))(plVar21);
              if (cVar7 != '\0') {
                if (plVar16 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                  UNLOCK();
                }
                local_130._0_4_ = SUB84(plVar21,0);
                local_130._4_4_ = (undefined4)((ulonglong)plVar21 >> 0x20);
                uStack_128._0_4_ = SUB84(plVar16,0);
                uStack_128._4_4_ = (undefined4)((ulonglong)plVar16 >> 0x20);
                uStack_3c = uStack_128._4_4_;
                uStack_40 = (undefined4)uStack_128;
                uStack_44 = local_130._4_4_;
                local_48 = (undefined4)local_130;
                local_c0 = 1;
                local_c8 = 0;
                local_d0 = 0;
                local_d8 = 0;
                local_e0 = 0;
                local_e8 = &PTR_FUN_143f740c8;
                local_f0 = 0;
                local_f8 = 0;
                local_110 = &PTR_FUN_143f740c8;
                uStack_128 = 0;
                local_130 = 0;
                local_118 = uVar5;
                local_108 = plVar21;
                plStack_100 = plVar16;
                TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                          (&local_f8,&local_80);
                lVar12 = local_180;
                iVar9 = *(int *)(local_180 + 0x198);
                *(int *)(local_180 + 0x198) = iVar9 + 1;
                if (*(int *)(local_180 + 0x19c) < iVar9 + 1) {
                  TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow
                            (local_180 + 400,iVar9);
                }
                puVar13 = (undefined4 *)((longlong)iVar9 * 0x60 + *(longlong *)(lVar12 + 400));
                *puVar13 = local_118;
                *(undefined ***)(puVar13 + 2) = &PTR_FUN_143f73d18;
                *(longlong **)(puVar13 + 4) = local_108;
                *(longlong **)(puVar13 + 6) = plStack_100;
                if (plStack_100 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
                  UNLOCK();
                }
                *(undefined ***)(puVar13 + 2) = &PTR_FUN_143f740c8;
                *(undefined8 *)(puVar13 + 8) = 0;
                *(undefined8 *)(puVar13 + 10) = 0;
                *(undefined ***)(puVar13 + 0xc) = &PTR_FUN_143f73d18;
                *(undefined8 *)(puVar13 + 0xe) = local_e0;
                *(longlong *)(puVar13 + 0x10) = local_d8;
                if (local_d8 != 0) {
                  LOCK();
                  *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
                  UNLOCK();
                }
                *(undefined ***)(puVar13 + 0xc) = &PTR_FUN_143f740c8;
                *(undefined8 *)(puVar13 + 0x12) = 0;
                *(undefined8 *)(puVar13 + 0x14) = 0;
                *(undefined1 *)(puVar13 + 0x16) = (undefined1)local_c0;
                *(undefined1 *)((longlong)puVar13 + 0x59) = local_c0._1_1_;
                FUN_1404bf980(&local_e8);
                FUN_1404bf980(&local_110);
                plVar21 = local_140;
              }
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                plVar4 = plVar16 + 1;
                lVar12 = *plVar4;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)lVar12 == 1) {
                  (**(code **)*plVar16)(plVar16);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar16 + 0xc);
                  iVar9 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*plVar16 + 8))(plVar16,1);
                  }
                }
              }
              puVar22 = puVar22 + 1;
              uVar17 = uVar17 + 1;
            } while (uVar17 != uVar19);
          }
          *(undefined4 *)(local_a8 + 1) = 0;
          if (*(int *)((longlong)local_a8 + 0xc) != 0) {
            TArray<float,FDefaultAllocator>::ResizeTo(local_a8,0);
          }
          ppuVar10 = &PTR_FUN_143f740c8;
          local_170 = &PTR_FUN_143f740c8;
          if (local_158 != 0) {
            ppuVar10 = (undefined **)FMemory::Free();
          }
          plVar21 = local_160;
          local_170 = &PTR_FUN_143f73d18;
          ppuVar18 = local_178;
          param_1 = local_180;
          if (local_160 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_160 + 1;
            lVar12 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            uVar15 = (int)lVar12 - 1;
            ppuVar10 = (undefined **)(ulonglong)uVar15;
            if (uVar15 == 0) {
              (**(code **)*local_160)(local_160);
              LOCK();
              piVar2 = (int *)((longlong)plVar21 + 0xc);
              iVar9 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              ppuVar10 = (undefined **)(ulonglong)(iVar9 - 1U);
              ppuVar18 = local_178;
              param_1 = local_180;
              if (iVar9 - 1U == 0) {
                ppuVar10 = (undefined **)(**(code **)(*plVar21 + 8))(plVar21,1);
                ppuVar18 = local_178;
                param_1 = local_180;
              }
            }
          }
        }
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar21 = plVar16 + 1;
          lVar12 = *plVar21;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          uVar15 = (int)lVar12 - 1;
          ppuVar10 = (undefined **)(ulonglong)uVar15;
          if (uVar15 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar2 = (int *)((longlong)plVar16 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            ppuVar10 = (undefined **)(ulonglong)(iVar9 - 1U);
            if (iVar9 - 1U == 0) {
              ppuVar10 = (undefined **)(**(code **)(*plVar16 + 8))(plVar16,1);
            }
          }
        }
        ppuVar18 = ppuVar18 + 1;
        uVar15 = local_188;
        local_178 = ppuVar18;
      } while (ppuVar18 != local_a0);
    }
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    lVar12 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x148))();
    ppuVar10 = (undefined **)0x0;
    if (lVar12 != 0) {
      uVar14 = FUN_14164ab60();
      ppuVar10 = (undefined **)FUN_141597530(uVar14,*(undefined8 *)(param_1 + 0xa8));
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
  }
  return (ulonglong)ppuVar10 & 0xffffffffffffff00;
}



// FUNCTION 140d6d680 FUN_140d6d680 body=466 status=ok
// SIG undefined FUN_140d6d680(void)

void FUN_140d6d680(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint local_res8 [2];
  
  if ((0 < *(int *)(param_1 + 0xb0)) &&
     (plVar3 = *(longlong **)(param_1 + 0xa8), *(longlong *)(param_1 + 0x10) != 0)) {
    plVar4 = *(longlong **)(*plVar3 + 0x18);
    lVar7 = *(longlong *)(*plVar3 + 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (((lVar7 != 0) && (lVar7 = FUN_140d7ee70(*plVar3), lVar7 != 0)) &&
       ((*(char *)(lVar7 + 0x11) == '\0' ||
        (((*(longlong **)(*plVar3 + 0x38) != (longlong *)0x0 &&
          (cVar6 = (**(code **)(**(longlong **)(*plVar3 + 0x38) + 0x20))(), cVar6 != '\0')) ||
         (*(char *)(lVar7 + 0x11) == '\0')))))) {
      uVar8 = FUN_140bb7190(*(undefined8 *)(param_1 + 0x10));
      cVar6 = FUN_140d6da80(uVar8,plVar3);
      if (cVar6 == '\0') {
        uVar8 = FUN_140bb7190(*(undefined8 *)(param_1 + 0x10));
        FUN_140d980f0(uVar8,plVar3);
        TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x120);
        lVar5 = *plVar3;
        cVar6 = *(char *)(lVar7 + 0x11);
        local_res8[0] = (uint)*(byte *)(lVar5 + 0x58);
        uVar8 = FUN_140bb7630(*(undefined8 *)(param_1 + 0x10));
        if (cVar6 == '\0') {
          FUN_140d61ed0(uVar8,0,0x23,local_res8,lVar5);
        }
        else {
          FUN_140d61af0(uVar8,lVar5 + 0x30,1,0x23,local_res8,lVar5);
        }
        if (DAT_14686ed38 == '\0') {
          FUN_140d87f70(&DAT_14686ed30);
        }
        FUN_140d8b690(DAT_14686ed30,plVar3);
        FUN_140d98cd0(param_1,plVar3);
        *(undefined4 *)(param_1 + 0xbc) = 0;
        TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_1 + 0xa8,0,1,1);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
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
  }
  return;
}



// FUNCTION 140d6d860 FUN_140d6d860 body=541 status=ok
// SIG undefined FUN_140d6d860(void)

undefined8 *
FUN_140d6d860(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int local_res8 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    TJsonReaderFactory<wchar_t>::Create(local_48,param_3);
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    cVar6 = FUN_1404a7f60(local_48,&local_28);
    if ((cVar6 != '\0') && (local_28 != 0)) {
      local_res8[0] = -1;
      FUN_1416b3b00(local_28,&DAT_14629ac60,local_res8);
      if (0 < local_res8[0]) {
        FUN_140d7de20(param_1,&local_38,(char)local_res8[0]);
        plVar5 = local_30;
        if (local_38 != (longlong *)0x0) {
          (**(code **)(*local_38 + 0x18))
                    (local_38,&local_28,param_4,*(undefined8 *)(param_1 + 0x10));
          plVar5 = plStack_20;
          *param_2 = local_38;
          param_2[1] = local_30;
          if (plStack_20 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_20 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plStack_20)(plStack_20);
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
          plVar5 = local_40;
          if (local_40 == (longlong *)0x0) {
            return param_2;
          }
          LOCK();
          plVar1 = local_40 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 != 1) {
            return param_2;
          }
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 != 1) {
            return param_2;
          }
          (**(code **)(*local_40 + 8))(local_40,1);
          return param_2;
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
            piVar2 = (int *)((longlong)plVar5 + 0xc);
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
    plVar5 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
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
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140d6da80 FUN_140d6da80 body=1447 status=ok
// SIG undefined FUN_140d6da80(void)

undefined1 FUN_140d6da80(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  int local_res20 [2];
  undefined **local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined ***local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined **local_78 [2];
  longlong *local_68;
  longlong local_60;
  
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  uVar11 = 0;
  cVar9 = (**(code **)(*(longlong *)*param_2 + 0x30))();
  if ((cVar9 == '\0') || (*param_1 == 0)) {
    return 0;
  }
  plVar13 = (longlong *)UListView::OnItemSelectionChanged();
  plVar16 = (longlong *)*plVar13;
  local_a0 = plVar16 + (int)plVar13[1];
  if (plVar16 == local_a0) {
    uVar11 = 0;
  }
  else {
    do {
      local_c8 = plVar16;
      if (*plVar16 == 0) {
        bVar6 = true;
        plVar17 = (longlong *)0x0;
        local_d0 = (longlong *)0x0;
        plVar13 = (longlong *)0x0;
      }
      else {
        bVar8 = true;
        bVar7 = true;
        lVar14 = FUN_142547b50(*plVar16,local_78);
        plVar13 = *(longlong **)(lVar14 + 0x10);
        plVar17 = *(longlong **)(lVar14 + 8);
        plVar1 = plVar13 + 1;
        local_b0 = plVar13;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)plVar1 = (int)*plVar1 + 1;
          UNLOCK();
          LOCK();
          *(int *)plVar1 = (int)*plVar1 + 1;
          UNLOCK();
        }
      }
      plVar2 = local_b0;
      plVar1 = local_d0;
      if ((bVar6) && (bVar6 = false, local_d0 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_d0 + 1;
        lVar14 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar4 = (int *)((longlong)plVar1 + 0xc);
          iVar12 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      if ((bVar7) && (bVar7 = false, plVar2 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar4 = (int *)((longlong)plVar2 + 0xc);
          iVar12 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      if (bVar8) {
        bVar8 = false;
        local_78[0] = &PTR_FUN_143f740c8;
        if (local_60 != 0) {
          FMemory::Free();
        }
        plVar1 = local_68;
        local_78[0] = &PTR_FUN_143f73d18;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_68 + 1;
          lVar14 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar4 = (int *)((longlong)plVar1 + 0xc);
            iVar12 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar1 + 8))(plVar1,1);
            }
          }
        }
      }
      if (plVar17 != (longlong *)0x0) {
        local_c0 = *(undefined8 *)(*param_2 + 0x10);
        local_b8 = *(longlong **)(*param_2 + 0x18);
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
          UNLOCK();
        }
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
        }
        local_98 = plVar17;
        local_90 = plVar13;
        uVar15 = FUN_140bb74b0(*param_1);
        cVar9 = FUN_140d89890(uVar15,&local_98,&local_c0,0);
        plVar1 = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_90 + 1;
          lVar14 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar4 = (int *)((longlong)plVar1 + 0xc);
            iVar12 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar1 + 8))(plVar1,1);
            }
          }
        }
        plVar1 = local_b8;
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_b8 + 1;
          lVar14 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar4 = (int *)((longlong)plVar1 + 0xc);
            iVar12 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*local_b8 + 8))(local_b8,1);
            }
          }
        }
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
        }
        local_88 = plVar17;
        local_80 = plVar13;
        cVar10 = FUN_140bca7d0(*param_1,&local_88);
        if ((cVar9 != '\0') || (cVar10 != '\0')) {
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          local_f8 = &PTR_FUN_143f740c8;
          local_e0 = 0;
          local_d8 = 0;
          local_f0 = plVar17;
          local_e8 = plVar13;
          if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
            if ((plVar17 == (longlong *)0x0) ||
               (cVar9 = (**(code **)(*plVar17 + 0x20))(plVar17), cVar9 == '\0')) {
              iVar12 = -1;
            }
            else {
              iVar12 = GetTypeHash(local_f0);
            }
            plVar16 = (longlong *)param_1[9];
            if ((longlong *)param_1[9] == (longlong *)0x0) {
              plVar16 = param_1 + 8;
            }
            iVar12 = *(int *)((longlong)plVar16 +
                             ((longlong)(int)param_1[10] - 1U & (longlong)iVar12) * 4);
            if (iVar12 != -1) {
              lVar14 = param_1[1];
              do {
                lVar18 = (longlong)iVar12 * 0x50;
                plVar16 = *(longlong **)(lVar18 + 8 + lVar14);
                if ((((plVar16 == (longlong *)0x0) ||
                     (cVar9 = (**(code **)(*plVar16 + 0x20))(), cVar9 == '\0')) ||
                    (local_f0 == (longlong *)0x0)) ||
                   (cVar9 = (**(code **)(*local_f0 + 0x20))(local_f0), cVar9 == '\0')) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                plVar16 = *(longlong **)(lVar18 + lVar14 + 8);
                if ((((plVar16 == (longlong *)0x0) ||
                     (cVar9 = (**(code **)(*plVar16 + 0x20))(), cVar9 == '\0')) &&
                    ((local_f0 == (longlong *)0x0 ||
                     (cVar9 = (**(code **)(*local_f0 + 0x20))(local_f0), cVar9 == '\0')))) ||
                   ((bVar5 && (cVar9 = (**(code **)*local_f0)
                                                 (local_f0,*(undefined8 *)(lVar18 + lVar14 + 8)),
                              cVar9 != '\0')))) {
                  if ((iVar12 != -1) && (lVar18 = param_1[1] + lVar18, lVar18 != 0))
                  goto LAB_140d6df04;
                  break;
                }
                lVar14 = param_1[1];
                iVar12 = *(int *)(lVar18 + 0x48 + lVar14);
              } while (iVar12 != -1);
            }
          }
          local_a8 = &local_f8;
          FUN_140d5c150(param_1 + 1,local_res20,&local_a8,0);
          lVar18 = (longlong)local_res20[0] * 0x50 + param_1[1];
LAB_140d6df04:
          local_f8 = &PTR_FUN_143f740c8;
          if (local_e0 != 0) {
            FMemory::Free();
          }
          plVar16 = local_e8;
          local_f8 = &PTR_FUN_143f73d18;
          if (local_e8 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_e8 + 1;
            lVar14 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*local_e8)(local_e8);
              LOCK();
              piVar4 = (int *)((longlong)plVar16 + 0xc);
              iVar12 = *piVar4;
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar16 + 8))(plVar16,1);
              }
            }
          }
          uVar11 = FUN_140d68e20(param_1,lVar18 + 0x28,param_2);
          plVar16 = local_c8;
        }
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar13 + 1;
        lVar14 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar4 = (int *)((longlong)plVar13 + 0xc);
          iVar12 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != local_a0);
  }
  return uVar11;
}



// FUNCTION 140d6e030 FUN_140d6e030 body=616 status=ok
// SIG undefined FUN_140d6e030(void)

ulonglong FUN_140d6e030(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int local_res10 [4];
  undefined ***local_res20;
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  uVar6 = (**(code **)(*(longlong *)*param_2 + 0x30))();
  if ((((char)uVar6 == '\0') || (*param_1 == 0)) ||
     (local_60 = (longlong *)*param_3, local_60 == (longlong *)0x0)) {
    return uVar6 & 0xffffffffffffff00;
  }
  local_58 = (longlong *)param_3[1];
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  local_68 = &PTR_FUN_143f740c8;
  local_50 = 0;
  local_48 = 0;
  if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
    if ((local_60 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*local_60 + 0x20))(local_60), cVar4 == '\0')) {
      iVar5 = -1;
    }
    else {
      iVar5 = GetTypeHash(local_60);
    }
    plVar8 = (longlong *)param_1[9];
    if ((longlong *)param_1[9] == (longlong *)0x0) {
      plVar8 = param_1 + 8;
    }
    iVar5 = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[10] - 1U & (longlong)iVar5) * 4);
    if (iVar5 != -1) {
      lVar7 = param_1[1];
      do {
        lVar9 = (longlong)iVar5 * 0x50;
        plVar8 = *(longlong **)(lVar9 + 8 + lVar7);
        if (((plVar8 == (longlong *)0x0) || (cVar4 = (**(code **)(*plVar8 + 0x20))(), cVar4 == '\0')
            ) || ((local_60 == (longlong *)0x0 ||
                  (cVar4 = (**(code **)(*local_60 + 0x20))(local_60), cVar4 == '\0')))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        plVar8 = *(longlong **)(lVar9 + lVar7 + 8);
        if ((((plVar8 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar8 + 0x20))(), cVar4 == '\0')) &&
            ((local_60 == (longlong *)0x0 ||
             (cVar4 = (**(code **)(*local_60 + 0x20))(local_60), cVar4 == '\0')))) ||
           ((bVar3 && (cVar4 = (**(code **)*local_60)(local_60,*(undefined8 *)(lVar9 + lVar7 + 8)),
                      cVar4 != '\0')))) {
          if ((iVar5 != -1) && (lVar9 = param_1[1] + lVar9, lVar9 != 0)) goto LAB_140d6e1f8;
          break;
        }
        lVar7 = param_1[1];
        iVar5 = *(int *)(lVar9 + 0x48 + lVar7);
      } while (iVar5 != -1);
    }
  }
  local_res20 = &local_68;
  FUN_140d5c150(param_1 + 1,local_res10,&local_res20,0);
  lVar9 = (longlong)local_res10[0] * 0x50 + param_1[1];
LAB_140d6e1f8:
  local_68 = &PTR_FUN_143f740c8;
  if (local_50 != 0) {
    FMemory::Free();
  }
  plVar8 = local_58;
  local_68 = &PTR_FUN_143f73d18;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  uVar6 = FUN_140d68e20(param_1,lVar9 + 0x28,param_2,(int)param_1[0xb]);
  return uVar6;
}



// FUNCTION 140d6e2a0 FUN_140d6e2a0 body=3186 status=ok
// SIG undefined FUN_140d6e2a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d6e2a0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  undefined8 uVar18;
  uint uVar19;
  longlong *plVar20;
  int iVar21;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  undefined4 local_1f0;
  uint local_1e8;
  int local_1e4;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  undefined **local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  int local_198;
  int local_194;
  longlong *local_190;
  undefined8 local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  undefined8 local_160;
  undefined ***local_158;
  longlong local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  undefined **local_130 [2];
  longlong *local_120;
  longlong local_118;
  undefined **local_108 [2];
  longlong *local_f8;
  longlong local_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_1e8 = 0;
  if ((((*param_1 != 0) && (*param_2 != 0)) &&
      (plVar13 = *(longlong **)(*param_2 + 0x10), plVar13 != (longlong *)0x0)) &&
     (local_1c8 = param_2, local_178 = param_1, cVar5 = (**(code **)(*plVar13 + 0x20))(),
     cVar5 != '\0')) {
    plVar10 = (longlong *)UListView::OnItemSelectionChanged(*param_1);
    local_1d8 = plVar10;
    local_160 = FUN_140bb74b0(*param_1);
    plVar12 = (longlong *)*plVar10;
    plVar13 = plVar12 + (int)plVar10[1];
    plVar14 = local_190;
    plVar20 = local_190;
    uVar19 = 0;
    for (; plVar12 != plVar13; plVar12 = plVar12 + 1) {
      if (*plVar12 == 0) {
        local_1e8 = uVar19 | 4;
        plVar20 = (longlong *)0x0;
        lVar11 = 0;
        plVar10 = (longlong *)0x0;
      }
      else {
        local_1e8 = uVar19 | 3;
        lVar11 = FUN_142547b50(*plVar12,local_130);
        plVar10 = *(longlong **)(lVar11 + 0x10);
        lVar11 = *(longlong *)(lVar11 + 8);
        plVar14 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
      }
      if (((local_1e8 & 4) != 0) && (local_1e8 = local_1e8 & 0xfffffffb, plVar20 != (longlong *)0x0)
         ) {
        LOCK();
        plVar1 = plVar20 + 1;
        lVar17 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar2 = (int *)((longlong)plVar20 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar20 + 8))(plVar20,1);
          }
        }
      }
      if (((local_1e8 & 2) != 0) && (local_1e8 = local_1e8 & 0xfffffffd, plVar14 != (longlong *)0x0)
         ) {
        LOCK();
        plVar1 = plVar14 + 1;
        lVar17 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      if ((local_1e8 & 1) != 0) {
        local_1e8 = local_1e8 & 0xfffffffe;
        local_130[0] = &PTR_FUN_143f740c8;
        if (local_118 != 0) {
          FMemory::Free();
        }
        plVar1 = local_120;
        local_130[0] = &PTR_FUN_143f73d18;
        if (local_120 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_120 + 1;
          lVar17 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*local_120)(local_120);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar1 + 8))(plVar1,1);
            }
          }
        }
      }
      if ((lVar11 != 0) &&
         (cVar5 = (**(code **)**(undefined8 **)(*local_1c8 + 0x10))
                            (*(undefined8 **)(*local_1c8 + 0x10),lVar11), cVar5 != '\0')) {
        if (plVar10 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar13 = plVar10 + 1;
        lVar11 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar11 != 1) {
          return;
        }
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 != 1) {
          return;
        }
        lVar11 = *plVar10;
        goto LAB_140d6eecd;
      }
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
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      plVar10 = local_1d8;
      uVar19 = local_1e8;
    }
    local_180 = *(longlong **)(*local_1c8 + 0x18);
    local_188 = *(undefined8 *)(*local_1c8 + 0x10);
    if (local_180 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_180 + 1) = (int)local_180[1] + 1;
      UNLOCK();
    }
    plVar13 = (longlong *)*plVar10;
    local_190 = plVar13 + (int)plVar10[1];
    local_1d0 = plVar13;
    if (plVar13 != local_190) {
      do {
        plVar12 = (longlong *)0x0;
        local_1d0 = plVar13;
        if (*plVar13 == 0) {
          local_170 = (longlong *)0x0;
          uVar8 = 0x20;
          plVar10 = plVar12;
        }
        else {
          lVar11 = FUN_142547b50(*plVar13,local_108);
          local_168 = *(longlong **)(lVar11 + 0x10);
          plVar12 = *(longlong **)(lVar11 + 8);
          if (local_168 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_168 + 1) = (int)local_168[1] + 1;
            UNLOCK();
          }
          uVar8 = 0x18;
          plVar10 = local_168;
        }
        plVar20 = local_168;
        plVar14 = local_170;
        uVar19 = uVar19 | uVar8;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_1e8 = uVar19;
        local_1d8 = plVar10;
        if (((uVar19 & 0x20) != 0) &&
           (uVar19 = uVar19 & 0xffffffdf, local_1e8 = uVar19, local_170 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_170 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_170)(local_170);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        if (((uVar19 & 0x10) != 0) &&
           (uVar19 = uVar19 & 0xffffffef, local_1e8 = uVar19, plVar20 != (longlong *)0x0)) {
          LOCK();
          plVar14 = plVar20 + 1;
          lVar11 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar2 = (int *)((longlong)plVar20 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20,1);
            }
          }
        }
        if ((uVar19 & 8) != 0) {
          uVar19 = uVar19 & 0xfffffff7;
          local_108[0] = &PTR_FUN_143f740c8;
          local_1e8 = uVar19;
          if (local_f0 != 0) {
            FMemory::Free();
          }
          plVar14 = local_f8;
          local_108[0] = &PTR_FUN_143f73d18;
          if (local_f8 != (longlong *)0x0) {
            LOCK();
            plVar20 = local_f8 + 1;
            lVar11 = *plVar20;
            *(int *)plVar20 = (int)*plVar20 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_f8)(local_f8);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              iVar9 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
          }
        }
        if (plVar12 != (longlong *)0x0) {
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          local_140 = plVar12;
          local_138 = plVar10;
          cVar5 = FUN_140d89890(local_160,&local_140,&local_188,0);
          plVar13 = local_138;
          if (local_138 != (longlong *)0x0) {
            LOCK();
            plVar14 = local_138 + 1;
            lVar11 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_138)(local_138);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          plVar14 = local_178;
          plVar13 = local_1d0;
          if (cVar5 != '\0') {
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            local_1c0 = &PTR_FUN_143f740c8;
            plVar13 = local_178 + 2;
            local_1a8 = 0;
            local_1a0 = 0;
            local_1b8 = plVar12;
            local_1b0 = plVar10;
            if ((int)local_178[3] != *(int *)((longlong)local_178 + 0x44)) {
              if ((plVar12 == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(*plVar12 + 0x20))(plVar12), cVar5 == '\0')) {
                iVar9 = -1;
              }
              else {
                iVar9 = GetTypeHash(local_1b8);
              }
              plVar12 = (longlong *)plVar14[10];
              if ((longlong *)plVar14[10] == (longlong *)0x0) {
                plVar12 = plVar14 + 9;
              }
              iVar9 = *(int *)((longlong)plVar12 +
                              ((longlong)(int)plVar14[0xb] - 1U & (longlong)iVar9) * 4);
              if (iVar9 != -1) {
                lVar11 = *plVar13;
                do {
                  lVar17 = (longlong)iVar9 * 0x40;
                  plVar12 = *(longlong **)(lVar17 + 8 + lVar11);
                  if ((((plVar12 == (longlong *)0x0) ||
                       (cVar5 = (**(code **)(*plVar12 + 0x20))(), cVar5 == '\0')) ||
                      (local_1b8 == (longlong *)0x0)) ||
                     (cVar5 = (**(code **)(*local_1b8 + 0x20))(local_1b8), cVar5 == '\0')) {
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                  }
                  plVar12 = *(longlong **)(lVar17 + 8 + lVar11);
                  if ((((plVar12 == (longlong *)0x0) ||
                       (cVar5 = (**(code **)(*plVar12 + 0x20))(), cVar5 == '\0')) &&
                      ((local_1b8 == (longlong *)0x0 ||
                       (cVar5 = (**(code **)(*local_1b8 + 0x20))(local_1b8), cVar5 == '\0')))) ||
                     ((bVar4 && (cVar5 = (**(code **)*local_1b8)
                                                   (local_1b8,*(undefined8 *)(lVar17 + 8 + lVar11)),
                                cVar5 != '\0')))) {
                    if ((iVar9 != -1) && (lVar17 = *plVar13 + lVar17, lVar17 != 0))
                    goto LAB_140d6e925;
                    break;
                  }
                  lVar11 = *plVar13;
                  iVar9 = *(int *)(lVar17 + 0x38 + lVar11);
                } while (iVar9 != -1);
              }
            }
            local_158 = &local_1c0;
            FUN_140d5c380(plVar13,&local_198,&local_158);
            lVar17 = (longlong)local_198 * 0x40 + *plVar13;
LAB_140d6e925:
            plVar12 = (longlong *)(lVar17 + 0x28);
            local_1c0 = &PTR_FUN_143f740c8;
            local_1e0 = plVar12;
            if (local_1a8 != 0) {
              FMemory::Free();
            }
            plVar13 = local_1b0;
            local_1c0 = &PTR_FUN_143f73d18;
            if (local_1b0 != (longlong *)0x0) {
              LOCK();
              plVar10 = local_1b0 + 1;
              lVar11 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*local_1b0)(local_1b0);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                iVar9 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
            }
            plVar14 = (longlong *)*plVar12;
            iVar9 = *(int *)(lVar17 + 0x30);
            plVar20 = plVar14 + (longlong)iVar9 * 2;
            if (plVar14 != plVar20) {
              do {
                plVar12 = local_1c8;
                lVar11 = *plVar14;
                if (lVar11 != 0) {
                  lVar17 = *local_1c8;
                  if ((((*(longlong **)(lVar11 + 0x10) == (longlong *)0x0) ||
                       (cVar5 = (**(code **)(**(longlong **)(lVar11 + 0x10) + 0x20))(),
                       cVar5 == '\0')) || (*(longlong **)(lVar17 + 0x10) == (longlong *)0x0)) ||
                     (cVar5 = (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x20))(), cVar5 == '\0')
                     ) {
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                  }
                  if (((((*(longlong **)(lVar11 + 0x10) == (longlong *)0x0) ||
                        (cVar5 = (**(code **)(**(longlong **)(lVar11 + 0x10) + 0x20))(),
                        cVar5 == '\0')) &&
                       ((*(longlong **)(lVar17 + 0x10) == (longlong *)0x0 ||
                        (cVar5 = (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x20))(),
                        cVar5 == '\0')))) ||
                      ((bVar4 && (cVar5 = (**(code **)**(undefined8 **)(lVar17 + 0x10))
                                                    (*(undefined8 **)(lVar17 + 0x10),
                                                     *(undefined8 *)(lVar11 + 0x10)), cVar5 != '\0')
                       ))) && (plVar13 = local_1d0, plVar10 = local_1d8, uVar19 = local_1e8,
                              *(longlong *)(*plVar12 + 0x30) <= *(longlong *)(*plVar14 + 0x30)))
                  goto LAB_140d6ee3d;
                }
                plVar14 = plVar14 + 2;
              } while (plVar14 != plVar20);
              iVar9 = (int)local_1e0[1];
              plVar14 = (longlong *)*local_1e0;
              plVar12 = local_1e0;
            }
            if (iVar9 != 0) {
              iVar21 = 0;
              lVar11 = 0;
              local_1e4 = 0;
              if (*plVar14 == 0) {
                bVar6 = 1;
              }
              else {
                bVar6 = FUniqueNetIdWrapper::operator==(*local_1c8 + 8,*plVar14 + 8);
              }
              lVar17 = (longlong)iVar9;
              local_150 = lVar17;
              do {
                plVar13 = local_1c8;
                bVar6 = bVar6 ^ 1;
                iVar9 = iVar21 + 1;
                lVar11 = lVar11 + 1;
                local_194 = iVar21;
                if (lVar11 < lVar17) {
                  lVar15 = lVar11 * 0x10;
                  do {
                    if (*(longlong *)(lVar15 + *plVar12) == 0) {
                      bVar7 = 1;
                    }
                    else {
                      bVar7 = FUniqueNetIdWrapper::operator==
                                        (*plVar13 + 8,*(longlong *)(lVar15 + *plVar12) + 8);
                    }
                    if (bVar6 != (bVar7 ^ 1)) break;
                    iVar9 = iVar9 + 1;
                    lVar11 = lVar11 + 1;
                    lVar15 = lVar15 + 0x10;
                  } while (lVar11 < lVar17);
                }
                iVar21 = iVar9;
                iVar9 = local_1e4;
                iVar16 = iVar21 - local_194;
                if (bVar6 == 0) {
                  if (iVar16 != 0) {
                    plVar13 = (longlong *)((longlong)local_194 * 0x10 + 8 + *local_1e0);
                    do {
                      plVar12 = (longlong *)*plVar13;
                      if (plVar12 != (longlong *)0x0) {
                        LOCK();
                        plVar10 = plVar12 + 1;
                        lVar17 = *plVar10;
                        *(int *)plVar10 = (int)*plVar10 + -1;
                        UNLOCK();
                        if ((int)lVar17 == 1) {
                          (**(code **)*plVar12)(plVar12);
                          LOCK();
                          piVar2 = (int *)((longlong)plVar12 + 0xc);
                          iVar9 = *piVar2;
                          *piVar2 = *piVar2 + -1;
                          UNLOCK();
                          if (iVar9 == 1) {
                            (**(code **)(*plVar12 + 8))(plVar12,1);
                          }
                        }
                      }
                      plVar13 = plVar13 + 2;
                      iVar16 = iVar16 + -1;
                      lVar17 = local_150;
                    } while (iVar16 != 0);
                  }
                }
                else {
                  if (local_1e4 != local_194) {
                    _guard_xfg_dispatch_icall_nop
                              ((void *)((longlong)local_1e4 * 0x10 + *local_1e0),
                               (void *)((longlong)local_194 * 0x10 + *local_1e0),
                               (longlong)iVar16 << 4);
                  }
                  local_1e4 = iVar9 + iVar16;
                }
                plVar12 = local_1e0;
              } while (lVar11 < lVar17);
              *(int *)(local_1e0 + 1) = local_1e4;
            }
            plVar13 = local_1c8;
            *(undefined1 *)(*local_1c8 + 0x240) = 1;
            iVar9 = (int)plVar12[1];
            *(int *)(plVar12 + 1) = iVar9 + 1;
            if (*(int *)((longlong)plVar12 + 0xc) < iVar9 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar9);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar12 + 0x10),(void *)*plVar12,(longlong)iVar9 << 4);
            plVar14 = local_178;
            plVar10 = (longlong *)*plVar12;
            *plVar10 = *plVar13;
            lVar11 = plVar13[1];
            plVar10[1] = lVar11;
            if (lVar11 != 0) {
              LOCK();
              *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
              UNLOCK();
            }
            if (((longlong *)*local_178 != (longlong *)0x0) &&
               (lVar11 = (**(code **)(*(longlong *)*local_178 + 0x148))(), lVar11 != 0)) {
              if (*(longlong *)(lVar11 + 400) == 0) {
                uVar18 = *(undefined8 *)(lVar11 + 0x3f8);
              }
              else {
                uVar18 = *(undefined8 *)(*(longlong *)(lVar11 + 400) + 0x90);
              }
              local_148 = plVar14[0xc];
              lVar11 = FTimerManager::FindTimer(uVar18,&local_148,0);
              if ((lVar11 == 0) || (plVar12 = local_1e0, *(char *)(lVar11 + 1) == '\x02')) {
                plVar13 = (longlong *)FMemory::Realloc(0,0x30);
                if (plVar13 != (longlong *)0x0) {
                  plVar13[1] = (longlong)plVar14;
                  *plVar13 = (longlong)&DAT_143f3ed00;
                  plVar13[2] = (longlong)FUN_140d917c0;
                  lVar11 = FDelegateHandle::GenerateNewID();
                  plVar13[4] = lVar11;
                  *plVar13 = (longlong)&PTR_GetPoolName_143f3ed48;
                }
                lVar11 = plVar14[0xd];
                local_d8 = 0;
                local_d0 = 0;
                if (plVar13 != (longlong *)0x0) {
                  (**(code **)(*plVar13 + 0x30))(plVar13,&local_d8);
                }
                FWeakObjectPtr::operator=(local_c8,0);
                local_1f0 = 0xbf800000;
                local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
                local_c0 = 0;
                local_88 = (longlong *)0x0;
                local_78 = 0;
                local_1f8 = 1;
                FUN_142880850(uVar18,plVar14 + 0xc,&local_d8,(int)lVar11);
                if (local_78 != 0) {
                  plVar12 = local_a8;
                  if (local_88 != (longlong *)0x0) {
                    plVar12 = local_88;
                  }
                  if (plVar12 != (longlong *)0x0) {
                    (**(code **)(*plVar12 + 0x10))(plVar12,0);
                  }
                }
                if (local_88 != (longlong *)0x0) {
                  FMemory::Free();
                }
                TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
                plVar12 = local_1e0;
                if (plVar13 != (longlong *)0x0) {
                  (**(code **)(*plVar13 + 0x28))(plVar13,0);
                  lVar11 = FMemory::Realloc(plVar13,0,0);
                  plVar12 = local_1e0;
                  if (lVar11 != 0) {
                    FMemory::Free(lVar11);
                    plVar12 = local_1e0;
                  }
                }
              }
            }
            lVar11 = (longlong)(int)plVar12[1];
            plVar13 = local_1d0;
            plVar10 = local_1d8;
            uVar19 = local_1e8;
            if ((int)plVar14[1] <= (int)plVar12[1]) {
              lVar17 = *plVar12;
              plVar14 = *(longlong **)(lVar17 + -8 + lVar11 * 0x10);
              *(undefined8 *)(lVar17 + -8 + lVar11 * 0x10) = 0;
              *(undefined8 *)(lVar17 + -0x10 + lVar11 * 0x10) = 0;
              TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                        (plVar12,(int)plVar12[1] + -1,1);
              plVar13 = local_1d0;
              plVar10 = local_1d8;
              uVar19 = local_1e8;
              if (plVar14 != (longlong *)0x0) {
                LOCK();
                plVar12 = plVar14 + 1;
                lVar11 = *plVar12;
                *(int *)plVar12 = (int)*plVar12 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*plVar14)(plVar14);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar14 + 0xc);
                  iVar9 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  plVar13 = local_1d0;
                  plVar10 = local_1d8;
                  uVar19 = local_1e8;
                  if (iVar9 == 1) {
                    (**(code **)(*plVar14 + 8))(plVar14,1);
                    plVar13 = local_1d0;
                    plVar10 = local_1d8;
                    uVar19 = local_1e8;
                  }
                }
              }
            }
          }
        }
LAB_140d6ee3d:
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar10 + 1;
          lVar11 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        plVar13 = plVar13 + 1;
        local_1d0 = plVar13;
      } while (plVar13 != local_190);
    }
    plVar13 = local_180;
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_180 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          lVar11 = *local_180;
          plVar10 = local_180;
LAB_140d6eecd:
          (**(code **)(lVar11 + 8))(plVar10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d6ef40 FUN_140d6ef40 body=71 status=ok
// SIG undefined FUN_140d6ef40(void)

void FUN_140d6ef40(longlong *param_1)

{
  undefined8 uVar1;
  longlong local_res8 [4];
  
  if (param_1[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1[1] + 0x10);
  }
  FUN_140d69230(*param_1,param_1[2],uVar1);
  local_res8[0] = param_1[2];
  FUN_140d60b10(*param_1 + 0x48,local_res8);
  return;
}



// FUNCTION 140d6ef90 FUN_140d6ef90 body=756 status=ok
// SIG undefined FUN_140d6ef90(void)

undefined8 FUN_140d6ef90(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  longlong local_res10;
  undefined1 local_68 [8];
  undefined8 local_60;
  longlong *local_58;
  undefined8 *local_50;
  longlong *local_48;
  
  if (((param_2 != (longlong *)0x0) && (param_3 != 0)) && (param_4 != '\x02')) {
    if (*(char *)(param_1 + 0x58) != '\x13') {
      local_60 = *(undefined8 *)(param_1 + 0x10);
      local_58 = *(longlong **)(param_1 + 0x18);
      if (local_58 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
      }
      cVar5 = FUN_140bca1f0(param_3,&local_60,1);
      plVar8 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_58)(local_58);
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
      if (cVar5 != '\0') {
        return 0;
      }
    }
    lVar6 = FUN_140d7ee70(param_1);
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x12) != '\0')) {
      if (*(char *)(lVar6 + 0x11) != '\0') {
        if (*(longlong **)(param_1 + 0x38) == (longlong *)0x0) {
          return 0;
        }
        cVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))();
        if (cVar5 == '\0') {
          return 0;
        }
        FUN_142dcf3a0(param_2,&local_50);
        if ((local_50 == (undefined8 *)0x0) ||
           (cVar5 = (**(code **)*local_50)(local_50,*(undefined8 *)(param_1 + 0x38)), cVar5 == '\0')
           ) {
          if (local_48 == (longlong *)0x0) {
            return 0;
          }
          LOCK();
          plVar8 = local_48 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 != 1) {
            return 0;
          }
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)local_48 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 != 1) {
            return 0;
          }
          (**(code **)(*local_48 + 8))(local_48,1);
          return 0;
        }
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_48 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)local_48 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_48 + 8))(local_48,1);
            }
          }
        }
      }
      lVar7 = (**(code **)(*param_2 + 0xfa8))(param_2);
      if ((((lVar7 == 0) || (*(int *)(lVar7 + 0x48) < 1)) &&
          ((lVar7 = ATTLCharacterCommon::GetCurrentSupportWeapon(param_2), lVar7 == 0 ||
           (*(char *)(lVar7 + 0x34) == '\0')))) && (cVar5 = FUN_140bca8a0(param_3), cVar5 == '\0'))
      {
        if (param_4 == '\x01') {
          FTimespan::Assign(&local_res10,0,0,5,0,0);
          plVar8 = (longlong *)FDateTime::UtcNow(local_68);
          if (*(longlong *)(param_1 + 0x60) < *plVar8 - local_res10) {
            return 0;
          }
        }
        lVar7 = FUN_140cff230(param_2);
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        lVar4 = *(longlong *)(DAT_146b33f38 + 0x98);
        if ((lVar7 != 0) && (lVar4 != 0)) {
          cVar5 = *(char *)(lVar7 + 0x251);
          if (cVar5 == '\0') {
            return 0;
          }
          if ((cVar5 != '\x05') && (*(char *)(lVar6 + 0x13) == '\0')) {
            lVar6 = FUN_140bb7220(param_3);
            fVar9 = *(float *)(lVar6 + 0xc4);
            lVar6 = FUN_140bb7220(param_3);
            if (cVar5 == '\x01') {
              fVar9 = *(float *)(lVar4 + 0x74);
            }
            else if (cVar5 == '\x02') {
              fVar9 = *(float *)(lVar4 + 0x78);
            }
            else if (cVar5 == '\x03') {
              fVar9 = *(float *)(lVar4 + 0x7c);
            }
            else if (cVar5 == '\x04') {
              fVar9 = *(float *)(lVar4 + 0x80);
            }
            if (*(float *)(lVar6 + 0xc0) < fVar9) {
              return 0;
            }
          }
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140d6f290 FUN_140d6f290 body=431 status=ok
// SIG undefined FUN_140d6f290(void)

void FUN_140d6f290(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  longlong *local_18;
  longlong *local_10;
  
  if (*(int *)(param_1 + 0x18) - 6U < 2) {
    return;
  }
  if (*(int *)(param_1 + 0x18) != 1) {
    *(undefined4 *)(param_1 + 0x18) = 7;
    TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound(param_1 + 8,7);
    return;
  }
  FUN_1404d0c50(&local_18,*(undefined8 *)(param_1 + 0x78));
  if (local_18 == (longlong *)0x0) goto LAB_140d6f3f5;
  (**(code **)(*local_18 + 0x110))(local_18,param_1 + 0x80);
  if (*(int *)(param_1 + 0x18) != 6) {
    *(undefined4 *)(param_1 + 0x18) = 6;
    TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound(param_1 + 8,6);
  }
  local_28 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_140d8aeb0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar6 = (undefined8 *)(**(code **)(*local_18 + 0x130))(local_18,local_res8,&local_28);
  *(undefined8 *)(param_1 + 0x88) = *puVar6;
  if (local_20 == 0) {
LAB_140d6f3dc:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_140d6f3dc;
  }
  (**(code **)(*local_18 + 0x128))(local_18);
LAB_140d6f3f5:
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
  return;
}



// FUNCTION 140d6f440 FUN_140d6f440 body=38 status=ok
// SIG undefined FUN_140d6f440(void)

void FUN_140d6f440(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = FUN_140bb7190();
    FUN_140d74020(lVar1 + 8,0);
    return;
  }
  return;
}



// FUNCTION 140d6f470 FUN_140d6f470 body=67 status=ok
// SIG undefined FUN_140d6f470(void)

void FUN_140d6f470(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = FUN_140bb73a0();
    FUN_140d740a0(lVar1 + 0x10,0);
  }
  FUN_140d73fa0(param_1 + 0xf0,0);
  FUN_140d742a0(param_1 + 0x140,0);
  return;
}



// FUNCTION 140d6f4c0 FUN_140d6f4c0 body=660 status=ok
// SIG undefined FUN_140d6f4c0(void)

void FUN_140d6f4c0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  bVar4 = true;
  plVar1 = (longlong *)(param_1 + 0x68);
  iVar9 = *(int *)(param_1 + 0x90);
  puStack_58 = (uint *)(param_1 + 0x78);
  local_a8 = 0;
  uStack_a4 = 1;
  local_98._4_4_ = 0;
  uStack_90 = 0;
  if (iVar9 != 0) {
    puVar13 = *(uint **)(param_1 + 0x88);
    if (*(uint **)(param_1 + 0x88) == (uint *)0x0) {
      puVar13 = puStack_58;
    }
    uVar12 = *puVar13;
    uStack_90 = 0;
    local_a8 = 0;
    while (uVar12 == 0) {
      lVar8 = (longlong)(int)local_a8;
      uStack_90 = uStack_90 + 0x20;
      uVar12 = local_a8 + 1;
      bVar3 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_a8;
      local_a8 = uVar12;
      if (bVar3) goto LAB_140d6f58d;
      uVar12 = puVar13[lVar8 + 1];
    }
    uStack_a4 = -uVar12 & uVar12;
    iVar6 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_98._4_4_ = (uStack_90 - iVar6) + 0x1f;
    if (iVar9 < local_98._4_4_) {
LAB_140d6f58d:
      local_98._4_4_ = iVar9;
    }
  }
  auStack_50._4_4_ = local_98._4_4_;
  auStack_50._0_4_ = 0xffffffff;
  auStack_50._8_4_ = uStack_90;
  auStack_50._12_4_ = iStack_8c;
  uStack_60 = local_a8;
  uStack_5c = uStack_a4;
  local_70 = 0;
  local_40._0_4_ = SUB84(plVar1,0);
  local_40._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_90 = 0xffffffff;
  iStack_8c = local_98._4_4_;
  uStack_a0 = local_a8;
  uStack_9c = uStack_a4;
  local_88._8_4_ = (undefined4)local_40;
  local_88._0_8_ = auStack_50._8_8_;
  local_88._12_4_ = local_40._4_4_;
  bVar3 = local_98._4_4_ < *(int *)(param_1 + 0x90);
  local_78 = plVar1;
  local_68 = plVar1;
  local_40 = plVar1;
  local_98 = puStack_58;
  if (bVar3) {
    do {
      lVar14 = (longlong)iStack_8c;
      lVar8 = *(longlong *)(*plVar1 + 8 + lVar14 * 0x20);
      lVar2 = *(longlong *)(lVar8 + 0x38);
      iVar9 = *(int *)(lVar8 + 0x40);
      for (lVar10 = lVar2; lVar10 != (longlong)iVar9 * 0x10 + lVar2; lVar10 = lVar10 + 0x10) {
        cVar5 = (*(code *)**(undefined8 **)*param_2)();
        if (cVar5 != '\0') {
          uVar11 = lVar10 - lVar2 >> 4;
          iVar9 = (int)uVar11;
          if ((-1 < iVar9) && (iVar9 < *(int *)(lVar8 + 0x40))) {
            lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0x38) + (longlong)iVar9 * 0x10);
            uVar7 = FUN_14164ab60();
            FUN_141597530(uVar7,*(undefined8 *)(lVar2 + 0x80));
            TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (lVar8 + 0x38,uVar11 & 0xffffffff,1,1);
          }
          break;
        }
      }
      bVar3 = false;
      if (*(int *)(*(longlong *)(*plVar1 + 8 + lVar14 * 0x20) + 0x40) < 1) {
        bVar3 = bVar4;
      }
      uStack_90 = uStack_90 & ~uStack_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      bVar4 = bVar3;
    } while (iStack_8c < (int)local_98[6]);
    if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
      TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
    }
    if (!bVar3) {
      return;
    }
  }
  TSet<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0xd0,0);
  TSet<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x120,0);
  return;
}



// FUNCTION 140d6f760 FUN_140d6f760 body=161 status=ok
// SIG undefined FUN_140d6f760(void)

undefined8 FUN_140d6f760(longlong param_1,uint param_2,char param_3)

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
      FUN_140d94d70(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140d6f810 FUN_140d6f810 body=161 status=ok
// SIG undefined FUN_140d6f810(void)

undefined8 FUN_140d6f810(longlong param_1,uint param_2,char param_3)

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
      FUN_140d94ff0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140d6f8c0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
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
      FUN_14055d440(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140d6f970 FUN_140d6f970 body=161 status=ok
// SIG undefined FUN_140d6f970(void)

undefined8 FUN_140d6f970(longlong param_1,uint param_2,char param_3)

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
      FUN_140d95260(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140d6fa20 FUN_140d6fa20 body=387 status=ok
// SIG undefined FUN_140d6fa20(void)

void FUN_140d6fa20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_48;
  longlong *local_40;
  undefined **local_38 [2];
  longlong *local_28;
  longlong local_20;
  
  iVar6 = FUN_140d83f00();
  if (((iVar6 != *(int *)(param_1 + 0x20)) && (*(longlong *)(param_1 + 8) != 0)) &&
     (lVar7 = UGameInstance::GetFirstGamePlayer(), lVar7 != 0)) {
    lVar7 = FUN_142547b50(lVar7,local_38);
    plVar4 = *(longlong **)(lVar7 + 0x10);
    lVar7 = *(longlong *)(lVar7 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_38[0] = &PTR_FUN_143f740c8;
    if (local_20 != 0) {
      FMemory::Free();
    }
    local_38[0] = &PTR_FUN_143f73d18;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
    if (lVar7 != 0) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_48 = lVar7;
      local_40 = plVar4;
      uVar8 = FUN_140bb74b0(*(undefined8 *)(param_1 + 8));
      FUN_140d82050(uVar8,&local_48,0);
      plVar1 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
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
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d6fbb0 FUN_140d6fbb0 body=922 status=ok
// SIG undefined FUN_140d6fbb0(void)

void FUN_140d6fbb0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int local_res8 [2];
  int local_res20 [2];
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  longlong *local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  
  plVar7 = *(longlong **)(param_1 + 0x48);
  plVar9 = plVar7 + (longlong)*(int *)(param_1 + 0x50) * 2;
  if (plVar7 == plVar9) {
    return;
  }
  while (cVar2 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,*(undefined8 *)*plVar7)
        , cVar2 == '\0') {
    plVar7 = plVar7 + 2;
    if (plVar7 == plVar9) {
      return;
    }
  }
  plVar9 = (longlong *)plVar7[1];
  lVar8 = *plVar7;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  if (lVar8 == 0) goto LAB_140d6fefd;
  if (1 < *(int *)(param_3 + 8)) {
    FUN_140d71800(param_1,param_2,param_3);
    goto LAB_140d6fefd;
  }
  puVar4 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_78);
  FUN_1404cf890(&local_48,*puVar4);
  if (local_48 != (longlong *)0x0) {
    *(undefined4 *)(lVar8 + 0x10) = 3;
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_70);
    plVar7 = (longlong *)(param_1 + 0xa8);
    lVar8 = *plVar5;
    if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
      lVar6 = *(longlong *)(param_1 + 0xe8);
      if (*(longlong *)(param_1 + 0xe8) == 0) {
        lVar6 = param_1 + 0xe0;
      }
      iVar3 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar8 >> 0x20) + (int)lVar8) &
                               (longlong)*(int *)(param_1 + 0xf0) - 1U) * 4);
      if (iVar3 != -1) {
        do {
          lVar6 = *plVar7 + (longlong)iVar3 * 0x18;
          if (*(longlong *)(*plVar7 + (longlong)iVar3 * 0x18) == lVar8) {
            if ((iVar3 != -1) && (lVar6 != 0)) goto LAB_140d6fd3b;
            break;
          }
          iVar3 = *(int *)(lVar6 + 0x10);
        } while (iVar3 != -1);
      }
    }
    local_88 = plVar5;
    FUN_140d5caf0(plVar7,local_res8,&local_88,0);
    lVar6 = *plVar7 + (longlong)local_res8[0] * 0x18;
LAB_140d6fd3b:
    plVar7 = local_48;
    if (*(longlong *)(lVar6 + 8) == 0) {
      local_58 = (longlong *)0x0;
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      local_50 = 3;
      local_58 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        plVar7[1] = param_1;
        *plVar7 = (longlong)&DAT_143f3ed00;
        plVar7[2] = (longlong)FUN_140d8ef40;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar7[4] = lVar8;
        *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
      }
      puVar4 = (undefined8 *)(**(code **)(*local_48 + 0xf8))(local_48,local_68,&local_58);
      *(undefined8 *)(lVar6 + 8) = *puVar4;
      plVar7 = local_48;
      if (local_50 != 0) {
        if (local_58 == (longlong *)0x0) goto LAB_140d6fe03;
        (**(code **)(*local_58 + 0x28))(local_58,0);
        if (local_58 != (longlong *)0x0) {
          local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
        }
        local_50 = 0;
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free(local_58);
      }
    }
LAB_140d6fe03:
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_60);
    lVar8 = *plVar5;
    if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
      lVar6 = *(longlong *)(param_1 + 0x98);
      if (*(longlong *)(param_1 + 0x98) == 0) {
        lVar6 = param_1 + 0x90;
      }
      iVar3 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar8 >> 0x20) + (int)lVar8) &
                               (longlong)*(int *)(param_1 + 0xa0) - 1U) * 4);
      if (iVar3 != -1) {
        do {
          lVar6 = *(longlong *)(param_1 + 0x58) + (longlong)iVar3 * 0x18;
          if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar3 * 0x18) == lVar8) {
            if ((iVar3 != -1) && (lVar6 != 0)) goto LAB_140d6fead;
            break;
          }
          iVar3 = *(int *)(lVar6 + 0x10);
        } while (iVar3 != -1);
      }
    }
    local_80 = plVar5;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    Emplace<TKeyInitializer<FName_const_&>_>(param_1 + 0x58,local_res20,&local_80,0);
    lVar6 = *(longlong *)(param_1 + 0x58) + (longlong)local_res20[0] * 0x18;
LAB_140d6fead:
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    (**(code **)(*plVar7 + 0xf0))(plVar7,param_2);
  }
  plVar7 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
LAB_140d6fefd:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar9 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 140d6ff50 FUN_140d6ff50 body=242 status=ok
// SIG undefined FUN_140d6ff50(void)

undefined8 * FUN_140d6ff50(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong local_res18 [2];
  
  puVar3 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar3 = &PTR_FUN_144531638;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  plVar1 = puVar3 + 2;
  *plVar1 = 0;
  lVar6 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  }
  if (lVar6 != 0) {
    puVar4 = (undefined8 *)operator_new(0x18);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      FGCObject::FGCObject(puVar4);
      puVar4[2] = lVar6;
      *puVar4 = &PTR__scalar_deleting_destructor__1440f8f50;
    }
    if (plVar1 == local_res18) {
      if (puVar4 == (undefined8 *)0x0) goto LAB_140d7000c;
      puVar5 = (undefined8 *)*puVar4;
    }
    else {
      puVar2 = (undefined8 *)*plVar1;
      *plVar1 = (longlong)puVar4;
      if (puVar2 == (undefined8 *)0x0) goto LAB_140d7000c;
      puVar5 = (undefined8 *)*puVar2;
      puVar4 = puVar2;
    }
    (*(code *)*puVar5)(puVar4,1);
  }
LAB_140d7000c:
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  lVar6 = *(longlong *)(param_1 + 0x20);
  puVar3[4] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  return puVar3;
}



// FUNCTION 140d70050 FUN_140d70050 body=235 status=ok
// SIG undefined FUN_140d70050(void)

void FUN_140d70050(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1445315a8;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = 0;
    iVar4 = *(int *)(param_1 + 0x18);
    lVar5 = *(longlong *)(param_1 + 0x10);
    *(int *)(puVar2 + 3) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(puVar2 + 2,iVar4,0);
      puVar3 = (undefined8 *)puVar2[2];
      lVar5 = lVar5 + 0x10;
      do {
        *puVar3 = *(undefined8 *)(lVar5 + -0x10);
        lVar1 = *(longlong *)(lVar5 + -8);
        puVar3[1] = lVar1;
        if (lVar1 != 0) {
          LOCK();
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          UNLOCK();
        }
        FString::FString(puVar3 + 2,lVar5);
        FString::FString(puVar3 + 4,lVar5 + 0x10);
        puVar3 = puVar3 + 6;
        lVar5 = lVar5 + 0x30;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_1445315f0;
  }
  return;
}



// FUNCTION 140d70140 FUN_140d70140 body=116 status=ok
// SIG undefined FUN_140d70140(void)

void FUN_140d70140(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144531488;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    FString::FString(puVar2 + 4,param_1 + 0x20);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar2 = &PTR_GetPoolName_1445314d0;
  }
  return;
}



// FUNCTION 140d701c0 FUN_140d701c0 body=82 status=ok
// SIG undefined FUN_140d701c0(void)

void FUN_140d701c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144531518;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_144531560;
  }
  return;
}



// FUNCTION 140d70220 CreateCopy body=74 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144531660;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1445316a8;
  }
  return;
}



// FUNCTION 140d70270 CreateCopy body=74 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144531740;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_144531788;
  }
  return;
}



// FUNCTION 140d702c0 FUN_140d702c0 body=126 status=ok
// SIG undefined FUN_140d702c0(void)

void FUN_140d702c0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144531880;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    if ((((longlong *)(param_1 + 0x18) != puVar2 + 3) && (*(int *)(param_1 + 0x20) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_1445318c8;
  }
  return;
}



// FUNCTION 140d70340 FUN_140d70340 body=84 status=ok
// SIG undefined FUN_140d70340(void)

void FUN_140d70340(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1445316f0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 140d703a0 FUN_140d703a0 body=683 status=ok
// SIG undefined FUN_140d703a0(void)

void FUN_140d703a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar12 = &DAT_143f3eda8;
  if (DAT_146b18950 != 0) {
    puVar12 = DAT_146b18948;
  }
  FString::PrintfImpl(local_38,&DAT_1445138a0,puVar12);
  if (((*(longlong *)(param_1 + 8) != 0) &&
      (lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xae8), lVar10 != 0)) &&
     (lVar10 = FUN_140d5bf70(lVar10,DAT_14686e880,local_38,*(undefined4 *)(param_1 + 0x24)),
     lVar10 != 0)) {
    FUN_1404c9e30(lVar10);
    *(undefined4 *)(lVar10 + 0x50) = 1;
    FUN_142450450(*(undefined8 *)(param_1 + 8),&local_58);
    lVar10 = FUN_142b45e90();
    uVar4 = *(undefined8 *)(lVar10 + 0x18);
    if (local_58 == 0) {
      plVar11 = &local_68;
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      bVar8 = false;
      bVar7 = false;
      bVar6 = true;
      lVar10 = 0;
    }
    else {
      local_48 = local_58;
      plStack_40 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
      }
      plVar11 = (longlong *)FUN_142b4a990(uVar4,local_28,&local_48);
      bVar8 = true;
      bVar7 = true;
      bVar6 = false;
      lVar10 = *plVar11;
    }
    plVar5 = (longlong *)plVar11[1];
    plVar11[1] = 0;
    *plVar11 = 0;
    plVar11 = plStack_60;
    if ((bVar6) && (plStack_60 != (longlong *)0x0)) {
      LOCK();
      plVar1 = plStack_60 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
    if ((bVar7) && (local_20 != (longlong *)0x0)) {
      LOCK();
      plVar11 = local_20 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    plVar11 = plStack_40;
    if ((bVar8) && (plStack_40 != (longlong *)0x0)) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_40)(plStack_40);
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
    if (lVar10 != 0) {
      FUN_142b6d490(lVar10,0x21e4,1);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar5 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_50 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plStack_50 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d70650 FUN_140d70650 body=442 status=ok
// SIG undefined FUN_140d70650(void)

undefined8 ** FUN_140d70650(longlong param_1,undefined8 **param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *local_28;
  longlong *local_20;
  
  FUN_140d847c0();
  if (*param_2 != (undefined8 *)0x0) {
    return param_2;
  }
  puVar4 = (undefined8 *)operator_new(0x18);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    *puVar4 = *param_3;
    lVar3 = param_3[1];
    puVar4[1] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    puVar4[2] = 0;
  }
  plVar6 = (longlong *)0x0;
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_DestroyObject_1444f8938;
    plVar5[2] = (longlong)puVar4;
    plVar6 = plVar5;
  }
  local_28 = puVar4;
  local_20 = plVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_28,puVar4,puVar4);
  if (param_2 != &local_28) {
    *param_2 = puVar4;
    local_28 = (undefined8 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_20);
    plVar6 = local_20;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
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
  puVar4 = *param_2;
  if (puVar4 != (undefined8 *)0x0) {
    plVar6 = param_2[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    iVar2 = *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = iVar2 + 1;
    if (*(int *)(param_1 + 0x54) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x48,iVar2);
    }
    plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x48));
    *plVar5 = (longlong)puVar4;
    plVar5[1] = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar6 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar6)(plVar6);
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
  return param_2;
}



// FUNCTION 140d70810 FUN_140d70810 body=108 status=ok
// SIG undefined FUN_140d70810(void)

void FUN_140d70810(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(*(longlong *)(param_1 + 8) + 0xae8) != 0))
  {
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    puVar1 = puVar2 + *(int *)(param_1 + 0x38);
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      FUN_1404c9880(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xae8),*puVar2);
    }
  }
  return;
}



// FUNCTION 140d70880 FUN_140d70880 body=9 status=ok
// SIG undefined FUN_140d70880(void)

void FUN_140d70880(longlong param_1)

{
  FUN_140d66070(param_1 + 0x10);
  return;
}



// FUNCTION 140d70890 FUN_140d70890 body=90 status=ok
// SIG undefined FUN_140d70890(void)

void FUN_140d70890(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_143f769a0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty((longlong *)(param_1 + 0x38),0);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140d70900 FUN_140d70900 body=20 status=ok
// SIG undefined FUN_140d70900(void)

void FUN_140d70900(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_140d67e90(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 140d70920 DestroyObject body=109 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FUserDefinedChords,SharedPointerInternals::DefaultDeleter<FUserDefinedChords>_>
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
    FMemory::operator_delete(lVar4,0x10);
  }
  return;
}



// FUNCTION 140d70990 FUN_140d70990 body=20 status=ok
// SIG undefined FUN_140d70990(void)

void FUN_140d70990(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_140d68850(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 140d709b0 FUN_140d709b0 body=20 status=ok
// SIG undefined FUN_140d709b0(void)

void FUN_140d709b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_140d68a00(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 140d709d0 FUN_140d709d0 body=781 status=ok
// SIG undefined FUN_140d709d0(void)

void FUN_140d709d0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 local_res10 [8];
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar5 = FUN_140bb74b0();
    TBaseMulticastDelegate<void>::Remove(uVar5,*(undefined8 *)(param_1 + 0xa8));
    plVar6 = (longlong *)FUN_140bb7440(*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar7 = FUN_140bb73a0(*(undefined8 *)(param_1 + 8));
    FUN_140d740a0(lVar7 + 0x10,0);
    lVar7 = FUN_140bb7190(*(undefined8 *)(param_1 + 8));
    FUN_140d74020(lVar7 + 8,0);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  puVar8 = (undefined8 *)FName::FName(local_res10,L"SPARK",1);
  FUN_1404d0c50(&local_48,*puVar8);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x2b0))(local_48,param_1 + 0xb0);
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  local_70 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xb8) != &local_78) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xc0,&local_70);
    plVar6 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  local_60 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 200) != &local_68) {
    *(undefined8 *)(param_1 + 200) = 0;
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd0,&local_60);
    plVar6 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_60 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  FUN_140d70810(param_1);
  lVar7 = FUN_140d82cf0(param_1);
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x50) = 1;
    FUN_1404d5f40(lVar7,0);
  }
  local_50 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x70) != &local_58) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&local_50);
    plVar6 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  iVar9 = *(int *)(param_1 + 0x48);
  if (iVar9 != 0) {
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x40) + 8);
    do {
      plVar4 = (longlong *)*plVar6;
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
      plVar6 = plVar6 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x40,0);
  }
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x60,0);
  plVar6 = local_40;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140d70ce0 FUN_140d70ce0 body=637 status=ok
// SIG undefined FUN_140d70ce0(void)

void FUN_140d70ce0(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  longlong local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (((param_2 != (longlong *)0x0) &&
      (lVar8 = (**(code **)(*param_2 + 0x148))(param_2), lVar8 != 0)) &&
     (cVar6 = (**(code **)(*param_1 + 0x30))(param_1), cVar6 != '\0')) {
    local_48 = param_1[2];
    local_40 = (longlong *)param_1[3];
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    local_68 = 0;
    local_60 = 0;
    cVar6 = FUN_140d79f00(param_2[0x8f],&local_48,1,0,&local_68);
    if (cVar6 == '\0') {
      FUN_140d938f0(param_2[0x8f],&local_48);
    }
    else if (1 < (int)local_60) {
      (**(code **)(*param_1 + 8))(param_1,local_38,&local_68,lVar8);
      cVar6 = FText::IsEmpty(local_38);
      if (cVar6 == '\0') {
        cVar6 = '\0';
        UWorld::GetPlayerControllerIterator(lVar8,&local_58);
        while( true ) {
          if ((local_50 < 0) || (*(int *)(local_58 + 8) <= local_50)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) break;
          lVar8 = FWeakObjectPtr::Get();
          if (lVar8 != 0) {
            lVar9 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((bVar5) && (cVar7 = FUN_140d6ef90(param_1,lVar8,param_2,param_3), cVar7 != '\0')) {
              cVar6 = (**(code **)(*param_1 + 0x40))(param_1,lVar8,param_2,&local_68,local_38);
            }
          }
          local_50 = local_50 + 1;
        }
        if (cVar6 != '\0') {
          lVar8 = FUN_140bb7220(param_2);
          *(undefined4 *)(lVar8 + 0xc0) = 0;
        }
      }
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
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    plVar1 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_40)(local_40);
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
  }
  return;
}



// FUNCTION 140d70f60 FUN_140d70f60 body=343 status=ok
// SIG undefined FUN_140d70f60(void)

undefined8
FUN_140d70f60(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 local_res10 [8];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  uVar6 = 0;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x1428) != 0)) {
    FUN_140bbae80(param_3,local_48,*(undefined4 *)(param_1 + 0x7c));
    FText::FText(local_30);
    if (1 < *(int *)(param_4 + 8)) {
      cVar5 = FText::IsEmpty(param_5);
      if (cVar5 == '\0') {
        cVar5 = FText::IsEmpty(local_48);
        if (cVar5 == '\0') {
          FUN_1411daa60(*(undefined8 *)(param_2 + 0x1428),local_res10,param_4,
                        *(undefined4 *)(param_1 + 0x78),local_48,param_5,local_30);
          uVar6 = 1;
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
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
    return uVar6;
  }
  return 0;
}



// FUNCTION 140d710c0 FUN_140d710c0 body=1011 status=ok
// SIG undefined FUN_140d710c0(void)

undefined8
FUN_140d710c0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 local_128 [8];
  longlong local_120;
  undefined1 local_108 [56];
  undefined1 local_d0 [56];
  wchar_t *local_98;
  uint local_90;
  int local_8c;
  ulonglong local_60;
  undefined1 local_48 [8];
  longlong *local_40;
  
  uVar16 = 0;
  if (((param_3 == 0) || (param_2 == (longlong *)0x0)) ||
     (lVar11 = FUN_140cff1b0(param_2), lVar11 == 0)) {
    return 0;
  }
  lVar11 = *(longlong *)(lVar11 + 0x5e8);
  uVar21 = 0;
  if (lVar11 != 0) {
    puVar19 = *(ulonglong **)(lVar11 + 0x510);
    puVar3 = puVar19 + *(int *)(lVar11 + 0x518);
    for (; puVar19 != puVar3; puVar19 = puVar19 + 1) {
      uVar20 = *puVar19;
      uVar12 = AUGWeapon_Hook::GetPrivateStaticClass();
      cVar7 = FUN_142eb4a30(uVar20,uVar12);
      if (cVar7 != '\0') {
        if (uVar20 != 0) {
          lVar11 = AUGWeapon_Hook::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(uVar20 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar20 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) goto LAB_140d711a3;
        }
        break;
      }
    }
  }
  uVar20 = uVar21;
LAB_140d711a3:
  if (uVar20 == 0) {
    return 0;
  }
  cVar7 = FText::IsEmpty(param_5);
  if (cVar7 != '\0') {
    return 0;
  }
  iVar17 = *(int *)(param_1 + 0x178);
  if (iVar17 == 0) {
    return 0;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
    iVar17 = *(int *)(param_1 + 0x178);
  }
  FUN_140bf9ed0(local_128,iVar17,*(longlong *)(DAT_146b33f38 + 0x88) + 0x30);
  uVar13 = FUN_141796df0(local_128);
  if (uVar13 == 0) {
LAB_140d7124c:
    uVar13 = uVar21;
  }
  else {
    lVar11 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(uVar13 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140d7124c;
  }
  uVar12 = FUN_142e035e0();
  lVar11 = (**(code **)(*param_2 + 0x628))(param_2,uVar12);
  if (lVar11 == 0) goto LAB_140d71462;
  uVar18 = uVar21;
  if (uVar13 != 0) {
    uVar14 = FUN_142dfdfe0();
    uVar15 = uVar13;
    do {
      uVar18 = uVar13;
      if (uVar15 == uVar14) break;
      uVar15 = *(ulonglong *)(uVar15 + 0x30);
      uVar18 = uVar21;
    } while (uVar15 != 0);
  }
  lVar11 = FUN_142dcdc10(lVar11,uVar18);
  if (lVar11 == 0) goto LAB_140d71462;
  cVar7 = '\0';
  if (*(char *)(lVar11 + 0x8a) != '\0') goto LAB_140d71462;
  if (*(char *)(param_1 + 0x58) == '\f') {
    cVar8 = *(char *)(lVar11 + 0x8d);
    cVar7 = '\x01';
LAB_140d712e2:
    if (cVar8 == '\0') goto LAB_140d71462;
  }
  else if (*(char *)(param_1 + 0x58) == '\v') {
    cVar8 = *(char *)(lVar11 + 0x8c);
    cVar7 = '\0';
    goto LAB_140d712e2;
  }
  FUN_140d647e0(local_108);
  local_60 = uVar13;
  uVar16 = FText::FromString(local_48,param_4);
  FText::operator=(local_108,uVar16);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar17 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  FText::operator=(local_d0,param_5);
  if (local_98 != L"challenge") {
    local_90 = 0;
    uVar13 = uVar21;
    if (local_8c != 10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98,10);
      uVar13 = (ulonglong)local_90;
    }
    local_90 = (int)uVar13 + 10;
    if (local_8c < (int)local_90) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
    }
    builtin_wcsncpy(local_98,L"challenge",10);
  }
  uVar9 = FUN_142dce050(lVar11);
  if ((cVar7 != '\0') && (uVar9 == 0xffffffff)) {
    uVar9 = 1;
    *(undefined4 *)(param_1 + 0x17c) = 1;
  }
  uVar4 = *(uint *)(param_1 + 0x17c);
  if (-1 < (int)uVar4) {
    uVar10 = uVar9;
    if ((int)uVar4 < (int)uVar9) {
      uVar10 = uVar4;
    }
    uVar21 = (ulonglong)uVar10;
  }
  *(int *)(param_1 + 0x17c) = (int)uVar21;
  FUN_140f081e0(local_108,cVar7,*(char *)(lVar11 + 0x98) == '\0',uVar21,uVar9);
  FUN_140f0d490(uVar20,local_108);
  uVar16 = 1;
  FUN_140d65f50(local_108);
LAB_140d71462:
  if (local_120 != 0) {
    FMemory::Free();
  }
  return uVar16;
}



// FUNCTION 140d714c0 FUN_140d714c0 body=235 status=ok
// SIG undefined FUN_140d714c0(void)

ulonglong FUN_140d714c0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  byte bVar5;
  longlong *plVar6;
  
  bVar5 = 0;
  if ((param_2 != 0) && (lVar2 = FUN_140cff230(param_2), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x251) == '\x05') {
      plVar3 = (longlong *)param_1[0x2f];
      plVar6 = plVar3 + (longlong)(int)param_1[0x30] * 0x31;
      for (; plVar3 != plVar6; plVar3 = plVar3 + 0x31) {
        bVar1 = (**(code **)(*plVar3 + 0x40))(plVar3,param_2,param_3,param_4,param_5);
        bVar5 = bVar5 | bVar1;
      }
      return (ulonglong)bVar5;
    }
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x50))(param_1);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x40))(plVar3,param_2,param_3,param_4,param_5);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 140d715b0 FUN_140d715b0 body=583 status=ok
// SIG undefined FUN_140d715b0(void)

void FUN_140d715b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  longlong *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  if (((*(int *)(param_1 + 0x50) < 0) || (*(int *)(param_1 + 0x28) <= *(int *)(param_1 + 0x50))) ||
     (*(longlong *)(param_1 + 0x58) == 0)) {
    if (*(int *)(param_1 + 0x18) == 3) {
      return;
    }
    *(undefined4 *)(param_1 + 0x18) = 3;
    TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound(param_1 + 8,3);
    return;
  }
  FUN_1404d0c50(&local_28,*(undefined8 *)(param_1 + 0x78));
  plVar6 = local_28;
  if ((local_28 == (longlong *)0x0) ||
     (iVar2 = (**(code **)(*local_28 + 0x3a8))(local_28), iVar2 != 0)) {
    if (*(int *)(param_1 + 0x18) != 3) {
      *(undefined4 *)(param_1 + 0x18) = 3;
      TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound(param_1 + 8,3);
    }
    goto LAB_140d717ad;
  }
  if (*(int *)(param_1 + 0x18) != 1) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound(param_1 + 8,1);
  }
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = param_1;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FUN_140d8ba30;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x108))(plVar6,local_res8,&local_38);
  *(undefined8 *)(param_1 + 0x80) = *puVar5;
  if (local_30 == 0) {
LAB_140d7170e:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140d7170e;
  }
  local_18 = *(undefined8 *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x50);
  lVar4 = *(longlong *)(param_1 + 0x20);
  local_10 = *(longlong **)(param_1 + 0x60);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
    plVar6 = local_28;
  }
  (**(code **)(*plVar6 + 0x100))(plVar6,&local_18,(longlong)iVar2 * 0x10 + lVar4);
  plVar6 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
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
LAB_140d717ad:
  plVar6 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
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



// FUNCTION 140d71800 FUN_140d71800 body=826 status=ok
// SIG undefined FUN_140d71800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d71800(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 *local_140;
  undefined8 local_138;
  longlong *local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  longlong local_98;
  undefined8 local_90;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if (1 < *(int *)(param_3 + 8)) {
    plVar9 = *(longlong **)(param_1 + 0x48);
    plVar10 = plVar9 + (longlong)*(int *)(param_1 + 0x50) * 2;
    local_108 = param_3;
    for (; plVar9 != plVar10; plVar9 = plVar9 + 2) {
      cVar4 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,*(undefined8 *)*plVar9);
      if (cVar4 != '\0') {
        plVar10 = (longlong *)plVar9[1];
        lVar3 = *plVar9;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x10) = 2;
          lVar6 = FUN_142b45e90();
          local_130 = (longlong *)0x0;
          local_138 = 0;
          local_100 = *(undefined8 *)(lVar6 + 0x18);
          local_d0 = (longlong *)0x0;
          local_c8 = 0;
          local_c0 = 0;
          local_b8 = 0;
          local_b0 = 0;
          local_a8 = 0;
          local_a0 = 0;
          local_9c = 1;
          local_98 = 0;
          local_90 = 0;
          local_78 = 0;
          local_70 = 0;
          local_68 = 0xffffffff;
          local_64 = 0;
          local_58 = 0;
          local_50 = 0;
          local_d8 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&local_d0,&local_130);
          plVar9 = local_130;
          if (local_130 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_130 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_130)(local_130);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_130 + 8))(local_130,1);
              }
            }
          }
          local_a0 = 1;
          local_c8 = CONCAT44(3,(undefined4)local_c8);
          local_118 = 0;
          local_110 = 0;
          local_128 = 0;
          local_120 = 0;
          local_f0 = 0;
          local_e8 = 0;
          puVar7 = (undefined8 *)operator_new(0x28,&local_f0);
          if (puVar7 != (undefined8 *)0x0) {
            puVar7[1] = param_1;
            *puVar7 = &DAT_143f3ed00;
            puVar7[2] = FUN_140d8b230;
            uVar8 = FDelegateHandle::GenerateNewID();
            puVar7[4] = uVar8;
            *puVar7 = &PTR_GetPoolName_143f3ed48;
          }
          local_140 = &local_f0;
          local_148 = &local_118;
          iVar5 = FUN_142b558f0(local_100,&local_d8,local_108,&local_128);
          if (local_128 != 0) {
            FMemory::Free();
          }
          if (local_118 != 0) {
            FMemory::Free();
          }
          if (iVar5 == 0) {
            local_f8 = param_2;
            FUN_140d60b10(param_1 + 0x48,&local_f8);
          }
          else {
            *(int *)(lVar3 + 0x14) = iVar5;
          }
          local_50 = 0;
          if (local_58 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Empty(&local_98,0);
          if (local_78 != 0) {
            FMemory::Free();
          }
          if (local_98 != 0) {
            FMemory::Free();
          }
          if (local_b0 != 0) {
            FMemory::Free();
          }
          if (local_c0 != 0) {
            FMemory::Free();
          }
          plVar9 = local_d0;
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_d0 + 1;
            lVar3 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_d0)(local_d0);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
        }
        if (plVar10 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar9 = plVar10 + 1;
        lVar3 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar3 != 1) {
          return;
        }
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 != 1) {
          return;
        }
        (**(code **)(*plVar10 + 8))(plVar10,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d71b40 FUN_140d71b40 body=1538 status=ok
// SIG undefined FUN_140d71b40(void)

void FUN_140d71b40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  undefined8 uVar10;
  undefined2 **ppuVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined2 *local_158;
  int local_150;
  longlong local_148;
  undefined8 local_140;
  undefined2 *local_138;
  undefined8 local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined **local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined2 *local_b0;
  int local_a8;
  longlong local_a0 [2];
  longlong local_90 [2];
  longlong local_80;
  longlong *local_78;
  longlong local_70 [2];
  longlong local_60 [5];
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    plVar4 = (longlong *)(param_2 + 0x98);
    local_128 = (float)DAT_1464aa744._2_1_ * 0.003921569;
    local_124 = (float)DAT_1464aa744._1_1_ * 0.003921569;
    local_120 = (float)(byte)DAT_1464aa744 * 0.003921569;
    local_11c = (float)DAT_1464aa744._3_1_ * 0.003921569;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_128);
    local_res10[0] = 0;
    local_148 = 0;
    local_140 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    FGenericPlatformString::Memcpy(local_148,L"Friend Crew Quarter",0x28);
    FUN_1428a6fb0(plVar4,&local_148,local_res10);
    if (local_148 != 0) {
      FMemory::Free();
    }
    local_118 = (float)DAT_1464aa748._2_1_ * 0.003921569;
    local_114 = (float)DAT_1464aa748._1_1_ * 0.003921569;
    local_110 = (float)(byte)DAT_1464aa748 * 0.003921569;
    local_10c = (float)DAT_1464aa748._3_1_ * 0.003921569;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_118);
    local_res18[0] = 0;
    FString::PrintfImpl(local_a0,L"ConnectedFriends (%d):",*(undefined4 *)(param_1 + 0x48));
    FUN_1428a6fb0(plVar4,local_a0,local_res18);
    if (local_a0[0] != 0) {
      FMemory::Free();
    }
    local_108 = (float)DAT_1464aa730._2_1_ * 0.003921569;
    local_104 = (float)DAT_1464aa730._1_1_ * 0.003921569;
    local_100 = (float)(byte)DAT_1464aa730 * 0.003921569;
    local_fc = (float)DAT_1464aa730._3_1_ * 0.003921569;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_108);
    plVar17 = *(longlong **)(param_1 + 0x40);
    plVar16 = plVar17 + (longlong)*(int *)(param_1 + 0x48) * 2;
    for (; plVar17 != plVar16; plVar17 = plVar17 + 2) {
      local_138 = (undefined2 *)0x0;
      local_130 = 0;
      local_d0 = *(undefined8 *)*plVar17;
      local_c8 = (longlong *)((undefined8 *)*plVar17)[1];
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
        UNLOCK();
      }
      cVar9 = FUN_140d79f00(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x478),&local_d0,1,0,
                            &local_138);
      plVar6 = local_c8;
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c8 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_c8)(local_c8);
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
      if (cVar9 == '\0') {
        local_c0 = *(undefined8 *)*plVar17;
        local_b8 = (longlong *)((undefined8 *)*plVar17)[1];
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
          UNLOCK();
        }
        FUN_140d938f0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x478),&local_c0);
        plVar6 = local_b8;
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_b8 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_b8)(local_b8);
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
      }
      local_158 = (undefined2 *)0x0;
      local_150 = 0;
      plVar6 = (longlong *)((undefined8 *)*plVar17)[1];
      uVar7 = *(undefined8 *)*plVar17;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      uVar10 = FUN_140bb7440(*(undefined8 *)(param_1 + 8));
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_f8 = &PTR_FUN_143f740c8;
      local_e0 = 0;
      local_d8 = 0;
      local_f0 = uVar7;
      local_e8 = plVar6;
      FUN_140d80730(uVar10,&local_80,&local_f8);
      if (local_e0 != 0) {
        FMemory::Free();
      }
      plVar1 = local_e8;
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_e8 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_e8 + 8))(local_e8,1);
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
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
      if (local_80 == 0) {
LAB_140d71fe3:
        puVar13 = &DAT_143f3eda8;
      }
      else {
        ppuVar11 = (undefined2 **)
                   (**(code **)(*(longlong *)(local_80 + 0x1f0) + 8))
                             ((longlong *)(local_80 + 0x1f0),local_70,*(undefined8 *)(param_1 + 8));
        if (&local_158 != ppuVar11) {
          local_158 = *ppuVar11;
          *ppuVar11 = (undefined2 *)0x0;
          local_150 = *(int *)(ppuVar11 + 1);
          ppuVar11[1] = (undefined2 *)0x0;
        }
        if (local_70[0] != 0) {
          FMemory::Free();
        }
        puVar13 = local_158;
        if (local_150 == 0) goto LAB_140d71fe3;
      }
      puVar12 = (undefined8 *)
                (**(code **)(**(longlong **)*plVar17 + 0x30))(*(longlong **)*plVar17,local_60);
      if (*(int *)(puVar12 + 1) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*puVar12;
      }
      FString::PrintfImpl(&local_b0,L"Id:%s",puVar14);
      if (local_60[0] != 0) {
        FMemory::Free();
      }
      puVar14 = &DAT_143f3eda8;
      if (local_a8 != 0) {
        puVar14 = local_b0;
      }
      puVar15 = &DAT_143f3eda8;
      if ((int)local_130 != 0) {
        puVar15 = local_138;
      }
      FString::PrintfImpl(local_90,L"  Friend:%s %s %s",puVar15,puVar14,puVar13);
      if (local_b0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_res20[0] = 0;
      FUN_1428a6fb0(plVar4,local_90,local_res20);
      if (local_90[0] != 0) {
        FMemory::Free();
      }
      plVar6 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_78 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_78)(local_78);
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
      if (local_158 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_138 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140d72150 FUN_140d72150 body=1538 status=ok
// SIG undefined FUN_140d72150(void)

void FUN_140d72150(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  undefined8 uVar10;
  undefined2 **ppuVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined2 *local_158;
  int local_150;
  longlong local_148;
  undefined8 local_140;
  undefined2 *local_138;
  undefined8 local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined **local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined2 *local_b0;
  int local_a8;
  longlong local_a0 [2];
  longlong local_90 [2];
  longlong local_80;
  longlong *local_78;
  longlong local_70 [2];
  longlong local_60 [5];
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    plVar4 = (longlong *)(param_2 + 0x98);
    local_128 = (float)DAT_1464aa744._2_1_ * 0.003921569;
    local_124 = (float)DAT_1464aa744._1_1_ * 0.003921569;
    local_120 = (float)(byte)DAT_1464aa744 * 0.003921569;
    local_11c = (float)DAT_1464aa744._3_1_ * 0.003921569;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_128);
    local_res10[0] = 0;
    local_148 = 0;
    local_140 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    FGenericPlatformString::Memcpy(local_148,L"Friend Loadout",0x1e);
    FUN_1428a6fb0(plVar4,&local_148,local_res10);
    if (local_148 != 0) {
      FMemory::Free();
    }
    local_118 = (float)DAT_1464aa748._2_1_ * 0.003921569;
    local_114 = (float)DAT_1464aa748._1_1_ * 0.003921569;
    local_110 = (float)(byte)DAT_1464aa748 * 0.003921569;
    local_10c = (float)DAT_1464aa748._3_1_ * 0.003921569;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_118);
    local_res18[0] = 0;
    FString::PrintfImpl(local_a0,L"ConnectedFriends (%d):",*(undefined4 *)(param_1 + 0x48));
    FUN_1428a6fb0(plVar4,local_a0,local_res18);
    if (local_a0[0] != 0) {
      FMemory::Free();
    }
    local_108 = (float)DAT_1464aa730._2_1_ * 0.003921569;
    local_104 = (float)DAT_1464aa730._1_1_ * 0.003921569;
    local_100 = (float)(byte)DAT_1464aa730 * 0.003921569;
    local_fc = (float)DAT_1464aa730._3_1_ * 0.003921569;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_108);
    plVar17 = *(longlong **)(param_1 + 0x40);
    plVar16 = plVar17 + (longlong)*(int *)(param_1 + 0x48) * 2;
    for (; plVar17 != plVar16; plVar17 = plVar17 + 2) {
      local_138 = (undefined2 *)0x0;
      local_130 = 0;
      local_d0 = *(undefined8 *)*plVar17;
      local_c8 = (longlong *)((undefined8 *)*plVar17)[1];
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
        UNLOCK();
      }
      cVar9 = FUN_140d79f00(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x478),&local_d0,1,0,
                            &local_138);
      plVar6 = local_c8;
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c8 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_c8)(local_c8);
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
      if (cVar9 == '\0') {
        local_c0 = *(undefined8 *)*plVar17;
        local_b8 = (longlong *)((undefined8 *)*plVar17)[1];
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
          UNLOCK();
        }
        FUN_140d938f0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x478),&local_c0);
        plVar6 = local_b8;
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_b8 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_b8)(local_b8);
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
      }
      local_158 = (undefined2 *)0x0;
      local_150 = 0;
      plVar6 = (longlong *)((undefined8 *)*plVar17)[1];
      uVar7 = *(undefined8 *)*plVar17;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      uVar10 = FUN_140bb7440(*(undefined8 *)(param_1 + 8));
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_f8 = &PTR_FUN_143f740c8;
      local_e0 = 0;
      local_d8 = 0;
      local_f0 = uVar7;
      local_e8 = plVar6;
      FUN_140d80730(uVar10,&local_80,&local_f8);
      if (local_e0 != 0) {
        FMemory::Free();
      }
      plVar1 = local_e8;
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_e8 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_e8 + 8))(local_e8,1);
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
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
      if (local_80 == 0) {
LAB_140d725f3:
        puVar13 = &DAT_143f3eda8;
      }
      else {
        ppuVar11 = (undefined2 **)
                   (**(code **)(*(longlong *)(local_80 + 0x90) + 8))
                             ((longlong *)(local_80 + 0x90),local_70,*(undefined8 *)(param_1 + 8));
        if (&local_158 != ppuVar11) {
          local_158 = *ppuVar11;
          *ppuVar11 = (undefined2 *)0x0;
          local_150 = *(int *)(ppuVar11 + 1);
          ppuVar11[1] = (undefined2 *)0x0;
        }
        if (local_70[0] != 0) {
          FMemory::Free();
        }
        puVar13 = local_158;
        if (local_150 == 0) goto LAB_140d725f3;
      }
      puVar12 = (undefined8 *)
                (**(code **)(**(longlong **)*plVar17 + 0x30))(*(longlong **)*plVar17,local_60);
      if (*(int *)(puVar12 + 1) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*puVar12;
      }
      FString::PrintfImpl(&local_b0,L"Id:%s",puVar14);
      if (local_60[0] != 0) {
        FMemory::Free();
      }
      puVar14 = &DAT_143f3eda8;
      if (local_a8 != 0) {
        puVar14 = local_b0;
      }
      puVar15 = &DAT_143f3eda8;
      if ((int)local_130 != 0) {
        puVar15 = local_138;
      }
      FString::PrintfImpl(local_90,L"  Friend:%s %s \n%s",puVar15,puVar14,puVar13);
      if (local_b0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_res20[0] = 0;
      FUN_1428a6fb0(plVar4,local_90,local_res20);
      if (local_90[0] != 0) {
        FMemory::Free();
      }
      plVar6 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_78 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_78)(local_78);
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
      if (local_158 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_138 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140d72760 FUN_140d72760 body=1538 status=ok
// SIG undefined FUN_140d72760(void)

void FUN_140d72760(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  undefined8 uVar10;
  undefined2 **ppuVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined2 *local_158;
  int local_150;
  longlong local_148;
  undefined8 local_140;
  undefined2 *local_138;
  undefined8 local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined **local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined2 *local_b0;
  int local_a8;
  longlong local_a0 [2];
  longlong local_90 [2];
  longlong local_80;
  longlong *local_78;
  longlong local_70 [2];
  longlong local_60 [5];
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    plVar4 = (longlong *)(param_2 + 0x98);
    local_128 = (float)DAT_1464aa744._2_1_ * 0.003921569;
    local_124 = (float)DAT_1464aa744._1_1_ * 0.003921569;
    local_120 = (float)(byte)DAT_1464aa744 * 0.003921569;
    local_11c = (float)DAT_1464aa744._3_1_ * 0.003921569;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_128);
    local_res10[0] = 0;
    local_148 = 0;
    local_140 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    FGenericPlatformString::Memcpy(local_148,L"Friend Skill Tree",0x24);
    FUN_1428a6fb0(plVar4,&local_148,local_res10);
    if (local_148 != 0) {
      FMemory::Free();
    }
    local_118 = (float)DAT_1464aa748._2_1_ * 0.003921569;
    local_114 = (float)DAT_1464aa748._1_1_ * 0.003921569;
    local_110 = (float)(byte)DAT_1464aa748 * 0.003921569;
    local_10c = (float)DAT_1464aa748._3_1_ * 0.003921569;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_118);
    local_res18[0] = 0;
    FString::PrintfImpl(local_a0,L"ConnectedFriends (%d):",*(undefined4 *)(param_1 + 0x48));
    FUN_1428a6fb0(plVar4,local_a0,local_res18);
    if (local_a0[0] != 0) {
      FMemory::Free();
    }
    local_108 = (float)DAT_1464aa730._2_1_ * 0.003921569;
    local_104 = (float)DAT_1464aa730._1_1_ * 0.003921569;
    local_100 = (float)(byte)DAT_1464aa730 * 0.003921569;
    local_fc = (float)DAT_1464aa730._3_1_ * 0.003921569;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_108);
    plVar17 = *(longlong **)(param_1 + 0x40);
    plVar16 = plVar17 + (longlong)*(int *)(param_1 + 0x48) * 2;
    for (; plVar17 != plVar16; plVar17 = plVar17 + 2) {
      local_138 = (undefined2 *)0x0;
      local_130 = 0;
      local_d0 = *(undefined8 *)*plVar17;
      local_c8 = (longlong *)((undefined8 *)*plVar17)[1];
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
        UNLOCK();
      }
      cVar9 = FUN_140d79f00(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x478),&local_d0,1,0,
                            &local_138);
      plVar6 = local_c8;
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c8 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_c8)(local_c8);
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
      if (cVar9 == '\0') {
        local_c0 = *(undefined8 *)*plVar17;
        local_b8 = (longlong *)((undefined8 *)*plVar17)[1];
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
          UNLOCK();
        }
        FUN_140d938f0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x478),&local_c0);
        plVar6 = local_b8;
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_b8 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_b8)(local_b8);
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
      }
      local_158 = (undefined2 *)0x0;
      local_150 = 0;
      plVar6 = (longlong *)((undefined8 *)*plVar17)[1];
      uVar7 = *(undefined8 *)*plVar17;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      uVar10 = FUN_140bb7440(*(undefined8 *)(param_1 + 8));
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_f8 = &PTR_FUN_143f740c8;
      local_e0 = 0;
      local_d8 = 0;
      local_f0 = uVar7;
      local_e8 = plVar6;
      FUN_140d80730(uVar10,&local_80,&local_f8);
      if (local_e0 != 0) {
        FMemory::Free();
      }
      plVar1 = local_e8;
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_e8 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_e8 + 8))(local_e8,1);
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
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
      if (local_80 == 0) {
LAB_140d72c03:
        puVar13 = &DAT_143f3eda8;
      }
      else {
        ppuVar11 = (undefined2 **)
                   (**(code **)(*(longlong *)(local_80 + 0x1a8) + 8))
                             ((longlong *)(local_80 + 0x1a8),local_70,*(undefined8 *)(param_1 + 8));
        if (&local_158 != ppuVar11) {
          local_158 = *ppuVar11;
          *ppuVar11 = (undefined2 *)0x0;
          local_150 = *(int *)(ppuVar11 + 1);
          ppuVar11[1] = (undefined2 *)0x0;
        }
        if (local_70[0] != 0) {
          FMemory::Free();
        }
        puVar13 = local_158;
        if (local_150 == 0) goto LAB_140d72c03;
      }
      puVar12 = (undefined8 *)
                (**(code **)(**(longlong **)*plVar17 + 0x30))(*(longlong **)*plVar17,local_60);
      if (*(int *)(puVar12 + 1) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*puVar12;
      }
      FString::PrintfImpl(&local_b0,L"Id:%s",puVar14);
      if (local_60[0] != 0) {
        FMemory::Free();
      }
      puVar14 = &DAT_143f3eda8;
      if (local_a8 != 0) {
        puVar14 = local_b0;
      }
      puVar15 = &DAT_143f3eda8;
      if ((int)local_130 != 0) {
        puVar15 = local_138;
      }
      FString::PrintfImpl(local_90,L"  Friend:%s %s %s",puVar15,puVar14,puVar13);
      if (local_b0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_res20[0] = 0;
      FUN_1428a6fb0(plVar4,local_90,local_res20);
      if (local_90[0] != 0) {
        FMemory::Free();
      }
      plVar6 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_78 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_78)(local_78);
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
      if (local_158 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_138 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140d72d70 FUN_140d72d70 body=4462 status=ok
// SIG undefined FUN_140d72d70(void)

void FUN_140d72d70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *_Dst;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  void *_Src;
  char cVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  longlong lVar23;
  undefined8 *puVar24;
  wchar_t *pwVar25;
  undefined2 *puVar26;
  undefined2 *puVar27;
  longlong *plVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 in_stack_fffffffffffffc98;
  undefined2 **ppuVar34;
  ulonglong local_350;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  longlong local_330;
  int local_328;
  int local_324;
  longlong local_320;
  undefined4 local_318;
  longlong local_310;
  undefined8 local_308;
  longlong local_300;
  undefined8 local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  undefined2 *local_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  undefined2 *local_2b0;
  int local_2a8;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  longlong local_290;
  undefined8 local_288;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  undefined **local_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  ulonglong local_1d8;
  LARGE_INTEGER local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  void *local_1a8;
  int local_1a0;
  longlong local_198 [2];
  longlong local_188 [2];
  undefined8 local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  longlong local_158 [2];
  longlong local_148 [2];
  longlong local_138 [2];
  longlong local_128 [2];
  longlong local_118 [2];
  longlong local_108 [2];
  longlong local_f8 [2];
  longlong local_e8 [2];
  longlong local_d8 [2];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  longlong local_a8 [2];
  undefined1 local_98 [8];
  longlong *local_90;
  longlong local_88 [9];
  
  uVar32 = (undefined4)((ulonglong)in_stack_fffffffffffffc98 >> 0x20);
  if (param_2 != 0) {
    bVar8 = false;
    local_res10[0] = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      plVar4 = (longlong *)(param_2 + 0x98);
      local_280 = (float)DAT_1464aa744._2_1_ * 0.003921569;
      local_27c = (float)DAT_1464aa744._1_1_ * 0.003921569;
      local_278 = (float)(byte)DAT_1464aa744 * 0.003921569;
      local_274 = (float)DAT_1464aa744._3_1_ * 0.003921569;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_280);
      local_res10[0] = 0;
      local_300 = 0;
      local_2f8 = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_300,0);
      FGenericPlatformString::Memcpy(local_300,L"Friend Status",0x1c);
      FUN_1428a6fb0(plVar4,&local_300,local_res10);
      if (local_300 != 0) {
        FMemory::Free();
      }
      local_270 = (float)DAT_1464aa748._2_1_ * 0.003921569;
      local_26c = (float)DAT_1464aa748._1_1_ * 0.003921569;
      local_268 = (float)(byte)DAT_1464aa748 * 0.003921569;
      local_264 = (float)DAT_1464aa748._3_1_ * 0.003921569;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_270);
      local_res18[0] = 0;
      local_2f0 = 0;
      local_2e8 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f0,0);
      FGenericPlatformString::Memcpy(local_2f0,L"Pending Connect:",0x22);
      FUN_1428a6fb0(plVar4,&local_2f0,local_res18);
      if (local_2f0 != 0) {
        FMemory::Free();
      }
      local_260 = (float)DAT_1464aa730._2_1_ * 0.003921569;
      local_25c = (float)DAT_1464aa730._1_1_ * 0.003921569;
      local_258 = (float)(byte)DAT_1464aa730 * 0.003921569;
      local_254 = (float)DAT_1464aa730._3_1_ * 0.003921569;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_260);
      plVar19 = *(longlong **)(param_1 + 0x70);
      local_res20[0] = 0;
      if (plVar19 == (longlong *)0x0) {
        pwVar25 = L"None";
      }
      else {
        puVar15 = (undefined8 *)(**(code **)(*plVar19 + 0x30))(plVar19,local_108);
        if (*(int *)(puVar15 + 1) == 0) {
          pwVar25 = L"";
          bVar8 = true;
        }
        else {
          pwVar25 = (wchar_t *)*puVar15;
          bVar8 = true;
        }
      }
      puVar15 = (undefined8 *)FName::ToString(param_1 + 0x80,local_118);
      if (*(int *)(puVar15 + 1) == 0) {
        puVar27 = &DAT_143f3eda8;
      }
      else {
        puVar27 = (undefined2 *)*puVar15;
      }
      FString::PrintfImpl(local_198,L"  Beacon:%s, Friend:%s",puVar27,pwVar25);
      FUN_1428a6fb0(plVar4,local_198,local_res20);
      if (local_198[0] != 0) {
        FMemory::Free();
      }
      if (local_118[0] != 0) {
        FMemory::Free();
      }
      if ((bVar8) && (local_108[0] != 0)) {
        FMemory::Free();
      }
      bVar8 = false;
      local_250 = (float)DAT_1464aa748._2_1_ * 0.003921569;
      local_24c = (float)DAT_1464aa748._1_1_ * 0.003921569;
      local_248 = (float)(byte)DAT_1464aa748 * 0.003921569;
      local_244 = (float)DAT_1464aa748._3_1_ * 0.003921569;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_250);
      local_348 = 0;
      FString::PrintfImpl(local_188,L"ConnectedFriends (%d):",*(undefined4 *)(param_1 + 0x48));
      FUN_1428a6fb0(plVar4,local_188,&local_348);
      if (local_188[0] != 0) {
        FMemory::Free();
      }
      local_240 = (float)DAT_1464aa730._2_1_ * 0.003921569;
      local_23c = (float)DAT_1464aa730._1_1_ * 0.003921569;
      local_238 = (float)(byte)DAT_1464aa730 * 0.003921569;
      local_234 = (float)DAT_1464aa730._3_1_ * 0.003921569;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_240);
      plVar19 = *(longlong **)(param_1 + 0x40);
      plVar28 = plVar19 + (longlong)*(int *)(param_1 + 0x48) * 2;
      for (; plVar19 != plVar28; plVar19 = plVar19 + 2) {
        local_2e0 = (undefined2 *)0x0;
        local_2d8 = 0;
        local_1c8 = *(undefined8 *)*plVar19;
        local_1c0 = (longlong *)((undefined8 *)*plVar19)[1];
        if (local_1c0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
          UNLOCK();
        }
        ppuVar34 = &local_2e0;
        cVar13 = FUN_140d79f00(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x478),&local_1c8,1,0,
                               ppuVar34);
        plVar17 = local_1c0;
        uVar32 = (undefined4)((ulonglong)ppuVar34 >> 0x20);
        if (local_1c0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_1c0 + 1;
          lVar18 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*local_1c0)(local_1c0);
            LOCK();
            piVar2 = (int *)((longlong)plVar17 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
        }
        if (cVar13 == '\0') {
          local_1b8 = *(undefined8 *)*plVar19;
          local_1b0 = (longlong *)((undefined8 *)*plVar19)[1];
          if (local_1b0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
            UNLOCK();
          }
          FUN_140d938f0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x478),&local_1b8);
          plVar17 = local_1b0;
          if (local_1b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_1b0 + 1;
            lVar18 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*local_1b0)(local_1b0);
              LOCK();
              piVar2 = (int *)((longlong)plVar17 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar17 + 8))(plVar17,1);
              }
            }
          }
        }
        local_320 = 0;
        local_318 = 0;
        plVar17 = (longlong *)((undefined8 *)*plVar19)[1];
        uVar6 = *(undefined8 *)*plVar19;
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          UNLOCK();
        }
        uVar16 = FUN_140bb7440(*(undefined8 *)(param_1 + 8));
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          UNLOCK();
        }
        local_200 = &PTR_FUN_143f740c8;
        local_1e8 = 0;
        local_1e0 = 0;
        local_1f8 = uVar6;
        local_1f0 = plVar17;
        FUN_140d80730(uVar16,&local_168,&local_200);
        if (local_1e8 != 0) {
          FMemory::Free();
        }
        plVar1 = local_1f0;
        if (local_1f0 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_1f0 + 1;
          lVar18 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*local_1f0)(local_1f0);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_1f0 + 8))(local_1f0,1);
            }
          }
        }
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar17 + 1;
          lVar18 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar2 = (int *)((longlong)plVar17 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
        }
        if (local_168 != (longlong *)0x0) {
          plVar17 = (longlong *)
                    (**(code **)(*local_168 + 8))(local_168,local_f8,*(undefined8 *)(param_1 + 8));
          if (&local_320 != plVar17) {
            local_320 = *plVar17;
            *plVar17 = 0;
            local_318 = (undefined4)plVar17[1];
            plVar17[1] = 0;
          }
          if (local_f8[0] != 0) {
            FMemory::Free();
          }
        }
        puVar27 = &DAT_143f3eda8;
        if ((int)local_2d8 != 0) {
          puVar27 = local_2e0;
        }
        FString::PrintfImpl(&local_330,L"  Friend:%s %s",puVar27);
        plVar17 = (longlong *)((undefined8 *)*plVar19)[1];
        local_178 = *(undefined8 *)*plVar19;
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          UNLOCK();
        }
        local_170 = plVar17;
        lVar18 = FUN_140d79450(param_1,&local_178);
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar17 + 1;
          lVar23 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar23 == 1) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar2 = (int *)((longlong)plVar17 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
          LOCK();
          plVar1 = plVar17 + 1;
          lVar23 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar23 == 1) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar2 = (int *)((longlong)plVar17 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
        }
        if (lVar18 != 0) {
          if (0 < *(int *)(lVar18 + 0x68)) {
            bVar8 = true;
            FUniqueNetIdWrapper::ToString(*(longlong *)(lVar18 + 0x60) + 8,local_e8);
          }
          cVar13 = UMoviePipelineDeferredPassBase::IsAlphaInTonemapperRequiredImpl(lVar18);
          if (cVar13 == '\0') {
            pwVar25 = L"Invalid";
          }
          else if (cVar13 == '\x01') {
            pwVar25 = L"Closed";
          }
          else if (cVar13 == '\x02') {
            pwVar25 = L"Pending";
          }
          else if (cVar13 == '\x03') {
            pwVar25 = L"Open";
          }
          else {
            pwVar25 = L"";
          }
          FString::PrintfImpl(&local_1a8,L" - BeaconState:%s (Host:%s)",pwVar25);
          _Src = local_1a8;
          iVar5 = local_328;
          if (local_1a0 == 0) {
            iVar22 = 0;
          }
          else {
            iVar22 = local_1a0 + -1;
          }
          if (iVar22 != 0) {
            lVar18 = (longlong)local_328;
            local_328 = (uint)(local_328 == 0) + iVar22 + local_328;
            if (local_324 < local_328) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_330,iVar5);
            }
            _Dst = (void *)(local_330 + (lVar18 - (ulonglong)(iVar5 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar22 * 2);
            *(undefined2 *)((longlong)_Dst + (longlong)iVar22 * 2) = 0;
          }
          if (local_1a8 != (void *)0x0) {
            FMemory::Free(local_1a8);
          }
          if ((bVar8) && (bVar8 = false, local_e8[0] != 0)) {
            FMemory::Free();
          }
        }
        local_344 = 0;
        FUN_1428a6fb0(plVar4,&local_330,&local_344);
        if (local_330 != 0) {
          FMemory::Free();
        }
        plVar17 = local_160;
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_160 + 1;
          lVar18 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar2 = (int *)((longlong)plVar17 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
        }
        if (local_320 != 0) {
          FMemory::Free();
        }
        if (local_2e0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      bVar9 = false;
      bVar8 = false;
      lVar18 = FUN_140d82cf0(param_1);
      if (lVar18 != 0) {
        local_230 = (float)DAT_1464aa748._2_1_ * 0.003921569;
        local_22c = (float)DAT_1464aa748._1_1_ * 0.003921569;
        local_224 = (float)DAT_1464aa748._3_1_ * 0.003921569;
        local_228 = (float)(byte)DAT_1464aa748 * 0.003921569;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_230);
        uVar33 = *(undefined4 *)(lVar18 + 0x68);
        local_340 = 0;
        if (*(int *)(lVar18 + 0x50) == 0) {
          pwVar25 = L"AllowRequests";
        }
        else if (*(int *)(lVar18 + 0x50) == 1) {
          pwVar25 = L"DenyRequests";
        }
        else {
          pwVar25 = L"";
        }
        uVar14 = FUN_1404cfb00(lVar18);
        FString::PrintfImpl(local_158,L"HostFriendBeacon (State:%s, Parties:%d, Players:%d):",
                            pwVar25,uVar33,CONCAT44(uVar32,uVar14));
        FUN_1428a6fb0(plVar4,local_158,&local_340);
        if (local_158[0] != 0) {
          FMemory::Free();
        }
        local_220 = (float)DAT_1464aa730._2_1_ * 0.003921569;
        local_21c = (float)DAT_1464aa730._1_1_ * 0.003921569;
        local_218 = (float)(byte)DAT_1464aa730 * 0.003921569;
        local_214 = (float)DAT_1464aa730._3_1_ * 0.003921569;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_220);
        uVar30 = *(ulonglong *)(lVar18 + 0x60);
        uVar29 = (longlong)*(int *)(lVar18 + 0x68) * 0x40 + uVar30;
        local_350 = uVar30;
        local_1d8 = uVar29;
        if (uVar30 != uVar29) {
          do {
            local_33c = 0;
            local_350 = uVar30;
            if ((*(longlong **)(uVar30 + 0x10) == (longlong *)0x0) ||
               (cVar13 = (**(code **)(**(longlong **)(uVar30 + 0x10) + 0x20))(), cVar13 == '\0')) {
              local_2c8 = 8;
              local_2d0 = 0;
              bVar8 = true;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d0,0);
              FGenericPlatformString::Memcpy(local_2d0,L"INVALID",0x10);
              plVar19 = &local_2d0;
            }
            else {
              bVar9 = true;
              plVar19 = (longlong *)
                        (**(code **)(**(longlong **)(uVar30 + 0x10) + 0x28))
                                  (*(longlong **)(uVar30 + 0x10),local_88);
            }
            puVar27 = (undefined2 *)*plVar19;
            *plVar19 = 0;
            lVar18 = plVar19[1];
            plVar19[1] = 0;
            if ((bVar8) && (bVar8 = false, local_2d0 != 0)) {
              FMemory::Free();
            }
            if ((bVar9) && (bVar9 = false, local_88[0] != 0)) {
              FMemory::Free();
            }
            puVar26 = &DAT_143f3eda8;
            if ((int)lVar18 != 0) {
              puVar26 = puVar27;
            }
            FString::PrintfImpl(local_148,L"  Host:%s",puVar26);
            FUN_1428a6fb0(plVar4,local_148,&local_33c);
            if (local_148[0] != 0) {
              FMemory::Free();
            }
            if (puVar27 != (undefined2 *)0x0) {
              FMemory::Free(puVar27);
            }
            lVar23 = *(longlong *)(uVar30 + 0x30);
            lVar18 = lVar23 + (longlong)*(int *)(uVar30 + 0x38) * 0x28;
            for (; lVar23 != lVar18; lVar23 = lVar23 + 0x28) {
              local_338 = 0;
              if ((*(longlong **)(lVar23 + 8) == (longlong *)0x0) ||
                 (cVar13 = (**(code **)(**(longlong **)(lVar23 + 8) + 0x20))(), cVar13 == '\0')) {
                local_2c0 = 0;
                local_2b8 = 8;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c0,0);
                FGenericPlatformString::Memcpy(local_2c0,L"INVALID",0x10);
                plVar19 = &local_2c0;
                bVar11 = false;
                bVar10 = true;
              }
              else {
                plVar19 = (longlong *)
                          (**(code **)(**(longlong **)(lVar23 + 8) + 0x28))
                                    (*(longlong **)(lVar23 + 8),local_d8);
                bVar11 = true;
                bVar10 = false;
              }
              puVar27 = (undefined2 *)*plVar19;
              *plVar19 = 0;
              lVar12 = plVar19[1];
              plVar19[1] = 0;
              if ((bVar10) && (local_2c0 != 0)) {
                FMemory::Free();
              }
              if ((bVar11) && (local_d8[0] != 0)) {
                FMemory::Free();
              }
              puVar26 = &DAT_143f3eda8;
              if ((int)lVar12 != 0) {
                puVar26 = puVar27;
              }
              FString::PrintfImpl(local_128,L"    AdditionalPlayer:%s",puVar26);
              FUN_1428a6fb0(plVar4,local_128,&local_338);
              if (local_128[0] != 0) {
                FMemory::Free();
              }
              if (puVar27 != (undefined2 *)0x0) {
                FMemory::Free(puVar27);
              }
              uVar29 = local_1d8;
              uVar30 = local_350;
            }
            uVar30 = uVar30 + 0x40;
            local_350 = uVar30;
          } while (uVar30 != uVar29);
        }
      }
      QueryPerformanceCounter(&local_1d0);
      dVar7 = (double)local_1d0.QuadPart * DAT_1468b02f8;
      local_210 = (float)DAT_1464aa748._2_1_ * 0.003921569;
      local_20c = (float)DAT_1464aa748._1_1_ * 0.003921569;
      local_208 = (float)(byte)DAT_1464aa748 * 0.003921569;
      local_204 = (float)DAT_1464aa748._3_1_ * 0.003921569;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_210);
      local_350 = local_350 & 0xffffffff00000000;
      local_310 = 0;
      local_308 = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_310,0);
      FGenericPlatformString::Memcpy(local_310,L"Recent Disconnects:",0x28);
      FUN_1428a6fb0(plVar4,&local_310,&local_350);
      if (local_310 != 0) {
        FMemory::Free();
      }
      local_2a0 = (float)DAT_1464aa730._2_1_ * 0.003921569;
      local_29c = (float)DAT_1464aa730._1_1_ * 0.003921569;
      local_298 = (float)(byte)DAT_1464aa730 * 0.003921569;
      local_294 = (float)DAT_1464aa730._3_1_ * 0.003921569;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_2a0);
      puVar15 = *(undefined8 **)(param_1 + 0x60);
      puVar31 = puVar15 + (longlong)*(int *)(param_1 + 0x68) * 2;
      for (; puVar15 != puVar31; puVar15 = puVar15 + 2) {
        cVar13 = FUN_140d89b30(param_1,puVar15);
        if (cVar13 != '\0') {
          local_290 = 0;
          local_288 = 0;
          (**(code **)(*(longlong *)*puVar15 + 0x18))((longlong *)*puVar15,&local_2b0,&local_290);
          if (local_290 != 0) {
            FMemory::Free();
          }
          if (local_2a8 < 2) {
            uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x478);
            uVar16 = (**(code **)(*(longlong *)*puVar15 + 8))((longlong *)*puVar15,local_c8);
            FUN_140d79f00(uVar6,uVar16,1,0,&local_2b0);
            plVar19 = local_c0;
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              plVar28 = local_c0 + 1;
              lVar18 = *plVar28;
              *(int *)plVar28 = (int)*plVar28 + -1;
              UNLOCK();
              if ((int)lVar18 == 1) {
                (**(code **)*local_c0)(local_c0);
                LOCK();
                piVar2 = (int *)((longlong)plVar19 + 0xc);
                iVar5 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar19 + 8))(plVar19,1);
                }
              }
            }
          }
          uVar32 = 0;
          uVar33 = 0;
          puVar20 = (undefined8 *)
                    (**(code **)(*(longlong *)*puVar15 + 8))((longlong *)*puVar15,local_b8);
          puVar24 = *(undefined8 **)(param_1 + 0x50);
          puVar21 = puVar24 + (longlong)*(int *)(param_1 + 0x58) * 3;
          for (; puVar24 != puVar21; puVar24 = puVar24 + 3) {
            if ((puVar24[1] != 0) &&
               (cVar13 = (*(code *)**(undefined8 **)*puVar20)(), cVar13 != '\0')) {
              uVar32 = (undefined4)*puVar24;
              uVar33 = (undefined4)((ulonglong)*puVar24 >> 0x20);
              break;
            }
          }
          plVar19 = local_b0;
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar28 = local_b0 + 1;
            lVar18 = *plVar28;
            *(int *)plVar28 = (int)*plVar28 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*local_b0)(local_b0);
              LOCK();
              piVar2 = (int *)((longlong)plVar19 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar19 + 8))(plVar19,1);
              }
            }
          }
          local_334 = 0;
          puVar21 = (undefined8 *)
                    (**(code **)(*(longlong *)*puVar15 + 8))((longlong *)*puVar15,local_98);
          puVar21 = (undefined8 *)
                    (**(code **)(*(longlong *)*puVar21 + 0x30))((longlong *)*puVar21,local_a8);
          if (*(int *)(puVar21 + 1) == 0) {
            puVar27 = &DAT_143f3eda8;
          }
          else {
            puVar27 = (undefined2 *)*puVar21;
          }
          puVar26 = &DAT_143f3eda8;
          if (local_2a8 != 0) {
            puVar26 = local_2b0;
          }
          FString::PrintfImpl(local_138,L"  %s (%s) %fs",puVar26,puVar27,
                              (dVar7 + 16777216.0) - (double)CONCAT44(uVar33,uVar32));
          FUN_1428a6fb0(plVar4,local_138,&local_334);
          if (local_138[0] != 0) {
            FMemory::Free();
          }
          if (local_a8[0] != 0) {
            FMemory::Free();
          }
          plVar19 = local_90;
          if (local_90 != (longlong *)0x0) {
            LOCK();
            plVar28 = local_90 + 1;
            lVar18 = *plVar28;
            *(int *)plVar28 = (int)*plVar28 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*local_90)(local_90);
              LOCK();
              piVar2 = (int *)((longlong)plVar19 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar19 + 8))(plVar19,1);
              }
            }
          }
          if (local_2b0 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140d73ef0 FUN_140d73ef0 body=163 status=ok
// SIG undefined FUN_140d73ef0(void)

void FUN_140d73ef0(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = *param_1 + 0xa8;
    do {
      if (*(longlong *)(lVar1 + 0xc0) != 0) {
        FMemory::Free();
      }
      FUN_140d64c40(lVar1);
      if (*(longlong *)(lVar1 + -0x20) != 0) {
        FMemory::Free();
      }
      FUN_1404bf980(lVar1 + -0x78);
      FUN_1404bf980(lVar1 + -0xa0);
      lVar1 = lVar1 + 0x188;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<392,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 140d73fa0 FUN_140d73fa0 body=117 status=ok
// SIG undefined FUN_140d73fa0(void)

void FUN_140d73fa0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_140bb0060();
  cVar1 = FUN_140d6f760(param_1,param_2);
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



// FUNCTION 140d74020 FUN_140d74020 body=117 status=ok
// SIG undefined FUN_140d74020(void)

void FUN_140d74020(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_140bb0250();
  cVar1 = FUN_140d6f810(param_1,param_2);
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



// FUNCTION 140d740a0 FUN_140d740a0 body=500 status=ok
// SIG undefined FUN_140d740a0(void)

void FUN_140d740a0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint local_68;
  uint uStack_64;
  int iStack_54;
  uint uStack_50;
  uint local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  uint uStack_28;
  
  iVar2 = (int)param_1[5];
  uVar9 = 0;
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  uStack_50 = 0;
  if (iVar2 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar5 = *puVar11;
    uVar10 = uVar9;
    uVar7 = uVar9;
    while (uVar5 == 0) {
      iVar4 = (int)uVar10;
      uStack_50 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uStack_50;
      local_68 = iVar4 + 1;
      uVar10 = (ulonglong)local_68;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140d74162;
      uVar5 = puVar11[(longlong)iVar4 + 1];
    }
    uStack_64 = -uVar5 & uVar5;
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
    iStack_54 = (uStack_50 - iVar4) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_140d74162:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  uStack_28 = uStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar8 = (longlong)iStack_2c * 0x40 + *param_1;
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar8 + 0x28);
      FUN_1404bf980(lVar8);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  cVar3 = FUN_140d29bf0(param_1,param_2,1);
  if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
    uVar10 = (ulonglong)*(uint *)(param_1 + 9);
    do {
      uVar7 = (longlong)(int)param_1[9] - 1U & uVar9;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      uVar9 = uVar9 + 1;
      *(undefined4 *)((longlong)plVar6 + uVar7 * 4) = 0xffffffff;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



// FUNCTION 140d742a0 FUN_140d742a0 body=485 status=ok
// SIG undefined FUN_140d742a0(void)

void FUN_140d742a0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint local_58;
  uint uStack_54;
  int iStack_44;
  uint uStack_40;
  uint local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  uint uStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uVar8 = 0;
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  uStack_40 = 0;
  if (iVar2 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar5 = *puVar10;
    uVar9 = uVar8;
    uVar6 = uVar8;
    while (uVar5 == 0) {
      iVar4 = (int)uVar9;
      uStack_40 = (int)uVar6 + 0x20;
      uVar6 = (ulonglong)uStack_40;
      local_58 = iVar4 + 1;
      uVar9 = (ulonglong)local_58;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140d74371;
      uVar5 = puVar10[(longlong)iVar4 + 1];
    }
    uStack_54 = -uVar5 & uVar5;
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
    iStack_44 = (uStack_40 - iVar4) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_140d74371:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  uStack_18 = uStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      FUN_140d23320((longlong)iStack_1c * 0x40 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  cVar3 = FUN_140d29bf0(param_1,param_2,1);
  if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
    uVar9 = (ulonglong)*(uint *)(param_1 + 9);
    do {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      uVar6 = (longlong)(int)param_1[9] - 1U & uVar8;
      uVar8 = uVar8 + 1;
      *(undefined4 *)((longlong)plVar7 + uVar6 * 4) = 0xffffffff;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}



// FUNCTION 140d74490 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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



// FUNCTION 140d74510 FUN_140d74510 body=117 status=ok
// SIG undefined FUN_140d74510(void)

void FUN_140d74510(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_140d74a50();
  cVar1 = FUN_140d6f970(param_1,param_2);
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



// FUNCTION 140d74590 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
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
  cVar1 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2,1);
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



// FUNCTION 140d74650 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FName,TArray<TSharedPtr<FRule,0>,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<FRule,0>,FDefaultAllocator>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FName,TArray<TSharedPtr<FRule,0>,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
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



// FUNCTION 140d746d0 FUN_140d746d0 body=485 status=ok
// SIG undefined FUN_140d746d0(void)

void FUN_140d746d0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint local_58;
  uint uStack_54;
  int iStack_44;
  uint uStack_40;
  uint local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  uint uStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uVar8 = 0;
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  uStack_40 = 0;
  if (iVar2 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar5 = *puVar10;
    uVar9 = uVar8;
    uVar7 = uVar8;
    while (uVar5 == 0) {
      iVar4 = (int)uVar9;
      uStack_40 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uStack_40;
      local_58 = iVar4 + 1;
      uVar9 = (ulonglong)local_58;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140d747a1;
      uVar5 = puVar10[(longlong)iVar4 + 1];
    }
    uStack_54 = -uVar5 & uVar5;
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
    iStack_44 = (uStack_40 - iVar4) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_140d747a1:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  uStack_18 = uStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>
                ((longlong)iStack_1c * 0x20 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  cVar3 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2,1);
  if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
    uVar9 = (ulonglong)*(uint *)(param_1 + 9);
    do {
      uVar7 = (longlong)(int)param_1[9] - 1U & uVar8;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      uVar8 = uVar8 + 1;
      *(undefined4 *)((longlong)plVar6 + uVar7 * 4) = 0xffffffff;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}



// FUNCTION 140d748c0 Empty body=396 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_140d74991;
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
LAB_140d74991:
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
      FCallPixelHandler_GameThread::~FCallPixelHandler_GameThread
                ((longlong)iStack_1c * 0x68 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
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



// FUNCTION 140d74a50 FUN_140d74a50 body=490 status=ok
// SIG undefined FUN_140d74a50(void)

void FUN_140d74a50(longlong *param_1,int param_2)

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
      if (bVar6) goto LAB_140d74b24;
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
LAB_140d74b24:
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
      lVar8 = (longlong)iStack_2c * 0x80 + *param_1;
      FUN_140d658c0(lVar8 + 0x10);
      plVar5 = *(longlong **)(lVar8 + 8);
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
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
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



// FUNCTION 140d74c40 Empty body=400 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,TArray<TSharedPtr<FRule,0>,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_140d74d11;
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
LAB_140d74d11:
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
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>
                ((longlong)iStack_1c * 0x20 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 140d74dd0 FUN_140d74dd0 body=312 status=ok
// SIG undefined FUN_140d74dd0(void)

void FUN_140d74dd0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 local_res10 [8];
  
  lVar2 = FUN_140d82cf0();
  if (lVar2 == 0) {
    FUN_140d703a0(param_1);
    lVar2 = FUN_140d82cf0(param_1);
    if (lVar2 == 0) {
      return;
    }
  }
  if (*(int *)(lVar2 + 0x50) == 1) {
    uVar6 = 0;
    *(undefined4 *)(lVar2 + 0x50) = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      plVar3 = (longlong *)FUN_140bb74b0();
      plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar4 != (longlong *)0x0) {
        plVar4[1] = param_1;
        *plVar4 = (longlong)&DAT_143f3ed00;
        plVar4[2] = (longlong)FUN_140d8bea0;
        lVar2 = FDelegateHandle::GenerateNewID();
        plVar4[4] = lVar2;
        *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
        puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res10);
        iVar1 = (int)plVar3[1];
        uVar6 = *puVar5;
        *(int *)(plVar3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar1);
        }
        puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar3);
        *puVar5 = plVar4;
        *(undefined4 *)(puVar5 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0xa8) = uVar6;
    }
    FUN_140d6fa20(param_1);
  }
  *(undefined1 *)(param_1 + 0xd8) = 1;
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0xe0,0);
  return;
}



// FUNCTION 140d74f10 FUN_140d74f10 body=112 status=ok
// SIG undefined FUN_140d74f10(void)

void FUN_140d74f10(undefined8 *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  if ((int)param_3 == 1) {
    FUN_140da3fd0(*param_1,param_1 + 1,param_3,3,0,0,*(undefined1 *)(param_1 + 3));
    FUN_140d5bb20(param_1 + 6,param_1,FUN_140d75070);
    FUN_140d78a40(param_1,4);
    return;
  }
  FUN_140d76f30(param_1,param_3 & 0xffffffff,param_6);
  return;
}



// FUNCTION 140d74f80 FUN_140d74f80 body=131 status=ok
// SIG undefined FUN_140d74f80(void)

void FUN_140d74f80(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  if (param_3 != 1) {
    FUN_140d76f30(param_1,param_3,param_6);
    return;
  }
  if (*(char *)(param_1 + 3) != '\0') {
    FUN_140d5bb20(param_1 + 6,param_1,FUN_140d74f10);
    FUN_140d78a40(param_1,3);
    return;
  }
  FUN_140da3fd0(*param_1,param_1 + 1,1,0,0,0,0);
  FUN_140d6a380(param_1);
  return;
}



// FUNCTION 140d75010 FUN_140d75010 body=87 status=ok
// SIG undefined FUN_140d75010(void)

void FUN_140d75010(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  if (param_3 == 1) {
    FUN_140da3fd0(*param_1,param_1 + 1,1,0,0,0,*(undefined1 *)(param_1 + 3));
    FUN_140d6a380(param_1);
    return;
  }
  FUN_140d76f30(param_1,param_3,param_6);
  return;
}



// FUNCTION 140d75070 FUN_140d75070 body=71 status=ok
// SIG undefined FUN_140d75070(void)

void FUN_140d75070(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  if (param_3 == 1) {
    FUN_140d5bb20(param_1 + 0x30,param_1,FUN_140d75010);
    FUN_140d78a40(param_1,5);
    return;
  }
  FUN_140d76f30(param_1,param_3,param_6);
  return;
}



// FUNCTION 140d750c0 FUN_140d750c0 body=408 status=ok
// SIG undefined FUN_140d750c0(void)

void FUN_140d750c0(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined **local_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined2 local_20;
  
  if (*(longlong **)(param_3 + 8) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))();
    if ((cVar2 != '\0') && (*(longlong **)(param_4 + 8) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(param_4 + 8) + 0x20))();
      if (cVar2 != '\0') {
        local_68 = 0;
        lStack_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        local_28 = 0;
        local_20 = 0;
        local_70 = &PTR_FUN_143f740c8;
        local_48 = &PTR_FUN_143f740c8;
        FUN_1404c0940(&local_70,param_3);
        FUN_1404c0940(&local_48,param_4);
        iVar1 = *(int *)(param_1 + 0x198);
        *(int *)(param_1 + 0x198) = iVar1 + 1;
        if (*(int *)(param_1 + 0x19c) < iVar1 + 1) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 400,iVar1);
        }
        puVar3 = (undefined4 *)((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 400));
        *puVar3 = param_2;
        *(undefined ***)(puVar3 + 2) = &PTR_FUN_143f73d18;
        *(undefined8 *)(puVar3 + 4) = local_68;
        *(longlong *)(puVar3 + 6) = lStack_60;
        if (lStack_60 != 0) {
          LOCK();
          *(int *)(lStack_60 + 8) = *(int *)(lStack_60 + 8) + 1;
          UNLOCK();
        }
        *(undefined ***)(puVar3 + 2) = &PTR_FUN_143f740c8;
        *(undefined8 *)(puVar3 + 8) = 0;
        *(undefined8 *)(puVar3 + 10) = 0;
        *(undefined ***)(puVar3 + 0xc) = &PTR_FUN_143f73d18;
        *(undefined8 *)(puVar3 + 0xe) = local_40;
        *(longlong *)(puVar3 + 0x10) = local_38;
        if (local_38 != 0) {
          LOCK();
          *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
          UNLOCK();
        }
        *(undefined ***)(puVar3 + 0xc) = &PTR_FUN_143f740c8;
        *(undefined8 *)(puVar3 + 0x12) = 0;
        *(undefined8 *)(puVar3 + 0x14) = 0;
        *(undefined1 *)(puVar3 + 0x16) = (undefined1)local_20;
        *(undefined1 *)((longlong)puVar3 + 0x59) = local_20._1_1_;
        FUN_1404bf980(&local_48);
        FUN_1404bf980(&local_70);
      }
    }
  }
  return;
}



// FUNCTION 140d75260 FUN_140d75260 body=409 status=ok
// SIG undefined FUN_140d75260(void)

void FUN_140d75260(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined **local_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined2 local_20;
  
  if (*(longlong **)(param_3 + 8) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))();
    if ((cVar2 != '\0') && (*(longlong **)(param_4 + 8) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(param_4 + 8) + 0x20))();
      if (cVar2 != '\0') {
        local_68 = 0;
        lStack_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        local_28 = 0;
        local_70 = &PTR_FUN_143f740c8;
        local_48 = &PTR_FUN_143f740c8;
        local_20 = 0x100;
        FUN_1404c0940(&local_70,param_3);
        FUN_1404c0940(&local_48,param_4);
        iVar1 = *(int *)(param_1 + 0x198);
        *(int *)(param_1 + 0x198) = iVar1 + 1;
        if (*(int *)(param_1 + 0x19c) < iVar1 + 1) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 400,iVar1);
        }
        puVar3 = (undefined4 *)((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 400));
        *puVar3 = param_2;
        *(undefined ***)(puVar3 + 2) = &PTR_FUN_143f73d18;
        *(undefined8 *)(puVar3 + 4) = local_68;
        *(longlong *)(puVar3 + 6) = lStack_60;
        if (lStack_60 != 0) {
          LOCK();
          *(int *)(lStack_60 + 8) = *(int *)(lStack_60 + 8) + 1;
          UNLOCK();
        }
        *(undefined ***)(puVar3 + 2) = &PTR_FUN_143f740c8;
        *(undefined8 *)(puVar3 + 8) = 0;
        *(undefined8 *)(puVar3 + 10) = 0;
        *(undefined ***)(puVar3 + 0xc) = &PTR_FUN_143f73d18;
        *(undefined8 *)(puVar3 + 0xe) = local_40;
        *(longlong *)(puVar3 + 0x10) = local_38;
        if (local_38 != 0) {
          LOCK();
          *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
          UNLOCK();
        }
        *(undefined ***)(puVar3 + 0xc) = &PTR_FUN_143f740c8;
        *(undefined8 *)(puVar3 + 0x12) = 0;
        *(undefined8 *)(puVar3 + 0x14) = 0;
        *(undefined1 *)(puVar3 + 0x16) = (undefined1)local_20;
        *(undefined1 *)((longlong)puVar3 + 0x59) = local_20._1_1_;
        FUN_1404bf980(&local_48);
        FUN_1404bf980(&local_70);
      }
    }
  }
  return;
}



// FUNCTION 140d75410 FUN_140d75410 body=352 status=ok
// SIG undefined FUN_140d75410(void)

void FUN_140d75410(longlong param_1,char param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 local_res8;
  ulonglong local_38;
  uint local_30;
  uint uStack_2c;
  longlong local_28 [2];
  
  uVar3 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_2c = 0;
  if (param_2 == '\0') {
    uVar5 = uVar3;
    uVar6 = uVar3;
    uVar7 = uVar3;
    while( true ) {
      iVar2 = *(int *)(param_1 + 0x28) + -1;
      if (*(int *)(param_1 + 0x28) == 0) {
        iVar2 = 0;
      }
      if (iVar2 <= (int)uVar5) break;
      sVar1 = *(short *)(*(longlong *)(param_1 + 8) + 0x1d8);
      if (sVar1 != 0) {
        iVar2 = (int)uVar3;
        iVar4 = iVar2 + -1;
        if (iVar2 < 1) {
          iVar4 = 0;
        }
        local_30 = (iVar2 < 1) + 1 + iVar2;
        if ((int)uVar7 < (int)local_30) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar3);
          uVar7 = (ulonglong)uStack_2c;
          uVar6 = local_38;
        }
        uVar3 = (ulonglong)local_30;
        *(short *)(uVar6 + (longlong)iVar4 * 2) = sVar1;
        *(undefined2 *)(uVar6 + 2 + (longlong)iVar4 * 2) = 0;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
    }
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_140d68fa0(*(longlong *)(param_1 + 8),param_1 + 0x10,&local_38,local_28,0);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    FUN_140d68fa0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_3,&local_38,0);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  local_res8 = *(undefined8 *)(param_1 + 0x10);
  iVar2 = FUN_1404bb3d0(*(longlong *)(param_1 + 8) + 0x1c0,&local_res8);
  if (0 < iVar2) {
    FUN_140d94190(*(longlong *)(param_1 + 8) + 0x1f8,(undefined8 *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 140d75580 FUN_140d75580 body=150 status=ok
// SIG undefined FUN_140d75580(void)

void FUN_140d75580(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  void *_Src;
  longlong lVar3;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_10 = (int)param_2[1];
  lVar3 = (longlong)local_10;
  uVar1 = *(undefined8 *)(param_1 + 8);
  pcVar2 = *(code **)(param_1 + 0x10);
  _Src = (void *)*param_2;
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_18,local_10,0);
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar3 << 3);
  }
  (*pcVar2)(uVar1,&local_18);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d75620 FUN_140d75620 body=105 status=ok
// SIG undefined FUN_140d75620(void)

void FUN_140d75620(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong local_18;
  undefined4 local_10;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  pcVar2 = *(code **)(param_1 + 0x10);
  local_18 = 0;
  local_10 = 0;
  if ((((longlong *)(param_1 + 0x18) != &local_18) && (*(int *)(param_1 + 0x20) != 0)) &&
     (plVar3 = *(longlong **)(param_1 + 0x18), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_18);
  }
  (*pcVar2)(uVar1,param_2,&local_18);
  return;
}



// FUNCTION 140d75690 FUN_140d75690 body=169 status=ok
// SIG undefined FUN_140d75690(void)

undefined1 FUN_140d75690(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar6 = (longlong *)0x0;
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar6, !bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  uVar4 = (**(code **)(param_1 + 0x18))(plVar6);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
    return uVar4;
  }
  return uVar4;
}



// FUNCTION 140d75740 FUN_140d75740 body=20 status=ok
// SIG undefined FUN_140d75740(void)

undefined1 FUN_140d75740(longlong param_1)

{
  FUN_140d67630(param_1 + 8);
  return 1;
}



// FUNCTION 140d75760 FUN_140d75760 body=354 status=ok
// SIG undefined FUN_140d75760(void)

undefined8 FUN_140d75760(longlong param_1,char param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 local_res8;
  ulonglong local_38;
  uint local_30;
  uint uStack_2c;
  longlong local_28 [2];
  
  uVar3 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_2c = 0;
  if (param_2 == '\0') {
    uVar5 = uVar3;
    uVar6 = uVar3;
    uVar7 = uVar3;
    while( true ) {
      iVar2 = *(int *)(param_1 + 0x28) + -1;
      if (*(int *)(param_1 + 0x28) == 0) {
        iVar2 = 0;
      }
      if (iVar2 <= (int)uVar5) break;
      sVar1 = *(short *)(*(longlong *)(param_1 + 8) + 0x1d8);
      if (sVar1 != 0) {
        iVar2 = (int)uVar3;
        iVar4 = iVar2 + -1;
        if (iVar2 < 1) {
          iVar4 = 0;
        }
        local_30 = (iVar2 < 1) + 1 + iVar2;
        if ((int)uVar7 < (int)local_30) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar3);
          uVar7 = (ulonglong)uStack_2c;
          uVar6 = local_38;
        }
        uVar3 = (ulonglong)local_30;
        *(short *)(uVar6 + (longlong)iVar4 * 2) = sVar1;
        *(undefined2 *)(uVar6 + 2 + (longlong)iVar4 * 2) = 0;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
    }
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_140d68fa0(*(longlong *)(param_1 + 8),param_1 + 0x10,&local_38,local_28,0);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    FUN_140d68fa0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_3,&local_38,0);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  local_res8 = *(undefined8 *)(param_1 + 0x10);
  iVar2 = FUN_1404bb3d0(*(longlong *)(param_1 + 8) + 0x1c0,&local_res8);
  if (0 < iVar2) {
    FUN_140d94190(*(longlong *)(param_1 + 8) + 0x1f8,(undefined8 *)(param_1 + 0x10));
  }
  return 1;
}



// FUNCTION 140d758d0 ExecuteIfSafe body=25 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseRawMethodDelegateInstance<0,FOnlineSessionOculus,void___cdecl(ovrMessage_*,bool),FName>::
ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x10))
            (*(undefined8 *)(param_1 + 8),param_2,param_3,*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140d758f0 FUN_140d758f0 body=233 status=ok
// SIG undefined FUN_140d758f0(void)

undefined8 FUN_140d758f0(longlong param_1,longlong *param_2)

{
  void *_Src;
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  void *_Src_00;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_10 = (int)param_2[1];
  lVar4 = (longlong)local_10;
  _Src = (void *)*param_2;
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    _Src_00 = (void *)0x0;
    iVar3 = local_10;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_18,local_10,0);
    _Src_00 = local_18;
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar4 << 3);
    iVar3 = local_10;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  pcVar2 = *(code **)(param_1 + 0x10);
  local_18 = (void *)0x0;
  local_10 = iVar3;
  if (iVar3 == 0) {
    local_c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_18,iVar3,0);
    _guard_xfg_dispatch_icall_nop(local_18,_Src_00,(longlong)iVar3 << 3);
  }
  (*pcVar2)(uVar1,&local_18);
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 140d759e0 FUN_140d759e0 body=42 status=ok
// SIG undefined FUN_140d759e0(void)

undefined8 FUN_140d759e0(longlong param_1)

{
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 140d75a10 FUN_140d75a10 body=107 status=ok
// SIG undefined FUN_140d75a10(void)

undefined8 FUN_140d75a10(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong local_18;
  undefined4 local_10;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  pcVar2 = *(code **)(param_1 + 0x10);
  local_18 = 0;
  local_10 = 0;
  if ((((longlong *)(param_1 + 0x18) != &local_18) && (*(int *)(param_1 + 0x20) != 0)) &&
     (plVar3 = *(longlong **)(param_1 + 0x18), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_18);
  }
  (*pcVar2)(uVar1,param_2,&local_18);
  return 1;
}



// FUNCTION 140d75a80 FUN_140d75a80 body=143 status=ok
// SIG undefined FUN_140d75a80(void)

void FUN_140d75a80(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    iVar3 = *(int *)(param_1 + 0x50);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x10);
    if (((*(int *)(lVar1 + 0x10) < *(int *)(lVar1 + 0x1c)) || (*(int *)(param_1 + 0x38) == 0)) ||
       (*(int *)(param_1 + 0x68) == *(int *)(param_1 + 0x6c))) {
      iVar3 = iVar3 + 1;
      *(int *)(param_1 + 0x50) = iVar3;
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x68) + 1;
    }
    *(int *)(param_1 + 0x68) = iVar2;
    if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x28))) {
      FUN_140d715b0(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x18) != 5) {
      *(undefined4 *)(param_1 + 0x18) = 5;
      TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound(param_1 + 8,5);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x18) != 7) {
    *(undefined4 *)(param_1 + 0x18) = 7;
    TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound(param_1 + 8,7);
    return;
  }
  return;
}



// FUNCTION 140d75b10 thunk_FUN_140d82050 body=8 status=ok
// SIG undefined thunk_FUN_140d82050(void)

void thunk_FUN_140d82050(undefined8 param_1,undefined8 param_2)

{
  FUN_140d82050(param_1,param_2,1);
  return;
}


