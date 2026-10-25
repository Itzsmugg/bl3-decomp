// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142f856e0 FUN_142f856e0 body=47 status=ok
// SIG undefined FUN_142f856e0(void)

longlong FUN_142f856e0(void)

{
  if (DAT_146b43ed8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b43ed8,&PTR_FUN_14676df20);
  }
  return DAT_146b43ed8;
}



// FUNCTION 142f85710 FUN_142f85710 body=47 status=ok
// SIG undefined FUN_142f85710(void)

longlong FUN_142f85710(void)

{
  if (DAT_146b43ee8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b43ee8,&PTR_FUN_14676e030);
  }
  return DAT_146b43ee8;
}



// FUNCTION 142f85740 FUN_142f85740 body=47 status=ok
// SIG undefined FUN_142f85740(void)

longlong FUN_142f85740(void)

{
  if (DAT_146b43ec8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b43ec8,&PTR_FUN_14676ddb0);
  }
  return DAT_146b43ec8;
}



// FUNCTION 142f85770 FUN_142f85770 body=47 status=ok
// SIG undefined FUN_142f85770(void)

longlong FUN_142f85770(void)

{
  if (DAT_146b43e60 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b43e60,&PTR_FUN_14676d2a0);
  }
  return DAT_146b43e60;
}



// FUNCTION 142f857a0 WinMainCRTStartup body=18 status=ok
// SIG undefined WinMainCRTStartup(void)

void WinMainCRTStartup(void)

{
  FUN_142b90b40();
  FUN_142f9d030();
  return;
}



// FUNCTION 142f857d0 FUN_142f857d0 body=115 status=ok
// SIG undefined FUN_142f857d0(void)

undefined4 * FUN_142f857d0(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  param_2[4] = iVar1;
  if (iVar1 == 0) {
    param_2[5] = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2 + 2,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_2 + 2),_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 142f85850 FUN_142f85850 body=165 status=ok
// SIG undefined FUN_142f85850(void)

undefined4 * FUN_142f85850(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  
  plVar2 = (longlong *)param_1[1];
  puVar3 = (undefined8 *)0x0;
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  param_2[4] = 0;
  param_2[5] = 0x80000000;
  iVar1 = (int)plVar2[1];
  lVar4 = (longlong)iVar1;
  local_res8[0] = iVar1;
  if (iVar1 != 0) {
    puVar3 = (undefined8 *)FUN_143702d60(&PTR_vftable_1467f0638,8,local_res8);
  }
  *(undefined8 **)(param_2 + 2) = puVar3;
  param_2[4] = iVar1;
  iVar5 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar5 = local_res8[0];
  }
  param_2[5] = iVar5;
  if (0 < iVar1) {
    lVar6 = *plVar2 - (longlong)puVar3;
    do {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = *(undefined8 *)(lVar6 + (longlong)puVar3);
      }
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return param_2;
}



// FUNCTION 142f85900 FUN_142f85900 body=836 status=ok
// SIG undefined FUN_142f85900(void)

longlong * FUN_142f85900(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong **pplVar11;
  undefined4 uVar12;
  undefined4 local_res10;
  undefined4 local_res14;
  longlong *local_88 [2];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [32];
  
  lVar6 = operator_new(0xf8);
  plVar9 = (longlong *)0x0;
  plVar7 = plVar9;
  if (lVar6 != 0) {
    plVar7 = (longlong *)FNavigationPath::FNavigationPath(lVar6);
  }
  plVar8 = (longlong *)operator_new(0x18);
  plVar10 = plVar9;
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_143f3f2e0;
    plVar8[2] = (longlong)plVar7;
    plVar10 = plVar8;
  }
  *param_2 = (longlong)plVar7;
  param_2[1] = (longlong)plVar10;
  plVar8 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar8 = plVar9;
  }
  if (plVar8 != (longlong *)0x0) {
    if (*plVar8 != 0) {
      if (plVar8[1] != 0) {
        piVar1 = (int *)(plVar8[1] + 8);
        LOCK();
        iVar5 = *piVar1;
        if (iVar5 == 0) {
          *piVar1 = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (0 < iVar5) goto LAB_142f85a30;
      }
      plVar10 = (longlong *)param_2[1];
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    *plVar8 = (longlong)plVar7;
    plVar7 = (longlong *)plVar8[1];
    if (plVar10 != plVar7) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar8[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar8[1] = (longlong)plVar10;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar10 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
LAB_142f85a30:
  lVar6 = *param_2;
  FWeakObjectPtr::operator=(&local_res10,param_1);
  *(undefined4 *)(lVar6 + 0x9c) = local_res10;
  *(undefined4 *)(lVar6 + 0xa0) = local_res14;
  FPathFindingQueryData::operator=(*param_2 + 0xa8,param_3);
  lVar6 = *param_2;
  uVar12 = FUN_142b90b10(param_1);
  lVar2 = *param_2;
  *(undefined4 *)(lVar6 + 0xe0) = uVar12;
  plVar7 = (longlong *)param_2[1];
  local_78 = FUN_142b94cf0;
  uStack_70 = 0;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
  }
  plVar9 = (longlong *)FMemory::Realloc(0,0x40);
  local_88[0] = plVar9;
  if (plVar9 != (longlong *)0x0) {
    local_58 = (undefined4)local_78;
    uStack_54 = local_78._4_4_;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_68 = lVar2;
    local_60 = plVar7;
    FUN_142b7ec90(plVar9,param_1,&local_58,&local_68);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar7 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
    plVar9 = local_88[0];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar7 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar9 = local_88[0];
        if (iVar5 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
          plVar9 = local_88[0];
        }
      }
    }
  }
  plVar7 = (longlong *)FUN_141d29000(local_48,0,0xff);
  lVar6 = *plVar7;
  pplVar11 = (longlong **)(lVar6 + 0x10);
  *pplVar11 = (longlong *)0x0;
  *(undefined4 *)(lVar6 + 0x18) = 0;
  if ((local_88 != pplVar11) && (plVar9 != (longlong *)0x0)) {
    (**(code **)(*plVar9 + 0x30))(plVar9,pplVar11);
  }
  *(undefined4 *)(lVar6 + 0x20) = 2;
  lVar6 = *plVar7;
  lVar4 = plVar7[2];
  lVar2 = plVar7[1];
  lVar3 = *(longlong *)(lVar6 + 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
    UNLOCK();
    plVar9 = local_88[0];
  }
  FUN_1409691d0(lVar6,lVar2,(int)lVar4,1);
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x48);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    plVar9 = local_88[0];
    if (iVar5 == 1) {
      FGraphEvent::Recycle(lVar3);
      plVar9 = local_88[0];
    }
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    lVar6 = FMemory::Realloc(plVar9,0,0);
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  return param_2;
}



// FUNCTION 142f85c50 FUN_142f85c50 body=408 status=ok
// SIG undefined FUN_142f85c50(void)

int * FUN_142f85c50(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

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
  FVariant::FVariant(local_20,param_3);
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
          if (*(uint *)((longlong)iVar3 * 0x20 + *param_1) == *local_20) goto LAB_142f85d0b;
          iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_142f85d0b:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_20,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_142f85dbd;
    }
  }
  cVar1 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
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
LAB_142f85dbd:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 142f85df0 FUN_142f85df0 body=410 status=ok
// SIG undefined FUN_142f85df0(void)

int * FUN_142f85df0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

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
  bVar6 = false;
  *param_2 = local_28[0];
  *local_20 = *(uint *)*param_3;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = 0xffffffff;
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
          if (*(uint *)((longlong)iVar3 * 0x20 + *param_1) == *local_20) goto LAB_142f85ead;
          iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_142f85ead:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_20,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_142f85f5f;
    }
  }
  cVar1 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
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
LAB_142f85f5f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 142f85f90 FUN_142f85f90 body=669 status=ok
// SIG undefined FUN_142f85f90(void)

uint * FUN_142f85f90(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  char cVar13;
  bool bVar14;
  uint local_res8 [2];
  uint local_res10;
  uint local_res14;
  undefined8 *local_res18;
  
  iVar11 = 1;
  uVar10 = 0xffffffff;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar12 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar12 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar12 = *(uint *)(param_1 + 6);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)(int)uVar12 * 0x14);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x14) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = uVar12;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 +
                   (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar12 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)(int)uVar12 * 0x14);
  puVar2 = (uint *)*local_res18;
  puVar3 = (uint *)local_res18[1];
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  puVar1[2] = *puVar3;
  puVar1[3] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = puVar1[1];
    local_res10 = *puVar1;
    TSet<TTuple<TWeakObjectPtr<AXHighLevelWaypoint,FWeakObjectPtr>,float>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AXHighLevelWaypoint,FWeakObjectPtr>,float,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    uVar12 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar9 * 0x14),puVar1,0xc);
      uVar6 = *param_2;
      bVar4 = (byte)uVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x14) = uVar6;
      }
      lVar9 = *param_1;
      *(undefined4 *)(lVar9 + (longlong)(int)uVar6 * 0x14) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar10 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar9 + 4 + (longlong)(int)uVar6 * 0x14) = uVar10;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar6;
      plVar7 = (longlong *)param_1[4];
      *param_2 = uVar12;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_142f86207;
    }
  }
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar12) {
    uVar6 = (uVar12 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar13 = '\0';
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar11;
    }
    uVar6 = (uVar12 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar13 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar12 = (*puVar1 ^ puVar1[1]) & (int)param_1[9] - 1U;
    puVar1[4] = uVar12;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar1[3] = *(uint *)((longlong)plVar7 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(uint *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<TWeakObjectPtr<AXHighLevelWaypoint,FWeakObjectPtr>,float>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AXHighLevelWaypoint,FWeakObjectPtr>,float,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142f86207:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142f86230 FUN_142f86230 body=632 status=ok
// SIG undefined FUN_142f86230(void)

int * FUN_142f86230(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  bool bVar10;
  
  iVar6 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar9 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar9 = *puVar9 | 1 << ((byte)iVar5 & 0x1f);
  puVar9 = (uint *)((longlong)iVar5 * 0x20 + *param_1);
  FUN_142f857d0(param_3,puVar9);
  puVar9[6] = 0xffffffff;
  bVar10 = false;
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar8 != 1) {
    if (uVar8 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar9) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)((longlong)iVar5 * 0x20 + *param_1) == *puVar9) goto LAB_142f8637b;
          iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *param_1);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_142f8637b:
    bVar10 = iVar5 != -1;
    if (bVar10) {
      _Dst = (void *)((longlong)iVar5 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar9,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_142f8647f;
    }
  }
  if (3 < uVar8) {
    uVar3 = (uVar8 >> 1) + 8;
    iVar6 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar7 = '\0';
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar6;
    }
    uVar3 = (uVar8 >> 1) + 7;
    iVar6 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar7 = '\x1f' - (char)iVar6;
    }
    iVar6 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar7 & 0x1f);
  }
  if (((int)uVar8 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar8 = (int)param_1[9] - 1U & *puVar9;
    puVar9[7] = uVar8;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar9[6] = *(uint *)((longlong)plVar4 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142f8647f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 142f864b0 FUN_142f864b0 body=703 status=ok
// SIG undefined FUN_142f864b0(void)

int * FUN_142f864b0(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  longlong *_Src;
  bool bVar18;
  
  iVar16 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar15 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar15);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar15 = (int)param_1[6];
    iVar14 = *(int *)((longlong)iVar15 * 0x20 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar14;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar14 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar15;
  lVar11 = (longlong)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar17 = (uint *)((longlong)plVar12 + lVar11);
  *puVar17 = *puVar17 | 1 << ((byte)iVar15 & 0x1f);
  puVar2 = (undefined4 *)*param_3;
  lVar13 = (longlong)iVar15 * 0x20;
  _Src = (longlong *)(*param_1 + lVar13);
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  plVar12 = (longlong *)param_3[1];
  bVar18 = false;
  *(undefined4 *)_Src = *puVar2;
  *(undefined4 *)((longlong)_Src + 4) = uVar4;
  *(undefined4 *)(_Src + 1) = uVar5;
  *(undefined4 *)((longlong)_Src + 0xc) = uVar6;
  _Src[2] = *plVar12;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar8 != 1) {
    iVar14 = iVar16;
    if (iVar8 != 0) {
      plVar12 = (longlong *)param_1[8];
      iVar9 = GetTypeHash(_Src);
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar12 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          lVar1 = (longlong)iVar9 * 0x20 + *param_1;
          if ((*(longlong *)((longlong)iVar9 * 0x20 + *param_1) == *_Src) &&
             (*(longlong *)(lVar1 + 8) == _Src[1])) {
            bVar18 = true;
          }
          else {
            bVar18 = false;
          }
          iVar14 = iVar9;
        } while ((!bVar18) && (iVar9 = *(int *)(lVar1 + 0x18), iVar14 = iVar16, iVar9 != -1));
      }
    }
    bVar18 = iVar14 != -1;
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar14 * 0x20 + *param_1),_Src,0x18);
      bVar3 = (byte)iVar15 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar15;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar13 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar16 = (int)param_1[6];
      }
      *(int *)(lVar13 + 4 + lVar1) = iVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar15;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar14;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar17 = (uint *)((longlong)plVar12 + lVar11);
      *puVar17 = *puVar17 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142f86745;
    }
  }
  cVar7 = FUN_142f98350(param_1,iVar8,0);
  if (cVar7 == '\0') {
    uVar10 = GetTypeHash(_Src);
    uVar10 = uVar10 & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar10;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_142f86745:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar18;
  }
  return param_2;
}



// FUNCTION 142f86770 FUN_142f86770 body=705 status=ok
// SIG undefined FUN_142f86770(void)

int * FUN_142f86770(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  bool local_res8;
  
  iVar5 = 1;
  iVar12 = -1;
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
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar11 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar11 = *puVar11 | 1 << ((byte)iVar7 & 0x1f);
  puVar11 = (uint *)((longlong)iVar7 * 0x20 + *param_1);
  FUN_142f85850(param_3,puVar11);
  puVar11[6] = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar10 != 1) {
    iVar7 = iVar12;
    if (uVar10 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar11) * 4);
      if (iVar8 != -1) {
        do {
          iVar7 = iVar8;
          if (*(uint *)((longlong)iVar8 * 0x20 + *param_1) == *puVar11) break;
          iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *param_1);
          iVar7 = iVar12;
        } while (iVar8 != -1);
      }
    }
    local_res8 = iVar7 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar7 * 0x20 + *param_1);
      FUN_142f8b710(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar11,0x18);
      iVar5 = *param_2;
      bVar2 = (byte)iVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar5;
      }
      puVar6 = (undefined4 *)((longlong)iVar5 * 0x20 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      puVar6[1] = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar5;
      plVar4 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar4 == (longlong *)0x0) {
        plVar4 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar4 +
                        (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_142f86a08;
    }
  }
  if (3 < uVar10) {
    uVar3 = (uVar10 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar9 = '\0';
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar12;
    }
    uVar3 = (uVar10 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar9 = '\x1f' - (char)iVar12;
    }
    iVar5 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar5 <= (int)param_1[9])))) {
    uVar10 = (int)param_1[9] - 1U & *puVar11;
    puVar11[7] = uVar10;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar11[6] = *(uint *)((longlong)plVar4 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar5;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142f86a08:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142f86a40 FUN_142f86a40 body=753 status=ok
// SIG undefined FUN_142f86a40(void)

int * FUN_142f86a40(ulonglong param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  bool bVar14;
  int local_38 [2];
  longlong *local_30;
  
  FUN_142f8e770(param_1,local_38);
  uVar13 = 0xffffffff;
  lVar4 = *param_3;
  bVar14 = false;
  *param_2 = local_38[0];
  *local_30 = lVar4;
  *(undefined4 *)(local_30 + 1) = 0xffffffff;
  uVar12 = *(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x22c);
  if (uVar12 != 1) {
    iVar5 = -1;
    iVar9 = iVar5;
    if (uVar12 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x270);
      if (*(longlong *)(param_1 + 0x270) == 0) {
        lVar6 = param_1 + 0x230;
      }
      iVar8 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                               (longlong)*(int *)(param_1 + 0x278) - 1U) * 4);
      if (iVar8 != -1) {
        uVar7 = *(ulonglong *)(param_1 + 0x200);
        do {
          iVar9 = iVar8;
          if (*(longlong *)
               (((longlong)(int)-(uint)(uVar7 == 0) & param_1 | uVar7) + (longlong)iVar8 * 0x10) ==
              lVar4) break;
          iVar8 = *(int *)(((longlong)(int)-(uint)(uVar7 == 0) & param_1 | uVar7) + 8 +
                          (longlong)iVar8 * 0x10);
          iVar9 = iVar5;
        } while (iVar8 != -1);
      }
    }
    bVar14 = iVar9 != -1;
    if (bVar14) {
      uVar7 = *(ulonglong *)(param_1 + 0x200);
      if (*(ulonglong *)(param_1 + 0x200) == 0) {
        uVar7 = param_1;
      }
      _guard_xfg_dispatch_icall_nop((void *)(uVar7 + (longlong)iVar9 * 0x10),local_30,8);
      bVar2 = (byte)local_38[0] & 0x1f;
      if (*(int *)(param_1 + 0x22c) != 0) {
        uVar7 = *(ulonglong *)(param_1 + 0x200);
        if (*(ulonglong *)(param_1 + 0x200) == 0) {
          uVar7 = param_1;
        }
        *(int *)(uVar7 + (longlong)*(int *)(param_1 + 0x228) * 0x10) = local_38[0];
      }
      uVar7 = *(ulonglong *)(param_1 + 0x200);
      if (*(ulonglong *)(param_1 + 0x200) == 0) {
        uVar7 = param_1;
      }
      *(undefined4 *)(uVar7 + (longlong)local_38[0] * 0x10) = 0xffffffff;
      if (0 < *(int *)(param_1 + 0x22c)) {
        uVar13 = *(undefined4 *)(param_1 + 0x228);
      }
      *(undefined4 *)(uVar7 + 4 + (longlong)local_38[0] * 0x10) = uVar13;
      *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
      *(int *)(param_1 + 0x228) = local_38[0];
      lVar4 = *(longlong *)(param_1 + 0x218);
      *param_2 = iVar9;
      if (lVar4 == 0) {
        lVar4 = param_1 + 0x210;
      }
      puVar1 = (uint *)(lVar4 + (longlong)((int)(local_38[0] + (local_38[0] >> 0x1f & 0x1fU)) >> 5)
                                * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_142f86d04;
    }
  }
  uVar3 = uVar12 >> 1;
  iVar9 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  iVar5 = 0x20;
  cVar10 = '\0';
  if (uVar3 != 0) {
    iVar5 = 0x1f - iVar9;
  }
  uVar3 = uVar3 - 1;
  iVar9 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  if (uVar3 != 0) {
    cVar10 = '\x1f' - (char)iVar9;
  }
  uVar11 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  uVar3 = 0x10;
  if ((0xf < uVar11) && (uVar3 = uVar11, uVar12 < 4)) {
    uVar3 = 0x10;
  }
  if (((int)uVar12 < 1) ||
     ((*(int *)(param_1 + 0x278) != 0 && ((int)uVar3 <= *(int *)(param_1 + 0x278))))) {
    uVar12 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & *(int *)(param_1 + 0x278) - 1U;
    *(uint *)((longlong)local_30 + 0xc) = uVar12;
    lVar4 = *(longlong *)(param_1 + 0x270);
    if (*(longlong *)(param_1 + 0x270) == 0) {
      lVar4 = param_1 + 0x230;
    }
    *(undefined4 *)(local_30 + 1) =
         *(undefined4 *)
          (lVar4 + ((longlong)*(int *)(param_1 + 0x278) - 1U & (longlong)(int)uVar12) * 4);
    lVar4 = *(longlong *)(param_1 + 0x270);
    if (*(longlong *)(param_1 + 0x270) == 0) {
      lVar4 = param_1 + 0x230;
    }
    *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x278) - 1U & (longlong)(int)uVar12) * 4) =
         local_38[0];
  }
  else {
    *(uint *)(param_1 + 0x278) = uVar3;
    FUN_142fafe30(param_1);
  }
LAB_142f86d04:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 142f86d40 FUN_142f86d40 body=1519 status=ok
// SIG undefined FUN_142f86d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f86d40(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 auStack_368 [32];
  char local_348 [8];
  int local_340;
  uint uStack_33c;
  uint *puStack_338;
  uint local_330;
  uint uStack_32c;
  int iStack_328;
  undefined4 uStack_324;
  undefined8 local_320;
  longlong *local_318;
  longlong *local_310;
  undefined8 local_308;
  int iStack_300;
  uint uStack_2fc;
  uint *local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  longlong *local_2e0;
  undefined8 uStack_2d8;
  uint *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8 [512];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  local_318 = param_1;
  plVar5 = (longlong *)FUN_1428dfc70();
  plVar10 = param_1;
  while (plVar10 != plVar5) {
    plVar10 = (longlong *)plVar10[6];
    if (plVar10 == (longlong *)0x0) {
      return;
    }
  }
  if (param_2 == 0) {
    return;
  }
  lVar6 = FUN_1428e7a40();
  lVar7 = param_2;
  while (lVar7 != lVar6) {
    lVar7 = *(longlong *)(lVar7 + 0x30);
    if (lVar7 == 0) {
      return;
    }
  }
  lVar6 = FUN_1428e7a40();
  lVar7 = param_2;
  while (lVar7 != lVar6) {
    lVar7 = *(longlong *)(lVar7 + 0x30);
    if (lVar7 == 0) {
      return;
    }
  }
  lVar7 = param_1[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*param_1 + 0x368))(param_1);
    lVar7 = param_1[0x1f];
  }
  if (lVar7 != 0) {
    lVar6 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      plVar10 = (longlong *)(lVar7 + 0x2b0);
      uStack_33c = 1;
      uVar2 = *(uint *)(lVar7 + 0x2d8);
      puVar1 = (uint *)(lVar7 + 0x2c0);
      local_340 = 0;
      uStack_32c = 0;
      iStack_328 = 0;
      if (uVar2 != 0) {
        puVar13 = *(uint **)(lVar7 + 0x2d0);
        if (*(uint **)(lVar7 + 0x2d0) == (uint *)0x0) {
          puVar13 = puVar1;
        }
        uVar3 = *puVar13;
        iStack_328 = 0;
        local_340 = 0;
        while (uVar3 == 0) {
          lVar6 = (longlong)local_340;
          iStack_328 = iStack_328 + 0x20;
          iVar8 = local_340 + 1;
          bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_340;
          local_340 = iVar8;
          if (bVar4) goto LAB_142f86f23;
          uVar3 = puVar13[lVar6 + 1];
        }
        uStack_33c = uVar3 - 1 & uVar3 ^ uVar3;
        iVar8 = 0x1f;
        if (uStack_33c != 0) {
          for (; uStack_33c >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uStack_33c == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        uStack_32c = (iStack_328 - iVar8) + 0x1f;
        if ((int)uVar2 < (int)uStack_32c) {
LAB_142f86f23:
          uStack_32c = uVar2;
        }
      }
      uVar3 = *(uint *)(lVar7 + 0x2d8);
      uStack_2f0 = CONCAT44(uStack_32c,0xffffffff);
      local_2e8 = CONCAT44(uStack_324,iStack_328);
      uStack_2d8 = CONCAT44(uStack_33c,local_340);
      local_330 = -1 << ((byte)uVar3 & 0x1f);
      uVar12 = uVar3 & 0xffffffe0;
      iStack_300 = local_340;
      uStack_2fc = uStack_33c;
      puStack_338 = puVar1;
      uStack_32c = uVar3;
      local_310 = plVar10;
      local_2f8 = puVar1;
      local_2e0 = plVar10;
      puStack_2d0 = puVar1;
      uStack_2c8 = uStack_2f0;
      uStack_2c0 = local_2e8;
      local_308 = plVar10;
      if (uVar3 != uVar2) {
        puVar13 = *(uint **)(lVar7 + 0x2d0);
        if (*(uint **)(lVar7 + 0x2d0) == (uint *)0x0) {
          puVar13 = puVar1;
        }
        uVar9 = puVar13[(int)uVar3 >> 5] & local_330;
        iVar8 = (int)uVar3 >> 5;
        while (uVar9 == 0) {
          uVar12 = uVar12 + 0x20;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
          goto LAB_142f87007;
          uVar9 = puVar13[(longlong)iVar8 + 1];
          local_330 = 0xffffffff;
          iVar8 = iVar8 + 1;
        }
        uVar9 = uVar9 - 1 & uVar9 ^ uVar9;
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
        uStack_32c = (uVar12 - iVar8) + 0x1f;
        uVar3 = uStack_32c;
        if ((int)uVar2 < (int)uStack_32c) {
LAB_142f87007:
          uStack_32c = uVar2;
          uVar3 = uVar2;
        }
      }
      while( true ) {
        if ((uStack_2f0._4_4_ == uVar3) && (local_2f8 == puVar1)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((bVar4) && (local_308 == plVar10)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        param_1 = local_318;
        if (!bVar4) break;
        lVar7 = *(longlong *)(*local_308 + (longlong)(int)uStack_2f0._4_4_ * 0x10);
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x10);
          if ((*(int *)(lVar7 + 0x90) < *(int *)(param_2 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(param_2 + 0x90) * 8) !=
              param_2 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            FUN_142f8c640(param_3);
          }
        }
        uStack_2f0 = CONCAT44(uStack_2f0._4_4_,(uint)uStack_2f0 & ~uStack_2fc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_300);
      }
    }
  }
  local_b8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0xffffffff;
  local_8c = 0;
  local_48 = 0;
  local_40 = 0;
  lVar7 = UBlueprintGeneratedClass::GetPrivateStaticClass();
  if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    do {
      lVar7 = param_1[0x48];
      iVar8 = 0;
      if (lVar7 != 0) {
        while( true ) {
          if ((iVar8 < 0) || (*(int *)(lVar7 + 0x30) <= iVar8)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) break;
          lVar11 = (longlong)iVar8 * 0x80 + *(longlong *)(lVar7 + 0x28);
          lVar6 = *(longlong *)(lVar11 + 8);
          if (lVar6 != 0) {
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(param_2 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(param_2 + 0x90) * 8) != param_2 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              local_320 = *(undefined8 *)(lVar6 + 0x18);
              FUN_142f86a40(local_2b8,&local_318,&local_320,local_348);
              if (local_348[0] == '\0') {
                FUN_142f8c640(param_3,*(undefined8 *)(lVar11 + 8));
              }
            }
          }
          iVar8 = iVar8 + 1;
        }
      }
      lVar7 = param_1[0x47];
      if (lVar7 != 0) {
        plVar5 = *(longlong **)(lVar7 + 0x38);
        plVar10 = plVar5 + *(int *)(lVar7 + 0x40);
        for (; plVar5 != plVar10; plVar5 = plVar5 + 1) {
          lVar7 = *plVar5;
          if ((lVar7 != 0) && (lVar6 = *(longlong *)(lVar7 + 0x30), lVar6 != 0)) {
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(param_2 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(param_2 + 0x90) * 8) != param_2 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              local_320 = *(undefined8 *)(lVar6 + 0x18);
              FUN_142f86a40(local_2b8,&local_310,&local_320,local_348);
              if (local_348[0] == '\0') {
                FUN_142f8c640(param_3,*(undefined8 *)(lVar7 + 0x30));
              }
            }
          }
        }
      }
      param_1 = (longlong *)param_1[6];
      if (param_1 == (longlong *)0x0) break;
      lVar7 = UBlueprintGeneratedClass::GetPrivateStaticClass();
      if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
    } while (bVar4);
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  FUN_142f8b690(local_2b8);
  return;
}



// FUNCTION 142f87330 FUN_142f87330 body=442 status=ok
// SIG undefined FUN_142f87330(void)

void FUN_142f87330(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
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
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar5 = FUN_142fc0810();
    lVar7 = *(longlong *)(param_1 + 0x28);
    if (lVar7 != 0) {
      while (lVar7 != lVar5) {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == 0) {
          return;
        }
      }
      local_58 = 0;
      uStack_54 = 1;
      iVar1 = *(int *)(param_1 + 0x58);
      puStack_20 = (uint *)(param_1 + 0x40);
      local_48._4_4_ = 0;
      uStack_40 = 0;
      if (iVar1 != 0) {
        puVar8 = *(uint **)(param_1 + 0x50);
        if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
          puVar8 = puStack_20;
        }
        uVar2 = *puVar8;
        uStack_40 = 0;
        local_58 = 0;
        while (uVar2 == 0) {
          lVar7 = (longlong)local_58;
          uStack_40 = uStack_40 + 0x20;
          iVar6 = local_58 + 1;
          bVar4 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
          local_58 = iVar6;
          if (bVar4) goto LAB_142f8742f;
          uVar2 = puVar8[lVar7 + 1];
        }
        uStack_54 = -uVar2 & uVar2;
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
        local_48._4_4_ = (uStack_40 - iVar6) + 0x1f;
        if (iVar1 < local_48._4_4_) {
LAB_142f8742f:
          local_48._4_4_ = iVar1;
        }
      }
      uStack_18 = 0xffffffff;
      iStack_14 = local_48._4_4_;
      iStack_10 = uStack_40;
      uStack_c = iStack_3c;
      iStack_28 = local_58;
      uStack_24 = uStack_54;
      iStack_50 = local_58;
      uStack_4c = uStack_54;
      local_38 = uStack_40;
      uStack_34 = iStack_3c;
      uStack_40 = 0xffffffff;
      iStack_3c = local_48._4_4_;
      bVar4 = local_48._4_4_ < iVar1;
      local_30 = (longlong *)(param_1 + 0x30);
      local_48 = puStack_20;
      if (bVar4) {
        do {
          iVar1 = (int)param_3[1];
          uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8 + (longlong)iStack_3c * 0x18);
          *(int *)(param_3 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = uVar3;
          uStack_40 = uStack_40 & ~uStack_4c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
        } while (iStack_3c < (int)local_48[6]);
      }
    }
  }
  return;
}



// FUNCTION 142f874f0 FUN_142f874f0 body=574 status=ok
// SIG undefined FUN_142f874f0(void)

void FUN_142f874f0(undefined8 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  iVar8 = (param_2 + -2) / 2;
  if (-1 < iVar8) {
    iVar9 = iVar8 * 2 + 1;
    iVar2 = iVar9;
    iVar11 = iVar8;
joined_r0x000142f8751a:
    do {
      if (iVar9 < param_2) {
        iVar9 = iVar8 * 2;
        iVar10 = iVar9 + 1;
        if (iVar9 + 2 < param_2) {
          if (*(float *)(param_1 + ((longlong)iVar9 + 2) * 4 + 1) ==
              *(float *)(param_1 + (longlong)iVar10 * 4 + 1)) {
            bVar1 = *(float *)((longlong)param_1 + ((longlong)iVar9 + 2) * 0x20 + 0xc) <
                    *(float *)((longlong)iVar10 * 0x20 + 0xc + (longlong)param_1);
          }
          else {
            bVar1 = *(float *)(param_1 + ((longlong)iVar9 + 2) * 4 + 1) <
                    *(float *)(param_1 + (longlong)iVar10 * 4 + 1);
          }
          if (bVar1) {
            iVar10 = iVar9;
          }
          iVar10 = iVar10 + 1;
        }
        puVar13 = param_1 + (longlong)iVar8 * 4;
        puVar12 = param_1 + (longlong)iVar10 * 4;
        if (*(float *)(puVar13 + 1) == *(float *)(param_1 + (longlong)iVar10 * 4 + 1)) {
          bVar1 = *(float *)((longlong)puVar13 + 0xc) < *(float *)((longlong)puVar12 + 0xc);
        }
        else {
          bVar1 = *(float *)(puVar13 + 1) < *(float *)(param_1 + (longlong)iVar10 * 4 + 1);
        }
        if (bVar1) {
          if (puVar13 != puVar12) {
            uVar3 = puVar12[1];
            uVar4 = *puVar13;
            uVar5 = puVar13[1];
            uVar6 = puVar13[2];
            uVar7 = puVar13[3];
            *puVar13 = *puVar12;
            puVar13[1] = uVar3;
            uVar3 = puVar12[3];
            puVar13[2] = puVar12[2];
            puVar13[3] = uVar3;
            *puVar12 = uVar4;
            puVar12[1] = uVar5;
            puVar12[2] = uVar6;
            puVar12[3] = uVar7;
          }
          iVar9 = iVar10 * 2 + 1;
          iVar8 = iVar10;
          goto joined_r0x000142f8751a;
        }
      }
      iVar9 = iVar2 + -2;
      iVar8 = iVar11 + -1;
      iVar2 = iVar9;
      iVar11 = iVar8;
    } while (-1 < iVar8);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar12 = param_1 + (longlong)param_2 * 4;
    do {
      if (param_1 != puVar12) {
        uVar3 = puVar12[1];
        uVar4 = *param_1;
        uVar5 = param_1[1];
        uVar6 = param_1[2];
        uVar7 = param_1[3];
        *param_1 = *puVar12;
        param_1[1] = uVar3;
        uVar3 = puVar12[3];
        param_1[2] = puVar12[2];
        param_1[3] = uVar3;
        *puVar12 = uVar4;
        puVar12[1] = uVar5;
        puVar12[2] = uVar6;
        puVar12[3] = uVar7;
      }
      iVar8 = 0;
      if (1 < param_2) {
        do {
          iVar2 = iVar8 * 2;
          iVar9 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            if (*(float *)(param_1 + ((longlong)iVar2 + 2) * 4 + 1) ==
                *(float *)(param_1 + (longlong)iVar9 * 4 + 1)) {
              bVar1 = *(float *)((longlong)param_1 + ((longlong)iVar2 + 2) * 0x20 + 0xc) <
                      *(float *)((longlong)iVar9 * 0x20 + 0xc + (longlong)param_1);
            }
            else {
              bVar1 = *(float *)(param_1 + ((longlong)iVar2 + 2) * 4 + 1) <
                      *(float *)(param_1 + (longlong)iVar9 * 4 + 1);
            }
            if (bVar1) {
              iVar9 = iVar2;
            }
            iVar9 = iVar9 + 1;
          }
          puVar14 = param_1 + (longlong)iVar8 * 4;
          puVar13 = param_1 + (longlong)iVar9 * 4;
          if (*(float *)(puVar14 + 1) == *(float *)(param_1 + (longlong)iVar9 * 4 + 1)) {
            bVar1 = *(float *)((longlong)puVar14 + 0xc) < *(float *)((longlong)puVar13 + 0xc);
          }
          else {
            bVar1 = *(float *)(puVar14 + 1) < *(float *)(param_1 + (longlong)iVar9 * 4 + 1);
          }
          if (!bVar1) break;
          if (puVar14 != puVar13) {
            uVar3 = puVar13[1];
            uVar4 = *puVar14;
            uVar5 = puVar14[1];
            uVar6 = puVar14[2];
            uVar7 = puVar14[3];
            *puVar14 = *puVar13;
            puVar14[1] = uVar3;
            uVar3 = puVar13[3];
            puVar14[2] = puVar13[2];
            puVar14[3] = uVar3;
            *puVar13 = uVar4;
            puVar13[1] = uVar5;
            puVar13[2] = uVar6;
            puVar13[3] = uVar7;
          }
          iVar8 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar12 = puVar12 + -4;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142f87730 FUN_142f87730 body=798 status=ok
// SIG undefined FUN_142f87730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f87730(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 (*pauVar16) [16];
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float fVar22;
  undefined1 auStack_368 [48];
  undefined8 local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x20 + -0x20 + param_1;
    fVar22 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar22 = fVar22 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar22 = _guard_xfg_dispatch_icall_nop(fVar22);
    local_318 = (undefined4)(longlong)(fVar22 + fVar22);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    pauVar16 = (undefined1 (*) [16])&local_328;
    do {
      uVar1 = *(undefined8 *)pauVar16[1];
      local_338._0_4_ = (int)uVar1;
      puVar21 = SUB168(*pauVar16,0);
      puVar19 = SUB168(*pauVar16,8);
      lVar14 = ((longlong)puVar19 - (longlong)puVar21 >> 5) + 1;
      puVar20 = puVar21;
      if ((int)local_338 != 0) {
LAB_142f87800:
        if (8 < lVar14) {
          puVar21 = puVar20 + (lVar14 / 2) * 4;
          if (puVar21 != puVar20) {
            uVar3 = *(undefined4 *)((longlong)puVar20 + 4);
            uVar4 = *(undefined4 *)(puVar20 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar20 + 0xc);
            uVar6 = *(undefined4 *)puVar21;
            uVar7 = *(undefined4 *)((longlong)puVar21 + 4);
            uVar8 = *(undefined4 *)(puVar21 + 1);
            uVar9 = *(undefined4 *)((longlong)puVar21 + 0xc);
            uVar10 = puVar21[2];
            uVar11 = puVar21[3];
            *(undefined4 *)puVar21 = *(undefined4 *)puVar20;
            *(undefined4 *)((longlong)puVar21 + 4) = uVar3;
            *(undefined4 *)(puVar21 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar21 + 0xc) = uVar5;
            *(undefined1 (*) [16])(puVar21 + 2) = *(undefined1 (*) [16])(puVar20 + 2);
            *(undefined4 *)puVar20 = uVar6;
            *(undefined4 *)((longlong)puVar20 + 4) = uVar7;
            *(undefined4 *)(puVar20 + 1) = uVar8;
            *(undefined4 *)((longlong)puVar20 + 0xc) = uVar9;
            puVar20[2] = uVar10;
            puVar20[3] = uVar11;
          }
          puVar17 = puVar19 + 4;
          puVar21 = puVar20;
LAB_142f87850:
          puVar15 = puVar21;
          puVar21 = puVar15 + 4;
          if (puVar21 <= puVar19) goto code_r0x000142f87859;
          goto LAB_142f87882;
        }
        for (; puVar21 = puVar20, puVar17 = puVar20, puVar20 < puVar19; puVar19 = puVar19 + -4) {
          while (puVar15 = puVar21, puVar21 = puVar17 + 4, puVar21 <= puVar19) {
            if (*(float *)(puVar15 + 1) == *(float *)(puVar17 + 5)) {
              bVar2 = *(float *)((longlong)puVar15 + 0xc) < *(float *)((longlong)puVar17 + 0x2c);
            }
            else {
              bVar2 = *(float *)(puVar15 + 1) < *(float *)(puVar17 + 5);
            }
            puVar17 = puVar21;
            if (!bVar2) {
              puVar21 = puVar15;
            }
          }
          if (puVar15 != puVar19) {
            uVar1 = puVar19[1];
            uVar10 = *puVar15;
            uVar11 = puVar15[1];
            uVar12 = puVar15[2];
            uVar13 = puVar15[3];
            *puVar15 = *puVar19;
            puVar15[1] = uVar1;
            *(undefined1 (*) [16])(puVar15 + 2) = *(undefined1 (*) [16])(puVar19 + 2);
            *puVar19 = uVar10;
            puVar19[1] = uVar11;
            puVar19[2] = uVar12;
            puVar19[3] = uVar13;
          }
        }
        goto LAB_142f87997;
      }
LAB_142f87988:
      local_338 = uVar1;
      FUN_142f874f0(puVar21,lVar14,param_3,param_4);
LAB_142f87997:
      pauVar16 = (undefined1 (*) [16])(pauVar16[-2] + 8);
    } while ((undefined1 (*) [16])&local_328 <= pauVar16);
  }
  return;
code_r0x000142f87859:
  if (*(float *)(puVar20 + 1) == *(float *)(puVar15 + 5)) {
    bVar2 = *(float *)((longlong)puVar20 + 0xc) < *(float *)((longlong)puVar15 + 0x2c);
  }
  else {
    bVar2 = *(float *)(puVar20 + 1) < *(float *)(puVar15 + 5);
  }
  if (!bVar2) goto LAB_142f87850;
LAB_142f87882:
  do {
    puVar18 = puVar17;
    puVar17 = puVar18 + -4;
    if (puVar17 <= puVar20) break;
    if (*(float *)(puVar18 + -3) == *(float *)(puVar20 + 1)) {
      bVar2 = *(float *)((longlong)puVar18 + -0x14) < *(float *)((longlong)puVar20 + 0xc);
    }
    else {
      bVar2 = *(float *)(puVar18 + -3) < *(float *)(puVar20 + 1);
    }
  } while (!bVar2);
  if (puVar21 <= puVar17) {
    if (puVar21 != puVar17) {
      uVar3 = *(undefined4 *)((longlong)puVar18 + -0x1c);
      uVar4 = *(undefined4 *)(puVar18 + -3);
      uVar5 = *(undefined4 *)((longlong)puVar18 + -0x14);
      uVar6 = *(undefined4 *)puVar21;
      uVar7 = *(undefined4 *)((longlong)puVar15 + 0x24);
      uVar8 = *(undefined4 *)(puVar15 + 5);
      uVar9 = *(undefined4 *)((longlong)puVar15 + 0x2c);
      uVar10 = puVar15[6];
      uVar11 = puVar15[7];
      *(undefined4 *)puVar21 = *(undefined4 *)puVar17;
      *(undefined4 *)((longlong)puVar15 + 0x24) = uVar3;
      *(undefined4 *)(puVar15 + 5) = uVar4;
      *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar5;
      *(undefined1 (*) [16])(puVar15 + 6) = *(undefined1 (*) [16])(puVar18 + -2);
      *(undefined4 *)puVar17 = uVar6;
      *(undefined4 *)((longlong)puVar18 + -0x1c) = uVar7;
      *(undefined4 *)(puVar18 + -3) = uVar8;
      *(undefined4 *)((longlong)puVar18 + -0x14) = uVar9;
      puVar18[-2] = uVar10;
      puVar18[-1] = uVar11;
    }
    goto LAB_142f87850;
  }
  if (puVar20 != puVar17) {
    uVar3 = *(undefined4 *)((longlong)puVar18 + -0x1c);
    uVar4 = *(undefined4 *)(puVar18 + -3);
    uVar5 = *(undefined4 *)((longlong)puVar18 + -0x14);
    uVar6 = *(undefined4 *)puVar20;
    uVar7 = *(undefined4 *)((longlong)puVar20 + 4);
    uVar8 = *(undefined4 *)(puVar20 + 1);
    uVar9 = *(undefined4 *)((longlong)puVar20 + 0xc);
    uVar10 = puVar20[2];
    uVar11 = puVar20[3];
    *(undefined4 *)puVar20 = *(undefined4 *)puVar17;
    *(undefined4 *)((longlong)puVar20 + 4) = uVar3;
    *(undefined4 *)(puVar20 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar20 + 0xc) = uVar5;
    *(undefined1 (*) [16])(puVar20 + 2) = *(undefined1 (*) [16])(puVar18 + -2);
    *(undefined4 *)puVar17 = uVar6;
    *(undefined4 *)((longlong)puVar18 + -0x1c) = uVar7;
    *(undefined4 *)(puVar18 + -3) = uVar8;
    *(undefined4 *)((longlong)puVar18 + -0x14) = uVar9;
    puVar18[-2] = uVar10;
    puVar18[-1] = uVar11;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar17 + (-0x20 - (longlong)puVar20) & 0xffffffffffffffe0U) <
      (longlong)((longlong)puVar19 - (longlong)puVar21 & 0xffffffffffffffe0U)) {
    if (puVar21 < puVar19) {
      *(undefined8 **)*pauVar16 = puVar21;
      *(undefined8 **)(*pauVar16 + 8) = puVar19;
      *(int *)pauVar16[1] = (int)local_338;
      pauVar16 = (undefined1 (*) [16])(pauVar16[1] + 8);
    }
    if (puVar17 <= puVar20 + 4) goto LAB_142f87997;
    puVar19 = puVar18 + -8;
    puVar21 = puVar20;
  }
  else {
    if (puVar20 + 4 < puVar17) {
      *(undefined8 **)*pauVar16 = puVar20;
      *(undefined8 **)(*pauVar16 + 8) = puVar18 + -8;
      *(int *)pauVar16[1] = (int)local_338;
      pauVar16 = (undefined1 (*) [16])(pauVar16[1] + 8);
    }
    if (puVar19 <= puVar21) goto LAB_142f87997;
  }
  lVar14 = ((longlong)puVar19 - (longlong)puVar21 >> 5) + 1;
  puVar20 = puVar21;
  if ((int)local_338 == 0) goto LAB_142f87988;
  goto LAB_142f87800;
}



// FUNCTION 142f87a50 FUN_142f87a50 body=419 status=ok
// SIG undefined FUN_142f87a50(void)

int FUN_142f87a50(longlong *param_1,longlong *param_2)

{
  int iVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  byte bVar13;
  
  iVar1 = (int)param_1[1];
  lVar10 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  plVar9 = *(longlong **)(*param_2 + 0x28);
  uVar6 = 0;
  plVar4 = plVar9 + *(int *)(*param_2 + 0x30);
  uVar7 = uVar6;
  uVar12 = uVar6;
  if (plVar9 != plVar4) {
    do {
      if (*plVar9 == *(longlong *)*param_1) {
        bVar13 = 0;
        goto LAB_142f87ad1;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar4);
  }
  bVar13 = 1;
LAB_142f87ad1:
  do {
    iVar5 = (int)uVar6;
    uVar7 = uVar7 + 1;
    uVar6 = (ulonglong)(iVar5 + 1);
    if ((longlong)uVar7 < lVar10) {
      plVar4 = *(longlong **)(*param_2 + 0x28);
      plVar9 = (longlong *)(uVar7 * 0x150 + *param_1);
      do {
        if (plVar4 != plVar4 + *(int *)(*param_2 + 0x30)) {
          plVar3 = plVar4;
          do {
            if (*plVar3 == *plVar9) {
              bVar2 = 0;
              goto LAB_142f87b20;
            }
            plVar3 = plVar3 + 1;
          } while (plVar3 != plVar4 + *(int *)(*param_2 + 0x30));
        }
        bVar2 = 1;
LAB_142f87b20:
        if (bVar13 != bVar2) break;
        uVar6 = (ulonglong)((int)uVar6 + 1);
        uVar7 = uVar7 + 1;
        plVar9 = plVar9 + 0x2a;
      } while ((longlong)uVar7 < lVar10);
    }
    iVar8 = (int)uVar6 - iVar5;
    if (bVar13 == 0) {
      if (iVar8 != 0) {
        plVar4 = (longlong *)((longlong)iVar5 * 0x150 + 0xf8 + *param_1);
        do {
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          plVar4 = plVar4 + 0x2a;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    else {
      iVar11 = (int)uVar12;
      if (iVar11 != iVar5) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar11 * 0x150 + *param_1),
                   (void *)((longlong)iVar5 * 0x150 + *param_1),(longlong)iVar8 * 0x150);
      }
      uVar12 = (ulonglong)(uint)(iVar11 + iVar8);
    }
    bVar13 = bVar13 ^ 1;
    if (lVar10 <= (longlong)uVar7) {
      *(int *)(param_1 + 1) = (int)uVar12;
      return iVar1 - (int)uVar12;
    }
  } while( true );
}



// FUNCTION 142f87c00 FUN_142f87c00 body=32 status=ok
// SIG undefined FUN_142f87c00(void)

void FUN_142f87c00(undefined4 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3;
  if (0 < param_3) {
    param_2 = param_2 - (longlong)param_1;
    do {
      *param_1 = *(undefined4 *)(param_2 + (longlong)param_1);
      param_1 = param_1 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 142f87c20 FUN_142f87c20 body=43 status=ok
// SIG undefined FUN_142f87c20(void)

void FUN_142f87c20(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_3;
  if (0 < param_3) {
    puVar3 = (undefined8 *)(param_1 + 0x10);
    do {
      puVar1 = (undefined8 *)((param_2 - param_1) + -0x10 + (longlong)puVar3);
      uVar2 = puVar1[1];
      puVar3[-2] = *puVar1;
      puVar3[-1] = uVar2;
      puVar1 = (undefined8 *)((param_2 - param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 142f87c50 FUN_142f87c50 body=145 status=ok
// SIG undefined FUN_142f87c50(void)

void FUN_142f87c50(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = hkSlot::vftable;
    puVar2[1] = *param_1 & 0xfffffffffffffffc;
    puVar2[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar2;
    *puVar2 = &PTR_FUN_145a0f500;
    puVar2[3] = param_3;
    return;
  }
  return;
}



// FUNCTION 142f87cf0 FUN_142f87cf0 body=145 status=ok
// SIG undefined FUN_142f87cf0(void)

void FUN_142f87cf0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = hkSlot::vftable;
    puVar2[1] = *param_1 & 0xfffffffffffffffc;
    puVar2[2] = param_2;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar2;
    *puVar2 = &PTR_FUN_145a0f528;
    puVar2[3] = param_3;
    return;
  }
  return;
}



// FUNCTION 142f87d90 unsubscribe<UHavokAINavMeshNavigator::FSignalHandlers,void_(__cdecl_UHavokAINavMeshNavigator::FSignalHandlers::*)(hkaiNavigator_*,hkaiNavigatorSignals::EnteredUserEdgeInfo_const_&)> body=40 status=ok
// SIG undefined unsubscribe<UHavokAINavMeshNavigator::FSignalHandlers,void_(__cdecl_UHavokAINavMeshNavigator::FSignalHandlers::*)(hkaiNavigator_*,hkaiNavigatorSignals::EnteredUserEdgeInfo_const_&)>(void)

undefined8
hkSignal2<hkaiNavigator_*,hkaiNavigatorSignals::EnteredUserEdgeInfo_const_&>::
unsubscribe<UHavokAINavMeshNavigator::FSignalHandlers,void_(__cdecl_UHavokAINavMeshNavigator::FSignalHandlers::*)(hkaiNavigator_*,hkaiNavigatorSignals::EnteredUserEdgeInfo_const_&)>
          (undefined8 param_1,undefined8 param_2)

{
  FUN_14370e900();
  return param_2;
}



// FUNCTION 142f87dc0 FVariant body=106 status=ok
// SIG undefined FVariant(void)

undefined4 * FVariant::FVariant(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  _Src = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if (iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 2),_Src,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 142f87e30 FUN_142f87e30 body=151 status=ok
// SIG undefined FUN_142f87e30(void)

undefined8 * FUN_142f87e30(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_142f88120();
  *param_1 = &PTR_FUN_145a09370;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"SectionComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142fbe3e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  local_res8 = 0;
  param_1[0x94] = uVar3;
  FUN_142399e30(uVar3,param_1[0x2d],0);
  param_1[0x93] = param_1[0x94];
  return param_1;
}



// FUNCTION 142f87ed0 FUN_142f87ed0 body=431 status=ok
// SIG undefined FUN_142f87ed0(void)

undefined8 * FUN_142f87ed0(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  FUN_1428c1a80();
  *param_1 = &PTR_FUN_144ee25c0;
  puVar5 = (undefined8 *)FName::FName(local_res8,L"PainterComponent",1);
  uVar7 = *puVar5;
  uVar6 = UNewbieHelperWidget::GetPrivateStaticClass();
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,0,0);
  param_1[0x92] = uVar7;
  local_10 = 0x40400000;
  local_20 = 0x40400000;
  local_28 = 0x4040000040400000;
  (**(code **)(*(longlong *)param_1[0x2d] + 0x3f8))((longlong *)param_1[0x2d],&local_28);
  *(undefined1 *)(param_1[0x92] + 0x180) = 0;
  lVar2 = param_1[0x92];
  plVar9 = (longlong *)(lVar2 + 400);
  plVar3 = (longlong *)*plVar9;
  iVar1 = *(int *)(lVar2 + 0x198);
  lVar4 = *(longlong *)(param_1[0x2d] + 0x18);
  plVar8 = plVar3;
  do {
    if (plVar8 == plVar3 + iVar1) {
LAB_142f87fce:
      *(int *)(lVar2 + 0x198) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x19c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9);
      }
      *(longlong *)(*plVar9 + (longlong)iVar1 * 8) = lVar4;
LAB_142f87fe8:
      plVar3 = (longlong *)param_1[0x8e];
      if (plVar3 != (longlong *)0x0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146b44228) &&
           (_Init_thread_header(&DAT_146b44228), DAT_146b44228 == -1)) {
          FName::FName(&DAT_146b44220,L"NoCollisionQuery",1);
          _Init_thread_footer(&DAT_146b44228);
        }
        (**(code **)(*plVar3 + 0x640))(plVar3,DAT_146b44220);
      }
      return param_1;
    }
    if (*plVar8 == lVar4) {
      if ((int)((longlong)plVar8 - (longlong)plVar3 >> 3) != -1) goto LAB_142f87fe8;
      goto LAB_142f87fce;
    }
    plVar8 = plVar8 + 1;
  } while( true );
}



// FUNCTION 142f88080 FUN_142f88080 body=151 status=ok
// SIG undefined FUN_142f88080(void)

undefined8 * FUN_142f88080(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_142f88120();
  *param_1 = &PTR_FUN_145a09370;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"SectionComponent",1);
  uVar3 = *puVar1;
  uVar2 = AArchVisCharacter::StaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  local_res8 = 0;
  param_1[0x94] = uVar3;
  FUN_142399e30(uVar3,param_1[0x2d],0);
  param_1[0x93] = param_1[0x94];
  return param_1;
}



// FUNCTION 142f88120 FUN_142f88120 body=159 status=ok
// SIG undefined FUN_142f88120(void)

undefined8 * FUN_142f88120(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  FUN_142b9b820();
  *(uint *)((longlong)param_1 + 0x464) = *(uint *)((longlong)param_1 + 0x464) | 1;
  *param_1 = &PTR__scalar_deleting_destructor__145a08c50;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0xffc8c8c8;
  local_10 = 0x40a00000;
  local_20 = 0x40a00000;
  local_28 = 0x40a0000040a00000;
  (**(code **)(*(longlong *)param_1[0x2d] + 0x3f8))((longlong *)param_1[0x2d],&local_28);
  plVar1 = (longlong *)param_1[0x8e];
  if (plVar1 != (longlong *)0x0) {
    *(undefined1 *)((longlong)plVar1 + 0x24e) = 0;
    (**(code **)(*plVar1 + 0x640))(plVar1,DAT_146aefc58);
  }
  return param_1;
}



// FUNCTION 142f881c0 FUN_142f881c0 body=1665 status=ok
// SIG undefined FUN_142f881c0(void)

undefined8 * FUN_142f881c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_142b7efd0();
  *param_1 = &PTR_FUN_145a07e58;
  param_1[0x8b] = &PTR_LAB_1441d9ca8;
  param_1[0xc3] = &PTR_LAB_1441d9cc0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 199));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 199),4000);
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  *(undefined4 *)(param_1 + 0xfb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7dc) = 0;
  param_1[0xfd] = 0;
  *(undefined4 *)(param_1 + 0xfe) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Reset();
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  *(undefined4 *)(param_1 + 0x105) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x82c) = 0;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0xef,0,0xd0);
  *(undefined4 *)(param_1 + 0x109) = 100;
  *(undefined4 *)((longlong)param_1 + 0x84c) = 1000;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8ec) = 0xffffffff;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  *(undefined4 *)(param_1 + 0x129) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94c) = 0;
  param_1[299] = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  *(undefined4 *)(param_1 + 0x133) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x99c) = 0;
  param_1[0x135] = 0;
  *(undefined4 *)(param_1 + 0x136) = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x139));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x139),4000);
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa04) = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x145,0);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x146));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x146),4000);
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x154] = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  *(undefined4 *)(param_1 + 0x151) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa8c) = 0;
  param_1[0x153] = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15e] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  *(undefined4 *)(param_1 + 0x15b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xadc) = 0;
  param_1[0x15d] = 0;
  *(undefined4 *)(param_1 + 0x15e) = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x168] = 0;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  *(undefined4 *)(param_1 + 0x165) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb2c) = 0;
  param_1[0x167] = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  param_1[0x169] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  DAT_146aeebe0 = FUN_142fbac20;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd;
  puVar1 = (undefined8 *)FName::FName(local_res8,"MeshGenSettings",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142ba6d80();
  uVar3 = FUN_141789050(param_2,param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x16a] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,"VolumeGenSettings",1);
  uVar3 = *puVar1;
  uVar2 = UTwitchInteractivitySettings::GetPrivateStaticClass();
  uVar3 = FUN_141789050(param_2,param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x16b] = uVar3;
  FUN_142fa6550(param_1 + 0x11d,param_1);
  FUN_142fa6290(param_1 + 0x123,param_1);
  FUN_142fa5c30(param_1 + 0xe4,param_1);
  FUN_142fa5c30(param_1 + 0xe7,param_1);
  param_1[0x9c] = FUN_142f9c2b0;
  param_1[0x9d] = FUN_142f9b840;
  param_1[0x9e] = FUN_142fb7360;
  param_1[0x9f] = &LAB_142fb7350;
  param_1[0xa0] = AAbstractNavData::GetRandomPointInNavigableRadius;
  return param_1;
}



// FUNCTION 142f88850 FUN_142f88850 body=103 status=ok
// SIG undefined FUN_142f88850(void)

undefined8 * FUN_142f88850(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1428c1a80();
  plVar1 = param_1 + 0x96;
  *param_1 = &PTR_FUN_145a0d178;
  *plVar1 = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0x98] = param_1;
    param_1[0x97] = &DAT_146b44100;
    *plVar1 = (longlong)DAT_146b44100;
    DAT_146b44100 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 142f888c0 FUN_142f888c0 body=489 status=ok
// SIG undefined FUN_142f888c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142f888c0(undefined8 *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__145a0ee18;
  uVar8 = uRam0000000146b43f1c;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  *(uint *)((longlong)param_1 + 0x46c) = uVar8;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  uVar8 = uRam0000000146b43f14 & uRam0000000146b43f24;
  uVar9 = uRam0000000146b43f18 & uRam0000000146b43f28;
  uVar11 = uRam0000000146b43f1c & uRam0000000146b43f2c;
  *(uint *)(param_1 + 0x90) = _DAT_146b43f10 & _DAT_146b43f20;
  *(uint *)((longlong)param_1 + 0x484) = uVar8;
  *(uint *)(param_1 + 0x91) = uVar9;
  *(uint *)((longlong)param_1 + 0x48c) = uVar11;
  puVar5 = (undefined8 *)FName::FName(&local_res8,L"Root",1);
  uVar7 = *puVar5;
  uVar6 = FUN_1429ff160();
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,0,0);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  param_1[0x2d] = uVar7;
  FUN_14223c460(param_1,0);
  uVar8 = uRam0000000146b43f1c;
  uVar9 = _DAT_146b43f10 & _DAT_146b43f20;
  uVar11 = uRam0000000146b43f14 & uRam0000000146b43f24;
  uVar10 = uRam0000000146b43f18 & uRam0000000146b43f28;
  uVar12 = uRam0000000146b43f1c & uRam0000000146b43f2c;
  *(undefined4 *)(param_1 + 0x8e) = 0x43000000;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  *(uint *)((longlong)param_1 + 0x46c) = uVar8;
  *(uint *)(param_1 + 0x90) = uVar9;
  *(uint *)((longlong)param_1 + 0x484) = uVar11;
  *(uint *)(param_1 + 0x91) = uVar10;
  *(uint *)((longlong)param_1 + 0x48c) = uVar12;
  puVar5 = (undefined8 *)FName::FName(&local_res8,L"UserEdgeComp",1);
  uVar7 = *puVar5;
  uVar6 = FUN_142fc5e10();
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,0,0);
  local_res8 = 0;
  param_1[0x92] = uVar7;
  FUN_142399e30(uVar7,param_1[0x2d],0);
  uVar7 = param_1[0x8d];
  lVar1 = param_1[0x92];
  *(undefined8 *)(lVar1 + 0x700) = param_1[0x8c];
  *(undefined8 *)(lVar1 + 0x708) = uVar7;
  uVar7 = param_1[0x8f];
  *(undefined8 *)(lVar1 + 0x710) = param_1[0x8e];
  *(undefined8 *)(lVar1 + 0x718) = uVar7;
  fVar13 = *(float *)(param_1 + 0x90);
  fVar2 = *(float *)((longlong)param_1 + 0x484);
  fVar3 = *(float *)(param_1 + 0x91);
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x48c);
  *(float *)(lVar1 + 0x720) = fVar13;
  *(float *)(lVar1 + 0x724) = fVar2;
  *(float *)(lVar1 + 0x728) = fVar3;
  *(undefined4 *)(lVar1 + 0x72c) = uVar4;
  *(undefined4 *)(lVar1 + 0x720) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0x724) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0x728) = 0x3f800000;
  *(undefined4 *)(lVar1 + 0x72c) = 0;
  fVar13 = ((fVar2 - 1.0) + (fVar13 - 1.0) + (fVar3 - 1.0)) * 100.0 + *(float *)(lVar1 + 0x734);
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  *(float *)(lVar1 + 0x734) = fVar13;
  FUN_142f8ea00();
  return param_1;
}



// FUNCTION 142f88ab0 FUN_142f88ab0 body=137 status=ok
// SIG undefined FUN_142f88ab0(void)

undefined8 * FUN_142f88ab0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 6) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3fa00000;
  *(undefined4 *)(param_1 + 9) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x40a00000;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  _guard_xfg_dispatch_icall_nop(param_1,0,0x78);
  *param_1 = DAT_14676e1b0;
  *(undefined4 *)(param_1 + 1) = DAT_14676e1b8;
  return param_1;
}



// FUNCTION 142f88b40 FUN_142f88b40 body=168 status=ok
// SIG undefined FUN_142f88b40(void)

undefined8 * FUN_142f88b40(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 8) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3fa00000;
  *(undefined4 *)(param_1 + 0xb) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x40a00000;
  param_1[0xf] = 0;
  _guard_xfg_dispatch_icall_nop(param_1,0,0x88);
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0xffffffffffffffff;
  *param_1 = DAT_14676e1b0;
  *(undefined4 *)(param_1 + 1) = DAT_14676e1b8;
  return param_1;
}



// FUNCTION 142f88bf0 FUN_142f88bf0 body=147 status=ok
// SIG undefined FUN_142f88bf0(void)

void * FUN_142f88bf0(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3fa00000;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x40a00000;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  _guard_xfg_dispatch_icall_nop(param_1,0,0x88);
  *(undefined8 *)((longlong)param_1 + 0xc) = DAT_14676e1b0;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_14676e1b8;
  return param_1;
}



// FUNCTION 142f88c90 FUN_142f88c90 body=139 status=ok
// SIG undefined FUN_142f88c90(void)

undefined8 * FUN_142f88c90(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 7) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3fa00000;
  *(undefined4 *)(param_1 + 10) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x40a00000;
  param_1[0xe] = 0;
  _guard_xfg_dispatch_icall_nop(param_1,0,0x88);
  *param_1 = DAT_14676e1b0;
  *(undefined4 *)(param_1 + 1) = DAT_14676e1b8;
  return param_1;
}



// FUNCTION 142f88d20 FUN_142f88d20 body=352 status=ok
// SIG undefined FUN_142f88d20(void)

void * FUN_142f88d20(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3fa00000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x40a00000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xffffffff;
  _guard_xfg_dispatch_icall_nop(param_1,0,0xa8);
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x3f8000003dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3dcccccd3c23d70a;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x408000003fa00000;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x40a00000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = DAT_14676e1b0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = DAT_14676e1b8;
  return param_1;
}



// FUNCTION 142f88e80 FUN_142f88e80 body=163 status=ok
// SIG undefined FUN_142f88e80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142f88e80(undefined8 *param_1)

{
  *param_1 = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 1) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xc) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_1468b5d98;
  param_1[3] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 4) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x24) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x2c) = DAT_1468b5d98;
  param_1[6] = DAT_14676e1b0;
  *(undefined4 *)(param_1 + 7) = DAT_14676e1b8;
  *(undefined8 *)((longlong)param_1 + 0x3c) = DAT_14676e1b0;
  *(undefined4 *)((longlong)param_1 + 0x44) = DAT_14676e1b8;
  param_1[9] = DAT_14676e1b0;
  *(undefined4 *)(param_1 + 10) = DAT_14676e1b8;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0;
  return param_1;
}



// FUNCTION 142f88f30 FUN_142f88f30 body=55 status=ok
// SIG undefined FUN_142f88f30(void)

undefined8 * FUN_142f88f30(undefined8 *param_1)

{
  FUN_142c8c8a0();
  *param_1 = &PTR_FUN_145a086e0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x40a00000;
  *(undefined2 *)(param_1 + 6) = 0x101;
  return param_1;
}



// FUNCTION 142f88f70 FUN_142f88f70 body=91 status=ok
// SIG undefined FUN_142f88f70(void)

undefined4 * FUN_142f88f70(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint local_10;
  
  local_10 = local_10 & 0xffffff00;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  uVar3 = DAT_1468b5d98;
  uVar2 = DAT_1468b5d94;
  uVar1 = DAT_1468b5d90;
  *param_1 = DAT_1468b5d90;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar1;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uVar3,uVar2);
  param_1[6] = local_10;
  return param_1;
}



// FUNCTION 142f88fd0 FUN_142f88fd0 body=46 status=ok
// SIG undefined FUN_142f88fd0(void)

undefined8 * FUN_142f88fd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = 0xffffffffffffffff;
  if ((param_2 != 0) && ((longlong)param_2 < 0)) {
    *(int *)param_1 = (int)((param_2 & 0x7fffffffffffffff) >> 0x20);
    *(int *)((longlong)param_1 + 4) = (int)(param_2 & 0x7fffffffffffffff) + -1;
  }
  return param_1;
}



// FUNCTION 142f89080 FUN_142f89080 body=33 status=ok
// SIG undefined FUN_142f89080(void)

undefined8 * FUN_142f89080(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0xffffffffffffffff;
  if ((param_2 != 0) && (-1 < param_2)) {
    *(int *)param_1 = (int)((ulonglong)param_2 >> 0x20);
    *(int *)((longlong)param_1 + 4) = (int)param_2 + -1;
  }
  return param_1;
}



// FUNCTION 142f890b0 FUN_142f890b0 body=355 status=ok
// SIG undefined FUN_142f890b0(void)

undefined4 * FUN_142f890b0(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 5) = 0;
  FUN_14246da30(param_1 + 0x18);
  FUN_14246da30(param_1 + 0x1d);
  FUN_14246da30(param_1 + 0x22);
  FUN_14246da30(param_1 + 0x27);
  param_1[0x2c] = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x2d) = DAT_14676e1b0;
  param_1[0x2f] = DAT_14676e1b8;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0x7f7fffff;
  param_1[0x32] = 0x7f7fffff;
  param_1[0x33] = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x34) = DAT_14676e1b0;
  param_1[0x36] = DAT_14676e1b8;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0x7f7fffff;
  param_1[0x39] = 0x7f7fffff;
  param_1[0x3a] = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x3b) = DAT_14676e1b0;
  param_1[0x3d] = DAT_14676e1b8;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0x7f7fffff;
  param_1[0x40] = 0x7f7fffff;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 0x3dcccccd;
  param_1[2] = 0x40000000;
  param_1[4] = 0x3e800000;
  param_1[7] = 0x41b40000;
  FUN_142c4aa90(param_1 + 5,0x42c80000,0x43fa0000);
  param_1[8] = 0x42000000;
  param_1[0x14] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  FUN_142f96e50(param_1);
  return param_1;
}



// FUNCTION 142f89220 FUN_142f89220 body=259 status=ok
// SIG undefined FUN_142f89220(void)

undefined1 * FUN_142f89220(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = DAT_14676e1b0;
  *(undefined4 *)(param_1 + 0x18) = DAT_14676e1b8;
  param_1[0x1d] = 0;
  FUN_142f89390(param_1 + 0x20);
  FUN_142c62620(param_1 + 0x50);
  param_1[0x68] = *param_2;
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x24);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0x48);
  param_1[0xb8] = param_2[0x50];
  param_1[0xb9] = param_2[0x51];
  param_1[0xba] = param_2[0x52];
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0x54);
  param_1[0xc0] = param_2[0x58];
  param_1[0xc1] = param_2[0x59];
  param_1[0xc2] = param_2[0x5a];
  return param_1;
}



// FUNCTION 142f89330 FUN_142f89330 body=82 status=ok
// SIG undefined FUN_142f89330(void)

undefined1 * FUN_142f89330(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = DAT_14676e1b0;
  *(undefined4 *)(param_1 + 0x18) = DAT_14676e1b8;
  param_1[0x1d] = 0;
  FUN_142f89390(param_1 + 0x20);
  FUN_142c62620(param_1 + 0x50);
  FUN_142f89530(param_1 + 0x68);
  return param_1;
}



// FUNCTION 142f89390 FUN_142f89390 body=132 status=ok
// SIG undefined FUN_142f89390(void)

undefined8 * FUN_142f89390(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0xffffffffffffffff;
  FUN_142c62620((longlong)param_1 + 0x1c);
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0xffffffffffffffff;
  puVar2 = (undefined8 *)FUN_142c62620(local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)((longlong)param_1 + 0x1c) = *puVar2;
  *(undefined8 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(puVar2 + 2);
  *param_1 = DAT_14676e1b0;
  *(undefined4 *)(param_1 + 1) = DAT_14676e1b8;
  return param_1;
}



// FUNCTION 142f89420 FUN_142f89420 body=71 status=ok
// SIG undefined FUN_142f89420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_142f89420(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0x10001;
  *(undefined2 *)(param_1 + 0x20) = 0x100;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xc) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x10) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x18) = DAT_1468b5d98;
  return param_1;
}



// FUNCTION 142f89470 FUN_142f89470 body=53 status=ok
// SIG undefined FUN_142f89470(void)

undefined1 * FUN_142f89470(undefined1 *param_1,undefined8 *param_2)

{
  FUN_142f89530();
  *(undefined8 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 1);
  *param_1 = 0;
  return param_1;
}



// FUNCTION 142f894b0 FUN_142f894b0 body=50 status=ok
// SIG undefined FUN_142f894b0(void)

undefined1 * FUN_142f894b0(undefined1 *param_1,undefined8 param_2)

{
  FUN_142f89530();
  FWeakObjectPtr::operator=(param_1 + 0x10,param_2);
  *param_1 = 1;
  return param_1;
}



// FUNCTION 142f894f0 FUN_142f894f0 body=50 status=ok
// SIG undefined FUN_142f894f0(void)

undefined1 * FUN_142f894f0(undefined1 *param_1,undefined8 param_2)

{
  FUN_142f89530();
  FWeakObjectPtr::operator=(param_1 + 0x18,param_2);
  *param_1 = 2;
  return param_1;
}



// FUNCTION 142f89530 FUN_142f89530 body=242 status=ok
// SIG undefined FUN_142f89530(void)

void * FUN_142f89530(void *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_38;
  undefined6 uStack_16;
  
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x10001;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  *(ulonglong *)((longlong)param_1 + 0x2c) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  *(undefined4 *)((longlong)param_1 + 0x34) = DAT_1468b5d98;
  *(ulonglong *)((longlong)param_1 + 0x38) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  *(undefined4 *)((longlong)param_1 + 0x40) = DAT_1468b5d98;
  _guard_xfg_dispatch_icall_nop(param_1,0,0x5c);
  uVar4 = DAT_1468b5d98;
  uVar3 = DAT_1468b5d94;
  uVar2 = DAT_1468b5d90;
  local_38 = CONCAT31(local_38._1_3_,1);
  uVar1 = CONCAT44(DAT_1468b5d98,DAT_1468b5d94);
  *(ulonglong *)((longlong)param_1 + 0x28) = CONCAT44(DAT_1468b5d90,local_38);
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x40) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x10001;
  *(ulonglong *)((longlong)param_1 + 0x48) = CONCAT62(uStack_16,0x100) & 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 4) = DAT_14676e1b0;
  *(undefined4 *)((longlong)param_1 + 0xc) = DAT_14676e1b8;
  *(undefined2 *)((longlong)param_1 + 0x51) = 0x101;
  return param_1;
}



// FUNCTION 142f89630 FUN_142f89630 body=96 status=ok
// SIG undefined FUN_142f89630(void)

void * FUN_142f89630(void *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x68);
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xff7fffff;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xff7fffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x41c80000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x41c80000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0xbf800000;
  return param_1;
}



// FUNCTION 142f89690 FUN_142f89690 body=186 status=ok
// SIG undefined FUN_142f89690(void)

void * FUN_142f89690(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Reset();
  _guard_xfg_dispatch_icall_nop(param_1,0,0x90);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xffffffffffffffff;
  if (*(longlong *)((longlong)param_1 + 0x80) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)((longlong)param_1 + 0x80) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  return param_1;
}



// FUNCTION 142f89750 FUN_142f89750 body=147 status=ok
// SIG undefined FUN_142f89750(void)

void * FUN_142f89750(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Reset();
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  _guard_xfg_dispatch_icall_nop(param_1,0,0xd0);
  return param_1;
}



// FUNCTION 142f897f0 FUN_142f897f0 body=111 status=ok
// SIG undefined FUN_142f897f0(void)

undefined8 * FUN_142f897f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  puVar2 = param_1 + 5;
  *(undefined2 *)((longlong)param_1 + 0x12) = 1;
  param_1[4] = 1;
  *(undefined4 *)(param_1 + 0x15) = 1;
  *param_1 = &PTR_FUN_145a0e3a8;
  param_1[3] = 0;
  param_1[0x16] = param_2;
  lVar1 = 0x20;
  if (param_1 + 0x15 < puVar2) {
    lVar1 = 0;
  }
  param_1[0x17] = param_3;
  if (puVar2 <= param_1 + 0x15) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined4 *)puVar2 = 0;
      puVar2 = (undefined8 *)((longlong)puVar2 + 4);
    }
  }
  return param_1;
}



// FUNCTION 142f89860 FUN_142f89860 body=462 status=ok
// SIG undefined FUN_142f89860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_142f89860(undefined4 *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 1) = DAT_14676e1b0;
  param_1[3] = DAT_14676e1b8;
  *(undefined8 *)(param_1 + 4) = DAT_14676e1b0;
  param_1[6] = DAT_14676e1b8;
  if (((param_3 != 0) && (lVar2 = *(longlong *)(param_3 + 0x8f8), lVar2 != 0)) &&
     (lVar3 = *(longlong *)(lVar2 + 0x130), lVar3 != 0)) {
    iVar1 = *(int *)(param_2 + 0x60);
    if (((-1 < iVar1) && (iVar1 < *(int *)(lVar3 + 0x40))) &&
       (*(longlong *)((longlong)iVar1 * 0x100 + *(longlong *)(lVar3 + 0x38)) != 0)) {
      iVar1 = *(int *)(param_2 + 100);
      if (((-1 < iVar1) && (iVar1 < *(int *)(lVar3 + 0x40))) &&
         (lVar3 = *(longlong *)((longlong)iVar1 * 0x100 + *(longlong *)(lVar3 + 0x38)), lVar3 != 0))
      {
        if (0 < (int)(*(longlong *)(param_2 + 0x70) - (longlong)*(undefined4 **)(param_2 + 0x68) >>
                     2)) {
          *param_1 = **(undefined4 **)(param_2 + 0x68);
        }
        FUN_143845910(param_2,lVar2,&local_68);
        param_1[1] = local_68;
        param_1[2] = uStack_64;
        param_1[3] = uStack_60;
        param_1[1] = (float)param_1[1] * 100.0;
        param_1[3] = (float)param_1[3] * 100.0;
        param_1[2] = (float)param_1[2] * 100.0;
        FUN_143845940(param_2,lVar2,local_58);
        FUN_143713830(&local_48,lVar3 + 0x40,local_58);
        param_1[4] = local_48;
        param_1[5] = uStack_44;
        param_1[6] = uStack_40;
        param_1[4] = (float)param_1[4] * 100.0;
        param_1[5] = (float)param_1[5] * 100.0;
        param_1[6] = (float)param_1[6] * 100.0;
      }
    }
  }
  return param_1;
}



// FUNCTION 142f89a30 FUN_142f89a30 body=144 status=ok
// SIG undefined FUN_142f89a30(void)

undefined8 * FUN_142f89a30(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 6) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3fa00000;
  *(undefined4 *)(param_1 + 9) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x40a00000;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  _guard_xfg_dispatch_icall_nop(param_1,0,0x78);
  *param_1 = DAT_14676e1b0;
  *(undefined4 *)(param_1 + 1) = DAT_14676e1b8;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xbf800000;
  return param_1;
}



// FUNCTION 142f89ac0 FUN_142f89ac0 body=252 status=ok
// SIG undefined FUN_142f89ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142f89ac0(undefined8 *param_1)

{
  FUN_14243e810();
  *param_1 = &PTR_FUN_145a06558;
  param_1[5] = &PTR_LAB_145a06b08;
  param_1[0x46] = &PTR_LAB_145a06b38;
  param_1[0x47] = &PTR_LAB_145a06b50;
  *(undefined4 *)(param_1 + 0x48) = 0x43b40000;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0x43b40000;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x4b);
  *(undefined4 *)((longlong)param_1 + 0x264) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x4d) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0x457a0000;
  *(undefined4 *)(param_1 + 0x4e) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x4f) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0x41f00000;
  param_1[0x55] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x56) = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  FUN_14246fd50(param_1 + 0x4b,0x3f800000);
  FUN_142350b20(param_1,1);
  return param_1;
}



// FUNCTION 142f89bc0 FUN_142f89bc0 body=67 status=ok
// SIG undefined FUN_142f89bc0(void)

undefined8 * FUN_142f89bc0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_1422a21a0(param_1,uVar1);
  *param_1 = &PTR_FUN_145a08998;
  FUN_142c62230(param_1 + 9);
  *(undefined4 *)(param_1 + 0xf) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xff7fffff;
  return param_1;
}



// FUNCTION 142f89c10 FUN_142f89c10 body=62 status=ok
// SIG undefined FUN_142f89c10(void)

undefined8 * FUN_142f89c10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar1);
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_145a086f0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x42c80000;
  *(undefined4 *)(param_1 + 10) = 0x42c80000;
  return param_1;
}



// FUNCTION 142f89c50 FUN_142f89c50 body=219 status=ok
// SIG undefined FUN_142f89c50(void)

undefined8 * FUN_142f89c50(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_142327780();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_145a09a90;
  param_1[5] = &PTR_LAB_14420eb00;
  param_1[0x5a] = &PTR_LAB_14420eb30;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146b441d0) {
    _Init_thread_header(&DAT_146b441d0);
    if (DAT_146b441d0 == -1) {
      FName::FName(&DAT_146b441c8,L"DestructibleCover",1);
      _Init_thread_footer(&DAT_146b441d0);
    }
  }
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 4;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  FUN_1423974f0(param_1,0);
  FUN_142717130(param_1,DAT_146b441c8);
  *(undefined4 *)(param_1 + 0x89) = 3;
  *(undefined1 *)(param_1 + 0x8c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x451) = 1;
  return param_1;
}



// FUNCTION 142f89d30 FUN_142f89d30 body=434 status=ok
// SIG undefined FUN_142f89d30(void)

undefined8 * FUN_142f89d30(undefined8 *param_1)

{
  FUN_142cdd850();
  *param_1 = &PTR_FUN_145a06ba8;
  param_1[5] = &PTR_LAB_145a07858;
  param_1[0x42] = &PTR_LAB_145a07888;
  param_1[0x43] = &PTR_LAB_145a078f8;
  *(undefined1 *)(param_1 + 0x4cf) = 0;
  param_1[0x4e0] = 0;
  param_1[0x4e1] = 0;
  param_1[0x4e2] = 0;
  param_1[0x4e3] = 0;
  param_1[0x4e4] = 0;
  *(undefined2 *)(param_1 + 0x4e5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x272c) = 0x43fa0000;
  *(undefined1 *)(param_1 + 0x4e6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2734) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4e7) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x273c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4e9) = 0x437a0000;
  *(undefined4 *)((longlong)param_1 + 0x274c) = 0x101;
  *(undefined4 *)(param_1 + 0x4ea) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x2754) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4eb) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x275c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x4ec) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2764) = 0x42c80000;
  param_1[0x4ed] = 0x3f000000;
  *(undefined4 *)(param_1 + 0x4ee) = 0x3fa00000;
  *(undefined4 *)((longlong)param_1 + 0x2774) = 0x40800000;
  *(undefined4 *)(param_1 + 0x4ef) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x277c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4f0) = 0x40a00000;
  *(undefined1 *)((longlong)param_1 + 0x2784) = 0;
  *(undefined1 *)((longlong)param_1 + 0x278c) = 1;
  *(undefined4 *)(param_1 + 0x4f2) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x4f4) = 1;
  *(undefined4 *)((longlong)param_1 + 0x27a4) = 0x3f800000;
  FUN_142f88d20(param_1 + 0x4f7);
  param_1[0x50c] = 0;
  param_1[0x50d] = 0;
  *(undefined4 *)(param_1 + 0x510) = 0x45000000;
  *(undefined4 *)(param_1 + 0x4f2) = 0x3e800000;
  *(undefined1 *)((longlong)param_1 + 0x278c) = 1;
  *(undefined4 *)(param_1 + 0x4f3) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 0x2794) = 0x42c80000;
  return param_1;
}



// FUNCTION 142f89ef0 FUN_142f89ef0 body=1677 status=ok
// SIG undefined FUN_142f89ef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142f89ef0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_142326e40();
  *param_1 = &PTR_FUN_145a07950;
  param_1[5] = &PTR_LAB_145a07e28;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 2;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 2;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 2;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 2;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  FUN_142f89530(param_1 + 0x52);
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0xffffffff;
  FUN_142f88e80(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x40000000;
  FTextSnapshot::FTextSnapshot((longlong)param_1 + 0x374);
  *(undefined1 *)(param_1 + 0x72) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x43c) = DAT_1468b5d98;
  param_1[0x88] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x89) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x9d) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9e) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0x3fa00000;
  *(undefined4 *)(param_1 + 0xa0) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x504) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa1) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0x40a00000;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x86,0,0xf8);
  *(undefined8 *)((longlong)param_1 + 0x45c) = DAT_14676e1b0;
  *(undefined4 *)((longlong)param_1 + 0x464) = DAT_14676e1b8;
  param_1[0x8d] = DAT_14676e1b0;
  *(undefined4 *)(param_1 + 0x8e) = DAT_14676e1b8;
  param_1[0x90] = DAT_14676e1b0;
  *(undefined4 *)(param_1 + 0x91) = DAT_14676e1b8;
  *(undefined8 *)((longlong)param_1 + 0x53c) = 0;
  FUN_14246da30(param_1 + 0xb1);
  FUN_14246da30((longlong)param_1 + 0x59c);
  FUN_14246da30(param_1 + 0xb6);
  FUN_14246da30((longlong)param_1 + 0x5c4);
  *(undefined4 *)(param_1 + 0xbb) = 0x7f7fffff;
  *(undefined8 *)((longlong)param_1 + 0x5dc) = DAT_14676e1b0;
  *(undefined4 *)((longlong)param_1 + 0x5e4) = DAT_14676e1b8;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5ec) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0xbe) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x5f4) = 0x7f7fffff;
  param_1[0xbf] = DAT_14676e1b0;
  *(undefined4 *)(param_1 + 0xc0) = DAT_14676e1b8;
  *(undefined1 *)((longlong)param_1 + 0x604) = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x60c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0xc2) = 0x7f7fffff;
  *(undefined8 *)((longlong)param_1 + 0x614) = DAT_14676e1b0;
  *(undefined4 *)((longlong)param_1 + 0x61c) = DAT_14676e1b8;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x624) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0xc5) = 0x7f7fffff;
  *(undefined1 *)((longlong)param_1 + 0x52c) = 1;
  *(undefined4 *)(param_1 + 0xa5) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xa6) = 0x40000000;
  *(undefined4 *)(param_1 + 0xa7) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0x41b40000;
  FUN_142c4aa90((longlong)param_1 + 0x53c,0x42c80000,0x43fa0000);
  *(undefined4 *)(param_1 + 0xa9) = 0x42000000;
  *(undefined4 *)(param_1 + 0xaf) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0x3f800000;
  FUN_142f96e50(param_1 + 0xa5);
  _guard_xfg_dispatch_icall_nop(param_1 + 0xca,0,0x68);
  *(undefined4 *)((longlong)param_1 + 0x68c) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0xd2) = 0xff7fffff;
  *(undefined4 *)((longlong)param_1 + 0x694) = 0x41c80000;
  *(undefined4 *)(param_1 + 0xd3) = 0x41c80000;
  *(undefined4 *)((longlong)param_1 + 0x69c) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x6a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd5) = 0x40000000;
  *(undefined1 *)(param_1 + 0xd4) = 1;
  *(undefined4 *)((longlong)param_1 + 0x6ac) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xd6) = 0xbf800000;
  FUN_142f88d20(param_1 + 0xdd);
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 2;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 2;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  FBasedPosition::FBasedPosition(param_1 + 0xfa);
  FBasedPosition::FBasedPosition(param_1 + 0x101);
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  *(uint *)(param_1 + 299) = *(uint *)(param_1 + 299) & 0xffffffe0;
  *(undefined4 *)((longlong)param_1 + 0x95c) = 0xbf800000;
  *(undefined4 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x964) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x12d) = 0x3f000000;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x136] = 0xffffffffffffffff;
  param_1[0x137] = 0xffffffffffffffff;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  *(undefined2 *)(param_1 + 0x135) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9ac) = 0x7f7fffff;
  param_1[0x13f] = 0xffffffffffffffff;
  param_1[0x140] = 0xffffffffffffffff;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  *(undefined4 *)(param_1 + 0x149) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4c) = 0;
  param_1[0x14b] = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x142) = 0;
  TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Reset();
  param_1[0x14d] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x13d,0,0x90);
  param_1[0x13f] = 0xffffffffffffffff;
  param_1[0x140] = 0xffffffffffffffff;
  lVar3 = param_1[0x14d];
  param_1[0x14d] = 0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  *(undefined2 *)(param_1 + 0x152) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa94) = 0x43fa0000;
  *(undefined1 *)(param_1 + 0x153) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x154) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xaa4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x156) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0xab4) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x157) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xabc) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x158) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xac4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x159) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0xacc) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0xad4) = 0x3fa00000;
  *(undefined4 *)(param_1 + 0x15b) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0xadc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x15c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xae4) = 0x40a00000;
  *(undefined1 *)(param_1 + 0x15d) = 0;
  *(undefined4 *)(param_1 + 0x5f) = 1;
  return param_1;
}



// FUNCTION 142f8a580 FUN_142f8a580 body=203 status=ok
// SIG undefined FUN_142f8a580(void)

undefined8 * FUN_142f8a580(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  FUN_142f8a820();
  plVar1 = param_1 + 0xf0;
  *param_1 = &PTR_FUN_145a0afc0;
  param_1[5] = &PTR_LAB_145a0b900;
  param_1[0x5a] = &PTR_LAB_145a0b930;
  *plVar1 = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  *(undefined2 *)((longlong)param_1 + 0x771) = 1;
  *(undefined4 *)((longlong)param_1 + 0x774) = 0x461c4000;
  *(undefined4 *)(param_1 + 0xef) = 0x461c4000;
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 == '\0') {
    param_1[0xf2] = param_1;
    param_1[0xf1] = &DAT_146b44030;
    *plVar1 = (longlong)DAT_146b44030;
    DAT_146b44030 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 142f8a650 FUN_142f8a650 body=297 status=ok
// SIG undefined FUN_142f8a650(void)

undefined8 * FUN_142f8a650(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint local_10;
  
  FUN_142326e40();
  plVar1 = param_1 + 0x3c;
  local_10 = local_10 & 0xffffff00;
  *param_1 = &PTR_FUN_145a0cd50;
  param_1[5] = &PTR_LAB_145a0d148;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *plVar1 = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  *(undefined1 *)((longlong)param_1 + 0x179) = 1;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x41c80000;
  *(undefined4 *)(param_1 + 0x34) = DAT_14676e178;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = DAT_14676e178;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  uVar4 = DAT_1468b5d98;
  uVar3 = DAT_1468b5d94;
  uVar2 = DAT_1468b5d90;
  *(undefined1 *)(param_1 + 0x30) = 2;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  *(undefined4 *)(param_1 + 0x39) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar2;
  param_1[0x3a] = CONCAT44(uVar4,uVar3);
  *(uint *)(param_1 + 0x3b) = local_10;
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0x3e] = param_1;
    param_1[0x3d] = &DAT_146b440a8;
    *plVar1 = (longlong)DAT_146b440a8;
    DAT_146b440a8 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 142f8a780 FUN_142f8a780 body=160 status=ok
// SIG undefined FUN_142f8a780(void)

undefined8 * FUN_142f8a780(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  FUN_142f8a820();
  plVar1 = param_1 + 0xef;
  *param_1 = &PTR_FUN_145a0b9a0;
  param_1[5] = &PTR_LAB_145a0c2e0;
  param_1[0x5a] = &PTR_LAB_145a0c310;
  *plVar1 = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 == '\0') {
    param_1[0xf1] = param_1;
    param_1[0xf0] = &DAT_146b440c0;
    *plVar1 = (longlong)DAT_146b440c0;
    DAT_146b440c0 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 142f8a820 FUN_142f8a820 body=253 status=ok
// SIG undefined FUN_142f8a820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142f8a820(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_14237eb90();
  plVar1 = param_1 + 0xe2;
  *param_1 = &PTR_FUN_145a0a5f8;
  param_1[5] = &PTR_LAB_145a0af38;
  param_1[0x5a] = &PTR_LAB_145a0af68;
  *(undefined8 *)((longlong)param_1 + 0x6f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6fc) = 0;
  *plVar1 = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  uVar3 = uRam0000000146b43f1c;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0;
  *(uint *)((longlong)param_1 + 0x73c) = uVar3;
  uVar3 = uRam0000000146b43f14 & uRam0000000146b43f24;
  uVar4 = uRam0000000146b43f18 & uRam0000000146b43f28;
  uVar5 = uRam0000000146b43f1c & uRam0000000146b43f2c;
  *(uint *)(param_1 + 0xea) = _DAT_146b43f10 & _DAT_146b43f20;
  *(uint *)((longlong)param_1 + 0x754) = uVar3;
  *(uint *)(param_1 + 0xeb) = uVar4;
  *(uint *)((longlong)param_1 + 0x75c) = uVar5;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0xfd;
  *(undefined4 *)(param_1 + 0xde) = DAT_14676e174;
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 == '\0') {
    param_1[0xe4] = param_1;
    param_1[0xe3] = &DAT_146b440d8;
    *plVar1 = (longlong)DAT_146b440d8;
    DAT_146b440d8 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) & 0xef | 8;
  return param_1;
}



// FUNCTION 142f8a920 FUN_142f8a920 body=143 status=ok
// SIG undefined FUN_142f8a920(void)

undefined8 * FUN_142f8a920(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_142b82820();
  puVar1 = param_1 + 0x85;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR_FUN_145a0d898;
  *puVar1 = &PTR_LAB_145a0dbf0;
  FUN_142b88ac0();
  DAT_146687975 = 0;
  return param_1;
}



// FUNCTION 142f8a9b0 FUN_142f8a9b0 body=321 status=ok
// SIG undefined FUN_142f8a9b0(void)

undefined8 * FUN_142f8a9b0(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR__scalar_deleting_destructor__145a0dc38;
  param_1[5] = &PTR_LAB_145a0e030;
  param_1[0x32] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x39) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3a) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x3fa00000;
  *(undefined4 *)(param_1 + 0x3c) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x40a00000;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0xffffffffffffffff;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined4 *)(param_1 + 0xe) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x31) = 0x42960000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x43480000;
  *(undefined4 *)(param_1 + 0x33) = 5;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x41200000;
  FUN_142c4aa90(param_1 + 0x32,0x42c80000,0x44fa0000);
  return param_1;
}



// FUNCTION 142f8ab00 FUN_142f8ab00 body=52 status=ok
// SIG undefined FUN_142f8ab00(void)

undefined8 * FUN_142f8ab00(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *param_1 = &PTR__scalar_deleting_destructor__1457d0588;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 7) = DAT_1464aa730;
  return param_1;
}



// FUNCTION 142f8ab40 FUN_142f8ab40 body=33 status=ok
// SIG undefined FUN_142f8ab40(void)

undefined8 * FUN_142f8ab40(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *param_1 = &PTR_FUN_143fca7c0;
  return param_1;
}



// FUNCTION 142f8ab70 FUN_142f8ab70 body=112 status=ok
// SIG undefined FUN_142f8ab70(void)

undefined8 * FUN_142f8ab70(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145a0e108;
  param_1[6] = 0x42c8000042c80000;
  *(undefined4 *)(param_1 + 7) = 0x42c80000;
  param_1[8] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 5) = 0x42480000;
  return param_1;
}



// FUNCTION 142f8abe0 FUN_142f8abe0 body=199 status=ok
// SIG undefined FUN_142f8abe0(void)

undefined8 * FUN_142f8abe0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14237eb90();
  *param_1 = &PTR__scalar_deleting_destructor__145a0e448;
  param_1[5] = &PTR_LAB_145a0ed30;
  param_1[0x5a] = &PTR_LAB_145a0ed60;
  *(undefined1 *)(param_1 + 0xde) = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 0x40;
  FUN_1423974f0(param_1,0);
  FUN_142717130(param_1,DAT_146aefc58);
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Obstacle",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142fc2900();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xf1] = uVar3;
  return param_1;
}



// FUNCTION 142f8acb0 FUN_142f8acb0 body=61 status=ok
// SIG undefined FUN_142f8acb0(void)

undefined8 * FUN_142f8acb0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145a0a380;
  *(undefined4 *)(param_1 + 5) = DAT_14676e174;
  *(undefined4 *)((longlong)param_1 + 0x2c) = DAT_14676e174;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 142f8acf0 FUN_142f8acf0 body=466 status=ok
// SIG undefined FUN_142f8acf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142f8acf0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_10;
  
  FUN_14237eb90();
  uVar11 = uRam0000000146b43f2c;
  uVar9 = uRam0000000146b43f28;
  uVar7 = uRam0000000146b43f24;
  uVar5 = _DAT_146b43f20;
  *param_1 = &PTR_FUN_145a0c3c0;
  plVar1 = param_1 + 0xf9;
  local_10 = local_10 & 0xffffff00;
  param_1[5] = &PTR_LAB_145a0cca8;
  param_1[0x5a] = &PTR_LAB_145a0ccd8;
  param_1[0xde] = &PTR_LAB_145a0cd30;
  uVar6 = uRam0000000146b43f1c;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x704) = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  *(uint *)((longlong)param_1 + 0x70c) = uVar6;
  uVar6 = uRam0000000146b43f14 & uVar7;
  uVar8 = uRam0000000146b43f18 & uVar9;
  uVar10 = uRam0000000146b43f1c & uVar11;
  *(uint *)(param_1 + 0xe4) = _DAT_146b43f10 & uVar5;
  *(uint *)((longlong)param_1 + 0x724) = uVar6;
  *(uint *)(param_1 + 0xe5) = uVar8;
  *(uint *)((longlong)param_1 + 0x72c) = uVar10;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  uVar6 = uRam0000000146b43f1c;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  *(undefined4 *)(param_1 + 0xee) = 0;
  *(undefined4 *)((longlong)param_1 + 0x774) = 0;
  *(undefined4 *)(param_1 + 0xef) = 0;
  *(uint *)((longlong)param_1 + 0x77c) = uVar6;
  uVar6 = uRam0000000146b43f14 & uVar7;
  uVar8 = uRam0000000146b43f18 & uVar9;
  uVar10 = uRam0000000146b43f1c & uVar11;
  *(uint *)(param_1 + 0xf2) = _DAT_146b43f10 & uVar5;
  *(uint *)((longlong)param_1 + 0x794) = uVar6;
  *(uint *)(param_1 + 0xf3) = uVar8;
  *(uint *)((longlong)param_1 + 0x79c) = uVar10;
  *plVar1 = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) & 0xef | 8;
  uVar4 = DAT_1468b5d98;
  uVar3 = DAT_1468b5d94;
  uVar2 = DAT_1468b5d90;
  *(undefined1 *)(param_1 + 0xdf) = 1;
  *(undefined4 *)((longlong)param_1 + 0x7ac) = uVar2;
  *(undefined4 *)(param_1 + 0xf6) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x7b4) = uVar4;
  *(undefined4 *)(param_1 + 0xf7) = uVar2;
  *(ulonglong *)((longlong)param_1 + 0x7bc) = CONCAT44(uVar4,uVar3);
  *(uint *)((longlong)param_1 + 0x7c4) = local_10;
  uVar6 = uRam0000000146b43f1c;
  uVar7 = uRam0000000146b43f14 & uVar7;
  uVar9 = uRam0000000146b43f18 & uVar9;
  uVar11 = uRam0000000146b43f1c & uVar11;
  *(uint *)(param_1 + 0xe4) = _DAT_146b43f10 & uVar5;
  *(uint *)((longlong)param_1 + 0x724) = uVar7;
  *(uint *)(param_1 + 0xe5) = uVar9;
  *(uint *)((longlong)param_1 + 0x72c) = uVar11;
  param_1[0xe2] = 0x43000000;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x704) = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  *(uint *)((longlong)param_1 + 0x70c) = uVar6;
  *(undefined4 *)(param_1 + 0xe6) = 0x42800000;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0x42800000;
  *(undefined1 *)(param_1 + 0xe7) = 3;
  *(undefined4 *)(param_1 + 0xe9) = 0x44fa0000;
  *(undefined4 *)(param_1 + 0xf5) = DAT_14676e170;
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0xfb] = param_1;
    param_1[0xfa] = &DAT_146b44170;
    *plVar1 = (longlong)DAT_146b44170;
    DAT_146b44170 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 142f8aed0 FUN_142f8aed0 body=94 status=ok
// SIG undefined FUN_142f8aed0(void)

undefined8 * FUN_142f8aed0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_14237eb90(param_1,uVar1);
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0xfd;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x20;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *param_1 = &PTR__scalar_deleting_destructor__144280528;
  param_1[5] = &PTR_LAB_144280e10;
  param_1[0x5a] = &PTR_LAB_144280e40;
  return param_1;
}



// FUNCTION 142f8af30 FUN_142f8af30 body=1250 status=ok
// SIG undefined FUN_142f8af30(void)

undefined8 * FUN_142f8af30(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong local_res10;
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiDirectedGraphInstanceData::vftable;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  lVar11 = *(longlong *)(param_2 + 0x68);
  param_1[0xd] = lVar11;
  if (lVar11 != 0) {
    FUN_14370c030();
  }
  puVar7 = (undefined8 *)0x0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  iVar2 = *(int *)(param_2 + 0x78);
  lVar11 = (longlong)iVar2;
  local_res10 = CONCAT44(local_res10._4_4_,iVar2);
  uVar5 = FUN_143703a50();
  iVar4 = (int)local_res10;
  if ((int)local_res10 == 0) {
    iVar15 = 0;
    puVar6 = puVar7;
  }
  else {
    puVar6 = (undefined8 *)FUN_143702d60(uVar5,4,&local_res10);
    iVar15 = (int)local_res10;
  }
  param_1[0xe] = puVar6;
  *(int *)(param_1 + 0xf) = iVar4;
  iVar4 = -0x80000000;
  if (iVar15 != 0) {
    iVar4 = iVar15;
  }
  *(int *)((longlong)param_1 + 0x7c) = iVar4;
  if (0 < iVar2) {
    lVar13 = *(longlong *)(param_2 + 0x70) - (longlong)puVar6;
    do {
      *(undefined4 *)puVar6 = *(undefined4 *)(lVar13 + (longlong)puVar6);
      puVar6 = (undefined8 *)((longlong)puVar6 + 4);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  iVar2 = *(int *)(param_2 + 0x88);
  lVar11 = (longlong)iVar2;
  local_res10 = CONCAT44(local_res10._4_4_,iVar2);
  uVar5 = FUN_143703a50();
  iVar4 = (int)local_res10;
  if ((int)local_res10 == 0) {
    iVar15 = 0;
    puVar6 = puVar7;
  }
  else {
    puVar6 = (undefined8 *)FUN_143702d60(uVar5,8,&local_res10);
    iVar15 = (int)local_res10;
  }
  param_1[0x10] = puVar6;
  *(int *)(param_1 + 0x11) = iVar4;
  iVar4 = -0x80000000;
  if (iVar15 != 0) {
    iVar4 = iVar15;
  }
  *(int *)((longlong)param_1 + 0x8c) = iVar4;
  if (0 < iVar2) {
    lVar13 = *(longlong *)(param_2 + 0x80) - (longlong)puVar6;
    do {
      *puVar6 = *(undefined8 *)(lVar13 + (longlong)puVar6);
      puVar6 = puVar6 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  iVar2 = *(int *)(param_2 + 0x98);
  lVar11 = (longlong)iVar2;
  local_res10 = CONCAT44(local_res10._4_4_,iVar2);
  uVar5 = FUN_143703a50();
  iVar4 = (int)local_res10;
  if ((int)local_res10 == 0) {
    iVar15 = 0;
    puVar6 = puVar7;
  }
  else {
    puVar6 = (undefined8 *)FUN_143702d60(uVar5,8,&local_res10);
    iVar15 = (int)local_res10;
  }
  param_1[0x12] = puVar6;
  *(int *)(param_1 + 0x13) = iVar4;
  iVar4 = -0x80000000;
  if (iVar15 != 0) {
    iVar4 = iVar15;
  }
  *(int *)((longlong)param_1 + 0x9c) = iVar4;
  if (0 < iVar2) {
    puVar9 = (undefined2 *)((longlong)puVar6 + 2);
    lVar13 = *(longlong *)(param_2 + 0x90) - (longlong)puVar6;
    do {
      puVar9[-1] = *(undefined2 *)(lVar13 + -2 + (longlong)puVar9);
      *puVar9 = *(undefined2 *)(lVar13 + (longlong)puVar9);
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(lVar13 + 2 + (longlong)puVar9);
      puVar9 = puVar9 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  iVar2 = *(int *)(param_2 + 0xa8);
  lVar11 = (longlong)iVar2;
  local_res10 = CONCAT44(local_res10._4_4_,iVar2);
  uVar5 = FUN_143703a50();
  iVar4 = (int)local_res10;
  if ((int)local_res10 == 0) {
    iVar15 = 0;
    puVar6 = puVar7;
  }
  else {
    puVar6 = (undefined8 *)FUN_143702d60(uVar5,4,&local_res10);
    iVar15 = (int)local_res10;
  }
  param_1[0x14] = puVar6;
  *(int *)(param_1 + 0x15) = iVar4;
  iVar4 = -0x80000000;
  if (iVar15 != 0) {
    iVar4 = iVar15;
  }
  *(int *)((longlong)param_1 + 0xac) = iVar4;
  if (0 < iVar2) {
    lVar13 = *(longlong *)(param_2 + 0xa0) - (longlong)puVar6;
    do {
      *(undefined4 *)puVar6 = *(undefined4 *)(lVar13 + (longlong)puVar6);
      puVar6 = (undefined8 *)((longlong)puVar6 + 4);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  iVar2 = *(int *)(param_2 + 0xb8);
  lVar11 = (longlong)iVar2;
  local_res10 = CONCAT44(local_res10._4_4_,iVar2);
  uVar5 = FUN_143703a50();
  iVar4 = (int)local_res10;
  if ((int)local_res10 == 0) {
    iVar15 = 0;
    puVar6 = puVar7;
  }
  else {
    puVar6 = (undefined8 *)FUN_143702d60(uVar5,4,&local_res10);
    iVar15 = (int)local_res10;
  }
  param_1[0x16] = puVar6;
  *(int *)(param_1 + 0x17) = iVar4;
  iVar4 = -0x80000000;
  if (iVar15 != 0) {
    iVar4 = iVar15;
  }
  *(int *)((longlong)param_1 + 0xbc) = iVar4;
  if (0 < iVar2) {
    lVar13 = *(longlong *)(param_2 + 0xb0) - (longlong)puVar6;
    do {
      *(undefined4 *)puVar6 = *(undefined4 *)(lVar13 + (longlong)puVar6);
      puVar6 = (undefined8 *)((longlong)puVar6 + 4);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80000000;
  iVar2 = *(int *)(param_2 + 200);
  lVar11 = (longlong)iVar2;
  local_res10 = CONCAT44(local_res10._4_4_,iVar2);
  uVar5 = FUN_143703a50();
  iVar4 = (int)local_res10;
  if ((int)local_res10 == 0) {
    local_res10._0_4_ = 0;
  }
  else {
    puVar7 = (undefined8 *)FUN_143702d60(uVar5,0x10,&local_res10);
  }
  param_1[0x18] = puVar7;
  *(int *)(param_1 + 0x19) = iVar4;
  iVar4 = -0x80000000;
  if ((int)local_res10 != 0) {
    iVar4 = (int)local_res10;
  }
  *(int *)((longlong)param_1 + 0xcc) = iVar4;
  if (0 < iVar2) {
    lVar8 = *(longlong *)(param_2 + 0xc0) - (longlong)puVar7;
    piVar12 = (int *)(puVar7 + 1);
    lVar13 = lVar8 + -8;
    local_res10 = lVar13;
    do {
      plVar1 = (longlong *)(piVar12 + -2);
      if (plVar1 != (longlong *)0x0) {
        *plVar1 = 0;
        *piVar12 = 0;
        piVar12[1] = -0x80000000;
        iVar2 = *(int *)((longlong)piVar12 + lVar8);
        lVar14 = (longlong)iVar2;
        lVar13 = *(longlong *)(lVar13 + (longlong)piVar12);
        uVar5 = FUN_143703a50();
        iVar4 = *piVar12;
        iVar15 = iVar4 + iVar2;
        if ((int)(piVar12[1] & 0x3fffffffU) < iVar15) {
          iVar3 = (piVar12[1] & 0x3fffffffU) * 2;
          iVar4 = iVar15;
          if (iVar15 < iVar3) {
            iVar4 = iVar3;
          }
          FUN_14370c310(uVar5,plVar1,iVar4,4);
          iVar4 = *piVar12;
        }
        puVar10 = (undefined4 *)(*plVar1 + (longlong)iVar4 * 4);
        if (0 < iVar2) {
          lVar13 = lVar13 - (longlong)puVar10;
          do {
            *puVar10 = *(undefined4 *)(lVar13 + (longlong)puVar10);
            puVar10 = puVar10 + 1;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        *piVar12 = iVar15;
        lVar13 = local_res10;
      }
      piVar12 = piVar12 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    return param_1;
  }
  return param_1;
}



// FUNCTION 142f8b420 ~TArray<FShaderCodeArchive::FShaderPreloadEntry,TSizedDefaultAllocator<32>_> body=101 status=ok
// SIG undefined ~TArray<FShaderCodeArchive::FShaderPreloadEntry,TSizedDefaultAllocator<32>_>(void)

void TArray<FShaderCodeArchive::FShaderPreloadEntry,TSizedDefaultAllocator<32>_>::
     ~TArray<FShaderCodeArchive::FShaderPreloadEntry,TSizedDefaultAllocator<32>_>
               (undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 1);
  plVar3 = (longlong *)*param_1;
  if (iVar4 != 0) {
    do {
      if (*plVar3 != 0) {
        LOCK();
        piVar1 = (int *)(*plVar3 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
      plVar3 = plVar3 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar3 = (longlong *)*param_1;
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  return;
}



// FUNCTION 142f8b490 FUN_142f8b490 body=101 status=ok
// SIG undefined FUN_142f8b490(void)

void FUN_142f8b490(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0xf8);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x2a;
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



// FUNCTION 142f8b500 FUN_142f8b500 body=388 status=ok
// SIG undefined FUN_142f8b500(void)

void FUN_142f8b500(longlong *param_1)

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
      if (bVar4) goto LAB_142f8b5c1;
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
LAB_142f8b5c1:
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
      FUN_142f8b710((longlong)iStack_1c * 0x20 + *param_1);
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



// FUNCTION 142f8b690 FUN_142f8b690 body=122 status=ok
// SIG undefined FUN_142f8b690(void)

void FUN_142f8b690(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(int *)(param_1 + 0x20c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,TInlineAllocator<32,FDefaultAllocator>_>
    ::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (*(int *)(param_1 + 0x224) != 0) {
    *(undefined4 *)(param_1 + 0x224) = 0;
    TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Realloc(param_1 + 0x210,0);
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f8b710 FUN_142f8b710 body=96 status=ok
// SIG undefined FUN_142f8b710(void)

void FUN_142f8b710(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x14)) {
    FUN_143702e10(&PTR_vftable_1467f0638,*(undefined8 *)(param_1 + 8),8,
                  *(uint *)(param_1 + 0x14) & 0x3fffffff);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}



// FUNCTION 142f8b770 FUN_142f8b770 body=131 status=ok
// SIG undefined FUN_142f8b770(void)

void FUN_142f8b770(undefined8 param_1)

{
  int iVar1;
  BOOL BVar2;
  longlong lVar3;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b44048);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b44048);
  }
  iVar1 = DAT_146b440a0;
  lVar3 = (longlong)DAT_146b440a0;
  DAT_146b440a0 = DAT_146b440a0 + 1;
  if (DAT_146b440a4 < DAT_146b440a0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b44098,iVar1);
  }
  *(undefined8 *)(DAT_146b44098 + lVar3 * 8) = param_1;
  FUN_142fb0430(&DAT_146b44070,param_1);
                    /* WARNING: Could not recover jumptable at 0x000142f8b7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b44048);
  return;
}



// FUNCTION 142f8b800 FUN_142f8b800 body=137 status=ok
// SIG undefined FUN_142f8b800(void)

void FUN_142f8b800(longlong param_1)

{
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x30,0);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f8b890 FUN_142f8b890 body=204 status=ok
// SIG undefined FUN_142f8b890(void)

void FUN_142f8b890(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_14370c150();
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_14370c150();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 142f8b960 Release body=35 status=ok
// SIG undefined Release(void)

void FGPUSkinCache::Release(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_14370c150();
    *param_1 = 0;
  }
  return;
}



// FUNCTION 142f8b990 FUN_142f8b990 body=147 status=ok
// SIG undefined FUN_142f8b990(void)

void FUN_142f8b990(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = hkaiPathfindingUtil::FindPathInput::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x54)) {
    FUN_143702e10(uVar1,param_1[9],4,*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 7) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) {
    FUN_143702e10(uVar1,param_1[6],0x10,*(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 142f8ba30 FUN_142f8ba30 body=147 status=ok
// SIG undefined FUN_142f8ba30(void)

void FUN_142f8ba30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = hkaiVolumePathfindingUtil::FindPathInput::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x54)) {
    FUN_143702e10(uVar1,param_1[9],4,*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 7) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) {
    FUN_143702e10(uVar1,param_1[6],0x10,*(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 142f8bad0 FUN_142f8bad0 body=190 status=ok
// SIG undefined FUN_142f8bad0(void)

void FUN_142f8bad0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x5c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x50),4,*(uint *)(param_1 + 0x5c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),0x30,*(uint *)(param_1 + 0x34) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),4,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 142f8bb90 FUN_142f8bb90 body=583 status=ok
// SIG undefined FUN_142f8bb90(void)

void FUN_142f8bb90(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 200) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    puVar5 = (uint *)(*(longlong *)(param_1 + 0xc0) + 0xc + lVar4 * 0x10);
    do {
      uVar2 = FUN_143703a50();
      puVar5[-1] = 0;
      if (-1 < (int)*puVar5) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar5 + -3),4,*puVar5 & 0x3fffffff);
      }
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      *puVar5 = 0x80000000;
      puVar5 = puVar5 + -4;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xcc)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0xc0),0x10,*(uint *)(param_1 + 0xcc) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xbc)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0xb0),4,*(uint *)(param_1 + 0xbc) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xac)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0xa0),4,*(uint *)(param_1 + 0xac) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x9c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x90),8,*(uint *)(param_1 + 0x9c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x8c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x80),8,*(uint *)(param_1 + 0x8c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x7c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x70),4,*(uint *)(param_1 + 0x7c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x80000000;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 142f8bde0 FUN_142f8bde0 body=300 status=ok
// SIG undefined FUN_142f8bde0(void)

void FUN_142f8bde0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  uVar2 = FUN_143703a50();
  iVar4 = *(int *)(param_1 + 0x38) + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x30) + lVar6 * 0x18);
    do {
      lVar1 = plVar5[1];
      if (lVar1 != 0) {
        FUN_143718950(lVar1);
        pvVar3 = TlsGetValue(DAT_146b7bf70);
        if (pvVar3 == (LPVOID)0x0) {
          pvVar3 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar3 + 0x58),lVar1,0x40);
      }
      if (*plVar5 != 0) {
        FUN_14370c150();
      }
      plVar5 = plVar5 + -3;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x30),0x18,*(uint *)(param_1 + 0x3c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 != 0) {
    FUN_143718950(lVar6);
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar3 + 0x58),lVar6,0x40);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 142f8bf10 operator= body=64 status=ok
// SIG undefined operator=(void)

longlong * TRefCountPtr<FGraphEvent>::operator=(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    lVar3 = *param_1;
    *param_1 = *param_2;
    *param_2 = 0;
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  return param_1;
}



// FUNCTION 142f8bf50 operator= body=465 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>
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
    TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_142f8c08d;
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
LAB_142f8c08d:
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
        FUN_142f85c50(param_1,local_res8,(longlong)iStack_3c * 0x20 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 142f8c130 FUN_142f8c130 body=204 status=ok
// SIG undefined FUN_142f8c130(void)

undefined1 * FUN_142f8c130(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  iVar2 = *(int *)(param_2 + 0x30);
  lVar6 = (longlong)iVar2;
  lVar5 = *(longlong *)(param_2 + 0x28);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar3,param_1 + 0x28,iVar2,0x10);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  if (0 < iVar2) {
    lVar5 = lVar5 - (longlong)puVar4;
    do {
      puVar1 = (undefined8 *)(lVar5 + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4 = puVar4 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  *(int *)(param_1 + 0x30) = iVar2;
  return param_1;
}



// FUNCTION 142f8c200 FUN_142f8c200 body=454 status=ok
// SIG undefined FUN_142f8c200(void)

void FUN_142f8c200(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  uint7 uStack_77;
  undefined1 uStack_5c;
  undefined2 uStack_5a;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  
  cVar5 = FUN_142f8c3d0(param_1 + 0xd,param_2 + 0x68);
  if (cVar5 == '\0') {
    FUN_142fa7a70(param_1);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0x68);
    *(undefined8 *)((longlong)param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
    *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
    lVar4 = *(longlong *)(param_2 + 0x98);
    param_1[0x12] = *(longlong *)(param_2 + 0x90);
    param_1[0x13] = lVar4;
    uVar1 = *(undefined4 *)(param_2 + 0xa4);
    uVar2 = *(undefined4 *)(param_2 + 0xa8);
    uVar3 = *(undefined4 *)(param_2 + 0xac);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)((longlong)param_1 + 0xa4) = uVar1;
    *(undefined4 *)(param_1 + 0x15) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xac) = uVar3;
    param_1[0x16] = *(longlong *)(param_2 + 0xb0);
    *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0xb8);
    *(undefined1 *)((longlong)param_1 + 0xb9) = *(undefined1 *)(param_2 + 0xb9);
    *(undefined1 *)((longlong)param_1 + 0xba) = *(undefined1 *)(param_2 + 0xba);
    *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0xc0);
    *(undefined1 *)((longlong)param_1 + 0xc1) = *(undefined1 *)(param_2 + 0xc1);
    *(undefined1 *)((longlong)param_1 + 0xc2) = *(undefined1 *)(param_2 + 0xc2);
    uVar1 = DAT_14676e1b8;
    lVar4 = DAT_14676e1b0;
    FUN_142f89390(&local_58);
    FUN_142c62620(&local_28);
    *param_1 = (ulonglong)uStack_77 << 8;
    param_1[1] = 0;
    param_1[2] = lVar4;
    param_1[3] = CONCAT26(uStack_5a,(uint6)CONCAT14(uStack_5c,uVar1));
    param_1[4] = local_58;
    param_1[5] = lStack_50;
    param_1[6] = local_48;
    param_1[7] = lStack_40;
    param_1[8] = local_38;
    param_1[9] = lStack_30;
    param_1[10] = local_28;
    param_1[0xb] = lStack_20;
    param_1[0xc] = local_18;
    lVar4 = *(longlong *)(param_2 + 0x28);
    param_1[4] = *(longlong *)(param_2 + 0x20);
    param_1[5] = lVar4;
    lVar4 = *(longlong *)(param_2 + 0x38);
    param_1[6] = *(longlong *)(param_2 + 0x30);
    param_1[7] = lVar4;
    lVar4 = *(longlong *)(param_2 + 0x48);
    param_1[8] = *(longlong *)(param_2 + 0x40);
    param_1[9] = lVar4;
  }
  return;
}



// FUNCTION 142f8c3d0 FUN_142f8c3d0 body=578 status=ok
// SIG undefined FUN_142f8c3d0(void)

ulonglong FUN_142f8c3d0(char *param_1,char *param_2)

{
  char cVar1;
  undefined8 in_RAX;
  uint7 uVar3;
  ulonglong uVar2;
  char *pcVar4;
  
  if (*param_1 == '\x01') {
    pcVar4 = param_1 + 0x10;
LAB_142f8c430:
    in_RAX = FWeakObjectPtr::IsValid(pcVar4);
    cVar1 = (char)in_RAX;
  }
  else {
    if (*param_1 == '\x02') {
      pcVar4 = param_1 + 0x18;
      goto LAB_142f8c430;
    }
    if ((((float)DAT_14676e1b0 == *(float *)(param_1 + 4)) &&
        (DAT_14676e1b0._4_4_ == *(float *)(param_1 + 8))) &&
       (DAT_14676e1b8 == *(float *)(param_1 + 0xc))) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
  }
  if (*param_2 == '\x01') {
    pcVar4 = param_2 + 0x10;
LAB_142f8c481:
    uVar2 = FWeakObjectPtr::IsValid(pcVar4);
  }
  else {
    if (*param_2 == '\x02') {
      pcVar4 = param_2 + 0x18;
      goto LAB_142f8c481;
    }
    uVar3 = (uint7)((ulonglong)in_RAX >> 8);
    if ((((float)DAT_14676e1b0 == *(float *)(param_2 + 4)) &&
        (DAT_14676e1b0._4_4_ == *(float *)(param_2 + 8))) &&
       (DAT_14676e1b8 == *(float *)(param_2 + 0xc))) {
      uVar2 = (ulonglong)uVar3 << 8;
    }
    else {
      uVar2 = CONCAT71(uVar3,1);
    }
  }
  if (cVar1 == (char)uVar2) {
    cVar1 = *param_1;
    uVar2 = 0;
    if (cVar1 == *param_2) {
      if (cVar1 == '\x01') {
        uVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (param_1 + 0x10,param_2 + 0x10);
        if ((((char)uVar2 == '\0') || (*(float *)(param_2 + 4) != *(float *)(param_1 + 4))) ||
           ((*(float *)(param_2 + 8) != *(float *)(param_1 + 8) ||
            (*(float *)(param_2 + 0xc) != *(float *)(param_1 + 0xc))))) goto LAB_142f8c4d4;
      }
      else {
        if (cVar1 == '\x02') {
          uVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                            (param_1 + 0x18,param_2 + 0x18);
        }
        else {
          uVar2 = FVector::PointsAreNear(param_1 + 4,param_2 + 4,0x3dcccccd);
        }
        if ((char)uVar2 == '\0') goto LAB_142f8c4d4;
      }
      if (((((((ABS(*(float *)(param_1 + 0x20) - *(float *)(param_2 + 0x20)) <= 0.1) &&
              (ABS(*(float *)(param_1 + 0x24) - *(float *)(param_2 + 0x24)) <= 0.1)) &&
             (uVar2 = 0, param_1[0x58] == param_2[0x58])) &&
            ((uVar2 = (ulonglong)*(uint *)(param_2 + 0x54),
             *(uint *)(param_1 + 0x54) == *(uint *)(param_2 + 0x54) &&
             (uVar2 = 0, param_1[0x50] == param_2[0x50])))) &&
           ((uVar2 = 0, param_1[0x44] == param_2[0x44] &&
            ((uVar2 = 0, param_1[0x45] == param_2[0x45] &&
             (uVar2 = 0, param_1[0x46] == param_2[0x46])))))) &&
          (uVar2 = 0, param_1[0x47] == param_2[0x47])) &&
         (((*(float *)(param_2 + 0x4c) == *(float *)(param_1 + 0x4c) &&
           (uVar2 = 0, param_1[0x48] == param_2[0x48])) &&
          (uVar2 = 0, param_1[0x28] == param_2[0x28])))) {
        uVar2 = FVector::PointsAreNear(param_1 + 0x2c,param_2 + 0x2c,0x3dcccccd);
        if ((char)uVar2 != '\0') {
          uVar2 = FVector::PointsAreNear(param_1 + 0x38,param_2 + 0x38,0x3dcccccd);
          if (((char)uVar2 != '\0') && (uVar2 = 0, param_1[0x52] == param_2[0x52])) {
            return 1;
          }
        }
      }
    }
  }
LAB_142f8c4d4:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 142f8c620 FUN_142f8c620 body=19 status=ok
// SIG undefined FUN_142f8c620(void)

bool FUN_142f8c620(void)

{
  char cVar1;
  
  cVar1 = FUN_142f8c3d0();
  return cVar1 == '\0';
}



// FUNCTION 142f8c640 FUN_142f8c640 body=498 status=ok
// SIG undefined FUN_142f8c640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f8c640(undefined8 *param_1,longlong *param_2)

{
  float *pfVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [24];
  float local_80;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  if (param_2 != (longlong *)0x0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
    lVar5 = FUN_1429f11d0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((((bVar2) && (cVar3 = UObjectBaseUtility::IsTemplate(param_2,0x30), cVar3 != '\0')) &&
        (iVar4 = (**(code **)(*param_2 + 0x4e8))(param_2), iVar4 != 0)) &&
       (param_2 != (longlong *)*param_1)) {
      lVar5 = *param_2;
      uVar6 = FUN_14238d0c0(param_2,local_78);
      pfVar7 = (float *)(**(code **)(lVar5 + 0x4a8))(param_2,local_98,uVar6);
      pfVar1 = (float *)param_1[1];
      fVar12 = *pfVar7 + pfVar7[3];
      fVar13 = pfVar7[1] + pfVar7[4];
      fVar9 = *pfVar7 - pfVar7[3];
      fVar10 = pfVar7[1] - pfVar7[4];
      fVar14 = pfVar7[2] + pfVar7[5];
      fVar11 = pfVar7[2] - pfVar7[5];
      local_80 = (float)CONCAT31(local_80._1_3_,1);
      if (*(char *)(pfVar1 + 6) == '\0') {
        *(ulonglong *)pfVar1 = CONCAT44(fVar10,fVar9);
        *(ulonglong *)(pfVar1 + 2) = CONCAT44(fVar12,fVar11);
        *(ulonglong *)(pfVar1 + 4) = CONCAT44(fVar14,fVar13);
        pfVar1[6] = local_80;
      }
      else {
        fVar8 = *pfVar1;
        if (fVar9 <= *pfVar1) {
          fVar8 = fVar9;
        }
        fVar9 = pfVar1[1];
        if (fVar10 <= pfVar1[1]) {
          fVar9 = fVar10;
        }
        *pfVar1 = fVar8;
        pfVar1[1] = fVar9;
        fVar9 = pfVar1[2];
        if (fVar11 <= pfVar1[2]) {
          fVar9 = fVar11;
        }
        fVar10 = pfVar1[3];
        if (pfVar1[3] <= fVar12) {
          fVar10 = fVar12;
        }
        pfVar1[2] = fVar9;
        pfVar1[3] = fVar10;
        fVar9 = pfVar1[4];
        if (pfVar1[4] <= fVar13) {
          fVar9 = fVar13;
        }
        fVar10 = pfVar1[5];
        if (pfVar1[5] <= fVar14) {
          fVar10 = fVar14;
        }
        pfVar1[4] = fVar9;
        pfVar1[5] = fVar10;
      }
    }
  }
  return;
}



// FUNCTION 142f8c840 FUN_142f8c840 body=155 status=ok
// SIG undefined FUN_142f8c840(void)

void FUN_142f8c840(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_38 [48];
  
  lVar7 = *param_1;
  FUN_1424c8610();
  FUN_1424c98a0();
  lVar6 = *(longlong *)(lVar7 + 0x18);
  lVar7 = (longlong)*(int *)(lVar7 + 0x20) * 0x150 + lVar6;
  for (; lVar6 != lVar7; lVar6 = lVar6 + 0x150) {
    puVar5 = (undefined8 *)
             FUN_142f9b9f0(local_38,lVar6 + 8,lVar6 + 0xb0,lVar6 + 0xc4,lVar6 + 0x110,lVar6 + 0xf8);
    uVar4 = puVar5[1];
    *(undefined8 *)(lVar6 + 0x11c) = *puVar5;
    *(undefined8 *)(lVar6 + 0x124) = uVar4;
    uVar4 = puVar5[3];
    *(undefined8 *)(lVar6 + 300) = puVar5[2];
    *(undefined8 *)(lVar6 + 0x134) = uVar4;
    uVar1 = *(undefined4 *)((longlong)puVar5 + 0x24);
    uVar2 = *(undefined4 *)(puVar5 + 5);
    uVar3 = *(undefined4 *)((longlong)puVar5 + 0x2c);
    *(undefined4 *)(lVar6 + 0x13c) = *(undefined4 *)(puVar5 + 4);
    *(undefined4 *)(lVar6 + 0x140) = uVar1;
    *(undefined4 *)(lVar6 + 0x144) = uVar2;
    *(undefined4 *)(lVar6 + 0x148) = uVar3;
  }
  return;
}



// FUNCTION 142f8c9e0 FUN_142f8c9e0 body=99 status=ok
// SIG undefined FUN_142f8c9e0(void)

undefined8 * FUN_142f8c9e0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkSlot::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x20);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142f8ca50 FUN_142f8ca50 body=73 status=ok
// SIG undefined FUN_142f8ca50(void)

longlong FUN_142f8ca50(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a8);
  }
  return param_1;
}



// FUNCTION 142f8caa0 FUN_142f8caa0 body=151 status=ok
// SIG undefined FUN_142f8caa0(void)

longlong FUN_142f8caa0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    if (*(longlong *)(param_1 + 0x4b0) == 0) {
      **(longlong **)(param_1 + 0x4b8) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x4b8) = *(longlong *)(param_1 + 0x4b0);
      *(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 8) = *(undefined8 *)(param_1 + 0x4b8);
      *(undefined8 *)(param_1 + 0x4b0) = 0;
    }
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    *(undefined8 *)(param_1 + 0x4c0) = 0;
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4c8);
  }
  return param_1;
}



// FUNCTION 142f8cb40 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UNiagaraSystem::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a0);
  }
  return param_1;
}



// FUNCTION 142f8cb80 FUN_142f8cb80 body=43 status=ok
// SIG undefined FUN_142f8cb80(void)

undefined8 * FUN_142f8cb80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142f8cbb0 FUN_142f8cbb0 body=145 status=ok
// SIG undefined FUN_142f8cbb0(void)

longlong FUN_142f8cbb0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x188);
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
  FUN_1437fa170(param_1 + 0x60);
  FUN_142b83070(param_1 + 0x40);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 142f8cc50 FUN_142f8cc50 body=240 status=ok
// SIG undefined FUN_142f8cc50(void)

undefined8 * FUN_142f8cc50(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_145a0c368;
  FUN_142f96590();
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  FUN_1421aa980(param_1 + 0xe);
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  TArray<FShaderCodeArchive::FShaderPreloadEntry,TSizedDefaultAllocator<32>_>::
  ~TArray<FShaderCodeArchive::FShaderPreloadEntry,TSizedDefaultAllocator<32>_>(param_1 + 10);
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  TArray<FShaderCodeArchive::FShaderPreloadEntry,TSizedDefaultAllocator<32>_>::
  ~TArray<FShaderCodeArchive::FShaderPreloadEntry,TSizedDefaultAllocator<32>_>(param_1 + 6);
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1457d1530;
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
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 142f8cd40 FUN_142f8cd40 body=201 status=ok
// SIG undefined FUN_142f8cd40(void)

undefined8 * FUN_142f8cd40(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_145a0cd48;
  plVar4 = (longlong *)param_1[0x61];
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
  FUN_1437faf00(param_1 + 0x1c);
  FUN_1438d7680(param_1 + 0x13);
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  FUN_142b83000(param_1 + 10);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,800);
  }
  return param_1;
}



// FUNCTION 142f8ce10 FUN_142f8ce10 body=170 status=ok
// SIG undefined FUN_142f8ce10(void)

undefined8 * FUN_142f8ce10(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  LPVOID pvVar2;
  
  *param_1 = hkaiAstarEdgeFilter::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
      if (*(short *)(param_1 + 2) == -1) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0xc0);
        return param_1;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(short *)(param_1 + 2));
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 142f8cec0 FUN_142f8cec0 body=206 status=ok
// SIG undefined FUN_142f8cec0(void)

longlong FUN_142f8cec0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  LPVOID pvVar2;
  
  if (*(longlong *)(param_1 + 0xf38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x728) != 0) {
    FMemory::Free();
  }
  FUN_140590de0(param_1 + 0x18);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
      if (*(short *)(param_1 + 0x10) == -1) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0xf48);
        return param_1;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(short *)(param_1 + 0x10));
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xf48);
  }
  return param_1;
}



// FUNCTION 142f8cf90 FUN_142f8cf90 body=170 status=ok
// SIG undefined FUN_142f8cf90(void)

undefined8 * FUN_142f8cf90(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  LPVOID pvVar2;
  
  *param_1 = hkaiAstarCostModifier::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
      if (*(short *)(param_1 + 2) == -1) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0x128);
        return param_1;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(short *)(param_1 + 2));
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 142f8d040 FUN_142f8d040 body=170 status=ok
// SIG undefined FUN_142f8d040(void)

undefined8 * FUN_142f8d040(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  LPVOID pvVar2;
  
  *param_1 = hkaiSpatialQueryHitFilter::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
      if (*(short *)(param_1 + 2) == -1) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0x28);
        return param_1;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(short *)(param_1 + 2));
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142f8d0f0 FUN_142f8d0f0 body=165 status=ok
// SIG undefined FUN_142f8d0f0(void)

undefined8 * FUN_142f8d0f0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 2);
  *param_1 = &PTR_FUN_145a0b988;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x78);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142f8d1a0 FUN_142f8d1a0 body=165 status=ok
// SIG undefined FUN_142f8d1a0(void)

longlong FUN_142f8d1a0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  LPVOID pvVar2;
  
  FUN_142f8b990();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
        if (*(short *)(param_1 + 0x10) == -1) {
          (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0xe0);
          return param_1;
        }
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(short *)(param_1 + 0x10));
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xe0);
    }
  }
  return param_1;
}



// FUNCTION 142f8d250 FUN_142f8d250 body=165 status=ok
// SIG undefined FUN_142f8d250(void)

longlong FUN_142f8d250(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  LPVOID pvVar2;
  
  FUN_142f8ba30();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
        if (*(short *)(param_1 + 0x10) == -1) {
          (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0xc0);
          return param_1;
        }
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(short *)(param_1 + 0x10));
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xc0);
    }
  }
  return param_1;
}



// FUNCTION 142f8d300 FUN_142f8d300 body=165 status=ok
// SIG undefined FUN_142f8d300(void)

longlong FUN_142f8d300(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  LPVOID pvVar2;
  
  FUN_142f8bad0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
        if (*(short *)(param_1 + 0x10) == -1) {
          (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0x70);
          return param_1;
        }
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(short *)(param_1 + 0x10));
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
    }
  }
  return param_1;
}



// FUNCTION 142f8d3b0 FUN_142f8d3b0 body=99 status=ok
// SIG undefined FUN_142f8d3b0(void)

undefined8 * FUN_142f8d3b0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = &PTR_FUN_145a0b988;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 142f8d420 FUN_142f8d420 body=125 status=ok
// SIG undefined FUN_142f8d420(void)

longlong FUN_142f8d420(longlong param_1,ulonglong param_2)

{
  thunk_FUN_142478640(param_1 + 600);
  *(undefined ***)(param_1 + 0x238) = &PTR_FUN_1442046d0;
  *(undefined ***)(param_1 + 0x230) = &PTR_FUN_1440732c8;
  thunk_FUN_142478640(param_1 + 0x210);
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2c0);
  }
  return param_1;
}



// FUNCTION 142f8d4a0 FUN_142f8d4a0 body=73 status=ok
// SIG undefined FUN_142f8d4a0(void)

longlong FUN_142f8d4a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2700) != 0) {
    FMemory::Free();
  }
  FUN_140a51510(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2890);
  }
  return param_1;
}



// FUNCTION 142f8d4f0 FUN_142f8d4f0 body=52 status=ok
// SIG undefined FUN_142f8d4f0(void)

undefined8 FUN_142f8d4f0(undefined8 param_1,ulonglong param_2)

{
  FUN_1409f5fd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xaf0);
  }
  return param_1;
}



// FUNCTION 142f8d530 FUN_142f8d530 body=225 status=ok
// SIG undefined FUN_142f8d530(void)

longlong FUN_142f8d530(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x7a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x790) != 0) {
    if (*(longlong *)(param_1 + 0x780) == 0) {
      **(longlong **)(param_1 + 0x788) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x788) = *(longlong *)(param_1 + 0x780);
      *(undefined8 *)(*(longlong *)(param_1 + 0x780) + 8) = *(undefined8 *)(param_1 + 0x788);
      *(undefined8 *)(param_1 + 0x780) = 0;
    }
    *(undefined8 *)(param_1 + 0x788) = 0;
    *(undefined8 *)(param_1 + 0x790) = 0;
  }
  if (*(longlong *)(param_1 + 0x720) != 0) {
    if (*(longlong *)(param_1 + 0x710) == 0) {
      **(longlong **)(param_1 + 0x718) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x718) = *(longlong *)(param_1 + 0x710);
      *(undefined8 *)(*(longlong *)(param_1 + 0x710) + 8) = *(undefined8 *)(param_1 + 0x718);
      *(undefined8 *)(param_1 + 0x710) = 0;
    }
    *(undefined8 *)(param_1 + 0x718) = 0;
    *(undefined8 *)(param_1 + 0x720) = 0;
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,2000);
  }
  return param_1;
}



// FUNCTION 142f8d620 FUN_142f8d620 body=168 status=ok
// SIG undefined FUN_142f8d620(void)

longlong FUN_142f8d620(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    if (*(longlong *)(param_1 + 0x1e0) == 0) {
      **(longlong **)(param_1 + 0x1e8) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x1e8) = *(longlong *)(param_1 + 0x1e0);
      *(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 8) = *(undefined8 *)(param_1 + 0x1e8);
      *(undefined8 *)(param_1 + 0x1e0) = 0;
    }
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 142f8d6d0 FUN_142f8d6d0 body=208 status=ok
// SIG undefined FUN_142f8d6d0(void)

longlong FUN_142f8d6d0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x788) != 0) {
    if (*(longlong *)(param_1 + 0x778) == 0) {
      **(longlong **)(param_1 + 0x780) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x780) = *(longlong *)(param_1 + 0x778);
      *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 8) = *(undefined8 *)(param_1 + 0x780);
      *(undefined8 *)(param_1 + 0x778) = 0;
    }
    *(undefined8 *)(param_1 + 0x780) = 0;
    *(undefined8 *)(param_1 + 0x788) = 0;
  }
  if (*(longlong *)(param_1 + 0x720) != 0) {
    if (*(longlong *)(param_1 + 0x710) == 0) {
      **(longlong **)(param_1 + 0x718) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x718) = *(longlong *)(param_1 + 0x710);
      *(undefined8 *)(*(longlong *)(param_1 + 0x710) + 8) = *(undefined8 *)(param_1 + 0x718);
      *(undefined8 *)(param_1 + 0x710) = 0;
    }
    *(undefined8 *)(param_1 + 0x718) = 0;
    *(undefined8 *)(param_1 + 0x720) = 0;
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7c0);
  }
  return param_1;
}



// FUNCTION 142f8d7a0 FUN_142f8d7a0 body=134 status=ok
// SIG undefined FUN_142f8d7a0(void)

longlong FUN_142f8d7a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x720) != 0) {
    if (*(longlong *)(param_1 + 0x710) == 0) {
      **(longlong **)(param_1 + 0x718) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x718) = *(longlong *)(param_1 + 0x710);
      *(undefined8 *)(*(longlong *)(param_1 + 0x710) + 8) = *(undefined8 *)(param_1 + 0x718);
      *(undefined8 *)(param_1 + 0x710) = 0;
    }
    *(undefined8 *)(param_1 + 0x718) = 0;
    *(undefined8 *)(param_1 + 0x720) = 0;
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x760);
  }
  return param_1;
}



// FUNCTION 142f8d830 FUN_142f8d830 body=67 status=ok
// SIG undefined FUN_142f8d830(void)

longlong FUN_142f8d830(longlong param_1,ulonglong param_2)

{
  FUN_1404bf750(param_1 + 0x428);
  FUN_142b83250(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x438);
  }
  return param_1;
}



// FUNCTION 142f8d880 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPopupWindowWidget::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x238);
  }
  return param_1;
}



// FUNCTION 142f8d8d0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UProxyHierarchicalInstancedStaticMeshComponent::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x778) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x790);
  }
  return param_1;
}



// FUNCTION 142f8d920 FUN_142f8d920 body=165 status=ok
// SIG undefined FUN_142f8d920(void)

longlong FUN_142f8d920(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x7d8) != 0) {
    if (*(longlong *)(param_1 + 0x7c8) == 0) {
      **(longlong **)(param_1 + 2000) = 0;
    }
    else {
      **(longlong **)(param_1 + 2000) = *(longlong *)(param_1 + 0x7c8);
      *(undefined8 *)(*(longlong *)(param_1 + 0x7c8) + 8) = *(undefined8 *)(param_1 + 2000);
      *(undefined8 *)(param_1 + 0x7c8) = 0;
    }
    *(undefined8 *)(param_1 + 2000) = 0;
    *(undefined8 *)(param_1 + 0x7d8) = 0;
  }
  if (*(longlong *)(param_1 + 0x750) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x6f0) = &PTR_FUN_1440732c8;
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7f0);
  }
  return param_1;
}



// FUNCTION 142f8d9d0 FUN_142f8d9d0 body=99 status=ok
// SIG undefined FUN_142f8d9d0(void)

undefined8 * FUN_142f8d9d0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkSlot::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x18);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142f8da40 FUN_142f8da40 body=99 status=ok
// SIG undefined FUN_142f8da40(void)

undefined8 * FUN_142f8da40(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkTaskQueue::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 142f8dab0 FUN_142f8dab0 body=181 status=ok
// SIG undefined FUN_142f8dab0(void)

undefined8 * FUN_142f8dab0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 2) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x14)) {
    FUN_143702e10(uVar1,param_1[1],8,*(uint *)((longlong)param_1 + 0x14) & 0x3fffffff);
  }
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  *param_1 = hkTaskQueue::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,0x18);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142f8db70 FUN_142f8db70 body=165 status=ok
// SIG undefined FUN_142f8db70(void)

longlong FUN_142f8db70(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  LPVOID pvVar2;
  
  FUN_142f8bb90();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
        if (*(short *)(param_1 + 0x10) == -1) {
          (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0xd0);
          return param_1;
        }
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(short *)(param_1 + 0x10));
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
    }
  }
  return param_1;
}



// FUNCTION 142f8dc20 FUN_142f8dc20 body=165 status=ok
// SIG undefined FUN_142f8dc20(void)

longlong FUN_142f8dc20(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  LPVOID pvVar2;
  
  FUN_14383ba90();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
        if (*(short *)(param_1 + 0x10) == -1) {
          (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0xd0);
          return param_1;
        }
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(short *)(param_1 + 0x10));
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
    }
  }
  return param_1;
}



// FUNCTION 142f8dcd0 FUN_142f8dcd0 body=457 status=ok
// SIG undefined FUN_142f8dcd0(void)

longlong FUN_142f8dcd0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x6c)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x60),0x20,*(uint *)(param_1 + 0x6c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x5c)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x50),0x20,*(uint *)(param_1 + 0x5c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x4c)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x40),8,*(uint *)(param_1 + 0x4c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x30),0x14,*(uint *)(param_1 + 0x3c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x20),0x10,*(uint *)(param_1 + 0x2c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar3 = TlsGetValue(DAT_146b7bf70);
        if (pvVar3 == (LPVOID)0x0) {
          pvVar3 = DAT_146b7bf68;
        }
        plVar1 = *(longlong **)((longlong)pvVar3 + 0x58);
        if (*(short *)(param_1 + 0x10) == -1) {
          (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0x70);
          return param_1;
        }
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(short *)(param_1 + 0x10));
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
    }
  }
  return param_1;
}



// FUNCTION 142f8dea0 FUN_142f8dea0 body=410 status=ok
// SIG undefined FUN_142f8dea0(void)

longlong FUN_142f8dea0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  short sVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  
  uVar1 = FUN_143703a50();
  iVar7 = *(int *)(param_1 + 0x20) + -1;
  lVar6 = (longlong)iVar7;
  if (-1 < iVar7) {
    puVar5 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x34 + lVar6 * 0x40);
    do {
      uVar2 = FUN_143703a50();
      puVar5[-1] = 0;
      if (-1 < (int)*puVar5) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar5 + -3),4,*puVar5 & 0x3fffffff);
      }
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      *puVar5 = 0x80000000;
      uVar2 = FUN_143703a50();
      puVar5[-7] = 0;
      if (-1 < (int)puVar5[-6]) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar5 + -9),4,puVar5[-6] & 0x3fffffff);
      }
      puVar5[-9] = 0;
      puVar5[-8] = 0;
      puVar5[-6] = 0x80000000;
      if (*(longlong *)(puVar5 + -0xb) != 0) {
        FUN_14370c150();
      }
      if (*(longlong *)(puVar5 + -0xd) != 0) {
        FUN_14370c150();
      }
      puVar5 = puVar5 + -0x10;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x40,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar4 = *(short *)(param_1 + 0x10);
      if (sVar4 == -1) {
        sVar4 = 0x28;
      }
      pvVar3 = TlsGetValue(DAT_146b7bf70);
      if (pvVar3 == (LPVOID)0x0) {
        pvVar3 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar3 + 0x58),param_1,sVar4);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142f8e040 FUN_142f8e040 body=716 status=ok
// SIG undefined FUN_142f8e040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_142f8e040(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint local_c0;
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined1 local_b0 [8];
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [8];
  undefined1 *local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    return 0xffffffff;
  }
  plVar5 = (longlong *)*param_1;
  plVar10 = plVar5 + (longlong)(int)param_1[1] * 4;
  for (; plVar5 != plVar10; plVar5 = plVar5 + 4) {
    if (*plVar5 == param_2) {
      if (plVar5 != (longlong *)0x0) {
        return *(uint *)(plVar5 + 2);
      }
      break;
    }
  }
  lVar6 = FUN_142fbe640();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
      != lVar6 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    if (*(char *)(param_2 + 0x40) != '\0') {
      uVar13 = *(undefined4 *)(param_2 + 0x3c);
      uVar14 = *(undefined4 *)(param_2 + 0x38);
      goto LAB_142f8e135;
    }
  }
  else {
    lVar6 = FUN_142fbe0e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return 0xffffffff;
    }
  }
  uVar13 = *(undefined4 *)(param_2 + 0x38);
  uVar14 = uVar13;
LAB_142f8e135:
  lVar6 = *param_1;
  lVar9 = (longlong)(int)param_1[1] * 0x20 + lVar6;
  uVar8 = 0;
  local_78 = 0xffffffff;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_74 = 0;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  iVar12 = 0;
  iVar11 = 0;
  if (lVar6 != lVar9) {
    do {
      FUN_14044be50(&local_a8,local_b0,lVar6 + 0x10,0);
      lVar6 = lVar6 + 0x20;
    } while (lVar6 != lVar9);
    iVar12 = local_60;
    iVar11 = (int)local_a0;
  }
  while (iVar11 != local_74) {
    puVar7 = local_70;
    if (local_68 != (undefined1 *)0x0) {
      puVar7 = local_68;
    }
    iVar3 = *(int *)(puVar7 + (longlong)(int)(iVar12 - 1U & uVar8) * 4);
    while( true ) {
      if (iVar3 == -1) goto LAB_142f8e22b;
      if (*(uint *)(local_a8 + (longlong)iVar3 * 0xc) == uVar8) break;
      iVar3 = *(int *)(local_a8 + 4 + (longlong)iVar3 * 0xc);
    }
    if (iVar3 == -1) break;
    uVar8 = uVar8 + 1;
  }
LAB_142f8e22b:
  local_60 = 0;
  if (local_68 != (undefined1 *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_a8);
  uStack_bc = *(uint *)(param_2 + 0x30);
  iVar12 = (int)param_1[1];
  uStack_b8 = 0;
  *(int *)(param_1 + 1) = iVar12 + 1;
  local_d0 = param_2;
  uStack_c8 = uVar13;
  uStack_c4 = uVar14;
  local_c0 = uVar8;
  if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar12);
  }
  lVar6 = *param_1;
  puVar1 = (undefined4 *)((longlong)iVar12 * 0x20 + lVar6);
  *puVar1 = (undefined4)local_d0;
  puVar1[1] = local_d0._4_4_;
  puVar1[2] = uStack_c8;
  puVar1[3] = uStack_c4;
  puVar2 = (uint *)((longlong)iVar12 * 0x20 + 0x10 + lVar6);
  *puVar2 = local_c0;
  puVar2[1] = uStack_bc;
  puVar2[2] = (uint)uStack_b8;
  puVar2[3] = uStack_b8._4_4_;
  FUN_142fa6e20(param_1,&local_d0);
  local_d8[0] = 0;
  FUN_142f87730(*param_1,(longlong)(int)param_1[1],0,local_d8);
  return uVar8;
}



// FUNCTION 142f8e310 AddLightningStrikePoint body=12 status=ok
// SIG undefined AddLightningStrikePoint(void)

void CEnvironmentSystem::AddLightningStrikePoint(longlong param_1)

{
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 400);
  return;
}



// FUNCTION 142f8e320 FUN_142f8e320 body=253 status=ok
// SIG undefined FUN_142f8e320(void)

void FUN_142f8e320(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_38 [48];
  
  lVar4 = FUN_142fa13b0(param_1 + -0x6f0,local_38,0x42800000);
  iVar1 = (int)param_2[1];
  uVar3 = *(undefined8 *)(lVar4 + 0x10);
  uVar2 = *(undefined4 *)(lVar4 + 0x18);
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  lVar4 = *param_2;
  *(undefined8 *)(lVar4 + (longlong)iVar1 * 0xc) = uVar3;
  *(undefined4 *)(lVar4 + 8 + (longlong)iVar1 * 0xc) = uVar2;
  lVar4 = FUN_142fa1940(param_1 + -0x6f0,local_38,0x42800000);
  iVar1 = (int)param_2[1];
  uVar3 = *(undefined8 *)(lVar4 + 0x10);
  uVar2 = *(undefined4 *)(lVar4 + 0x18);
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  lVar4 = *param_2;
  *(undefined8 *)(lVar4 + (longlong)iVar1 * 0xc) = uVar3;
  *(undefined4 *)(lVar4 + 8 + (longlong)iVar1 * 0xc) = uVar2;
  return;
}



// FUNCTION 142f8e420 FUN_142f8e420 body=354 status=ok
// SIG undefined FUN_142f8e420(void)

void FUN_142f8e420(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  BOOL BVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_res10 [8];
  
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  }
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0xe0) != 0)) &&
     (lVar4 = *(longlong *)(param_2 + 0x68), lVar4 != 0)) {
    FWeakObjectPtr::operator=(local_res10);
    plVar1 = (longlong *)(param_1 + 0x100);
    lVar9 = *plVar1;
    lVar2 = lVar9 + (longlong)*(int *)(param_1 + 0x108) * 8;
    for (; lVar9 != lVar2; lVar9 = lVar9 + 8) {
      cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar9);
      if (cVar5 != '\0') goto LAB_142f8e56b;
    }
    iVar7 = FUN_142fa4ef0(param_1);
    *(longlong *)(lVar4 + 0x18) = (longlong)iVar7;
    iVar3 = *(int *)(param_1 + 0x108);
    iVar8 = iVar7 + 1;
    if (iVar7 + 1 <= *(int *)(param_1 + 0x108)) {
      iVar8 = *(int *)(param_1 + 0x108);
    }
    if (iVar3 < iVar8) {
      *(int *)(param_1 + 0x108) = iVar8;
      if (*(int *)(param_1 + 0x10c) < iVar8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + (longlong)iVar3 * 8),0,(longlong)(iVar8 - iVar3) << 3);
    }
    else if ((iVar8 < iVar3) && (iVar8 != iVar3)) {
      *(int *)(param_1 + 0x108) = iVar8;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
    }
    FWeakObjectPtr::operator=(*plVar1 + (longlong)iVar7 * 8,param_2);
    FUN_1438ed010(*(undefined8 *)(param_1 + 0xe0),lVar4);
  }
LAB_142f8e56b:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  return;
}



// FUNCTION 142f8e590 FUN_142f8e590 body=237 status=ok
// SIG undefined FUN_142f8e590(void)

void FUN_142f8e590(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_res8 [2];
  
  if ((*(longlong *)(param_1 + 0x708) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x708) + 0x508), lVar3 != 0)) {
    FWeakObjectPtr::operator=(local_res8);
    lVar6 = *(longlong *)(lVar3 + 0x50);
    lVar1 = lVar6 + (longlong)*(int *)(lVar3 + 0x58) * 0x18;
    for (; lVar6 != lVar1; lVar6 = lVar6 + 0x18) {
      cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar6 + 0x10);
      if (cVar4 != '\0') {
        if (lVar6 != 0) {
          return;
        }
        break;
      }
    }
    iVar2 = *(int *)(lVar3 + 0x58);
    iVar5 = iVar2 + 1;
    *(int *)(lVar3 + 0x58) = iVar5;
    if (*(int *)(lVar3 + 0x5c) < iVar5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (lVar3 + 0x50);
    }
    lVar6 = *(longlong *)(lVar3 + 0x50);
    lVar1 = (longlong)iVar2 * 3 + 2;
    *(undefined8 *)(lVar6 + -0x10 + lVar1 * 8) = 0;
    *(undefined8 *)(lVar6 + -8 + lVar1 * 8) = 0;
    *(undefined8 *)(lVar6 + lVar1 * 8) = 0;
    FWeakObjectPtr::operator=(*(longlong *)(lVar3 + 0x50) + lVar1 * 8,param_1);
  }
  return;
}



// FUNCTION 142f8e680 FUN_142f8e680 body=237 status=ok
// SIG undefined FUN_142f8e680(void)

void FUN_142f8e680(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_res8 [2];
  
  if ((*(longlong *)(param_1 + 0x708) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x708) + 0x508), lVar3 != 0)) {
    FWeakObjectPtr::operator=(local_res8);
    lVar6 = *(longlong *)(lVar3 + 0x30);
    lVar1 = lVar6 + (longlong)*(int *)(lVar3 + 0x38) * 0x18;
    for (; lVar6 != lVar1; lVar6 = lVar6 + 0x18) {
      cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar6 + 0x10);
      if (cVar4 != '\0') {
        if (lVar6 != 0) {
          return;
        }
        break;
      }
    }
    iVar2 = *(int *)(lVar3 + 0x38);
    iVar5 = iVar2 + 1;
    *(int *)(lVar3 + 0x38) = iVar5;
    if (*(int *)(lVar3 + 0x3c) < iVar5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (lVar3 + 0x30);
    }
    lVar6 = *(longlong *)(lVar3 + 0x30);
    lVar1 = (longlong)iVar2 * 3 + 2;
    *(undefined8 *)(lVar6 + -0x10 + lVar1 * 8) = 0;
    *(undefined8 *)(lVar6 + -8 + lVar1 * 8) = 0;
    *(undefined8 *)(lVar6 + lVar1 * 8) = 0;
    FWeakObjectPtr::operator=(*(longlong *)(lVar3 + 0x30) + lVar1 * 8,param_1);
  }
  return;
}



// FUNCTION 142f8e770 FUN_142f8e770 body=516 status=ok
// SIG undefined FUN_142f8e770(void)

int * FUN_142f8e770(longlong param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x22c) == 0) {
    iVar8 = *(int *)(param_1 + 0x208);
    *(int *)(param_1 + 0x208) = iVar8 + 1;
    if (*(int *)(param_1 + 0x20c) < iVar8 + 1) {
      FUN_142fb0f10(param_1,iVar8);
    }
    iVar2 = *(int *)(param_1 + 0x220);
    iVar4 = iVar2 + 1;
    *(int *)(param_1 + 0x220) = iVar4;
    if (*(int *)(param_1 + 0x224) <= iVar2) {
      uVar3 = (int)(iVar2 + 0x20 + (iVar2 + 0x20 >> 0x1f & 0x1fU)) >> 5;
      iVar5 = 1;
      if (1 < uVar3) {
        iVar4 = *(int *)(param_1 + 0x224) + 0x1f;
        lVar7 = 4;
        if (((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5 != 0) || (4 < uVar3)) {
          lVar7 = (longlong)(int)uVar3 + 0x10 + ((ulonglong)((longlong)(int)uVar3 * 3) >> 3);
        }
        uVar6 = FMemory::QuantizeSize(lVar7 * 4,0);
        iVar4 = *(int *)(param_1 + 0x220);
        iVar5 = (int)(uVar6 >> 2);
        if (iVar5 < (int)uVar3) {
          iVar5 = 0x7fffffff;
        }
      }
      *(int *)(param_1 + 0x224) = iVar5 << 5;
      TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Realloc(param_1 + 0x210,iVar4 + -1);
    }
    lVar7 = *(longlong *)(param_1 + 0x218);
    if (*(longlong *)(param_1 + 0x218) == 0) {
      lVar7 = param_1 + 0x210;
    }
    puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
  }
  else {
    iVar8 = *(int *)(param_1 + 0x228);
    lVar7 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar7 = param_1;
    }
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar8 * 0x10);
    iVar4 = *(int *)(param_1 + 0x22c) + -1;
    *(int *)(param_1 + 0x228) = iVar2;
    *(int *)(param_1 + 0x22c) = iVar4;
    if (iVar4 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar7 = param_1;
      }
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  *param_2 = iVar8;
  lVar7 = *(longlong *)(param_1 + 0x218);
  if (*(longlong *)(param_1 + 0x218) == 0) {
    lVar7 = param_1 + 0x210;
  }
  puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  lVar7 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar7 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar7 + (longlong)iVar8 * 0x10;
  return param_2;
}



// FUNCTION 142f8e980 FUN_142f8e980 body=128 status=ok
// SIG undefined FUN_142f8e980(void)

void FUN_142f8e980(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined1 local_48 [64];
  
  if (*(int *)(param_2 + 0x108) != 0) {
    cVar3 = FWeakObjectPtr::IsValid(param_3);
    if ((cVar3 != '\0') && (*(longlong *)(param_3 + 8) != 0)) {
      uVar2 = FWeakObjectPtr::Get(*(longlong *)(param_2 + 0x100) + 0x6c);
      puVar4 = (undefined8 *)FUN_1422e0550(local_48,uVar2,*(longlong *)(param_3 + 8) + 8);
      puVar1 = *(undefined8 **)(param_3 + 8);
      uVar2 = puVar4[1];
      *puVar1 = *puVar4;
      puVar1[1] = uVar2;
      uVar2 = puVar4[3];
      puVar1[2] = puVar4[2];
      puVar1[3] = uVar2;
      uVar2 = puVar4[5];
      puVar1[4] = puVar4[4];
      puVar1[5] = uVar2;
      puVar1[6] = puVar4[6];
    }
  }
  return;
}



// FUNCTION 142f8ea00 FUN_142f8ea00 body=249 status=ok
// SIG undefined FUN_142f8ea00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f8ea00(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  uVar3 = _DAT_1464aa818;
  lVar1 = *(longlong *)(param_1 + 0x740);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x3c) != '\0') {
      *(undefined8 *)(param_1 + 0x700) = _DAT_1464aa810;
      *(undefined8 *)(param_1 + 0x708) = uVar3;
    }
    fVar5 = *(float *)(param_1 + 0x710);
    uVar6 = *(undefined4 *)(param_1 + 0x714);
    fVar4 = *(float *)(param_1 + 0x718);
    if ((*(char *)(lVar1 + 0x3d) != '\0') && (fVar5 < *(float *)(lVar1 + 0x40))) {
      fVar5 = *(float *)(lVar1 + 0x40);
    }
    if ((*(char *)(lVar1 + 0x44) != '\0') && (*(float *)(lVar1 + 0x48) < fVar5)) {
      fVar5 = *(float *)(lVar1 + 0x48);
    }
    if ((*(char *)(lVar1 + 0x4c) != '\0') && (fVar4 < *(float *)(lVar1 + 0x50))) {
      fVar4 = *(float *)(lVar1 + 0x50);
    }
    if ((*(char *)(lVar1 + 0x54) != '\0') && (*(float *)(lVar1 + 0x58) < fVar4)) {
      fVar4 = *(float *)(lVar1 + 0x58);
    }
    if ((*(char *)(lVar1 + 0x5c) != '\0') || (*(char *)(lVar1 + 0x5d) != '\0')) {
      uVar6 = 0;
    }
    auVar2._4_4_ = uVar6;
    auVar2._0_4_ = fVar5;
    auVar2._8_4_ = fVar4;
    auVar2._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x710) = auVar2;
    if (*(char *)(lVar1 + 0x5c) == '\0') {
      fVar5 = *(float *)(param_1 + 0x730);
      if (fVar5 <= 20.0) {
        fVar5 = 20.0;
      }
    }
    else {
      fVar5 = 1.0;
    }
    *(float *)(param_1 + 0x730) = fVar5;
    if (*(char *)(lVar1 + 0x5d) != '\0') {
      *(undefined4 *)(param_1 + 0x734) = 0x3f800000;
      return;
    }
    fVar5 = *(float *)(param_1 + 0x734);
    if (fVar5 <= 20.0) {
      fVar5 = 20.0;
    }
    *(float *)(param_1 + 0x734) = fVar5;
  }
  return;
}



// FUNCTION 142f8eb00 FUN_142f8eb00 body=245 status=ok
// SIG undefined FUN_142f8eb00(void)

undefined8 * FUN_142f8eb00(longlong param_1,undefined8 *param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  float local_48;
  float fStack_44;
  float local_40;
  
  if (*(char *)(param_1 + 0x780) != '\0') {
    fVar2 = param_3[2];
    *param_2 = *(undefined8 *)param_3;
    *(float *)(param_2 + 1) = fVar2;
    return param_2;
  }
  fVar2 = param_3[1] * param_3[1];
  local_40 = SQRT(*param_3 * *param_3 + fVar2 + param_3[2] * param_3[2]);
  local_48 = local_40 * *(float *)(param_1 + 0x774);
  fStack_44 = local_40 * *(float *)(param_1 + 0x778);
  local_40 = local_40 * *(float *)(param_1 + 0x77c);
  cVar1 = FUN_142fb4880(fVar2,param_3);
  if (cVar1 != '\0') {
    local_48 = -local_48;
    fStack_44 = -fStack_44;
    local_40 = -local_40;
  }
  *param_2 = CONCAT44(fStack_44,local_48);
  *(float *)(param_2 + 1) = local_40;
  return param_2;
}



// FUNCTION 142f8ec00 FUN_142f8ec00 body=569 status=ok
// SIG undefined FUN_142f8ec00(void)

void FUN_142f8ec00(longlong *param_1,float *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((*(char *)((longlong)param_1 + 0x279c) != '\0') || ((char)param_1[0x4f1] != '\0')) {
    lVar3 = 0x27a0;
    lVar2 = 0x27a0;
    if (*(char *)((longlong)param_1 + 0x279c) == '\0') {
      lVar2 = 0x278c;
    }
    if (*(char *)(lVar2 + (longlong)param_1) != '\0') {
      if (((*(float *)((longlong)param_1 + 0x220c) != 0.0) || (*(float *)(param_1 + 0x442) != 0.0))
         || (*(float *)((longlong)param_1 + 0x2214) != 0.0)) {
        fVar6 = *(float *)((longlong)param_1 + 0x220c) -
                (float)*(undefined8 *)((longlong)param_1 + 0x2854);
        fVar5 = *(float *)(param_1 + 0x442) -
                (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x2854) >> 0x20);
        fVar4 = *(float *)((longlong)param_1 + 0x2214) -
                (*(float *)((longlong)param_1 + 0x285c) - *(float *)((longlong)param_1 + 0x27bc));
        fVar4 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) - *(float *)(param_1 + 0x443);
        if ((fVar4 < *(float *)(param_1 + 0x4f3)) &&
           (fVar5 = *(float *)(param_1 + 0x4f3) - *(float *)((longlong)param_1 + 0x2794),
           0.0 < fVar5)) {
          cVar1 = (**(code **)(*param_1 + 0x560))(param_1);
          if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x558))(param_1), cVar1 == '\0'))
          {
            cVar1 = (**(code **)(*param_1 + 0x570))(param_1);
            if (cVar1 == '\0') {
              return;
            }
            lVar2 = 0x298;
          }
          else {
            cVar1 = (**(code **)(*param_1 + 0x550))(param_1);
            lVar2 = 0x274;
            if (cVar1 != '\0') {
              lVar2 = 0x280;
            }
          }
          if (lVar2 + (longlong)param_1 != 0) {
            fVar6 = (float)FUN_14247f5a0();
            if (*(char *)((longlong)param_1 + 0x279c) == '\0') {
              lVar3 = 0x278c;
            }
            fVar7 = *(float *)(lVar3 + 4 + (longlong)param_1);
            if (*(char *)(lVar3 + (longlong)param_1) != '\x02') {
              fVar7 = fVar7 * fVar6;
            }
            fVar5 = (fVar4 - *(float *)((longlong)param_1 + 0x2794)) / fVar5;
            fVar4 = 0.0;
            if ((0.0 <= fVar5) && (fVar4 = fVar5, 1.0 <= fVar5)) {
              fVar4 = 1.0;
            }
            fVar4 = (float)FMath::RoundHalfFromZero(fVar4 * 10.0);
            fVar7 = fVar4 * 0.1 * (fVar6 - fVar7) + fVar7;
            fVar4 = *param_2;
            if (fVar7 <= *param_2) {
              fVar4 = fVar7;
            }
            *param_2 = fVar4;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142f8ee40 FUN_142f8ee40 body=485 status=ok
// SIG undefined FUN_142f8ee40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142f8ee40(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  undefined1 local_40 [8];
  undefined1 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a8 = *(longlong *)(param_1 + 0x120);
  iVar6 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (undefined1 *)0x0;
  local_30 = 0;
  if (local_a8 == 0) {
    local_a8 = FUN_1423407b0();
  }
  local_a0 = &local_a8;
  local_98 = FUN_14073d760(&local_a8,DAT_146b440d8);
  plVar2 = local_a0;
  local_90 = &local_a8;
  local_88 = 0;
  puVar3 = (undefined8 *)FUN_14073d760(local_a0,local_98);
  puVar4 = (undefined8 *)FUN_14073d760(local_90,local_88);
  for (; puVar3 != puVar4; puVar3 = (undefined8 *)FUN_14073d760(plVar2,*puVar3)) {
    if (puVar3[2] != param_1) {
      FUN_14044be50(&local_78,local_80,puVar3[2] + 0x6f0,0);
    }
  }
  if ((int)local_70 != local_44) {
    puVar7 = local_40;
    if (local_38 != (undefined1 *)0x0) {
      puVar7 = local_38;
    }
    for (iVar1 = *(int *)(puVar7 + (longlong)(int)(local_30 - 1U & *(uint *)(param_1 + 0x6f0)) * 4);
        iVar1 != -1; iVar1 = *(int *)(local_78 + 4 + (longlong)iVar1 * 0xc)) {
      if (*(uint *)(local_78 + (longlong)iVar1 * 0xc) == *(uint *)(param_1 + 0x6f0)) {
        if (iVar1 != -1) {
          *(undefined4 *)(param_1 + 0x6f0) = 0;
          while( true ) {
            iVar1 = *(int *)(puVar7 + ((longlong)local_30 - 1U & (longlong)iVar6) * 4);
            while( true ) {
              if (iVar1 == -1) goto LAB_142f8f00a;
              if (*(int *)(local_78 + (longlong)iVar1 * 0xc) == iVar6) break;
              iVar1 = *(int *)(local_78 + 4 + (longlong)iVar1 * 0xc);
            }
            if (iVar1 == -1) break;
            *(int *)(param_1 + 0x6f0) = *(int *)(param_1 + 0x6f0) + 1;
            iVar6 = *(int *)(param_1 + 0x6f0);
          }
LAB_142f8f00a:
          uVar5 = 0;
          goto LAB_142f8ef89;
        }
        break;
      }
    }
  }
  uVar5 = 1;
LAB_142f8ef89:
  local_30 = 0;
  if (local_38 != (undefined1 *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return uVar5;
}



// FUNCTION 142f8f030 FUN_142f8f030 body=123 status=ok
// SIG undefined FUN_142f8f030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f8f030(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (*(char *)(param_2 + 0x31) != '\0') {
    FUN_142ca1f70(param_2,&local_48,0);
    local_68 = local_48;
    uStack_64 = uStack_44;
    uStack_60 = uStack_40;
    uStack_5c = uStack_3c;
    lVar1 = FQuat::Rotator(&local_68,local_58);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar1 + 4);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x54);
  }
  return;
}



// FUNCTION 142f8f0b0 FUN_142f8f0b0 body=430 status=ok
// SIG undefined FUN_142f8f0b0(void)

void FUN_142f8f0b0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 local_res18;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
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
  undefined8 local_18;
  
  if (param_3 != 0) {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar5 = (longlong *)FUN_14222e260(param_3), plVar5 != (longlong *)0x0)) {
      uVar6 = AAICharacter::GetPrivateStaticClass();
      lVar4 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
      if (lVar4 != 0) {
        local_78 = *(undefined8 *)(lVar4 + 0x6e8);
        uStack_70 = *(undefined8 *)(lVar4 + 0x6f0);
        puVar8 = (undefined8 *)*param_2;
        local_68 = *(undefined8 *)(lVar4 + 0x6f8);
        uStack_60 = *(undefined8 *)(lVar4 + 0x700);
        local_58 = *(undefined8 *)(lVar4 + 0x708);
        uStack_50 = *(undefined8 *)(lVar4 + 0x710);
        local_48 = *(undefined8 *)(lVar4 + 0x718);
        uStack_40 = *(undefined8 *)(lVar4 + 0x720);
        local_38 = *(undefined8 *)(lVar4 + 0x728);
        uStack_30 = *(undefined8 *)(lVar4 + 0x730);
        local_28 = *(undefined8 *)(lVar4 + 0x738);
        uStack_20 = *(undefined8 *)(lVar4 + 0x740);
        local_7c = 0x3f800000;
        puVar1 = puVar8 + (longlong)*(int *)(param_2 + 1) * 9;
        local_18 = param_1;
        for (; puVar8 != puVar1; puVar8 = puVar8 + 9) {
          local_88 = *puVar8;
          local_80 = *(undefined4 *)(puVar8 + 1);
          local_res18 = -1;
          bVar3 = FUN_142f9e4d0(&local_88,puVar8 + 5,&local_res18);
          *(uint *)(puVar8 + 8) = *(uint *)(puVar8 + 8) & 0xfffffffd;
          *(uint *)(puVar8 + 8) = *(uint *)(puVar8 + 8) | (uint)bVar3 * 2;
          if (((int)local_res18 < 0) || (local_res18 < 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            uVar7 = (longlong)(int)local_res18 << 0x20 | (longlong)(local_res18._4_4_ + 1) |
                    0x8000000000000000;
          }
          else {
            uVar7 = 0;
          }
          puVar8[7] = uVar7;
        }
      }
    }
  }
  return;
}



// FUNCTION 142f8f260 FUN_142f8f260 body=660 status=ok
// SIG undefined FUN_142f8f260(void)

void FUN_142f8f260(longlong *param_1,undefined8 *param_2,float *param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 local_108;
  undefined4 local_100;
  float local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined1 local_88 [96];
  
  lVar14 = param_5;
  local_108 = DAT_14676e1b0;
  local_fc = param_3[2];
  local_100 = DAT_14676e1b8;
  local_98 = param_1;
  if (param_5 != 0) {
    lVar9 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_142f8f2f6;
  }
  lVar14 = 0;
LAB_142f8f2f6:
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x860))(param_1,local_88,lVar14);
  local_f8 = *puVar10;
  uStack_f0 = puVar10[1];
  local_e8 = puVar10[2];
  uStack_e0 = puVar10[3];
  local_d8 = puVar10[4];
  uStack_d0 = puVar10[5];
  local_c8 = puVar10[6];
  uStack_c0 = puVar10[7];
  local_b8 = puVar10[8];
  uStack_b0 = puVar10[9];
  local_a8 = puVar10[10];
  uStack_a0 = puVar10[0xb];
  fVar2 = *param_3;
  if ((0.0 < fVar2) || (0.0 < param_3[1])) {
    plVar11 = (longlong *)param_1[0xe4];
    lVar14 = 0;
    bVar5 = true;
    fVar3 = param_3[1];
    plVar16 = plVar11 + (longlong)(int)param_1[0xe5] * 4;
    local_f8 = CONCAT44(fVar3,fVar2);
    plVar12 = plVar11;
    if (plVar11 != plVar16) {
      do {
        if ((fVar2 < *(float *)(plVar12 + 1) || fVar2 == *(float *)(plVar12 + 1)) &&
           (fVar3 < *(float *)((longlong)plVar12 + 0xc) ||
            fVar3 == *(float *)((longlong)plVar12 + 0xc))) {
          lVar14 = *plVar12;
          break;
        }
        plVar12 = plVar12 + 4;
      } while (plVar12 != plVar16);
      do {
        if (plVar11 == plVar16) break;
        if (*plVar11 == lVar14) {
          if (plVar11 != (longlong *)0x0) {
            uStack_f0 = CONCAT44((int)plVar11[2],(undefined4)uStack_f0);
            goto LAB_142f8f3c6;
          }
          break;
        }
        plVar11 = plVar11 + 4;
      } while( true );
    }
    uStack_f0 = CONCAT44(0xffffffff,(undefined4)uStack_f0);
  }
  else {
    bVar5 = false;
  }
LAB_142f8f3c6:
  puVar15 = (undefined8 *)*param_2;
  puVar10 = puVar15 + (longlong)*(int *)(param_2 + 1) * 9;
  for (; puVar15 != puVar10; puVar15 = puVar15 + 9) {
    local_108 = *puVar15;
    local_100 = *(undefined4 *)(puVar15 + 1);
    param_5 = -1;
    bVar7 = FUN_142fae610(&local_108,puVar15 + 5,&param_5);
    *(uint *)(puVar15 + 8) = (uint)bVar7 * 2 | *(uint *)(puVar15 + 8) & 0xfffffffd;
    if (((int)param_5 < 0) || (param_5 < 0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      uVar13 = (longlong)(int)param_5 << 0x20 | (longlong)(param_5._4_4_ + 1);
    }
    else {
      uVar13 = 0;
    }
    puVar15[7] = uVar13;
    if (((bVar5) && (((uint)bVar7 * 2 & 2) != 0)) &&
       (cVar8 = FUN_142fa5110(param_1,puVar15 + 5,&local_f8,0), cVar8 == '\0')) {
      *(uint *)(puVar15 + 8) = *(uint *)(puVar15 + 8) & 0xfffffffd;
    }
  }
  plVar11 = *(longlong **)(param_4 + 8);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar11 + 1;
    lVar14 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  return;
}



// FUNCTION 142f8f500 FUN_142f8f500 body=27 status=ok
// SIG undefined FUN_142f8f500(void)

void FUN_142f8f500(undefined8 param_1)

{
  FUN_1422235f0();
  FUN_142f96c10(param_1);
  return;
}



// FUNCTION 142f8f520 FUN_142f8f520 body=64 status=ok
// SIG undefined FUN_142f8f520(void)

void FUN_142f8f520(longlong param_1)

{
  FUN_1417502d0();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14370c150();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14370c150();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 142f8f560 FUN_142f8f560 body=34 status=ok
// SIG undefined FUN_142f8f560(void)

void FUN_142f8f560(longlong param_1)

{
  FUN_142223710();
  FUN_142fb28c0(param_1,*(undefined1 *)(param_1 + 0x850));
  return;
}



// FUNCTION 142f8f590 BeginPlay body=34 status=ok
// SIG undefined BeginPlay(void)

void UTriggerPromptComponent::BeginPlay(longlong *param_1)

{
  FUN_142385110();
                    /* WARNING: Could not recover jumptable at 0x000142f8f5ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x638))(param_1,0);
  return;
}



// FUNCTION 142f8f5c0 FUN_142f8f5c0 body=46 status=ok
// SIG undefined FUN_142f8f5c0(void)

void FUN_142f8f5c0(longlong *param_1)

{
  FUN_142ce2230();
  *(int *)(param_1 + 0x50c) = (int)param_1[0x4e3];
  *(undefined4 *)((longlong)param_1 + 0x2864) = *(undefined4 *)((longlong)param_1 + 0x271c);
  *(int *)(param_1 + 0x50d) = (int)param_1[0x4e4];
  *(undefined4 *)((longlong)param_1 + 0x286c) = *(undefined4 *)((longlong)param_1 + 0x2724);
                    /* WARNING: Could not recover jumptable at 0x000142f8f5e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc90))(param_1);
  return;
}



// FUNCTION 142f8f5f0 FUN_142f8f5f0 body=120 status=ok
// SIG undefined FUN_142f8f5f0(void)

void FUN_142f8f5f0(longlong param_1)

{
  longlong lVar1;
  
  FUN_142330a70();
  if (*(char *)(param_1 + 0x180) == '\x01') {
    *(undefined4 *)(param_1 + 0x1a0) = DAT_14676e178;
    FUN_142f98850(param_1);
  }
  FUN_142f9cc50(param_1);
  FUN_142fbb0d0(param_1);
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  lVar1 = FUN_142f9cfb0(lVar1,0);
  if (lVar1 != 0) {
    FUN_142faf470(lVar1 + 0x6c0,param_1);
    return;
  }
  return;
}



// FUNCTION 142f8f670 FUN_142f8f670 body=175 status=ok
// SIG undefined FUN_142f8f670(void)

void FUN_142f8f670(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  FUN_142330a70();
  if (*(longlong *)(param_1 + 0x178) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    lVar2 = FUN_142f9cfb0(lVar2,0);
    *(longlong *)(param_1 + 0x1a0) = lVar2;
    if (lVar2 != 0) {
      *(undefined8 *)(param_1 + 0x208) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x210) = DAT_14676e1b0;
      *(undefined4 *)(param_1 + 0x218) = DAT_14676e1b8;
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x184);
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x188);
      uVar1 = FUN_142fa3070(lVar2 + 0x720);
      *(undefined4 *)(param_1 + 0x1b4) = uVar1;
    }
  }
  return;
}



// FUNCTION 142f8f720 FUN_142f8f720 body=101 status=ok
// SIG undefined FUN_142f8f720(void)

void FUN_142f8f720(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_142385110();
  lVar1 = *(longlong *)(param_1 + 0x788);
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x230);
    uVar3 = *(undefined4 *)(param_1 + 0x234);
    uVar4 = *(undefined4 *)(param_1 + 0x238);
    *(undefined1 *)(lVar1 + 0x60) = 1;
    *(undefined4 *)(lVar1 + 0x40) = uVar2;
    *(undefined4 *)(lVar1 + 0x44) = uVar3;
    *(undefined4 *)(lVar1 + 0x48) = uVar4;
    FUN_142fa6a10(*(undefined8 *)(param_1 + 0x788),param_1);
    return;
  }
  return;
}



// FUNCTION 142f8f790 FUN_142f8f790 body=27 status=ok
// SIG undefined FUN_142f8f790(void)

void FUN_142f8f790(undefined8 param_1)

{
  FUN_142385110();
  FUN_142faef00(param_1);
  return;
}



// FUNCTION 142f8f7b0 FUN_142f8f7b0 body=433 status=ok
// SIG undefined FUN_142f8f7b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f8f7b0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  piVar2 = (int *)param_2[1];
  puVar9 = (undefined4 *)0x0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    if (iVar1 == 0) {
      *piVar2 = 0;
    }
    UNLOCK();
    if (iVar1 == 0) {
      LOCK();
      *piVar2 = 1;
      UNLOCK();
    }
    lVar8 = *param_2;
    *param_2 = 0;
    if (lVar8 != 0) {
      LOCK();
      piVar2 = (int *)(lVar8 + 0x48);
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        FGraphEvent::Recycle();
      }
    }
    param_2[1] = 0;
  }
  plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 2);
  if (plVar6 != (longlong *)0x0) {
    puVar7 = (undefined4 *)operator_new(0x1a0);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = 0;
      FWeakObjectPtr::operator=(puVar7 + 1,plVar6);
      uVar10 = uRam0000000146b43f1c;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = uVar10;
      *(undefined8 *)(puVar7 + 8) = 0;
      *(undefined8 *)(puVar7 + 10) = 0;
      uVar10 = uRam0000000146b43f14 & uRam0000000146b43f24;
      uVar11 = uRam0000000146b43f18 & uRam0000000146b43f28;
      uVar12 = uRam0000000146b43f1c & uRam0000000146b43f2c;
      puVar7[0xc] = _DAT_146b43f10 & _DAT_146b43f20;
      puVar7[0xd] = uVar10;
      puVar7[0xe] = uVar11;
      puVar7[0xf] = uVar12;
      FUN_140d21b20(puVar7 + 0x10);
      FUN_1437fa020(puVar7 + 0x18);
      *(undefined8 *)(puVar7 + 0x60) = 0;
      *(undefined8 *)(puVar7 + 0x62) = 0;
      FWeakObjectPtr::operator=(puVar7 + 100,plVar6);
      puVar9 = puVar7;
    }
    lVar8 = FWeakObjectPtr::Get(puVar9 + 100);
    if (((lVar8 != 0) && (*(longlong **)(lVar8 + 0x708) != (longlong *)0x0)) &&
       (lVar8 = (**(code **)(**(longlong **)(lVar8 + 0x708) + 0x148))(), lVar8 != 0)) {
      UWorld::IsGameWorld(lVar8);
    }
    if (puVar9 != (undefined4 *)0x0) {
      FUN_142f8cbb0(puVar9,1);
    }
    *(undefined8 *)((longlong)plVar6 + 0x6f4) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x6fc) = 0;
    lVar8 = lRam00000001468b5b78;
    plVar6[0xe6] = _DAT_1468b5b70;
    plVar6[0xe7] = lVar8;
    uVar5 = uRam00000001468b5b8c;
    uVar4 = uRam00000001468b5b88;
    uVar3 = uRam00000001468b5b84;
    *(undefined4 *)(plVar6 + 0xe8) = _DAT_1468b5b80;
    *(undefined4 *)((longlong)plVar6 + 0x744) = uVar3;
    *(undefined4 *)(plVar6 + 0xe9) = uVar4;
    *(undefined4 *)((longlong)plVar6 + 0x74c) = uVar5;
    uVar5 = uRam00000001468b5b9c;
    uVar4 = uRam00000001468b5b98;
    uVar3 = uRam00000001468b5b94;
    *(undefined4 *)(plVar6 + 0xea) = _DAT_1468b5b90;
    *(undefined4 *)((longlong)plVar6 + 0x754) = uVar3;
    *(undefined4 *)(plVar6 + 0xeb) = uVar4;
    *(undefined4 *)((longlong)plVar6 + 0x75c) = uVar5;
    if (plVar6[0xf4] != 0) {
      FUN_142b83070(plVar6[0xf4] + 0x28);
      plVar6[0xed] = plVar6[0xec];
    }
    (**(code **)(*plVar6 + 0x8f0))(plVar6);
  }
  return;
}



// FUNCTION 142f8f970 FUN_142f8f970 body=550 status=ok
// SIG undefined FUN_142f8f970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f8f970(longlong param_1,longlong *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  puVar9 = (undefined8 *)0x0;
  piVar2 = *(int **)(param_1 + 0x48);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    if (iVar1 == 0) {
      *piVar2 = 0;
    }
    UNLOCK();
    if (iVar1 == 0) {
      LOCK();
      *piVar2 = 1;
      UNLOCK();
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  lVar8 = *(longlong *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (lVar8 != 0) {
    LOCK();
    piVar2 = (int *)(lVar8 + 0x48);
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FGraphEvent::Recycle();
    }
  }
  lVar8 = param_2[1];
  if (lVar8 != 0) {
    LOCK();
    bVar10 = *(int *)(lVar8 + 0x10) == 0;
    if (bVar10) {
      *(int *)(lVar8 + 0x10) = 0;
    }
    UNLOCK();
    if (bVar10) {
      LOCK();
      *(undefined4 *)(lVar8 + 0x10) = 1;
      UNLOCK();
    }
    lVar8 = *param_2;
    *param_2 = 0;
    if (lVar8 != 0) {
      LOCK();
      piVar2 = (int *)(lVar8 + 0x48);
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        FGraphEvent::Recycle();
      }
    }
    param_2[1] = 0;
  }
  plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 2);
  if (plVar6 != (longlong *)0x0) {
    puVar7 = (undefined8 *)operator_new(800);
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar7 + 2) = 0;
      FWeakObjectPtr::operator=((longlong)puVar7 + 0x14,plVar6);
      *puVar7 = &PTR_FUN_145a0cd48;
      uVar11 = uRam0000000146b43f1c;
      *(undefined4 *)(puVar7 + 4) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x24) = 0;
      *(undefined4 *)(puVar7 + 5) = 0;
      *(uint *)((longlong)puVar7 + 0x2c) = uVar11;
      puVar7[6] = 0;
      puVar7[7] = 0;
      uVar11 = uRam0000000146b43f14 & uRam0000000146b43f24;
      uVar12 = uRam0000000146b43f18 & uRam0000000146b43f28;
      uVar13 = uRam0000000146b43f1c & uRam0000000146b43f2c;
      *(uint *)(puVar7 + 8) = _DAT_146b43f10 & _DAT_146b43f20;
      *(uint *)((longlong)puVar7 + 0x44) = uVar11;
      *(uint *)(puVar7 + 9) = uVar12;
      *(uint *)((longlong)puVar7 + 0x4c) = uVar13;
      FUN_142b803c0(puVar7 + 10);
      puVar7[0xf] = 0;
      puVar7[0x10] = 0;
      puVar7[0x11] = 0;
      puVar7[0x12] = 0;
      FUN_1438d7640(puVar7 + 0x13);
      FUN_1437fac90(puVar7 + 0x1c);
      puVar7[0x60] = 0;
      puVar7[0x61] = 0;
      FWeakObjectPtr::operator=(puVar7 + 0x62,plVar6);
      puVar9 = puVar7;
    }
    lVar8 = FWeakObjectPtr::Get(puVar9 + 0x62);
    if (((lVar8 != 0) && (*(longlong **)(lVar8 + 0x708) != (longlong *)0x0)) &&
       (lVar8 = (**(code **)(**(longlong **)(lVar8 + 0x708) + 0x148))(), lVar8 != 0)) {
      UWorld::IsGameWorld(lVar8);
    }
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9,1);
    }
    lVar8 = lRam00000001468b5b78;
    plVar6[0xe6] = _DAT_1468b5b70;
    plVar6[0xe7] = lVar8;
    lVar8 = lRam00000001468b5b88;
    plVar6[0xe8] = _DAT_1468b5b80;
    plVar6[0xe9] = lVar8;
    uVar5 = uRam00000001468b5b9c;
    uVar4 = uRam00000001468b5b98;
    uVar3 = uRam00000001468b5b94;
    *(undefined4 *)(plVar6 + 0xea) = _DAT_1468b5b90;
    *(undefined4 *)((longlong)plVar6 + 0x754) = uVar3;
    *(undefined4 *)(plVar6 + 0xeb) = uVar4;
    *(undefined4 *)((longlong)plVar6 + 0x75c) = uVar5;
    *(undefined4 *)((longlong)plVar6 + 0x6f4) = 0;
    *(undefined4 *)(plVar6 + 0xdf) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x6fc) = 0;
    *(undefined4 *)(plVar6 + 0xe0) = 0;
    if (plVar6[0xf4] != 0) {
      FUN_142b83000(plVar6[0xf4] + 0x28);
      plVar6[0xed] = plVar6[0xec];
    }
    (**(code **)(*plVar6 + 0x8f0))(plVar6);
  }
  return;
}



// FUNCTION 142f8fba0 FUN_142f8fba0 body=1088 status=ok
// SIG undefined FUN_142f8fba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f8fba0(longlong param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_108 [48];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x68) == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0xd0);
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = FUN_1438ed3d0(lVar2);
    }
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    FUN_14370c030(uVar3);
  }
  else {
    FUN_1438ed910();
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    local_d8 = 0.0;
    fStack_d4 = 0.0;
    fStack_d0 = 0.0;
    fVar4 = ABS(*(float *)(param_1 + 0x44));
    if (ABS(*(float *)(param_1 + 0x40)) <= ABS(*(float *)(param_1 + 0x44))) {
      fVar4 = ABS(*(float *)(param_1 + 0x40));
    }
    local_c8 = 0;
    uStack_c0 = 0;
    if (ABS(*(float *)(param_1 + 0x48)) <= fVar4) {
      fVar4 = ABS(*(float *)(param_1 + 0x48));
    }
    fStack_cc = fVar4 * *(float *)(param_1 + 0x28) * 0.01;
    FUN_1438ed530(*(undefined8 *)(param_1 + 0x68),&local_d8);
  }
  if (*(char *)(param_1 + 0x3c) != '\0') {
    fVar5 = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x34) * 0.5;
    fVar6 = *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x30) * 0.5;
    fVar9 = *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x38) * 0.5;
    fVar8 = -fVar6;
    fVar7 = -fVar5;
    fVar4 = -fVar9;
    local_d8 = fVar8 * 0.01;
    fStack_d4 = fVar5 * 0.01;
    fStack_d0 = fVar4 * 0.01;
    fStack_cc = 0.0;
    local_c8 = CONCAT44(fVar5 * 0.01,fVar6 * 0.01);
    uStack_c0 = (ulonglong)(uint)(fVar4 * 0.01);
    FUN_1438ed490(*(undefined8 *)(param_1 + 0x68),&local_d8);
    local_d8 = fVar6 * 0.01;
    fStack_d4 = fVar5 * 0.01;
    fStack_d0 = fVar4 * 0.01;
    fStack_cc = 0.0;
    local_c8 = CONCAT44(fVar7 * 0.01,fVar6 * 0.01);
    uStack_c0 = (ulonglong)(uint)(fVar4 * 0.01);
    FUN_1438ed490(*(undefined8 *)(param_1 + 0x68),&local_d8);
    local_d8 = fVar6 * 0.01;
    fStack_d4 = fVar7 * 0.01;
    fStack_d0 = fVar4 * 0.01;
    fStack_cc = 0.0;
    local_c8 = CONCAT44(fVar7 * 0.01,fVar8 * 0.01);
    uStack_c0 = (ulonglong)(uint)(fVar4 * 0.01);
    FUN_1438ed490(*(undefined8 *)(param_1 + 0x68),&local_d8);
    local_d8 = fVar8 * 0.01;
    fStack_d4 = fVar7 * 0.01;
    fStack_d0 = fVar4 * 0.01;
    fStack_cc = 0.0;
    local_c8 = CONCAT44(fVar5 * 0.01,fVar8 * 0.01);
    uStack_c0 = (ulonglong)(uint)(fVar4 * 0.01);
    FUN_1438ed490(*(undefined8 *)(param_1 + 0x68),&local_d8);
    local_d8 = fVar8 * 0.01;
    fStack_d4 = fVar5 * 0.01;
    fStack_d0 = fVar9 * 0.01;
    fStack_cc = 0.0;
    local_c8 = CONCAT44(fVar5 * 0.01,fVar6 * 0.01);
    uStack_c0 = (ulonglong)(uint)(fVar9 * 0.01);
    FUN_1438ed490(*(undefined8 *)(param_1 + 0x68),&local_d8);
    local_d8 = fVar6 * 0.01;
    fStack_d4 = fVar5 * 0.01;
    fStack_d0 = fVar9 * 0.01;
    fStack_cc = 0.0;
    local_c8 = CONCAT44(fVar7 * 0.01,fVar6 * 0.01);
    uStack_c0 = (ulonglong)(uint)(fVar9 * 0.01);
    FUN_1438ed490(*(undefined8 *)(param_1 + 0x68),&local_d8);
    local_d8 = fVar6 * 0.01;
    fStack_d4 = fVar7 * 0.01;
    fStack_d0 = fVar9 * 0.01;
    fStack_cc = 0.0;
    local_c8 = CONCAT44(fVar7 * 0.01,fVar8 * 0.01);
    uStack_c0 = (ulonglong)(uint)(fVar9 * 0.01);
    FUN_1438ed490(*(undefined8 *)(param_1 + 0x68),&local_d8);
    local_d8 = fVar8 * 0.01;
    fStack_d4 = fVar7 * 0.01;
    fStack_d0 = fVar9 * 0.01;
    fStack_cc = 0.0;
    local_c8 = CONCAT44(fVar5 * 0.01,fVar8 * 0.01);
    uStack_c0 = (ulonglong)(uint)(fVar9 * 0.01);
    FUN_1438ed490(*(undefined8 *)(param_1 + 0x68),&local_d8);
  }
  return;
}



// FUNCTION 142f8ffe0 FUN_142f8ffe0 body=114 status=ok
// SIG undefined FUN_142f8ffe0(void)

undefined8 FUN_142f8ffe0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(char *)(param_1 + 0xab1) == '\0') || (*(float *)(param_1 + 0x6f0) == 0.0)) {
    return 0;
  }
  plVar2 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 0x118);
  }
  if ((((plVar2 != (longlong *)0x0) && (lVar1 = (**(code **)(*plVar2 + 0x690))(plVar2), lVar1 == 0))
      && (plVar2 = (longlong *)FUN_14222e2a0(plVar2), plVar2 != (longlong *)0x0)) &&
     (lVar1 = (**(code **)(*plVar2 + 0x678))(plVar2), lVar1 != 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 142f90060 FUN_142f90060 body=140 status=ok
// SIG undefined FUN_142f90060(void)

undefined8 FUN_142f90060(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  if (((*(char *)(param_1 + 0x428) == '\x01') ||
      (((*(char *)(param_1 + 0x428) != '\x02' && (*(char *)(param_1 + 0xab3) != '\0')) ||
       (cVar2 = FUN_142fa53c0(param_1), cVar2 != '\0')))) &&
     ((cVar2 = FUN_1407c3030(param_1 + 0x390), cVar2 == '\0' && (*(char *)(param_1 + 0xab0) != '\0')
      ))) {
    if ((*(longlong *)(param_1 + 0x7c0) != 0) && (*(longlong *)(param_1 + 0x7c8) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x7c8) + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) {
        return 0;
      }
    }
    if ((*(char *)(param_1 + 0x365) == '\0') && (*(char *)(param_1 + 0x671) == '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142f900f0 FUN_142f900f0 body=489 status=ok
// SIG undefined FUN_142f900f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f900f0(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  byte *pbVar7;
  undefined4 local_res8 [2];
  undefined4 local_res20 [2];
  
  cVar4 = *param_1;
  if (cVar4 == '\0') {
    *param_2 = *(undefined8 *)(param_1 + 4);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0xc);
    *param_3 = _DAT_1468b5d90;
    *(undefined4 *)(param_3 + 1) = DAT_1468b5d98;
    return;
  }
  if (cVar4 == '\x01') {
    plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x10);
    (**(code **)(*plVar6 + 0x6c0))(plVar6,param_2,local_res8,local_res20);
    *(undefined4 *)param_3 = local_res8[0];
    *(undefined4 *)((longlong)param_3 + 4) = local_res8[0];
    *(undefined4 *)(param_3 + 1) = local_res20[0];
    if ((((*(float *)(param_1 + 4) <= -(float)DAT_14676e1b0) ||
         ((float)DAT_14676e1b0 <= *(float *)(param_1 + 4))) ||
        (*(float *)(param_1 + 8) <= -DAT_14676e1b0._4_4_)) ||
       (((DAT_14676e1b0._4_4_ <= *(float *)(param_1 + 8) ||
         (*(float *)(param_1 + 0xc) <= -DAT_14676e1b8)) ||
        (DAT_14676e1b8 <= *(float *)(param_1 + 0xc))))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      *param_2 = *(undefined8 *)(param_1 + 4);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0xc);
    }
    else {
      lVar5 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((((bVar3) && (plVar6 = (longlong *)plVar6[0x120], plVar6 != (longlong *)0x0)) &&
          (cVar4 = (**(code **)(*plVar6 + 0x558))(plVar6), cVar4 != '\0')) &&
         (pbVar7 = (byte *)ASBZCharacter::GetCharacterTag(plVar6), (*pbVar7 & 1) != 0)) {
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(pbVar7 + 0x1c);
        return;
      }
    }
  }
  else if (cVar4 == '\x02') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x18);
    uVar1 = *(undefined4 *)(lVar5 + 0x224);
    uVar2 = *(undefined4 *)(lVar5 + 0x228);
    *(undefined4 *)param_2 = *(undefined4 *)(lVar5 + 0x220);
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *param_3 = *(undefined8 *)(lVar5 + 0x1dc);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar5 + 0x1e4);
    return;
  }
  return;
}



// FUNCTION 142f902e0 FUN_142f902e0 body=592 status=ok
// SIG undefined FUN_142f902e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142f902e0(undefined8 *param_1,longlong param_2,longlong param_3,float *param_4)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_78;
  float fStack_74;
  float fStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  
  *param_1 = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 1) = DAT_1468b5d98;
  iVar9 = (int)param_3;
  if ((-1 < iVar9) && (iVar7 = (int)((ulonglong)param_3 >> 0x20), -1 < param_3)) {
    uVar8 = 0;
    uVar5 = uVar8;
    if (param_2 != 0) {
      uVar5 = *(ulonglong *)(param_2 + 0x8f8);
    }
    if ((((uVar5 != 0) && (lVar1 = *(longlong *)(uVar5 + 0x130), lVar1 != 0)) &&
        (iVar9 < *(int *)(lVar1 + 0x40))) &&
       ((lVar1 = *(longlong *)((longlong)iVar9 * 0x100 + 8 + *(longlong *)(lVar1 + 0x38)),
        lVar1 != 0 && (iVar7 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x20))))) {
      FUN_142fbd3f0(lVar1,*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18) + (longlong)iVar7 * 0x18
                   );
      fVar14 = 3.4028235e+38;
      iVar9 = -1;
      bVar3 = false;
      do {
        iVar7 = (int)uVar8;
        if (iVar7 == 0) {
          fVar10 = *param_4;
          fVar13 = local_78 * 100.0;
        }
        else if (iVar7 == 1) {
          fVar10 = param_4[1];
          fVar13 = fStack_74 * 100.0;
        }
        else {
          fVar10 = param_4[2];
          fVar13 = fStack_70 * 100.0;
        }
        fVar10 = ABS(fVar13 - fVar10);
        if (iVar7 == 0) {
          fVar13 = *param_4;
          fVar12 = local_68 * 100.0;
        }
        else if (iVar7 == 1) {
          fVar13 = param_4[1];
          fVar12 = fStack_64 * 100.0;
        }
        else {
          fVar13 = param_4[2];
          fVar12 = fStack_60 * 100.0;
        }
        fVar12 = ABS(fVar12 - fVar13);
        fVar13 = fVar10;
        if (fVar10 > fVar12) {
          fVar13 = fVar12;
        }
        iVar4 = iVar7;
        bVar2 = fVar10 <= fVar12;
        if (fVar14 <= fVar13) {
          iVar4 = iVar9;
          fVar13 = fVar14;
          bVar2 = bVar3;
        }
        fVar14 = fVar13;
        uVar8 = (ulonglong)(iVar7 + 1U);
        iVar9 = iVar4;
        bVar3 = bVar2;
      } while ((int)(iVar7 + 1U) < 3);
      if (bVar2) {
        uVar11 = 0x3f800000;
      }
      else {
        uVar11 = 0xbf800000;
      }
      puVar6 = param_1;
      if ((iVar4 != 0) && (puVar6 = (undefined8 *)((longlong)param_1 + 4), iVar4 != 1)) {
        puVar6 = param_1 + 1;
      }
      *(undefined4 *)puVar6 = uVar11;
    }
  }
  return param_1;
}



// FUNCTION 142f90530 FUN_142f90530 body=801 status=ok
// SIG undefined FUN_142f90530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f90530(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 ***pppuVar3;
  int *piVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined8 ***pppuVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_d8 [32];
  undefined2 local_b8;
  undefined8 ***local_a8;
  undefined8 local_a0;
  float local_98;
  undefined1 local_94 [4];
  undefined8 ***local_90;
  float *local_88;
  undefined1 local_78 [16];
  float local_68;
  float fStack_64;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  if ((*(char *)(param_1 + 0x38) - 3U & 0xfd) != 0) {
    return;
  }
  FWeakObjectPtr::operator=(&local_90);
  local_a8 = local_90;
  piVar4 = (int *)TSet<TTuple<TWeakObjectPtr<AXHighLevelWaypoint,FWeakObjectPtr>,float>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AXHighLevelWaypoint,FWeakObjectPtr>,float,0>,FDefaultSetAllocator>
                  ::FindId(*(longlong *)(param_1 + 0x60) + 0x860,local_94,&local_a8);
  if (*piVar4 != -1) {
    return;
  }
  lVar5 = USignificanceManager::GetWorld(*(undefined8 *)(param_1 + 0x60));
  lVar9 = *(longlong *)(param_1 + 0x40);
  if (lVar5 == 0) {
    fVar11 = 0.0;
  }
  else {
    lVar2 = *(longlong *)(lVar9 + 0x38);
    if (lVar2 == 0) {
      fVar11 = 0.0;
    }
    else {
      cVar1 = *(char *)(lVar9 + 0x48);
      if (cVar1 == '\0') {
        fVar11 = 3.4028235e+38;
      }
      else {
        fVar11 = 0.0;
        if (cVar1 != '\x01') goto LAB_142f90760;
      }
      uVar7 = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b44194) &&
         (_Init_thread_header(&DAT_146b44194), DAT_146b44194 == -1)) {
        DAT_14676e1c0 = (undefined2 *)0x0;
        _DAT_14676e1c8 = 0x31;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14676e1c0,0);
        local_b8 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>
                  (DAT_14676e1c0,0x31,"UGbxAnimStateManager_AINav::CalcCombinedDistance");
        atexit((_func_5014 *)&LAB_143ec2760);
        _Init_thread_footer(&DAT_146b44194);
      }
      local_a8 = (undefined8 ***)0x0;
      puVar6 = &DAT_143f3eda8;
      if (DAT_14676e1c8 != 0) {
        puVar6 = DAT_14676e1c0;
      }
      local_a0 = 0;
      FUN_142f87330(lVar2,puVar6,&local_a8);
      pppuVar3 = local_a8;
      uVar10 = (ulonglong)((longlong)(local_a8 + (int)local_a0) + (7 - (longlong)local_a8)) >> 3;
      if (local_a8 + (int)local_a0 < local_a8) {
        uVar10 = uVar7;
      }
      pppuVar8 = local_a8;
      fVar12 = fVar11;
      if (uVar10 != 0) {
        do {
          FUN_142ca1f70(*pppuVar8,local_78,lVar5);
          fVar11 = SQRT(fStack_64 * fStack_64 + local_68 * local_68);
          if (cVar1 == '\0') {
            if (fVar12 <= fVar11) {
              fVar11 = fVar12;
            }
          }
          else if (fVar11 <= fVar12) {
            fVar11 = fVar12;
          }
          uVar7 = uVar7 + 1;
          pppuVar8 = pppuVar8 + 1;
          fVar12 = fVar11;
        } while (uVar7 != uVar10);
      }
      if (cVar1 == '\0') {
        fVar11 = fVar11 + *(float *)(lVar9 + 0x4c);
      }
      if (pppuVar3 != (undefined8 ***)0x0) {
        FMemory::Free(pppuVar3);
      }
      lVar9 = *(longlong *)(param_1 + 0x40);
    }
  }
LAB_142f90760:
  local_98 = fVar11;
  FWeakObjectPtr::operator=(&local_a8,lVar9);
  local_90 = &local_a8;
  local_88 = &local_98;
  FUN_142f85f90(*(longlong *)(param_1 + 0x60) + 0x860,local_94,&local_90,0);
  return;
}



// FUNCTION 142f90860 FUN_142f90860 body=882 status=ok
// SIG undefined FUN_142f90860(void)

float * FUN_142f90860(float *param_1,float *param_2,float *param_3,float *param_4,
                     undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar8 = *param_3 - *param_2;
  fVar6 = param_3[1] - param_2[1];
  fVar1 = fVar6 * fVar6 + fVar8 * fVar8;
  if (fVar1 == 1.0) {
    fVar7 = fVar6;
    fVar9 = fVar8;
    fVar11 = param_3[2] - param_2[2];
    if (param_3[2] - param_2[2] != 0.0) {
LAB_142f909c3:
      fVar7 = fVar6;
      fVar9 = fVar8;
      fVar11 = 0.0;
    }
  }
  else {
    fVar7 = DAT_1468b5d94;
    fVar9 = DAT_1468b5d90;
    fVar11 = DAT_1468b5d98;
    if (1e-08 <= fVar1) {
      auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
      fVar7 = auVar3._0_4_;
      fVar7 = fVar7 + fVar7 * (0.5 - fVar1 * 0.5 * fVar7 * fVar7);
      fVar7 = fVar7 + fVar7 * (0.5 - fVar1 * 0.5 * fVar7 * fVar7);
      fVar8 = fVar8 * fVar7;
      fVar6 = fVar6 * fVar7;
      goto LAB_142f909c3;
    }
  }
  fVar6 = *param_4 - *param_3;
  fVar8 = param_4[1] - param_3[1];
  fVar1 = fVar8 * fVar8 + fVar6 * fVar6;
  if (fVar1 == 1.0) {
    fVar2 = fVar6;
    fVar5 = fVar8;
    fVar10 = param_4[2] - param_3[2];
    if (param_4[2] - param_3[2] == 0.0) goto LAB_142f90a86;
  }
  else {
    fVar2 = DAT_1468b5d90;
    fVar5 = DAT_1468b5d94;
    fVar10 = DAT_1468b5d98;
    if (fVar1 < 1e-08) goto LAB_142f90a86;
    auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
    fVar2 = auVar3._0_4_;
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    fVar6 = fVar6 * fVar2;
    fVar8 = fVar8 * fVar2;
  }
  fVar2 = fVar6;
  fVar5 = fVar8;
  fVar10 = 0.0;
LAB_142f90a86:
  fVar6 = fVar5 * fVar7 + fVar2 * fVar9 + fVar10 * fVar11;
  fVar1 = -1.0;
  if ((-1.0 <= fVar6) && (fVar1 = fVar6, 1.0 <= fVar6)) {
    fVar1 = 1.0;
  }
  fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
  fVar4 = fVar11 * DAT_1464aa798._4_4_;
  fVar6 = fVar7 * DAT_1464aa7a0;
  fVar8 = fVar9 * DAT_1464aa7a0;
  fVar11 = fVar11 * (float)DAT_1464aa798;
  fVar7 = fVar7 * (float)DAT_1464aa798;
  fVar9 = fVar9 * DAT_1464aa798._4_4_;
  FUN_142c628c0(param_1);
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)param_4;
  param_1[3] = param_4[2];
  *(undefined8 *)(param_1 + 4) = *param_5;
  param_1[6] = *(float *)(param_5 + 1);
  if ((fVar4 - fVar6) * fVar2 + (fVar8 - fVar11) * fVar5 + (fVar7 - fVar9) * fVar10 < 0.0) {
    fVar6 = -57.295776;
  }
  else {
    fVar6 = 57.295776;
  }
  *param_1 = fVar1 * fVar6;
  return param_1;
}



// FUNCTION 142f90be0 FUN_142f90be0 body=875 status=ok
// SIG undefined FUN_142f90be0(void)

float * FUN_142f90be0(char *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  byte *pbVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_res8 [2];
  float local_res10 [2];
  undefined8 local_58;
  float local_50;
  
  FUN_142c62620(param_2);
  fVar7 = *(float *)(param_1 + 0x20);
  if (fVar7 <= 15.0) {
    fVar7 = 15.0;
  }
  param_2[3] = fVar7;
  fVar7 = *(float *)(param_1 + 0x24);
  if (fVar7 <= 15.0) {
    fVar7 = 15.0;
  }
  param_2[4] = fVar7;
  cVar2 = *param_1;
  if (cVar2 == '\0') {
    *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 4);
    param_2[2] = *(float *)(param_1 + 0xc);
    local_res10[0] = DAT_1468b5d98;
    local_res8[0] = DAT_1468b5d94;
    fVar7 = DAT_1468b5d90;
    goto LAB_142f90e11;
  }
  if (cVar2 != '\x01') {
    local_res10[0] = 0.0;
    local_res8[0] = 0.0;
    fVar7 = 0.0;
    if (cVar2 == '\x02') {
      lVar3 = FWeakObjectPtr::Get(param_1 + 0x18);
      fVar7 = *(float *)(lVar3 + 0x224);
      fVar8 = *(float *)(lVar3 + 0x228);
      *param_2 = *(float *)(lVar3 + 0x220);
      param_2[1] = fVar7;
      param_2[2] = fVar8;
      local_58 = *(undefined8 *)(lVar3 + 0x1dc);
      local_50 = *(float *)(lVar3 + 0x1e4);
      local_res10[0] = local_50;
      local_res8[0] = (float)((ulonglong)local_58 >> 0x20);
      fVar7 = (float)local_58;
    }
    goto LAB_142f90e11;
  }
  plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x6c0))(plVar4,param_2,local_res8,local_res10);
  if ((*(float *)(param_1 + 4) <= -(float)DAT_14676e1b0) ||
     ((float)DAT_14676e1b0 <= *(float *)(param_1 + 4))) {
LAB_142f90d68:
    bVar1 = false;
  }
  else {
    if ((*(float *)(param_1 + 8) <= -DAT_14676e1b0._4_4_) ||
       (DAT_14676e1b0._4_4_ <= *(float *)(param_1 + 8))) goto LAB_142f90d68;
    if ((*(float *)(param_1 + 0xc) <= -DAT_14676e1b8) ||
       (DAT_14676e1b8 <= *(float *)(param_1 + 0xc))) goto LAB_142f90d68;
    bVar1 = true;
  }
  fVar7 = local_res8[0];
  if (bVar1) {
    *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 4);
    param_2[2] = *(float *)(param_1 + 0xc);
  }
  else {
    lVar3 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (plVar4 = (longlong *)plVar4[0x120], plVar4 != (longlong *)0x0)) {
      cVar2 = (**(code **)(*plVar4 + 0x558))(plVar4);
      if (cVar2 != '\0') {
        pbVar5 = (byte *)ASBZCharacter::GetCharacterTag(plVar4);
        if ((*pbVar5 & 1) != 0) {
          param_2[2] = *(float *)(pbVar5 + 0x1c);
        }
      }
    }
  }
LAB_142f90e11:
  pfVar6 = (float *)FUN_142fa28f0(param_1,&local_58);
  *param_2 = *param_2 + *pfVar6;
  param_2[1] = pfVar6[1] + param_2[1];
  fVar8 = pfVar6[2] + param_2[2];
  param_2[2] = fVar8;
  if (param_1[0x49] != '\0') {
    fVar8 = fVar8 - local_res10[0];
    param_2[2] = fVar8;
  }
  if (param_1[0x44] != '\0') {
    param_2[3] = *param_3 + param_2[3];
  }
  if (param_1[0x46] != '\0') {
    if (local_res8[0] <= fVar7) {
      local_res8[0] = fVar7;
    }
    param_2[3] = local_res8[0] + param_2[3];
  }
  if (param_1[0x48] == '\0') {
    if (param_1[0x45] != '\0') {
      param_2[4] = param_3[1] + param_2[4];
    }
    if (param_1[0x47] != '\0') {
      param_2[4] = local_res10[0] + param_2[4];
    }
  }
  else {
    if (param_1[0x49] != '\0') {
      fVar8 = fVar8 + local_res10[0];
    }
    fVar9 = ((fVar8 - local_res10[0]) - param_2[4]) - param_3[1];
    fVar7 = (fVar8 + local_res10[0] + param_2[4]) - param_3[1];
    fVar8 = (fVar9 + fVar7) * 0.5;
    param_2[2] = fVar8;
    param_2[4] = (fVar7 - fVar9) * 0.5;
  }
  if (*(char *)((longlong)param_3 + 0x99) == '\x02') {
    param_2[2] = fVar8 + *(float *)(param_1 + 0x4c);
  }
  param_2[4] = param_2[4] + 1.0;
  return param_2;
}



// FUNCTION 142f90f50 FUN_142f90f50 body=582 status=ok
// SIG undefined FUN_142f90f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * FUN_142f90f50(void *param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined1 *puVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 auStack_278 [32];
  longlong local_258;
  int local_250;
  uint local_24c;
  undefined1 local_248 [512];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  if ((param_2 != 0) && (iVar5 = FWmfMediaTextureSample::GetFormat(param_2), iVar5 != 0)) {
    piVar7 = (int *)FUN_1407ffb90(param_2);
    puVar12 = (undefined1 *)0x0;
    if (*piVar7 == 0) {
      local_258 = 0;
      local_250 = 0;
      local_24c = 0x80000000;
      FUN_14385f7e0(param_2);
      local_48 = (undefined1 *)0x0;
      bVar2 = 1 < local_250;
      uVar6 = local_250 - (uint)bVar2;
      if ((int)uVar6 <= (int)param_3) {
        param_3 = uVar6;
      }
      local_40 = (ulonglong)param_3;
      if (0 < (int)param_3) {
        FUN_142fb1030(local_248);
      }
      lVar11 = (longlong)(int)param_3;
      puVar8 = local_248;
      if (local_48 != (undefined1 *)0x0) {
        puVar8 = puVar12;
      }
      _guard_xfg_dispatch_icall_nop((void *)((ulonglong)puVar8 | (ulonglong)local_48),0,lVar11 << 4)
      ;
      if (0 < (int)param_3) {
        lVar10 = (ulonglong)bVar2 << 4;
        do {
          puVar8 = local_248;
          if (local_48 != (undefined1 *)0x0) {
            puVar8 = local_48;
          }
          pfVar9 = (float *)(puVar8 + (longlong)puVar12);
          puVar12 = puVar12 + 0x10;
          pfVar1 = (float *)(lVar10 + local_258);
          fVar3 = pfVar1[1];
          fVar4 = pfVar1[2];
          *pfVar9 = *pfVar1;
          pfVar9[1] = fVar3;
          pfVar9[2] = fVar4;
          *pfVar9 = *pfVar9 * 100.0;
          pfVar9[1] = pfVar9[1] * 100.0;
          pfVar9[2] = pfVar9[2] * 100.0;
          lVar11 = lVar11 + -1;
          lVar10 = lVar10 + 0x10;
        } while (lVar11 != 0);
      }
      puVar12 = local_48;
      *(undefined8 *)((longlong)param_1 + 0x200) = 0;
      if (local_48 == (undefined1 *)0x0) {
        _guard_xfg_dispatch_icall_nop(param_1,local_248,0x200);
      }
      if (*(longlong *)((longlong)param_1 + 0x200) != 0) {
        FMemory::Free();
        puVar12 = local_48;
      }
      *(undefined1 **)((longlong)param_1 + 0x200) = puVar12;
      *(undefined4 *)((longlong)param_1 + 0x208) = (undefined4)local_40;
      *(undefined4 *)((longlong)param_1 + 0x20c) = local_40._4_4_;
      local_40 = 0;
      local_48 = (undefined1 *)0x0;
      local_250 = 0;
      if ((int)local_24c < 0) {
        return param_1;
      }
      FUN_143702e10(&PTR_vftable_1467f0638,local_258,0x10,local_24c & 0x3fffffff);
      return param_1;
    }
  }
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  return param_1;
}



// FUNCTION 142f911a0 FUN_142f911a0 body=760 status=ok
// SIG undefined FUN_142f911a0(void)

float * FUN_142f911a0(longlong param_1,float *param_2)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 local_4c [68];
  
  *(undefined8 *)param_2 = DAT_146b43f30;
  param_2[2] = DAT_146b43f38;
  if ((*(longlong *)(param_1 + 0x7c0) != 0) && (*(longlong *)(param_1 + 0x7c8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x7c8) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) goto LAB_142f911f1;
  }
  if (*(int *)(param_1 + 0x928) < 1) {
    fVar5 = *(float *)(param_1 + 0x300);
    fVar2 = *(float *)(param_1 + 0x304);
    fVar11 = *(float *)(param_1 + 0x308);
    fVar8 = fVar5 * fVar5 + fVar2 * fVar2 + fVar11 * fVar11;
    if (fVar8 == 1.0) {
      uVar7 = *(undefined8 *)(param_1 + 0x300);
      fVar11 = *(float *)(param_1 + 0x308);
    }
    else if (1e-08 <= fVar8) {
      auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar9 = auVar10._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
      fVar11 = fVar11 * fVar9;
      uVar7 = CONCAT44(fVar2 * fVar9,fVar5 * fVar9);
    }
    else {
      uVar7 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      fVar11 = DAT_1468b5d98;
    }
    *(undefined8 *)param_2 = uVar7;
    param_2[2] = fVar11;
    if ((*(char *)(param_1 + 0x780) == '\0') &&
       (cVar3 = FUN_142fb4880(param_1,param_2), cVar3 != '\0')) {
      *param_2 = -*param_2;
      param_2[1] = -param_2[1];
      param_2[2] = -param_2[2];
    }
    fVar5 = *param_2;
    if (((((fVar5 <= -(float)DAT_14676e1b0) || ((float)DAT_14676e1b0 <= fVar5)) ||
         (fVar2 = param_2[1], fVar2 <= -DAT_14676e1b0._4_4_)) ||
        (((DAT_14676e1b0._4_4_ <= fVar2 || (fVar11 = param_2[2], fVar11 <= -DAT_14676e1b8)) ||
         (DAT_14676e1b8 <= fVar11)))) || (((fVar5 == 0.0 && (fVar2 == 0.0)) && (fVar11 == 0.0)))) {
      if ((((ABS(*(float *)(param_1 + 0x768)) <= 0.0001) &&
           (ABS(*(float *)(param_1 + 0x76c)) <= 0.0001)) &&
          (ABS(*(float *)(param_1 + 0x770)) <= 0.0001)) || (*(int *)(param_1 + 0x270) != 3)) {
        *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x774);
        fVar5 = *(float *)(param_1 + 0x77c);
      }
      else {
        *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x768);
        fVar5 = *(float *)(param_1 + 0x770);
      }
      param_2[2] = fVar5;
    }
    return param_2;
  }
LAB_142f911f1:
  puVar6 = (undefined8 *)FUN_142fa2200(param_1 + 0x790,local_4c);
  *(undefined8 *)param_2 = *puVar6;
  param_2[2] = *(float *)(puVar6 + 1);
  return param_2;
}



// FUNCTION 142f914a0 FUN_142f914a0 body=923 status=ok
// SIG undefined FUN_142f914a0(void)

float * FUN_142f914a0(longlong param_1,float *param_2,longlong param_3,longlong param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined8 uStack_b4;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  longlong local_50 [3];
  undefined1 local_38 [32];
  
  pcVar1 = (char *)(param_1 + 0x68);
  if (*pcVar1 == '\x01') {
    lVar5 = 0x10;
LAB_142f91517:
    cVar2 = FWeakObjectPtr::IsValid(pcVar1 + lVar5);
    bVar8 = cVar2 == '\0';
LAB_142f91522:
    if (bVar8) {
      FUN_142f89390(param_2);
      return param_2;
    }
  }
  else {
    if (*pcVar1 == '\x02') {
      lVar5 = 0x18;
      goto LAB_142f91517;
    }
    if (((float)DAT_14676e1b0 == *(float *)(param_1 + 0x6c)) &&
       (DAT_14676e1b0._4_4_ == *(float *)(param_1 + 0x70))) {
      bVar8 = DAT_14676e1b8 == *(float *)(param_1 + 0x74);
      goto LAB_142f91522;
    }
  }
  FUN_142f90be0(pcVar1,&local_98,param_3);
  if ((*(char *)(param_3 + 0x99) == *(char *)(param_4 + 0x1c)) &&
     (cVar2 = FUN_142c66f30(&local_98,param_4 + 0x50,0x3f800000), cVar2 != '\0')) {
    if (*(char *)(param_3 + 0x99) == '\x01') {
      iVar3 = FUN_142fa3830(*(undefined8 *)(param_3 + 0x60),*(undefined8 *)(param_3 + 0x70));
      iVar4 = FUN_142fa3830(*(undefined8 *)(param_3 + 0x60),*(undefined8 *)(param_4 + 0x2c));
      if (((-1 < iVar3) && (-1 < iVar4)) && (iVar3 != iVar4)) goto LAB_142f915ab;
    }
    else if (*(char *)(param_3 + 0x99) == '\x02') {
      iVar3 = FUN_142fa37d0(*(undefined8 *)(param_3 + 0x60),*(undefined8 *)(param_3 + 0x78));
      iVar4 = FUN_142fa37d0(*(undefined8 *)(param_3 + 0x60),*(undefined8 *)(param_4 + 0x34));
      if (((-1 < iVar3) && (-1 < iVar4)) && (iVar3 != iVar4)) goto LAB_142f915ab;
    }
    uVar7 = *(undefined8 *)(param_4 + 0x28);
    *(undefined8 *)param_2 = *(undefined8 *)(param_4 + 0x20);
    *(undefined8 *)(param_2 + 2) = uVar7;
    uVar7 = *(undefined8 *)(param_4 + 0x38);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_4 + 0x30);
    *(undefined8 *)(param_2 + 6) = uVar7;
    uVar7 = *(undefined8 *)(param_4 + 0x48);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_4 + 0x40);
    *(undefined8 *)(param_2 + 10) = uVar7;
    return param_2;
  }
LAB_142f915ab:
  fStack_bc = -NAN;
  fStack_b8 = -NAN;
  uStack_b4 = 0xffffffffffffffff;
  FUN_142c62620(&fStack_ac);
  fStack_bc = -NAN;
  fStack_b8 = -NAN;
  uStack_b4 = 0xffffffffffffffff;
  puVar6 = (undefined8 *)FUN_142c62620(local_50);
  fStack_ac = (float)*puVar6;
  fStack_a8 = (float)((ulonglong)*puVar6 >> 0x20);
  fStack_a4 = (float)puVar6[1];
  fStack_a0 = (float)((ulonglong)puVar6[1] >> 0x20);
  local_9c = *(float *)(puVar6 + 2);
  local_c8 = CONCAT44(DAT_14676e1b0._4_4_,(float)DAT_14676e1b0);
  fStack_c0 = DAT_14676e1b8;
  if (*(char *)(param_1 + 0xc2) == '\0') {
    uVar7 = FUN_142fa4d50(param_1,local_50,param_3);
    puVar6 = (undefined8 *)
             FUN_142f9b9f0(&local_80,param_3,&local_98,param_4 + 0x20,param_1 + 0x10,uVar7);
    local_c8 = *puVar6;
    fStack_c0 = (float)puVar6[1];
    fStack_bc = (float)((ulonglong)puVar6[1] >> 0x20);
    fStack_b8 = *(float *)(puVar6 + 2);
    uStack_b4._0_4_ = *(float *)((longlong)puVar6 + 0x14);
    uStack_b4._4_4_ = *(float *)(puVar6 + 3);
    fStack_ac = *(float *)((longlong)puVar6 + 0x1c);
    fStack_a8 = (float)puVar6[4];
    fStack_a4 = (float)((ulonglong)puVar6[4] >> 0x20);
    fStack_a0 = (float)puVar6[5];
    local_9c = (float)((ulonglong)puVar6[5] >> 0x20);
    if (local_50[0] != 0) {
      FMemory::Free();
    }
    FUN_142f9b270(param_1,&local_c8,param_1 + 0x10);
    cVar2 = FUN_142fa8a90(param_1 + 0x20);
    *(bool *)param_1 = cVar2 == '\0';
    local_80 = (float)local_c8;
    fStack_7c = local_c8._4_4_;
    fStack_78 = fStack_c0;
    fStack_74 = fStack_bc;
    fStack_70 = fStack_b8;
    fStack_6c = (float)uStack_b4;
    fStack_68 = uStack_b4._4_4_;
    fStack_64 = fStack_ac;
    local_60 = fStack_a8;
    fStack_5c = fStack_a4;
    fStack_58 = fStack_a0;
    fStack_54 = local_9c;
  }
  else {
    if (*(char *)(param_1 + 0x1d) == '\0') {
      *(undefined1 *)(param_1 + 0x1d) = 1;
      uVar7 = FUN_142fa4d50(param_1,local_50,param_3);
      FUN_142fa9910(&DAT_146b44070,param_1,param_3,&local_98,param_4 + 0x20,param_4 + 0x10,uVar7);
      if (local_50[0] != 0) {
        FMemory::Free();
      }
    }
    if ((ulonglong)(DAT_1468c21b0 - *(longlong *)(param_4 + 8)) < 0x1e) {
      fStack_78 = (float)*(undefined8 *)(param_4 + 0x28);
      fStack_74 = (float)((ulonglong)*(undefined8 *)(param_4 + 0x28) >> 0x20);
      fStack_70 = (float)*(undefined8 *)(param_4 + 0x30);
      fStack_6c = (float)((ulonglong)*(undefined8 *)(param_4 + 0x30) >> 0x20);
      fStack_68 = (float)*(undefined8 *)(param_4 + 0x38);
      fStack_64 = (float)((ulonglong)*(undefined8 *)(param_4 + 0x38) >> 0x20);
      local_60 = (float)*(undefined8 *)(param_4 + 0x40);
      fStack_5c = (float)((ulonglong)*(undefined8 *)(param_4 + 0x40) >> 0x20);
      fStack_58 = (float)*(undefined8 *)(param_4 + 0x48);
      fStack_54 = (float)((ulonglong)*(undefined8 *)(param_4 + 0x48) >> 0x20);
      local_80 = (float)*(undefined8 *)(param_4 + 0x20);
      fStack_7c = (float)((ulonglong)*(undefined8 *)(param_4 + 0x20) >> 0x20);
    }
    else {
      fStack_74 = -NAN;
      fStack_70 = -NAN;
      fStack_6c = -NAN;
      fStack_68 = -NAN;
      FUN_142c62620(&fStack_64);
      fStack_74 = -NAN;
      fStack_70 = -NAN;
      fStack_6c = -NAN;
      fStack_68 = -NAN;
      puVar6 = (undefined8 *)FUN_142c62620(local_38);
      fStack_64 = (float)*puVar6;
      local_60 = (float)((ulonglong)*puVar6 >> 0x20);
      fStack_5c = (float)puVar6[1];
      fStack_58 = (float)((ulonglong)puVar6[1] >> 0x20);
      fStack_54 = *(float *)(puVar6 + 2);
      local_80 = (float)DAT_14676e1b0;
      fStack_7c = DAT_14676e1b0._4_4_;
      fStack_78 = DAT_14676e1b8;
    }
  }
  *(undefined8 *)(param_1 + 0x50) = local_98;
  *(undefined8 *)(param_1 + 0x58) = uStack_90;
  *(undefined4 *)(param_1 + 0x60) = local_88;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_3 + 0x99);
  *param_2 = local_80;
  param_2[1] = fStack_7c;
  param_2[2] = fStack_78;
  param_2[3] = fStack_74;
  param_2[4] = fStack_70;
  param_2[5] = fStack_6c;
  param_2[6] = fStack_68;
  param_2[7] = fStack_64;
  param_2[8] = local_60;
  param_2[9] = fStack_5c;
  param_2[10] = fStack_58;
  param_2[0xb] = fStack_54;
  return param_2;
}



// FUNCTION 142f91840 FUN_142f91840 body=860 status=ok
// SIG undefined FUN_142f91840(void)

undefined4 * FUN_142f91840(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  char cVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  float fStack_74;
  float local_70;
  undefined8 local_68;
  undefined4 local_60;
  
  if ((((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) ||
      (*(longlong *)(param_1 + 0x38) == 0)) ||
     ((*(longlong *)(param_1 + 0x40) == 0 || (cVar8 = FUN_142fa53c0(), cVar8 == '\0')))) {
    *param_2 = 0x7f7fffff;
    *(ulonglong *)(param_2 + 1) = CONCAT44(DAT_14676e1b0._4_4_,(float)DAT_14676e1b0);
    param_2[3] = DAT_14676e1b8;
    *(undefined1 *)(param_2 + 4) = 0;
    param_2[5] = 0x7f7fffff;
    param_2[6] = 0x7f7fffff;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x38);
    if ((*(char *)(lVar1 + 0x364) != '\0') ||
       (((-(float)DAT_14676e1b0 < *(float *)(lVar1 + 0x348) &&
         (*(float *)(lVar1 + 0x348) < (float)DAT_14676e1b0)) &&
        ((-DAT_14676e1b0._4_4_ < *(float *)(lVar1 + 0x34c) &&
         (((*(float *)(lVar1 + 0x34c) < DAT_14676e1b0._4_4_ &&
           (-DAT_14676e1b8 < *(float *)(lVar1 + 0x350))) &&
          (*(float *)(lVar1 + 0x350) < DAT_14676e1b8)))))))) {
      local_98 = *(undefined8 *)(lVar1 + 0x348);
      local_88 = *(undefined8 *)(*(longlong *)(lVar1 + 0x278) + 0x3c);
      local_80 = *(undefined4 *)(*(longlong *)(lVar1 + 0x278) + 0x44);
      local_90 = *(float *)(lVar1 + 0x350);
      uVar7 = local_98;
      if (((((float)local_98 <= -(float)DAT_14676e1b0) || ((float)DAT_14676e1b0 <= (float)local_98))
          || (local_98._4_4_ = (float)((ulonglong)local_98 >> 0x20),
             local_98._4_4_ <= -DAT_14676e1b0._4_4_)) ||
         (((DAT_14676e1b0._4_4_ <= local_98._4_4_ || (local_90 <= -DAT_14676e1b8)) ||
          (DAT_14676e1b8 <= local_90)))) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      puVar10 = &local_98;
      if (!bVar6) {
        puVar10 = &local_88;
      }
      local_60 = *(undefined4 *)(puVar10 + 1);
      local_68 = *puVar10;
      fVar12 = (float)local_68;
      fVar13 = (float)((ulonglong)local_68 >> 0x20);
      local_98 = uVar7;
      puVar9 = (undefined4 *)FUN_142f91ba0(param_1,&local_88,&local_68);
      fVar11 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x784) >> 0x20);
      uVar2 = *puVar9;
      fVar3 = (float)puVar9[1];
      fVar4 = (float)puVar9[2];
      uVar5 = puVar9[3];
      local_78 = puVar9[4];
      fVar11 = (float)FGenericPlatformMath::Atan2
                                (CONCAT44(fVar11,fVar11 - fVar4),
                                 (float)*(undefined8 *)(lVar1 + 0x784) - fVar3);
      fStack_74 = fVar11 * 57.295776;
      fVar12 = (float)FGenericPlatformMath::Atan2(CONCAT44(fVar13,fVar13 - fVar4),fVar12 - fVar3);
      local_70 = fVar12 * 57.295776 - fVar11 * 57.295776;
      fVar11 = (float)(int)(local_70 * 0.0027777778) * 360.0;
      if (ABS(local_70) < ABS(fVar11)) {
        fVar11 = local_70;
      }
      local_70 = local_70 - fVar11;
      if (local_70 < 0.0) {
        local_70 = local_70 + 360.0;
      }
      if (180.0 < local_70) {
        local_70 = local_70 - 360.0;
      }
      if ((char)local_78 == '\0') {
        if (local_70 < 0.0) {
          local_70 = local_70 + 360.0;
        }
      }
      else if (0.0 < local_70) {
        local_70 = local_70 - 360.0;
      }
      *param_2 = uVar2;
      param_2[1] = fVar3;
      param_2[2] = fVar4;
      param_2[3] = uVar5;
      *(ulonglong *)(param_2 + 4) = CONCAT44(fStack_74,local_78);
      param_2[6] = local_70;
    }
    else {
      *param_2 = 0x7f7fffff;
      *(ulonglong *)(param_2 + 1) = CONCAT44(DAT_14676e1b0._4_4_,(float)DAT_14676e1b0);
      param_2[3] = DAT_14676e1b8;
      *(undefined1 *)(param_2 + 4) = 0;
      param_2[5] = 0x7f7fffff;
      param_2[6] = 0x7f7fffff;
    }
  }
  return param_2;
}



// FUNCTION 142f91ba0 FUN_142f91ba0 body=1179 status=ok
// SIG undefined FUN_142f91ba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142f91ba0(longlong param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_c8;
  float local_b8;
  
  fVar2 = DAT_14676e1b8;
  if ((((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) ||
      (lVar1 = *(longlong *)(param_1 + 0x38), lVar1 == 0)) || (*(longlong *)(param_1 + 0x40) == 0))
  goto LAB_142f91fd7;
  fVar15 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x784) >> 0x20);
  fVar7 = *(float *)(lVar1 + 0x78c) - *(float *)(lVar1 + 0x6ec);
  local_c8 = (float)*(undefined8 *)(lVar1 + 0x784);
  fVar10 = *param_3 - local_c8;
  fVar11 = param_3[1] - fVar15;
  fVar12 = *(float *)(param_1 + 0x114) * DAT_1464aa7a0 -
           *(float *)(param_1 + 0x118) * DAT_1464aa798._4_4_;
  fVar14 = *(float *)(param_1 + 0x118) * (float)DAT_1464aa798 -
           *(float *)(param_1 + 0x110) * DAT_1464aa7a0;
  fVar3 = param_3[2] - fVar7;
  fVar13 = *(float *)(param_1 + 0x110) * DAT_1464aa798._4_4_ -
           *(float *)(param_1 + 0x114) * (float)DAT_1464aa798;
  fVar4 = fVar10 * fVar10 + fVar11 * fVar11;
  if (fVar4 == 1.0) {
    fVar8 = fVar3;
    fVar5 = fVar10;
    fVar16 = fVar11;
    if (fVar3 != 0.0) {
LAB_142f91dd4:
      fVar8 = 0.0;
    }
  }
  else {
    fVar8 = DAT_1468b5d98;
    fVar5 = DAT_1468b5d90;
    fVar16 = DAT_1468b5d94;
    if (1e-08 <= fVar4) {
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar8 = auVar6._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar4 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 * (0.5 - fVar4 * 0.5 * fVar8 * fVar8) + fVar8;
      fVar5 = fVar8 * fVar10;
      fVar16 = fVar8 * fVar11;
      goto LAB_142f91dd4;
    }
  }
  fVar9 = fVar5 * DAT_1464aa798._4_4_ - fVar16 * (float)DAT_1464aa798;
  fVar4 = fVar16 * DAT_1464aa7a0 - fVar8 * DAT_1464aa798._4_4_;
  fVar8 = fVar8 * (float)DAT_1464aa798 - fVar5 * DAT_1464aa7a0;
  if ((((0.0001 < ABS(fVar12)) || (0.0001 < ABS(fVar14))) || (0.0001 < ABS(fVar13))) &&
     ((((0.0001 < ABS(fVar4) || (0.0001 < ABS(fVar8))) || (0.0001 < ABS(fVar9))) &&
      (fVar5 = fVar12 * fVar4 + fVar8 * fVar14 + fVar9 * fVar13, fVar5 < _DAT_14676e1d4)))) {
    fVar2 = (fVar15 + fVar11 * 0.5) - fVar15;
    fVar3 = (fVar3 * 0.5 + fVar7) - fVar7;
    fVar16 = (fVar10 * 0.5 + local_c8) - local_c8;
    fVar2 = ((fVar16 * fVar12 + fVar2 * fVar14 + fVar3 * fVar13) -
            (fVar8 * fVar2 + fVar16 * fVar4 + fVar9 * fVar3) * fVar5) / (1.0 - fVar5 * fVar5);
    fVar5 = fVar12 * fVar2 + local_c8;
    fVar8 = fVar14 * fVar2 + fVar15;
    fVar4 = fVar13 * fVar2 + fVar7;
    local_c8 = local_c8 - fVar5;
    fVar15 = fVar15 - fVar8;
    fVar3 = fVar7 - fVar4;
    fVar2 = param_3[2];
    *param_2 = SQRT(fVar15 * fVar15 + local_c8 * local_c8 + fVar3 * fVar3);
    param_2[1] = fVar5;
    param_2[2] = fVar8;
    param_2[3] = fVar4;
    local_b8 = (float)CONCAT31(local_b8._1_3_,
                               0.0 <= fVar10 * fVar12 + fVar11 * fVar14 + (fVar2 - fVar7) * fVar13);
    param_2[4] = local_b8;
    return param_2;
  }
LAB_142f91fd7:
  *(undefined8 *)(param_2 + 1) = DAT_14676e1b0;
  param_2[3] = fVar2;
  *param_2 = 3.4028235e+38;
  *(undefined1 *)(param_2 + 4) = 0;
  return param_2;
}



// FUNCTION 142f92040 FUN_142f92040 body=719 status=ok
// SIG undefined FUN_142f92040(void)

longlong * FUN_142f92040(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 local_f8;
  undefined4 local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 local_28 [12];
  undefined1 local_1c [20];
  
  plVar1 = (longlong *)param_1[0x44];
  if (((plVar1 == (longlong *)0x0) || (param_1[0x4f5] == 0)) || (param_1[0x2f] == 0)) {
    FUN_142f88d20(param_2);
  }
  else {
    local_d8 = param_1[0x4f7];
    lStack_d0 = param_1[0x4f8];
    local_c8 = (undefined4)param_1[0x4f9];
    uStack_c4 = (undefined4)((ulonglong)param_1[0x4f9] >> 0x20);
    uStack_c0 = (undefined4)param_1[0x4fa];
    uStack_bc = (undefined4)((ulonglong)param_1[0x4fa] >> 0x20);
    local_b8 = (undefined4)param_1[0x4fb];
    uStack_b4 = (undefined4)((ulonglong)param_1[0x4fb] >> 0x20);
    uStack_b0 = (undefined4)param_1[0x4fc];
    uStack_ac = (undefined4)((ulonglong)param_1[0x4fc] >> 0x20);
    local_a8 = (undefined4)param_1[0x4fd];
    uStack_a4 = (undefined4)((ulonglong)param_1[0x4fd] >> 0x20);
    uStack_a0 = (undefined4)param_1[0x4fe];
    uStack_9c = (undefined4)((ulonglong)param_1[0x4fe] >> 0x20);
    local_88 = param_1[0x501];
    lStack_80 = param_1[0x502];
    local_98 = (undefined4)param_1[0x4ff];
    uStack_94 = (undefined4)((ulonglong)param_1[0x4ff] >> 0x20);
    uStack_90 = (undefined4)param_1[0x500];
    uStack_8c = (undefined4)((ulonglong)param_1[0x500] >> 0x20);
    local_78 = param_1[0x503];
    plStack_70 = (longlong *)param_1[0x504];
    local_58 = param_1[0x507];
    uStack_50 = (undefined4)param_1[0x508];
    uStack_4c = *(undefined4 *)((longlong)param_1 + 0x2844);
    local_68 = param_1[0x505];
    lStack_60 = param_1[0x506];
    uStack_48 = (undefined4)param_1[0x509];
    uStack_44 = *(undefined4 *)((longlong)param_1 + 0x284c);
    uVar7 = (undefined4)param_1[0x50a];
    uStack_3c = *(undefined4 *)((longlong)param_1 + 0x2854);
    uStack_40 = (undefined1)uVar7;
    uStack_3f = (undefined1)((uint)uVar7 >> 8);
    uStack_3e = (undefined2)((uint)uVar7 >> 0x10);
    local_38 = (undefined4)param_1[0x50b];
    uStack_34 = (undefined4)((ulonglong)param_1[0x50b] >> 0x20);
    (**(code **)(*plVar1 + 0x578))(plVar1,&local_d8,(longlong)&local_d8 + 4);
    uVar7 = (**(code **)(*param_1 + 0x400))(param_1);
    lStack_d0 = CONCAT44(lStack_d0._4_4_,uVar7);
    local_88 = param_1[0x50c];
    lStack_80 = param_1[0x50d];
    lVar2 = param_1[0x2f];
    uStack_c4 = (undefined4)param_1[0x4ea];
    uStack_c0 = (undefined4)((ulonglong)param_1[0x4ea] >> 0x20);
    uStack_bc = (undefined4)param_1[0x4eb];
    local_b8 = (undefined4)((ulonglong)param_1[0x4eb] >> 0x20);
    uStack_b4 = (undefined4)param_1[0x4ec];
    uStack_b0 = (undefined4)((ulonglong)param_1[0x4ec] >> 0x20);
    uStack_ac = (undefined4)param_1[0x4ed];
    local_a8 = (undefined4)((ulonglong)param_1[0x4ed] >> 0x20);
    uStack_94 = (undefined4)param_1[0x4f0];
    uStack_90 = (undefined4)((ulonglong)param_1[0x4f0] >> 0x20);
    uStack_a4 = (undefined4)param_1[0x4ee];
    uStack_a0 = (undefined4)((ulonglong)param_1[0x4ee] >> 0x20);
    uStack_9c = (undefined4)param_1[0x4ef];
    local_98 = (undefined4)((ulonglong)param_1[0x4ef] >> 0x20);
    if (lVar2 == 0) {
      local_f8._0_4_ = 0x7f7fffff;
      local_f8._4_4_ = 0x7f7fffff;
      local_f0 = 0x7f7fffff;
    }
    else {
      local_f8._0_4_ = *(undefined4 *)(lVar2 + 0x220);
      local_f8._4_4_ = *(undefined4 *)(lVar2 + 0x224);
      local_f0 = *(undefined4 *)(lVar2 + 0x228);
    }
    uStack_34 = local_f0;
    local_78 = param_1[0x4f5];
    uStack_3c = (undefined4)local_f8;
    local_38 = local_f8._4_4_;
    local_58 = *(longlong *)((longlong)param_1 + 0x18c);
    uStack_50 = *(undefined4 *)((longlong)param_1 + 0x194);
    local_e8 = *(float *)(lVar2 + 0x210);
    fStack_e4 = *(float *)(lVar2 + 0x214);
    fStack_e0 = *(float *)(lVar2 + 0x218);
    fStack_dc = *(float *)(lVar2 + 0x21c);
    auVar3._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != fStack_e4);
    auVar3._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != local_e8);
    auVar3._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_e0);
    auVar3._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_dc);
    iVar5 = movmskps(uStack_50,auVar3);
    plStack_70 = plVar1;
    if (iVar5 != 0) {
      *(float *)(lVar2 + 0x250) = local_e8;
      *(float *)(lVar2 + 0x254) = fStack_e4;
      *(float *)(lVar2 + 600) = fStack_e0;
      *(float *)(lVar2 + 0x25c) = fStack_dc;
      puVar6 = (undefined8 *)FQuat::Rotator(&local_e8,local_28);
      *(undefined8 *)(lVar2 + 0x260) = *puVar6;
      *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar6 + 1);
    }
    local_f8 = *(undefined8 *)(lVar2 + 0x260);
    local_f0 = *(undefined4 *)(lVar2 + 0x268);
    puVar6 = (undefined8 *)FRotator::Vector(&local_f8,local_1c);
    uStack_4c = (undefined4)*puVar6;
    uStack_48 = (undefined4)((ulonglong)*puVar6 >> 0x20);
    uStack_44 = *(undefined4 *)(puVar6 + 1);
    uVar4 = (**(code **)(*param_1 + 0xca8))(param_1,*(undefined1 *)((longlong)param_1 + 0x2851));
    *param_2 = local_d8;
    param_2[1] = lStack_d0;
    param_2[2] = CONCAT44(uStack_c4,local_c8);
    param_2[3] = CONCAT44(uStack_bc,uStack_c0);
    param_2[4] = CONCAT44(uStack_b4,local_b8);
    param_2[5] = CONCAT44(uStack_ac,uStack_b0);
    param_2[6] = CONCAT44(uStack_a4,local_a8);
    param_2[7] = CONCAT44(uStack_9c,uStack_a0);
    param_2[8] = CONCAT44(uStack_94,local_98);
    param_2[9] = CONCAT44(uStack_8c,uStack_90);
    param_2[10] = local_88;
    param_2[0xb] = lStack_80;
    param_2[0xc] = local_78;
    param_2[0xd] = (longlong)plStack_70;
    param_2[0xe] = local_68;
    param_2[0xf] = lStack_60;
    param_2[0x10] = local_58;
    param_2[0x11] = CONCAT44(uStack_4c,uStack_50);
    param_2[0x12] = CONCAT44(uStack_44,uStack_48);
    param_2[0x13] = CONCAT44(uStack_3c,CONCAT22(uStack_3e,CONCAT11(uVar4,uStack_40)));
    param_2[0x14] = CONCAT44(uStack_34,local_38);
  }
  return param_2;
}



// FUNCTION 142f92310 FUN_142f92310 body=1845 status=ok
// SIG undefined FUN_142f92310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_142f92310(longlong param_1,float *param_2)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float *pfVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auStack_2b8 [32];
  float *local_298;
  float local_288;
  float fStack_284;
  float local_280;
  undefined8 local_278;
  float local_270;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  undefined8 local_248;
  float local_240;
  undefined1 local_238 [16];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218 [12];
  undefined1 local_20c [12];
  char local_200 [64];
  undefined1 local_1c0 [28];
  undefined1 local_1a4 [28];
  undefined1 local_188 [28];
  undefined1 local_16c [28];
  undefined1 local_150 [28];
  undefined1 local_134 [60];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  FUN_142c62900(param_2);
  pfVar2 = (float *)(param_1 + 0x330);
  local_278 = *(undefined8 *)(param_1 + 0x784);
  iVar5 = *(int *)(param_1 + 0x270);
  fVar20 = *(float *)(param_1 + 0x78c) - *(float *)(param_1 + 0x6ec);
  param_2[0x21] = *(float *)(param_1 + 0x75c);
  param_2[0x22] = *(float *)(param_1 + 0x758);
  param_2[0x23] = *(float *)(param_1 + 0x6f4);
  *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_1 + 0x738);
  *(undefined8 *)(param_2 + 0x26) = *(undefined8 *)(param_1 + 0x740);
  local_270 = fVar20;
  fVar16 = (float)FUN_142cecf20(*(undefined8 *)(param_1 + 0x6e0));
  if (fVar16 <= 1.0) {
    fVar16 = 1.0;
  }
  param_2[0x19] = fVar16;
  FUN_142f8eb00(param_1,&local_268,param_1 + 0x300);
  fVar16 = local_264 * local_264 + local_268 * local_268 + local_260 * local_260;
  local_288 = local_268;
  fStack_284 = local_264;
  local_280 = local_260;
  if (fVar16 != 1.0) {
    if (1e-08 <= fVar16) {
      auVar19 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
      local_25c = auVar19._0_4_;
      local_25c = local_25c + local_25c * (0.5 - fVar16 * 0.5 * local_25c * local_25c);
      local_25c = local_25c + local_25c * (0.5 - fVar16 * 0.5 * local_25c * local_25c);
      local_288 = local_268 * local_25c;
      fStack_284 = local_264 * local_25c;
      local_280 = local_260 * local_25c;
    }
    else {
      local_288 = DAT_1468b5d90;
      local_280 = DAT_1468b5d98;
      fStack_284 = DAT_1468b5d94;
    }
  }
  *(ulonglong *)(param_2 + 1) = CONCAT44(fStack_284,local_288);
  param_2[3] = local_280;
  if (iVar5 == 3) {
    *(undefined1 *)((longlong)param_2 + 0x69) = *(undefined1 *)(param_1 + 0x364);
    lVar6 = *(longlong *)(param_1 + 0x278);
    fVar16 = *(float *)(lVar6 + 0x40);
    fVar18 = *(float *)(lVar6 + 0x44);
    fVar17 = *(float *)(lVar6 + 0x48);
    param_2[0x1b] = *(float *)(lVar6 + 0x3c);
    param_2[0x1c] = fVar16;
    param_2[0x1d] = fVar18;
    param_2[0x1e] = fVar17;
    param_2[0x1f] = *(float *)(lVar6 + 0x4c);
    *(undefined1 *)(param_2 + 0x1a) = *(undefined1 *)(*(longlong *)(param_1 + 0x278) + 0xba);
  }
  *param_2 = -1.0;
  if ((*(longlong *)(param_1 + 0x7c0) == 0) || (*(longlong *)(param_1 + 0x7c8) == 0)) {
LAB_142f925ca:
    uVar9 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x7c8) + 8);
    LOCK();
    iVar11 = *piVar1;
    if (iVar11 == 0) {
      *piVar1 = 0;
      iVar11 = 0;
    }
    UNLOCK();
    fVar20 = local_270;
    if ((iVar11 < 1) ||
       (((ABS(*(float *)(param_1 + 0x30c)) <= 0.0001 && (ABS(*(float *)(param_1 + 0x310)) <= 0.0001)
         ) && (ABS(*(float *)(param_1 + 0x314)) <= 0.0001)))) goto LAB_142f925ca;
    uVar9 = 1;
  }
  *(undefined1 *)(param_2 + 0x20) = uVar9;
  cVar10 = FUN_142fa8b90();
  if (((cVar10 == '\0') || (*(char *)(param_1 + 0x780) != '\0')) ||
     ((cVar10 = FUN_142fbc510(), cVar10 == '\0' ||
      (*(float *)(param_1 + 0x548) < *(float *)(param_1 + 0x64c))))) {
    cVar10 = '\0';
  }
  else {
    cVar10 = '\x01';
  }
  uVar13 = local_278;
  fVar18 = local_278._4_4_;
  fVar16 = (float)local_278;
  *(char *)((longlong)param_2 + 0x81) = cVar10;
  if (((cVar10 == '\0') && (cVar10 = FUN_142fbc510(), cVar10 != '\0')) ||
     (*(char *)(param_2 + 0x20) != '\0')) {
    if (((((iVar5 != 3) || (*pfVar2 <= -(float)DAT_14676e1b0)) || ((float)DAT_14676e1b0 <= *pfVar2))
        || ((*(float *)(param_1 + 0x334) <= -DAT_14676e1b0._4_4_ ||
            (DAT_14676e1b0._4_4_ <= *(float *)(param_1 + 0x334))))) ||
       ((*(float *)(param_1 + 0x338) <= -DAT_14676e1b8 ||
        ((DAT_14676e1b8 <= *(float *)(param_1 + 0x338) || (*(char *)(param_2 + 0x20) != '\0')))))) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    fVar17 = param_2[1];
    if (((((fVar17 <= -(float)DAT_14676e1b0) || ((float)DAT_14676e1b0 <= fVar17)) ||
         (fVar3 = param_2[2], fVar3 <= -DAT_14676e1b0._4_4_)) ||
        (((DAT_14676e1b0._4_4_ <= fVar3 || (fVar4 = param_2[3], fVar4 <= -DAT_14676e1b8)) ||
         (DAT_14676e1b8 <= fVar4)))) || (((fVar17 == 0.0 && (fVar3 == 0.0)) && (fVar4 == 0.0)))) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar7) {
      fVar17 = *(float *)(param_1 + 0x338) - fVar20;
      fVar18 = *(float *)(param_1 + 0x334) - fVar18;
      *param_2 = SQRT(fVar18 * fVar18 + (*pfVar2 - fVar16) * (*pfVar2 - fVar16) + fVar17 * fVar17);
    }
    else if (bVar8) {
      *param_2 = 3.4028235e+38;
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x6e0);
  FUN_142cc15c0(*(longlong *)(lVar6 + 0xfd8) + 0xbe0,local_200,0);
  if ((local_200[0] == '\t') && (*(longlong *)(param_1 + 0x278) != 0)) {
    lVar6 = *(longlong *)(lVar6 + 0x178);
    local_c8 = *(undefined8 *)(lVar6 + 0x210);
    uStack_c0 = *(undefined8 *)(lVar6 + 0x218);
    local_b8 = *(undefined4 *)(lVar6 + 0x220);
    uStack_b4 = *(undefined4 *)(lVar6 + 0x224);
    uStack_b0 = *(undefined4 *)(lVar6 + 0x228);
    uStack_ac = *(undefined4 *)(lVar6 + 0x22c);
    local_a8 = *(undefined4 *)(lVar6 + 0x230);
    uStack_a4 = *(undefined4 *)(lVar6 + 0x234);
    uStack_a0 = *(undefined4 *)(lVar6 + 0x238);
    uStack_9c = *(undefined4 *)(lVar6 + 0x23c);
    FUN_142c62700(&local_258,&local_c8,*(longlong *)(param_1 + 0x278) + 0x3c,&DAT_1468b5d90);
  }
  else {
    FUN_142f93000(&local_258,lVar6,local_200);
  }
  param_2[0xb] = local_258;
  param_2[0xc] = fStack_254;
  param_2[0xd] = fStack_250;
  param_2[0xe] = fStack_24c;
  *(undefined8 *)(param_2 + 0xf) = local_248;
  param_2[0x11] = local_240;
  uVar12 = FVector::Rotation(param_1 + 0x774,local_218);
  FRotator::Quaternion(uVar12);
  local_f8 = local_228;
  uStack_f0 = uStack_220;
  local_e8._8_4_ = fVar20;
  local_e8._0_8_ = uVar13;
  local_e8._12_4_ = 0;
  local_d8._4_4_ = DAT_1464aa788._4_4_;
  local_d8._0_4_ = (undefined4)DAT_1464aa788;
  local_d8._8_4_ = DAT_1464aa790;
  local_d8._12_4_ = 0;
  if ((*(longlong *)(param_1 + 0x7c0) == 0) || (*(longlong *)(param_1 + 0x7c8) == 0)) {
LAB_142f92893:
    if (*(int *)(param_1 + 0x928) < 1) {
      if ((*(char *)(param_1 + 0x780) == '\0') && (iVar5 == 3)) {
        FUN_142fa3970(local_238,param_1,pfVar2,&local_278);
        pfVar14 = (float *)FUN_142c62700(local_1a4,&local_f8,local_238,&DAT_1468b5d90);
      }
      else {
        uVar13 = FUN_142ced5e0(*(undefined8 *)(param_1 + 0x6e0),local_134,0);
        pfVar14 = (float *)FUN_142f93000(local_188,*(undefined8 *)(param_1 + 0x6e0),uVar13);
      }
      goto LAB_142f92929;
    }
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x7c8) + 8);
    LOCK();
    iVar11 = *piVar1;
    if (iVar11 == 0) {
      *piVar1 = 0;
      iVar11 = 0;
    }
    UNLOCK();
    if (iVar11 < 1) goto LAB_142f92893;
  }
  uVar13 = FUN_142fa2500(param_1 + 0x790,local_20c);
  pfVar14 = (float *)FUN_142c62700(local_1c0,&local_f8,uVar13,&DAT_1468b5d90);
LAB_142f92929:
  fVar20 = pfVar14[1];
  fVar16 = pfVar14[2];
  fVar18 = pfVar14[3];
  param_2[4] = *pfVar14;
  param_2[5] = fVar20;
  param_2[6] = fVar16;
  param_2[7] = fVar18;
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(pfVar14 + 4);
  param_2[10] = pfVar14[6];
  iVar5 = *(int *)(param_1 + 0x48c);
  if (-1 < iVar5) {
    if (iVar5 < 2) {
      *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_2 + 0x16) = *(undefined8 *)(param_2 + 8);
      param_2[0x18] = param_2[10];
    }
    else if (iVar5 == 2) {
      local_298 = param_2 + 0xf;
      puVar15 = (undefined8 *)FUN_142f90860(local_150,&local_278,pfVar2,param_2 + 0xc);
      uVar13 = puVar15[1];
      *(undefined8 *)(param_2 + 0x12) = *puVar15;
      *(undefined8 *)(param_2 + 0x14) = uVar13;
      *(undefined8 *)(param_2 + 0x16) = puVar15[2];
      fVar20 = *(float *)(puVar15 + 3);
      param_2[0x18] = fVar20;
      *(undefined8 *)(param_2 + 0xb) = *(undefined8 *)(param_2 + 0x12);
      *(undefined8 *)(param_2 + 0xd) = *(undefined8 *)(param_2 + 0x14);
      *(undefined8 *)(param_2 + 0xf) = *(undefined8 *)(param_2 + 0x16);
      param_2[0x11] = fVar20;
    }
    else if (iVar5 == 3) {
      local_298 = &DAT_1468b5d90;
      puVar15 = (undefined8 *)FUN_142f90860(local_16c,&local_278,pfVar2,param_1 + 0x33c);
      uVar13 = puVar15[1];
      *(undefined8 *)(param_2 + 0x12) = *puVar15;
      *(undefined8 *)(param_2 + 0x14) = uVar13;
      *(undefined8 *)(param_2 + 0x16) = puVar15[2];
      param_2[0x18] = *(float *)(puVar15 + 3);
    }
  }
  return param_2;
}



// FUNCTION 142f92a50 FUN_142f92a50 body=541 status=ok
// SIG undefined FUN_142f92a50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142f92a50(undefined8 *param_1,float *param_2,float param_3,undefined4 param_4)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  float local_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined1 local_10c;
  undefined2 local_10b;
  undefined1 local_109;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_98 [16];
  float local_88 [4];
  float *local_78;
  int local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (*(longlong *)(param_2 + 0x18) == 0) {
    *param_1 = 0xffffffffffffffff;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x1c);
    cVar3 = FUN_142fa8260(*(longlong *)(param_2 + 0x18),param_2,uVar4);
    if (cVar3 == '\0') {
      local_138 = 0xffffffffffffffff;
      uVar4 = 0xffffffffffffffff;
    }
    fVar2 = param_2[3];
    FUN_142f9d2e0(*(longlong *)(param_2 + 0x18) + 0x720,local_88,*param_2,param_2[1]);
    local_128 = *(undefined8 *)(param_2 + 0x27);
    local_10b = 0;
    local_109 = 0;
    local_130 = param_2[0x29] - param_2[1];
    local_f8 = *(undefined8 *)(param_2 + 4);
    uStack_f0 = *(undefined8 *)(param_2 + 6);
    local_108 = *(undefined8 *)param_2;
    uStack_100 = *(undefined8 *)(param_2 + 2);
    local_d8 = *(undefined8 *)(param_2 + 0xc);
    uStack_d0 = *(undefined8 *)(param_2 + 0xe);
    local_a8 = *(undefined8 *)(param_2 + 0x18);
    local_e8 = *(undefined8 *)(param_2 + 8);
    uStack_e0 = *(undefined8 *)(param_2 + 10);
    local_b8 = *(undefined8 *)(param_2 + 0x14);
    uStack_b0 = *(undefined8 *)(param_2 + 0x16);
    local_10c = 0;
    local_c8 = *(undefined8 *)(param_2 + 0x10);
    uStack_c0 = *(undefined8 *)(param_2 + 0x12);
    local_11c = param_3;
    if (param_3 <= 0.0) {
      if (fVar2 == -NAN) {
        local_11c = 500.0;
      }
      else {
        local_11c = *param_2;
      }
    }
    pfVar6 = local_88;
    if (local_78 != (float *)0x0) {
      pfVar6 = local_78;
    }
    pfVar1 = pfVar6 + local_70;
    local_120 = local_130;
    local_114 = uVar4;
    local_118 = param_4;
    for (; uVar5 = uVar4, pfVar6 != pfVar1; pfVar6 = pfVar6 + 1) {
      if ((fVar2 == -NAN) || (param_2[3] == *pfVar6)) {
        local_138 = 0xffffffffffffffff;
        uStack_100 = CONCAT44(*pfVar6,(undefined4)uStack_100);
        cVar3 = FUN_142f9e730(&local_128,local_98,&local_138);
        uVar5 = local_138;
        if (cVar3 != '\0') break;
      }
    }
    *param_1 = uVar5;
    if (local_78 != (float *)0x0) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 142f92c70 FUN_142f92c70 body=124 status=ok
// SIG undefined FUN_142f92c70(void)

char FUN_142f92c70(longlong *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = FUN_1407c3030(param_1 + 0x116);
  if ((cVar1 != '\0') && (param_2 != '\0')) {
    return *(char *)((longlong)param_1 + 0x2851);
  }
  cVar1 = (**(code **)(*param_1 + 0xc88))(param_1);
  if (cVar1 != '\0') {
    return '\x01';
  }
  cVar1 = (**(code **)(*param_1 + 0xc80))(param_1);
  if (cVar1 != '\0') {
    param_2 = '\x02';
  }
  return param_2;
}



// FUNCTION 142f92cf0 FUN_142f92cf0 body=783 status=ok
// SIG undefined FUN_142f92cf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142f92cf0(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  fVar7 = *(float *)(param_2 + 0x10);
  fVar8 = *(float *)(param_2 + 0x14);
  fVar1 = *(float *)(param_2 + 0x18);
  fVar15 = *(float *)(param_2 + 0x20);
  fVar13 = *(float *)(param_2 + 0x24);
  fVar6 = *(float *)(param_2 + 0x28);
  fStack_ac = *(float *)(param_2 + 0x2c);
  fVar2 = *(float *)(param_3 + 0x48);
  fVar3 = *(float *)(param_3 + 0x58);
  fVar4 = *(float *)(param_3 + 0x68);
  fVar5 = *(float *)(param_3 + 0x78);
  local_e0 = fVar15 * *(float *)(param_3 + 0x48) + fVar13 * *(float *)(param_3 + 0x58) +
             fVar6 * *(float *)(param_3 + 0x68) + *(float *)(param_3 + 0x78);
  fVar10 = (fVar7 * *(float *)(param_3 + 0x40) + fVar8 * *(float *)(param_3 + 0x50) +
            fVar1 * *(float *)(param_3 + 0x60) + *(float *)(param_3 + 0x70)) * 100.0;
  fVar11 = (fVar7 * *(float *)(param_3 + 0x44) + fVar8 * *(float *)(param_3 + 0x54) +
            fVar1 * *(float *)(param_3 + 100) + *(float *)(param_3 + 0x74)) * 100.0;
  fVar16 = local_e0 * 100.0;
  fVar14 = (fVar15 * *(float *)(param_3 + 0x40) + fVar13 * *(float *)(param_3 + 0x50) +
            fVar6 * *(float *)(param_3 + 0x60) + *(float *)(param_3 + 0x70)) * 100.0;
  fVar15 = (fVar15 * *(float *)(param_3 + 0x44) + fVar13 * *(float *)(param_3 + 0x54) +
            fVar6 * *(float *)(param_3 + 100) + *(float *)(param_3 + 0x74)) * 100.0;
  if (fStack_ac < 0.0) {
    fStack_ac = 0.0 - fStack_ac;
  }
  fVar13 = *(float *)(param_2 + 0x40) * 57.295776;
  local_e8 = CONCAT44(fVar11,fVar10);
  if (90.0 <= fVar13) goto LAB_142f92f95;
  fVar12 = fStack_ac * 100.0;
  local_b8 = fStack_ac;
  fStack_b4 = fStack_ac;
  fStack_b0 = fStack_ac;
  fVar6 = _guard_xfg_dispatch_icall_nop(*(float *)(param_2 + 0x40) * 0.5);
  fVar10 = fVar10 - fVar14;
  fVar11 = fVar11 - fVar15;
  fVar12 = fVar12 / fVar6;
  fVar16 = (fVar7 * fVar2 + fVar8 * fVar3 + fVar1 * fVar4 + fVar5) * 100.0 - fVar16;
  fVar7 = fVar11 * fVar11 + fVar10 * fVar10;
  if (fVar7 == 1.0) {
    local_d8 = fVar10;
    local_d4 = fVar11;
    if (fVar16 != 0.0) {
LAB_142f92f37:
      local_d8 = fVar10;
      local_d4 = fVar11;
      fVar16 = 0.0;
    }
  }
  else {
    local_d8 = DAT_1468b5d90;
    local_d4 = DAT_1468b5d94;
    fVar16 = DAT_1468b5d98;
    if (1e-08 <= fVar7) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar10 = fVar10 * fVar8;
      fVar11 = fVar11 * fVar8;
      goto LAB_142f92f37;
    }
  }
  local_d8 = local_d8 * fVar12;
  local_d4 = local_d4 * fVar12;
  local_d0 = fVar16 * fVar12;
  FVector::RotateAngleAxis(&local_d8,&local_b8,fVar13 * 0.5,&DAT_1464aa798);
  local_e8 = CONCAT44(fVar15 + fStack_b4,fVar14 + local_b8);
LAB_142f92f95:
  *param_1 = local_e8;
  *(undefined4 *)(param_1 + 1) = param_4;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 142f93000 FUN_142f93000 body=221 status=ok
// SIG undefined FUN_142f93000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142f93000(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_3 + 4);
  lVar1 = *(longlong *)(param_2 + 0x178);
  local_58 = *(undefined8 *)(lVar1 + 0x210);
  uStack_50 = *(undefined8 *)(lVar1 + 0x218);
  local_48 = *(undefined4 *)(lVar1 + 0x220);
  uStack_44 = *(undefined4 *)(lVar1 + 0x224);
  uStack_40 = *(undefined4 *)(lVar1 + 0x228);
  uStack_3c = *(undefined4 *)(lVar1 + 0x22c);
  local_38 = *(undefined4 *)(lVar1 + 0x230);
  uStack_34 = *(undefined4 *)(lVar1 + 0x234);
  uStack_30 = *(undefined4 *)(lVar1 + 0x238);
  uStack_2c = *(undefined4 *)(lVar1 + 0x23c);
  if (plVar2 == (longlong *)0x0) {
    local_70 = DAT_1468b5d98;
    puVar3 = &local_78;
    local_78 = _DAT_1468b5d90;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x308))(plVar2,&local_78);
  }
  local_68 = *puVar3;
  local_60 = *(undefined4 *)(puVar3 + 1);
  uVar4 = FUN_142ce6b40(param_2,&local_78,param_3);
  FUN_142c62700(param_1,&local_58,uVar4,&local_68);
  return param_1;
}



// FUNCTION 142f930e0 FUN_142f930e0 body=290 status=ok
// SIG undefined FUN_142f930e0(void)

undefined8 FUN_142f930e0(longlong param_1,longlong param_2)

{
  char cVar1;
  float *pfVar2;
  undefined8 uVar3;
  float *pfVar4;
  float fVar5;
  int local_res8 [4];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 local_28;
  
  if (1 < *(byte *)(param_1 + 0x48)) goto LAB_142f93191;
  FWeakObjectPtr::operator=(&local_res18,param_1);
  local_res20 = local_res18;
  TSet<TTuple<TWeakObjectPtr<AXHighLevelWaypoint,FWeakObjectPtr>,float>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AXHighLevelWaypoint,FWeakObjectPtr>,float,0>,FDefaultSetAllocator>
  ::FindId(param_2 + 0x860,local_res8);
  pfVar4 = (float *)0x0;
  if (local_res8[0] != -1) {
    pfVar4 = (float *)(*(longlong *)(param_2 + 0x860) + (longlong)local_res8[0] * 0x14);
  }
  pfVar2 = pfVar4 + 2;
  if (pfVar4 == (float *)0x0) {
    pfVar2 = (float *)0x0;
  }
  if (pfVar2 != (float *)0x0) {
    fVar5 = *(float *)(param_2 + 0x858) * *pfVar2;
    if (*(char *)(param_1 + 0x48) == '\0') {
      if ((0.0 <= *(float *)(param_2 + 0x780)) &&
         (fVar5 - *(float *)(param_1 + 0x50) <= *(float *)(param_2 + 0x780))) {
LAB_142f93191:
        uVar3 = FUN_142c958c0(param_1,param_2);
        return uVar3;
      }
    }
    else {
      if (*(char *)(param_1 + 0x48) != '\x01') goto LAB_142f93191;
      if ((*(char *)(param_2 + 0x7e8) != '\0') && (*(char *)(param_2 + 0x7e9) != '\0')) {
        local_38 = *(undefined4 *)(param_2 + 0x7ec);
        uStack_34 = *(undefined4 *)(param_2 + 0x7f0);
        uStack_30 = *(undefined4 *)(param_2 + 0x7f4);
        local_28 = *(undefined4 *)(param_2 + 0x7fc);
        fStack_2c = *(float *)(param_2 + 0x7f8) + (fVar5 - 10.0);
        cVar1 = FUN_142c73900(&local_38,param_2 + 0x5f4);
        if (cVar1 != '\0') goto LAB_142f93191;
      }
    }
  }
  return 0;
}



// FUNCTION 142f93210 FUN_142f93210 body=86 status=ok
// SIG undefined FUN_142f93210(void)

ulonglong FUN_142f93210(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142fa53c0();
  if (cVar1 != '\0') {
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x278) + 0xc1);
    if (cVar1 != '\0') {
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x278) >> 8),cVar1 == '\x01');
    }
  }
  if (*(char *)(param_1 + 0x38c) != '\0') {
    return (ulonglong)(*(char *)(param_1 + 0x38c) == '\x01');
  }
  return (ulonglong)(*(char *)(param_1 + 0xa90) == '\0');
}



// FUNCTION 142f93270 FUN_142f93270 body=623 status=ok
// SIG undefined FUN_142f93270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_142f93270(longlong param_1,undefined4 *param_2,char param_3)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_50;
  float fStack_4c;
  
  if ((((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (lVar1 = *(longlong *)(param_1 + 0x38), lVar1 != 0)) &&
     ((*(longlong *)(param_1 + 0x40) != 0 &&
      (fVar2 = *(float *)(param_1 + 0x104) * *(float *)(param_1 + 0x110),
      *(float *)(param_1 + 0x108) * *(float *)(param_1 + 0x114) + fVar2 +
      *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x118) < _DAT_14676e1d0)))) {
    fVar4 = *(float *)(lVar1 + 0x6f0);
    if ((param_3 == '\0') && (fVar2 = *(float *)(param_1 + 0x54), 0.0 < fVar2)) {
      fVar4 = fVar4 / fVar2;
    }
    uVar3 = FUN_142fa4e50(fVar2,param_3);
    FUN_142f934e0(param_1,&local_78,fVar4,uVar3);
    fVar2 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x784) >> 0x20);
    local_50 = local_68;
    fVar2 = (float)FGenericPlatformMath::Atan2
                             (CONCAT44(fVar2,fVar2 - fStack_70),
                              (float)*(undefined8 *)(lVar1 + 0x784) - fStack_74);
    if ((char)local_68 == '\0') {
      fVar4 = 1.0;
    }
    else {
      fVar4 = -1.0;
    }
    fStack_4c = fVar2 * 57.295776;
    fVar4 = (float)FGenericPlatformMath::Atan2
                             ((*(float *)(param_1 + 0x10c) * (float)DAT_1464aa798 -
                              DAT_1464aa7a0 * *(float *)(param_1 + 0x104)) * fVar4,
                              (DAT_1464aa7a0 * *(float *)(param_1 + 0x108) -
                              *(float *)(param_1 + 0x10c) * DAT_1464aa798._4_4_) * fVar4);
    fVar4 = fVar4 * 57.295776 - fVar2 * 57.295776;
    fVar2 = (float)(int)(fVar4 * 0.0027777778) * 360.0;
    if (ABS(fVar4) < ABS(fVar2)) {
      fVar2 = fVar4;
    }
    fVar4 = fVar4 - fVar2;
    if (fVar4 < 0.0) {
      fVar4 = fVar4 + 360.0;
    }
    if (180.0 < fVar4) {
      fVar4 = fVar4 - 360.0;
    }
    *param_2 = local_78;
    param_2[1] = fStack_74;
    param_2[2] = fStack_70;
    param_2[3] = uStack_6c;
    *(ulonglong *)(param_2 + 4) = CONCAT44(fStack_4c,local_50);
    param_2[6] = fVar4;
    return param_2;
  }
  *param_2 = 0x7f7fffff;
  *(undefined8 *)(param_2 + 1) = DAT_14676e1b0;
  param_2[3] = DAT_14676e1b8;
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[5] = 0x7f7fffff;
  param_2[6] = 0x7f7fffff;
  return param_2;
}



// FUNCTION 142f934e0 FUN_142f934e0 body=467 status=ok
// SIG undefined FUN_142f934e0(void)

undefined8 * FUN_142f934e0(longlong param_1,undefined8 *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_88;
  float fStack_84;
  undefined4 local_68;
  
  uVar5 = DAT_14676e1b8;
  if ((((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) ||
      (lVar3 = *(longlong *)(param_1 + 0x38), lVar3 == 0)) || (*(longlong *)(param_1 + 0x40) == 0))
  {
    *(undefined8 *)((longlong)param_2 + 4) = DAT_14676e1b0;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
    *(undefined4 *)param_2 = 0x7f7fffff;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    fVar2 = *(float *)(lVar3 + 0x78c);
    fVar8 = *(float *)(param_1 + 0x114) * DAT_1464aa7a0 -
            *(float *)(param_1 + 0x118) * DAT_1464aa798._4_4_;
    fVar1 = *(float *)(lVar3 + 0x6ec);
    fVar6 = *(float *)(param_1 + 0x118) * (float)DAT_1464aa798 -
            *(float *)(param_1 + 0x110) * DAT_1464aa7a0;
    fVar7 = *(float *)(param_1 + 0x110) * DAT_1464aa798._4_4_ -
            *(float *)(param_1 + 0x114) * (float)DAT_1464aa798;
    param_3 = (57.295776 / param_4) * param_3;
    bVar4 = 0.0 <= fVar6 * *(float *)(param_1 + 0x108) + fVar8 * *(float *)(param_1 + 0x104) +
                   fVar7 * *(float *)(param_1 + 0x10c);
    if (!bVar4) {
      fVar6 = -fVar6;
      fVar7 = -fVar7;
      fVar8 = -fVar8;
    }
    local_68 = CONCAT31(local_68._1_3_,bVar4);
    local_88 = (float)*(undefined8 *)(lVar3 + 0x784);
    fStack_84 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x784) >> 0x20);
    *param_2 = CONCAT44(param_3 * fVar8 + local_88,param_3);
    param_2[1] = CONCAT44(param_3 * fVar7 + (fVar2 - fVar1),param_3 * fVar6 + fStack_84);
    *(undefined4 *)(param_2 + 2) = local_68;
  }
  return param_2;
}



// FUNCTION 142f936c0 FUN_142f936c0 body=736 status=ok
// SIG undefined FUN_142f936c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f936c0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_488 [32];
  undefined4 local_468;
  undefined1 local_458 [16];
  undefined1 local_448 [512];
  ulonglong local_248;
  ulonglong local_240;
  undefined1 local_238 [512];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_488;
  puVar8 = (undefined1 *)0x0;
  *(undefined8 *)(param_1 + 0x38) = DAT_14676e1b0;
  *(undefined4 *)(param_1 + 0x40) = DAT_14676e1b8;
  *(undefined8 *)(param_1 + 0x44) = DAT_14676e1b0;
  *(undefined4 *)(param_1 + 0x4c) = DAT_14676e1b8;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x50) = DAT_14676e1b0;
  *(undefined4 *)(param_1 + 0x58) = DAT_14676e1b8;
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 == '\0') {
    return;
  }
  local_240 = 0;
  local_248 = 0;
  if (cVar1 == '\x01') {
    lVar3 = FUN_142fa3db0(param_1,local_458);
    uVar2 = *(undefined4 *)(lVar3 + 8);
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x18);
    lVar3 = *param_2;
    iVar7 = (int)lVar3;
    if ((iVar7 < 0) || (lVar3 < 0)) {
LAB_142f937e9:
      puVar5 = puVar8;
    }
    else {
      puVar5 = puVar8;
      if (lVar4 != 0) {
        puVar5 = *(undefined1 **)(lVar4 + 0x8f8);
      }
      if ((((puVar5 == (undefined1 *)0x0) || (lVar4 = *(longlong *)(puVar5 + 0x130), lVar4 == 0)) ||
          (iVar7 < 0)) ||
         (((*(int *)(lVar4 + 0x40) <= iVar7 ||
           (puVar5 = *(undefined1 **)((longlong)iVar7 * 0x100 + *(longlong *)(lVar4 + 0x38)),
           puVar5 == (undefined1 *)0x0)) ||
          (*(int *)(*(longlong *)(puVar5 + 0x18) + 0xd8) +
           *(int *)(*(longlong *)(puVar5 + 0x18) + 0x20) <= (int)((ulonglong)lVar3 >> 0x20)))))
      goto LAB_142f937e9;
    }
    local_468 = 3;
    puVar5 = (undefined1 *)FUN_142f939a0(local_238,*(undefined8 *)(param_1 + 0x60),puVar5,uVar2);
  }
  else {
    puVar5 = puVar8;
    if (cVar1 != '\x02') goto LAB_142f938bc;
    puVar5 = (undefined1 *)FUN_142f90f50(local_238,*(undefined8 *)(param_1 + 0x70),3);
  }
  if (local_448 != puVar5) {
    if (*(longlong *)(puVar5 + 0x200) == 0) {
      _guard_xfg_dispatch_icall_nop(local_448,puVar5,0x200);
    }
    if (local_248 != 0) {
      FMemory::Free();
    }
    local_248 = *(ulonglong *)(puVar5 + 0x200);
    *(undefined8 *)(puVar5 + 0x200) = 0;
    local_240 = *(ulonglong *)(puVar5 + 0x208);
    *(undefined8 *)(puVar5 + 0x208) = 0;
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  puVar5 = (undefined1 *)(local_240 & 0xffffffff);
LAB_142f938bc:
  iVar7 = (int)puVar5;
  puVar5 = local_448;
  if (local_248 != 0) {
    puVar5 = puVar8;
  }
  puVar9 = (undefined8 *)((ulonglong)puVar5 | local_248);
  puVar6 = puVar9;
  do {
    if (puVar6 == puVar9 + (longlong)iVar7 * 2) {
LAB_142f93900:
      if (iVar7 == 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x34);
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x40) = uVar2;
        *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x5c) = 1;
      }
      else {
        *(undefined8 *)(param_1 + 0x38) = *puVar9;
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(puVar9 + 1);
        if (iVar7 == 1) {
          uVar2 = *(undefined4 *)(param_1 + 0x34);
          *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0x5c) = 2;
        }
        else {
          *(undefined8 *)(param_1 + 0x44) = puVar9[2];
          uVar2 = *(undefined4 *)(puVar9 + 3);
          *(undefined4 *)(param_1 + 0x5c) = 3;
        }
      }
      *(undefined4 *)(param_1 + 0x4c) = uVar2;
      if (local_248 != 0) {
        FMemory::Free();
      }
      return;
    }
    if (*(char *)((longlong)puVar6 + 0xc) != '\0') {
      *(undefined8 *)(param_1 + 0x50) = *puVar6;
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(puVar6 + 1);
      goto LAB_142f93900;
    }
    puVar6 = puVar6 + 2;
  } while( true );
}



// FUNCTION 142f939a0 FUN_142f939a0 body=989 status=ok
// SIG undefined FUN_142f939a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * FUN_142f939a0(void *param_1,longlong param_2,longlong param_3,float param_4,int param_5)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_3f8 [32];
  undefined8 local_3d8;
  float local_3d0;
  undefined8 local_3c8;
  float fStack_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  undefined1 local_3a8 [16];
  undefined1 local_398 [72];
  float *local_350;
  int local_348;
  uint local_344;
  undefined1 local_338 [512];
  undefined1 *local_138;
  undefined8 local_130;
  undefined1 local_128 [160];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  if (((param_2 == 0) || (param_3 == 0)) ||
     (iVar9 = FWmfMediaTextureSample::GetFormat(param_2), iVar9 == 0)) {
    *(undefined8 *)((longlong)param_1 + 0x200) = 0;
    *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  }
  else {
    local_138 = (undefined1 *)0x0;
    local_130 = 0;
    FUN_14385d690(param_2,local_128);
    do {
      if (param_5 <= (int)local_130) break;
      local_350 = (float *)0x0;
      local_348 = 0;
      local_344 = 0x80000000;
      uVar10 = FUN_14385af20(local_128,local_398);
      uVar8 = local_130;
      if (uVar10 < 2) {
        local_3c8 = CONCAT44(DAT_14676e1b0._4_4_,(float)DAT_14676e1b0);
        fStack_3c0 = DAT_14676e1b8;
        fStack_3bc = (float)((uint)fStack_3bc & 0xffffff00);
        fVar15 = (float)DAT_14676e1b0;
        fVar16 = DAT_14676e1b0._4_4_;
        if (0 < local_348) {
          fStack_3ac = (float)CONCAT31(fStack_3ac._1_3_,1);
          local_3b8 = local_350[1] * *(float *)(param_3 + 0x50) +
                      *local_350 * *(float *)(param_3 + 0x40) +
                      local_350[2] * *(float *)(param_3 + 0x60) + *(float *)(param_3 + 0x70);
          fStack_3b4 = local_350[1] * *(float *)(param_3 + 0x54) +
                       *local_350 * *(float *)(param_3 + 0x44) +
                       local_350[2] * *(float *)(param_3 + 100) + *(float *)(param_3 + 0x74);
          local_3d8 = CONCAT44(fStack_3b4,local_3b8);
          local_3b8 = local_3b8 * 100.0;
          fStack_3b4 = fStack_3b4 * 100.0;
          local_3c8 = CONCAT44(fStack_3b4,local_3b8);
          fStack_3bc = fStack_3ac;
          fVar15 = local_3b8;
          fVar16 = fStack_3b4;
          local_3d0 = param_4;
          fStack_3c0 = param_4;
          fStack_3b0 = param_4;
        }
        fVar7 = fStack_3bc;
        fVar6 = fStack_3c0;
        if ((((-(float)DAT_14676e1b0 < fVar15) && (fVar15 < (float)DAT_14676e1b0)) &&
            ((-DAT_14676e1b0._4_4_ < fVar16 &&
             ((fVar16 < DAT_14676e1b0._4_4_ && (-DAT_14676e1b8 < fStack_3c0)))))) &&
           (fStack_3c0 < DAT_14676e1b8)) {
          lVar14 = (longlong)(int)local_130;
          iVar9 = (int)local_130 + 1;
          local_130 = CONCAT44(local_130._4_4_,iVar9);
          if (local_130._4_4_ < iVar9) {
            FUN_142fb1030(local_338,uVar8 & 0xffffffff);
          }
          puVar13 = local_338;
          if (local_138 != (undefined1 *)0x0) {
            puVar13 = local_138;
          }
          pfVar1 = (float *)(puVar13 + lVar14 * 0x10);
          *pfVar1 = fVar15;
          pfVar1[1] = fVar16;
          pfVar1[2] = fVar6;
          pfVar1[3] = fVar7;
        }
      }
      if (uVar10 == 0) {
        puVar11 = (undefined4 *)FUN_142f92cf0(local_3a8,local_398,param_3,param_4);
        uVar8 = local_130;
        lVar14 = (longlong)(int)local_130;
        iVar9 = (int)local_130 + 1;
        local_130 = CONCAT44(local_130._4_4_,iVar9);
        if (local_130._4_4_ < iVar9) {
          FUN_142fb1030(local_338,uVar8 & 0xffffffff);
        }
        uVar3 = puVar11[1];
        uVar4 = puVar11[2];
        uVar5 = puVar11[3];
        puVar13 = local_338;
        if (local_138 != (undefined1 *)0x0) {
          puVar13 = local_138;
        }
        puVar2 = (undefined4 *)(puVar13 + lVar14 * 0x10);
        *puVar2 = *puVar11;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
      }
      uVar12 = FUN_143703a50();
      local_348 = 0;
      if (-1 < (int)local_344) {
        FUN_143702e10(uVar12,local_350,0x20,local_344 & 0x3fffffff);
      }
    } while (uVar10 == 0);
    puVar13 = local_138;
    *(undefined8 *)((longlong)param_1 + 0x200) = 0;
    if (local_138 == (undefined1 *)0x0) {
      _guard_xfg_dispatch_icall_nop(param_1,local_338,0x200);
    }
    if (*(longlong *)((longlong)param_1 + 0x200) != 0) {
      FMemory::Free();
      puVar13 = local_138;
    }
    *(undefined1 **)((longlong)param_1 + 0x200) = puVar13;
    *(int *)((longlong)param_1 + 0x20c) = local_130._4_4_;
    local_138 = (undefined1 *)0x0;
    *(int *)((longlong)param_1 + 0x208) = (int)local_130;
    local_130 = 0;
    FUN_14385a440(local_128);
    if (local_138 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 142f93d80 FUN_142f93d80 body=1863 status=ok
// SIG undefined FUN_142f93d80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f93d80(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_res10;
  undefined8 local_198;
  float local_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined8 local_178;
  float local_170;
  undefined8 local_168;
  float local_160;
  undefined1 local_158 [8];
  float local_150;
  undefined8 local_148;
  float local_140;
  undefined8 local_13c;
  float local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  
  cVar5 = FUN_142fa89b0(param_1 + 0xe8);
  if (cVar5 != '\0') {
    local_188 = *(float *)(param_1 + 0xe8);
    fStack_184 = *(float *)(param_1 + 0xec);
    fStack_180 = *(float *)(param_1 + 0xf0);
    fStack_17c = *(float *)(param_1 + 0xf4);
    fVar10 = *(float *)(param_1 + 0x100);
    uVar1 = *(undefined8 *)(param_1 + 0xf8);
    local_170 = fVar10;
    if ((((((local_188 < 3.4028235e+38) && (0.0001 < local_188)) &&
          (-(float)DAT_14676e1b0 < fStack_184)) &&
         ((fStack_184 < (float)DAT_14676e1b0 && (-DAT_14676e1b0._4_4_ < fStack_180)))) &&
        ((fStack_180 < DAT_14676e1b0._4_4_ &&
         ((-DAT_14676e1b8 < fStack_17c && (fStack_17c < DAT_14676e1b8)))))) &&
       ((local_178._4_4_ = (float)((ulonglong)uVar1 >> 0x20), local_178._4_4_ != 3.4028235e+38 &&
        (fVar10 != 3.4028235e+38)))) {
      fVar9 = ((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x14)) / local_188) * 57.295776;
      local_170 = -fVar9;
      if ((local_170 <= fVar10) && (local_170 = fVar10, fVar9 <= fVar10)) {
        local_170 = fVar9;
      }
    }
    if ((((*(longlong *)(param_1 + 0x28) != 0) &&
         (local_c8 = *(longlong *)(param_1 + 0x30), local_c8 != 0)) &&
        (lVar2 = *(longlong *)(param_1 + 0x38), lVar2 != 0)) &&
       ((*(longlong *)(param_1 + 0x40) != 0 &&
        (*(float *)(param_1 + 0x108) * *(float *)(param_1 + 0x114) +
         *(float *)(param_1 + 0x104) * *(float *)(param_1 + 0x110) +
         *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x118) < _DAT_14676e1d0)))) {
      fVar10 = ABS(local_170) / *(float *)(param_1 + 0x1c);
      iVar8 = -((int)ROUND(-0.5 - (fVar10 + fVar10)) >> 1);
      fVar10 = local_170 / (float)iVar8;
      local_178 = uVar1;
      if (*(char *)(lVar2 + 0x781) == '\x01') {
        if ((-1 < *(int *)(lVar2 + 0x758)) && (-1 < *(int *)(lVar2 + 0x75c))) {
          puVar6 = (undefined8 *)FUN_142fa3340(&local_188,local_158);
          local_118 = *(undefined8 *)(lVar2 + 0x6f8);
          uStack_110 = *(undefined8 *)(lVar2 + 0x700);
          iVar7 = 0;
          uVar1 = *puVar6;
          local_130 = *(undefined8 *)(lVar2 + 0x758);
          local_128 = *(undefined8 *)(lVar2 + 0x6e8);
          uStack_120 = *(undefined8 *)(lVar2 + 0x6f0);
          local_f8 = *(undefined8 *)(lVar2 + 0x718);
          uStack_f0 = *(undefined8 *)(lVar2 + 0x720);
          local_108 = *(undefined8 *)(lVar2 + 0x708);
          uStack_100 = *(undefined8 *)(lVar2 + 0x710);
          local_d8 = *(undefined8 *)(lVar2 + 0x738);
          uStack_d0 = *(undefined8 *)(lVar2 + 0x740);
          local_e8 = *(undefined8 *)(lVar2 + 0x728);
          uStack_e0 = *(undefined8 *)(lVar2 + 0x730);
          if (0 < iVar8) {
            local_13c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
            local_13c._0_4_ = (float)uVar1;
            fVar9 = *(float *)(puVar6 + 1);
            fVar11 = local_13c._4_4_;
            fVar12 = (float)local_13c;
            local_13c = uVar1;
            do {
              iVar7 = iVar7 + 1;
              local_134 = fVar9;
              FUN_142fa3340(&local_188,&local_198,(float)iVar7 * fVar10);
              uVar1 = local_198;
              fVar3 = (float)local_198;
              local_150 = local_190 - fVar9;
              fVar4 = local_198._4_4_;
              local_res10 = 0xffffffffffffffff;
              local_168 = CONCAT44(DAT_14676e1b0._4_4_,(float)DAT_14676e1b0);
              local_160 = DAT_14676e1b8;
              local_148 = CONCAT44(local_198._4_4_ - fVar11,(float)local_198 - fVar12);
              local_140 = local_150;
              cVar5 = FUN_142f99630(&local_148,&local_168,&local_res10);
              if (cVar5 == '\0') {
LAB_142f9430d:
                local_198 = *(undefined8 *)(lVar2 + 0x784);
                local_190 = *(float *)(lVar2 + 0x78c) - *(float *)(lVar2 + 0x6ec);
                FUN_142f9af40(&local_188,&local_198,&local_168);
                return;
              }
              local_130 = local_res10;
              local_13c = uVar1;
              fVar9 = local_190;
              fVar11 = fVar4;
              fVar12 = fVar3;
            } while (iVar7 < iVar8);
          }
        }
      }
      else if ((-1 < *(int *)(lVar2 + 0x760)) && (-1 < *(int *)(lVar2 + 0x764))) {
        puVar6 = (undefined8 *)FUN_142fa3340(&local_188,local_158);
        local_118 = *(undefined8 *)(lVar2 + 0x6f8);
        uStack_110 = *(undefined8 *)(lVar2 + 0x700);
        iVar7 = 0;
        uVar1 = *puVar6;
        local_130 = *(undefined8 *)(lVar2 + 0x760);
        local_128 = *(undefined8 *)(lVar2 + 0x6e8);
        uStack_120 = *(undefined8 *)(lVar2 + 0x6f0);
        local_f8 = *(undefined8 *)(lVar2 + 0x718);
        uStack_f0 = *(undefined8 *)(lVar2 + 0x720);
        local_108 = *(undefined8 *)(lVar2 + 0x708);
        uStack_100 = *(undefined8 *)(lVar2 + 0x710);
        local_d8 = *(undefined8 *)(lVar2 + 0x738);
        uStack_d0 = *(undefined8 *)(lVar2 + 0x740);
        local_e8 = *(undefined8 *)(lVar2 + 0x728);
        uStack_e0 = *(undefined8 *)(lVar2 + 0x730);
        if (0 < iVar8) {
          local_13c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
          local_13c._0_4_ = (float)uVar1;
          fVar9 = *(float *)(puVar6 + 1);
          fVar11 = local_13c._4_4_;
          fVar12 = (float)local_13c;
          local_13c = uVar1;
          do {
            iVar7 = iVar7 + 1;
            local_134 = fVar9;
            FUN_142fa3340(&local_188,&local_198,(float)iVar7 * fVar10);
            uVar1 = local_198;
            fVar3 = (float)local_198;
            local_150 = local_190 - fVar9;
            fVar4 = local_198._4_4_;
            local_res10 = 0xffffffffffffffff;
            local_168 = CONCAT44(DAT_14676e1b0._4_4_,(float)DAT_14676e1b0);
            local_160 = DAT_14676e1b8;
            local_148 = CONCAT44(local_198._4_4_ - fVar11,(float)local_198 - fVar12);
            local_140 = local_150;
            cVar5 = FUN_142f993b0(&local_148,&local_168,&local_res10);
            if (cVar5 == '\0') goto LAB_142f9430d;
            local_130 = local_res10;
            local_13c = uVar1;
            fVar9 = local_190;
            fVar11 = fVar4;
            fVar12 = fVar3;
          } while (iVar7 < iVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 142f944d0 FUN_142f944d0 body=127 status=ok
// SIG undefined FUN_142f944d0(void)

ulonglong FUN_142f944d0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (-1 < *(int *)(param_2 + 0x14)) {
    return (ulonglong)(-*(int *)(param_2 + 0x14) - 2);
  }
  lVar4 = *(longlong *)(param_2 + 8);
  if (lVar4 != 0) {
    lVar2 = FUN_142fbe6f0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142f94536;
  }
  lVar4 = 0;
LAB_142f94536:
  uVar3 = FUN_142f9d9e0(param_1 + 0xa8,lVar4);
  return uVar3;
}



// FUNCTION 142f94560 FUN_142f94560 body=53 status=ok
// SIG undefined FUN_142f94560(void)

void FUN_142f94560(longlong *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = *(undefined1 **)(*param_1 + 0x88);
  FUN_1424c8610();
  FUN_1424c98a0();
  uVar2 = FUN_142fa4520(puVar1 + 8,puVar1 + 0x90,0);
  *puVar1 = uVar2;
  return;
}



// FUNCTION 142f945b0 FUN_142f945b0 body=85 status=ok
// SIG undefined FUN_142f945b0(void)

undefined1 FUN_142f945b0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142fa8b90();
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x781) == '\x02')) {
    if (*(char *)(param_1 + 0xa98) != '\0') {
      return 1;
    }
    cVar1 = FUN_142fa8b90(param_1);
    if (((cVar1 != '\0') && (*(char *)(param_1 + 0x780) == '\0')) &&
       (cVar1 = FUN_142fbc510(param_1), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142f94610 FUN_142f94610 body=1014 status=ok
// SIG undefined FUN_142f94610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142f94610(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 auStack_1e8 [32];
  undefined4 *local_1c8;
  undefined4 local_1c0;
  float *local_1b8;
  undefined8 *local_1b0;
  undefined *local_1a8;
  undefined1 local_198 [4];
  float local_194;
  float local_190;
  float local_18c;
  float local_180;
  float local_17c;
  float local_178;
  undefined1 local_170 [40];
  undefined1 local_148 [12];
  undefined4 local_13c;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  float local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0();
  }
  if ((((((lVar4 != 0) && (fVar1 = *(float *)(param_1 + 0x210), -(float)DAT_14676e1b0 < fVar1)) &&
        (fVar1 < (float)DAT_14676e1b0)) &&
       ((-DAT_14676e1b0._4_4_ < *(float *)(param_1 + 0x214) &&
        (*(float *)(param_1 + 0x214) < DAT_14676e1b0._4_4_)))) &&
      ((fVar2 = *(float *)(param_1 + 0x218), -DAT_14676e1b8 < fVar2 &&
       ((fVar2 < DAT_14676e1b8 && (-1 < *(int *)(param_1 + 0x208))))))) &&
     ((-1 < *(int *)(param_1 + 0x20c) &&
      (fVar7 = *(float *)(param_1 + 0x214) - param_2[1],
      cVar3 = FUN_142c4a520(param_1 + 400,
                            SQRT(fVar7 * fVar7 + (fVar1 - *param_2) * (fVar1 - *param_2) +
                                 (fVar2 - param_2[2]) * (fVar2 - param_2[2]))), cVar3 != '\0')))) {
    cVar3 = FUN_142fa8260(*(undefined8 *)(param_1 + 0x1a0),(float *)(param_1 + 0x1a8),
                          *(undefined8 *)(param_1 + 0x208));
    if (cVar3 != '\0') {
      local_38 = *(undefined8 *)(param_1 + 0x1a0);
      local_18c = param_2[2] - *(float *)(param_1 + 0x218);
      local_78 = *(undefined8 *)(param_1 + 0x1c8);
      lStack_70 = *(longlong *)(param_1 + 0x1d0);
      local_b8 = CONCAT44(param_2[1] - *(float *)(param_1 + 0x214),
                          *param_2 - *(float *)(param_1 + 0x210));
      local_88 = *(undefined8 *)(param_1 + 0x1b8);
      uStack_80 = *(undefined8 *)(param_1 + 0x1c0);
      uStack_94 = *(undefined4 *)(param_1 + 0x1ac);
      uStack_90 = *(undefined4 *)(param_1 + 0x1b0);
      uStack_8c = *(undefined4 *)(param_1 + 0x1b4);
      local_68 = *(undefined8 *)(param_1 + 0x1d8);
      uStack_60 = *(undefined8 *)(param_1 + 0x1e0);
      local_a0 = *(undefined8 *)(param_1 + 0x208);
      local_48 = *(undefined8 *)(param_1 + 0x1f8);
      uStack_40 = *(undefined8 *)(param_1 + 0x200);
      local_a4 = *(undefined4 *)(param_1 + 0x218);
      local_98 = *(float *)(param_1 + 0x1a8) * 0.5;
      local_58 = *(undefined4 *)(param_1 + 0x1e8);
      uStack_54 = *(undefined4 *)(param_1 + 0x1ec);
      uStack_50 = *(undefined4 *)(param_1 + 0x1f0);
      uStack_4c = *(undefined4 *)(param_1 + 500);
      local_ac = *(undefined8 *)(param_1 + 0x210);
      local_b0 = local_18c;
      cVar3 = FUN_142f99630(&local_b8,0,0);
      if (cVar3 == '\0') {
        puVar5 = (undefined8 *)FName::FName(&local_180,L"UGbxNavUserEdgeTrailComponent",1);
        local_1c8 = (undefined4 *)0x0;
        FUN_1422ffb20(&local_b8,*puVar5,local_198,0);
        FCollisionQueryParams::AddIgnoredActor(&local_b8);
        _guard_xfg_dispatch_icall_nop(local_148,0,0x90);
        local_180 = DAT_14676e1e0 + *param_2;
        local_194 = DAT_14676e1e0 + *(float *)(param_1 + 0x210);
        local_13c = 0x3f800000;
        local_17c = DAT_14676e1e4 + param_2[1];
        local_190 = DAT_14676e1e4 + *(float *)(param_1 + 0x214);
        local_178 = DAT_14676e1e8 + param_2[2];
        local_18c = DAT_14676e1e8 + *(float *)(param_1 + 0x218);
        uVar6 = FUN_1428cc5b0(lVar4);
        FUN_1424c5f20(local_170,&local_194,&local_180,uVar6);
        lVar4 = *(longlong *)(param_1 + 0x120);
        local_190 = *(float *)(param_1 + 0x19c);
        local_194 = 2.8026e-45;
        if (lVar4 == 0) {
          lVar4 = FUN_1423407b0(param_1);
        }
        local_1a8 = &DAT_146aefe68;
        local_1b0 = &local_b8;
        local_1b8 = &local_194;
        local_1c0 = 3;
        local_1c8 = &DAT_1464aa810;
        cVar3 = FUN_1424d60f0(local_170,local_148,lVar4,2);
        if (cVar3 == '\0') {
          if (CONCAT44(uStack_4c,uStack_50) != 0) {
            FMemory::Free();
          }
          if (lStack_70 != 0) {
            FMemory::Free();
          }
          return 1;
        }
        if (CONCAT44(uStack_4c,uStack_50) != 0) {
          FMemory::Free();
        }
        if (lStack_70 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142f94a10 FUN_142f94a10 body=470 status=ok
// SIG undefined FUN_142f94a10(void)

undefined8 FUN_142f94a10(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 local_18;
  
  if (((*(longlong *)(param_1 + 0x60) != 0) && (lVar2 = *(longlong *)(param_1 + 0x68), lVar2 != 0))
     && (*(longlong *)(lVar2 + 0x178) != 0)) {
    lVar2 = lVar2 + 0x2110;
    if (*(char *)(param_1 + 0x88) == '\0') {
      uVar4 = FUN_142c6a420(lVar2,*(undefined1 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x30));
      return uVar4;
    }
    if (*(char *)(param_1 + 0x89) == '\0') {
      uVar4 = FUN_142c6a0d0(lVar2,*(undefined1 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x30));
      return uVar4;
    }
    bVar1 = *(byte *)(param_1 + 0x38);
    if (((bVar1 - 3 & 0xfd) == 0) && (*(longlong *)(param_1 + 0x40) == 0)) {
      cVar3 = FUN_142f94bf0(param_1);
      if (cVar3 != '\0') {
        lVar2 = *(longlong *)(param_1 + 0x60);
        if (0.0 < *(float *)(lVar2 + 0x780) == (*(char *)(param_1 + 0x38) == '\x03')) {
          return 1;
        }
        if (((((lVar2 != 0) && (*(longlong *)(param_1 + 0x68) != 0)) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x178) != 0)) &&
            ((*(char *)(param_1 + 0x38) == '\x05' && (*(longlong *)(param_1 + 0x70) != 0)))) &&
           ((*(char *)(lVar2 + 0x7e8) != '\0' && (*(char *)(lVar2 + 0x7e9) != '\0')))) {
          local_28 = *(undefined4 *)(lVar2 + 0x7ec);
          uStack_24 = *(undefined4 *)(lVar2 + 0x7f0);
          uStack_20 = *(undefined4 *)(lVar2 + 0x7f4);
          local_18 = *(undefined4 *)(lVar2 + 0x7fc);
          fStack_1c = *(float *)(lVar2 + 0x7f8) + (*(float *)(param_1 + 0x8c) - 10.0);
          cVar3 = FUN_142c73900(&local_28,lVar2 + 0x5f4);
          if (cVar3 != '\0') {
            return 1;
          }
        }
      }
    }
    else {
      if (((bVar1 & 0xfa) == 0) && (bVar1 != 5)) {
        uVar4 = FUN_142c6a260(lVar2,*(undefined4 *)(param_1 + 0x30),bVar1,
                              *(float *)(*(longlong *)(param_1 + 0x60) + 0x780) <= 0.0);
        return uVar4;
      }
      cVar3 = FUN_142f94bf0(param_1);
      if (cVar3 != '\0') {
        cVar3 = *(char *)(param_1 + 0x38);
        if (((((cVar3 - 3U & 0xfd) != 0) || (*(longlong *)(param_1 + 0x40) != 0)) &&
            ((cVar3 == '\x03' || ((byte)(cVar3 - 5U) < 3)))) &&
           (cVar3 = FUN_142c95c50(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x40)),
           cVar3 == '\0')) {
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142f94bf0 FUN_142f94bf0 body=534 status=ok
// SIG undefined FUN_142f94bf0(void)

undefined8 FUN_142f94bf0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined4 uVar5;
  float extraout_XMM0_Da;
  undefined1 local_38 [48];
  
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar1 + 0x178) == 0) {
    return 0;
  }
  if (*(char *)(lVar1 + 0x248) == '\0') {
    return 0;
  }
  cVar2 = FUN_1407c3030(lVar1 + 0x948);
  if (cVar2 != '\0') {
    return 0;
  }
  bVar4 = *(byte *)(param_1 + 0x38);
  if (bVar4 == 8) {
    if (0.0 < *(float *)(*(longlong *)(param_1 + 0x60) + 0x780)) {
      return 0;
    }
  }
  else {
    if (bVar4 == 3) {
      if (10.0 < *(float *)(*(longlong *)(param_1 + 0x60) + 0x5b8)) {
        return 0;
      }
    }
    else if ((7 < bVar4) || ((0xacU >> (bVar4 & 0x1f) & 1) == 0)) goto LAB_142f94cb6;
    lVar1 = *(longlong *)(param_1 + 0x60);
    cVar2 = FUN_1407c3030(*(longlong *)(param_1 + 0x68) + 0x8b0);
    if ((cVar2 != '\0') && (*(char *)(lVar1 + 0x800) == '\0')) {
      return 0;
    }
    bVar4 = *(byte *)(param_1 + 0x38);
  }
LAB_142f94cb6:
  if ((byte)(bVar4 - 6) < 3) {
    if (2 < (byte)(bVar4 - 6)) {
      return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x60);
    if (lVar1 == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x68) == 0) {
      return 0;
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x178) == 0) {
      return 0;
    }
    if (*(longlong *)(lVar1 + 0x538) == 0) {
      return 0;
    }
    if (bVar4 != 7) {
      if ((ABS(*(float *)(lVar1 + 0x790)) < *(float *)(lVar1 + 0x7e4) ||
           ABS(*(float *)(lVar1 + 0x790)) == *(float *)(lVar1 + 0x7e4)) &&
         (*(char *)(lVar1 + 0x801) == '\0')) {
        return 0;
      }
      uVar5 = FUN_142f9d900(param_1);
      uVar3 = FUN_142fa4860(param_1,local_38);
      FUN_142fa3e70(*(undefined8 *)(param_1 + 0x60),uVar3,uVar5);
      if (*(char *)(param_1 + 0x38) == '\b') {
        if (extraout_XMM0_Da < *(float *)(param_1 + 0x78)) {
          return 0;
        }
        if (*(float *)(param_1 + 0x7c) <= extraout_XMM0_Da &&
            extraout_XMM0_Da != *(float *)(param_1 + 0x7c)) {
          return 0;
        }
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b441c0) && (_Init_thread_header(&DAT_146b441c0), DAT_146b441c0 == -1))
  {
    FName::FName(&DAT_146b441b8,L"Navigation",1);
    _Init_thread_footer(&DAT_146b441c0);
  }
  uVar3 = FUN_142269f40(*(undefined8 *)(param_1 + 0x60));
  cVar2 = FUN_142ca5040(uVar3,&DAT_146b441b8);
  if (cVar2 != '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 142f94e10 FUN_142f94e10 body=287 status=ok
// SIG undefined FUN_142f94e10(void)

undefined8 FUN_142f94e10(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) && (*(longlong *)(param_1 + 0x18) != 0))
     && (*(char *)(param_1 + 0x50) != '\0')) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x678))();
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x668))();
    if (((lVar3 != 0) && (lVar4 != 0)) &&
       ((*(longlong *)(lVar4 + 0x488) != 0 && (*(longlong *)(lVar4 + 0x488) == lVar3)))) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xc88))();
      if ((cVar1 == '\0') &&
         (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xc80))(), cVar1 == '\0')) {
        return 0;
      }
      cVar1 = FUN_1407c3030(*(longlong *)(param_1 + 0x18) + 0x8b0);
      if (cVar1 == '\0') {
        lVar3 = *(longlong *)(param_1 + 8);
        if (((((lVar3 != 0) && (*(char *)(lVar3 + 0x364) != '\0')) &&
             (*(longlong *)(lVar3 + 0x278) != 0)) &&
            ((lVar3 = FWeakObjectPtr::Get(*(longlong *)(lVar3 + 0x278) + 0x78), lVar3 != 0 &&
             (lVar4 = FUN_142df3580(*(undefined8 *)(param_1 + 0x10)), lVar4 != 0)))) &&
           ((lVar3 = FUN_142df3580(lVar3), lVar3 != 0 &&
            (iVar2 = FUN_142df3570(lVar4,lVar3), iVar2 != 0)))) {
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142f94f30 FUN_142f94f30 body=484 status=ok
// SIG undefined FUN_142f94f30(void)

ulonglong FUN_142f94f30(longlong param_1,float *param_2,float *param_3,undefined8 *param_4,
                       undefined8 *param_5)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong local_res8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong lStack_a0;
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
  undefined1 local_28 [16];
  
  lStack_a0 = *(undefined8 *)(param_1 + 0x6f0);
  local_48 = *(undefined8 *)(param_1 + 0x6b8);
  local_98 = *(undefined8 *)(param_1 + 0x6f8);
  uStack_90 = *(undefined8 *)(param_1 + 0x700);
  uStack_a8 = (undefined4)*(undefined8 *)(param_1 + 0x6e8);
  uStack_a4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x6e8) >> 0x20);
  local_88 = *(undefined8 *)(param_1 + 0x708);
  uStack_80 = *(undefined8 *)(param_1 + 0x710);
  local_b0 = param_2[2];
  local_78 = *(undefined8 *)(param_1 + 0x718);
  uStack_70 = *(undefined8 *)(param_1 + 0x720);
  local_68 = *(undefined8 *)(param_1 + 0x728);
  uStack_60 = *(undefined8 *)(param_1 + 0x730);
  local_res8 = -1;
  local_58 = *(undefined8 *)(param_1 + 0x738);
  uStack_50 = *(undefined8 *)(param_1 + 0x740);
  local_b8 = *(undefined8 *)param_2;
  local_ac = 0x3f800000;
  uVar2 = FUN_142f9e4d0(&local_b8,&local_c8,&local_res8);
  if ((char)uVar2 != '\0') {
    local_88 = *(undefined8 *)(param_1 + 0x6f8);
    uStack_80 = *(undefined8 *)(param_1 + 0x700);
    uStack_a4 = local_c0;
    local_ac = (undefined4)local_c8;
    uStack_a8 = (undefined4)((ulonglong)local_c8 >> 0x20);
    local_98 = *(undefined8 *)(param_1 + 0x6e8);
    uStack_90 = *(undefined8 *)(param_1 + 0x6f0);
    lStack_a0 = local_res8;
    local_38 = *(undefined8 *)(param_1 + 0x6b8);
    local_78 = *(undefined8 *)(param_1 + 0x708);
    uStack_70 = *(undefined8 *)(param_1 + 0x710);
    local_68 = *(undefined8 *)(param_1 + 0x718);
    uStack_60 = *(undefined8 *)(param_1 + 0x720);
    local_res8 = -1;
    local_58 = *(undefined8 *)(param_1 + 0x728);
    uStack_50 = *(undefined8 *)(param_1 + 0x730);
    local_48 = *(undefined8 *)(param_1 + 0x738);
    uStack_40 = *(undefined8 *)(param_1 + 0x740);
    local_b0 = param_3[2] - param_2[2];
    local_c0 = DAT_14676e1b8;
    local_b8 = CONCAT44(param_3[1] - param_2[1],*param_3 - *param_2);
    local_c8 = DAT_14676e1b0;
    bVar1 = FUN_142f993b0(&local_b8,&local_c8,&local_res8);
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = local_c8;
      *(undefined4 *)(param_4 + 1) = local_c0;
    }
    if (((param_5 != (undefined8 *)0x0) && (-1 < (int)local_res8)) && (-1 < local_res8)) {
      puVar3 = (undefined8 *)
               FUN_142f902e0(local_28,*(undefined8 *)(param_1 + 0x6b8),local_res8,&local_c8);
      *param_5 = *puVar3;
      *(undefined4 *)(param_5 + 1) = *(undefined4 *)(puVar3 + 1);
    }
    uVar2 = (ulonglong)bVar1;
  }
  return uVar2;
}



// FUNCTION 142f95120 FUN_142f95120 body=376 status=ok
// SIG undefined FUN_142f95120(void)

void FUN_142f95120(longlong *param_1,undefined8 *param_2,char param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  undefined1 local_38 [12];
  undefined1 local_2c [20];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  uVar3 = FUN_142fa8b90();
  if ((char)uVar3 != '\0') {
    if (param_3 == '\0') {
      lVar1 = param_1[0xda];
      local_18 = *(float *)(lVar1 + 0x210);
      fStack_14 = *(float *)(lVar1 + 0x214);
      fStack_10 = *(float *)(lVar1 + 0x218);
      fStack_c = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
      iVar4 = movmskps(uVar3,auVar2);
      if (iVar4 != 0) {
        *(float *)(lVar1 + 0x250) = local_18;
        *(float *)(lVar1 + 0x254) = fStack_14;
        *(float *)(lVar1 + 600) = fStack_10;
        *(float *)(lVar1 + 0x25c) = fStack_c;
        puVar5 = (undefined8 *)FQuat::Rotator(&local_18,local_38);
        *(undefined8 *)(lVar1 + 0x260) = *puVar5;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
      }
      local_48 = *(undefined8 *)(lVar1 + 0x260);
      local_40 = *(float *)(lVar1 + 0x268);
      puVar5 = (undefined8 *)FRotator::UnrotateVector(&local_48,local_2c,param_2);
    }
    else {
      local_50 = (float)*(undefined4 *)(param_2 + 1);
      puVar5 = &local_58;
      local_58 = *param_2;
    }
    local_40 = *(float *)(puVar5 + 1);
    local_68 = *(undefined8 *)((longlong)param_1 + 0x784);
    local_60 = *(float *)((longlong)param_1 + 0x78c) - *(float *)((longlong)param_1 + 0x6ec);
    local_50 = local_60 + local_40;
    local_58 = CONCAT44((float)((ulonglong)local_68 >> 0x20) + (float)((ulonglong)*puVar5 >> 0x20),
                        (float)local_68 + (float)*puVar5);
    (**(code **)(*param_1 + 0x468))(param_1,&local_68,&local_58,param_4,param_5);
  }
  return;
}



// FUNCTION 142f952a0 FUN_142f952a0 body=121 status=ok
// SIG undefined FUN_142f952a0(void)

void FUN_142f952a0(longlong *param_1,float *param_2,undefined8 param_3)

{
  float local_28;
  float local_24;
  float local_20;
  float local_14;
  
  local_28 = *param_2 - (float)*(undefined8 *)((longlong)param_1 + 0x784);
  local_14 = *(float *)((longlong)param_1 + 0x78c);
  local_24 = param_2[1] - (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x784) >> 0x20);
  local_20 = param_2[2] - (local_14 - *(float *)((longlong)param_1 + 0x6ec));
  (**(code **)(*param_1 + 0x460))(local_20,&local_28,1,param_3,0);
  return;
}



// FUNCTION 142f953b0 FUN_142f953b0 body=530 status=ok
// SIG undefined FUN_142f953b0(void)

ulonglong FUN_142f953b0(longlong param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
                       undefined8 param_5)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [8];
  undefined4 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [12];
  undefined1 local_1c [20];
  
  uVar4 = FUN_142fa8b90();
  if ((char)uVar4 != '\0') {
    local_a8 = *(undefined8 *)(param_1 + 0x6f8);
    uStack_a0 = *(undefined8 *)(param_1 + 0x700);
    local_58 = *(undefined8 *)(param_1 + 0x6b8);
    local_bc = 0xbf800000;
    local_c8 = *param_2;
    uStack_b0 = *(undefined8 *)(param_1 + 0x6f0);
    local_c0 = *(undefined4 *)(param_2 + 1);
    uStack_b8 = (undefined4)*(undefined8 *)(param_1 + 0x6e8);
    uStack_b4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x6e8) >> 0x20);
    local_98 = *(undefined8 *)(param_1 + 0x708);
    uStack_90 = *(undefined8 *)(param_1 + 0x710);
    local_88 = *(undefined8 *)(param_1 + 0x718);
    uStack_80 = *(undefined8 *)(param_1 + 0x720);
    local_f8 = 0xffffffffffffffff;
    local_78 = *(undefined8 *)(param_1 + 0x728);
    uStack_70 = *(undefined8 *)(param_1 + 0x730);
    local_68 = *(undefined4 *)(param_1 + 0x738);
    uStack_64 = *(undefined4 *)(param_1 + 0x73c);
    uStack_60 = *(undefined4 *)(param_1 + 0x740);
    uStack_5c = *(undefined4 *)(param_1 + 0x744);
    uVar4 = FUN_142fae610(&local_c8,local_e0,&local_f8);
    if ((char)uVar4 != '\0') {
      if (param_4 == '\0') {
        lVar1 = *(longlong *)(param_1 + 0x6d0);
        local_38 = *(float *)(lVar1 + 0x210);
        fStack_34 = *(float *)(lVar1 + 0x214);
        fStack_30 = *(float *)(lVar1 + 0x218);
        fStack_2c = *(float *)(lVar1 + 0x21c);
        auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_34);
        auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_38);
        auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_30);
        auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_2c);
        iVar3 = movmskps((int)uVar4,auVar2);
        if (iVar3 != 0) {
          *(float *)(lVar1 + 0x250) = local_38;
          *(float *)(lVar1 + 0x254) = fStack_34;
          *(float *)(lVar1 + 600) = fStack_30;
          *(float *)(lVar1 + 0x25c) = fStack_2c;
          puVar5 = (undefined8 *)FQuat::Rotator(&local_38,local_28);
          *(undefined8 *)(lVar1 + 0x260) = *puVar5;
          *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
        }
        local_f0 = *(undefined8 *)(lVar1 + 0x260);
        local_e8 = *(undefined4 *)(lVar1 + 0x268);
        puVar5 = (undefined8 *)FRotator::UnrotateVector(&local_f0,local_1c,param_3);
      }
      else {
        local_e8 = *(undefined4 *)(param_3 + 1);
        puVar5 = &local_f0;
        local_f0 = *param_3;
      }
      local_c8 = *puVar5;
      local_c0 = *(undefined4 *)(puVar5 + 1);
      local_98 = *(undefined8 *)(param_1 + 0x6f8);
      uStack_90 = *(undefined8 *)(param_1 + 0x700);
      local_48 = *(undefined8 *)(param_1 + 0x6b8);
      local_bc = local_e0._0_4_;
      uStack_b8 = local_e0._4_4_;
      local_a8 = *(undefined8 *)(param_1 + 0x6e8);
      uStack_a0 = *(undefined8 *)(param_1 + 0x6f0);
      local_88 = *(undefined8 *)(param_1 + 0x708);
      uStack_80 = *(undefined8 *)(param_1 + 0x710);
      uStack_b4 = local_d8;
      local_78 = *(undefined8 *)(param_1 + 0x718);
      uStack_70 = *(undefined8 *)(param_1 + 0x720);
      local_68 = *(undefined4 *)(param_1 + 0x728);
      uStack_64 = *(undefined4 *)(param_1 + 0x72c);
      uStack_60 = *(undefined4 *)(param_1 + 0x730);
      uStack_5c = *(undefined4 *)(param_1 + 0x734);
      uStack_b0 = local_f8;
      local_58 = *(undefined8 *)(param_1 + 0x738);
      uStack_50 = *(undefined4 *)(param_1 + 0x740);
      uStack_4c = *(undefined4 *)(param_1 + 0x744);
      uVar4 = FUN_142f99630(&local_c8,param_5,0);
      return uVar4;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142f955d0 FUN_142f955d0 body=392 status=ok
// SIG undefined FUN_142f955d0(void)

void FUN_142f955d0(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 local_d8;
  float local_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  float local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_28 [12];
  undefined1 local_1c [20];
  
  uVar3 = FUN_142fa8b90();
  if ((char)uVar3 != '\0') {
    if (param_3 == '\0') {
      lVar1 = *(longlong *)(param_1 + 0x6d0);
      local_c8 = *(float *)(lVar1 + 0x210);
      fStack_c4 = *(float *)(lVar1 + 0x214);
      fStack_c0 = *(float *)(lVar1 + 0x218);
      fStack_bc = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_c4);
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_c8);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_c0);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_bc);
      iVar4 = movmskps(uVar3,auVar2);
      if (iVar4 != 0) {
        *(float *)(lVar1 + 0x250) = local_c8;
        *(float *)(lVar1 + 0x254) = fStack_c4;
        *(float *)(lVar1 + 600) = fStack_c0;
        *(float *)(lVar1 + 0x25c) = fStack_bc;
        puVar5 = (undefined8 *)FQuat::Rotator(&local_c8,local_28);
        *(undefined8 *)(lVar1 + 0x260) = *puVar5;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
      }
      local_d8 = *(undefined8 *)(lVar1 + 0x260);
      local_d0 = *(float *)(lVar1 + 0x268);
      puVar5 = (undefined8 *)FRotator::UnrotateVector(&local_d8,local_1c,param_2);
    }
    else {
      local_d0 = (float)*(undefined4 *)(param_2 + 1);
      puVar5 = &local_d8;
      local_d8 = *param_2;
    }
    local_b8 = *puVar5;
    local_b0 = *(undefined4 *)(puVar5 + 1);
    local_ac = *(undefined8 *)(param_1 + 0x784);
    local_38 = *(undefined8 *)(param_1 + 0x6b8);
    local_d0 = *(float *)(param_1 + 0x78c) - *(float *)(param_1 + 0x6ec);
    local_88 = *(undefined8 *)(param_1 + 0x6f8);
    uStack_80 = *(undefined8 *)(param_1 + 0x700);
    local_98 = *(undefined8 *)(param_1 + 0x6e8);
    uStack_90 = *(undefined8 *)(param_1 + 0x6f0);
    local_68 = *(undefined8 *)(param_1 + 0x718);
    uStack_60 = *(undefined8 *)(param_1 + 0x720);
    local_a0 = *(undefined8 *)(param_1 + 0x758);
    local_78 = *(undefined8 *)(param_1 + 0x708);
    uStack_70 = *(undefined8 *)(param_1 + 0x710);
    local_48 = *(undefined4 *)(param_1 + 0x738);
    uStack_44 = *(undefined4 *)(param_1 + 0x73c);
    uStack_40 = *(undefined4 *)(param_1 + 0x740);
    uStack_3c = *(undefined4 *)(param_1 + 0x744);
    local_58 = *(undefined4 *)(param_1 + 0x728);
    uStack_54 = *(undefined4 *)(param_1 + 0x72c);
    uStack_50 = *(undefined4 *)(param_1 + 0x730);
    uStack_4c = *(undefined4 *)(param_1 + 0x734);
    local_a4 = local_d0;
    FUN_142f99630(&local_b8,param_4,0);
  }
  return;
}



// FUNCTION 142f95760 FUN_142f95760 body=80 status=ok
// SIG undefined FUN_142f95760(void)

void FUN_142f95760(longlong *param_1,float *param_2,float *param_3,undefined8 param_4)

{
  float local_18;
  float local_14;
  float local_10;
  
  local_18 = *param_3 - *param_2;
  local_14 = param_3[1] - param_2[1];
  local_10 = param_3[2] - param_2[2];
  (**(code **)(*param_1 + 0x450))(local_10,local_14,&local_18,1,param_4);
  return;
}



// FUNCTION 142f957b0 FUN_142f957b0 body=112 status=ok
// SIG undefined FUN_142f957b0(void)

void FUN_142f957b0(longlong *param_1,float *param_2,undefined8 param_3)

{
  float local_28;
  float local_24;
  float local_20;
  float local_14;
  
  local_28 = *param_2 - (float)*(undefined8 *)((longlong)param_1 + 0x784);
  local_14 = *(float *)((longlong)param_1 + 0x78c);
  local_24 = param_2[1] - (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x784) >> 0x20);
  local_20 = param_2[2] - (local_14 - *(float *)((longlong)param_1 + 0x6ec));
  (**(code **)(*param_1 + 0x458))(local_20,&local_28,1,param_3);
  return;
}



// FUNCTION 142f95820 FUN_142f95820 body=142 status=ok
// SIG undefined FUN_142f95820(void)

ulonglong FUN_142f95820(longlong param_1)

{
  int iVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0x781) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x6f4);
  }
  else {
    if (*(char *)(param_1 + 0x781) != '\x02') goto LAB_142f958a6;
    iVar1 = *(int *)(param_1 + 0x6f8);
  }
  in_RAX = CONCAT71((int7)(in_RAX >> 8),iVar1 != -1);
  if ((iVar1 != -1) && (*(longlong *)(param_1 + 0x6e0) != 0)) {
    in_RAX = FUN_142fa8000(param_1 + 0x930);
    if ((char)in_RAX == '\0') {
      in_RAX = 0;
      if (*(char *)(param_1 + 0x781) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000142f95885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x560))();
        return uVar2;
      }
      if (*(char *)(param_1 + 0x781) == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x000142f9589f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x570))();
        return uVar2;
      }
    }
  }
LAB_142f958a6:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142f958b0 FUN_142f958b0 body=168 status=ok
// SIG undefined FUN_142f958b0(void)

ulonglong FUN_142f958b0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  short sVar2;
  ulonglong in_RAX;
  
  lVar1 = *param_1;
  if (((lVar1 != 0) && (-1 < (int)param_2)) && (in_RAX = param_2 >> 0x20, -1 < (longlong)param_2)) {
    if (((int)param_1[3] < 0) || (*(int *)((longlong)param_1 + 0x1c) < 0)) {
      if (((char)param_1[4] != '\0') || (*(char *)((longlong)param_1 + 0x21) == '\0')) {
        return CONCAT71((uint7)(param_2 >> 0x28),2);
      }
    }
    else {
      sVar2 = FUN_142f9e3d0(lVar1 + 0x778,param_1[3]);
      in_RAX = FUN_142f9e3d0(lVar1 + 0x778,param_2);
      if ((sVar2 == (short)in_RAX) && (in_RAX = 0xffff, sVar2 != -1)) {
        return 0xff01;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142f95960 FUN_142f95960 body=88 status=ok
// SIG undefined FUN_142f95960(void)

undefined8 FUN_142f95960(longlong param_1,longlong param_2)

{
  float extraout_XMM0_Da;
  
  if ((-1 < (int)param_2) && (-1 < param_2)) {
    if ((*(int *)(param_1 + 0x10) < 0) || (*(int *)(param_1 + 0x14) < 0)) {
      if (*(char *)(param_1 + 0x20) != '\0') {
        return 2;
      }
      if (*(char *)(param_1 + 0x21) == '\0') {
        return 2;
      }
    }
    else {
      if (*(char *)(param_1 + 0x20) != '\0') {
        return 2;
      }
      FUN_142f9eed0(param_1 + 0x28);
      if (extraout_XMM0_Da != 3.4028235e+38) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142f959c0 FUN_142f959c0 body=129 status=ok
// SIG undefined FUN_142f959c0(void)

undefined8 FUN_142f959c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  float extraout_XMM0_Da;
  
  if ((*(int *)(param_2 + 0xc) < 0) || (*(int *)(param_2 + 0x10) < 0)) {
    if ((-1 < *(int *)(param_2 + 0x14)) && (-1 < *(int *)(param_2 + 0x18))) {
      uVar1 = FUN_142f958b0(param_1,*(undefined8 *)(param_2 + 0x14));
      return uVar1;
    }
  }
  else if ((-1 < (int)*(longlong *)(param_2 + 0xc)) && (-1 < *(longlong *)(param_2 + 0xc))) {
    if ((*(int *)(param_1 + 0x10) < 0) || (*(int *)(param_1 + 0x14) < 0)) {
      if (*(char *)(param_1 + 0x20) != '\0') {
        return 2;
      }
      if (*(char *)(param_1 + 0x21) == '\0') {
        return 2;
      }
    }
    else {
      if (*(char *)(param_1 + 0x20) != '\0') {
        return 2;
      }
      FUN_142f9eed0(param_1 + 0x28);
      if (extraout_XMM0_Da != 3.4028235e+38) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142f95a50 FUN_142f95a50 body=519 status=ok
// SIG undefined FUN_142f95a50(void)

ulonglong FUN_142f95a50(longlong *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  float fVar6;
  undefined8 local_res8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined2 uStack_9b;
  undefined1 uStack_99;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  
  if ((*param_1 == 0) || (lVar1 = param_1[1], lVar1 == 0)) {
LAB_142f95c38:
    uVar5 = (ulonglong)register0x00000020 & 0xffffffffffffff00;
  }
  else {
    local_ac = param_4[2];
    fVar6 = param_4[1];
    if (param_4[1] <= *param_4) {
      fVar6 = *param_4;
    }
    if (local_ac <= 0.0) {
      local_ac = *(float *)(lVar1 + 0x6ec);
    }
    if (fVar6 <= 0.0) {
      fVar6 = *(float *)(lVar1 + 0x6e8);
    }
    local_98 = *(undefined8 *)(lVar1 + 0x6f8);
    uStack_90 = *(undefined8 *)(lVar1 + 0x700);
    local_d8 = DAT_14676e1b0;
    uVar2 = *(undefined8 *)(lVar1 + 0x6f0);
    local_d0 = DAT_14676e1b8;
    local_48 = *(undefined8 *)(lVar1 + 0x6b8);
    local_a8 = (undefined4)*(undefined8 *)(lVar1 + 0x6e8);
    uStack_a4 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x6e8) >> 0x20);
    uStack_a0 = (undefined4)uVar2;
    uStack_9c = (undefined1)((ulonglong)uVar2 >> 0x20);
    uStack_9b = (undefined2)((ulonglong)uVar2 >> 0x28);
    uStack_99 = (undefined1)((ulonglong)uVar2 >> 0x38);
    local_88 = *(undefined8 *)(lVar1 + 0x708);
    uStack_80 = *(undefined8 *)(lVar1 + 0x710);
    local_b0 = *(undefined4 *)(param_2 + 1);
    local_78 = *(undefined8 *)(lVar1 + 0x718);
    uStack_70 = *(undefined8 *)(lVar1 + 0x720);
    local_res8 = 0xffffffffffffffff;
    local_68 = *(undefined8 *)(lVar1 + 0x728);
    uStack_60 = *(undefined8 *)(lVar1 + 0x730);
    local_58 = *(undefined4 *)(lVar1 + 0x738);
    uStack_54 = *(undefined4 *)(lVar1 + 0x73c);
    uStack_50 = *(undefined4 *)(lVar1 + 0x740);
    uStack_4c = *(undefined4 *)(lVar1 + 0x744);
    local_b8 = *param_2;
    if (*(char *)(lVar1 + 0x781) == '\x01') {
      cVar3 = FUN_142fae610();
      if (cVar3 == '\0') {
        local_b8 = *param_2;
        local_88 = *(undefined8 *)(lVar1 + 0x6f8);
        uStack_80 = *(undefined8 *)(lVar1 + 0x700);
        local_c8 = 0xffffffffffffffff;
        local_98 = *(undefined8 *)(lVar1 + 0x6e8);
        uStack_90 = *(undefined8 *)(lVar1 + 0x6f0);
        local_a8 = 0;
        uStack_9b = 0;
        uStack_99 = 0;
        local_78 = *(undefined8 *)(lVar1 + 0x708);
        uStack_70 = *(undefined8 *)(lVar1 + 0x710);
        uStack_a4 = 0xffffffff;
        uStack_a0 = 0xffffffff;
        local_38 = *param_1;
        local_68 = *(undefined8 *)(lVar1 + 0x718);
        uStack_60 = *(undefined8 *)(lVar1 + 0x720);
        local_b0 = *(undefined4 *)(param_2 + 1);
        local_58 = *(undefined4 *)(lVar1 + 0x728);
        uStack_54 = *(undefined4 *)(lVar1 + 0x72c);
        uStack_50 = *(undefined4 *)(lVar1 + 0x730);
        uStack_4c = *(undefined4 *)(lVar1 + 0x734);
        uStack_9c = 1;
        local_48 = *(undefined8 *)(lVar1 + 0x738);
        uStack_40 = *(undefined4 *)(lVar1 + 0x740);
        uStack_3c = *(undefined4 *)(lVar1 + 0x744);
        local_ac = fVar6;
        register0x00000020 = (BADSPACEBASE *)FUN_142f9e730(&local_b8,&local_d8,&local_res8);
        if ((char)register0x00000020 == '\0') goto LAB_142f95c38;
      }
      bVar4 = FUN_142f95960(param_1,local_res8);
    }
    else {
      register0x00000020 = (BADSPACEBASE *)FUN_142f9e4d0(&local_b8,&local_d8,&local_res8);
      if ((char)register0x00000020 == '\0') goto LAB_142f95c38;
      bVar4 = FUN_142f958b0(param_1,local_res8);
    }
    if ((bVar4 != 0) && (param_3 != (undefined8 *)0x0)) {
      *param_3 = local_d8;
      *(undefined4 *)(param_3 + 1) = local_d0;
    }
    uVar5 = (ulonglong)bVar4;
  }
  return uVar5;
}



// FUNCTION 142f95c60 FUN_142f95c60 body=59 status=ok
// SIG undefined FUN_142f95c60(void)

undefined8 FUN_142f95c60(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x490))();
  if (((cVar1 == '\0') && (param_1[0xdc] != 0)) && (*(char *)(param_1[0xdc] + 0x4b0) != '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 142f95ca0 FUN_142f95ca0 body=1904 status=ok
// SIG undefined FUN_142f95ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142f95ca0(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  float local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [8];
  float local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_19c;
  float local_194;
  undefined8 local_190;
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
  undefined8 local_128;
  undefined1 local_118 [16];
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  if (((param_2 == (longlong *)0x0) ||
      (cVar2 = (**(code **)(*param_2 + 0x2e8))(param_2), cVar2 == '\0')) ||
     (cVar2 = *(char *)(param_1 + 0x781), cVar2 == '\0')) {
    uVar5 = 1;
  }
  else {
    uVar6 = 0;
    uVar8 = uVar6;
    if (*(longlong *)(param_1 + 0x6d8) != 0) {
      uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x6d8) + 0x488);
    }
    if (uVar8 != 0) {
      lVar1 = *(longlong *)(uVar8 + 0x168);
      if (param_3 < 2) {
        param_3 = 1;
      }
      local_1f0 = (float)DAT_1468b5da8;
      local_1f8 = DAT_1468b5da0;
      if (lVar1 != 0) {
        local_1c8 = *(float *)(lVar1 + 0x210);
        fStack_1c4 = *(float *)(lVar1 + 0x214);
        fStack_1c0 = *(float *)(lVar1 + 0x218);
        fStack_1bc = *(float *)(lVar1 + 0x21c);
        auVar9._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_1c4);
        auVar9._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_1c8);
        auVar9._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_1c0);
        auVar9._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_1bc);
        iVar3 = movmskps(1,auVar9);
        if (iVar3 != 0) {
          *(float *)(lVar1 + 0x250) = local_1c8;
          *(float *)(lVar1 + 0x254) = fStack_1c4;
          *(float *)(lVar1 + 600) = fStack_1c0;
          *(float *)(lVar1 + 0x25c) = fStack_1bc;
          puVar4 = (undefined8 *)FQuat::Rotator(&local_1c8,local_1b8);
          *(undefined8 *)(lVar1 + 0x260) = *puVar4;
          *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar4 + 1);
        }
        local_1f0 = (float)*(undefined4 *)(lVar1 + 0x268);
        local_1f8 = *(undefined8 *)(lVar1 + 0x260);
      }
      local_1e8 = local_1f8;
      local_1e0 = local_1f0;
      FRotator::Quaternion(&local_1e8,&local_1d8);
      fVar13 = *(float *)(param_2 + 0x12) / (float)param_3;
      if (cVar2 == '\x02') {
        if ((-1 < *(int *)(param_1 + 0x760)) && (-1 < *(int *)(param_1 + 0x764))) {
          local_19c = *(undefined8 *)(param_1 + 0x784);
          local_1a8 = 0;
          local_1a0 = 0.0;
          local_1f0 = *(float *)(param_1 + 0x78c) - *(float *)(param_1 + 0x6ec);
          local_178 = *(undefined8 *)(param_1 + 0x6f8);
          uStack_170 = *(undefined8 *)(param_1 + 0x700);
          local_190 = *(undefined8 *)(param_1 + 0x760);
          local_128 = *(undefined8 *)(param_1 + 0x6b8);
          local_188 = *(undefined8 *)(param_1 + 0x6e8);
          uStack_180 = *(undefined8 *)(param_1 + 0x6f0);
          local_158 = *(undefined8 *)(param_1 + 0x718);
          uStack_150 = *(undefined8 *)(param_1 + 0x720);
          local_168 = *(undefined8 *)(param_1 + 0x708);
          uStack_160 = *(undefined8 *)(param_1 + 0x710);
          local_138 = *(undefined8 *)(param_1 + 0x738);
          uStack_130 = *(undefined8 *)(param_1 + 0x740);
          local_148 = *(undefined8 *)(param_1 + 0x728);
          uStack_140 = *(undefined8 *)(param_1 + 0x730);
          local_194 = local_1f0;
          if (param_3 < 1) {
            return 1;
          }
          do {
            uVar7 = (int)uVar6 + 1;
            FUN_142291ab0(param_2,local_118,(float)(int)uVar6 * fVar13,(float)(int)uVar7 * fVar13);
            local_1c8 = local_108;
            fStack_1c4 = fStack_104;
            fStack_1c0 = fStack_100;
            fStack_1bc = fStack_fc;
            if (((0.0001 < ABS(local_108)) || (0.0001 < ABS(fStack_104))) ||
               (0.0001 < ABS(fStack_100))) {
              local_1f0 = DAT_14676e1b8;
              local_1e8 = 0xffffffffffffffff;
              fVar12 = fStack_100 * local_1d4 - fStack_104 * local_1d0;
              fVar11 = local_108 * local_1d0 - fStack_100 * local_1d8;
              fVar12 = fVar12 + fVar12;
              fVar10 = fStack_104 * local_1d8 - local_108 * local_1d4;
              fVar11 = fVar11 + fVar11;
              fVar10 = fVar10 + fVar10;
              local_1f8 = DAT_14676e1b0;
              local_1b0 = (fVar11 * local_1d8 - fVar12 * local_1d4) +
                          fVar10 * local_1cc + fStack_100;
              local_1a8 = CONCAT44((fVar12 * local_1d0 - fVar10 * local_1d8) +
                                   fVar11 * local_1cc + fStack_104,
                                   (fVar10 * local_1d4 - fVar11 * local_1d0) +
                                   fVar12 * local_1cc + local_108);
              local_1a0 = local_1b0;
              cVar2 = FUN_142f993b0(&local_1a8,&local_1f8,&local_1e8);
              if (cVar2 == '\0') {
                return 0;
              }
              local_194 = local_1f0;
              local_190 = local_1e8;
              local_19c = local_1f8;
            }
            uVar6 = (ulonglong)uVar7;
          } while ((int)uVar7 < param_3);
          return 1;
        }
      }
      else if ((-1 < *(int *)(param_1 + 0x758)) && (-1 < *(int *)(param_1 + 0x75c))) {
        local_19c = *(undefined8 *)(param_1 + 0x784);
        local_1a8 = 0;
        local_1a0 = 0.0;
        local_1f0 = *(float *)(param_1 + 0x78c) - *(float *)(param_1 + 0x6ec);
        local_178 = *(undefined8 *)(param_1 + 0x6f8);
        uStack_170 = *(undefined8 *)(param_1 + 0x700);
        local_190 = *(undefined8 *)(param_1 + 0x758);
        local_128 = *(undefined8 *)(param_1 + 0x6b8);
        local_188 = *(undefined8 *)(param_1 + 0x6e8);
        uStack_180 = *(undefined8 *)(param_1 + 0x6f0);
        local_158 = *(undefined8 *)(param_1 + 0x718);
        uStack_150 = *(undefined8 *)(param_1 + 0x720);
        local_168 = *(undefined8 *)(param_1 + 0x708);
        uStack_160 = *(undefined8 *)(param_1 + 0x710);
        local_138 = *(undefined8 *)(param_1 + 0x738);
        uStack_130 = *(undefined8 *)(param_1 + 0x740);
        local_148 = *(undefined8 *)(param_1 + 0x728);
        uStack_140 = *(undefined8 *)(param_1 + 0x730);
        local_194 = local_1f0;
        if (param_3 < 1) {
          return 1;
        }
        do {
          uVar7 = (int)uVar6 + 1;
          FUN_142291ab0(param_2,local_118,(float)(int)uVar6 * fVar13,(float)(int)uVar7 * fVar13);
          local_1c8 = local_108;
          fStack_1c4 = fStack_104;
          fStack_1c0 = fStack_100;
          fStack_1bc = fStack_fc;
          if (((0.0001 < ABS(local_108)) || (0.0001 < ABS(fStack_104))) ||
             (0.0001 < ABS(fStack_100))) {
            local_1f0 = DAT_14676e1b8;
            local_1e8 = 0xffffffffffffffff;
            fVar12 = fStack_100 * local_1d4 - fStack_104 * local_1d0;
            fVar11 = local_108 * local_1d0 - fStack_100 * local_1d8;
            fVar12 = fVar12 + fVar12;
            fVar10 = fStack_104 * local_1d8 - local_108 * local_1d4;
            fVar11 = fVar11 + fVar11;
            fVar10 = fVar10 + fVar10;
            local_1f8 = DAT_14676e1b0;
            local_1b0 = (fVar11 * local_1d8 - fVar12 * local_1d4) + fVar10 * local_1cc + fStack_100;
            local_1a8 = CONCAT44((fVar12 * local_1d0 - fVar10 * local_1d8) +
                                 fVar11 * local_1cc + fStack_104,
                                 (fVar10 * local_1d4 - fVar11 * local_1d0) +
                                 fVar12 * local_1cc + local_108);
            local_1a0 = local_1b0;
            cVar2 = FUN_142f99630(&local_1a8,&local_1f8,&local_1e8);
            if (cVar2 == '\0') {
              return 0;
            }
            local_194 = local_1f0;
            local_190 = local_1e8;
            local_19c = local_1f8;
          }
          uVar6 = (ulonglong)uVar7;
        } while ((int)uVar7 < param_3);
        return 1;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 142f96410 FUN_142f96410 body=380 status=ok
// SIG undefined FUN_142f96410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142f96410(longlong param_1,longlong param_2,longlong param_3)

{
  float *pfVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  cVar2 = FUN_142c95dd0();
  if (cVar2 != '\0') {
    pfVar1 = (float *)(param_3 + 0x780);
    if (*(char *)(param_2 + 0x28) == '\0') {
      cVar2 = *(char *)(param_1 + 0x48);
      uVar3 = USignificanceManager::GetWorld(param_3);
      uVar5 = FUN_142c9fb80(param_2,uVar3);
      lVar4 = 0x2c;
      if (cVar2 != '\x01') {
        lVar4 = 0x10;
      }
      uVar5 = FUN_142fa3e70(param_3,lVar4 + (longlong)pfVar1,uVar5);
      cVar2 = FUN_142c4a520(param_2 + 0x20,uVar5);
    }
    else {
      cVar2 = FUN_142c4a520(param_2 + 0x20,*(undefined4 *)(param_3 + 0x790));
      if (cVar2 == '\0') {
        if (((*(char *)(param_3 + 0x7e9) != '\0') ||
            (cVar2 = FUN_142c4a520(param_2 + 0x20,*(undefined4 *)(param_3 + 0x7c8)), cVar2 == '\0'))
           || (*(float *)(param_2 + 0x2c) <= ABS(*(float *)(param_3 + 0x790)) &&
               ABS(*(float *)(param_3 + 0x790)) != *(float *)(param_2 + 0x2c))) {
          cVar2 = '\0';
        }
        else {
          uVar3 = USignificanceManager::GetWorld(param_3);
          lVar4 = FUN_142ca1f70(param_2,local_68,uVar3);
          cVar2 = *pfVar1 <= *(float *)(lVar4 + 0x10) && *(float *)(lVar4 + 0x10) != *pfVar1;
        }
      }
      else {
        cVar2 = '\x01';
      }
    }
    if ((((cVar2 != '\0') && (cVar2 = FUN_142fa9d30(param_1,param_2,param_3), cVar2 != '\0')) &&
        ((*(char *)(param_3 + 0x7e9) == '\0' ||
         ((cVar2 = FUN_142c738d0(param_3 + 0x7ec,param_3 + 0x5f4), cVar2 == '\0' ||
          (1 < (byte)(*(char *)(param_1 + 0x48) - 2U))))))) &&
       (cVar2 = FUN_142fa5470(param_1,param_2,param_3), cVar2 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142f96590 FUN_142f96590 body=323 status=ok
// SIG undefined FUN_142f96590(void)

void FUN_142f96590(longlong param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar8 = *(longlong **)(param_1 + 0x30);
  plVar3 = plVar8 + (longlong)*(int *)(param_1 + 0x38) * 3;
  for (; plVar8 != plVar3; plVar8 = plVar8 + 3) {
    if ((plVar8[1] != 0) && (*plVar8 != 0)) {
      puVar1 = (ulonglong *)(*plVar8 + 8);
      LOCK();
      uVar7 = *puVar1;
      if (uVar7 == 0) {
        *puVar1 = 0;
        uVar7 = 0;
      }
      UNLOCK();
      if ((uVar7 >> 0x1a & 1) == 0) {
        lVar5 = plVar8[1];
        piVar2 = (int *)(lVar5 + 0x10);
        LOCK();
        bVar9 = *piVar2 == 0;
        if (bVar9) {
          *piVar2 = 0;
        }
        UNLOCK();
        if (bVar9) {
          LOCK();
          *(undefined4 *)(lVar5 + 0x10) = 1;
          UNLOCK();
        }
        uVar6 = FTaskGraphInterface::Get();
        FTaskGraphInterface::WaitUntilTaskCompletes(uVar6,plVar8,0xff);
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x48) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x40) + 8);
    LOCK();
    uVar7 = *puVar1;
    if (uVar7 == 0) {
      *puVar1 = 0;
      uVar7 = 0;
    }
    UNLOCK();
    if ((uVar7 >> 0x1a & 1) == 0) {
      piVar2 = *(int **)(param_1 + 0x48);
      LOCK();
      iVar4 = *piVar2;
      if (iVar4 == 0) {
        *piVar2 = 0;
      }
      UNLOCK();
      if (iVar4 == 0) {
        LOCK();
        *piVar2 = 1;
        UNLOCK();
      }
      uVar6 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar6,param_1 + 0x40,0xff);
    }
  }
  if ((*(longlong *)(param_1 + 0x68) != 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + 8);
    LOCK();
    uVar7 = *puVar1;
    if (uVar7 == 0) {
      *puVar1 = 0;
      uVar7 = 0;
    }
    UNLOCK();
    if ((uVar7 >> 0x1a & 1) == 0) {
      piVar2 = *(int **)(param_1 + 0x68);
      LOCK();
      iVar4 = *piVar2;
      if (iVar4 == 0) {
        *piVar2 = 0;
      }
      UNLOCK();
      if (iVar4 == 0) {
        LOCK();
        *piVar2 = 1;
        UNLOCK();
      }
      uVar6 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar6,param_1 + 0x60,0xff);
    }
  }
  return;
}



// FUNCTION 142f966e0 FUN_142f966e0 body=316 status=ok
// SIG undefined FUN_142f966e0(void)

void FUN_142f966e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x18,0);
  }
  piVar3 = *(int **)(param_1 + 0x48);
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar2 = *piVar3;
    if (iVar2 == 0) {
      *piVar3 = 0;
    }
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *piVar3 = 1;
      UNLOCK();
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (lVar4 != 0) {
    LOCK();
    piVar3 = (int *)(lVar4 + 0x48);
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x30);
  plVar1 = plVar5 + (longlong)*(int *)(param_1 + 0x38) * 3;
  for (; plVar5 != plVar1; plVar5 = plVar5 + 3) {
    lVar4 = plVar5[1];
    if (lVar4 != 0) {
      LOCK();
      bVar6 = *(int *)(lVar4 + 0x10) == 0;
      if (bVar6) {
        *(int *)(lVar4 + 0x10) = 0;
      }
      UNLOCK();
      if (bVar6) {
        LOCK();
        *(undefined4 *)(lVar4 + 0x10) = 1;
        UNLOCK();
      }
      lVar4 = *plVar5;
      *plVar5 = 0;
      if (lVar4 != 0) {
        LOCK();
        piVar3 = (int *)(lVar4 + 0x48);
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
      plVar5[1] = 0;
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x50);
  plVar1 = plVar5 + (longlong)*(int *)(param_1 + 0x58) * 3;
  for (; plVar5 != plVar1; plVar5 = plVar5 + 3) {
    piVar3 = (int *)plVar5[1];
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar2 = *piVar3;
      if (iVar2 == 0) {
        *piVar3 = 0;
      }
      UNLOCK();
      if (iVar2 == 0) {
        LOCK();
        *piVar3 = 1;
        UNLOCK();
      }
      lVar4 = *plVar5;
      *plVar5 = 0;
      if (lVar4 != 0) {
        LOCK();
        piVar3 = (int *)(lVar4 + 0x48);
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
      plVar5[1] = 0;
    }
  }
  return;
}



// FUNCTION 142f96820 FUN_142f96820 body=548 status=ok
// SIG undefined FUN_142f96820(void)

undefined8 FUN_142f96820(char *param_1,char *param_2,float *param_3,longlong *param_4)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_48;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 local_38;
  
  if (((*param_1 == '\0') || (*param_2 == '\0')) ||
     ((*(uint *)(param_2 + 0x14) != 0 &&
      ((*(uint *)(param_1 + 0x38) & *(uint *)(param_2 + 0x14)) != 0)))) {
    return 0;
  }
  cVar2 = UAIBlueprintHelperLibrary::IsValidAILocation(param_1 + 0x24);
  if ((((cVar2 == '\0') && (param_1[0x3c] != DAT_146690f0c)) &&
      (bVar1 = param_2[0x18], bVar1 != DAT_146690f0c)) && (param_2[1] != '\0')) {
    lVar3 = (ulonglong)(byte)param_1[0x3c] * 0x20 + *param_4;
    lVar4 = *(longlong *)(lVar3 + 0x10);
    if (lVar4 == 0) {
      lVar4 = lVar3;
    }
    if ((*(uint *)(lVar4 + (ulonglong)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) == 0) {
      return 0;
    }
  }
  cVar2 = UAIBlueprintHelperLibrary::IsValidAILocation(param_1 + 0x24);
  if (cVar2 != '\0') {
    local_48 = *(undefined8 *)(param_1 + 0x24);
    local_38 = *(undefined4 *)(param_1 + 0x34);
    _uStack_40 = CONCAT44((*(float *)(param_2 + 4) + *(float *)(param_1 + 4)) -
                          *(float *)(param_1 + 0x30),(int)*(undefined8 *)(param_1 + 0x2c));
    cVar2 = FUN_142c73900(&local_48,param_2 + 8);
    if (cVar2 != '\0') {
      return 0;
    }
    if (SQRT((*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x18)) *
             (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x18)) +
             (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x14)) *
             (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x14)) +
             (*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x1c)) *
             (*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x1c))) - *(float *)(param_1 + 0x30)
        < (SQRT((*(float *)(param_2 + 0xc) - *(float *)(param_1 + 0x18)) *
                (*(float *)(param_2 + 0xc) - *(float *)(param_1 + 0x18)) +
                (*(float *)(param_2 + 8) - *(float *)(param_1 + 0x14)) *
                (*(float *)(param_2 + 8) - *(float *)(param_1 + 0x14)) +
                (*(float *)(param_2 + 0x10) - *(float *)(param_1 + 0x1c)) *
                (*(float *)(param_2 + 0x10) - *(float *)(param_1 + 0x1c))) - *(float *)(param_2 + 4)
          ) - *(float *)(param_1 + 4)) {
      return 0;
    }
  }
  if ((param_2[1] != '\0') && (param_1[0x20] == '\0')) {
    if (((*(float *)(param_2 + 0xc) - *(float *)(param_1 + 0x18)) * *(float *)(param_1 + 0xc) +
         (*(float *)(param_2 + 8) - *(float *)(param_1 + 0x14)) * *(float *)(param_1 + 8) +
         (*(float *)(param_2 + 0x10) - *(float *)(param_1 + 0x1c)) * *(float *)(param_1 + 0x10) <
         0.0) && ((*(float *)(param_2 + 0xc) - *(float *)(param_1 + 0x18)) * param_3[1] +
                  (*(float *)(param_2 + 8) - *(float *)(param_1 + 0x14)) * *param_3 +
                  (*(float *)(param_2 + 0x10) - *(float *)(param_1 + 0x1c)) * param_3[2] < 0.0)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142f96a70 FUN_142f96a70 body=403 status=ok
// SIG undefined FUN_142f96a70(void)

void FUN_142f96a70(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  if (((((char)param_1[4] == '\0') && (lVar3 = *param_1, lVar3 != 0)) &&
      (lVar4 = param_1[1], lVar4 != 0)) && (cVar1 = *(char *)(lVar4 + 0x781), cVar1 != '\0')) {
    if (cVar1 == '\x01') {
      if ((-1 < (int)param_1[3]) && (-1 < *(int *)((longlong)param_1 + 0x1c))) {
        param_1[3] = -1;
        *(undefined1 *)((longlong)param_1 + 0x21) = 0;
      }
      if (((-1 < *(int *)(lVar4 + 0x758)) && (-1 < *(int *)(lVar4 + 0x75c))) &&
         ((*(int *)(lVar4 + 0x758) != (int)param_1[2] ||
          (*(int *)(lVar4 + 0x75c) != *(int *)((longlong)param_1 + 0x14))))) {
        *(undefined1 *)(param_1 + 4) = 1;
        iVar2 = *(int *)(lVar4 + 0xc);
        if (iVar2 < (int)DAT_1469e91c4) {
          uVar7 = iVar2 >> 0x1f & 0xffff;
          uVar5 = iVar2 + uVar7;
          lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                  (longlong)(int)((uVar5 & 0xffff) - uVar7) * 0x18;
        }
        else {
          lVar6 = 0;
        }
        if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
          iVar2 = *(int *)(lVar3 + 0x760);
          *(int *)(lVar3 + 0x760) = iVar2 + 1;
          if (*(int *)(lVar3 + 0x764) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      ((longlong *)(lVar3 + 0x758),iVar2);
          }
          *(longlong *)(*(longlong *)(lVar3 + 0x758) + (longlong)iVar2 * 8) = lVar4;
          return;
        }
      }
    }
    else if (cVar1 == '\x02') {
      if ((-1 < (int)param_1[2]) && (-1 < *(int *)((longlong)param_1 + 0x14))) {
        param_1[2] = -1;
        *(undefined4 *)(param_1 + 5) = 0;
        TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
        ::Reset(param_1 + 6);
        *(undefined1 *)((longlong)param_1 + 0x21) = 0;
      }
      if (((-1 < *(int *)(lVar4 + 0x760)) && (-1 < *(int *)(lVar4 + 0x764))) &&
         ((*(int *)(lVar4 + 0x760) != (int)param_1[3] ||
          (*(int *)(lVar4 + 0x764) != *(int *)((longlong)param_1 + 0x1c))))) {
        param_1[3] = *(longlong *)(lVar4 + 0x760);
        FUN_142fa9cd0(param_1);
      }
    }
  }
  return;
}



// FUNCTION 142f96c10 FUN_142f96c10 body=575 status=ok
// SIG undefined FUN_142f96c10(void)

void FUN_142f96c10(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  BOOL BVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  if (param_1[0xf0] != 0) {
    FUN_140483870(param_1[0xf0] + 0x2b0,param_1 + 0xef);
    param_1[0xf0] = 0;
  }
  FUN_142f9c930(param_1);
  FUN_142f9ca70(&DAT_146b44070);
  FUN_142fb0970(&DAT_146b44078,0);
  FUN_142fb0970(&DAT_146b44088,0);
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b44048);
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b44048);
  }
  DAT_146b440a0 = 0;
  if ((DAT_146b440a4 < 0) && (DAT_146b440a4 != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b44098,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b44048);
  local_48 = (**(code **)(*param_1 + 0x148))(param_1);
  local_40 = &local_48;
  local_38 = FUN_14073d760(&local_48,DAT_146b440d8);
  puVar4 = local_40;
  local_30 = &local_48;
  local_28 = 0;
  puVar7 = (undefined8 *)FUN_14073d760(local_40,local_38);
  puVar8 = (undefined8 *)FUN_14073d760(local_30,local_28);
  for (; puVar7 != puVar8; puVar7 = (undefined8 *)FUN_14073d760(puVar4,*puVar7)) {
    plVar3 = (longlong *)puVar7[2];
    cVar5 = (**(code **)(*plVar3 + 0x8f8))(plVar3);
    if ((cVar5 != '\0') && ((longlong *)plVar3[0xe1] == param_1)) {
      (**(code **)(*plVar3 + 0x8f0))(plVar3);
    }
  }
  if (param_1[0x16c] != 0) {
    FUN_142f9c640(param_1[0x16c]);
    plVar3 = (longlong *)param_1[0x16c];
    if (plVar3 != (longlong *)0x0) {
      FUN_142f9c640(plVar3);
      if (plVar3[1] != 0) {
        FMemory::Free();
      }
      if (*plVar3 != 0) {
        LOCK();
        piVar1 = (int *)(*plVar3 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
      FMemory::operator_delete(plVar3,0x20);
      param_1[0x16c] = 0;
    }
  }
  FUN_142f97860(param_1 + 0x11d);
  FUN_142b967a0(param_1[0x13f]);
  if (param_1[0x13f] != 0) {
    FUN_14370c150();
  }
  param_1[0x13f] = 0;
  if (param_1[0x13e] != 0) {
    FUN_14370c150();
  }
  param_1[0x13e] = 0;
  FUN_142f97240(param_1 + 0x145);
  return;
}



// FUNCTION 142f96e50 FUN_142f96e50 body=331 status=ok
// SIG undefined FUN_142f96e50(void)

void FUN_142f96e50(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x120) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11c) = 0x3f800000;
  uStack_24 = (undefined4)DAT_14676e1b0;
  uStack_20 = (undefined4)((ulonglong)DAT_14676e1b0 >> 0x20);
  uVar1 = CONCAT44(DAT_14676e1b8,uStack_20);
  uVar2 = local_18 >> 8;
  local_18 = uVar2 << 8;
  *(ulonglong *)(param_1 + 0xb0) = CONCAT44(uStack_24,0x7f7fffff);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  *(ulonglong *)(param_1 + 0xc0) = CONCAT44(0x7f7fffff,local_18);
  local_18 = uVar2 << 8;
  *(undefined4 *)(param_1 + 200) = 0x7f7fffff;
  uStack_24 = (undefined4)DAT_14676e1b0;
  uStack_20 = (undefined4)((ulonglong)DAT_14676e1b0 >> 0x20);
  uVar1 = CONCAT44(DAT_14676e1b8,uStack_20);
  *(ulonglong *)(param_1 + 0xcc) = CONCAT44(uStack_24,0x7f7fffff);
  *(undefined8 *)(param_1 + 0xd4) = uVar1;
  *(ulonglong *)(param_1 + 0xdc) = CONCAT44(0x7f7fffff,local_18);
  *(undefined4 *)(param_1 + 0xe4) = 0x7f7fffff;
  uStack_24 = (undefined4)DAT_14676e1b0;
  uStack_20 = (undefined4)((ulonglong)DAT_14676e1b0 >> 0x20);
  uVar1 = CONCAT44(DAT_14676e1b8,uStack_20);
  local_18 = uVar2 << 8;
  *(ulonglong *)(param_1 + 0xe8) = CONCAT44(uStack_24,0x7f7fffff);
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  *(ulonglong *)(param_1 + 0xf8) = CONCAT44(0x7f7fffff,local_18);
  *(undefined4 *)(param_1 + 0x100) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x104) = DAT_146b43f30;
  *(undefined4 *)(param_1 + 0x10c) = DAT_146b43f38;
  *(undefined8 *)(param_1 + 0x110) = DAT_146b43f30;
  *(undefined4 *)(param_1 + 0x118) = DAT_146b43f38;
  return;
}



// FUNCTION 142f96fa0 FUN_142f96fa0 body=566 status=ok
// SIG undefined FUN_142f96fa0(void)

void FUN_142f96fa0(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined1 local_138 [8];
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_11b;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [24];
  undefined1 local_d0 [4];
  undefined8 local_cc;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined2 uStack_52;
  undefined1 local_50 [48];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  FUN_142fa7a70();
  local_128 = DAT_14676e1b0;
  local_138[0] = 0;
  local_130 = 0;
  local_120 = DAT_14676e1b8;
  local_11b = 0;
  FUN_142f89390(&local_118);
  FUN_142c62620(local_e8);
  FUN_142f89530(local_d0);
  cVar2 = FUN_142f8c3d0(param_1 + 0xd,local_d0);
  if (cVar2 == '\0') {
    FUN_142fa7a70(param_1);
    *(undefined1 *)(param_1 + 0xd) = local_d0[0];
    *(undefined8 *)((longlong)param_1 + 0x6c) = local_cc;
    *(undefined4 *)((longlong)param_1 + 0x74) = local_c4;
    *(undefined4 *)(param_1 + 0xf) = local_c0;
    *(undefined4 *)((longlong)param_1 + 0x7c) = local_bc;
    *(undefined4 *)(param_1 + 0x10) = local_b8;
    *(undefined4 *)((longlong)param_1 + 0x84) = local_b4;
    *(undefined1 *)(param_1 + 0x17) = local_80;
    *(undefined1 *)((longlong)param_1 + 0xb9) = local_7f;
    *(undefined1 *)((longlong)param_1 + 0xba) = local_7e;
    *(undefined4 *)((longlong)param_1 + 0xbc) = local_7c;
    *(undefined4 *)(param_1 + 0x11) = local_b0;
    *(undefined1 *)(param_1 + 0x18) = local_78;
    param_1[0x12] = local_a8;
    param_1[0x13] = uStack_a0;
    *(undefined1 *)((longlong)param_1 + 0xc1) = local_77;
    *(undefined4 *)((longlong)param_1 + 0x8c) = local_ac;
    *(undefined1 *)((longlong)param_1 + 0xc2) = local_76;
    local_70 = 0;
    *(undefined4 *)(param_1 + 0x14) = local_98;
    *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_94;
    *(undefined4 *)(param_1 + 0x15) = uStack_90;
    *(undefined4 *)((longlong)param_1 + 0xac) = uStack_8c;
    uStack_68 = 0;
    param_1[0x16] = local_88;
    local_60 = DAT_14676e1b0;
    uStack_58 = DAT_14676e1b8;
    uStack_53 = 0;
    FUN_142f89390(local_50);
    FUN_142c62620(&local_20);
    *param_1 = CONCAT71(uStack_6f,local_70);
    param_1[1] = uStack_68;
    param_1[2] = local_60;
    param_1[3] = CONCAT26(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,uStack_58)));
    param_1[10] = local_20;
    param_1[0xb] = uStack_18;
    param_1[0xc] = local_10;
    param_1[4] = local_118;
    param_1[5] = uStack_110;
    *(undefined4 *)(param_1 + 6) = local_108;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_104;
    *(undefined4 *)(param_1 + 7) = uStack_100;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_fc;
    param_1[8] = local_f8;
    param_1[9] = uStack_f0;
  }
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b44048);
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b44048);
  }
  iVar1 = DAT_146b440a0;
  lVar4 = (longlong)DAT_146b440a0;
  DAT_146b440a0 = DAT_146b440a0 + 1;
  if (DAT_146b440a4 < DAT_146b440a0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b44098,iVar1);
  }
  *(undefined1 **)(DAT_146b44098 + lVar4 * 8) = local_138;
  FUN_142fb0430(&DAT_146b44070,local_138);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b44048);
  return;
}



// FUNCTION 142f971e0 FUN_142f971e0 body=95 status=ok
// SIG undefined FUN_142f971e0(void)

void FUN_142f971e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0xffffffffffffffff;
  puVar2 = (undefined8 *)FUN_142c62620(local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)((longlong)param_1 + 0x1c) = *puVar2;
  *(undefined8 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(puVar2 + 2);
  *param_1 = DAT_14676e1b0;
  *(undefined4 *)(param_1 + 1) = DAT_14676e1b8;
  return;
}



// FUNCTION 142f97240 FUN_142f97240 body=1556 status=ok
// SIG undefined FUN_142f97240(void)

void FUN_142f97240(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  longlong *plVar12;
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
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar7 = 0;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_14370c150();
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  plVar12 = (longlong *)(param_1 + 0x30);
  uStack_94 = 1;
  uVar2 = *(uint *)(param_1 + 0x58);
  puVar1 = (uint *)(param_1 + 0x40);
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar10 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar3 = *puVar10;
    iStack_80 = iVar7;
    local_98 = iVar7;
    while (uVar3 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar6 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar6;
      if (bVar4) goto LAB_142f9734d;
      uVar3 = puVar10[lVar9 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_84 = (iStack_80 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_142f9734d:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x58);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar11 = uVar3 & 0xffffffe0;
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
    puVar10 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar8 = puVar10[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar6 = (int)uVar3 >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142f97424;
      uVar8 = puVar10[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar6 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_84 = (uVar11 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_142f97424:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    if (*(longlong *)((longlong)(int)uStack_5c * 0x20 + 0x10 + *plVar12) != 0) {
      FUN_14370c150();
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  FUN_142f9a3f0(plVar12,0);
  plVar12 = (longlong *)(param_1 + 0x80);
  local_98 = 0;
  uVar2 = *(uint *)(param_1 + 0xa8);
  puVar1 = (uint *)(param_1 + 0x90);
  uStack_94 = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar10 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar3 = *puVar10;
    iStack_80 = iVar7;
    local_98 = iVar7;
    while (uVar3 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar6 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar6;
      if (bVar4) goto LAB_142f9752d;
      uVar3 = puVar10[lVar9 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_84 = (iStack_80 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_142f9752d:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0xa8);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar11 = uVar3 & 0xffffffe0;
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
    puVar10 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar8 = puVar10[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar6 = (int)uVar3 >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142f97604;
      uVar8 = puVar10[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar6 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_84 = (uVar11 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_142f97604:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    if (*(longlong *)((longlong)(int)uStack_5c * 0x20 + 0x10 + *plVar12) != 0) {
      FUN_14370c150();
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  FUN_142f9a3f0(plVar12,0);
  plVar12 = (longlong *)(param_1 + 0xd0);
  local_98 = 0;
  uVar2 = *(uint *)(param_1 + 0xf8);
  puVar1 = (uint *)(param_1 + 0xe0);
  uStack_94 = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar10 = *(uint **)(param_1 + 0xf0);
    if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar3 = *puVar10;
    iStack_80 = iVar7;
    local_98 = iVar7;
    while (uVar3 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar7 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar7;
      if (bVar4) goto LAB_142f9770d;
      uVar3 = puVar10[lVar9 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar7 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = (iStack_80 - iVar7) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_142f9770d:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0xf8);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar11 = uVar3 & 0xffffffe0;
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
    puVar10 = *(uint **)(param_1 + 0xf0);
    if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar8 = puVar10[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar7 = (int)uVar3 >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142f977d2;
      uVar8 = puVar10[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = (uVar11 - iVar7) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_142f977d2:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    if (*(longlong *)((longlong)(int)uStack_5c * 0x20 + 0x10 + *plVar12) != 0) {
      FUN_14370c150();
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  FUN_142f9a3f0(plVar12,0);
                    /* WARNING: Could not recover jumptable at 0x000142f9784d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 142f97860 FUN_142f97860 body=560 status=ok
// SIG undefined FUN_142f97860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f97860(longlong param_1)

{
  char cVar1;
  BOOL BVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  uVar7 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_14370c150();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b44130);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b44130);
    }
    lVar4 = *(longlong *)(param_1 + 0x28);
    uVar10 = uVar7;
    uVar11 = uVar7;
    iVar5 = DAT_146534738;
    if (0 < DAT_146534738) {
      do {
        plVar9 = (longlong *)(DAT_146534730 + uVar11);
        if ((((int)plVar9[1] != 0) && (plVar3 = (longlong *)*plVar9, plVar3 != (longlong *)0x0)) &&
           (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8),
           iVar5 = DAT_146534738, *plVar3 == lVar4)) {
          if (((int)plVar9[1] != 0) && (plVar3 = (longlong *)*plVar9, plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x28))(plVar3,0);
            if (*plVar9 != 0) {
              lVar4 = FMemory::Realloc(*plVar9,0,0);
              *plVar9 = lVar4;
            }
            *(undefined4 *)(plVar9 + 1) = 0;
            iVar5 = DAT_146534738;
          }
          break;
        }
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
        uVar11 = uVar11 + 0x10;
      } while ((int)uVar8 < iVar5);
    }
    if (DAT_146534744 < 1) {
      uVar10 = uVar7;
      iVar6 = iVar5;
      if (0 < iVar5) {
        do {
          if (((*(int *)(uVar10 + 8 + DAT_146534730) == 0) ||
              (*(longlong **)(uVar10 + DAT_146534730) == (longlong *)0x0)) ||
             (cVar1 = (**(code **)(**(longlong **)(uVar10 + DAT_146534730) + 0x10))(), cVar1 != '\0'
             )) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146534730,uVar7,1,1);
          }
          else {
            uVar7 = (ulonglong)((int)uVar7 + 1);
            uVar10 = uVar10 + 0x10;
          }
          iVar6 = DAT_146534738;
        } while ((int)uVar7 < DAT_146534738);
      }
      _DAT_146534740 = iVar6 * 2;
      if (_DAT_146534740 < 3) {
        _DAT_146534740 = 2;
      }
      if ((_DAT_146534740 < iVar5) && (DAT_14653473c != iVar6)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146534730);
      }
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b44130);
  }
  plVar9 = *(longlong **)(param_1 + 0x18);
  if (plVar9 != (longlong *)0x0) {
    lVar4 = *plVar9;
    if (lVar4 != 0) {
      hkSignal2<hkaiNavigator_*,hkaiNavigatorSignals::EnteredUserEdgeInfo_const_&>::
      unsubscribe<UHavokAINavMeshNavigator::FSignalHandlers,void_(__cdecl_UHavokAINavMeshNavigator::FSignalHandlers::*)(hkaiNavigator_*,hkaiNavigatorSignals::EnteredUserEdgeInfo_const_&)>
                (lVar4 + 0x68,local_res8,plVar9,AK::MemoryMgr::StartProfileThreadUsage);
      hkSignal2<hkaiNavigator_*,hkaiNavigatorSignals::EnteredUserEdgeInfo_const_&>::
      unsubscribe<UHavokAINavMeshNavigator::FSignalHandlers,void_(__cdecl_UHavokAINavMeshNavigator::FSignalHandlers::*)(hkaiNavigator_*,hkaiNavigatorSignals::EnteredUserEdgeInfo_const_&)>
                (lVar4 + 0x70,local_res10,plVar9,FUN_142fab110);
      if (*plVar9 != 0) {
        FUN_14370c150(*plVar9);
        *plVar9 = 0;
      }
    }
    FMemory::operator_delete(plVar9,0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_142b96840();
    FUN_14370c150(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 142f97a90 FUN_142f97a90 body=125 status=ok
// SIG undefined FUN_142f97a90(void)

void FUN_142f97a90(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x58) != 0) &&
     (((lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x120), lVar2 != 0 ||
       (lVar2 = FUN_1423407b0(), lVar2 != 0)) && (cVar1 = UWorld::IsGameWorld(lVar2), cVar1 != '\0')
      ))) {
    lVar2 = FUN_142f9cfb0(lVar2,0);
    if (lVar2 != 0) {
      FUN_142fb0730(lVar2 + 0x918,param_1);
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_14370c150();
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 142f97b10 FUN_142f97b10 body=22 status=ok
// SIG undefined FUN_142f97b10(void)

void FUN_142f97b10(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 142f97b30 FUN_142f97b30 body=219 status=ok
// SIG undefined FUN_142f97b30(void)

void FUN_142f97b30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x270);
  lVar2 = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  if (iVar1 == 3) {
    if (*(longlong *)(param_1 + 0x6d8) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x568);
    }
    if (lVar2 != 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146b441f0) {
        _Init_thread_header(&DAT_146b441f0);
        if (DAT_146b441f0 == -1) {
          FName::FName(&DAT_146b441e8,L"IsMoving",1);
          _Init_thread_footer(&DAT_146b441f0);
        }
      }
      UBlackboardComponent::SetValueAsBool(lVar2,&DAT_146b441e8,0);
    }
  }
  if ((iVar1 != 0) && (((iVar1 == 1 || (iVar1 == 2)) || (iVar1 == 3)))) {
    FUN_142facd90(param_1);
  }
  return;
}



// FUNCTION 142f97c10 FUN_142f97c10 body=269 status=ok
// SIG undefined FUN_142f97c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f97c10(undefined1 *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  float local_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  uVar3 = DAT_14676e1b0;
  *(undefined8 *)(param_1 + 0x2c) = DAT_14676e1b0;
  *(undefined4 *)(param_1 + 0x34) = DAT_14676e1b8;
  FUN_142fa3db0(uVar3,&local_28);
  if (*(longlong *)(param_1 + 0xe8) == 0) goto LAB_142f97cb2;
  cVar1 = param_1[0x28];
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(param_1 + 0x60);
LAB_142f97c71:
    if (lVar2 == 0) goto LAB_142f97cb2;
  }
  else if (cVar1 == '\x02') {
    lVar2 = *(longlong *)(param_1 + 0x70);
    goto LAB_142f97c71;
  }
  if (cVar1 == '\x01') {
    FUN_14385e310(*(undefined8 *)(param_1 + 0x60));
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x210) = 0;
  }
  else if (cVar1 == '\x02') {
    FUN_143860d50(*(undefined8 *)(param_1 + 0x70));
    *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x1a8) = 0;
  }
LAB_142f97cb2:
  lVar2 = *(longlong *)(param_1 + 0xe8);
  local_28 = local_28 * 0.01;
  fStack_24 = fStack_24 * 0.01;
  fStack_20 = fStack_20 * 0.01;
  uStack_1c = 0;
  if (lVar2 != 0) {
    *(float *)(lVar2 + 0x30) = local_28;
    *(float *)(lVar2 + 0x34) = fStack_24;
    *(float *)(lVar2 + 0x38) = fStack_20;
    *(undefined4 *)(lVar2 + 0x3c) = 0;
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_14385eab0(*(longlong *)(param_1 + 0x60),&local_28);
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1438611d0(*(longlong *)(param_1 + 0x70),&local_28);
  }
  return;
}



// FUNCTION 142f97d20 FUN_142f97d20 body=232 status=ok
// SIG undefined FUN_142f97d20(void)

void FUN_142f97d20(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 == *(int *)(param_1 + 0x2fc)) {
    iVar1 = *(int *)(param_1 + 0x270);
    lVar2 = 0;
    *(undefined4 *)(param_1 + 0x270) = 0;
    if (iVar1 == 3) {
      if (*(longlong *)(param_1 + 0x6d8) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x568);
      }
      if (lVar2 != 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146b441f0) &&
           (_Init_thread_header(&DAT_146b441f0), DAT_146b441f0 == -1)) {
          FName::FName(&DAT_146b441e8,L"IsMoving",1);
          _Init_thread_footer(&DAT_146b441f0);
        }
        UBlackboardComponent::SetValueAsBool(lVar2,&DAT_146b441e8,0);
      }
    }
    if ((iVar1 != 0) && (((iVar1 == 1 || (iVar1 == 2)) || (iVar1 == 3)))) {
      FUN_142facd90(param_1);
    }
  }
  return;
}



// FUNCTION 142f97e10 FUN_142f97e10 body=17 status=ok
// SIG undefined FUN_142f97e10(void)

void FUN_142f97e10(longlong param_1)

{
  if (*(char *)(param_1 + 0x365) != '\0') {
    *(undefined1 *)(param_1 + 0x365) = 0;
  }
  return;
}



// FUNCTION 142f97e30 FUN_142f97e30 body=417 status=ok
// SIG undefined FUN_142f97e30(void)

void FUN_142f97e30(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong local_res8;
  undefined1 local_a8 [160];
  
  lVar5 = *(longlong *)(param_1 + 0x6b8);
  if (lVar5 != 0) {
    plVar3 = *(longlong **)(lVar5 + 0x768);
    plVar1 = plVar3 + *(int *)(lVar5 + 0x770);
    for (; local_res8 = param_1, plVar3 != plVar1; plVar3 = plVar3 + 1) {
      if (*plVar3 == param_1) {
        TArray<FName,FDefaultAllocator>::Remove(lVar5 + 0x768,&local_res8);
        break;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x458) = 0;
  FUN_142fb2a80(param_1 + 0x430,0,0,&DAT_1468b5d90,&DAT_1468b5d90);
  FUN_142f97c10(param_1 + 0x430);
  lVar5 = 0;
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FUN_14385caa0();
    FUN_14385c9f0(*(undefined8 *)(param_1 + 0x490));
    lVar5 = *(longlong *)(param_1 + 0x490);
  }
  if (lVar5 != 0) {
    FUN_14370c150();
    *(undefined8 *)(param_1 + 0x490) = 0;
  }
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::operator_delete(*(longlong *)(param_1 + 0x498),8);
    *(undefined8 *)(param_1 + 0x498) = 0;
  }
  if (*(longlong *)(param_1 + 0x518) != 0) {
    FUN_1438eb660(*(longlong *)(param_1 + 0x518),0);
  }
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FUN_14370c150();
    *(undefined8 *)(param_1 + 0x4a0) = 0;
  }
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FMemory::operator_delete(*(longlong *)(param_1 + 0x4a8),8);
    *(undefined8 *)(param_1 + 0x4a8) = 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x6e0);
  *(undefined1 *)(param_1 + 0x274) = 0;
  if (lVar5 != 0) {
    puVar4 = (undefined8 *)FUN_142c62900(local_a8);
    uVar2 = puVar4[1];
    *(undefined8 *)(lVar5 + 0x2160) = *puVar4;
    *(undefined8 *)(lVar5 + 0x2168) = uVar2;
    uVar2 = puVar4[3];
    *(undefined8 *)(lVar5 + 0x2170) = puVar4[2];
    *(undefined8 *)(lVar5 + 0x2178) = uVar2;
    uVar2 = puVar4[5];
    *(undefined8 *)(lVar5 + 0x2180) = puVar4[4];
    *(undefined8 *)(lVar5 + 0x2188) = uVar2;
    uVar2 = puVar4[7];
    *(undefined8 *)(lVar5 + 0x2190) = puVar4[6];
    *(undefined8 *)(lVar5 + 0x2198) = uVar2;
    uVar2 = puVar4[9];
    *(undefined8 *)(lVar5 + 0x21a0) = puVar4[8];
    *(undefined8 *)(lVar5 + 0x21a8) = uVar2;
    uVar2 = puVar4[0xb];
    *(undefined8 *)(lVar5 + 0x21b0) = puVar4[10];
    *(undefined8 *)(lVar5 + 0x21b8) = uVar2;
    uVar2 = puVar4[0xd];
    *(undefined8 *)(lVar5 + 0x21c0) = puVar4[0xc];
    *(undefined8 *)(lVar5 + 0x21c8) = uVar2;
    uVar2 = puVar4[0xf];
    *(undefined8 *)(lVar5 + 0x21d0) = puVar4[0xe];
    *(undefined8 *)(lVar5 + 0x21d8) = uVar2;
    uVar2 = puVar4[0x11];
    *(undefined8 *)(lVar5 + 0x21e0) = puVar4[0x10];
    *(undefined8 *)(lVar5 + 0x21e8) = uVar2;
    uVar2 = puVar4[0x13];
    *(undefined8 *)(lVar5 + 0x21f0) = puVar4[0x12];
    *(undefined8 *)(lVar5 + 0x21f8) = uVar2;
  }
  return;
}



// FUNCTION 142f97fe0 FUN_142f97fe0 body=37 status=ok
// SIG undefined FUN_142f97fe0(void)

void FUN_142f97fe0(longlong *param_1)

{
  undefined1 uVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x38c) = 0;
  uVar1 = (**(code **)(*param_1 + 0x4b8))();
  *(undefined1 *)(param_1 + 0xf0) = uVar1;
  return;
}



// FUNCTION 142f98010 FUN_142f98010 body=88 status=ok
// SIG undefined FUN_142f98010(void)

void FUN_142f98010(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_14370c150();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::operator_delete(*(longlong *)(param_1 + 0x68),8);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1438eb660(*(longlong *)(param_1 + 0xe8),0);
    return;
  }
  return;
}



// FUNCTION 142f98070 FUN_142f98070 body=733 status=ok
// SIG undefined FUN_142f98070(void)

void FUN_142f98070(longlong *param_1)

{
  int *piVar1;
  longlong **pplVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  pplVar2 = (longlong **)(param_1 + 0xa1);
  if (*pplVar2 != (longlong *)0x0) {
    return;
  }
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if (lVar5 == 0) {
    return;
  }
  plVar6 = (longlong *)operator_new(0xc0);
  plVar10 = (longlong *)0x0;
  plVar11 = plVar10;
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (longlong)&PTR_FUN_145a0c368;
    plVar6[3] = 0;
    plVar6[4] = 0;
    FWeakObjectPtr::operator=(plVar6 + 5,param_1);
    plVar6[6] = 0;
    plVar6[7] = 0;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[10] = 0;
    plVar6[0xb] = 0;
    plVar6[0xc] = 0;
    plVar6[0xd] = 0;
    plVar6[0xe] = 0;
    plVar6[0xf] = 0;
    plVar6[0x12] = 0;
    plVar6[0x13] = 0;
    *(undefined4 *)(plVar6 + 0x14) = 0xffffffff;
    *(undefined4 *)((longlong)plVar6 + 0xa4) = 0;
    plVar6[0x16] = 0;
    *(undefined4 *)(plVar6 + 0x17) = 0;
    plVar11 = plVar6;
  }
  plVar7 = (longlong *)operator_new(0x18);
  plVar6 = plVar10;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
    plVar7[2] = (longlong)plVar11;
    plVar6 = plVar7;
  }
  plVar7 = plVar11 + 1;
  if (plVar11 == (longlong *)0x0) {
    plVar7 = plVar10;
  }
  local_58 = plVar11;
  local_50 = plVar6;
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
      if (0 < iVar4) goto LAB_142f98237;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)plVar11;
    plVar10 = (longlong *)plVar7[1];
    if (plVar6 != plVar10) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar10 = (longlong *)plVar7[1];
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      plVar7[1] = (longlong)plVar6;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar6 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
LAB_142f98237:
  if (pplVar2 != &local_58) {
    *pplVar2 = plVar11;
    local_58 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa2,&local_50);
  }
  plVar11 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  local_48 = (**(code **)(*param_1 + 0x148))(param_1);
  local_40 = &local_48;
  local_38 = FUN_14073d760(&local_48,DAT_146b440d8);
  puVar3 = local_40;
  local_30 = &local_48;
  local_28 = 0;
  puVar8 = (undefined8 *)FUN_14073d760(local_40,local_38);
  puVar9 = (undefined8 *)FUN_14073d760(local_30,local_28);
  for (; puVar8 != puVar9; puVar8 = (undefined8 *)FUN_14073d760(puVar3,*puVar8)) {
    FUN_142fa75c0(puVar8[2]);
  }
  return;
}



// FUNCTION 142f98350 FUN_142f98350 body=161 status=ok
// SIG undefined FUN_142f98350(void)

undefined8 FUN_142f98350(longlong param_1,uint param_2,char param_3)

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
      TSet<TTuple<SlotInfo,StrongBlockIdentifier<65536,CacheSlotStrongType>_>,TDefaultMapHashableKeyFuncs<SlotInfo,StrongBlockIdentifier<65536,CacheSlotStrongType>,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142f98400 FUN_142f98400 body=91 status=ok
// SIG undefined FUN_142f98400(void)

void FUN_142f98400(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145a0e060;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_145a0e0a8;
  }
  return;
}



// FUNCTION 142f98460 FUN_142f98460 body=84 status=ok
// SIG undefined FUN_142f98460(void)

void FUN_142f98460(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145a0f550;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_145a0f598;
  }
  return;
}



// FUNCTION 142f984c0 FUN_142f984c0 body=904 status=ok
// SIG undefined FUN_142f984c0(void)

undefined8 * FUN_142f984c0(undefined8 param_1,longlong *param_2)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  LPVOID pvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  
  cVar2 = FWeakObjectPtr::IsValid();
  if ((((cVar2 == '\0') || (lVar4 = FWeakObjectPtr::Get(param_1), lVar4 == 0)) || (*param_2 == 0))
     || (param_2[1] == 0)) {
    return (undefined8 *)0x0;
  }
  pvVar5 = TlsGetValue(DAT_146b7bf70);
  if (pvVar5 == (LPVOID)0x0) {
    pvVar5 = DAT_146b7bf68;
  }
  puVar6 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar5 + 0x58),0x128);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6[1] = 0;
    puVar11 = puVar6 + 3;
    *(undefined4 *)(puVar6 + 2) = 0x1ffff;
    lVar14 = 0x20;
    puVar6[0x23] = lVar4 + 0x6c0;
    *puVar6 = &PTR_FUN_145a0e3e0;
    lVar7 = 0x20;
    puVar6[0x24] = (longlong *)(lVar4 + 0x660);
    if (puVar11 <= puVar6 + 0x13) {
      for (; lVar7 != 0; lVar7 = lVar7 + -1) {
        *(undefined4 *)puVar11 = 0x3f800000;
        puVar11 = (undefined8 *)((longlong)puVar11 + 4);
      }
    }
    puVar11 = puVar6 + 0x13;
    if (puVar11 <= puVar6 + 0x23) {
      for (; lVar14 != 0; lVar14 = lVar14 + -1) {
        *(undefined4 *)puVar11 = 0x3f800000;
        puVar11 = (undefined8 *)((longlong)puVar11 + 4);
      }
    }
  }
  plVar12 = *(longlong **)(*param_2 + 0x30);
  plVar13 = plVar12 + (longlong)*(int *)(*param_2 + 0x38) * 3;
  for (; plVar12 != plVar13; plVar12 = plVar12 + 3) {
    if (*plVar12 != 0) {
      fVar1 = *(float *)(plVar12 + 1);
      uVar3 = FUN_142f9d9e0(lVar4 + 0x6c0);
      if ((uVar3 < 0x20) && (0.0 < fVar1)) {
        *(float *)((longlong)puVar6 + (ulonglong)uVar3 * 4 + 0x18) = fVar1;
      }
    }
  }
  lVar7 = param_2[1];
  plVar13 = *(longlong **)(lVar7 + 0x30);
  plVar12 = plVar13 + (longlong)*(int *)(lVar7 + 0x38) * 4;
  if (plVar13 != plVar12) {
LAB_142f98635:
    if ((*plVar13 != 0) && (plVar13[2] != 0)) {
      lVar14 = FUN_142e20fc0();
      for (lVar7 = plVar13[2]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar14) {
          plVar10 = *(longlong **)(lVar4 + 0x660);
          plVar8 = plVar10;
          goto joined_r0x000142f98674;
        }
      }
    }
    goto LAB_142f986a4;
  }
LAB_142f986b1:
  plVar13 = *(longlong **)(lVar7 + 0x40);
  plVar12 = plVar13 + (longlong)*(int *)(lVar7 + 0x48) * 6;
joined_r0x000142f986c7:
  if (plVar13 == plVar12) {
    return puVar6;
  }
  if ((*plVar13 != 0) && (plVar13[1] != 0)) {
    plVar10 = *(longlong **)(param_2[1] + 0x30);
    plVar8 = plVar10 + (longlong)*(int *)(param_2[1] + 0x38) * 4;
    for (; plVar10 != plVar8; plVar10 = plVar10 + 4) {
      if (*plVar10 == *plVar13) {
        if ((plVar10 != (longlong *)0x0) && (lVar7 = plVar10[2], lVar7 != 0)) {
          lVar14 = FUN_142e20fc0();
          goto LAB_142f98742;
        }
        break;
      }
    }
  }
  goto LAB_142f987f6;
joined_r0x000142f98674:
  if (plVar8 == plVar10 + *(int *)(lVar4 + 0x668)) goto LAB_142f98688;
  if (*plVar8 == *plVar13) {
    iVar9 = (int)((longlong)plVar8 - (longlong)plVar10 >> 3);
    if (iVar9 < 0x20) goto LAB_142f9868d;
    goto LAB_142f986a4;
  }
  plVar8 = plVar8 + 1;
  goto joined_r0x000142f98674;
LAB_142f98688:
  iVar9 = -1;
LAB_142f9868d:
  if (0.0 < *(float *)(plVar13 + 1)) {
    *(float *)((longlong)puVar6 + (longlong)iVar9 * 4 + 0x98) = *(float *)(plVar13 + 1);
  }
LAB_142f986a4:
  plVar13 = plVar13 + 4;
  if (plVar13 == plVar12) goto code_r0x000142f986ad;
  goto LAB_142f98635;
code_r0x000142f986ad:
  lVar7 = param_2[1];
  goto LAB_142f986b1;
  while (lVar7 = *(longlong *)(lVar7 + 0x30), lVar7 != 0) {
LAB_142f98742:
    if (lVar7 == lVar14) {
      plVar10 = *(longlong **)(param_2[1] + 0x30);
      plVar8 = plVar10 + (longlong)*(int *)(param_2[1] + 0x38) * 4;
      goto joined_r0x000142f9876f;
    }
  }
  goto LAB_142f987f6;
joined_r0x000142f9876f:
  if (plVar10 == plVar8) goto LAB_142f987f6;
  if (*plVar10 == plVar13[1]) {
    if ((plVar10 != (longlong *)0x0) && (lVar7 = plVar10[2], lVar7 != 0)) {
      lVar14 = FUN_142e20fc0();
      goto LAB_142f98798;
    }
    goto LAB_142f987f6;
  }
  plVar10 = plVar10 + 4;
  goto joined_r0x000142f9876f;
  while (lVar7 = *(longlong *)(lVar7 + 0x30), lVar7 != 0) {
LAB_142f98798:
    if (lVar7 == lVar14) {
      plVar10 = *(longlong **)(lVar4 + 0x670);
      plVar8 = plVar10;
      goto joined_r0x000142f987c4;
    }
  }
  goto LAB_142f987f6;
joined_r0x000142f987c4:
  if (plVar8 == plVar10 + (longlong)*(int *)(lVar4 + 0x678) * 4) goto LAB_142f987da;
  if ((*plVar8 == *plVar13) && (plVar8[1] == plVar13[1])) {
    iVar9 = (int)((longlong)plVar8 - (longlong)plVar10 >> 5);
    if (iVar9 != -1) {
      iVar9 = *(int *)(lVar4 + 0x668) + iVar9;
      if (iVar9 < 0x20) goto LAB_142f987df;
      goto LAB_142f987f6;
    }
    goto LAB_142f987da;
  }
  plVar8 = plVar8 + 4;
  goto joined_r0x000142f987c4;
LAB_142f987da:
  iVar9 = -1;
LAB_142f987df:
  if (0.0 < *(float *)(plVar13 + 2)) {
    *(float *)((longlong)puVar6 + (longlong)iVar9 * 4 + 0x98) = *(float *)(plVar13 + 2);
  }
LAB_142f987f6:
  plVar13 = plVar13 + 6;
  goto joined_r0x000142f986c7;
}



// FUNCTION 142f98850 FUN_142f98850 body=239 status=ok
// SIG undefined FUN_142f98850(void)

void FUN_142f98850(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  
  if (*(int *)(param_1 + 0x1a0) != DAT_14676e178) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x120);
  if ((lVar5 == 0) && (lVar5 = FUN_1423407b0(), lVar5 == 0)) {
    return;
  }
  cVar4 = UWorld::IsGameWorld(lVar5);
  if (cVar4 == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x118) == 0) {
    return;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
  if (lVar2 == 0) {
    return;
  }
  if (*(char *)(lVar2 + 0x24e) != '\x02') {
    return;
  }
  if (*(char *)(param_1 + 0x180) == '\0') {
    return;
  }
  if ((*(char *)(param_1 + 0x180) != '\x01') && (*(char *)(param_1 + 0x1f8) == '\0')) {
    return;
  }
  lVar5 = FUN_142f9cfb0(lVar5);
  if (lVar5 == 0) {
    return;
  }
  iVar1 = *(int *)(lVar5 + 0x6d8);
  iVar7 = 0;
  if (0 < iVar1) {
    plVar8 = *(longlong **)(lVar5 + 0x6d0);
    iVar6 = DAT_14676e178;
    do {
      lVar5 = *plVar8;
      plVar8 = plVar8 + 2;
      iVar3 = iVar7;
      if (lVar5 != 0) {
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
    if (iVar6 != DAT_14676e178) goto LAB_142f9892e;
  }
  iVar6 = iVar1;
LAB_142f9892e:
  *(int *)(param_1 + 0x1a0) = iVar6;
  return;
}



// FUNCTION 142f98940 FUN_142f98940 body=1042 status=ok
// SIG undefined FUN_142f98940(void)

void FUN_142f98940(longlong param_1,float *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uStack_104;
  undefined7 uStack_f7;
  
  if (*(int *)(param_1 + 0x198) <= *(int *)(param_1 + 0x228)) {
    lVar7 = *(longlong *)(param_1 + 0x1a0);
    puVar1 = (undefined8 *)(param_1 + 0x220);
    iVar9 = *(int *)(lVar7 + 0x6a8);
    uVar6 = *(undefined4 *)*puVar1;
    *(int *)(lVar7 + 0x6a8) = iVar9 + 1;
    if (*(int *)(lVar7 + 0x6ac) < iVar9 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar7 + 0x6a0,iVar9);
    }
    *(undefined4 *)(*(longlong *)(lVar7 + 0x6a0) + (longlong)iVar9 * 4) = uVar6;
    iVar9 = *(int *)(param_1 + 0x228);
    if (iVar9 + -1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)*puVar1,(void *)((longlong)*puVar1 + 4),(longlong)(iVar9 + -1) << 2);
      iVar9 = *(int *)(param_1 + 0x228);
    }
    *(int *)(param_1 + 0x228) = iVar9 + -1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(puVar1);
  }
  fVar3 = *(float *)(param_1 + 0x210);
  fVar4 = *(float *)(param_1 + 0x214);
  fVar18 = fVar3 - *param_2;
  fVar5 = *(float *)(param_1 + 0x218);
  fVar15 = fVar4 - param_2[1];
  fVar20 = fVar5 - param_2[2];
  fVar11 = fVar15 * fVar15 + fVar18 * fVar18 + fVar20 * fVar20;
  fVar16 = fVar15;
  fVar19 = fVar18;
  fVar12 = fVar20;
  if ((fVar11 != 1.0) &&
     (fVar16 = DAT_1468b5d94, fVar19 = DAT_1468b5d90, fVar12 = DAT_1468b5d98, 1e-08 <= fVar11)) {
    auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
    fVar12 = auVar13._0_4_;
    fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
    fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
    fVar16 = fVar15 * fVar12;
    fVar19 = fVar18 * fVar12;
    fVar12 = fVar20 * fVar12;
  }
  fVar11 = *(float *)(param_1 + 0x180);
  lVar7 = *(longlong *)(param_1 + 0x1a0);
  fVar14 = (fVar12 * DAT_1464aa798._4_4_ - fVar16 * DAT_1464aa7a0) * fVar11 * 0.5;
  fVar17 = (fVar16 * (float)DAT_1464aa798 - fVar19 * DAT_1464aa798._4_4_) * fVar11 * 0.5;
  fVar20 = (fVar19 * DAT_1464aa7a0 - fVar12 * (float)DAT_1464aa798) * fVar11 * 0.5;
  fVar16 = *param_2;
  fVar19 = *param_2;
  fVar12 = param_2[2];
  fVar11 = param_2[2];
  fVar15 = param_2[1];
  fVar18 = param_2[1];
  uVar8 = *(undefined8 *)(param_1 + 0x178);
  iVar9 = *(int *)(lVar7 + 0x698);
  lVar10 = (longlong)iVar9;
  *(int *)(lVar7 + 0x698) = iVar9 + 1;
  if (*(int *)(lVar7 + 0x69c) < iVar9 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(lVar7 + 0x690,iVar9);
  }
  lVar7 = *(longlong *)(lVar7 + 0x690);
  plVar2 = (longlong *)(lVar7 + lVar10 * 0x50);
  *plVar2 = param_1;
  plVar2[1] = CONCAT44(fVar20 + fVar4,fVar14 + fVar3);
  puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar10 * 0x50);
  *puVar1 = CONCAT44(fVar3 - fVar14,fVar17 + fVar5);
  puVar1[1] = CONCAT44(fVar5 - fVar17,fVar4 - fVar20);
  puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar10 * 0x50);
  *puVar1 = CONCAT44(fVar15 - fVar20,fVar16 - fVar14);
  puVar1[1] = CONCAT44(fVar14 + fVar19,fVar12 - fVar17);
  puVar1 = (undefined8 *)(lVar7 + 0x30 + lVar10 * 0x50);
  *puVar1 = CONCAT44(fVar17 + fVar11,fVar20 + fVar18);
  puVar1[1] = (ulonglong)uStack_104 << 0x20;
  puVar1 = (undefined8 *)(lVar7 + 0x40 + lVar10 * 0x50);
  *puVar1 = uVar8;
  puVar1[1] = CONCAT71(uStack_f7,3);
  return;
}



// FUNCTION 142f98d60 FUN_142f98d60 body=888 status=ok
// SIG undefined FUN_142f98d60(void)

longlong FUN_142f98d60(longlong param_1,longlong *param_2)

{
  float fVar1;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  LPVOID pvVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  float fVar2;
  
  cVar4 = FWeakObjectPtr::IsValid();
  if ((((cVar4 == '\0') || (lVar6 = FWeakObjectPtr::Get(param_1), lVar6 == 0)) || (*param_2 == 0))
     || (param_2[1] == 0)) {
    return 0;
  }
  pvVar7 = TlsGetValue(DAT_146b7bf70);
  if (pvVar7 == (LPVOID)0x0) {
    pvVar7 = DAT_146b7bf68;
  }
  lVar8 = (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar7 + 0x58),0xc0);
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_142f897f0(lVar8,lVar6 + 0x6c0,(longlong *)(lVar6 + 0x660));
  }
  plVar15 = *(longlong **)(*param_2 + 0x30);
  plVar16 = plVar15 + (longlong)*(int *)(*param_2 + 0x38) * 3;
  for (; plVar15 != plVar16; plVar15 = plVar15 + 3) {
    if (*plVar15 != 0) {
      fVar1 = *(float *)(plVar15 + 1);
      fVar2 = *(float *)(plVar15 + 1);
      uVar5 = FUN_142f9d9e0(lVar6 + 0x6c0);
      if (uVar5 < 0x20) {
        uVar5 = 1 << ((byte)uVar5 & 0x1f);
        *(uint *)(lVar8 + 0x20) = *(uint *)(lVar8 + 0x20) | uVar5;
        if (fVar2 <= 1.1 && fVar1 != 1.1) {
          *(uint *)(lVar8 + 0xa8) = *(uint *)(lVar8 + 0xa8) | uVar5;
        }
      }
    }
  }
  lVar10 = param_2[1];
  plVar16 = *(longlong **)(lVar10 + 0x30);
  plVar15 = plVar16 + (longlong)*(int *)(lVar10 + 0x38) * 4;
  if (plVar16 != plVar15) {
LAB_142f98e97:
    if ((*plVar16 != 0) && (plVar16[2] != 0)) {
      lVar9 = FUN_142e20fc0();
      for (lVar10 = plVar16[2]; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
        if (lVar10 == lVar9) {
          lVar10 = *plVar16;
          if ((*(char *)(lVar10 + 0x5e) == '\0') && (*(char *)(lVar10 + 0x5f) == '\0')) {
            plVar14 = *(longlong **)(lVar6 + 0x660);
            plVar13 = plVar14;
            goto joined_r0x000142f98ee2;
          }
          break;
        }
      }
    }
    goto LAB_142f98f1b;
  }
LAB_142f98f2d:
  plVar16 = *(longlong **)(lVar10 + 0x40);
  plVar15 = plVar16 + (longlong)*(int *)(lVar10 + 0x48) * 6;
joined_r0x000142f98f43:
  if (plVar16 == plVar15) {
    if (*(longlong **)(param_1 + 0x120) != (longlong *)0x0) {
      uVar11 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x18))();
      *(undefined8 *)(lVar8 + 0x18) = uVar11;
    }
    return lVar8;
  }
  if ((*plVar16 != 0) && (plVar16[1] != 0)) {
    plVar14 = *(longlong **)(param_2[1] + 0x30);
    plVar13 = plVar14 + (longlong)*(int *)(param_2[1] + 0x38) * 4;
    for (; plVar14 != plVar13; plVar14 = plVar14 + 4) {
      if (*plVar14 == *plVar16) {
        if ((plVar14 != (longlong *)0x0) && (lVar10 = plVar14[2], lVar10 != 0)) {
          lVar9 = FUN_142e20fc0();
          goto LAB_142f98fc0;
        }
        break;
      }
    }
  }
  goto LAB_142f99080;
joined_r0x000142f98ee2:
  if (plVar13 == plVar14 + *(int *)(lVar6 + 0x668)) goto LAB_142f98ef6;
  if (*plVar13 == lVar10) {
    uVar5 = (uint)((longlong)plVar13 - (longlong)plVar14 >> 3);
    goto LAB_142f98efb;
  }
  plVar13 = plVar13 + 1;
  goto joined_r0x000142f98ee2;
LAB_142f98ef6:
  uVar5 = 0xffffffff;
LAB_142f98efb:
  uVar3 = *(undefined4 *)((longlong)plVar16 + 0xc);
  if (uVar5 < 0x20) {
    *(uint *)(lVar8 + 0x24) = *(uint *)(lVar8 + 0x24) | 1 << ((byte)uVar5 & 0x1f);
    *(undefined4 *)(lVar8 + 0x28 + (ulonglong)uVar5 * 4) = uVar3;
  }
LAB_142f98f1b:
  plVar16 = plVar16 + 4;
  if (plVar16 == plVar15) goto code_r0x000142f98f28;
  goto LAB_142f98e97;
code_r0x000142f98f28:
  lVar10 = param_2[1];
  goto LAB_142f98f2d;
  while (lVar10 = *(longlong *)(lVar10 + 0x30), lVar10 != 0) {
LAB_142f98fc0:
    if (lVar10 == lVar9) {
      plVar14 = *(longlong **)(param_2[1] + 0x30);
      plVar13 = plVar14 + (longlong)*(int *)(param_2[1] + 0x38) * 4;
      goto joined_r0x000142f98fee;
    }
  }
  goto LAB_142f99080;
joined_r0x000142f98fee:
  if (plVar14 == plVar13) goto LAB_142f99080;
  if (*plVar14 == plVar16[1]) {
    if ((plVar14 != (longlong *)0x0) && (lVar10 = plVar14[2], lVar10 != 0)) {
      lVar9 = FUN_142e20fc0();
      goto LAB_142f99017;
    }
    goto LAB_142f99080;
  }
  plVar14 = plVar14 + 4;
  goto joined_r0x000142f98fee;
  while (lVar10 = *(longlong *)(lVar10 + 0x30), lVar10 != 0) {
LAB_142f99017:
    if (lVar10 == lVar9) {
      plVar14 = *(longlong **)(lVar6 + 0x670);
      plVar13 = plVar14;
      goto joined_r0x000142f99043;
    }
  }
LAB_142f99080:
  plVar16 = plVar16 + 6;
  goto joined_r0x000142f98f43;
joined_r0x000142f99043:
  if (plVar13 == plVar14 + (longlong)*(int *)(lVar6 + 0x678) * 4) goto LAB_142f99080;
  if ((*plVar13 == *plVar16) && (plVar13[1] == plVar16[1])) {
    iVar12 = (int)((longlong)plVar13 - (longlong)plVar14 >> 5);
    if (iVar12 != -1) {
      uVar5 = iVar12 + *(int *)(lVar6 + 0x668);
      if (uVar5 < 0x20) {
        *(uint *)(lVar8 + 0x24) = *(uint *)(lVar8 + 0x24) | 1 << ((byte)uVar5 & 0x1f);
        *(undefined4 *)(lVar8 + 0x28 + (ulonglong)uVar5 * 4) = 0;
      }
    }
    goto LAB_142f99080;
  }
  plVar13 = plVar13 + 4;
  goto joined_r0x000142f99043;
}



// FUNCTION 142f990e0 FUN_142f990e0 body=151 status=ok
// SIG undefined FUN_142f990e0(void)

void FUN_142f990e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  
  if (*(longlong *)(param_1 + 0x7a0) == 0) {
    plVar2 = (longlong *)FName::FName(local_res10,L"NavVolume",1);
    lVar1 = *plVar2;
    if (lVar1 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar3 = URecastNavMeshDataChunk::GetPrivateStaticClass();
    uVar3 = FUN_1417985e0(uVar3,param_1,lVar1,0,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x7a0) = uVar3;
  }
  return;
}



// FUNCTION 142f99180 FUN_142f99180 body=151 status=ok
// SIG undefined FUN_142f99180(void)

void FUN_142f99180(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  
  if (*(longlong *)(param_1 + 0x7a0) == 0) {
    plVar2 = (longlong *)FName::FName(local_res10,L"NavMesh",1);
    lVar1 = *plVar2;
    if (lVar1 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar3 = UNavLinkTrivial::StaticClass();
    uVar3 = FUN_1417985e0(uVar3,param_1,lVar1,0,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x7a0) = uVar3;
  }
  return;
}



// FUNCTION 142f99220 FUN_142f99220 body=356 status=ok
// SIG undefined FUN_142f99220(void)

longlong FUN_142f99220(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  lVar5 = FUN_142b89710();
  if (lVar5 == 0) {
LAB_142f9927a:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_142fc43a0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142f9927a;
  }
  lVar6 = param_1[5];
  if (lVar6 != 0) {
    if ((*(byte *)(lVar6 + 0x94) & 2) == 0) {
      iVar1 = *(int *)(lVar6 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar9 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar9;
        lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) != 0) goto LAB_142f992d3;
      bVar2 = false;
    }
    else {
LAB_142f992d3:
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142f992dd;
  }
  param_1[5] = lVar5;
LAB_142f992dd:
  local_38 = (**(code **)(*param_1 + 0x148))(param_1);
  local_30 = &local_38;
  local_28 = FUN_14073d760(&local_38,DAT_146b440d8);
  puVar3 = local_30;
  local_20 = &local_38;
  local_18 = 0;
  puVar7 = (undefined8 *)FUN_14073d760(local_30,local_28);
  puVar8 = (undefined8 *)FUN_14073d760(local_20,local_18);
  for (; puVar7 != puVar8; puVar7 = (undefined8 *)FUN_14073d760(puVar3,*puVar7)) {
    FUN_142fa75c0(puVar7[2]);
  }
  return lVar5;
}



// FUNCTION 142f99390 BeginDestroy body=27 status=ok
// SIG undefined BeginDestroy(void)

void UChatter::BeginDestroy(undefined8 param_1)

{
  UFlowChart::BeginDestroy();
  FUN_142f96c10(param_1);
  return;
}



// FUNCTION 142f993b0 FUN_142f993b0 body=627 status=ok
// SIG undefined FUN_142f993b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142f993b0(float *param_1,float *param_2,ulonglong *param_3)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (param_2 != (float *)0x0) {
    *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 3);
    param_2[2] = param_1[5];
  }
  if (param_3 != (ulonglong *)0x0) {
    *param_3 = *(ulonglong *)(param_1 + 6);
  }
  uVar3 = *(ulonglong *)(param_1 + 0x20);
  if ((uVar3 != 0) &&
     (((((float)DAT_14676e1b0 != param_1[3] || (DAT_14676e1b0._4_4_ != param_1[4])) ||
       (DAT_14676e1b8 != param_1[5])) && ((-1 < (int)param_1[6] && (-1 < (int)param_1[7])))))) {
    if (*(longlong *)(uVar3 + 0x8f8) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = UWeapon::GetStatusEffectOriginStats();
      uVar3 = *(ulonglong *)(param_1 + 0x20);
    }
    if (uVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(uVar3 + 0x8f8);
    }
    lVar5 = 0;
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 0x130);
    }
    if ((lVar2 != 0) && (lVar5 != 0)) {
      lVar2 = *(longlong *)(param_1 + 6);
      local_38 = 0;
      uStack_30 = 0;
      local_68 = (float)*(undefined8 *)(param_1 + 3) * 0.01;
      fStack_64 = (float)((ulonglong)*(undefined8 *)(param_1 + 3) >> 0x20) * 0.01;
      fStack_60 = param_1[5] * 0.01;
      uStack_5c = 0;
      local_44 = 100000;
      local_3c = 0;
      local_58 = (param_1[3] + *param_1) * 0.01;
      fStack_54 = (param_1[1] + param_1[4]) * 0.01;
      fStack_50 = (param_1[2] + param_1[5]) * 0.01;
      uStack_4c = 0;
      if (((int)lVar2 < 0) || (lVar2 < 0)) {
        local_48 = 0xffffffff;
      }
      else {
        local_48 = (int)lVar2 << 0x16 | (uint)((ulonglong)lVar2 >> 0x20);
      }
      local_40 = param_1[8] * 0.02;
      local_88 = 0;
      local_80 = 0;
      local_78 = DAT_1467f08d0;
      fStack_74 = fRam00000001467f08d4;
      fStack_70 = fRam00000001467f08d8;
      uStack_6c = uRam00000001467f08dc;
      bVar1 = FUN_142fbc600(0,&local_68,&local_88);
      if (param_2 != (float *)0x0) {
        *param_2 = local_78;
        param_2[1] = fStack_74;
        param_2[2] = fStack_70;
        *param_2 = *param_2 * 100.0;
        param_2[2] = param_2[2] * 100.0;
        param_2[1] = param_2[1] * 100.0;
      }
      if (param_3 != (ulonglong *)0x0) {
        if (local_84 == 0xffffffff) {
          *param_3 = 0xffffffffffffffff;
          return (ulonglong)bVar1;
        }
        local_98 = CONCAT44(local_84,local_84 >> 0x16) & 0x3fffffffffffff;
        *param_3 = local_98;
      }
      return (ulonglong)bVar1;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142f99630 FUN_142f99630 body=1322 status=ok
// SIG undefined FUN_142f99630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_142f99630(float *param_1,undefined8 *param_2,ulonglong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1a8 [32];
  float local_188;
  float fStack_184;
  float local_180;
  undefined8 local_178;
  float local_170;
  undefined8 local_168;
  float local_160;
  undefined4 local_15c;
  ulonglong local_158;
  longlong local_150;
  undefined8 local_148;
  undefined4 local_140;
  uint local_13c;
  undefined8 local_138;
  undefined4 local_130;
  uint local_12c;
  undefined8 local_128;
  undefined4 local_120;
  uint local_11c;
  uint local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint local_d8;
  float local_d0;
  float local_c8;
  longlong local_b8;
  undefined1 local_a8 [16];
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  FUN_1424c8610();
  FUN_1424c98a0();
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 3);
    *(float *)(param_2 + 1) = param_1[5];
  }
  if (param_3 != (ulonglong *)0x0) {
    *param_3 = *(ulonglong *)(param_1 + 6);
  }
  if ((*(longlong *)(param_1 + 0x20) == 0) ||
     (((((float)DAT_14676e1b0 == param_1[3] && (DAT_14676e1b0._4_4_ == param_1[4])) &&
       (DAT_14676e1b8 == param_1[5])) ||
      (lVar9 = FUN_142fa2fb0(*(longlong *)(param_1 + 0x20),*(undefined8 *)(param_1 + 6)), lVar9 == 0
      )))) {
    return false;
  }
  local_150 = *(longlong *)(param_1 + 0x20);
  lVar9 = 0;
  lVar10 = lVar9;
  if (local_150 != 0) {
    lVar10 = *(longlong *)(local_150 + 0x8f8);
  }
  if (lVar10 == 0) {
    return false;
  }
  lVar10 = *(longlong *)(lVar10 + 0x130);
  if (lVar10 == 0) {
    return false;
  }
  local_170 = param_1[5];
  local_178 = *(ulonglong *)(param_1 + 3);
  local_158 = *(ulonglong *)(param_1 + 6);
  fVar1 = param_1[3];
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[4];
  local_160 = param_1[5];
  local_15c = 0;
  local_168 = local_178;
  FUN_142fa8600(&local_168,&local_178);
  local_188 = (fVar1 + fVar2) - (float)local_178;
  fVar13 = (fVar3 + fVar4) - local_178._4_4_;
  if ((ABS(local_188) <= 0.0001) && (ABS(fVar13) <= 0.0001)) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(param_1 + 3);
      *(float *)(param_2 + 1) = param_1[5];
    }
    if (param_3 != (ulonglong *)0x0) {
      *param_3 = *(ulonglong *)(param_1 + 6);
    }
    return true;
  }
  FUN_1438565b0(&local_148);
  fVar14 = SQRT(local_188 * local_188 + fVar13 * fVar13);
  if (fVar14 <= 1e-08) {
    local_188 = DAT_1468b5d90;
    local_180 = DAT_1468b5d98;
    fStack_184 = DAT_1468b5d94;
  }
  else {
    local_180 = 0.0;
    local_188 = (1.0 / fVar14) * local_188;
    fStack_184 = (1.0 / fVar14) * fVar13;
  }
  FUN_1438564f0(&local_f8);
  lVar5 = *(longlong *)(param_1 + 6);
  local_f8 = (float)local_178 * 0.01;
  fStack_f4 = (float)(local_178 >> 0x20) * 0.01;
  fStack_f0 = local_170 * 0.01;
  uStack_ec = 0;
  local_a8._4_4_ = fStack_184;
  local_a8._0_4_ = local_188;
  local_a8._8_4_ = local_180;
  local_a8._12_4_ = 0;
  if (((int)lVar5 < 0) || (lVar5 < 0)) {
    local_d8 = 0xffffffff;
  }
  else {
    local_d8 = (int)lVar5 << 0x16 | (uint)((ulonglong)lVar5 >> 0x20);
  }
  local_e8 = _DAT_1467f08b0;
  uStack_e4 = uRam00000001467f08b4;
  uStack_e0 = uRam00000001467f08b8;
  uStack_dc = uRam00000001467f08bc;
  local_b8 = FUN_142fa12f0(*(longlong *)(param_1 + 0x20) + 0xa28,param_1 + 0x1c);
  local_d0 = param_1[8] * 0.02;
  local_c8 = (param_1[8] + fVar14) * 0.01;
  if (local_b8 == 0) {
    lVar5 = *(longlong *)(param_1 + 0x20);
    cVar7 = FWeakObjectPtr::IsValid(lVar5 + 0xa28);
    if (cVar7 != '\0') {
      lVar9 = *(longlong *)(lVar5 + 0xb48);
    }
    local_b8 = lVar9;
    if (lVar9 == 0) {
      bVar12 = false;
      goto LAB_142f99aa3;
    }
  }
  iVar8 = FUN_143859550(lVar10,&local_f8,&local_148);
  bVar12 = iVar8 == 6;
  local_188 = local_108 * 100.0;
  fStack_184 = fStack_104 * 100.0;
  local_180 = fStack_100 * 100.0;
  if (local_110 == 0xffffffff) {
    local_178 = 0xffffffffffffffff;
  }
  else {
    local_178 = CONCAT44(local_110,local_110 >> 0x16) & 0x3fffffffffffff;
  }
  uVar6 = local_178;
  if (param_2 != (undefined8 *)0x0) {
    if (bVar12) {
      local_150 = *(longlong *)(param_1 + 0x20);
      local_15c = 0x3dcccccd;
      local_168 = CONCAT44(fVar3 + fVar4,fVar1 + fVar2);
      local_158 = local_178;
      local_160 = local_180;
      FUN_142fa8600(&local_168,&local_188);
    }
    *param_2 = CONCAT44(fStack_184,local_188);
    *(float *)(param_2 + 1) = local_180;
  }
  if (param_3 != (ulonglong *)0x0) {
    *param_3 = uVar6;
  }
LAB_142f99aa3:
  uVar11 = FUN_143703a50();
  local_120 = 0;
  if (-1 < (int)local_11c) {
    FUN_143702e10(uVar11,local_128,0x10,local_11c & 0x3fffffff);
  }
  local_128 = 0;
  local_11c = 0x80000000;
  uVar11 = FUN_143703a50();
  local_130 = 0;
  if (-1 < (int)local_12c) {
    FUN_143702e10(uVar11,local_138,4,local_12c & 0x3fffffff);
  }
  local_138 = 0;
  local_12c = 0x80000000;
  uVar11 = FUN_143703a50();
  local_140 = 0;
  if (-1 < (int)local_13c) {
    FUN_143702e10(uVar11,local_148,4,local_13c & 0x3fffffff);
    return bVar12;
  }
  return bVar12;
}



// FUNCTION 142f99b60 FUN_142f99b60 body=1422 status=ok
// SIG undefined FUN_142f99b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f99b60(longlong *param_1)

{
  float *pfVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  float fVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  longlong local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong *local_c8;
  undefined8 *puStack_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_9c;
  float local_94;
  undefined1 local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  undefined1 local_68 [64];
  
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    lVar9 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      local_94 = DAT_1468b5d98;
      local_a0 = DAT_1468b5d98;
      puStack_c0 = &local_a8;
      local_9c = _DAT_1468b5d90;
      local_a8 = _DAT_1468b5d90;
      local_90 = 0;
      local_c8 = param_1;
      FUN_1428e7a40();
      uVar10 = FUN_1428e7a40();
      FUN_142f86d40(lVar2,uVar10,&local_c8);
      fVar19 = ((float)local_9c - (float)local_a8) * 0.5;
      fVar17 = (local_94 - local_a0) * 0.5;
      fVar18 = (local_9c._4_4_ - local_a8._4_4_) * 0.5;
      fVar24 = (float)local_a8 + fVar19;
      lStack_d0 = CONCAT44(lStack_d0._4_4_,fVar17);
      local_80 = local_a0 + fVar17;
      local_f8 = CONCAT44(fVar18,fVar19);
      fVar23 = local_a8._4_4_ + fVar18;
      local_f0 = fVar17;
      FUN_14234fd70(param_1,&local_f8,1);
      fVar8 = local_80;
      pfVar1 = (float *)(param_1 + 0x50);
      local_e0 = local_80;
      local_e8 = CONCAT44(fVar23,fVar24);
      if (((*(float *)(param_1 + 0x3f) == *pfVar1) &&
          (*(float *)((longlong)param_1 + 0x1fc) == *(float *)((longlong)param_1 + 0x284))) &&
         (*(float *)(param_1 + 0x40) == *(float *)(param_1 + 0x51))) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        local_f8 = *(longlong *)*(undefined1 (*) [12])(param_1 + 0x3f);
        auVar15._12_4_ = 0;
        auVar15._0_12_ = *(undefined1 (*) [12])(param_1 + 0x3f);
        fVar4 = (float)DAT_146b43f60;
        fVar5 = DAT_146b43f60._4_4_;
        fVar6 = DAT_146b43f60._8_4_;
        auVar15 = divps(auVar15,_DAT_146b43f60);
        fVar20 = (float)local_f8 - (float)(int)auVar15._0_4_ * fVar4;
        fVar21 = (float)((ulonglong)local_f8 >> 0x20) - (float)(int)auVar15._4_4_ * fVar5;
        fVar22 = *(float *)(param_1 + 0x40) - (float)(int)auVar15._8_4_ * fVar6;
        fVar20 = (float)(((uint)(fVar20 + fVar4) ^ (uint)fVar20) & -(uint)(0.0 <= fVar20) ^
                        (uint)(fVar20 + fVar4));
        fVar21 = (float)(((uint)(fVar21 + fVar5) ^ (uint)fVar21) & -(uint)(0.0 <= fVar21) ^
                        (uint)(fVar21 + fVar5));
        local_f0 = (float)(((uint)(fVar22 + fVar6) ^ (uint)fVar22) & -(uint)(0.0 <= fVar22) ^
                          (uint)(fVar22 + fVar6));
        local_f0 = (float)(((uint)(local_f0 - fVar6) ^ (uint)local_f0) &
                           -(uint)(fRam0000000146b43f58 < local_f0) ^ (uint)local_f0);
        *(ulonglong *)pfVar1 =
             CONCAT44(((uint)(fVar21 - fVar5) ^ (uint)fVar21) &
                      -(uint)(fRam0000000146b43f54 < fVar21) ^ (uint)fVar21,
                      ((uint)(fVar20 - fVar4) ^ (uint)fVar20) & -(uint)(_DAT_146b43f50 < fVar20) ^
                      (uint)fVar20);
        *(float *)(param_1 + 0x51) = local_f0;
        plVar11 = (longlong *)FRotator::Quaternion(pfVar1,&local_c8);
        lVar2 = plVar11[1];
        param_1[0x4e] = *plVar11;
        param_1[0x4f] = lVar2;
      }
      local_d8 = param_1[0x4e];
      lStack_d0 = param_1[0x4f];
      uVar13 = 0;
      FUN_142397be0(param_1,&local_e8,&local_d8,0,0,0);
      lStack_d0 = CONCAT44(lStack_d0._4_4_,0x3f800000);
      local_e0 = 1.0;
      local_e8 = 0x3f8000003f800000;
      (**(code **)(*param_1 + 0x3f8))(param_1,&local_e8);
      local_e8 = *(undefined8 *)((longlong)param_1 + 0x1ec);
      local_e0 = *(float *)((longlong)param_1 + 500);
      FUN_142397be0(param_1,&local_e8,&DAT_1464aa810,0,0,0);
      local_b8 = (longlong *)0x0;
      local_b0 = 0;
      FUN_141755650(param_1,&local_b8);
      uVar14 = (ulonglong)((longlong)(local_b8 + (int)local_b0) + (7 - (longlong)local_b8)) >> 3;
      if (local_b8 + (int)local_b0 < local_b8) {
        uVar14 = uVar13;
      }
      if (uVar14 != 0) {
        local_f8 = 0x3f8000003f800000;
        local_f0 = 1.0;
        plVar11 = local_b8;
        do {
          plVar3 = (longlong *)*plVar11;
          local_e8 = CONCAT44(fVar18,fVar19);
          local_e0 = fVar17;
          FUN_14234fd70(plVar3,&local_e8,1);
          pfVar1 = (float *)(plVar3 + 0x50);
          local_70 = fVar8;
          local_78 = CONCAT44(fVar23,fVar24);
          if (((*(float *)(plVar3 + 0x3f) == *pfVar1) &&
              (*(float *)((longlong)plVar3 + 0x1fc) == *(float *)((longlong)plVar3 + 0x284))) &&
             (*(float *)(plVar3 + 0x40) == *(float *)(plVar3 + 0x51))) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (bVar7) {
            lVar2 = *(longlong *)*(undefined1 (*) [12])(plVar3 + 0x3f);
            fVar4 = (float)DAT_146b43f60;
            fVar5 = DAT_146b43f60._4_4_;
            fVar6 = DAT_146b43f60._8_4_;
            auVar16._12_4_ = 0;
            auVar16._0_12_ = *(undefined1 (*) [12])(plVar3 + 0x3f);
            auVar15 = divps(auVar16,_DAT_146b43f60);
            fVar20 = (float)lVar2 - (float)(int)auVar15._0_4_ * fVar4;
            fVar21 = (float)((ulonglong)lVar2 >> 0x20) - (float)(int)auVar15._4_4_ * fVar5;
            fVar22 = *(float *)(plVar3 + 0x40) - (float)(int)auVar15._8_4_ * fVar6;
            fVar20 = (float)(((uint)(fVar20 + fVar4) ^ (uint)fVar20) & -(uint)(0.0 <= fVar20) ^
                            (uint)(fVar20 + fVar4));
            fVar21 = (float)(((uint)(fVar21 + fVar5) ^ (uint)fVar21) & -(uint)(0.0 <= fVar21) ^
                            (uint)(fVar21 + fVar5));
            local_f0 = (float)(((uint)(fVar22 + fVar6) ^ (uint)fVar22) & -(uint)(0.0 <= fVar22) ^
                              (uint)(fVar22 + fVar6));
            local_f0 = (float)(((uint)(local_f0 - fVar6) ^ (uint)local_f0) &
                               -(uint)(fRam0000000146b43f58 < local_f0) ^ (uint)local_f0);
            *(ulonglong *)pfVar1 =
                 CONCAT44(((uint)(fVar21 - fVar5) ^ (uint)fVar21) &
                          -(uint)(fRam0000000146b43f54 < fVar21) ^ (uint)fVar21,
                          ((uint)(fVar20 - fVar4) ^ (uint)fVar20) & -(uint)(_DAT_146b43f50 < fVar20)
                          ^ (uint)fVar20);
            *(float *)(plVar3 + 0x51) = local_f0;
            plVar12 = (longlong *)FRotator::Quaternion(pfVar1,local_68);
            lVar2 = plVar12[1];
            plVar3[0x4e] = *plVar12;
            plVar3[0x4f] = lVar2;
          }
          local_c8 = (longlong *)plVar3[0x4e];
          puStack_c0 = (undefined8 *)plVar3[0x4f];
          FUN_142397be0(plVar3,&local_78,&local_c8,0,0,0);
          local_88 = 0x3f8000003f800000;
          local_80 = 1.0;
          (**(code **)(*plVar3 + 0x3f8))(plVar3,&local_88);
          local_d8 = *(longlong *)((longlong)plVar3 + 0x1ec);
          lStack_d0 = CONCAT44(lStack_d0._4_4_,*(undefined4 *)((longlong)plVar3 + 500));
          FUN_142397be0(plVar3,&local_d8,&DAT_1464aa810,0,0,0);
          plVar11 = plVar11 + 1;
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar14);
      }
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free(local_b8);
      }
    }
  }
  return;
}



// FUNCTION 142f9a0f0 FUN_142f9a0f0 body=766 status=ok
// SIG undefined FUN_142f9a0f0(void)

undefined8 FUN_142f9a0f0(longlong param_1,float *param_2,longlong param_3)

{
  longlong lVar1;
  float fVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong lVar11;
  uint *puVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_res20 [2];
  ulonglong local_58;
  undefined1 local_50 [4];
  float local_4c;
  
  cVar7 = FUN_142fa8260();
  if (((cVar7 == '\0') || (iVar8 = (int)param_3, iVar8 < 0)) ||
     (uVar16 = (uint)((ulonglong)param_3 >> 0x20), param_3 < 0)) {
    return 0;
  }
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x8f8);
  }
  if (lVar11 == 0) {
    return 0;
  }
  lVar11 = *(longlong *)(lVar11 + 0x130);
  if (lVar11 == 0) {
    return 0;
  }
  if (*(int *)(lVar11 + 0x40) <= iVar8) {
    return 0;
  }
  lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x38) + (longlong)iVar8 * 0x100);
  if (lVar11 == 0) {
    return 0;
  }
  lVar4 = *(longlong *)(lVar11 + 0x18);
  if (*(int *)(lVar4 + 0xd8) + *(int *)(lVar4 + 0x20) <= (int)uVar16) {
    return 0;
  }
  if (*(int *)(lVar11 + 0x38) == 0) {
    return 0;
  }
  if (lVar4 == 0) {
    return 0;
  }
  plVar9 = (longlong *)FUN_142fa4c50(param_1 + 0xa28,param_2 + 0x14);
  if (plVar9 == (longlong *)0x0) {
    return 0;
  }
  lVar5 = **(longlong **)(lVar11 + 0x30);
  if (lVar5 == 0) {
    return 0;
  }
  local_res20[0] = uVar16;
  puVar10 = (uint *)FUN_142fbd520(lVar11,local_res20);
  fVar2 = *param_2;
  bVar6 = false;
  puVar12 = puVar10 + 1;
  if (*(short *)((longlong)puVar10 + 10) < 1) {
    puVar12 = puVar10;
  }
  uVar16 = *puVar12;
  if (uVar16 != 0xffffffff) {
    do {
      if ((-1 < (int)uVar16) &&
         (iVar8 = *(int *)(lVar4 + 0x30), (int)uVar16 < *(int *)(lVar4 + 0xe8) + iVar8)) {
        if ((int)uVar16 < iVar8) {
          uVar14 = uVar16;
          if (*(int *)(lVar4 + 0x78) != 0) {
            uVar14 = *(uint *)(*(longlong *)(lVar4 + 0x70) + (longlong)(int)uVar16 * 4);
          }
          if (uVar14 == 0xffffffff) {
            lVar11 = *(longlong *)(lVar4 + 0x28);
            lVar13 = (longlong)(int)uVar16 * 5;
          }
          else {
            lVar13 = (longlong)(int)uVar14 * 5;
            lVar11 = *(longlong *)(lVar4 + 0xc0);
          }
        }
        else {
          lVar13 = (longlong)(int)(uVar16 - iVar8) * 5;
          lVar11 = *(longlong *)(lVar4 + 0xe0);
        }
        lVar1 = lVar11 + lVar13 * 4;
        if ((*(int *)(lVar11 + 8 + lVar13 * 4) != -1) &&
           (bVar3 = *(byte *)(lVar1 + 0x10), (bVar3 & 0x20) == 0)) {
          bVar6 = true;
          uVar14 = *(uint *)(lVar1 + 0xc);
          if ((bVar3 & 0x40) == 0) {
            if (uVar14 != 0xffffffff) {
              uVar14 = *(int *)(lVar4 + 0x17c) << 0x16 | uVar14 & 0x3fffff;
              goto LAB_142f9a2d1;
            }
LAB_142f9a2d6:
            local_58 = 0xffffffffffffffff;
            uVar15 = 0xffffffff;
          }
          else {
LAB_142f9a2d1:
            if (uVar14 == 0xffffffff) goto LAB_142f9a2d6;
            uVar15 = uVar14 & 0x3fffff;
            local_58 = CONCAT44(uVar14,uVar14 >> 0x16) & 0x3fffffffffffff;
          }
          lVar11 = FUN_142fa2fb0(param_1,local_58);
          if (((lVar11 != 0) &&
              (local_res20[0] = uVar15,
              iVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,lVar11,local_res20,0,0), iVar8 != 0)) &&
             (local_res20[0] = uVar16, FUN_143834c10(lVar5,local_50,local_res20),
             fVar2 * 0.01 <= local_4c)) {
            return 1;
          }
        }
      }
      uVar14 = puVar10[1];
      if (((int)uVar16 < (int)uVar14) ||
         ((int)((uVar14 - 1) + (int)*(short *)((longlong)puVar10 + 10)) <= (int)uVar16)) {
        uVar15 = *puVar10;
        if (uVar16 != (uVar14 - 1) + (int)*(short *)((longlong)puVar10 + 10)) {
          if (((int)uVar16 < (int)uVar15) ||
             ((int)((uVar15 - 1) + (int)(short)puVar10[2]) <= (int)uVar16)) {
            uVar15 = 0xffffffff;
          }
          else {
            uVar15 = uVar16 + 1;
          }
        }
      }
      else {
        uVar15 = uVar16 + 1;
      }
      uVar16 = uVar15;
    } while (uVar16 != 0xffffffff);
    if (bVar6) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142f9a3f0 FUN_142f9a3f0 body=181 status=ok
// SIG undefined FUN_142f9a3f0(void)

void FUN_142f9a3f0(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = FUN_142f98350(param_1,param_2,1);
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



// FUNCTION 142f9a4b0 FUN_142f9a4b0 body=115 status=ok
// SIG undefined FUN_142f9a4b0(void)

void FUN_142f9a4b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14233a670();
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  lVar2 = FUN_142f9cfb0(lVar2,0);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x1a0);
    lVar3 = (longlong)iVar1;
    if (((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x6d8))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x6d0) + lVar3 * 0x10) == param_1)) {
      *(undefined8 *)(*(longlong *)(lVar2 + 0x6d0) + lVar3 * 0x10) = 0;
      *(undefined4 *)(*(longlong *)(lVar2 + 0x6d0) + 8 + lVar3 * 0x10) = 0;
    }
  }
  return;
}



// FUNCTION 142f9a530 FUN_142f9a530 body=42 status=ok
// SIG undefined FUN_142f9a530(void)

void FUN_142f9a530(longlong param_1)

{
  FUN_14233a670();
  if (*(longlong *)(param_1 + 0x788) != 0) {
    FUN_142f97a90();
    return;
  }
  return;
}



// FUNCTION 142f9a560 FUN_142f9a560 body=114 status=ok
// SIG undefined FUN_142f9a560(void)

void FUN_142f9a560(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14233a670();
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1);
  }
  lVar3 = FUN_142f9cfb0(lVar3,0);
  if (lVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x7a8);
    lVar4 = (longlong)iVar1;
    if ((-1 < iVar1) && (iVar1 < *(int *)(lVar3 + 0x688))) {
      lVar3 = *(longlong *)(lVar3 + 0x680);
      lVar2 = *(longlong *)(lVar3 + lVar4 * 0x10);
      if ((lVar2 == 0) || (lVar2 == param_1)) {
        *(undefined8 *)(lVar3 + lVar4 * 0x10) = 0;
        *(undefined4 *)(lVar3 + 0xc + lVar4 * 0x10) = 0xffffffff;
      }
    }
  }
  return;
}



// FUNCTION 142f9a5e0 FUN_142f9a5e0 body=1021 status=ok
// SIG undefined FUN_142f9a5e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f9a5e0(longlong param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  longlong local_90 [4];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60 [4];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_c0,L"Building Navigation",L"GbxNav",L"GbxNav");
  FUN_141664530(DAT_1468b6160,uVar8,1);
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_b8 + 1;
    lVar6 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b8 + 8))(local_b8,1);
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x38);
  uVar15 = 0;
  uVar12 = uVar15;
  uVar11 = uVar15;
  if (0 < iVar3) {
    do {
      FUN_141685240(DAT_1468b6160,uVar12,iVar3);
      lVar6 = *(longlong *)(param_1 + 0x30);
      lVar5 = *(longlong *)(lVar6 + uVar11);
      if (lVar5 != 0) {
        puVar2 = (ulonglong *)(lVar5 + 8);
        LOCK();
        uVar9 = *puVar2;
        if (uVar9 == 0) {
          *puVar2 = 0;
          uVar9 = 0;
        }
        UNLOCK();
        if ((uVar9 >> 0x1a & 1) == 0) {
          plVar10 = (longlong *)FTaskGraphInterface::Get();
          local_70 = (longlong *)0x0;
          local_68 = 1;
          TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (local_90,0);
          lVar6 = *(longlong *)(lVar6 + uVar11);
          plVar13 = local_90;
          if (local_70 != (longlong *)0x0) {
            plVar13 = local_70;
          }
          *plVar13 = lVar6;
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
            UNLOCK();
          }
          (**(code **)(*plVar10 + 0x48))(plVar10,local_90,0xff);
          plVar13 = local_90;
          iVar3 = (int)local_68;
          if (local_70 != (longlong *)0x0) {
            plVar13 = local_70;
          }
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            if (*plVar13 != 0) {
              LOCK();
              piVar1 = (int *)(*plVar13 + 0x48);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                FGraphEvent::Recycle();
              }
            }
            plVar13 = plVar13 + 1;
          }
          if (local_70 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
      }
      cVar7 = (**(code **)(*DAT_1468b6160 + 0x48))();
      if (cVar7 != '\0') {
        FUN_142f96590(param_1);
        break;
      }
      iVar3 = *(int *)(param_1 + 0x38);
      uVar14 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar14;
      uVar11 = uVar11 + 0x18;
    } while ((int)uVar14 < iVar3);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x40) + 8);
    LOCK();
    uVar12 = *puVar2;
    if (uVar12 == 0) {
      *puVar2 = 0;
      uVar12 = 0;
    }
    UNLOCK();
    if ((uVar12 >> 0x1a & 1) == 0) {
      uVar8 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar8,param_1 + 0x40,0xff);
    }
  }
  FUN_14166aae0(DAT_1468b6160);
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a8,L"Building Flight",L"GbxNav",L"GbxNav");
  FUN_141664530(DAT_1468b6160,uVar8,1);
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_a0 + 1;
    lVar6 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  iVar3 = *(int *)(param_1 + 0x58);
  uVar12 = uVar15;
  if (0 < iVar3) {
    do {
      FUN_141685240(DAT_1468b6160,uVar15,iVar3);
      lVar6 = *(longlong *)(param_1 + 0x50);
      lVar5 = *(longlong *)(lVar6 + uVar12);
      if (lVar5 != 0) {
        puVar2 = (ulonglong *)(lVar5 + 8);
        LOCK();
        uVar11 = *puVar2;
        if (uVar11 == 0) {
          *puVar2 = 0;
          uVar11 = 0;
        }
        UNLOCK();
        if ((uVar11 >> 0x1a & 1) == 0) {
          plVar10 = (longlong *)FTaskGraphInterface::Get();
          local_40 = (longlong *)0x0;
          local_38 = 1;
          TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (local_60,0);
          lVar6 = *(longlong *)(lVar6 + uVar12);
          plVar13 = local_60;
          if (local_40 != (longlong *)0x0) {
            plVar13 = local_40;
          }
          *plVar13 = lVar6;
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
            UNLOCK();
          }
          (**(code **)(*plVar10 + 0x48))(plVar10,local_60,0xff);
          plVar13 = local_60;
          iVar3 = (int)local_38;
          if (local_40 != (longlong *)0x0) {
            plVar13 = local_40;
          }
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            if (*plVar13 != 0) {
              LOCK();
              piVar1 = (int *)(*plVar13 + 0x48);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                FGraphEvent::Recycle();
              }
            }
            plVar13 = plVar13 + 1;
          }
          if (local_40 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
      }
      cVar7 = (**(code **)(*DAT_1468b6160 + 0x48))();
      if (cVar7 != '\0') {
        FUN_142f96590(param_1);
        break;
      }
      iVar3 = *(int *)(param_1 + 0x58);
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
      uVar12 = uVar12 + 0x18;
    } while ((int)uVar14 < iVar3);
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + 8);
    LOCK();
    uVar12 = *puVar2;
    if (uVar12 == 0) {
      *puVar2 = 0;
      uVar12 = 0;
    }
    UNLOCK();
    if ((uVar12 >> 0x1a & 1) == 0) {
      uVar8 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar8,param_1 + 0x60,0xff);
    }
  }
  FUN_14166aae0(DAT_1468b6160);
  return;
}



// FUNCTION 142f9a9e0 FUN_142f9a9e0 body=185 status=ok
// SIG undefined FUN_142f9a9e0(void)

void FUN_142f9a9e0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_b8 [176];
  
  FUN_142fbac60();
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    puVar5 = (undefined8 *)FUN_142f9f070(param_1,local_b8);
    uVar4 = puVar5[1];
    *(undefined8 *)(param_1 + 0x27b8) = *puVar5;
    *(undefined8 *)(param_1 + 0x27c0) = uVar4;
    uVar4 = puVar5[3];
    *(undefined8 *)(param_1 + 0x27c8) = puVar5[2];
    *(undefined8 *)(param_1 + 0x27d0) = uVar4;
    uVar4 = puVar5[5];
    *(undefined8 *)(param_1 + 0x27d8) = puVar5[4];
    *(undefined8 *)(param_1 + 0x27e0) = uVar4;
    uVar4 = puVar5[7];
    *(undefined8 *)(param_1 + 0x27e8) = puVar5[6];
    *(undefined8 *)(param_1 + 0x27f0) = uVar4;
    uVar4 = puVar5[9];
    *(undefined8 *)(param_1 + 0x27f8) = puVar5[8];
    *(undefined8 *)(param_1 + 0x2800) = uVar4;
    uVar4 = puVar5[0xb];
    *(undefined8 *)(param_1 + 0x2808) = puVar5[10];
    *(undefined8 *)(param_1 + 0x2810) = uVar4;
    uVar4 = puVar5[0xd];
    *(undefined8 *)(param_1 + 0x2818) = puVar5[0xc];
    *(undefined8 *)(param_1 + 0x2820) = uVar4;
    uVar4 = puVar5[0xf];
    *(undefined8 *)(param_1 + 0x2828) = puVar5[0xe];
    *(undefined8 *)(param_1 + 0x2830) = uVar4;
    uVar1 = *(undefined4 *)((longlong)puVar5 + 0x84);
    uVar2 = *(undefined4 *)(puVar5 + 0x11);
    uVar3 = *(undefined4 *)((longlong)puVar5 + 0x8c);
    *(undefined4 *)(param_1 + 0x2838) = *(undefined4 *)(puVar5 + 0x10);
    *(undefined4 *)(param_1 + 0x283c) = uVar1;
    *(undefined4 *)(param_1 + 0x2840) = uVar2;
    *(undefined4 *)(param_1 + 0x2844) = uVar3;
    uVar1 = *(undefined4 *)((longlong)puVar5 + 0x94);
    uVar2 = *(undefined4 *)(puVar5 + 0x13);
    uVar3 = *(undefined4 *)((longlong)puVar5 + 0x9c);
    *(undefined4 *)(param_1 + 0x2848) = *(undefined4 *)(puVar5 + 0x12);
    *(undefined4 *)(param_1 + 0x284c) = uVar1;
    *(undefined4 *)(param_1 + 0x2850) = uVar2;
    *(undefined4 *)(param_1 + 0x2854) = uVar3;
    *(undefined8 *)(param_1 + 0x2858) = puVar5[0x14];
    if (*(longlong **)(param_1 + 0x20f8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x20f8) + 0x478))();
    }
  }
  return;
}


