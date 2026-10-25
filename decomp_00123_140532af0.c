// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140532af0 FUN_140532af0 body=768 status=ok
// SIG undefined FUN_140532af0(void)

int * FUN_140532af0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  uint uVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  undefined8 *_Src;
  bool local_res8;
  int local_res10 [2];
  int local_68 [2];
  undefined8 *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_68);
  _Src = local_60;
  puVar4 = (undefined8 *)*param_3;
  plVar13 = local_60 + 1;
  lVar5 = param_3[1];
  *param_2 = local_68[0];
  *local_60 = *puVar4;
  lVar6 = puVar4[1];
  *plVar13 = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  FString::FString(local_60 + 2,lVar5);
  puVar4 = _Src + 4;
  local_res8 = false;
  *(undefined4 *)puVar4 = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    plVar7 = (longlong *)*plVar13;
    local_48 = *_Src;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      _Src = local_60;
    }
    local_40 = plVar7;
    FUN_140549810(param_1,local_res10,&local_48);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      _Src = local_60;
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)();
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        _Src = local_60;
        if (iVar14 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
          _Src = local_60;
        }
      }
    }
    iVar14 = local_res10[0];
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)local_res10[0] * 0x28);
      if (*(longlong *)(*param_1 + 0x10 + (longlong)local_res10[0] * 0x28) != 0) {
        FMemory::Free();
      }
      plVar13 = *(longlong **)((longlong)_Dst + 8);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar13 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        _Src = local_60;
        iVar14 = local_res10[0];
        if ((int)lVar5 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          _Src = local_60;
          iVar14 = local_res10[0];
          if (iVar3 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
            _Src = local_60;
            iVar14 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar14;
      goto LAB_140532daf;
    }
  }
  cVar8 = TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar8 == '\0') {
    plVar13 = (longlong *)*plVar13;
    plVar7 = (longlong *)*_Src;
    iVar14 = *param_2;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      _Src = local_60;
    }
    local_58 = plVar7;
    local_50 = plVar13;
    uVar9 = (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar5 = *plVar7;
    if (uVar9 < 4) {
      pbVar10 = (byte *)(**(code **)(lVar5 + 0x10))(plVar7);
      uVar9 = (uint)*pbVar10;
    }
    else if (uVar9 < 8) {
      puVar11 = (uint *)(**(code **)(lVar5 + 0x10))();
      uVar9 = *puVar11;
    }
    else {
      puVar12 = (undefined8 *)(**(code **)(lVar5 + 0x10))(plVar7);
      uVar9 = (int)*puVar12 + (int)((ulonglong)*puVar12 >> 0x20) * 0x17;
    }
    plVar7 = local_50;
    *(uint *)((longlong)_Src + 0x24) = (int)param_1[9] - 1U & uVar9;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar13 + 1;
      lVar5 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    iVar3 = *(int *)((longlong)_Src + 0x24);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(undefined4 *)puVar4 =
         *(undefined4 *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4)
    ;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4) = iVar14;
  }
LAB_140532daf:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140532df0 FUN_140532df0 body=1032 status=ok
// SIG undefined FUN_140532df0(void)

int * FUN_140532df0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  void *_Dst;
  int iVar16;
  undefined8 *_Src;
  bool local_res8;
  int local_68;
  int local_64;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  
  uVar14 = 0xffffffff;
  iVar16 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar13 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar13;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar9 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar9 = *puVar9 | 1 << ((byte)iVar13 & 0x1f);
  puVar10 = (undefined8 *)*param_3;
  _Src = (undefined8 *)((longlong)iVar13 * 0x20 + *param_1);
  puVar12 = (undefined4 *)param_3[1];
  *_Src = *puVar10;
  lVar4 = puVar10[1];
  _Src[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 2) = *puVar12;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
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
    FUN_1405499a0(param_1,&local_68,&local_48);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar11 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)();
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    local_res8 = local_68 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_68 * 0x20 + *param_1);
      plVar11 = *(longlong **)((longlong)_Dst + 8);
      iVar16 = local_68;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar11 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar16 = local_68;
          if (iVar13 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
            iVar16 = local_68;
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      iVar13 = *param_2;
      bVar6 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar13;
      }
      puVar12 = (undefined4 *)((longlong)iVar13 * 0x20 + *param_1);
      *puVar12 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar14 = (undefined4)param_1[6];
      }
      puVar12[1] = uVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar11 = (longlong *)param_1[4];
      *param_2 = iVar16;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar9 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar9 = *puVar9 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_1405331c6;
    }
  }
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar15) {
    uVar7 = (uVar15 >> 1) + 8;
    local_64 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> local_64 == 0; local_64 = local_64 + -1) {
      }
    }
    iVar16 = 0x20;
    if (uVar7 != 0) {
      iVar16 = 0x1f - local_64;
    }
    uVar7 = (uVar15 >> 1) + 7;
    local_60 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> local_60 == 0; local_60 = local_60 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar16 = 1;
    }
    else {
      iVar16 = 1 << (~(byte)((iVar16 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)local_60) & 0x1f);
    }
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar16 <= (int)param_1[9])))) {
    plVar11 = (longlong *)_Src[1];
    iVar16 = *param_2;
    plVar5 = (longlong *)*_Src;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_58 = plVar5;
    local_50 = plVar11;
    uVar15 = (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *plVar5;
    if (uVar15 < 4) {
      pbVar8 = (byte *)(**(code **)(lVar4 + 0x10))(plVar5);
      uVar15 = (uint)*pbVar8;
    }
    else if (uVar15 < 8) {
      puVar9 = (uint *)(**(code **)(lVar4 + 0x10))();
      uVar15 = *puVar9;
    }
    else {
      puVar10 = (undefined8 *)(**(code **)(lVar4 + 0x10))(plVar5);
      uVar15 = (int)*puVar10 + (int)((ulonglong)*puVar10 >> 0x20) * 0x17;
    }
    plVar5 = local_50;
    *(uint *)((longlong)_Src + 0x1c) = (int)param_1[9] - 1U & uVar15;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar11 + 1;
      lVar4 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar11 +
          ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x1c)) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 +
            ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x1c)) * 4) =
         iVar16;
  }
  else {
    *(int *)(param_1 + 9) = iVar16;
    FUN_14055d980(param_1);
  }
LAB_1405331c6:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140533200 FUN_140533200 body=587 status=ok
// SIG undefined FUN_140533200(void)

int * FUN_140533200(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined8 *_Src;
  int iVar7;
  uint uVar8;
  char cVar9;
  longlong *plVar10;
  bool bVar11;
  int local_res8 [2];
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                (param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar5 * 0x78 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x78 + *param_1) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar5 & 0x1f);
  _Src = (undefined8 *)((longlong)iVar5 * 0x78 + *param_1);
  FUN_1405311a0(param_3,_Src);
  *(undefined4 *)(_Src + 0xe) = 0xffffffff;
  bVar11 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_140549b20(param_1,local_res8,_Src);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      plVar10 = (longlong *)((longlong)local_res8[0] * 0x78 + *param_1);
      FUN_140538430(plVar10 + 2);
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar10,_Src,0x70);
      TSparseArray<TSetElement<TTuple<unsigned_int,Audio::FMixerBus>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140533422;
    }
  }
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar8) {
    uVar4 = (uVar8 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar9 = '\0';
    if (uVar4 != 0) {
      iVar5 = 0x1f - iVar7;
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
    iVar7 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar8 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    iVar7 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*_Src;
    }
    uVar8 = FUN_140438070(puVar6);
    uVar8 = (int)param_1[9] - 1U & uVar8;
    *(uint *)((longlong)_Src + 0x74) = uVar8;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xe) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    FUN_14055dc20(param_1);
  }
LAB_140533422:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 140533450 Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_&&>_> body=419 status=ok
// SIG undefined Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_&&>_>(void)

int * TSet<TTuple<FString,TArray<physx::PxBase_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<physx::PxBase_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
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
  uVar2 = *param_3;
  puVar3 = (undefined8 *)param_3[1];
  *param_2 = local_38[0];
  FString::FString(local_30,uVar2);
  bVar8 = false;
  local_30[2] = 0;
  local_30[2] = *puVar3;
  *puVar3 = 0;
  *(undefined4 *)(local_30 + 3) = *(undefined4 *)(puVar3 + 1);
  *(undefined4 *)((longlong)local_30 + 0x1c) = *(undefined4 *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
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
      goto LAB_1405335ca;
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
LAB_1405335ca:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 140533600 FUN_140533600 body=709 status=ok
// SIG undefined FUN_140533600(void)

int * FUN_140533600(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

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
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (_Dst);
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
      goto LAB_1405338a5;
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
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
    local_res20 = param_4;
  }
LAB_1405338a5:
  if (local_res20 != 0) {
    *(bool *)local_res20 = local_res8;
  }
  return param_2;
}



// FUNCTION 1405338d0 FUN_1405338d0 body=963 status=ok
// SIG undefined FUN_1405338d0(void)

int * FUN_1405338d0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *_Src;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  bool local_res8;
  int local_res10 [2];
  undefined8 local_50;
  longlong *local_48;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                ();
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar12 = *(int *)(*param_1 + 4 + (longlong)iVar6 * 0x18);
    *(int *)(param_1 + 6) = iVar12;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x18) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar9 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  lVar7 = (longlong)iVar6;
  *puVar9 = *puVar9 | 1 << ((byte)iVar6 & 0x1f);
  lVar13 = *param_1;
  *(undefined8 *)(lVar13 + lVar7 * 0x18) = *param_3;
  lVar2 = param_3[1];
  *(longlong *)(lVar13 + 8 + lVar7 * 0x18) = lVar2;
  _Src = (undefined8 *)(lVar13 + lVar7 * 0x18);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    plVar11 = (longlong *)_Src[1];
    local_50 = *_Src;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_48 = plVar11;
    FUN_140549c00(param_1,local_res10,&local_50);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar11 + 1;
      lVar13 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_48)();
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    lVar13 = (longlong)local_res10[0];
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      lVar2 = *param_1;
      plVar11 = *(longlong **)(lVar2 + 8 + lVar13 * 0x18);
      iVar6 = local_res10[0];
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar11 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          iVar6 = local_res10[0];
          if (iVar12 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
            iVar6 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar2 + lVar13 * 0x18),_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar6;
      goto LAB_140533c55;
    }
  }
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 < 4) {
    iVar6 = 1;
  }
  else {
    uVar5 = (uVar14 >> 1) + 8;
    iVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    iVar12 = 0x20;
    if (uVar5 != 0) {
      iVar12 = 0x1f - iVar6;
    }
    uVar5 = (uVar14 >> 1) + 7;
    iVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar5 == 0) {
      iVar6 = 1;
    }
    else {
      iVar6 = 1 << (~(byte)((iVar12 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar6) & 0x1f);
    }
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    plVar11 = (longlong *)_Src[1];
    plVar3 = (longlong *)*_Src;
    iVar6 = *param_2;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    uVar14 = (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar13 = *plVar3;
    if (uVar14 < 4) {
      pbVar8 = (byte *)(**(code **)(lVar13 + 0x10))(plVar3);
      uVar14 = (uint)*pbVar8;
    }
    else if (uVar14 < 8) {
      puVar9 = (uint *)(**(code **)(lVar13 + 0x10))();
      uVar14 = *puVar9;
    }
    else {
      puVar10 = (undefined8 *)(**(code **)(lVar13 + 0x10))(plVar3);
      uVar14 = (int)*puVar10 + (int)((ulonglong)*puVar10 >> 0x20) * 0x17;
    }
    *(uint *)((longlong)_Src + 0x14) = (int)param_1[9] - 1U & uVar14;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar11 + 1;
      lVar13 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar11 +
          ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x14)) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 +
            ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x14)) * 4) =
         iVar6;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    FUN_14055de40(param_1);
  }
LAB_140533c55:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140533ca0 Init<FStringTable> body=198 status=ok
// SIG undefined Init<FStringTable>(void)

void TSharedRef<FStringTable,1>::Init<FStringTable>(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_2 != (longlong *)0x0) {
    if ((*param_2 != 0) && (param_2[1] != 0)) {
      piVar1 = (int *)(param_2[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        return;
      }
    }
    plVar2 = *(longlong **)(param_1 + 8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    *param_2 = (longlong)param_2;
    plVar5 = (longlong *)param_2[1];
    if (plVar2 != plVar5) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)param_2[1];
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
      param_2[1] = (longlong)plVar2;
    }
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
  }
  return;
}



// FUNCTION 140533d70 Init<FOnlineLeaderboardsInterfaceEOS> body=208 status=ok
// SIG undefined Init<FOnlineLeaderboardsInterfaceEOS>(void)

void TSharedRef<FOnlineLeaderboardsInterfaceEOS,1>::Init<FOnlineLeaderboardsInterfaceEOS>
               (longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)(param_2 + 0x38);
  if (param_2 == 0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar1 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        return;
      }
    }
    plVar2 = *(longlong **)(param_1 + 8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    *plVar6 = param_2;
    plVar5 = (longlong *)plVar6[1];
    if (plVar2 != plVar5) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar6[1];
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
      plVar6[1] = (longlong)plVar2;
    }
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
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140533e40 FUN_140533e40 body=316 status=ok
// SIG undefined FUN_140533e40(void)

undefined8 * FUN_140533e40(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)operator_new(0x108);
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar8 + 1) = 1;
    *(undefined4 *)((longlong)puVar8 + 0xc) = 1;
    *puVar8 = &PTR_FUN_143fc15a0;
    uVar5 = *param_1;
    plVar6 = (longlong *)param_1[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    uVar4 = *param_2;
    puVar8[2] = &PTR_FUN_143fc06f0;
    *(undefined2 *)(puVar8 + 3) = 0x100;
    puVar8[4] = uVar5;
    puVar8[5] = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    FUN_1404f8570(puVar8 + 6);
    puVar8[0x16] = 0;
    puVar8[0x17] = 0;
    puVar8[0x18] = 0;
    puVar8[0x19] = 0;
    puVar8[0x1a] = 0;
    puVar8[0x1b] = 0;
    puVar8[0x1c] = 0;
    puVar8[0x1d] = 0;
    puVar8[0x1e] = 0;
    puVar8[0x1f] = 0;
    *(undefined4 *)(puVar8 + 0x20) = uVar4;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    return puVar8;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140533f80 FUN_140533f80 body=272 status=ok
// SIG undefined FUN_140533f80(void)

undefined8 * FUN_140533f80(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new();
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &PTR_LAB_143fc1580;
    uVar1 = *param_2;
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
    *(undefined4 *)(puVar3 + 6) = uVar1;
    *(undefined4 *)((longlong)puVar3 + 0x34) = 2;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    *(undefined4 *)(puVar3 + 0x13) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0x9c) = 0;
    puVar3[0x15] = 0;
    *(undefined4 *)(puVar3 + 0x16) = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    *(undefined4 *)(puVar3 + 0x1a) = 0;
    puVar3[0x1b] = 0;
    *(undefined4 *)(puVar3 + 0x1c) = 0;
    puVar3[0x1d] = 0;
    *(undefined4 *)(puVar3 + 0x1e) = 0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140534090 FUN_140534090 body=368 status=ok
// SIG undefined FUN_140534090(void)

undefined8 * FUN_140534090(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  puVar3 = (undefined8 *)operator_new(0xc0);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar3 + 1) = 1;
  *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
  *puVar3 = &PTR_LAB_143fc15b0;
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
  *(undefined4 *)(puVar3 + 0xb) = 2;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  *(undefined4 *)(puVar3 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)puVar3 + 0x94) = 0;
  puVar3[0x14] = 0;
  *(undefined4 *)(puVar3 + 0x15) = 0;
  puVar3[0x16] = 0;
  *(undefined4 *)(puVar3 + 0x17) = 0;
  return puVar3;
}



// FUNCTION 140534200 RemoveAll<<lambda_0089088ead215b5f35713e72b81bce1f>_> body=417 status=ok
// SIG undefined RemoveAll<<lambda_0089088ead215b5f35713e72b81bce1f>_>(void)

int TArray<FString,FDefaultAllocator>::RemoveAll<<lambda_0089088ead215b5f35713e72b81bce1f>_>
              (longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  
  iVar1 = (int)param_1[1];
  lVar6 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar11 = 0;
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = *(undefined2 **)*param_2;
  }
  if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = *(undefined2 **)*param_1;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
  bVar12 = iVar2 != 0;
  lVar10 = 0;
  iVar2 = 0;
  do {
    iVar9 = iVar2 + 1;
    lVar10 = lVar10 + 1;
    if (lVar10 < lVar6) {
      lVar7 = lVar10 * 0x10;
      do {
        if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)*param_2;
        }
        if (*(int *)(*param_1 + 8 + lVar7) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = *(undefined2 **)(*param_1 + lVar7);
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
        if (bVar12 != (iVar3 != 0)) break;
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar10 < lVar6);
    }
    iVar3 = iVar9 - iVar2;
    if (bVar12 == false) {
      plVar8 = (longlong *)((longlong)iVar2 * 0x10 + *param_1);
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
    }
    else {
      if (iVar11 != iVar2) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar11 * 0x10 + *param_1),
                   (void *)((longlong)iVar2 * 0x10 + *param_1),(longlong)iVar3 << 4);
      }
      iVar11 = iVar11 + iVar3;
    }
    bVar12 = (bool)(bVar12 ^ 1);
    iVar2 = iVar9;
    if (lVar6 <= lVar10) {
      *(int *)(param_1 + 1) = iVar11;
      return iVar1 - iVar11;
    }
  } while( true );
}



// FUNCTION 1405343b0 FUN_1405343b0 body=243 status=ok
// SIG undefined FUN_1405343b0(void)

longlong FUN_1405343b0(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  FString::FString();
  FString::FString(param_1 + 0x10,param_2 + 0x10);
  FString::FString(param_1 + 0x20,param_2 + 0x20);
  FString::FString(param_1 + 0x30,param_2 + 0x30);
  FString::FString(param_1 + 0x40,param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = 0;
  iVar3 = *(int *)(param_2 + 0x58);
  puVar4 = *(undefined8 **)(param_2 + 0x50);
  *(int *)(param_1 + 0x58) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x50,iVar3,0);
    puVar2 = *(undefined8 **)(param_1 + 0x50);
    do {
      *puVar2 = 0;
      iVar1 = *(int *)(puVar4 + 1);
      _Src = (void *)*puVar4;
      *(int *)(puVar2 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar1 * 2);
      }
      puVar2 = puVar2 + 2;
      puVar4 = puVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}



// FUNCTION 1405344b0 FUN_1405344b0 body=132 status=ok
// SIG undefined FUN_1405344b0(void)

undefined8 *
FUN_1405344b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *param_2;
  lVar1 = param_2[1];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FString::FString(param_1 + 4,param_3);
  param_1[6] = *param_4;
  lVar1 = param_4[1];
  param_1[7] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[8] = 2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 140534540 FUN_140534540 body=276 status=ok
// SIG undefined FUN_140534540(void)

undefined8 *
FUN_140534540(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined8 *puVar3;
  int iVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *param_2;
  lVar2 = param_2[1];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = 0;
  iVar4 = *(int *)(param_3 + 1);
  param_3 = (undefined8 *)*param_3;
  *(int *)(param_1 + 5) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar4,0);
    puVar3 = (undefined8 *)param_1[4];
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
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FString::FString(param_1 + 6,param_4);
  FString::FString(param_1 + 8,param_5);
  FString::FString(param_1 + 10,param_6);
  *(undefined4 *)(param_1 + 0xc) = 2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 140534660 FUN_140534660 body=756 status=ok
// SIG undefined FUN_140534660(void)

undefined8 *
FUN_140534660(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  longlong **pplVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  longlong *local_38;
  longlong *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar8 = *(int *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  *(int *)(param_1 + 3) = iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar8,0);
    puVar6 = (undefined8 *)param_1[2];
    do {
      *puVar6 = *param_2;
      lVar3 = param_2[1];
      puVar6[1] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      puVar6 = puVar6 + 2;
      param_2 = param_2 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  pplVar1 = (longlong **)(param_1 + 5);
  param_1[4] = param_3;
  plVar7 = (longlong *)0x0;
  *pplVar1 = (longlong *)0x0;
  param_1[6] = 0;
  param_1[7] = *param_8;
  lVar3 = param_8[1];
  param_1[8] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 2;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  plVar4 = (longlong *)operator_new(0xa0);
  if (plVar4 != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[2];
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = *plVar7;
    lVar3 = plVar7[1];
    plVar4[3] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(plVar4 + 4) = param_4;
    FString::FString(plVar4 + 5,param_5);
    FString::FString(plVar4 + 7,param_6);
    FString::FString(plVar4 + 9,param_7);
    *(undefined4 *)(plVar4 + 0xb) = 2;
    plVar4[0xc] = 0;
    plVar4[0xd] = 0;
    plVar4[0xe] = 0;
    plVar4[0xf] = 0;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    plVar4[0x12] = 0;
    *(undefined4 *)(plVar4 + 0x13) = 0;
    plVar7 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = (longlong *)0x0;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143fc2240;
    plVar5[2] = (longlong)plVar7;
    plVar4 = plVar5;
  }
  local_38 = plVar7;
  local_30 = plVar4;
  if (plVar7 != (longlong *)0x0) {
    if ((*plVar7 != 0) && (plVar7[1] != 0)) {
      piVar2 = (int *)(plVar7[1] + 8);
      LOCK();
      iVar8 = *piVar2;
      if (iVar8 == 0) {
        *piVar2 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (0 < iVar8) goto LAB_1405348da;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)plVar7;
    plVar5 = (longlong *)plVar7[1];
    if (plVar4 != plVar5) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar7[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar7[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
  }
LAB_1405348da:
  if (pplVar1 != &local_38) {
    *pplVar1 = plVar7;
    local_38 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 6,&local_30);
  }
  plVar7 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140534960 FUN_140534960 body=257 status=ok
// SIG undefined FUN_140534960(void)

undefined8 * FUN_140534960(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *param_2;
  lVar1 = param_2[1];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FString::FString(param_1 + 4,param_3);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 2;
  param_1[9] = &PTR_FUN_143f769a8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = &PTR_FUN_143f769a0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 9999;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  return param_1;
}



// FUNCTION 140534a70 FUN_140534a70 body=530 status=ok
// SIG undefined FUN_140534a70(void)

undefined8 * FUN_140534a70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_28;
  longlong *local_20;
  
  plVar6 = (longlong *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *param_2;
  lVar3 = param_2[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = *param_3;
  lVar3 = param_3[1];
  param_1[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  lVar3 = operator_new(0xa0);
  plVar4 = plVar6;
  if (lVar3 != 0) {
    plVar4 = (longlong *)
             FUN_140536090(lVar3,param_1 + 2,*(undefined4 *)(param_1[4] + 0x1c),param_1[4] + 0x20);
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143fc21d0;
    plVar5[2] = (longlong)plVar4;
    plVar6 = plVar5;
  }
  local_28 = plVar4;
  local_20 = plVar6;
  if (plVar4 != (longlong *)0x0) {
    if ((*plVar4 != 0) && (plVar4[1] != 0)) {
      piVar1 = (int *)(plVar4[1] + 8);
      LOCK();
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        *piVar1 = 0;
        iVar2 = 0;
      }
      UNLOCK();
      if (0 < iVar2) goto LAB_140534c06;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar4 = (longlong)plVar4;
    plVar5 = (longlong *)plVar4[1];
    if (plVar6 != plVar5) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar4[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar4[1] = (longlong)plVar6;
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
  }
LAB_140534c06:
  if ((longlong **)(param_1 + 6) != &local_28) {
    param_1[6] = plVar4;
    local_28 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 7,&local_20);
  }
  plVar6 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return param_1;
}



// FUNCTION 140534c90 FUN_140534c90 body=102 status=ok
// SIG undefined FUN_140534c90(void)

undefined8 * FUN_140534c90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *param_2;
  lVar1 = param_2[1];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FString::FString(param_1 + 4,param_3);
  *(undefined4 *)(param_1 + 6) = 2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return param_1;
}



// FUNCTION 140534d00 FUN_140534d00 body=157 status=ok
// SIG undefined FUN_140534d00(void)

undefined8 * FUN_140534d00(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  *(undefined2 *)(param_1 + 1) = 0x100;
  *param_1 = &PTR_FUN_143fc06f0;
  param_1[2] = *param_2;
  lVar1 = param_2[1];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FUN_1404f8570(param_1 + 4);
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
  *(undefined4 *)(param_1 + 0x1e) = param_3;
  return param_1;
}



// FUNCTION 140534da0 FUN_140534da0 body=992 status=ok
// SIG undefined FUN_140534da0(void)

undefined8 * FUN_140534da0(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong *local_78;
  int local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_48;
  
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
  *param_1 = &PTR__scalar_deleting_destructor__143fc0730;
  param_1[0x1c] = param_2;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  lVar3 = FUN_142b45e90();
  lVar3 = *(longlong *)(lVar3 + 0x18);
  plVar7 = (longlong *)(lVar3 + 0xa0);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_58 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = (longlong)param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_140556d60;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar2 = *(int *)(lVar3 + 0xa8);
    *(int *)(lVar3 + 0xa8) = iVar2 + 1;
    if (*(int *)(lVar3 + 0xac) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar2);
    }
    puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar7);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  plVar7 = (longlong *)(lVar3 + 0xe8);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_48 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = (longlong)param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_1405593c0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res10);
    iVar2 = *(int *)(lVar3 + 0xf0);
    *(int *)(lVar3 + 0xf0) = iVar2 + 1;
    if (*(int *)(lVar3 + 0xf4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar2);
    }
    puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar7);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  (**(code **)(*(longlong *)param_1[0x1c] + 0x50))((longlong *)param_1[0x1c],&local_68);
  if (local_68 != (longlong *)0x0) {
    local_78 = (longlong *)0x0;
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    local_70 = 3;
    local_78 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = (longlong)param_1;
      *plVar7 = (longlong)&DAT_143f3ed00;
      plVar7[2] = (longlong)FUN_1405569f0;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar3;
      *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x80))(local_68,local_res18,&local_78);
    param_1[0x1d] = *puVar6;
    if (local_70 != 0) {
      if (local_78 == (longlong *)0x0) goto LAB_140535135;
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
LAB_140535135:
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_60 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140535180 FUN_140535180 body=952 status=ok
// SIG undefined FUN_140535180(void)

undefined8 * FUN_140535180(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  
  uVar7 = 0;
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
  *param_1 = &PTR__scalar_deleting_destructor__143fc10f0;
  param_1[0x22] = param_2;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  lVar2 = FUN_142b45e90();
  lVar2 = *(longlong *)(lVar2 + 0x18);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
  uVar8 = uVar7;
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = (longlong)param_1;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FUN_140558010;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 0x40,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar1 = *(int *)(lVar2 + 0x48);
    uVar8 = *puVar5;
    *(int *)(lVar2 + 0x48) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x4c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x40,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x40));
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  param_1[0x37] = uVar8;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  uVar8 = uVar7;
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = (longlong)param_1;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FUN_140558010;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 0x58,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar1 = *(int *)(lVar2 + 0x60);
    uVar8 = *puVar5;
    *(int *)(lVar2 + 0x60) = iVar1 + 1;
    if (*(int *)(lVar2 + 100) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x58,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x58));
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  param_1[0x38] = uVar8;
  plVar3 = (longlong *)(lVar2 + 0x70);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = (longlong)param_1;
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[2] = (longlong)FUN_140558010;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar4;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
    iVar1 = *(int *)(lVar2 + 0x78);
    uVar7 = *puVar5;
    *(int *)(lVar2 + 0x78) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x7c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar3);
    *puVar5 = plVar6;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  param_1[0x39] = uVar7;
  return param_1;
}



// FUNCTION 140535540 FUN_140535540 body=478 status=ok
// SIG undefined FUN_140535540(void)

undefined8 * FUN_140535540(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  longlong *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 2;
  *param_1 = &PTR_FUN_143fc0a50;
  param_1[7] = param_2;
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
  FConfigCacheIni::GetArray
            (DAT_1468b6148,L"OnlinePresenceSpark",L"PresenceKeys",param_1 + 9,&DAT_1468e2360);
  (**(code **)(*(longlong *)param_1[7] + 0x50))((longlong *)param_1[7],&local_28);
  if (local_28 != (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_30 = 3;
    local_38 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = (longlong)param_1;
      *plVar3 = (longlong)&DAT_143f3ed00;
      plVar3[2] = (longlong)&LAB_140556d50;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar5 = (undefined8 *)(**(code **)(*local_28 + 0x80))(local_28,local_res8,&local_38);
    param_1[8] = *puVar5;
    if (local_30 != 0) {
      if (local_38 == (longlong *)0x0) goto LAB_1405356d2;
      (**(code **)(*local_38 + 0x28))(local_38,0);
      if (local_38 != (longlong *)0x0) {
        local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
      }
      local_30 = 0;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
LAB_1405356d2:
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
  return param_1;
}



// FUNCTION 140535720 FUN_140535720 body=152 status=ok
// SIG undefined FUN_140535720(void)

undefined8 * FUN_140535720(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_143f769a8;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  lVar1 = *(longlong *)(param_2 + 0x10);
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FString::FString(param_1 + 3,param_2 + 0x18);
  FUN_1404e8890(param_1 + 5,param_2 + 0x28);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  lVar1 = *(longlong *)(param_2 + 0xa8);
  param_1[0x15] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  return param_1;
}



// FUNCTION 1405357c0 FUN_1405357c0 body=83 status=ok
// SIG undefined FUN_1405357c0(void)

undefined8 * FUN_1405357c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143fc0630;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14052cc90(param_1 + 3);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 140535820 FUN_140535820 body=482 status=ok
// SIG undefined FUN_140535820(void)

undefined8 * FUN_140535820(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  FUN_1404e8a40();
  param_1[0x4f] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__143fc0b18;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
  FUN_1404ac080(param_1 + 0x56,*puVar2);
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  lVar3 = FUN_142b45e90();
  lVar3 = *(longlong *)(lVar3 + 0x18);
  plVar6 = (longlong *)(lVar3 + 0xb8);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = (longlong)param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_1405561b0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = *(int *)(lVar3 + 0xc0);
    *(int *)(lVar3 + 0xc0) = iVar1 + 1;
    if (*(int *)(lVar3 + 0xc4) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar6);
    *puVar2 = plVar4;
    *(undefined4 *)(puVar2 + 1) = 3;
  }
  return param_1;
}



// FUNCTION 140535a10 FUN_140535a10 body=422 status=ok
// SIG undefined FUN_140535a10(void)

undefined8 * FUN_140535a10(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 2;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__143fc13a0;
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
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
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x44160000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  return param_1;
}



// FUNCTION 140535bc0 FUN_140535bc0 body=664 status=ok
// SIG undefined FUN_140535bc0(void)

undefined8 *
FUN_140535bc0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_28;
  longlong *local_20;
  
  plVar6 = (longlong *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *param_2;
  lVar3 = param_2[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = *param_3;
  lVar3 = param_3[1];
  param_1[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 2;
  param_1[9] = &PTR_FUN_143f769a8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = &PTR_FUN_143f769a0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 9999;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  lVar3 = operator_new(0x118);
  plVar4 = plVar6;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_140534960(lVar3,param_1 + 2,param_4);
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143fc2260;
    plVar5[2] = (longlong)plVar4;
    plVar6 = plVar5;
  }
  local_28 = plVar4;
  local_20 = plVar6;
  if (plVar4 != (longlong *)0x0) {
    if ((*plVar4 != 0) && (plVar4[1] != 0)) {
      piVar1 = (int *)(plVar4[1] + 8);
      LOCK();
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        *piVar1 = 0;
        iVar2 = 0;
      }
      UNLOCK();
      if (0 < iVar2) goto LAB_140535ddc;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar4 = (longlong)plVar4;
    plVar5 = (longlong *)plVar4[1];
    if (plVar6 != plVar5) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar4[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar4[1] = (longlong)plVar6;
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
  }
LAB_140535ddc:
  if ((longlong **)(param_1 + 6) != &local_28) {
    param_1[6] = plVar4;
    local_28 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 7,&local_20);
  }
  plVar6 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return param_1;
}



// FUNCTION 140535e60 FUN_140535e60 body=463 status=ok
// SIG undefined FUN_140535e60(void)

undefined8 *
FUN_140535e60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_28;
  longlong *local_20;
  
  plVar7 = (longlong *)0x0;
  pplVar1 = (longlong **)(param_1 + 3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_3;
  *pplVar1 = (longlong *)0x0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 2;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  lVar4 = operator_new(0x68);
  plVar5 = plVar7;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_1405344b0(lVar4,param_2,param_4,param_5);
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143fc2270;
    plVar6[2] = (longlong)plVar5;
    plVar7 = plVar6;
  }
  local_28 = plVar5;
  local_20 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar2 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar3 = *piVar2;
      if (iVar3 == 0) {
        *piVar2 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_140535fb3;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar5;
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
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
  }
LAB_140535fb3:
  if (pplVar1 != &local_28) {
    *pplVar1 = plVar5;
    local_28 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 4,&local_20);
  }
  plVar7 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_20 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140536030 FUN_140536030 body=94 status=ok
// SIG undefined FUN_140536030(void)

undefined8 * FUN_140536030(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *param_2;
  lVar1 = param_2[1];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FString::FString(param_1 + 4,param_3);
  *(undefined4 *)(param_1 + 6) = 2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 140536090 FUN_140536090 body=2461 status=ok
// SIG undefined FUN_140536090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140536090(undefined8 *param_1,undefined8 *param_2,int param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  undefined1 auVar3 [12];
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  void *pvVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  uint *puVar15;
  longlong *plVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_238 [32];
  undefined4 local_218;
  longlong local_208;
  undefined8 local_200;
  int local_1f8;
  int local_1f4;
  undefined1 local_1f0 [8];
  void *local_1e8;
  int local_1e0;
  int local_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [16];
  longlong *local_1b8;
  longlong *plStack_1b0;
  void *local_1a8;
  ulonglong local_1a0;
  longlong *local_198;
  longlong *plStack_190;
  uint local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  int iStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  void *local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  void *local_128;
  undefined8 local_120;
  void *local_118;
  undefined8 local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  longlong *local_e8;
  undefined8 uStack_e0;
  uint *local_d8;
  uint uStack_d0;
  int iStack_cc;
  undefined8 local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined1 local_a8 [8];
  longlong local_a0 [2];
  longlong *local_90;
  undefined8 uStack_88;
  uint *puStack_80;
  undefined4 uStack_78;
  int iStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  plVar16 = (longlong *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *param_2;
  lVar12 = param_2[1];
  param_1[3] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  local_b0 = param_1;
  FUN_142b21c20(param_1 + 4);
  *(undefined4 *)(param_1 + 0xd) = 2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[9] = (longlong)param_3;
  local_1f8 = -1;
  puVar7 = (undefined8 *)FName::FName(local_a8,L"SEARCHCROSSPLAY",1);
  cVar4 = FUN_1404a9560(param_4,*puVar7,&local_1f8);
  if ((cVar4 == '\0') || (local_1f8 != 1)) {
    if (param_1 == (undefined8 *)0x1461fca70) goto LAB_1405361ed;
    iVar6 = (int)DAT_1461fcaa0;
    pvVar11 = DAT_1461fca98;
  }
  else {
    if (param_1 == (undefined8 *)0x1461fca80) goto LAB_1405361ed;
    iVar6 = (int)DAT_1461fcab0;
    pvVar11 = DAT_1461fcaa8;
  }
  *(int *)(param_1 + 6) = iVar6;
  if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0x34) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1 + 5,iVar6);
    _guard_xfg_dispatch_icall_nop((void *)param_1[5],pvVar11,(longlong)iVar6 * 2);
  }
LAB_1405361ed:
  local_e8 = (longlong *)(param_4 + 8);
  local_208 = 0;
  iVar6 = *(int *)(param_4 + 0x30);
  puStack_180 = (uint *)(param_4 + 0x18);
  local_200 = 0;
  local_188 = 0;
  uStack_184 = 1;
  iStack_174 = 0;
  uStack_170 = 0;
  if (iVar6 != 0) {
    puVar15 = *(uint **)(param_4 + 0x28);
    if (*(uint **)(param_4 + 0x28) == (uint *)0x0) {
      puVar15 = puStack_180;
    }
    uVar2 = *puVar15;
    plVar10 = plVar16;
    plVar9 = plVar16;
    while (uVar2 == 0) {
      iVar5 = (int)plVar10;
      uStack_170 = (int)plVar9 + 0x20;
      plVar9 = (longlong *)(ulonglong)uStack_170;
      local_188 = iVar5 + 1;
      plVar10 = (longlong *)(ulonglong)local_188;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1405362a2;
      uVar2 = puVar15[(longlong)iVar5 + 1];
    }
    uStack_184 = -uVar2 & uVar2;
    local_c0 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> local_c0 == 0; local_c0 = local_c0 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - local_c0;
    }
    iStack_174 = (uStack_170 - iVar5) + 0x1f;
    if (iVar6 < iStack_174) {
LAB_1405362a2:
      iStack_174 = iVar6;
    }
  }
  local_178 = 0xffffffff;
  uStack_e0 = CONCAT44(uStack_184,local_188);
  uStack_78 = 0xffffffff;
  iStack_74 = iStack_174;
  uStack_70 = uStack_170;
  uStack_6c = uStack_16c;
  uStack_d0 = 0xffffffff;
  iStack_cc = iStack_174;
  auVar3._4_8_ = uStack_e0;
  auVar3._0_4_ = iStack_174;
  auVar17._0_8_ = auVar3._0_8_ << 0x20;
  auVar17._8_4_ = uStack_170;
  auVar17._12_4_ = uStack_16c;
  local_c8 = auVar17._8_8_;
  local_d8 = puStack_180;
  local_90 = local_e8;
  uStack_88 = uStack_e0;
  puStack_80 = puStack_180;
  if (iStack_174 < iVar6) {
    do {
      puVar7 = (undefined8 *)((longlong)iStack_cc * 0x38 + *local_e8);
      piVar1 = (int *)(puVar7 + 1);
      if ((*(int *)(puVar7 + 5) != 0) || (puVar14 = puVar7, *(int *)((longlong)puVar7 + 0x2c) != 0))
      {
        puVar14 = puVar7 + 5;
      }
      local_b8 = *puVar14;
      FUN_142b21cb0(local_1f0);
      uVar8 = FName::ToString(&local_b8,local_a0);
      FString::operator=(local_1c8,uVar8);
      if (local_a0[0] != 0) {
        FMemory::Free();
      }
      if (*piVar1 == 1) {
        local_1f4 = 0;
        FVariantData::GetValue(piVar1,&local_1f4);
        plVar9 = (longlong *)operator_new(0x18);
        plVar10 = plVar16;
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = (longlong)&PTR_AsObject_143f60608;
          *(undefined4 *)(plVar9 + 1) = 3;
          plVar9[2] = (longlong)(double)local_1f4;
          plVar10 = plVar9;
        }
        plVar9 = (longlong *)operator_new(0x18);
        plStack_190 = plVar16;
        if (plVar9 != (longlong *)0x0) {
          *(undefined4 *)(plVar9 + 1) = 1;
          *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
          *plVar9 = (longlong)&PTR_FUN_143f60d18;
          plVar9[2] = (longlong)plVar10;
          plStack_190 = plVar9;
        }
        local_198 = plVar10;
        SharedPointerInternals::EnableSharedFromThis(&local_198,plVar10,plVar10);
        local_58 = SUB84(local_198,0);
        uStack_54 = (undefined4)((ulonglong)local_198 >> 0x20);
        uStack_50 = SUB84(plStack_190,0);
        uStack_4c = (undefined4)((ulonglong)plStack_190 >> 0x20);
        if (plStack_190 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_190 + 1) = (int)plStack_190[1] + 1;
          UNLOCK();
        }
        local_f8._4_4_ = uStack_1d4;
        local_f8._0_4_ = local_1d8;
        puVar14 = (undefined8 *)CONCAT44(uStack_1cc,uStack_1d0);
        local_f8._8_8_ = puVar14;
        local_1d8 = local_58;
        uStack_1d4 = uStack_54;
        uStack_1d0 = uStack_50;
        uStack_1cc = uStack_4c;
        if (puVar14 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar14 + 1);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)*puVar14)(puVar14);
            LOCK();
            piVar1 = (int *)((longlong)puVar14 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*(longlong *)local_f8._8_8_ + 8))(local_f8._8_8_,1);
            }
          }
        }
        plVar10 = plStack_190;
        if (plStack_190 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_190 + 1;
          lVar12 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plStack_190)(plStack_190);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
      }
      else if (*piVar1 == 6) {
        local_1a8 = (void *)0x0;
        local_1a0 = 0;
        FUN_1404b0a70(piVar1,&local_1a8);
        plVar9 = (longlong *)operator_new(0x20);
        pvVar11 = local_1a8;
        plVar10 = plVar16;
        if (plVar9 != (longlong *)0x0) {
          *(undefined4 *)(plVar9 + 1) = 0;
          *plVar9 = (longlong)&PTR_AsObject_143f605c8;
          plVar9[2] = 0;
          lVar12 = (longlong)(int)local_1a0;
          *(int *)(plVar9 + 3) = (int)local_1a0;
          if ((int)local_1a0 == 0) {
            *(undefined4 *)((longlong)plVar9 + 0x1c) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar9 + 2,local_1a0 & 0xffffffff,0);
            _guard_xfg_dispatch_icall_nop((void *)plVar9[2],pvVar11,lVar12 * 2);
          }
          *(undefined4 *)(plVar9 + 1) = 2;
          plVar10 = plVar9;
        }
        plVar9 = (longlong *)operator_new(0x18);
        plStack_1b0 = plVar16;
        if (plVar9 != (longlong *)0x0) {
          *(undefined4 *)(plVar9 + 1) = 1;
          *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
          *plVar9 = (longlong)&PTR_FUN_143f60d18;
          plVar9[2] = (longlong)plVar10;
          plStack_1b0 = plVar9;
        }
        local_1b8 = plVar10;
        SharedPointerInternals::EnableSharedFromThis(&local_1b8,plVar10,plVar10);
        local_68 = SUB84(local_1b8,0);
        uStack_64 = (undefined4)((ulonglong)local_1b8 >> 0x20);
        uStack_60 = SUB84(plStack_1b0,0);
        uStack_5c = (undefined4)((ulonglong)plStack_1b0 >> 0x20);
        if (plStack_1b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_1b0 + 1) = (int)plStack_1b0[1] + 1;
          UNLOCK();
        }
        local_108._4_4_ = uStack_1d4;
        local_108._0_4_ = local_1d8;
        puVar14 = (undefined8 *)CONCAT44(uStack_1cc,uStack_1d0);
        local_108._8_8_ = puVar14;
        local_1d8 = local_68;
        uStack_1d4 = uStack_64;
        uStack_1d0 = uStack_60;
        uStack_1cc = uStack_5c;
        if (puVar14 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar14 + 1);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)*puVar14)(puVar14);
            LOCK();
            piVar1 = (int *)((longlong)puVar14 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*(longlong *)local_108._8_8_ + 8))(local_108._8_8_,1);
            }
          }
        }
        plVar10 = plStack_1b0;
        if (plStack_1b0 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_1b0 + 1;
          lVar12 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plStack_1b0)(plStack_1b0);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        if (local_1a8 != (void *)0x0) {
          FMemory::Free();
        }
      }
      switch(*(undefined4 *)(puVar7 + 4)) {
      case 0:
        local_168 = (void *)0x0;
        local_160 = 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
        pvVar11 = local_168;
        FGenericPlatformString::Memcpy(local_168,&DAT_143fa37d4,4);
        uVar13 = (ulonglong)(int)local_160;
        local_1e0 = (int)local_160;
        if (((int)local_160 == 0) && (local_1dc == 0)) {
          local_1dc = 0;
        }
        else {
LAB_140536899:
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1e8,uVar13 & 0xffffffff);
          _guard_xfg_dispatch_icall_nop(local_1e8,pvVar11,uVar13 * 2);
        }
        break;
      case 1:
        local_158 = (void *)0x0;
        local_150 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
        pvVar11 = local_158;
        FGenericPlatformString::Memcpy(local_158,&DAT_143fa3a94,6);
        uVar13 = (ulonglong)(int)local_150;
        local_1e0 = (int)local_150;
        if (((int)local_150 != 0) || (local_1dc != 0)) goto LAB_140536899;
        local_1dc = 0;
        break;
      case 2:
        local_138 = (void *)0x0;
        local_130 = 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
        pvVar11 = local_138;
        FGenericPlatformString::Memcpy(local_138,&DAT_143fa38b4,4);
        uVar13 = (ulonglong)(int)local_130;
        local_1e0 = (int)local_130;
        if (((int)local_130 != 0) || (local_1dc != 0)) goto LAB_140536899;
        local_1dc = 0;
        break;
      case 3:
        local_118 = (void *)0x0;
        local_110 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
        pvVar11 = local_118;
        FGenericPlatformString::Memcpy(local_118,&DAT_143fa4164,6);
        uVar13 = (ulonglong)(int)local_110;
        local_1e0 = (int)local_110;
        if (((int)local_110 != 0) || (local_1dc != 0)) goto LAB_140536899;
        local_1dc = 0;
        break;
      case 4:
        local_148 = (void *)0x0;
        local_140 = 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
        pvVar11 = local_148;
        FGenericPlatformString::Memcpy(local_148,&DAT_143fa3834,4);
        uVar13 = (ulonglong)(int)local_140;
        local_1e0 = (int)local_140;
        if (((int)local_140 != 0) || (local_1dc != 0)) goto LAB_140536899;
        local_1dc = 0;
        break;
      case 5:
        local_128 = (void *)0x0;
        local_120 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
        pvVar11 = local_128;
        FGenericPlatformString::Memcpy(local_128,&DAT_143fa3c64,6);
        uVar13 = (ulonglong)(int)local_120;
        local_1e0 = (int)local_120;
        if (((int)local_120 != 0) || (local_1dc != 0)) goto LAB_140536899;
        local_1dc = 0;
        break;
      default:
        goto switchD_14053669d_default;
      }
      if (pvVar11 != (void *)0x0) {
        FMemory::Free(pvVar11);
      }
switchD_14053669d_default:
      uVar13 = local_200;
      lVar12 = (longlong)(int)local_200;
      iVar6 = (int)local_200 + 1;
      local_200 = CONCAT44(local_200._4_4_,iVar6);
      if (local_200._4_4_ < iVar6) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_208,uVar13 & 0xffffffff);
      }
      puVar7 = (undefined8 *)(lVar12 * 0x38 + local_208);
      *puVar7 = &PTR_FUN_143fc05b0;
      FString::FString(puVar7 + 1,&local_1e8);
      puVar7[3] = CONCAT44(uStack_1d4,local_1d8);
      puVar7[4] = CONCAT44(uStack_1cc,uStack_1d0);
      if (CONCAT44(uStack_1cc,uStack_1d0) != 0) {
        LOCK();
        piVar1 = (int *)(CONCAT44(uStack_1cc,uStack_1d0) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FString::FString(puVar7 + 5,local_1c8);
      FUN_142b22b80(local_1f0);
      uStack_d0 = uStack_d0 & ~uStack_e0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
      param_1 = local_b0;
    } while (iStack_cc < (int)local_d8[6]);
  }
  plVar16 = param_1 + 7;
  if (plVar16 != &local_208) {
    lVar12 = *plVar16;
    for (iVar6 = *(int *)(param_1 + 8); iVar6 != 0; iVar6 = iVar6 + -1) {
      FUN_142b22b80(lVar12);
      lVar12 = lVar12 + 0x38;
    }
    local_218 = 0;
    FUN_140531540(plVar16,local_208,local_200 & 0xffffffff,*(undefined4 *)((longlong)param_1 + 0x44)
                 );
  }
  lVar12 = local_208;
  for (iVar6 = (int)local_200; iVar6 != 0; iVar6 = iVar6 + -1) {
    FUN_142b22b80(lVar12);
    lVar12 = lVar12 + 0x38;
  }
  if (local_208 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140536a50 FUN_140536a50 body=592 status=ok
// SIG undefined FUN_140536a50(void)

undefined8 *
FUN_140536a50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong **pplVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_58;
  longlong *local_50;
  longlong local_48 [4];
  
  plVar6 = (longlong *)0x0;
  pplVar1 = (longlong **)(param_1 + 3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_3;
  *pplVar1 = (longlong *)0x0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 2;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  plVar5 = (longlong *)operator_new(0x88);
  plVar7 = plVar6;
  plVar8 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    local_48[0] = 0;
    local_48[1] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"Invite",0xe);
    local_48[2] = 0;
    local_48[3] = 0;
    FUN_140534540(plVar5,param_2,param_4,param_5,local_48,local_48 + 2);
    if (local_48[2] != 0) {
      FMemory::Free();
    }
    plVar7 = (longlong *)0x1;
    plVar8 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_DestroyObject_143fc2230;
    plVar5[2] = (longlong)plVar8;
    plVar6 = plVar5;
  }
  local_58 = plVar8;
  local_50 = plVar6;
  if (plVar8 != (longlong *)0x0) {
    if ((*plVar8 != 0) && (plVar8[1] != 0)) {
      piVar2 = (int *)(plVar8[1] + 8);
      LOCK();
      iVar4 = *piVar2;
      if (iVar4 == 0) {
        *piVar2 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_140536c10;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar8 = (longlong)plVar8;
    plVar5 = (longlong *)plVar8[1];
    if (plVar6 != plVar5) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar8[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar8[1] = (longlong)plVar6;
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
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
LAB_140536c10:
  if (pplVar1 != &local_58) {
    *pplVar1 = plVar8;
    local_58 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 4,&local_50);
  }
  plVar6 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_50 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if ((plVar7 != (longlong *)0x0) && (local_48[0] != 0)) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140536ca0 FUniqueNetIdNull body=112 status=ok
// SIG undefined FUniqueNetIdNull(void)

undefined8 * FUniqueNetIdNull::FUniqueNetIdNull(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
  uVar1 = *puVar2;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_143f74160;
  FString::FString(param_1 + 3,param_2);
  param_1[5] = uVar1;
  *param_1 = &PTR_FUN_143f74160;
  return param_1;
}



// FUNCTION 140536d10 FUN_140536d10 body=532 status=ok
// SIG undefined FUN_140536d10(void)

undefined8 *
FUN_140536d10(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong **pplVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_28;
  longlong *local_20;
  
  plVar6 = (longlong *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *param_2;
  lVar3 = param_2[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = param_3;
  pplVar1 = (longlong **)(param_1 + 5);
  *pplVar1 = (longlong *)0x0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  plVar5 = (longlong *)operator_new(0x58);
  plVar7 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = param_1[2];
    lVar3 = param_1[3];
    plVar5[3] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    FString::FString(plVar5 + 4,param_4);
    *(undefined4 *)(plVar5 + 6) = 2;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    *(undefined4 *)(plVar5 + 10) = 0;
    plVar7 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143fc21f0;
    plVar5[2] = (longlong)plVar7;
    plVar6 = plVar5;
  }
  local_28 = plVar7;
  local_20 = plVar6;
  if (plVar7 != (longlong *)0x0) {
    if ((*plVar7 != 0) && (plVar7[1] != 0)) {
      piVar2 = (int *)(plVar7[1] + 8);
      LOCK();
      iVar4 = *piVar2;
      if (iVar4 == 0) {
        *piVar2 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_140536ea8;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)plVar7;
    plVar5 = (longlong *)plVar7[1];
    if (plVar6 != plVar5) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar7[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar7[1] = (longlong)plVar6;
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
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
LAB_140536ea8:
  if (pplVar1 != &local_28) {
    *pplVar1 = plVar7;
    local_28 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 6,&local_20);
  }
  plVar6 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_20 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140536f30 FUN_140536f30 body=613 status=ok
// SIG undefined FUN_140536f30(void)

undefined8 *
FUN_140536f30(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong **pplVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_28;
  longlong *local_20;
  
  plVar6 = (longlong *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *param_2;
  lVar3 = param_2[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = param_3;
  pplVar1 = (longlong **)(param_1 + 5);
  *pplVar1 = (longlong *)0x0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 2;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  plVar5 = (longlong *)operator_new(0x90);
  plVar7 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = param_1[2];
    lVar3 = param_1[3];
    plVar5[3] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    FString::FString(plVar5 + 4,param_4);
    *(undefined4 *)(plVar5 + 6) = param_5;
    FString::FString(plVar5 + 7,param_6);
    FString::FString(plVar5 + 9,param_7);
    FString::FString(plVar5 + 0xb,param_8);
    *(undefined4 *)(plVar5 + 0xd) = 2;
    plVar5[0xe] = 0;
    plVar5[0xf] = 0;
    plVar5[0x10] = 0;
    *(undefined4 *)(plVar5 + 0x11) = 0;
    plVar7 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143fc2210;
    plVar5[2] = (longlong)plVar7;
    plVar6 = plVar5;
  }
  local_28 = plVar7;
  local_20 = plVar6;
  if (plVar7 != (longlong *)0x0) {
    if ((*plVar7 != 0) && (plVar7[1] != 0)) {
      piVar2 = (int *)(plVar7[1] + 8);
      LOCK();
      iVar4 = *piVar2;
      if (iVar4 == 0) {
        *piVar2 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_140537119;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)plVar7;
    plVar5 = (longlong *)plVar7[1];
    if (plVar6 != plVar5) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar7[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar7[1] = (longlong)plVar6;
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
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
LAB_140537119:
  if (pplVar1 != &local_28) {
    *pplVar1 = plVar7;
    local_28 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 6,&local_20);
  }
  plVar6 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_20 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1405371a0 FUN_1405371a0 body=513 status=ok
// SIG undefined FUN_1405371a0(void)

undefined8 * FUN_1405371a0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 4) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 2,4);
  }
  iVar1 = *(int *)(param_1 + 3);
  *(int *)(param_1 + 3) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  puVar3 = (undefined4 *)((longlong)iVar1 * 0x60 + param_1[2]);
  *puVar3 = 0;
  *(undefined8 *)(puVar3 + 2) = *param_1;
  lVar2 = param_1[1];
  *(longlong *)(puVar3 + 4) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(puVar3 + 6) = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined8 *)(puVar3 + 10) = 0;
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(undefined8 *)(puVar3 + 0xe) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  *(undefined8 *)(puVar3 + 0x14) = 0;
  *(undefined8 *)(puVar3 + 0x16) = 0;
  iVar1 = *(int *)(param_1 + 3);
  *(int *)(param_1 + 3) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  puVar3 = (undefined4 *)((longlong)iVar1 * 0x60 + param_1[2]);
  *puVar3 = 3;
  *(undefined8 *)(puVar3 + 2) = *param_1;
  lVar2 = param_1[1];
  *(longlong *)(puVar3 + 4) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(puVar3 + 6) = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined8 *)(puVar3 + 10) = 0;
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(undefined8 *)(puVar3 + 0xe) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  *(undefined8 *)(puVar3 + 0x14) = 0;
  *(undefined8 *)(puVar3 + 0x16) = 0;
  iVar1 = *(int *)(param_1 + 3);
  *(int *)(param_1 + 3) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  puVar3 = (undefined4 *)((longlong)iVar1 * 0x60 + param_1[2]);
  *puVar3 = 5;
  *(undefined8 *)(puVar3 + 2) = *param_1;
  lVar2 = param_1[1];
  *(longlong *)(puVar3 + 4) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(puVar3 + 6) = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined8 *)(puVar3 + 10) = 0;
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(undefined8 *)(puVar3 + 0xe) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  *(undefined8 *)(puVar3 + 0x14) = 0;
  *(undefined8 *)(puVar3 + 0x16) = 0;
  iVar1 = *(int *)(param_1 + 3);
  *(int *)(param_1 + 3) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  puVar3 = (undefined4 *)((longlong)iVar1 * 0x60 + param_1[2]);
  *puVar3 = 4;
  *(undefined8 *)(puVar3 + 2) = *param_1;
  lVar2 = param_1[1];
  *(longlong *)(puVar3 + 4) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(puVar3 + 6) = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined8 *)(puVar3 + 10) = 0;
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(undefined8 *)(puVar3 + 0xe) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  *(undefined8 *)(puVar3 + 0x14) = 0;
  *(undefined8 *)(puVar3 + 0x16) = 0;
  return param_1;
}



// FUNCTION 1405373b0 FUN_1405373b0 body=245 status=ok
// SIG undefined FUN_1405373b0(void)

longlong FUN_1405373b0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong lVar1;
  
  FUN_1405343b0();
  FUN_14056c960(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0xb0) = *param_3;
  lVar1 = param_3[1];
  *(longlong *)(param_1 + 0xb8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0x40a00000;
  *(undefined8 *)(param_1 + 0xd8) = 0x40000000;
  *(undefined8 *)(param_1 + 0xe0) = 0x40a00000;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x101) = param_4;
  *(undefined4 *)(param_1 + 0x102) = 0;
  *(undefined2 *)(param_1 + 0x106) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  return param_1;
}



// FUNCTION 1405374b0 FUN_1405374b0 body=120 status=ok
// SIG undefined FUN_1405374b0(void)

undefined8 * FUN_1405374b0(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_143fc1358;
  iVar1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = DAT_1461fb7e0;
  *(undefined2 *)((longlong)param_1 + 0x1a) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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



// FUNCTION 140537530 FUN_140537530 body=243 status=ok
// SIG undefined FUN_140537530(void)

undefined8 * FUN_140537530(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_143fc0fa8;
  param_1[1] = &PTR_FUN_143fc0f88;
  FString::FString(param_1 + 2,param_2 + 0x10);
  FString::FString(param_1 + 4,param_2 + 0x20);
  FString::FString(param_1 + 6,param_2 + 0x30);
  param_1[8] = 0;
  iVar3 = *(int *)(param_2 + 0x48);
  puVar4 = *(undefined8 **)(param_2 + 0x40);
  *(int *)(param_1 + 9) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 8,iVar3,0);
    puVar2 = (undefined8 *)param_1[8];
    do {
      *puVar2 = 0;
      iVar1 = *(int *)(puVar4 + 1);
      _Src = (void *)*puVar4;
      *(int *)(puVar2 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar1 * 2);
      }
      puVar2 = puVar2 + 2;
      puVar4 = puVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}



// FUNCTION 140537630 FUN_140537630 body=142 status=ok
// SIG undefined FUN_140537630(void)

void FUN_140537630(longlong param_1)

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



// FUNCTION 1405376c0 FUN_1405376c0 body=114 status=ok
// SIG undefined FUN_1405376c0(void)

void FUN_1405376c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x18);
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
  plVar4 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 140537740 FUN_140537740 body=128 status=ok
// SIG undefined FUN_140537740(void)

void FUN_140537740(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
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
  plVar4 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1405377c0 ~TArray<FSaveGameUserSetting,FDefaultAllocator> body=100 status=ok
// SIG undefined ~TArray<FSaveGameUserSetting,FDefaultAllocator>(void)

void TArray<FSaveGameUserSetting,FDefaultAllocator>::~TArray<FSaveGameUserSetting,FDefaultAllocator>
               (undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 140537830 FUN_140537830 body=251 status=ok
// SIG undefined FUN_140537830(void)

void FUN_140537830(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    lVar7 = lVar7 + 0x40;
    do {
      plVar4 = *(longlong **)(lVar7 + 0x18);
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
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar7);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar7 + -0x10);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar7 + -0x20);
      plVar4 = *(longlong **)(lVar7 + -0x30);
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
      lVar7 = lVar7 + 0x60;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar7 = *param_1;
  }
  if (lVar7 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140537930 FUN_140537930 body=146 status=ok
// SIG undefined FUN_140537930(void)

void FUN_140537930(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[3];
  if (plVar4 == (longlong *)0x0) {
    *param_1 = IDelegateInstance::vftable;
    return;
  }
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
    *param_1 = IDelegateInstance::vftable;
    return;
  }
  *param_1 = IDelegateInstance::vftable;
  return;
}



// FUNCTION 1405379d0 ~TFunction_OwnedObject<<lambda_4fbeadeba1a6ba96484b02f88bd91642>,1> body=146 status=ok
// SIG undefined ~TFunction_OwnedObject<<lambda_4fbeadeba1a6ba96484b02f88bd91642>,1>(void)

void UE4Function_Private::TFunction_OwnedObject<<lambda_4fbeadeba1a6ba96484b02f88bd91642>,1>::
     ~TFunction_OwnedObject<<lambda_4fbeadeba1a6ba96484b02f88bd91642>,1>(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[2];
  if (plVar4 == (longlong *)0x0) {
    *param_1 = IDelegateInstance::vftable;
    return;
  }
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
    *param_1 = IDelegateInstance::vftable;
    return;
  }
  *param_1 = IDelegateInstance::vftable;
  return;
}



// FUNCTION 140537a70 FUN_140537a70 body=388 status=ok
// SIG undefined FUN_140537a70(void)

void FUN_140537a70(longlong *param_1)

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
      if (bVar4) goto LAB_140537b31;
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
LAB_140537b31:
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
      FUN_140538270((longlong)iStack_1c * 0x38 + *param_1);
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



// FUNCTION 140537c00 ~TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=388 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_140537cc1;
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
LAB_140537cc1:
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
      FUN_140538310((longlong)iStack_1c * 0x68 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
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



// FUNCTION 140537d90 ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=392 status=ok
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
      if (bVar4) goto LAB_140537e51;
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
LAB_140537e51:
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
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
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
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140537f20 FUN_140537f20 body=448 status=ok
// SIG undefined FUN_140537f20(void)

void FUN_140537f20(longlong *param_1)

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
      if (bVar4) goto LAB_140537fe1;
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
LAB_140537fe1:
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
      plVar6 = (longlong *)((longlong)iStack_1c * 0x78 + *param_1);
      FUN_140538430(plVar6 + 2);
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo(param_1,0)
    ;
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



// FUNCTION 1405380e0 ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=392 status=ok
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
      if (bVar4) goto LAB_1405381a1;
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
LAB_1405381a1:
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
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
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
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140538270 FUN_140538270 body=151 status=ok
// SIG undefined FUN_140538270(void)

void FUN_140538270(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_140537830(param_1 + 0x20);
  plVar4 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 140538310 FUN_140538310 body=139 status=ok
// SIG undefined FUN_140538310(void)

void FUN_140538310(longlong param_1)

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
  TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x10,0);
  if (*(longlong *)(param_1 + 0x30) != 0) {
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



// FUNCTION 1405383a0 ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_> body=142 status=ok
// SIG undefined ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>(void)

void UE::Core::Private::Tuple::
     TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
     ::
     ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
               (longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 140538430 FUN_140538430 body=96 status=ok
// SIG undefined FUN_140538430(void)

void FUN_140538430(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  FUN_14056f1b0(param_1);
  return;
}



// FUNCTION 140538490 FUN_140538490 body=291 status=ok
// SIG undefined FUN_140538490(void)

void FUN_140538490(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  plVar4 = *(longlong **)(param_1 + 0x70);
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
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
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



// FUNCTION 1405385c0 FUN_1405385c0 body=341 status=ok
// SIG undefined FUN_1405385c0(void)

void FUN_1405385c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x90);
  plVar4 = *(longlong **)(param_1 + 0x80);
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
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x10);
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
  return;
}



// FUNCTION 140538720 FUN_140538720 body=211 status=ok
// SIG undefined FUN_140538720(void)

void FUN_140538720(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x60);
  TArray<FSaveGameUserSetting,FDefaultAllocator>::~TArray<FSaveGameUserSetting,FDefaultAllocator>
            (param_1 + 0x50);
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
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
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
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}



// FUNCTION 140538800 FUN_140538800 body=358 status=ok
// SIG undefined FUN_140538800(void)

void FUN_140538800(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x70);
  plVar4 = *(longlong **)(param_1 + 0x58);
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
  iVar5 = *(int *)(param_1 + 0x48);
  plVar4 = *(longlong **)(param_1 + 0x40);
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + 0x40);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  plVar4 = *(longlong **)(param_1 + 0x28);
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



// FUNCTION 140538970 FUN_140538970 body=256 status=ok
// SIG undefined FUN_140538970(void)

void FUN_140538970(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143fc06f0;
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
  FOnlineUserPresenceStatus::~FOnlineUserPresenceStatus(param_1 + 7);
  plVar4 = (longlong *)param_1[5];
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
  return;
}



// FUNCTION 140538a70 FUN_140538a70 body=259 status=ok
// SIG undefined FUN_140538a70(void)

void FUN_140538a70(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *local_18;
  longlong *local_10;
  
  *param_1 = &PTR__scalar_deleting_destructor__143fc0730;
  (**(code **)(*(longlong *)param_1[0x1c] + 0x50))((longlong *)param_1[0x1c],&local_18);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x88))(local_18,param_1 + 0x1d);
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
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (param_1[0x30] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedPtr<FString,1>,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x28,0);
  if (param_1[0x2c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x28] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FMemory::Free();
  }
  FUN_140537a70(param_1 + 0x1e);
  FUN_1404f9a80(param_1);
  return;
}



// FUNCTION 140538b80 FUN_140538b80 body=758 status=ok
// SIG undefined FUN_140538b80(void)

void FUN_140538b80(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  *param_1 = &PTR__scalar_deleting_destructor__143fc10f0;
  puVar3 = (undefined8 *)FName::FName(local_res8,"GbxSpark",1);
  uVar4 = FUN_14168dc80();
  cVar2 = FModuleManager::IsModuleLoaded(uVar4,*puVar3);
  uVar10 = 0;
  if (cVar2 != '\0') {
    lVar5 = FUN_142b45e90();
    lVar7 = param_1[0x37];
    iVar11 = 0;
    lVar5 = *(longlong *)(lVar5 + 0x18);
    if (0 < *(int *)(lVar5 + 0x48)) {
      lVar14 = 0;
      do {
        plVar13 = (longlong *)(*(longlong *)(lVar5 + 0x40) + lVar14);
        if ((((int)plVar13[1] != 0) && (plVar6 = (longlong *)*plVar13, plVar6 != (longlong *)0x0))
           && (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res10),
              *plVar6 == lVar7)) {
          if (((int)plVar13[1] != 0) && (plVar6 = (longlong *)*plVar13, plVar6 != (longlong *)0x0))
          {
            (**(code **)(*plVar6 + 0x28))(plVar6,0);
            if (*plVar13 != 0) {
              lVar7 = FMemory::Realloc(*plVar13,0,0);
              *plVar13 = lVar7;
            }
            *(undefined4 *)(plVar13 + 1) = 0;
          }
          break;
        }
        iVar11 = iVar11 + 1;
        lVar14 = lVar14 + 0x10;
      } while (iVar11 < *(int *)(lVar5 + 0x48));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar5 + 0x40,0);
    lVar7 = param_1[0x38];
    uVar9 = uVar10;
    uVar12 = uVar10;
    if (0 < *(int *)(lVar5 + 0x60)) {
      do {
        plVar13 = (longlong *)(*(longlong *)(lVar5 + 0x58) + uVar12);
        if ((((int)plVar13[1] != 0) && (plVar6 = (longlong *)*plVar13, plVar6 != (longlong *)0x0))
           && (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res18),
              *plVar6 == lVar7)) {
          if (((int)plVar13[1] != 0) && (plVar6 = (longlong *)*plVar13, plVar6 != (longlong *)0x0))
          {
            (**(code **)(*plVar6 + 0x28))(plVar6,0);
            if (*plVar13 != 0) {
              lVar7 = FMemory::Realloc(*plVar13,0,0);
              *plVar13 = lVar7;
            }
            *(undefined4 *)(plVar13 + 1) = 0;
          }
          break;
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar12 = uVar12 + 0x10;
      } while ((int)uVar8 < *(int *)(lVar5 + 0x60));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar5 + 0x58,0);
    lVar7 = param_1[0x39];
    uVar9 = uVar10;
    if (0 < *(int *)(lVar5 + 0x78)) {
      do {
        plVar13 = (longlong *)(*(longlong *)(lVar5 + 0x70) + uVar9);
        if ((((int)plVar13[1] != 0) && (plVar6 = (longlong *)*plVar13, plVar6 != (longlong *)0x0))
           && (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res20),
              *plVar6 == lVar7)) {
          if (((int)plVar13[1] != 0) && (plVar6 = (longlong *)*plVar13, plVar6 != (longlong *)0x0))
          {
            (**(code **)(*plVar6 + 0x28))(plVar6,0);
            if (*plVar13 != 0) {
              lVar7 = FMemory::Realloc(*plVar13,0,0);
              *plVar13 = lVar7;
            }
            *(undefined4 *)(plVar13 + 1) = 0;
          }
          break;
        }
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
        uVar9 = uVar9 + 0x10;
      } while ((int)uVar8 < *(int *)(lVar5 + 0x78));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar5 + 0x70),0);
  }
  plVar13 = (longlong *)param_1[0x3e];
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar13 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x3a);
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<FString,1>,unsigned_short>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x23,0);
  if (param_1[0x27] != 0) {
    FMemory::Free();
  }
  if (param_1[0x23] != 0) {
    FMemory::Free();
  }
  FUN_1404e9010(param_1);
  return;
}



// FUNCTION 140538e80 FUN_140538e80 body=304 status=ok
// SIG undefined FUN_140538e80(void)

void FUN_140538e80(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *local_18;
  longlong *local_10;
  
  *param_1 = &PTR_FUN_143fc0a50;
  (**(code **)(*(longlong *)param_1[7] + 0x50))((longlong *)param_1[7],&local_18);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x88))(local_18,param_1 + 8);
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedPtr<FString,1>,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xb,0);
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  iVar4 = *(int *)(param_1 + 10);
  plVar3 = (longlong *)param_1[9];
  if (iVar4 != 0) {
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar3 = (longlong *)param_1[9];
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  *param_1 = &PTR_FUN_143f9cc20;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 140538fb0 FUN_140538fb0 body=395 status=ok
// SIG undefined FUN_140538fb0(void)

void FUN_140538fb0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__143fc0b18;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x7f);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x7d);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x7b);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x79);
  plVar4 = (longlong *)param_1[0x78];
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
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x75);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x73);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x71);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x6f);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x6d);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x6b);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x69);
  param_1[0x56] = &PTR_FUN_143f60df0;
  FUN_1404b6bd0(param_1 + 0x56);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x66);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 99);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x60);
  if (param_1[0x58] != 0) {
    FMemory::Free();
  }
  if (param_1[0x54] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0x53];
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
  FUN_1404e8e20(param_1 + 0x50);
  FUN_1404e90c0(param_1);
  return;
}



// FUNCTION 140539140 FUN_140539140 body=384 status=ok
// SIG undefined FUN_140539140(void)

void FUN_140539140(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 200);
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
  plVar4 = *(longlong **)(param_1 + 0xb8);
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
  plVar4 = *(longlong **)(param_1 + 0xa8);
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
  plVar4 = *(longlong **)(param_1 + 0x98);
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
  plVar4 = *(longlong **)(param_1 + 0x88);
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
  plVar4 = *(longlong **)(param_1 + 0x78);
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



// FUNCTION 1405392c0 FUN_1405392c0 body=384 status=ok
// SIG undefined FUN_1405392c0(void)

void FUN_1405392c0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__143fc13a0;
  FUN_140545e90(param_1 + 0xf,0);
  plVar3 = param_1 + 0x1a;
  FUN_140545e90(plVar3,0);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_1[0x3f] != 0) {
    FMemory::Free();
  }
  FUN_140537f20(param_1 + 0x37);
  FStoryNode::~FStoryNode(param_1 + 0x2f);
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (param_1[0x2d] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x25);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  FUN_140545f10(plVar3,0);
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  if (*plVar3 != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  FUN_140545f10(param_1 + 0xf,0);
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
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
  *param_1 = &PTR_FUN_143f76a58;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 140539440 FUN_140539440 body=373 status=ok
// SIG undefined FUN_140539440(void)

void FUN_140539440(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xd8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 200);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xb8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x58);
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  plVar4 = *(longlong **)(param_1 + 0x18);
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
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}



// FUNCTION 1405395c0 FUN_1405395c0 body=298 status=ok
// SIG undefined FUN_1405395c0(void)

void FUN_1405395c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x60);
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  plVar4 = *(longlong **)(param_1 + 0x18);
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
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}



// FUNCTION 1405396f0 FUN_1405396f0 body=323 status=ok
// SIG undefined FUN_1405396f0(void)

void FUN_1405396f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x50,0);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
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



// FUNCTION 140539840 FUN_140539840 body=181 status=ok
// SIG undefined FUN_140539840(void)

void FUN_140539840(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 200);
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
  plVar4 = *(longlong **)(param_1 + 0xb8);
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
  FUN_14056f1b0(param_1 + 0x60);
  FUN_14056ed50(param_1);
  return;
}



// FUNCTION 140539900 ~FStoryNode body=98 status=ok
// SIG undefined ~FStoryNode(void)

void FStoryNode::~FStoryNode(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x30);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x20);
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



// FUNCTION 140539970 operator= body=122 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FString,TSizedDefaultAllocator<32>_>::operator=(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    plVar1 = (longlong *)*param_1;
    for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
    }
    TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
              (param_1,*param_2,*(undefined4 *)(param_2 + 1),
               *(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  return param_1;
}



// FUNCTION 1405399f0 FUN_1405399f0 body=756 status=ok
// SIG undefined FUN_1405399f0(void)

longlong * FUN_1405399f0(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  uint uStack_74;
  int local_60;
  uint uStack_5c;
  uint *puStack_58;
  uint local_50;
  uint uStack_4c;
  undefined8 uStack_48;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    local_a8 = 0;
    uStack_a4 = 1;
    uStack_94 = 0;
    iStack_90 = 0;
    if (uVar3 != 0) {
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = _Dst;
      }
      uVar9 = *puVar10;
      iStack_90 = 0;
      local_a8 = 0;
      while (uVar9 == 0) {
        lVar7 = (longlong)local_a8;
        iStack_90 = iStack_90 + 0x20;
        iVar8 = local_a8 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
        local_a8 = iVar8;
        if (bVar5) goto LAB_140539acd;
        uVar9 = puVar10[lVar7 + 1];
      }
      uStack_a4 = -uVar9 & uVar9;
      iVar8 = 0x1f;
      if (uStack_a4 != 0) {
        for (; uStack_a4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_a4 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_94 = (iStack_90 - iVar8) + 0x1f;
      if ((int)uVar3 < (int)uStack_94) {
LAB_140539acd:
        uStack_94 = uVar3;
      }
    }
    uStack_74 = *(uint *)(param_1 + 5);
    uVar3 = *(uint *)(param_1 + 5);
    local_50 = 0xffffffff;
    uStack_4c = uStack_94;
    uStack_48 = CONCAT44(uStack_8c,iStack_90);
    uVar9 = uStack_74 & 0xffffffe0;
    local_60 = local_a8;
    uStack_5c = uStack_a4;
    puStack_58 = _Dst;
    if (uStack_74 != uVar3) {
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = _Dst;
      }
      uVar6 = puVar10[(int)uStack_74 >> 5] & -1 << ((byte)uStack_74 & 0x1f);
      iVar8 = (int)uStack_74 >> 5;
      while (uVar6 == 0) {
        uVar9 = uVar9 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_140539b9e;
        uVar6 = puVar10[(longlong)iVar8 + 1];
        iVar8 = iVar8 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar8 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar6 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_74 = (uVar9 - iVar8) + 0x1f;
      if ((int)uVar3 < (int)uStack_74) {
LAB_140539b9e:
        uStack_74 = uVar3;
      }
    }
    while ((uStack_4c != uStack_74 || (puStack_58 != _Dst))) {
      plVar4 = *(longlong **)(*param_1 + 8 + (longlong)(int)uStack_4c * 0x18);
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
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      local_50 = local_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
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



// FUNCTION 140539cf0 operator= body=86 status=ok
// SIG undefined operator=(void)

longlong ChannelId::operator=(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FString::operator=();
  FString::operator=(param_1 + 0x10,param_2 + 0x10);
  FString::operator=(param_1 + 0x20,param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  return param_1;
}



// FUNCTION 140539d50 operator= body=448 status=ok
// SIG undefined operator=(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FJsonSerializer::StackState::operator=(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  *param_1 = *param_2;
  FString::operator=(param_1 + 2,param_2 + 2);
  plVar5 = (longlong *)(param_1 + 6);
  if (plVar5 != (longlong *)(param_2 + 6)) {
    iVar10 = param_1[8];
    if (iVar10 != 0) {
      plVar11 = (longlong *)(*plVar5 + 8);
      do {
        plVar4 = (longlong *)*plVar11;
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
        plVar11 = plVar11 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar10 = param_2[8];
    puVar9 = *(undefined8 **)(param_2 + 6);
    param_1[8] = iVar10;
    if ((iVar10 == 0) && (param_1[9] == 0)) {
      param_1[9] = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar5,iVar10);
      puVar8 = (undefined8 *)*plVar5;
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar8 = *puVar9;
        lVar7 = puVar9[1];
        puVar8[1] = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        puVar8 = puVar8 + 2;
        puVar9 = puVar9 + 2;
      }
    }
  }
  plVar5 = *(longlong **)(param_2 + 0xc);
  puVar9 = (undefined8 *)(param_1 + 10);
  uVar6 = *(undefined8 *)(param_2 + 10);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_68 = uVar6;
  plStack_60 = plVar5;
  if (&local_68 != puVar9) {
    local_68 = *puVar9;
    plStack_60 = *(longlong **)(param_1 + 0xc);
    *puVar9 = uVar6;
    *(longlong **)(param_1 + 0xc) = plVar5;
    local_58 = uVar6;
    plStack_50 = plVar5;
  }
  plVar5 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_60 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140539f10 FUN_140539f10 body=354 status=ok
// SIG undefined FUN_140539f10(void)

longlong * FUN_140539f10(longlong *param_1,longlong param_2)

{
  void **ppvVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  void *local_18;
  ulonglong local_10;
  
  uVar5 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  FUN_1404acbf0(param_1,&local_18);
  ppvVar1 = (void **)(param_2 + 0x50);
  uVar2 = 0;
  if (ppvVar1 != &local_18) {
    lVar4 = (longlong)(int)local_10;
    *(int *)(param_2 + 0x58) = (int)local_10;
    if (((int)local_10 == 0) && (*(int *)(param_2 + 0x5c) == 0)) {
      *(undefined4 *)(param_2 + 0x5c) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar1,local_10 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(*ppvVar1,local_18,lVar4 * 2);
    }
  }
  if ((char)param_1[2] == '\0') {
    iVar6 = *(int *)((longlong)param_1 + 0xc) + 4;
    if ((int)param_1[1] < iVar6) goto LAB_140539fd0;
    puVar3 = (undefined1 *)((longlong)*(int *)((longlong)param_1 + 0xc) + *param_1);
    uVar2 = CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3]);
    *(int *)((longlong)param_1 + 0xc) = iVar6;
  }
  else {
LAB_140539fd0:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  (**(code **)(*(longlong *)(param_2 + 0x18) + 0x10))(param_2 + 0x18,uVar2);
  if ((char)param_1[2] == '\0') {
    iVar6 = *(int *)((longlong)param_1 + 0xc) + 4;
    if (iVar6 <= (int)param_1[1]) {
      puVar3 = (undefined1 *)((longlong)*(int *)((longlong)param_1 + 0xc) + *param_1);
      uVar5 = CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3]);
      *(int *)((longlong)param_1 + 0xc) = iVar6;
      goto LAB_14053a023;
    }
  }
  *(undefined1 *)(param_1 + 2) = 1;
LAB_14053a023:
  (**(code **)(*(longlong *)(param_2 + 0x18) + 0x30))(param_2 + 0x18,uVar5);
  FUN_1404acbf0(param_1,param_2 + 0x28);
  FUN_1404acbf0(param_1,param_2 + 0x40);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return param_1;
}



// FUNCTION 14053a080 FUN_14053a080 body=129 status=ok
// SIG undefined FUN_14053a080(void)

void FUN_14053a080(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_3[1] = 0;
  *param_3 = 0;
  FString::FString(param_2 + 2,param_3 + 2);
  if (param_3[2] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_3[1];
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



// FUNCTION 14053a110 FUN_14053a110 body=253 status=ok
// SIG undefined FUN_14053a110(void)

void FUN_14053a110(undefined8 param_1,longlong *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8 [2];
  undefined1 local_c8;
  longlong local_c0;
  undefined1 local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [64];
  code *local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  
  iVar1 = *param_3;
  if (iVar1 != 0) {
    FString::FString(local_d8,param_2 + 2);
    local_c8 = 0;
    local_c0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    puVar2 = (undefined4 *)FUN_140447410(local_d8,local_80);
    local_e8 = *puVar2;
    uStack_e4 = puVar2[1];
    uStack_e0 = puVar2[2];
    uStack_dc = puVar2[3];
    local_30 = AK::MemoryMgr::StartProfileThreadUsage;
    local_28 = AK::MemoryMgr::StartProfileThreadUsage;
    local_20 = AK::MemoryMgr::StartProfileThreadUsage;
    local_18 = AK::MemoryMgr::StartProfileThreadUsage;
    bifrost::messaging::_guard_xfg_dispatch_icall_nop
              (*(undefined8 *)(*param_2 + 8),iVar1,&local_e8,local_70);
    if (local_c0 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    if (local_d8[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14053a210 FUN_14053a210 body=305 status=ok
// SIG undefined FUN_14053a210(void)

void FUN_14053a210(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_18 [2];
  
  local_18[1] = 0xb;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"total_time",0x16);
  (**(code **)(*param_3 + 0x38))(param_3,local_18,*(undefined4 *)(*param_1 + 0x18c));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"total_participants",0x26);
  (**(code **)(*param_3 + 0x18))(param_3,local_18,*(undefined4 *)(*param_1 + 0x1a0));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"active_participants",0x28);
  (**(code **)(*param_3 + 0x18))(param_3,local_18,*(undefined4 *)(*param_1 + 0x1b0));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14053a350 FUN_14053a350 body=971 status=ok
// SIG undefined FUN_14053a350(void)

void FUN_14053a350(longlong *param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  int local_res8 [2];
  longlong *local_c8;
  int local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong local_58 [2];
  longlong local_48 [2];
  
  plVar2 = (longlong *)param_1[3];
  lVar5 = 0;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  LOCK();
  iVar4 = (int)plVar2[1];
  bVar10 = iVar4 == 0;
  if (bVar10) {
    *(int *)(plVar2 + 1) = 0;
    iVar4 = 0;
  }
  UNLOCK();
  if (bVar10) {
    return;
  }
  while( true ) {
    LOCK();
    bVar10 = iVar4 == (int)plVar2[1];
    if (bVar10) {
      *(int *)(plVar2 + 1) = iVar4 + 1;
    }
    UNLOCK();
    if (bVar10) break;
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar10 = iVar4 == 0;
    if (bVar10) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (bVar10) {
      return;
    }
  }
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  lVar3 = param_1[2];
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x50) != 0)) {
    if (param_2 == 0) {
      FUN_140549500(lVar3 + 0x78,local_res8,param_1);
      if (local_res8[0] != -1) {
        lVar5 = (longlong)local_res8[0] * 0x168 + *(longlong *)(lVar3 + 0x78);
      }
      lVar9 = lVar5 + 0x10;
      if (lVar5 == 0) {
        lVar9 = 0;
      }
      if (lVar9 != 0) {
        local_c8 = (longlong *)0x0;
        local_c0 = 0;
        uVar6 = FUN_140572be0(lVar9);
        local_a8 = *param_1;
        local_a0 = param_1[1];
        if (local_a0 != 0) {
          LOCK();
          *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
          UNLOCK();
        }
        local_90 = param_1[3];
        local_98 = param_1[2];
        if (local_90 != 0) {
          LOCK();
          *(int *)(local_90 + 0xc) = *(int *)(local_90 + 0xc) + 1;
          UNLOCK();
        }
        FString::FString(&local_88,uVar6);
        plVar7 = (longlong *)FMemory::Realloc(0,0x50);
        local_68 = plVar7;
        if (plVar7 == (longlong *)0x0) {
          if (((local_c0 != 0) && (local_c8 != (longlong *)0x0)) &&
             ((**(code **)(*local_c8 + 0x28))(local_c8,0), local_c8 != (longlong *)0x0)) {
            local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
          }
        }
        else {
          *plVar7 = (longlong)&PTR_GetPoolName_143fc20e0;
          plVar7[1] = local_a8;
          plVar7[2] = local_a0;
          if (local_a0 != 0) {
            LOCK();
            *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
            UNLOCK();
          }
          plVar7[3] = local_98;
          plVar7[4] = local_90;
          plVar7[5] = local_88;
          *(undefined4 *)(plVar7 + 6) = (undefined4)local_80;
          *(undefined4 *)((longlong)plVar7 + 0x34) = local_80._4_4_;
          local_80 = 0;
          local_90 = 0;
          local_98 = 0;
          local_88 = 0;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar7[8] = lVar5;
          *plVar7 = (longlong)&PTR_GetPoolName_143fc2128;
          FUN_140540580(plVar7,&local_c8);
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x28))(plVar7,0);
          local_68 = (longlong *)FMemory::Realloc(plVar7,0,0);
          if (local_68 != (longlong *)0x0) {
            FMemory::Free(local_68);
          }
        }
        FUN_140537740(&local_a8);
        plVar7 = (longlong *)FUN_14058b310(*(undefined8 *)(lVar3 + 0x50));
        plVar8 = (longlong *)(**(code **)(*plVar7 + 0x18))(plVar7,lVar9);
        FUN_14053ea00(lVar3,plVar8,param_1);
        FUN_1405681b0(lVar3,local_58,param_3);
        local_b8 = *param_1;
        plVar7 = (longlong *)param_1[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        local_78 = 0;
        local_70 = 0;
        local_b0 = plVar7;
        if ((local_c0 != 0) && (local_c8 != (longlong *)0x0)) {
          (**(code **)(*local_c8 + 0x30))(local_c8,&local_78);
        }
        lVar5 = *plVar8;
        uVar6 = FUN_14054f700(lVar3,local_48,&local_b8);
        (**(code **)(lVar5 + 0x50))(plVar8,uVar6,local_58,&local_78);
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        plVar8 = local_b0;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar7 + 1;
          lVar5 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_b0 + 8))(local_b0,1);
            }
          }
        }
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        if (local_c0 != 0) {
          if (local_c8 == (longlong *)0x0) goto LAB_14053a6cf;
          (**(code **)(*local_c8 + 0x28))(local_c8,0);
          if (local_c8 != (longlong *)0x0) {
            local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
          }
          local_c0 = 0;
        }
        if (local_c8 != (longlong *)0x0) {
          FMemory::Free(local_c8);
        }
      }
    }
    else {
      FUN_14055e4d0(lVar3 + 0x78,param_1);
    }
  }
LAB_14053a6cf:
  LOCK();
  plVar7 = plVar2 + 1;
  lVar5 = *plVar7;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 14053a720 FUN_14053a720 body=320 status=ok
// SIG undefined FUN_14053a720(void)

void FUN_14053a720(longlong *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  bool bVar9;
  longlong local_18;
  longlong *local_10;
  
  plVar3 = (longlong *)param_1[1];
  plVar8 = (longlong *)0x0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar9 = iVar6 == 0;
    if (bVar9) {
      *(int *)(plVar3 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (!bVar9) {
      while( true ) {
        LOCK();
        bVar9 = iVar6 == (int)plVar3[1];
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar9) break;
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(plVar3 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar9) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        lVar4 = *param_1;
        if (lVar4 != 0) {
          if (param_2 == 0) {
            *(undefined4 *)(lVar4 + 0x58) = param_4;
            uVar7 = 1;
          }
          else {
            uVar7 = 8;
          }
          *(undefined4 *)(lVar4 + 0x30) = uVar7;
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          local_18 = lVar4;
          local_10 = plVar3;
          if (((*(int *)(lVar4 + 0x68) != 0) && (*(longlong **)(lVar4 + 0x60) != (longlong *)0x0))
             && (cVar5 = (**(code **)(**(longlong **)(lVar4 + 0x60) + 0x18))(), cVar5 != '\0')) {
            if (*(int *)(lVar4 + 0x68) != 0) {
              plVar8 = *(longlong **)(lVar4 + 0x60);
            }
            (**(code **)(*plVar8 + 0x40))(plVar8,&local_18);
          }
          plVar8 = local_10;
          if (local_10 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_10 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_10)(local_10);
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
        }
        LOCK();
        plVar8 = plVar3 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
    }
  }
  return;
}



// FUNCTION 14053a860 FUN_14053a860 body=907 status=ok
// SIG undefined FUN_14053a860(void)

void FUN_14053a860(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong local_c8 [3];
  undefined4 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  undefined **local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [8];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  if (param_3 == 0xc9) {
    uVar9 = *param_1;
    uVar10 = param_1[1];
    plVar3 = (longlong *)param_1[2];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    plVar4 = (longlong *)param_1[4];
    uVar5 = param_1[3];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    FTickAnimationPlayers::FTickAnimationPlayers(local_50);
    lVar7 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar7 + 0x18),&local_a8,param_1 + 1);
    FUN_142b47dc0(local_a8,&local_98);
    plVar6 = (longlong *)param_1[3];
    local_88 = 0;
    uStack_80 = 0;
    local_c8[2] = 0;
    local_b0 = 0;
    puVar8 = (undefined8 *)operator_new(0x40,local_c8 + 2);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_GetPoolName_143fc15d0;
      puVar8[1] = uVar9;
      puVar8[2] = uVar10;
      puVar8[3] = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      puVar8[4] = uVar5;
      puVar8[5] = plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[7] = uVar9;
      *puVar8 = &PTR_GetPoolName_143fc1618;
    }
    local_68 = &PTR_FUN_143fc0670;
    FString::FString(local_60,local_48);
    uVar9 = (**(code **)(*plVar6 + 0x28))(plVar6,local_38);
    uVar10 = FUN_142b46360(local_a8,local_78);
    FUN_142ae4070(local_98,uVar10,uVar9,&local_68,local_c8 + 2,&local_88);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_90 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_a0 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    FUN_142b1e190(local_50);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  }
  else {
    if (99 < param_3 - 200U) {
      if (param_3 == 0x194) {
                    /* WARNING: Could not recover jumptable at 0x00014053ab93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,param_1 + 1,param_1 + 3,5);
        return;
      }
      if ((param_3 != 0) && (param_3 != 599)) {
                    /* WARNING: Could not recover jumptable at 0x00014053abc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,param_1 + 1,param_1 + 3,8);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014053abe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,param_1 + 1,param_1 + 3,6);
      return;
    }
    (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,param_1 + 1,param_1 + 3,0);
    FUN_1405627d0(*param_1,param_1 + 1,param_1 + 3,3);
    local_c8[1] = 0x1c;
    local_c8[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
    FGenericPlatformString::Memcpy(local_c8[0],L"SPARK_FRIEND_INVITE_MESSAGE",0x38);
    FUN_14055ffc0(*param_1,param_1 + 1,param_1 + 3,local_c8);
    if (local_c8[0] != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 14053abf0 FUN_14053abf0 body=839 status=ok
// SIG undefined FUN_14053abf0(void)

void FUN_14053abf0(longlong *param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  int local_res8 [2];
  longlong *local_98;
  int local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong *local_78;
  longlong local_68 [2];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  plVar2 = (longlong *)param_1[3];
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  LOCK();
  iVar4 = (int)plVar2[1];
  bVar8 = iVar4 == 0;
  if (bVar8) {
    *(int *)(plVar2 + 1) = 0;
    iVar4 = 0;
  }
  UNLOCK();
  if (bVar8) {
    return;
  }
  while( true ) {
    LOCK();
    bVar8 = iVar4 == (int)plVar2[1];
    if (bVar8) {
      *(int *)(plVar2 + 1) = iVar4 + 1;
    }
    UNLOCK();
    if (bVar8) break;
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (bVar8) {
      return;
    }
  }
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  lVar3 = param_1[2];
  if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x50) != 0)) && (param_2 == 0)) {
    FUN_140549500(lVar3 + 0x78,local_res8,param_1);
    lVar6 = 0;
    if (local_res8[0] != -1) {
      lVar6 = (longlong)local_res8[0] * 0x168 + *(longlong *)(lVar3 + 0x78);
    }
    lVar7 = lVar6 + 0x10;
    if (lVar6 == 0) {
      lVar7 = 0;
    }
    if (lVar7 != 0) {
      local_58 = *param_1;
      lVar6 = param_1[1];
      local_98 = (longlong *)0x0;
      local_90 = 0;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      local_48 = param_1[2];
      local_40 = param_1[3];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
        UNLOCK();
      }
      local_50 = lVar6;
      plVar5 = (longlong *)FMemory::Realloc(0,0x40);
      local_78 = plVar5;
      if (plVar5 == (longlong *)0x0) {
        if (((local_90 != 0) && (local_98 != (longlong *)0x0)) &&
           ((**(code **)(*local_98 + 0x28))(local_98,0), local_98 != (longlong *)0x0)) {
          local_98 = (longlong *)FMemory::Realloc(local_98,0,0);
        }
      }
      else {
        *plVar5 = (longlong)&PTR_GetPoolName_143fc1fc0;
        plVar5[1] = local_58;
        plVar5[2] = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        plVar5[3] = local_48;
        plVar5[4] = local_40;
        local_40 = 0;
        local_48 = 0;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[6] = lVar6;
        *plVar5 = (longlong)&PTR_GetPoolName_143fc2008;
        FUN_1405404b0(plVar5,&local_98);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        local_78 = (longlong *)FMemory::Realloc(plVar5,0,0);
        if (local_78 != (longlong *)0x0) {
          FMemory::Free(local_78);
        }
      }
      FUN_1405376c0(&local_58);
      plVar5 = (longlong *)FUN_14058b310(*(undefined8 *)(lVar3 + 0x50));
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5,lVar7);
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x60))(plVar5,lVar7 + 0x60);
      FUN_14053e2d0(lVar3,plVar5,param_1);
      FUN_1405681b0(lVar3,local_68,param_3);
      local_88 = 0;
      local_80 = 0;
      if ((local_90 != 0) && (local_98 != (longlong *)0x0)) {
        (**(code **)(*local_98 + 0x30))(local_98,&local_88);
      }
      (**(code **)(*plVar5 + 0x50))(plVar5,1,0,0,local_68,&local_88);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if (local_90 != 0) {
        if (local_98 == (longlong *)0x0) goto LAB_14053aeec;
        (**(code **)(*local_98 + 0x28))(local_98,0);
        if (local_98 != (longlong *)0x0) {
          local_98 = (longlong *)FMemory::Realloc(local_98,0,0);
        }
        local_90 = 0;
      }
      if (local_98 != (longlong *)0x0) {
        FMemory::Free(local_98);
      }
    }
  }
LAB_14053aeec:
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
  return;
}



// FUNCTION 14053af40 FUN_14053af40 body=66 status=ok
// SIG undefined FUN_14053af40(void)

undefined8 * FUN_14053af40(undefined8 *param_1,ulonglong param_2)

{
  FUN_140537630(param_1 + 1);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14053af90 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FTextHistory_Transform::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140537930();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14053afd0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE::Core::Private::Function::
TFunction_CopyableOwnedObject<``FOnlineSessionEOS::OnLobbyInviteReceived'::`2'::<lambda_1>::operator()'::`15'::<lambda_1>,1>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_1405376c0(param_1 + 1);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14053b020 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_4fbeadeba1a6ba96484b02f88bd91642>,1>::
_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  TFunction_OwnedObject<<lambda_4fbeadeba1a6ba96484b02f88bd91642>,1>::
  ~TFunction_OwnedObject<<lambda_4fbeadeba1a6ba96484b02f88bd91642>,1>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14053b060 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_ec1f6a91f7f823408d9544c27a32f674>,1>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_140537740(param_1 + 1);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14053b0b0 FUN_14053b0b0 body=98 status=ok
// SIG undefined FUN_14053b0b0(void)

undefined8 * FUN_14053b0b0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
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
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14053b120 FUN_14053b120 body=43 status=ok
// SIG undefined FUN_14053b120(void)

undefined8 * FUN_14053b120(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14053b150 FUN_14053b150 body=43 status=ok
// SIG undefined FUN_14053b150(void)

undefined8 * FUN_14053b150(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14053b180 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FNavigationMetaData>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 14053b1b0 FUN_14053b1b0 body=43 status=ok
// SIG undefined FUN_14053b1b0(void)

undefined8 * FUN_14053b1b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 14053b1e0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SVerticalBox>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 14053b210 FUN_14053b210 body=43 status=ok
// SIG undefined FUN_14053b210(void)

undefined8 * FUN_14053b210(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 14053b240 FUN_14053b240 body=43 status=ok
// SIG undefined FUN_14053b240(void)

undefined8 * FUN_14053b240(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x420);
  }
  return param_1;
}



// FUNCTION 14053b270 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FUICommandList>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 14053b2a0 FUN_14053b2a0 body=43 status=ok
// SIG undefined FUN_14053b2a0(void)

undefined8 * FUN_14053b2a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 14053b2d0 FUN_14053b2d0 body=52 status=ok
// SIG undefined FUN_14053b2d0(void)

undefined8 FUN_14053b2d0(undefined8 param_1,ulonglong param_2)

{
  FUN_142b1e0b0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14053b310 FUN_14053b310 body=222 status=ok
// SIG undefined FUN_14053b310(void)

longlong FUN_14053b310(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x40);
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  plVar4 = *(longlong **)(param_1 + 0x18);
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
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14053b3f0 FUN_14053b3f0 body=291 status=ok
// SIG undefined FUN_14053b3f0(void)

longlong FUN_14053b3f0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x58);
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
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
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14053b520 FUN_14053b520 body=298 status=ok
// SIG undefined FUN_14053b520(void)

longlong FUN_14053b520(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x90);
  plVar4 = *(longlong **)(param_1 + 0x88);
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
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
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
  plVar4 = *(longlong **)(param_1 + 0x18);
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
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14053b650 FUN_14053b650 body=236 status=ok
// SIG undefined FUN_14053b650(void)

longlong FUN_14053b650(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x48);
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
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
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
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14053b740 FUN_14053b740 body=245 status=ok
// SIG undefined FUN_14053b740(void)

longlong FUN_14053b740(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x60);
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x10);
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



// FUNCTION 14053b840 FUN_14053b840 body=289 status=ok
// SIG undefined FUN_14053b840(void)

longlong FUN_14053b840(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x108);
  FUN_1404bf650(param_1 + 0x48);
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  plVar4 = *(longlong **)(param_1 + 0x28);
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
  plVar4 = *(longlong **)(param_1 + 0x18);
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
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 14053b970 FUN_14053b970 body=248 status=ok
// SIG undefined FUN_14053b970(void)

longlong FUN_14053b970(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x108);
  FUN_1404bf650(param_1 + 0x48);
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
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
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 14053ba70 FUN_14053ba70 body=291 status=ok
// SIG undefined FUN_14053ba70(void)

longlong FUN_14053ba70(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x60);
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 14053bba0 FUN_14053bba0 body=204 status=ok
// SIG undefined FUN_14053bba0(void)

longlong FUN_14053bba0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x60);
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x10);
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



// FUNCTION 14053bc70 FUN_14053bc70 body=213 status=ok
// SIG undefined FUN_14053bc70(void)

undefined8 *
FUN_14053bc70(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_10;
  
  *param_1 = &PTR_FUN_143fc1500;
  if (DAT_146853548 != (longlong *)0x0) {
    (**(code **)(*DAT_146853548 + 0x110))();
    local_10 = (longlong *)0x0;
    DAT_146853548 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&DAT_146853550,&local_10,param_3,param_4,0);
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



// FUNCTION 14053bd50 FUN_14053bd50 body=52 status=ok
// SIG undefined FUN_14053bd50(void)

undefined8 FUN_14053bd50(undefined8 param_1,ulonglong param_2)

{
  FUN_140538970();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 14053bd90 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FLightVPLsCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140538a70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 14053bdd0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFDownsampleCS::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_140538b80();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f8);
  }
  return param_1;
}



// FUNCTION 14053be10 FUN_14053be10 body=52 status=ok
// SIG undefined FUN_14053be10(void)

undefined8 FUN_14053be10(undefined8 param_1,ulonglong param_2)

{
  FUN_140538e80();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 14053be50 FUN_14053be50 body=130 status=ok
// SIG undefined FUN_14053be50(void)

undefined8 * FUN_14053be50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fc0630;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  param_1[3] = &PTR_FUN_143f9a360;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 1);
  *param_1 = &PTR_FUN_143f7c9f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14053bee0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TResourcePool<TRefCountPtr<FRHIIndexBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140538fb0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x410);
  }
  return param_1;
}



// FUNCTION 14053bf20 FUN_14053bf20 body=52 status=ok
// SIG undefined FUN_14053bf20(void)

undefined8 FUN_14053bf20(undefined8 param_1,ulonglong param_2)

{
  FUN_140539140();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 14053bf60 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TIndirectTextData<FTextHistory_StringTableEntry>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__143f9d148;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14053bfb0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UUGXPBarUW::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1405392c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x228);
  }
  return param_1;
}



// FUNCTION 14053bff0 FUN_14053bff0 body=182 status=ok
// SIG undefined FUN_14053bff0(void)

longlong FUN_14053bff0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
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
  TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::
  ~TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>(param_1 + 0x10);
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14053c0b0 FUN_14053c0b0 body=167 status=ok
// SIG undefined FUN_14053c0b0(void)

longlong FUN_14053c0b0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x30);
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
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14053c160 FUN_14053c160 body=291 status=ok
// SIG undefined FUN_14053c160(void)

longlong FUN_14053c160(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x60);
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x28);
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
  plVar4 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 14053c290 FUN_14053c290 body=300 status=ok
// SIG undefined FUN_14053c290(void)

longlong FUN_14053c290(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x90);
  plVar4 = *(longlong **)(param_1 + 0x88);
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
  iVar5 = *(int *)(param_1 + 0x78);
  plVar4 = *(longlong **)(param_1 + 0x70);
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + 0x70);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  FUN_142b22b30(param_1 + 0x20);
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14053c3c0 FUN_14053c3c0 body=278 status=ok
// SIG undefined FUN_14053c3c0(void)

longlong FUN_14053c3c0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x80);
  plVar4 = *(longlong **)(param_1 + 0x78);
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
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
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
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14053c4e0 FUN_14053c4e0 body=158 status=ok
// SIG undefined FUN_14053c4e0(void)

undefined8 * FUN_14053c4e0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143fc1358;
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
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14053c580 FUN_14053c580 body=52 status=ok
// SIG undefined FUN_14053c580(void)

undefined8 FUN_14053c580(undefined8 param_1,ulonglong param_2)

{
  FUN_142b1e190();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14053c5c0 FUN_14053c5c0 body=52 status=ok
// SIG undefined FUN_14053c5c0(void)

undefined8 FUN_14053c5c0(undefined8 param_1,ulonglong param_2)

{
  FUN_142b1e1c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14053c600 FUN_14053c600 body=52 status=ok
// SIG undefined FUN_14053c600(void)

undefined8 FUN_14053c600(undefined8 param_1,ulonglong param_2)

{
  FUN_142b1e1f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14053c640 FUN_14053c640 body=52 status=ok
// SIG undefined FUN_14053c640(void)

undefined8 FUN_14053c640(undefined8 param_1,ulonglong param_2)

{
  FUN_142b1e270();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14053c680 FUN_14053c680 body=52 status=ok
// SIG undefined FUN_14053c680(void)

undefined8 FUN_14053c680(undefined8 param_1,ulonglong param_2)

{
  FUN_142b22960();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14053c6c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FExec::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FJsonSerializable::~FJsonSerializable();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14053c700 FUN_14053c700 body=52 status=ok
// SIG undefined FUN_14053c700(void)

undefined8 FUN_14053c700(undefined8 param_1,ulonglong param_2)

{
  FUN_142b22b30();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14053c740 FUN_14053c740 body=52 status=ok
// SIG undefined FUN_14053c740(void)

undefined8 FUN_14053c740(undefined8 param_1,ulonglong param_2)

{
  FUN_142b22b80();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14053c780 FUN_14053c780 body=52 status=ok
// SIG undefined FUN_14053c780(void)

undefined8 FUN_14053c780(undefined8 param_1,ulonglong param_2)

{
  FUN_142b22e20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14053c7c0 FUN_14053c7c0 body=52 status=ok
// SIG undefined FUN_14053c7c0(void)

undefined8 FUN_14053c7c0(undefined8 param_1,ulonglong param_2)

{
  FUN_142b22e70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14053c800 FUN_14053c800 body=52 status=ok
// SIG undefined FUN_14053c800(void)

undefined8 FUN_14053c800(undefined8 param_1,ulonglong param_2)

{
  FUN_142b0f560();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14053c840 FUN_14053c840 body=52 status=ok
// SIG undefined FUN_14053c840(void)

undefined8 FUN_14053c840(undefined8 param_1,ulonglong param_2)

{
  FUN_142b0f5d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14053c880 FUN_14053c880 body=52 status=ok
// SIG undefined FUN_14053c880(void)

undefined8 FUN_14053c880(undefined8 param_1,ulonglong param_2)

{
  FUN_142b0f600();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14053c8c0 FUN_14053c8c0 body=674 status=ok
// SIG undefined FUN_14053c8c0(void)

void FUN_14053c8c0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80 [2];
  undefined **local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  
  lVar6 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar6 + 0x18),&local_e8,param_2);
  if (local_e8 == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1,param_2,param_3,4);
  }
  else {
    cVar5 = FUN_142b54900();
    if (cVar5 == '\0') {
      (**(code **)(*param_1 + 0xe8))(param_1,param_2,param_3,7);
    }
    else {
      FUN_142b47dc0(local_e8,&local_c8);
      if (local_c8 == 0) {
        (**(code **)(*param_1 + 0xe8))(param_1,param_2,param_3,6);
      }
      else {
        uVar8 = *param_2;
        lVar6 = param_2[1];
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        lVar3 = param_3[1];
        uVar9 = *param_3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        local_b8 = param_1;
        local_b0 = uVar8;
        local_a8 = lVar6;
        local_a0 = uVar9;
        local_98 = lVar3;
        FTickAnimationPlayers::FTickAnimationPlayers(local_58);
        plVar4 = (longlong *)*param_3;
        local_90 = 0;
        uStack_88 = 0;
        local_d8 = 0;
        local_d0 = 0;
        puVar7 = (undefined8 *)operator_new(0x40,&local_d8);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &PTR_GetPoolName_143fc18a0;
          puVar7[1] = param_1;
          puVar7[2] = uVar8;
          puVar7[3] = lVar6;
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
            UNLOCK();
          }
          puVar7[4] = uVar9;
          puVar7[5] = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[7] = uVar8;
          *puVar7 = &PTR_GetPoolName_143fc18e8;
        }
        local_70 = &PTR_FUN_143fc0670;
        FString::FString(local_68,local_50);
        uVar8 = (**(code **)(*plVar4 + 0x28))(plVar4,local_40);
        uVar9 = FUN_142b46360(local_e8,local_80);
        FUN_142ae4070(local_c8,uVar9,uVar8,&local_70,&local_d8,&local_90);
        if (local_80[0] != 0) {
          FMemory::Free();
        }
        FUN_142b1e190(local_58);
        FUN_140537630(&local_b8);
      }
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
    }
  }
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_e0 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  return;
}



// FUNCTION 14053cb70 FUN_14053cb70 body=226 status=ok
// SIG undefined FUN_14053cb70(void)

void FUN_14053cb70(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if (*param_1 != 0) {
    uVar1 = *param_2;
    iVar3 = TArray<TSharedPtr<FUniqueNetId_const_,0>,FDefaultAllocator>::
            IndexOfByPredicate<FUniqueNetIdMatcher>(param_1 + 6,uVar1);
    if (iVar3 == -1) {
      iVar3 = (int)param_1[7];
      *(int *)(param_1 + 7) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x3c) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 6,iVar3);
      }
      puVar4 = (undefined8 *)((longlong)iVar3 * 0x10 + param_1[6]);
      *puVar4 = *param_2;
      lVar2 = param_2[1];
      puVar4[1] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
    }
    iVar3 = TArray<TSharedPtr<FUniqueNetId_const_,0>,FDefaultAllocator>::
            IndexOfByPredicate<FUniqueNetIdMatcher>(param_1 + 4,uVar1);
    if (iVar3 == -1) {
      iVar3 = (int)param_1[5];
      *(int *)(param_1 + 5) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x2c) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 4,iVar3);
      }
      puVar4 = (undefined8 *)((longlong)iVar3 * 0x10 + param_1[4]);
      *puVar4 = *param_2;
      lVar2 = param_2[1];
      puVar4[1] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 14053cc60 FUN_14053cc60 body=809 status=ok
// SIG undefined FUN_14053cc60(void)

void FUN_14053cc60(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *_Src;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined **local_d8;
  undefined1 local_d0 [16];
  undefined8 *local_c0;
  int local_b8;
  undefined4 local_b4;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [16];
  undefined8 *local_70;
  ulonglong local_68;
  longlong local_60 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  longlong local_40 [3];
  
  lVar7 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar7 + 0x18),&local_108,param_2);
  if (local_108 == 0) {
    (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,4);
  }
  else {
    cVar6 = FUN_142b54900();
    if (cVar6 == '\0') {
      (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,7);
    }
    else {
      FUN_142b47dc0(local_108,&local_e8);
      if (local_e8 == 0) {
        (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,6);
      }
      else {
        FUN_142b1dee0(local_88);
        uVar8 = (**(code **)(*(longlong *)*param_3 + 0x28))((longlong *)*param_3,local_60);
        FString::operator=(local_80,uVar8);
        if (local_60[0] != 0) {
          FMemory::Free();
        }
        uVar8 = *param_2;
        lVar7 = param_2[1];
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        uVar4 = *param_3;
        lVar5 = param_3[1];
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        local_f8 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_f0 = 0;
        local_b0 = param_1;
        local_a8 = uVar8;
        local_a0 = lVar7;
        local_98 = uVar4;
        local_90 = lVar5;
        puVar9 = (undefined8 *)operator_new(0x40,&local_f8);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &PTR_GetPoolName_143fc1660;
          puVar9[1] = param_1;
          puVar9[2] = uVar8;
          puVar9[3] = lVar7;
          if (lVar7 != 0) {
            LOCK();
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
            UNLOCK();
          }
          puVar9[4] = uVar4;
          puVar9[5] = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar9[7] = uVar8;
          *puVar9 = &PTR_GetPoolName_143fc16a8;
        }
        local_d8 = &PTR_FUN_143fc06b0;
        FString::FString(local_d0,local_80);
        local_c0 = (undefined8 *)0x0;
        local_b8 = (int)local_68;
        if (local_b8 == 0) {
          local_b4 = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_c0,local_68 & 0xffffffff,0);
          puVar9 = local_c0;
          do {
            *puVar9 = 0;
            iVar3 = *(int *)(local_70 + 1);
            _Src = (void *)*local_70;
            *(int *)(puVar9 + 1) = iVar3;
            if (iVar3 == 0) {
              *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar9,iVar3,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar9,_Src,(longlong)iVar3 * 2);
            }
            puVar9 = puVar9 + 2;
            local_70 = local_70 + 2;
            uVar10 = (int)local_68 - 1;
            local_68 = (ulonglong)uVar10;
          } while (uVar10 != 0);
        }
        uVar8 = FUN_142b46360(local_108,local_40);
        FUN_142ae5840(local_e8,uVar8,&local_d8,&local_f8,&local_50);
        if (local_40[0] != 0) {
          FMemory::Free();
        }
        FUN_140537630(&local_b0);
        FUN_142b1e1f0(local_88);
      }
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_e0 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar2 = (int *)((longlong)local_e0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
    }
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_100 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar2 = (int *)((longlong)local_100 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  return;
}



// FUNCTION 14053cf90 FUN_14053cf90 body=44 status=ok
// SIG undefined FUN_14053cf90(void)

void FUN_14053cf90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  FUN_140532af0(param_1 + 0x140,local_res8,&local_18,0);
  return;
}



// FUNCTION 14053cfc0 FUN_14053cfc0 body=1849 status=ok
// SIG undefined FUN_14053cfc0(void)

void FUN_14053cfc0(longlong param_1)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *local_res8;
  longlong *local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  void *local_98;
  ulonglong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  iVar10 = *(int *)(param_1 + 0x88);
  plVar11 = (longlong *)0x0;
  local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((iVar10 < 0) || (*(int *)(param_1 + 0x18) <= iVar10)) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      plVar7 = (longlong *)operator_new(0x68);
      plVar9 = plVar11;
      plVar6 = plVar11;
      if (plVar7 != (longlong *)0x0) {
        local_res8 = *(longlong **)(param_1 + 0x40);
        lVar12 = *(longlong *)(param_1 + 0x38);
        if (local_res8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_res8 + 1) = (int)local_res8[1] + 1;
          UNLOCK();
        }
        plVar9 = *(longlong **)(param_1 + 0x10);
        *plVar7 = 0;
        plVar7[1] = 0;
        plVar7[2] = *plVar9;
        lVar4 = plVar9[1];
        plVar7[3] = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        FString::FString(plVar7 + 4);
        plVar7[6] = lVar12;
        plVar7[7] = (longlong)local_res8;
        if (local_res8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_res8 + 1) = (int)local_res8[1] + 1;
          UNLOCK();
        }
        plVar7[8] = 2;
        plVar7[9] = 0;
        plVar7[10] = 0;
        plVar7[0xb] = 0;
        *(undefined4 *)(plVar7 + 0xc) = 0;
        plVar9 = plVar7;
        plVar6 = (longlong *)0x2;
      }
      plVar7 = (longlong *)operator_new(0x18);
      if (plVar7 != (longlong *)0x0) {
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)&PTR_FUN_143fc2270;
        plVar7[2] = (longlong)plVar9;
        plVar11 = plVar7;
      }
      pplVar1 = (longlong **)(param_1 + 0x48);
      local_88 = plVar9;
      local_80 = plVar11;
      if (plVar9 != (longlong *)0x0) {
        if ((*plVar9 != 0) && (plVar9[1] != 0)) {
          piVar2 = (int *)(plVar9[1] + 8);
          LOCK();
          iVar10 = *piVar2;
          if (iVar10 == 0) {
            *piVar2 = 0;
            iVar10 = 0;
          }
          UNLOCK();
          if (0 < iVar10) goto LAB_14053d58a;
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        *plVar9 = (longlong)plVar9;
        plVar7 = (longlong *)plVar9[1];
        if (plVar11 != plVar7) {
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
            plVar7 = (longlong *)plVar9[1];
          }
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar7 + 8))();
            }
          }
          plVar9[1] = (longlong)plVar11;
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
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11);
            }
          }
        }
      }
LAB_14053d58a:
      if (pplVar1 != &local_88) {
        local_88 = (longlong *)0x0;
        *pplVar1 = plVar9;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,&local_80);
      }
      plVar11 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_80 + 1;
        lVar12 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
      if ((plVar6 != (longlong *)0x0) && (local_res8 != (longlong *)0x0)) {
        LOCK();
        plVar11 = local_res8 + 1;
        lVar12 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_res8)(local_res8);
          LOCK();
          piVar2 = (int *)((longlong)local_res8 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_res8 + 8))(local_res8,1);
          }
        }
      }
      plVar11 = *pplVar1;
      if (plVar11 == (longlong *)0x0) {
        return;
      }
      uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_48);
      FUN_1405313f0(plVar11 + 0xb,uVar5,FUN_140553640);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_40 + 1;
        lVar12 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      FUN_1405635c0(*pplVar1);
      return;
    }
    uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_38);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x90,uVar5);
    goto joined_r0x00014053d6a8;
  }
  lVar12 = *(longlong *)(param_1 + 0x10);
  lVar4 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar4 + 0x18),&local_78,(longlong)iVar10 * 0x10 + lVar12);
  if (local_78 == 0) {
    *(undefined4 *)(param_1 + 0x8c) = 2;
    uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_58);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x90,uVar5);
    local_30 = local_70;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_50 + 1;
      lVar12 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        local_30 = local_70;
        if (iVar10 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
          local_30 = local_70;
        }
      }
    }
    goto joined_r0x00014053d6a8;
  }
  local_b8 = (longlong *)0x0;
  local_b0 = 1;
  uVar5 = FUN_1428b4040();
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_b8,0);
  FString::FString(local_b8,uVar5);
  plVar6 = (longlong *)operator_new(0x88);
  plVar9 = plVar11;
  if (plVar6 != (longlong *)0x0) {
    local_98 = (void *)0x0;
    local_90 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"CreateSession",0x1c);
    plVar11 = *(longlong **)(param_1 + 0x10);
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[2] = *plVar11;
    lVar12 = plVar11[1];
    plVar6[3] = lVar12;
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
    }
    plVar6[4] = 0;
    iVar10 = (int)local_b0;
    *(int *)(plVar6 + 5) = (int)local_b0;
    if ((int)local_b0 == 0) {
      *(undefined4 *)((longlong)plVar6 + 0x2c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar6 + 4,local_b0 & 0xffffffff,0);
      puVar8 = (undefined8 *)plVar6[4];
      plVar11 = local_b8;
      do {
        *puVar8 = 0;
        iVar3 = (int)plVar11[1];
        _Src = (void *)*plVar11;
        *(int *)(puVar8 + 1) = iVar3;
        if (iVar3 == 0) {
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8,iVar3,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar8,_Src,(longlong)iVar3 * 2);
        }
        puVar8 = puVar8 + 2;
        plVar11 = plVar11 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    FString::FString(plVar6 + 6,param_1 + 0x58);
    lVar12 = (longlong)(int)local_90;
    plVar6[8] = 0;
    *(int *)(plVar6 + 9) = (int)local_90;
    if ((int)local_90 == 0) {
      *(undefined4 *)((longlong)plVar6 + 0x4c) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar6 + 8,local_90 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)plVar6[8],local_98,lVar12 * 2);
    }
    plVar6[10] = 0;
    plVar6[0xb] = 0;
    *(undefined4 *)(plVar6 + 0xc) = 2;
    plVar6[0xd] = 0;
    plVar6[0xe] = 0;
    plVar6[0xf] = 0;
    *(undefined4 *)(plVar6 + 0x10) = 0;
    plVar11 = plVar6;
    plVar9 = (longlong *)0x1;
  }
  plVar6 = (longlong *)0x0;
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_143fc2230;
    plVar7[2] = (longlong)plVar11;
    plVar6 = plVar7;
  }
  pplVar1 = (longlong **)(param_1 + 0x78);
  local_a8 = plVar11;
  local_a0 = plVar6;
  if (plVar11 != (longlong *)0x0) {
    if ((*plVar11 != 0) && (plVar11[1] != 0)) {
      piVar2 = (int *)(plVar11[1] + 8);
      LOCK();
      iVar10 = *piVar2;
      if (iVar10 == 0) {
        *piVar2 = 0;
        iVar10 = 0;
      }
      UNLOCK();
      if (0 < iVar10) goto LAB_14053d2a3;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar11 = (longlong)plVar11;
    plVar7 = (longlong *)plVar11[1];
    if (plVar6 != plVar7) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar11[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar11[1] = (longlong)plVar6;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      lVar12 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
LAB_14053d2a3:
  if (pplVar1 != &local_a8) {
    *pplVar1 = plVar11;
    local_a8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x80,&local_a0);
  }
  plVar11 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_a0 + 1;
    lVar12 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if ((plVar9 != (longlong *)0x0) && (local_98 != (void *)0x0)) {
    FMemory::Free();
  }
  plVar11 = *pplVar1;
  if (plVar11 != (longlong *)0x0) {
    uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_68);
    FUN_1405313f0(plVar11 + 0xf,uVar5,FUN_140553980);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_60 + 1;
      lVar12 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    FUN_140563940(*pplVar1);
  }
  plVar11 = local_b8;
  for (iVar10 = (int)local_b0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  local_30 = local_70;
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free();
    local_30 = local_70;
  }
joined_r0x00014053d6a8:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_30 + 1;
    lVar12 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 14053d700 FUN_14053d700 body=977 status=ok
// SIG undefined FUN_14053d700(void)

void FUN_14053d700(longlong param_1)

{
  longlong **pplVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  iVar9 = *(int *)(param_1 + 0x58);
  plVar8 = (longlong *)0x0;
  if ((iVar9 < 0) || (*(int *)(param_1 + 0x18) <= iVar9)) {
    *(undefined4 *)(param_1 + 0x5c) = 1;
    uVar4 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_38);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x60,uVar4);
    goto joined_r0x00014053da8a;
  }
  lVar5 = *(longlong *)(param_1 + 0x10);
  lVar3 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar3 + 0x18),&local_68,(longlong)iVar9 * 0x10 + lVar5);
  if (local_68 == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 2;
    uVar4 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_48);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x60,uVar4);
    local_30 = local_60;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_40 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        local_30 = local_60;
        if (iVar9 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
          local_30 = local_60;
        }
      }
    }
    goto joined_r0x00014053da8a;
  }
  local_98 = (longlong *)0x0;
  local_90 = 1;
  uVar4 = FUN_1428b4040();
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_98,0);
  FString::FString(local_98,uVar4);
  lVar5 = operator_new(0x88);
  plVar6 = plVar8;
  if (lVar5 != 0) {
    local_78 = 0;
    local_70 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"JoinSession",0x18);
    plVar6 = (longlong *)
             FUN_140534540(lVar5,*(undefined8 *)(param_1 + 0x10),&local_98,param_1 + 0x28,&local_78,
                           param_1 + 0x38);
  }
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_143fc2230;
    plVar7[2] = (longlong)plVar6;
    plVar8 = plVar7;
  }
  pplVar1 = (longlong **)(param_1 + 0x48);
  local_88 = plVar6;
  local_80 = plVar8;
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar2 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar9 = *piVar2;
      if (iVar9 == 0) {
        *piVar2 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (0 < iVar9) goto LAB_14053d8ec;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar6;
    plVar7 = (longlong *)plVar6[1];
    if (plVar8 != plVar7) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar6[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar6[1] = (longlong)plVar8;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
  }
LAB_14053d8ec:
  if (pplVar1 != &local_88) {
    *pplVar1 = plVar6;
    local_88 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,&local_80);
  }
  plVar8 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_80 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if ((lVar5 != 0) && (local_78 != 0)) {
    FMemory::Free();
  }
  plVar8 = *pplVar1;
  if (plVar8 != (longlong *)0x0) {
    uVar4 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_58);
    FUN_1405313f0(plVar8 + 0xf,uVar4,FUN_140553ac0);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    FUN_140563940(*pplVar1);
  }
  plVar8 = local_98;
  for (iVar9 = (int)local_90; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  local_30 = local_60;
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
    local_30 = local_60;
  }
joined_r0x00014053da8a:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_30 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 14053dae0 FUN_14053dae0 body=153 status=ok
// SIG undefined FUN_14053dae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14053dae0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_142b45e90();
  lVar2 = *(longlong *)(lVar2 + 0x18);
  if ((*(int *)(lVar2 + 0x1b0) != 0) && (*(longlong **)(lVar2 + 0x1a8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(lVar2 + 0x1a8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(lVar2 + 0x1b0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014053db45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x1a8) + 0x38))
                          (*(longlong **)(lVar2 + 0x1a8),param_1,param_2);
        return uVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x00014053db63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(_DAT_00000000 + 0x38))(0,param_1,param_2);
      return uVar3;
    }
  }
  return 1;
}



// FUNCTION 14053db80 FUN_14053db80 body=975 status=ok
// SIG undefined FUN_14053db80(void)

undefined1 FUN_14053db80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  uint *puVar15;
  longlong *plVar16;
  uint local_c8;
  uint uStack_c4;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  uint uStack_94;
  ulonglong local_80;
  longlong *local_78;
  longlong *local_70;
  uint uStack_68;
  uint uStack_64;
  uint *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_50;
  
  plVar16 = (longlong *)0x0;
  uStack_c4 = 1;
  plVar1 = (longlong *)(param_1 + 0x78);
  local_c8 = 0;
  uVar4 = *(uint *)(param_1 + 0xa0);
  puVar2 = (uint *)(param_1 + 0x88);
  uStack_b4 = 0;
  uStack_b0 = 0;
  if (uVar4 != 0) {
    puVar15 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar15 = puVar2;
    }
    uVar14 = *puVar15;
    plVar10 = plVar16;
    plVar13 = plVar16;
    while (uVar14 == 0) {
      iVar8 = (int)plVar13;
      uStack_b0 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_b0;
      local_c8 = iVar8 + 1;
      plVar13 = (longlong *)(ulonglong)local_c8;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_14053dc5d;
      uVar14 = puVar15[(longlong)iVar8 + 1];
    }
    uStack_c4 = -uVar14 & uVar14;
    iVar8 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_b4 = (uStack_b0 - iVar8) + 0x1f;
    if ((int)uVar4 < (int)uStack_b4) {
LAB_14053dc5d:
      uStack_b4 = uVar4;
    }
  }
  uStack_94 = *(uint *)(param_1 + 0xa0);
  uStack_58 = 0xffffffff;
  uStack_54 = uStack_b4;
  local_50 = CONCAT44(uStack_ac,uStack_b0);
  uVar14 = uStack_94 & 0xffffffe0;
  uStack_68 = local_c8;
  uStack_64 = uStack_c4;
  local_60 = puVar2;
  local_70 = plVar1;
  if (uStack_94 != uVar4) {
    puVar15 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar15 = puVar2;
    }
    uVar11 = puVar15[(int)uStack_94 >> 5] & -1 << ((byte)uStack_94 & 0x1f);
    iVar8 = (int)uStack_94 >> 5;
    while (uVar11 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_14053dd3d;
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
    uStack_94 = (uVar14 - iVar8) + 0x1f;
    if ((int)uVar4 < (int)uStack_94) {
LAB_14053dd3d:
      uStack_94 = uVar4;
    }
  }
  while (((lVar12 = (longlong)(int)uStack_54, uStack_54 != uStack_94 || (local_60 != puVar2)) ||
         (local_70 != plVar1))) {
    lVar5 = *local_70;
    lVar9 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar9 + 0x18),&local_80,lVar12 * 0x168 + 0xc0 + lVar5);
    plVar10 = local_78;
    if ((local_80 != 0) && (*(char *)(local_80 + 600) == '\0')) {
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_78 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar3 = (int *)((longlong)local_78 + 0xc);
          iVar8 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_78 + 8))(local_78,1);
          }
        }
      }
      plVar1 = *(longlong **)(param_2 + 8);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar1 + 1;
        lVar12 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          iVar8 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      return 0;
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_78 + 1;
      lVar12 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar3 = (int *)((longlong)plVar10 + 0xc);
        iVar8 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    uStack_58 = uStack_58 & ~uStack_64;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_68);
  }
  cVar6 = FUN_140551100(param_1,param_2);
  if (cVar6 == '\0') {
    lVar12 = FUN_142b45e90();
    if ((*(int *)(*(longlong *)(lVar12 + 0x18) + 0x180) != 0) &&
       (plVar1 = *(longlong **)(*(longlong *)(lVar12 + 0x18) + 0x178), plVar1 != (longlong *)0x0)) {
      cVar6 = (**(code **)(*plVar1 + 0x18))();
      if (cVar6 != '\0') {
        lVar12 = FUN_142b45e90();
        if (*(int *)(*(longlong *)(lVar12 + 0x18) + 0x180) != 0) {
          plVar16 = *(longlong **)(*(longlong *)(lVar12 + 0x18) + 0x178);
        }
        uVar7 = (**(code **)(*plVar16 + 0x38))(plVar16);
        plVar1 = *(longlong **)(param_2 + 8);
        if (plVar1 == (longlong *)0x0) {
          return uVar7;
        }
        LOCK();
        plVar16 = plVar1 + 1;
        lVar12 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar12 != 1) {
          return uVar7;
        }
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        iVar8 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar8 != 1) {
          return uVar7;
        }
        (**(code **)(*plVar1 + 8))(plVar1,1);
        return uVar7;
      }
    }
  }
  plVar1 = *(longlong **)(param_2 + 8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar1 + 1;
    lVar12 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar8 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  return 1;
}



// FUNCTION 14053df50 FUN_14053df50 body=889 status=ok
// SIG undefined FUN_14053df50(void)

void FUN_14053df50(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong local_98 [2];
  longlong local_88 [2];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined **local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_60 = *(undefined8 *)(param_3 + 8);
  local_58 = *(longlong **)(param_3 + 0x10);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  local_68 = &PTR_FUN_143f740c8;
  local_50 = 0;
  local_48 = 0;
  puVar6 = (undefined8 *)FUN_1425f5be0(&local_68,local_78);
  uVar7 = FJsonValue::AsString(*puVar6,local_88);
  uVar7 = operator<<(param_2,uVar7);
  plVar8 = (longlong *)operator<<(uVar7,param_3 + 0x18);
  if ((*(char *)((longlong)plVar8 + 0x14) == '\0') && ((int)plVar8[2] + 4U <= *(uint *)(plVar8 + 1))
     ) {
    *(undefined1 *)((longlong)(int)plVar8[2] + *plVar8) = *(undefined1 *)(param_3 + 0xb3);
    *(undefined1 *)((longlong)(int)plVar8[2] + 1 + *plVar8) = *(undefined1 *)(param_3 + 0xb2);
    *(undefined1 *)((longlong)(int)plVar8[2] + 2 + *plVar8) = *(undefined1 *)(param_3 + 0xb1);
    *(undefined1 *)((longlong)(int)plVar8[2] + 3 + *plVar8) = *(undefined1 *)(param_3 + 0xb0);
    *(int *)(plVar8 + 2) = (int)plVar8[2] + 4;
    cVar5 = *(char *)((longlong)plVar8 + 0x14);
  }
  else {
    *(undefined1 *)((longlong)plVar8 + 0x14) = 1;
    cVar5 = '\x01';
  }
  if ((cVar5 == '\0') && ((int)plVar8[2] + 4U <= *(uint *)(plVar8 + 1))) {
    *(undefined1 *)((longlong)(int)plVar8[2] + *plVar8) = *(undefined1 *)(param_3 + 0xb7);
    *(undefined1 *)((longlong)(int)plVar8[2] + 1 + *plVar8) = *(undefined1 *)(param_3 + 0xb6);
    *(undefined1 *)((longlong)(int)plVar8[2] + 2 + *plVar8) = *(undefined1 *)(param_3 + 0xb5);
    *(undefined1 *)((longlong)(int)plVar8[2] + 3 + *plVar8) = *(undefined1 *)(param_3 + 0xb4);
    *(int *)(plVar8 + 2) = (int)plVar8[2] + 4;
  }
  else {
    *(undefined1 *)((longlong)plVar8 + 0x14) = 1;
  }
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_70 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar8 = *(longlong **)(param_3 + 0xa8);
  plVar3 = *(longlong **)(param_3 + 0xa0);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x38))(plVar3,local_98);
  operator<<(param_2,local_98);
  (**(code **)(plVar3[3] + 0x28))(plVar3 + 3,local_res10);
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
  (**(code **)(plVar3[3] + 0x40))(plVar3 + 3,local_res18);
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
  operator<<(param_2,plVar3 + 5);
  operator<<(param_2,plVar3 + 8);
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  FUN_1404eca80(param_1,param_2,param_3 + 0x28);
  local_68 = &PTR_FUN_143f740c8;
  if (local_50 != 0) {
    FMemory::Free();
  }
  plVar8 = local_58;
  local_68 = &PTR_FUN_143f73d18;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
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
  return;
}



// FUNCTION 14053e2d0 FUN_14053e2d0 body=1828 status=ok
// SIG undefined FUN_14053e2d0(void)

void FUN_14053e2d0(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  int local_res20 [2];
  longlong *local_108;
  int local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  longlong *local_98;
  longlong *local_88;
  longlong *local_78;
  longlong *local_68;
  longlong *local_58;
  
  FUN_140549500(param_1 + 0x78,local_res20);
  lVar11 = 0;
  lVar6 = lVar11;
  if (local_res20[0] != -1) {
    lVar6 = (longlong)local_res20[0] * 0x168 + *(longlong *)(param_1 + 0x78);
  }
  lVar12 = lVar6 + 0x10;
  if (lVar6 == 0) {
    lVar12 = lVar11;
  }
  if (lVar12 != 0) {
    if (*(longlong *)(lVar12 + 0x120) == 0) {
      plVar9 = (longlong *)param_3[1];
      lVar6 = *param_3;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      local_98 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_GetPoolName_143fc1cf0;
        plVar5[1] = param_1;
        plVar5[2] = lVar6;
        plVar5[3] = (longlong)plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar6;
        *plVar5 = (longlong)&PTR_GetPoolName_143fc1d38;
      }
      lVar6 = lVar11;
      if (plVar5 != (longlong *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_2 + 8),1);
        plVar7 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_c8);
        lVar6 = *plVar7;
        iVar2 = *(int *)(param_2 + 0x10);
        iVar4 = iVar2 + 1;
        *(int *)(param_2 + 0x10) = iVar4;
        if (*(int *)(param_2 + 0x14) < iVar4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_2 + 8));
        *puVar8 = plVar5;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
      *(longlong *)(lVar12 + 0x120) = lVar6;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar9 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
    if (*(longlong *)(lVar12 + 0x128) == 0) {
      plVar9 = (longlong *)param_3[1];
      lVar6 = *param_3;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      local_88 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_GetPoolName_143fc1d80;
        plVar5[1] = param_1;
        plVar5[2] = lVar6;
        plVar5[3] = (longlong)plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar6;
        *plVar5 = (longlong)&PTR_GetPoolName_143fc1dc8;
      }
      lVar6 = lVar11;
      if (plVar5 != (longlong *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                  ((longlong *)(param_2 + 0x20),1);
        plVar7 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_c0);
        lVar6 = *plVar7;
        iVar2 = *(int *)(param_2 + 0x28);
        iVar4 = iVar2 + 1;
        *(int *)(param_2 + 0x28) = iVar4;
        if (*(int *)(param_2 + 0x2c) < iVar4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_2 + 0x20));
        *puVar8 = plVar5;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
      *(longlong *)(lVar12 + 0x128) = lVar6;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar9 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
    if (*(longlong *)(lVar12 + 0x130) == 0) {
      lVar6 = *param_3;
      plVar9 = (longlong *)param_3[1];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      local_78 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_GetPoolName_143fc1e10;
        plVar5[1] = param_1;
        plVar5[2] = lVar6;
        plVar5[3] = (longlong)plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar6;
        *plVar5 = (longlong)&PTR_GetPoolName_143fc1e58;
      }
      lVar6 = lVar11;
      if (plVar5 != (longlong *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                  ((longlong *)(param_2 + 0x50),1);
        plVar7 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_b8);
        lVar6 = *plVar7;
        iVar2 = *(int *)(param_2 + 0x58);
        iVar4 = iVar2 + 1;
        *(int *)(param_2 + 0x58) = iVar4;
        if (*(int *)(param_2 + 0x5c) < iVar4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_2 + 0x50));
        *puVar8 = plVar5;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
      *(longlong *)(lVar12 + 0x130) = lVar6;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar9 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
    if (*(longlong *)(lVar12 + 0x138) == 0) {
      plVar9 = (longlong *)param_3[1];
      lVar6 = *param_3;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      local_68 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_GetPoolName_143fc1ea0;
        plVar5[1] = param_1;
        plVar5[2] = lVar6;
        plVar5[3] = (longlong)plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar6;
        *plVar5 = (longlong)&PTR_GetPoolName_143fc1ee8;
      }
      lVar6 = lVar11;
      if (plVar5 != (longlong *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                  ((longlong *)(param_2 + 0x68),1);
        plVar7 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_b0);
        lVar6 = *plVar7;
        iVar2 = *(int *)(param_2 + 0x70);
        iVar4 = iVar2 + 1;
        *(int *)(param_2 + 0x70) = iVar4;
        if (*(int *)(param_2 + 0x74) < iVar4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_2 + 0x68));
        *puVar8 = plVar5;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
      *(longlong *)(lVar12 + 0x138) = lVar6;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar9 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
    if (*(longlong *)(lVar12 + 0x140) == 0) {
      lVar6 = param_3[1];
      lVar3 = *param_3;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)(param_2 + 0x80);
      local_f8 = param_1;
      local_f0 = lVar3;
      local_e8 = lVar6;
      plVar9 = (longlong *)FMemory::Realloc(0,0x30);
      local_58 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = (longlong)&PTR_GetPoolName_143fc1f30;
        plVar9[1] = param_1;
        plVar9[2] = lVar3;
        plVar9[3] = local_e8;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar9[5] = lVar6;
        *plVar9 = (longlong)&PTR_GetPoolName_143fc1f78;
      }
      lVar6 = lVar11;
      if (plVar9 != (longlong *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,1);
        plVar7 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,local_a8);
        iVar2 = *(int *)(param_2 + 0x88);
        lVar6 = *plVar7;
        *(int *)(param_2 + 0x88) = iVar2 + 1;
        if (*(int *)(param_2 + 0x8c) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar2);
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar5);
        *puVar8 = plVar9;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
      *(longlong *)(lVar12 + 0x140) = lVar6;
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_f0);
    }
    if (*(longlong *)(lVar12 + 0x148) == 0) {
      lVar6 = param_3[1];
      lVar3 = *param_3;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      local_108 = (longlong *)0x0;
      plVar9 = (longlong *)(param_2 + 0x98);
      local_100 = 0;
      local_e0 = param_1;
      local_d8 = lVar3;
      local_d0 = lVar6;
      puVar8 = (undefined8 *)operator_new(0x30,&local_108);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_GetPoolName_143fc1d80;
        puVar8[1] = param_1;
        puVar8[2] = lVar3;
        puVar8[3] = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar8[5] = uVar10;
        *puVar8 = &PTR_GetPoolName_143fc1dc8;
      }
      iVar2 = local_100;
      plVar5 = local_108;
      if (local_100 == 0) {
        if (local_108 != (longlong *)0x0) {
          FMemory::Free();
          lVar11 = 0;
        }
      }
      else if (local_108 != (longlong *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
        plVar7 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_a0);
        iVar4 = *(int *)(param_2 + 0xa0);
        lVar11 = *plVar7;
        *(int *)(param_2 + 0xa0) = iVar4 + 1;
        if (*(int *)(param_2 + 0xa4) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar4);
        }
        puVar8 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar9);
        *puVar8 = plVar5;
        *(int *)(puVar8 + 1) = iVar2;
      }
      *(longlong *)(lVar12 + 0x148) = lVar11;
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_d8);
    }
  }
  return;
}



// FUNCTION 14053ea00 FUN_14053ea00 body=375 status=ok
// SIG undefined FUN_14053ea00(void)

void FUN_14053ea00(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int local_res8 [2];
  undefined1 local_res20 [8];
  
  FUN_140549500(param_1 + 0x78,local_res8);
  lVar8 = 0;
  lVar5 = lVar8;
  if (local_res8[0] != -1) {
    lVar5 = (longlong)local_res8[0] * 0x168 + *(longlong *)(param_1 + 0x78);
  }
  lVar9 = lVar5 + 0x10;
  if (lVar5 == 0) {
    lVar9 = lVar8;
  }
  if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x118) == 0)) {
    lVar5 = *param_3;
    plVar3 = (longlong *)param_3[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_143fc1c60;
      plVar4[1] = param_1;
      plVar4[2] = lVar5;
      plVar4[3] = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143fc1ca8;
    }
    if (plVar4 != (longlong *)0x0) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_2 + 0x38,1);
      plVar6 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res20);
      iVar2 = *(int *)(param_2 + 0x40);
      lVar8 = *plVar6;
      *(int *)(param_2 + 0x40) = iVar2 + 1;
      if (*(int *)(param_2 + 0x44) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0x38,iVar2);
      }
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_2 + 0x38));
      *puVar7 = plVar4;
      *(undefined4 *)(puVar7 + 1) = 3;
    }
    *(longlong *)(lVar9 + 0x118) = lVar8;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  }
  return;
}



// FUNCTION 14053eb80 FUN_14053eb80 body=842 status=ok
// SIG undefined FUN_14053eb80(void)

void FUN_14053eb80(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  void *local_f8;
  ulonglong local_f0;
  undefined1 local_e8 [8];
  void *local_e0;
  int local_d8;
  int local_d4;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  undefined **local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  
  lVar5 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_d0,param_2);
  if (local_d0 == 0) {
    (**(code **)(*param_1 + 0xa8))(param_1,param_2,param_3,4);
  }
  else {
    cVar4 = FUN_142b54900();
    if (cVar4 == '\0') {
      (**(code **)(*param_1 + 0xa8))(param_1,param_2,param_3,7);
    }
    else {
      FUN_142b47dc0(local_d0,&local_88);
      if (local_88 == 0) {
        (**(code **)(*param_1 + 0xa8))(param_1,param_2,param_3,6);
      }
      else {
        local_b8 = *param_2;
        lVar5 = param_2[1];
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        lVar9 = param_3[1];
        local_a8 = *param_3;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          UNLOCK();
        }
        local_c0 = param_1;
        local_b0 = lVar5;
        local_a0 = lVar9;
        FTickAnimationPlayers::FTickAnimationPlayers(local_e8);
        local_f0 = 6;
        local_f8 = (void *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
        _Src = local_f8;
        FGenericPlatformString::Memcpy(local_f8,L"start",0xc);
        lVar10 = (longlong)(int)local_f0;
        local_d8 = (int)local_f0;
        if (((int)local_f0 == 0) && (local_d4 == 0)) {
          local_d4 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e0,local_f0 & 0xffffffff);
          _guard_xfg_dispatch_icall_nop(local_e0,_Src,lVar10 * 2);
        }
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
        }
        plVar3 = (longlong *)*param_3;
        local_98 = 0;
        local_90 = 0;
        local_78 = 0;
        uStack_70 = 0;
        puVar6 = (undefined8 *)operator_new(0x40,&local_98);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &PTR_GetPoolName_143fc1780;
          puVar6[1] = param_1;
          puVar6[2] = local_b8;
          puVar6[3] = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
            lVar9 = local_a0;
          }
          puVar6[4] = local_a8;
          puVar6[5] = lVar9;
          if (lVar9 != 0) {
            LOCK();
            *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
            UNLOCK();
          }
          uVar7 = FDelegateHandle::GenerateNewID();
          puVar6[7] = uVar7;
          *puVar6 = &PTR_GetPoolName_143fc17c8;
        }
        local_58 = &PTR_FUN_143fc0690;
        FString::FString(local_50,&local_e0);
        uVar7 = (**(code **)(*plVar3 + 0x28))(plVar3,local_40);
        uVar8 = FUN_142b46360(local_d0,local_68);
        FUN_142ae4cd0(local_88,uVar8,uVar7,&local_58,&local_98,&local_78);
        if (local_68[0] != 0) {
          FMemory::Free();
        }
        FUN_142b1e1c0(local_e8);
        FUN_140537630(&local_c0);
      }
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_80 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
  }
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_c8 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar1 = (int *)((longlong)local_c8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_c8 + 8))(local_c8,1);
      }
    }
  }
  return;
}



// FUNCTION 14053eed0 FUN_14053eed0 body=2372 status=ok
// SIG undefined FUN_14053eed0(void)

undefined8 * FUN_14053eed0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

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
  psVar7 = (short *)FURL::GetOption(local_b8,&DAT_143faa364,&DAT_143fa4bf4);
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
    uVar8 = FText::ToString(&DAT_146853508);
    FString::operator=(param_2,uVar8);
  }
  else {
    local_res18 = 0;
    if (0 < *(int *)(param_1 + 0x50)) {
      local_res20 = 0;
      do {
        pvVar19 = (void *)0x0;
        lVar12 = local_res20 * 0x10;
        if (*(int *)(lVar12 + 8 + *(longlong *)(param_1 + 0x48)) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = *(undefined2 **)(lVar12 + *(longlong *)(param_1 + 0x48));
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
            FGenericPlatformString::Convert<char,wchar_t>(local_198,2,&DAT_143fa4ca4,2,uVar21);
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
            iVar6 = *(int *)(*(longlong *)(param_1 + 0x48) + 8 + lVar12);
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
              pvVar4 = *(void **)(*(longlong *)(param_1 + 0x48) + lVar12);
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
              puVar10 = (undefined8 *)(local_f0 + *(longlong *)(param_1 + 0x48));
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
              if (1 < *(int *)(lVar12 + 8)) goto LAB_14053f435;
            }
            else {
LAB_14053f435:
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
      } while (local_res18 < *(int *)(param_1 + 0x50));
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



// FUNCTION 14053f830 FUN_14053f830 body=336 status=ok
// SIG undefined FUN_14053f830(void)

void FUN_14053f830(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  plVar3 = param_1 + 0x52;
  lVar5 = *plVar3;
  iVar6 = 1;
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x18) == 1)) {
    if (*(char *)(lVar5 + 0x78) == '\0') {
      if (param_1[0x77] != 0) {
        *(undefined1 *)(param_1[0x77] + 0x68) = 1;
      }
    }
    else {
      FUN_1405693c0();
    }
    iVar6 = 0;
    local_20 = (longlong *)0x0;
    *(undefined4 *)(*plVar3 + 0x18) = 3;
    if (plVar3 != &local_28) {
      *plVar3 = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x53,&local_20);
      plVar3 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
    }
    local_10 = (longlong *)0x0;
    if (param_1 + 0x77 != &local_18) {
      param_1[0x77] = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&local_10);
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
  }
                    /* WARNING: Could not recover jumptable at 0x00014053f979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1,iVar6 + 1);
  return;
}



// FUNCTION 14053f980 FUN_14053f980 body=603 status=ok
// SIG undefined FUN_14053f980(void)

void FUN_14053f980(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x58);
  plVar6 = (longlong *)0x0;
  plVar7 = plVar6;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = *param_2;
    lVar2 = param_2[1];
    plVar4[3] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    plVar4[4] = 0;
    plVar4[5] = 0;
    *(undefined4 *)(plVar4 + 6) = 2;
    plVar4[7] = 0;
    plVar4[8] = 0;
    plVar4[9] = 0;
    *(undefined4 *)(plVar4 + 10) = 0;
    plVar7 = plVar4;
  }
  plVar4 = (longlong *)operator_new(0x18);
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    *plVar4 = (longlong)&PTR_FUN_143fc21f0;
    plVar4[2] = (longlong)plVar7;
    plVar6 = plVar4;
  }
  if (plVar7 == (longlong *)0x0) goto LAB_14053fb94;
  if ((*plVar7 == 0) || (plVar7[1] == 0)) {
LAB_14053fa57:
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)plVar7;
    plVar4 = (longlong *)plVar7[1];
    if (plVar6 != plVar4) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)plVar7[1];
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      plVar7[1] = (longlong)plVar6;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar6 + 1;
      lVar2 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      goto LAB_14053fadf;
    }
  }
  else {
    piVar1 = (int *)(plVar7[1] + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (iVar3 < 1) goto LAB_14053fa57;
LAB_14053fadf:
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
  }
  iVar3 = *(int *)(param_1 + 0xb0);
  *(int *)(param_1 + 0xb0) = iVar3 + 1;
  if (*(int *)(param_1 + 0xb4) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa8,iVar3);
  }
  puVar5 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0xa8));
  *puVar5 = plVar7;
  puVar5[1] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar6 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  FUN_1404b8b20(plVar7 + 9,param_1,FUN_1405533b0);
  FUN_140565fc0(plVar7);
LAB_14053fb94:
  plVar7 = plVar6 + 1;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014053fbcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 8))(plVar6,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14053fbe0 FUN_14053fbe0 body=161 status=ok
// SIG undefined FUN_14053fbe0(void)

undefined8 FUN_14053fbe0(longlong param_1,uint param_2,char param_3)

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
      FUN_14055d190(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14053fc90 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
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
      FUN_14055d6e0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14053fd40 FUN_14053fd40 body=526 status=ok
// SIG undefined FUN_14053fd40(void)

void FUN_14053fd40(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int local_res8 [2];
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8 [2];
  longlong local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 local_88 [24];
  undefined1 local_70 [88];
  
  FUN_140549500(param_1 + 0x78,local_res8,param_2);
  lVar3 = 0;
  if (local_res8[0] != -1) {
    lVar3 = (longlong)local_res8[0] * 0x168 + *(longlong *)(param_1 + 0x78);
  }
  lVar8 = lVar3 + 0x10;
  if (lVar3 == 0) {
    lVar8 = 0;
  }
  if ((lVar8 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
    plVar4 = (longlong *)FUN_14058b310();
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4,lVar8);
    local_f8 = *param_2;
    local_f0 = param_2[1];
    if (local_f0 != 0) {
      LOCK();
      *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
      UNLOCK();
    }
    cVar1 = FUN_14053db80(param_1,&local_f8);
    cVar2 = (**(code **)(*plVar4 + 0x30))(plVar4);
    if (((cVar2 == '\x02') && (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104))) &&
       (cVar1 != '\0')) {
      *(undefined1 *)(lVar8 + 0xe8) = 0;
      cVar1 = FUN_140584270(lVar8 + 0x60);
      if (cVar1 != '\0') {
        FUN_1405426e0(param_1,param_2);
      }
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      puVar5 = (undefined4 *)Channel3DProperties::Channel3DProperties(local_88);
      local_a8 = *puVar5;
      uStack_a4 = puVar5[1];
      uStack_a0 = puVar5[2];
      uStack_9c = puVar5[3];
      local_98 = *(undefined8 *)(puVar5 + 4);
      uVar6 = FUN_14054ec00(param_1,local_b8,&local_e8);
      uVar7 = FUN_14054f180(param_1,local_c8,&local_d8);
      uVar6 = FUN_14056c8a0(local_70,uVar7,param_3,uVar6,0,&local_a8);
      ChannelId::operator=(lVar8 + 0x60,uVar6);
      FUN_14056f1b0(local_70);
      if (local_c8[0] != 0) {
        FMemory::Free();
      }
      if (local_b8[0] != 0) {
        FMemory::Free();
      }
      FUN_140566500(param_1,param_2);
    }
    else {
      *(undefined1 *)(lVar8 + 0xe8) = 1;
      FString::operator=(lVar8 + 0xf0,param_3);
    }
  }
  return;
}



// FUNCTION 14053ff50 FUN_14053ff50 body=119 status=ok
// SIG undefined FUN_14053ff50(void)

void FUN_14053ff50(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc1810;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar2 = &PTR_GetPoolName_143fc1858;
  }
  return;
}



// FUNCTION 14053ffd0 FUN_14053ffd0 body=119 status=ok
// SIG undefined FUN_14053ffd0(void)

void FUN_14053ffd0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc1930;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar2 = &PTR_GetPoolName_143fc1978;
  }
  return;
}



// FUNCTION 140540050 FUN_140540050 body=119 status=ok
// SIG undefined FUN_140540050(void)

void FUN_140540050(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc18a0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar2 = &PTR_GetPoolName_143fc18e8;
  }
  return;
}



// FUNCTION 1405400d0 FUN_1405400d0 body=119 status=ok
// SIG undefined FUN_1405400d0(void)

void FUN_1405400d0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc1780;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar2 = &PTR_GetPoolName_143fc17c8;
  }
  return;
}



// FUNCTION 140540150 FUN_140540150 body=119 status=ok
// SIG undefined FUN_140540150(void)

void FUN_140540150(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc1660;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar2 = &PTR_GetPoolName_143fc16a8;
  }
  return;
}



// FUNCTION 1405401d0 FUN_1405401d0 body=119 status=ok
// SIG undefined FUN_1405401d0(void)

void FUN_1405401d0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc15d0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar2 = &PTR_GetPoolName_143fc1618;
  }
  return;
}



// FUNCTION 140540250 FUN_140540250 body=119 status=ok
// SIG undefined FUN_140540250(void)

void FUN_140540250(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc16f0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar2 = &PTR_GetPoolName_143fc1738;
  }
  return;
}



// FUNCTION 1405402d0 CreateCopy body=94 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(ovrMessage_*,bool),<lambda_1e98f5a82a74eb380ee7c9b8dfb84486>_>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc1cf0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_143fc1d38;
  }
  return;
}



// FUNCTION 140540330 CreateCopy body=94 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(ovrMessage_*,bool),<lambda_1e98f5a82a74eb380ee7c9b8dfb84486>_>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc1d80;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_143fc1dc8;
  }
  return;
}



// FUNCTION 140540390 CreateCopy body=94 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(ovrMessage_*,bool),<lambda_1e98f5a82a74eb380ee7c9b8dfb84486>_>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc1ea0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_143fc1ee8;
  }
  return;
}



// FUNCTION 1405403f0 CreateCopy body=94 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(ovrMessage_*,bool),<lambda_1e98f5a82a74eb380ee7c9b8dfb84486>_>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc1f30;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_143fc1f78;
  }
  return;
}



// FUNCTION 140540450 CreateCopy body=94 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(ovrMessage_*,bool),<lambda_1e98f5a82a74eb380ee7c9b8dfb84486>_>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc1e10;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_143fc1e58;
  }
  return;
}



// FUNCTION 1405404b0 FUN_1405404b0 body=111 status=ok
// SIG undefined FUN_1405404b0(void)

void FUN_1405404b0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc1fc0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar2 = &PTR_GetPoolName_143fc2008;
  }
  return;
}



// FUNCTION 140540520 CreateCopy body=86 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(FUniqueNetId_const_&,bool),<lambda_73003c591ef4ea8d347fecc42c0443f6>_>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc1b40;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_143fc1b88;
  }
  return;
}



// FUNCTION 140540580 FUN_140540580 body=133 status=ok
// SIG undefined FUN_140540580(void)

void FUN_140540580(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc20e0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    FString::FString(puVar2 + 5,param_1 + 0x28);
    puVar2[8] = *(undefined8 *)(param_1 + 0x40);
    *puVar2 = &PTR_GetPoolName_143fc2128;
  }
  return;
}



// FUNCTION 140540610 CreateCopy body=94 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(ovrMessage_*,bool),<lambda_1e98f5a82a74eb380ee7c9b8dfb84486>_>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc1c60;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_143fc1ca8;
  }
  return;
}



// FUNCTION 140540670 FUN_140540670 body=74 status=ok
// SIG undefined FUN_140540670(void)

void FUN_140540670(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc1ab0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_143fc1af8;
  }
  return;
}



// FUNCTION 1405406c0 FUN_1405406c0 body=74 status=ok
// SIG undefined FUN_1405406c0(void)

void FUN_1405406c0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc2050;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_143fc2098;
  }
  return;
}



// FUNCTION 140540710 FUN_140540710 body=94 status=ok
// SIG undefined FUN_140540710(void)

void FUN_140540710(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc19c0;
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
    *puVar2 = &PTR_GetPoolName_143fc1a08;
  }
  return;
}



// FUNCTION 140540770 FUN_140540770 body=94 status=ok
// SIG undefined FUN_140540770(void)

void FUN_140540770(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc1bd0;
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
    *puVar2 = &PTR_GetPoolName_143fc1c18;
  }
  return;
}



// FUNCTION 1405407d0 FUN_1405407d0 body=3519 status=ok
// SIG undefined FUN_1405407d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405407d0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong **pplVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  void **ppvVar21;
  undefined4 uVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218 [8];
  longlong *local_210;
  ulonglong local_208;
  longlong *local_200;
  int local_1f8;
  longlong *local_1e8;
  longlong *plStack_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  longlong *plStack_1b0;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  longlong *local_198;
  longlong local_190;
  longlong *local_188;
  longlong *plStack_180;
  longlong local_178;
  longlong *local_170;
  void *local_168;
  ulonglong local_160;
  undefined8 local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138 [2];
  longlong *local_128;
  longlong *local_120;
  undefined1 local_118 [8];
  undefined **local_110 [2];
  longlong local_100 [2];
  undefined1 local_f0 [8];
  longlong *local_e8;
  longlong local_e0 [2];
  longlong local_d0 [2];
  longlong local_c0 [2];
  longlong local_b0 [2];
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  longlong *plStack_68;
  undefined8 local_60;
  longlong *plStack_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  uVar24 = 0;
  local_208 = local_208 & 0xffffffff00000000;
  local_210 = param_2;
  local_198 = param_1;
  local_190 = param_4;
  if ((int)param_2[1] == 0) {
LAB_14054081f:
    (**(code **)(*param_1 + 0x50))(param_1,param_3,2);
    return;
  }
  if (0 < (int)param_1[0x51]) {
    plVar16 = (longlong *)(param_1[0x50] + 0xb8);
    uVar18 = uVar24;
    uVar19 = uVar24;
    do {
      if (*plVar16 == param_3) {
        if ((longlong)(int)uVar19 * 0x118 + param_1[0x50] != 0) goto LAB_14054081f;
        break;
      }
      uVar19 = (ulonglong)((int)uVar19 + 1);
      uVar18 = uVar18 + 1;
      plVar16 = plVar16 + 0x23;
    } while ((longlong)uVar18 < (longlong)(int)param_1[0x51]);
  }
  lVar11 = param_1[0x51];
  iVar6 = (int)lVar11 + 1;
  *(int *)(param_1 + 0x51) = iVar6;
  if (*(int *)((longlong)param_1 + 0x28c) < iVar6) {
    FUN_1404f33d0(param_1 + 0x50);
  }
  puVar23 = (undefined8 *)((longlong)(int)lVar11 * 0x118 + param_1[0x50]);
  if (puVar23 == (undefined8 *)0x0) {
    puVar23 = (undefined8 *)0x0;
  }
  else {
    *puVar23 = &PTR_FUN_143f769a8;
    puVar23[1] = 0;
    puVar23[2] = 0;
    puVar23[3] = 0;
    puVar23[4] = 0;
    FUN_1404e8890(puVar23 + 5);
    puVar23[0x14] = 0;
    puVar23[0x15] = 0;
    *puVar23 = &PTR__scalar_deleting_destructor__143f7d2c8;
    puVar23[0x16] = 0;
    puVar23[0x17] = param_3;
    *(undefined4 *)(puVar23 + 0x18) = 0xffffffff;
    puVar23[0x19] = 0;
    puVar23[0x1a] = 0;
    *(undefined1 *)(puVar23 + 0x1b) = 0;
    puVar23[0x1c] = 0;
    puVar23[0x1d] = 0;
    puVar23[0x1e] = 0;
    puVar23[0x1f] = 0;
    puVar23[0x20] = 0;
    puVar23[0x21] = 0;
  }
  plVar16 = (longlong *)0x0;
  *(undefined4 *)(puVar23 + 0x22) = 1;
  pvVar7 = (void *)operator_new(0x60);
  plVar8 = plVar16;
  if (pvVar7 != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(pvVar7,0,0x60);
    plVar8 = (longlong *)FUN_1405357c0(pvVar7);
  }
  plVar9 = (longlong *)operator_new(0x18);
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *plVar9 = (longlong)&PTR_FUN_143f3f2d0;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    plVar9[2] = (longlong)plVar8;
    plVar16 = plVar9;
  }
  local_1e8 = plVar8;
  plStack_1e0 = plVar16;
  SharedPointerInternals::EnableSharedFromThis(&local_1e8,plVar8,plVar8);
  local_188 = local_1e8;
  plStack_180 = plStack_1e0;
  if (plStack_1e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_1e0 + 1) = (int)plStack_1e0[1] + 1;
    UNLOCK();
  }
  if ((longlong **)(puVar23 + 0x14) != &local_188) {
    puVar23[0x14] = local_1e8;
    local_188 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(puVar23 + 0x15,&plStack_180);
  }
  plVar16 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_180 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_180)(plStack_180);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_180 + 8))(plStack_180,1);
      }
    }
  }
  plVar16 = local_210;
  if (*(char *)((longlong)puVar23 + 0x3a) == '\0') {
    lVar11 = *local_210;
    lVar10 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar10 + 0x18),&local_178,lVar11);
    plVar9 = local_170;
    plVar8 = local_1e8;
    if (local_178 != 0) {
      if (local_170 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_170 + 1) = (int)local_170[1] + 1;
        UNLOCK();
      }
      local_148 = local_178;
      local_140 = local_170;
      if (local_170 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_170 + 1) = (int)local_170[1] + 1;
        UNLOCK();
      }
      lVar11 = FUN_14052edc0(local_110,&local_148);
      *(undefined4 *)(plVar8 + 4) = *(undefined4 *)(lVar11 + 8);
      *(undefined2 *)((longlong)plVar8 + 0x24) = *(undefined2 *)(lVar11 + 0xc);
      local_110[0] = &PTR_FUN_143f9a360;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar11 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      cVar5 = (**(code **)(local_1e8[3] + 0x78))();
      if (cVar5 == '\0') {
        FUN_14055f3d0(param_1,param_3);
        (**(code **)(*param_1 + 0x50))(param_1,param_3,2);
        local_120 = local_170;
        goto LAB_1405414ee;
      }
    }
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_170 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar1 = (int *)((longlong)local_170 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
  }
  else {
    uVar13 = FName::FName(local_118,L"WINDOWS",1);
    plVar16 = (longlong *)FUN_1419c6b80(uVar13);
    lVar11 = *plVar16;
    uVar13 = FUN_141672640();
    puVar12 = (undefined8 *)(**(code **)(lVar11 + 0xb8))(plVar16,local_f0,uVar13,local_218);
    plVar16 = local_1e8;
    uVar13 = (**(code **)(*(longlong *)*puVar12 + 0x68))((longlong *)*puVar12,local_100,0);
    FString::operator=(plVar16 + 5,uVar13);
    if (local_100[0] != 0) {
      FMemory::Free();
    }
    plVar16 = local_210;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_e8 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar16 = local_210;
        if (iVar6 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
          plVar16 = local_210;
        }
      }
    }
  }
  uVar13 = FGuid::NewGuid(local_80);
  FUN_141682af0(uVar13,&local_1d8,0);
  plVar8 = local_1e8;
  plVar9 = local_1e8 + 8;
  if (plVar9 != &local_1d8) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    *plVar9 = local_1d8;
    local_1d8 = 0;
    *(undefined4 *)(plVar8 + 9) = (undefined4)local_1d0;
    *(undefined4 *)((longlong)plVar8 + 0x4c) = local_1d0._4_4_;
    local_1d0 = 0;
  }
  if (local_1d8 != 0) {
    FMemory::Free();
  }
  *(undefined4 *)((longlong)puVar23 + 0xb4) = *(undefined4 *)(puVar23 + 6);
  *(undefined1 *)(puVar23 + 0x1b) = 1;
  *(undefined4 *)(puVar23 + 0x16) = 0;
  local_1c0 = (longlong *)((undefined8 *)*plVar16)[1];
  local_1c8 = *(undefined8 *)*plVar16;
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
    UNLOCK();
  }
  puVar12 = puVar23 + 0x19;
  if (puVar12 != &local_1c8) {
    *puVar12 = local_1c8;
    local_1c8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(puVar23 + 0x1a,&local_1c0);
  }
  plVar16 = local_1c0;
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1c0 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1c0 + 8))(local_1c0,1);
      }
    }
  }
  plVar16 = (longlong *)puVar23[0x1a];
  puVar2 = puVar23 + 0x1c;
  uVar13 = *puVar12;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_1b8 = uVar13;
  plStack_1b0 = plVar16;
  if (&local_1b8 != puVar2) {
    local_1b8 = *puVar2;
    plStack_1b0 = (longlong *)puVar23[0x1d];
    *puVar2 = uVar13;
    puVar23[0x1d] = plVar16;
    local_70 = uVar13;
    plStack_68 = plVar16;
  }
  plVar16 = plStack_1b0;
  if (plStack_1b0 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_1b0 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_1b0)(plStack_1b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_1b0 + 8))(plStack_1b0,1);
      }
    }
  }
  plVar16 = (longlong *)puVar23[0x1a];
  puVar2 = puVar23 + 1;
  uVar13 = *puVar12;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_1a8 = uVar13;
  plStack_1a0 = plVar16;
  if (&local_1a8 != puVar2) {
    local_1a8 = *puVar2;
    plStack_1a0 = (longlong *)puVar23[2];
    *puVar2 = uVar13;
    puVar23[2] = plVar16;
    local_60 = uVar13;
    plStack_58 = plVar16;
  }
  plVar16 = plStack_1a0;
  if (plStack_1a0 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_1a0 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_1a0)(plStack_1a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_1a0 + 8))(plStack_1a0,1);
      }
    }
  }
  (**(code **)(*(longlong *)param_1[0x4f] + 0x50))((longlong *)param_1[0x4f],&local_128);
  if (local_128 != (longlong *)0x0) {
    local_158 = *puVar2;
    local_150 = (longlong *)puVar23[2];
    if (local_150 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
    }
    uVar13 = (**(code **)(*local_128 + 0xa0))(local_128,local_e0,&local_158);
    FString::operator=(puVar23 + 3,uVar13);
    if (local_e0[0] != 0) {
      FMemory::Free();
    }
    plVar16 = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_150 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
    }
  }
  if (*(char *)((longlong)puVar23 + 0x3a) != '\0') {
    uVar22 = 2;
    puVar20 = &local_208;
    local_208 = 0;
    lVar11 = 8;
    do {
      iVar6 = rand();
      *(char *)puVar20 = (char)iVar6;
      puVar20 = (ulonglong *)((longlong)puVar20 + 1);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    FString::PrintfImpl(&local_168,L"%llu",local_208);
    pvVar7 = local_168;
    ppvVar21 = (void **)(local_1e8 + 10);
    if (ppvVar21 != &local_168) {
      iVar6 = (int)local_160;
      *(int *)(local_1e8 + 0xb) = iVar6;
      if ((iVar6 == 0) && (*(int *)((longlong)local_1e8 + 0x5c) == 0)) {
        *(undefined4 *)((longlong)local_1e8 + 0x5c) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar21,local_160 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppvVar21,pvVar7,(longlong)iVar6 * 2);
      }
    }
    if (local_168 != (void *)0x0) {
      FMemory::Free();
    }
    FUN_1404b6bd0(param_1 + 0x56);
    if ((*(char *)(puVar23 + 7) == '\0') || (*(char *)(puVar23 + 0x1b) == '\0')) {
      uVar22 = 1;
    }
    else if ((int)param_1[0x5c] == 0) {
      local_200 = (longlong *)0x0;
      plVar16 = (longlong *)FMemory::Realloc(0,0x30);
      local_1f8 = 3;
      local_200 = plVar16;
      if (plVar16 != (longlong *)0x0) {
        plVar16[1] = (longlong)param_1;
        *plVar16 = (longlong)&DAT_143f3ed00;
        plVar16[2] = (longlong)FUN_140559110;
        lVar11 = FDelegateHandle::GenerateNewID();
        plVar16[4] = lVar11;
        *plVar16 = (longlong)&PTR_GetPoolName_143f3ed48;
      }
      cVar5 = FUN_1404b0b90(param_1 + 0x56,&local_200);
      if (cVar5 == '\0') {
        FUN_1404b6bd0(param_1 + 0x56);
        uVar22 = 2;
      }
      else {
        uVar22 = 1;
      }
      if (local_1f8 != 0) {
        if (local_200 == (longlong *)0x0) goto LAB_1405414d3;
        (**(code **)(*local_200 + 0x28))(local_200,0);
        if (local_200 != (longlong *)0x0) {
          local_200 = (longlong *)FMemory::Realloc(local_200,0,0);
        }
        local_1f8 = 0;
      }
      if (local_200 != (longlong *)0x0) {
        FMemory::Free(local_200);
      }
    }
LAB_1405414d3:
    FUN_14054ab90(param_1,local_210,param_3,uVar22);
    goto LAB_1405414ee;
  }
  local_190 = operator_new(0xa0);
  if (local_190 == 0) {
    plVar16 = (longlong *)0x0;
  }
  else {
    iVar6 = *(int *)((longlong)puVar23 + 0x34);
    puVar12 = puVar23 + 5;
    iVar4 = *(int *)(puVar23 + 6);
    uVar13 = FUN_14054bfd0(param_1,local_a0,puVar12);
    param_1 = local_198;
    uVar14 = FUN_14054b850(local_198,local_b0,puVar23);
    uVar15 = FUN_14054b760(param_1,local_c0,puVar12);
    local_238 = FUN_14054be90(param_1,local_d0,puVar12);
    local_230 = uVar15;
    local_228 = uVar14;
    local_220 = uVar13;
    plVar16 = (longlong *)FUN_140534660(local_190,local_210,param_3,iVar6 + iVar4);
    uVar24 = 0xf;
  }
  plVar8 = (longlong *)0x0;
  plVar9 = (longlong *)operator_new(0x18);
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_143fc2250;
    plVar9[2] = (longlong)plVar16;
    plVar8 = plVar9;
  }
  if (plVar16 != (longlong *)0x0) {
    if ((*plVar16 != 0) && (plVar16[1] != 0)) {
      piVar1 = (int *)(plVar16[1] + 8);
      LOCK();
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        *piVar1 = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (0 < iVar6) goto LAB_140541090;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *plVar16 = (longlong)plVar16;
    plVar9 = (longlong *)plVar16[1];
    if (plVar8 != plVar9) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar9 = (longlong *)plVar16[1];
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      plVar16[1] = (longlong)plVar8;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar8 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
LAB_140541090:
  if (((uVar24 & 8) != 0) && (uVar24 = (ulonglong)((uint)uVar24 & 0xfffffff7), local_d0[0] != 0)) {
    FMemory::Free();
  }
  if (((uVar24 & 4) != 0) && (uVar24 = (ulonglong)((uint)uVar24 & 0xfffffffb), local_c0[0] != 0)) {
    FMemory::Free();
  }
  if (((uVar24 & 2) != 0) && (uVar24 = (ulonglong)((uint)uVar24 & 0xfffffffd), local_b0[0] != 0)) {
    FMemory::Free();
  }
  if (((uVar24 & 1) != 0) && (local_98 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_98 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  if (plVar16 != (longlong *)0x0) {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    iVar6 = (int)param_1[0x6c];
    *(int *)(param_1 + 0x6c) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0x364) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x6b,iVar6);
    }
    puVar23 = (undefined8 *)((longlong)iVar6 * 0x10 + param_1[0x6b]);
    *puVar23 = plVar16;
    puVar23[1] = plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar8 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    pplVar3 = (longlong **)(plVar16 + 0x12);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_138[0] = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&DAT_143f3ed00;
      plVar9[2] = (longlong)FUN_140553e60;
      plVar9[1] = (longlong)local_198;
      lVar11 = FDelegateHandle::GenerateNewID();
      plVar9[4] = lVar11;
      *plVar9 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_138 != pplVar3) {
      if (plVar9 == (longlong *)0x0) {
        if (((int)plVar16[0x13] != 0) && (plVar17 = *pplVar3, plVar17 != (longlong *)0x0)) {
          (**(code **)(*plVar17 + 0x28))(plVar17,0);
          if (*pplVar3 != (longlong *)0x0) {
            plVar17 = (longlong *)FMemory::Realloc(*pplVar3,0,0);
            *pplVar3 = plVar17;
          }
          *(undefined4 *)(plVar16 + 0x13) = 0;
        }
      }
      else {
        (**(code **)(*plVar9 + 0x30))(plVar9,pplVar3);
      }
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,0);
      local_138[0] = (longlong *)FMemory::Realloc(plVar9,0,0);
      if (local_138[0] != (longlong *)0x0) {
        FMemory::Free(local_138[0]);
      }
    }
    lVar11 = plVar16[5];
    if (lVar11 != 0) {
      uVar13 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar16,local_90);
      FUN_1405313f0(lVar11 + 0x90,uVar13,FUN_140553d80);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_88 + 1;
        lVar11 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)local_88 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
      FUN_140563d50(plVar16[5]);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar8 + 1;
    lVar11 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
LAB_1405414ee:
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_120 + 1;
    lVar11 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar1 = (int *)((longlong)local_120 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  plVar16 = plStack_1e0;
  if (plStack_1e0 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_1e0 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_1e0)(plStack_1e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  return;
}



// FUNCTION 140541590 FUN_140541590 body=521 status=ok
// SIG undefined FUN_140541590(void)

longlong * FUN_140541590(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  char local_res20 [8];
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *local_18 [2];
  
  if (DAT_146853548 == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0xd0);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      puVar6 = (undefined8 *)FName::FName(local_28,L"SPARK",1);
      FUN_1404ac240(plVar5,*puVar6,param_3);
      *plVar5 = (longlong)&PTR_FUN_143fc08b8;
      plVar5[0xe] = 0;
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
    local_18[0] = plVar8;
    SharedPointerInternals::EnableSharedFromThis(&local_20,plVar5,plVar5);
    local_20 = 0;
    DAT_146853548 = plVar5;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_146853550,local_18);
    plVar5 = local_18[0];
    if (local_18[0] != (longlong *)0x0) {
      LOCK();
      plVar8 = local_18[0] + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_18[0])(local_18[0]);
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
    local_res20[0] = '\0';
    FConfigCacheIni::GetBool
              (DAT_1468b6148,L"OnlineSubsystemSpark",L"bEnabled",local_res20,&DAT_1468e2360);
    if ((local_res20[0] == '\0') || (cVar4 = (**(code **)(*DAT_146853548 + 0x100))(), cVar4 == '\0')
       ) {
      (**(code **)(*param_1 + 0x10))(param_1);
    }
    *param_2 = (longlong)DAT_146853548;
    lVar3 = DAT_146853550;
    param_2[1] = DAT_146853550;
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



// FUNCTION 1405417a0 FUN_1405417a0 body=322 status=ok
// SIG undefined FUN_1405417a0(void)

undefined8 * FUN_1405417a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar3 = operator_new(0x30);
  plVar7 = (longlong *)0x0;
  plVar4 = plVar7;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUniqueNetIdNull::FUniqueNetIdNull(lVar3,param_3);
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar6 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f7de48;
    plVar5[2] = (longlong)plVar4;
    plVar6 = plVar5;
  }
  *param_2 = plVar4;
  param_2[1] = plVar6;
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar7;
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
      plVar6 = (longlong *)param_2[1];
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar4;
    plVar4 = (longlong *)plVar5[1];
    if (plVar6 != plVar4) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)plVar5[1];
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      plVar5[1] = (longlong)plVar6;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar6 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
  return param_2;
}



// FUNCTION 1405418f0 FUN_1405418f0 body=396 status=ok
// SIG undefined FUN_1405418f0(void)

undefined8 FUN_1405418f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong local_48 [5];
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  local_48[4] = 0;
  plStack_20 = (longlong *)0x0;
  TJsonReaderFactory<wchar_t>::Create(local_18,param_1);
  cVar6 = FUN_1404a7f60(local_18,local_48 + 4);
  lVar4 = local_48[4];
  if ((cVar6 == '\0') || (local_48[4] == 0)) {
    uVar7 = 0;
  }
  else {
    local_48[1] = 9;
    local_48[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"lobby_id",0x12);
    FUN_1416b40a0(lVar4,local_48,param_2);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    local_48[2] = 0;
    local_48[3] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 2,0);
    FGenericPlatformString::Memcpy(local_48[2],L"privacy",0x10);
    FUN_1416b40a0(lVar4,local_48 + 2,param_3);
    if (local_48[2] != 0) {
      FMemory::Free();
    }
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
        (**(code **)(*local_10 + 8))(local_10,1);
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
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 140541a80 FUN_140541a80 body=42 status=ok
// SIG undefined FUN_140541a80(void)

void FUN_140541a80(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140541aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 140541ab0 FUN_140541ab0 body=9 status=ok
// SIG undefined FUN_140541ab0(void)

void FUN_140541ab0(longlong param_1)

{
  FUN_140538720(param_1 + 0x10);
  return;
}



// FUNCTION 140541ac0 FUN_140541ac0 body=9 status=ok
// SIG undefined FUN_140541ac0(void)

void FUN_140541ac0(longlong param_1)

{
  FUN_140538970(param_1 + 0x10);
  return;
}



// FUNCTION 140541ad0 FUN_140541ad0 body=9 status=ok
// SIG undefined FUN_140541ad0(void)

void FUN_140541ad0(longlong param_1)

{
  FUN_140538a70(param_1 + 0x10);
  return;
}



// FUNCTION 140541ae0 FUN_140541ae0 body=9 status=ok
// SIG undefined FUN_140541ae0(void)

void FUN_140541ae0(longlong param_1)

{
  FUN_140538b80(param_1 + 0x10);
  return;
}



// FUNCTION 140541af0 FUN_140541af0 body=9 status=ok
// SIG undefined FUN_140541af0(void)

void FUN_140541af0(longlong param_1)

{
  FUN_140538e80(param_1 + 0x10);
  return;
}



// FUNCTION 140541b00 FUN_140541b00 body=9 status=ok
// SIG undefined FUN_140541b00(void)

void FUN_140541b00(longlong param_1)

{
  FUN_140538fb0(param_1 + 0x10);
  return;
}



// FUNCTION 140541b10 DestroyObject body=46 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TIntrusiveReferenceController<TIndirectTextData<FTextHistory_StringTableEntry>_>::DestroyObject
               (longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR__scalar_deleting_destructor__143f9d148;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x18);
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 140541b40 FUN_140541b40 body=9 status=ok
// SIG undefined FUN_140541b40(void)

void FUN_140541b40(longlong param_1)

{
  FUN_1405392c0(param_1 + 0x10);
  return;
}



// FUNCTION 140541b70 FUN_140541b70 body=20 status=ok
// SIG undefined FUN_140541b70(void)

void FUN_140541b70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14053bff0(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 140541b90 FUN_140541b90 body=20 status=ok
// SIG undefined FUN_140541b90(void)

void FUN_140541b90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14053b310(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 140541bb0 FUN_140541bb0 body=20 status=ok
// SIG undefined FUN_140541bb0(void)

void FUN_140541bb0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14053b3f0(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 140541bd0 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FKeyDetails,SharedPointerInternals::DefaultDeleter<FKeyDetails>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_140538490(lVar1);
    FMemory::operator_delete(lVar1,0x88);
    return;
  }
  return;
}



// FUNCTION 140541c00 FUN_140541c00 body=20 status=ok
// SIG undefined FUN_140541c00(void)

void FUN_140541c00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14053b520(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 140541c20 FUN_140541c20 body=47 status=ok
// SIG undefined FUN_140541c20(void)

void FUN_140541c20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1405385c0(lVar1);
    FMemory::operator_delete(lVar1,0xa0);
    return;
  }
  return;
}



// FUNCTION 140541c50 FUN_140541c50 body=20 status=ok
// SIG undefined FUN_140541c50(void)

void FUN_140541c50(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14053b650(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 140541c70 FUN_140541c70 body=20 status=ok
// SIG undefined FUN_140541c70(void)

void FUN_140541c70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14053b740(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 140541c90 FUN_140541c90 body=20 status=ok
// SIG undefined FUN_140541c90(void)

void FUN_140541c90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14053b840(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 140541cb0 FUN_140541cb0 body=20 status=ok
// SIG undefined FUN_140541cb0(void)

void FUN_140541cb0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14053b970(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 140541cd0 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FOnlineUserPresence,SharedPointerInternals::DefaultDeleter<FOnlineUserPresence>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_140538800(lVar1);
    FMemory::operator_delete(lVar1,0x80);
    return;
  }
  return;
}



// FUNCTION 140541d00 FUN_140541d00 body=20 status=ok
// SIG undefined FUN_140541d00(void)

void FUN_140541d00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14053ba70(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 140541d20 FUN_140541d20 body=20 status=ok
// SIG undefined FUN_140541d20(void)

void FUN_140541d20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14053bba0(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 140541d40 FUN_140541d40 body=20 status=ok
// SIG undefined FUN_140541d40(void)

void FUN_140541d40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14053c0b0(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 140541d60 FUN_140541d60 body=20 status=ok
// SIG undefined FUN_140541d60(void)

void FUN_140541d60(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14053c160(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 140541d80 FUN_140541d80 body=20 status=ok
// SIG undefined FUN_140541d80(void)

void FUN_140541d80(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14053c290(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 140541da0 FUN_140541da0 body=20 status=ok
// SIG undefined FUN_140541da0(void)

void FUN_140541da0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14053c3c0(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 140541dc0 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<OpenSubdiv::v3_2_0::Far::TopologyRefiner,SharedPointerInternals::DefaultDeleter<OpenSubdiv::v3_2_0::Far::TopologyRefiner>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1405395c0(lVar1);
    FMemory::operator_delete(lVar1,0x70);
    return;
  }
  return;
}



// FUNCTION 140541df0 FUN_140541df0 body=2119 status=ok
// SIG undefined FUN_140541df0(void)

void FUN_140541df0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong local_res10;
  uint local_res18;
  undefined8 local_res20;
  longlong *local_b0;
  longlong *plStack_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90 [2];
  longlong local_80 [2];
  longlong local_70 [2];
  undefined1 local_60 [8];
  longlong *local_58;
  
  plVar13 = (longlong *)0x0;
  iVar15 = 0;
  local_res18 = 0;
  plVar16 = (longlong *)0x0;
  local_res10 = param_2;
  if (0 < (int)param_1[0x51]) {
    plVar11 = (longlong *)(param_1[0x50] + 0xb8);
    plVar14 = plVar13;
    plVar8 = plVar13;
    do {
      if (*plVar11 == param_2) {
        lVar17 = (longlong)(int)plVar8 * 0x118 + param_1[0x50];
        if (lVar17 != 0) {
          if (*(uint *)(lVar17 + 0x110) < 2) {
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x54,&local_res10);
            return;
          }
          if (*(uint *)(lVar17 + 0x110) == 7) {
            return;
          }
          if (*(char *)(lVar17 + 0x3a) == '\0') {
            local_b0 = (longlong *)0x0;
            plStack_a8 = (longlong *)0x0;
            plVar11 = plVar13;
            if ((((*(longlong *)(lVar17 + 8) != 0) &&
                 (plVar11 = plVar16, *(undefined8 **)(lVar17 + 0xe0) != (undefined8 *)0x0)) &&
                (cVar6 = (**(code **)**(undefined8 **)(lVar17 + 0xe0))(), cVar6 != '\0')) &&
               (*(char *)(lVar17 + 0x38) != '\0')) {
              plVar14 = (longlong *)operator_new(0x58);
              local_b0 = plVar13;
              plVar11 = plVar13;
              plVar16 = param_1;
              if (plVar14 != (longlong *)0x0) {
                plVar16 = *(longlong **)(lVar17 + 0x10);
                plVar11 = *(longlong **)(lVar17 + 0xa0);
                lVar4 = *(longlong *)(lVar17 + 8);
                if (plVar16 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                  UNLOCK();
                }
                uVar7 = (**(code **)(*plVar11 + 0x38))(plVar11,local_80);
                *plVar14 = 0;
                plVar14[1] = 0;
                plVar14[2] = lVar4;
                plVar14[3] = (longlong)plVar16;
                if (plVar16 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                  UNLOCK();
                }
                FString::FString(plVar14 + 4,uVar7);
                *(undefined4 *)(plVar14 + 6) = 2;
                plVar14[7] = 0;
                plVar14[8] = 0;
                plVar14[9] = 0;
                *(undefined4 *)(plVar14 + 10) = 0;
                local_b0 = plVar14;
                plVar11 = (longlong *)0x3;
              }
              plVar8 = (longlong *)operator_new(0x18);
              plVar14 = plVar13;
              if (plVar8 != (longlong *)0x0) {
                *(undefined4 *)(plVar8 + 1) = 1;
                *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
                *plVar8 = (longlong)&PTR_FUN_143fc21f0;
                plVar8[2] = (longlong)local_b0;
                plVar14 = plVar8;
              }
              local_98 = plVar14;
              if (local_b0 != (longlong *)0x0) {
                if ((*local_b0 != 0) && (local_b0[1] != 0)) {
                  piVar1 = (int *)(local_b0[1] + 8);
                  LOCK();
                  iVar15 = *piVar1;
                  if (iVar15 == 0) {
                    *piVar1 = 0;
                    iVar15 = 0;
                  }
                  UNLOCK();
                  if (0 < iVar15) goto LAB_140542050;
                }
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                  UNLOCK();
                }
                *local_b0 = (longlong)local_b0;
                plVar8 = (longlong *)local_b0[1];
                if (plVar14 != plVar8) {
                  if (plVar14 != (longlong *)0x0) {
                    LOCK();
                    *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
                    UNLOCK();
                    plVar8 = (longlong *)local_b0[1];
                  }
                  if (plVar8 != (longlong *)0x0) {
                    LOCK();
                    piVar1 = (int *)((longlong)plVar8 + 0xc);
                    iVar15 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar15 == 1) {
                      (**(code **)(*plVar8 + 8))(plVar8,1);
                    }
                  }
                  local_b0[1] = (longlong)plVar14;
                }
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  plVar8 = plVar14 + 1;
                  lVar4 = *plVar8;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)lVar4 == 1) {
                    (**(code **)*plVar14)(plVar14);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar14 + 0xc);
                    iVar15 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar15 == 1) {
                      (**(code **)(*plVar14 + 8))(plVar14,1);
                    }
                  }
                }
              }
LAB_140542050:
              local_a0 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_a8,&local_98);
              plVar14 = local_98;
              if (local_98 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_98 + 1;
                lVar4 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)*local_98)(local_98);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar14 + 0xc);
                  iVar15 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    (**(code **)(*local_98 + 8))(local_98,1);
                  }
                }
              }
              if ((((ulonglong)plVar11 & 2) != 0) &&
                 (plVar11 = (longlong *)(ulonglong)((uint)plVar11 & 0xfffffffd),
                 plVar16 != (longlong *)0x0)) {
                LOCK();
                plVar14 = plVar16 + 1;
                lVar4 = *plVar14;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)*plVar16)(plVar16);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar16 + 0xc);
                  iVar15 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    (**(code **)(*plVar16 + 8))(plVar16,1);
                  }
                }
              }
              if ((((ulonglong)plVar11 & 1) != 0) &&
                 (plVar11 = (longlong *)(ulonglong)((uint)plVar11 & 0xfffffffe), local_80[0] != 0))
              {
                FMemory::Free();
              }
              plVar16 = *(longlong **)(lVar17 + 0xa8);
              lVar4 = *(longlong *)(lVar17 + 0xa0);
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                UNLOCK();
              }
              *(undefined4 *)(lVar4 + 0x38) = 0;
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                plVar14 = plVar16 + 1;
                lVar4 = *plVar14;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)*plVar16)(plVar16);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar16 + 0xc);
                  iVar15 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    (**(code **)(*plVar16 + 8))(plVar16,1);
                  }
                }
              }
            }
            plVar16 = *(longlong **)(lVar17 + 0xa0);
            plVar14 = *(longlong **)(lVar17 + 0xa8);
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
            }
            plVar9 = (longlong *)operator_new(0x70);
            plVar8 = plVar13;
            if (plVar9 != (longlong *)0x0) {
              local_res18 = (uint)plVar11 | 4;
              local_res20 = (**(code **)(*plVar16 + 0x38))(plVar16,local_70);
              lVar4 = local_res10;
              *plVar9 = 0;
              plVar9[1] = 0;
              plVar9[2] = 0;
              iVar15 = (int)plVar16[2];
              puVar10 = (undefined8 *)plVar16[1];
              *(int *)(plVar9 + 3) = iVar15;
              if (iVar15 == 0) {
                *(undefined4 *)((longlong)plVar9 + 0x1c) = 0;
              }
              else {
                TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar9 + 2,iVar15,0);
                puVar12 = (undefined8 *)plVar9[2];
                do {
                  *puVar12 = *puVar10;
                  lVar5 = puVar10[1];
                  puVar12[1] = lVar5;
                  if (lVar5 != 0) {
                    LOCK();
                    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
                    UNLOCK();
                  }
                  puVar12 = puVar12 + 2;
                  puVar10 = puVar10 + 2;
                  iVar15 = iVar15 + -1;
                } while (iVar15 != 0);
              }
              plVar9[4] = lVar4;
              FString::FString(plVar9 + 5,local_res20);
              plVar9[7] = (longlong)local_b0;
              plVar9[8] = (longlong)plStack_a8;
              if (plStack_a8 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_a8 + 1) = (int)plStack_a8[1] + 1;
                UNLOCK();
              }
              plVar11 = (longlong *)(ulonglong)local_res18;
              plVar9[9] = 0;
              plVar9[10] = 0;
              *(undefined4 *)(plVar9 + 0xb) = 0xffffffff;
              *(undefined4 *)((longlong)plVar9 + 0x5c) = 1;
              plVar9[0xc] = 0;
              *(undefined4 *)(plVar9 + 0xd) = 0;
              plVar8 = plVar9;
            }
            plVar16 = (longlong *)operator_new(0x18);
            if (plVar16 != (longlong *)0x0) {
              *(undefined4 *)(plVar16 + 1) = 1;
              *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
              *plVar16 = (longlong)&PTR_FUN_143fc2200;
              plVar16[2] = (longlong)plVar8;
              plVar13 = plVar16;
            }
            if (plVar8 != (longlong *)0x0) {
              if ((*plVar8 != 0) && (plVar8[1] != 0)) {
                piVar1 = (int *)(plVar8[1] + 8);
                LOCK();
                iVar15 = *piVar1;
                if (iVar15 == 0) {
                  *piVar1 = 0;
                  iVar15 = 0;
                }
                UNLOCK();
                if (0 < iVar15) goto LAB_14054230f;
              }
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
              }
              *plVar8 = (longlong)plVar8;
              plVar16 = (longlong *)plVar8[1];
              if (plVar13 != plVar16) {
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
                  UNLOCK();
                  plVar16 = (longlong *)plVar8[1];
                }
                if (plVar16 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)plVar16 + 0xc);
                  iVar15 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    (**(code **)(*plVar16 + 8))(plVar16,1);
                  }
                }
                plVar8[1] = (longlong)plVar13;
              }
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                plVar16 = plVar13 + 1;
                lVar4 = *plVar16;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar13 + 0xc);
                  iVar15 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
              }
            }
LAB_14054230f:
            if ((((ulonglong)plVar11 & 4) != 0) && (local_70[0] != 0)) {
              FMemory::Free();
            }
            if (plVar8 == (longlong *)0x0) {
              iVar15 = -0x7fffbffb;
            }
            else {
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
              }
              iVar15 = (int)param_1[0x72];
              *(int *)(param_1 + 0x72) = iVar15 + 1;
              if (*(int *)((longlong)param_1 + 0x394) < iVar15 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x71,iVar15);
              }
              puVar10 = (undefined8 *)((longlong)iVar15 * 0x10 + param_1[0x71]);
              *puVar10 = plVar8;
              puVar10[1] = plVar13;
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
                LOCK();
                plVar16 = plVar13 + 1;
                lVar4 = *plVar16;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar13 + 0xc);
                  iVar15 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
              }
              pplVar2 = (longlong **)(plVar8 + 0xc);
              *(undefined4 *)(lVar17 + 0x110) = 7;
              plVar16 = (longlong *)FMemory::Realloc(0,0x30);
              local_90[0] = plVar16;
              if (plVar16 != (longlong *)0x0) {
                *plVar16 = (longlong)&DAT_143f3ed00;
                plVar16[1] = (longlong)param_1;
                plVar16[2] = (longlong)FUN_140554370;
                lVar17 = FDelegateHandle::GenerateNewID();
                plVar16[4] = lVar17;
                *plVar16 = (longlong)&PTR_GetPoolName_143f3ed48;
              }
              if (local_90 != pplVar2) {
                if (plVar16 == (longlong *)0x0) {
                  if (((int)plVar8[0xd] != 0) && (plVar11 = *pplVar2, plVar11 != (longlong *)0x0)) {
                    (**(code **)(*plVar11 + 0x28))(plVar11,0);
                    if (*pplVar2 != (longlong *)0x0) {
                      plVar11 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
                      *pplVar2 = plVar11;
                    }
                    *(undefined4 *)(plVar8 + 0xd) = 0;
                  }
                }
                else {
                  (**(code **)(*plVar16 + 0x30))(plVar16,pplVar2);
                }
              }
              if (plVar16 != (longlong *)0x0) {
                (**(code **)(*plVar16 + 0x28))(plVar16,0);
                local_90[0] = (longlong *)FMemory::Realloc(plVar16,0,0);
                if (local_90[0] != (longlong *)0x0) {
                  FMemory::Free(local_90[0]);
                }
              }
              lVar17 = plVar8[7];
              if (lVar17 == 0) {
                *(undefined4 *)(plVar8 + 0xb) = 0;
                FUN_14055f420(plVar8);
                iVar15 = 0x3e5;
              }
              else {
                uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar8,local_60);
                FUN_1405313f0(lVar17 + 0x48,uVar7,&LAB_1405542c0);
                if (local_58 != (longlong *)0x0) {
                  LOCK();
                  plVar16 = local_58 + 1;
                  lVar17 = *plVar16;
                  *(int *)plVar16 = (int)*plVar16 + -1;
                  UNLOCK();
                  if ((int)lVar17 == 1) {
                    (**(code **)*local_58)(local_58);
                    LOCK();
                    piVar1 = (int *)((longlong)local_58 + 0xc);
                    iVar15 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar15 == 1) {
                      (**(code **)(*local_58 + 8))(local_58,1);
                    }
                  }
                }
                FUN_1405640e0(plVar8[7]);
                iVar15 = 0x3e5;
              }
            }
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              plVar16 = plVar13 + 1;
              lVar17 = *plVar16;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)lVar17 == 1) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
            }
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              plVar13 = plVar14 + 1;
              lVar17 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar17 == 1) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            plVar13 = plStack_a8;
            if (plStack_a8 != (longlong *)0x0) {
              LOCK();
              plVar16 = plStack_a8 + 1;
              lVar17 = *plVar16;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)lVar17 == 1) {
                (**(code **)*plStack_a8)(plStack_a8);
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plStack_a8 + 8))(plStack_a8,1);
                }
              }
            }
            if (iVar15 != 0x3e5) {
LAB_140542600:
              FUN_14054adc0(param_1,local_res10,(iVar15 != 0) + '\x01');
            }
            return;
          }
          FUN_1404b6bd0(param_1 + 0x56);
          goto LAB_140542600;
        }
        break;
      }
      plVar8 = (longlong *)(ulonglong)((int)plVar8 + 1);
      plVar14 = (longlong *)((longlong)plVar14 + 1);
      plVar11 = plVar11 + 0x23;
    } while ((longlong)plVar14 < (longlong)(int)param_1[0x51]);
  }
  (**(code **)(*param_1 + 0xf0))(param_1,param_2,2);
  return;
}



// FUNCTION 140542640 FUN_140542640 body=153 status=ok
// SIG undefined FUN_140542640(void)

void FUN_140542640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_10;
  
  if (DAT_146853548 != (longlong *)0x0) {
    (**(code **)(*DAT_146853548 + 0x110))();
    local_10 = (longlong *)0x0;
    DAT_146853548 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&DAT_146853550,&local_10,param_3,param_4,0);
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



// FUNCTION 1405426e0 FUN_1405426e0 body=269 status=ok
// SIG undefined FUN_1405426e0(void)

void FUN_1405426e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  int local_res8 [2];
  undefined1 local_58 [80];
  
  FUN_140549500(param_1 + 0x78,local_res8,param_2);
  lVar2 = 0;
  if (local_res8[0] != -1) {
    lVar2 = (longlong)local_res8[0] * 0x168 + *(longlong *)(param_1 + 0x78);
  }
  lVar6 = lVar2 + 0x10;
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
    lVar2 = lVar6 + 0x60;
    cVar1 = FUN_140584270(lVar2);
    if (cVar1 != '\0') {
      cVar1 = FUN_140584270(lVar2);
      if (cVar1 != '\0') {
        FUN_140566c30(param_1,param_2);
        plVar3 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,lVar6);
        plVar4 = (longlong *)(**(code **)(*plVar3 + 0x60))(plVar3,lVar2);
        (**(code **)(*plVar4 + 0x58))(plVar4,0);
        (**(code **)(*plVar3 + 0x68))(plVar3,lVar2);
      }
      uVar5 = FUN_14056c960(local_58);
      ChannelId::operator=(lVar2,uVar5);
      FUN_14056f1b0(local_58);
    }
  }
  return;
}



// FUNCTION 1405427f0 FUN_1405427f0 body=785 status=ok
// SIG undefined FUN_1405427f0(void)

void FUN_1405427f0(longlong *param_1,undefined8 param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  void *_Src;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 local_98;
  uint *puStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
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
  
  (**(code **)(*param_1 + 0x48))();
  if ((param_3 != '\0') && ((int)param_1[0x1b] == *(int *)((longlong)param_1 + 0x104))) {
    local_50 = param_1 + 0xf;
    uVar2 = *(uint *)(param_1 + 0x14);
    puVar1 = (uint *)(param_1 + 0x11);
    local_98 = (void *)0x100000000;
    uStack_84 = 0;
    iStack_80 = 0;
    if (uVar2 != 0) {
      puVar12 = (uint *)param_1[0x13];
      if ((uint *)param_1[0x13] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar6 = *puVar12;
      iStack_80 = 0;
      iVar7 = 0;
      while (uVar6 == 0) {
        iStack_80 = iStack_80 + 0x20;
        uVar4 = (ulonglong)local_98 >> 0x20;
        local_98 = (void *)CONCAT44((int)uVar4,iVar7 + 1);
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_1405428fc;
        uVar6 = puVar12[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar7 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      local_98 = (void *)CONCAT44(uVar6,SUB84(local_98,0));
      if (uVar6 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_84 = (iStack_80 - iVar7) + 0x1f;
      if ((int)uVar2 < (int)uStack_84) {
LAB_1405428fc:
        uStack_84 = uVar2;
      }
    }
    uVar6 = *(uint *)(param_1 + 0x14);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,iStack_80);
    local_88 = -1 << ((byte)uVar6 & 0x1f);
    uStack_48 = local_98;
    pvVar3 = uStack_48;
    uVar11 = uVar6 & 0xffffffe0;
    uStack_48._0_4_ = SUB84(local_98,0);
    uStack_48._4_4_ = (uint)((ulonglong)local_98 >> 0x20);
    uStack_70 = (undefined4)uStack_48;
    uStack_6c = uStack_48._4_4_;
    puStack_90 = puVar1;
    uStack_84 = uVar6;
    local_68 = puVar1;
    uStack_48 = pvVar3;
    puStack_40 = puVar1;
    uStack_30 = local_58;
    local_78 = local_50;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    if (uVar6 != uVar2) {
      puVar12 = (uint *)param_1[0x13];
      if ((uint *)param_1[0x13] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar9 = puVar12[(int)uVar6 >> 5] & local_88;
      iVar7 = (int)uVar6 >> 5;
      while (uVar9 == 0) {
        uVar11 = uVar11 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_1405429c2;
        uVar9 = puVar12[(longlong)iVar7 + 1];
        local_88 = 0xffffffff;
        iVar7 = iVar7 + 1;
      }
      uVar9 = -uVar9 & uVar9;
      iVar7 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar9 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_84 = (uVar11 - iVar7) + 0x1f;
      uVar6 = uStack_84;
      if ((int)uVar2 < (int)uStack_84) {
LAB_1405429c2:
        uStack_84 = uVar2;
        uVar6 = uVar2;
      }
    }
    while( true ) {
      if (((uStack_5c == uVar6) && (local_68 == puVar1)) && (local_78 == param_1 + 0xf)) break;
      lVar10 = (longlong)(int)uStack_5c * 0x168 + *local_78;
      cVar5 = FUN_140584270(lVar10 + 0x70);
      if (cVar5 != '\0') {
        puVar8 = (undefined8 *)FUN_1405859b0(lVar10 + 0x70);
        _Src = (void *)0x0;
        local_98 = (void *)0x0;
        iVar7 = *(int *)(puVar8 + 1);
        pvVar3 = (void *)*puVar8;
        puStack_90 = (uint *)CONCAT44(puStack_90._4_4_,iVar7);
        if (iVar7 == 0) {
          puStack_90 = (uint *)0x0;
          iVar7 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,iVar7,0);
          _Src = local_98;
          _guard_xfg_dispatch_icall_nop(local_98,pvVar3,(longlong)iVar7 * 2);
          iVar7 = (int)puStack_90;
        }
        FUN_1405426e0(param_1,lVar10 + 0xc0);
        *(undefined1 *)(lVar10 + 0xf8) = 1;
        puVar8 = (undefined8 *)(lVar10 + 0x100);
        if (puVar8 != &local_98) {
          *(int *)(lVar10 + 0x108) = iVar7;
          if ((iVar7 == 0) && (*(int *)(lVar10 + 0x10c) == 0)) {
            *(undefined4 *)(lVar10 + 0x10c) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8,iVar7);
            _guard_xfg_dispatch_icall_nop((void *)*puVar8,_Src,(longlong)iVar7 * 2);
          }
        }
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
        }
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    }
  }
  return;
}



// FUNCTION 140542b10 FUN_140542b10 body=1759 status=ok
// SIG undefined FUN_140542b10(void)

void FUN_140542b10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  int iVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined2 *puVar15;
  undefined4 *puVar16;
  wchar_t *pwVar17;
  undefined2 *puVar18;
  uint *puVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined2 *puVar22;
  uint *puVar23;
  undefined4 local_res10 [2];
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8 [2];
  longlong local_1a0 [4];
  int local_180;
  uint uStack_17c;
  uint *puStack_178;
  undefined4 local_170;
  uint uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  undefined4 *local_160;
  int local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint uStack_140;
  uint uStack_13c;
  undefined8 uStack_138;
  int local_130;
  int local_12c;
  longlong *local_128;
  undefined8 *local_120;
  undefined4 *local_118;
  uint *local_110;
  longlong *local_108;
  ulonglong local_100;
  longlong *local_f8;
  int iStack_f0;
  uint uStack_ec;
  uint *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  longlong local_d0 [2];
  longlong local_c0 [2];
  longlong local_b0 [2];
  longlong local_a0 [2];
  longlong local_90 [2];
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [2];
  undefined1 local_50 [8];
  longlong *local_48;
  
  plVar21 = (longlong *)(param_2 + 0x98);
  local_128 = plVar21;
  (**(code **)(*plVar21 + 0x20))(plVar21,&DAT_1464aa720);
  local_res10[0] = 0;
  local_1a0[0] = 0;
  local_1a0[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a0,0);
  FGenericPlatformString::Memcpy(local_1a0[0],L"FOnlineFriendsSpark",0x28);
  FUN_1428a6fb0(plVar21,local_1a0,local_res10);
  if (local_1a0[0] != 0) {
    FMemory::Free();
  }
  (**(code **)(*plVar21 + 0x20))(plVar21,&DAT_1464aa6c0);
  plVar20 = (longlong *)(param_1 + 0xf0);
  uStack_17c = 1;
  uVar4 = *(uint *)(param_1 + 0x118);
  puVar23 = (uint *)(param_1 + 0x100);
  local_180 = 0;
  uStack_16c = 0;
  iStack_168 = 0;
  if (uVar4 != 0) {
    puVar19 = *(uint **)(param_1 + 0x110);
    if (*(uint **)(param_1 + 0x110) == (uint *)0x0) {
      puVar19 = puVar23;
    }
    uVar5 = *puVar19;
    iStack_168 = 0;
    local_180 = 0;
    while (uVar5 == 0) {
      lVar12 = (longlong)local_180;
      iStack_168 = iStack_168 + 0x20;
      iVar10 = local_180 + 1;
      bVar7 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_180;
      local_180 = iVar10;
      if (bVar7) goto LAB_140542c74;
      uVar5 = puVar19[lVar12 + 1];
    }
    uStack_17c = -uVar5 & uVar5;
    local_130 = 0x1f;
    if (uStack_17c != 0) {
      for (; uStack_17c >> local_130 == 0; local_130 = local_130 + -1) {
      }
    }
    if (uStack_17c == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - local_130;
    }
    uStack_16c = (iStack_168 - iVar10) + 0x1f;
    if ((int)uVar4 < (int)uStack_16c) {
LAB_140542c74:
      uStack_16c = uVar4;
    }
  }
  local_170 = 0xffffffff;
  uVar5 = *(uint *)(param_1 + 0x118);
  uStack_150 = CONCAT44(uStack_17c,local_180);
  uStack_e0 = 0xffffffff;
  uStack_dc = uStack_16c;
  uStack_138 = CONCAT44(uStack_164,iStack_168);
  local_158 = (int)uVar5 >> 5;
  uStack_154 = (undefined4)((ulonglong)plVar20 >> 0x20);
  uVar14 = -1 << ((byte)uVar5 & 0x1f);
  uStack_140 = uVar5 & 0xffffffe0;
  uStack_148 = CONCAT44(uVar5,uVar14);
  uStack_13c = uStack_16c;
  iStack_f0 = local_180;
  uStack_ec = uStack_17c;
  if (uVar5 != uVar4) {
    puVar19 = *(uint **)(param_1 + 0x110);
    if (*(uint **)(param_1 + 0x110) == (uint *)0x0) {
      puVar19 = puVar23;
    }
    uVar14 = puVar19[local_158] & uVar14;
    while (uVar14 == 0) {
      lVar12 = (longlong)local_158;
      uStack_140 = uStack_140 + 0x20;
      iVar10 = local_158 + 1;
      bVar7 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_158;
      local_158 = iVar10;
      if (bVar7) goto LAB_140542d4d;
      uVar14 = puVar19[lVar12 + 1];
      uStack_148 = 0xffffffff;
    }
    uVar14 = -uVar14 & uVar14;
    local_12c = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> local_12c == 0; local_12c = local_12c + -1) {
      }
    }
    if (uVar14 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - local_12c;
    }
    iVar10 = (uStack_140 - iVar10) + 0x1f;
    uStack_148 = CONCAT44(iVar10,(undefined4)uStack_148);
    if ((int)uVar4 < iVar10) {
LAB_140542d4d:
      uStack_148 = CONCAT44(uVar4,(undefined4)uStack_148);
    }
  }
  local_100 = uStack_148 >> 0x20;
  puStack_178 = puVar23;
  local_110 = puVar23;
  local_108 = plVar20;
  local_e8 = puVar23;
  local_d8 = uStack_138;
  local_f8 = plVar20;
  while (((uStack_dc != (uint)local_100 || (local_e8 != puVar23)) || (local_f8 != plVar20))) {
    local_1b8 = 0;
    puVar13 = (undefined8 *)((longlong)(int)uStack_dc * 0x38 + *local_f8);
    puVar8 = (undefined8 *)
             (**(code **)(*(longlong *)*puVar13 + 0x30))((longlong *)*puVar13,local_80);
    if (*(int *)(puVar8 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*puVar8;
    }
    FString::PrintfImpl(local_d0,L"  LocalUser \'%s\':",puVar22);
    FUN_1428a6fb0(plVar21,local_d0,&local_1b8);
    if (local_d0[0] != 0) {
      FMemory::Free();
    }
    if (local_80[0] != 0) {
      FMemory::Free();
    }
    puVar16 = (undefined4 *)puVar13[4];
    local_118 = puVar16 + (longlong)*(int *)(puVar13 + 5) * 0x18;
    local_160 = puVar16;
    if (puVar16 != local_118) {
      do {
        local_1b4 = 0;
        switch(*puVar16) {
        case 0:
          pwVar17 = L"default";
          break;
        case 1:
          pwVar17 = L"onlinePlayers";
          break;
        case 2:
          pwVar17 = L"inGamePlayers";
          break;
        case 3:
          pwVar17 = L"BlockedPlayers";
          break;
        case 4:
          pwVar17 = L"PendingOutgoingRequests";
          break;
        case 5:
          pwVar17 = L"PendingIncomingRequests";
          break;
        default:
          pwVar17 = L"";
        }
        local_160 = puVar16;
        FString::PrintfImpl(local_c0,L"    ListType: %s",pwVar17);
        FUN_1428a6fb0(plVar21,local_c0,&local_1b4);
        if (local_c0[0] != 0) {
          FMemory::Free();
        }
        iVar10 = puVar16[6];
        local_1b0 = 0;
        if (iVar10 == 0) {
          pwVar17 = L"NotStarted";
        }
        else if (iVar10 == 1) {
          pwVar17 = L"InProgress";
        }
        else if (iVar10 == 2) {
          pwVar17 = L"Done";
        }
        else if (iVar10 == 3) {
          pwVar17 = L"Failed";
        }
        else {
          pwVar17 = L"";
        }
        FString::PrintfImpl(local_b0,L"    ReadState: %s",pwVar17);
        FUN_1428a6fb0(plVar21,local_b0,&local_1b0);
        if (local_b0[0] != 0) {
          FMemory::Free();
        }
        local_1ac = 0;
        FString::PrintfImpl(local_a0,L"    Friends (%d):",puVar16[10]);
        FUN_1428a6fb0(plVar21,local_a0,&local_1ac);
        if (local_a0[0] != 0) {
          FMemory::Free();
        }
        puVar8 = *(undefined8 **)(puVar16 + 8);
        local_120 = puVar8 + (longlong)(int)puVar16[10] * 2;
        if (puVar8 != local_120) {
          do {
            plVar20 = (longlong *)puVar8[1];
            plVar21 = (longlong *)*puVar8;
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
              UNLOCK();
            }
            local_1a8[0] = 0;
            local_1a0[2] = 0;
            local_1a0[3] = 0;
            puVar13 = (undefined8 *)(**(code **)(*plVar21 + 8))(plVar21,local_50);
            plVar6 = (longlong *)*puVar13;
            lVar12 = (**(code **)(*plVar21 + 0x38))(plVar21);
            if (*(int *)(lVar12 + 0x20) == 0) {
              puVar22 = &DAT_143f3eda8;
            }
            else {
              puVar22 = *(undefined2 **)(lVar12 + 0x18);
            }
            lVar12 = (**(code **)(*plVar21 + 0x38))(plVar21);
            uVar4 = *(uint *)(lVar12 + 0x10);
            lVar12 = (**(code **)(*plVar21 + 0x38))(plVar21);
            uVar5 = *(uint *)(lVar12 + 0x10);
            lVar12 = (**(code **)(*plVar21 + 0x38))(plVar21);
            bVar3 = *(byte *)(lVar12 + 0x10);
            local_1a0[2] = 0;
            local_1a0[3] = 0;
            puVar13 = (undefined8 *)(**(code **)(*plVar21 + 0x18))(plVar21,local_60,local_1a0 + 2);
            if (*(int *)(puVar13 + 1) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)*puVar13;
            }
            puVar13 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,local_70);
            if (*(int *)(puVar13 + 1) == 0) {
              puVar18 = &DAT_143f3eda8;
            }
            else {
              puVar18 = (undefined2 *)*puVar13;
            }
            pwVar17 = L"False";
            if ((uVar4 >> 2 & 1) != 0) {
              pwVar17 = L"True";
            }
            pwVar11 = L"False";
            pwVar9 = L"False";
            if ((uVar5 >> 3 & 1) != 0) {
              pwVar11 = L"True";
            }
            if ((bVar3 & 1) != 0) {
              pwVar9 = L"True";
            }
            FString::PrintfImpl(local_90,
                                L"      UserId:%s, Name:%s, Online:%s, Joinable:%s, PlayingThisGame:%s, StatusStr:%s"
                                ,puVar18,puVar15,pwVar9,pwVar11,pwVar17,puVar22);
            plVar21 = local_128;
            FUN_1428a6fb0(local_128,local_90,local_1a8);
            if (local_90[0] != 0) {
              FMemory::Free();
            }
            if (local_70[0] != 0) {
              FMemory::Free();
            }
            if (local_60[0] != 0) {
              FMemory::Free();
            }
            if (local_1a0[2] != 0) {
              FMemory::Free();
            }
            plVar6 = local_48;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_48 + 1;
              lVar12 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)*local_48)(local_48);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              plVar6 = plVar20 + 1;
              lVar12 = *plVar6;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)*plVar20)(plVar20);
                LOCK();
                piVar2 = (int *)((longlong)plVar20 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar20 + 8))(plVar20,1);
                }
              }
            }
            puVar8 = puVar8 + 2;
            puVar16 = local_160;
          } while (puVar8 != local_120);
        }
        puVar16 = puVar16 + 0x18;
        plVar20 = local_108;
        puVar23 = local_110;
        local_160 = puVar16;
      } while (puVar16 != local_118);
    }
    uStack_e0 = uStack_e0 & ~uStack_ec;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_f0);
  }
  return;
}



// FUNCTION 140543210 FUN_140543210 body=1955 status=ok
// SIG undefined FUN_140543210(void)

/* WARNING: Removing unreachable block (ram,0x000140543832) */
/* WARNING: Removing unreachable block (ram,0x00014054354c) */
/* WARNING: Removing unreachable block (ram,0x00014054337d) */
/* WARNING: Removing unreachable block (ram,0x000140543427) */
/* WARNING: Removing unreachable block (ram,0x00014054369d) */
/* WARNING: Removing unreachable block (ram,0x000140543614) */
/* WARNING: Removing unreachable block (ram,0x000140543720) */
/* WARNING: Removing unreachable block (ram,0x000140543793) */

void FUN_140543210(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  short *psVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  undefined2 *puVar17;
  longlong lVar18;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  longlong *local_138;
  int local_130;
  int local_12c;
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
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50 [3];
  
  plVar8 = (longlong *)(param_2 + 0x98);
  local_88 = plVar8;
  (**(code **)(*plVar8 + 0x20))(plVar8,&DAT_1464aa720);
  local_res8[0] = 0;
  local_98 = 0;
  local_90 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"FOnlineSessionSpark",0x28);
  FUN_1428a6fb0(plVar8,&local_98,local_res8);
  if (local_98 != 0) {
    FMemory::Free();
  }
  (**(code **)(*plVar8 + 0x20))(plVar8,&DAT_1464aa6c0);
  lVar15 = *(longlong *)(param_1 + 0x290);
  local_138 = (longlong *)0x0;
  local_12c = 0;
  iVar10 = 0;
  if (lVar15 != 0) {
    iVar10 = *(int *)(lVar15 + 0x18);
    if (iVar10 == 0) {
      pwVar16 = L"NotStarted";
    }
    else if (iVar10 == 1) {
      pwVar16 = L"InProgress";
    }
    else if (iVar10 == 2) {
      pwVar16 = L"Done";
    }
    else if (iVar10 == 3) {
      pwVar16 = L"Failed";
    }
    else {
      pwVar16 = L"";
    }
    pwVar4 = L"False";
    if (*(char *)(lVar15 + 0x78) != '\0') {
      pwVar4 = L"True";
    }
    FString::PrintfImpl(&local_128,L"CurrentSessionSearch State:%s, MaxResults:%d, IsLAN:%s",pwVar16
                        ,*(undefined4 *)(lVar15 + 0x1c),pwVar4);
    local_130 = 1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_138,0);
    iVar10 = local_130;
    *local_138 = 0;
    *local_138 = local_128;
    *(undefined4 *)(local_138 + 1) = (undefined4)local_120;
    *(undefined4 *)((longlong)local_138 + 0xc) = local_120._4_4_;
    local_120 = 0;
    local_128 = 0;
    lVar15 = (longlong)local_130;
    local_130 = local_130 + 1;
    if (local_12c < local_130) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_138,iVar10);
    }
    local_138[lVar15 * 2] = 0;
    (local_138 + lVar15 * 2)[1] = 0;
    iVar10 = local_130;
  }
  FString::PrintfImpl(&local_118,L"NamedSessions (%d):",*(undefined4 *)(param_1 + 0x288));
  local_130 = iVar10 + 1;
  if (local_12c < local_130) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_138,iVar10);
  }
  plVar7 = local_138 + (longlong)iVar10 * 2;
  *plVar7 = 0;
  *plVar7 = local_118;
  *(undefined4 *)(plVar7 + 1) = (undefined4)local_110;
  *(undefined4 *)((longlong)plVar7 + 0xc) = local_110._4_4_;
  local_110 = 0;
  local_118 = 0;
  lVar15 = *(longlong *)(param_1 + 0x280);
  lVar18 = (longlong)*(int *)(param_1 + 0x288) * 0x118 + lVar15;
  for (; lVar15 != lVar18; lVar15 = lVar15 + 0x118) {
    switch(*(undefined4 *)(lVar15 + 0x110)) {
    case 0:
      pwVar16 = L"NoSession";
      break;
    case 1:
      pwVar16 = L"Creating";
      break;
    case 2:
      pwVar16 = L"Pending";
      break;
    case 3:
      pwVar16 = L"Starting";
      break;
    case 4:
      pwVar16 = L"InProgress";
      break;
    case 5:
      pwVar16 = L"Ending";
      break;
    case 6:
      pwVar16 = L"Ended";
      break;
    case 7:
      pwVar16 = L"Destroying";
      break;
    default:
      pwVar16 = L"";
    }
    puVar5 = (undefined8 *)FName::ToString(lVar15 + 0xb8,local_80);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar17 = &DAT_143f3eda8;
    }
    else {
      puVar17 = (undefined2 *)*puVar5;
    }
    FString::PrintfImpl(&local_108,L"  Name:%s, State:%s",puVar17,pwVar16);
    iVar10 = local_130;
    lVar11 = (longlong)local_130;
    local_130 = local_130 + 1;
    if (local_12c < local_130) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_138,iVar10);
    }
    plVar8 = local_138 + lVar11 * 2;
    *plVar8 = 0;
    *plVar8 = local_108;
    *(undefined4 *)(plVar8 + 1) = (undefined4)local_100;
    *(undefined4 *)((longlong)plVar8 + 0xc) = local_100._4_4_;
    local_100 = 0;
    local_108 = 0;
    if (local_80[0] != 0) {
      FMemory::Free();
    }
    plVar8 = *(longlong **)(lVar15 + 0xa0);
    if (plVar8 != (longlong *)0x0) {
      plVar7 = *(longlong **)(lVar15 + 0xa8);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      puVar5 = (undefined8 *)(**(code **)(plVar8[3] + 0x68))(plVar8 + 3,local_70,1);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*puVar5;
      }
      FString::PrintfImpl(&local_f8,L"    HostAddress:%s",puVar17);
      iVar10 = local_130;
      lVar11 = (longlong)local_130;
      local_130 = local_130 + 1;
      if (local_12c < local_130) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_138,iVar10);
      }
      iVar10 = local_130;
      plVar9 = local_138 + lVar11 * 2;
      *plVar9 = 0;
      *plVar9 = local_f8;
      *(undefined4 *)(plVar9 + 1) = (undefined4)local_f0;
      *(undefined4 *)((longlong)plVar9 + 0xc) = local_f0._4_4_;
      local_f0 = 0;
      local_f8 = 0;
      if (local_70[0] != 0) {
        FMemory::Free();
      }
      if ((int)plVar8[6] == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)plVar8[5];
      }
      FString::PrintfImpl(&local_e8,L"    LANAddress:%s",puVar17);
      local_130 = iVar10 + 1;
      if (local_12c < local_130) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_138,iVar10);
      }
      iVar3 = local_130;
      plVar9 = local_138 + (longlong)iVar10 * 2;
      *plVar9 = 0;
      *plVar9 = local_e8;
      *(undefined4 *)(plVar9 + 1) = (undefined4)local_e0;
      *(undefined4 *)((longlong)plVar9 + 0xc) = local_e0._4_4_;
      local_e0 = 0;
      local_e8 = 0;
      puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x38))(plVar8,local_60);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*puVar5;
      }
      FString::PrintfImpl(&local_d8,L"    LobbyId:%s",puVar17);
      local_130 = iVar3 + 1;
      if (local_12c < local_130) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_138,iVar3);
      }
      iVar10 = local_130;
      plVar9 = local_138 + (longlong)iVar3 * 2;
      *plVar9 = 0;
      *plVar9 = local_d8;
      *(undefined4 *)(plVar9 + 1) = (undefined4)local_d0;
      *(undefined4 *)((longlong)plVar9 + 0xc) = local_d0._4_4_;
      local_d0 = 0;
      local_d8 = 0;
      if (local_60[0] != 0) {
        FMemory::Free();
      }
      FString::PrintfImpl(&local_c8,L"    LocalUserIds (%d):",(int)plVar8[2]);
      local_130 = iVar10 + 1;
      if (local_12c < local_130) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_138,iVar10);
      }
      plVar9 = local_138 + (longlong)iVar10 * 2;
      *plVar9 = 0;
      *plVar9 = local_c8;
      *(undefined4 *)(plVar9 + 1) = (undefined4)local_c0;
      *(undefined4 *)((longlong)plVar9 + 0xc) = local_c0._4_4_;
      local_c0 = 0;
      local_c8 = 0;
      puVar5 = (undefined8 *)plVar8[1];
      puVar14 = puVar5 + (longlong)(int)plVar8[2] * 2;
      for (; puVar5 != puVar14; puVar5 = puVar5 + 2) {
        puVar6 = (undefined8 *)
                 (**(code **)(*(longlong *)*puVar5 + 0x30))((longlong *)*puVar5,local_50);
        if (*(int *)(puVar6 + 1) == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          puVar17 = (undefined2 *)*puVar6;
        }
        FString::PrintfImpl(&local_b8,L"      %s",puVar17);
        iVar10 = local_130;
        lVar11 = (longlong)local_130;
        local_130 = local_130 + 1;
        if (local_12c < local_130) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_138,iVar10);
        }
        plVar8 = local_138 + lVar11 * 2;
        *plVar8 = 0;
        *plVar8 = local_b8;
        *(undefined4 *)(plVar8 + 1) = (undefined4)local_b0;
        *(undefined4 *)((longlong)plVar8 + 0xc) = local_b0._4_4_;
        local_b0 = 0;
        local_b8 = 0;
        if (local_50[0] != 0) {
          FMemory::Free();
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar7 + 1;
        lVar11 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
    plVar8 = local_88;
  }
  plVar9 = local_138 + (longlong)local_130 * 2;
  for (plVar7 = local_138; plVar2 = local_138, iVar10 = local_130, plVar7 != plVar9;
      plVar7 = plVar7 + 2) {
    local_res10[0] = 0;
    if ((int)plVar7[1] == 0) {
      psVar12 = &DAT_143f3eda8;
    }
    else {
      psVar12 = (short *)*plVar7;
    }
    local_a0 = 0;
    local_a8 = 0;
    if ((psVar12 != (short *)0x0) && (*psVar12 != 0)) {
      lVar15 = -1;
      do {
        lVar18 = lVar15 + 1;
        lVar15 = lVar15 + 1;
      } while (psVar12[lVar18] != 0);
      uVar13 = (int)lVar15 + 1;
      local_a0 = (ulonglong)uVar13;
      if (0 < (int)uVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      }
      FGenericPlatformString::Memcpy(local_a8,psVar12,(longlong)(int)uVar13 * 2);
    }
    FUN_1428a6fb0(plVar8,&local_a8,local_res10);
    if (local_a8 != 0) {
      FMemory::Free();
    }
  }
  for (; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free(local_138);
  }
  return;
}



// FUNCTION 1405439e0 FUN_1405439e0 body=4454 status=ok
// SIG undefined FUN_1405439e0(void)

void FUN_1405439e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  void *pvVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  undefined2 *puVar23;
  float local_158 [2];
  undefined2 *local_150;
  int local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  int local_120;
  uint uStack_11c;
  uint *puStack_118;
  undefined4 local_110;
  uint uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  uint uStack_fc;
  uint *puStack_f8;
  uint local_f0;
  uint uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  longlong *local_e0;
  undefined8 uStack_d8;
  uint *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  uint *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong *local_90 [2];
  longlong *local_80;
  undefined8 uStack_78;
  uint *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if (param_2 != 0) {
    plVar9 = (longlong *)(param_2 + 0x98);
    local_158[0] = 0.0;
    local_90[0] = plVar9;
    (**(code **)(*plVar9 + 0x20))(plVar9,&DAT_1464aa720);
    puVar19 = (undefined2 *)0x0;
    local_138 = 0x12;
    local_140 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,0);
    FGenericPlatformString::Memcpy(local_140,L"FOnlineVoiceSpark",0x24);
    FUN_1428a6fb0(plVar9,&local_140,local_158);
    if (local_140 != 0) {
      FMemory::Free();
    }
    (**(code **)(*plVar9 + 0x20))(plVar9,&DAT_1464aa6c0);
    pwVar16 = L"False";
    local_158[0] = local_158[0] + 10.0;
    if (*(char *)(param_1 + 0x68) != '\0') {
      pwVar16 = L"True";
    }
    FString::PrintfImpl(&local_150,L"Initialized=[%s]",pwVar16);
    FUN_1428a6fb0(plVar9,&local_150,local_158);
    if (local_150 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    puVar8 = (undefined8 *)FName::ToString(param_1 + 0x70,&local_140);
    iVar13 = 0;
    if (*(int *)(puVar8 + 1) == 0) {
      puVar17 = &DAT_143f3eda8;
    }
    else {
      puVar17 = (undefined2 *)*puVar8;
    }
    FString::PrintfImpl(&local_150,L"VoiceSessionName=[%s]",puVar17);
    FUN_1428a6fb0(plVar9,&local_150,local_158);
    if (local_150 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_140 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
      local_140 = 0;
      local_138 = 0;
      plVar9 = (longlong *)FUN_14058b310();
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x28))(plVar9);
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x30))(plVar9);
      puVar8 = (undefined8 *)(**(code **)(*plVar9 + 8))(plVar9);
      local_150 = (undefined2 *)0x0;
      local_148 = *(int *)(puVar8 + 1);
      lVar12 = (longlong)local_148;
      pvVar2 = (void *)*puVar8;
      if (local_148 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_150,local_148,0);
        puVar19 = local_150;
        _guard_xfg_dispatch_icall_nop(local_150,pvVar2,lVar12 * 2);
      }
      puVar17 = &DAT_143f3eda8;
      if (local_148 != 0) {
        puVar17 = puVar19;
      }
      FString::PrintfImpl(&local_150,L"InputDeviceName=[%s] ",puVar17);
      uVar4 = local_138;
      puVar17 = local_150;
      if (local_148 != 0) {
        iVar13 = local_148 + -1;
      }
      puVar23 = (undefined2 *)0x0;
      if (iVar13 != 0) {
        iVar14 = (int)local_138;
        lVar12 = (longlong)(int)local_138;
        iVar5 = (uint)((int)local_138 == 0) + (int)local_138 + iVar13;
        local_138 = CONCAT44(local_138._4_4_,iVar5);
        if (local_138._4_4_ < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,uVar4 & 0xffffffff);
        }
        pvVar2 = (void *)(local_140 + (lVar12 - (ulonglong)(iVar14 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,puVar17,(longlong)iVar13 * 2);
        *(undefined2 *)((longlong)iVar13 * 2 + (longlong)pvVar2) = 0;
      }
      if (local_150 != (undefined2 *)0x0) {
        FMemory::Free(local_150);
      }
      plVar9 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x30))(plVar9);
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x30))(plVar9);
      puVar8 = (undefined8 *)(**(code **)(*plVar9 + 8))(plVar9);
      local_150 = (undefined2 *)0x0;
      local_148 = *(int *)(puVar8 + 1);
      lVar12 = (longlong)local_148;
      pvVar2 = (void *)*puVar8;
      if (local_148 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_150,local_148,0);
        puVar23 = local_150;
        _guard_xfg_dispatch_icall_nop(local_150,pvVar2,lVar12 * 2);
      }
      puVar17 = &DAT_143f3eda8;
      if (local_148 != 0) {
        puVar17 = puVar23;
      }
      FString::PrintfImpl(&local_150,L"OutputDeviceName=[%s] ",puVar17);
      uVar4 = local_138;
      puVar17 = local_150;
      iVar13 = 0;
      if (local_148 != 0) {
        iVar13 = local_148 + -1;
      }
      if (iVar13 != 0) {
        iVar14 = (int)local_138;
        lVar12 = (longlong)(int)local_138;
        iVar5 = (uint)((int)local_138 == 0) + iVar13 + (int)local_138;
        local_138 = CONCAT44(local_138._4_4_,iVar5);
        if (local_138._4_4_ < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,uVar4 & 0xffffffff);
        }
        pvVar2 = (void *)(local_140 + (lVar12 - (ulonglong)(iVar14 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,puVar17,(longlong)iVar13 * 2);
        *(undefined2 *)((longlong)iVar13 * 2 + (longlong)pvVar2) = 0;
      }
      if (local_150 != (undefined2 *)0x0) {
        FMemory::Free(local_150);
      }
      plVar9 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x28))(plVar9);
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x38))(plVar9);
      puVar8 = (undefined8 *)(**(code **)(*plVar9 + 8))(plVar9);
      local_150 = (undefined2 *)0x0;
      local_148 = *(int *)(puVar8 + 1);
      lVar12 = (longlong)local_148;
      pvVar2 = (void *)*puVar8;
      if (local_148 == 0) {
        puVar17 = (undefined2 *)0x0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_150,local_148,0);
        puVar17 = local_150;
        _guard_xfg_dispatch_icall_nop(local_150,pvVar2,lVar12 * 2);
      }
      puVar18 = &DAT_143f3eda8;
      if (local_148 != 0) {
        puVar18 = puVar17;
      }
      FString::PrintfImpl(&local_150,L"EffectiveDeviceName=[%s] ",puVar18);
      uVar4 = local_138;
      puVar18 = local_150;
      iVar13 = 0;
      if (local_148 != 0) {
        iVar13 = local_148 + -1;
      }
      if (iVar13 != 0) {
        iVar14 = (int)local_138;
        lVar12 = (longlong)(int)local_138;
        iVar5 = (uint)((int)local_138 == 0) + iVar13 + (int)local_138;
        local_138 = CONCAT44(local_138._4_4_,iVar5);
        if (local_138._4_4_ < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,uVar4 & 0xffffffff);
        }
        pvVar2 = (void *)(local_140 + (lVar12 - (ulonglong)(iVar14 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,puVar18,(longlong)iVar13 * 2);
        *(undefined2 *)((longlong)iVar13 * 2 + (longlong)pvVar2) = 0;
      }
      if (local_150 != (undefined2 *)0x0) {
        FMemory::Free(local_150);
      }
      FUN_1428a6fb0(local_90[0],&local_140,local_158);
      if (puVar17 != (undefined2 *)0x0) {
        FMemory::Free(puVar17);
      }
      if (puVar23 != (undefined2 *)0x0) {
        FMemory::Free(puVar23);
      }
      if (puVar19 != (undefined2 *)0x0) {
        FMemory::Free(puVar19);
      }
      plVar9 = local_90[0];
      if (local_140 != 0) {
        FMemory::Free();
        plVar9 = local_90[0];
      }
    }
    (**(code **)(*plVar9 + 0x20))(plVar9,&DAT_1464aa700);
    local_140 = 0;
    local_138 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,0);
    FGenericPlatformString::Memcpy(local_140,L"LocalTalkerAccounts",0x28);
    FUN_1428a6fb0(plVar9,&local_140,local_158);
    if (local_140 != 0) {
      FMemory::Free();
    }
    (**(code **)(*plVar9 + 0x20))(plVar9,&DAT_1464aa6c0);
    plVar1 = (longlong *)(param_1 + 0x78);
    puVar21 = (uint *)(param_1 + 0x88);
    uStack_11c = 1;
    local_158[0] = local_158[0] + 10.0;
    local_120 = 0;
    uStack_10c = 0;
    iStack_108 = 0;
    uVar10 = *(uint *)(param_1 + 0xa0);
    if (uVar10 != 0) {
      puVar22 = *(uint **)(param_1 + 0x98);
      if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
        puVar22 = puVar21;
      }
      uVar20 = *puVar22;
      while (uVar20 == 0) {
        lVar12 = (longlong)local_120;
        iStack_108 = iStack_108 + 0x20;
        iVar13 = local_120 + 1;
        bVar3 = (int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_120;
        local_120 = iVar13;
        if (bVar3) goto LAB_140544054;
        uVar20 = puVar22[lVar12 + 1];
      }
      uStack_11c = -uVar20 & uVar20;
      iVar13 = 0x1f;
      if (uStack_11c != 0) {
        for (; uStack_11c >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      if (uStack_11c == 0) {
        iVar13 = 0x20;
      }
      else {
        iVar13 = 0x1f - iVar13;
      }
      uStack_10c = (iStack_108 - iVar13) + 0x1f;
      if ((int)uVar10 < (int)uStack_10c) {
LAB_140544054:
        uStack_10c = uVar10;
      }
    }
    local_110 = 0xffffffff;
    uStack_ec = *(uint *)(param_1 + 0xa0);
    uStack_b0 = CONCAT44(uStack_11c,local_120);
    uStack_c8._0_4_ = 0xffffffff;
    uStack_c8._4_4_ = uStack_10c;
    local_c0 = CONCAT44(uStack_104,iStack_108);
    local_f0 = -1 << ((byte)uStack_ec & 0x1f);
    uVar20 = uStack_ec & 0xffffffe0;
    uStack_d8._0_4_ = local_120;
    uStack_d8._4_4_ = uStack_11c;
    puStack_118 = puVar21;
    local_e0 = plVar1;
    local_d0 = puVar21;
    local_b8 = plVar1;
    puStack_a8 = puVar21;
    uStack_98 = local_c0;
    uStack_a0._0_4_ = (uint)uStack_c8;
    uStack_a0._4_4_ = uStack_c8._4_4_;
    uVar11 = uStack_ec;
    if (uStack_ec != uVar10) {
      puVar22 = *(uint **)(param_1 + 0x98);
      if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
        puVar22 = puVar21;
      }
      uVar11 = puVar22[(int)uStack_ec >> 5] & local_f0;
      iVar13 = (int)uStack_ec >> 5;
      while (uVar11 == 0) {
        uVar20 = uVar20 + 0x20;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
        goto LAB_140544126;
        uVar11 = puVar22[(longlong)iVar13 + 1];
        local_f0 = 0xffffffff;
        iVar13 = iVar13 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar13 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar13 = 0x20;
      }
      else {
        iVar13 = 0x1f - iVar13;
      }
      uStack_ec = (uVar20 - iVar13) + 0x1f;
      uVar11 = uStack_ec;
      if ((int)uVar10 < (int)uStack_ec) {
LAB_140544126:
        uStack_ec = uVar10;
        uVar11 = uVar10;
      }
    }
    while (((uStack_c8._4_4_ != uVar11 || (local_d0 != puVar21)) || (local_e0 != plVar1))) {
      FUN_140544b50(param_1,param_2,*local_e0 + (longlong)(int)uStack_c8._4_4_ * 0x168 + 0x10);
      uStack_c8._0_4_ = (uint)uStack_c8 & ~uStack_d8._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d8);
    }
    local_158[0] = local_158[0] + -10.0;
    (**(code **)(*plVar9 + 0x20))(plVar9,&DAT_1464aa700);
    local_138 = 0x15;
    local_140 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,0);
    FGenericPlatformString::Memcpy(local_140,L"RemoteTalkerAccounts",0x2a);
    FUN_1428a6fb0(plVar9,&local_140,local_158);
    if (local_140 != 0) {
      FMemory::Free();
    }
    (**(code **)(*plVar9 + 0x20))(plVar9,&DAT_1464aa6c0);
    plVar1 = (longlong *)(param_1 + 0xd0);
    puVar21 = (uint *)(param_1 + 0xe0);
    local_120 = 0;
    local_158[0] = local_158[0] + 10.0;
    uStack_11c = 1;
    uStack_10c = 0;
    iStack_108 = 0;
    uVar10 = *(uint *)(param_1 + 0xf8);
    if (uVar10 != 0) {
      puVar22 = *(uint **)(param_1 + 0xf0);
      if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
        puVar22 = puVar21;
      }
      uVar20 = *puVar22;
      iStack_108 = 0;
      local_120 = 0;
      while (uVar20 == 0) {
        lVar12 = (longlong)local_120;
        iStack_108 = iStack_108 + 0x20;
        iVar13 = local_120 + 1;
        bVar3 = (int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_120;
        local_120 = iVar13;
        if (bVar3) goto LAB_1405442c4;
        uVar20 = puVar22[lVar12 + 1];
      }
      uStack_11c = -uVar20 & uVar20;
      iVar13 = 0x1f;
      if (uStack_11c != 0) {
        for (; uStack_11c >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      if (uStack_11c == 0) {
        iVar13 = 0x20;
      }
      else {
        iVar13 = 0x1f - iVar13;
      }
      uStack_10c = (iStack_108 - iVar13) + 0x1f;
      if ((int)uVar10 < (int)uStack_10c) {
LAB_1405442c4:
        uStack_10c = uVar10;
      }
    }
    local_110 = 0xffffffff;
    uStack_ec = *(uint *)(param_1 + 0xf8);
    uStack_b0 = CONCAT44(uStack_11c,local_120);
    uStack_c8._0_4_ = 0xffffffff;
    uStack_c8._4_4_ = uStack_10c;
    local_c0 = CONCAT44(uStack_104,iStack_108);
    local_f0 = -1 << ((byte)uStack_ec & 0x1f);
    uVar11 = uStack_ec & 0xffffffe0;
    uStack_d8._0_4_ = local_120;
    uStack_d8._4_4_ = uStack_11c;
    puStack_118 = puVar21;
    local_e0 = plVar1;
    local_d0 = puVar21;
    local_b8 = plVar1;
    puStack_a8 = puVar21;
    uStack_98 = local_c0;
    uStack_a0._0_4_ = (uint)uStack_c8;
    uStack_a0._4_4_ = uStack_c8._4_4_;
    uVar20 = uStack_ec;
    if (uStack_ec != uVar10) {
      puVar22 = *(uint **)(param_1 + 0xf0);
      if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
        puVar22 = puVar21;
      }
      uVar20 = puVar22[(int)uStack_ec >> 5] & local_f0;
      iVar13 = (int)uStack_ec >> 5;
      while (uVar20 == 0) {
        uVar11 = uVar11 + 0x20;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
        goto LAB_140544396;
        uVar20 = puVar22[(longlong)iVar13 + 1];
        local_f0 = 0xffffffff;
        iVar13 = iVar13 + 1;
      }
      uVar20 = -uVar20 & uVar20;
      iVar13 = 0x1f;
      if (uVar20 != 0) {
        for (; uVar20 >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      if (uVar20 == 0) {
        iVar13 = 0x20;
      }
      else {
        iVar13 = 0x1f - iVar13;
      }
      uStack_ec = (uVar11 - iVar13) + 0x1f;
      uVar20 = uStack_ec;
      if ((int)uVar10 < (int)uStack_ec) {
LAB_140544396:
        uStack_ec = uVar10;
        uVar20 = uVar10;
      }
    }
    while (((uStack_c8._4_4_ != uVar20 || (local_d0 != puVar21)) || (local_e0 != plVar1))) {
      FUN_140544b50(param_1,param_2,*local_e0 + (longlong)(int)uStack_c8._4_4_ * 0x168 + 0x10);
      uStack_c8._0_4_ = (uint)uStack_c8 & ~uStack_d8._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d8);
    }
    local_158[0] = local_158[0] + -10.0;
    (**(code **)(*plVar9 + 0x20))(plVar9,&DAT_1464aa700);
    iVar13 = 0;
    local_138 = 0x13;
    local_140 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,0);
    FGenericPlatformString::Memcpy(local_140,L"VoiceTelemetryData",0x26);
    FUN_1428a6fb0(plVar9,&local_140,local_158);
    if (local_140 != 0) {
      FMemory::Free();
    }
    (**(code **)(*plVar9 + 0x20))(plVar9,&DAT_1464aa6c0);
    local_158[0] = local_158[0] + 10.0;
    pwVar16 = L"False";
    local_130 = 0;
    if (*(char *)(param_1 + 0x188) != '\0') {
      pwVar16 = L"True";
    }
    local_128 = 0;
    FString::PrintfImpl(&local_150,L"bHasVoiceBeenSent=[%s] ",pwVar16);
    uVar4 = local_128;
    puVar19 = local_150;
    iVar5 = 0;
    iVar14 = iVar5;
    if (local_148 != 0) {
      iVar14 = local_148 + -1;
    }
    if (iVar14 != 0) {
      iVar7 = (int)local_128;
      lVar12 = (longlong)(int)local_128;
      iVar6 = (uint)((int)local_128 == 0) + (int)local_128 + iVar14;
      local_128 = CONCAT44(local_128._4_4_,iVar6);
      if (local_128._4_4_ < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_130,uVar4 & 0xffffffff);
      }
      pvVar2 = (void *)(local_130 + (lVar12 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,puVar19,(longlong)iVar14 * 2);
      *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar2) = 0;
    }
    if (local_150 != (undefined2 *)0x0) {
      FMemory::Free(local_150);
    }
    FString::PrintfImpl(&local_150,L"total_time=[%f] ",(double)*(float *)(param_1 + 0x18c));
    uVar4 = local_128;
    puVar19 = local_150;
    iVar14 = iVar5;
    if (local_148 != 0) {
      iVar14 = local_148 + -1;
    }
    if (iVar14 != 0) {
      iVar7 = (int)local_128;
      lVar12 = (longlong)(int)local_128;
      iVar6 = (uint)((int)local_128 == 0) + (int)local_128 + iVar14;
      local_128 = CONCAT44(local_128._4_4_,iVar6);
      if (local_128._4_4_ < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_130,uVar4 & 0xffffffff);
      }
      pvVar2 = (void *)(local_130 + (lVar12 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,puVar19,(longlong)iVar14 * 2);
      *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar2) = 0;
    }
    if (local_150 != (undefined2 *)0x0) {
      FMemory::Free(local_150);
    }
    FString::PrintfImpl(&local_150,L"total_participants=[%d] ",*(undefined4 *)(param_1 + 0x1a0));
    uVar4 = local_128;
    puVar19 = local_150;
    iVar14 = iVar5;
    if (local_148 != 0) {
      iVar14 = local_148 + -1;
    }
    if (iVar14 != 0) {
      iVar7 = (int)local_128;
      lVar12 = (longlong)(int)local_128;
      iVar6 = (uint)((int)local_128 == 0) + (int)local_128 + iVar14;
      local_128 = CONCAT44(local_128._4_4_,iVar6);
      if (local_128._4_4_ < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_130,uVar4 & 0xffffffff);
      }
      pvVar2 = (void *)(local_130 + (lVar12 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,puVar19,(longlong)iVar14 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar14 * 2) = 0;
    }
    if (local_150 != (undefined2 *)0x0) {
      FMemory::Free(local_150);
    }
    FString::PrintfImpl(&local_150,L"active_participants=[%d] ",*(undefined4 *)(param_1 + 0x1b0));
    uVar4 = local_128;
    puVar19 = local_150;
    if (local_148 != 0) {
      iVar5 = local_148 + -1;
    }
    if (iVar5 != 0) {
      iVar14 = (int)local_128;
      lVar12 = (longlong)(int)local_128;
      iVar7 = (uint)((int)local_128 == 0) + (int)local_128 + iVar5;
      local_128 = CONCAT44(local_128._4_4_,iVar7);
      if (local_128._4_4_ < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_130,uVar4 & 0xffffffff);
      }
      pvVar2 = (void *)(local_130 + (lVar12 - (ulonglong)(iVar14 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,puVar19,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar5 * 2) = 0;
    }
    if (local_150 != (undefined2 *)0x0) {
      FMemory::Free(local_150);
    }
    FUN_1428a6fb0(plVar9,&local_130,local_158);
    local_158[0] = local_158[0] + -10.0;
    (**(code **)(*plVar9 + 0x20))(plVar9,&DAT_1464aa700);
    FString::PrintfImpl(&local_150,L"MuteLists");
    FUN_1428a6fb0(plVar9,&local_150,local_158);
    if (local_150 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    (**(code **)(*plVar9 + 0x20))(plVar9,&DAT_1464aa6c0);
    local_e0 = (longlong *)(param_1 + 0x128);
    puStack_118 = (uint *)(param_1 + 0x138);
    uStack_11c = 1;
    local_158[0] = local_158[0] + 10.0;
    local_120 = 0;
    uStack_10c = 0;
    iStack_108 = 0;
    iVar14 = *(int *)(param_1 + 0x150);
    if (iVar14 != 0) {
      puVar21 = *(uint **)(param_1 + 0x148);
      if (*(uint **)(param_1 + 0x148) == (uint *)0x0) {
        puVar21 = puStack_118;
      }
      uVar10 = *puVar21;
      iStack_108 = iVar13;
      local_120 = iVar13;
      while (uVar10 == 0) {
        lVar12 = (longlong)local_120;
        iStack_108 = iStack_108 + 0x20;
        iVar5 = local_120 + 1;
        bVar3 = (int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_120;
        local_120 = iVar5;
        if (bVar3) goto LAB_140544854;
        uVar10 = puVar21[lVar12 + 1];
      }
      uStack_11c = -uVar10 & uVar10;
      iVar5 = 0x1f;
      if (uStack_11c != 0) {
        for (; uStack_11c >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_11c == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      uStack_10c = (iStack_108 - iVar5) + 0x1f;
      if (iVar14 < (int)uStack_10c) {
LAB_140544854:
        uStack_10c = iVar14;
      }
    }
    local_110 = 0xffffffff;
    uStack_d8 = CONCAT44(uStack_11c,local_120);
    uStack_a0 = CONCAT44(uStack_10c,0xffffffff);
    uStack_98 = CONCAT44(uStack_104,iStack_108);
    local_c0 = CONCAT44(uStack_104,iStack_108);
    uStack_c8 = uStack_a0;
    uVar10 = uStack_10c;
    local_d0 = puStack_118;
    local_b8 = local_e0;
    uStack_b0 = uStack_d8;
    puStack_a8 = puStack_118;
    if ((int)uStack_10c < iVar14) {
      do {
        plVar1 = *(longlong **)((longlong)(int)uVar10 * 0x68 + *local_e0);
        plVar15 = (longlong *)(*local_e0 + 0x10 + (longlong)(int)uVar10 * 0x68);
        puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1,local_90);
        if (*(int *)(puVar8 + 1) == 0) {
          puVar19 = &DAT_143f3eda8;
        }
        else {
          puVar19 = (undefined2 *)*puVar8;
        }
        FString::PrintfImpl(&local_150,L"LocalUser=[%s]",puVar19);
        FUN_1428a6fb0(plVar9,&local_150,local_158);
        if (local_150 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_90[0] != (longlong *)0x0) {
          FMemory::Free();
        }
        puVar21 = (uint *)(plVar15 + 2);
        local_158[0] = local_158[0] + 10.0;
        uStack_fc = 1;
        local_100 = 0;
        uStack_ec = 0;
        iStack_e8 = 0;
        iVar14 = (int)plVar15[5];
        if (iVar14 != 0) {
          puVar22 = (uint *)plVar15[4];
          if ((uint *)plVar15[4] == (uint *)0x0) {
            puVar22 = puVar21;
          }
          uVar10 = *puVar22;
          iStack_e8 = iVar13;
          local_100 = iVar13;
          while (uVar10 == 0) {
            lVar12 = (longlong)local_100;
            iStack_e8 = iStack_e8 + 0x20;
            iVar5 = local_100 + 1;
            bVar3 = (int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_100;
            local_100 = iVar5;
            if (bVar3) goto LAB_1405449d1;
            uVar10 = puVar22[lVar12 + 1];
          }
          uStack_fc = -uVar10 & uVar10;
          iVar5 = 0x1f;
          if (uStack_fc != 0) {
            for (; uStack_fc >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          if (uStack_fc == 0) {
            iVar5 = 0x20;
          }
          else {
            iVar5 = 0x1f - iVar5;
          }
          uStack_ec = (iStack_e8 - iVar5) + 0x1f;
          if (iVar14 < (int)uStack_ec) {
LAB_1405449d1:
            uStack_ec = iVar14;
          }
        }
        uStack_a0 = CONCAT44(uStack_ec,0xffffffff);
        uStack_98 = CONCAT44(uStack_e4,iStack_e8);
        uVar10 = *(uint *)(plVar15 + 5);
        uStack_78 = CONCAT44(uStack_fc,local_100);
        local_f0 = -1 << ((byte)uVar10 & 0x1f);
        uStack_b0 = CONCAT44(uStack_fc,local_100);
        puStack_f8 = puVar21;
        uStack_ec = uVar10;
        local_b8 = plVar15;
        puStack_a8 = puVar21;
        local_80 = plVar15;
        puStack_70 = puVar21;
        uStack_68 = uStack_a0;
        uStack_60 = uStack_98;
        while( true ) {
          if (((uStack_a0._4_4_ == uVar10) && (puStack_a8 == puVar21)) && (local_b8 == plVar15))
          break;
          plVar1 = *(longlong **)(*local_b8 + (longlong)(int)uStack_a0._4_4_ * 0x18);
          puVar8 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1,&local_120);
          if (*(int *)(puVar8 + 1) == 0) {
            puVar19 = &DAT_143f3eda8;
          }
          else {
            puVar19 = (undefined2 *)*puVar8;
          }
          FString::PrintfImpl(&local_140,L"[%s]",puVar19);
          FUN_1428a6fb0(plVar9,&local_140,local_158);
          if (local_140 != 0) {
            FMemory::Free();
          }
          if (CONCAT44(uStack_11c,local_120) != 0) {
            FMemory::Free();
          }
          uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
        }
        local_158[0] = local_158[0] + -10.0;
        uStack_c8 = CONCAT44(uStack_c8._4_4_,(uint)uStack_c8 & ~uStack_d8._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d8);
        uVar10 = uStack_c8._4_4_;
      } while ((int)uStack_c8._4_4_ < (int)local_d0[6]);
    }
    local_158[0] = local_158[0] + -10.0;
    if (local_130 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140544b50 FUN_140544b50 body=4710 status=ok
// SIG undefined FUN_140544b50(void)

void FUN_140544b50(longlong param_1,longlong param_2,longlong param_3,float param_4)

{
  void *pvVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 **ppuVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  wchar_t *pwVar15;
  float local_res20 [2];
  longlong local_98;
  int local_90;
  int local_8c;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined2 *local_48;
  int local_40;
  
  if (param_2 == 0) {
    return;
  }
  local_res20[0] = param_4;
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)(param_3 + 0xb0) + 0x30))
                     (*(longlong **)(param_3 + 0xb0),&local_58);
  if (*(int *)(puVar4 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar4;
  }
  FString::PrintfImpl(&local_48,L"UniqueNetId=[%s]",puVar10);
  plVar13 = (longlong *)(param_2 + 0x98);
  FUN_1428a6fb0(plVar13,&local_48,local_res20);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_res20[0] = local_res20[0] + 10.0;
  puVar4 = (undefined8 *)FUN_1405859b0(param_3);
  if (*(int *)(puVar4 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar4;
  }
  FString::PrintfImpl(&local_98,L"VivoxAccountId=[%s] ",puVar10);
  pwVar15 = L"False";
  pwVar9 = L"False";
  if (*(char *)(param_3 + 0x102) != '\0') {
    pwVar9 = L"True";
  }
  FString::PrintfImpl(&local_58,L"bInAudio=[%s] ",pwVar9);
  puVar10 = local_58;
  iVar12 = local_90;
  iVar11 = 0;
  if (iStack_50 != 0) {
    iVar11 = iStack_50 + -1;
  }
  if (iVar11 != 0) {
    lVar8 = (longlong)local_90;
    local_90 = (uint)(local_90 == 0) + local_90 + iVar11;
    if (local_8c < local_90) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar12);
    }
    pvVar1 = (void *)(local_98 + (lVar8 - (ulonglong)(iVar12 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar11 * 2) = 0;
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free(local_58);
  }
  pwVar9 = L"False";
  if (*(char *)(param_3 + 0x103) != '\0') {
    pwVar9 = L"True";
  }
  FString::PrintfImpl(&local_58,L"bInText=[%s] ",pwVar9);
  puVar10 = local_58;
  iVar12 = local_90;
  iVar11 = 0;
  if (iStack_50 != 0) {
    iVar11 = iStack_50 + -1;
  }
  if (iVar11 != 0) {
    lVar8 = (longlong)local_90;
    local_90 = (uint)(local_90 == 0) + local_90 + iVar11;
    if (local_8c < local_90) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar12);
    }
    pvVar1 = (void *)(local_98 + (lVar8 - (ulonglong)(iVar12 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar11 * 2) = 0;
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free(local_58);
  }
  pwVar9 = L"False";
  if (*(char *)(param_3 + 0x105) != '\0') {
    pwVar9 = L"True";
  }
  FString::PrintfImpl(&local_58,L"bLocalMute=[%s] ",pwVar9);
  puVar10 = local_58;
  iVar12 = local_90;
  if (iStack_50 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = iStack_50 + -1;
  }
  if (iVar11 != 0) {
    lVar8 = (longlong)local_90;
    local_90 = (uint)(local_90 == 0) + iVar11 + local_90;
    if (local_8c < local_90) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar12);
    }
    pvVar1 = (void *)(local_98 + (lVar8 - (ulonglong)(iVar12 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar11 * 2) = 0;
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free(local_58);
  }
  pwVar9 = L"False";
  if (*(char *)(param_3 + 0x106) != '\0') {
    pwVar9 = L"True";
  }
  FString::PrintfImpl(&local_58,L"bIsTyping=[%s] ",pwVar9);
  puVar10 = local_58;
  iVar12 = local_90;
  if (iStack_50 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = iStack_50 + -1;
  }
  if (iVar11 != 0) {
    lVar8 = (longlong)local_90;
    local_90 = (uint)(local_90 == 0) + iVar11 + local_90;
    if (local_8c < local_90) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar12);
    }
    pvVar1 = (void *)(local_98 + (lVar8 - (ulonglong)(iVar12 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar11 * 2) = 0;
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free(local_58);
  }
  pwVar9 = L"False";
  if (*(char *)(param_3 + 0x107) != '\0') {
    pwVar9 = L"True";
  }
  FString::PrintfImpl(&local_58,L"bIsMutedForAll=[%s] ",pwVar9);
  puVar10 = local_58;
  iVar12 = local_90;
  if (iStack_50 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = iStack_50 + -1;
  }
  if (iVar11 != 0) {
    lVar8 = (longlong)local_90;
    local_90 = (uint)(local_90 == 0) + iVar11 + local_90;
    if (local_8c < local_90) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar12);
    }
    pvVar1 = (void *)(local_98 + (lVar8 - (ulonglong)(iVar12 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar11 * 2) = 0;
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free(local_58);
  }
  FString::PrintfImpl(&local_58,L"VivoxLocalVolumeAdjustment=[%d]",*(undefined4 *)(param_3 + 0x110))
  ;
  puVar10 = local_58;
  iVar12 = local_90;
  if (iStack_50 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = iStack_50 + -1;
  }
  if (iVar11 != 0) {
    lVar8 = (longlong)local_90;
    local_90 = (uint)(local_90 == 0) + iVar11 + local_90;
    if (local_8c < local_90) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar12);
    }
    pvVar1 = (void *)(local_98 + (lVar8 - (ulonglong)(iVar12 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar11 * 2) = 0;
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free(local_58);
  }
  FUN_1428a6fb0(plVar13,&local_98,local_res20);
  local_res20[0] = local_res20[0] + 10.0;
  if (*(char *)(param_3 + 0xe8) != '\0') {
    if (*(int *)(param_3 + 0xf8) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = *(undefined2 **)(param_3 + 0xf0);
    }
    FString::PrintfImpl(&local_48,L"PendingChannelName=[%s]",puVar10);
    FUN_1428a6fb0(plVar13,&local_48,local_res20);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    pwVar9 = L"False";
    if (*(char *)(param_3 + 0x100) != '\0') {
      pwVar9 = L"True";
    }
    FString::PrintfImpl(&local_48,L"LastbIsTransmitting=[%s]",pwVar9);
    FUN_1428a6fb0(plVar13,&local_48,local_res20);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    puVar4 = (undefined8 *)&DAT_1464aa6c0;
    if (*(char *)(param_3 + 0x104) != '\0') {
      puVar4 = (undefined8 *)&DAT_1464aa700;
    }
    iVar12 = 0;
    local_90 = 0;
    local_58 = (undefined2 *)*puVar4;
    iStack_50 = *(int *)(puVar4 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if (local_8c != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98,0);
    }
    if (*(char *)(param_3 + 0x101) == '\0') {
      (**(code **)(*plVar13 + 0x20))(plVar13,&local_58);
      if (*(char *)(param_3 + 0x104) != '\0') {
        pwVar15 = L"True";
      }
      FString::PrintfImpl(&local_68,L"bSpeechDetected=[%s] ",pwVar15);
      puVar10 = local_68;
      iVar11 = local_90;
      if (local_60 != 0) {
        iVar12 = local_60 + -1;
      }
      if (iVar12 != 0) {
        lVar8 = (longlong)local_90;
        local_90 = (uint)(local_90 == 0) + iVar12 + local_90;
        if (local_8c < local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar11);
        }
        pvVar1 = (void *)(local_98 + (lVar8 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2) = 0;
      }
      if (local_68 != (undefined2 *)0x0) {
        FMemory::Free(local_68);
      }
      pwVar9 = L"VivoxAudioEnergy=[%f]";
LAB_1405452fe:
      FString::PrintfImpl(&local_68,pwVar9,*(undefined8 *)(param_3 + 0x108));
      puVar10 = local_68;
      iVar12 = local_90;
      iVar11 = 0;
      if (local_60 != 0) {
        iVar11 = local_60 + -1;
      }
      if (iVar11 != 0) {
        lVar8 = (longlong)local_90;
        local_90 = (uint)(local_90 == 0) + iVar11 + local_90;
        if (local_8c < local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar12);
        }
        pvVar1 = (void *)(local_98 + (lVar8 - (ulonglong)(iVar12 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar11 * 2) = 0;
      }
      if (local_68 != (undefined2 *)0x0) {
        FMemory::Free(local_68);
      }
      FUN_1428a6fb0(plVar13,&local_98,local_res20);
      (**(code **)(*plVar13 + 0x20))(plVar13,&DAT_1464aa6c0);
    }
    else {
      cVar2 = FUN_140584270(param_3 + 0x60);
      if (cVar2 != '\0') {
        plVar5 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5,param_3);
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x60))(plVar5,param_3 + 0x60);
        cVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
        if (cVar2 == '\x02') {
          cVar2 = (**(code **)(*plVar5 + 0x40))(plVar5);
          ppuVar7 = &local_58;
          if (cVar2 == '\0') {
            ppuVar7 = (undefined2 **)&DAT_1464aa6f0;
          }
          local_58 = *ppuVar7;
          iStack_50 = *(int *)(ppuVar7 + 1);
          uStack_4c = *(undefined4 *)((longlong)ppuVar7 + 0xc);
          puVar4 = (undefined8 *)FUN_1405859b0(param_3 + 0x60);
          if (*(int *)(puVar4 + 1) == 0) {
            puVar10 = &DAT_143f3eda8;
          }
          else {
            puVar10 = (undefined2 *)*puVar4;
          }
          FString::PrintfImpl(&local_68,L"VivoxChannelId=[%s] ",puVar10);
          puVar10 = local_68;
          iVar11 = local_90;
          if (local_60 != 0) {
            iVar12 = local_60 + -1;
          }
          if (iVar12 != 0) {
            lVar8 = (longlong)local_90;
            local_90 = (uint)(local_90 == 0) + iVar12 + local_90;
            if (local_8c < local_90) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar11);
            }
            pvVar1 = (void *)(local_98 + (lVar8 - (ulonglong)(iVar11 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar12 * 2);
            *(undefined2 *)((longlong)pvVar1 + (longlong)iVar12 * 2) = 0;
          }
          if (local_68 != (undefined2 *)0x0) {
            FMemory::Free(local_68);
          }
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_58);
          if (*(char *)(param_3 + 0x104) != '\0') {
            pwVar15 = L"True";
          }
          FString::PrintfImpl(&local_68,L"bSpeechDetected=[%s] ",pwVar15);
          puVar10 = local_68;
          iVar12 = local_90;
          if (local_60 == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = local_60 + -1;
          }
          if (iVar11 != 0) {
            lVar8 = (longlong)local_90;
            local_90 = (uint)(local_90 == 0) + iVar11 + local_90;
            if (local_8c < local_90) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar12);
            }
            pvVar1 = (void *)(local_98 + (lVar8 - (ulonglong)(iVar12 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
            *(undefined2 *)((longlong)pvVar1 + (longlong)iVar11 * 2) = 0;
          }
          if (local_68 != (undefined2 *)0x0) {
            FMemory::Free(local_68);
          }
          pwVar9 = L"VivoxAudioEnergy=[%f]";
          goto LAB_1405452fe;
        }
      }
    }
  }
  if (*(char *)(param_3 + 0x101) == '\0') {
    if (*(longlong *)(param_3 + 0xc0) != 0) goto LAB_140545d74;
    FString::PrintfImpl(&local_48,L"Attempting to resolve SparkTalkerId [%.2f]",
                        (double)(*(float *)(param_3 + 0xe0) - *(float *)(param_3 + 0xe4)));
    FUN_1428a6fb0(plVar13,&local_48,local_res20);
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x50);
    if (lVar8 == 0) goto LAB_140545d74;
    local_90 = 0;
    if (local_8c != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98,0);
      lVar8 = *(longlong *)(param_1 + 0x50);
    }
    plVar5 = (longlong *)FUN_14058b310(lVar8);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x28))(plVar5);
    lVar8 = *plVar5;
    uVar6 = FUN_140572be0(param_3);
    plVar5 = (longlong *)(**(code **)(lVar8 + 0x78))(plVar5,uVar6);
    puVar4 = (undefined8 *)(**(code **)(*plVar5 + 8))(plVar5);
    local_58 = (undefined2 *)0x0;
    iStack_50 = *(int *)(puVar4 + 1);
    lVar8 = (longlong)iStack_50;
    pvVar1 = (void *)*puVar4;
    if (iStack_50 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iStack_50,0);
      _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar8 * 2);
    }
    puVar10 = &DAT_143f3eda8;
    if (iStack_50 != 0) {
      puVar10 = local_58;
    }
    FString::PrintfImpl(&local_68,L"InputDeviceName=[%s] ",puVar10);
    puVar10 = local_68;
    iVar12 = local_90;
    if (local_60 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = local_60 + -1;
    }
    if (iVar11 != 0) {
      lVar8 = (longlong)local_90;
      local_90 = (uint)(local_90 == 0) + iVar11 + local_90;
      if (local_8c < local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar12);
      }
      pvVar1 = (void *)(local_98 + (lVar8 - (ulonglong)(iVar12 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar11 * 2) = 0;
    }
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free(local_68);
    }
    plVar5 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x28))(plVar5);
    lVar8 = *plVar5;
    uVar6 = FUN_140572be0(param_3);
    plVar5 = (longlong *)(**(code **)(lVar8 + 0x80))(plVar5,uVar6);
    puVar4 = (undefined8 *)(**(code **)(*plVar5 + 8))(plVar5);
    local_68 = (undefined2 *)0x0;
    local_60 = *(int *)(puVar4 + 1);
    lVar8 = (longlong)local_60;
    pvVar1 = (void *)*puVar4;
    if (local_60 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
      _guard_xfg_dispatch_icall_nop(local_68,pvVar1,lVar8 * 2);
    }
    puVar10 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar10 = local_68;
    }
    FString::PrintfImpl(&local_78,L"EffectiveInputDeviceName=[%s] ",puVar10);
    puVar10 = local_78;
    iVar12 = local_90;
    iVar11 = 0;
    if (local_70 != 0) {
      iVar11 = local_70 + -1;
    }
    if (iVar11 != 0) {
      lVar8 = (longlong)local_90;
      local_90 = (uint)(local_90 == 0) + iVar11 + local_90;
      if (local_8c < local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar12);
      }
      pvVar1 = (void *)(local_98 + (lVar8 - (ulonglong)(iVar12 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar11 * 2) = 0;
    }
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free(local_78);
    }
    plVar5 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x30))(plVar5);
    lVar8 = *plVar5;
    uVar6 = FUN_140572be0(param_3);
    plVar5 = (longlong *)(**(code **)(lVar8 + 0x78))(plVar5,uVar6);
    puVar4 = (undefined8 *)(**(code **)(*plVar5 + 8))(plVar5);
    local_78 = (undefined2 *)0x0;
    local_70 = *(int *)(puVar4 + 1);
    lVar8 = (longlong)local_70;
    pvVar1 = (void *)*puVar4;
    if (local_70 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
      _guard_xfg_dispatch_icall_nop(local_78,pvVar1,lVar8 * 2);
    }
    puVar10 = &DAT_143f3eda8;
    if (local_70 != 0) {
      puVar10 = local_78;
    }
    FString::PrintfImpl(&local_88,L"OutputDeviceName=[%s] ",puVar10);
    puVar10 = local_88;
    iVar12 = local_90;
    iVar11 = 0;
    if (local_80 != 0) {
      iVar11 = local_80 + -1;
    }
    if (iVar11 != 0) {
      lVar8 = (longlong)local_90;
      local_90 = (uint)(local_90 == 0) + local_90 + iVar11;
      if (local_8c < local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar12);
      }
      pvVar1 = (void *)(local_98 + (lVar8 - (ulonglong)(iVar12 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)iVar11 * 2) = 0;
    }
    if (local_88 != (undefined2 *)0x0) {
      FMemory::Free(local_88);
    }
    plVar5 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x30))(plVar5);
    lVar8 = *plVar5;
    uVar6 = FUN_140572be0(param_3);
    plVar5 = (longlong *)(**(code **)(lVar8 + 0x80))(plVar5,uVar6);
    puVar4 = (undefined8 *)(**(code **)(*plVar5 + 8))(plVar5);
    local_88 = (undefined2 *)0x0;
    local_80 = *(int *)(puVar4 + 1);
    lVar8 = (longlong)local_80;
    pvVar1 = (void *)*puVar4;
    if (local_80 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
      _guard_xfg_dispatch_icall_nop(local_88,pvVar1,lVar8 * 2);
    }
    puVar10 = &DAT_143f3eda8;
    if (local_80 != 0) {
      puVar10 = local_88;
    }
    FString::PrintfImpl(&local_48,L"EffectiveOutputDeviceName=[%s] ",puVar10);
    puVar10 = local_48;
    iVar12 = local_90;
    if (local_40 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = local_40 + -1;
    }
    iVar14 = 0;
    if (iVar11 != 0) {
      lVar8 = (longlong)local_90;
      local_90 = (uint)(local_90 == 0) + iVar11 + local_90;
      if (local_8c < local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar12);
      }
      pvVar1 = (void *)(local_98 + (lVar8 - (ulonglong)(iVar12 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
      *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free(local_48);
    }
    FUN_1428a6fb0(plVar13,&local_98,local_res20);
    plVar5 = (longlong *)FUN_14058b310(*(undefined8 *)(param_1 + 0x50));
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5,param_3);
    cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5);
    if (cVar2 != '\x02') {
      local_90 = 0;
      if (local_8c != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98,0);
      }
      uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
      uVar6 = FUN_1405682c0(param_1,uVar3);
      FString::PrintfImpl(&local_48,L"VivoxLoginSession.State()=[%s] ",uVar6);
      puVar10 = local_48;
      iVar12 = local_90;
      if (local_40 != 0) {
        iVar14 = local_40 + -1;
      }
      if (iVar14 != 0) {
        lVar8 = (longlong)local_90;
        local_90 = (uint)(local_90 == 0) + local_90 + iVar14;
        if (local_8c < local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar12);
        }
        pvVar1 = (void *)(local_98 + (lVar8 - (ulonglong)(iVar12 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar14 * 2);
        *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free(local_48);
      }
      cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5);
      if (cVar2 == '\0') {
        (**(code **)(*plVar13 + 0x20))(plVar13,&DAT_1464aa6f0);
        FString::PrintfImpl(&local_48,L"Retry=[%.2f] ",
                            (double)(*(float *)(param_3 + 0xd0) - *(float *)(param_3 + 0xd4)));
        puVar10 = local_48;
        iVar12 = local_90;
        if (local_40 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = local_40 + -1;
        }
        if (iVar11 != 0) {
          lVar8 = (longlong)local_90;
          local_90 = (uint)(local_90 == 0) + iVar11 + local_90;
          if (local_8c < local_90) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar12);
          }
          pvVar1 = (void *)(local_98 + (lVar8 - (ulonglong)(iVar12 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
          *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
        }
        if (local_48 != (undefined2 *)0x0) {
          FMemory::Free(local_48);
        }
      }
      else {
        (**(code **)(*plVar13 + 0x20))(plVar13,&DAT_1464aa720);
      }
      FUN_1428a6fb0(plVar13,&local_98,local_res20);
      (**(code **)(*plVar13 + 0x20))(plVar13,&DAT_1464aa6c0);
    }
    cVar2 = FUN_140584270(param_3 + 0x60);
    if (cVar2 != '\0') {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x60))(plVar5,param_3 + 0x60);
      cVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
      if (cVar2 != '\x02') {
        local_90 = 0;
        if (local_8c != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98,0);
        }
        uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
        uVar6 = FUN_140568280(param_1,uVar3);
        FString::PrintfImpl(&local_48,L"VivoxChannelSession.AudioState()=[%s] ",uVar6);
        puVar10 = local_48;
        iVar12 = local_90;
        if (local_40 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = local_40 + -1;
        }
        if (iVar11 != 0) {
          lVar8 = (longlong)local_90;
          local_90 = (uint)(local_90 == 0) + iVar11 + local_90;
          if (local_8c < local_90) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar12);
          }
          pvVar1 = (void *)(local_98 + (lVar8 - (ulonglong)(iVar12 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
          *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
        }
        if (local_48 != (undefined2 *)0x0) {
          FMemory::Free(local_48);
        }
        cVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
        if (cVar2 == '\0') {
          (**(code **)(*plVar13 + 0x20))(plVar13,&DAT_1464aa6f0);
          FString::PrintfImpl(&local_48,L"Retry=[%.2f] ",
                              (double)(*(float *)(param_3 + 0xd8) - *(float *)(param_3 + 0xdc)));
          puVar10 = local_48;
          iVar12 = local_90;
          iVar11 = 0;
          if (local_40 != 0) {
            iVar11 = local_40 + -1;
          }
          if (iVar11 != 0) {
            lVar8 = (longlong)local_90;
            local_90 = (uint)(local_90 == 0) + local_90 + iVar11;
            if (local_8c < local_90) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,iVar12);
            }
            pvVar1 = (void *)(local_98 + (lVar8 - (ulonglong)(iVar12 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
            *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
          }
          if (local_48 != (undefined2 *)0x0) {
            FMemory::Free(local_48);
          }
        }
        else {
          (**(code **)(*plVar13 + 0x20))(plVar13,&DAT_1464aa720);
        }
        FUN_1428a6fb0(plVar13,&local_98,local_res20);
        (**(code **)(*plVar13 + 0x20))(plVar13,&DAT_1464aa6c0);
      }
    }
    if (local_88 != (undefined2 *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free(local_78);
    }
    local_48 = local_58;
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free(local_68);
      local_48 = local_58;
    }
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free(local_48);
  }
LAB_140545d74:
  if (local_98 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140545dc0 FUN_140545dc0 body=195 status=ok
// SIG undefined FUN_140545dc0(void)

void FUN_140545dc0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x288)) {
    lVar6 = 0;
    do {
      FUN_1404af0e0((longlong)iVar7 * 0x118 + *(longlong *)(param_1 + 0x280));
      if ((*(longlong *)(lVar6 + 0xa0 + *(longlong *)(param_1 + 0x280)) != 0) &&
         (plVar4 = *(longlong **)(lVar6 + 0xa8 + *(longlong *)(param_1 + 0x280)),
         plVar4 != (longlong *)0x0)) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 0x118;
    } while (iVar7 < *(int *)(param_1 + 0x288));
  }
  return;
}



// FUNCTION 140545e90 FUN_140545e90 body=117 status=ok
// SIG undefined FUN_140545e90(void)

void FUN_140545e90(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_140545f10();
  cVar1 = FUN_14053fbe0(param_1,param_2);
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



// FUNCTION 140545f10 FUN_140545f10 body=493 status=ok
// SIG undefined FUN_140545f10(void)

void FUN_140545f10(longlong *param_1,int param_2)

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
      if (bVar6) goto LAB_140545fe4;
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
LAB_140545fe4:
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
      lVar8 = (longlong)iStack_2c * 0x168 + *param_1;
      FUN_140539840(lVar8 + 0x10);
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
    FUN_14055f890(param_1,param_2);
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



// FUNCTION 140546100 Empty body=500 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<TSharedPtr<FString,1>,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
  longlong lVar9;
  int iVar10;
  uint *puVar11;
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
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar7 = *puVar11;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar7 == 0) {
      lVar9 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar10 = local_68 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar10;
      if (bVar6) goto LAB_1405461d4;
      uVar7 = puVar11[lVar9 + 1];
    }
    uStack_64 = -uVar7 & uVar7;
    iVar10 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_54 = (iStack_50 - iVar10) + 0x1f;
    if (iVar4 < iStack_54) {
LAB_1405461d4:
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
      lVar8 = (longlong)iStack_2c;
      lVar9 = *param_1;
      if (*(longlong *)(lVar9 + 0x10 + lVar8 * 0x28) != 0) {
        FMemory::Free();
      }
      plVar5 = *(longlong **)(lVar9 + lVar8 * 0x28 + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 140546300 Empty body=481 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<TSharedRef<FString,1>,unsigned_short>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar6) goto LAB_1405463d4;
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
LAB_1405463d4:
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
      plVar5 = *(longlong **)((longlong)iStack_2c * 0x20 + *param_1 + 8);
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
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1405464f0 Empty body=482 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar6) goto LAB_1405465c4;
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
LAB_1405465c4:
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
      plVar5 = *(longlong **)(*param_1 + 8 + (longlong)iStack_2c * 0x18);
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
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1405466e0 FUN_1405466e0 body=699 status=ok
// SIG undefined FUN_1405466e0(void)

undefined8 * FUN_1405466e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_78;
  longlong *plStack_70;
  longlong local_68 [4];
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  longlong *local_28;
  longlong *plStack_20;
  
  plVar6 = (longlong *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar5 = (longlong *)operator_new(0x50);
  local_78 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[7] = 0;
    plVar5[9] = 0;
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    *(undefined4 *)(plVar5 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)plVar5 + 0x34) = 0;
    plVar5[8] = 0;
    local_78 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)local_78;
    plVar6 = plVar5;
  }
  plStack_70 = plVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_78,local_78,local_78);
  if (local_78 != (longlong *)0x0) {
    local_68[0] = 0;
    local_68[1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
    FGenericPlatformString::Memcpy(local_68[0],L"lobby_id",0x12);
    FJsonObject::SetStringField(local_78,local_68,param_2);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    local_68[2] = 0;
    local_68[3] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
    FGenericPlatformString::Memcpy(local_68[2],L"privacy",0x10);
    FJsonObject::SetStringField(local_78,local_68 + 2,param_3);
    if (local_68[2] != 0) {
      FMemory::Free();
    }
    FUN_1404ae740(local_38,param_1,0);
    plVar6 = plStack_70;
    local_28 = local_78;
    plStack_20 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
    }
    local_40 = (longlong *)FUN_1404a9830(&local_28);
    local_48 = local_40 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
    FUN_1404a9a60(&local_48,local_38,1);
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
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    plVar6 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_70 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1405469a0 FUN_1405469a0 body=699 status=ok
// SIG undefined FUN_1405469a0(void)

undefined8 * FUN_1405469a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_78;
  longlong *plStack_70;
  longlong local_68 [4];
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  longlong *local_28;
  longlong *plStack_20;
  
  plVar6 = (longlong *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar5 = (longlong *)operator_new(0x50);
  local_78 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[7] = 0;
    plVar5[9] = 0;
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    *(undefined4 *)(plVar5 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)plVar5 + 0x34) = 0;
    plVar5[8] = 0;
    local_78 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)local_78;
    plVar6 = plVar5;
  }
  plStack_70 = plVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_78,local_78,local_78);
  if (local_78 != (longlong *)0x0) {
    local_68[0] = 0;
    local_68[1] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
    FGenericPlatformString::Memcpy(local_68[0],L"rich_presence",0x1c);
    FJsonObject::SetStringField(local_78,local_68,param_2);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    local_68[2] = 0;
    local_68[3] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
    FGenericPlatformString::Memcpy(local_68[2],L"session_id",0x16);
    FJsonObject::SetStringField(local_78,local_68 + 2,param_3);
    if (local_68[2] != 0) {
      FMemory::Free();
    }
    FUN_1404ae740(local_38,param_1,0);
    plVar6 = plStack_70;
    local_28 = local_78;
    plStack_20 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
    }
    local_40 = (longlong *)FUN_1404a9830(&local_28);
    local_48 = local_40 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
    FUN_1404a9a60(&local_48,local_38,1);
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
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    plVar6 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_70 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140546c60 FUN_140546c60 body=433 status=ok
// SIG undefined FUN_140546c60(void)

void FUN_140546c60(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *local_28;
  int local_20;
  
  uVar4 = 0;
  iVar5 = 0;
  if (0 < (int)param_1[0x51]) {
    plVar2 = (longlong *)(param_1[0x50] + 0xb8);
    uVar7 = uVar4;
    do {
      if (*plVar2 == param_2) {
        lVar6 = (longlong)(int)uVar4 * 0x118 + param_1[0x50];
        if ((lVar6 != 0) && (*(int *)(lVar6 + 0x110) == 4)) {
          if ((*(char *)(lVar6 + 0x3a) != '\0') &&
             (((*(char *)(lVar6 + 0x38) != '\0' && (*(char *)(lVar6 + 0xd8) != '\0')) &&
              ((int)param_1[0x5c] == 0)))) {
            local_28 = (longlong *)0x0;
            plVar2 = (longlong *)FMemory::Realloc(0,0x30);
            local_20 = 3;
            local_28 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar2[1] = (longlong)param_1;
              *plVar2 = (longlong)&DAT_143f3ed00;
              plVar2[2] = (longlong)FUN_140559110;
              lVar3 = FDelegateHandle::GenerateNewID();
              plVar2[4] = lVar3;
              *plVar2 = (longlong)&PTR_GetPoolName_143f3ed48;
            }
            cVar1 = FUN_1404b0b90(param_1 + 0x56,&local_28);
            iVar5 = 0;
            if (cVar1 == '\0') {
              FUN_1404b6bd0(param_1 + 0x56);
              iVar5 = -0x7fffbffb;
            }
            if (local_20 != 0) {
              if (local_28 == (longlong *)0x0) goto LAB_140546de0;
              (**(code **)(*local_28 + 0x28))(local_28,0);
              if (local_28 != (longlong *)0x0) {
                local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
              }
              local_20 = 0;
            }
            if (local_28 != (longlong *)0x0) {
              FMemory::Free(local_28);
            }
          }
LAB_140546de0:
          *(undefined4 *)(lVar6 + 0x110) = 6;
          (**(code **)(*param_1 + 200))(param_1,param_2,(iVar5 != 0) + '\x01');
          return;
        }
        break;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar7 = uVar7 + 1;
      plVar2 = plVar2 + 0x23;
    } while ((longlong)uVar7 < (longlong)(int)param_1[0x51]);
  }
  (**(code **)(*param_1 + 200))(param_1,param_2,2);
  return;
}



// FUNCTION 140546e20 FUN_140546e20 body=739 status=ok
// SIG undefined FUN_140546e20(void)

void FUN_140546e20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  uint uStack_94;
  int iStack_80;
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
  
  if ((((*(longlong **)(param_1 + 0x58) != (longlong *)0x0) &&
       (param_2 == *(longlong *)(param_1 + 0x70))) &&
      (lVar8 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))(), lVar8 != 0)) &&
     (lVar5 = *(longlong *)(lVar8 + 0xa0), lVar5 != 0)) {
    plVar6 = *(longlong **)(lVar8 + 0xa8);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    uStack_c4 = 1;
    plVar1 = (longlong *)(param_1 + 0x78);
    uVar4 = *(uint *)(param_1 + 0xa0);
    puVar2 = (uint *)(param_1 + 0x88);
    local_c8 = 0;
    uStack_b4 = 0;
    iStack_b0 = 0;
    if (uVar4 != 0) {
      puVar12 = *(uint **)(param_1 + 0x98);
      if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
        puVar12 = puVar2;
      }
      uVar11 = *puVar12;
      iStack_b0 = 0;
      local_c8 = 0;
      while (uVar11 == 0) {
        lVar8 = (longlong)local_c8;
        iStack_b0 = iStack_b0 + 0x20;
        iVar9 = local_c8 + 1;
        bVar7 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
        local_c8 = iVar9;
        if (bVar7) goto LAB_140546f60;
        uVar11 = puVar12[lVar8 + 1];
      }
      uStack_c4 = -uVar11 & uVar11;
      iVar9 = 0x1f;
      if (uStack_c4 != 0) {
        for (; uStack_c4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_c4 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_b4 = (iStack_b0 - iVar9) + 0x1f;
      if ((int)uVar4 < (int)uStack_b4) {
LAB_140546f60:
        uStack_b4 = uVar4;
      }
    }
    uStack_94 = *(uint *)(param_1 + 0xa0);
    uStack_58 = CONCAT44(uStack_c4,local_c8);
    uStack_70 = 0xffffffff;
    uStack_6c = uStack_b4;
    local_68 = CONCAT44(uStack_ac,iStack_b0);
    uVar11 = uStack_94 & 0xffffffe0;
    iStack_80 = local_c8;
    uStack_7c = uStack_c4;
    local_78 = puVar2;
    local_60 = plVar1;
    puStack_50 = puVar2;
    uStack_40 = local_68;
    uStack_48 = uStack_70;
    uStack_44 = uStack_6c;
    if (uStack_94 != uVar4) {
      puVar12 = *(uint **)(param_1 + 0x98);
      if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
        puVar12 = puVar2;
      }
      uVar10 = puVar12[(int)uStack_94 >> 5] & -1 << ((byte)uStack_94 & 0x1f);
      iVar9 = (int)uStack_94 >> 5;
      while (uVar10 == 0) {
        uVar11 = uVar11 + 0x20;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_14054703e;
        uVar10 = puVar12[(longlong)iVar9 + 1];
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
      uStack_94 = (uVar11 - iVar9) + 0x1f;
      if ((int)uVar4 < (int)uStack_94) {
LAB_14054703e:
        uStack_94 = uVar4;
      }
    }
    while ((uStack_6c != uStack_94 || (local_78 != puVar2))) {
      FUN_14053fd40(param_1,*plVar1 + (longlong)(int)uStack_6c * 0x168 + 0xc0,lVar5 + 0x40);
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
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
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        iVar9 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140547110 FUN_140547110 body=180 status=ok
// SIG undefined FUN_140547110(void)

void FUN_140547110(longlong param_1,undefined8 param_2,int param_3)

{
  if ((param_3 == 200) || (param_3 == 0x194)) {
    FUN_1405627d0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,5);
                    /* WARNING: Could not recover jumptable at 0x0001405471bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 200))
              (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,0);
    return;
  }
  if ((param_3 != 0) && (param_3 != 599)) {
                    /* WARNING: Could not recover jumptable at 0x000140547153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 200))
              (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140547174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 200))
            (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,6);
  return;
}



// FUNCTION 1405471d0 FUN_1405471d0 body=258 status=ok
// SIG undefined FUN_1405471d0(void)

void FUN_1405471d0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  if (param_3 != 200) {
    if (param_3 == 0x194) {
      uVar1 = 5;
    }
    else if ((param_3 == 0) || (uVar1 = 8, param_3 == 599)) {
      uVar1 = 6;
    }
                    /* WARNING: Could not recover jumptable at 0x0001405472c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x108))
              (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,uVar1);
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x108))
            (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,0);
  FUN_1405627d0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,5);
  local_18[1] = 0x26;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"SPARK_FRIEND_REQUEST_REJECTED_MESSAGE",0x4c);
  FUN_14055ffc0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1405472e0 FUN_1405472e0 body=265 status=ok
// SIG undefined FUN_1405472e0(void)

void FUN_1405472e0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  if (param_3 == 200) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))
              (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,0);
    FUN_1405627d0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,1);
    local_18[1] = 0x26;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"SPARK_FRIEND_REQUEST_ACCEPTED_MESSAGE",0x4c);
    FUN_14055ffc0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    FUN_14055c200(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
    return;
  }
  if (param_3 == 0x194) {
    uVar1 = 5;
  }
  else if ((param_3 == 0) || (uVar1 = 8, param_3 == 599)) {
    uVar1 = 6;
  }
                    /* WARNING: Could not recover jumptable at 0x0001405473e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))
            (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,uVar1);
  return;
}



// FUNCTION 1405473f0 FUN_1405473f0 body=281 status=ok
// SIG undefined FUN_1405473f0(void)

void FUN_1405473f0(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  if (param_3 == 200) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x148))
                      (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,0);
    if (cVar1 != '\0') {
      local_18[1] = 0x1d;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"SPARK_FRIEND_REMOVED_MESSAGE",0x3a);
      FUN_14055ffc0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    FUN_1405627d0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,4);
                    /* WARNING: Could not recover jumptable at 0x0001405474bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))
              (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,0);
    return;
  }
  if (param_3 == 0x194) {
    uVar2 = 5;
  }
  else if ((param_3 == 0) || (uVar2 = 8, param_3 == 599)) {
    uVar2 = 6;
  }
                    /* WARNING: Could not recover jumptable at 0x000140547502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))
            (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,uVar2);
  return;
}



// FUNCTION 140547520 FUN_140547520 body=259 status=ok
// SIG undefined FUN_140547520(void)

void FUN_140547520(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  if (param_3 == 200) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
              (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,0);
    FUN_1405627d0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,1);
    local_18[1] = 0x26;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"SPARK_FRIEND_REQUEST_ACCEPTED_MESSAGE",0x4c);
    FUN_14055ffc0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    FUN_14055c200(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
    return;
  }
  if (param_3 == 0x194) {
    uVar1 = 5;
  }
  else if ((param_3 == 0) || (uVar1 = 8, param_3 == 599)) {
    uVar1 = 6;
  }
                    /* WARNING: Could not recover jumptable at 0x00014054761f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
            (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,uVar1);
  return;
}



// FUNCTION 140547630 FUN_140547630 body=298 status=ok
// SIG undefined FUN_140547630(void)

void FUN_140547630(longlong param_1,undefined8 param_2,int param_3)

{
  longlong local_18 [2];
  
  if ((param_3 == 200) || (param_3 == 0x194)) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x88))
              (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,0);
    FUN_1405627d0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,5);
    if (param_3 == 200) {
      local_18[1] = 0x1d;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"SPARK_FRIEND_REMOVED_MESSAGE",0x3a);
      FUN_14055ffc0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    return;
  }
  if ((param_3 != 0) && (param_3 != 599)) {
                    /* WARNING: Could not recover jumptable at 0x00014054767f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x88))
              (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001405476a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x88))
            (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,6);
  return;
}



// FUNCTION 140547760 FUN_140547760 body=175 status=ok
// SIG undefined FUN_140547760(void)

void FUN_140547760(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 8);
  pcVar2 = (char *)(**(code **)(*param_2 + 8))(param_2);
  if (*pcVar2 == '\x02') {
    FUN_140549500(lVar1 + 0x78,local_res8,param_1 + 0x10);
    lVar3 = 0;
    if (local_res8[0] != -1) {
      lVar3 = (longlong)local_res8[0] * 0x168 + *(longlong *)(lVar1 + 0x78);
    }
    lVar4 = lVar3 + 0x10;
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    if (lVar4 != 0) {
      FUN_140561400(lVar1,lVar4 + 0xb0,*(undefined1 *)(lVar4 + 0x100));
    }
  }
  pcVar2 = (char *)(**(code **)(*param_2 + 8))(param_2);
  if (*pcVar2 == '\0') {
    FUN_140566c30(lVar1,param_1 + 0x10);
  }
  return;
}



// FUNCTION 140547820 FUN_140547820 body=96 status=ok
// SIG undefined FUN_140547820(void)

void FUN_140547820(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = FUN_140548950(lVar1);
  if (lVar2 != 0) {
    FUN_14056a280(lVar1,lVar2,param_2);
    if (*(char *)(lVar2 + 0x104) != '\0') {
      FUN_14053cb70(lVar1 + 0x178,lVar2 + 0xb0);
    }
  }
  return;
}



// FUNCTION 140547890 FUN_140547890 body=31 status=ok
// SIG undefined FUN_140547890(void)

void FUN_140547890(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_140531230(param_1 + 0x28,param_1 + 8,local_res10);
  return;
}



// FUNCTION 1405478b0 FUN_1405478b0 body=31 status=ok
// SIG undefined FUN_1405478b0(void)

void FUN_1405478b0(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_1405312e0(param_1 + 0x38,param_1 + 8,local_res10);
  return;
}



// FUNCTION 140547940 FUN_140547940 body=142 status=ok
// SIG undefined FUN_140547940(void)

void FUN_140547940(longlong param_1)

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
  (**(code **)(param_1 + 0x18))(plVar6);
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



// FUNCTION 1405479d0 FUN_1405479d0 body=142 status=ok
// SIG undefined FUN_1405479d0(void)

void FUN_1405479d0(longlong param_1)

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
  (**(code **)(param_1 + 0x18))(plVar6);
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



// FUNCTION 140547a60 FUN_140547a60 body=186 status=ok
// SIG undefined FUN_140547a60(void)

undefined8 FUN_140547a60(longlong param_1,undefined8 param_2,int param_3)

{
  if ((param_3 == 200) || (param_3 == 0x194)) {
    FUN_1405627d0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,5);
    (**(code **)(**(longlong **)(param_1 + 8) + 200))
              (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,0);
    return 1;
  }
  if ((param_3 != 0) && (param_3 != 599)) {
    (**(code **)(**(longlong **)(param_1 + 8) + 200))
              (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,8);
    return 1;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 200))
            (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,6);
  return 1;
}



// FUNCTION 140547b20 FUN_140547b20 body=257 status=ok
// SIG undefined FUN_140547b20(void)

undefined8 FUN_140547b20(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  if (param_3 == 200) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x108))
              (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,0);
    FUN_1405627d0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,5);
    local_18[1] = 0x26;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"SPARK_FRIEND_REQUEST_REJECTED_MESSAGE",0x4c);
    FUN_14055ffc0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
      return 1;
    }
  }
  else {
    if (param_3 == 0x194) {
      uVar1 = 5;
    }
    else if ((param_3 == 0) || (uVar1 = 8, param_3 == 599)) {
      uVar1 = 6;
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x108))
              (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,uVar1);
  }
  return 1;
}



// FUNCTION 140547c30 FUN_140547c30 body=270 status=ok
// SIG undefined FUN_140547c30(void)

undefined8 FUN_140547c30(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  if (param_3 == 200) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))
              (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,0);
    FUN_1405627d0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,1);
    local_18[1] = 0x26;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"SPARK_FRIEND_REQUEST_ACCEPTED_MESSAGE",0x4c);
    FUN_14055ffc0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    FUN_14055c200(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
    return 1;
  }
  if (param_3 == 0x194) {
    uVar1 = 5;
  }
  else if ((param_3 == 0) || (uVar1 = 8, param_3 == 599)) {
    uVar1 = 6;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))
            (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,uVar1);
  return 1;
}



// FUNCTION 140547d40 FUN_140547d40 body=285 status=ok
// SIG undefined FUN_140547d40(void)

undefined8 FUN_140547d40(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  if (param_3 == 200) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x148))
                      (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,0);
    if (cVar1 != '\0') {
      local_18[1] = 0x1d;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"SPARK_FRIEND_REMOVED_MESSAGE",0x3a);
      FUN_14055ffc0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    FUN_1405627d0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,4);
    (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))
              (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,0);
    return 1;
  }
  if (param_3 == 0x194) {
    uVar2 = 5;
  }
  else if ((param_3 == 0) || (uVar2 = 8, param_3 == 599)) {
    uVar2 = 6;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))
            (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,uVar2);
  return 1;
}



// FUNCTION 140547e60 FUN_140547e60 body=20 status=ok
// SIG undefined FUN_140547e60(void)

undefined1 FUN_140547e60(longlong param_1)

{
  FUN_14053a860(param_1 + 8);
  return 1;
}



// FUNCTION 140547e80 FUN_140547e80 body=264 status=ok
// SIG undefined FUN_140547e80(void)

undefined8 FUN_140547e80(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  if (param_3 == 200) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
              (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,0);
    FUN_1405627d0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,1);
    local_18[1] = 0x26;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"SPARK_FRIEND_REQUEST_ACCEPTED_MESSAGE",0x4c);
    FUN_14055ffc0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    FUN_14055c200(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
    return 1;
  }
  if (param_3 == 0x194) {
    uVar1 = 5;
  }
  else if ((param_3 == 0) || (uVar1 = 8, param_3 == 599)) {
    uVar1 = 6;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
            (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,uVar1);
  return 1;
}



// FUNCTION 140547f90 FUN_140547f90 body=304 status=ok
// SIG undefined FUN_140547f90(void)

undefined8 FUN_140547f90(longlong param_1,undefined8 param_2,int param_3)

{
  longlong local_18 [2];
  
  if ((param_3 == 200) || (param_3 == 0x194)) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x88))
              (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,0);
    FUN_1405627d0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,5);
    if (param_3 == 200) {
      local_18[1] = 0x1d;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"SPARK_FRIEND_REMOVED_MESSAGE",0x3a);
      FUN_14055ffc0(*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    return 1;
  }
  if ((param_3 != 0) && (param_3 != 599)) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x88))
              (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,8);
    return 1;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x88))
            (*(longlong **)(param_1 + 8),param_1 + 0x10,param_1 + 0x20,6);
  return 1;
}



// FUNCTION 1405480c0 FUN_1405480c0 body=177 status=ok
// SIG undefined FUN_1405480c0(void)

undefined8 FUN_1405480c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 8);
  pcVar2 = (char *)(**(code **)(*param_2 + 8))(param_2);
  if (*pcVar2 == '\x02') {
    FUN_140549500(lVar1 + 0x78,local_res8,param_1 + 0x10);
    lVar3 = 0;
    if (local_res8[0] != -1) {
      lVar3 = (longlong)local_res8[0] * 0x168 + *(longlong *)(lVar1 + 0x78);
    }
    lVar4 = lVar3 + 0x10;
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    if (lVar4 != 0) {
      FUN_140561400(lVar1,lVar4 + 0xb0,*(undefined1 *)(lVar4 + 0x100));
    }
  }
  pcVar2 = (char *)(**(code **)(*param_2 + 8))(param_2);
  if (*pcVar2 == '\0') {
    FUN_140566c30(lVar1,param_1 + 0x10);
  }
  return 1;
}



// FUNCTION 140548180 FUN_140548180 body=24 status=ok
// SIG undefined FUN_140548180(void)

undefined1 FUN_140548180(longlong param_1,undefined8 param_2)

{
  FUN_140552d40(*(undefined8 *)(param_1 + 8),param_2,param_1 + 0x10);
  return 1;
}



// FUNCTION 1405481a0 FUN_1405481a0 body=98 status=ok
// SIG undefined FUN_1405481a0(void)

undefined1 FUN_1405481a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = FUN_140548950(lVar1);
  if (lVar2 != 0) {
    FUN_14056a280(lVar1,lVar2,param_2);
    if (*(char *)(lVar2 + 0x104) != '\0') {
      FUN_14053cb70(lVar1 + 0x178,lVar2 + 0xb0);
    }
  }
  return 1;
}



// FUNCTION 140548210 FUN_140548210 body=24 status=ok
// SIG undefined FUN_140548210(void)

undefined1 FUN_140548210(longlong param_1,undefined8 param_2)

{
  FUN_140552900(*(undefined8 *)(param_1 + 8),param_2,param_1 + 0x10);
  return 1;
}



// FUNCTION 140548230 FUN_140548230 body=33 status=ok
// SIG undefined FUN_140548230(void)

undefined1 FUN_140548230(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_140531230(param_1 + 0x28,param_1 + 8,local_res10);
  return 1;
}



// FUNCTION 140548260 FUN_140548260 body=33 status=ok
// SIG undefined FUN_140548260(void)

undefined1 FUN_140548260(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_1405312e0(param_1 + 0x38,param_1 + 8,local_res10);
  return 1;
}



// FUNCTION 140548290 FUN_140548290 body=24 status=ok
// SIG undefined FUN_140548290(void)

undefined1 FUN_140548290(longlong param_1,undefined8 param_2)

{
  FUN_140556740(*(undefined8 *)(param_1 + 8),param_2,param_1 + 0x10);
  return 1;
}


