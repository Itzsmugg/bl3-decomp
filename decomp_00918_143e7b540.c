// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143e7b540 FUN_143e7b540 body=80 status=ok
// SIG undefined FUN_143e7b540(void)

void FUN_143e7b540(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e59d8;
  if (DAT_1469e59d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e59d8 + 1;
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



// FUNCTION 143e7b590 FUN_143e7b590 body=163 status=ok
// SIG undefined FUN_143e7b590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7b590(void)

{
  DAT_1469e5a30 = &PTR_FUN_144ce3ea8;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1469e5b18);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1469e5b00);
  _DAT_1469e5af8 = 0;
  if (DAT_1469e5af0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1469e5ab0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&DAT_1469e5a98);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&DAT_1469e5a88);
  _DAT_1469e5a80 = 0;
  if (DAT_1469e5a78 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1469e5a38);
  DAT_1469e5a30 = &PTR_FUN_144ce3db0;
  return;
}



// FUNCTION 143e7b6e0 FUN_143e7b6e0 body=66 status=ok
// SIG undefined FUN_143e7b6e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7b6e0(void)

{
  _DAT_1469e5e18 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7b71b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e5e20,1);
  return;
}



// FUNCTION 143e7b730 FUN_143e7b730 body=66 status=ok
// SIG undefined FUN_143e7b730(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7b730(void)

{
  _DAT_1469e5e28 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7b76b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e5e30,1);
  return;
}



// FUNCTION 143e7b780 FUN_143e7b780 body=119 status=ok
// SIG undefined FUN_143e7b780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7b780(void)

{
  _DAT_1469e5e08 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e5e10,1);
  _DAT_1469e5df8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7b7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e5e00,1);
  return;
}



// FUNCTION 143e7b800 FUN_143e7b800 body=80 status=ok
// SIG undefined FUN_143e7b800(void)

void FUN_143e7b800(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e5e50;
  if (DAT_1469e5e50 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e5e50 + 1;
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



// FUNCTION 143e7b850 FUN_143e7b850 body=17 status=ok
// SIG undefined FUN_143e7b850(void)

void FUN_143e7b850(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e5e38;
  if (DAT_1469e5e38 == 0) {
    return;
  }
  if (DAT_1469e5e38 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 143e7b880 FUN_143e7b880 body=121 status=ok
// SIG undefined FUN_143e7b880(void)

void FUN_143e7b880(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong lVar7;
  
  lVar7 = 4;
  puVar6 = &DAT_1469e5ec8;
  do {
    plVar4 = *(longlong **)(puVar6 + -0x18);
    puVar6 = puVar6 + -0x18;
    lVar7 = lVar7 + -1;
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
  } while (lVar7 != 0);
  return;
}



// FUNCTION 143e7b900 FUN_143e7b900 body=47 status=ok
// SIG undefined FUN_143e7b900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7b900(void)

{
  _DAT_1469e6418 = 0;
  if (DAT_1469e6410 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1469e63d0);
  return;
}



// FUNCTION 143e7b930 FUN_143e7b930 body=47 status=ok
// SIG undefined FUN_143e7b930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7b930(void)

{
  _DAT_1469e6478 = 0;
  if (DAT_1469e6470 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1469e6430);
  return;
}



// FUNCTION 143e7b960 FUN_143e7b960 body=88 status=ok
// SIG undefined FUN_143e7b960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7b960(void)

{
  _DAT_1464b02e8 = 0;
  if (DAT_1464b02e0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&DAT_1464b02a0,0);
  if (DAT_1464b02c0 != 0) {
    FMemory::Free();
  }
  if (DAT_1464b02a0 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 143e7b9e0 FUN_143e7b9e0 body=47 status=ok
// SIG undefined FUN_143e7b9e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7b9e0(void)

{
  _DAT_1469e63b8 = 0;
  if (DAT_1469e63b0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1469e6370);
  return;
}



// FUNCTION 143e7ba30 FUN_143e7ba30 body=94 status=ok
// SIG undefined FUN_143e7ba30(void)

void FUN_143e7ba30(void)

{
  if (DAT_1469e6988 != 0) {
    if (DAT_1469e6980 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*DAT_1469e6980 + 0x28))(DAT_1469e6980,0);
    if (DAT_1469e6980 != (longlong *)0x0) {
      DAT_1469e6980 = (longlong *)FMemory::Realloc(DAT_1469e6980,0,0);
    }
    DAT_1469e6988 = 0;
  }
  if (DAT_1469e6980 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 143e7ba90 FUN_143e7ba90 body=94 status=ok
// SIG undefined FUN_143e7ba90(void)

void FUN_143e7ba90(void)

{
  if (DAT_1469e6998 != 0) {
    if (DAT_1469e6990 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*DAT_1469e6990 + 0x28))(DAT_1469e6990,0);
    if (DAT_1469e6990 != (longlong *)0x0) {
      DAT_1469e6990 = (longlong *)FMemory::Realloc(DAT_1469e6990,0,0);
    }
    DAT_1469e6998 = 0;
  }
  if (DAT_1469e6990 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 143e7baf0 FUN_143e7baf0 body=94 status=ok
// SIG undefined FUN_143e7baf0(void)

void FUN_143e7baf0(void)

{
  if (DAT_1469e6978 != 0) {
    if (DAT_1469e6970 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*DAT_1469e6970 + 0x28))(DAT_1469e6970,0);
    if (DAT_1469e6970 != (longlong *)0x0) {
      DAT_1469e6970 = (longlong *)FMemory::Realloc(DAT_1469e6970,0,0);
    }
    DAT_1469e6978 = 0;
  }
  if (DAT_1469e6970 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 143e7bb50 FUN_143e7bb50 body=47 status=ok
// SIG undefined FUN_143e7bb50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7bb50(void)

{
  _DAT_1464b4678 = 0;
  if (DAT_1464b4670 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b4630);
  return;
}



// FUNCTION 143e7bba0 FUN_143e7bba0 body=12 status=ok
// SIG undefined FUN_143e7bba0(void)

void FUN_143e7bba0(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b4480);
  return;
}



// FUNCTION 143e7bbb0 FUN_143e7bbb0 body=12 status=ok
// SIG undefined FUN_143e7bbb0(void)

void FUN_143e7bbb0(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b4468);
  return;
}



// FUNCTION 143e7bc00 FUN_143e7bc00 body=47 status=ok
// SIG undefined FUN_143e7bc00(void)

void FUN_143e7bc00(void)

{
  DAT_1464b45a8 = 0;
  if (DAT_1464b45a0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b4560);
  return;
}



// FUNCTION 143e7bc40 FUN_143e7bc40 body=150 status=ok
// SIG undefined FUN_143e7bc40(void)

void FUN_143e7bc40(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  if (DAT_1469e6938 != 0) {
    plVar7 = (longlong *)(DAT_1469e6930 + 0x10);
    iVar6 = DAT_1469e6938;
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
  }
  if (DAT_1469e6930 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 143e7bce0 FUN_143e7bce0 body=47 status=ok
// SIG undefined FUN_143e7bce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7bce0(void)

{
  _DAT_1464b4558 = 0;
  if (DAT_1464b4550 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b4510);
  return;
}



// FUNCTION 143e7bd10 FUN_143e7bd10 body=47 status=ok
// SIG undefined FUN_143e7bd10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7bd10(void)

{
  _DAT_1464b4508 = 0;
  if (DAT_1464b4500 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b44c0);
  return;
}



// FUNCTION 143e7bd40 FUN_143e7bd40 body=66 status=ok
// SIG undefined FUN_143e7bd40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7bd40(void)

{
  _DAT_1469e69a8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7bd7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e69b0,1);
  return;
}



// FUNCTION 143e7bd90 FUN_143e7bd90 body=66 status=ok
// SIG undefined FUN_143e7bd90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7bd90(void)

{
  _DAT_1469e69e8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7bdcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e69f0,1);
  return;
}



// FUNCTION 143e7bde0 FUN_143e7bde0 body=66 status=ok
// SIG undefined FUN_143e7bde0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7bde0(void)

{
  _DAT_1469e6a50 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7be1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e6a58,1);
  return;
}



// FUNCTION 143e7be30 FUN_143e7be30 body=66 status=ok
// SIG undefined FUN_143e7be30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7be30(void)

{
  _DAT_1469e6a40 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7be6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e6a48,1);
  return;
}



// FUNCTION 143e7be80 FUN_143e7be80 body=66 status=ok
// SIG undefined FUN_143e7be80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7be80(void)

{
  _DAT_1469e69d8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7bebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e69e0,1);
  return;
}



// FUNCTION 143e7bed0 FUN_143e7bed0 body=66 status=ok
// SIG undefined FUN_143e7bed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7bed0(void)

{
  _DAT_1469e69c8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7bf0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e69d0,1);
  return;
}



// FUNCTION 143e7bf20 FUN_143e7bf20 body=66 status=ok
// SIG undefined FUN_143e7bf20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7bf20(void)

{
  _DAT_1469e69b8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7bf5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e69c0,1);
  return;
}



// FUNCTION 143e7bf70 FUN_143e7bf70 body=66 status=ok
// SIG undefined FUN_143e7bf70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7bf70(void)

{
  _DAT_1469e6a28 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7bfab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e6a30,1);
  return;
}



// FUNCTION 143e7bfc0 FUN_143e7bfc0 body=66 status=ok
// SIG undefined FUN_143e7bfc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7bfc0(void)

{
  _DAT_1469e6a08 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7bffb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e6a10,1);
  return;
}



// FUNCTION 143e7c010 FUN_143e7c010 body=66 status=ok
// SIG undefined FUN_143e7c010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7c010(void)

{
  _DAT_1469e69f8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7c04b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e6a00,1);
  return;
}



// FUNCTION 143e7c060 FUN_143e7c060 body=66 status=ok
// SIG undefined FUN_143e7c060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7c060(void)

{
  _DAT_1469e6a18 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7c09b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e6a20,1);
  return;
}



// FUNCTION 143e7c0b0 FUN_143e7c0b0 body=47 status=ok
// SIG undefined FUN_143e7c0b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7c0b0(void)

{
  _DAT_1464b4828 = 0;
  if (DAT_1464b4820 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b47e0);
  return;
}



// FUNCTION 143e7c110 `dynamic_atexit_destructor_for_'GPrecacheCallbackHandler'' body=265 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'GPrecacheCallbackHandler''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_atexit_destructor_for__GPrecacheCallbackHandler__(void)

{
  BOOL BVar1;
  longlong *plVar2;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b46d0);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b46d0);
  }
  if (DAT_1464b4720 != 0) {
    FUN_1415b5910();
    DAT_1464b4720 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1464b46d0);
  _DAT_1464b47c0 = 0;
  if (DAT_1464b47b8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b4778);
  _DAT_1464b4770 = 0;
  if (DAT_1464b4768 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b4728);
  if (DAT_1464b4708 != 0) {
    FMemory::Free();
  }
  if (DAT_1464b46f8 != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_1464b46d0);
  if (DAT_1464b46c0 != 0) {
    plVar2 = DAT_1464b46b0;
    if (DAT_1464b46b0 == (longlong *)0x0) {
      plVar2 = (longlong *)&DAT_1464b4690;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (DAT_1464b46b0 != (longlong *)0x0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 143e7c240 FUN_143e7c240 body=157 status=ok
// SIG undefined FUN_143e7c240(void)

void FUN_143e7c240(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1464b4888;
  if (DAT_1464b4888 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1464b4888 + 1;
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
  if (DAT_1464b4870 != 0) {
    plVar5 = DAT_1464b4860;
    if (DAT_1464b4860 == (longlong *)0x0) {
      plVar5 = (longlong *)&DAT_1464b4840;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (DAT_1464b4860 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 143e7c2e0 FUN_143e7c2e0 body=47 status=ok
// SIG undefined FUN_143e7c2e0(void)

void FUN_143e7c2e0(void)

{
  DAT_1464b45f8 = 0;
  if (DAT_1464b45f0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b45b0);
  return;
}



// FUNCTION 143e7c320 `dynamic_atexit_destructor_for_'Singleton'' body=150 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'Singleton''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `GetGEDLBootNotificationManager'::`2'::_dynamic_atexit_destructor_for__Singleton__(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_1464b4990);
  if (DAT_1464b4980 != 0) {
    FMemory::Free();
  }
  if (DAT_1464b4970 != 0) {
    FMemory::Free();
  }
  if (DAT_1464b4960 != 0) {
    FMemory::Free();
  }
  _DAT_1464b4958 = 0;
  if (DAT_1464b4950 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b4910);
  _DAT_1464b4908 = 0;
  if (DAT_1464b4900 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b48c0);
  return;
}



// FUNCTION 143e7c3d0 FUN_143e7c3d0 body=47 status=ok
// SIG undefined FUN_143e7c3d0(void)

void FUN_143e7c3d0(void)

{
  DAT_1464b4a78 = 0;
  if (DAT_1464b4a70 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b4a30);
  return;
}



// FUNCTION 143e7c400 FUN_143e7c400 body=47 status=ok
// SIG undefined FUN_143e7c400(void)

void FUN_143e7c400(void)

{
  DAT_1464b4a28 = 0;
  if (DAT_1464b4a20 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b49e0);
  return;
}



// FUNCTION 143e7c440 RedirectTypeMap'' body=88 status=ok
// SIG undefined RedirectTypeMap''(void)

void `dynamic_atexit_destructor_for_'FCoreRedirects::RedirectTypeMap__(void)

{
  DAT_1464b4ac8 = 0;
  if (DAT_1464b4ac0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&DAT_1464b4a80,0);
  if (DAT_1464b4aa0 != 0) {
    FMemory::Free();
  }
  if (DAT_1464b4a80 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 143e7c4a0 FUN_143e7c4a0 body=66 status=ok
// SIG undefined FUN_143e7c4a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7c4a0(void)

{
  _DAT_1469e7028 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7c4db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e7030,1);
  return;
}



// FUNCTION 143e7c4f0 `dynamic_atexit_destructor_for_'DeferredCppStructOps'' body=383 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'DeferredCppStructOps''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `GetDeferredCppStructOps'::`2'::_dynamic_atexit_destructor_for__DeferredCppStructOps__(void)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint *puVar4;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined4 local_48;
  int iStack_44;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined *local_30;
  int iStack_28;
  uint uStack_24;
  undefined *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  local_58 = 0;
  uStack_54 = 1;
  iStack_44 = 0;
  uStack_40 = 0;
  if (DAT_1464b4c38 != 0) {
    puVar4 = DAT_1464b4c30;
    if (DAT_1464b4c30 == (uint *)0x0) {
      puVar4 = (uint *)&DAT_1464b4c20;
    }
    uVar1 = *puVar4;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar1 == 0) {
      uStack_40 = uStack_40 + 0x20;
      if ((int)(DAT_1464b4c38 + -1 + (DAT_1464b4c38 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58) {
        iStack_44 = DAT_1464b4c38;
        local_58 = local_58 + 1;
        goto LAB_143e7c5b7;
      }
      uVar1 = puVar4[(longlong)local_58 + 1];
      local_58 = local_58 + 1;
    }
    uStack_54 = -uVar1 & uVar1;
    iVar3 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    iStack_44 = (uStack_40 - iVar3) + 0x1f;
    if (DAT_1464b4c38 < iStack_44) {
      iStack_44 = DAT_1464b4c38;
    }
  }
LAB_143e7c5b7:
  iStack_3c = iStack_44;
  local_30 = &DAT_1464b4c10;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  puStack_20 = &DAT_1464b4c20;
  uStack_18 = 0xffffffff;
  iStack_14 = iStack_44;
  iStack_10 = uStack_40;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  local_48 = 0x464b4c20;
  iStack_44 = 1;
  uStack_40 = 0xffffffff;
  if (iStack_3c < DAT_1464b4c38) {
    do {
      puVar2 = *(undefined8 **)(_DAT_1464b4c10 + 8 + (longlong)iStack_3c * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < *(int *)(CONCAT44(iStack_44,local_48) + 0x18));
  }
  _DAT_1464b4c58 = 0;
  if (DAT_1464b4c50 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b4c10);
  return;
}



// FUNCTION 143e7c6b0 FUN_143e7c6b0 body=47 status=ok
// SIG undefined FUN_143e7c6b0(void)

void FUN_143e7c6b0(void)

{
  DAT_1464b4cf8 = 0;
  if (DAT_1464b4cf0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b4cb0);
  return;
}



// FUNCTION 143e7c6e0 Singleton'' body=69 status=ok
// SIG undefined Singleton''(void)

void `dynamic_atexit_destructor_for_'FGCCSyncObject::Singleton__(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7300;
  if (DAT_1469e7300 != 0) {
    FUN_1415b5910(*(undefined8 *)(DAT_1469e7300 + 0x38));
    *(undefined8 *)(lVar1 + 0x38) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x10));
    FMemory::operator_delete(lVar1,0x40);
    return;
  }
  return;
}



// FUNCTION 143e7c730 FUN_143e7c730 body=66 status=ok
// SIG undefined FUN_143e7c730(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7c730(void)

{
  _DAT_1469e7328 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7c76b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e7330,1);
  return;
}



// FUNCTION 143e7c780 FUN_143e7c780 body=66 status=ok
// SIG undefined FUN_143e7c780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7c780(void)

{
  _DAT_1469e7338 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7c7bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e7340,1);
  return;
}



// FUNCTION 143e7c7d0 FUN_143e7c7d0 body=66 status=ok
// SIG undefined FUN_143e7c7d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7c7d0(void)

{
  _DAT_1469e7318 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7c80b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e7320,1);
  return;
}



// FUNCTION 143e7c820 FUN_143e7c820 body=66 status=ok
// SIG undefined FUN_143e7c820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7c820(void)

{
  _DAT_1469e7358 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7c85b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e7360,1);
  return;
}



// FUNCTION 143e7c870 FUN_143e7c870 body=66 status=ok
// SIG undefined FUN_143e7c870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7c870(void)

{
  _DAT_1469e7308 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7c8ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e7310,1);
  return;
}



// FUNCTION 143e7c8c0 FUN_143e7c8c0 body=66 status=ok
// SIG undefined FUN_143e7c8c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7c8c0(void)

{
  _DAT_1469e7348 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7c8fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e7350,1);
  return;
}



// FUNCTION 143e7c930 FUN_143e7c930 body=66 status=ok
// SIG undefined FUN_143e7c930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7c930(void)

{
  _DAT_1469e76f8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7c96b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e7700,1);
  return;
}



// FUNCTION 143e7c980 FUN_143e7c980 body=17 status=ok
// SIG undefined FUN_143e7c980(void)

void FUN_143e7c980(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e72b0;
  if (DAT_1469e72b0 == 0) {
    return;
  }
  if (DAT_1469e72b0 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 143e7c9a0 FUN_143e7c9a0 body=17 status=ok
// SIG undefined FUN_143e7c9a0(void)

void FUN_143e7c9a0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e72c0;
  if (DAT_1469e72c0 == 0) {
    return;
  }
  if (DAT_1469e72c0 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 143e7c9e0 `dynamic_atexit_destructor_for_'PIEGuidMap'' body=85 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'PIEGuidMap''(void)

void _dynamic_atexit_destructor_for__PIEGuidMap__(void)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  lVar2 = 10;
  puVar1 = &DAT_1469e7690;
  do {
    lVar2 = lVar2 + -1;
    *(undefined4 *)(puVar1 + -8) = 0;
    if (*(longlong *)(puVar1 + -0x10) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<int,FResidentChunk>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<int,FResidentChunk>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (puVar1 + -0x50);
    puVar1 = puVar1 + -0x50;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 143e7ca40 FUN_143e7ca40 body=47 status=ok
// SIG undefined FUN_143e7ca40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7ca40(void)

{
  _DAT_1464b4f38 = 0;
  if (DAT_1464b4f30 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b4ef0);
  return;
}



// FUNCTION 143e7ca70 FUN_143e7ca70 body=12 status=ok
// SIG undefined FUN_143e7ca70(void)

void FUN_143e7ca70(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b4ec0);
  return;
}



// FUNCTION 143e7ca80 FUN_143e7ca80 body=12 status=ok
// SIG undefined FUN_143e7ca80(void)

void FUN_143e7ca80(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b4ed8);
  return;
}



// FUNCTION 143e7ca90 FUN_143e7ca90 body=12 status=ok
// SIG undefined FUN_143e7ca90(void)

void FUN_143e7ca90(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b4ea8);
  return;
}



// FUNCTION 143e7caa0 FUN_143e7caa0 body=88 status=ok
// SIG undefined FUN_143e7caa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7caa0(void)

{
  _DAT_1464b5028 = 0;
  if (DAT_1464b5020 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&DAT_1464b4fe0,0);
  if (DAT_1464b5000 != 0) {
    FMemory::Free();
  }
  if (DAT_1464b4fe0 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 143e7cb00 FUN_143e7cb00 body=12 status=ok
// SIG undefined FUN_143e7cb00(void)

void FUN_143e7cb00(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b4e90);
  return;
}



// FUNCTION 143e7cb60 FUN_143e7cb60 body=17 status=ok
// SIG undefined FUN_143e7cb60(void)

void FUN_143e7cb60(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7c18;
  if (DAT_1469e7c18 == 0) {
    return;
  }
  if (DAT_1469e7c18 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 143e7cb80 FUN_143e7cb80 body=66 status=ok
// SIG undefined FUN_143e7cb80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7cb80(void)

{
  _DAT_1469e7bd8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7cbbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e7be0,1);
  return;
}



// FUNCTION 143e7cbe0 FUN_143e7cbe0 body=94 status=ok
// SIG undefined FUN_143e7cbe0(void)

void FUN_143e7cbe0(void)

{
  if (DAT_1469e9040 != 0) {
    if (DAT_1469e9038 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*DAT_1469e9038 + 0x28))(DAT_1469e9038,0);
    if (DAT_1469e9038 != (longlong *)0x0) {
      DAT_1469e9038 = (longlong *)FMemory::Realloc(DAT_1469e9038,0,0);
    }
    DAT_1469e9040 = 0;
  }
  if (DAT_1469e9038 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 143e7cc40 FUN_143e7cc40 body=94 status=ok
// SIG undefined FUN_143e7cc40(void)

void FUN_143e7cc40(void)

{
  if (DAT_1469e8fe0 != 0) {
    if (DAT_1469e8fd8 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*DAT_1469e8fd8 + 0x28))(DAT_1469e8fd8,0);
    if (DAT_1469e8fd8 != (longlong *)0x0) {
      DAT_1469e8fd8 = (longlong *)FMemory::Realloc(DAT_1469e8fd8,0,0);
    }
    DAT_1469e8fe0 = 0;
  }
  if (DAT_1469e8fd8 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 143e7cca0 FUN_143e7cca0 body=94 status=ok
// SIG undefined FUN_143e7cca0(void)

void FUN_143e7cca0(void)

{
  if (DAT_1469e8ff0 != 0) {
    if (DAT_1469e8fe8 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*DAT_1469e8fe8 + 0x28))(DAT_1469e8fe8,0);
    if (DAT_1469e8fe8 != (longlong *)0x0) {
      DAT_1469e8fe8 = (longlong *)FMemory::Realloc(DAT_1469e8fe8,0,0);
    }
    DAT_1469e8ff0 = 0;
  }
  if (DAT_1469e8fe8 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 143e7cd00 FUN_143e7cd00 body=12 status=ok
// SIG undefined FUN_143e7cd00(void)

void FUN_143e7cd00(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b5758);
  return;
}



// FUNCTION 143e7cd10 FUN_143e7cd10 body=12 status=ok
// SIG undefined FUN_143e7cd10(void)

void FUN_143e7cd10(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b56f8);
  return;
}



// FUNCTION 143e7cd20 FUN_143e7cd20 body=12 status=ok
// SIG undefined FUN_143e7cd20(void)

void FUN_143e7cd20(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b5710);
  return;
}



// FUNCTION 143e7cd30 FUN_143e7cd30 body=12 status=ok
// SIG undefined FUN_143e7cd30(void)

void FUN_143e7cd30(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b5728);
  return;
}



// FUNCTION 143e7cd40 FUN_143e7cd40 body=12 status=ok
// SIG undefined FUN_143e7cd40(void)

void FUN_143e7cd40(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b5740);
  return;
}



// FUNCTION 143e7cd50 FUN_143e7cd50 body=47 status=ok
// SIG undefined FUN_143e7cd50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7cd50(void)

{
  _DAT_1464b58d8 = 0;
  if (DAT_1464b58d0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b5890);
  return;
}



// FUNCTION 143e7cd80 FUN_143e7cd80 body=12 status=ok
// SIG undefined FUN_143e7cd80(void)

void FUN_143e7cd80(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b5860);
  return;
}



// FUNCTION 143e7cd90 FUN_143e7cd90 body=12 status=ok
// SIG undefined FUN_143e7cd90(void)

void FUN_143e7cd90(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b57e8);
  return;
}



// FUNCTION 143e7cda0 FUN_143e7cda0 body=12 status=ok
// SIG undefined FUN_143e7cda0(void)

void FUN_143e7cda0(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b5848);
  return;
}



// FUNCTION 143e7cdb0 FUN_143e7cdb0 body=12 status=ok
// SIG undefined FUN_143e7cdb0(void)

void FUN_143e7cdb0(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b57d0);
  return;
}



// FUNCTION 143e7cdc0 FUN_143e7cdc0 body=12 status=ok
// SIG undefined FUN_143e7cdc0(void)

void FUN_143e7cdc0(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b5818);
  return;
}



// FUNCTION 143e7cdd0 FUN_143e7cdd0 body=12 status=ok
// SIG undefined FUN_143e7cdd0(void)

void FUN_143e7cdd0(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b5830);
  return;
}



// FUNCTION 143e7cde0 FUN_143e7cde0 body=12 status=ok
// SIG undefined FUN_143e7cde0(void)

void FUN_143e7cde0(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b57b8);
  return;
}



// FUNCTION 143e7cdf0 FUN_143e7cdf0 body=12 status=ok
// SIG undefined FUN_143e7cdf0(void)

void FUN_143e7cdf0(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b5878);
  return;
}



// FUNCTION 143e7ce00 FUN_143e7ce00 body=12 status=ok
// SIG undefined FUN_143e7ce00(void)

void FUN_143e7ce00(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b5788);
  return;
}



// FUNCTION 143e7ce10 FUN_143e7ce10 body=12 status=ok
// SIG undefined FUN_143e7ce10(void)

void FUN_143e7ce10(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b5770);
  return;
}



// FUNCTION 143e7ce20 FUN_143e7ce20 body=12 status=ok
// SIG undefined FUN_143e7ce20(void)

void FUN_143e7ce20(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b57a0);
  return;
}



// FUNCTION 143e7ce30 FUN_143e7ce30 body=94 status=ok
// SIG undefined FUN_143e7ce30(void)

void FUN_143e7ce30(void)

{
  if (DAT_1469e9030 != 0) {
    if (DAT_1469e9028 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*DAT_1469e9028 + 0x28))(DAT_1469e9028,0);
    if (DAT_1469e9028 != (longlong *)0x0) {
      DAT_1469e9028 = (longlong *)FMemory::Realloc(DAT_1469e9028,0,0);
    }
    DAT_1469e9030 = 0;
  }
  if (DAT_1469e9028 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 143e7ce90 FUN_143e7ce90 body=94 status=ok
// SIG undefined FUN_143e7ce90(void)

void FUN_143e7ce90(void)

{
  if (DAT_1469e9020 != 0) {
    if (DAT_1469e9018 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*DAT_1469e9018 + 0x28))(DAT_1469e9018,0);
    if (DAT_1469e9018 != (longlong *)0x0) {
      DAT_1469e9018 = (longlong *)FMemory::Realloc(DAT_1469e9018,0,0);
    }
    DAT_1469e9020 = 0;
  }
  if (DAT_1469e9018 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 143e7cef0 FUN_143e7cef0 body=94 status=ok
// SIG undefined FUN_143e7cef0(void)

void FUN_143e7cef0(void)

{
  if (DAT_1469e9000 != 0) {
    if (DAT_1469e8ff8 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*DAT_1469e8ff8 + 0x28))(DAT_1469e8ff8,0);
    if (DAT_1469e8ff8 != (longlong *)0x0) {
      DAT_1469e8ff8 = (longlong *)FMemory::Realloc(DAT_1469e8ff8,0,0);
    }
    DAT_1469e9000 = 0;
  }
  if (DAT_1469e8ff8 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 143e7cf50 FUN_143e7cf50 body=94 status=ok
// SIG undefined FUN_143e7cf50(void)

void FUN_143e7cf50(void)

{
  if (DAT_1469e9010 != 0) {
    if (DAT_1469e9008 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*DAT_1469e9008 + 0x28))(DAT_1469e9008,0);
    if (DAT_1469e9008 != (longlong *)0x0) {
      DAT_1469e9008 = (longlong *)FMemory::Realloc(DAT_1469e9008,0,0);
    }
    DAT_1469e9010 = 0;
  }
  if (DAT_1469e9008 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 143e7cfb0 FUN_143e7cfb0 body=12 status=ok
// SIG undefined FUN_143e7cfb0(void)

void FUN_143e7cfb0(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_1464b5800);
  return;
}



// FUNCTION 143e7cfc0 `dynamic_atexit_destructor_for_'ArchetypeAnnotation'' body=149 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'ArchetypeAnnotation''(void)

void _dynamic_atexit_destructor_for__ArchetypeAnnotation__(void)

{
  int iVar1;
  
  PTR_PTR_1464b5998 = (undefined *)&PTR__scalar_deleting_destructor__144d309c8;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1464b59b0);
  iVar1 = DAT_1464b59a8;
  DAT_1464b59a8 = 0;
  if (DAT_1464b59ac != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_1464b59a0,0);
  }
  if (0 < iVar1) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,&PTR_PTR_1464b5998);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1464b59b0);
  if (DAT_1464b59a0 != 0) {
    FMemory::Free();
  }
  PTR_PTR_1464b5998 = (undefined *)&PTR_FUN_143f47c98;
  return;
}



// FUNCTION 143e7d060 FUN_143e7d060 body=66 status=ok
// SIG undefined FUN_143e7d060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d060(void)

{
  _DAT_1469e8f98 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7d09b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e8fa0,1);
  return;
}



// FUNCTION 143e7d0b0 FUN_143e7d0b0 body=66 status=ok
// SIG undefined FUN_143e7d0b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d0b0(void)

{
  _DAT_1469e8f78 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7d0eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e8f80,1);
  return;
}



// FUNCTION 143e7d100 FUN_143e7d100 body=66 status=ok
// SIG undefined FUN_143e7d100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d100(void)

{
  _DAT_1469e8f88 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7d13b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e8f90,1);
  return;
}



// FUNCTION 143e7d150 FUN_143e7d150 body=66 status=ok
// SIG undefined FUN_143e7d150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d150(void)

{
  _DAT_1469e8f58 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7d18b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e8f60,1);
  return;
}



// FUNCTION 143e7d1a0 FUN_143e7d1a0 body=66 status=ok
// SIG undefined FUN_143e7d1a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d1a0(void)

{
  _DAT_1469e8fa8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7d1db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e8fb0,1);
  return;
}



// FUNCTION 143e7d1f0 FUN_143e7d1f0 body=66 status=ok
// SIG undefined FUN_143e7d1f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d1f0(void)

{
  _DAT_1469e8fb8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7d22b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e8fc0,1);
  return;
}



// FUNCTION 143e7d240 FUN_143e7d240 body=66 status=ok
// SIG undefined FUN_143e7d240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d240(void)

{
  _DAT_1469e8f68 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7d27b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e8f70,1);
  return;
}



// FUNCTION 143e7d290 FUN_143e7d290 body=66 status=ok
// SIG undefined FUN_143e7d290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d290(void)

{
  _DAT_1469e8fc8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7d2cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e8fd0,1);
  return;
}



// FUNCTION 143e7d2e0 FUN_143e7d2e0 body=66 status=ok
// SIG undefined FUN_143e7d2e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d2e0(void)

{
  _DAT_1469e8f48 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7d31b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e8f50,1);
  return;
}



// FUNCTION 143e7d330 FUN_143e7d330 body=66 status=ok
// SIG undefined FUN_143e7d330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d330(void)

{
  _DAT_1469e8f38 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7d36b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e8f40,1);
  return;
}



// FUNCTION 143e7d380 FUN_143e7d380 body=66 status=ok
// SIG undefined FUN_143e7d380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d380(void)

{
  _DAT_1469e8e38 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7d3bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469e8e40,1);
  return;
}



// FUNCTION 143e7d3d0 FUN_143e7d3d0 body=47 status=ok
// SIG undefined FUN_143e7d3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d3d0(void)

{
  _DAT_1464b5af8 = 0;
  if (DAT_1464b5af0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b5ab0);
  return;
}



// FUNCTION 143e7d4a0 FUN_143e7d4a0 body=88 status=ok
// SIG undefined FUN_143e7d4a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d4a0(void)

{
  _DAT_1464b5aa8 = 0;
  if (DAT_1464b5aa0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FDynamicClassStaticData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&DAT_1464b5a60,0);
  if (DAT_1464b5a80 != 0) {
    FMemory::Free();
  }
  if (DAT_1464b5a60 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 143e7d500 FUN_143e7d500 body=47 status=ok
// SIG undefined FUN_143e7d500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d500(void)

{
  _DAT_1464b5a58 = 0;
  if (DAT_1464b5a50 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b5a10);
  return;
}



// FUNCTION 143e7d530 FUN_143e7d530 body=47 status=ok
// SIG undefined FUN_143e7d530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d530(void)

{
  _DAT_1464b5a08 = 0;
  if (DAT_1464b5a00 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b59c0);
  return;
}



// FUNCTION 143e7d560 FUN_143e7d560 body=80 status=ok
// SIG undefined FUN_143e7d560(void)

void FUN_143e7d560(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9078;
  if (DAT_1469e9078 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9078 + 1;
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



// FUNCTION 143e7d5c0 `dynamic_atexit_destructor_for_'GUObjectClusters'' body=37 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'GUObjectClusters''(void)

void _dynamic_atexit_destructor_for__GUObjectClusters__(void)

{
  if (DAT_1469e8f20 != 0) {
    FMemory::Free();
  }
  TArray<FUObjectCluster,FDefaultAllocator>::~TArray<FUObjectCluster,FDefaultAllocator>
            (&DAT_1469e8f10);
  return;
}



// FUNCTION 143e7d5f0 FUN_143e7d5f0 body=47 status=ok
// SIG undefined FUN_143e7d5f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d5f0(void)

{
  _DAT_1469e90e8 = 0;
  if (DAT_1469e90e0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1469e90a0);
  return;
}



// FUNCTION 143e7d630 FUN_143e7d630 body=47 status=ok
// SIG undefined FUN_143e7d630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d630(void)

{
  _DAT_1464b5c58 = 0;
  if (DAT_1464b5c50 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b5c10);
  return;
}



// FUNCTION 143e7d660 `dynamic_atexit_destructor_for_'GUObjectArray'' body=175 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'GUObjectArray''(void)

void _dynamic_atexit_destructor_for__GUObjectArray__(void)

{
  int iVar1;
  longlong lVar2;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_1469e9320);
  if (DAT_1469e9310 != 0) {
    FMemory::Free();
  }
  if (DAT_1469e9300 != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_1469e91d0);
  if (DAT_1469e91b8 == 0) {
    iVar1 = 0;
    if (0 < DAT_1469e91c4._4_4_) {
      lVar2 = 0;
      do {
        FMemory::operator_delete(*(undefined8 *)(lVar2 + DAT_1469e91b0));
        iVar1 = iVar1 + 1;
        lVar2 = lVar2 + 8;
      } while (iVar1 < DAT_1469e91c4._4_4_);
    }
  }
  else {
    FMemory::operator_delete();
  }
  FMemory::operator_delete(DAT_1469e91b0);
  return;
}



// FUNCTION 143e7d710 FUN_143e7d710 body=186 status=ok
// SIG undefined FUN_143e7d710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e7d710(void)

{
  BOOL BVar1;
  undefined4 uStack_c;
  
  PTR_PTR_1464b5c60 = (undefined *)&PTR__scalar_deleting_destructor__144d32238;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
  }
  DAT_1464b5ce0 = 0;
  _DAT_1464b5ce8 = 0;
  uRam00000001464b5cec = 0;
  _DAT_1464b5cf0 = 0xffffffff;
  uRam00000001464b5cf4 = uStack_c;
  TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
  ::Empty(&DAT_1464b5c68,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
  _DAT_1464b5cb0 = 0;
  if (DAT_1464b5ca8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b5c68);
  PTR_PTR_1464b5c60 = (undefined *)&PTR_FUN_143f47c98;
  return;
}



// FUNCTION 143e7d7d0 `dynamic_atexit_destructor_for_'Singleton'' body=346 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'Singleton''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `FUObjectHashTables::Get'::`2'::_dynamic_atexit_destructor_for__Singleton__(void)

{
  _DAT_1469e9500 = 0;
  if (DAT_1469e94f8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&DAT_1469e94b8,0);
  if (DAT_1469e94d8 != 0) {
    FMemory::Free();
  }
  if (DAT_1469e94b8 != 0) {
    FMemory::Free();
  }
  _DAT_1469e94b0 = 0;
  if (DAT_1469e94a8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&DAT_1469e9468,0);
  if (DAT_1469e9488 != 0) {
    FMemory::Free();
  }
  if (DAT_1469e9468 != 0) {
    FMemory::Free();
  }
  _DAT_1469e9460 = 0;
  if (DAT_1469e9458 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FHashBucket>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&DAT_1469e9418,0);
  if (DAT_1469e9438 != 0) {
    FMemory::Free();
  }
  if (DAT_1469e9418 != 0) {
    FMemory::Free();
  }
  _DAT_1469e9410 = 0;
  if (DAT_1469e9408 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1469e93c8);
  _DAT_1469e93c0 = 0;
  if (DAT_1469e93b8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FHashBucket>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&DAT_1469e9378,0);
  if (DAT_1469e9398 != 0) {
    FMemory::Free();
  }
  if (DAT_1469e9378 != 0) {
    FMemory::Free();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e7d923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_1469e9350);
  return;
}



// FUNCTION 143e7d930 FUN_143e7d930 body=80 status=ok
// SIG undefined FUN_143e7d930(void)

void FUN_143e7d930(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9b78;
  if (DAT_1469e9b78 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9b78 + 1;
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



// FUNCTION 143e7d980 FUN_143e7d980 body=80 status=ok
// SIG undefined FUN_143e7d980(void)

void FUN_143e7d980(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea358;
  if (DAT_1469ea358 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea358 + 1;
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



// FUNCTION 143e7d9d0 FUN_143e7d9d0 body=80 status=ok
// SIG undefined FUN_143e7d9d0(void)

void FUN_143e7d9d0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea730;
  if (DAT_1469ea730 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea730 + 1;
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



// FUNCTION 143e7da20 FUN_143e7da20 body=80 status=ok
// SIG undefined FUN_143e7da20(void)

void FUN_143e7da20(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9ef0;
  if (DAT_1469e9ef0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9ef0 + 1;
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



// FUNCTION 143e7da70 FUN_143e7da70 body=80 status=ok
// SIG undefined FUN_143e7da70(void)

void FUN_143e7da70(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea2e0;
  if (DAT_1469ea2e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea2e0 + 1;
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



// FUNCTION 143e7dac0 FUN_143e7dac0 body=80 status=ok
// SIG undefined FUN_143e7dac0(void)

void FUN_143e7dac0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469eadd8;
  if (DAT_1469eadd8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469eadd8 + 1;
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



// FUNCTION 143e7db10 FUN_143e7db10 body=80 status=ok
// SIG undefined FUN_143e7db10(void)

void FUN_143e7db10(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469eae20;
  if (DAT_1469eae20 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469eae20 + 1;
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



// FUNCTION 143e7db60 FUN_143e7db60 body=80 status=ok
// SIG undefined FUN_143e7db60(void)

void FUN_143e7db60(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469eae08;
  if (DAT_1469eae08 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469eae08 + 1;
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



// FUNCTION 143e7dbb0 FUN_143e7dbb0 body=80 status=ok
// SIG undefined FUN_143e7dbb0(void)

void FUN_143e7dbb0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469eadf0;
  if (DAT_1469eadf0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469eadf0 + 1;
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



// FUNCTION 143e7dc00 FUN_143e7dc00 body=80 status=ok
// SIG undefined FUN_143e7dc00(void)

void FUN_143e7dc00(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e97e8;
  if (DAT_1469e97e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e97e8 + 1;
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



// FUNCTION 143e7dc50 FUN_143e7dc50 body=80 status=ok
// SIG undefined FUN_143e7dc50(void)

void FUN_143e7dc50(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea298;
  if (DAT_1469ea298 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea298 + 1;
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



// FUNCTION 143e7dca0 FUN_143e7dca0 body=80 status=ok
// SIG undefined FUN_143e7dca0(void)

void FUN_143e7dca0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea2c8;
  if (DAT_1469ea2c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea2c8 + 1;
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



// FUNCTION 143e7dcf0 FUN_143e7dcf0 body=80 status=ok
// SIG undefined FUN_143e7dcf0(void)

void FUN_143e7dcf0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9b90;
  if (DAT_1469e9b90 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9b90 + 1;
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



// FUNCTION 143e7dd40 FUN_143e7dd40 body=80 status=ok
// SIG undefined FUN_143e7dd40(void)

void FUN_143e7dd40(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e98f0;
  if (DAT_1469e98f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e98f0 + 1;
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



// FUNCTION 143e7dd90 FUN_143e7dd90 body=80 status=ok
// SIG undefined FUN_143e7dd90(void)

void FUN_143e7dd90(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea250;
  if (DAT_1469ea250 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea250 + 1;
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



// FUNCTION 143e7dde0 FUN_143e7dde0 body=80 status=ok
// SIG undefined FUN_143e7dde0(void)

void FUN_143e7dde0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9ba8;
  if (DAT_1469e9ba8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9ba8 + 1;
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



// FUNCTION 143e7de30 FUN_143e7de30 body=80 status=ok
// SIG undefined FUN_143e7de30(void)

void FUN_143e7de30(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea3a0;
  if (DAT_1469ea3a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea3a0 + 1;
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



// FUNCTION 143e7de80 FUN_143e7de80 body=80 status=ok
// SIG undefined FUN_143e7de80(void)

void FUN_143e7de80(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9950;
  if (DAT_1469e9950 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9950 + 1;
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



// FUNCTION 143e7ded0 FUN_143e7ded0 body=80 status=ok
// SIG undefined FUN_143e7ded0(void)

void FUN_143e7ded0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea2f8;
  if (DAT_1469ea2f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea2f8 + 1;
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



// FUNCTION 143e7df20 FUN_143e7df20 body=80 status=ok
// SIG undefined FUN_143e7df20(void)

void FUN_143e7df20(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea340;
  if (DAT_1469ea340 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea340 + 1;
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



// FUNCTION 143e7df70 FUN_143e7df70 body=80 status=ok
// SIG undefined FUN_143e7df70(void)

void FUN_143e7df70(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea190;
  if (DAT_1469ea190 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea190 + 1;
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



// FUNCTION 143e7dfc0 FUN_143e7dfc0 body=80 status=ok
// SIG undefined FUN_143e7dfc0(void)

void FUN_143e7dfc0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9bc0;
  if (DAT_1469e9bc0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9bc0 + 1;
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



// FUNCTION 143e7e010 FUN_143e7e010 body=80 status=ok
// SIG undefined FUN_143e7e010(void)

void FUN_143e7e010(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9f20;
  if (DAT_1469e9f20 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9f20 + 1;
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



// FUNCTION 143e7e060 FUN_143e7e060 body=80 status=ok
// SIG undefined FUN_143e7e060(void)

void FUN_143e7e060(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9a70;
  if (DAT_1469e9a70 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9a70 + 1;
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



// FUNCTION 143e7e0b0 FUN_143e7e0b0 body=80 status=ok
// SIG undefined FUN_143e7e0b0(void)

void FUN_143e7e0b0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9f38;
  if (DAT_1469e9f38 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9f38 + 1;
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



// FUNCTION 143e7e100 FUN_143e7e100 body=80 status=ok
// SIG undefined FUN_143e7e100(void)

void FUN_143e7e100(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea310;
  if (DAT_1469ea310 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea310 + 1;
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



// FUNCTION 143e7e150 FUN_143e7e150 body=80 status=ok
// SIG undefined FUN_143e7e150(void)

void FUN_143e7e150(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9a40;
  if (DAT_1469e9a40 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9a40 + 1;
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



// FUNCTION 143e7e1a0 FUN_143e7e1a0 body=80 status=ok
// SIG undefined FUN_143e7e1a0(void)

void FUN_143e7e1a0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9bd8;
  if (DAT_1469e9bd8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9bd8 + 1;
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



// FUNCTION 143e7e1f0 FUN_143e7e1f0 body=80 status=ok
// SIG undefined FUN_143e7e1f0(void)

void FUN_143e7e1f0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea388;
  if (DAT_1469ea388 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea388 + 1;
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



// FUNCTION 143e7e240 FUN_143e7e240 body=80 status=ok
// SIG undefined FUN_143e7e240(void)

void FUN_143e7e240(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea370;
  if (DAT_1469ea370 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea370 + 1;
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



// FUNCTION 143e7e290 FUN_143e7e290 body=80 status=ok
// SIG undefined FUN_143e7e290(void)

void FUN_143e7e290(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9b48;
  if (DAT_1469e9b48 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9b48 + 1;
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



// FUNCTION 143e7e2e0 FUN_143e7e2e0 body=80 status=ok
// SIG undefined FUN_143e7e2e0(void)

void FUN_143e7e2e0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e99c8;
  if (DAT_1469e99c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e99c8 + 1;
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



// FUNCTION 143e7e330 FUN_143e7e330 body=80 status=ok
// SIG undefined FUN_143e7e330(void)

void FUN_143e7e330(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9920;
  if (DAT_1469e9920 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9920 + 1;
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



// FUNCTION 143e7e380 FUN_143e7e380 body=80 status=ok
// SIG undefined FUN_143e7e380(void)

void FUN_143e7e380(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea178;
  if (DAT_1469ea178 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea178 + 1;
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



// FUNCTION 143e7e3d0 FUN_143e7e3d0 body=80 status=ok
// SIG undefined FUN_143e7e3d0(void)

void FUN_143e7e3d0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9968;
  if (DAT_1469e9968 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9968 + 1;
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



// FUNCTION 143e7e420 FUN_143e7e420 body=80 status=ok
// SIG undefined FUN_143e7e420(void)

void FUN_143e7e420(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea328;
  if (DAT_1469ea328 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea328 + 1;
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



// FUNCTION 143e7e470 FUN_143e7e470 body=80 status=ok
// SIG undefined FUN_143e7e470(void)

void FUN_143e7e470(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea028;
  if (DAT_1469ea028 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea028 + 1;
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



// FUNCTION 143e7e4c0 FUN_143e7e4c0 body=80 status=ok
// SIG undefined FUN_143e7e4c0(void)

void FUN_143e7e4c0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea040;
  if (DAT_1469ea040 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea040 + 1;
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



// FUNCTION 143e7e510 FUN_143e7e510 body=80 status=ok
// SIG undefined FUN_143e7e510(void)

void FUN_143e7e510(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea058;
  if (DAT_1469ea058 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea058 + 1;
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



// FUNCTION 143e7e560 FUN_143e7e560 body=80 status=ok
// SIG undefined FUN_143e7e560(void)

void FUN_143e7e560(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9f50;
  if (DAT_1469e9f50 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9f50 + 1;
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



// FUNCTION 143e7e5b0 FUN_143e7e5b0 body=80 status=ok
// SIG undefined FUN_143e7e5b0(void)

void FUN_143e7e5b0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9f68;
  if (DAT_1469e9f68 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9f68 + 1;
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



// FUNCTION 143e7e600 FUN_143e7e600 body=80 status=ok
// SIG undefined FUN_143e7e600(void)

void FUN_143e7e600(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9f80;
  if (DAT_1469e9f80 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9f80 + 1;
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



// FUNCTION 143e7e650 FUN_143e7e650 body=80 status=ok
// SIG undefined FUN_143e7e650(void)

void FUN_143e7e650(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9f98;
  if (DAT_1469e9f98 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9f98 + 1;
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



// FUNCTION 143e7e6a0 FUN_143e7e6a0 body=80 status=ok
// SIG undefined FUN_143e7e6a0(void)

void FUN_143e7e6a0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9fb0;
  if (DAT_1469e9fb0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9fb0 + 1;
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



// FUNCTION 143e7e6f0 FUN_143e7e6f0 body=80 status=ok
// SIG undefined FUN_143e7e6f0(void)

void FUN_143e7e6f0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9fc8;
  if (DAT_1469e9fc8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9fc8 + 1;
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



// FUNCTION 143e7e740 FUN_143e7e740 body=80 status=ok
// SIG undefined FUN_143e7e740(void)

void FUN_143e7e740(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9fe0;
  if (DAT_1469e9fe0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9fe0 + 1;
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



// FUNCTION 143e7e790 FUN_143e7e790 body=80 status=ok
// SIG undefined FUN_143e7e790(void)

void FUN_143e7e790(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9ff8;
  if (DAT_1469e9ff8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9ff8 + 1;
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



// FUNCTION 143e7e7e0 FUN_143e7e7e0 body=80 status=ok
// SIG undefined FUN_143e7e7e0(void)

void FUN_143e7e7e0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea010;
  if (DAT_1469ea010 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea010 + 1;
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



// FUNCTION 143e7e830 FUN_143e7e830 body=80 status=ok
// SIG undefined FUN_143e7e830(void)

void FUN_143e7e830(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9bf0;
  if (DAT_1469e9bf0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9bf0 + 1;
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



// FUNCTION 143e7e880 FUN_143e7e880 body=80 status=ok
// SIG undefined FUN_143e7e880(void)

void FUN_143e7e880(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9b00;
  if (DAT_1469e9b00 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9b00 + 1;
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



// FUNCTION 143e7e8d0 FUN_143e7e8d0 body=80 status=ok
// SIG undefined FUN_143e7e8d0(void)

void FUN_143e7e8d0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9ae8;
  if (DAT_1469e9ae8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9ae8 + 1;
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



// FUNCTION 143e7e920 FUN_143e7e920 body=80 status=ok
// SIG undefined FUN_143e7e920(void)

void FUN_143e7e920(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9c08;
  if (DAT_1469e9c08 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9c08 + 1;
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



// FUNCTION 143e7e970 FUN_143e7e970 body=80 status=ok
// SIG undefined FUN_143e7e970(void)

void FUN_143e7e970(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea5e0;
  if (DAT_1469ea5e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea5e0 + 1;
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



// FUNCTION 143e7e9c0 FUN_143e7e9c0 body=80 status=ok
// SIG undefined FUN_143e7e9c0(void)

void FUN_143e7e9c0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea610;
  if (DAT_1469ea610 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea610 + 1;
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



// FUNCTION 143e7ea10 FUN_143e7ea10 body=80 status=ok
// SIG undefined FUN_143e7ea10(void)

void FUN_143e7ea10(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea5f8;
  if (DAT_1469ea5f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea5f8 + 1;
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



// FUNCTION 143e7ea60 FUN_143e7ea60 body=80 status=ok
// SIG undefined FUN_143e7ea60(void)

void FUN_143e7ea60(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea5c8;
  if (DAT_1469ea5c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea5c8 + 1;
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



// FUNCTION 143e7eab0 FUN_143e7eab0 body=80 status=ok
// SIG undefined FUN_143e7eab0(void)

void FUN_143e7eab0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea508;
  if (DAT_1469ea508 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea508 + 1;
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



// FUNCTION 143e7eb00 FUN_143e7eb00 body=80 status=ok
// SIG undefined FUN_143e7eb00(void)

void FUN_143e7eb00(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea538;
  if (DAT_1469ea538 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea538 + 1;
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



// FUNCTION 143e7eb50 FUN_143e7eb50 body=80 status=ok
// SIG undefined FUN_143e7eb50(void)

void FUN_143e7eb50(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea520;
  if (DAT_1469ea520 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea520 + 1;
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



// FUNCTION 143e7eba0 FUN_143e7eba0 body=80 status=ok
// SIG undefined FUN_143e7eba0(void)

void FUN_143e7eba0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea550;
  if (DAT_1469ea550 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea550 + 1;
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



// FUNCTION 143e7ebf0 FUN_143e7ebf0 body=80 status=ok
// SIG undefined FUN_143e7ebf0(void)

void FUN_143e7ebf0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea568;
  if (DAT_1469ea568 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea568 + 1;
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



// FUNCTION 143e7ec40 FUN_143e7ec40 body=80 status=ok
// SIG undefined FUN_143e7ec40(void)

void FUN_143e7ec40(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea640;
  if (DAT_1469ea640 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea640 + 1;
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



// FUNCTION 143e7ec90 FUN_143e7ec90 body=80 status=ok
// SIG undefined FUN_143e7ec90(void)

void FUN_143e7ec90(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea670;
  if (DAT_1469ea670 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea670 + 1;
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



// FUNCTION 143e7ece0 FUN_143e7ece0 body=80 status=ok
// SIG undefined FUN_143e7ece0(void)

void FUN_143e7ece0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea658;
  if (DAT_1469ea658 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea658 + 1;
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



// FUNCTION 143e7ed30 FUN_143e7ed30 body=80 status=ok
// SIG undefined FUN_143e7ed30(void)

void FUN_143e7ed30(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea628;
  if (DAT_1469ea628 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea628 + 1;
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



// FUNCTION 143e7ed80 FUN_143e7ed80 body=80 status=ok
// SIG undefined FUN_143e7ed80(void)

void FUN_143e7ed80(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea478;
  if (DAT_1469ea478 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea478 + 1;
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



// FUNCTION 143e7edd0 FUN_143e7edd0 body=80 status=ok
// SIG undefined FUN_143e7edd0(void)

void FUN_143e7edd0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea598;
  if (DAT_1469ea598 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea598 + 1;
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



// FUNCTION 143e7ee20 FUN_143e7ee20 body=80 status=ok
// SIG undefined FUN_143e7ee20(void)

void FUN_143e7ee20(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea448;
  if (DAT_1469ea448 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea448 + 1;
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



// FUNCTION 143e7ee70 FUN_143e7ee70 body=80 status=ok
// SIG undefined FUN_143e7ee70(void)

void FUN_143e7ee70(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea3e8;
  if (DAT_1469ea3e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea3e8 + 1;
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



// FUNCTION 143e7eec0 FUN_143e7eec0 body=80 status=ok
// SIG undefined FUN_143e7eec0(void)

void FUN_143e7eec0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea400;
  if (DAT_1469ea400 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea400 + 1;
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



// FUNCTION 143e7ef10 FUN_143e7ef10 body=80 status=ok
// SIG undefined FUN_143e7ef10(void)

void FUN_143e7ef10(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea580;
  if (DAT_1469ea580 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea580 + 1;
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



// FUNCTION 143e7ef60 FUN_143e7ef60 body=80 status=ok
// SIG undefined FUN_143e7ef60(void)

void FUN_143e7ef60(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea6a0;
  if (DAT_1469ea6a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea6a0 + 1;
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



// FUNCTION 143e7efb0 FUN_143e7efb0 body=80 status=ok
// SIG undefined FUN_143e7efb0(void)

void FUN_143e7efb0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea6d0;
  if (DAT_1469ea6d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea6d0 + 1;
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



// FUNCTION 143e7f000 FUN_143e7f000 body=80 status=ok
// SIG undefined FUN_143e7f000(void)

void FUN_143e7f000(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea6b8;
  if (DAT_1469ea6b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea6b8 + 1;
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



// FUNCTION 143e7f050 FUN_143e7f050 body=80 status=ok
// SIG undefined FUN_143e7f050(void)

void FUN_143e7f050(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea688;
  if (DAT_1469ea688 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea688 + 1;
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



// FUNCTION 143e7f0a0 FUN_143e7f0a0 body=80 status=ok
// SIG undefined FUN_143e7f0a0(void)

void FUN_143e7f0a0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea490;
  if (DAT_1469ea490 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea490 + 1;
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



// FUNCTION 143e7f0f0 FUN_143e7f0f0 body=80 status=ok
// SIG undefined FUN_143e7f0f0(void)

void FUN_143e7f0f0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea5b0;
  if (DAT_1469ea5b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea5b0 + 1;
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



// FUNCTION 143e7f140 FUN_143e7f140 body=80 status=ok
// SIG undefined FUN_143e7f140(void)

void FUN_143e7f140(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea460;
  if (DAT_1469ea460 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea460 + 1;
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



// FUNCTION 143e7f190 FUN_143e7f190 body=80 status=ok
// SIG undefined FUN_143e7f190(void)

void FUN_143e7f190(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea418;
  if (DAT_1469ea418 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea418 + 1;
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



// FUNCTION 143e7f1e0 FUN_143e7f1e0 body=80 status=ok
// SIG undefined FUN_143e7f1e0(void)

void FUN_143e7f1e0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea430;
  if (DAT_1469ea430 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea430 + 1;
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



// FUNCTION 143e7f230 FUN_143e7f230 body=80 status=ok
// SIG undefined FUN_143e7f230(void)

void FUN_143e7f230(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea4a8;
  if (DAT_1469ea4a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea4a8 + 1;
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



// FUNCTION 143e7f280 FUN_143e7f280 body=80 status=ok
// SIG undefined FUN_143e7f280(void)

void FUN_143e7f280(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea4c0;
  if (DAT_1469ea4c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea4c0 + 1;
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



// FUNCTION 143e7f2d0 FUN_143e7f2d0 body=80 status=ok
// SIG undefined FUN_143e7f2d0(void)

void FUN_143e7f2d0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea4d8;
  if (DAT_1469ea4d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea4d8 + 1;
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



// FUNCTION 143e7f320 FUN_143e7f320 body=80 status=ok
// SIG undefined FUN_143e7f320(void)

void FUN_143e7f320(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea4f0;
  if (DAT_1469ea4f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea4f0 + 1;
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



// FUNCTION 143e7f370 FUN_143e7f370 body=80 status=ok
// SIG undefined FUN_143e7f370(void)

void FUN_143e7f370(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea868;
  if (DAT_1469ea868 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea868 + 1;
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



// FUNCTION 143e7f3c0 FUN_143e7f3c0 body=80 status=ok
// SIG undefined FUN_143e7f3c0(void)

void FUN_143e7f3c0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea748;
  if (DAT_1469ea748 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea748 + 1;
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



// FUNCTION 143e7f410 FUN_143e7f410 body=80 status=ok
// SIG undefined FUN_143e7f410(void)

void FUN_143e7f410(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea880;
  if (DAT_1469ea880 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea880 + 1;
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



// FUNCTION 143e7f460 FUN_143e7f460 body=80 status=ok
// SIG undefined FUN_143e7f460(void)

void FUN_143e7f460(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469eadc0;
  if (DAT_1469eadc0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469eadc0 + 1;
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



// FUNCTION 143e7f4b0 FUN_143e7f4b0 body=80 status=ok
// SIG undefined FUN_143e7f4b0(void)

void FUN_143e7f4b0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ead60;
  if (DAT_1469ead60 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ead60 + 1;
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



// FUNCTION 143e7f500 FUN_143e7f500 body=80 status=ok
// SIG undefined FUN_143e7f500(void)

void FUN_143e7f500(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ead90;
  if (DAT_1469ead90 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ead90 + 1;
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



// FUNCTION 143e7f550 FUN_143e7f550 body=80 status=ok
// SIG undefined FUN_143e7f550(void)

void FUN_143e7f550(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469eada8;
  if (DAT_1469eada8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469eada8 + 1;
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



// FUNCTION 143e7f5a0 FUN_143e7f5a0 body=80 status=ok
// SIG undefined FUN_143e7f5a0(void)

void FUN_143e7f5a0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ead78;
  if (DAT_1469ead78 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ead78 + 1;
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



// FUNCTION 143e7f5f0 FUN_143e7f5f0 body=80 status=ok
// SIG undefined FUN_143e7f5f0(void)

void FUN_143e7f5f0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea718;
  if (DAT_1469ea718 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea718 + 1;
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



// FUNCTION 143e7f640 FUN_143e7f640 body=80 status=ok
// SIG undefined FUN_143e7f640(void)

void FUN_143e7f640(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9c20;
  if (DAT_1469e9c20 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9c20 + 1;
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



// FUNCTION 143e7f690 FUN_143e7f690 body=80 status=ok
// SIG undefined FUN_143e7f690(void)

void FUN_143e7f690(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e99e0;
  if (DAT_1469e99e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e99e0 + 1;
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



// FUNCTION 143e7f6e0 FUN_143e7f6e0 body=80 status=ok
// SIG undefined FUN_143e7f6e0(void)

void FUN_143e7f6e0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea1c0;
  if (DAT_1469ea1c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea1c0 + 1;
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



// FUNCTION 143e7f730 FUN_143e7f730 body=80 status=ok
// SIG undefined FUN_143e7f730(void)

void FUN_143e7f730(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9c38;
  if (DAT_1469e9c38 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9c38 + 1;
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



// FUNCTION 143e7f780 FUN_143e7f780 body=47 status=ok
// SIG undefined FUN_143e7f780(void)

void FUN_143e7f780(void)

{
  DAT_1464b9c98 = 0;
  if (DAT_1464b9c90 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&DAT_1464b9c50);
  return;
}



// FUNCTION 143e7f7b0 FUN_143e7f7b0 body=80 status=ok
// SIG undefined FUN_143e7f7b0(void)

void FUN_143e7f7b0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9a58;
  if (DAT_1469e9a58 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9a58 + 1;
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



// FUNCTION 143e7f800 FUN_143e7f800 body=80 status=ok
// SIG undefined FUN_143e7f800(void)

void FUN_143e7f800(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469eae90;
  if (DAT_1469eae90 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469eae90 + 1;
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



// FUNCTION 143e7f850 FUN_143e7f850 body=80 status=ok
// SIG undefined FUN_143e7f850(void)

void FUN_143e7f850(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469eae38;
  if (DAT_1469eae38 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469eae38 + 1;
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



// FUNCTION 143e7f8a0 FUN_143e7f8a0 body=80 status=ok
// SIG undefined FUN_143e7f8a0(void)

void FUN_143e7f8a0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9c50;
  if (DAT_1469e9c50 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9c50 + 1;
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



// FUNCTION 143e7f8f0 FUN_143e7f8f0 body=80 status=ok
// SIG undefined FUN_143e7f8f0(void)

void FUN_143e7f8f0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9c68;
  if (DAT_1469e9c68 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9c68 + 1;
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



// FUNCTION 143e7f940 FUN_143e7f940 body=80 status=ok
// SIG undefined FUN_143e7f940(void)

void FUN_143e7f940(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9c80;
  if (DAT_1469e9c80 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9c80 + 1;
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



// FUNCTION 143e7f990 FUN_143e7f990 body=80 status=ok
// SIG undefined FUN_143e7f990(void)

void FUN_143e7f990(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e99f8;
  if (DAT_1469e99f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e99f8 + 1;
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



// FUNCTION 143e7f9e0 FUN_143e7f9e0 body=80 status=ok
// SIG undefined FUN_143e7f9e0(void)

void FUN_143e7f9e0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea100;
  if (DAT_1469ea100 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea100 + 1;
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



// FUNCTION 143e7fa30 FUN_143e7fa30 body=80 status=ok
// SIG undefined FUN_143e7fa30(void)

void FUN_143e7fa30(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea220;
  if (DAT_1469ea220 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea220 + 1;
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



// FUNCTION 143e7fa80 FUN_143e7fa80 body=80 status=ok
// SIG undefined FUN_143e7fa80(void)

void FUN_143e7fa80(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea130;
  if (DAT_1469ea130 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea130 + 1;
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



// FUNCTION 143e7fad0 FUN_143e7fad0 body=80 status=ok
// SIG undefined FUN_143e7fad0(void)

void FUN_143e7fad0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea0d0;
  if (DAT_1469ea0d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea0d0 + 1;
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



// FUNCTION 143e7fb20 FUN_143e7fb20 body=80 status=ok
// SIG undefined FUN_143e7fb20(void)

void FUN_143e7fb20(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9878;
  if (DAT_1469e9878 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9878 + 1;
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



// FUNCTION 143e7fb70 FUN_143e7fb70 body=80 status=ok
// SIG undefined FUN_143e7fb70(void)

void FUN_143e7fb70(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea238;
  if (DAT_1469ea238 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea238 + 1;
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



// FUNCTION 143e7fbc0 FUN_143e7fbc0 body=80 status=ok
// SIG undefined FUN_143e7fbc0(void)

void FUN_143e7fbc0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea0a0;
  if (DAT_1469ea0a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea0a0 + 1;
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



// FUNCTION 143e7fc10 FUN_143e7fc10 body=80 status=ok
// SIG undefined FUN_143e7fc10(void)

void FUN_143e7fc10(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e9c98;
  if (DAT_1469e9c98 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e9c98 + 1;
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



// FUNCTION 143e7fc60 MenuCategoryDisplayInfo'' body=88 status=ok
// SIG undefined MenuCategoryDisplayInfo''(void)

void `dynamic_atexit_destructor_for_'EKeys::MenuCategoryDisplayInfo__(void)

{
  DAT_1464b9ce8 = 0;
  if (DAT_1464b9ce0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,EKeys::FCategoryDisplayInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&DAT_1464b9ca0,0);
  if (DAT_1464b9cc0 != 0) {
    FMemory::Free();
  }
  if (DAT_1464b9ca0 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 143e7fcc0 FUN_143e7fcc0 body=80 status=ok
// SIG undefined FUN_143e7fcc0(void)

void FUN_143e7fcc0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469e98a8;
  if (DAT_1469e98a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469e98a8 + 1;
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



// FUNCTION 143e7fd10 FUN_143e7fd10 body=80 status=ok
// SIG undefined FUN_143e7fd10(void)

void FUN_143e7fd10(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea898;
  if (DAT_1469ea898 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea898 + 1;
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



// FUNCTION 143e7fd60 FUN_143e7fd60 body=80 status=ok
// SIG undefined FUN_143e7fd60(void)

void FUN_143e7fd60(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea8b0;
  if (DAT_1469ea8b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea8b0 + 1;
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



// FUNCTION 143e7fdb0 FUN_143e7fdb0 body=80 status=ok
// SIG undefined FUN_143e7fdb0(void)

void FUN_143e7fdb0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea8c8;
  if (DAT_1469ea8c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea8c8 + 1;
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



// FUNCTION 143e7fe00 FUN_143e7fe00 body=80 status=ok
// SIG undefined FUN_143e7fe00(void)

void FUN_143e7fe00(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea8e0;
  if (DAT_1469ea8e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea8e0 + 1;
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



// FUNCTION 143e7fe50 FUN_143e7fe50 body=80 status=ok
// SIG undefined FUN_143e7fe50(void)

void FUN_143e7fe50(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea8f8;
  if (DAT_1469ea8f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea8f8 + 1;
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



// FUNCTION 143e7fea0 FUN_143e7fea0 body=80 status=ok
// SIG undefined FUN_143e7fea0(void)

void FUN_143e7fea0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea910;
  if (DAT_1469ea910 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea910 + 1;
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



// FUNCTION 143e7fef0 FUN_143e7fef0 body=80 status=ok
// SIG undefined FUN_143e7fef0(void)

void FUN_143e7fef0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea928;
  if (DAT_1469ea928 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea928 + 1;
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



// FUNCTION 143e7ff40 FUN_143e7ff40 body=80 status=ok
// SIG undefined FUN_143e7ff40(void)

void FUN_143e7ff40(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea940;
  if (DAT_1469ea940 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea940 + 1;
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



// FUNCTION 143e7ff90 FUN_143e7ff90 body=80 status=ok
// SIG undefined FUN_143e7ff90(void)

void FUN_143e7ff90(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea988;
  if (DAT_1469ea988 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea988 + 1;
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



// FUNCTION 143e7ffe0 FUN_143e7ffe0 body=80 status=ok
// SIG undefined FUN_143e7ffe0(void)

void FUN_143e7ffe0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469eac10;
  if (DAT_1469eac10 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469eac10 + 1;
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



// FUNCTION 143e80030 FUN_143e80030 body=80 status=ok
// SIG undefined FUN_143e80030(void)

void FUN_143e80030(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea9a0;
  if (DAT_1469ea9a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea9a0 + 1;
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



// FUNCTION 143e80080 FUN_143e80080 body=80 status=ok
// SIG undefined FUN_143e80080(void)

void FUN_143e80080(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469eac28;
  if (DAT_1469eac28 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469eac28 + 1;
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



// FUNCTION 143e800d0 FUN_143e800d0 body=80 status=ok
// SIG undefined FUN_143e800d0(void)

void FUN_143e800d0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea958;
  if (DAT_1469ea958 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea958 + 1;
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



// FUNCTION 143e80120 FUN_143e80120 body=80 status=ok
// SIG undefined FUN_143e80120(void)

void FUN_143e80120(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea9b8;
  if (DAT_1469ea9b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea9b8 + 1;
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



// FUNCTION 143e80170 FUN_143e80170 body=80 status=ok
// SIG undefined FUN_143e80170(void)

void FUN_143e80170(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea9e8;
  if (DAT_1469ea9e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea9e8 + 1;
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



// FUNCTION 143e801c0 FUN_143e801c0 body=80 status=ok
// SIG undefined FUN_143e801c0(void)

void FUN_143e801c0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469eaa00;
  if (DAT_1469eaa00 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469eaa00 + 1;
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



// FUNCTION 143e80210 FUN_143e80210 body=80 status=ok
// SIG undefined FUN_143e80210(void)

void FUN_143e80210(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469eaa18;
  if (DAT_1469eaa18 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469eaa18 + 1;
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



// FUNCTION 143e80260 FUN_143e80260 body=80 status=ok
// SIG undefined FUN_143e80260(void)

void FUN_143e80260(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea9d0;
  if (DAT_1469ea9d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea9d0 + 1;
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



// FUNCTION 143e802b0 FUN_143e802b0 body=80 status=ok
// SIG undefined FUN_143e802b0(void)

void FUN_143e802b0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469eabc8;
  if (DAT_1469eabc8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469eabc8 + 1;
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



// FUNCTION 143e80300 FUN_143e80300 body=80 status=ok
// SIG undefined FUN_143e80300(void)

void FUN_143e80300(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469eabe0;
  if (DAT_1469eabe0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469eabe0 + 1;
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



// FUNCTION 143e80350 FUN_143e80350 body=80 status=ok
// SIG undefined FUN_143e80350(void)

void FUN_143e80350(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469ea970;
  if (DAT_1469ea970 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469ea970 + 1;
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



// FUNCTION 143e803a0 FUN_143e803a0 body=80 status=ok
// SIG undefined FUN_143e803a0(void)

void FUN_143e803a0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469eabf8;
  if (DAT_1469eabf8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469eabf8 + 1;
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



// FUNCTION 143e803f0 FUN_143e803f0 body=80 status=ok
// SIG undefined FUN_143e803f0(void)

void FUN_143e803f0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469eaa30;
  if (DAT_1469eaa30 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469eaa30 + 1;
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



// FUNCTION 143e80440 FUN_143e80440 body=80 status=ok
// SIG undefined FUN_143e80440(void)

void FUN_143e80440(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1469eaa48;
  if (DAT_1469eaa48 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1469eaa48 + 1;
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


