// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140ce1930 FUN_140ce1930 body=118 status=ok
// SIG undefined FUN_140ce1930(void)

void FUN_140ce1930(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x20);
    do {
      if (plVar2[5] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      FUN_140ce1840(plVar2 + -2);
      plVar2 = plVar2 + 0xc;
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



// FUNCTION 140ce19b0 FUN_140ce19b0 body=162 status=ok
// SIG undefined FUN_140ce19b0(void)

void FUN_140ce19b0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[0x14] != 0) {
        FMemory::Free();
      }
      if (plVar1[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar1[10] != 0) {
        FMemory::Free();
      }
      if (plVar1[8] != 0) {
        FMemory::Free();
      }
      if (plVar1[6] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x16;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 140ce1a60 FUN_140ce1a60 body=325 status=ok
// SIG undefined FUN_140ce1a60(void)

void FUN_140ce1a60(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x68);
    do {
      FUN_1404bf980(plVar7 + 4);
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      if (plVar7[-3] != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)plVar7[-5];
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
      plVar4 = (longlong *)plVar7[-8];
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
      plVar4 = (longlong *)plVar7[-0xb];
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
      plVar7 = plVar7 + 0x17;
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



// FUNCTION 140ce1bb0 FUN_140ce1bb0 body=250 status=ok
// SIG undefined FUN_140ce1bb0(void)

void FUN_140ce1bb0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  lVar5 = *param_1;
  iVar7 = (int)param_1[1];
  if (iVar7 != 0) {
    plVar6 = (longlong *)(lVar5 + 0x58);
    do {
      plVar4 = (longlong *)plVar6[6];
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
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      if (plVar6[-2] != 0) {
        FMemory::Free();
      }
      if (plVar6[-4] != 0) {
        FMemory::Free();
      }
      if (plVar6[-6] != 0) {
        FMemory::Free();
      }
      if (plVar6[-8] != 0) {
        FMemory::Free();
      }
      if (plVar6[-10] != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 0x12;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140ce1cb0 ~TArray<FNiagaraVariableLayoutInfo,TSizedDefaultAllocator<32>_> body=137 status=ok
// SIG undefined ~TArray<FNiagaraVariableLayoutInfo,TSizedDefaultAllocator<32>_>(void)

void TArray<FNiagaraVariableLayoutInfo,TSizedDefaultAllocator<32>_>::
     ~TArray<FNiagaraVariableLayoutInfo,TSizedDefaultAllocator<32>_>(longlong *param_1)

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
      plVar2 = plVar2 + 9;
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



// FUNCTION 140ce1d40 ~TArray<FCell,FDefaultAllocator> body=123 status=ok
// SIG undefined ~TArray<FCell,FDefaultAllocator>(void)

void TArray<FCell,FDefaultAllocator>::~TArray<FCell,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x38);
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
      plVar2 = plVar2 + 0xb;
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



// FUNCTION 140ce1dc0 FUN_140ce1dc0 body=225 status=ok
// SIG undefined FUN_140ce1dc0(void)

void FUN_140ce1dc0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 200);
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
  if (*(int *)(param_1 + 0xb0) != 0) {
    plVar5 = *(longlong **)(param_1 + 0xa0);
    if (*(longlong **)(param_1 + 0xa0) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_1 + 0x80);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x50);
    if (*(longlong **)(param_1 + 0x50) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_1 + 0x30);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140ce1eb0 FUN_140ce1eb0 body=241 status=ok
// SIG undefined FUN_140ce1eb0(void)

void FUN_140ce1eb0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x950);
  lVar1 = *(longlong *)(param_1 + 0x948);
  if (iVar2 != 0) {
    plVar3 = (longlong *)(lVar1 + 0x48);
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x948);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x8e0);
  if (*(longlong *)(param_1 + 0x8d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8c0) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x8a8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x890);
  if (*(longlong *)(param_1 + 0x880) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x838) = &PTR_FUN_14407f2f8;
  *(undefined ***)(param_1 + 0x830) = &PTR_FUN_14407f310;
  FUN_140ce2670(param_1);
  return;
}



// FUNCTION 140ce1fb0 FUN_140ce1fb0 body=1728 status=ok
// SIG undefined FUN_140ce1fb0(void)

void FUN_140ce1fb0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x1c60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c50) != 0) {
    FMemory::Free();
  }
  FUN_140ce2c40(param_1 + 0x1b10);
  if (*(longlong *)(param_1 + 0x1b00) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1af0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a68) != 0) {
    FMemory::Free();
  }
  FUN_140ce16b0(param_1 + 0x1a58);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x1a48);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x19c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1988);
  iVar4 = *(int *)(param_1 + 0x1980);
  lVar5 = *(longlong *)(param_1 + 0x1978);
  if (iVar4 != 0) {
    lVar5 = lVar5 + 8;
    do {
      FUN_1404bf980(lVar5);
      lVar5 = lVar5 + 0x40;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar5 = *(longlong *)(param_1 + 0x1978);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x1960);
  FUN_140ce1610(param_1 + 0x1940);
  if (*(longlong *)(param_1 + 0x1930) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x1920);
  if (*(longlong *)(param_1 + 0x1900) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x18f0) = 0;
  if (*(longlong *)(param_1 + 0x18e8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x18a8,0);
  if (*(longlong *)(param_1 + 0x18c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1890) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1880) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1870) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1860) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1830) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x17b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1718) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1680) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x15e8) != 0) {
    FMemory::Free();
  }
  lVar6 = 4;
  lVar5 = param_1 + 0x1560;
  do {
    plVar1 = (longlong *)(lVar5 + -0x10);
    lVar5 = lVar5 + -0x10;
    lVar6 = lVar6 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar6 != 0);
  if (*(longlong *)(param_1 + 0x1500) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x14f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1458) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1418) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x13f8);
  if (*(longlong *)(param_1 + 0x13e8) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x13d0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x13b8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x13a0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 5000);
  if (*(longlong *)(param_1 + 0x1368) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1358) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1308) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1278);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1168);
  FUN_14099a700(param_1 + 0x1150);
  if (*(longlong *)(param_1 + 0x1118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1050) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xfb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xef8) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xec8);
  FUN_1404bf980(param_1 + 0xea0);
  if (*(longlong *)(param_1 + 0xe88) != 0) {
    FMemory::Free();
  }
  FUN_140ce1a60(param_1 + 0xe58);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xe40);
  if (*(longlong *)(param_1 + 0xe30) != 0) {
    FMemory::Free();
  }
  plVar1 = *(longlong **)(param_1 + 0xe28);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  plVar1 = *(longlong **)(param_1 + 0xe10);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0xde0) != 0) {
    FMemory::Free();
  }
  plVar1 = *(longlong **)(param_1 + 0xcd8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xc38);
  if (*(longlong *)(param_1 + 0xc28) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xc10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xbf8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xbe8);
  if (*(longlong *)(param_1 + 0xbd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xbc8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 3000) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xba8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb98) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xb88);
  if (*(longlong *)(param_1 + 0xb78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb08) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xaf8) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xad8);
  if (*(longlong *)(param_1 + 0xab0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    FMemory::Free();
  }
  plVar1 = *(longlong **)(param_1 + 0xa68);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0xa28);
  FUN_140ce18a0(param_1 + 0xa18);
  FUN_14099a9b0(param_1 + 0xa08);
  FUN_14099aa40(param_1 + 0x9f8);
  TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
            (param_1 + 0x9e8);
  FUN_14099a950(param_1 + 0x9d8);
  TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>::
  ~TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>(param_1 + 0x9c0);
  *(undefined ***)(param_1 + 0x988) = &PTR_FUN_1444f65e0;
  *(undefined ***)(param_1 + 0x980) = &PTR_FUN_1444f65a8;
  FUN_140ce1eb0(param_1);
  return;
}



// FUNCTION 140ce2670 FUN_140ce2670 body=621 status=ok
// SIG undefined FUN_140ce2670(void)

void FUN_140ce2670(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  
  iVar4 = *(int *)(param_1 + 0x800);
  plVar6 = *(longlong **)(param_1 + 0x7f8);
  if (iVar4 != 0) {
    do {
      iVar5 = (int)plVar6[1];
      lVar3 = *plVar6;
      if (iVar5 != 0) {
        lVar3 = lVar3 + 8;
        do {
          FRichCurve::~FRichCurve(lVar3);
          lVar3 = lVar3 + 0x80;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        lVar3 = *plVar6;
      }
      if (lVar3 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar6 = *(longlong **)(param_1 + 0x7f8);
  }
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  plVar6 = *(longlong **)(param_1 + 0x758);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  if (*(longlong *)(param_1 + 0x730) != 0) {
    FMemory::Free();
  }
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_1 + 0x6b0);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x668);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x658);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x648);
  if (*(longlong *)(param_1 + 0x630) != 0) {
    FMemory::Free();
  }
  plVar6 = *(longlong **)(param_1 + 0x618);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  plVar6 = *(longlong **)(param_1 + 0x608);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  plVar6 = *(longlong **)(param_1 + 0x5f8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x570) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x560) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4f0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4d8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4a8);
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 140ce28e0 FUN_140ce28e0 body=225 status=ok
// SIG undefined FUN_140ce28e0(void)

void FUN_140ce28e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x60);
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
  plVar4 = *(longlong **)(param_1 + 0x48);
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
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ce29d0 FUN_140ce29d0 body=237 status=ok
// SIG undefined FUN_140ce29d0(void)

void FUN_140ce29d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_1404bf980(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
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



// FUNCTION 140ce2ac0 FUN_140ce2ac0 body=377 status=ok
// SIG undefined FUN_140ce2ac0(void)

void FUN_140ce2ac0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  TArray<FCell,FDefaultAllocator>::~TArray<FCell,FDefaultAllocator>(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  FUN_140ce1930(param_1 + 0xa8);
  iVar3 = *(int *)(param_1 + 0xa0);
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x98);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 0x90);
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x20);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x88);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 0x68);
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x20);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x60);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x50);
  iVar3 = *(int *)(param_1 + 0x48);
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (iVar3 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = *(longlong **)(param_1 + 0x40);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  FUN_140ce1a60(param_1 + 0x30);
  FUN_140ce18a0(param_1 + 0x20);
  FUN_140ce18a0(param_1 + 0x10);
  FUN_140ce1840(param_1);
  return;
}



// FUNCTION 140ce2c40 FUN_140ce2c40 body=132 status=ok
// SIG undefined FUN_140ce2c40(void)

void FUN_140ce2c40(longlong param_1)

{
  TArray<FNiagaraVariableLayoutInfo,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraVariableLayoutInfo,TSizedDefaultAllocator<32>_>(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  TArray<FCell,FDefaultAllocator>::~TArray<FCell,FDefaultAllocator>(param_1 + 0xd0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xa8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x90);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x78);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x60);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x48);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x30);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x18);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1);
  return;
}



// FUNCTION 140ce2cd0 FUN_140ce2cd0 body=502 status=ok
// SIG undefined FUN_140ce2cd0(void)

longlong * FUN_140ce2cd0(longlong *param_1,longlong *param_2)

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
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
            ConditionalRehash(param_1,iVar9,1);
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140ce2e2b;
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
LAB_140ce2e2b:
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
        TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
        ::Emplace<TTuple<unsigned_int,bool>_const_&>
                  (param_1,local_res8,(longlong)iStack_4c * 0x10 + *param_2,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 140ce2ed0 FCapturedPropSegment body=54 status=ok
// SIG undefined FCapturedPropSegment(void)

longlong FCapturedPropSegment::FCapturedPropSegment(longlong param_1,longlong param_2)

{
  FString::operator=();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  FUN_1404c0940(param_1 + 0x18,param_2 + 0x18);
  return param_1;
}



// FUNCTION 140ce2f10 FUN_140ce2f10 body=436 status=ok
// SIG undefined FUN_140ce2f10(void)

undefined1 * FUN_140ce2f10(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined1 local_60 [32];
  
  *param_1 = *param_2;
  plVar1 = (longlong *)(param_1 + 0x10);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  if (plVar1 != (longlong *)(param_2 + 0x10)) {
    iVar5 = *(int *)(param_1 + 0x18);
    if (iVar5 != 0) {
      plVar3 = (longlong *)(*plVar1 + 0x18);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 5;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = *(int *)(param_2 + 0x18);
    lVar2 = *(longlong *)(param_2 + 0x10);
    *(int *)(param_1 + 0x18) = iVar5;
    if ((iVar5 == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    else {
      TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar5);
      puVar4 = (undefined4 *)*plVar1;
      if (iVar5 != 0) {
        puVar6 = (undefined8 *)(puVar4 + 8);
        puVar7 = (undefined4 *)(lVar2 + 4);
        do {
          puVar6[-1] = 0;
          *puVar6 = 0;
          *puVar4 = 0xffffffff;
          *(undefined4 *)((longlong)puVar6 + -0x1c) = 0;
          puVar6[-2] = 0;
          *(undefined4 *)puVar6 = 0;
          if (0x7fffffff < *(uint *)((longlong)puVar6 + 4)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar6 + -1,0);
          }
          if ((undefined2 *)puVar6[-1] != (undefined2 *)0x0) {
            *(undefined2 *)puVar6[-1] = 0;
          }
          *(undefined4 *)(puVar6 + -3) = 0;
          *puVar4 = puVar7[-1];
          *(undefined4 *)((longlong)puVar6 + -0x1c) = *puVar7;
          *(undefined4 *)(puVar6 + -3) = puVar7[1];
          FString::FString(local_60,puVar7 + 5);
          FSoftObjectPath::operator=(puVar6 + -2);
          puVar4 = puVar4 + 10;
          puVar6 = puVar6 + 5;
          puVar7 = puVar7 + 10;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}



// FUNCTION 140ce30d0 FUN_140ce30d0 body=122 status=ok
// SIG undefined FUN_140ce30d0(void)

undefined1 * FUN_140ce30d0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  FText::operator=(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 140ce3150 FUN_140ce3150 body=140 status=ok
// SIG undefined FUN_140ce3150(void)

void FUN_140ce3150(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = 0;
  uVar2 = uVar3;
  if (*(int *)(param_1 + 10) != 0) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 4;
    }
    if (plVar4 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 8))();
    }
  }
  (*(code *)param_1[2])(uVar2);
  puVar1 = *(undefined8 **)*param_1;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined1 *)(puVar1 + 0xb) = 1;
  (**(code **)(*(longlong *)puVar1[10] + 0x10))();
  if (*(int *)(puVar1 + 8) != 0) {
    plVar4 = (longlong *)puVar1[6];
    if ((longlong *)puVar1[6] == (longlong *)0x0) {
      plVar4 = puVar1 + 2;
    }
    if (plVar4 != (longlong *)0x0) {
      if (plVar4 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 8))();
      }
      (*(code *)*puVar1)(uVar3);
    }
  }
  return;
}



// FUNCTION 140ce31e0 FUN_140ce31e0 body=618 status=ok
// SIG undefined FUN_140ce31e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140ce31e0(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  ulonglong *puStack_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined1 local_c8 [16];
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
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*(int *)(*param_1 + 8) < 2) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_2,L"Trade request sent to other player.",L"TradeRequestSentMessage",
               L"GenericTradeRequestSentMessage");
  }
  else {
    lVar6 = FText::FromString(local_78);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"Trade request sent to {0}.",L"TradeRequestSentMessage",
                       L"TradeRequestSentMessage");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_88,uVar7);
    local_60[0] = 4;
    FText::FText(local_50,lVar6);
    local_e8 = local_60;
    local_38 = '\x01';
    puStack_e0 = &local_30;
    local_d8 = *puVar8;
    local_d0 = puVar8[1];
    if (local_d0 != 0) {
      LOCK();
      *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
      UNLOCK();
    }
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8,&local_e8);
    uVar7 = FText::Format(local_b8,&local_d8,uVar7);
    FText::FText(param_2,uVar7);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_c8);
    if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_48 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    plVar4 = (longlong *)puVar8[1];
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
    plVar4 = *(longlong **)(lVar6 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_98 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140ce3450 FUN_140ce3450 body=1002 status=ok
// SIG undefined FUN_140ce3450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ce3450(undefined8 *param_1,int param_2,undefined8 *param_3,float *param_4)

{
  undefined8 uVar1;
  float *pfVar2;
  bool bVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_98;
  float fStack_94;
  float local_90;
  undefined1 local_88 [128];
  
  uVar1 = *(undefined8 *)((longlong)param_2 * 0x20 + *(longlong *)*param_1);
  local_90 = *(float *)((longlong)param_2 * 0x20 + 8 + *(longlong *)*param_1);
  local_98 = (float)uVar1;
  fStack_94 = (float)((ulonglong)uVar1 >> 0x20);
  if ((*(longlong *)param_1[1] != 0) &&
     (fVar7 = *(float *)(*(longlong *)param_1[1] + 0x440), 0.0 < fVar7)) {
    pfVar2 = (float *)param_1[2];
    fVar11 = local_98 - *pfVar2;
    fVar12 = fStack_94 - pfVar2[1];
    fVar13 = local_90 - pfVar2[2];
    fVar6 = fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13;
    fVar10 = fVar11;
    fVar8 = fVar12;
    fVar9 = fVar13;
    if ((fVar6 != 1.0) &&
       (fVar10 = DAT_1468b5d90, fVar8 = DAT_1468b5d94, fVar9 = DAT_1468b5d98, 1e-08 <= fVar6)) {
      auVar5 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar9 = auVar5._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar6 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar9 + fVar9 * (0.5 - fVar6 * 0.5 * fVar9 * fVar9);
      fVar10 = fVar11 * fVar9;
      fVar8 = fVar12 * fVar9;
      fVar9 = fVar13 * fVar9;
    }
    fStack_94 = fStack_94 + fVar8 * fVar7;
    local_90 = local_90 + fVar9 * fVar7;
    local_98 = local_98 + fVar10 * fVar7;
  }
  pfVar2 = (float *)param_1[3];
  local_98 = local_98 - *pfVar2;
  fStack_94 = fStack_94 - pfVar2[1];
  local_90 = local_90 - pfVar2[2];
  fVar7 = fStack_94 * fStack_94 + local_98 * local_98 + local_90 * local_90;
  if (fVar7 != 1.0) {
    if (fVar7 < 1e-08) {
      local_90 = DAT_1468b5d98;
      fStack_94 = DAT_1468b5d94;
      local_98 = DAT_1468b5d90;
    }
    else {
      auVar5 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar10 = auVar5._0_4_;
      fVar10 = fVar10 + fVar10 * (0.5 - fVar7 * 0.5 * fVar10 * fVar10);
      fVar10 = fVar10 + fVar10 * (0.5 - fVar7 * 0.5 * fVar10 * fVar10);
      local_98 = local_98 * fVar10;
      fStack_94 = fStack_94 * fVar10;
      local_90 = fVar10 * local_90;
    }
  }
  pfVar2 = (float *)param_1[4];
  fVar10 = fStack_94 * pfVar2[1] + local_98 * *pfVar2 + local_90 * pfVar2[2];
  fVar7 = -1.0;
  if ((-1.0 <= fVar10) && (fVar7 = fVar10, 1.0 <= fVar10)) {
    fVar7 = 1.0;
  }
  fVar7 = _guard_xfg_dispatch_icall_nop(fVar7);
  pfVar2 = (float *)param_1[5];
  *param_4 = fVar7 * 57.295776 + fVar7 * 57.295776;
  pfVar4 = (float *)FVector::Rotation(&local_98,local_88);
  auVar5._4_4_ = pfVar4[1] - pfVar2[1];
  auVar5._0_4_ = *pfVar4 - *pfVar2;
  auVar5._8_4_ = pfVar4[2] - pfVar2[2];
  auVar5._12_4_ = 0;
  auVar5 = divps(auVar5,_DAT_14686da80);
  fVar9 = (float)DAT_14686da80;
  fVar6 = DAT_14686da80._4_4_;
  fVar11 = DAT_14686da80._8_4_;
  fVar7 = (*pfVar4 - *pfVar2) - (float)(int)auVar5._0_4_ * fVar9;
  fVar10 = (pfVar4[1] - pfVar2[1]) - (float)(int)auVar5._4_4_ * fVar6;
  fVar8 = (pfVar4[2] - pfVar2[2]) - (float)(int)auVar5._8_4_ * fVar11;
  fVar7 = (float)(((uint)(fVar7 + fVar9) ^ (uint)fVar7) & -(uint)(0.0 <= fVar7) ^
                 (uint)(fVar7 + fVar9));
  fVar10 = (float)(((uint)(fVar10 + fVar6) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                  (uint)(fVar10 + fVar6));
  fVar8 = (float)(((uint)(fVar8 + fVar11) ^ (uint)fVar8) & -(uint)(0.0 <= fVar8) ^
                 (uint)(fVar8 + fVar11));
  bVar3 = fRam000000014686da78 < fVar8;
  *param_3 = CONCAT44(((uint)(fVar10 - fVar6) ^ (uint)fVar10) &
                      -(uint)(fRam000000014686da74 < fVar10) ^ (uint)fVar10,
                      ((uint)(fVar7 - fVar9) ^ (uint)fVar7) & -(uint)(_DAT_14686da70 < fVar7) ^
                      (uint)fVar7);
  *(uint *)(param_3 + 1) = ((uint)(fVar8 - fVar11) ^ (uint)fVar8) & -(uint)bVar3 ^ (uint)fVar8;
  return;
}



// FUNCTION 140ce3840 FUN_140ce3840 body=795 status=ok
// SIG undefined FUN_140ce3840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ce3840(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [4];
  undefined4 local_e4;
  undefined4 local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8 [2];
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_e4 = (undefined4)param_1[1];
  local_e0 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_e8);
  FUN_14172a400(local_e8);
  cVar4 = FWeakObjectPtr::IsValid(&local_e4);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_e4);
    lVar7 = 0;
    iVar2 = *(int *)(lVar6 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar10 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar10;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    if (((*(uint *)(lVar7 + 8) & 0x30000000) == 0) &&
       (lVar7 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar7 != 0)) {
      local_d8 = *param_1;
      local_d0 = (undefined4)param_1[1];
      local_cc = *(undefined4 *)((longlong)param_1 + 0xc);
      local_b0 = 0;
      local_c8[0] = 0xffffffff;
      uVar8 = FUN_1416f8720((int)param_1[2]);
      FUN_14170c210(local_c8,uVar8);
      local_c0 = param_1[3];
      local_b8 = (longlong *)param_1[4];
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
        UNLOCK();
      }
      plVar9 = (longlong *)FMemory::Realloc(0,0x40);
      local_a8 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = (longlong)&PTR_GetPoolName_1444f8448;
        plVar9[1] = local_d8;
        *(undefined4 *)(plVar9 + 2) = local_d0;
        *(undefined4 *)((longlong)plVar9 + 0x14) = local_cc;
        *(undefined4 *)(plVar9 + 3) = local_c8[0];
        local_c8[0] = 0xffffffff;
        plVar9[4] = local_c0;
        plVar9[5] = (longlong)local_b8;
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
          UNLOCK();
        }
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar9[7] = lVar7;
        *plVar9 = (longlong)&PTR_GetPoolName_1444f8490;
      }
      lVar7 = (**(code **)(*(longlong *)*param_1 + 0x148))();
      if (*(longlong *)(lVar7 + 400) == 0) {
        uVar8 = *(undefined8 *)(lVar7 + 0x3f8);
      }
      else {
        uVar8 = *(undefined8 *)(*(longlong *)(lVar7 + 400) + 0x90);
      }
      local_98 = 0;
      local_90 = 0;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x30))(plVar9,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_f0 = 0xbf800000;
      local_f8 = 0;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar8,&local_b0,&local_98,0x40c00000);
      if (local_38 != 0) {
        plVar11 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar11 = local_48;
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x10))(plVar11,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        local_a8 = (longlong *)FMemory::Realloc(plVar9,0,0);
        if (local_a8 != (longlong *)0x0) {
          FMemory::Free(local_a8);
        }
      }
      plVar9 = local_b8;
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_b8 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_b8)(local_b8);
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
      FUN_1416f8340(local_c8[0]);
    }
  }
  lVar7 = FUN_1416f8720((int)param_1[2]);
  if (lVar7 != 0) {
    puVar3 = (undefined8 *)param_1[3];
    lVar7 = FUN_1416f8720((int)param_1[2]);
    TBaseMulticastDelegate<void>::Remove(lVar7 + 0x4f8,*puVar3);
  }
  return;
}



// FUNCTION 140ce3b60 FUN_140ce3b60 body=137 status=ok
// SIG undefined FUN_140ce3b60(void)

void FUN_140ce3b60(undefined8 *param_1,undefined8 param_2)

{
  float fVar1;
  float *pfVar2;
  int *piVar3;
  float *pfVar4;
  float fVar5;
  
  fVar5 = (float)UGeometryCacheComponent::GetDuration(param_2,*param_1,param_1[1]);
  if (0.0 < fVar5) {
    fVar1 = *(float *)param_1[2];
    if (fVar5 <= fVar1) {
      fVar5 = fVar1;
    }
    *(float *)param_1[2] = fVar5;
    pfVar4 = (float *)AEQSTestingPawn::GetNavAgentPropertiesRef(param_2);
    pfVar2 = (float *)param_1[3];
    *pfVar2 = *pfVar4 + *pfVar2;
    pfVar2[1] = pfVar4[1] + pfVar2[1];
    pfVar2[2] = pfVar4[2] + pfVar2[2];
    piVar3 = (int *)param_1[4];
    pfVar2[3] = pfVar4[3] + pfVar2[3];
    *piVar3 = *piVar3 + 1;
  }
  return;
}



// FUNCTION 140ce3bf0 FUN_140ce3bf0 body=581 status=ok
// SIG undefined FUN_140ce3bf0(void)

void FUN_140ce3bf0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  cVar5 = FWeakObjectPtr::IsValid();
  if (cVar5 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1);
    FUN_140d02510(uVar6);
    uVar6 = FWeakObjectPtr::Get(param_1);
    FUN_142dcf3a0(uVar6,&local_28);
    puVar7 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
    FUN_140bbd560(&local_38,*puVar7);
    plVar11 = local_38;
    if ((local_28 != 0) && (local_38 != (longlong *)0x0)) {
      lVar8 = FWeakObjectPtr::Get(param_1);
      lVar8 = *(longlong *)(lVar8 + 0x460);
      if (lVar8 != 0) {
        lVar9 = UInputKeySelector::GetPrivateStaticClass();
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
          uVar6 = FWeakObjectPtr::Get(param_1);
          lVar9 = FUN_1422312c0(uVar6);
          if (lVar9 != 0) {
            lVar10 = FUN_14141f270();
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
              local_18 = local_28;
              plStack_10 = plStack_20;
              if (plStack_20 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
                UNLOCK();
                plVar11 = local_38;
              }
              cVar5 = (**(code **)(*plVar11 + 0x50))(plVar11,&local_18);
              if ((cVar5 == '\0') || (cVar5 = FUN_140bc27a0(lVar9), cVar5 == '\0')) {
                uVar6 = 0;
              }
              else {
                uVar6 = 1;
              }
              plVar11 = plStack_10;
              if (plStack_10 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_10 + 1;
                lVar9 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plStack_10)(plStack_10);
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
              FUN_14146d990(lVar8,uVar6);
            }
          }
        }
      }
    }
    plVar11 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_20 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plStack_20 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ce3e40 FUN_140ce3e40 body=365 status=ok
// SIG undefined FUN_140ce3e40(void)

void FUN_140ce3e40(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar2 = FWeakObjectPtr::IsValid();
  if (cVar2 == '\0') {
    return;
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar2 == '\0') {
    return;
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  lVar5 = lVar3 + 0x2a88;
  lVar4 = FWeakObjectPtr::Get(lVar5);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar3 + 0x2a90)) || (*(longlong *)(lVar3 + 0x2a98) == 0))
    goto LAB_140ce3f86;
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0x2a90) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(lVar5);
    if (lVar4 == 0) goto LAB_140ce3f86;
  }
  lVar5 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar3 = FUN_14139c4f0();
    lVar5 = lVar4;
    do {
      if (lVar5 == lVar3) {
        lVar5 = FUN_14139c4f0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) goto LAB_140ce3f89;
        break;
      }
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while (lVar5 != 0);
  }
LAB_140ce3f86:
  lVar4 = 0;
LAB_140ce3f89:
  lVar5 = FWeakObjectPtr::Get(param_1);
  *(longlong *)(lVar5 + 0xa70) = lVar4;
  return;
}



// FUNCTION 140ce3fb0 FUN_140ce3fb0 body=942 status=ok
// SIG undefined FUN_140ce3fb0(void)

void FUN_140ce3fb0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  wchar_t *pwVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  undefined4 *puVar12;
  uint uVar13;
  wchar_t *pwVar14;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  local_res10 = (undefined4)param_1[1];
  uStackX_14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar6 = FWeakObjectPtr::IsValid(&local_res10);
  pwVar14 = (wchar_t *)0x0;
  if (cVar6 != '\0') {
    lVar8 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar8 + 0xc);
    pwVar11 = pwVar14;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar13 = iVar1 >> 0x1f & 0xffff;
      uVar7 = iVar1 + uVar13;
      pwVar11 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18);
    }
    if ((*(uint *)(pwVar11 + 4) & 0x30000000) == 0) {
      bVar4 = true;
      goto LAB_140ce4047;
    }
  }
  bVar4 = false;
LAB_140ce4047:
  if ((bVar4) && (*(longlong *)(*param_1 + 0xa90) == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468509e4) &&
       (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
      uVar10 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar10,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
    if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      plVar9 = (longlong *)*param_1;
      iVar1 = *(int *)((longlong)plVar9 + 0xc);
      pwVar11 = pwVar14;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar13 = iVar1 >> 0x1f & 0xffff;
        uVar7 = iVar1 + uVar13;
        pwVar11 = (wchar_t *)
                  (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                  (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18);
      }
      if ((((*(uint *)(pwVar11 + 4) & 0x30000000) == 0) &&
          (lVar8 = (**(code **)(*plVar9 + 0x148))(plVar9), lVar8 != 0)) &&
         (*(char *)(*param_1 + 0xa98) == '\0')) {
        plVar9 = (longlong *)FName::FName(&local_res10,L"MenuStack",1);
        lVar8 = *param_1;
        local_res8 = 0;
        lVar2 = *plVar9;
        if (lVar2 == 0) {
          FUN_1417846f0(lVar8,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        uVar10 = FUN_142f2ab40();
        uVar10 = FUN_1417985e0(uVar10,lVar8,lVar2,0x40,0,0,0,0,0);
        *(undefined8 *)(*param_1 + 0xa90) = uVar10;
        if (*(longlong *)(*param_1 + 0xa90) != 0) {
          plVar9 = (longlong *)FUN_1422312c0();
          pwVar11 = pwVar14;
          if (plVar9 != (longlong *)0x0) {
            lVar8 = FUN_14141f270();
            if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
                lVar8 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              pwVar11 = (wchar_t *)(**(code **)(*plVar9 + 0x3c0))(plVar9);
            }
          }
          FUN_142ef15f0(*(undefined8 *)(*param_1 + 0xa90),*param_1,pwVar11);
          pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnUIMenuActivated",L"::");
          while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
            pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
            pwVar14 = pwVar5;
          }
          FName::FName(&local_res10,pwVar14 + 2,1);
          lVar8 = *param_1;
          lVar3 = CONCAT44(uStackX_14,local_res10);
          lVar2 = *(longlong *)(lVar8 + 0xa90);
          plVar9 = (longlong *)(lVar2 + 0x138);
          FWeakObjectPtr::operator=(&local_28,0);
          local_20 = 0;
          FWeakObjectPtr::operator=(&local_28,lVar8);
          local_res8 = 0;
          local_20 = lVar3;
          if ((lVar3 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_28), lVar8 != 0)) {
            UObject::FindFunction(lVar8,local_20);
          }
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
          iVar1 = *(int *)(lVar2 + 0x140);
          *(int *)(lVar2 + 0x140) = iVar1 + 1;
          if (*(int *)(lVar2 + 0x144) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar1);
          }
          puVar12 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar9);
          *puVar12 = local_28;
          puVar12[1] = local_24;
          *(longlong *)(puVar12 + 2) = local_20;
        }
      }
    }
  }
  return;
}



// FUNCTION 140ce4360 FUN_140ce4360 body=307 status=ok
// SIG undefined FUN_140ce4360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ce4360(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [80];
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1;
  uVar2 = 0;
  if (*(int *)(lVar1 + 0x60) != 0) {
    plVar4 = *(longlong **)(lVar1 + 0x50);
    if (*(longlong **)(lVar1 + 0x50) == (longlong *)0x0) {
      plVar4 = (longlong *)(lVar1 + 0x30);
    }
    if (plVar4 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 8))();
    }
  }
  (**(code **)(lVar1 + 0x20))(uVar2);
  lVar1 = *param_1;
  local_68[0] = AK::MemoryMgr::StartProfileThreadUsage;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  lVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_68);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar3,lVar1 + 0x20,0x50);
  if (*(int *)(lVar3 + 0x40) != 0) {
    plVar4 = *(longlong **)(lVar3 + 0x30);
    if (*(longlong **)(lVar3 + 0x30) == (longlong *)0x0) {
      plVar4 = (longlong *)(lVar3 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (*(longlong *)(lVar3 + 0x30) != 0) {
    FMemory::Free();
  }
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
  return;
}



// FUNCTION 140ce44a0 FUN_140ce44a0 body=229 status=ok
// SIG undefined FUN_140ce44a0(void)

bool FUN_140ce44a0(undefined4 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong local_18;
  longlong *local_10;
  
  lVar5 = FUN_1416f8720(*param_1);
  if (lVar5 != 0) {
    FUN_140ad4c90(lVar5);
    if (local_18 != 0) {
      LOCK();
      cVar4 = *(char *)(local_18 + 0x30);
      if (cVar4 == '\0') {
        *(char *)(local_18 + 0x30) = '\0';
        cVar4 = '\0';
      }
      UNLOCK();
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
      return '\x04' < cVar4;
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
  }
  return true;
}



// FUNCTION 140ce4590 FUN_140ce4590 body=618 status=ok
// SIG undefined FUN_140ce4590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140ce4590(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  ulonglong *puStack_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined1 local_c8 [16];
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
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*(int *)(*param_1 + 8) < 2) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_2,L"Trades cannot be accepted at this time.",L"CannotTradeMessage",
               L"GenericCannotTradeReasonCannotAccept");
  }
  else {
    lVar6 = FText::FromString(local_78);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"{0} cannot accept trades at this time.",L"CannotTradeMessage",
                       L"CannotTradeReasonCannotAccept");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_88,uVar7);
    local_60[0] = 4;
    FText::FText(local_50,lVar6);
    local_e8 = local_60;
    local_38 = '\x01';
    puStack_e0 = &local_30;
    local_d8 = *puVar8;
    local_d0 = puVar8[1];
    if (local_d0 != 0) {
      LOCK();
      *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
      UNLOCK();
    }
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8,&local_e8);
    uVar7 = FText::Format(local_b8,&local_d8,uVar7);
    FText::FText(param_2,uVar7);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_c8);
    if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_48 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    plVar4 = (longlong *)puVar8[1];
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
    plVar4 = *(longlong **)(lVar6 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_98 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140ce4850 FUN_140ce4850 body=66 status=ok
// SIG undefined FUN_140ce4850(void)

undefined8 * FUN_140ce4850(undefined8 *param_1,ulonglong param_2)

{
  FUN_140ce15b0(param_1 + 1);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140ce48a0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7ae62ba9a5361e85c320c1f6a219266f>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  <lambda_7ae62ba9a5361e85c320c1f6a219266f>::~<lambda_7ae62ba9a5361e85c320c1f6a219266f>(param_1 + 2)
  ;
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 140ce48f0 FUN_140ce48f0 body=65 status=ok
// SIG undefined FUN_140ce48f0(void)

undefined8 * FUN_140ce48f0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)(param_1 + 1));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140ce4940 `scalar_deleting_destructor' body=108 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7a02e06ca5db01d82e81cc92e1965566>_>::
_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 10) != 0) {
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 4;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 140ce49b0 FUN_140ce49b0 body=97 status=ok
// SIG undefined FUN_140ce49b0(void)

undefined8 * FUN_140ce49b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1444f7ea0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140ce4a20 FUN_140ce4a20 body=43 status=ok
// SIG undefined FUN_140ce4a20(void)

undefined8 * FUN_140ce4a20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 140ce4a50 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
ATTLBaseBossFishCharacter::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140ce1fb0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c80);
  }
  return param_1;
}



// FUNCTION 140ce4a90 FUN_140ce4a90 body=43 status=ok
// SIG undefined FUN_140ce4a90(void)

undefined8 * FUN_140ce4a90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1444f65e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140ce4ac0 FUN_140ce4ac0 body=43 status=ok
// SIG undefined FUN_140ce4ac0(void)

undefined8 * FUN_140ce4ac0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1444f65a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140ce4af0 FUN_140ce4af0 body=197 status=ok
// SIG undefined FUN_140ce4af0(void)

void FUN_140ce4af0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_1[0x389] != 0) {
    if (param_1[0x388] != 0) {
      FUN_14223d380(param_1[0x389],0);
      lVar1 = param_1[0x109];
      if (lVar1 != 0) {
        lVar3 = FUN_1413ffe00();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_1413f8900(lVar1,param_1[0x388],param_1[0x389]);
          param_1[0x388] = 0;
          param_1[0x389] = 0;
                    /* WARNING: Could not recover jumptable at 0x000140ce4b9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x260))(param_1);
          return;
        }
      }
    }
    FUN_14145d5e0(param_1);
  }
  return;
}



// FUNCTION 140ce4bc0 FUN_140ce4bc0 body=66 status=ok
// SIG undefined FUN_140ce4bc0(void)

void FUN_140ce4bc0(longlong param_1)

{
  FUN_1426f9080();
  FUN_140d16430(param_1);
  if (*(longlong *)(param_1 + 0xd50) != 0) {
    FUN_1412d27e0();
  }
  *(undefined4 *)(param_1 + 0x19f4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x19f8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x19fc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a00) = 0;
  FUN_140cf91d0(param_1);
  return;
}



// FUNCTION 140ce4c30 FUN_140ce4c30 body=122 status=ok
// SIG undefined FUN_140ce4c30(void)

int FUN_140ce4c30(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = iVar1 + param_2;
  if (*(int *)(param_1 + 0x4c) < iVar1 + param_2) {
    FUN_140d0d480(param_1,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar3 = param_1;
  }
  puVar4 = (undefined4 *)(lVar3 + (longlong)iVar1 * 0x14);
  if (param_2 != 0) {
    puVar2 = puVar4 + 4;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 5;
      *(undefined8 *)(puVar2 + -3) = 0;
      *(undefined8 *)(puVar2 + -1) = 0;
      puVar2 = puVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}



// FUNCTION 140ce4cb0 FUN_140ce4cb0 body=842 status=ok
// SIG undefined FUN_140ce4cb0(void)

void FUN_140ce4cb0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  
  lVar6 = *(longlong *)(param_2 + 0x50);
  if ((lVar6 != 0) && (lVar7 = param_1[0x109], lVar7 != 0)) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 != 0)) {
      local_res18[0] = 0;
      local_res10[0] = 0;
      FUN_142ffe0f0(lVar6,lVar7,local_res18,local_res10);
      local_58 = (longlong *)0x0;
      local_50 = 0;
      FUN_143013fe0(&local_58,lVar6,local_res10[0],lVar7,0,0,0,0);
      iVar3 = (int)local_50;
      uVar12 = (ulonglong)(int)local_50;
      if ((0 < (int)local_50) && (*local_58 != 0)) {
        if ((int)local_50 < 1) {
          iVar13 = 1 - (int)local_50;
          iVar3 = (int)local_50 + iVar13;
          local_50 = CONCAT44(local_50._4_4_,iVar3);
          if (local_50._4_4_ < iVar3) {
            TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(&local_58);
          }
          plVar9 = local_58 + uVar12 * 0xc;
          if (iVar13 != 0) {
            lVar6 = (longlong)plVar9 + 0x44;
            do {
              *(undefined8 *)(lVar6 + -0x24) = 0;
              *(undefined8 *)(lVar6 + -0x1c) = 0;
              *(undefined1 *)(lVar6 + -0x14) = 0;
              *(undefined8 *)(lVar6 + -0xc) = 0;
              *(undefined8 *)(lVar6 + -4) = 0;
              *(undefined8 *)(lVar6 + 4) = 0;
              *(undefined8 *)(lVar6 + 0xc) = 0;
              _guard_xfg_dispatch_icall_nop(plVar9,0,0x60);
              plVar9 = plVar9 + 0xc;
              *(undefined2 *)(lVar6 + 0x14) = 1;
              lVar6 = lVar6 + 0x60;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
        else if ((1 < (int)local_50) && (iVar13 = (int)local_50 + -1, iVar13 != 0)) {
          plVar9 = local_58 + 0x13;
          iVar10 = iVar13;
          do {
            if (plVar9[2] != 0) {
              FMemory::Free();
            }
            if (*plVar9 != 0) {
              FMemory::Free();
            }
            TArray<FNamedInterfaceDef,FDefaultAllocator>::
            ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar9 + -3);
            plVar9 = plVar9 + 0xc;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          iVar10 = ((int)local_50 - iVar13) + -1;
          if (iVar10 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (local_58 + 0xc,local_58 + (longlong)iVar3 * 0xc,(longlong)iVar10 * 0x60);
          }
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar13);
          TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(&local_58);
        }
        local_48 = (longlong *)0x0;
        local_40 = 0;
        FUN_143018ff0(&local_58,lVar4,&local_48,0);
        plVar9 = local_48 + (int)local_40;
        for (plVar8 = local_48; plVar8 != plVar9; plVar8 = plVar8 + 1) {
          plVar1 = (longlong *)*plVar8;
          if (plVar1 != (longlong *)0x0) {
            uVar5 = FUN_14301f8f0();
            lVar6 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
            if (lVar6 != 0) {
              lVar7 = FUN_14142bde0();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                FUN_140cf6fb0(param_1,lVar6,param_2);
              }
            }
            FUN_142227350(plVar1,0,1);
          }
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free(local_48);
        }
        uVar12 = local_50 & 0xffffffff;
      }
      if ((int)uVar12 != 0) {
        plVar9 = local_58 + 7;
        do {
          if (plVar9[2] != 0) {
            FMemory::Free();
          }
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar9 + -3);
          plVar9 = plVar9 + 0xc;
          uVar11 = (int)uVar12 - 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 != 0);
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140ce5000 FUN_140ce5000 body=414 status=ok
// SIG undefined FUN_140ce5000(void)

void FUN_140ce5000(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  
  if (*param_2 != 0) {
    lVar4 = FName::GetNames();
    if (((((-1 < (int)param_2[1]) && ((int)param_2[1] < *(int *)(lVar4 + 0x400))) &&
         (iVar3 = (int)param_2[1], uVar8 = iVar3 >> 0x1f & 0x3fff, uVar2 = iVar3 + uVar8,
         *(longlong *)
          (*(longlong *)(lVar4 + (longlong)((int)uVar2 >> 0xe) * 8) +
          (longlong)(int)((uVar2 & 0x3fff) - uVar8) * 8) != 0)) &&
        ((-1 < iVar3 && (iVar3 < *(int *)(lVar4 + 0x400))))) &&
       (uVar8 = (int)param_2[1] >> 0x1f & 0x3fff, uVar2 = (int)param_2[1] + uVar8,
       *(longlong *)
        (*(longlong *)(lVar4 + (longlong)((int)uVar2 >> 0xe) * 8) +
        (longlong)(int)((uVar2 & 0x3fff) - uVar8) * 8) != 0)) {
      lVar4 = param_2[1];
      lVar1 = *param_2;
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        lVar5 = FUN_141444e70();
        lVar6 = *(longlong *)(lVar1 + 0x28);
        if (lVar6 != 0) {
          while (lVar6 != lVar5) {
            lVar6 = *(longlong *)(lVar6 + 0x30);
            if (lVar6 == 0) {
              return;
            }
          }
          if (lVar4 != 0) {
            if (*(int *)(lVar1 + 0x38) != *(int *)(lVar1 + 100)) {
              lVar6 = *(longlong *)(lVar1 + 0x70);
              if (*(longlong *)(lVar1 + 0x70) == 0) {
                lVar6 = lVar1 + 0x68;
              }
              iVar3 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                                       (longlong)*(int *)(lVar1 + 0x78) - 1U) * 4);
              if (iVar3 != -1) {
                do {
                  plVar9 = (longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar3 * 0x18);
                  if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar3 * 0x18) == lVar4)
                  {
                    if (iVar3 != -1) goto LAB_140ce5173;
                    break;
                  }
                  iVar3 = (int)plVar9[2];
                } while (iVar3 != -1);
              }
            }
            plVar9 = (longlong *)0x0;
LAB_140ce5173:
            plVar7 = plVar9 + 1;
            if (plVar9 == (longlong *)0x0) {
              plVar7 = (longlong *)0x0;
            }
            if ((plVar7 != (longlong *)0x0) && (*plVar7 != 0)) {
              FUN_140ce4cb0(param_1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ce51b0 FUN_140ce51b0 body=108 status=ok
// SIG undefined FUN_140ce51b0(void)

void FUN_140ce51b0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  
  cVar4 = (**(code **)(*param_1 + 0x768))();
  if (cVar4 != '\0') {
    iVar2 = (int)param_1[0x224];
    *(int *)(param_1 + 0x224) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x1124) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x223,iVar2);
    }
    uVar3 = param_2[1];
    puVar1 = (undefined8 *)(param_1[0x223] + (longlong)iVar2 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar3;
  }
  return;
}



// FUNCTION 140ce5220 FUN_140ce5220 body=370 status=ok
// SIG undefined FUN_140ce5220(void)

void FUN_140ce5220(longlong param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((*(longlong *)(param_1 + 0x528) != 0) && (lVar4 = FUN_140cff230(), lVar4 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x1180);
    if (lVar2 == 0) {
      fVar8 = 0.5;
      fVar7 = 0.2;
    }
    else {
      fVar8 = *(float *)(lVar2 + 0x78);
      fVar7 = *(float *)(lVar2 + 0x7c);
    }
    lVar2 = *(longlong *)(param_1 + 0x130);
    if (lVar2 != 0) {
      lVar5 = UUGGameViewportClient::StaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (*(char *)(lVar2 + 0x2e8) == '\0')) {
        lVar2 = *(longlong *)(param_1 + 0x1180);
        if (lVar2 == 0) {
          fVar8 = 0.5;
          fVar7 = 0.2;
        }
        else {
          fVar8 = *(float *)(lVar2 + 0x80);
          fVar7 = *(float *)(lVar2 + 0x7c);
        }
      }
    }
    fVar1 = *(float *)(lVar4 + 0x6c);
    fVar6 = (float)(**(code **)(**(longlong **)(param_1 + 0x528) + 0x778))();
    fVar6 = fVar6 / fVar1;
    if (fVar6 <= fVar7) {
      fVar6 = fVar7;
    }
    param_2 = param_2 * (((fVar6 - fVar7) / (1.0 - fVar7)) * (1.0 - fVar8) + fVar8);
  }
  FUN_1426f9e40(param_1,param_2);
  return;
}



// FUNCTION 140ce53a0 FUN_140ce53a0 body=611 status=ok
// SIG undefined FUN_140ce53a0(void)

void FUN_140ce53a0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined **local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar6 = FUN_140cff230();
  if ((((lVar6 != 0) && (1 < *(int *)(param_2 + 8))) &&
      (*(longlong **)(param_2 + 0x20) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x20))(), cVar3 != '\0')) {
    iVar1 = *(int *)(lVar6 + 0x3d8);
    if (iVar1 < *(int *)(param_1 + 0xee4)) {
      *(int *)(lVar6 + 0x3d8) = iVar1 + 1;
      if (*(int *)(lVar6 + 0x3dc) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(lVar6 + 0x3d0,iVar1);
      }
      lVar8 = (longlong)iVar1 * 0x40 + *(longlong *)(lVar6 + 0x3d0);
      FString::FString(lVar8,param_2);
      *(undefined4 *)(lVar8 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined ***)(lVar8 + 0x18) = &PTR_FUN_143f73d18;
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(lVar8 + 0x28) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      *(undefined ***)(lVar8 + 0x18) = &PTR_FUN_143f740c8;
      *(undefined8 *)(lVar8 + 0x30) = 0;
      *(undefined8 *)(lVar8 + 0x38) = 0;
    }
    else {
      if (iVar1 < 1) {
        iVar4 = 0;
      }
      else {
        iVar4 = rand();
        iVar5 = (int)((float)iVar4 * 3.051851e-05 * (float)iVar1);
        iVar4 = iVar1 + -1;
        if (iVar5 <= iVar1 + -1) {
          iVar4 = iVar5;
        }
      }
      FCapturedPropSegment::FCapturedPropSegment
                ((longlong)iVar4 * 0x40 + *(longlong *)(lVar6 + 0x3d0),param_2);
      if (*(int *)(param_1 + 0xee4) < *(int *)(lVar6 + 0x3d8)) {
        lVar2 = *(longlong *)(lVar6 + 0x3d0);
        lVar7 = (longlong)*(int *)(lVar6 + 0x3d8) * 0x40;
        lVar8 = *(longlong *)(lVar7 + lVar2 + -0x40);
        *(undefined8 *)(lVar7 + lVar2 + -0x40) = 0;
        *(undefined8 *)(lVar7 + lVar2 + -0x38) = 0;
        local_28 = *(undefined8 *)(lVar7 + lVar2 + -0x20);
        local_20 = *(longlong *)(lVar7 + lVar2 + -0x18);
        if (local_20 != 0) {
          LOCK();
          *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
          UNLOCK();
        }
        iVar1 = *(int *)(lVar6 + 0x3d8);
        local_18 = 0;
        local_10 = 0;
        lVar2 = *(longlong *)(lVar6 + 0x3d0);
        lVar7 = (longlong)iVar1 * 0x40;
        local_30 = &PTR_FUN_143f740c8;
        FUN_1404bf980(lVar2 + -0x28 + lVar7);
        if (*(longlong *)(lVar7 + -0x40 + lVar2) != 0) {
          FMemory::Free();
        }
        iVar4 = *(int *)(lVar6 + 0x3d8);
        iVar5 = (iVar4 - (iVar1 + -1)) + -1;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar6 + 0x3d0) + -0x40 + lVar7),
                     (void *)((longlong)iVar1 * 0x40 + *(longlong *)(lVar6 + 0x3d0)),
                     (longlong)iVar5 << 6);
          iVar4 = *(int *)(lVar6 + 0x3d8);
        }
        *(int *)(lVar6 + 0x3d8) = iVar4 + -1;
        FUN_1404bf980(&local_30);
        if (lVar8 != 0) {
          FMemory::Free();
        }
      }
    }
    FUN_14172cc40(lVar6,1);
  }
  return;
}



// FUNCTION 140ce5610 FUN_140ce5610 body=430 status=ok
// SIG undefined FUN_140ce5610(void)

void FUN_140ce5610(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  if (param_2 != (longlong *)0x0) {
    uVar5 = FUN_14301f8f0();
    lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
    if ((lVar6 != 0) &&
       ((*(longlong *)(lVar6 + 0x208) == 0 ||
        (*(longlong *)(*(longlong *)(lVar6 + 0x208) + 0x18) != DAT_1468708c0)))) {
      iVar4 = *(int *)(param_1 + 0xf00);
      if (iVar4 < *(int *)(param_1 + 0xee0)) {
        iVar4 = *(int *)(param_1 + 0xf00);
        *(int *)(param_1 + 0xf00) = iVar4 + 1;
        if (*(int *)(param_1 + 0xf04) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xef8,iVar4);
        }
        *(longlong **)(*(longlong *)(param_1 + 0xef8) + (longlong)iVar4 * 8) = param_2;
        return;
      }
      lVar7 = 0;
      if (*(longlong *)(lVar6 + 0x210) != 0) {
        lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x210) + 0xb8);
      }
      iVar1 = *(int *)(lVar6 + 0x1fc);
      if (lVar7 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(lVar7 + 0x88);
      }
      iVar10 = 0;
      if (0 < iVar4) {
        lVar6 = 0;
        do {
          plVar2 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0xef8));
          if (plVar2 != (longlong *)0x0) {
            FUN_14301f8f0();
            lVar7 = (**(code **)(*plVar2 + 0x628))();
            if (lVar7 == 0) {
              lVar8 = 0;
              iVar4 = 0;
            }
            else if (*(longlong *)(lVar7 + 0x210) == 0) {
              iVar4 = *(int *)(lVar7 + 0x1fc);
              lVar8 = 0;
            }
            else {
              lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x210) + 0xb8);
              iVar4 = *(int *)(lVar7 + 0x1fc);
            }
            if (lVar8 == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(lVar8 + 0x88);
            }
            if ((iVar3 <= iVar9) || (iVar4 <= iVar1)) {
              *(longlong **)(*(longlong *)(param_1 + 0xef8) + (longlong)iVar10 * 8) = param_2;
              iVar4 = *(int *)(param_1 + 0xf00);
              break;
            }
          }
          iVar4 = *(int *)(param_1 + 0xf00);
          iVar10 = iVar10 + 1;
          lVar6 = lVar6 + 8;
        } while (iVar10 < iVar4);
      }
      if (*(int *)(param_1 + 0xee0) < iVar4) {
        *(int *)(param_1 + 0xf00) = *(int *)(param_1 + 0xf00) + -1;
      }
    }
  }
  return;
}



// FUNCTION 140ce57c0 thunk_FUN_14145e7d0 body=5 status=ok
// SIG undefined thunk_FUN_14145e7d0(void)

void thunk_FUN_14145e7d0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStackX_8;
  
  lVar1 = *param_1;
  uStackX_8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146896af0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStackX_8);
  return;
}



// FUNCTION 140ce57d0 thunk_FUN_14145e810 body=5 status=ok
// SIG undefined thunk_FUN_14145e810(void)

void thunk_FUN_14145e810(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStackX_8;
  
  lVar1 = *param_1;
  uStackX_8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146896af8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStackX_8);
  return;
}



// FUNCTION 140ce57e0 thunk_FUN_14145e850 body=5 status=ok
// SIG undefined thunk_FUN_14145e850(void)

void thunk_FUN_14145e850(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStackX_8;
  
  lVar1 = *param_1;
  uStackX_8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146896b00);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStackX_8);
  return;
}



// FUNCTION 140ce57f0 thunk_FUN_14145e8d0 body=5 status=ok
// SIG undefined thunk_FUN_14145e8d0(void)

void thunk_FUN_14145e8d0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStackX_8;
  
  lVar1 = *param_1;
  uStackX_8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146896b10);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStackX_8);
  return;
}



// FUNCTION 140ce5800 FUN_140ce5800 body=370 status=ok
// SIG undefined FUN_140ce5800(void)

void FUN_140ce5800(longlong param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((*(longlong *)(param_1 + 0x528) != 0) && (lVar4 = FUN_140cff230(), lVar4 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x1180);
    if (lVar2 == 0) {
      fVar8 = 0.5;
      fVar7 = 0.2;
    }
    else {
      fVar8 = *(float *)(lVar2 + 0x78);
      fVar7 = *(float *)(lVar2 + 0x7c);
    }
    lVar2 = *(longlong *)(param_1 + 0x130);
    if (lVar2 != 0) {
      lVar5 = UUGGameViewportClient::StaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (*(char *)(lVar2 + 0x2e8) == '\0')) {
        lVar2 = *(longlong *)(param_1 + 0x1180);
        if (lVar2 == 0) {
          fVar8 = 0.5;
          fVar7 = 0.2;
        }
        else {
          fVar8 = *(float *)(lVar2 + 0x80);
          fVar7 = *(float *)(lVar2 + 0x7c);
        }
      }
    }
    fVar1 = *(float *)(lVar4 + 0x6c);
    fVar6 = (float)(**(code **)(**(longlong **)(param_1 + 0x528) + 0x778))();
    fVar6 = fVar6 / fVar1;
    if (fVar6 <= fVar7) {
      fVar6 = fVar7;
    }
    param_2 = param_2 * (((fVar6 - fVar7) / (1.0 - fVar7)) * (1.0 - fVar8) + fVar8);
  }
  FUN_1426fa620(param_1,param_2);
  return;
}



// FUNCTION 140ce5980 FUN_140ce5980 body=749 status=ok
// SIG undefined FUN_140ce5980(void)

undefined8 FUN_140ce5980(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  wchar_t **ppwVar2;
  void *pvVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined2 *puVar10;
  wchar_t *pwVar11;
  int iVar12;
  longlong *plVar13;
  int *piVar14;
  undefined8 uVar15;
  wchar_t *_Src;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  wchar_t *_Source;
  longlong lVar20;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  wchar_t *pwVar19;
  
  pvVar3 = (void *)*param_2;
  local_30 = *(int *)(param_2 + 1);
  lVar17 = (longlong)local_30;
  pwVar19 = (wchar_t *)0x0;
  iVar7 = 0;
  local_38 = (wchar_t *)0x0;
  iVar12 = 0;
  pwVar11 = pwVar19;
  if (local_30 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    pwVar11 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,pvVar3,lVar17 * 2);
  }
  iVar16 = local_30;
  lVar17 = (**(code **)(*param_1 + 0x148))(param_1);
  _Src = pwVar11;
  if ((lVar17 == 0) || (lVar20 = *(longlong *)(lVar17 + 400), lVar20 == 0)) goto LAB_140ce5b63;
  lVar8 = FUN_14141f270();
  if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
      != lVar8 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (((!bVar4) || (cVar5 = FUN_140bc2c90(lVar20), cVar5 == '\0')) ||
     (1.0 <= *(float *)(lVar17 + 0x790) - *(float *)(param_1 + 0x2a3))) goto LAB_140ce5b63;
  iVar9 = *(int *)(param_2 + 1) + -5;
  if (*(int *)(param_2 + 1) == 0) {
    iVar9 = -4;
  }
  if (iVar9 < 8) {
    iVar6 = 8;
  }
  else {
    iVar6 = 0x40;
    if (iVar9 < 0x40) {
      iVar6 = iVar9;
    }
  }
  if (iVar16 == 0) {
    _Source = L"";
  }
  else {
    iVar12 = iVar16 + -1;
    _Source = pwVar11;
  }
  local_38 = (wchar_t *)0x0;
  local_2c = 0;
  if (iVar6 < 0) {
LAB_140ce5ad3:
    iVar16 = 0;
  }
  else {
    iVar7 = iVar12;
    if (iVar6 < iVar12) {
      iVar7 = iVar6;
    }
    iVar16 = iVar7 + 1;
    if (iVar7 == 0) goto LAB_140ce5ad3;
  }
  _Src = pwVar19;
  local_30 = iVar16;
  if ((0 < iVar16) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar16 = local_30, _Src = local_38
     , 0 < local_30)) {
    wcsncpy(local_38,_Source,(longlong)iVar7);
    _Src[iVar7] = L'\0';
  }
  if (pwVar11 != (wchar_t *)0x0) {
    FMemory::Free(pwVar11);
  }
  plVar13 = param_1 + 0x2a4;
  do {
    pwVar11 = L"";
    if (iVar16 != 0) {
      pwVar11 = _Src;
    }
    if ((int)plVar13[1] == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*plVar13;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,pwVar11);
    if (iVar7 == 0) {
      uVar15 = 0;
      goto LAB_140ce5c3c;
    }
    uVar18 = (int)pwVar19 + 1;
    pwVar19 = (wchar_t *)(ulonglong)uVar18;
    plVar13 = plVar13 + 2;
  } while (uVar18 < 4);
LAB_140ce5b63:
  piVar14 = (int *)((longlong)param_1 + 0x155c);
  lVar20 = 3;
  do {
    piVar1 = piVar14 + -3;
    if (piVar1 != piVar14 + -7) {
      iVar7 = piVar14[-5];
      pvVar3 = *(void **)(piVar14 + -7);
      piVar14[-1] = iVar7;
      if ((iVar7 == 0) && (*piVar14 == 0)) {
        *piVar14 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(piVar1,iVar7);
        _guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar7 * 2);
      }
    }
    lVar20 = lVar20 + -1;
    piVar14 = piVar14 + -4;
  } while (0 < lVar20);
  ppwVar2 = (wchar_t **)(param_1 + 0x2a4);
  if (ppwVar2 != &local_38) {
    *(int *)(param_1 + 0x2a5) = iVar16;
    if ((iVar16 == 0) && (*(int *)((longlong)param_1 + 0x152c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x152c) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppwVar2,iVar16);
      _guard_xfg_dispatch_icall_nop(*ppwVar2,_Src,(longlong)iVar16 * 2);
    }
  }
  if (lVar17 != 0) {
    *(undefined4 *)(param_1 + 0x2a3) = *(undefined4 *)(lVar17 + 0x790);
  }
  uVar15 = 1;
LAB_140ce5c3c:
  if (_Src != (wchar_t *)0x0) {
    FMemory::Free(_Src);
  }
  return uVar15;
}



// FUNCTION 140ce5c90 FUN_140ce5c90 body=2663 status=ok
// SIG undefined FUN_140ce5c90(void)

void FUN_140ce5c90(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  uint local_res8;
  undefined4 local_resc;
  ulonglong local_res10;
  longlong *local_res18;
  char local_res20;
  char local_88;
  longlong local_80;
  ulonglong local_78;
  undefined8 *local_70;
  int local_68;
  undefined1 local_60 [32];
  
  local_80 = param_1[0x12e];
  uVar18 = 0;
  if (local_80 == 0) {
LAB_140ce5cee:
    local_80 = 0;
  }
  else {
    lVar8 = FUN_141410f00();
    if ((*(int *)(*(longlong *)(local_80 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_80 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140ce5cee;
  }
  lVar8 = param_1[0x12e];
  plVar15 = (longlong *)param_1[0x132];
  local_res18 = plVar15;
  if ((lVar8 != 0) &&
     (((*(char *)(lVar8 + 0x30) != '\0' || (*(char *)(lVar8 + 0x31) != '\0')) &&
      (FUN_1414602d0(param_1,4), plVar15 != (longlong *)0x0)))) {
    if ((char)plVar15[0x1d8] == '\x03') {
      lVar8 = plVar15[0x21c];
      if (lVar8 != 0) {
        uVar9 = FText::FText(local_60);
        FUN_140ad1be0(lVar8,1,uVar9,0);
      }
    }
    else {
      cVar3 = (**(code **)(*plVar15 + 0x950))(plVar15);
      if (((cVar3 != '\0') && (cVar3 = FUN_140cfdb70(param_1), cVar3 == '\0')) &&
         (plVar15[0x21c] != 0)) {
        FUN_140ad0d20(plVar15[0x21c],1);
      }
    }
    lVar8 = FUN_1413ffe00();
    if ((*(int *)(plVar15[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar15[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((char)param_1[0x25] == '\x03') {
        FUN_140e26ad0(plVar15);
      }
      if (plVar15[0x596] != 0) {
        lVar10 = FUN_142e20fc0();
        for (lVar8 = plVar15[0x596]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
          if (lVar8 == lVar10) {
            if (((plVar15[0x596] != 0) && (plVar15[0x54f] != 0)) && (plVar15[0x550] != 0)) {
              piVar1 = (int *)(plVar15[0x550] + 8);
              LOCK();
              iVar7 = *piVar1;
              if (iVar7 == 0) {
                *piVar1 = 0;
                iVar7 = 0;
              }
              UNLOCK();
              if (0 < iVar7) {
                uVar9 = FUN_142e27720();
                lVar8 = (**(code **)(*plVar15 + 0x628))(plVar15,uVar9);
                if (lVar8 != 0) {
                  FUN_142c84570(lVar8,plVar15[0x596]);
                }
              }
            }
            break;
          }
        }
      }
      if (((*(char *)(param_1[0x12e] + 0x34) != '\0') &&
          (FUN_140e1f8f0(plVar15), param_1[0x152] != 0)) && (lVar8 = FUN_140cdde20(), lVar8 != 0)) {
        FUN_1411b6c80(lVar8,1);
      }
    }
  }
  FUN_142dc56a0(param_1);
  if (((char)param_1[0x25] == '\x03') &&
     (cVar3 = APlayerController::IsPrimaryPlayer(param_1), cVar3 != '\0')) {
    if ((param_1[0x12e] == 0) ||
       ((((int)param_1[0x12d] < 1 ||
         (lVar8 = *(longlong *)(param_1[300] + -8 + (longlong)(int)param_1[0x12d] * 8), lVar8 == 0))
        || (*(char *)(lVar8 + 0x32) == '\0')))) {
      lVar10 = param_1[0x29e];
      lVar8 = lVar10 + (longlong)(int)param_1[0x29f] * 8;
      for (; lVar10 != lVar8; lVar10 = lVar10 + 8) {
        cVar3 = FWeakObjectPtr::IsValid(lVar10);
        if (cVar3 != '\0') {
          plVar12 = (longlong *)FWeakObjectPtr::Get(lVar10);
          (**(code **)(*plVar12 + 0x310))(plVar12,0);
        }
      }
      *(undefined4 *)(param_1 + 0x29f) = 0;
      if (*(int *)((longlong)param_1 + 0x14fc) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x29e,0);
      }
    }
    else {
      uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar8 = FUN_14126dac0(uVar9);
      if (lVar8 != 0) {
        FUN_14126dcc0(lVar8,&local_70);
        uVar11 = (ulonglong)((longlong)(local_70 + local_68) + (7 - (longlong)local_70)) >> 3;
        if (local_70 + local_68 < local_70) {
          uVar11 = uVar18;
        }
        if (uVar11 != 0) {
          plVar12 = param_1 + 0x29e;
          puVar17 = local_70;
          do {
            (**(code **)(*(longlong *)*puVar17 + 0x310))((longlong *)*puVar17,1);
            FWeakObjectPtr::operator=(&local_res8,*puVar17);
            lVar8 = *plVar12;
            lVar13 = param_1[0x29f];
            for (lVar10 = lVar8; lVar10 != (longlong)(int)lVar13 * 8 + lVar8; lVar10 = lVar10 + 8) {
              cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar10,&local_res8);
              if (cVar3 != '\0') {
                if ((int)(lVar10 - lVar8 >> 3) != -1) goto LAB_140ce600c;
                break;
              }
            }
            iVar7 = (int)param_1[0x29f];
            *(int *)(param_1 + 0x29f) = iVar7 + 1;
            if (*(int *)((longlong)param_1 + 0x14fc) < iVar7 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar12,iVar7);
            }
            lVar8 = *plVar12;
            *(uint *)(lVar8 + (longlong)iVar7 * 8) = local_res8;
            *(undefined4 *)(lVar8 + (longlong)iVar7 * 8 + 4) = local_resc;
LAB_140ce600c:
            puVar17 = puVar17 + 1;
            uVar18 = uVar18 + 1;
            plVar15 = local_res18;
          } while (uVar18 != uVar11);
        }
        if (local_70 != (undefined8 *)0x0) {
          FMemory::Free(local_70);
        }
      }
    }
  }
  uVar16 = 0;
  cVar3 = '\0';
  cVar6 = '\0';
  uVar18 = local_res10 >> 8;
  local_res10 = local_res10 & 0xffffffffffffff00;
  local_res20 = param_1[0x12e] != 0;
  uVar11 = (ulonglong)local_res18 >> 8;
  local_res18 = (longlong *)((ulonglong)local_res18 & 0xffffffffffffff00);
  local_88 = '\0';
  uVar14 = local_res8 >> 8;
  local_res8 = local_res8 & 0xffffff00;
  cVar5 = '\0';
  local_78 = 0;
  if (local_80 == 0) {
    lVar8 = 0;
  }
  else {
    local_88 = *(char *)(local_80 + 0x46);
    cVar3 = *(char *)(local_80 + 0x40);
    cVar6 = *(char *)(local_80 + 0x41);
    lVar8 = *(longlong *)(local_80 + 0x50);
    local_res10 = CONCAT71((int7)uVar18,*(undefined1 *)(local_80 + 0x42));
    local_res20 = *(char *)(local_80 + 0x43);
    local_res18 = (longlong *)CONCAT71((int7)uVar11,*(undefined1 *)(local_80 + 0x44));
    if ((*(char *)(local_80 + 0x34) == '\0') ||
       (local_res8 = CONCAT31((int3)uVar14,1), *(char *)(local_80 + 0x60) == '\0')) {
      local_res8 = local_res8 & 0xffffff00;
    }
    cVar5 = *(char *)(local_80 + 0x31);
    if (*(char *)(local_80 + 0x47) != '\0') {
      uVar16 = *(uint *)(local_80 + 0x48);
    }
  }
  if (cVar5 != (char)param_1[0x288]) {
    if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) ||
       (cVar4 = (**(code **)(*param_1 + 0x768))(param_1), cVar4 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined1 *)(param_1 + 0x288) = 0;
      cVar4 = FUN_1407c3030(param_1 + 0x20d);
      if (cVar4 == '\0') {
        if ((param_1[0x30a] == 0) || (cVar4 = AOCFarmedTile::IsHighlighted(), cVar4 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      else {
        bVar2 = true;
      }
      *(char *)(param_1 + 0x288) = cVar5;
      if (bVar2) {
        uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar10 = FUN_140e4ba40(uVar9);
        if (lVar10 != 0) {
          FUN_140e5a0a0(lVar10);
        }
      }
    }
  }
  cVar5 = FUN_142dafb10(param_1 + 0x1e6,&DAT_14686e018);
  if (cVar3 != cVar5) {
    local_78 = DAT_14686e018;
    if (cVar3 == '\0') {
      FUN_142dbb5d0(param_1 + 0x1e6,&local_78);
      FUN_140cfb650(param_1);
    }
    else {
      FUN_142dafbc0();
    }
  }
  cVar3 = FUN_142dafb10(param_1 + 0x2ac,&DAT_14686e018);
  if (cVar6 != cVar3) {
    if (cVar6 == '\0') {
      FUN_142dbb5d0(param_1 + 0x2ac,&DAT_14686e018);
    }
    else {
      FUN_142dafbc0();
    }
  }
  cVar3 = FUN_142dafb10(param_1 + 0x2bf,&DAT_14686e018);
  if ((char)local_res10 != cVar3) {
    if ((char)local_res10 == '\0') {
      FUN_142dbb5d0(param_1 + 0x2bf,&DAT_14686e018);
    }
    else {
      FUN_142dafbc0();
    }
  }
  if (plVar15 == (longlong *)0x0) {
    lVar10 = (**(code **)(*param_1 + 0x690))(param_1);
    if (lVar10 != 0) {
      lVar13 = FUN_14148cad0();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (*(longlong *)(lVar10 + 0x6a0) != 0)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_14686e258) &&
           (_Init_thread_header(&DAT_14686e258), DAT_14686e258 == -1)) {
          FName::FName(&DAT_14686e250,L"CinematicMode",1);
          _Init_thread_footer(&DAT_14686e258);
        }
        if (param_1[0x12e] == 0) {
          uVar9 = 0;
        }
        else {
          cVar3 = (**(code **)(*param_1 + 2000))(param_1);
          if (cVar3 == '\0') goto LAB_140ce63fc;
          uVar9 = 1;
        }
        FUN_140968120(*(undefined8 *)(lVar10 + 0x6a0),uVar9,DAT_14686e250);
      }
    }
  }
  else {
    uVar14 = *(uint *)((longlong)param_1 + 0x1444);
    if (uVar16 != uVar14) {
      if ((~uVar16 & uVar14) != 0) {
        (**(code **)(plVar15[0x1b1] + 0x108))(plVar15 + 0x1b1,DAT_14686e018,~uVar16 & uVar14,0);
        uVar14 = *(uint *)((longlong)param_1 + 0x1444);
      }
      if ((~uVar14 & uVar16) != 0) {
        (**(code **)(plVar15[0x1b1] + 0x100))(plVar15 + 0x1b1,DAT_14686e018,~uVar14 & uVar16,1,0,0);
      }
      *(uint *)((longlong)param_1 + 0x1444) = uVar16;
    }
    cVar3 = (char)local_res18;
    if ((char)local_res18 != *(char *)((longlong)param_1 + 0x1441)) {
      FUN_140c5e130(plVar15,(ulonglong)local_res18 & 0xff,DAT_14686e018);
      *(char *)((longlong)param_1 + 0x1441) = cVar3;
    }
  }
LAB_140ce63fc:
  if ((lVar8 != param_1[0x289]) && (lVar10 = param_1[0xa5], lVar10 != 0)) {
    lVar13 = FUN_142fd5420();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_res10 = 0;
      if (lVar8 != 0) {
        FUN_142fccb00(lVar10,lVar8,0xbf800000,0);
      }
      local_res10 = 0;
      if (param_1[0x289] != 0) {
        FUN_142fcc0b0(lVar10,param_1[0x289],0xbf800000,0);
      }
      param_1[0x289] = lVar8;
    }
  }
  lVar8 = FUN_1422312c0(param_1);
  if (lVar8 != 0) {
    lVar10 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((local_80 != 0) && (*(char *)(local_80 + 0x30) != '\0')) {
        FUN_140be7490(lVar8);
      }
      goto LAB_140ce6517;
    }
  }
  lVar8 = 0;
LAB_140ce6517:
  cVar3 = local_res20;
  if ((((local_res20 == '\0') || (lVar8 == 0)) || (iVar7 = FUN_14046e5c0(lVar8), 1 < iVar7)) ||
     ((cVar6 = FUN_140bc2c90(lVar8), cVar6 != '\0' ||
      (cVar6 = FUN_1427101e0(param_1), cVar6 == '\0')))) {
    FUN_14145e530(param_1,cVar3);
  }
  if (((local_80 != 0) && (*(longlong *)(local_80 + 0x58) != 0)) && ((char)param_1[0x25] == '\x03'))
  {
    FUN_14145e2c0(param_1,local_80);
  }
  if ((((char)local_res8 != '\0') && (lVar8 != 0)) &&
     (lVar8 = UGameInstance::GetGameViewportClient(lVar8), lVar8 != 0)) {
    lVar10 = AReplicationGraphDebugActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140cdcc80(lVar8);
    }
  }
  if (((local_80 != 0) && (*(char *)(local_80 + 0x45) != '\0')) &&
     (cVar3 = APlayerController::IsPrimaryPlayer(param_1), cVar3 != '\0')) {
    uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar8 = FUN_140b5b810(uVar9);
    if (lVar8 != 0) {
      FUN_140b6d820(lVar8,1);
    }
  }
  if ((char)param_1[0x25] == '\x03') {
    uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar8 = FUN_140b5b830(uVar9);
    if ((lVar8 != 0) && (local_88 != *(char *)(lVar8 + 0x68))) {
      if (local_88 == '\0') {
        FUN_140b75d20(lVar8);
      }
      else {
        lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar10 != 0) {
          uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
          lVar10 = UWorld::GetGameState<APVPGameState>(uVar9);
          if (lVar10 != 0) {
            FUN_140b5f1a0(lVar8,lVar10);
          }
        }
      }
    }
  }
  local_res10 = param_1[0x12e];
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x360,&local_res10);
  return;
}



// FUNCTION 140ce6700 FUN_140ce6700 body=358 status=ok
// SIG undefined FUN_140ce6700(void)

undefined8 FUN_140ce6700(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 local_res8 [2];
  undefined4 local_res20 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar4 = *(longlong *)(param_1 + 0x1248);
  if (lVar4 != 0) {
    lVar5 = *param_2;
    if ((lVar5 == DAT_1469ea408) || (lVar5 == DAT_1469ea420)) {
      local_c = *param_3;
      local_14 = *(undefined4 *)(lVar4 + 0xf8);
      local_10 = *(undefined4 *)(lVar4 + 0xf4);
      FUN_140677ab0(&local_c,&local_10,&local_14);
      *param_3 = extraout_XMM0_Da;
      plVar6 = (longlong *)param_2[2];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
      return 1;
    }
    if ((lVar5 == DAT_1469ea3d8) || (lVar5 == DAT_1469ea3f0)) {
      local_18 = *param_3;
      local_res8[0] = *(undefined4 *)(lVar4 + 0xf0);
      local_res20[0] = *(undefined4 *)(lVar4 + 0xec);
      uVar7 = FUN_140677ab0(&local_18,local_res20,local_res8);
      *param_3 = uVar7;
      FKey::~FKey(param_2);
      return 1;
    }
  }
  plVar6 = (longlong *)param_2[2];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  return 0;
}



// FUNCTION 140ce6870 FUN_140ce6870 body=3718 status=ok
// SIG undefined FUN_140ce6870(void)

void FUN_140ce6870(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  undefined4 *puVar22;
  char *pcVar23;
  undefined1 *puVar24;
  longlong *plVar25;
  undefined1 *puVar26;
  undefined4 *puVar27;
  char *pcVar28;
  float fVar29;
  float fVar30;
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  longlong local_c0;
  longlong local_b8;
  longlong local_a8;
  longlong local_98;
  longlong local_88;
  longlong local_78;
  
  lVar10 = FUN_140cff230();
  if (lVar10 != 0) {
    lVar13 = 0;
    local_res18 = lVar10;
    if (param_1[0x193] != 0) {
      lVar11 = FUN_1422312c0(param_1);
      if (lVar11 != 0) {
        lVar12 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          *(undefined1 *)(lVar11 + 0x9b8) = 1;
          lVar13 = lVar11;
        }
      }
      FUN_140e17030(param_1[0x193],lVar10 + 0x508,0,0);
      if (lVar13 != 0) {
        *(undefined1 *)(lVar13 + 0x9b8) = 0;
      }
    }
    lVar13 = param_1[0x18b];
    if (lVar13 != 0) {
      local_d8 = 0;
      local_d0 = 0;
      if (0 < *(int *)(lVar10 + 0x368)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_d8);
      }
      puVar22 = *(undefined4 **)(lVar10 + 0x360);
      puVar27 = puVar22 + (longlong)*(int *)(lVar10 + 0x368) * 0xc;
      for (; puVar22 != puVar27; puVar22 = puVar22 + 0xc) {
        lVar11 = FUN_140d3bc00(puVar22);
        uVar5 = local_d0;
        if (lVar11 != 0) {
          lVar12 = (longlong)(int)local_d0;
          iVar18 = (int)local_d0 + 1;
          local_d0 = CONCAT44(local_d0._4_4_,iVar18);
          if (local_d0._4_4_ < iVar18) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_d8,uVar5 & 0xffffffff);
          }
          FUN_142dc1880(lVar12 * 0x10 + local_d8,lVar11,*puVar22);
        }
      }
      FUN_142dc4900(lVar13,&local_d8);
      if (local_d8 != 0) {
        FMemory::Free();
      }
    }
    *(undefined4 *)(param_1 + 0x294) = 0xbf800000;
    FUN_140cf6690(param_1);
    FUN_140d11bd0(param_1);
    lVar13 = *param_1;
    cVar6 = FUN_142d84470(lVar10);
    (**(code **)(lVar13 + 0xc08))(param_1,cVar6 == '\0');
    cVar6 = (**(code **)(*param_1 + 0x768))(param_1);
    if ((cVar6 != '\0') && (cVar6 = APlayerController::IsPrimaryPlayer(param_1), cVar6 != '\0')) {
      lVar13 = FUN_1405c6c00();
      lVar11 = FUN_140cff230(param_1);
      if ((DAT_1468536c6 != '\0') || (lVar12 = DAT_1468536c8, DAT_1468536c5 == '\0')) {
        lVar12 = 0;
      }
      if (((lVar11 != 0) && (lVar13 != 0)) && (lVar12 != 0)) {
        cVar6 = *(char *)(lVar11 + 0x68);
        if (cVar6 == '\0') {
          uVar15 = 1;
        }
        else if (cVar6 == '\x02') {
          uVar15 = 3;
        }
        else if (cVar6 == '\x03') {
          uVar15 = 4;
        }
        else if (cVar6 == '\x04') {
          uVar15 = 2;
        }
        else if (cVar6 == '\x05') {
          uVar15 = 5;
        }
        else {
          uVar15 = 0;
        }
        FUN_1405aa900(lVar12,uVar15);
      }
    }
    FUN_140d12d80(param_1);
    lVar13 = FUN_140cff230(param_1);
    if (lVar13 != 0) {
      *(undefined1 *)((longlong)param_1 + 0x6cc) = *(undefined1 *)(lVar13 + 0x32);
    }
    lVar13 = FUN_140cff230(param_1);
    if (lVar13 != 0) {
      *(undefined1 *)((longlong)param_1 + 0x6cd) = *(undefined1 *)(lVar13 + 0x33);
    }
    lVar13 = FUN_140cff230(param_1);
    if (lVar13 != 0) {
      fVar1 = *(float *)(param_1 + 0x28a);
      fVar30 = *(float *)((longlong)param_1 + 0x1454);
      if (*(char *)(lVar13 + 0x40) == '\0') {
        lVar13 = FUN_14178ca30(param_1);
        if (lVar13 != 0) {
          lVar11 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            param_1[0x28a] = *(longlong *)(lVar13 + 0x1450);
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x28a) = 0x3f000000;
        *(undefined4 *)((longlong)param_1 + 0x1454) = 0x3f000000;
      }
      if ((fVar1 == *(float *)(param_1 + 0x28a)) &&
         (fVar30 == *(float *)((longlong)param_1 + 0x1454))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x11c);
      }
      if ((char)param_1[0x25] != '\x03') {
        FUN_141460d40(param_1,param_1[0x28a]);
      }
    }
    FUN_140d196f0(param_1);
    cVar6 = FUN_141651650();
    if ((((cVar6 == '\0') && (cVar6 = APlayerController::IsPrimaryPlayer(param_1), cVar6 != '\0'))
        && (cVar6 = (**(code **)(*param_1 + 0x768))(param_1), cVar6 != '\0')) &&
       ((lVar13 = FUN_140cff230(param_1), lVar13 != 0 &&
        (lVar11 = FUN_1422312c0(param_1), lVar11 != 0)))) {
      lVar12 = FUN_142e4e4a0();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        *(undefined1 *)(lVar11 + 200) = *(undefined1 *)(lVar13 + 0x43);
      }
    }
    lVar13 = FUN_140cff230(param_1);
    if ((lVar13 != 0) &&
       (*(undefined1 *)((longlong)param_1 + 0xaa9) = *(undefined1 *)(lVar13 + 0x180),
       (char)param_1[0x25] != '\x03')) {
      FUN_141460b80(param_1);
    }
    lVar13 = FUN_140cff230(param_1);
    if (lVar13 != 0) {
      uVar8 = *(uint *)(lVar13 + 0x184);
      FUN_140d120d0(param_1,uVar8 & 0xff);
      if ((char)param_1[0x25] != '\x03') {
        FUN_141460ab0(param_1,uVar8 & 0xff);
      }
    }
    lVar13 = FUN_140cff230(param_1);
    if (lVar13 != 0) {
      *(undefined1 *)(param_1 + 0x121) = *(undefined1 *)(lVar13 + 0x34);
    }
    lVar13 = FUN_140cff230(param_1);
    if (lVar13 != 0) {
      FUN_141460e10(param_1,*(undefined1 *)(lVar13 + 0x252));
    }
    if ((DAT_146b17150 != 0) && (lVar13 = FUN_142874ac0(), lVar13 != 0)) {
      lVar11 = FUN_141424dd0();
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((bVar4) && (cVar6 = APlayerController::IsPrimaryPlayer(param_1), cVar6 != '\0')) &&
         (cVar6 = (**(code **)(*param_1 + 0x768))(param_1), cVar6 != '\0')) {
        fVar1 = *(float *)((longlong)param_1 + 0x121c);
        fVar30 = *(float *)(param_1 + 0x243);
        fVar29 = (float)UCharacterMovementComponent::K2_GetWalkableFloorAngle(lVar13);
        if ((fVar30 <= fVar29) && (fVar30 = fVar29, fVar1 <= fVar29)) {
          fVar30 = fVar1;
        }
        FUN_140cd09e0(lVar13,fVar30);
        lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
        if ((lVar11 == 0) ||
           (lVar11 = (**(code **)(*param_1 + 0x148))(param_1), *(int *)(lVar11 + 0x708) != 3)) {
          fVar1 = *(float *)((longlong)param_1 + 0x1224);
          fVar30 = *(float *)(param_1 + 0x244);
          fVar29 = (float)FUN_140cb6ff0(lVar13);
          if ((fVar30 <= fVar29) && (fVar30 = fVar29, fVar1 <= fVar29)) {
            fVar30 = fVar1;
          }
          uVar7 = FUN_142486990(lVar13);
          FUN_14247c070(lVar13,uVar7,(int)fVar30);
        }
        fVar1 = *(float *)(param_1 + 0x247);
        fVar30 = *(float *)((longlong)param_1 + 0x1234);
        fVar29 = (float)FUN_140cb62b0(lVar13);
        if ((fVar30 <= fVar29) && (fVar30 = fVar29, fVar1 <= fVar29)) {
          fVar30 = fVar1;
        }
        FUN_140ccd5a0(lVar13,fVar30);
        fVar1 = *(float *)(param_1 + 0x248);
        fVar30 = *(float *)((longlong)param_1 + 0x123c);
        fVar29 = (float)FUN_140cb62a0(lVar13);
        if ((fVar30 <= fVar29) && (fVar30 = fVar29, fVar1 <= fVar29)) {
          fVar30 = fVar1;
        }
        FUN_140ccd4f0(lVar13,fVar30);
      }
    }
    if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) ||
       (cVar6 = (**(code **)(*param_1 + 0x768))(param_1), cVar6 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_140abdb40(param_1 + 0x34d);
      plVar14 = *(longlong **)(lVar10 + 0x370);
      plVar16 = plVar14 + (longlong)*(int *)(lVar10 + 0x378) * 2;
      for (; plVar14 != plVar16; plVar14 = plVar14 + 2) {
        lVar13 = *plVar14;
        if ((lVar13 != 0) && (*(char *)(lVar13 + 0x30) != '\0')) {
          FUN_140aa27c0(param_1 + 0x34d,lVar13,(int)plVar14[1]);
        }
      }
      FVulkanStagingBuffer::Unlock(param_1 + 0x34d);
    }
    lVar13 = param_1[0x109];
    if (lVar13 != 0) {
      lVar11 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) ||
           (cVar6 = (**(code **)(*param_1 + 0x768))(param_1), cVar6 == '\0')) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (((bVar4) || ((char)param_1[0x25] != '\x03')) &&
           (plVar14 = (longlong *)FUN_140c41a30(lVar13), lVar10 = local_res18,
           plVar14 != (longlong *)0x0)) {
          *(undefined1 *)(lVar13 + 0x2340) = 1;
          (**(code **)(*plVar14 + 0x4a8))(plVar14);
          lVar10 = local_res18;
          plVar16 = *(longlong **)(local_res18 + 0x370);
          plVar25 = plVar16 + (longlong)*(int *)(local_res18 + 0x378) * 2;
          for (; plVar16 != plVar25; plVar16 = plVar16 + 2) {
            lVar13 = *plVar16;
            if ((lVar13 != 0) && (*(char *)(lVar13 + 0x30) == '\0')) {
              FUN_142fe44f0(plVar14,lVar13,(int)plVar16[1]);
            }
          }
          iVar18 = *(int *)(lVar10 + 0x388) + -1;
          lVar13 = lVar10;
          if (-1 < iVar18) {
            lVar12 = (longlong)iVar18 << 7;
            lVar11 = lVar12;
            do {
              lVar13 = *(longlong *)(lVar10 + 0x380);
              if (*(char *)(lVar13 + 0x78 + lVar12) == '\0') {
                _guard_xfg_dispatch_icall_nop(local_c8,0,0x68);
                FUN_142ff9df0(lVar13 + lVar11);
                cVar6 = FUN_143003610(local_c8);
                if (cVar6 == '\0') {
                  FUN_140be7560((longlong *)(lVar10 + 0x380),iVar18,1,1);
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
              }
              lVar11 = lVar11 + -0x80;
              lVar12 = lVar12 + -0x80;
              iVar18 = iVar18 + -1;
              lVar13 = local_res18;
            } while (-1 < iVar18);
          }
          lVar11 = *(longlong *)(lVar13 + 0x380);
          lVar13 = (longlong)*(int *)(lVar13 + 0x388) * 0x80 + lVar11;
          lVar10 = local_res18;
          for (; local_res18 = lVar10, lVar11 != lVar13; lVar11 = lVar11 + 0x80) {
            if (*(char *)(lVar11 + 0x78) == '\0') {
              _guard_xfg_dispatch_icall_nop(local_c8,0,0x68);
              FUN_142ff9df0(lVar11);
              if ((local_c0 != 0) && (local_b8 != 0)) {
                uVar15 = (**(code **)(*param_1 + 0x148))(param_1);
                plVar16 = (longlong *)FUN_143019ed0(uVar15,local_c8,1,0);
                if (plVar16 != (longlong *)0x0) {
                  lVar10 = 0;
                  FUN_142fe3d60(plVar14,local_res10,*(undefined8 *)(local_c0 + 0x1d8),plVar16,1,0,0,
                                1,0,1);
                  if ((*(byte *)((longlong)plVar16 + 0x94) & 2) == 0) {
                    iVar18 = *(int *)((longlong)plVar16 + 0xc);
                    if (iVar18 < (int)DAT_1469e91c4) {
                      uVar21 = iVar18 >> 0x1f & 0xffff;
                      uVar8 = iVar18 + uVar21;
                      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                               (longlong)(int)((uVar8 & 0xffff) - uVar21) * 0x18;
                    }
                    if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) goto LAB_140ce71be;
                    bVar4 = false;
                  }
                  else {
LAB_140ce71be:
                    bVar4 = true;
                  }
                  if (!bVar4) {
                    lVar10 = FUN_1430b3b80();
                    if ((*(int *)(plVar16[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(plVar16[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
                        != lVar10 + 0x88)) {
                      bVar4 = false;
                    }
                    else {
                      bVar4 = true;
                    }
                    if (bVar4) {
                      (**(code **)(*plVar16 + 0x9a8))(plVar16);
                    }
                  }
                }
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
            }
            lVar10 = local_res18;
          }
        }
      }
    }
    iVar18 = (int)param_1[0x30d] + -1;
    if (-1 < iVar18) {
      lVar11 = (longlong)iVar18 << 4;
      lVar12 = (longlong)(int)param_1[0x30d] << 4;
      lVar13 = lVar11;
      do {
        lVar2 = param_1[0x30c];
        lVar3 = *(longlong *)(lVar13 + lVar2);
        if ((lVar3 != 0) &&
           (((*(longlong *)(lVar3 + 0x130) != 0 && (*(longlong *)(lVar3 + 0x130) != param_1[0x14b]))
            || (*(char *)(lVar3 + 0x108) == '\0')))) {
          iVar19 = (int)param_1[0x30d];
          iVar9 = (iVar19 - iVar18) + -1;
          if (iVar9 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar2 + lVar11),(void *)(lVar2 + lVar12),(longlong)iVar9 << 4);
            iVar19 = (int)param_1[0x30d];
          }
          *(int *)(param_1 + 0x30d) = iVar19 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x30c);
        }
        lVar12 = lVar12 + -0x10;
        lVar11 = lVar11 + -0x10;
        lVar13 = lVar13 + -0x10;
        iVar18 = iVar18 + -1;
      } while (-1 < iVar18);
    }
    puVar24 = *(undefined1 **)(lVar10 + 0x3f0);
    puVar26 = puVar24 + (longlong)*(int *)(lVar10 + 0x3f8) * 0x30;
    for (; puVar24 != puVar26; puVar24 = puVar24 + 0x30) {
      lVar13 = FUN_140e4c9a0(puVar24);
      if (lVar13 != 0) {
        plVar14 = param_1 + 0x30c;
        plVar25 = (longlong *)*plVar14;
        iVar18 = (int)param_1[0x30d];
        plVar16 = plVar25 + (longlong)iVar18 * 2;
        for (; plVar25 != plVar16; plVar25 = plVar25 + 2) {
          if (*plVar25 == lVar13) goto LAB_140ce7385;
        }
        *(int *)(param_1 + 0x30d) = iVar18 + 1;
        if (*(int *)((longlong)param_1 + 0x186c) < iVar18 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14);
        }
        FUN_140a4ee60(*plVar14 + (longlong)iVar18 * 0x10,lVar13,*puVar24);
      }
LAB_140ce7385:
    }
    plVar14 = *(longlong **)(lVar10 + 0x400);
    plVar16 = plVar14 + (longlong)*(int *)(lVar10 + 0x408) * 2;
    for (; plVar14 != plVar16; plVar14 = plVar14 + 2) {
      lVar13 = *plVar14;
      if (lVar13 != 0) {
        plVar25 = param_1 + 0x30e;
        iVar18 = (int)param_1[0x30f];
        plVar17 = (longlong *)*plVar25;
        plVar20 = plVar17 + (longlong)iVar18 * 2;
        for (; plVar17 != plVar20; plVar17 = plVar17 + 2) {
          if (*plVar17 == lVar13) goto LAB_140ce7405;
        }
        *(int *)(param_1 + 0x30f) = iVar18 + 1;
        if (*(int *)((longlong)param_1 + 0x187c) < iVar18 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar25);
        }
        lVar11 = plVar14[1];
        plVar25 = (longlong *)((longlong)iVar18 * 0x10 + *plVar25);
        *plVar25 = lVar13;
        *(char *)(plVar25 + 1) = (char)lVar11;
      }
LAB_140ce7405:
    }
    puVar24 = *(undefined1 **)(lVar10 + 0x440);
    puVar26 = puVar24 + (longlong)*(int *)(lVar10 + 0x448) * 0x30;
    for (; puVar24 != puVar26; puVar24 = puVar24 + 0x30) {
      lVar13 = FUN_140a643b0(puVar24);
      if (lVar13 != 0) {
        plVar14 = param_1 + 0x310;
        plVar25 = (longlong *)*plVar14;
        iVar18 = (int)param_1[0x311];
        plVar16 = plVar25 + (longlong)iVar18 * 2;
        for (; plVar25 != plVar16; plVar25 = plVar25 + 2) {
          if (*plVar25 == lVar13) goto LAB_140ce7495;
        }
        *(int *)(param_1 + 0x311) = iVar18 + 1;
        if (*(int *)((longlong)param_1 + 0x188c) < iVar18 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14);
        }
        FUN_140a4ee60(*plVar14 + (longlong)iVar18 * 0x10,lVar13,*puVar24);
      }
LAB_140ce7495:
    }
    puVar26 = *(undefined1 **)(lVar10 + 0x450);
    puVar24 = puVar26 + (longlong)*(int *)(lVar10 + 0x458) * 0x18;
    for (; puVar26 != puVar24; puVar26 = puVar26 + 0x18) {
      lVar13 = FUN_140a8d3a0(puVar26);
      if (lVar13 != 0) {
        plVar14 = param_1 + 0x312;
        plVar25 = (longlong *)*plVar14;
        iVar18 = (int)param_1[0x313];
        plVar16 = plVar25 + (longlong)iVar18 * 2;
        for (; plVar25 != plVar16; plVar25 = plVar25 + 2) {
          if (*plVar25 == lVar13) goto LAB_140ce7525;
        }
        *(int *)(param_1 + 0x313) = iVar18 + 1;
        if (*(int *)((longlong)param_1 + 0x189c) < iVar18 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14);
        }
        FUN_140a4ee60(*plVar14 + (longlong)iVar18 * 0x10,lVar13,*puVar26);
      }
LAB_140ce7525:
    }
    if (param_1[399] != 0) {
      FUN_140e42fb0(param_1[399],lVar10 + 0x410);
    }
    FUN_140e908e0(param_1 + 0x362,*(undefined4 *)(lVar10 + 0x460),1);
    *(undefined4 *)(param_1 + 0x37a) = *(undefined4 *)(lVar10 + 0x464);
    *(undefined4 *)((longlong)param_1 + 0x1bd4) = *(undefined4 *)(lVar10 + 0x468);
    FUN_140e70780(param_1 + 0x362,lVar10 + 0x470,lVar10 + 0x480);
    FUN_140e74050(param_1 + 0x362);
    plVar14 = param_1 + 0x1cb;
    FUN_140cf9010(plVar14,0);
    pcVar23 = *(char **)(lVar10 + 0x3a0);
    pcVar28 = pcVar23 + (longlong)*(int *)(lVar10 + 0x3a8) * 0xb8;
    for (; pcVar23 != pcVar28; pcVar23 = pcVar23 + 0xb8) {
      if ((*pcVar23 == '\x04') && (cVar6 = FUN_140b2f430(), cVar6 != '\0')) {
        iVar18 = (int)param_1[0x1cc];
        *(int *)(param_1 + 0x1cc) = iVar18 + 1;
        if (*(int *)((longlong)param_1 + 0xe64) < iVar18 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar14,iVar18);
        }
        FUN_140ce1220((longlong)iVar18 * 0xb8 + *plVar14,pcVar23);
      }
    }
    *(undefined4 *)(param_1 + 0x38e) = *(undefined4 *)(lVar10 + 0x518);
    if (((char)param_1[0x25] == '\x03') &&
       (cVar6 = APlayerController::IsPrimaryPlayer(), cVar6 != '\0')) {
      if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) ||
         (cVar6 = (**(code **)(*param_1 + 0x768))(), cVar6 == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (DAT_146af4bf0 != 0)) {
        FUN_140cd3550(DAT_146af4bf0,param_1,(int)param_1[0x38e]);
      }
    }
    if ((((int)param_1[0x188] == 0) || ((longlong *)param_1[0x187] == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*(longlong *)param_1[0x187] + 0x18))(), cVar6 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if ((int)param_1[0x188] == 0) {
        plVar14 = (longlong *)0x0;
      }
      else {
        plVar14 = (longlong *)param_1[0x187];
      }
      (**(code **)(*plVar14 + 0x40))();
    }
    FUN_1414603b0(param_1);
  }
  return;
}



// FUNCTION 140ce7700 FUN_140ce7700 body=1164 status=ok
// SIG undefined FUN_140ce7700(void)

void FUN_140ce7700(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int *piVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  longlong *plVar15;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if ((*(byte *)(lVar7 + 0x830) & 4) != 0) {
    return;
  }
  if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) ||
     (cVar5 = (**(code **)(*param_1 + 0x768))(param_1), cVar5 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_140d2da20(param_2,uVar8);
  }
  param_1[0x134] = param_2;
  lVar7 = FUN_140d3b890(param_2);
  if (1 < *(int *)(lVar7 + 8)) {
    uVar8 = FUN_140d3b890(param_2);
    FString::operator=(param_1 + 0x14f,uVar8);
  }
  *(undefined1 *)((longlong)param_1 + 0xa4e) = 1;
  lVar7 = FUN_140d3b710(param_2);
  if (((param_3 != '\0') || (param_1[0x14b] == 0)) || (lVar7 != param_1[0x14b])) {
    if ((char)param_1[0x25] != '\x03') goto LAB_140ce7894;
    FUN_141460f80(param_1,lVar7);
  }
  if (((char)param_1[0x25] == '\x03') && (lVar7 = param_1[0x8c], lVar7 != 0)) {
    lVar9 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140d3b100(param_2,&local_48);
      if (((uStack_40._4_4_ == 0 && (int)uStack_40 == 0) && (int)local_48 == 0) &&
          local_48._4_4_ == 0) {
        if (((*(int *)(lVar7 + 0x5f0) != 0 || *(int *)(lVar7 + 0x5ec) != 0) ||
            *(int *)(lVar7 + 0x5e8) != 0) || *(int *)(lVar7 + 0x5e4) != 0) goto LAB_140ce7894;
        piVar10 = (int *)FGuid::NewGuid(local_38);
        local_48._0_4_ = *piVar10;
        local_48._4_4_ = piVar10[1];
        uStack_40._0_4_ = piVar10[2];
        uStack_40._4_4_ = piVar10[3];
      }
      *(int *)(lVar7 + 0x5e4) = (int)local_48;
      *(int *)(lVar7 + 0x5e8) = local_48._4_4_;
      *(int *)(lVar7 + 0x5ec) = (int)uStack_40;
      *(int *)(lVar7 + 0x5f0) = uStack_40._4_4_;
    }
  }
LAB_140ce7894:
  plVar1 = param_1 + 800;
  *(undefined1 *)(param_1 + 0x322) = *(undefined1 *)(param_2 + 0x260);
  uVar14 = 0;
  iVar6 = *(int *)(param_2 + 600);
  *(undefined4 *)(param_1 + 0x321) = 0;
  if (*(int *)((longlong)param_1 + 0x190c) != iVar6) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1);
  }
  puVar11 = *(undefined1 **)(param_2 + 0x250);
  puVar13 = puVar11 + (longlong)*(int *)(param_2 + 600) * 0x30;
  for (; puVar11 != puVar13; puVar11 = puVar11 + 0x30) {
    lVar7 = FUN_140d3ad40(puVar11);
    if (lVar7 != 0) {
      iVar6 = (int)param_1[0x321];
      plVar15 = (longlong *)*plVar1;
      plVar12 = plVar15 + (longlong)iVar6 * 2;
      for (; plVar15 != plVar12; plVar15 = plVar15 + 2) {
        if (*plVar15 == lVar7) goto LAB_140ce7944;
      }
      *(int *)(param_1 + 0x321) = iVar6 + 1;
      if (*(int *)((longlong)param_1 + 0x190c) < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
      }
      uVar2 = *puVar11;
      plVar15 = (longlong *)((longlong)iVar6 * 0x10 + *plVar1);
      *plVar15 = lVar7;
      *(undefined1 *)(plVar15 + 1) = uVar2;
    }
LAB_140ce7944:
  }
  TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x315,0);
  local_48 = (longlong *)0x0;
  uStack_40 = (longlong *)0x0;
  TMapBase<AActor_*,TArray<FHitResult,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AActor_*,TArray<FHitResult,FDefaultAllocator>,0>_>
  ::GenerateKeyArray<FDefaultAllocator>((longlong *)(param_2 + 0x268),&local_48);
  plVar4 = local_48;
  plVar1 = local_48 + (int)uStack_40;
  plVar15 = local_48;
  plVar12 = uStack_40;
  do {
    if (plVar15 == plVar1) {
      *(undefined4 *)(param_1 + 0x147) = *(undefined4 *)(param_2 + 0xa0);
      *(undefined4 *)((longlong)param_1 + 0xa3c) = *(undefined4 *)(param_2 + 0x38);
      uStack_40 = plVar12;
      if ((((char)param_1[0x25] == '\x03') &&
          (cVar5 = APlayerController::IsPrimaryPlayer(param_1), cVar5 != '\0')) &&
         (cVar5 = (**(code **)(*param_1 + 0x768))(param_1), cVar5 != '\0')) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar7 = FUN_140b80130(uVar8);
        if (lVar7 != 0) {
          FUN_140b7b8a0(lVar7,param_2);
        }
      }
      else {
        uVar14 = *(undefined4 *)(param_2 + 0x3c);
      }
      *(undefined4 *)((longlong)param_1 + 0xa44) = uVar14;
      if (*(byte *)(param_1 + 0x25) < 3) {
        FUN_140e37160(param_1 + 0x137,param_2);
        FUN_141460e50(param_1,1);
        FUN_140cf0280(param_1);
      }
      FUN_140ce7b90(param_1,param_2);
      if ((*(byte *)(param_1 + 0x25) < 3) && (param_1[0x135] != 0)) {
        DAT_14686e300 = 1;
        *(undefined1 *)(param_2 + 0x338) = 1;
        FUN_140d0bcd0(param_1,param_2);
        FUN_142cccfb0(param_1[0x135],param_2);
        *(undefined1 *)(param_2 + 0x338) = 0;
        DAT_14686e300 = 0;
      }
      FUN_140d12170(param_1,param_1[0x134]);
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x274);
      if (plVar4 != (longlong *)0x0) {
        FMemory::Free(plVar4);
      }
      return;
    }
    lVar7 = *plVar15;
    if (*(int *)(param_2 + 0x270) != *(int *)(param_2 + 0x29c)) {
      lVar9 = *(longlong *)(param_2 + 0x2a8);
      if (*(longlong *)(param_2 + 0x2a8) == 0) {
        lVar9 = param_2 + 0x2a0;
      }
      iVar6 = *(int *)(lVar9 + ((longlong)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7) &
                               (longlong)*(int *)(param_2 + 0x2b0) - 1U) * 4);
      if (iVar6 != -1) {
        do {
          uStack_40 = (longlong *)((longlong)iVar6 * 0x20 + *(longlong *)(param_2 + 0x268));
          if (*uStack_40 == lVar7) {
            if (((iVar6 != -1) && (uStack_40 != (longlong *)0x0)) &&
               (uStack_40 = uStack_40 + 1, uStack_40 != (longlong *)0x0)) {
              local_48 = plVar15;
              FUN_140cdd700(param_1 + 0x315,local_res8,&local_48,0);
              plVar12 = uStack_40;
            }
            break;
          }
          iVar6 = (int)uStack_40[3];
        } while (iVar6 != -1);
      }
    }
    uStack_40 = plVar12;
    plVar15 = plVar15 + 1;
    plVar12 = uStack_40;
  } while( true );
}



// FUNCTION 140ce7b90 FUN_140ce7b90 body=6094 status=ok
// SIG undefined FUN_140ce7b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ce7b90(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  void *pvVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  longlong *plVar19;
  longlong *plVar20;
  uint *puVar21;
  undefined1 uVar22;
  void *pvVar23;
  undefined4 *puVar24;
  longlong *plVar25;
  longlong *plVar26;
  uint uVar27;
  undefined4 *unaff_R15;
  ulonglong uVar28;
  undefined1 auStack_298 [32];
  longlong local_278;
  undefined4 local_270;
  undefined1 local_268;
  undefined4 local_260;
  undefined1 local_258;
  longlong local_248;
  longlong *local_240;
  undefined1 local_238;
  longlong local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  uint *local_210;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  uint local_1f0;
  byte local_1ec;
  undefined8 *local_1e8;
  void *local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [8];
  longlong *local_190;
  void *local_188;
  int local_180;
  undefined4 local_17c;
  uint *local_178;
  int local_170;
  undefined4 local_16c;
  undefined1 local_168 [8];
  longlong local_160;
  longlong local_158;
  longlong local_148;
  longlong local_138;
  longlong local_128;
  longlong local_118;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  if (param_2 == 0) {
    return;
  }
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  plVar20 = (longlong *)param_1[0x109];
  local_248 = param_2;
  local_190 = param_1;
  if (plVar20 == (longlong *)0x0) {
LAB_140ce7c60:
    local_218 = (longlong *)0x0;
LAB_140ce7c64:
    local_240 = (longlong *)0x0;
  }
  else {
    local_218 = plVar20;
    lVar12 = FUN_1413f82e0();
    if ((*(int *)(plVar20[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar20[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
        lVar12 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140ce7c60;
    lVar12 = FUN_1413ffe00();
    if ((*(int *)(plVar20[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar20[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
        lVar12 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    local_240 = plVar20;
    if (!bVar5) goto LAB_140ce7c64;
  }
  if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) ||
     (cVar8 = (**(code **)(*param_1 + 0x768))(param_1), cVar8 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((bVar5) || ((char)param_1[0x25] != '\x03')) && (lVar12 = FUN_140cff230(param_1), lVar12 != 0)
     ) {
    puVar24 = *(undefined4 **)(lVar12 + 0x3e0);
    puVar18 = puVar24 + (longlong)*(int *)(lVar12 + 1000) * 6;
    if (puVar24 != puVar18) {
      plVar20 = (longlong *)(param_2 + 0x1d8);
      do {
        iVar10 = FUN_140cfaf40(plVar20,puVar24);
        if (iVar10 == -1) {
          iVar10 = *(int *)(param_2 + 0x1e0);
          unaff_R15 = (undefined4 *)(longlong)iVar10;
          *(int *)(param_2 + 0x1e0) = iVar10 + 1;
          if (*(int *)(param_2 + 0x1e4) < iVar10 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar20,iVar10);
          }
          lVar14 = *plVar20;
          lVar13 = (longlong)unaff_R15 * 3 + 1;
          *(undefined4 *)(lVar14 + -8 + lVar13 * 8) = *puVar24;
          FString::FString(lVar14 + lVar13 * 8,puVar24 + 2);
        }
        puVar24 = puVar24 + 6;
      } while (puVar24 != puVar18);
    }
    FUN_140e431f0(lVar12 + 0x410,param_2 + 0x350);
    *(undefined4 *)(param_2 + 0x400) = *(undefined4 *)(lVar12 + 0x464);
    *(undefined4 *)(param_2 + 0x404) = *(undefined4 *)(lVar12 + 0x468);
  }
  plVar20 = local_218;
  lVar12 = 0;
  if ((local_218 == (longlong *)0x0) || (param_1[0x14b] == 0)) {
    FWeakObjectPtr::operator=(&local_218,param_1);
    FWeakObjectPtr::operator=(&local_220,param_2);
    uVar6 = (uint)local_218;
    uVar7 = local_218._4_4_;
    plVar20 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar20 != (longlong *)0x0) {
      *plVar20 = (longlong)&PTR_GetPoolName_1444f8328;
      *(undefined4 *)(plVar20 + 1) = uVar6;
      *(undefined4 *)((longlong)plVar20 + 0xc) = uVar7;
      *(undefined4 *)(plVar20 + 2) = (undefined4)local_220;
      *(undefined4 *)((longlong)plVar20 + 0x14) = local_220._4_4_;
      lVar12 = FDelegateHandle::GenerateNewID();
      plVar20[4] = lVar12;
      *plVar20 = (longlong)&PTR_GetPoolName_1444f8370;
    }
    uVar15 = AActor::GetWorldTimerManager(param_1);
    local_b8 = 0;
    local_b0 = 0;
    if (plVar20 != (longlong *)0x0) {
      (**(code **)(*plVar20 + 0x30))(plVar20,&local_b8);
    }
    FWeakObjectPtr::operator=(local_a8,0);
    local_a0 = 0;
    local_98 = AK::MemoryMgr::StartProfileThreadUsage;
    local_68 = (longlong *)0x0;
    local_58 = 0;
    FUN_142880af0(uVar15,&local_b8);
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
    if (plVar20 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar20 + 0x28))(plVar20,0);
    lVar12 = FMemory::Realloc(plVar20,0,0);
    if (lVar12 == 0) {
      return;
    }
    FMemory::Free(lVar12);
    return;
  }
  *(undefined4 *)(param_1 + 0x37a) = *(undefined4 *)(param_2 + 0x400);
  *(undefined4 *)((longlong)param_1 + 0x1bd4) = *(undefined4 *)(param_2 + 0x404);
  if (param_1[0x193] != 0) {
    lVar13 = FUN_1422312c0(param_1);
    if (lVar13 != 0) {
      lVar14 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        *(undefined1 *)(lVar13 + 0x9b8) = 1;
        lVar12 = lVar13;
      }
    }
    FUN_140ce2cd0(param_1[0x193] + 0x208,param_2 + 0x3b0);
    FUN_140e17030(param_1[0x193],param_2 + 0x1c8,*(undefined4 *)(param_2 + 0x3a4),
                  *(undefined1 *)(param_2 + 0x3a8));
    (**(code **)(*(longlong *)param_1[0x193] + 0x428))((longlong *)param_1[0x193],param_2 + 0x2c8);
    if (lVar12 != 0) {
      *(undefined1 *)(lVar12 + 0x9b8) = 0;
    }
  }
  if ((char)param_1[0x25] == '\x03') {
    if (param_1[399] != 0) {
      FUN_140e43c20(param_1[399],param_2 + 0x350);
    }
    if (local_240 != (longlong *)0x0) {
      FUN_140e43880(local_240 + 0x52a,param_2 + 0x1d8,0);
    }
    uVar15 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar12 = FUN_140e7e6f0(uVar15);
    if ((lVar12 != 0) && (cVar8 = FUN_140e74930(lVar12,param_1), cVar8 != '\0')) {
      FUN_140e707e0(lVar12,param_2);
    }
    local_e0 = FUN_1414aa4c0();
    lVar12 = (**(code **)(*plVar20 + 0x628))(plVar20,local_e0);
    if (lVar12 != 0) {
      FUN_140e5da00(lVar12,*(undefined4 *)(param_2 + 0xa0));
    }
    local_d8 = AGFireballProjectile::GetPrivateStaticClass();
    puVar16 = (undefined8 *)(**(code **)(*plVar20 + 0x628))(plVar20,local_d8);
    local_1e8 = puVar16;
    if (puVar16 != (undefined8 *)0x0) {
      FUN_14099e040(puVar16,param_2);
    }
    local_d0 = FUN_1414add30();
    lVar12 = (**(code **)(*plVar20 + 0x628))(plVar20,local_d0);
    if (lVar12 != 0) {
      FUN_140e437b0(lVar12,param_2);
    }
    uVar17 = FUN_140c430a0(plVar20,0);
    local_230 = 0;
    local_228 = 0;
    local_220 = uVar17;
    if (uVar17 != 0) {
      FUN_140c54860(plVar20);
      plVar19 = *(longlong **)(param_2 + 0xb8);
      plVar25 = plVar19 + (longlong)*(int *)(param_2 + 0xc0) * 2;
      for (; plVar19 != plVar25; plVar19 = plVar19 + 2) {
        lVar12 = *plVar19;
        if ((lVar12 != 0) && (*(char *)(lVar12 + 0x30) == '\0')) {
          FUN_142fe44f0(uVar17,lVar12,(int)plVar19[1]);
        }
      }
      cVar8 = (**(code **)(*param_1 + 0x768))(param_1);
      if (cVar8 == '\0') {
        FUN_140abdb40(param_1 + 0x34d);
        plVar19 = *(longlong **)(param_2 + 0xb8);
        plVar25 = plVar19 + (longlong)*(int *)(param_2 + 0xc0) * 2;
        for (; plVar19 != plVar25; plVar19 = plVar19 + 2) {
          lVar12 = *plVar19;
          if ((lVar12 != 0) && (*(char *)(lVar12 + 0x30) != '\0')) {
            FUN_140aa27c0(param_1 + 0x34d,lVar12,(int)plVar19[1]);
          }
        }
        FVulkanStagingBuffer::Unlock(param_1 + 0x34d);
      }
      uVar2 = *(undefined1 *)((longlong)plVar20 + 0x1123);
      *(undefined1 *)((longlong)plVar20 + 0x1123) = 0;
      local_238 = uVar2;
      if (local_228._4_4_ < *(int *)(param_2 + 0xd0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(&local_230);
      }
      puVar21 = *(uint **)(param_2 + 200);
      local_210 = puVar21 + (longlong)*(int *)(param_2 + 0xd0) * 0x2c;
      if (puVar21 != local_210) {
        puVar21 = puVar21 + 0x21;
        do {
          if ((byte)puVar21[-3] == 0) {
            _guard_xfg_dispatch_icall_nop(local_168,0,0x68);
            FUN_142ff9df0(puVar21 + -0x21);
            cVar8 = FUN_143003610(local_168);
            if (cVar8 == '\0') {
LAB_140ce826d:
              lVar12 = (longlong)(int)local_228;
              iVar10 = (int)local_228 + 1;
              local_228 = CONCAT44(local_228._4_4_,iVar10);
              if (local_228._4_4_ < iVar10) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_230);
              }
              *(undefined4 *)(local_230 + lVar12 * 4) = 0xffffffff;
            }
            else if ((local_160 != 0) && (local_158 != 0)) {
              uVar15 = (**(code **)(*param_1 + 0x148))(param_1);
              lVar12 = FUN_143019ed0(uVar15,local_168,1,0);
              if (lVar12 == 0) goto LAB_140ce826d;
              local_258 = 0;
              local_260 = 0;
              local_268 = 1;
              local_270 = 4;
              local_278 = CONCAT44(local_278._4_4_,1);
              puVar18 = (undefined4 *)
                        FUN_142fe3dd0(uVar17,local_198,*(undefined8 *)(local_160 + 0x1d8));
              uVar17 = local_228;
              lVar13 = (longlong)(int)local_228;
              iVar10 = (int)local_228 + 1;
              local_228 = CONCAT44(local_228._4_4_,iVar10);
              if (local_228._4_4_ < iVar10) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_230,uVar17 & 0xffffffff);
              }
              uVar17 = local_220;
              *(undefined4 *)(local_230 + lVar13 * 4) = *puVar18;
              local_1f0 = puVar21[-1];
              local_1ec = (*puVar21 & 1) != 0;
              if ((*puVar21 >> 1 & 1) != 0) {
                local_1ec = local_1ec | 2;
              }
              if ((*puVar21 >> 2 & 1) != 0) {
                local_1ec = local_1ec | 4;
              }
              FUN_1430164a0(local_220,local_230 + lVar13 * 4,&local_1f0);
              plVar19 = (longlong *)FUN_140b2dd20(puVar21 + -0x21);
              if ((plVar19 != (longlong *)0x0) &&
                 (cVar8 = (**(code **)(*plVar19 + 0x2a8))(plVar19), cVar8 == '\0')) {
                lVar13 = FUN_14149b100();
                if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (bVar5) {
                  FUN_14127e590(lVar12);
                }
              }
            }
            if (local_118 != 0) {
              FMemory::Free();
            }
            if (local_128 != 0) {
              FMemory::Free();
            }
            if (local_138 != 0) {
              FMemory::Free();
            }
            if (local_148 != 0) {
              FMemory::Free();
            }
          }
          else {
            lVar12 = (longlong)(int)local_228;
            iVar10 = (int)local_228 + 1;
            local_228 = CONCAT44(local_228._4_4_,iVar10);
            if (local_228._4_4_ < iVar10) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_230);
            }
            *(undefined4 *)(local_230 + lVar12 * 4) = 0xffffffff;
          }
          puVar1 = puVar21 + 0xb;
          puVar16 = local_1e8;
          puVar21 = puVar21 + 0x2c;
          param_2 = local_248;
          uVar2 = local_238;
        } while (puVar1 != local_210);
      }
      lVar13 = FUN_140c428a0(plVar20);
      lVar12 = *(longlong *)(lVar13 + 0xb0);
      lVar13 = (longlong)*(int *)(lVar13 + 0xb8) * 0x40 + lVar12;
      for (; lVar12 != lVar13; lVar12 = lVar12 + 0x40) {
        if (*(longlong *)(lVar12 + 0x20) == 0) {
          uVar22 = 0;
        }
        else {
          uVar22 = *(undefined1 *)(*(longlong *)(lVar12 + 0x20) + 0x39);
        }
        *(undefined1 *)(lVar12 + 0x18) = uVar22;
      }
      FUN_140e1e0b0(local_240,param_2,param_1,&local_230);
      *(undefined1 *)((longlong)plVar20 + 0x1123) = uVar2;
    }
    if (puVar16 != (undefined8 *)0x0) {
      FUN_1409a6d70(puVar16);
    }
    FUN_142c9eb00();
    puVar18 = *(undefined4 **)(param_2 + 0x80);
    local_1d0 = 0;
    unaff_R15 = puVar18 + (longlong)*(int *)(param_2 + 0x88) * 0xe;
    if (puVar18 != unaff_R15) {
      do {
        lVar12 = FUN_140d3b810(puVar18);
        if (lVar12 != 0) {
          FUN_142d61d40(local_f8,&local_1d0,plVar20,lVar12);
          cVar8 = FUN_142d52a00(local_f8);
          if (cVar8 != '\0') {
            uVar15 = FUN_142d62160(local_f0,local_f8);
            FUN_142d6f560(uVar15,*puVar18,1);
            FUN_142d6f550(uVar15,0);
          }
        }
        puVar18 = puVar18 + 0xe;
      } while (puVar18 != unaff_R15);
      if (local_1d0 != 0) {
        FUN_142d6bf40();
      }
    }
    if (local_230 != 0) {
      FMemory::Free();
    }
    if (*(char *)(param_2 + 0x2c) != '\0') {
      FUN_140caf130(param_2,param_1,local_240);
    }
  }
  else if (local_240 != (longlong *)0x0) {
    FUN_140e42da0(local_240 + 0x52a);
  }
  if ((char)param_1[0x25] == '\x03') {
    FUN_140c409e0(plVar20);
  }
  else {
    local_c8 = AGFireballProjectile::GetPrivateStaticClass();
    lVar12 = (**(code **)(*plVar20 + 0x628))(plVar20,local_c8);
    if (lVar12 != 0) {
      FUN_14099e040(lVar12,param_2);
    }
  }
  lVar12 = param_1[0x18b];
  if (lVar12 != 0) {
    local_200 = 0;
    local_1f8 = 0;
    if (0 < *(int *)(param_2 + 0xb0)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_200);
    }
    puVar18 = *(undefined4 **)(param_2 + 0xa8);
    puVar24 = puVar18 + (longlong)*(int *)(param_2 + 0xb0) * 0xc;
    for (; puVar18 != puVar24; puVar18 = puVar18 + 0xc) {
      unaff_R15 = (undefined4 *)FUN_140d3bc00(puVar18);
      uVar17 = local_1f8;
      if (unaff_R15 != (undefined4 *)0x0) {
        lVar13 = (longlong)(int)local_1f8;
        iVar10 = (int)local_1f8 + 1;
        local_1f8 = CONCAT44(local_1f8._4_4_,iVar10);
        if (local_1f8._4_4_ < iVar10) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_200,uVar17 & 0xffffffff);
        }
        FUN_142dc1880(lVar13 * 0x10 + local_200,unaff_R15,*puVar18);
      }
    }
    FUN_142dc4900(lVar12,&local_200);
    if (local_200 != 0) {
      FMemory::Free();
    }
  }
  cVar8 = (**(code **)(*param_1 + 0x768))(param_1);
  if ((cVar8 != '\0') && (param_1[0x18c] != 0)) {
    FUN_140c33f70(param_1[0x18c],param_2);
  }
  lVar12 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar12 != 0) {
    lVar12 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar12 = *(longlong *)(lVar12 + 0x148);
    if (lVar12 != 0) {
      lVar13 = FUN_141424d10();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (*(longlong *)(lVar12 + 0x5a0) != 0)) {
        iVar10 = FUN_140cb6340(lVar12);
        unaff_R15 = (undefined4 *)FUN_140d3a500(param_2,iVar10 + -1);
        cVar8 = (**(code **)(*param_1 + 0x768))(param_1);
        if ((cVar8 != '\0') && (cVar8 = APlayerController::IsPrimaryPlayer(param_1), cVar8 != '\0'))
        {
          FUN_142f3e430(*(undefined8 *)(lVar12 + 0x5a0),unaff_R15);
          uVar15 = FUN_140d3b2a0(param_2);
          FUN_142f44d50(*(undefined8 *)(lVar12 + 0x5a0),uVar15);
          uVar15 = FUN_140d3b050(param_2,iVar10 + -1);
          FUN_140c6a980(lVar12,uVar15,param_1);
        }
        FUN_142f44250(unaff_R15,param_1 + 0x353);
        FUN_142f43610(*(undefined8 *)(lVar12 + 0x5a0));
      }
    }
  }
  if (param_1[0x18d] != 0) {
    FUN_140e17820(param_1[0x18d],param_2 + 0x170);
  }
  if (param_1[0x18e] != 0) {
    local_278 = param_2 + 0x1c0;
    FUN_140e708a0(param_1[0x18e],param_2 + 400,param_2 + 0x1a0,param_2 + 0x1b0);
  }
  plVar20 = local_240;
  if (local_240 == (longlong *)0x0) goto LAB_140ce8f61;
  local_c0 = FUN_142e43690();
  plVar19 = (longlong *)(**(code **)(*plVar20 + 0x628))(plVar20,local_c0);
  if (plVar19 == (longlong *)0x0) goto LAB_140ce8f61;
  if ((char)param_1[0x25] == '\x03') {
    (**(code **)(*plVar19 + 0x260))(plVar19);
    plVar26 = *(longlong **)(param_2 + 0x208);
    plVar25 = plVar26 + (longlong)*(int *)(param_2 + 0x210) * 5;
    if (plVar26 != plVar25) {
      puVar16 = (undefined8 *)((longlong)plVar26 + 0x14);
      do {
        lVar12 = plVar19[0x30];
        lVar13 = lVar12 + (longlong)(int)plVar19[0x31] * 0x38;
        if (lVar12 != lVar13) {
          lVar14 = lVar12;
          do {
            if (*(longlong *)(lVar14 + 0x10) == *plVar26) {
              iVar10 = (int)((lVar14 - lVar12) / 0x38);
              if ((iVar10 != -1) && (iVar10 < (int)plVar19[0x5a])) {
                lVar12 = plVar19[0x59];
                lVar13 = (longlong)iVar10 * 0x34;
                *(undefined8 *)(lVar13 + 4 + lVar12) = *(undefined8 *)((longlong)puVar16 + -0xc);
                *(undefined4 *)(lVar13 + 0xc + lVar12) = *(undefined4 *)((longlong)puVar16 + -4);
                lVar12 = plVar19[0x59];
                *(undefined8 *)(lVar13 + 0x10 + lVar12) = *puVar16;
                *(undefined4 *)(lVar13 + 0x18 + lVar12) = *(undefined4 *)(puVar16 + 1);
                *(undefined1 *)(lVar13 + plVar19[0x59]) = *(undefined1 *)((longlong)puVar16 + 0xc);
                *(undefined1 *)(lVar13 + 1 + plVar19[0x59]) =
                     *(undefined1 *)((longlong)puVar16 + 0xd);
              }
              break;
            }
            lVar14 = lVar14 + 0x38;
          } while (lVar14 != lVar13);
        }
        plVar26 = plVar26 + 5;
        puVar16 = puVar16 + 5;
      } while (plVar26 != plVar25);
    }
    uVar28 = (ulonglong)unaff_R15 & 0xffffffffffffff00;
    local_218 = (longlong *)((ulonglong)local_218 & 0xffffffffffffff00);
    uVar17 = (ulonglong)plVar20 & 0xffffffffffffff00;
    local_210 = (uint *)CONCAT44(local_210._4_4_,(int)uVar28);
    local_220 = CONCAT44(local_220._4_4_,(int)uVar17);
    *(undefined4 *)(plVar19 + 0x55) = 0;
    if (*(int *)((longlong)plVar19 + 0x2ac) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo();
    }
    puVar16 = *(undefined8 **)(param_2 + 0x1e8);
    local_1e8 = puVar16 + (longlong)*(int *)(param_2 + 0x1f0) * 2;
    if (puVar16 == local_1e8) {
LAB_140ce89d3:
      plVar20 = local_240;
      cVar9 = (char)uVar28;
      cVar8 = (char)uVar17;
      if (local_240[0x549] != 0) {
        plVar25 = local_240 + 0x579;
        lVar12 = FWeakObjectPtr::Get();
        if (lVar12 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != (int)plVar20[0x57a]) && (local_248 = 0, plVar20[0x57b] != 0)) {
            lVar12 = FUN_141796df0();
            FWeakObjectPtr::operator=(plVar25,lVar12);
            if ((lVar12 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(plVar20 + 0x57a) = DAT_1464b56f4;
            }
            lVar12 = FWeakObjectPtr::Get(plVar25);
            if (lVar12 != 0) goto LAB_140ce8a6a;
          }
        }
        else {
LAB_140ce8a6a:
          lVar13 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            lVar12 = FWeakObjectPtr::Get();
            if (lVar12 == 0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 != (int)plVar20[0x57a]) && (local_248 = 0, plVar20[0x57b] != 0)) {
                lVar12 = FUN_141796df0();
                FWeakObjectPtr::operator=(plVar25,lVar12);
                if ((lVar12 != 0) || (DAT_1469e7e10 == '\0')) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  *(int *)(plVar20 + 0x57a) = DAT_1464b56f4;
                }
                lVar12 = FWeakObjectPtr::Get(plVar25);
                if (lVar12 != 0) goto LAB_140ce8b16;
              }
LAB_140ce8b4c:
              lVar12 = 0;
            }
            else {
LAB_140ce8b16:
              lVar13 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (!bVar5) goto LAB_140ce8b4c;
            }
            FUN_142e438a0(plVar19,lVar12,0);
          }
        }
      }
    }
    else {
      uVar27 = (uint)local_218;
      do {
        pvVar23 = (void *)0x0;
        iVar10 = *(int *)(puVar16 + 1);
        pvVar3 = (void *)*puVar16;
        local_1e0 = (void *)0x0;
        if (iVar10 == 0) {
          local_180 = iVar10;
          local_17c = 0;
        }
        else {
          local_1d8._0_4_ = iVar10;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1e0,iVar10,0);
          pvVar23 = local_1e0;
          _guard_xfg_dispatch_icall_nop(local_1e0,pvVar3,(longlong)iVar10 * 2);
          local_180 = (int)local_1d8;
          local_17c = local_1d8._4_4_;
        }
        local_1c0 = 0;
        local_1e0 = (void *)0x0;
        local_1c8 = 0;
        local_1b8 = 0;
        local_1d8 = 0;
        local_188 = pvVar23;
        FUN_1417978e0(&local_1c8);
        plVar20 = (longlong *)FSoftObjectPath::TryLoad(&local_1c8);
        if (plVar20 == (longlong *)0x0) {
LAB_140ce8924:
          plVar20 = (longlong *)0x0;
        }
        else {
          lVar12 = FUN_142e498a0();
          if ((*(int *)(plVar20[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(plVar20[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
              lVar12 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_140ce8924;
        }
        if (local_1c0 != 0) {
          FMemory::Free();
        }
        if (plVar20 == (longlong *)0x0) {
          uVar28 = (ulonglong)local_210 & 0xffffffff;
          uVar17 = local_220 & 0xffffffff;
        }
        else {
          cVar8 = (**(code **)(*plVar20 + 0x2a8))(plVar20);
          uVar28 = (ulonglong)local_210 & 0xffffffff;
          uVar17 = local_220 & 0xffffffff;
          if (cVar8 == '\0') {
            lVar12 = plVar20[0x1e];
            uVar27 = uVar27 & 0xff;
            uVar28 = (ulonglong)local_210 & 0xff;
            uVar17 = local_220 & 0xff;
            if (lVar12 == local_240[0x549]) {
              uVar27 = 1;
            }
            if (lVar12 == local_240[0x54a]) {
              uVar28 = 1;
            }
            local_210 = (uint *)CONCAT44(local_210._4_4_,(int)uVar28);
            if (lVar12 == local_240[0x54b]) {
              uVar17 = 1;
            }
            local_220 = CONCAT44(local_220._4_4_,(int)uVar17);
            FUN_142e438a0(plVar19);
          }
        }
        cVar9 = (char)uVar28;
        cVar8 = (char)uVar17;
        puVar16 = puVar16 + 2;
      } while (puVar16 != local_1e8);
      param_2 = local_248;
      if ((char)uVar27 == '\0') goto LAB_140ce89d3;
    }
    plVar20 = local_240;
    if ((cVar9 == '\0') && (local_240[0x54a] != 0)) {
      plVar25 = local_240 + 0x57e;
      lVar12 = FWeakObjectPtr::Get(plVar25);
      if (lVar12 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != (int)plVar20[0x57f]) && (local_248 = 0, plVar20[0x580] != 0)) {
          lVar12 = FUN_141796df0();
          FWeakObjectPtr::operator=(plVar25,lVar12);
          if ((lVar12 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(plVar20 + 0x57f) = DAT_1464b56f4;
          }
          lVar12 = FWeakObjectPtr::Get(plVar25);
          if (lVar12 != 0) goto LAB_140ce8bfe;
        }
      }
      else {
LAB_140ce8bfe:
        lVar13 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          lVar12 = FWeakObjectPtr::Get(plVar25);
          if (lVar12 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != (int)plVar20[0x57f]) && (local_248 = 0, plVar20[0x580] != 0)) {
              lVar12 = FUN_141796df0();
              FWeakObjectPtr::operator=(plVar25,lVar12);
              if ((lVar12 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(plVar20 + 0x57f) = DAT_1464b56f4;
              }
              lVar12 = FWeakObjectPtr::Get(plVar25);
              if (lVar12 != 0) goto LAB_140ce8cab;
            }
LAB_140ce8cb7:
            lVar12 = 0;
          }
          else {
LAB_140ce8cab:
            cVar9 = FUN_140cdf510(lVar12);
            if (cVar9 == '\0') goto LAB_140ce8cb7;
          }
          FUN_142e438a0(plVar19,lVar12,0);
        }
      }
    }
    plVar20 = local_240;
    if ((cVar8 == '\0') && (local_240[0x54b] != 0)) {
      plVar25 = local_240 + 0x583;
      lVar12 = FWeakObjectPtr::Get(plVar25);
      if (lVar12 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != (int)plVar20[0x584]) && (local_248 = 0, plVar20[0x585] != 0)) {
          lVar12 = FUN_141796df0();
          FWeakObjectPtr::operator=(plVar25,lVar12);
          if ((lVar12 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(plVar20 + 0x584) = DAT_1464b56f4;
          }
          lVar12 = FWeakObjectPtr::Get(plVar25);
          if (lVar12 != 0) goto LAB_140ce8d68;
        }
      }
      else {
LAB_140ce8d68:
        cVar8 = FUN_140cdf510(lVar12);
        if ((cVar8 != '\0') && (lVar12 != 0)) {
          lVar12 = FWeakObjectPtr::Get(plVar25);
          if (lVar12 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != (int)plVar20[0x584]) && (local_248 = 0, plVar20[0x585] != 0)) {
              lVar12 = FUN_141796df0();
              FWeakObjectPtr::operator=(plVar25,lVar12);
              if ((lVar12 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(plVar20 + 0x584) = DAT_1464b56f4;
              }
              lVar12 = FWeakObjectPtr::Get(plVar25);
              if (lVar12 != 0) goto LAB_140ce8df4;
            }
LAB_140ce8e00:
            lVar12 = 0;
          }
          else {
LAB_140ce8df4:
            cVar8 = FUN_140cdf510(lVar12);
            if (cVar8 == '\0') goto LAB_140ce8e00;
          }
          FUN_142e438a0(plVar19,lVar12,0);
        }
      }
    }
    if ((*(int *)(param_2 + 0x1f0) == 0) && (0 < (int)plVar19[0x5a])) {
      FUN_142d25e10(plVar19);
      FUN_142d10430(plVar19);
    }
  }
  if (*(int *)(param_2 + 0x200) < 1) {
    FUN_140e28240(plVar20);
  }
  else {
    FUN_140e1b300();
    uVar27 = 0;
    if (*(int *)(param_2 + 0x200) != 0) {
      do {
        iVar10 = *(int *)(*(longlong *)(param_2 + 0x1f8) + (longlong)(int)uVar27 * 4);
        if ((iVar10 < 0) || (*(int *)(param_2 + 0x1f0) <= iVar10)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          local_210 = (uint *)0x0;
          puVar16 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)(param_2 + 0x1e8));
          iVar10 = *(int *)(puVar16 + 1);
          pvVar3 = (void *)*puVar16;
          if (iVar10 == 0) {
            puVar21 = (uint *)0x0;
            local_170 = iVar10;
            local_16c = 0;
          }
          else {
            local_208._0_4_ = iVar10;
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_210,iVar10,0);
            puVar21 = local_210;
            _guard_xfg_dispatch_icall_nop(local_210,pvVar3,(longlong)iVar10 * 2);
            local_170 = (int)local_208;
            local_16c = local_208._4_4_;
          }
          local_1b0 = 0;
          local_1a8 = 0;
          local_1a0 = 0;
          local_210 = (uint *)0x0;
          local_208 = 0;
          local_178 = puVar21;
          FUN_1417978e0(&local_1b0,&local_178);
          puVar21 = (uint *)FSoftObjectPath::TryLoad(&local_1b0);
          if ((puVar21 == (uint *)0x0) || (cVar8 = FUN_140cdf510(puVar21), cVar8 == '\0')) {
            puVar21 = (uint *)0x0;
          }
          if (local_1a8 != 0) {
            FMemory::Free();
          }
          if (puVar21 != (uint *)0x0) {
            FUN_140e36aa0(plVar20,uVar27,puVar21,1);
          }
        }
        uVar27 = uVar27 + 1;
        param_1 = local_190;
      } while (uVar27 < *(uint *)(param_2 + 0x200));
    }
  }
LAB_140ce8f61:
  if (((char)param_1[0x25] == '\x03') &&
     (lVar12 = (**(code **)(*param_1 + 0x148))(param_1), lVar12 != 0)) {
    uVar15 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar12 = UWorld::GetAuthGameMode<ABaseGameMode>(uVar15);
    if (lVar12 != 0) {
      bVar5 = false;
      *(int *)(lVar12 + 0x5ac) = *(int *)(lVar12 + 0x5ac) + 1;
      iVar10 = *(int *)(lVar12 + 0x5ac);
      iVar11 = *(int *)(lVar12 + 0x5a0) + -1;
      lVar13 = (longlong)iVar11;
      if (-1 < iVar11) {
        lVar14 = lVar13 << 4;
        bVar5 = false;
        do {
          lVar4 = *(longlong *)(lVar12 + 0x598);
          if (((*(int *)(lVar14 + 8 + lVar4) == 0) ||
              (plVar20 = *(longlong **)(lVar14 + lVar4), plVar20 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar20 + 0x40))(plVar20,param_1), cVar8 == '\0')) {
            bVar5 = true;
          }
          lVar14 = lVar14 + -0x10;
          lVar13 = lVar13 + -1;
        } while (-1 < lVar13);
        iVar10 = *(int *)(lVar12 + 0x5ac);
      }
      *(int *)(lVar12 + 0x5ac) = iVar10 + -1;
      if (bVar5) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                  ((longlong *)(lVar12 + 0x598),0);
      }
      FUN_14145e3d0(param_1);
    }
  }
  if (0 < *(int *)(param_2 + 0x144)) {
    if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) ||
       (cVar8 = (**(code **)(*param_1 + 0x768))(param_1), cVar8 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (((bVar5) && (param_1[399] != 0)) &&
       ((lVar12 = FUN_140cff230(param_1), lVar12 != 0 && (*(int *)(lVar12 + 0x428) == 0)))) {
      FUN_1414b21c0(param_1[399]);
    }
  }
  cVar8 = (**(code **)(*param_1 + 0x768))(param_1);
  if (((cVar8 != '\0') && (lVar12 = UWidgetComponent::GetRenderTarget(param_1), lVar12 != 0)) &&
     (cVar8 = FUN_140cdf3d0(lVar12), cVar8 != '\0')) {
    thunk_FUN_142f02af0(lVar12);
  }
  iVar10 = FUN_142235230(param_1);
  if (((iVar10 != 3) && (cVar8 = APlayerController::IsPrimaryPlayer(param_1), cVar8 != '\0')) &&
     ((lVar12 = FUN_140b825a0(param_1), lVar12 != 0 && (*(char *)(lVar12 + 0x6c6) == '\0')))) {
    FUN_140cd09a0(lVar12,*(undefined1 *)(param_2 + 0x310));
  }
  FUN_140a52100(param_1 + 0x323,param_2 + 0x218);
  FUN_140a51f90(param_1 + 0x328,param_2 + 0x240);
  FUN_140ce2f10(param_1 + 0x32a,param_2 + 0x2e8);
  cVar8 = (**(code **)(*param_1 + 0x768))(param_1);
  if ((cVar8 != '\0') && (cVar8 = APlayerController::IsPrimaryPlayer(param_1), cVar8 != '\0')) {
    uVar15 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar20 = (longlong *)FUN_140c12480(uVar15);
    if ((plVar20 != (longlong *)0x0) &&
       (lVar12 = (**(code **)(*plVar20 + 0x2b8))(plVar20), lVar12 != 0)) {
      FUN_1408e2f60(lVar12,param_2 + 0x318);
    }
  }
  lVar12 = param_1[400];
  param_1[0x351] = *(longlong *)(param_2 + 0x330);
  if (lVar12 != 0) {
    puVar16 = (undefined8 *)FUN_141297ab0(lVar12,&local_1e8);
    FUN_1412a1d80(lVar12,param_1,*puVar16,1);
  }
  if ((param_1[0x193] != 0) && (iVar10 = FUN_142235230(param_1), iVar10 != 3)) {
    FUN_140e2ec80(param_1[0x193]);
  }
  *(undefined1 *)((longlong)param_1 + 0xa4e) = 0;
  return;
}



// FUNCTION 140ce9370 FUN_140ce9370 body=271 status=ok
// SIG undefined FUN_140ce9370(void)

void FUN_140ce9370(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x848);
  if (lVar4 != 0) {
    lVar2 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_140d13890(param_1,lVar4,*(undefined1 *)(param_1 + 0x1060));
      if ((*(char *)(param_1 + 0x1060) != '\0') && (*(longlong *)(lVar4 + 0x4c0) != 0)) {
        UActorComponent::SetTickableWhenPaused(*(longlong *)(lVar4 + 0x4c0),0);
      }
      lVar2 = FUN_140e21bd0(lVar4);
      if (lVar2 != 0) {
        FUN_140d13890(param_1,lVar2,*(undefined1 *)(param_1 + 0x1060));
      }
      goto LAB_140ce9416;
    }
  }
  lVar4 = 0;
LAB_140ce9416:
  lVar2 = *(longlong *)(param_1 + 0x990);
  if ((lVar2 != 0) && (lVar2 != lVar4)) {
    FUN_140d13890(param_1,lVar2,*(undefined1 *)(param_1 + 0x1060));
    if ((*(char *)(param_1 + 0x1060) != '\0') &&
       (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x990) + 0x4c0), lVar4 != 0)) {
      UActorComponent::SetTickableWhenPaused(lVar4,0);
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x990) + 0xa58))();
      UActorComponent::SetTickableWhenPaused(uVar3,0);
    }
  }
  return;
}



// FUNCTION 140ce9480 FUN_140ce9480 body=114 status=ok
// SIG undefined FUN_140ce9480(void)

ulonglong FUN_140ce9480(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x848);
  if (lVar2 != 0) {
    lVar3 = FUN_1413ffe00();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      in_RAX = FUN_140e27b70(lVar2);
      if (((char)in_RAX != '\0') && (*(longlong *)(lVar2 + 0x2418) != 0)) {
        uVar4 = FUN_140e7fb30();
        return uVar4;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140ce9500 FUN_140ce9500 body=832 status=ok
// SIG undefined FUN_140ce9500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ce9500(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_308 [32];
  undefined4 local_2e8;
  undefined8 *local_2e0;
  undefined8 local_2d8;
  undefined8 *local_2c8;
  undefined1 *puStack_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined1 local_2a8 [16];
  undefined8 *local_298;
  undefined1 *puStack_290;
  undefined8 local_288;
  longlong *local_280;
  undefined8 local_270;
  longlong local_268;
  undefined1 local_258 [520];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  if ((*(uint *)(param_3 + 0x44) >> 1 & 1) != 0) {
    lVar9 = 0;
    lVar2 = param_1[0x91];
    if (param_1[0x124] != 0) {
      lVar9 = *(longlong *)(param_1[0x124] + 0x180);
    }
    lVar6 = FUN_142df3580(param_2);
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar3 = *(longlong *)(DAT_146b33f38 + 0xd8);
    if ((((lVar2 != 0) && (lVar9 != 0)) && (lVar6 != 0)) &&
       ((lVar3 != 0 && (lVar7 = FUN_142d60b70(param_2,local_2a8), lVar7 != 0)))) {
      local_2b8 = 0;
      if (*(longlong *)(lVar3 + 0x150) != 0) {
        plVar10 = *(longlong **)(lVar7 + 0x188);
        plVar1 = plVar10 + *(int *)(lVar7 + 400);
        for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
          if (*plVar10 == *(longlong *)(lVar3 + 0x150)) {
            return;
          }
        }
      }
      FUN_1421d3220(lVar7 + 0x188);
      iVar5 = FUN_142de8c20(lVar9,lVar6);
      if (iVar5 == 2) {
        lVar2 = *(longlong *)(lVar2 + 0x168);
        if (lVar2 == 0) {
          local_2c8 = _DAT_1468b5d90;
          fVar11 = DAT_1468b5d98;
        }
        else {
          local_2c8 = *(undefined8 **)(lVar2 + 0x220);
          fVar11 = *(float *)(lVar2 + 0x228);
        }
        puVar4 = local_2c8;
        lVar2 = *(longlong *)(param_2 + 0x168);
        if (lVar2 == 0) {
          local_2c8 = _DAT_1468b5d90;
          fVar12 = DAT_1468b5d98;
        }
        else {
          local_2c8 = *(undefined8 **)(lVar2 + 0x220);
          fVar12 = *(float *)(lVar2 + 0x228);
        }
        local_2b8._0_4_ = SUB84(puVar4,0);
        local_2b8._0_4_ = SUB84(local_2c8,0) - (float)local_2b8;
        local_2b8._4_4_ = (float)((ulonglong)puVar4 >> 0x20);
        local_2b8._4_4_ = (float)((ulonglong)local_2c8 >> 0x20) - local_2b8._4_4_;
        fVar12 = local_2b8._4_4_ * local_2b8._4_4_ + (float)local_2b8 * (float)local_2b8 +
                 (fVar12 - fVar11) * (fVar12 - fVar11);
        fVar11 = *(float *)(lVar3 + 0x148) - *(float *)(lVar3 + 0x14c);
        if ((fVar11 * fVar11 <= fVar12) &&
           (fVar11 = *(float *)(lVar3 + 0x14c) + *(float *)(lVar3 + 0x148),
           fVar12 <= fVar11 * fVar11)) {
          local_2b8 = 0;
          local_2b0 = 0;
          local_288 = *(undefined8 *)(lVar3 + 0x100);
          local_270 = *(undefined8 *)(lVar3 + 0x108);
          local_2c8 = &local_288;
          puStack_2c0 = local_258;
          local_280 = param_1;
          local_268 = param_2;
          local_298 = local_2c8;
          puStack_290 = puStack_2c0;
          FUN_1405e1200(local_258,&local_298);
          local_2b8 = CONCAT44(0xffffffff,(float)local_2b8);
          local_2b0 = 0;
          uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
          local_2d8 = 0;
          local_2e0 = &local_2b8;
          local_2e8 = 0;
          FUN_1405f8040(&local_2c8,uVar8,*(undefined8 *)(lVar3 + 0x158),local_258);
          if (local_50 != 0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ce9840 FUN_140ce9840 body=3311 status=ok
// SIG undefined FUN_140ce9840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ce9840(longlong *param_1,char param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  float *pfVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_388 [32];
  longlong *local_368;
  undefined8 local_360;
  undefined4 *local_358;
  undefined8 local_350;
  undefined1 local_348;
  undefined8 local_338;
  float local_330;
  longlong *local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined1 local_304;
  undefined4 local_300;
  uint local_2fc;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  float local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  undefined2 *local_2c0;
  int local_2b8;
  undefined8 *local_2b0;
  int local_2a8;
  longlong *local_2a0;
  int local_298;
  undefined2 *local_290;
  int local_288;
  longlong local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  longlong *local_260;
  undefined1 local_258;
  longlong local_250 [3];
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  longlong local_228 [2];
  undefined8 local_218;
  undefined8 local_210;
  undefined1 local_208 [12];
  undefined1 local_1fc [12];
  undefined1 local_1f0 [24];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [48];
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_188 [8];
  undefined8 local_180;
  code *local_178;
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 local_f0;
  undefined1 local_dc;
  undefined1 local_c8;
  undefined1 local_b4;
  undefined1 local_a0;
  undefined1 local_8c;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  lVar6 = (**(code **)(*param_1 + 0x148))();
  lVar7 = FUN_1422312c0(param_1);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140ce98c7;
  }
  lVar7 = 0;
LAB_140ce98c7:
  if (param_2 == '\0') {
    iVar5 = FUN_142235230(param_1);
    if ((iVar5 != 3) && (cVar4 = APlayerController::IsPrimaryPlayer(param_1), cVar4 != '\0')) {
      return;
    }
    if (*(char *)((longlong)param_1 + 0x1a04) != '\0') {
      return;
    }
    local_318 = 0x142;
    cVar4 = FUN_1423d94f0(param_1,0x142);
    if (cVar4 == '\0') {
      return;
    }
    if (lVar7 == 0) {
      return;
    }
    cVar4 = FUN_140bca8a0(lVar7);
    if (cVar4 != '\0') {
      return;
    }
    cVar4 = FUN_140d01b90(param_1);
    if (cVar4 != '\0') {
      return;
    }
  }
  lVar7 = FUN_142f3fe30(lVar6,&DAT_1468b5d90,0);
  if ((lVar7 != 0) && (plVar11 = *(longlong **)(lVar7 + 0x118), plVar11 != (longlong *)0x0)) {
    lVar7 = AXUsableActorScriptedBotEncounter::GetPrivateStaticClass();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      cVar4 = (**(code **)(*plVar11 + 0x5d0))(plVar11);
      if (cVar4 == '\0') {
        local_2c8 = plVar11[3];
        FName::ToString(&local_2c8,&local_290);
        puVar17 = &DAT_143f3eda8;
        if (local_288 != 0) {
          puVar17 = local_290;
        }
        FString::PrintfImpl(&local_2f8,L"Travel station %s does not have an active CameraComponent",
                            puVar17);
        local_358 = &DAT_1464aa770;
        local_368 = &local_2f8;
        local_360 = CONCAT71(local_360._1_7_,1);
        AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b17150);
        if (local_2f8 != (code *)0x0) {
          FMemory::Free();
        }
        if (local_290 == (undefined2 *)0x0) {
          return;
        }
        FMemory::Free();
        return;
      }
      local_218 = FUN_14290f3e0();
      lVar7 = (**(code **)(*plVar11 + 0x628))(plVar11,local_218);
      if (lVar7 == 0) {
        local_2d0 = plVar11[3];
        FName::ToString(&local_2d0,&local_2a0);
        plVar11 = (longlong *)&DAT_143f3eda8;
        if (local_298 != 0) {
          plVar11 = local_2a0;
        }
        FString::PrintfImpl(local_228,L"Travel station %s does not have a CameraComponent",plVar11);
        local_358 = &DAT_1464aa770;
        local_368 = local_228;
        local_360 = CONCAT71(local_360._1_7_,1);
        AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b17150);
        if (local_228[0] != 0) {
          FMemory::Free();
        }
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x1a04) = 1;
        iVar5 = FUN_142235230(param_1);
        if (iVar5 == 3) {
          FUN_141460c00(param_1,1);
        }
        lVar8 = UWidgetComponent::GetRenderTarget(param_1);
        if (lVar8 != 0) {
          lVar9 = FUN_142f27b90();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (lVar9 = (**(code **)(param_1[0x130] + 0x10))(), lVar9 != 0)) {
            lVar10 = FUN_1414d9130();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (((bVar3) && (*(longlong *)(lVar8 + 0x5e8) == 0)) &&
               (lVar8 = FUN_1405ec200(lVar9 + 0x10b8), lVar8 != 0)) {
              lVar9 = UTextureRenderTargetCube::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                FUN_142f0da10(param_1,lVar8);
              }
            }
          }
        }
        lVar8 = UWidgetComponent::GetRenderTarget(param_1);
        if (lVar8 != 0) {
          lVar9 = FUN_142f27b90();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (lVar8 = (**(code **)(param_1[0x130] + 0x10))(), lVar8 != 0)) {
            lVar9 = FUN_1414d9130();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar3) && (lVar8 = FUN_1405ec200(lVar8 + 0x10e0), lVar8 != 0)) {
              lVar9 = FUN_142f25420();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                FUN_142f02570(param_1,lVar8,0);
              }
            }
          }
        }
        local_2fc = local_2fc & 0xfffffffe;
        local_308 = 0;
        local_300 = 0x40000000;
        *(undefined1 *)(param_1 + 0xa7) = 0;
        local_304 = 1;
        (**(code **)(*param_1 + 0xe18))(param_1,plVar11,&local_308);
        local_328 = (longlong *)0x0;
        local_320 = 0;
        FUN_14238cc80(lVar7,&local_328);
        plVar18 = local_328 + (int)local_320;
        for (plVar16 = local_328; plVar16 != plVar18; plVar16 = plVar16 + 1) {
          lVar7 = *plVar16;
          lVar8 = UUGButton::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            lVar7 = *plVar16;
            if (lVar7 != 0) {
              lVar8 = UUGButton::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                puVar14 = (undefined8 *)
                          (**(code **)(*(longlong *)(lVar7 + 0x720) + 0x20))
                                    (lVar7 + 0x720,local_208);
                local_338 = *puVar14;
                local_330 = *(float *)(puVar14 + 1);
                uVar12 = (**(code **)(*(longlong *)(lVar7 + 0x720) + 0x28))(lVar7 + 0x720,local_1fc)
                ;
                pfVar15 = (float *)FRotator::Quaternion(uVar12,local_1d8);
                local_238 = *pfVar15;
                fStack_234 = pfVar15[1];
                fStack_230 = pfVar15[2];
                fStack_22c = pfVar15[3];
                auVar24._0_4_ = *(uint *)(lVar7 + 0x230) & _DAT_14686db50;
                auVar24._4_4_ = *(uint *)(lVar7 + 0x234) & uRam000000014686db54;
                auVar24._8_4_ = *(uint *)(lVar7 + 0x238) & uRam000000014686db58;
                auVar24._12_4_ = *(uint *)(lVar7 + 0x23c) & uRam000000014686db5c;
                auVar25._4_4_ = auVar24._8_4_;
                auVar25._0_4_ = auVar24._4_4_;
                auVar25._8_4_ = auVar24._0_4_;
                auVar25._12_4_ = auVar24._12_4_;
                auVar25 = minps(auVar24,auVar25);
                auVar2._4_4_ = auVar24._0_4_;
                auVar2._0_4_ = auVar24._8_4_;
                auVar2._8_4_ = auVar24._4_4_;
                auVar2._12_4_ = auVar24._12_4_;
                auVar25 = minps(auVar25,auVar2);
                local_2e8 = auVar25._0_4_;
                fVar23 = -(local_2e8 * *(float *)(lVar7 + 0x710));
                fVar22 = -(fVar23 * local_238) + -(fVar23 * local_238);
                fVar21 = fVar23 * fStack_234 + fVar23 * fStack_234;
                local_338 = CONCAT44(local_338._4_4_ + fStack_230 * fVar21 + fVar22 * fStack_22c,
                                     (float)local_338 + (fStack_22c * fVar21 - fVar22 * fStack_230))
                ;
                local_330 = local_330 + (fVar22 * local_238 - fStack_234 * fVar21) + fVar23;
                goto LAB_140ce9ddf;
              }
            }
            break;
          }
        }
        local_2e0 = plVar11[3];
        FName::ToString(&local_2e0,&local_2c0);
        puVar17 = &DAT_143f3eda8;
        if (local_2b8 != 0) {
          puVar17 = local_2c0;
        }
        FString::PrintfImpl(local_250,
                            L"Travel station %s\'s CameraComponent is not parented to a TravelStationSpawnPointComponent"
                            ,puVar17);
        local_358 = &DAT_1464aa770;
        local_368 = local_250;
        local_360 = CONCAT71(local_360._1_7_,1);
        AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b17150);
        if (local_250[0] != 0) {
          FMemory::Free();
        }
        if (local_2c0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_14686e2b8) &&
           (_Init_thread_header(&DAT_14686e2b8), DAT_14686e2b8 == -1)) {
          FName::FName(&DAT_14686e2b0,L"StandInSocket",1);
          _Init_thread_footer(&DAT_14686e2b8);
        }
        local_210 = USoundSourceBus::GetPrivateStaticClass();
        AActor::GetComponentsByClass(plVar11,&local_2b0,local_210);
        uVar19 = 0;
        uVar20 = (ulonglong)((longlong)(local_2b0 + local_2a8) + (7 - (longlong)local_2b0)) >> 3;
        if (local_2b0 + local_2a8 < local_2b0) {
          uVar20 = uVar19;
        }
        puVar14 = local_2b0;
        if (uVar20 != 0) {
          do {
            plVar11 = (longlong *)*puVar14;
            cVar4 = (**(code **)(*plVar11 + 0x440))(plVar11,DAT_14686e2b0);
            if (cVar4 != '\0') {
              USceneComponent::GetSocketWorldLocationAndRotation
                        (plVar11,DAT_14686e2b0,&local_338,&local_238);
            }
            puVar14 = puVar14 + 1;
            uVar19 = uVar19 + 1;
          } while (uVar19 != uVar20);
        }
        if (local_2b0 != (undefined8 *)0x0) {
          FMemory::Free(local_2b0);
        }
LAB_140ce9ddf:
        plVar11 = (longlong *)FActorSpawnParameters::FActorSpawnParameters(local_1c8);
        uVar12 = FQuat::Rotator(&local_238,local_1f0);
        uVar13 = FUN_1414b4c90();
        local_368 = plVar11;
        lVar7 = UWorld::SpawnActor(lVar6,uVar13,&local_338,uVar12);
        param_1[0x228] = lVar7;
        if (lVar7 != 0) {
          *(byte *)(lVar7 + 0x738) = *(byte *)(lVar7 + 0x738) | 2;
          local_280 = param_1[0x14b];
          local_278 = 0;
          local_270 = 0;
          uStack_268 = 0;
          local_260 = (longlong *)0x0;
          local_258 = 0;
          *(undefined1 *)(param_1[0x228] + 0x4a8) = 2;
          FUN_140e5d400(param_1[0x228],param_1[0x225],param_1[0x226],param_1[0x227]);
          FUN_140e53440(param_1[0x228],&local_280);
          uVar12 = GetTransientPackage();
          FUN_1417846f0(uVar12,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          local_310 = 0;
          uVar13 = FUN_1414707f0();
          local_348 = 0;
          local_350 = 0;
          local_358 = (undefined4 *)((ulonglong)local_358 & 0xffffffffffffff00);
          local_360 = 0;
          local_368 = (longlong *)((ulonglong)local_368 & 0xffffffff00000000);
          uVar12 = FUN_1417985e0(uVar13,uVar12,0,0);
          FUN_140d09c40(param_1,uVar12);
          local_128 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_78 = 0;
          lStack_70 = 0;
          local_120 = 0;
          local_108 = 0;
          local_f0 = 0;
          local_dc = 0;
          local_c8 = 0;
          local_b4 = 0;
          local_a0 = 0;
          local_8c = 0;
          local_88 = 0;
          local_80 = 0;
          local_68 = 0;
          FUN_140e4a660(&local_128,uVar12);
          FUN_140e64bc0(param_1[0x228],&local_128);
          if (lStack_70 != 0) {
            FMemory::Free();
          }
          if (local_88 != 0) {
            FMemory::Free();
          }
          plVar11 = local_260;
          local_8c = 0;
          local_a0 = 0;
          local_b4 = 0;
          local_c8 = 0;
          local_dc = 0;
          local_f0 = 0;
          if (local_260 != (longlong *)0x0) {
            LOCK();
            plVar18 = local_260 + 1;
            lVar7 = *plVar18;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_260)(local_260);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_14686e2c8) &&
           (_Init_thread_header(&DAT_14686e2c8), DAT_14686e2c8 == -1)) {
          FName::FName(&DAT_14686e2c0,L"LateJoiningActorCulling",1);
          _Init_thread_footer(&DAT_14686e2c8);
        }
        local_2d8 = DAT_14686e2c0;
        FUN_142dafbc0(param_1 + 0x20d,&local_2d8);
        uVar12 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar7 = FUN_140e4ba40(uVar12);
        local_2a0 = local_328;
        if (lVar7 != 0) {
          FUN_140e5a0a0(lVar7);
          local_2a0 = local_328;
        }
      }
      if (local_2a0 == (longlong *)0x0) {
        return;
      }
      FMemory::Free();
      return;
    }
  }
  if (param_2 == '\0') {
    uStack_2f0 = 0;
    local_2f8 = FUN_140ce9840;
    plVar11 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = (longlong)&PTR_FUN_1444f84e8;
      FWeakObjectPtr::operator=(plVar11 + 1,param_1);
      *(undefined4 *)(plVar11 + 2) = (undefined4)local_2f8;
      *(undefined4 *)((longlong)plVar11 + 0x14) = local_2f8._4_4_;
      *(undefined4 *)(plVar11 + 3) = uStack_2f0;
      *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_2ec;
      *(undefined1 *)(plVar11 + 4) = 0;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar11[5] = lVar7;
      *plVar11 = (longlong)&PTR_FUN_1444f8530;
    }
    if (*(longlong *)(lVar6 + 400) == 0) {
      uVar12 = *(undefined8 *)(lVar6 + 0x3f8);
    }
    else {
      uVar12 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
    }
    local_198 = 0;
    local_190 = 0;
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x30))(plVar11,&local_198);
    }
    FWeakObjectPtr::operator=(local_188,0);
    local_180 = 0;
    local_178 = AK::MemoryMgr::StartProfileThreadUsage;
    local_148 = (longlong *)0x0;
    local_138 = 0;
    FUN_142880af0(uVar12,&local_198);
    if (local_138 != 0) {
      plVar18 = local_168;
      if (local_148 != (longlong *)0x0) {
        plVar18 = local_148;
      }
      if (plVar18 != (longlong *)0x0) {
        (**(code **)(*plVar18 + 0x10))(plVar18,0);
      }
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_198);
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x28))(plVar11,0);
      lVar7 = FMemory::Realloc(plVar11,0,0);
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
    }
  }
  return;
}



// FUNCTION 140cea530 FUN_140cea530 body=6149 status=ok
// SIG undefined FUN_140cea530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140ceba35) */
/* WARNING: Removing unreachable block (ram,0x000140ceba45) */
/* WARNING: Removing unreachable block (ram,0x000140ceba52) */
/* WARNING: Removing unreachable block (ram,0x000140ceba67) */

void FUN_140cea530(longlong *param_1)

{
  int iVar1;
  void *_Src;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  int *piVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong **pplVar19;
  longlong *plVar20;
  wchar_t **ppwVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int *piVar25;
  undefined2 *puVar26;
  longlong lVar27;
  int iVar28;
  wchar_t *pwVar29;
  bool bVar30;
  undefined1 auStack_4e8 [32];
  undefined4 local_4c8;
  undefined8 local_4c0;
  undefined1 local_4b8;
  undefined8 local_4b0;
  undefined1 local_4a8;
  ulonglong local_498;
  int local_490;
  int local_48c;
  longlong local_488;
  int local_480;
  int local_47c;
  longlong local_478;
  int local_470;
  int local_46c;
  longlong local_468;
  int local_460;
  int local_45c;
  longlong local_458;
  undefined2 *local_450;
  int local_448;
  int local_444;
  undefined8 local_440;
  undefined4 uStack_438;
  undefined4 uStack_434;
  longlong local_430;
  longlong *local_428;
  longlong *local_420;
  wchar_t *local_418;
  int local_410;
  wchar_t *local_408;
  int local_400;
  undefined4 local_3fc;
  longlong local_3f8;
  longlong *local_3f0;
  longlong *local_3e8;
  int local_3e0;
  undefined2 *local_3d8;
  undefined8 local_3d0;
  wchar_t *local_3c8;
  int local_3c0;
  undefined4 uStack_3bc;
  wchar_t *local_3b8;
  int local_3b0;
  undefined4 local_3ac;
  longlong local_3a8;
  int local_3a0;
  longlong *local_398;
  longlong *local_390;
  longlong *local_388;
  undefined8 local_380;
  longlong *local_378;
  longlong *local_370;
  wchar_t *local_368;
  undefined8 local_360;
  undefined8 local_358;
  longlong *local_350;
  wchar_t *local_348;
  undefined4 local_340;
  undefined4 local_33c;
  longlong *local_338;
  undefined4 local_330;
  undefined8 local_328;
  longlong *plStack_320;
  longlong local_318;
  longlong local_310;
  wchar_t *local_308;
  undefined8 local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  longlong *local_2b0;
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [8];
  wchar_t *local_298;
  undefined1 local_290 [8];
  undefined1 local_288 [8];
  undefined1 local_280 [8];
  longlong *local_278;
  undefined1 local_270 [8];
  longlong *local_268;
  undefined1 local_260 [8];
  longlong *local_258;
  undefined1 local_250 [16];
  longlong local_240 [2];
  uint local_230 [2];
  longlong local_228;
  longlong local_220;
  int local_218;
  int local_210;
  char local_20c;
  int local_208;
  longlong local_200;
  longlong local_1f8;
  int local_1f0;
  undefined8 local_1e0;
  char local_1d8;
  longlong local_1d0 [2];
  char local_1c0;
  undefined1 local_1b8 [128];
  longlong local_138;
  undefined8 local_130;
  undefined1 local_118 [224];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_4e8;
  pwVar29 = (wchar_t *)0x0;
  local_498 = local_498 & 0xffffffff00000000;
  local_388 = param_1;
  FUN_1426fb640();
  if (((char)param_1[0x25] == '\x03') && (lVar7 = FUN_1407c7450(param_1), lVar7 != 0)) {
    FUN_1407cfa40(lVar7,param_1);
  }
  FUN_140d12d80(param_1);
  pwVar8 = (wchar_t *)FUN_1422312c0(param_1);
  if (pwVar8 == (wchar_t *)0x0) {
LAB_140cea5e8:
    pwVar8 = pwVar29;
  }
  else {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar30 = false;
    }
    else {
      bVar30 = true;
    }
    if (!bVar30) goto LAB_140cea5e8;
  }
  uVar9 = (**(code **)(*(longlong *)pwVar8 + 0x3c0))(pwVar8);
  FWeakObjectPtr::operator=(param_1 + 0x196,uVar9);
  cVar4 = (**(code **)(*param_1 + 0x768))(param_1);
  if ((cVar4 != '\0') && (lVar7 = *(longlong *)(pwVar8 + 0x2dc), lVar7 != 0)) {
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTextChatLogChanged",L"::");
    pwVar8 = pwVar29;
    while (pwVar13 = pwVar10, pwVar13 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
      pwVar8 = pwVar13;
    }
    FName::FName(&local_318,pwVar8 + 2,1);
    FWeakObjectPtr::operator=(&local_490,0);
    local_488 = 0;
    FWeakObjectPtr::operator=(&local_490,param_1);
    local_488 = local_318;
    local_498 = 0;
    if ((local_318 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_490), lVar11 != 0)) {
      UObject::FindFunction(lVar11,local_488);
    }
    piVar25 = *(int **)(lVar7 + 0x28);
    iVar28 = *(int *)(lVar7 + 0x30);
    for (piVar15 = piVar25; piVar15 != piVar25 + (longlong)iVar28 * 4; piVar15 = piVar15 + 4) {
      if (((*piVar15 == local_490) && (piVar15[1] == local_48c)) ||
         ((cVar4 = FWeakObjectPtr::IsValid(piVar15), cVar4 == '\0' &&
          (cVar4 = FWeakObjectPtr::IsValid(&local_490), cVar4 == '\0')))) {
        bVar30 = true;
      }
      else {
        bVar30 = false;
      }
      if ((bVar30) && (*(longlong *)(piVar15 + 2) == local_488)) {
        bVar30 = true;
      }
      else {
        bVar30 = false;
      }
      if (bVar30) {
        if ((int)((longlong)piVar15 - (longlong)piVar25 >> 4) != -1) goto LAB_140cea781;
        break;
      }
    }
    iVar28 = *(int *)(lVar7 + 0x30);
    *(int *)(lVar7 + 0x30) = iVar28 + 1;
    if (*(int *)(lVar7 + 0x34) < iVar28 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar7 + 0x28,iVar28);
    }
    piVar25 = (int *)((longlong)iVar28 * 0x10 + *(longlong *)(lVar7 + 0x28));
    *piVar25 = local_490;
    piVar25[1] = local_48c;
    *(longlong *)(piVar25 + 2) = local_488;
LAB_140cea781:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar7 + 0x28);
  }
  lVar7 = param_1[0x241];
  if (lVar7 == 0) {
    plVar12 = (longlong *)FName::FName(local_290,L"DefaultAimAssistParameters",1);
    local_498 = 0;
    lVar7 = *plVar12;
    if (lVar7 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar9 = FUN_1413e4fc0();
    local_4a8 = 0;
    local_4b0 = 0;
    local_4b8 = 0;
    local_4c0 = 0;
    local_4c8 = 0;
    lVar7 = FUN_1417985e0(uVar9,param_1,lVar7,0);
    param_1[0x241] = lVar7;
  }
  param_1[0x240] = lVar7;
  *(undefined1 *)(param_1 + 0xcf) = 1;
  if ((param_1[0x18c] != 0) && ((*(uint *)(param_1 + 1) >> 4 & 1) == 0)) {
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AOakPlayerController::ReceiveMissionRewards",L"::");
    pwVar8 = pwVar29;
    while (pwVar13 = pwVar10, pwVar13 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
      pwVar8 = pwVar13;
    }
    FName::FName(&local_310,pwVar8 + 2,1);
    lVar7 = param_1[0x18c];
    plVar12 = (longlong *)(lVar7 + 0x1a8);
    FWeakObjectPtr::operator=(&local_480,0);
    local_478 = 0;
    FWeakObjectPtr::operator=(&local_480,param_1);
    local_478 = local_310;
    local_498 = 0;
    if ((local_310 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_480), lVar11 != 0)) {
      UObject::FindFunction(lVar11,local_478);
    }
    piVar25 = (int *)*plVar12;
    iVar28 = *(int *)(lVar7 + 0x1b0);
    for (piVar15 = piVar25; piVar15 != piVar25 + (longlong)iVar28 * 4; piVar15 = piVar15 + 4) {
      if (((*piVar15 == local_480) && (piVar15[1] == local_47c)) ||
         ((cVar4 = FWeakObjectPtr::IsValid(piVar15), cVar4 == '\0' &&
          (cVar4 = FWeakObjectPtr::IsValid(&local_480), cVar4 == '\0')))) {
        bVar30 = true;
      }
      else {
        bVar30 = false;
      }
      if ((bVar30) && (*(longlong *)(piVar15 + 2) == local_478)) {
        bVar30 = true;
      }
      else {
        bVar30 = false;
      }
      if (bVar30) {
        if ((int)((longlong)piVar15 - (longlong)piVar25 >> 4) != -1) goto LAB_140cea98c;
        break;
      }
    }
    iVar28 = *(int *)(lVar7 + 0x1b0);
    *(int *)(lVar7 + 0x1b0) = iVar28 + 1;
    if (*(int *)(lVar7 + 0x1b4) < iVar28 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar28);
    }
    piVar25 = (int *)((longlong)iVar28 * 0x10 + *plVar12);
    *piVar25 = local_480;
    piVar25[1] = local_47c;
    *(longlong *)(piVar25 + 2) = local_478;
LAB_140cea98c:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
  }
  pwVar10 = _guard_xfg_dispatch_icall_nop
                      (L"&AOakPlayerController::NotifyPrimaryCharacterChanged",L"::");
  pwVar8 = pwVar29;
  while (pwVar13 = pwVar10, pwVar13 != (wchar_t *)0x0) {
    pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
    pwVar8 = pwVar13;
  }
  FName::FName(&local_2e0,pwVar8 + 2,1);
  plVar12 = param_1 + 0x118;
  FWeakObjectPtr::operator=(&local_470,0);
  local_468 = 0;
  FWeakObjectPtr::operator=(&local_470,param_1);
  local_468 = local_2e0;
  local_498 = 0;
  if ((local_2e0 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_470), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_468);
  }
  piVar25 = (int *)*plVar12;
  lVar7 = param_1[0x119];
  for (piVar15 = piVar25; piVar15 != piVar25 + (longlong)(int)lVar7 * 4; piVar15 = piVar15 + 4) {
    if (((*piVar15 == local_470) && (piVar15[1] == local_46c)) ||
       ((cVar4 = FWeakObjectPtr::IsValid(piVar15), cVar4 == '\0' &&
        (cVar4 = FWeakObjectPtr::IsValid(&local_470), cVar4 == '\0')))) {
      bVar30 = true;
    }
    else {
      bVar30 = false;
    }
    if ((bVar30) && (*(longlong *)(piVar15 + 2) == local_468)) {
      bVar30 = true;
    }
    else {
      bVar30 = false;
    }
    if (bVar30) {
      if ((int)((longlong)piVar15 - (longlong)piVar25 >> 4) != -1) goto LAB_140ceaae0;
      break;
    }
  }
  iVar28 = (int)param_1[0x119];
  *(int *)(param_1 + 0x119) = iVar28 + 1;
  if (*(int *)((longlong)param_1 + 0x8cc) < iVar28 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar28);
  }
  piVar25 = (int *)((longlong)iVar28 * 0x10 + *plVar12);
  *piVar25 = local_470;
  piVar25[1] = local_46c;
  *(longlong *)(piVar25 + 2) = local_468;
LAB_140ceaae0:
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
  if (param_1[0x109] != 0) {
    FUN_140d03410(param_1);
  }
  cVar4 = (**(code **)(*param_1 + 0x768))(param_1);
  if (cVar4 != '\0') {
    pwVar8 = (wchar_t *)ALandscapeStreamingProxy::StaticClass();
    local_298 = pwVar8;
    local_300 = (**(code **)(*param_1 + 0x148))(param_1);
    local_308 = pwVar29;
    if (pwVar8 != (wchar_t *)0x0) {
      pwVar13 = (wchar_t *)ALandscapeStreamingProxy::StaticClass();
      pwVar10 = pwVar8;
      do {
        local_308 = pwVar8;
        if (pwVar10 == pwVar13) break;
        pwVar10 = *(wchar_t **)(pwVar10 + 0x18);
        local_308 = pwVar29;
      } while (pwVar10 != (wchar_t *)0x0);
    }
    local_230[0] = 5;
    local_1d8 = '\0';
    FUN_14044bc80(&local_228,&local_300,&local_308);
    FUN_14045a130(local_230);
    if (local_20c == '\0') {
LAB_140ceabb0:
      if (local_200 != 0) {
        FUN_140adbd90(local_200);
      }
      local_430 = local_228;
      iVar28 = local_210 + 1;
      if (iVar28 < local_1f0 + local_218) {
        lVar7 = (longlong)iVar28 * 8;
        iVar24 = local_1f0;
        iVar22 = local_218;
        do {
          lVar11 = 0;
          if (iVar28 < iVar22) {
            lVar27 = *(longlong *)(lVar7 + local_220);
          }
          else {
            lVar27 = *(longlong *)(local_1f8 + (longlong)(iVar28 - iVar22) * 8);
          }
          local_208 = local_208 + 1;
          if ((lVar27 != 0) &&
             (lVar14 = AActor::GetLevel(lVar27), iVar24 = local_1f0, iVar22 = local_218, lVar14 != 0
             )) {
            if ((local_230[0] & 1) != 0) {
              iVar1 = *(int *)(lVar27 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar23 = iVar1 >> 0x1f & 0xffff;
                uVar5 = iVar1 + uVar23;
                lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                         (longlong)(int)((uVar5 & 0xffff) - uVar23) * 0x18;
              }
              if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_140cead8f;
            }
            if (((local_230[0] >> 1 & 1) == 0) ||
               (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(lVar27), iVar24 = local_1f0,
               iVar22 = local_218, cVar4 != '\0')) {
              if ((local_230[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar14 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar14 + 0x205) & 0x10) == 0)) {
                  bVar30 = false;
                }
                else {
                  bVar30 = true;
                }
                piVar25 = *(int **)(lVar14 + 600);
                if (((*(longlong *)(lVar14 + 0xc0) == 0) ||
                    (piVar15 = (int *)UWorld::GetActiveLevelCollection(), piVar15 == (int *)0x0)) ||
                   (piVar25 == piVar15)) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
                if ((piVar25 == (int *)0x0) || (*piVar25 == 2)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if ((bVar2) || (bVar2 = false, bVar3)) {
                  bVar2 = true;
                }
                iVar24 = local_1f0;
                iVar22 = local_218;
                if ((!bVar30) || (!bVar2)) goto LAB_140cead8f;
              }
              lVar14 = ULevel::GetWorld(lVar14);
              lVar11 = local_430;
              iVar24 = local_1f0;
              iVar22 = local_218;
              if (lVar14 == local_430) {
                lVar14 = AActor::GetLevel(lVar27);
                if (lVar14 == *(longlong *)(lVar11 + 0x30)) goto LAB_140ceaeec;
                lVar11 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar27 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                  bVar30 = false;
                }
                else {
                  bVar30 = true;
                }
                iVar24 = local_1f0;
                iVar22 = local_218;
                if (!bVar30) goto LAB_140ceaeec;
              }
            }
          }
LAB_140cead8f:
          iVar28 = iVar28 + 1;
          lVar7 = lVar7 + 8;
          if (iVar24 + iVar22 <= iVar28) break;
        } while( true );
      }
      local_200 = 0;
      local_20c = '\x01';
    }
LAB_140ceadb1:
    if (local_1d8 != '\0') {
      local_1d8 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(local_228,local_1e0);
      if (local_1f8 != 0) {
        FMemory::Free();
      }
      if (local_220 != 0) {
        FMemory::Free();
      }
    }
  }
  pwVar29 = (wchar_t *)0x0;
  lVar7 = param_1[0x125];
  if (lVar7 != 0) {
    pwVar10 = _guard_xfg_dispatch_icall_nop
                        (L"&AOakPlayerController::AttemptSpottedEnemyCalloutForTargetPerceptionChange"
                         ,L"::");
    pwVar8 = pwVar29;
    while (pwVar13 = pwVar10, pwVar13 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
      pwVar8 = pwVar13;
    }
    FName::FName(&local_2f8,pwVar8 + 2,1);
    plVar12 = (longlong *)(lVar7 + 0x248);
    FWeakObjectPtr::operator=(&local_460,0);
    local_458 = 0;
    FWeakObjectPtr::operator=(&local_460,param_1);
    local_498 = 0;
    local_458 = local_2f8;
    if ((local_2f8 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_460), lVar11 != 0)) {
      UObject::FindFunction(lVar11,local_458);
    }
    piVar25 = (int *)*plVar12;
    iVar28 = *(int *)(lVar7 + 0x250);
    for (piVar15 = piVar25; piVar15 != piVar25 + (longlong)iVar28 * 4; piVar15 = piVar15 + 4) {
      if (((*piVar15 == local_460) && (piVar15[1] == local_45c)) ||
         ((cVar4 = FWeakObjectPtr::IsValid(piVar15), cVar4 == '\0' &&
          (cVar4 = FWeakObjectPtr::IsValid(&local_460), cVar4 == '\0')))) {
        bVar30 = true;
      }
      else {
        bVar30 = false;
      }
      if ((bVar30) && (*(longlong *)(piVar15 + 2) == local_458)) {
        bVar30 = true;
      }
      else {
        bVar30 = false;
      }
      if (bVar30) {
        if ((int)((longlong)piVar15 - (longlong)piVar25 >> 4) != -1) goto LAB_140ceaf73;
        break;
      }
    }
    iVar28 = *(int *)(lVar7 + 0x250);
    *(int *)(lVar7 + 0x250) = iVar28 + 1;
    if (*(int *)(lVar7 + 0x254) < iVar28 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar28);
    }
    piVar25 = (int *)((longlong)iVar28 * 0x10 + *plVar12);
    *piVar25 = local_460;
    piVar25[1] = local_45c;
    *(longlong *)(piVar25 + 2) = local_458;
LAB_140ceaf73:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
  }
  cVar4 = (**(code **)(*param_1 + 0x768))(param_1);
  if (cVar4 != '\0') {
    uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar7 = FUN_140e4ba40(uVar9);
    if (lVar7 != 0) {
      FUN_140e54ef0(lVar7);
    }
  }
  cVar4 = (**(code **)(*param_1 + 0x768))(param_1);
  if (cVar4 != '\0') {
    FUN_140ab85e0(param_1 + 0x348,param_1);
  }
  FStringTable::SetOwnerAsset(param_1 + 0x34d,param_1);
  FUN_140e91570(param_1 + 0x362,param_1);
  FUN_140d125c0(param_1);
  pwVar8 = (wchar_t *)(**(code **)(param_1[0x130] + 0x10))();
  if (pwVar8 == (wchar_t *)0x0) {
LAB_140ceb03b:
    pwVar8 = pwVar29;
  }
  else {
    lVar7 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar30 = false;
    }
    else {
      bVar30 = true;
    }
    if (!bVar30) goto LAB_140ceb03b;
  }
  lVar7 = FInternationalization::Get();
  plVar12 = *(longlong **)(lVar7 + 0x30);
  lVar7 = *(longlong *)(lVar7 + 0x28);
  local_3f8 = lVar7;
  local_3f0 = plVar12;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar20 = plVar12 + 1;
    lVar11 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar12)();
      LOCK();
      piVar25 = (int *)((longlong)plVar12 + 0xc);
      iVar28 = *piVar25;
      *piVar25 = *piVar25 + -1;
      UNLOCK();
      if (iVar28 == 1) {
        (**(code **)(*local_3f0 + 8))(local_3f0,1);
      }
    }
  }
  if (lVar7 == 0) {
    ppwVar21 = &local_368;
    local_368 = (wchar_t *)0x0;
    local_360 = 0;
    bVar2 = true;
    bVar30 = false;
    pwVar29 = local_3b8;
  }
  else {
    bVar2 = false;
    bVar30 = true;
    puVar16 = (undefined8 *)FCulture::GetName(local_3f8);
    local_3b8 = (wchar_t *)0x0;
    iVar28 = *(int *)(puVar16 + 1);
    _Src = (void *)*puVar16;
    local_3b0 = iVar28;
    if (iVar28 == 0) {
      ppwVar21 = &local_3b8;
      local_3ac = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_3b8,iVar28,0);
      pwVar29 = local_3b8;
      _guard_xfg_dispatch_icall_nop(local_3b8,_Src,(longlong)iVar28 * 2);
      ppwVar21 = &local_3b8;
    }
  }
  pwVar10 = local_368;
  local_410 = *(int *)(ppwVar21 + 1);
  lVar7 = (longlong)local_410;
  local_418 = (wchar_t *)0x0;
  if (local_410 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_418,local_410,0);
    _guard_xfg_dispatch_icall_nop(local_418,*ppwVar21,lVar7 * 2);
  }
  iVar28 = local_410;
  if ((bVar2) && (pwVar10 != (wchar_t *)0x0)) {
    FMemory::Free(pwVar10);
  }
  if ((bVar30) && (pwVar29 != (wchar_t *)0x0)) {
    FMemory::Free(pwVar29);
  }
  local_440 = (code *)thunk_FUN_142039c70();
  if (((pwVar8 != (wchar_t *)0x0) && (1 < iVar28)) && (local_440 != (code *)0x0)) {
    for (pwVar29 = local_418; pwVar29 != local_418 + iVar28; pwVar29 = pwVar29 + 1) {
      if (*pwVar29 == L'-') {
        iVar24 = (int)((longlong)pwVar29 - (longlong)local_418 >> 1);
        if (-1 < iVar24) {
          if (iVar28 == 0) {
            pwVar29 = L"";
            iVar28 = 0;
          }
          else {
            iVar28 = iVar28 + -1;
            pwVar29 = local_418;
          }
          local_408 = (wchar_t *)0x0;
          local_3fc = 0;
          if (iVar24 < iVar28) {
            iVar28 = iVar24;
          }
          local_400 = iVar28 + 1;
          if (iVar28 == 0) {
            local_400 = 0;
          }
          if ((0 < local_400) &&
             (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_408,0), pwVar10 = local_408,
             0 < local_400)) {
            wcsncpy(local_408,pwVar29,(longlong)iVar28);
            pwVar10[iVar28] = L'\0';
          }
          ppwVar21 = &local_408;
          bVar2 = true;
          bVar30 = false;
          goto LAB_140ceb284;
        }
        break;
      }
    }
    local_3c0 = iVar28;
    local_3c8 = (wchar_t *)0x0;
    if (iVar28 == 0) {
      uStack_3bc = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_3c8,iVar28,0);
      _guard_xfg_dispatch_icall_nop(local_3c8,local_418,(longlong)iVar28 * 2);
    }
    ppwVar21 = &local_3c8;
    bVar2 = false;
    bVar30 = true;
LAB_140ceb284:
    local_348 = *ppwVar21;
    *ppwVar21 = (wchar_t *)0x0;
    local_340 = *(undefined4 *)(ppwVar21 + 1);
    local_33c = *(undefined4 *)((longlong)ppwVar21 + 0xc);
    ppwVar21[1] = (wchar_t *)0x0;
    if ((bVar30) && (local_3c8 != (wchar_t *)0x0)) {
      FMemory::Free();
    }
    if ((bVar2) && (local_408 != (wchar_t *)0x0)) {
      FMemory::Free();
    }
    TSet<TTuple<FString,BuildPatchServices::FMockManifestField>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FMockManifestField,0>,FDefaultSetAllocator>
    ::FindId(pwVar8 + 0x7e0,&local_498,&local_348);
    if ((((int)local_498 != -1) &&
        (lVar7 = (longlong)(int)local_498 * 0x40 + *(longlong *)(pwVar8 + 0x7e0), lVar7 != 0)) &&
       (lVar7 != -0x10)) {
      FUN_14282a800(local_118);
      lVar7 = FUN_14283c290(local_118,lVar7 + 0x20,1,0);
      if ((lVar7 == 0) || (cVar4 = FUN_140cdf5b0(lVar7), cVar4 == '\0')) {
        lVar7 = 0;
      }
      FUN_14282cc40(local_118);
      if (lVar7 != 0) {
        local_2f0 = *(undefined8 *)(lVar7 + 0x18);
        FName::ToString(&local_2f0,&local_3d8);
        iVar28 = (int)local_3d0;
        iVar24 = local_3d0._4_4_;
        bVar30 = (int)local_3d0 != 0;
        local_450 = local_3d8;
        local_3d8 = (undefined2 *)0x0;
        local_448 = (int)local_3d0;
        local_444 = local_3d0._4_4_;
        local_3d0 = 0;
        if (iVar24 < (int)((5 - (uint)bVar30) + iVar28)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_450);
          iVar28 = local_448;
        }
        local_448 = (5 - (uint)(iVar28 != 0)) + iVar28;
        if (local_444 < local_448) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_450);
        }
        iVar24 = local_448;
        lVar11 = (longlong)iVar28 - (ulonglong)(iVar28 != 0);
        *(undefined8 *)(local_450 + lVar11) = 0x6600770073002e;
        local_450[lVar11 + 4] = 0;
        if (local_3d8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        puVar26 = &DAT_143f3eda8;
        if (iVar24 != 0) {
          puVar26 = local_450;
        }
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        TStringConversion<TStringConvert<wchar_t,char>,128>(local_1b8,puVar26);
        lVar11 = thunk_FUN_142039c70();
        plVar12 = *(longlong **)(lVar11 + 0x188);
        local_358 = *(undefined8 *)(lVar11 + 0x180);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_350 = plVar12;
        FUN_1432bc200(local_358,local_130);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar20 = plVar12 + 1;
          lVar11 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_350)();
            LOCK();
            piVar25 = (int *)((longlong)plVar12 + 0xc);
            iVar28 = *piVar25;
            *piVar25 = *piVar25 + -1;
            UNLOCK();
            if (iVar28 == 1) {
              (**(code **)(*local_350 + 8))(local_350,1);
            }
          }
        }
        if (local_138 != 0) {
          FMemory::Free();
        }
        FUN_14208e900(local_440,lVar7);
        if (local_450 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    if (local_348 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  plVar12 = local_388;
  lVar7 = FUN_1422312c0(local_388);
  if ((lVar7 == 0) || (cVar4 = FUN_140c2da80(lVar7), cVar4 == '\0')) {
    lVar7 = 0;
  }
  else {
    lVar11 = UGameInstance::GetGameViewportClient(lVar7);
    if ((lVar11 != 0) && (cVar4 = FUN_140cdf560(lVar11), cVar4 != '\0')) {
      local_440 = FUN_140d056e0;
      uStack_438 = 0;
      local_3a8 = 0;
      local_3a0 = 0;
      puVar16 = (undefined8 *)operator_new(0x30,&local_3a8);
      if (puVar16 != (undefined8 *)0x0) {
        *puVar16 = &PTR_FUN_1444f8638;
        FWeakObjectPtr::operator=(puVar16 + 1,plVar12);
        *(undefined4 *)(puVar16 + 2) = (undefined4)local_440;
        *(undefined4 *)((longlong)puVar16 + 0x14) = local_440._4_4_;
        *(undefined4 *)(puVar16 + 3) = uStack_438;
        *(undefined4 *)((longlong)puVar16 + 0x1c) = uStack_434;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar16[5] = uVar9;
        *puVar16 = &PTR_FUN_1444f8680;
      }
      if ((local_3a0 != 0) && (local_3a8 != 0)) {
        FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(lVar11 + 0x240,local_2a0,&local_3a8);
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3a8);
    }
  }
  lVar11 = 0;
  if ((*(uint *)(plVar12 + 1) >> 4 & 1) == 0) {
    uStack_438 = 0;
    local_440 = FUN_140d0b830;
    local_3e8 = (longlong *)0x0;
    local_3e0 = 0;
    puVar16 = (undefined8 *)operator_new(0x30,&local_3e8);
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = &PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(puVar16 + 1,plVar12);
      *(undefined4 *)(puVar16 + 2) = (undefined4)local_440;
      *(undefined4 *)((longlong)puVar16 + 0x14) = local_440._4_4_;
      *(undefined4 *)(puVar16 + 3) = uStack_438;
      *(undefined4 *)((longlong)puVar16 + 0x1c) = uStack_434;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar16[5] = uVar9;
      *puVar16 = &PTR_FUN_143fcff08;
    }
    iVar28 = local_3e0;
    plVar20 = local_3e8;
    if ((local_3e0 != 0) && (local_3e8 != (longlong *)0x0)) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57d0,1);
      plVar12 = (longlong *)(**(code **)(*plVar20 + 0x20))(plVar20,local_2a8);
      iVar24 = DAT_1464b57d8;
      lVar27 = (longlong)DAT_1464b57d8;
      lVar11 = *plVar12;
      DAT_1464b57d8 = DAT_1464b57d8 + 1;
      if (DAT_1464b57dc < DAT_1464b57d8) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57d0,iVar24);
      }
      puVar16 = (undefined8 *)(lVar27 * 0x10 + DAT_1464b57d0);
      *puVar16 = plVar20;
      local_3e8 = (longlong *)0x0;
      local_3e0 = 0;
      *(int *)(puVar16 + 1) = iVar28;
      plVar12 = local_388;
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3e8);
    plVar12[0x346] = lVar11;
  }
  plVar20 = (longlong *)0x0;
  FUN_140d18c40(plVar12);
  cVar4 = (**(code **)(*plVar12 + 0x768))(plVar12);
  if (cVar4 != '\0') {
    FUN_140d14880(plVar12);
    FUN_140d19010(plVar12);
  }
  if ((DAT_14686e1dc == '\0') && (lVar7 != 0)) {
    FUN_140ba53b0(lVar7);
    DAT_14686e1dc = '\x01';
  }
  cVar4 = (**(code **)(*plVar12 + 0x768))(plVar12);
  bVar30 = false;
  if (cVar4 == '\0') {
LAB_140ceb740:
    bVar2 = bVar30;
    bVar30 = false;
  }
  else {
    bVar2 = true;
    plVar17 = (longlong *)FUN_142dcf3a0(plVar12,local_280);
    bVar30 = true;
    if (*plVar17 == 0) goto LAB_140ceb740;
    bVar30 = true;
  }
  if ((bVar2) && (local_278 != (longlong *)0x0)) {
    LOCK();
    plVar17 = local_278 + 1;
    lVar7 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_278)(local_278);
      LOCK();
      piVar25 = (int *)((longlong)local_278 + 0xc);
      iVar28 = *piVar25;
      *piVar25 = *piVar25 + -1;
      UNLOCK();
      if (iVar28 == 1) {
        (**(code **)(*local_278 + 8))(local_278,1);
      }
    }
  }
  if (bVar30) {
    local_380 = 0;
    Online::GetVoiceInterface(&local_378,0);
    plVar17 = local_378;
    if (local_378 != (longlong *)0x0) {
      uStack_438 = 0;
      local_440 = FUN_140d06700;
      local_338 = plVar20;
      local_330 = uStack_438;
      puVar16 = (undefined8 *)operator_new(0x30,&local_338);
      if (puVar16 != (undefined8 *)0x0) {
        *puVar16 = &PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(puVar16 + 1,plVar12);
        *(undefined4 *)(puVar16 + 2) = (undefined4)local_440;
        *(undefined4 *)((longlong)puVar16 + 0x14) = local_440._4_4_;
        *(undefined4 *)(puVar16 + 3) = uStack_438;
        *(undefined4 *)((longlong)puVar16 + 0x1c) = uStack_434;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar16[5] = uVar9;
        *puVar16 = &PTR_FUN_143fcff08;
      }
      plVar18 = (longlong *)(**(code **)(*plVar17 + 0x20))(plVar17,local_288,&local_338);
      plVar12[0x35d] = *plVar18;
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_338);
      puVar16 = (undefined8 *)FUN_142dcf3a0(plVar12,local_270);
      local_2d8 = *puVar16;
      local_2d0 = (longlong *)puVar16[1];
      if (local_2d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2d0 + 1) = (int)local_2d0[1] + 1;
        UNLOCK();
        plVar17 = local_378;
      }
      (**(code **)(*plVar17 + 0x18))(plVar17,&local_2d8,1);
      plVar17 = local_2d0;
      if (local_2d0 != (longlong *)0x0) {
        LOCK();
        plVar18 = local_2d0 + 1;
        lVar7 = *plVar18;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_2d0)(local_2d0);
          LOCK();
          piVar25 = (int *)((longlong)plVar17 + 0xc);
          iVar28 = *piVar25;
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (iVar28 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17,1);
          }
        }
      }
      if (local_268 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_268 + 1;
        lVar7 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_268)(local_268);
          LOCK();
          piVar25 = (int *)((longlong)local_268 + 0xc);
          iVar28 = *piVar25;
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (iVar28 == 1) {
            (**(code **)(*local_268 + 8))(local_268,1);
          }
        }
      }
    }
    plVar17 = local_370;
    if (local_370 != (longlong *)0x0) {
      LOCK();
      plVar18 = local_370 + 1;
      lVar7 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_370)(local_370);
        LOCK();
        piVar25 = (int *)((longlong)plVar17 + 0xc);
        iVar28 = *piVar25;
        *piVar25 = *piVar25 + -1;
        UNLOCK();
        if (iVar28 == 1) {
          (**(code **)(*local_370 + 8))(local_370,1);
        }
      }
    }
  }
  cVar4 = (**(code **)(*plVar12 + 0x768))(plVar12);
  bVar30 = false;
  if (cVar4 != '\0') {
    bVar2 = true;
    plVar17 = (longlong *)FUN_142dcf3a0(plVar12,local_260);
    bVar30 = true;
    if (*plVar17 != 0) {
      bVar30 = true;
      goto LAB_140ceb972;
    }
  }
  bVar2 = bVar30;
  bVar30 = false;
LAB_140ceb972:
  if ((bVar2) && (local_258 != (longlong *)0x0)) {
    LOCK();
    plVar17 = local_258 + 1;
    lVar7 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_258)(local_258);
      LOCK();
      piVar25 = (int *)((longlong)local_258 + 0xc);
      iVar28 = *piVar25;
      *piVar25 = *piVar25 + -1;
      UNLOCK();
      if (iVar28 == 1) {
        (**(code **)(*local_258 + 8))(local_258,1);
      }
    }
  }
  if (bVar30) {
    local_430 = 0;
    local_2e8 = 0;
    plVar17 = (longlong *)FUN_1404b0000(&local_2e8);
    if (plVar17 != (longlong *)0x0) {
      puVar16 = (undefined8 *)(**(code **)(*plVar17 + 200))(plVar17,local_250);
      local_398 = (longlong *)*puVar16;
    }
    else {
      puVar16 = &local_328;
      local_328 = 0;
      plStack_320 = (longlong *)0x0;
      local_398 = plVar20;
    }
    local_390 = (longlong *)puVar16[1];
    puVar16[1] = 0;
    *puVar16 = 0;
    plVar18 = plStack_320;
    if ((plVar17 == (longlong *)0x0) && (plStack_320 != (longlong *)0x0)) {
      LOCK();
      plVar17 = plStack_320 + 1;
      lVar7 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_320)(plStack_320);
        LOCK();
        piVar25 = (int *)((longlong)plVar18 + 0xc);
        iVar28 = *piVar25;
        *piVar25 = *piVar25 + -1;
        UNLOCK();
        if (iVar28 == 1) {
          (**(code **)(*plStack_320 + 8))(plStack_320,1);
        }
      }
    }
    if (local_398 != (longlong *)0x0) {
      FUN_142dcf3a0(plVar12,&local_2b8);
      if (local_2b8 != 0) {
        local_2c0 = 0;
        local_2c8 = plVar20;
        uVar9 = (**(code **)(*plVar12 + 0x148))(plVar12);
        lVar7 = FUN_1412c3780(&local_2c8,uVar9);
        if (lVar7 != 0) {
          local_420 = (longlong *)0x0;
          local_428 = plVar20;
          pplVar19 = (longlong **)FUN_14129fc70(lVar7,local_240);
          if (&local_428 != pplVar19) {
            local_428 = *pplVar19;
            *pplVar19 = (longlong *)0x0;
            local_420 = pplVar19[1];
            pplVar19[1] = (longlong *)0x0;
          }
          if (local_240[0] != 0) {
            FMemory::Free();
          }
          FString::FString(local_1d0,&local_428);
          local_1c0 = '\x01';
          (**(code **)(*local_398 + 0x60))(local_398,local_2b8,local_1d0);
          if ((local_1c0 != '\0') && (local_1c0 = '\0', local_1d0[0] != 0)) {
            FMemory::Free();
          }
          if (local_428 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
      }
      if (local_2b0 != (longlong *)0x0) {
        LOCK();
        plVar20 = local_2b0 + 1;
        lVar7 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_2b0)(local_2b0);
          LOCK();
          piVar25 = (int *)((longlong)local_2b0 + 0xc);
          iVar28 = *piVar25;
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (iVar28 == 1) {
            (**(code **)(*local_2b0 + 8))(local_2b0,1);
          }
        }
      }
    }
    plVar20 = local_390;
    if (local_390 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_390 + 1;
      lVar7 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_390)(local_390);
        LOCK();
        piVar25 = (int *)((longlong)plVar20 + 0xc);
        iVar28 = *piVar25;
        *piVar25 = *piVar25 + -1;
        UNLOCK();
        if (iVar28 == 1) {
          (**(code **)(*local_390 + 8))(local_390,1);
        }
      }
    }
  }
  cVar4 = (**(code **)(*plVar12 + 0x768))(plVar12);
  if (cVar4 != '\0') {
    plVar20 = (longlong *)FUN_1407e52a0();
    lVar7 = plVar20[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*plVar20 + 0x368))(plVar20);
      lVar7 = plVar20[0x1f];
    }
    uVar6 = UWorld::GetNonDefaultPhysicsVolumeCount(lVar7);
    uVar9 = (**(code **)(*plVar12 + 0x148))(plVar12);
    lVar7 = FUN_1407c74b0(uVar9);
    if (lVar7 != 0) {
      uVar6 = UWorld::GetNonDefaultPhysicsVolumeCount(lVar7);
    }
    FUN_141460c40(plVar12,uVar6);
  }
  if (local_418 != (wchar_t *)0x0) {
    FMemory::Free(local_418);
  }
  plVar12 = local_3f0;
  if (local_3f0 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_3f0 + 1;
    lVar7 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_3f0)(local_3f0);
      LOCK();
      piVar25 = (int *)((longlong)plVar12 + 0xc);
      iVar28 = *piVar25;
      *piVar25 = *piVar25 + -1;
      UNLOCK();
      if (iVar28 == 1) {
        (**(code **)(*local_3f0 + 8))(local_3f0,1);
      }
    }
  }
  return;
LAB_140ceaeec:
  local_210 = iVar28;
  local_200 = lVar27;
  if (local_20c != '\0') goto LAB_140ceadb1;
  goto LAB_140ceabb0;
}



// FUNCTION 140cebd40 FUN_140cebd40 body=15 status=ok
// SIG undefined FUN_140cebd40(void)

void FUN_140cebd40(longlong param_1,undefined8 param_2)

{
  FTTLInlineKeyboardActorOnClosed::Broadcast(param_1 + 0xb48,param_2,1);
  return;
}



// FUNCTION 140cebd50 FUN_140cebd50 body=487 status=ok
// SIG undefined FUN_140cebd50(void)

void FUN_140cebd50(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_28 [4];
  
  local_28[1] = 0x83;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy
            (local_28[0],
             L"/Game/Maps/Zone_1/Monastery/Monastery_Mission_Ep06_MeetMaya.Monastery_Mission_Ep06_MeetMaya:PersistentLevel.OakMissionSpawner_Maya"
             ,0x106);
  uVar2 = FUN_1407e2730();
  puVar3 = (undefined8 *)FName::FName(local_res10,L"OakMissionSpawner_Maya",1);
  plVar4 = (longlong *)StaticFindObjectFastExplicit(uVar2,*puVar3,local_28,0,0);
  if (plVar4 == (longlong *)0x0) {
LAB_140cebe04:
    plVar4 = (longlong *)0x0;
  }
  else {
    lVar5 = FUN_1407e2730();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140cebe04;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x82;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy
            (local_28[2],
             L"/Game/Maps/Zone_1/Monastery/Monastery_Mission_Ep06_MeetMaya.Monastery_Mission_Ep06_MeetMaya:PersistentLevel.OakMissionSpawner_Ava"
             ,0x104);
  uVar2 = FUN_1407e2730();
  puVar3 = (undefined8 *)FName::FName(local_res18,L"OakMissionSpawner_Ava",1);
  plVar6 = (longlong *)StaticFindObjectFastExplicit(uVar2,*puVar3,local_28 + 2,0,0);
  if (plVar6 != (longlong *)0x0) {
    lVar5 = FUN_1407e2730();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140cebebe;
  }
  plVar6 = (longlong *)0x0;
LAB_140cebebe:
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x6f0))(plVar4);
    FUN_1407c49d0(plVar4);
    FUN_1407d8030(plVar4);
    (**(code **)(*plVar4 + 0x6e8))(plVar4);
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x6f0))(plVar6);
    FUN_1407c49d0(plVar6);
    FUN_1407d8030(plVar6);
    (**(code **)(*plVar6 + 0x6e8))(plVar6);
  }
  return;
}



// FUNCTION 140cebf40 FUN_140cebf40 body=822 status=ok
// SIG undefined FUN_140cebf40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cebf40(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong *plVar9;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined2 *local_118;
  int local_110;
  undefined1 local_108 [8];
  longlong local_100;
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  longlong *local_68 [7];
  undefined2 **local_30;
  undefined1 *local_28;
  undefined8 *local_20;
  longlong *local_18 [2];
  
  local_18[0] = (longlong *)(DAT_1468387a8 ^ (ulonglong)auStack_148);
  FName::FName(&local_100,L"WetlandsBoss_P",1);
  FName::FName(local_f8,L"Vault",1);
  local_68[0] = &local_100;
  local_68[1] = (longlong *)local_f8;
  FName::FName(local_f0,L"CityBoss_P",1);
  FName::FName(local_e8,L"Vault",1);
  local_68[2] = (longlong *)local_f0;
  local_68[3] = (longlong *)local_e8;
  FName::FName(local_e0,L"Beach_P",1);
  FName::FName(local_d8,L"Vault",1);
  local_68[4] = (longlong *)local_e0;
  local_68[5] = (longlong *)local_d8;
  FName::FName(local_d0,L"DesertBoss_P",1);
  FName::FName(&local_118,L"Vault",1);
  local_68[6] = (longlong *)local_d0;
  local_30 = &local_118;
  FName::FName(local_108,L"FinalBoss_P",1);
  FName::FName(&local_120,L"Vault",1);
  local_88 = 0xffffffff;
  local_28 = local_108;
  local_b8 = 0;
  local_20 = &local_120;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  TSparseArray<TSetElement<TSharedPtr<FInterfaceContainer,0>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_b8,5);
  pplVar8 = local_68;
  do {
    local_c8 = *pplVar8;
    local_c0 = pplVar8[1];
    TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
              (&local_b8,&local_128,&local_c8,0);
    pplVar8 = pplVar8 + 2;
  } while (pplVar8 != local_68 + 10);
  if ((param_2 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_2 + 0x148))(param_2), lVar3 != 0)
     ) {
    local_120 = *(undefined8 *)(lVar3 + 0x18);
    FName::ToString(&local_120,&local_118);
    puVar6 = &DAT_143f3eda8;
    if (local_110 != 0) {
      puVar6 = local_118;
    }
    plVar4 = (longlong *)FName::FName(local_108,puVar6,1);
    lVar2 = *plVar4;
    if ((int)local_b0 != local_84) {
      puVar5 = local_80;
      if (local_78 != (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      iVar1 = *(int *)(puVar5 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                                (longlong)local_70 - 1U) * 4);
      while (iVar1 != -1) {
        lVar7 = (longlong)iVar1;
        if (*(longlong *)(local_b8 + lVar7 * 0x18) == lVar2) {
          plVar4 = (longlong *)(local_b8 + lVar7 * 0x18);
          if (iVar1 != -1) goto LAB_140cec1d5;
          break;
        }
        iVar1 = *(int *)(local_b8 + 0x10 + lVar7 * 0x18);
      }
    }
    plVar4 = (longlong *)0x0;
LAB_140cec1d5:
    plVar9 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    if (local_118 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if ((((plVar9 != (longlong *)0x0) && (local_128 = 0, *plVar9 != 0)) &&
        (plVar4 = (longlong *)FUN_142d5ecc0(lVar3), plVar4 != (longlong *)0x0)) &&
       (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2b8))(plVar4), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x28))(plVar4,*plVar9,0);
    }
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FMemory::Free(local_78);
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_b8);
  return;
}



// FUNCTION 140cec280 FUN_140cec280 body=822 status=ok
// SIG undefined FUN_140cec280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cec280(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong *plVar9;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined2 *local_118;
  int local_110;
  undefined1 local_108 [8];
  longlong local_100;
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  longlong *local_68 [7];
  undefined2 **local_30;
  undefined1 *local_28;
  undefined8 *local_20;
  longlong *local_18 [2];
  
  local_18[0] = (longlong *)(DAT_1468387a8 ^ (ulonglong)auStack_148);
  FName::FName(&local_100,L"WetlandsBoss_P",1);
  FName::FName(local_f8,L"Eden6",1);
  local_68[0] = &local_100;
  local_68[1] = (longlong *)local_f8;
  FName::FName(local_f0,L"CityBoss_P",1);
  FName::FName(local_e8,L"CityVault",1);
  local_68[2] = (longlong *)local_f0;
  local_68[3] = (longlong *)local_e8;
  FName::FName(local_e0,L"Beach_P",1);
  FName::FName(local_d8,L"Beach",1);
  local_68[4] = (longlong *)local_e0;
  local_68[5] = (longlong *)local_d8;
  FName::FName(local_d0,L"DesertBoss_P",1);
  FName::FName(&local_118,L"Pandora",1);
  local_68[6] = (longlong *)local_d0;
  local_30 = &local_118;
  FName::FName(local_108,L"FinalBoss_P",1);
  FName::FName(&local_120,L"Phaselock",1);
  local_88 = 0xffffffff;
  local_28 = local_108;
  local_b8 = 0;
  local_20 = &local_120;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  TSparseArray<TSetElement<TSharedPtr<FInterfaceContainer,0>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_b8,5);
  pplVar8 = local_68;
  do {
    local_c8 = *pplVar8;
    local_c0 = pplVar8[1];
    TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
              (&local_b8,&local_128,&local_c8,0);
    pplVar8 = pplVar8 + 2;
  } while (pplVar8 != local_68 + 10);
  if ((param_2 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_2 + 0x148))(param_2), lVar3 != 0)
     ) {
    local_120 = *(undefined8 *)(lVar3 + 0x18);
    FName::ToString(&local_120,&local_118);
    puVar6 = &DAT_143f3eda8;
    if (local_110 != 0) {
      puVar6 = local_118;
    }
    plVar4 = (longlong *)FName::FName(local_108,puVar6,1);
    lVar2 = *plVar4;
    if ((int)local_b0 != local_84) {
      puVar5 = local_80;
      if (local_78 != (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      iVar1 = *(int *)(puVar5 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                                (longlong)local_70 - 1U) * 4);
      while (iVar1 != -1) {
        lVar7 = (longlong)iVar1;
        if (*(longlong *)(local_b8 + lVar7 * 0x18) == lVar2) {
          plVar4 = (longlong *)(local_b8 + lVar7 * 0x18);
          if (iVar1 != -1) goto LAB_140cec515;
          break;
        }
        iVar1 = *(int *)(local_b8 + 0x10 + lVar7 * 0x18);
      }
    }
    plVar4 = (longlong *)0x0;
LAB_140cec515:
    plVar9 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    if (local_118 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if ((((plVar9 != (longlong *)0x0) && (local_128 = 0, *plVar9 != 0)) &&
        (plVar4 = (longlong *)FUN_142d5ecc0(lVar3), plVar4 != (longlong *)0x0)) &&
       (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2b8))(plVar4), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x28))(plVar4,*plVar9,0);
    }
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FMemory::Free(local_78);
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_b8);
  return;
}



// FUNCTION 140cec5c0 FUN_140cec5c0 body=1330 status=ok
// SIG undefined FUN_140cec5c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cec5c0(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined1 auStack_128 [32];
  uint local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  longlong *local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_c8 = 0x51;
  pwVar12 = (wchar_t *)0x0;
  local_d0 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d0,0);
  FGenericPlatformString::Memcpy
            (local_d0,
             L"/Game/Maps/Zone_1/Towers/Towers_Mission.Towers_Mission:PersistentLevel.AINode_30",
             0xa2);
  uVar2 = USoUIScrollingButtonArray::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FName::FName(local_b0,L"AINode_30",1);
  local_108 = 0;
  pwVar4 = (wchar_t *)StaticFindObjectFastExplicit(uVar2,*puVar3,&local_d0,0);
  if (pwVar4 == (wchar_t *)0x0) {
LAB_140cec686:
    pwVar4 = pwVar12;
  }
  else {
    lVar5 = USoUIScrollingButtonArray::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar4 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar4 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140cec686;
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  local_e8 = (longlong *)0x0;
  local_e0 = 0x4e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy
            (local_e8,
             L"/Game/NonPlayerCharacters/Moxxi/_Design/Character/BPChar_Moxxi.BPChar_Moxxi_C",0x9c);
  uVar2 = FUN_14171bfe0();
  puVar3 = (undefined8 *)FName::FName(&local_c0,L"BPChar_Moxxi_C",1);
  local_108 = 0;
  pwVar6 = (wchar_t *)StaticFindObjectFastExplicit(uVar2,*puVar3,&local_e8,0);
  if (pwVar6 != (wchar_t *)0x0) {
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140cec73f;
  }
  pwVar6 = pwVar12;
LAB_140cec73f:
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if ((pwVar4 != (wchar_t *)0x0) &&
     (lVar5 = (**(code **)(*(longlong *)pwVar4 + 0x148))(pwVar4), pwVar6 != (wchar_t *)0x0)) {
    pwVar7 = (wchar_t *)FUN_1413f82e0();
    pwVar11 = pwVar6;
    do {
      if (pwVar11 == pwVar7) {
        if (lVar5 == 0) {
          return;
        }
        lVar8 = FUN_140c13f60(pwVar4,pwVar6);
        if (lVar8 == 0) {
          return;
        }
        local_c0 = 0;
        local_e8 = (longlong *)0x0;
        local_e0 = local_e0 & 0xffffffff00000000;
        FWeakObjectPtr::operator=(&local_b8,param_1);
        local_d8 = local_b8;
        plVar9 = (longlong *)FMemory::Realloc(0,0x20);
        if (plVar9 == (longlong *)0x0) {
          if ((((int)local_e0 != 0) && (local_e8 != (longlong *)0x0)) &&
             ((**(code **)(*local_e8 + 0x28))(local_e8,0), local_e8 != (longlong *)0x0)) {
            local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
          }
        }
        else {
          *plVar9 = (longlong)&PTR_GetPoolName_1444f8590;
          *(int *)(plVar9 + 1) = (int)local_b8;
          *(undefined4 *)((longlong)plVar9 + 0xc) = local_d8._4_4_;
          lVar10 = FDelegateHandle::GenerateNewID();
          plVar9[3] = lVar10;
          *plVar9 = (longlong)&PTR_GetPoolName_1444f85d8;
          TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
          ::CreateCopy(plVar9,&local_e8);
          (**(code **)(*plVar9 + 0x28))(plVar9,0);
          lVar10 = FMemory::Realloc(plVar9,0,0);
          if (lVar10 != 0) {
            FMemory::Free(lVar10);
          }
        }
        puVar3 = (undefined8 *)FName::FName(&local_d8,&DAT_1444f4e48,1);
        FUN_142d8f7b0(lVar8,*puVar3);
        if (*(longlong *)(lVar5 + 400) == 0) {
          uVar2 = *(undefined8 *)(lVar5 + 0x3f8);
        }
        else {
          uVar2 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
        }
        local_a8 = 0;
        local_a0 = 0;
        if (((int)local_e0 != 0) && (local_e8 != (longlong *)0x0)) {
          (**(code **)(*local_e8 + 0x30))(local_e8,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_100 = CONCAT44(local_100._4_4_,0xbf800000);
        local_108 = local_108 & 0xffffff00;
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar2,&local_c0,&local_a8,0x41f00000);
        if (local_48 != 0) {
          plVar9 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar9 = local_58;
          }
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x10))(plVar9,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        local_f0 = 1;
        local_f8 = 0;
        local_100 = 0;
        local_108 = local_108 & 0xffffff00;
        lVar5 = FUN_14072df30(lVar8,pwVar4,0,0);
        if (lVar5 != 0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop
                             (L"&UOakPatchHelperBlueprintFunctionLibrary::BlueprintFix_OAK_216536_OnScriptedMoveComplete1"
                              ,L"::");
          pwVar4 = pwVar12;
          while (pwVar11 = pwVar6, pwVar11 != (wchar_t *)0x0) {
            pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
            pwVar4 = pwVar11;
          }
          FName::FName(&local_d8,pwVar4 + 2,1);
          uVar2 = FUN_141448370();
          uVar2 = UClass::GetDefaultObject<UDamageType>(uVar2);
          FUN_14074ba20(lVar5 + 0xc0,uVar2,FUN_140cecf10,local_d8);
          pwVar4 = _guard_xfg_dispatch_icall_nop
                             (L"&UOakPatchHelperBlueprintFunctionLibrary::BlueprintFix_OAK_216536_OnScriptedMoveComplete1"
                              ,L"::");
          while (pwVar6 = pwVar4, pwVar6 != (wchar_t *)0x0) {
            pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
            pwVar12 = pwVar6;
          }
          FName::FName(&local_d8,pwVar12 + 2,1);
          uVar2 = FUN_141448370();
          uVar2 = UClass::GetDefaultObject<UDamageType>(uVar2);
          FUN_14074ba20(lVar5 + 0xd0,uVar2,FUN_140cecf10,local_d8);
          FUN_142b7b2b0(lVar5);
        }
        if ((int)local_e0 != 0) {
          if (local_e8 == (longlong *)0x0) {
            return;
          }
          (**(code **)(*local_e8 + 0x28))(local_e8,0);
          if (local_e8 != (longlong *)0x0) {
            local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
          }
          local_e0 = local_e0 & 0xffffffff00000000;
        }
        if (local_e8 == (longlong *)0x0) {
          return;
        }
        FMemory::Free(local_e8);
        return;
      }
      pwVar11 = *(wchar_t **)(pwVar11 + 0x18);
    } while (pwVar11 != (wchar_t *)0x0);
  }
  return;
}



// FUNCTION 140cecb00 FUN_140cecb00 body=1037 status=ok
// SIG undefined FUN_140cecb00(void)

void FUN_140cecb00(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint uVar11;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  if (DAT_14686dbbc == '\0') {
    return;
  }
  if (DAT_14686e120 != '\0') {
    return;
  }
  pwVar10 = (wchar_t *)0x0;
  local_58 = 0;
  DAT_14686e120 = 1;
  local_50 = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy
            (local_58,
             L"/Game/Maps/Zone_1/Towers/Towers_Mission.Towers_Mission:PersistentLevel.AINode_19",
             0xa2);
  uVar2 = USoUIScrollingButtonArray::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FName::FName(&local_res10,L"AINode_19",1);
  pwVar4 = (wchar_t *)StaticFindObjectFastExplicit(uVar2,*puVar3,&local_58,0,0);
  if (pwVar4 == (wchar_t *)0x0) {
LAB_140cecbdf:
    pwVar4 = pwVar10;
  }
  else {
    lVar5 = USoUIScrollingButtonArray::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar4 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar4 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140cecbdf;
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_48 = 0;
  local_40 = 0x4e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy
            (local_48,
             L"/Game/NonPlayerCharacters/Moxxi/_Design/Character/BPChar_Moxxi.BPChar_Moxxi_C",0x9c);
  uVar2 = FUN_14171bfe0();
  puVar3 = (undefined8 *)FName::FName(local_res18,L"BPChar_Moxxi_C",1);
  pwVar6 = (wchar_t *)StaticFindObjectFastExplicit(uVar2,*puVar3,&local_48,0,0);
  if (pwVar6 == (wchar_t *)0x0) {
LAB_140cecc8f:
    pwVar6 = pwVar10;
  }
  else {
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140cecc8f;
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  local_38 = 0;
  local_30 = 0x56;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy
            (local_38,
             L"/Game/NonPlayerCharacters/Moxxi/_Design/Actions/Action_Moxxi_Trap.Action_Moxxi_Trap_C"
             ,0xac);
  uVar2 = FUN_14171bfe0();
  puVar3 = (undefined8 *)FName::FName(local_res20,L"Action_Moxxi_Trap_C",1);
  uVar11 = 0;
  pwVar7 = (wchar_t *)StaticFindObjectFastExplicit(uVar2,*puVar3,&local_38,0,0);
  if (pwVar7 != (wchar_t *)0x0) {
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(pwVar7 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar7 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140cecd42;
  }
  pwVar7 = pwVar10;
LAB_140cecd42:
  if (local_38 != 0) {
    FMemory::Free();
  }
  if ((pwVar4 != (wchar_t *)0x0) && (pwVar7 != (wchar_t *)0x0)) {
    pwVar8 = (wchar_t *)FUN_142e20fc0();
    pwVar9 = pwVar7;
    do {
      if (pwVar9 == pwVar8) {
        if (pwVar6 == (wchar_t *)0x0) {
          return;
        }
        pwVar8 = (wchar_t *)FUN_1413f82e0();
        pwVar9 = pwVar6;
        while (pwVar9 != pwVar8) {
          pwVar9 = *(wchar_t **)(pwVar9 + 0x18);
          if (pwVar9 == (wchar_t *)0x0) {
            return;
          }
        }
        lVar5 = FUN_140c13f60(pwVar4,pwVar6);
        if (lVar5 == 0) {
          return;
        }
        FUN_142c84520(pwVar7,lVar5);
        lVar5 = FUN_14072df30(lVar5,pwVar4,0,0,uVar11 & 0xffffff00,0,0,0);
        if (lVar5 == 0) {
          return;
        }
        pwVar6 = _guard_xfg_dispatch_icall_nop
                           (L"&UOakPatchHelperBlueprintFunctionLibrary::BlueprintFix_OAK_216536_OnScriptedMoveComplete2"
                            ,L"::");
        pwVar4 = pwVar10;
        while (pwVar7 = pwVar6, pwVar7 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
          pwVar4 = pwVar7;
        }
        FName::FName(&local_res10,pwVar4 + 2,1);
        uVar2 = FUN_141448370();
        uVar2 = UClass::GetDefaultObject<UDamageType>(uVar2);
        FUN_14074ba20(lVar5 + 0xc0,uVar2,FUN_140ced230,local_res10);
        pwVar4 = _guard_xfg_dispatch_icall_nop
                           (L"&UOakPatchHelperBlueprintFunctionLibrary::BlueprintFix_OAK_216536_OnScriptedMoveComplete2"
                            ,L"::");
        while (pwVar6 = pwVar4, pwVar6 != (wchar_t *)0x0) {
          pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
          pwVar10 = pwVar6;
        }
        FName::FName(&local_res10,pwVar10 + 2,1);
        uVar2 = FUN_141448370();
        uVar2 = UClass::GetDefaultObject<UDamageType>(uVar2);
        FUN_14074ba20(lVar5 + 0xd0,uVar2,FUN_140ced230,local_res10);
        FUN_142b7b2b0(lVar5);
        return;
      }
      pwVar9 = *(wchar_t **)(pwVar9 + 0x18);
    } while (pwVar9 != (wchar_t *)0x0);
  }
  return;
}



// FUNCTION 140cecf10 FUN_140cecf10 body=788 status=ok
// SIG undefined FUN_140cecf10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cecf10(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined8 in_stack_ffffffffffffff98;
  uint uVar10;
  ulonglong uVar9;
  longlong local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  uVar10 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  lVar8 = 0;
  local_30 = 0x4e;
  local_38 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy
            (local_38,
             L"/Game/NonPlayerCharacters/Moxxi/_Design/Character/BPChar_Moxxi.BPChar_Moxxi_C",0x9c);
  uVar2 = FUN_14171bfe0();
  puVar3 = (undefined8 *)FName::FName(local_res10,L"BPChar_Moxxi_C",1);
  uVar9 = (ulonglong)uVar10 << 0x20;
  lVar4 = StaticFindObjectFastExplicit(uVar2,*puVar3,&local_38,0,uVar9);
  if (lVar4 == 0) {
LAB_140cecfbe:
    lVar4 = lVar8;
  }
  else {
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140cecfbe;
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy
            (local_28[0],
             L"/Game/Maps/Zone_1/Towers/Towers_Mission.Towers_Mission:PersistentLevel.AINode_19",
             0xa2);
  uVar2 = USoUIScrollingButtonArray::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FName::FName(local_res18,L"AINode_19",1);
  uVar9 = uVar9 & 0xffffffff00000000;
  lVar5 = StaticFindObjectFastExplicit(uVar2,*puVar3,local_28,0,uVar9);
  if (lVar5 == 0) {
LAB_140ced06e:
    lVar5 = lVar8;
  }
  else {
    lVar6 = USoUIScrollingButtonArray::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140ced06e;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (lVar4 == 0) {
    return;
  }
  lVar7 = FUN_1413f82e0();
  lVar6 = lVar4;
  while (lVar6 != lVar7) {
    lVar6 = *(longlong *)(lVar6 + 0x30);
    if (lVar6 == 0) {
      return;
    }
  }
  if (lVar5 == 0) {
    return;
  }
  lVar5 = FUN_140c13f60(lVar5,lVar4);
  local_28[0] = 0;
  local_28[1] = 0x56;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy
            (local_28[0],
             L"/Game/NonPlayerCharacters/Moxxi/_Design/Actions/Action_Moxxi_Trap.Action_Moxxi_Trap_C"
             ,0xac);
  uVar2 = FUN_14171bfe0();
  puVar3 = (undefined8 *)FName::FName(local_res10,L"Action_Moxxi_Trap_C",1);
  lVar4 = StaticFindObjectFastExplicit(uVar2,*puVar3,local_28,0,uVar9 & 0xffffffff00000000);
  if (lVar4 != 0) {
    lVar6 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140ced167;
  }
  lVar4 = lVar8;
LAB_140ced167:
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if ((lVar5 != 0) && (lVar4 != 0)) {
    lVar6 = FUN_142e20fc0();
    lVar8 = lVar4;
    while (lVar8 != lVar6) {
      lVar8 = *(longlong *)(lVar8 + 0x30);
      if (lVar8 == 0) {
        return;
      }
    }
    local_30 = CONCAT44(local_30._4_4_,DAT_1468b5d98);
    local_38 = _DAT_1468b5d90;
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_1409e12a0(lVar4,local_28,0,lVar5,0,0,0,&local_38,0);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    DAT_14686dbbc = 1;
  }
  return;
}



// FUNCTION 140ced230 FUN_140ced230 body=771 status=ok
// SIG undefined FUN_140ced230(void)

void FUN_140ced230(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48 [4];
  
  lVar8 = 0;
  uStack_50 = 0x4e;
  local_58 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy
            (local_58,
             L"/Game/NonPlayerCharacters/Moxxi/_Design/Character/BPChar_Moxxi.BPChar_Moxxi_C",0x9c);
  uVar2 = FUN_14171bfe0();
  puVar3 = (undefined8 *)FName::FName(local_res10,L"BPChar_Moxxi_C",1);
  lVar4 = StaticFindObjectFastExplicit(uVar2,*puVar3,&local_58,0,0);
  if (lVar4 == 0) {
LAB_140ced2df:
    lVar4 = lVar8;
  }
  else {
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140ced2df;
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy
            (local_48[0],
             L"/Game/Maps/Zone_1/Towers/Towers_Mission.Towers_Mission:PersistentLevel.AINode_19",
             0xa2);
  uVar2 = USoUIScrollingButtonArray::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FName::FName(local_res18,L"AINode_19",1);
  lVar5 = StaticFindObjectFastExplicit(uVar2,*puVar3,local_48,0,0);
  if (lVar5 == 0) {
LAB_140ced390:
    lVar5 = lVar8;
  }
  else {
    lVar6 = USoUIScrollingButtonArray::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140ced390;
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[2] = 0;
  local_48[3] = 0x50;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 2,0);
  FGenericPlatformString::Memcpy
            (local_48[2],
             L"/Game/Missions/Side/Zone_1/Towers/Mission_KillKillavolt.Mission_KillKillavolt_C",0xa0
            );
  uVar2 = FUN_14171bfe0();
  puVar3 = (undefined8 *)FName::FName(local_res20,L"Mission_KillKillavolt_C",1);
  lVar6 = StaticFindObjectFastExplicit(uVar2,*puVar3,local_48 + 2,0,0);
  if (lVar6 != 0) {
    lVar7 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140ced444;
  }
  lVar6 = lVar8;
LAB_140ced444:
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  if (lVar4 != 0) {
    lVar7 = FUN_1413f82e0();
    lVar8 = lVar4;
    while (lVar8 != lVar7) {
      lVar8 = *(longlong *)(lVar8 + 0x30);
      if (lVar8 == 0) {
        return;
      }
    }
    if ((lVar5 != 0) && (lVar6 != 0)) {
      lVar7 = FUN_142f71d80();
      lVar8 = lVar6;
      while (lVar8 != lVar7) {
        lVar8 = *(longlong *)(lVar8 + 0x30);
        if (lVar8 == 0) {
          return;
        }
      }
      lVar4 = FUN_140c13f60(lVar5,lVar4);
      if (lVar4 != 0) {
        puVar3 = (undefined8 *)FName::FName(local_res10,&DAT_1444f62c0,1);
        FUN_142d8eef0(lVar4,*puVar3);
        local_48[2] = 0;
        local_48[3] = 0;
        puVar3 = (undefined8 *)FName::FName(local_res10,L"AdvToAcceptToken",1);
        FUN_142f58550(local_48 + 2,lVar6,*puVar3);
        local_58 = local_48[2];
        uStack_50 = local_48[3];
        FUN_142f6b950(lVar5,&local_58,0);
      }
    }
  }
  return;
}



// FUNCTION 140ced540 FUN_140ced540 body=245 status=ok
// SIG undefined FUN_140ced540(void)

void FUN_140ced540(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_28;
  longlong local_20;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar7 = *(int *)((longlong)param_1 + 0x14);
  bVar4 = false;
  iVar6 = (int)param_1[1] + -1;
  lVar9 = (longlong)iVar6;
  if (-1 < iVar6) {
    lVar8 = lVar9 << 4;
    bVar4 = false;
    do {
      if ((*(int *)(lVar8 + 8 + *param_1) == 0) ||
         (plVar3 = *(longlong **)(lVar8 + *param_1), plVar3 == (longlong *)0x0)) {
LAB_140ced5c0:
        bVar4 = true;
      }
      else {
        local_28 = *param_2;
        local_20 = param_2[1];
        if (local_20 != 0) {
          LOCK();
          *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
          UNLOCK();
        }
        cVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,&local_28,param_3);
        if (cVar5 == '\0') goto LAB_140ced5c0;
      }
      lVar8 = lVar8 + -0x10;
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
    iVar7 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar7 + -1;
  if (bVar4) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 140ced640 FUN_140ced640 body=439 status=ok
// SIG undefined FUN_140ced640(void)

void FUN_140ced640(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined1 local_48 [16];
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar4 = *(int *)((longlong)param_1 + 0x14);
  bVar1 = false;
  iVar3 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar3;
  if (-1 < iVar3) {
    lVar6 = lVar7 << 4;
    bVar1 = false;
    do {
      plVar5 = (longlong *)0x0;
      if (*(int *)(lVar6 + 8 + *param_1) != 0) {
        plVar5 = *(longlong **)(lVar6 + *param_1);
      }
      if (plVar5 == (longlong *)0x0) {
LAB_140ced769:
        bVar1 = true;
      }
      else {
        local_a0 = 0;
        local_a8 = 0;
        local_b8 = *param_3;
        local_b4 = param_3[1];
        local_b0 = param_3[2];
        local_68 = *(undefined8 *)(param_3 + 4);
        local_98 = 0;
        FString::FString(local_60,param_3 + 6);
        FSoftObjectPath::operator=(&local_a8,&local_68);
        local_78 = 0;
        local_90 = *param_2;
        local_8c = param_2[1];
        local_88 = param_2[2];
        local_50 = *(undefined8 *)(param_2 + 4);
        local_70 = 0;
        local_80 = 0;
        FString::FString(local_48,param_2 + 6);
        FSoftObjectPath::operator=(&local_80,&local_50);
        cVar2 = (**(code **)(*plVar5 + 0x40))(plVar5,&local_90,&local_b8);
        if (cVar2 == '\0') goto LAB_140ced769;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar4 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar4 + -1;
  if (bVar1) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
  }
  if (*(longlong *)(param_2 + 6) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_3 + 6) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ced800 Broadcast body=155 status=ok
// SIG undefined Broadcast(void)

void FTTLInlineKeyboardActorOnClosed::Broadcast
               (undefined8 param_1,void **param_2,undefined1 param_3)

{
  uint uVar1;
  void *_Src;
  void *local_28;
  ulonglong local_20;
  undefined1 local_18;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  if (&local_28 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    _Src = *param_2;
    local_20 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,uVar1,0);
      ::_guard_xfg_dispatch_icall_nop(local_28,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  local_18 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,&local_28);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ced8a0 FUN_140ced8a0 body=892 status=ok
// SIG undefined FUN_140ced8a0(void)

void FUN_140ced8a0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98 [3];
  longlong *local_80;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined **local_58 [2];
  longlong *local_48;
  longlong local_40;
  
  if (param_2 == 0) {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar4 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar4 == 0) {
    return;
  }
  lVar11 = *(longlong *)(param_1 + 0x508);
  if (lVar11 == 0) {
LAB_140ced983:
    plVar12 = (longlong *)0x0;
    bVar8 = false;
    bVar7 = false;
    bVar6 = true;
    local_80 = (longlong *)0x0;
    lVar11 = 0;
  }
  else {
    lVar10 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140ced983;
    bVar8 = true;
    bVar7 = true;
    bVar6 = false;
    lVar11 = FUN_142547b50(lVar11,local_58);
    plVar12 = *(longlong **)(lVar11 + 0x10);
    lVar11 = *(longlong *)(lVar11 + 8);
    local_70 = plVar12;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
  }
  plVar5 = local_80;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  if ((bVar6) && (local_80 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_80 + 8))();
      }
    }
  }
  plVar5 = local_70;
  if ((bVar7) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))();
      }
    }
  }
  if (bVar8) {
    local_58[0] = &PTR_FUN_143f740c8;
    if (local_40 != 0) {
      FMemory::Free();
    }
    local_58[0] = &PTR_FUN_143f73d18;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_48 + 1;
      lVar10 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_48 + 8))(local_48);
        }
      }
    }
  }
  lVar10 = FUN_1422312c0(param_1);
  if (lVar10 != 0) {
    lVar13 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140cedae7;
  }
  lVar10 = 0;
LAB_140cedae7:
  if ((((lVar11 != 0) && (lVar10 != 0)) && (*(longlong *)(lVar4 + 0x360) != 0)) &&
     ((*(longlong *)(lVar4 + 0x358) != 0 &&
      ((param_2 == *(longlong *)(lVar4 + 0x358) || (param_2 == *(longlong *)(lVar4 + 0x360))))))) {
    local_98[0] = 0;
    local_98[1] = 0;
    cVar9 = FUN_142ff5c90(param_3,local_98,1);
    if (cVar9 != '\0') {
      local_a8 = (undefined4)lVar11;
      uStack_a4 = (undefined4)((ulonglong)lVar11 >> 0x20);
      uStack_a0 = SUB84(plVar12,0);
      uStack_9c = (undefined4)((ulonglong)plVar12 >> 0x20);
      local_68 = local_a8;
      uStack_64 = uStack_a4;
      uStack_60 = uStack_a0;
      uStack_5c = uStack_9c;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      uVar14 = FUN_140bb7220(lVar10);
      FUN_140d6b100(uVar14,&local_68,local_98,4);
      plVar5 = (longlong *)CONCAT44(uStack_5c,uStack_60);
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
    if (local_98[0] != 0) {
      FMemory::Free();
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar12 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  return;
}



// FUNCTION 140cedc20 FUN_140cedc20 body=1258 status=ok
// SIG undefined FUN_140cedc20(void)

void FUN_140cedc20(longlong param_1,char param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  void *_Src;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  void *local_108;
  ulonglong local_100;
  longlong *local_f0;
  longlong *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined **local_c8 [2];
  longlong *local_b8;
  longlong local_b0;
  undefined1 local_98 [32];
  longlong local_78;
  longlong local_68;
  longlong local_58;
  longlong local_48;
  
  uVar14 = 0;
  if ((*(float *)(param_1 + 0xeec) <= *(float *)(param_1 + 0xee8) &&
       *(float *)(param_1 + 0xee8) != *(float *)(param_1 + 0xeec)) && (param_2 == '\0')) {
    return;
  }
  plVar12 = *(longlong **)(param_1 + 0xef8);
  local_128 = (longlong *)0x0;
  local_120 = 0;
  uVar13 = (longlong)*(int *)(param_1 + 0xf00) & 0x1fffffffffffffff;
  if (plVar12 + *(int *)(param_1 + 0xf00) < plVar12) {
    uVar13 = uVar14;
  }
  if (uVar13 != 0) {
    do {
      plVar11 = (longlong *)*plVar12;
      if (plVar11 != (longlong *)0x0) {
        FUN_14301f8f0();
        lVar8 = (**(code **)(*plVar11 + 0x628))(plVar11);
        if (lVar8 != 0) {
          _guard_xfg_dispatch_icall_nop(local_98,0,0x68);
          FUN_142ff3000(lVar8,local_98);
          local_108 = (void *)0x0;
          local_100 = 0;
          cVar6 = FUN_142ff5c90(local_98,&local_108,1);
          uVar5 = local_120;
          if (cVar6 != '\0') {
            lVar8 = (longlong)(int)local_120;
            iVar7 = (int)local_120 + 1;
            local_120 = CONCAT44(local_120._4_4_,iVar7);
            if (local_120._4_4_ < iVar7) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_128,uVar5 & 0xffffffff);
            }
            _Src = local_108;
            plVar11 = local_128 + lVar8 * 2;
            *plVar11 = 0;
            lVar8 = (longlong)(int)local_100;
            *(int *)(plVar11 + 1) = (int)local_100;
            if ((int)local_100 == 0) {
              *(undefined4 *)((longlong)plVar11 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar11,local_100 & 0xffffffff,0);
              _guard_xfg_dispatch_icall_nop((void *)*plVar11,_Src,lVar8 * 2);
            }
          }
          if (local_108 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_48 != 0) {
            FMemory::Free();
          }
          if (local_58 != 0) {
            FMemory::Free();
          }
          if (local_68 != 0) {
            FMemory::Free();
          }
          if (local_78 != 0) {
            FMemory::Free();
          }
        }
      }
      plVar12 = plVar12 + 1;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar13);
  }
  *(undefined4 *)(param_1 + 0xeec) = 0;
  if ((int)local_120 < 1) goto LAB_140cee0b4;
  lVar8 = *(longlong *)(param_1 + 0x508);
  if (lVar8 == 0) {
LAB_140cede86:
    bVar4 = false;
    bVar3 = false;
    bVar2 = true;
    local_f0 = (longlong *)0x0;
    local_118 = 0;
    uStack_110 = (longlong *)0x0;
  }
  else {
    lVar9 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140cede86;
    bVar4 = true;
    bVar3 = true;
    bVar2 = false;
    lVar8 = FUN_142547b50(lVar8,local_c8);
    uStack_110 = *(longlong **)(lVar8 + 0x10);
    local_118 = *(longlong *)(lVar8 + 8);
    local_e0 = uStack_110;
    if (uStack_110 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_110 + 1) = (int)uStack_110[1] + 1;
      UNLOCK();
    }
  }
  plVar12 = local_f0;
  if (uStack_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_110 + 1) = (int)uStack_110[1] + 1;
    UNLOCK();
  }
  if ((bVar2) && (local_f0 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_f0 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  plVar12 = local_e0;
  if ((bVar3) && (local_e0 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_e0 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  if (bVar4) {
    local_c8[0] = &PTR_FUN_143f740c8;
    if (local_b0 != 0) {
      FMemory::Free();
    }
    local_c8[0] = &PTR_FUN_143f73d18;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_b8 + 1;
      lVar8 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
  }
  lVar8 = FUN_1422312c0(param_1);
  if (lVar8 != 0) {
    lVar9 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (local_118 != 0)) {
      local_d8 = (undefined4)local_118;
      uStack_d4 = local_118._4_4_;
      uStack_d0 = (undefined4)uStack_110;
      uStack_cc = uStack_110._4_4_;
      if (uStack_110 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_110 + 1) = (int)uStack_110[1] + 1;
        UNLOCK();
      }
      uVar10 = FUN_140bb7220(lVar8);
      FUN_140d98740(uVar10,&local_d8,&local_128);
      plVar12 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar12 + 1;
        lVar8 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      *(undefined4 *)(param_1 + 0xf00) = 0;
      if (*(int *)(param_1 + 0xf04) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xef8,0);
      }
    }
  }
  plVar12 = uStack_110;
  if (uStack_110 != (longlong *)0x0) {
    LOCK();
    plVar11 = uStack_110 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*uStack_110)(uStack_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*uStack_110 + 8))(uStack_110,1);
      }
    }
  }
LAB_140cee0b4:
  plVar12 = local_128;
  for (iVar7 = (int)local_120; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140cee110 FUN_140cee110 body=318 status=ok
// SIG undefined FUN_140cee110(void)

void FUN_140cee110(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 local_res20 [8];
  
  FUN_1426fd920();
  lVar5 = FUN_1422312c0(param_1);
  if (lVar5 != 0) {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      cVar4 = FUN_1411ea6c0(lVar5 + 0x7a0);
      if (cVar4 != '\0') {
        lVar5 = *(longlong *)(param_1 + 0x1a20);
        if (lVar5 == 0) {
          plVar7 = (longlong *)FName::FName(local_res20,L"PausedInputComponent",1);
          lVar5 = *plVar7;
          if (lVar5 == 0) {
            FUN_1417846f0(param_1,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
          }
          uVar8 = FUN_142956f50();
          lVar5 = FUN_1417985e0(uVar8,param_1,lVar5,0,0,0,0,0,0);
          *(longlong *)(param_1 + 0x1a20) = lVar5;
          *(undefined4 *)(lVar5 + 0x1f8) = 999;
          pbVar1 = (byte *)(*(longlong *)(param_1 + 0x1a20) + 0x1fc);
          *pbVar1 = *pbVar1 | 1;
          lVar5 = *(longlong *)(param_1 + 0x1a20);
        }
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar5;
      }
    }
  }
  return;
}



// FUNCTION 140cee250 FUN_140cee250 body=1655 status=ok
// SIG undefined FUN_140cee250(void)

void FUN_140cee250(longlong param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 in_stack_fffffffffffffd78;
  uint uVar3;
  undefined8 local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  undefined8 local_228;
  longlong local_220;
  undefined8 local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar3 = (uint)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
  if (*(longlong *)(param_1 + 0xd48) == 0) {
    uVar2 = UUGGameViewportClient::StaticClass();
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar2 = FUN_1417985e0(uVar2,param_1,0,0,(ulonglong)uVar3 << 0x20,0,0,0,0);
    *(undefined8 *)(param_1 + 0xd48) = uVar2;
    FUN_14234b150(uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 0xd48) + 0x1f8) = 0x3e6;
    local_f8 = 0x40d08690;
    uStack_f4 = 1;
    uStack_f0 = 0;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0xd48) + 0x1fc);
    *pbVar1 = *pbVar1 | 1;
    local_248 = DAT_1469e9958;
    local_240 = DAT_1469e9960;
    local_238 = DAT_1469e9968;
    if (DAT_1469e9968 != 0) {
      LOCK();
      *(int *)(DAT_1469e9968 + 8) = *(int *)(DAT_1469e9968 + 8) + 1;
      UNLOCK();
    }
    FUN_140cdd100(*(undefined8 *)(param_1 + 0xd48),&local_248,0,param_1,&local_f8);
    local_230 = DAT_1469ea4e0;
    local_228 = DAT_1469ea4e8;
    local_e8 = 0x40d08690;
    uStack_e4 = 1;
    uStack_e0 = 0;
    local_220 = DAT_1469ea4f0;
    if (DAT_1469ea4f0 != 0) {
      LOCK();
      *(int *)(DAT_1469ea4f0 + 8) = *(int *)(DAT_1469ea4f0 + 8) + 1;
      UNLOCK();
    }
    FUN_140cdd100(*(undefined8 *)(param_1 + 0xd48),&local_230,0,param_1,&local_e8);
    local_218 = DAT_1469ea558;
    local_210 = DAT_1469ea560;
    local_d8 = 0x40d0be60;
    uStack_d4 = 1;
    uStack_d0 = 0;
    local_208 = DAT_1469ea568;
    if (DAT_1469ea568 != 0) {
      LOCK();
      *(int *)(DAT_1469ea568 + 8) = *(int *)(DAT_1469ea568 + 8) + 1;
      UNLOCK();
    }
    FUN_140cdd100(*(undefined8 *)(param_1 + 0xd48),&local_218,0,param_1,&local_d8);
    local_200 = DAT_1469e9868;
    local_1f8 = DAT_1469e9870;
    local_c8 = 0x40d0be60;
    uStack_c4 = 1;
    uStack_c0 = 0;
    local_1f0 = DAT_1469e9878;
    if (DAT_1469e9878 != 0) {
      LOCK();
      *(int *)(DAT_1469e9878 + 8) = *(int *)(DAT_1469e9878 + 8) + 1;
      UNLOCK();
    }
    FUN_140cdd100(*(undefined8 *)(param_1 + 0xd48),&local_200,0,param_1,&local_c8);
    local_1e8 = DAT_1469ea570;
    local_1e0 = DAT_1469ea578;
    local_b8 = 0x40d02bf0;
    uStack_b4 = 1;
    uStack_b0 = 0;
    local_1d8 = DAT_1469ea580;
    if (DAT_1469ea580 != 0) {
      LOCK();
      *(int *)(DAT_1469ea580 + 8) = *(int *)(DAT_1469ea580 + 8) + 1;
      UNLOCK();
    }
    FUN_140cdd100(*(undefined8 *)(param_1 + 0xd48),&local_1e8,0,param_1,&local_b8);
    local_1d0 = DAT_1469e9880;
    local_1c8 = DAT_1469e9888;
    local_a8 = 0x40d02bf0;
    uStack_a4 = 1;
    uStack_a0 = 0;
    local_1c0 = DAT_1469e9890;
    if (DAT_1469e9890 != 0) {
      LOCK();
      *(int *)(DAT_1469e9890 + 8) = *(int *)(DAT_1469e9890 + 8) + 1;
      UNLOCK();
    }
    FUN_140cdd100(*(undefined8 *)(param_1 + 0xd48),&local_1d0,0,param_1,&local_a8);
    local_1b8 = DAT_1469ea408;
    local_1b0 = DAT_1469ea410;
    local_98 = 0x40d0c1b0;
    uStack_94 = 1;
    uStack_90 = 0;
    local_1a8 = DAT_1469ea418;
    if (DAT_1469ea418 != 0) {
      LOCK();
      *(int *)(DAT_1469ea418 + 8) = *(int *)(DAT_1469ea418 + 8) + 1;
      UNLOCK();
    }
    FUN_140cdce30(*(undefined8 *)(param_1 + 0xd48),&local_1b8,param_1,&local_98);
    local_1a0 = DAT_1469e97f0;
    local_198 = DAT_1469e97f8;
    local_88 = 0x40d0c2b0;
    uStack_84 = 1;
    uStack_80 = 0;
    local_190 = DAT_1469e9800;
    if (DAT_1469e9800 != 0) {
      LOCK();
      *(int *)(DAT_1469e9800 + 8) = *(int *)(DAT_1469e9800 + 8) + 1;
      UNLOCK();
    }
    FUN_140cdce30(*(undefined8 *)(param_1 + 0xd48),&local_1a0,param_1,&local_88);
    local_188 = DAT_1469ea420;
    local_180 = DAT_1469ea428;
    local_78 = 0x40d0c100;
    uStack_74 = 1;
    uStack_70 = 0;
    local_178 = DAT_1469ea430;
    if (DAT_1469ea430 != 0) {
      LOCK();
      *(int *)(DAT_1469ea430 + 8) = *(int *)(DAT_1469ea430 + 8) + 1;
      UNLOCK();
    }
    FUN_140cdce30(*(undefined8 *)(param_1 + 0xd48),&local_188,param_1,&local_78);
    local_170 = DAT_1469e9808;
    local_168 = DAT_1469e9810;
    local_68 = 0x40d0c240;
    uStack_64 = 1;
    uStack_60 = 0;
    local_160 = DAT_1469e9818;
    if (DAT_1469e9818 != 0) {
      LOCK();
      *(int *)(DAT_1469e9818 + 8) = *(int *)(DAT_1469e9818 + 8) + 1;
      UNLOCK();
    }
    FUN_140cdce30(*(undefined8 *)(param_1 + 0xd48),&local_170,param_1,&local_68);
    local_158 = DAT_1469e9850;
    local_150 = DAT_1469e9858;
    local_58 = 0x40d0c290;
    uStack_54 = 1;
    uStack_50 = 0;
    local_148 = DAT_1469e9860;
    if (DAT_1469e9860 != 0) {
      LOCK();
      *(int *)(DAT_1469e9860 + 8) = *(int *)(DAT_1469e9860 + 8) + 1;
      UNLOCK();
    }
    FUN_140cdce30(*(undefined8 *)(param_1 + 0xd48),&local_158,param_1,&local_58);
    local_140 = DAT_1469ea438;
    local_138 = DAT_1469ea440;
    local_48 = 0x40d0c0e0;
    uStack_44 = 1;
    uStack_40 = 0;
    local_130 = DAT_1469ea448;
    if (DAT_1469ea448 != 0) {
      LOCK();
      *(int *)(DAT_1469ea448 + 8) = *(int *)(DAT_1469ea448 + 8) + 1;
      UNLOCK();
    }
    FUN_140cdce30(*(undefined8 *)(param_1 + 0xd48),&local_140,param_1,&local_48);
    local_128 = DAT_1469ea450;
    local_120 = DAT_1469ea458;
    local_38 = 0x40d0c190;
    uStack_34 = 1;
    uStack_30 = 0;
    local_118 = DAT_1469ea460;
    if (DAT_1469ea460 != 0) {
      LOCK();
      *(int *)(DAT_1469ea460 + 8) = *(int *)(DAT_1469ea460 + 8) + 1;
      UNLOCK();
    }
    FUN_140cdce30(*(undefined8 *)(param_1 + 0xd48),&local_128,param_1,&local_38);
    local_110 = *(undefined8 *)(param_1 + 0xe00);
    local_108 = *(undefined8 *)(param_1 + 0xe08);
    local_100 = *(longlong *)(param_1 + 0xe10);
    local_28 = 0x40d066f0;
    uStack_24 = 1;
    uStack_20 = 0;
    if (local_100 != 0) {
      LOCK();
      *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
      UNLOCK();
    }
    FUN_140cdd100(*(undefined8 *)(param_1 + 0xd48),&local_110,0,param_1,&local_28);
  }
  return;
}



// FUNCTION 140cee8e0 FUN_140cee8e0 body=33 status=ok
// SIG undefined FUN_140cee8e0(void)

void FUN_140cee8e0(undefined4 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1416f8720(*param_1);
  if (lVar1 != 0) {
    thunk_FUN_142eb3990(lVar1);
    return;
  }
  return;
}



// FUNCTION 140cee910 FUN_140cee910 body=50 status=ok
// SIG undefined FUN_140cee910(void)

void FUN_140cee910(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FWeakObjectPtr::IsValid();
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140cee935. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x15c0))(plVar2);
    return;
  }
  return;
}



// FUNCTION 140cee9a0 FUN_140cee9a0 body=31 status=ok
// SIG undefined FUN_140cee9a0(void)

void FUN_140cee9a0(void)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get();
  if (lVar1 != 0) {
    FUN_140cefb60(lVar1);
    return;
  }
  return;
}



// FUNCTION 140cee9c0 FUN_140cee9c0 body=18 status=ok
// SIG undefined FUN_140cee9c0(void)

undefined8 FUN_140cee9c0(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x488) >> 8),
                  *(longlong *)(param_1 + 0x848) == *(longlong *)(param_1 + 0x488));
}



// FUNCTION 140cee9e0 FUN_140cee9e0 body=67 status=ok
// SIG undefined FUN_140cee9e0(void)

undefined1 FUN_140cee9e0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (((param_2 != 0) && (param_2 != param_1)) && (*(longlong *)(param_2 + 0x488) != 0)) {
    cVar1 = FUN_140cfdb70(param_2);
    if ((cVar1 == '\0') && (*(longlong *)(param_2 + 0x460) != 0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140ceea30 FUN_140ceea30 body=803 status=ok
// SIG undefined FUN_140ceea30(void)

undefined8 FUN_140ceea30(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  bool bVar13;
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  
  plVar10 = (longlong *)0x0;
  local_res18[0] = 0;
  local_res20 = 0;
  local_a0 = 0;
  plVar6 = (longlong *)FUN_1404b0000(&local_a0);
  bVar13 = plVar6 != (longlong *)0x0;
  if (bVar13) {
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x50))(plVar6,local_78);
    plVar10 = (longlong *)*puVar7;
  }
  else {
    puVar7 = &local_98;
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
  }
  plVar6 = (longlong *)puVar7[1];
  puVar7[1] = 0;
  *puVar7 = 0;
  if (bVar13) {
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_70 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  plVar9 = plStack_90;
  if ((!bVar13) && (plStack_90 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_90 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((lVar8 != 0) && (*(longlong *)(lVar8 + 400) != 0)) {
      plVar9 = (longlong *)UListView::OnItemSelectionChanged();
      puVar12 = (undefined8 *)*plVar9;
      puVar7 = puVar12 + (int)plVar9[1];
      for (; puVar12 != puVar7; puVar12 = puVar12 + 1) {
        lVar8 = FUN_142547b50(*puVar12,local_68);
        plVar9 = *(longlong **)(lVar8 + 0x10);
        lVar8 = *(longlong *)(lVar8 + 8);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        local_68[0] = &PTR_FUN_143f740c8;
        if (local_50 != 0) {
          FMemory::Free();
        }
        plVar2 = local_58;
        local_68[0] = &PTR_FUN_143f73d18;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_58 + 1;
          lVar5 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_58)(local_58);
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
        if (lVar8 != 0) {
          local_res18[0] = 1;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          uVar11 = 3;
          if (param_2 != '\0') {
            uVar11 = 9;
          }
          local_88 = lVar8;
          local_80 = plVar9;
          (**(code **)(*plVar10 + 0x140))(plVar10,&local_88,uVar11,local_res18);
          plVar2 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_80 + 1;
            lVar8 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_80)(local_80);
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
          if (local_res18[0] != 3) {
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar10 = plVar9 + 1;
              lVar8 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar9 + 8))(plVar9,1);
                }
              }
            }
            uVar11 = 0;
            goto LAB_140ceeced;
          }
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar9 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
      }
    }
  }
  uVar11 = 1;
LAB_140ceeced:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar6 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return uVar11;
}



// FUNCTION 140ceed60 FUN_140ceed60 body=233 status=ok
// SIG undefined FUN_140ceed60(void)

undefined8 FUN_140ceed60(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar2 = FUN_140cef4d0();
  if (cVar2 == '\0') {
    return 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x460);
  if (lVar5 != 0) {
    lVar4 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(char *)(lVar5 + 0x5d5) == '\x02')) {
      return 0;
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x848);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = FUN_1413ffe00();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      cVar2 = AFGCentralStorageContainer::AddToCentralStorageSubsystem(plVar1);
      if (cVar2 != '\0') {
        return 0;
      }
      cVar2 = (**(code **)(*plVar1 + 0xc28))(plVar1);
      if (cVar2 != '\0') {
        return 0;
      }
      cVar2 = FUN_140e262e0(plVar1);
      if (cVar2 != '\0') {
        return 0;
      }
      return 1;
    }
  }
  return 1;
}



// FUNCTION 140ceee50 FUN_140ceee50 body=74 status=ok
// SIG undefined FUN_140ceee50(void)

undefined1 FUN_140ceee50(longlong param_1)

{
  char cVar1;
  
  if (((*(char *)(param_1 + 0xa4d) == '\0') && (*(char *)(param_1 + 0xa4e) == '\0')) &&
     (*(longlong *)(param_1 + 0x488) != 0)) {
    if ((*(byte *)(param_1 + 0x128) < 3) &&
       (cVar1 = FUN_140e1cef0(param_1 + 0x9b8,param_1), cVar1 == '\0')) {
      return 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 140ceeea0 FUN_140ceeea0 body=135 status=ok
// SIG undefined FUN_140ceeea0(void)

undefined8 FUN_140ceeea0(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_146299df0 != 0) {
    lVar3 = FUN_1422312c0();
    if (lVar3 != 0) {
      lVar4 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cVar2 = FUN_140bc9f60(lVar3);
        if (cVar2 == '\0') {
          cVar2 = APlayerController::IsPrimaryPlayer(param_1);
          if (cVar2 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140ceef30 FUN_140ceef30 body=978 status=ok
// SIG undefined FUN_140ceef30(void)

undefined8 FUN_140ceef30(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  lVar6 = *(longlong *)(param_1 + 0xa90);
  if (lVar6 != 0) {
    if (0 < *(int *)(lVar6 + 0x48)) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_c8,L"Can\'t open ECHO Menu",L"ECHOMenuErrorMessages",
                         L"LockedByAction");
      FText::operator=(param_2,uVar5);
      plVar9 = local_c0;
      goto LAB_140cef2ab;
    }
    if ((lVar6 != 0) && (0 < *(int *)(lVar6 + 0x160))) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_b0,L"Can\'t open ECHO Menu",L"ECHOMenuErrorMessages",
                         L"LockedByAction");
      FText::operator=(param_2,uVar5);
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_a8 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      FUN_142ee39b0(*(undefined8 *)(param_1 + 0xa90));
      return 0;
    }
  }
  cVar4 = FUN_1407c3030(param_1 + 0x1560);
  if (cVar4 == '\0') {
    if (*(longlong *)(param_1 + 0x488) == 0) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_80,L"Can\'t open ECHO Menu",L"ECHOMenuErrorMessages",L"NoPawn");
      FText::operator=(param_2,uVar5);
      plVar9 = local_78;
    }
    else {
      lVar6 = FUN_1422312c0(param_1);
      if (lVar6 != 0) {
        lVar7 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (cVar4 = FUN_140bca6c0(lVar6), cVar4 != '\0')) {
          uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_68,L"Can\'t open ECHO Menu",L"ECHOMenuErrorMessages",
                             L"LoadingMap");
          FText::operator=(param_2,uVar5);
          plVar9 = local_60;
          goto LAB_140cef2ab;
        }
      }
      plVar9 = (longlong *)0x0;
      plVar8 = plVar9;
      if (*(longlong *)(param_1 + 0x990) != 0) {
        plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x990) + 0xe68);
      }
      if (plVar8 != (longlong *)0x0) {
        lVar6 = plVar8[0x2ef];
        if (lVar6 != 0) {
          lVar7 = FUN_141410cb0();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && ((*(byte *)(lVar6 + 0x8a0) & 4) != 0)) {
            uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_50,L"Can\'t open ECHO Menu",L"ECHOMenuErrorMessages",
                               L"LockedByAction");
            FText::operator=(param_2,uVar5);
            plVar9 = local_48;
            goto LAB_140cef2ab;
          }
        }
        if (((char)plVar8[0x49] == '\x06') && (*(char *)((longlong)plVar8 + 0x249) == '\x02')) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((!bVar3) && (cVar4 = (**(code **)(*plVar8 + 0x560))(plVar8), cVar4 == '\0')) {
          uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_38,L"Can\'t open ECHO Menu",L"ECHOMenuErrorMessages",
                             L"NotWalking");
          FText::operator=(param_2,uVar5);
          plVar9 = local_30;
          goto LAB_140cef2ab;
        }
      }
      if (*(longlong *)(param_1 + 0x990) != 0) {
        plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x990) + 0x10e0);
      }
      if ((plVar9 == (longlong *)0x0) ||
         (((cVar4 = FUN_140adac80(plVar9), cVar4 == '\0' &&
           (cVar4 = FUN_140ada8e0(plVar9), cVar4 == '\0')) &&
          (cVar4 = FUN_140adaa20(plVar9), cVar4 == '\0')))) {
        return 1;
      }
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_20,L"Can\'t open ECHO Menu",L"ECHOMenuErrorMessages",L"LockedByFFYL")
      ;
      FText::operator=(param_2,uVar5);
      plVar9 = local_18;
    }
  }
  else {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_98,L"Can\'t open ECHO Menu",L"ECHOMenuErrorMessages",L"LockedByAction")
    ;
    FText::operator=(param_2,uVar5);
    plVar9 = local_90;
  }
LAB_140cef2ab:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  return 0;
}



// FUNCTION 140cef310 FUN_140cef310 body=342 status=ok
// SIG undefined FUN_140cef310(void)

undefined8 FUN_140cef310(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_2 == (longlong *)0x0) {
    return 2;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = DAT_146b33f38;
  lVar7 = DAT_146b33f38 + 0xa0;
  lVar4 = FWeakObjectPtr::Get(lVar7);
  if (lVar4 == 0) {
    LOCK();
    iVar2 = 0;
    if (DAT_1464b56f4 != 0) {
      iVar2 = DAT_1464b56f4;
    }
    DAT_1464b56f4 = iVar2;
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar5 + 0xa8)) {
      return 2;
    }
    if (*(longlong *)(lVar5 + 0xb0) == 0) {
      return 2;
    }
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar7,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar5 + 0xa8) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(lVar7);
    if (lVar4 == 0) {
      return 2;
    }
  }
  lVar5 = FUN_1413bd170();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar6 = FUN_14301f8f0();
    lVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar6);
    if (lVar5 != 0) {
      if (*(longlong *)(lVar4 + 0x210) != 0) {
        iVar2 = FUN_140cfc570(param_1,param_2);
        iVar3 = (**(code **)(*param_1 + 0x1028))(param_1,*(undefined8 *)(lVar4 + 0x210));
        if (iVar3 < iVar2) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 2;
}



// FUNCTION 140cef470 FUN_140cef470 body=94 status=ok
// SIG undefined FUN_140cef470(void)

ulonglong FUN_140cef470(longlong param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  
  if (*(longlong *)(param_1 + 0xc70) != 0) {
    in_RAX = FUN_1410cf140(param_2);
    if ((char)in_RAX != '\0') {
      in_RAX = FUN_1410cf870(param_2);
      if ((((char)in_RAX != '\0') && (in_RAX = *(ulonglong *)(param_1 + 0xa90), in_RAX != 0)) &&
         (*(int *)(in_RAX + 0x48) == 0)) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140cef4d0 FUN_140cef4d0 body=161 status=ok
// SIG undefined FUN_140cef4d0(void)

undefined8 FUN_140cef4d0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x1470) != 0) ||
     (cVar2 = FUN_1407c3030(param_1 + 0x15f8), cVar2 != '\0')) {
    return 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x848);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      cVar2 = AFGCentralStorageContainer::AddToCentralStorageSubsystem(plVar1);
      if (cVar2 != '\0') {
        return 0;
      }
      cVar2 = (**(code **)(*plVar1 + 0xc28))(plVar1);
      if (cVar2 != '\0') {
        return 0;
      }
      cVar2 = FUN_140e262e0(plVar1);
      if (cVar2 != '\0') {
        return 0;
      }
      return 1;
    }
  }
  return 1;
}



// FUNCTION 140cef580 FUN_140cef580 body=78 status=ok
// SIG undefined FUN_140cef580(void)

void FUN_140cef580(longlong *param_1)

{
  longlong *plVar1;
  
  param_1[0x388] = 0;
  plVar1 = (longlong *)param_1[0x389];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x6d0))(plVar1,0);
    param_1[0x389] = 0;
                    /* WARNING: Could not recover jumptable at 0x000140cef5c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x260))(param_1);
    return;
  }
  return;
}



// FUNCTION 140cef5d0 FUN_140cef5d0 body=1422 status=ok
// SIG undefined FUN_140cef5d0(void)

void FUN_140cef5d0(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  char *pcVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  byte bVar26;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_48;
  undefined8 local_40;
  
  lVar6 = FUN_14145f370();
  if (lVar6 == 0) {
    return;
  }
  plVar7 = (longlong *)FUN_14145f370();
  plVar8 = (longlong *)plVar7[0x1f];
  if (plVar8 == (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    plVar8 = (longlong *)plVar7[0x1f];
  }
  if (param_1 == plVar8) {
    return;
  }
  if (param_1[900] == 0) {
    FUN_140e91570(param_1 + 0x362,param_1);
  }
  FUN_140e8d230(param_1 + 0x362);
  uVar5 = FUN_1404cf9f0(param_1 + 0x362);
  FUN_140e7aca0(param_1 + 0x362,uVar5);
  if (param_1[0x193] == 0) {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar6 = *(longlong *)(DAT_146b33f38 + 0x58);
  lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar6 == 0) {
    return;
  }
  uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
  puVar11 = (undefined1 *)FUN_140cb6000(local_res10,uVar10);
  lVar12 = FUN_140b82620(lVar6,*puVar11);
  if (lVar9 == 0) {
    return;
  }
  uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
  pcVar13 = (char *)FUN_140cb6000(local_res18,uVar10);
  if (*pcVar13 == '\0') {
    return;
  }
  if (lVar12 == 0) {
    return;
  }
  plVar8 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
  puVar11 = (undefined1 *)FUN_140cb6000(local_res20,uVar10);
  FUN_140b80820(lVar6,*puVar11,&local_48);
  plVar7 = local_48;
  lVar6 = (longlong)(int)local_40;
  iVar23 = 0;
  iVar25 = 0;
  if ((int)local_40 != 0) {
    plVar18 = plVar8;
    if (*local_48 != 0) {
      plVar14 = (longlong *)FUN_142dfdfe0();
      for (plVar19 = (longlong *)*plVar7;
          (plVar18 = plVar8, plVar19 != (longlong *)0x0 &&
          (plVar18 = (longlong *)*plVar7, plVar19 != plVar14)); plVar19 = (longlong *)plVar19[6]) {
      }
    }
    lVar9 = FUN_142dcdc10(param_1[0x193],plVar18);
    plVar7 = plVar8;
    plVar18 = plVar8;
    plVar19 = plVar8;
    if ((lVar9 == 0) || (*(char *)(lVar9 + 0x8a) != '\0')) {
      bVar26 = 0;
    }
    else {
      bVar26 = 1;
    }
    do {
      uVar21 = (uint)plVar18;
      uVar22 = uVar21;
      do {
        plVar7 = (longlong *)((longlong)plVar7 + 1);
        uVar22 = uVar22 + 1;
        if (lVar6 <= (longlong)plVar7) break;
        plVar18 = local_48 + (longlong)plVar7;
        plVar14 = plVar8;
        if (local_48[(longlong)plVar7] != 0) {
          plVar15 = (longlong *)FUN_142dfdfe0();
          for (plVar16 = (longlong *)*plVar18;
              (plVar14 = plVar8, plVar16 != (longlong *)0x0 &&
              (plVar14 = (longlong *)*plVar18, plVar16 != plVar15));
              plVar16 = (longlong *)plVar16[6]) {
          }
        }
        lVar9 = FUN_142dcdc10(param_1[0x193],plVar14);
        if ((lVar9 == 0) || (*(char *)(lVar9 + 0x8a) != '\0')) {
          bVar3 = 0;
        }
        else {
          bVar3 = 1;
        }
      } while (bVar26 == bVar3);
      if (bVar26 != 0) {
        uVar24 = (uint)plVar19;
        if (uVar24 != uVar21) {
          _guard_xfg_dispatch_icall_nop
                    (local_48 + (int)uVar24,local_48 + (int)uVar21,
                     (longlong)(int)(uVar22 - uVar21) << 3);
        }
        plVar19 = (longlong *)(ulonglong)(uVar24 + (uVar22 - uVar21));
      }
      bVar26 = bVar26 ^ 1;
      iVar25 = (int)plVar19;
      plVar18 = (longlong *)(ulonglong)uVar22;
    } while ((longlong)plVar7 < lVar6);
    local_40 = CONCAT44(local_40._4_4_,iVar25);
  }
  plVar7 = local_48 + iVar25;
  plVar18 = plVar8;
  for (plVar19 = local_48; plVar19 != plVar7; plVar19 = plVar19 + 1) {
    if (*plVar19 != 0) {
      lVar9 = FUN_142dfdfe0();
      for (lVar6 = *plVar19; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar9) {
          if (*plVar19 != 0) {
            plVar16 = (longlong *)FUN_142dfdfe0();
            for (plVar14 = (longlong *)*plVar19;
                (plVar15 = plVar8, plVar14 != (longlong *)0x0 &&
                (plVar15 = (longlong *)*plVar19, plVar14 != plVar16));
                plVar14 = (longlong *)plVar14[6]) {
            }
            cVar4 = FUN_142dd3360(param_1[0x193],plVar15);
            if (cVar4 != '\0') {
              plVar18 = (longlong *)(ulonglong)((int)plVar18 + 1);
            }
          }
          break;
        }
      }
    }
    iVar23 = (int)plVar18;
  }
  lVar6 = lVar12 + 0x218;
  lVar9 = FWeakObjectPtr::Get(lVar6);
  if (lVar9 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar12 + 0x220)) || (*(longlong *)(lVar12 + 0x228) == 0))
    goto LAB_140cefb2c;
    lVar9 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar9);
    if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar12 + 0x220) = DAT_1464b56f4;
    }
    lVar9 = FWeakObjectPtr::Get(lVar6);
    if (lVar9 == 0) goto LAB_140cefb2c;
  }
  lVar17 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar17 + 0x90) * 8)
      != lVar17 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar17 = FUN_142dfdfe0();
    do {
      if (lVar9 == lVar17) {
        plVar18 = (longlong *)FWeakObjectPtr::Get(lVar6);
        plVar7 = plVar8;
        if (plVar18 == (longlong *)0x0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 == *(int *)(lVar12 + 0x220)) || (*(longlong *)(lVar12 + 0x228) == 0))
          goto LAB_140cefab6;
          lVar9 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar6,lVar9);
          if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar12 + 0x220) = DAT_1464b56f4;
          }
          plVar18 = (longlong *)FWeakObjectPtr::Get(lVar6);
          if (plVar18 == (longlong *)0x0) goto LAB_140cefab6;
        }
        lVar6 = FUN_14171bfe0();
        if ((*(int *)(plVar18[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar18[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
            != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140cefab6;
        plVar14 = (longlong *)FUN_142dfdfe0();
        plVar19 = plVar18;
        goto LAB_140cefaa5;
      }
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
LAB_140cefb2c:
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
  while (plVar19 = (longlong *)plVar19[6], plVar7 = plVar8, plVar19 != (longlong *)0x0) {
LAB_140cefaa5:
    plVar7 = plVar18;
    if (plVar19 == plVar14) break;
  }
LAB_140cefab6:
  lVar6 = plVar7[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar6 = plVar7[0x1f];
    if (lVar6 == 0) goto LAB_140cefb2c;
  }
  piVar20 = *(int **)(lVar6 + 0xb8);
  piVar1 = piVar20 + (longlong)*(int *)(lVar6 + 0xc0) * 2;
  for (; uVar22 = (uint)plVar8, piVar20 != piVar1; piVar20 = piVar20 + 2) {
    uVar21 = uVar22 + 1;
    if (iVar23 < *piVar20) {
      uVar21 = uVar22;
    }
    plVar8 = (longlong *)(ulonglong)uVar21;
  }
  iVar25 = *(int *)(lVar6 + 0xc0);
  while ((int)uVar22 < iVar25) {
    FUN_140e36f00(param_1[0x193],*(undefined8 *)(lVar6 + 0x10),plVar8,0);
    uVar22 = (int)plVar8 + 1;
    plVar8 = (longlong *)(ulonglong)uVar22;
  }
  goto LAB_140cefb2c;
}



// FUNCTION 140cefb60 FUN_140cefb60 body=1106 status=ok
// SIG undefined FUN_140cefb60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cefb60(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  int local_f0;
  undefined8 local_e8 [2];
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if ((char)param_1[0x25] != '\x03') {
    return;
  }
  plVar3 = (longlong *)FUN_140e61420(param_1[0x14b],&local_f8);
  if (*plVar3 != 0) {
    lVar4 = FUN_1413f82e0();
    for (lVar5 = *plVar3; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar4) {
        if (*plVar3 != 0) {
          FUN_14145dde0(param_1,param_1[0x14b]);
          uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
          plVar3 = (longlong *)UWorld::GetAuthGameMode<ABaseGameMode>(uVar7);
          (**(code **)(*plVar3 + 0x840))(plVar3,param_1);
          lVar5 = param_1[0x8c];
          if (lVar5 != 0) {
            lVar4 = UInputKeySelector::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              FUN_140e5cfe0(lVar5,param_1[0x14b]);
            }
          }
          lVar5 = param_1[0x109];
          if (lVar5 == 0) {
            return;
          }
          lVar4 = FUN_1413ffe00();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) {
            return;
          }
          FUN_141400cb0(lVar5);
          if ((char)param_1[0x305] == '\0') {
            return;
          }
          lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
          plVar3 = *(longlong **)(lVar5 + 0x140);
          if (plVar3 == (longlong *)0x0) goto LAB_140cefed2;
          lVar5 = FUN_1414bb9f0();
          if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || (cVar2 = (**(code **)(*plVar3 + 0xa38))(plVar3), cVar2 == '\0'))
          goto LAB_140cefed2;
          uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
          UWorld::GetPlayerControllerIterator(uVar7,&local_f8);
          goto LAB_140cefde0;
        }
        break;
      }
    }
  }
  FWeakObjectPtr::operator=(local_e8,param_1);
  local_f8 = local_e8[0];
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar5 == 0) {
    return;
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_CopyToEmptyStorage_143fcfe50;
    *(int *)(puVar6 + 1) = (int)local_e8[0];
    *(undefined4 *)((longlong)puVar6 + 0xc) = local_f8._4_4_;
  }
  local_d8[0] = FUN_140cee9a0;
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if (*(longlong *)(lVar5 + 400) == 0) {
    uVar7 = *(undefined8 *)(lVar5 + 0x3f8);
  }
  else {
    uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
  }
  local_88 = 0;
  local_80 = 0;
  FWeakObjectPtr::operator=(local_78,0);
  local_70 = 0;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_68,local_d8);
  FUN_142880af0(uVar7,&local_88);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
  if (local_98 != 0) {
    plVar3 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar3 = local_a8;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_a8 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
LAB_140cefde0:
  if ((local_f0 < 0) || (*(int *)(local_f8 + 8) <= local_f0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_140cefed2;
  plVar3 = (longlong *)FWeakObjectPtr::Get();
  if (plVar3 == (longlong *)0x0) {
LAB_140cefe6d:
    bVar1 = false;
  }
  else {
    lVar5 = FUN_14145f370();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((!bVar1) || (plVar3 == param_1)) || (plVar3[0x91] == 0)) ||
       ((cVar2 = FUN_140cfdb70(), cVar2 != '\0' || (plVar3[0x8c] == 0)))) goto LAB_140cefe6d;
    bVar1 = true;
  }
  if (bVar1) {
    plVar3 = (longlong *)param_1[0x109];
    if (plVar3 != (longlong *)0x0) {
      lVar4 = FUN_1413f82e0();
      lVar5 = plVar3[2];
      if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        (**(code **)(*plVar3 + 0xbc8))(plVar3,CONCAT71((int7)((ulonglong)lVar5 >> 8),3));
      }
    }
LAB_140cefed2:
    *(undefined1 *)(param_1 + 0x305) = 0;
    return;
  }
  local_f0 = local_f0 + 1;
  goto LAB_140cefde0;
}



// FUNCTION 140ceffc0 FUN_140ceffc0 body=127 status=ok
// SIG undefined FUN_140ceffc0(void)

void FUN_140ceffc0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_res8;
  
  if (*(char *)(param_1 + 0xe68) != '\0') {
    local_res8 = *(longlong *)(param_1 + 0xe70);
    if (local_res8 != 0) {
      uVar1 = AActor::GetWorldTimerManager();
      lVar2 = FTimerManager::FindTimer(uVar1,&local_res8,0);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 1) != '\x02')) {
        uVar1 = AActor::GetWorldTimerManager(param_1);
        FUN_142880530(uVar1,param_1 + 0xe70);
        *(undefined8 *)(param_1 + 0xe70) = 0;
      }
    }
    return;
  }
  FUN_140cfaa50();
  return;
}



// FUNCTION 140cf0040 FUN_140cf0040 body=95 status=ok
// SIG undefined FUN_140cf0040(void)

void FUN_140cf0040(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x1af8) == 0x2c) {
    piVar2 = *(int **)(param_1 + 0x1af0);
    piVar1 = piVar2 + *(int *)(param_1 + 0x1af8);
    while( true ) {
      if (piVar2 == piVar1) {
        uVar3 = FUN_142d80d40();
        FUN_142d94090(uVar3,param_1,0x2d);
        return;
      }
      if (*piVar2 == 0x2d) break;
      piVar2 = piVar2 + 1;
    }
  }
  return;
}



// FUNCTION 140cf00a0 FUN_140cf00a0 body=472 status=ok
// SIG undefined FUN_140cf00a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cf00a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_3d8 [32];
  undefined1 local_3b8 [912];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
  *(undefined1 *)(param_1 + 0x1380) = 0;
  *(undefined1 *)(param_1 + 0x1378) = 0;
  if (*(int *)(param_3 + 0x108) != 0) {
    FUN_142dc1ad0(local_3b8);
    if ((*(longlong *)(param_1 + 0x910) == 0) ||
       (cVar2 = FUN_142dcd6e0(*(longlong *)(param_1 + 0x910),local_3b8,0), cVar2 == '\0')) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_142dd0030(local_3b8);
    }
    lVar7 = *(longlong *)(param_3 + 0x100);
    lVar8 = (longlong)*(int *)(param_3 + 0x108) * 0x90 + lVar7;
    if (lVar7 != lVar8) {
      lVar7 = lVar7 + 0x6c;
      do {
        if (lVar3 == 0) {
LAB_140cf0183:
          lVar4 = FWeakObjectPtr::Get(lVar7);
          if (lVar4 != 0) {
            lVar6 = UMovieScene2DTransformSection::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (((bVar1) && ((*(byte *)(lVar4 + 0x4fe) & 2) != 0)) &&
               (lVar4 = FUN_142dddd00(lVar4), lVar4 != 0)) {
              if ((*(char *)(lVar4 + 0x269) == '\0') ||
                 (cVar2 = FUN_1407c3030(lVar4 + 0x3a0), cVar2 != '\0')) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                *(undefined1 *)(param_1 + 0x1380) = 1;
              }
            }
          }
        }
        else {
          lVar4 = FWeakObjectPtr::Get(lVar7);
          if (lVar4 != lVar3) {
            uVar5 = FWeakObjectPtr::Get(lVar7);
            lVar4 = FUN_142d39be0(uVar5);
            if (lVar4 != lVar3) goto LAB_140cf0183;
          }
          *(undefined1 *)(param_1 + 0x1378) = 1;
        }
        lVar4 = lVar7 + 0x24;
        lVar7 = lVar7 + 0x90;
      } while (lVar4 != lVar8);
    }
  }
  if ((*(byte *)(param_1 + 0x128) < 3) &&
     (*(char *)(param_1 + 0x1378) != *(char *)(param_1 + 0x1288))) {
    *(char *)(param_1 + 0x1288) = *(char *)(param_1 + 0x1378);
    FUN_141460bc0(param_1);
  }
  return;
}



// FUNCTION 140cf0280 FUN_140cf0280 body=524 status=ok
// SIG undefined FUN_140cf0280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cf0280(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((char)param_1[0x25] != '\x03') {
    cVar1 = FUN_140e1cef0(param_1 + 0x137,param_1);
    if (cVar1 == '\0') {
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar2 != 0) {
        local_a8 = 0;
        uStack_98 = 0;
        local_a0 = FUN_140cf0280;
        uVar3 = AActor::GetWorldTimerManager(param_1);
        plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar4 + 1,param_1);
          *(undefined4 *)(plVar4 + 2) = (undefined4)local_a0;
          *(undefined4 *)((longlong)plVar4 + 0x14) = local_a0._4_4_;
          *(undefined4 *)(plVar4 + 3) = uStack_98;
          *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_94;
          lVar2 = FDelegateHandle::GenerateNewID();
          plVar4[5] = lVar2;
          *plVar4 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_88 = 0;
        local_80 = 0;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x30))(plVar4,&local_88);
        }
        FWeakObjectPtr::operator=(local_78,0);
        local_b0 = 0xbf800000;
        local_b8 = 0;
        local_70 = 0;
        local_38 = (longlong *)0x0;
        local_28 = 0;
        local_68 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar3,&local_a8,&local_88,0x3e800000);
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
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          lVar2 = FMemory::Realloc(plVar4,0,0);
          if (lVar2 != 0) {
            FMemory::Free(lVar2);
          }
        }
      }
    }
    else {
      FUN_140e34bf0(param_1 + 0x137);
      FUN_141460e50(param_1,0);
    }
  }
  return;
}



// FUNCTION 140cf0490 FUN_140cf0490 body=728 status=ok
// SIG undefined FUN_140cf0490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cf0490(longlong *param_1)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined1 auStack_168 [32];
  float *local_148;
  undefined4 local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  longlong *local_128;
  undefined4 local_120;
  undefined1 local_118 [16];
  code *local_108;
  undefined4 uStack_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [32];
  undefined1 local_a8 [72];
  longlong local_60;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = *(longlong *)(DAT_146b33f38 + 0x58);
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar6 == 0) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if (*(float *)(lVar3 + 0x448) + *(float *)((longlong)param_1 + 0x137c) <=
      *(float *)(lVar6 + 0x790)) {
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    *(undefined4 *)((longlong)param_1 + 0x137c) = *(undefined4 *)(lVar6 + 0x790);
    if (param_1[0x91] != 0) {
      (**(code **)(*param_1 + 0x830))(param_1,&local_f8,local_d8);
      fVar2 = *(float *)(lVar3 + 0x444);
      pfVar7 = (float *)FRotator::Vector(local_d8,&local_108);
      local_e8 = fVar2 * *pfVar7 + local_f8;
      local_e0 = local_f0 + fVar2 * pfVar7[2];
      local_e4 = local_f4 + fVar2 * pfVar7[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_14686e1e8) &&
         (_Init_thread_header(&DAT_14686e1e8), DAT_14686e1e8 == -1)) {
        FName::FName(&DAT_14686e1e0,L"FullyAimingAtTarget",1);
        _Init_thread_footer(&DAT_14686e1e8);
      }
      local_148 = (float *)param_1[0x91];
      FUN_1422ffb20(local_a8,DAT_14686e1e0,local_118,0);
      FUN_1426d3dd0(local_c8);
      FUN_1426ea8d0(local_c8,2);
      iVar5 = FUN_142dd0770(param_1[0x91]);
      if (iVar5 != 0x20) {
        FUN_1426eac10(local_c8,iVar5,1);
      }
      plVar1 = param_1 + 0x24f;
      if ((((int)param_1[0x250] == 0) || ((longlong *)*plVar1 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*(longlong *)*plVar1 + 0x18))(), cVar4 == '\0')) {
        local_108 = FUN_140cf00a0;
        uStack_100 = 0;
        FUN_140cdd210(plVar1,param_1,&local_108);
      }
      uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
      local_120 = 0;
      local_130 = local_c8;
      local_138 = local_a8;
      local_148 = &local_e8;
      local_140 = 0xf;
      local_128 = plVar1;
      FUN_142330010(uVar8,&local_108,2,&local_f8);
      if (local_40 != 0) {
        FMemory::Free();
      }
      if (local_60 != 0) {
        FMemory::Free();
      }
      return;
    }
    return;
  }
  return;
}



// FUNCTION 140cf0770 FUN_140cf0770 body=572 status=ok
// SIG undefined FUN_140cf0770(void)

void FUN_140cf0770(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  cVar7 = (**(code **)(*param_1 + 0x768))();
  if ((cVar7 != '\0') && (lVar5 = param_1[0x8c], lVar5 != 0)) {
    lVar8 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      lVar8 = FUN_1422312c0(param_1);
      if (lVar8 != 0) {
        lVar9 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((bVar6) && (cVar7 = FUN_140bc27a0(lVar8), cVar7 == '\0')) {
          if (*(char *)(lVar5 + 0x5f4) == '\0') {
            return;
          }
          FUN_140e5cf90(lVar5,0);
          return;
        }
      }
      FUN_142dcf3a0(param_1,&local_28);
      puVar10 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
      FUN_140bbd560(&local_38,*puVar10);
      if ((local_28 != 0) && (local_38 != (longlong *)0x0)) {
        local_18 = local_28;
        plStack_10 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
          UNLOCK();
        }
        cVar7 = (**(code **)(*local_38 + 0x50))(plStack_20,&local_18);
        plVar3 = plStack_10;
        if (plStack_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_10 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_10)(plStack_10);
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
        if (*(char *)(lVar5 + 0x5f4) != cVar7) {
          FUN_140e5cf90(lVar5,cVar7);
        }
      }
      plVar3 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_20 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_20)(plStack_20);
          LOCK();
          piVar2 = (int *)((longlong)plStack_20 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_20 + 8))(plStack_20,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140cf09b0 FUN_140cf09b0 body=1215 status=ok
// SIG undefined FUN_140cf09b0(void)

void FUN_140cf09b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18;
  undefined4 local_res20;
  undefined4 local_res24;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  longlong *local_68;
  longlong *local_58;
  
  if (*(longlong *)(param_1 + 0xa88) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa88) + 0x5e8);
    if (lVar3 == 0) {
      plVar5 = (longlong *)operator_new(0x18);
      plVar9 = (longlong *)0x0;
      local_d8 = plVar9;
      if (plVar5 != (longlong *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 1;
        *plVar5 = (longlong)&PTR_StartProfileThreadUsage_144051100;
        *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
        plVar5[2] = 0;
        local_d8 = plVar5;
      }
      local_e0 = local_d8 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_e0,local_e0,local_e0);
      local_res10[0] = 0xffffffff;
      if (*(longlong *)(param_1 + 0xa88) != 0) {
        FUN_14170c210(local_res10);
      }
      FWeakObjectPtr::operator=(&local_d0,param_1);
      plVar5 = local_d8;
      plVar4 = local_e0;
      local_94 = local_cc;
      local_90 = local_res10[0];
      local_88 = local_e0;
      local_98 = local_d0;
      local_res10[0] = 0xffffffff;
      local_80 = local_d8;
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
        UNLOCK();
      }
      local_res18 = local_cc;
      lVar3 = *(longlong *)(param_1 + 0xa88);
      plVar10 = (longlong *)(lVar3 + 0x578);
      plVar6 = (longlong *)FMemory::Realloc(0,0x40);
      local_58 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_GetPoolName_1444f8800;
        plVar6[1] = param_1;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_res18;
        *(undefined4 *)(plVar6 + 2) = local_d0;
        *(undefined4 *)(plVar6 + 3) = local_90;
        plVar6[4] = (longlong)plVar4;
        plVar6[5] = (longlong)plVar5;
        local_90 = 0xffffffff;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          plVar5 = local_80;
        }
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[7] = lVar7;
        *plVar6 = (longlong)&PTR_GetPoolName_1444f8848;
      }
      if (plVar6 != (longlong *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
        puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_70);
        iVar2 = *(int *)(lVar3 + 0x580);
        plVar9 = (longlong *)*puVar8;
        *(int *)(lVar3 + 0x580) = iVar2 + 1;
        if (*(int *)(lVar3 + 0x584) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar2);
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar10);
        *puVar8 = plVar6;
        *(undefined4 *)(puVar8 + 1) = 4;
      }
      plVar4 = local_80;
      *local_e0 = (longlong)plVar9;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar5 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
      FUN_1416f8340(local_90);
      FUN_1416f8340(local_res10[0]);
      plVar9 = local_d8;
    }
    else {
      if (*(char *)(lVar3 + 0x4d8) == '\x03') {
        FUN_140d151c0();
        return;
      }
      plVar5 = (longlong *)operator_new(0x18);
      plVar9 = (longlong *)0x0;
      local_e8 = plVar9;
      if (plVar5 != (longlong *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 1;
        *plVar5 = (longlong)&PTR_StartProfileThreadUsage_144051100;
        *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
        plVar5[2] = 0;
        local_e8 = plVar5;
      }
      local_f0 = local_e8 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_f0,local_f0,local_f0);
      local_res8[0] = 0xffffffff;
      if (*(longlong *)(*(longlong *)(param_1 + 0xa88) + 0x5e8) != 0) {
        FUN_14170c210(local_res8);
      }
      FWeakObjectPtr::operator=(&local_res20,param_1);
      plVar5 = local_e8;
      plVar4 = local_f0;
      local_bc = local_res24;
      local_b8 = local_res8[0];
      local_b0 = local_f0;
      local_c0 = local_res20;
      local_res8[0] = 0xffffffff;
      local_a8 = local_e8;
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
        UNLOCK();
      }
      local_res18 = local_res24;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa88) + 0x5e8);
      plVar10 = (longlong *)(lVar3 + 0x4f8);
      plVar6 = (longlong *)FMemory::Realloc(0,0x40);
      local_68 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_GetPoolName_1444f8770;
        plVar6[1] = param_1;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_res18;
        *(undefined4 *)(plVar6 + 2) = local_res20;
        *(undefined4 *)(plVar6 + 3) = local_b8;
        plVar6[4] = (longlong)plVar4;
        plVar6[5] = (longlong)plVar5;
        local_b8 = 0xffffffff;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          plVar5 = local_a8;
        }
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[7] = lVar7;
        *plVar6 = (longlong)&PTR_GetPoolName_1444f87b8;
      }
      if (plVar6 != (longlong *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
        puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_78);
        iVar2 = *(int *)(lVar3 + 0x500);
        plVar9 = (longlong *)*puVar8;
        *(int *)(lVar3 + 0x500) = iVar2 + 1;
        if (*(int *)(lVar3 + 0x504) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar2);
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar10);
        *puVar8 = plVar6;
        *(undefined4 *)(puVar8 + 1) = 4;
      }
      plVar4 = local_a8;
      *local_f0 = (longlong)plVar9;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar5 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_a8 + 8))(local_a8,1);
          }
        }
      }
      FUN_1416f8340(local_b8);
      FUN_1416f8340(local_res8[0]);
      plVar9 = local_e8;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 140cf0e80 FUN_140cf0e80 body=110 status=ok
// SIG undefined FUN_140cf0e80(void)

void FUN_140cf0e80(longlong param_1)

{
  FUN_1426fe180();
  if (*(longlong *)(param_1 + 0xa90) != 0) {
    *(undefined1 *)(param_1 + 0xa98) = 1;
    FUN_1407665e0(*(longlong *)(param_1 + 0xa90) + 0x138,param_1);
    FUN_142ee8350(*(undefined8 *)(param_1 + 0xa90));
    *(undefined8 *)(param_1 + 0xa90) = 0;
  }
  if (*(longlong *)(param_1 + 0x520) != 0) {
    FUN_142227350(*(longlong *)(param_1 + 0x520),0,1);
    *(undefined8 *)(param_1 + 0x520) = 0;
  }
  return;
}



// FUNCTION 140cf0ef0 FUN_140cf0ef0 body=47 status=ok
// SIG undefined FUN_140cf0ef0(void)

void FUN_140cf0ef0(longlong *param_1)

{
  if ((char)param_1[0x25] != '\x03') {
    (**(code **)(*param_1 + 0x1300))(param_1,0,1);
  }
  FUN_14145ff60(param_1,1);
  return;
}



// FUNCTION 140cf0f20 FUN_140cf0f20 body=200 status=ok
// SIG undefined FUN_140cf0f20(void)

void FUN_140cf0f20(longlong param_1)

{
  longlong *plVar1;
  longlong local_48 [2];
  undefined8 local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    plVar1 = (longlong *)(param_1 + 0xe88);
    local_38 = 0;
    local_48[0] = 0;
    local_48[1] = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_30 = &PTR_FUN_143f740c8;
    local_18 = 0;
    local_10 = 0;
    if (plVar1 != local_48) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0xe90) = 0;
    }
    *(undefined4 *)(param_1 + 0xe98) = (undefined4)local_38;
    FUN_1404c0940(param_1 + 0xea0,&local_30);
    FUN_1404bf980(&local_30);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0xe80) != 0) {
      *(undefined8 *)(param_1 + 0xe80) = 0;
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0xec8);
    }
  }
  return;
}



// FUNCTION 140cf0ff0 FUN_140cf0ff0 body=301 status=ok
// SIG undefined FUN_140cf0ff0(void)

void FUN_140cf0ff0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_18;
  longlong local_10;
  
  lVar3 = (**(code **)(*param_1 + 0xfa8))();
  lVar4 = (**(code **)(param_1[0x130] + 0x10))();
  if (lVar4 != 0) {
    lVar5 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140cf1061;
  }
  lVar4 = 0;
LAB_140cf1061:
  lVar5 = FUN_140cff230(param_1);
  if (lVar3 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if ((*(char *)(param_2 + 0x74) == '\0') && (*(char *)(param_2 + 0x75) == '\0')) {
    if (lVar5 == 0) {
      return;
    }
    cVar2 = FUN_140d288b0(lVar5);
    if (cVar2 == '\0') {
      return;
    }
  }
  FUN_1411f5e70(&local_18,param_1,*(undefined8 *)(lVar4 + 1000));
  if ((local_18 != 0) && (local_10 != 0)) {
    lVar3 = UCheckBox::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(local_18 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_18 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1410181a0(local_18,param_2);
    }
  }
  return;
}



// FUNCTION 140cf1170 FUN_140cf1170 body=827 status=ok
// SIG undefined FUN_140cf1170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cf1170(longlong *param_1,float param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  uint local_110;
  undefined1 local_108;
  code *local_f8;
  longlong *plStack_f0;
  undefined8 local_e8 [2];
  code *local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (0.0 < param_2) {
    if (*(char *)((longlong)param_1 + 0x1a04) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x1a04) = 2;
      iVar3 = FUN_142235230();
      if (iVar3 == 3) {
        FUN_141460c00(param_1,2);
      }
    }
    local_e8[0] = 0;
    local_f8 = FUN_14145d6f0;
    plStack_f0 = (longlong *)((ulonglong)plStack_f0 & 0xffffffff00000000);
    plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_1444f83b8;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      plVar6[2] = (longlong)local_f8;
      plVar6[3] = (longlong)plStack_f0;
      *(undefined4 *)(plVar6 + 4) = 0;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar4;
      *plVar6 = (longlong)&PTR_FUN_1444f8400;
    }
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar4 + 400) == 0) {
      uVar7 = *(undefined8 *)(lVar4 + 0x3f8);
    }
    else {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
    }
    local_b8 = 0;
    local_b0 = 0;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x30))(plVar6,&local_b8);
    }
    FWeakObjectPtr::operator=(local_a8,0);
    local_110 = 0xbf800000;
    local_118 = (undefined8 *)((ulonglong)local_118 & 0xffffffffffffff00);
    local_a0 = 0;
    local_68 = (longlong *)0x0;
    local_58 = 0;
    local_98 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar7,local_e8,&local_b8,param_2);
    if (local_58 != 0) {
      plVar8 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar8 = local_68;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      lVar4 = FMemory::Realloc(plVar6,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
    plVar6 = (longlong *)param_1[0xa5];
    if (plVar6 != (longlong *)0x0) {
      local_118 = &local_c8;
      local_108 = 1;
      local_110 = local_110 & 0xffffff00;
      local_c8 = _DAT_1464aa6e0;
      uStack_c0 = _DAT_1464aa6e8;
      (**(code **)(*plVar6 + 0x850))(plVar6,0,0x3f800000,param_2);
    }
  }
  else {
    FUN_142dcf3a0(param_1,&local_d8);
    if (local_d8 != (code *)0x0) {
      lVar4 = FUN_1422312c0(param_1);
      if (lVar4 != 0) {
        lVar5 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_f8 = local_d8;
          plStack_f0 = plStack_d0;
          if (plStack_d0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
            UNLOCK();
          }
          FUN_140beb090(lVar4,&local_f8,0);
          plVar6 = plStack_f0;
          if (plStack_f0 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_f0 + 1;
            lVar4 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plStack_f0)(plStack_f0);
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
        }
      }
    }
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_d0 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar1 = (int *)((longlong)plStack_d0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
        }
      }
    }
    FUN_140d02510(param_1);
  }
  return;
}



// FUNCTION 140cf14b0 FUN_140cf14b0 body=706 status=ok
// SIG undefined FUN_140cf14b0(void)

void FUN_140cf14b0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_70;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48 [2];
  longlong *local_38;
  longlong local_30;
  
  lVar9 = *(longlong *)(param_1 + 0x508);
  if (lVar9 == 0) {
LAB_140cf154c:
    plVar10 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = false;
    bVar5 = true;
    local_70 = (longlong *)0x0;
    lVar9 = 0;
  }
  else {
    lVar8 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140cf154c;
    bVar7 = true;
    bVar6 = true;
    bVar5 = false;
    lVar9 = FUN_142547b50(lVar9,local_48);
    plVar10 = *(longlong **)(lVar9 + 0x10);
    lVar9 = *(longlong *)(lVar9 + 8);
    local_60 = plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_70 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if ((bVar6) && (local_60 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_60 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (bVar7) {
    local_48[0] = &PTR_FUN_143f740c8;
    if (local_30 != 0) {
      FMemory::Free();
    }
    local_48[0] = &PTR_FUN_143f73d18;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
  }
  lVar8 = FUN_1422312c0(param_1);
  if (lVar8 != 0) {
    lVar11 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140cf16a3;
  }
  lVar8 = 0;
LAB_140cf16a3:
  if ((lVar9 != 0) && (lVar8 != 0)) {
    local_88 = (undefined4)lVar9;
    uStack_84 = (undefined4)((ulonglong)lVar9 >> 0x20);
    uStack_80 = SUB84(plVar10,0);
    uStack_7c = (undefined4)((ulonglong)plVar10 >> 0x20);
    local_58 = local_88;
    uStack_54 = uStack_84;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    uVar12 = FUN_140bb7220(lVar8);
    FUN_140d98530(uVar12,&local_58,param_1 + 0xe88,param_1 + 0xea0);
    plVar4 = (longlong *)CONCAT44(uStack_4c,uStack_50);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 140cf1780 FUN_140cf1780 body=680 status=ok
// SIG undefined FUN_140cf1780(void)

void FUN_140cf1780(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_70;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48 [2];
  longlong *local_38;
  longlong local_30;
  
  lVar9 = *(longlong *)(param_1 + 0x508);
  if (lVar9 == 0) {
LAB_140cf1816:
    plVar10 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = false;
    bVar5 = true;
    local_70 = (longlong *)0x0;
    lVar9 = 0;
  }
  else {
    lVar8 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140cf1816;
    bVar7 = true;
    bVar6 = true;
    bVar5 = false;
    lVar9 = FUN_142547b50(lVar9,local_48);
    plVar10 = *(longlong **)(lVar9 + 0x10);
    lVar9 = *(longlong *)(lVar9 + 8);
    local_60 = plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_70 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if ((bVar6) && (local_60 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_60 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (bVar7) {
    local_48[0] = &PTR_FUN_143f740c8;
    if (local_30 != 0) {
      FMemory::Free();
    }
    local_48[0] = &PTR_FUN_143f73d18;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
  }
  lVar8 = FUN_1422312c0(param_1);
  if (lVar8 != 0) {
    lVar11 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140cf196c;
  }
  lVar8 = 0;
LAB_140cf196c:
  if ((lVar9 != 0) && (lVar8 != 0)) {
    local_88 = (undefined4)lVar9;
    uStack_84 = (undefined4)((ulonglong)lVar9 >> 0x20);
    uStack_80 = SUB84(plVar10,0);
    uStack_7c = (undefined4)((ulonglong)plVar10 >> 0x20);
    local_58 = local_88;
    uStack_54 = uStack_84;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    uVar12 = FUN_140bb7220(lVar8);
    FUN_140d6c530(uVar12,&local_58);
    plVar4 = (longlong *)CONCAT44(uStack_4c,uStack_50);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 140cf1a30 FUN_140cf1a30 body=680 status=ok
// SIG undefined FUN_140cf1a30(void)

void FUN_140cf1a30(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_70;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48 [2];
  longlong *local_38;
  longlong local_30;
  
  lVar9 = *(longlong *)(param_1 + 0x508);
  if (lVar9 == 0) {
LAB_140cf1ac6:
    plVar10 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = false;
    bVar5 = true;
    local_70 = (longlong *)0x0;
    lVar9 = 0;
  }
  else {
    lVar8 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140cf1ac6;
    bVar7 = true;
    bVar6 = true;
    bVar5 = false;
    lVar9 = FUN_142547b50(lVar9,local_48);
    plVar10 = *(longlong **)(lVar9 + 0x10);
    lVar9 = *(longlong *)(lVar9 + 8);
    local_60 = plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_70 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if ((bVar6) && (local_60 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_60 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (bVar7) {
    local_48[0] = &PTR_FUN_143f740c8;
    if (local_30 != 0) {
      FMemory::Free();
    }
    local_48[0] = &PTR_FUN_143f73d18;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
  }
  lVar8 = FUN_1422312c0(param_1);
  if (lVar8 != 0) {
    lVar11 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140cf1c1c;
  }
  lVar8 = 0;
LAB_140cf1c1c:
  if ((lVar9 != 0) && (lVar8 != 0)) {
    local_88 = (undefined4)lVar9;
    uStack_84 = (undefined4)((ulonglong)lVar9 >> 0x20);
    uStack_80 = SUB84(plVar10,0);
    uStack_7c = (undefined4)((ulonglong)plVar10 >> 0x20);
    local_58 = local_88;
    uStack_54 = uStack_84;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    uVar12 = FUN_140bb7220(lVar8);
    FUN_140d6cc60(uVar12,&local_58);
    plVar4 = (longlong *)CONCAT44(uStack_4c,uStack_50);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 140cf1ce0 FUN_140cf1ce0 body=53 status=ok
// SIG undefined FUN_140cf1ce0(void)

void FUN_140cf1ce0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x528) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x528) + 0x858))();
    *(undefined4 *)(*(longlong *)(param_1 + 0x528) + 0x494) = 0;
  }
  return;
}



// FUNCTION 140cf1d20 FUN_140cf1d20 body=389 status=ok
// SIG undefined FUN_140cf1d20(void)

void FUN_140cf1d20(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_141410f00();
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
      if ((*(longlong *)(param_2 + 0x58) != 0) &&
         (lVar2 = UWidgetComponent::GetRenderTarget(param_1), lVar2 != 0)) {
        lVar3 = FUN_14142a560();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_142f00490(param_1,*(undefined8 *)(param_2 + 0x58));
        }
      }
      if ((*(char *)(param_2 + 0x34) != '\0') && (*(char *)(param_2 + 0x60) != '\0')) {
        lVar2 = FUN_1422312c0(param_1);
        if (lVar2 == 0) {
          return;
        }
        lVar3 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          return;
        }
        lVar2 = UGameInstance::GetGameViewportClient(lVar2);
        if (lVar2 == 0) {
          return;
        }
        lVar3 = AReplicationGraphDebugActor::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          return;
        }
        FUN_140cdcc00(lVar2);
      }
      if ((*(longlong *)(param_1 + 0xa90) != 0) && (lVar2 = FUN_140cdde20(), lVar2 != 0)) {
        FUN_1411b6c80(lVar2,0);
      }
    }
  }
  return;
}



// FUNCTION 140cf1ee0 FUN_140cf1ee0 body=209 status=ok
// SIG undefined FUN_140cf1ee0(void)

void FUN_140cf1ee0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar3 = (**(code **)(*param_1 + 0xfa8))();
  if ((lVar3 != 0) &&
     (uVar5 = (ulonglong)*(int *)(param_1[0x152] + 0x48), uVar6 = uVar5,
     -1 < *(int *)(param_1[0x152] + 0x48))) {
    do {
      if (((longlong)uVar5 < 0) || (*(int *)(param_1[0x152] + 0x48) <= (int)uVar6)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) &&
          (plVar1 = *(longlong **)(*(longlong *)(param_1[0x152] + 0x40) + uVar5 * 8),
          plVar1 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar1 + 0x278))(), lVar3 != 0)) {
        lVar4 = UInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_142eb3990(lVar3);
        }
      }
      uVar5 = uVar5 - 1;
      uVar6 = (ulonglong)((int)uVar6 - 1);
    } while (-1 < (longlong)uVar5);
  }
  return;
}



// FUNCTION 140cf1fc0 FUN_140cf1fc0 body=79 status=ok
// SIG undefined FUN_140cf1fc0(void)

void FUN_140cf1fc0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0xfa8))();
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x48) < 1) ||
       (lVar2 = *(longlong *)
                 (*(longlong *)(lVar1 + 0x40) + -8 + (longlong)*(int *)(lVar1 + 0x48) * 8),
       lVar2 == 0)) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar2 + 0x38);
    }
    if (lVar2 == param_2) {
      FUN_142f001d0(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140cf2010 FUN_140cf2010 body=240 status=ok
// SIG undefined FUN_140cf2010(void)

void FUN_140cf2010(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_38;
  undefined4 local_30;
  
  if ((((*(longlong **)(param_2 + 8) != (longlong *)0x0) &&
       (cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar2 != '\0')) &&
      (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 400) != 0)) {
    plVar4 = (longlong *)UListView::OnItemSelectionChanged();
    iVar6 = 0;
    if (0 < (int)plVar4[1]) {
      lVar3 = 0;
      do {
        lVar1 = *plVar4;
        lVar5 = FUN_14270bb10(param_1);
        if (*(longlong *)(lVar3 + lVar1) == lVar5) {
          local_30 = *(undefined4 *)(param_4 + 1);
          local_38 = *param_4;
          USMKnockComponent::ApplyKnock(param_1,iVar6,param_2,param_3,&local_38);
          return;
        }
        iVar6 = iVar6 + 1;
        lVar3 = lVar3 + 8;
      } while (iVar6 < (int)plVar4[1]);
    }
  }
  return;
}



// FUNCTION 140cf2100 FUN_140cf2100 body=119 status=ok
// SIG undefined FUN_140cf2100(void)

void FUN_140cf2100(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_res18 [16];
  
  lVar2 = FUN_1422312c0();
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      uVar4 = FUN_140dbc5d0(lVar2 + 0x5f0,local_res18);
      FUN_140bace80(lVar2,uVar4,param_2);
    }
  }
  return;
}



// FUNCTION 140cf2180 FUN_140cf2180 body=36 status=ok
// SIG undefined FUN_140cf2180(void)

void FUN_140cf2180(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_28 [32];
  
  uVar1 = FText::FText(local_28);
  FUN_140cf8780(param_1,uVar1);
  return;
}



// FUNCTION 140cf21b0 FUN_140cf21b0 body=691 status=ok
// SIG undefined FUN_140cf21b0(void)

void FUN_140cf21b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 local_res8 [2];
  undefined1 local_res18 [8];
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  local_res8[0] = 0;
  if ((((*(longlong *)(param_1 + 0x1428) != 0) && (param_2 != 0)) &&
      (*(longlong *)(param_1 + 0x460) != 0)) && (cVar8 = FUN_140ceed60(), cVar8 != '\0')) {
    FName::FName(local_res8,L"OpenStatusMenu",1);
    FUN_140cfc2a0(param_1,local_68,local_res8);
    if ((*(longlong **)(param_2 + 0x4b8) == (longlong *)0x0) ||
       (cVar8 = (**(code **)(**(longlong **)(param_2 + 0x4b8) + 0x20))(), cVar8 == '\0')) {
      puVar11 = &local_78;
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      bVar6 = false;
      bVar5 = true;
    }
    else {
      local_88 = *(undefined8 *)(param_2 + 0x4b8);
      local_80 = *(longlong **)(param_2 + 0x4c0);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_80 + 1) = (int)local_80[1] + 1;
        UNLOCK();
      }
      puVar11 = &local_88;
      bVar6 = true;
      bVar5 = false;
    }
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"To Accept Trade",L"PendingTradeNotification",L"PendingTrade");
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_50,L"Incoming Trade Request!",L"PendingTradeNotification",
                        L"IncomingTrade");
    puVar11 = (undefined8 *)
              FUN_1411d9930(*(undefined8 *)(param_1 + 0x1428),local_res18,uVar10,uVar9,local_68,
                            puVar11,param_2);
    *(undefined8 *)(param_1 + 0x1478) = *puVar11;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    plVar1 = plStack_70;
    if ((bVar5) && (plStack_70 != (longlong *)0x0)) {
      LOCK();
      plVar3 = plStack_70 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_70)(plStack_70);
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
    plVar1 = local_80;
    if ((bVar6) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar3 = local_80 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_80)(local_80);
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
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140cf2470 FUN_140cf2470 body=1110 status=ok
// SIG undefined FUN_140cf2470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cf2470(longlong param_1,char param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined1 local_130;
  undefined4 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108 [2];
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  if (param_3 != 0) {
    local_30 = DAT_1468387a8 ^ (ulonglong)auStack_158;
    local_108[0] = 0;
    local_108[1] = 0;
    lVar7 = FUN_1422312c0();
    if (lVar7 != 0) {
      lVar8 = FUN_14141f270();
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
        uStack_110 = *(longlong **)(param_3 + 0x4c0);
        local_118 = *(longlong **)(param_3 + 0x4b8);
        if (uStack_110 != (longlong *)0x0) {
          LOCK();
          *(int *)(uStack_110 + 1) = (int)uStack_110[1] + 1;
          UNLOCK();
        }
        if (local_118 != (longlong *)0x0) {
          puVar9 = (undefined8 *)(**(code **)(*local_118 + 8))(local_118,local_b8);
          cVar6 = FUN_140bcac80(lVar7,*puVar9);
          plVar2 = uStack_110;
          plVar11 = uStack_110;
          if (cVar6 == '\0') {
            plVar4 = *(longlong **)(param_3 + 0x538);
            plVar11 = *(longlong **)(param_3 + 0x540);
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              UNLOCK();
            }
            local_f8._0_4_ = SUB84(plVar4,0);
            local_40 = (undefined4)local_f8;
            local_f8._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
            uStack_3c = local_f8._4_4_;
            uStack_f0._0_4_ = SUB84(plVar11,0);
            uStack_38 = (undefined4)uStack_f0;
            uStack_f0._4_4_ = (undefined4)((ulonglong)plVar11 >> 0x20);
            uStack_34 = uStack_f0._4_4_;
            local_f8 = local_118;
            uStack_f0 = uStack_110;
            local_118 = plVar4;
            if (uStack_110 != (longlong *)0x0) {
              LOCK();
              plVar4 = uStack_110 + 1;
              lVar8 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                puVar9 = (undefined8 *)*uStack_110;
                uStack_110 = plVar11;
                (*(code *)*puVar9)(plVar2);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar11 = uStack_110;
                if (iVar3 == 1) {
                  (**(code **)(*uStack_f0 + 8))(uStack_f0,1);
                  plVar11 = uStack_110;
                }
              }
            }
          }
          uStack_110 = plVar11;
          if (local_118 != (longlong *)0x0) {
            local_d8 = (undefined4)local_118;
            uStack_d4 = local_118._4_4_;
            uStack_d0 = (undefined4)uStack_110;
            uStack_cc = uStack_110._4_4_;
            if (uStack_110 != (longlong *)0x0) {
              LOCK();
              *(int *)(uStack_110 + 1) = (int)uStack_110[1] + 1;
              UNLOCK();
            }
            local_138 = local_108;
            cVar6 = FUN_140d79f00(*(undefined8 *)(lVar7 + 0x478),&local_d8,1,0);
            plVar11 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
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
            if (cVar6 == '\0') {
              local_c8 = (undefined4)local_118;
              uStack_c4 = local_118._4_4_;
              uStack_c0 = (undefined4)uStack_110;
              uStack_bc = uStack_110._4_4_;
              if (uStack_110 != (longlong *)0x0) {
                LOCK();
                *(int *)(uStack_110 + 1) = (int)uStack_110[1] + 1;
                UNLOCK();
              }
              FUN_140d938f0(*(undefined8 *)(lVar7 + 0x478),&local_c8);
              plVar11 = (longlong *)CONCAT44(uStack_bc,uStack_c0);
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar11 + 1;
                lVar7 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
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
        plVar11 = uStack_110;
        if (uStack_110 != (longlong *)0x0) {
          LOCK();
          plVar2 = uStack_110 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*uStack_110)(uStack_110);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*uStack_110 + 8))(uStack_110,1);
            }
          }
        }
      }
    }
    if (*(longlong *)(param_1 + 0x1428) != 0) {
      if (param_2 == '\0') {
        local_e0 = local_108;
        FUN_140ce4590(&local_e0,local_88);
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_58,L"Trade Canceled",L"CannotTradeMessage",L"CannotTrade");
        local_128 = 2;
        local_130 = 0;
        local_138 = (longlong *)CONCAT44(local_138._4_4_,0x40a00000);
        FUN_1411db4f0(*(undefined8 *)(param_1 + 0x1428),local_a8,uVar10,local_88);
        plVar11 = local_80;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_50 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)local_50 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar11 = local_80;
            if (iVar3 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
              plVar11 = local_80;
            }
          }
        }
      }
      else {
        local_e8 = local_108;
        FUN_140ce31e0(&local_e8,local_a0);
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_70,L"Trade Request Sent",L"TradeRequestSentMessage",
                            L"TradeRequestSent");
        local_128 = 2;
        local_130 = 0;
        local_138 = (longlong *)CONCAT44(local_138._4_4_,0x40a00000);
        FUN_1411db4f0(*(undefined8 *)(param_1 + 0x1428),local_b0,uVar10,local_a0);
        plVar11 = local_98;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_68 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar1 = (int *)((longlong)local_68 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar11 = local_98;
            if (iVar3 == 1) {
              (**(code **)(*local_68 + 8))(local_68,1);
              plVar11 = local_98;
            }
          }
        }
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar11 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
    if (local_108[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140cf28d0 FUN_140cf28d0 body=4216 status=ok
// SIG undefined FUN_140cf28d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cf28d0(longlong param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_588 [32];
  longlong *local_568;
  undefined4 local_560;
  undefined4 *local_558;
  undefined4 *puStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  longlong local_538 [3];
  longlong *local_520;
  undefined8 local_510;
  undefined8 uStack_508;
  longlong *local_4f8;
  longlong *local_4e8;
  longlong *local_4d8;
  undefined4 local_4d0 [4];
  longlong *local_4c0;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined8 local_4a8;
  longlong local_4a0;
  undefined8 local_498;
  longlong local_490;
  undefined8 local_488;
  longlong local_480;
  undefined8 local_478;
  longlong local_470;
  undefined8 local_468;
  longlong local_460;
  undefined1 local_458 [16];
  undefined8 local_448;
  undefined8 uStack_440;
  undefined1 local_438 [16];
  undefined8 local_428;
  undefined8 uStack_420;
  undefined1 local_418 [16];
  undefined8 local_408;
  undefined8 uStack_400;
  undefined1 local_3f8 [16];
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined1 local_3d8 [16];
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [8];
  longlong *local_3a0;
  undefined1 local_390 [8];
  longlong *local_388;
  undefined1 local_378 [8];
  longlong *local_370;
  undefined1 local_360 [8];
  longlong *local_358;
  undefined1 local_348 [8];
  longlong *local_340;
  undefined1 local_330 [8];
  longlong *local_328;
  undefined1 local_318 [8];
  longlong *local_310;
  undefined1 local_300 [8];
  longlong *local_2f8;
  undefined1 local_2e8 [8];
  longlong *local_2e0;
  undefined1 local_2d0 [8];
  longlong *local_2c8;
  undefined1 local_2b8 [8];
  longlong *local_2b0;
  undefined1 local_2a0 [8];
  longlong *local_298;
  undefined1 local_288 [8];
  longlong *local_280;
  undefined1 local_270 [8];
  longlong *local_268;
  undefined1 local_258 [8];
  longlong *local_250;
  undefined1 local_240 [8];
  longlong *local_238;
  undefined1 local_228 [24];
  undefined1 local_210 [8];
  longlong *local_208;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [24];
  undefined1 local_190 [24];
  undefined1 local_178 [24];
  undefined1 local_160 [24];
  undefined1 local_148 [24];
  undefined4 local_130 [4];
  undefined1 local_120 [8];
  longlong *local_118;
  char local_108;
  undefined4 local_100 [4];
  undefined1 local_f0 [8];
  longlong *local_e8;
  char local_d8;
  undefined4 local_d0 [4];
  undefined1 local_c0 [8];
  longlong *local_b8;
  char local_a8;
  undefined4 local_a0 [4];
  undefined1 local_90 [8];
  longlong *local_88;
  char local_78;
  undefined4 local_70 [4];
  undefined1 local_60 [8];
  longlong *local_58;
  char local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_588;
  local_4d0[0] = 0;
  lVar6 = FUN_1422312c0();
  if (lVar6 == 0) {
LAB_140cf295b:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140cf295b;
  }
  if (param_3 == 0) {
    uStack_540 = (longlong *)0x0;
    bVar4 = false;
    bVar3 = true;
    local_4e8 = (longlong *)0x0;
    local_548 = (longlong *)0x0;
  }
  else {
    uStack_540 = *(longlong **)(param_3 + 0x4c0);
    bVar4 = true;
    bVar3 = false;
    local_548 = *(longlong **)(param_3 + 0x4b8);
    local_4d8 = uStack_540;
    if (uStack_540 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_540 + 1) = (int)uStack_540[1] + 1;
      UNLOCK();
    }
  }
  plVar12 = local_4e8;
  if (uStack_540 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_540 + 1) = (int)uStack_540[1] + 1;
    UNLOCK();
  }
  if ((bVar3) && (local_4e8 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_4e8 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_4e8)(local_4e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_4e8 + 8))(local_4e8,1);
      }
    }
  }
  plVar12 = local_4d8;
  if ((bVar4) && (local_4d8 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_4d8 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_4d8)(local_4d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_4d8 + 8))(local_4d8,1);
      }
    }
  }
  if ((local_548 != (longlong *)0x0) && (lVar6 != 0)) {
    (**(code **)(*local_548 + 8))(local_548,local_4d0);
    cVar5 = FUN_140bcac80();
    plVar12 = uStack_540;
    if (cVar5 == '\0') {
      if (param_3 == 0) {
        plVar10 = (longlong *)0x0;
        bVar4 = false;
        bVar3 = true;
        local_4c0 = (longlong *)0x0;
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar10 = *(longlong **)(param_3 + 0x540);
        plVar11 = *(longlong **)(param_3 + 0x538);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        bVar4 = true;
        bVar3 = false;
        local_4f8 = plVar10;
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      local_510._0_4_ = SUB84(plVar11,0);
      local_40 = (undefined4)local_510;
      local_510._4_4_ = (undefined4)((ulonglong)plVar11 >> 0x20);
      uStack_3c = local_510._4_4_;
      uStack_508._0_4_ = SUB84(plVar10,0);
      uStack_38 = (undefined4)uStack_508;
      uStack_508._4_4_ = (undefined4)((ulonglong)plVar10 >> 0x20);
      uStack_34 = uStack_508._4_4_;
      local_510 = local_548;
      uStack_508 = uStack_540;
      local_548 = plVar11;
      if (uStack_540 != (longlong *)0x0) {
        LOCK();
        plVar11 = uStack_540 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          puVar9 = (undefined8 *)*uStack_540;
          uStack_540 = plVar10;
          (*(code *)*puVar9)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar10 = uStack_540;
          if (iVar2 == 1) {
            (**(code **)(*uStack_508 + 8))(uStack_508,1);
            plVar10 = uStack_540;
          }
        }
      }
      uStack_540 = plVar10;
      plVar12 = local_4c0;
      if ((bVar3) && (local_4c0 != (longlong *)0x0)) {
        LOCK();
        plVar10 = local_4c0 + 1;
        lVar7 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_4c0)(local_4c0);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_4c0 + 8))(local_4c0,1);
          }
        }
      }
      plVar12 = local_4f8;
      if ((bVar4) && (local_4f8 != (longlong *)0x0)) {
        LOCK();
        plVar10 = local_4f8 + 1;
        lVar7 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_4f8)(local_4f8);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_4f8 + 8))(local_4f8,1);
          }
        }
      }
    }
  }
  bVar3 = false;
  local_538[0] = 0;
  local_538[1] = 0;
  if (((lVar6 == 0) || (*(longlong *)(param_1 + 0x1428) == 0)) || (local_548 == (longlong *)0x0)) {
LAB_140cf2c12:
    bVar4 = false;
  }
  else {
    bVar3 = true;
    local_4b8 = (undefined4)local_548;
    uStack_4b4 = local_548._4_4_;
    uStack_4b0 = (undefined4)uStack_540;
    uStack_4ac = uStack_540._4_4_;
    if (uStack_540 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_540 + 1) = (int)uStack_540[1] + 1;
      UNLOCK();
    }
    local_568 = local_538;
    cVar5 = FUN_140d79f00(*(undefined8 *)(lVar6 + 0x478),&local_4b8,1,0);
    if (cVar5 == '\0') goto LAB_140cf2c12;
    bVar4 = true;
  }
  if ((bVar3) && (plVar12 = (longlong *)CONCAT44(uStack_4ac,uStack_4b0), plVar12 != (longlong *)0x0)
     ) {
    LOCK();
    plVar10 = plVar12 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (!bVar4) goto LAB_140cf38cf;
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_378,L"Travel Canceled.",L"TravelStationErrorMessage",L"CannotTravelTitle");
  uVar8 = FUN_1404b03b0();
  FText::FText(local_538 + 2,uVar8);
  switch(*param_2) {
  case 2:
    lVar6 = FText::FromString(local_1a8,local_538);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_300,L"Travel canceled, {0} is in a menu.",L"TravelStationErrorMessage",
                       L"CannotTravelReasonMenu");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_1f8,uVar8);
    local_130[0] = 4;
    FText::FText(local_120,lVar6);
    local_4a8 = *puVar9;
    local_558 = local_130;
    puStack_550 = local_100;
    local_4a0 = puVar9[1];
    local_108 = '\x01';
    if (local_4a0 != 0) {
      LOCK();
      *(int *)(local_4a0 + 8) = *(int *)(local_4a0 + 8) + 1;
      UNLOCK();
    }
    local_448 = local_558;
    uStack_440 = puStack_550;
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_438,&local_448);
    uVar8 = FText::Format(local_318,&local_4a8,uVar8);
    FText::FText(local_348,uVar8);
    if (local_310 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_310 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_310)(local_310);
        LOCK();
        piVar1 = (int *)((longlong)local_310 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_310 + 8))(local_310,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_438);
    if ((local_108 != '\0') && (local_108 = '\0', local_118 != (longlong *)0x0)) {
      LOCK();
      plVar12 = local_118 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    plVar12 = (longlong *)puVar9[1];
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    plVar12 = *(longlong **)(lVar6 + 8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    FText::operator=(local_538 + 2,local_348);
    if (local_340 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_340 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_340)(local_340);
        LOCK();
        piVar1 = (int *)((longlong)local_340 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_340 + 8))(local_340,1);
        }
      }
    }
    plVar12 = local_2f8;
    break;
  case 3:
    lVar6 = FText::FromString(local_190,local_538);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_2d0,L"Travel canceled, {0} is down!",L"TravelStationErrorMessage",
                       L"CannotTravelReasonAllyDown");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_1e8,uVar8);
    local_100[0] = 4;
    FText::FText(local_f0,lVar6);
    local_498 = *puVar9;
    local_558 = local_100;
    puStack_550 = local_d0;
    local_490 = puVar9[1];
    local_d8 = '\x01';
    if (local_490 != 0) {
      LOCK();
      *(int *)(local_490 + 8) = *(int *)(local_490 + 8) + 1;
      UNLOCK();
    }
    local_428 = local_558;
    uStack_420 = puStack_550;
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_418,&local_428);
    uVar8 = FText::Format(local_2e8,&local_498,uVar8);
    FText::FText(local_330,uVar8);
    if (local_2e0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_2e0 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_2e0)(local_2e0);
        LOCK();
        piVar1 = (int *)((longlong)local_2e0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_2e0 + 8))(local_2e0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_418);
    if ((local_d8 != '\0') && (local_d8 = '\0', local_e8 != (longlong *)0x0)) {
      LOCK();
      plVar12 = local_e8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
    plVar12 = (longlong *)puVar9[1];
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    plVar12 = *(longlong **)(lVar6 + 8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    FText::operator=(local_538 + 2,local_330);
    if (local_328 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_328 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_328)(local_328);
        LOCK();
        piVar1 = (int *)((longlong)local_328 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_328 + 8))(local_328,1);
        }
      }
    }
    plVar12 = local_2c8;
    break;
  default:
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_210,L"Travel canceled.",L"TravelStationErrorMessage",
                       L"CannotTravelReasonGeneric");
    FText::operator=(local_538 + 2,uVar8);
    plVar12 = local_208;
    break;
  case 5:
    lVar6 = FText::FromString(local_178,local_538);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_2a0,L"Travel canceled, {0} is in a vehicle!",
                       L"TravelStationErrorMessage",L"CannotTravelReasonAllyInAVehicle");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_1d8,uVar8);
    local_d0[0] = 4;
    FText::FText(local_c0,lVar6);
    local_488 = *puVar9;
    local_558 = local_d0;
    puStack_550 = local_a0;
    local_480 = puVar9[1];
    local_a8 = '\x01';
    if (local_480 != 0) {
      LOCK();
      *(int *)(local_480 + 8) = *(int *)(local_480 + 8) + 1;
      UNLOCK();
    }
    local_408 = local_558;
    uStack_400 = puStack_550;
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_3f8,&local_408);
    uVar8 = FText::Format(local_2b8,&local_488,uVar8);
    FText::FText(local_3a8,uVar8);
    if (local_2b0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_2b0 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_2b0)(local_2b0);
        LOCK();
        piVar1 = (int *)((longlong)local_2b0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_2b0 + 8))(local_2b0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_3f8);
    if ((local_a8 != '\0') && (local_a8 = '\0', local_b8 != (longlong *)0x0)) {
      LOCK();
      plVar12 = local_b8 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    plVar12 = (longlong *)puVar9[1];
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    plVar12 = *(longlong **)(lVar6 + 8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    FText::operator=(local_538 + 2,local_3a8);
    if (local_3a0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_3a0 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_3a0)(local_3a0);
        LOCK();
        piVar1 = (int *)((longlong)local_3a0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_3a0 + 8))(local_3a0,1);
        }
      }
    }
    plVar12 = local_298;
    break;
  case 6:
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_288,L"Travel canceled, another player is joining!",
                       L"TravelStationErrorMessage",L"CannotTravelReasonOtherPlayerJoining");
    FText::operator=(local_538 + 2,uVar8);
    plVar12 = local_280;
    break;
  case 7:
    lVar6 = FText::FromString(local_160,local_538);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_258,L"Travel canceled, {0} is in a dueling!",
                       L"TravelStationErrorMessage",L"CannotTravelReasonAllyDueling");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_1c8,uVar8);
    local_a0[0] = 4;
    FText::FText(local_90,lVar6);
    local_478 = *puVar9;
    local_558 = local_a0;
    puStack_550 = local_70;
    local_470 = puVar9[1];
    local_78 = '\x01';
    if (local_470 != 0) {
      LOCK();
      *(int *)(local_470 + 8) = *(int *)(local_470 + 8) + 1;
      UNLOCK();
    }
    local_3e8 = local_558;
    uStack_3e0 = puStack_550;
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_3d8,&local_3e8);
    uVar8 = FText::Format(local_270,&local_478,uVar8);
    FText::FText(local_390,uVar8);
    if (local_268 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_268 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_268)(local_268);
        LOCK();
        piVar1 = (int *)((longlong)local_268 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_268 + 8))(local_268,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_3d8);
    if ((local_78 != '\0') && (local_78 = '\0', local_88 != (longlong *)0x0)) {
      LOCK();
      plVar12 = local_88 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    plVar12 = (longlong *)puVar9[1];
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    plVar12 = *(longlong **)(lVar6 + 8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    FText::operator=(local_538 + 2,local_390);
    if (local_388 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_388 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_388)(local_388);
        LOCK();
        piVar1 = (int *)((longlong)local_388 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_388 + 8))(local_388,1);
        }
      }
    }
    plVar12 = local_250;
    break;
  case 8:
    lVar6 = FText::FromString(local_148,local_538);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_228,L"Travel canceled, {0} is trying to take a picture!",
                       L"TravelStationErrorMessage",L"CannotTravelReasonPhotoModeActive");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_1b8,uVar8);
    local_70[0] = 4;
    FText::FText(local_60,lVar6);
    local_468 = *puVar9;
    local_558 = local_70;
    puStack_550 = &local_40;
    local_460 = puVar9[1];
    local_48 = '\x01';
    if (local_460 != 0) {
      LOCK();
      *(int *)(local_460 + 8) = *(int *)(local_460 + 8) + 1;
      UNLOCK();
    }
    local_3c8 = local_558;
    uStack_3c0 = puStack_550;
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_3b8,&local_3c8);
    uVar8 = FText::Format(local_240,&local_468,uVar8);
    FText::FText(local_360,uVar8);
    if (local_238 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_238 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_238)(local_238);
        LOCK();
        piVar1 = (int *)((longlong)local_238 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_238 + 8))(local_238,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_3b8);
    if ((local_48 != '\0') && (local_48 = '\0', local_58 != (longlong *)0x0)) {
      LOCK();
      plVar12 = local_58 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    plVar12 = (longlong *)puVar9[1];
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    plVar12 = *(longlong **)(lVar6 + 8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    FText::operator=(local_538 + 2,local_360);
    if (local_358 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_358 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_358)(local_358);
        LOCK();
        piVar1 = (int *)((longlong)local_358 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_358 + 8))(local_358,1);
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_228);
    goto LAB_140cf3826;
  }
  local_3c8 = (undefined4 *)CONCAT44(local_3c8._4_4_,(undefined4)local_3c8);
  uStack_3c0 = (undefined4 *)CONCAT44(uStack_3c0._4_4_,(undefined4)uStack_3c0);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar12 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    local_3c8 = (undefined4 *)CONCAT44(local_3c8._4_4_,(undefined4)local_3c8);
    uStack_3c0 = (undefined4 *)CONCAT44(uStack_3c0._4_4_,(undefined4)uStack_3c0);
    if ((int)lVar6 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
LAB_140cf3826:
  uVar8 = FUN_1404b03b0();
  local_560 = 0x40a00000;
  local_568 = local_538 + 2;
  FUN_1411db820(*(undefined8 *)(param_1 + 0x1428),local_458,local_378,uVar8);
  if (local_520 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_520 + 1;
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_520)(local_520);
      LOCK();
      piVar1 = (int *)((longlong)local_520 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_520 + 8))(local_520,1);
      }
    }
  }
  if (local_370 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_370 + 1;
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_370)(local_370);
      LOCK();
      piVar1 = (int *)((longlong)local_370 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_370 + 8))(local_370,1);
      }
    }
  }
LAB_140cf38cf:
  if (local_538[0] != 0) {
    FMemory::Free();
  }
  plVar12 = uStack_540;
  if (uStack_540 != (longlong *)0x0) {
    LOCK();
    plVar10 = uStack_540 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*uStack_540)(uStack_540);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*uStack_540 + 8))(uStack_540,1);
      }
    }
  }
  return;
}



// FUNCTION 140cf3970 FUN_140cf3970 body=655 status=ok
// SIG undefined FUN_140cf3970(void)

void FUN_140cf3970(longlong *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_res10;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if (*(longlong *)(lVar7 + 400) == 0) {
    uVar10 = *(undefined8 *)(lVar7 + 0x3f8);
  }
  else {
    uVar10 = *(undefined8 *)(*(longlong *)(lVar7 + 400) + 0x90);
  }
  FUN_142880530(uVar10,param_1 + 0x341);
  param_1[0x341] = 0;
  bVar2 = true;
  lVar7 = FUN_1422312c0(param_1);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      puVar12 = *(undefined4 **)(lVar7 + 0xd60);
      puVar1 = puVar12 + (longlong)*(int *)(lVar7 + 0xd68) * 2;
      if (puVar12 != puVar1) {
        do {
          local_res8 = *puVar12;
          local_resc = puVar12[1];
          cVar6 = FWeakObjectPtr::IsValid(&local_res8);
          if (cVar6 != '\0') {
            lVar7 = FWeakObjectPtr::Get(&local_res8);
            lVar7 = *(longlong *)(lVar7 + 0x490);
            if ((lVar7 != 0) && (cVar6 = UMovieSceneSequencePlayer::IsPlaying(lVar7), cVar6 != '\0')
               ) {
              param_1[0x343] = lVar7;
              bVar2 = false;
              uStack_30 = (ulonglong)uStack_3c << 0x20;
              local_38 = FUN_140d04140;
              pwVar9 = _guard_xfg_dispatch_icall_nop
                                 (L"&AOakPlayerController::OnCinematicStopped_RetryFadeIn",L"::");
              pwVar5 = (wchar_t *)0x0;
              while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
                pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
                pwVar5 = pwVar4;
              }
              FName::FName(&local_res10,pwVar5 + 2,1);
              FUN_1407260e0(param_1[0x343] + 0x398,param_1,&local_38,local_res10);
            }
          }
          puVar12 = puVar12 + 2;
        } while (puVar12 != puVar1);
        if (!bVar2) {
          return;
        }
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x1a05) != '\0') {
    plVar11 = (longlong *)param_1[0xa5];
    *(undefined1 *)((longlong)param_1 + 0x1a05) = 0;
    if (plVar11 != (longlong *)0x0) {
      local_res8 = 0;
      if (DAT_1468b6148 != 0) {
        FConfigCacheIni::GetFloat
                  (DAT_1468b6148,L"/Script/OakGame.OakPlayerController",L"LateJoinFadeDuration",
                   &local_res8,&DAT_1468e2410);
        plVar11 = (longlong *)param_1[0xa5];
      }
      local_38 = (code *)CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
      uStack_30 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
      (**(code **)(*plVar11 + 0x850))(DAT_1464aa6e0,0x3f800000,0,local_res8,&local_38,0,0);
    }
  }
  return;
}



// FUNCTION 140cf3c50 FUN_140cf3c50 body=99 status=ok
// SIG undefined FUN_140cf3c50(void)

void FUN_140cf3c50(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1422312c0();
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      FUN_140bcb680(lVar2,param_2);
    }
  }
  return;
}



// FUNCTION 140cf3cc0 FUN_140cf3cc0 body=534 status=ok
// SIG undefined FUN_140cf3cc0(void)

void FUN_140cf3cc0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_108 [32];
  longlong local_e8;
  longlong local_d8;
  longlong local_c8;
  longlong local_b8;
  undefined1 local_98 [8];
  longlong local_90;
  undefined1 local_78 [32];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  if (1 < *(int *)(param_2 + 8)) {
    _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
    FUN_142fde710(local_98,param_2);
    cVar2 = FUN_143001780(local_78);
    if (local_90 != 0) {
      FMemory::Free();
    }
    if (((cVar2 != '\0') && (lVar3 = FUN_140cff230(param_1), lVar3 != 0)) &&
       (iVar4 = 0, 0 < *(int *)(lVar3 + 0x398))) {
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + 0x390);
        if (*(char *)(lVar5 + 0x78 + lVar1) == '\0') {
          _guard_xfg_dispatch_icall_nop(local_108,0,0x68);
          FUN_142ff9df0((longlong)iVar4 * 0x80 + lVar1,local_108);
          cVar2 = FUN_142fe0440(local_78);
          if (cVar2 != '\0') {
            FUN_140be7560(lVar3 + 0x390,iVar4,1,1);
            FUN_14172cc40(lVar3,1);
            if (local_b8 != 0) {
              FMemory::Free();
            }
            if (local_c8 != 0) {
              FMemory::Free();
            }
            if (local_d8 != 0) {
              FMemory::Free();
            }
            if (local_e8 != 0) {
              FMemory::Free();
            }
            break;
          }
          if (local_b8 != 0) {
            FMemory::Free();
          }
          if (local_c8 != 0) {
            FMemory::Free();
          }
          if (local_d8 != 0) {
            FMemory::Free();
          }
          if (local_e8 != 0) {
            FMemory::Free();
          }
        }
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 0x80;
      } while (iVar4 < *(int *)(lVar3 + 0x398));
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140cf3ee0 FUN_140cf3ee0 body=48 status=ok
// SIG undefined FUN_140cf3ee0(void)

void FUN_140cf3ee0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_142235230();
  if (param_3 != 0) {
    FUN_141242620(param_3,param_1);
  }
  return;
}



// FUNCTION 140cf3f10 FUN_140cf3f10 body=1747 status=ok
// SIG undefined FUN_140cf3f10(void)

void FUN_140cf3f10(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  void **ppvVar3;
  int iVar4;
  longlong *plVar5;
  void *_Src;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  void *pvVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18;
  undefined4 local_res20;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  void *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8 [2];
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  longlong *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined **local_128 [2];
  longlong *local_118;
  longlong local_110;
  undefined1 *local_f8 [2];
  undefined1 local_e8 [32];
  undefined8 local_c8;
  undefined4 local_b8;
  code *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  
  pvVar13 = (void *)0x0;
  uVar16 = 0;
  param_1[0x14e] = 0;
  param_1[0x14b] = param_2;
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if (lVar7 != 0) {
    uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar7 = UWorld::GetGameState<APVPGameState>(uVar8);
    if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x550) != 0)) {
      ARemnantMiniMapDisplayActor::GetPrivateStaticClass();
    }
  }
  FUN_140e615f0(param_1,0);
  lVar7 = FUN_1422312c0(param_1);
  if (lVar7 != 0) {
    lVar9 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (lVar9 = param_1[0xa1], lVar9 != 0)) {
      lVar10 = ULocalPlayer::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        lVar9 = FUN_142547b50(lVar9,local_128);
        plVar5 = *(longlong **)(lVar9 + 0x10);
        lVar9 = *(longlong *)(lVar9 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_128[0] = &PTR_FUN_143f740c8;
        if (local_110 != 0) {
          FMemory::Free();
        }
        local_128[0] = &PTR_FUN_143f73d18;
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_118 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar2 = (int *)((longlong)local_118 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_118 + 8))(local_118,1);
            }
          }
        }
        if (lVar9 != 0) {
          local_1f8 = (undefined4)lVar9;
          uStack_1f4 = (undefined4)((ulonglong)lVar9 >> 0x20);
          uStack_1f0 = SUB84(plVar5,0);
          uStack_1ec = (undefined4)((ulonglong)plVar5 >> 0x20);
          local_188 = local_1f8;
          uStack_184 = uStack_1f4;
          uStack_180 = uStack_1f0;
          uStack_17c = uStack_1ec;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          uVar8 = FUN_140bb7440(lVar7);
          FUN_140d9f870(uVar8,&local_188,2);
          local_178 = local_1f8;
          uStack_174 = uStack_1f4;
          uStack_170 = uStack_1f0;
          uStack_16c = uStack_1ec;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          uVar8 = FUN_140bb7440(lVar7);
          FUN_140d9f870(uVar8,&local_178,3);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          local_168 = local_1f8;
          uStack_164 = uStack_1f4;
          uStack_160 = uStack_1f0;
          uStack_15c = uStack_1ec;
          uVar8 = FUN_140bb7440(lVar7);
          FUN_140d9f870(uVar8,&local_168,4);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          local_158 = local_1f8;
          uStack_154 = uStack_1f4;
          uStack_150 = uStack_1f0;
          uStack_14c = uStack_1ec;
          uVar8 = FUN_140bb7440(lVar7);
          FUN_140d9f870(uVar8,&local_158,6);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          local_148 = local_1f8;
          uStack_144 = uStack_1f4;
          uStack_140 = uStack_1f0;
          uStack_13c = uStack_1ec;
          uVar8 = FUN_140bb7440(lVar7);
          FUN_140d9f870(uVar8,&local_148,5);
        }
        if (plVar5 != (longlong *)0x0) {
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
      }
    }
  }
  uVar15 = 0;
  if (param_1[0x304] != 0) {
    local_res8[0] = 0xffffffff;
    FUN_14170c210(local_res8);
    uVar14 = local_res8[0];
    local_res20 = local_res8[0];
    local_res8[0] = 0xffffffff;
    FUN_1416f8340(0xffffffff);
    local_res10[0] = 0xffffffff;
    uVar12 = 0xffffffff;
    if (param_1[0x304] != 0) {
      FUN_14170c210(local_res10);
      uVar12 = local_res10[0];
    }
    local_res10[0] = 0xffffffff;
    local_res18 = uVar12;
    FUN_1416f8340(0xffffffff);
    local_c8 = 0;
    local_b8 = 0;
    puVar11 = (undefined8 *)FUN_140438ef0(0x10,local_e8);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &PTR_FUN_1444f8758;
      *(undefined4 *)(puVar11 + 1) = uVar12;
      local_res18 = 0xffffffff;
      uVar12 = 0xffffffff;
    }
    local_78 = 0;
    local_f8[0] = &LAB_140cee990;
    local_68 = 0;
    puVar11 = (undefined8 *)FUN_140438ef0(0x10,local_98);
    if (puVar11 != (undefined8 *)0x0) {
      local_res20 = 0xffffffff;
      *puVar11 = &PTR_FUN_1444f8758;
      *(undefined4 *)(puVar11 + 1) = uVar14;
      uVar14 = 0xffffffff;
    }
    local_a8[0] = FUN_140cee8e0;
    FUN_14208c800(param_1[0x304],local_a8,local_f8);
    param_1[0x304] = 0;
    FUN_1416f8340(uVar12);
    FUN_1416f8340(uVar14);
  }
  if ((int)param_1[0x150] < 2) {
    if (param_1[0x14b] == 0) {
      pvVar13 = (void *)0x0;
      local_1e0 = 0;
      local_1e8 = (void *)0x0;
    }
    else {
      puVar11 = (undefined8 *)FText::ToString(param_1[0x14b] + 0xa8);
      local_1e8 = (void *)0x0;
      iVar4 = *(int *)(puVar11 + 1);
      _Src = (void *)*puVar11;
      local_1e0 = CONCAT44(local_1e0._4_4_,iVar4);
      if (iVar4 == 0) {
        local_1e0 = 0;
        uVar15 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1e8,iVar4,0);
        pvVar13 = local_1e8;
        _guard_xfg_dispatch_icall_nop(local_1e8,_Src,(longlong)iVar4 * 2);
        uVar15 = (undefined4)local_1e0;
        uVar16 = local_1e0._4_4_;
      }
    }
    ppvVar3 = (void **)(param_1 + 0x14f);
    if (ppvVar3 == &local_1e8) {
      if (pvVar13 != (void *)0x0) {
        FMemory::Free(pvVar13);
      }
    }
    else {
      if (*ppvVar3 != (void *)0x0) {
        FMemory::Free();
      }
      *ppvVar3 = pvVar13;
      *(undefined4 *)(param_1 + 0x150) = uVar15;
      *(undefined4 *)((longlong)param_1 + 0xa84) = uVar16;
    }
  }
  if ((param_1[0x14b] != 0) &&
     (FUN_140e61420(param_1[0x14b],&local_1b8), local_1b8 != (longlong *)0x0)) {
    lVar7 = local_1b8[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*local_1b8 + 0x368))(local_1b8);
      lVar7 = local_1b8[0x1f];
      if (lVar7 == 0) {
        return;
      }
    }
    lVar9 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      local_1d8[0] = 0;
      local_1d8[1] = 0x20;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d8,0);
      FGenericPlatformString::Memcpy(local_1d8[0],L"RequestAsyncLoad SingleDelegate",0x40);
      FWeakObjectPtr::operator=(&local_1c0,lVar7);
      FWeakObjectPtr::operator=(&local_1c8,param_1);
      local_1b0 = local_1c8;
      local_1ac = local_1c4;
      local_1a8 = local_1c0;
      local_1a4 = local_1bc;
      local_1a0 = 0;
      local_198 = 0;
      puVar11 = (undefined8 *)operator_new(0x28,&local_1a0);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &PTR_GetPoolName_1444f8298;
        *(undefined4 *)(puVar11 + 1) = local_1c8;
        *(undefined4 *)((longlong)puVar11 + 0xc) = local_1c4;
        *(undefined4 *)(puVar11 + 2) = local_1c0;
        *(undefined4 *)((longlong)puVar11 + 0x14) = local_1bc;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar11[4] = uVar8;
        *puVar11 = &PTR_GetPoolName_1444f82e0;
      }
      lVar9 = FUN_1422ca050();
      FStreamableManager::RequestAsyncLoad
                (lVar9 + 0x178,local_138,lVar7 + 0x2a98,&local_1a0,0,1,0,local_1d8);
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_130 + 1;
        lVar7 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar2 = (int *)((longlong)local_130 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
      if (local_1d8[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140cf45f0 FUN_140cf45f0 body=31 status=ok
// SIG undefined FUN_140cf45f0(void)

void FUN_140cf45f0(longlong param_1)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = 2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1418,local_res8);
  return;
}



// FUNCTION 140cf4610 FUN_140cf4610 body=499 status=ok
// SIG undefined FUN_140cf4610(void)

void FUN_140cf4610(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_f8 [24];
  undefined1 local_e0 [108];
  undefined2 local_74;
  
  if ((param_1[0x304] == 0) && ((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) != 0)) {
    cVar3 = (**(code **)(*param_1 + 0x768))();
    if (cVar3 != '\0') {
      FUN_140b99f70(local_f8);
      uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_118,L"Loading Character",L"OakPlayerController",
                         L"PlayerCharacterLoading");
      FText::operator=(local_e0,uVar4);
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_110 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)local_110 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
      local_74 = 0x100;
      lVar5 = FUN_1410f3080(param_1,local_f8);
      param_1[0x304] = lVar5;
      FUN_140b9d1a0(local_f8);
    }
  }
  if ((char)param_1[0x25] != '\x03') {
    local_138 = FUN_140cefb60;
    uStack_130 = 0;
    local_148 = 0;
    local_140 = 0;
    puVar6 = (undefined8 *)operator_new(0x30,&local_148);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(puVar6 + 1,param_1);
      *(undefined4 *)(puVar6 + 2) = (undefined4)local_138;
      *(undefined4 *)((longlong)puVar6 + 0x14) = local_138._4_4_;
      *(undefined4 *)(puVar6 + 3) = uStack_130;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = uStack_12c;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar6[5] = uVar4;
      *puVar6 = &PTR_FUN_143f77bd0;
    }
    uVar4 = thunk_FUN_1422ca050();
    plVar7 = (longlong *)FUN_1409f97d0(uVar4,local_128,param_2,&local_148);
    if (param_1 + 0x14c != plVar7) {
      param_1[0x14c] = *plVar7;
      *plVar7 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x14d,plVar7 + 1);
    }
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_120 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar1 = (int *)((longlong)local_120 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140cf4810 FUN_140cf4810 body=141 status=ok
// SIG undefined FUN_140cf4810(void)

void FUN_140cf4810(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  cVar1 = APlayerController::IsPrimaryPlayer();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar3 = (longlong *)UWorld::GetLevelScriptActor(uVar2,0);
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
      lVar5 = plVar4[0x1f];
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x368))(plVar4);
        lVar5 = plVar4[0x1f];
      }
      (**(code **)(*plVar3 + 0x6e8))(plVar3,*(undefined8 *)(lVar5 + 0x38));
    }
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x182);
  }
  return;
}



// FUNCTION 140cf48b0 FUN_140cf48b0 body=850 status=ok
// SIG undefined FUN_140cf48b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cf48b0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x148) != 0)) {
    FUN_141460cc0(param_1);
    FUN_141460c80(param_1);
    plVar7 = *(longlong **)(lVar3 + 0x148);
    if (plVar7 != (longlong *)0x0) {
      lVar3 = ARemnantQuest::GetPrivateStaticClass();
      if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (cVar2 = (**(code **)(*plVar7 + 0x778))(plVar7), cVar2 != '\0')) {
        FUN_14145e750(param_1);
      }
    }
    if (param_1[0x1aa] == 0) {
      FUN_140d16430(param_1);
    }
    else {
      cVar2 = FUN_1412c7b60();
      if (cVar2 == '\0') {
        FUN_1412bb5b0(param_1[0x1aa]);
      }
    }
    lVar3 = FUN_1422312c0(param_1);
    if (lVar3 != 0) {
      lVar6 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140bce640(lVar3);
      }
    }
    if (param_1[0x134] != 0) {
      return;
    }
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar3 == 0) {
      return;
    }
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((*(byte *)(lVar3 + 0x830) & 4) != 0) {
      return;
    }
    cVar2 = FUN_140d01f30(param_1);
    if (cVar2 != '\0') {
      return;
    }
    if (param_1[0x10b] == 0) {
      return;
    }
    cVar2 = FUN_140d01b90(param_1);
    if (cVar2 != '\0') {
      return;
    }
    if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) ||
       (cVar2 = (**(code **)(*param_1 + 0x768))(param_1), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (cVar2 = FUN_140d02a50(param_1), cVar2 != '\0')) {
      FUN_140ce9840(param_1,0);
      FUN_140d007c0(param_1);
      return;
    }
    FWeakObjectPtr::operator=(&local_e0,param_1);
    uVar5 = local_e0;
    local_e8 = local_e0;
    local_a8 = (longlong *)0x0;
    local_98 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_CopyToEmptyStorage_143fcfe50;
      *(undefined4 *)((longlong)puVar4 + 0xc) = local_e8._4_4_;
      *(int *)(puVar4 + 1) = (int)uVar5;
    }
    local_d8[0] = (code *)&LAB_140cee960;
  }
  else {
    FWeakObjectPtr::operator=(&local_e8,param_1);
    uVar5 = local_e8;
    local_e0 = local_e8;
    local_a8 = (longlong *)0x0;
    local_98 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_CopyToEmptyStorage_143fcfe50;
      *(int *)(puVar4 + 1) = (int)uVar5;
      *(undefined4 *)((longlong)puVar4 + 0xc) = local_e0._4_4_;
    }
    local_d8[0] = FUN_140cee910;
  }
  uVar5 = AActor::GetWorldTimerManager(param_1);
  local_88 = 0;
  local_80 = 0;
  FWeakObjectPtr::operator=(local_78,0);
  local_70 = 0;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_68,local_d8);
  FUN_142880af0(uVar5,&local_88);
  if (local_28 != 0) {
    plVar7 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar7 = local_38;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
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
  return;
}



// FUNCTION 140cf4c10 FUN_140cf4c10 body=244 status=ok
// SIG undefined FUN_140cf4c10(void)

void FUN_140cf4c10(longlong *param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = (**(code **)(*param_1 + 0xfa8))();
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar4 = *(longlong *)(DAT_146b33f38 + 0x90);
  if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x48) == 0)) && (lVar4 != 0)) && (param_2 != 0)) {
    uVar3 = (**(code **)(*param_1 + 0xfa8))(param_1);
    lVar2 = FUN_142f02280(uVar3,*(undefined8 *)(lVar4 + 0x3f8));
    if (lVar2 != 0) {
      lVar4 = FUN_141358f70();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_142ed56a0(lVar2,param_1);
        FUN_140f8dd50(lVar2,param_2,*(undefined8 *)(param_3 + 0x1d8));
      }
    }
  }
  return;
}



// FUNCTION 140cf4d10 FUN_140cf4d10 body=172 status=ok
// SIG undefined FUN_140cf4d10(void)

void FUN_140cf4d10(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar4 = (**(code **)(*param_1 + 0xfa8))();
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x48) == 0)) {
    FUN_1411f5e70(local_38,param_1,param_2);
    return;
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Cannot open menu, already in a menu.",L"OakPlayerController",
                     L"MenusAlreadyOpen");
  FUN_14145da30(param_1,uVar5);
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



// FUNCTION 140cf4dc0 FUN_140cf4dc0 body=100 status=ok
// SIG undefined FUN_140cf4dc0(void)

void FUN_140cf4dc0(undefined8 param_1,undefined1 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1422312c0();
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      FUN_140bd7830(lVar2,param_2);
    }
  }
  return;
}



// FUNCTION 140cf4e30 FUN_140cf4e30 body=76 status=ok
// SIG undefined FUN_140cf4e30(void)

void FUN_140cf4e30(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x148))();
    FUN_140e2f920(param_2,uVar1,param_1,1,param_3);
  }
  return;
}



// FUNCTION 140cf4e80 FUN_140cf4e80 body=333 status=ok
// SIG undefined FUN_140cf4e80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cf4e80(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  undefined8 *local_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 *local_268;
  undefined1 *puStack_260;
  undefined8 local_258;
  longlong *local_250;
  undefined1 local_240 [8];
  undefined8 *local_238;
  undefined1 *puStack_230;
  undefined1 local_228 [520];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  if ((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) != 0) {
    cVar1 = (**(code **)(*param_1 + 0x768))();
    if (cVar1 != '\0') {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      if ((param_2 != 0) && (*(longlong *)(DAT_146b33f38 + 0xd8) != 0)) {
        local_258 = *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0xd8) + 0x100);
        local_268 = &local_258;
        local_278 = 0;
        puStack_260 = local_240;
        local_270 = 0;
        local_250 = param_1;
        local_238 = local_268;
        puStack_230 = puStack_260;
        FUN_1405e1200(local_228,&local_238);
        local_278 = CONCAT44(0xffffffff,(undefined4)local_278);
        local_270 = 0;
        uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
        local_288 = 0;
        local_290 = &local_278;
        local_298 = 0;
        FUN_1405f8040(&local_268,uVar2,param_2,local_228);
        if (local_20 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 140cf4fd0 FUN_140cf4fd0 body=400 status=ok
// SIG undefined FUN_140cf4fd0(void)

void FUN_140cf4fd0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  if (param_2 != 0) {
    if ((*(longlong **)(param_2 + 0x4b8) == (longlong *)0x0) ||
       (cVar6 = (**(code **)(**(longlong **)(param_2 + 0x4b8) + 0x20))(), cVar6 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (lVar7 = FUN_1422312c0(param_1), lVar7 != 0)) {
      lVar8 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_28 = *(undefined8 *)(param_2 + 0x4b8);
        local_20 = *(longlong **)(param_2 + 0x4c0);
        if (local_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_20 + 1) = (int)local_20[1] + 1;
          UNLOCK();
        }
        FUN_140bdaee0(lVar7,&local_28);
        plVar5 = local_20;
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_20 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
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
        if ((*(longlong **)(param_2 + 0x538) == (longlong *)0x0) ||
           (cVar6 = (**(code **)(**(longlong **)(param_2 + 0x538) + 0x20))(), cVar6 == '\0')) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_18 = *(undefined8 *)(param_2 + 0x538);
          local_10 = *(longlong **)(param_2 + 0x540);
          if (local_10 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_10 + 1) = (int)local_10[1] + 1;
            UNLOCK();
          }
          FUN_140bdaee0(lVar7,&local_18);
          plVar5 = local_10;
          if (local_10 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_10 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
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
      }
    }
  }
  return;
}



// FUNCTION 140cf5160 FUN_140cf5160 body=242 status=ok
// SIG undefined FUN_140cf5160(void)

void FUN_140cf5160(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_18;
  longlong *local_10;
  
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
    cVar6 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
    if (cVar6 != '\0') {
      bVar4 = true;
      goto LAB_140cf5191;
    }
  }
  bVar4 = false;
LAB_140cf5191:
  if (bVar4) {
    lVar7 = FUN_1422312c0(param_1);
    if (lVar7 != 0) {
      lVar8 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_18 = *(undefined8 *)(param_2 + 8);
        local_10 = *(longlong **)(param_2 + 0x10);
        if (local_10 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_10 + 1) = (int)local_10[1] + 1;
          UNLOCK();
        }
        FUN_140bd8550(lVar7,&local_18,param_3);
        plVar5 = local_10;
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_10 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
    }
  }
  return;
}



// FUNCTION 140cf5260 FUN_140cf5260 body=99 status=ok
// SIG undefined FUN_140cf5260(void)

void FUN_140cf5260(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1422312c0();
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      FUN_140bd7ce0(lVar2,param_2);
    }
  }
  return;
}



// FUNCTION 140cf52d0 FUN_140cf52d0 body=135 status=ok
// SIG undefined FUN_140cf52d0(void)

void FUN_140cf52d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0xab0);
  lVar4 = (longlong)*(int *)(param_1 + 0xab8);
  iVar3 = *(int *)(param_1 + 0xab8) + 1;
  *(int *)(param_1 + 0xab8) = iVar3;
  if (*(int *)(param_1 + 0xabc) < iVar3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
  }
  lVar2 = *plVar1;
  *(undefined8 *)(lVar2 + lVar4 * 0x10) = 0;
  *(undefined8 *)(lVar2 + 8 + lVar4 * 0x10) = 0;
  *(undefined8 *)(*plVar1 + lVar4 * 0x10) = param_2;
  *(undefined4 *)(*plVar1 + 8 + lVar4 * 0x10) = param_3;
  *(undefined4 *)(*plVar1 + 0xc + lVar4 * 0x10) = param_4;
  return;
}



// FUNCTION 140cf5380 FUN_140cf5380 body=116 status=ok
// SIG undefined FUN_140cf5380(void)

void FUN_140cf5380(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_141410f00();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(longlong *)(param_2 + 0x58) != 0)) && (*(longlong *)(param_1 + 0xa88) != 0))
    {
      FUN_142f02570(param_1,*(longlong *)(param_2 + 0x58),0);
    }
  }
  return;
}



// FUNCTION 140cf5420 FUN_140cf5420 body=1167 status=ok
// SIG undefined FUN_140cf5420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cf5420(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_1c8 [32];
  undefined1 *local_1a8;
  longlong local_198;
  undefined1 local_190 [8];
  undefined4 *local_188;
  ulonglong *puStack_180;
  undefined8 local_178;
  longlong local_170;
  undefined4 *local_168;
  ulonglong *puStack_160;
  undefined1 local_158 [16];
  longlong local_148 [2];
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [24];
  undefined4 local_80 [4];
  undefined1 local_70 [8];
  longlong *local_68;
  char local_58;
  ulonglong local_50 [2];
  
  if (param_2 != 0) {
    local_50[0] = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
    lVar5 = FUN_1412286a0(param_2,param_4);
    if (((((lVar5 != 0) && (*(longlong **)(lVar5 + 0x118) != (longlong *)0x0)) &&
         (plVar6 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 0x118) + 0x668))(),
         plVar6 != (longlong *)0x0)) &&
        ((cVar4 = (**(code **)(*plVar6 + 0x768))(plVar6), cVar4 != '\0' &&
         (lVar5 = FUN_1412286a0(param_2,param_3), lVar5 != 0)))) &&
       ((*(longlong **)(lVar5 + 0x118) != (longlong *)0x0 &&
        (lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x118) + 0x680))(), lVar5 != 0)))) {
      uVar7 = FUN_14270d290(lVar5,local_148);
      lVar5 = FText::AsCultureInvariant(local_98,uVar7);
      local_198 = lVar5;
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_108,L"{0} wants to swap seats",L"SeatSwapMenu",
                         L"ConfirmSeatSwapMessage");
      puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_a8,uVar7);
      local_80[0] = 4;
      FText::FText(local_70,lVar5);
      local_178 = *puVar8;
      local_188 = local_80;
      puStack_180 = local_50;
      local_170 = puVar8[1];
      local_58 = '\x01';
      if (local_170 != 0) {
        LOCK();
        *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
        UNLOCK();
      }
      local_168 = local_188;
      puStack_160 = puStack_180;
      uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_158,&local_168);
      uVar7 = FText::Format(local_120,&local_178,uVar7);
      FText::FText(local_c0,uVar7);
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_118 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_158);
      if ((local_58 != '\0') && (local_58 = '\0', local_68 != (longlong *)0x0)) {
        LOCK();
        plVar6 = local_68 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
      plVar6 = (longlong *)puVar8[1];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      plVar6 = *(longlong **)(local_198 + 8);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_100 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if (local_148[0] != 0) {
        FMemory::Free();
      }
      FName::FName(local_190,L"OpenStatusMenu",1);
      FUN_140cfc2a0(param_1,local_138,local_190);
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_d8,L"To Swap Seats",L"SeatSwapMenu",L"PendingSeatSwap");
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_f0,L"Confirm Seat Swap",L"SeatSwapMenu",L"ConfirmSeatSwapHeader");
      local_1a8 = local_138;
      puVar8 = (undefined8 *)FUN_1411d97c0(*(undefined8 *)(param_1 + 0x1428),&local_188,uVar9,uVar7)
      ;
      *(undefined8 *)(param_1 + 0x19a8) = *puVar8;
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_e8 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_d0 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      FWeakObjectPtr::operator=(param_1 + 0x19a0,param_2);
      *(undefined4 *)(param_1 + 0x19b0) = param_3;
      *(undefined4 *)(param_1 + 0x19b4) = param_4;
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_130 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)local_130 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_b8 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
    }
  }
  return;
}



// FUNCTION 140cf58b0 FUN_140cf58b0 body=304 status=ok
// SIG undefined FUN_140cf58b0(void)

void FUN_140cf58b0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  
  lVar2 = *(longlong *)(param_1 + 0x9a0);
  if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 0x98), iVar1 != 0)) {
    iVar8 = 0;
    lVar4 = FUN_140d3b7b0(*(undefined8 *)(lVar2 + 0x90));
    bVar9 = lVar4 != param_2;
    iVar5 = 0;
    do {
      iVar3 = iVar5;
      do {
        iVar3 = iVar3 + 1;
        if (iVar1 <= iVar3) break;
        lVar4 = FUN_140d3b7b0((longlong)iVar3 * 0x38 + *(longlong *)(lVar2 + 0x90));
      } while (bVar9 == (lVar4 != param_2));
      iVar6 = iVar3 - iVar5;
      if (bVar9 == false) {
        if (iVar6 != 0) {
          plVar7 = (longlong *)((longlong)iVar5 * 0x38 + 0x20 + *(longlong *)(lVar2 + 0x90));
          do {
            if (*plVar7 != 0) {
              FMemory::Free();
            }
            plVar7 = plVar7 + 7;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      else {
        if (iVar8 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar8 * 0x38 + *(longlong *)(lVar2 + 0x90)),
                     (void *)((longlong)iVar5 * 0x38 + *(longlong *)(lVar2 + 0x90)),
                     (longlong)iVar6 * 0x38);
        }
        iVar8 = iVar8 + iVar6;
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar5 = iVar3;
    } while (iVar3 < iVar1);
    *(int *)(lVar2 + 0x98) = iVar8;
  }
  return;
}



// FUNCTION 140cf59e0 FUN_140cf59e0 body=370 status=ok
// SIG undefined FUN_140cf59e0(void)

void FUN_140cf59e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_58 [64];
  
  lVar4 = FUN_140cff230();
  if ((lVar4 != 0) && (iVar6 = *(int *)(lVar4 + 0x3d8), 0 < iVar6)) {
    iVar2 = rand();
    plVar1 = (longlong *)(lVar4 + 0x3d0);
    iVar3 = (int)((float)iVar2 * 3.051851e-05 * (float)iVar6);
    iVar2 = iVar6 + -1;
    if (iVar3 <= iVar6 + -1) {
      iVar2 = iVar3;
    }
    lVar8 = (longlong)iVar2 * 0x40;
    lVar7 = *plVar1 + lVar8;
    FString::operator=(param_1 + 0xe88,lVar7);
    *(undefined4 *)(param_1 + 0xe98) = *(undefined4 *)(lVar7 + 0x10);
    FUN_1404c0940(param_1 + 0xea0,lVar7 + 0x18);
    uVar5 = FUN_140ce1040(local_58,param_1 + 0xe88);
    FUN_1414600e0(param_1,uVar5);
    lVar7 = *plVar1;
    FUN_1404bf980(lVar7 + 0x18 + lVar8);
    if (*(longlong *)(lVar8 + lVar7) != 0) {
      FMemory::Free();
    }
    iVar6 = *(int *)(lVar4 + 0x3d8);
    iVar3 = (iVar6 - iVar2) + -1;
    if (iVar3 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + lVar8),(void *)((longlong)(iVar2 + 1) * 0x40 + *plVar1),
                 (longlong)iVar3 << 6);
      iVar6 = *(int *)(lVar4 + 0x3d8);
    }
    *(int *)(lVar4 + 0x3d8) = iVar6 + -1;
    TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(plVar1);
    FUN_14172cc40(lVar4,1);
    FUN_140d1b4d0(param_1);
  }
  return;
}



// FUNCTION 140cf5b60 FUN_140cf5b60 body=102 status=ok
// SIG undefined FUN_140cf5b60(void)

void FUN_140cf5b60(longlong param_1,char param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (((param_2 != *(char *)(param_1 + 0xcb8)) &&
      (*(char *)(param_1 + 0xcb8) = param_2, *(int *)(param_1 + 0xbf0) != 0)) &&
     (*(longlong **)(param_1 + 0xbe8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xbe8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0xbf0) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0xbe8);
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
    }
  }
  return;
}



// FUNCTION 140cf5bd0 FUN_140cf5bd0 body=42 status=ok
// SIG undefined FUN_140cf5bd0(void)

void FUN_140cf5bd0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x1430) != 0) {
    FUN_142fcd410(*(longlong *)(param_1 + 0x1430),param_2,0xbf800000,0,0);
  }
  return;
}



// FUNCTION 140cf5c00 FUN_140cf5c00 body=119 status=ok
// SIG undefined FUN_140cf5c00(void)

void FUN_140cf5c00(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)param_1[0x30a];
  if (plVar1 != param_2) {
    param_1[0x30a] = (longlong)param_2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x778))(plVar1,param_1);
      param_2 = (longlong *)param_1[0x30a];
    }
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x770))(param_2,param_1);
    }
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = FUN_140e4ba40(uVar2);
    if (lVar3 != 0) {
      FUN_140e5a0a0(lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 140cf5c80 FUN_140cf5c80 body=31 status=ok
// SIG undefined FUN_140cf5c80(void)

void FUN_140cf5c80(longlong param_1,uint param_2,char param_3)

{
  if (param_3 != '\0') {
    *(uint *)(param_1 + 0x1490) = *(uint *)(param_1 + 0x1490) | param_2;
    return;
  }
  *(uint *)(param_1 + 0x1490) = ~param_2 & *(uint *)(param_1 + 0x1490);
  return;
}



// FUNCTION 140cf5ca0 FUN_140cf5ca0 body=65 status=ok
// SIG undefined FUN_140cf5ca0(void)

void FUN_140cf5ca0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140d01f30();
  if (cVar1 == '\0') {
    FUN_1426ff5c0(param_1,param_2);
    if (*(longlong *)(param_1 + 0xa88) == 0) {
      FUN_140cff1b0(param_1);
    }
  }
  return;
}



// FUNCTION 140cf5cf0 FUN_140cf5cf0 body=41 status=ok
// SIG undefined FUN_140cf5cf0(void)

void FUN_140cf5cf0(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140cff230();
  if (lVar1 != 0) {
    FUN_140d4cc40(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 140cf5d20 FUN_140cf5d20 body=124 status=ok
// SIG undefined FUN_140cf5d20(void)

void FUN_140cf5d20(longlong *param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_1[0x152] != 0) {
    if ((param_2 != '\0') && (*(byte *)(param_1 + 0x25) < 4)) {
      uVar2 = AArchVisCharacter::StaticClass();
      cVar1 = FUN_142ef5b10(param_1[0x152],uVar2);
      if (cVar1 != '\0') {
        uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar3 = UWorld::GetGameState<APVPGameState>(uVar2);
        if ((lVar3 != 0) && (*(int *)(lVar3 + 0x61c) < 1)) {
          return;
        }
      }
    }
    FUN_142f0fca0(param_1[0x152],param_2);
  }
  return;
}



// FUNCTION 140cf5da0 FUN_140cf5da0 body=150 status=ok
// SIG undefined FUN_140cf5da0(void)

void FUN_140cf5da0(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = APlayerController::IsPrimaryPlayer();
  if (cVar2 != '\0') {
    lVar3 = FUN_1422312c0(param_1);
    if (lVar3 != 0) {
      lVar4 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140beac50(lVar3,param_2,param_3,param_4);
      }
    }
  }
  return;
}



// FUNCTION 140cf5e40 FUN_140cf5e40 body=141 status=ok
// SIG undefined FUN_140cf5e40(void)

void FUN_140cf5e40(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xa88) != 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = *(longlong *)(DAT_146b33f38 + 0x90);
    if (lVar1 != 0) {
      if (param_2 != '\0') {
        FUN_140c70470(*(undefined8 *)(param_1 + 0xa88),lVar1 + 0xf58,lVar1 + 0xf88,
                      *(undefined4 *)(lVar1 + 0xfb8));
        return;
      }
      FUN_140c70470(*(undefined8 *)(param_1 + 0xa88),lVar1 + 0xf70,lVar1 + 4000,
                    *(undefined4 *)(lVar1 + 0xfb8));
    }
  }
  return;
}



// FUNCTION 140cf5ee0 FUN_140cf5ee0 body=52 status=ok
// SIG undefined FUN_140cf5ee0(void)

void FUN_140cf5ee0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined8 *)FName::FName(local_res10,&DAT_1444dbf74,1);
  FUN_140d07ee0(param_1,*puVar1,0);
  return;
}



// FUNCTION 140cf5f20 FUN_140cf5f20 body=676 status=ok
// SIG undefined FUN_140cf5f20(void)

void FUN_140cf5f20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *local_60;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *plStack_30;
  longlong local_28;
  longlong *plStack_20;
  
  FUN_142dcf3a0();
  if (param_2 == 0) {
    plVar7 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = true;
    local_60 = (longlong *)0x0;
    lVar10 = 0;
  }
  else {
    plVar7 = *(longlong **)(param_2 + 0x4c0);
    bVar6 = true;
    bVar5 = false;
    lVar10 = *(longlong *)(param_2 + 0x4b8);
    local_50 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  if ((bVar5) && (local_60 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if ((bVar6) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  lVar8 = FUN_1422312c0(param_1);
  if (lVar8 != 0) {
    lVar9 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140cf606f;
  }
  lVar8 = 0;
LAB_140cf606f:
  if (((local_48 != 0) && (lVar10 != 0)) && (lVar8 != 0)) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    plStack_30 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
    local_28 = lVar10;
    plStack_20 = plVar7;
    FUN_140bf76e0(lVar8,local_38,&local_28);
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plStack_30 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
    plVar1 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_20 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_20)(plStack_20);
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
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_40 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plStack_40 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140cf61d0 FUN_140cf61d0 body=52 status=ok
// SIG undefined FUN_140cf61d0(void)

void FUN_140cf61d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined8 *)FName::FName(local_res10,"Mayhem",1);
  FUN_140d07ee0(param_1,*puVar1,0);
  return;
}



// FUNCTION 140cf6220 FUN_140cf6220 body=208 status=ok
// SIG undefined FUN_140cf6220(void)

void FUN_140cf6220(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,undefined1 param_6,undefined1 param_7)

{
  longlong *plVar1;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  plVar1 = *(longlong **)(param_1 + 0x528);
  if (plVar1 != (longlong *)0x0) {
    local_34 = (float)(param_5 >> 8 & 0xff) * 0.003921569;
    local_30 = (float)(param_5 & 0xff) * 0.003921569;
    local_38 = (float)(param_5 >> 0x10 & 0xff) * 0.003921569;
    local_2c = (float)(param_5 >> 0x18) * 0.003921569;
    (**(code **)(*plVar1 + 0x850))(plVar1,*plVar1,plVar1,param_4,&local_38,param_6,param_7);
  }
  return;
}



// FUNCTION 140cf62f0 FUN_140cf62f0 body=487 status=ok
// SIG undefined FUN_140cf62f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cf62f0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  cVar1 = APlayerController::IsPrimaryPlayer();
  if (cVar1 != '\0') {
    if (*(longlong *)(param_1 + 0x460) == 0) {
      local_98 = &LAB_140ce47fc;
      uStack_90 = 0;
      plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        *(undefined4 *)(plVar3 + 2) = (undefined4)local_98;
        *(undefined4 *)((longlong)plVar3 + 0x14) = local_98._4_4_;
        *(undefined4 *)(plVar3 + 3) = uStack_90;
        *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_8c;
        lVar2 = FDelegateHandle::GenerateNewID();
        plVar3[5] = lVar2;
        *plVar3 = (longlong)&PTR_FUN_143f77bd0;
      }
      uVar4 = AActor::GetWorldTimerManager(param_1);
      local_88 = 0;
      local_80 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
      }
      FWeakObjectPtr::operator=(local_78,0);
      local_70 = 0;
      local_68 = AK::MemoryMgr::StartProfileThreadUsage;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      FUN_142880af0(uVar4,&local_88);
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
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar2 = FMemory::Realloc(plVar3,0,0);
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
      }
    }
    else {
      lVar2 = FUN_1422312c0(param_1);
      if ((lVar2 != 0) && (lVar2 = FUN_1422312c0(param_1), *(longlong *)(lVar2 + 0x48) != 0)) {
        lVar2 = FUN_1422312c0(param_1);
        (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x290))
                  (*(longlong **)(lVar2 + 0x48),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x460) + 0x4d8));
      }
    }
  }
  return;
}



// FUNCTION 140cf64e0 FUN_140cf64e0 body=355 status=ok
// SIG undefined FUN_140cf64e0(void)

void FUN_140cf64e0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong in_stack_ffffffffffffffa0;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x978) != 0) {
    FUN_142d9e0d0(*(longlong *)(param_1 + 0x978),*(undefined8 *)(param_2 + 0x38),0,
                  0x4110000041800000,0x41a00000,4,1,1,DAT_14686e060,
                  in_stack_ffffffffffffffa0 & 0xffffffffffffff00,0,1,0);
  }
  if (*(longlong *)(param_1 + 0x18f8) != 0) {
    FUN_14260f940(*(longlong *)(param_1 + 0x18f8),*(undefined8 *)(param_2 + 0x30));
    FUN_1425fcab0(*(undefined8 *)(param_1 + 0x18f8),0);
    return;
  }
  local_30 = DAT_1468b5da8;
  local_38 = DAT_1468b5da0;
  local_10 = 0;
  local_20 = 0;
  local_28 = 0;
  uVar1 = FUN_1424600f0(*(undefined8 *)(param_2 + 0x30),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x990) + 0x168),0,&local_28,
                        &local_38,2,0,0,1,0);
  *(undefined8 *)(param_1 + 0x18f8) = uVar1;
  return;
}



// FUNCTION 140cf6650 FUN_140cf6650 body=55 status=ok
// SIG undefined FUN_140cf6650(void)

void FUN_140cf6650(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x978) != 0) {
    FUN_142e724b0(*(longlong *)(param_1 + 0x978),0,DAT_14686e060,1);
  }
  FUN_142600fa0(*(undefined8 *)(param_1 + 0x18f8));
  return;
}



// FUNCTION 140cf6690 FUN_140cf6690 body=144 status=ok
// SIG undefined FUN_140cf6690(void)

void FUN_140cf6690(longlong *param_1)

{
  char cVar1;
  
  if ((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) {
    return;
  }
  cVar1 = (**(code **)(*param_1 + 0x768))();
  if (cVar1 != '\0') {
    if (param_1[0x91] == 0) {
      cVar1 = '\0';
    }
    else if ((((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) ||
             (cVar1 = (**(code **)(*param_1 + 0x768))(param_1), cVar1 == '\0')) &&
            (*(char *)((longlong)param_1 + 0x1289) == '\0')) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    *(char *)((longlong)param_1 + 0x1289) = cVar1;
    if (cVar1 == '\0') {
      FUN_140d0d210(param_1);
    }
    if ((char)param_1[0x25] == '\x03') {
      return;
    }
    FUN_141460af0(param_1,*(undefined1 *)((longlong)param_1 + 0x1289));
    return;
  }
  return;
}



// FUNCTION 140cf6740 FUN_140cf6740 body=143 status=ok
// SIG undefined FUN_140cf6740(void)

void FUN_140cf6740(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x1880);
    plVar4 = (longlong *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x1888);
    plVar2 = plVar4 + (longlong)iVar3 * 2;
    for (; plVar4 != plVar2; plVar4 = plVar4 + 2) {
      if (*plVar4 == param_2) {
        return;
      }
    }
    *(int *)(param_1 + 0x1888) = iVar3 + 1;
    if (*(int *)(param_1 + 0x188c) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
    }
    FUN_140a4ee60(*plVar1 + (longlong)iVar3 * 0x10,param_2,1);
    *(undefined1 *)(param_1 + 0xa51) = 1;
  }
  return;
}



// FUNCTION 140cf67d0 FUN_140cf67d0 body=119 status=ok
// SIG undefined FUN_140cf67d0(void)

void FUN_140cf67d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x1890);
    plVar4 = (longlong *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x1898);
    plVar2 = plVar4 + (longlong)iVar3 * 2;
    for (; plVar4 != plVar2; plVar4 = plVar4 + 2) {
      if (*plVar4 == param_2) {
        return;
      }
    }
    *(int *)(param_1 + 0x1898) = iVar3 + 1;
    if (*(int *)(param_1 + 0x189c) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
    }
    FUN_140a4ee60(*plVar1 + (longlong)iVar3 * 0x10,param_2,1);
  }
  return;
}



// FUNCTION 140cf6850 FUN_140cf6850 body=147 status=ok
// SIG undefined FUN_140cf6850(void)

void FUN_140cf6850(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x1860);
    plVar4 = (longlong *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x1868);
    plVar2 = plVar4 + (longlong)iVar3 * 2;
    for (; plVar4 != plVar2; plVar4 = plVar4 + 2) {
      if (*plVar4 == param_2) {
        return;
      }
    }
    *(int *)(param_1 + 0x1868) = iVar3 + 1;
    if (*(int *)(param_1 + 0x186c) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
    }
    FUN_140a4ee60(*plVar1 + (longlong)iVar3 * 0x10,param_2,1);
    FUN_140d048c0(param_1,param_2);
  }
  return;
}



// FUNCTION 140cf68f0 FUN_140cf68f0 body=113 status=ok
// SIG undefined FUN_140cf68f0(void)

void FUN_140cf68f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x1900);
    plVar5 = (longlong *)*plVar1;
    lVar6 = (longlong)*(int *)(param_1 + 0x1908);
    plVar2 = plVar5 + lVar6 * 2;
    for (; plVar5 != plVar2; plVar5 = plVar5 + 2) {
      if (*plVar5 == param_2) {
        return;
      }
    }
    iVar4 = *(int *)(param_1 + 0x1908) + 1;
    *(int *)(param_1 + 0x1908) = iVar4;
    if (*(int *)(param_1 + 0x190c) < iVar4) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
    }
    lVar3 = *plVar1;
    *(longlong *)(lVar3 + lVar6 * 0x10) = param_2;
    *(undefined1 *)(lVar3 + 8 + lVar6 * 0x10) = 0;
  }
  return;
}



// FUNCTION 140cf6970 FUN_140cf6970 body=308 status=ok
// SIG undefined FUN_140cf6970(void)

void FUN_140cf6970(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_res10;
  undefined1 local_78 [32];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x1870);
    plVar6 = (longlong *)*plVar1;
    lVar7 = (longlong)*(int *)(param_1 + 0x1878);
    plVar2 = plVar6 + lVar7 * 2;
    for (; plVar6 != plVar2; plVar6 = plVar6 + 2) {
      if (*plVar6 == param_2) {
        return;
      }
    }
    iVar5 = *(int *)(param_1 + 0x1878) + 1;
    *(int *)(param_1 + 0x1878) = iVar5;
    if (*(int *)(param_1 + 0x187c) < iVar5) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
    }
    lVar3 = *plVar1;
    *(longlong *)(lVar3 + lVar7 * 0x10) = param_2;
    *(undefined1 *)(lVar3 + 8 + lVar7 * 0x10) = 1;
    *(undefined1 *)(param_1 + 0xa51) = 1;
    if (*(longlong *)(param_2 + 0x180) != 0) {
      _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
      cVar4 = FUN_140b26350(param_2,local_78);
      if (cVar4 != '\0') {
        FUN_140ced8a0(param_1,*(undefined8 *)(param_2 + 0x180),local_78);
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
    }
    local_res10 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0xc28,&local_res10);
  }
  return;
}



// FUNCTION 140cf6af0 FUN_140cf6af0 body=45 status=ok
// SIG undefined FUN_140cf6af0(void)

void FUN_140cf6af0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  FUN_140e76d40(param_1 + 0x1b10);
  if (*param_4 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140cf6b30 FUN_140cf6b30 body=89 status=ok
// SIG undefined FUN_140cf6b30(void)

void FUN_140cf6b30(longlong param_1,undefined8 *param_2)

{
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (*(longlong *)(param_1 + 0xc70) != 0) {
    local_28 = *param_2;
    FString::FString(local_20,param_2 + 1);
    FUN_140e75ed0(*(undefined8 *)(param_1 + 0xc70),&local_28);
  }
  if (param_2[1] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140cf6b90 FUN_140cf6b90 body=114 status=ok
// SIG undefined FUN_140cf6b90(void)

void FUN_140cf6b90(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0xc70) != 0) && (FUN_140e76da0(), param_4 != 0)) {
    plVar2 = (longlong *)0x0;
    if (param_2 != 0) {
      uVar1 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
    }
  }
  return;
}



// FUNCTION 140cf6c10 FUN_140cf6c10 body=89 status=ok
// SIG undefined FUN_140cf6c10(void)

void FUN_140cf6c10(longlong param_1,undefined8 *param_2)

{
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (*(longlong *)(param_1 + 0xc70) != 0) {
    local_28 = *param_2;
    FString::FString(local_20,param_2 + 1);
    FUN_140e76e50(*(undefined8 *)(param_1 + 0xc70),&local_28);
  }
  if (param_2[1] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140cf6c70 FUN_140cf6c70 body=41 status=ok
// SIG undefined FUN_140cf6c70(void)

void FUN_140cf6c70(longlong param_1,undefined4 *param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1830,&local_28);
  return;
}



// FUNCTION 140cf6ca0 FUN_140cf6ca0 body=209 status=ok
// SIG undefined FUN_140cf6ca0(void)

void FUN_140cf6ca0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar6 = *(longlong *)(param_1 + 0xa90);
  if ((lVar6 != 0) && (0 < *(int *)(lVar6 + 0x48))) {
    if (((longlong *)**(longlong **)(lVar6 + 0x40) != (longlong *)0x0) &&
       (lVar6 = (**(code **)(*(longlong *)**(longlong **)(lVar6 + 0x40) + 0x278))(), lVar6 != 0)) {
      plVar7 = *(longlong **)(param_1 + 0x1458);
      plVar1 = plVar7 + *(int *)(param_1 + 0x1460);
      if (plVar7 != plVar1) {
        bVar5 = true;
        do {
          iVar2 = *(int *)(*plVar7 + 0x90);
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar2) ||
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)iVar2 * 8)
              != *plVar7 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          bVar4 = false;
          if (!bVar3) {
            bVar4 = bVar5;
          }
          plVar7 = plVar7 + 1;
          bVar5 = bVar4;
        } while (plVar7 != plVar1);
        if (!bVar4) {
          return;
        }
      }
    }
    FUN_142ee3cb0(*(undefined8 *)(param_1 + 0xa90));
  }
  return;
}



// FUNCTION 140cf6d80 FUN_140cf6d80 body=108 status=ok
// SIG undefined FUN_140cf6d80(void)

undefined1 FUN_140cf6d80(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_140cfbfb0();
  if (lVar2 != 0) {
    cVar1 = FUN_140aa6ea0(lVar2 + 0x340,param_2,param_3);
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xa4e) == '\0') {
        *(undefined1 *)(param_1 + 0xa4c) = 1;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140cf6df0 CopyToEmptyStorage body=104 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_86b5239219762420415e95617a23a7af>_>::
CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_1444f8578;
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 4,param_1 + 0x20);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140cf6e60 FUN_140cf6e60 body=103 status=ok
// SIG undefined FUN_140cf6e60(void)

undefined8 * FUN_140cf6e60(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8758;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_14170c210(puVar1 + 1,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140cf6ed0 FUN_140cf6ed0 body=66 status=ok
// SIG undefined FUN_140cf6ed0(void)

void FUN_140cf6ed0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    return;
  }
  return;
}



// FUNCTION 140cf6f20 FUN_140cf6f20 body=54 status=ok
// SIG undefined FUN_140cf6f20(void)

void FUN_140cf6f20(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8620;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 140cf6f60 CopyToEmptyStorage body=79 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7a02e06ca5db01d82e81cc92e1965566>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_1444f81f0;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140cf6fb0 FUN_140cf6fb0 body=816 status=ok
// SIG undefined FUN_140cf6fb0(void)

void FUN_140cf6fb0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong local_1e8 [2];
  undefined1 local_1d8 [16];
  longlong local_1c8;
  longlong local_1b8;
  longlong local_1a8;
  longlong local_198;
  longlong local_188;
  undefined1 local_168 [8];
  longlong local_160;
  undefined1 local_148 [32];
  longlong local_128;
  longlong local_118;
  longlong local_108;
  longlong local_f8;
  undefined1 local_d8 [192];
  
  *(undefined1 *)(param_1 + 0xa51) = 1;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x210) == 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x210) + 0xb8);
  }
  if (((lVar2 != 0) && (param_2 != 0)) && (lVar6 != 0)) {
    _guard_xfg_dispatch_icall_nop(local_148,0,0x68);
    FUN_142ff3000(param_2,local_148);
    local_1e8[0] = 0;
    local_1e8[1] = 0;
    cVar3 = FUN_142ff5c90(local_148,local_1e8,1);
    if (cVar3 != '\0') {
      FUN_140ce1310(local_d8);
      FUN_140b30700(local_d8,param_3,local_1e8);
      FUN_140d0e4a0(param_1,local_d8);
      cVar3 = FUN_140b2f430(local_d8);
      if (cVar3 != '\0') {
        plVar1 = (longlong *)(param_1 + 0xe58);
        iVar5 = *(int *)(param_1 + 0xe60);
        *(int *)(param_1 + 0xe60) = iVar5 + 1;
        if (*(int *)(param_1 + 0xe64) < iVar5 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar1,iVar5);
        }
        FUN_140ce1220((longlong)iVar5 * 0xb8 + *plVar1);
        if ((*(int *)(lVar2 + 0x38c) < *(int *)(param_1 + 0xe60)) &&
           (iVar5 = 0, 0 < *(int *)(param_1 + 0xe60))) {
          do {
            _guard_xfg_dispatch_icall_nop(local_1d8,0,0x68);
            FUN_142fde710(local_168,*plVar1 + 0x50 + (longlong)iVar5 * 0xb8);
            cVar3 = FUN_143001780(local_1d8);
            if (local_160 != 0) {
              FMemory::Free();
            }
            if (cVar3 != '\0') {
              lVar4 = 0;
              if (local_1c8 != 0) {
                lVar4 = *(longlong *)(local_1c8 + 0xb8);
              }
              if ((lVar4 != 0) && (*(int *)(lVar4 + 0x88) < *(int *)(lVar6 + 0x88))) {
                FUN_140d0d030(plVar1,iVar5,1,1);
                if (local_188 != 0) {
                  FMemory::Free();
                }
                if (local_198 != 0) {
                  FMemory::Free();
                }
                if (local_1a8 != 0) {
                  FMemory::Free();
                }
                if (local_1b8 != 0) {
                  FMemory::Free();
                }
                break;
              }
            }
            if (local_188 != 0) {
              FMemory::Free();
            }
            if (local_198 != 0) {
              FMemory::Free();
            }
            if (local_1a8 != 0) {
              FMemory::Free();
            }
            if (local_1b8 != 0) {
              FMemory::Free();
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0xe60));
        }
        if (*(int *)(lVar2 + 0x38c) < *(int *)(param_1 + 0xe60)) {
          FUN_140d0d030(plVar1,0,1,1);
        }
        FUN_140d133d0(param_1,1);
        FUN_140cf8800(param_1,local_d8);
      }
      FUN_140ce29d0(local_d8);
    }
    if (local_1e8[0] != 0) {
      FMemory::Free();
    }
    if (local_f8 != 0) {
      FMemory::Free();
    }
    if (local_108 != 0) {
      FMemory::Free();
    }
    if (local_118 != 0) {
      FMemory::Free();
    }
    if (local_128 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140cf72e0 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1444f8890;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1444f88d8;
  }
  return;
}



// FUNCTION 140cf7330 FUN_140cf7330 body=66 status=ok
// SIG undefined FUN_140cf7330(void)

void FUN_140cf7330(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1444f86c8;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_1444f8710;
  }
  return;
}



// FUNCTION 140cf7380 FUN_140cf7380 body=152 status=ok
// SIG undefined FUN_140cf7380(void)

void FUN_140cf7380(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1444f8770;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar2 + 3) = 0xffffffff;
    uVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    FUN_14170c210(puVar2 + 3,uVar3);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar2 = &PTR_GetPoolName_1444f87b8;
  }
  return;
}



// FUNCTION 140cf7420 FUN_140cf7420 body=89 status=ok
// SIG undefined FUN_140cf7420(void)

void FUN_140cf7420(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1444f8328;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1444f8370;
  }
  return;
}



// FUNCTION 140cf7480 FUN_140cf7480 body=89 status=ok
// SIG undefined FUN_140cf7480(void)

void FUN_140cf7480(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1444f8298;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1444f82e0;
  }
  return;
}



// FUNCTION 140cf74e0 FUN_140cf74e0 body=152 status=ok
// SIG undefined FUN_140cf74e0(void)

void FUN_140cf74e0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1444f8448;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar2 + 3) = 0xffffffff;
    uVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    FUN_14170c210(puVar2 + 3,uVar3);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar2 = &PTR_GetPoolName_1444f8490;
  }
  return;
}



// FUNCTION 140cf7580 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1444f8590;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1444f85d8;
  }
  return;
}



// FUNCTION 140cf75d0 FUN_140cf75d0 body=152 status=ok
// SIG undefined FUN_140cf75d0(void)

void FUN_140cf75d0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1444f8800;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar2 + 3) = 0xffffffff;
    uVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    FUN_14170c210(puVar2 + 3,uVar3);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar2 = &PTR_GetPoolName_1444f8848;
  }
  return;
}



// FUNCTION 140cf7670 FUN_140cf7670 body=84 status=ok
// SIG undefined FUN_140cf7670(void)

void FUN_140cf7670(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8208;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1444f8250;
  }
  return;
}



// FUNCTION 140cf76d0 FUN_140cf76d0 body=84 status=ok
// SIG undefined FUN_140cf76d0(void)

void FUN_140cf76d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8638;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1444f8680;
  }
  return;
}



// FUNCTION 140cf7730 FUN_140cf7730 body=84 status=ok
// SIG undefined FUN_140cf7730(void)

void FUN_140cf7730(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f7eb0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1444f7ef8;
  }
  return;
}



// FUNCTION 140cf7790 CreateCopy body=95 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<0,UFGInteractWidget,TTypeWrapper<void>___cdecl(void),float>
     ::CreateCopy(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f83b8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1444f8400;
  }
  return;
}



// FUNCTION 140cf77f0 FUN_140cf77f0 body=92 status=ok
// SIG undefined FUN_140cf77f0(void)

void FUN_140cf77f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f84e8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1444f8530;
  }
  return;
}



// FUNCTION 140cf7850 FUN_140cf7850 body=711 status=ok
// SIG undefined FUN_140cf7850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cf7850(longlong *param_1)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined4 local_120;
  undefined1 *local_118;
  undefined *local_110;
  longlong *local_108;
  undefined4 local_100;
  undefined1 local_f8 [16];
  code *local_e8;
  undefined4 uStack_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [22];
  undefined1 local_92;
  longlong local_60;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if ((param_1[0x132] == 0) ||
     (cVar5 = (**(code **)(*(longlong *)(param_1[0x132] + 0xd98) + 0x48))(), cVar5 != '\x03')) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar3 = *(longlong *)(DAT_146b33f38 + 0x58);
    if ((((lVar3 != 0) && (lVar4 = param_1[0x91], lVar4 != 0)) &&
        ((*(byte *)(param_1 + 200) & 2) == 0)) &&
       (*(float *)(lVar3 + 0x558) < *(float *)((longlong)param_1 + 0x1914) ||
        *(float *)(lVar3 + 0x558) == *(float *)((longlong)param_1 + 0x1914))) {
      (**(code **)(*param_1 + 0x830))(param_1,&local_d8,local_b8);
      fVar2 = *(float *)(lVar3 + 0x444);
      pfVar6 = (float *)FRotator::Vector(local_b8,&local_e8);
      plVar1 = param_1 + 0x331;
      local_d8 = fVar2 * *pfVar6 + local_d8;
      local_c0 = local_d0 + fVar2 * pfVar6[2];
      local_d4 = local_d4 + fVar2 * pfVar6[1];
      param_1[0x1a3] = CONCAT44(local_d4,local_d8);
      *(float *)(param_1 + 0x1a4) = local_c0;
      local_c8 = CONCAT44(local_d4,local_d8);
      if ((((int)param_1[0x332] == 0) || ((longlong *)*plVar1 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*(longlong *)*plVar1 + 0x18))(), cVar5 == '\0')) {
        local_e8 = FUN_140d08bb0;
        uStack_e0 = 0;
        FUN_140cdd210(plVar1,param_1,&local_e8);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_14686e278) &&
         (_Init_thread_header(&DAT_14686e278), DAT_14686e278 == -1)) {
        FName::FName(&DAT_14686e270,L"PlayerAlert",1);
        _Init_thread_footer(&DAT_14686e278);
      }
      local_128 = (undefined8 *)lVar4;
      FUN_1422ffb20(local_a8,DAT_14686e270,local_f8,0);
      local_92 = 1;
      uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      local_100 = 0;
      local_110 = &DAT_146aefe68;
      local_118 = local_a8;
      local_128 = &local_c8;
      local_120 = 3;
      local_108 = plVar1;
      FUN_142330010(uVar7,&local_e8,1,&local_d8);
      if ((char)param_1[0x25] != '\x03') {
        *(undefined4 *)((longlong)param_1 + 0x1914) = 0;
      }
      if (local_40 != 0) {
        FMemory::Free();
      }
      if (local_60 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140cf7b20 FUN_140cf7b20 body=372 status=ok
// SIG undefined FUN_140cf7b20(void)

undefined8 * FUN_140cf7b20(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_1444f7ea0;
  *(undefined1 *)(plVar8 + 3) = 0;
  plVar8[4] = local_res10;
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



// FUNCTION 140cf7ca0 FUN_140cf7ca0 body=9 status=ok
// SIG undefined FUN_140cf7ca0(void)

void FUN_140cf7ca0(longlong param_1)

{
  FUN_140dde930(param_1 + 0x10);
  return;
}



// FUNCTION 140cf7cb0 DestroyObject body=109 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,SharedPointerInternals::DefaultDeleter<TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>_>
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
    FMemory::operator_delete(lVar4,0x18);
  }
  return;
}



// FUNCTION 140cf7d20 FUN_140cf7d20 body=48 status=ok
// SIG undefined FUN_140cf7d20(void)

void FUN_140cf7d20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd50) != 0) {
    FUN_142227350(*(longlong *)(param_1 + 0xd50),0,1);
    *(undefined8 *)(param_1 + 0xd50) = 0;
  }
  return;
}



// FUNCTION 140cf7d50 FUN_140cf7d50 body=901 status=ok
// SIG undefined FUN_140cf7d50(void)

void FUN_140cf7d50(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  FUN_141460c40(param_1,0);
  if ((char)param_1[0x25] == '\x03') {
    lVar3 = FUN_1407c7450(param_1);
    if (lVar3 != 0) {
      FUN_1407cfaf0(lVar3,param_1);
    }
    lVar3 = param_1[0x109];
    if (lVar3 != 0) {
      lVar4 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lVar3 = FUN_140c41db0(lVar3), lVar3 != 0)) {
        FUN_14123ece0(lVar3,3);
      }
    }
  }
  lVar3 = FUN_1422312c0(param_1);
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
    if ((bVar1) && (lVar3 = UGameInstance::GetGameViewportClient(lVar3), lVar3 != 0)) {
      lVar4 = AReplicationGraphDebugActor::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140483870(lVar3 + 0x240,param_1);
      }
    }
  }
  if ((param_1[0x28e] != 0) && ((char)param_1[0x25] == '\x03')) {
    thunk_FUN_1414b7270();
  }
  if (param_1[0x228] != 0) {
    FUN_142227350(param_1[0x228],0,1);
    param_1[0x228] = 0;
  }
  plVar6 = (longlong *)param_1[0x223];
  plVar7 = plVar6 + (longlong)(int)param_1[0x224] * 2;
  for (; plVar6 != plVar7; plVar6 = plVar6 + 2) {
    if (plVar6[1] != 0) {
      FUN_142227350(plVar6[1],0,1);
    }
    if (*plVar6 != 0) {
      FUN_142227350(*plVar6,0,1);
    }
  }
  *(undefined4 *)(param_1 + 0x224) = 0;
  if (*(int *)((longlong)param_1 + 0x1124) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x223,0);
  }
  if (param_1[0x1aa] != 0) {
    FUN_142227350(param_1[0x1aa],0,1);
    param_1[0x1aa] = 0;
  }
  if (param_1[0x285] != 0) {
    FUN_1411d8c20();
    param_1[0x285] = 0;
  }
  if (param_1[0x18a] != 0) {
    FUN_1407665e0(param_1[0x18a] + 0x178,param_1);
    FUN_1407665e0(param_1[0x18a] + 0x188,param_1);
    FUN_1407665e0(param_1[0x18a] + 0x198,param_1);
  }
  if (param_1[0x193] != 0) {
    FUN_1407665e0(param_1[0x193] + 0x1a8,param_1);
  }
  if (param_1[0x152] != 0) {
    *(undefined1 *)(param_1 + 0x153) = 1;
    FUN_1407665e0(param_1[0x152] + 0x138,param_1);
    FUN_142ee8350(param_1[0x152]);
    param_1[0x152] = 0;
  }
  uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  plVar6 = (longlong *)FUN_140d3a420(uVar5);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 200))(plVar6,param_1 + 0x24a);
    (**(code **)(*plVar6 + 0x128))(plVar6,param_1 + 0x24b);
  }
  cVar2 = (**(code **)(*param_1 + 0x768))(param_1);
  if (cVar2 != '\0') {
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = FUN_140e4ba40(uVar5);
    if (lVar3 != 0) {
      FUN_140e54ef0(lVar3);
    }
  }
  if (((char)param_1[0x25] == '\x03') && (param_1[0x30a] != 0)) {
    cVar2 = (**(code **)(*param_1 + 0x768))(param_1);
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x1300))(param_1,0,1);
    }
    FUN_14145e450(param_1,0,1);
  }
  FUN_142dc8f80(param_1);
  param_1[0x286] = 0;
  return;
}



// FUNCTION 140cf80e0 FUN_140cf80e0 body=224 status=ok
// SIG undefined FUN_140cf80e0(void)

void FUN_140cf80e0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_142dc9080(param_1,param_2,param_3,param_4,param_5);
  local_20 = CONCAT44((float)DAT_1464aa730._1_1_ * 0.003921569,
                      (float)DAT_1464aa730._2_1_ * 0.003921569);
  local_18 = CONCAT44((float)DAT_1464aa730._3_1_ * 0.003921569,
                      (float)(byte)DAT_1464aa730 * 0.003921569);
  (**(code **)(*(longlong *)(param_2 + 0x98) + 0x20))((longlong *)(param_2 + 0x98),&local_20);
  local_20 = 0;
  local_18 = 0;
  FUN_142dcfa90(param_1,local_res10,local_res8);
  (**(code **)(*param_1 + 0x1058))(param_1,local_28);
  TArray<FSaveGameUserSetting,FDefaultAllocator>::~TArray<FSaveGameUserSetting,FDefaultAllocator>
            (&local_20);
  return;
}



// FUNCTION 140cf81c0 FUN_140cf81c0 body=1460 status=ok
// SIG undefined FUN_140cf81c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cf81c0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b0;
  longlong *local_a0;
  longlong *local_90;
  undefined4 local_88 [4];
  longlong *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_88[0] = 0;
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if (lVar7 == 0) {
    lVar7 = 0;
LAB_140cf828a:
    uStack_f0 = (longlong *)0x0;
    lVar11 = 0;
    local_b0 = (longlong *)0x0;
    local_f8 = (longlong *)0x0;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    lVar7 = UWorld::GetGameState<APVPGameState>();
    if ((lVar7 == 0) || (lVar11 = *(longlong *)(lVar7 + 0x558), lVar11 == 0)) goto LAB_140cf828a;
    lVar8 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140cf828a;
    uStack_f0 = *(longlong **)(lVar11 + 0x4c0);
    bVar4 = true;
    bVar3 = false;
    local_f8 = *(longlong **)(lVar11 + 0x4b8);
    local_a0 = uStack_f0;
    if (uStack_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_f0 + 1) = (int)uStack_f0[1] + 1;
      UNLOCK();
    }
  }
  plVar10 = local_b0;
  if (uStack_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_f0 + 1) = (int)uStack_f0[1] + 1;
    UNLOCK();
  }
  if ((bVar3) && (local_b0 != (longlong *)0x0)) {
    LOCK();
    plVar14 = local_b0 + 1;
    lVar8 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  plVar10 = local_a0;
  if ((bVar4) && (local_a0 != (longlong *)0x0)) {
    LOCK();
    plVar14 = local_a0 + 1;
    lVar8 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  lVar8 = FUN_1422312c0(param_1);
  if (lVar8 != 0) {
    lVar9 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140cf838d;
  }
  lVar8 = 0;
LAB_140cf838d:
  if ((local_f8 != (longlong *)0x0) && (lVar8 != 0)) {
    (**(code **)(*local_f8 + 8))(local_f8,local_88);
    cVar5 = FUN_140bcac80();
    plVar10 = uStack_f0;
    if (cVar5 == '\0') {
      if (lVar11 == 0) {
        plVar14 = (longlong *)0x0;
        bVar4 = false;
        bVar3 = true;
        local_78 = (longlong *)0x0;
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar14 = *(longlong **)(lVar11 + 0x540);
        plVar13 = *(longlong **)(lVar11 + 0x538);
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        bVar4 = true;
        bVar3 = false;
        local_90 = plVar14;
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      local_d8._0_4_ = SUB84(plVar13,0);
      local_40 = (undefined4)local_d8;
      local_d8._4_4_ = (undefined4)((ulonglong)plVar13 >> 0x20);
      uStack_3c = local_d8._4_4_;
      uStack_d0._0_4_ = SUB84(plVar14,0);
      uStack_38 = (undefined4)uStack_d0;
      uStack_d0._4_4_ = (undefined4)((ulonglong)plVar14 >> 0x20);
      uStack_34 = uStack_d0._4_4_;
      local_d8 = local_f8;
      uStack_d0 = uStack_f0;
      local_f8 = plVar13;
      if (uStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar13 = uStack_f0 + 1;
        lVar11 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          puVar12 = (undefined8 *)*uStack_f0;
          uStack_f0 = plVar14;
          (*(code *)*puVar12)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar14 = uStack_f0;
          if (iVar6 == 1) {
            (**(code **)(*uStack_d0 + 8))(uStack_d0,1);
            plVar14 = uStack_f0;
          }
        }
      }
      uStack_f0 = plVar14;
      plVar10 = local_78;
      if ((bVar3) && (local_78 != (longlong *)0x0)) {
        LOCK();
        plVar14 = local_78 + 1;
        lVar11 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_78 + 8))(local_78,1);
          }
        }
      }
      plVar10 = local_90;
      if ((bVar4) && (local_90 != (longlong *)0x0)) {
        LOCK();
        plVar14 = local_90 + 1;
        lVar11 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
    }
  }
  if ((((param_1[0x285] != 0) && (lVar8 != 0)) && (lVar7 != 0)) && (local_f8 != (longlong *)0x0)) {
    local_e8 = 0;
    local_e0 = 0;
    if ((*(char *)(lVar7 + 0x6c1) == '\0') && (*(char *)(lVar7 + 0x6c2) != '\0')) {
      iVar6 = FUN_140cb6860(lVar7);
    }
    else {
      iVar6 = -1;
    }
    local_68 = (undefined4)local_f8;
    uStack_64 = local_f8._4_4_;
    uStack_60 = (undefined4)uStack_f0;
    uStack_5c = uStack_f0._4_4_;
    if (uStack_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_f0 + 1) = (int)uStack_f0[1] + 1;
      UNLOCK();
    }
    local_108 = &local_e8;
    FUN_140d79f00(*(undefined8 *)(lVar8 + 0x478),&local_68,0,1);
    plVar10 = (longlong *)CONCAT44(uStack_5c,uStack_60);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar10 + 1;
      lVar7 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if ((iVar6 < 1) || ((int)local_e0 < 2)) {
      lVar7 = *(longlong *)(lVar8 + 0x478);
      local_c8 = FUN_140d052c0;
      uStack_c0 = 0;
      plVar14 = (longlong *)(lVar7 + 0x1e0);
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      local_50 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar10 + 1,param_1);
        *(undefined4 *)(plVar10 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)plVar10 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(plVar10 + 3) = uStack_c0;
        *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_bc;
        lVar11 = FDelegateHandle::GenerateNewID();
        plVar10[5] = lVar11;
        *plVar10 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar14,1);
        (**(code **)(*plVar10 + 0x20))(plVar10,local_58);
        iVar6 = *(int *)(lVar7 + 0x1e8);
        *(int *)(lVar7 + 0x1e8) = iVar6 + 1;
        if (*(int *)(lVar7 + 0x1ec) < iVar6 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar6);
        }
        puVar12 = (undefined8 *)((longlong)iVar6 * 0x10 + *plVar14);
        *puVar12 = plVar10;
        *(undefined4 *)(puVar12 + 1) = 3;
      }
      local_c8 = (code *)local_f8;
      uStack_c0 = (undefined4)uStack_f0;
      uStack_bc = uStack_f0._4_4_;
      if (uStack_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_f0 + 1) = (int)uStack_f0[1] + 1;
        UNLOCK();
      }
      FUN_140d938f0(*(undefined8 *)(lVar8 + 0x478),&local_c8);
      plVar10 = (longlong *)CONCAT44(uStack_bc,uStack_c0);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar10 + 1;
        lVar7 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar10)(plVar10);
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
    else {
      FUN_140cf09b0(param_1);
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
  }
  plVar10 = uStack_f0;
  if (uStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar14 = uStack_f0 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_f0)(uStack_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*uStack_f0 + 8))(uStack_f0,1);
      }
    }
  }
  return;
}



// FUNCTION 140cf8780 FUN_140cf8780 body=116 status=ok
// SIG undefined FUN_140cf8780(void)

void FUN_140cf8780(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_28 [32];
  
  lVar5 = FUN_140cff1b0();
  if (lVar5 != 0) {
    uVar6 = FText::FText(local_28,param_2);
    FUN_140c70190(lVar5,uVar6);
  }
  plVar4 = *(longlong **)(param_2 + 8);
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



// FUNCTION 140cf8800 FUN_140cf8800 body=1400 status=ok
// SIG undefined FUN_140cf8800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cf8800(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined1 auStack_228 [32];
  longlong *local_208;
  undefined8 *local_200;
  undefined1 *local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8 [3];
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 *local_178;
  undefined4 *local_170;
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  longlong *local_158;
  longlong local_148;
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined **local_118 [2];
  longlong *local_108;
  longlong local_100;
  undefined1 local_f0 [24];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  lVar11 = param_1[0xa1];
  if (lVar11 != 0) {
    lVar10 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar11 = FUN_142547b50(lVar11,local_118);
      local_1e8 = *(longlong *)(lVar11 + 8);
      uStack_1e0 = *(longlong **)(lVar11 + 0x10);
      if (uStack_1e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_1e0 + 1) = (int)uStack_1e0[1] + 1;
        UNLOCK();
      }
      local_118[0] = &PTR_FUN_143f740c8;
      if (local_100 != 0) {
        FMemory::Free();
      }
      local_118[0] = &PTR_FUN_143f73d18;
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_108 + 1;
        lVar11 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar1 = (int *)((longlong)local_108 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_108 + 8))(local_108,1);
          }
        }
      }
      if (local_1e8 != 0) {
        local_1b8 = (undefined4)local_1e8;
        uStack_1b4 = local_1e8._4_4_;
        uStack_1b0 = (undefined4)uStack_1e0;
        uStack_1ac = uStack_1e0._4_4_;
        if (uStack_1e0 != (longlong *)0x0) {
          LOCK();
          *(int *)(uStack_1e0 + 1) = (int)uStack_1e0[1] + 1;
          UNLOCK();
        }
        lVar11 = FUN_1422312c0(param_1);
        if (lVar11 != 0) {
          lVar10 = FUN_14141f270();
          if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((bVar5) && (param_1[0x285] != 0)) {
            local_208 = local_1d8;
            local_1d8[0] = 0;
            local_1d8[1] = 0;
            cVar7 = FUN_140d79f00(*(undefined8 *)(lVar11 + 0x478),&local_1b8,1,0);
            if (cVar7 != '\0') {
              if (DAT_146b33f38 == 0) {
                FUN_142d7ebe0();
              }
              if ((*(longlong *)(DAT_146b33f38 + 0x98) != 0) &&
                 (lVar10 = FUN_140d7efb0(*(longlong *)(DAT_146b33f38 + 0x98),0x13), lVar10 != 0)) {
                local_c8 = 0;
                local_c0 = 0;
                local_a8 = 0;
                local_a0 = 0;
                local_98 = 0xffffffff;
                local_94 = 0;
                local_88 = 0;
                local_80 = 0;
                local_78[0] = 4;
                FText::FText(local_68,param_2 + 8);
                local_50 = '\x01';
                local_178 = &DAT_14629a370;
                local_170 = local_78;
                FUN_1405df450(&local_c8,local_1a8,&local_178,0);
                if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
                  LOCK();
                  plVar4 = local_60 + 1;
                  lVar6 = *plVar4;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)lVar6 == 1) {
                    (**(code **)*local_60)(local_60);
                    LOCK();
                    piVar1 = (int *)((longlong)local_60 + 0xc);
                    iVar3 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*local_60 + 8))(local_60,1);
                    }
                  }
                }
                uVar12 = FTextFormat::FTextFormat(local_d8,lVar10 + 0x30);
                FText::Format(local_130,uVar12,&local_c8);
                uVar8 = FUN_140bb6e30(lVar11,&local_1b8);
                uVar9 = FUN_140bb6bd0(lVar11,&local_1b8);
                FUN_140bbae80(lVar11,&local_148,uVar9);
                FText::FText(local_160);
                lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
                if (lVar11 != 0) {
                  if (DAT_146b33f38 == 0) {
                    FUN_142d7ebe0();
                  }
                  if ((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
                     (lVar10 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x580),
                     lVar10 != 0)) {
                    local_1c0 = 0;
                    local_198 = 0;
                    local_190 = 0;
                    local_180 = 0;
                    local_200 = &local_198;
                    local_188 = 0;
                    local_208 = (longlong *)CONCAT44(local_208._4_4_,0x42480000);
                    FUN_1405a1e30(local_f0,lVar11,lVar10,&local_188);
                    FUN_140591060(local_f0);
                  }
                }
                local_1f8 = local_160;
                local_200 = (undefined8 *)local_130;
                local_208 = &local_148;
                FUN_1411daa60(param_1[0x285],local_168,local_1d8,uVar8);
                if (local_158 != (longlong *)0x0) {
                  LOCK();
                  plVar4 = local_158 + 1;
                  lVar11 = *plVar4;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_158)(local_158);
                    LOCK();
                    piVar1 = (int *)((longlong)local_158 + 0xc);
                    iVar3 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*local_158 + 8))(local_158,1);
                    }
                  }
                }
                if (local_140 != (longlong *)0x0) {
                  LOCK();
                  plVar4 = local_140 + 1;
                  lVar11 = *plVar4;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
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
                if (local_128 != (longlong *)0x0) {
                  LOCK();
                  plVar4 = local_128 + 1;
                  lVar11 = *plVar4;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_128)(local_128);
                    LOCK();
                    piVar1 = (int *)((longlong)local_128 + 0xc);
                    iVar3 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*local_128 + 8))(local_128,1);
                    }
                  }
                }
                local_80 = 0;
                if (local_88 != 0) {
                  FMemory::Free();
                }
                TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                          (&local_c8);
              }
            }
            if (local_1d8[0] != 0) {
              FMemory::Free();
            }
          }
        }
        plVar4 = (longlong *)CONCAT44(uStack_1ac,uStack_1b0);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          lVar11 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
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
      }
      plVar4 = uStack_1e0;
      if (uStack_1e0 != (longlong *)0x0) {
        LOCK();
        plVar2 = uStack_1e0 + 1;
        lVar11 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*uStack_1e0)(uStack_1e0);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*uStack_1e0 + 8))(uStack_1e0,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140cf8da0 FUN_140cf8da0 body=499 status=ok
// SIG undefined FUN_140cf8da0(void)

bool FUN_140cf8da0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float local_98;
  float local_94;
  float local_90;
  undefined1 local_88 [128];
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (((lVar1 == 0) || (lVar2 = *(longlong *)(param_1 + 0x990), lVar2 == 0)) ||
     (*(longlong *)(lVar2 + 0xe68) == 0)) {
    return false;
  }
  FUN_1426979a0(lVar2,&local_98);
  fVar4 = local_98 * local_98 + local_94 * local_94;
  if (fVar4 <= 0.0) {
    return true;
  }
  if (fVar4 == 1.0) {
    fVar6 = local_94;
    fVar7 = local_98;
    fVar8 = local_90;
    if (local_90 == 0.0) goto LAB_140cf8ef0;
  }
  else {
    fVar6 = DAT_1468b5d94;
    fVar7 = DAT_1468b5d90;
    fVar8 = DAT_1468b5d98;
    if (fVar4 < 1e-08) goto LAB_140cf8ef0;
    auVar5 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar6 = auVar5._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    local_98 = local_98 * fVar6;
    local_94 = fVar6 * local_94;
  }
  fVar8 = 0.0;
  fVar6 = local_94;
  fVar7 = local_98;
LAB_140cf8ef0:
  pfVar3 = (float *)(**(code **)(**(longlong **)(param_1 + 0x990) + 0x9b8))
                              (*(longlong **)(param_1 + 0x990),local_88);
  fVar6 = fVar6 * pfVar3[1] + fVar7 * *pfVar3 + fVar8 * pfVar3[2];
  fVar4 = -1.0;
  if ((-1.0 <= fVar6) && (fVar4 = fVar6, 1.0 <= fVar6)) {
    fVar4 = 1.0;
  }
  fVar4 = _guard_xfg_dispatch_icall_nop(fVar4);
  pfVar3 = (float *)(lVar1 + 0x1a0);
  return fVar4 * 57.295776 < *pfVar3 || fVar4 * 57.295776 == *pfVar3;
}



// FUNCTION 140cf8fa0 Empty body=104 status=ok
// SIG undefined Empty(void)

void TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_>::Empty(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 140cf9010 FUN_140cf9010 body=335 status=ok
// SIG undefined FUN_140cf9010(void)

void FUN_140cf9010(longlong *param_1,int param_2)

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
    plVar7 = (longlong *)(*param_1 + 0x68);
    do {
      FUN_1404bf980(plVar7 + 4);
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      if (plVar7[-3] != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)plVar7[-5];
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
      plVar4 = (longlong *)plVar7[-8];
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
      plVar4 = (longlong *)plVar7[-0xb];
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
      plVar7 = plVar7 + 0x17;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FOnlineSessionSearchResult,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 140cf9160 FUN_140cf9160 body=104 status=ok
// SIG undefined FUN_140cf9160(void)

void FUN_140cf9160(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 140cf91d0 FUN_140cf91d0 body=1595 status=ok
// SIG undefined FUN_140cf91d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cf91d0(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(char *)((longlong)param_1 + 0x1a04) == '\0') {
    lVar5 = param_1[0xa5];
    if (((*(uint *)(lVar5 + 0x2c40) & 4) != 0) && ((*(uint *)(lVar5 + 0x2c40) >> 0xc & 1) != 0)) {
      if ((0.0001 <= ABS(*(float *)(lVar5 + 0x484) - DAT_1464aa6e0)) ||
         (((0.0001 <= ABS(*(float *)(lVar5 + 0x488) - DAT_1464aa6e4) ||
           (0.0001 <= ABS(*(float *)(lVar5 + 0x48c) - DAT_1464aa6e8))) ||
          (0.0001 <= ABS(*(float *)(lVar5 + 0x490) - DAT_1464aa6ec))))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *(undefined1 *)((longlong)param_1 + 0x1a05) = 1;
        uStack_b0 = 0;
        local_b8 = FUN_14145dba0;
        plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar4 + 1,param_1);
          *(undefined4 *)(plVar4 + 2) = (undefined4)local_b8;
          *(undefined4 *)((longlong)plVar4 + 0x14) = local_b8._4_4_;
          *(undefined4 *)(plVar4 + 3) = uStack_b0;
          *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_ac;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar4[5] = lVar5;
          *plVar4 = (longlong)&PTR_FUN_143f77bd0;
        }
        lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar5 + 400) == 0) {
          uVar6 = *(undefined8 *)(lVar5 + 0x3f8);
        }
        else {
          uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
        }
        local_a8 = 0;
        local_a0 = 0;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x30))(plVar4,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_c0 = 0xbf800000;
        local_c8 = 0;
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar6,param_1 + 0x341,&local_a8,0x40000000);
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
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          lVar5 = FMemory::Realloc(plVar4,0,0);
          if (lVar5 != 0) {
            FMemory::Free(lVar5);
          }
        }
      }
    }
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x1a04) = 0;
    iVar2 = FUN_142235230();
    if (iVar2 == 3) {
      FUN_141460c00(param_1,0);
    }
    if (param_1[0x285] != 0) {
      FUN_1411e79a0(param_1[0x285],param_1[0x342]);
    }
    if ((char)param_1[0xa7] == '\0') {
      *(undefined1 *)(param_1 + 0xa7) = 1;
      (**(code **)(*param_1 + 0xe20))(param_1,param_1[0x91]);
    }
    lVar5 = param_1[0x91];
    if (lVar5 != 0) {
      lVar3 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_b8 = FUN_141400aa0;
        *(undefined1 *)((longlong)param_1 + 0x1a05) = 1;
        uStack_b0 = 0;
        lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        plVar4 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar4 + 1,lVar5);
          *(undefined4 *)(plVar4 + 2) = (undefined4)local_b8;
          *(undefined4 *)((longlong)plVar4 + 0x14) = local_b8._4_4_;
          *(undefined4 *)(plVar4 + 3) = uStack_b0;
          *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_ac;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar4[5] = lVar5;
          *plVar4 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_a8 = 0;
        local_a0 = 0;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x30))(plVar4,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_90 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        FUN_142880af0(uVar6,&local_a8);
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
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          lVar5 = FMemory::Realloc(plVar4,0,0);
          if (lVar5 != 0) {
            FMemory::Free(lVar5);
          }
        }
        uStack_b0 = 0;
        local_b8 = FUN_14145dba0;
        plVar4 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar4 + 1,param_1);
          *(undefined4 *)(plVar4 + 2) = (undefined4)local_b8;
          *(undefined4 *)((longlong)plVar4 + 0x14) = local_b8._4_4_;
          *(undefined4 *)(plVar4 + 3) = uStack_b0;
          *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_ac;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar4[5] = lVar5;
          *plVar4 = (longlong)&PTR_FUN_143f77bd0;
        }
        lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar5 + 400) == 0) {
          uVar6 = *(undefined8 *)(lVar5 + 0x3f8);
        }
        else {
          uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
        }
        local_a8 = 0;
        local_a0 = 0;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x30))(plVar4,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_c0 = 0xbf800000;
        local_c8 = 0;
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar6,param_1 + 0x341,&local_a8,0x40000000);
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
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          lVar5 = FMemory::Realloc(plVar4,0,0);
          if (lVar5 != 0) {
            FMemory::Free(lVar5);
          }
        }
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_14686e2d8) {
      _Init_thread_header(&DAT_14686e2d8);
      if (DAT_14686e2d8 == -1) {
        FName::FName(&DAT_14686e2d0,L"LateJoiningActorCulling",1);
        _Init_thread_footer(&DAT_14686e2d8);
      }
    }
    local_b8 = (code *)DAT_14686e2d0;
    FUN_142dbb5d0(param_1 + 0x20d,&local_b8);
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar5 = FUN_140e4ba40(uVar6);
    if (lVar5 != 0) {
      FUN_140e5a0a0(lVar5);
    }
    if (param_1[0x228] != 0) {
      FUN_142227350(param_1[0x228],0,1);
      param_1[0x228] = 0;
    }
  }
  return;
}



// FUNCTION 140cf9810 FUN_140cf9810 body=531 status=ok
// SIG undefined FUN_140cf9810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cf9810(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  
  FUN_142dcaae0();
  lVar3 = FUN_1422312c0(param_1);
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
    if (bVar1) goto LAB_140cf9870;
  }
  lVar3 = 0;
LAB_140cf9870:
  cVar2 = (**(code **)(*param_1 + 0x768))(param_1);
  if (((cVar2 != '\0') && (lVar3 != 0)) && (*(longlong *)(lVar3 + 0x5b8) != 0)) {
    FUN_1407665e0(*(longlong *)(lVar3 + 0x5b8) + 0x28,param_1);
  }
  iVar8 = 0;
  lVar3 = param_1[0x346];
  iVar6 = DAT_1464b57d8;
  if (0 < DAT_1464b57d8) {
    lVar4 = 0;
    do {
      plVar9 = (longlong *)(DAT_1464b57d0 + lVar4);
      if ((((int)plVar9[1] != 0) && (plVar5 = (longlong *)*plVar9, plVar5 != (longlong *)0x0)) &&
         (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8),
         iVar6 = DAT_1464b57d8, *plVar5 == lVar3)) {
        if (((int)plVar9[1] != 0) && (plVar5 = (longlong *)*plVar9, plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          if (*plVar9 != 0) {
            lVar3 = FMemory::Realloc(*plVar9,0,0);
            *plVar9 = lVar3;
          }
          *(undefined4 *)(plVar9 + 1) = 0;
          iVar6 = DAT_1464b57d8;
        }
        break;
      }
      iVar8 = iVar8 + 1;
      lVar4 = lVar4 + 0x10;
    } while (iVar8 < iVar6);
  }
  if (DAT_1464b57e4 < 1) {
    iVar7 = 0;
    iVar8 = iVar6;
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        if (((*(int *)(lVar3 + 8 + DAT_1464b57d0) == 0) ||
            (*(longlong **)(lVar3 + DAT_1464b57d0) == (longlong *)0x0)) ||
           (cVar2 = (**(code **)(**(longlong **)(lVar3 + DAT_1464b57d0) + 0x10))(), cVar2 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464b57d0,iVar7,1,1);
        }
        else {
          iVar7 = iVar7 + 1;
          lVar3 = lVar3 + 0x10;
        }
        iVar8 = DAT_1464b57d8;
      } while (iVar7 < DAT_1464b57d8);
    }
    _DAT_1464b57e0 = iVar8 * 2;
    if (_DAT_1464b57e0 < 3) {
      _DAT_1464b57e0 = 2;
    }
    if ((_DAT_1464b57e0 < iVar6) && (DAT_1464b57dc != iVar8)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464b57d0);
    }
  }
  plVar9 = param_1 + 0x347;
  param_1[0x346] = 0;
  if ((*plVar9 != 0) && (plVar5 = (longlong *)FUN_140cfc850(), plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x28))(plVar5,plVar9);
    *plVar9 = 0;
  }
  return;
}



// FUNCTION 140cf9a30 FUN_140cf9a30 body=498 status=ok
// SIG undefined FUN_140cf9a30(void)

void FUN_140cf9a30(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  lVar4 = param_1[0x8c];
  if (lVar4 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(char *)(lVar4 + 0x599) != '\0')) {
      *(undefined1 *)(lVar4 + 0x599) = 0;
      plVar1 = (longlong *)param_1[0x91];
      if (plVar1 != (longlong *)0x0) {
        lVar4 = FUN_1413ffe00();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_140c5e130(plVar1,0,DAT_14686e050);
          (**(code **)(*plVar1 + 0x310))(plVar1,0);
          FUN_14223c460(plVar1,1);
          (**(code **)(plVar1[0x1b1] + 0x80))(plVar1 + 0x1b1,DAT_14686e050,1);
          FUN_140e36c20(plVar1,0);
        }
      }
      local_c = local_c & 0xfffffffe;
      local_18 = 0;
      local_10 = 0x40000000;
      local_14 = 1;
      (**(code **)(*param_1 + 0xe18))(param_1,param_1[0x91],&local_18);
      if (param_1[0x286] != 0) {
        FUN_140483870(param_1[0x286] + 0x2c80,param_1);
        FUN_142fcc0b0(param_1[0x286],param_1[0x1a7],0xbf800000,0);
      }
      if (((char)param_1[0x25] == '\x03') && (param_1[0x151] != 0)) {
        FUN_142ee4370(param_1);
        FUN_142f0e9c0(param_1[0x151],0);
      }
      lVar4 = param_1[0x1a9];
      if (lVar4 != 0) {
        lVar3 = FUN_142956f50();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        lVar3 = 0;
        if (bVar2) {
          lVar3 = lVar4;
        }
        FUN_142712050(param_1,lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140cf9c30 SetCameraCachePOV body=12 status=ok
// SIG undefined SetCameraCachePOV(void)

void APlayerCameraManager::SetCameraCachePOV(longlong param_1)

{
  FUN_140ab5310(param_1 + 0x1a40);
  return;
}



// FUNCTION 140cf9c40 FUN_140cf9c40 body=12 status=ok
// SIG undefined FUN_140cf9c40(void)

void FUN_140cf9c40(longlong param_1)

{
  FTTLInlineKeyboardActorOnClosed::Broadcast(param_1 + 0xb58);
  return;
}



// FUNCTION 140cf9c50 FUN_140cf9c50 body=315 status=ok
// SIG undefined FUN_140cf9c50(void)

void FUN_140cf9c50(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((2 < *(byte *)(param_1 + 0x25)) && (lVar4 = param_1[0x8c], lVar4 != 0)) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(lVar4 + 0x599) != '\0')) {
      cVar2 = FUN_14044aea0(param_1 + 0x1a8,0);
      if (cVar2 == '\0') {
        lVar4 = FWeakObjectPtr::Get(param_1 + 0x1a8);
        if (*(longlong *)(lVar4 + 0x990) == 0) {
          return;
        }
        lVar4 = FWeakObjectPtr::Get(param_1 + 0x1a8);
        cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x990) + 0x950))();
        if (cVar2 == '\0') {
          return;
        }
        uVar5 = FWeakObjectPtr::Get(param_1 + 0x1a8);
        cVar2 = FUN_140cee9e0(param_1,uVar5);
        if (cVar2 == '\0') {
          return;
        }
      }
      lVar4 = param_1[0x8c];
      if (lVar4 != 0) {
        lVar3 = UInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (*(char *)(lVar4 + 0x599) != '\0')) {
          (**(code **)(*param_1 + 0x1780))(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140cf9d90 FUN_140cf9d90 body=135 status=ok
// SIG undefined FUN_140cf9d90(void)

void FUN_140cf9d90(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x848);
  if (lVar1 != 0) {
    lVar3 = FUN_1413ffe00();
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
      if (*(longlong *)(param_1 + 0x1858) != 0) {
        plVar4 = (longlong *)FUN_140ad6100(*(longlong *)(param_1 + 0x1858),param_1);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x730))(plVar4);
        }
      }
      FUN_140e1de20(lVar1);
    }
  }
  return;
}



// FUNCTION 140cf9e20 FUN_140cf9e20 body=45 status=ok
// SIG undefined FUN_140cf9e20(void)

void FUN_140cf9e20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    FUN_140d03970(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 140cf9e50 FUN_140cf9e50 body=271 status=ok
// SIG undefined FUN_140cf9e50(void)

void FUN_140cf9e50(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_28;
  longlong *local_20;
  
  plVar4 = (longlong *)param_2[1];
  uVar5 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x478);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x478) = 0;
  if (lVar6 != 0) {
    FUN_140ce2ac0(lVar6);
    FMemory::operator_delete(lVar6,0x100);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_28 = uVar5;
  local_20 = plVar4;
  FUN_140ced540(*(longlong *)(param_1 + 8) + 0x13b8,&local_28,param_4);
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
  plVar4 = (longlong *)param_2[1];
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
  return;
}



// FUNCTION 140cf9f70 FUN_140cf9f70 body=82 status=ok
// SIG undefined FUN_140cf9f70(void)

void FUN_140cf9f70(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 8);
  if ((cVar3 != '\0') && (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x10), cVar3 != '\0')) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_140ce7b90(uVar2,uVar1);
  }
  return;
}



// FUNCTION 140cf9fe0 FUN_140cf9fe0 body=151 status=ok
// SIG undefined FUN_140cf9fe0(void)

void FUN_140cf9fe0(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 0x10);
  local_res14 = *(undefined4 *)(param_1 + 0x14);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      FUN_140d151c0(*(undefined8 *)(param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 140cfa080 Execute body=49 status=ok
// SIG undefined Execute(void)

void FPrefabBuildSystemCommand_NotifyBuildComplete::Execute(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_140cecb00(uVar1);
    return;
  }
  return;
}



// FUNCTION 140cfa0c0 FUN_140cfa0c0 body=196 status=ok
// SIG undefined FUN_140cfa0c0(void)

void FUN_140cfa0c0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 0x10);
  local_res14 = *(undefined4 *)(param_1 + 0x14);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      FUN_140cf09b0(*(undefined8 *)(param_1 + 8));
    }
  }
  lVar5 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
  if (lVar5 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    lVar5 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    TBaseMulticastDelegate<void>::Remove(lVar5 + 0x578,*puVar2);
  }
  return;
}



// FUNCTION 140cfa190 FUN_140cfa190 body=83 status=ok
// SIG undefined FUN_140cfa190(void)

void FUN_140cfa190(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140cfa1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 140cfa1f0 FUN_140cfa1f0 body=59 status=ok
// SIG undefined FUN_140cfa1f0(void)

void FUN_140cfa1f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140cfa228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,*(undefined4 *)(param_1 + 0x20));
  return;
}



// FUNCTION 140cfa230 Execute body=58 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UActorComponent,TTypeWrapper<void>___cdecl(void),bool>::
     Execute(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140cfa267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,*(undefined1 *)(param_1 + 0x20));
  return;
}



// FUNCTION 140cfa270 FUN_140cfa270 body=42 status=ok
// SIG undefined FUN_140cfa270(void)

undefined1 FUN_140cfa270(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    FUN_140d03970(lVar1,param_2);
  }
  return 1;
}



// FUNCTION 140cfa2a0 FUN_140cfa2a0 body=343 status=ok
// SIG undefined FUN_140cfa2a0(void)

undefined8 FUN_140cfa2a0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_28;
  longlong *local_20;
  
  plVar3 = (longlong *)param_2[1];
  uVar4 = *param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
  }
  plVar6 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x478);
  lVar5 = *plVar6;
  *plVar6 = 0;
  if (lVar5 != 0) {
    FUN_140ce2ac0(lVar5);
    FMemory::operator_delete(lVar5,0x100);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_28 = uVar4;
  local_20 = plVar3;
  FUN_140ced540(*(longlong *)(param_1 + 8) + 0x13b8,&local_28,param_4);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar3 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return 1;
}



// FUNCTION 140cfa400 FUN_140cfa400 body=20 status=ok
// SIG undefined FUN_140cfa400(void)

undefined1 FUN_140cfa400(longlong param_1)

{
  FUN_140ce3840(param_1 + 8);
  return 1;
}



// FUNCTION 140cfa420 FUN_140cfa420 body=92 status=ok
// SIG undefined FUN_140cfa420(void)

undefined1 FUN_140cfa420(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar3 != '\0') {
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x10);
    if (cVar3 != '\0') {
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
      uVar2 = FWeakObjectPtr::Get(param_1 + 8);
      FUN_140ce7b90(uVar2,uVar1);
    }
    return 1;
  }
  return 1;
}



// FUNCTION 140cfa480 FUN_140cfa480 body=20 status=ok
// SIG undefined FUN_140cfa480(void)

undefined1 FUN_140cfa480(longlong param_1)

{
  FUN_140ce3e40(param_1 + 8);
  return 1;
}



// FUNCTION 140cfa4a0 FUN_140cfa4a0 body=148 status=ok
// SIG undefined FUN_140cfa4a0(void)

undefined8 FUN_140cfa4a0(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 0x10);
  local_res14 = *(undefined4 *)(param_1 + 0x14);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      FUN_140d151c0(*(undefined8 *)(param_1 + 8));
    }
  }
  return 1;
}



// FUNCTION 140cfa540 FUN_140cfa540 body=46 status=ok
// SIG undefined FUN_140cfa540(void)

undefined1 FUN_140cfa540(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_140cecb00(uVar1);
  }
  return 1;
}



// FUNCTION 140cfa570 FUN_140cfa570 body=198 status=ok
// SIG undefined FUN_140cfa570(void)

undefined8 FUN_140cfa570(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 0x10);
  local_res14 = *(undefined4 *)(param_1 + 0x14);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      FUN_140cf09b0(*(undefined8 *)(param_1 + 8));
    }
  }
  lVar5 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
  if (lVar5 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    lVar5 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    TBaseMulticastDelegate<void>::Remove(lVar5 + 0x578,*puVar2);
  }
  return 1;
}



// FUNCTION 140cfa640 FUN_140cfa640 body=149 status=ok
// SIG undefined FUN_140cfa640(void)

bool FUN_140cfa640(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4,param_5,param_6)
    ;
  }
  return lVar1 != 0;
}



// FUNCTION 140cfa6e0 FUN_140cfa6e0 body=109 status=ok
// SIG undefined FUN_140cfa6e0(void)

bool FUN_140cfa6e0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3);
  }
  return lVar1 != 0;
}



// FUNCTION 140cfa750 ExecuteIfSafe body=111 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseUObjectMethodDelegateInstance<0,AArchVisCharacter,void___cdecl(float)>::ExecuteIfSafe
          (longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2);
    return 1;
  }
  return 0;
}



// FUNCTION 140cfa7c0 FUN_140cfa7c0 body=95 status=ok
// SIG undefined FUN_140cfa7c0(void)

undefined8 FUN_140cfa7c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,*(undefined4 *)(param_1 + 0x20));
    return 1;
  }
  return 0;
}



// FUNCTION 140cfa820 ExecuteIfSafe body=94 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseUObjectMethodDelegateInstance<0,UActorComponent,void___cdecl(void),bool>::ExecuteIfSafe
          (longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,*(undefined1 *)(param_1 + 0x20));
    return 1;
  }
  return 0;
}



// FUNCTION 140cfa880 FUN_140cfa880 body=314 status=ok
// SIG undefined FUN_140cfa880(void)

void FUN_140cfa880(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 2);
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x1100) != 0) {
      thunk_FUN_140e1d340();
    }
    if (*(longlong *)(lVar3 + 0x1108) != 0) {
      FUN_142cceb10(*(longlong *)(lVar3 + 0x1108) + 0x1950);
    }
    if (*(longlong *)(lVar3 + 0x1110) != 0) {
      FUN_142df18e0();
    }
  }
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_141591a60(param_1[4],param_2,param_3);
  *param_1 = &PTR_FUN_1444f7ea0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 140cfa9c0 FUN_140cfa9c0 body=135 status=ok
// SIG undefined FUN_140cfa9c0(void)

void FUN_140cfa9c0(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x528);
  if (lVar3 != 0) {
    if (0.0 < param_2) {
      *(undefined1 *)(param_1 + 0x14c8) = 1;
      *(float *)(lVar3 + 0x470) = param_2;
      return;
    }
    *(undefined1 *)(param_1 + 0x14c8) = 0;
    plVar1 = *(longlong **)(lVar3 + 0x10);
    lVar2 = plVar1[0x1f];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar2 = plVar1[0x1f];
      lVar3 = *(longlong *)(param_1 + 0x528);
    }
    *(undefined4 *)(lVar3 + 0x470) = *(undefined4 *)(lVar2 + 0x470);
    FUN_140d12d80(param_1);
  }
  return;
}



// FUNCTION 140cfaa50 FUN_140cfaa50 body=953 status=ok
// SIG undefined FUN_140cfaa50(void)

void FUN_140cfaa50(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined4 local_res10 [2];
  code *local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *local_70;
  code *local_68;
  longlong *plStack_60;
  code *local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong *local_38;
  
  lVar11 = 0;
  local_res10[0] = 0;
  lVar9 = FUN_1422312c0();
  if (lVar9 != 0) {
    FUN_14141f270();
  }
  lVar9 = FUN_142b45e90();
  uVar3 = *(undefined8 *)(lVar9 + 0x18);
  FUN_142dcf3a0(param_1,&local_98);
  if (local_98 == (code *)0x0) {
    plVar10 = &local_88;
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = false;
    bVar5 = true;
    lVar9 = lVar11;
  }
  else {
    bVar7 = true;
    bVar6 = true;
    bVar5 = false;
    local_68 = local_98;
    plStack_60 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
      UNLOCK();
    }
    plVar10 = (longlong *)FUN_142b4a990(uVar3,local_48,&local_68);
    lVar9 = *plVar10;
  }
  plVar4 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_80;
  if (bVar5) {
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_80 + 1;
      lVar8 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
    }
  }
  if ((bVar6) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_40 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  plVar10 = plStack_60;
  if ((bVar7) && (plStack_60 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plStack_60 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_60)(plStack_60);
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
  if (((lVar9 != 0) && (*(char *)(lVar9 + 0x18) != '\0')) && (local_98 != (code *)0x0)) {
    FUN_140d3ccb0(uVar3,&local_78);
    lVar9 = local_78;
    if ((local_78 != 0) && (*(longlong *)(param_1 + 0xe78) == 0)) {
      plStack_50 = (longlong *)((ulonglong)plStack_50 & 0xffffffff00000000);
      local_58 = FUN_140d04c00;
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      local_38 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)&PTR_FUN_14428ae88;
        FWeakObjectPtr::operator=(plVar10 + 1,param_1);
        plVar10[2] = (longlong)local_58;
        plVar10[3] = (longlong)plStack_50;
        lVar11 = FDelegateHandle::GenerateNewID();
        plVar10[5] = lVar11;
        *plVar10 = (longlong)&PTR_FUN_14428aed0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar9 + 0x28,1);
        plVar12 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10,local_res10);
        iVar2 = *(int *)(lVar9 + 0x30);
        lVar11 = *plVar12;
        *(int *)(lVar9 + 0x30) = iVar2 + 1;
        if (*(int *)(lVar9 + 0x34) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x28,iVar2);
        }
        puVar13 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar9 + 0x28));
        *puVar13 = plVar10;
        *(undefined4 *)(puVar13 + 1) = 3;
      }
      local_58 = local_98;
      plStack_50 = plStack_90;
      *(longlong *)(param_1 + 0xe78) = lVar11;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
        UNLOCK();
      }
      FUN_142b44880(local_78,&local_58);
      plVar10 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar12 = plStack_50 + 1;
        lVar11 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_50)(plStack_50);
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
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_70 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar4 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_90 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plStack_90 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  return;
}



// FUNCTION 140cfae10 FUN_140cfae10 body=117 status=ok
// SIG undefined FUN_140cfae10(void)

void FUN_140cfae10(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  if ((((*(byte *)(param_1 + 0x1844) & 2) != 0) &&
      (lVar1 = *(longlong *)(param_1 + 0x1848), lVar1 != 0)) &&
     ((*(byte *)(lVar1 + 0x24c) & 0x40) == 0)) {
    if (*(char *)(param_2 + 10) == '\0') {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      *(undefined4 *)(param_2 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)param_2 + 0x34) = 0;
      param_2[8] = 0;
      *(undefined4 *)(param_2 + 9) = 0;
      *(undefined1 *)(param_2 + 10) = 1;
      lVar1 = *(longlong *)(param_1 + 0x1848);
    }
    FUN_140859ed0(param_2,local_res8,lVar1 + 0x354,0);
  }
  return;
}



// FUNCTION 140cfae90 FUN_140cfae90 body=161 status=ok
// SIG undefined FUN_140cfae90(void)

longlong FUN_140cfae90(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  
  puVar2 = (undefined8 *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  puVar6 = puVar2;
  while( true ) {
    if (puVar6 == puVar2 + (longlong)iVar1 * 3) {
      return 0xffffffff;
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    if (*(int *)(puVar6 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar6;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
    if (iVar3 == 0) break;
    puVar6 = puVar6 + 3;
  }
  return ((longlong)puVar6 - (longlong)puVar2) / 0x18;
}



// FUNCTION 140cfaf40 FUN_140cfaf40 body=163 status=ok
// SIG undefined FUN_140cfaf40(void)

longlong FUN_140cfaf40(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar6 = lVar1;
  while( true ) {
    if (lVar6 == lVar1 + (longlong)(int)lVar2 * 0x18) {
      return 0xffffffff;
    }
    if (*(int *)(param_2 + 0x10) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = *(undefined2 **)(param_2 + 8);
    }
    if (*(int *)(lVar6 + 0x10) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = *(undefined2 **)(lVar6 + 8);
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
    if (iVar3 == 0) break;
    lVar6 = lVar6 + 0x18;
  }
  return (lVar6 - lVar1) / 0x18;
}



// FUNCTION 140cfaff0 FUN_140cfaff0 body=114 status=ok
// SIG undefined FUN_140cfaff0(void)

undefined8 FUN_140cfaff0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar1 = FUN_1428e7a40();
    lVar2 = param_2;
    do {
      lVar4 = param_2;
      if (lVar2 == lVar1) goto LAB_140cfb022;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  lVar4 = 0;
LAB_140cfb022:
  lVar2 = FUN_1414b0d60();
  if (lVar4 != lVar2) {
    uVar3 = AActor::FindComponentByClass(param_1,param_2);
    return uVar3;
  }
  return *(undefined8 *)(param_1 + 0xc78);
}



// FUNCTION 140cfb070 FindId body=103 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FName,TArray<FAssetData_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)((longlong)iVar1 * 0x20 + *param_1) == param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *param_1);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140cfb0e0 FUN_140cfb0e0 body=451 status=ok
// SIG undefined FUN_140cfb0e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cfb0e0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  cVar1 = BuildSettings::IsPromotedBuild();
  if (cVar1 == '\0') {
    local_98 = FUN_140cfb0e0;
    uStack_90 = 0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_8c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    uVar4 = AActor::GetWorldTimerManager(param_1);
    local_88 = 0;
    local_80 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_a0 = 0xbf800000;
    local_a8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,param_1 + 0x1ae0,&local_88,0x3dcccccd);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar3 = FMemory::Realloc(plVar2,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140cfb2b0 FUN_140cfb2b0 body=451 status=ok
// SIG undefined FUN_140cfb2b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cfb2b0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  cVar1 = FUN_140caf750();
  if (cVar1 == '\0') {
    local_98 = FUN_140cfb2b0;
    uStack_90 = 0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_8c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    uVar4 = AActor::GetWorldTimerManager(param_1);
    local_88 = 0;
    local_80 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_a0 = 0xbf800000;
    local_a8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,param_1 + 0x1ad8,&local_88,0x3dcccccd);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar3 = FMemory::Realloc(plVar2,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140cfb480 FUN_140cfb480 body=451 status=ok
// SIG undefined FUN_140cfb480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140cfb480(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  cVar1 = FUN_140cafb30();
  if (cVar1 == '\0') {
    local_98 = FUN_140cfb480;
    uStack_90 = 0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_8c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    uVar4 = AActor::GetWorldTimerManager(param_1);
    local_88 = 0;
    local_80 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_a0 = 0xbf800000;
    local_a8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,param_1 + 0x1ad0,&local_88,0x3dcccccd);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar3 = FMemory::Realloc(plVar2,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140cfb650 FUN_140cfb650 body=110 status=ok
// SIG undefined FUN_140cfb650(void)

void FUN_140cfb650(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 local_res8;
  
  bVar2 = DAT_14686e27c == '\0';
  *(undefined4 *)(param_1 + 0x1998) = 0;
  if (bVar2) {
    DAT_14686e27c = 1;
    if (*(char *)(param_1 + 0x128) == '\x03') {
      FUN_140d00ec0(param_1,0);
      *(undefined4 *)(param_1 + 0x1998) = 0;
    }
    local_res8 = 0;
    plVar1 = (longlong *)FUN_1404b0000(&local_res8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x140))(plVar1);
    }
    DAT_14686e27c = '\0';
  }
  return;
}



// FUNCTION 140cfb6c0 FUN_140cfb6c0 body=255 status=ok
// SIG undefined FUN_140cfb6c0(void)

void FUN_140cfb6c0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x488) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 0x130), lVar2 != 0)) {
    lVar4 = UUGGameViewportClient::StaticClass();
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
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x130);
  if (lVar2 != 0) {
    lVar4 = UUGGameViewportClient::StaticClass();
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
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
    }
  }
  return;
}



// FUNCTION 140cfb7c0 FUN_140cfb7c0 body=979 status=ok
// SIG undefined FUN_140cfb7c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140cfb7c0(longlong *param_1,undefined8 *param_2,float *param_3,byte param_4)

{
  float fVar1;
  char cVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  undefined1 *local_1f0;
  undefined *local_1e8;
  undefined1 local_1d8 [8];
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined1 local_190 [24];
  byte local_178 [12];
  undefined4 local_16c;
  float local_164;
  float local_160;
  float local_15c;
  undefined1 local_e8 [72];
  longlong local_a0;
  longlong local_80;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  uVar4 = CONCAT44(DAT_1468b5da0._4_4_,(float)DAT_1468b5da0);
  *param_2 = uVar4;
  *(float *)(param_2 + 1) = DAT_1468b5da8;
  fVar8 = DAT_1468b5da8;
  fVar7 = DAT_1468b5da0._4_4_;
  fVar9 = (float)DAT_1468b5da0;
  cVar2 = FUN_140d14ea0(uVar4,param_4);
  if ((cVar2 != '\0') && (FUN_140d19960(param_1), (int)(uint)param_4 < (int)param_1[0x26c])) {
    plVar6 = (longlong *)param_1[0x26b];
    if ((longlong *)param_1[0x26b] == (longlong *)0x0) {
      plVar6 = param_1 + 0x263;
    }
    local_1b0 = *(undefined8 *)((longlong)plVar6 + (ulonglong)param_4 * 0x14 + 8);
    fVar8 = *(float *)((longlong)plVar6 + (ulonglong)param_4 * 0x14 + 0x10);
    fVar7 = (float)((ulonglong)local_1b0 >> 0x20);
    fVar9 = (float)local_1b0;
    local_1a8 = fVar8;
  }
  if (param_1[0x91] == 0) {
    pfVar3 = (float *)(**(code **)(*param_1 + 0x720))(param_1,local_190);
    fVar1 = pfVar3[2];
    *param_2 = CONCAT44(fVar7 + pfVar3[1],fVar9 + *pfVar3);
    *(float *)(param_2 + 1) = fVar8 + fVar1;
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x820))();
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x830))(param_1,&local_1b0,&local_1a0);
      local_1a0 = local_1a0 + fVar9;
      local_19c = local_19c + fVar7;
      local_198 = local_198 + fVar8;
      pfVar3 = (float *)FRotator::Vector(&local_1a0,&local_1c0);
      local_1cc = local_1b0._4_4_ + pfVar3[1] * 16384.0;
      local_1c8 = local_1a8 + pfVar3[2] * 16384.0;
      local_1d0 = *pfVar3 * 16384.0 + (float)local_1b0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_14686e248) &&
         (_Init_thread_header(&DAT_14686e248), DAT_14686e248 == -1)) {
        FName::FName(&DAT_14686e240,L"ThirdPersonAiming",1);
        _Init_thread_footer(&DAT_14686e248);
      }
      local_1f8 = param_1[0x91];
      FUN_1422ffb20(local_e8,DAT_14686e240,local_1d8,1);
      _guard_xfg_dispatch_icall_nop(local_178,0,0x90);
      local_16c = 0x3f800000;
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      local_1e8 = &DAT_146aefe68;
      local_1f0 = local_e8;
      local_1f8 = CONCAT44(local_1f8._4_4_,4);
      UWorld::LineTraceSingleByChannel(uVar4,local_178,&local_1b0,&local_1d0);
      if ((local_178[0] & 1) != 0) {
        local_1d0 = local_164;
        local_1cc = local_160;
        local_1c8 = local_15c;
      }
      local_1c0 = local_1d0 - *param_3;
      local_1bc = local_1cc - param_3[1];
      local_1b8 = local_1c8 - param_3[2];
      puVar5 = (undefined8 *)FVector::Rotation(&local_1c0,local_190);
      *param_2 = *puVar5;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar5 + 1);
      if (local_80 != 0) {
        FMemory::Free();
      }
      if (local_a0 != 0) {
        FMemory::Free();
      }
    }
    else {
      pfVar3 = (float *)(**(code **)(*(longlong *)param_1[0x91] + 0x798))
                                  ((longlong *)param_1[0x91],&local_1c0);
      fVar1 = pfVar3[2];
      *param_2 = CONCAT44(fVar7 + pfVar3[1],fVar9 + *pfVar3);
      *(float *)(param_2 + 1) = fVar8 + fVar1;
    }
  }
  return param_2;
}



// FUNCTION 140cfbba0 FUN_140cfbba0 body=386 status=ok
// SIG undefined FUN_140cfbba0(void)

void FUN_140cfbba0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x848);
  if (lVar6 != 0) {
    plVar2 = (longlong *)*param_2;
    iVar1 = (int)param_2[1];
    for (plVar4 = plVar2; plVar4 != plVar2 + iVar1; plVar4 = plVar4 + 1) {
      if (*plVar4 == lVar6) {
        if ((int)((longlong)plVar4 - (longlong)plVar2 >> 3) != -1) goto LAB_140cfbc12;
        break;
      }
    }
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar6;
LAB_140cfbc12:
    lVar5 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar5 = *(longlong *)(lVar6 + 0x1d18);
      if (lVar5 != 0) {
        plVar2 = (longlong *)*param_2;
        iVar1 = (int)param_2[1];
        for (plVar4 = plVar2; plVar4 != plVar2 + iVar1; plVar4 = plVar4 + 1) {
          if (*plVar4 == lVar5) {
            if ((int)((longlong)plVar4 - (longlong)plVar2 >> 3) != -1) goto LAB_140cfbcb2;
            break;
          }
        }
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
      }
LAB_140cfbcb2:
      lVar6 = FUN_1414002f0(lVar6);
      if (lVar6 != 0) {
        plVar2 = (longlong *)*param_2;
        iVar1 = (int)param_2[1];
        for (plVar4 = plVar2; plVar4 != plVar2 + iVar1; plVar4 = plVar4 + 1) {
          if (*plVar4 == lVar6) {
            if ((int)((longlong)plVar4 - (longlong)plVar2 >> 3) != -1) {
              return;
            }
            break;
          }
        }
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar6;
      }
    }
  }
  return;
}



// FUNCTION 140cfbd30 FUN_140cfbd30 body=191 status=ok
// SIG undefined FUN_140cfbd30(void)

longlong FUN_140cfbd30(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = SThrobber::GetPieceBrush();
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x488);
    if (lVar2 != 0) {
      lVar3 = FUN_14148cad0();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_140cfbdd0;
    }
    lVar2 = *(longlong *)(param_1 + 0x488);
    if (lVar2 != 0) {
      lVar3 = FUN_1414bbb50();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
LAB_140cfbdd0:
        return *(longlong *)(param_1 + 0x848);
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 140cfbe10 FUN_140cfbe10 body=396 status=ok
// SIG undefined FUN_140cfbe10(void)

void FUN_140cfbe10(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  local_28 = 0;
  local_20 = 0;
  local_18 = -1;
  uVar5 = AInteractiveFoliageActor::GetPrivateStaticClass();
  FUN_1417a5560(uVar5,&local_28,1,0x10,0);
  uVar8 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    lVar9 = local_28;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)uVar8 <= local_18)) {
        if (lVar9 != 0) {
          FMemory::Free(lVar9);
        }
        return;
      }
      lVar3 = *(longlong *)(lVar9 + (longlong)local_18 * 8);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x398) != '\0')) {
        plVar6 = *(longlong **)(param_1 + 0x1900);
        plVar7 = plVar6 + (longlong)*(int *)(param_1 + 0x1908) * 2;
        for (; plVar6 != plVar7; plVar6 = plVar6 + 2) {
          if (*plVar6 == lVar3) {
            cVar4 = ((char)plVar6[1] != '\0') + '\x01';
            goto LAB_140cfbef9;
          }
        }
        cVar4 = '\0';
LAB_140cfbef9:
        iVar2 = (int)param_2[1];
        uStack_30 = CONCAT31(uStack_30._1_3_,cVar4);
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
        }
        local_38 = (undefined4)lVar3;
        uStack_34 = (undefined4)((ulonglong)lVar3 >> 0x20);
        puVar1 = (undefined4 *)(*param_2 + (longlong)iVar2 * 0x10);
        *puVar1 = local_38;
        puVar1[1] = uStack_34;
        puVar1[2] = uStack_30;
        puVar1[3] = uStack_2c;
        uVar8 = local_20 & 0xffffffff;
        lVar9 = local_28;
      }
      local_18 = local_18 + 1;
    } while ((int)uVar8 <= local_18);
    do {
      if (*(longlong *)(lVar9 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)uVar8);
  } while( true );
}



// FUNCTION 140cfbfb0 FUN_140cfbfb0 body=248 status=ok
// SIG undefined FUN_140cfbfb0(void)

undefined8 FUN_140cfbfb0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  FUN_142dcf3a0(param_1,&local_28);
  if (local_28 != 0) {
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar6 = FUN_140d3a420(uVar5);
    if (lVar6 != 0) {
      local_18 = local_28;
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      uVar5 = FUN_140d3a960(lVar6,&local_18);
      plVar3 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_10 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_10)(plStack_10);
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
      goto LAB_140cfc060;
    }
  }
  uVar5 = 0;
LAB_140cfc060:
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_20 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plStack_20 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  return uVar5;
}


