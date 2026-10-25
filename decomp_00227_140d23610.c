// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140d23610 FUN_140d23610 body=89 status=ok
// SIG undefined FUN_140d23610(void)

void FUN_140d23610(longlong *param_1)

{
  if (param_1[0xc] != 0) {
    FMemory::Free();
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
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140d23670 ~FInAppPurchaseProductInfo body=165 status=ok
// SIG undefined ~FInAppPurchaseProductInfo(void)

void FInAppPurchaseProductInfo::~FInAppPurchaseProductInfo(longlong *param_1)

{
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
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
    return;
  }
  return;
}



// FUNCTION 140d23720 DestroyObject body=48 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<FPakSignatureFile>::DestroyObject
               (longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140d23750 FUN_140d23750 body=2186 status=ok
// SIG undefined FUN_140d23750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d23750(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  
  *param_1 = &PTR_FUN_14450f8e0;
  param_1[10] = &PTR_LAB_14450fae8;
  param_1[0xc] = &PTR_LAB_14450fb00;
  FUN_1404cf2e0(&local_70,0);
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0xe0))(local_70,param_1 + 0x7a);
  }
  FUN_1404cf890(&local_80,0);
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 0xd8))(local_80,param_1 + 0x4a);
    (**(code **)(*local_80 + 0x128))(local_80,param_1 + 0x4b);
  }
  lVar3 = FUN_142b45e90();
  lVar11 = param_1[0xbb];
  iVar8 = 0;
  lVar3 = *(longlong *)(lVar3 + 0x18);
  if (0 < *(int *)(lVar3 + 0x60)) {
    lVar12 = 0;
    do {
      plVar10 = (longlong *)(*(longlong *)(lVar3 + 0x58) + lVar12);
      if ((((int)plVar10[1] != 0) && (plVar4 = (longlong *)*plVar10, plVar4 != (longlong *)0x0)) &&
         (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res18), *plVar4 == lVar11)
         ) {
        if (((int)plVar10[1] != 0) && (plVar4 = (longlong *)*plVar10, plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (*plVar10 != 0) {
            lVar11 = FMemory::Realloc(*plVar10,0,0);
            *plVar10 = lVar11;
          }
          *(undefined4 *)(plVar10 + 1) = 0;
        }
        break;
      }
      iVar8 = iVar8 + 1;
      lVar12 = lVar12 + 0x10;
    } while (iVar8 < *(int *)(lVar3 + 0x60));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 0x58,0);
  FUN_142b4b220(lVar3,&local_60);
  if (((local_60 != 0) && (*(int *)(local_60 + 0x30) != 0)) &&
     (plVar10 = *(longlong **)(local_60 + 0x28), plVar10 != (longlong *)0x0)) {
    (**(code **)(*plVar10 + 0x28))(plVar10,0);
    if (*(longlong *)(local_60 + 0x28) != 0) {
      uVar5 = FMemory::Realloc(*(longlong *)(local_60 + 0x28),0,0);
      *(undefined8 *)(local_60 + 0x28) = uVar5;
    }
    *(undefined4 *)(local_60 + 0x30) = 0;
  }
  iVar9 = 0;
  lVar11 = param_1[0xbc];
  iVar8 = DAT_1464b57d8;
  if (0 < DAT_1464b57d8) {
    lVar3 = 0;
    do {
      plVar10 = (longlong *)(DAT_1464b57d0 + lVar3);
      if ((((int)plVar10[1] != 0) && (plVar4 = (longlong *)*plVar10, plVar4 != (longlong *)0x0)) &&
         (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res20),
         iVar8 = DAT_1464b57d8, *plVar4 == lVar11)) {
        if (((int)plVar10[1] != 0) && (plVar4 = (longlong *)*plVar10, plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (*plVar10 != 0) {
            lVar11 = FMemory::Realloc(*plVar10,0,0);
            *plVar10 = lVar11;
          }
          *(undefined4 *)(plVar10 + 1) = 0;
          iVar8 = DAT_1464b57d8;
        }
        break;
      }
      iVar9 = iVar9 + 1;
      lVar3 = lVar3 + 0x10;
    } while (iVar9 < iVar8);
  }
  if (DAT_1464b57e4 < 1) {
    iVar7 = 0;
    iVar9 = iVar8;
    if (0 < iVar8) {
      lVar11 = 0;
      do {
        if (((*(int *)(lVar11 + 8 + DAT_1464b57d0) == 0) ||
            (*(longlong **)(lVar11 + DAT_1464b57d0) == (longlong *)0x0)) ||
           (cVar2 = (**(code **)(**(longlong **)(lVar11 + DAT_1464b57d0) + 0x10))(), cVar2 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464b57d0,iVar7,1,1);
        }
        else {
          iVar7 = iVar7 + 1;
          lVar11 = lVar11 + 0x10;
        }
        iVar9 = DAT_1464b57d8;
      } while (iVar7 < DAT_1464b57d8);
    }
    _DAT_1464b57e0 = iVar9 * 2;
    if (_DAT_1464b57e0 < 3) {
      _DAT_1464b57e0 = 2;
    }
    if ((_DAT_1464b57e0 < iVar8) && (DAT_1464b57dc != iVar9)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464b57d0);
    }
  }
  puVar6 = (undefined8 *)FName::FName(local_88,L"GbxShiftOverlay",1);
  plVar10 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar6);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 200))(plVar10,param_1 + 0xc);
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_58 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  plVar10 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_78 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  plVar10 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_68 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xc3);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xc0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xbd);
  plVar10 = (longlong *)param_1[0xba];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (param_1[0xb7] != 0) {
    FMemory::Free();
  }
  FUN_140d22f80(param_1 + 0xaf);
  *(undefined4 *)(param_1 + 0xae) = 0;
  if (param_1[0xad] != 0) {
    FMemory::Free();
  }
  FUN_140d22d30(param_1 + 0xa5);
  FUN_1404bebc0(param_1 + 0xa3);
  *(undefined4 *)(param_1 + 0xa2) = 0;
  if (param_1[0xa1] != 0) {
    FMemory::Free();
  }
  FUN_140d22d30(param_1 + 0x99);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (param_1[0x97] != 0) {
    FMemory::Free();
  }
  FUN_140d23140(param_1 + 0x8f);
  *(undefined4 *)(param_1 + 0x8e) = 0;
  if (param_1[0x8d] != 0) {
    FMemory::Free();
  }
  FUN_140d22d30(param_1 + 0x85);
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (param_1[0x83] != 0) {
    FMemory::Free();
  }
  FUN_140d22d30(param_1 + 0x7b);
  plVar10 = (longlong *)param_1[0x78];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (param_1[0x74] != 0) {
    FMemory::Free();
  }
  plVar10 = (longlong *)param_1[0x73];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (param_1[0x6e] != 0) {
    FMemory::Free();
  }
  plVar10 = (longlong *)param_1[0x6c];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (param_1[0x68] != 0) {
    FMemory::Free();
  }
  plVar10 = (longlong *)param_1[0x66];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (param_1[0x62] != 0) {
    FMemory::Free();
  }
  plVar10 = (longlong *)param_1[0x61];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = (longlong *)param_1[0x5d];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = (longlong *)param_1[0x57];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  iVar8 = *(int *)(param_1 + 0x51);
  plVar10 = (longlong *)param_1[0x50];
  if (iVar8 != 0) {
    do {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    plVar10 = (longlong *)param_1[0x50];
  }
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free(plVar10);
  }
  plVar10 = (longlong *)param_1[0x4e];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = (longlong *)param_1[0x46];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x43) = 0;
  if (param_1[0x42] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x3a);
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
  param_1[0xc] = &PTR_FUN_14450f8a0;
  param_1[10] = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 0xb) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1 + 10);
  }
  FUN_140d23400(param_1);
  return;
}



// FUNCTION 140d23fe0 FUN_140d23fe0 body=132 status=ok
// SIG undefined FUN_140d23fe0(void)

void FUN_140d23fe0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x70);
  plVar4 = *(longlong **)(param_1 + 0x68);
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
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x48);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x30);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x18);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1);
  return;
}



// FUNCTION 140d24070 FUN_140d24070 body=149 status=ok
// SIG undefined FUN_140d24070(void)

void FUN_140d24070(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x88);
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (iVar2 != 0) {
    do {
      TArray<FSaveGameUserSetting,FDefaultAllocator>::
      ~TArray<FSaveGameUserSetting,FDefaultAllocator>(plVar1 + 6);
      TArray<FSaveGameUserSetting,FDefaultAllocator>::
      ~TArray<FSaveGameUserSetting,FDefaultAllocator>(plVar1 + 4);
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x80);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140d24110 FUN_140d24110 body=123 status=ok
// SIG undefined FUN_140d24110(void)

void FUN_140d24110(longlong param_1)

{
  FUN_1408708d0(param_1 + 0x1a8);
  FUN_1408708d0(param_1 + 0x198);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x138);
  FUN_1404bf750(param_1 + 0x130);
  FUN_1406a5390(param_1);
  return;
}



// FUNCTION 140d24190 FUN_140d24190 body=867 status=ok
// SIG undefined FUN_140d24190(void)

void FUN_140d24190(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x540) != 0) {
    FMemory::Free();
  }
  FUN_140ce1930(param_1 + 0x508);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4e8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4d0);
  FUN_1407bdbb0(param_1 + 0x4c0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4a8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x490);
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  TArray<FCell,FDefaultAllocator>::~TArray<FCell,FDefaultAllocator>(param_1 + 0x470);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x450);
  FUN_140ce1840(param_1 + 0x440);
  FUN_140ce1840(param_1 + 0x418);
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FMemory::Free();
  }
  FUN_140ce1840(param_1 + 0x3f0);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x3e0);
  FUN_140d22820(param_1 + 0x3d0);
  iVar1 = *(int *)(param_1 + 0x3c8);
  plVar3 = *(longlong **)(param_1 + 0x3c0);
  if (iVar1 != 0) {
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar3 = *(longlong **)(param_1 + 0x3c0);
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  iVar1 = *(int *)(param_1 + 0x3b8);
  plVar3 = *(longlong **)(param_1 + 0x3b0);
  if (iVar1 != 0) {
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar3 = *(longlong **)(param_1 + 0x3b0);
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  FUN_140ce1a60(param_1 + 0x3a0);
  FUN_140ce18a0(param_1 + 0x390);
  FUN_140ce18a0(param_1 + 0x380);
  if (*(longlong *)(param_1 + 0x370) != 0) {
    FMemory::Free();
  }
  FUN_140ce1840(param_1 + 0x360);
  *(undefined4 *)(param_1 + 0x350) = 0;
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  FUN_140d22ec0(param_1 + 0x308);
  iVar1 = *(int *)(param_1 + 0x300);
  lVar2 = *(longlong *)(param_1 + 0x2f8);
  if (iVar1 != 0) {
    do {
      FUN_1404bf980(lVar2 + 0x28);
      FUN_1404bf980(lVar2);
      lVar2 = lVar2 + 0x58;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    lVar2 = *(longlong *)(param_1 + 0x2f8);
  }
  if (lVar2 != 0) {
    FMemory::Free(lVar2);
  }
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FMemory::Free();
  }
  FUN_140d2bcf0(param_1 + 0x280,0);
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x278);
  plVar3 = *(longlong **)(param_1 + 0x270);
  if (iVar1 != 0) {
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar3 = *(longlong **)(param_1 + 0x270);
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  iVar1 = *(int *)(param_1 + 0x268);
  plVar3 = *(longlong **)(param_1 + 0x260);
  if (iVar1 != 0) {
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar3 = *(longlong **)(param_1 + 0x260);
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x1d8);
  plVar3 = *(longlong **)(param_1 + 0x1d0);
  if (iVar1 != 0) {
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar3 = *(longlong **)(param_1 + 0x1d0);
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  FUN_140d24070(param_1);
  return;
}



// FUNCTION 140d24500 FUN_140d24500 body=331 status=ok
// SIG undefined FUN_140d24500(void)

longlong * FUN_140d24500(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  void *_Src;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    plVar3 = (longlong *)*param_1;
    for (iVar5 = (int)param_1[1]; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (plVar3[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar3[10] != 0) {
        FMemory::Free();
      }
      if (plVar3[8] != 0) {
        FMemory::Free();
      }
      if (plVar3[6] != 0) {
        FMemory::Free();
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0x10;
    }
    iVar5 = (int)param_2[1];
    lVar6 = *param_2;
    *(int *)(param_1 + 1) = iVar5;
    if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FModuleDescriptor,FDefaultAllocator>::ResizeForCopy(param_1,iVar5);
      puVar4 = (undefined8 *)*param_1;
      if (iVar5 != 0) {
        lVar6 = lVar6 + 0x10;
        do {
          *puVar4 = 0;
          iVar2 = *(int *)(lVar6 + -8);
          _Src = *(void **)(lVar6 + -0x10);
          *(int *)(puVar4 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
          }
          else {
            TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar4,iVar2,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar4,_Src,(longlong)iVar2);
          }
          FUN_140a4f390(puVar4 + 2,lVar6);
          puVar1 = (undefined1 *)(lVar6 + 0x68);
          lVar6 = lVar6 + 0x80;
          *(undefined1 *)(puVar4 + 0xf) = *puVar1;
          puVar4 = puVar4 + 0x10;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 140d24650 FUN_140d24650 body=641 status=ok
// SIG undefined FUN_140d24650(void)

longlong * FUN_140d24650(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 *puVar11;
  
  if (param_1 != param_2) {
    iVar8 = (int)param_1[1];
    if (iVar8 != 0) {
      plVar9 = (longlong *)(*param_1 + 0x68);
      do {
        FUN_1404bf980(plVar9 + 4);
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        if (plVar9[-3] != 0) {
          FMemory::Free();
        }
        plVar5 = (longlong *)plVar9[-5];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
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
        plVar5 = (longlong *)plVar9[-8];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
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
        plVar5 = (longlong *)plVar9[-0xb];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
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
        plVar9 = plVar9 + 0x17;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = (int)param_2[1];
    lVar10 = *param_2;
    *(int *)(param_1 + 1) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140d0d3f0(param_1,iVar8);
      puVar11 = (undefined1 *)*param_1;
      if (iVar8 != 0) {
        puVar7 = (undefined8 *)(puVar11 + 0xa8);
        lVar10 = lVar10 + 8;
        do {
          *puVar11 = *(undefined1 *)(lVar10 + -8);
          FText::FText(puVar7 + -0x14,lVar10);
          FText::FText(puVar7 + -0x11,lVar10 + 0x18);
          FText::FText(puVar7 + -0xe,lVar10 + 0x30);
          FString::FString(puVar7 + -0xb,lVar10 + 0x48);
          *(undefined4 *)(puVar7 + -9) = *(undefined4 *)(lVar10 + 0x58);
          FString::FString(puVar7 + -8,lVar10 + 0x60);
          puVar7[-6] = *(undefined8 *)(lVar10 + 0x70);
          puVar7[-5] = *(undefined8 *)(lVar10 + 0x78);
          puVar7[-4] = &PTR_FUN_143f73d18;
          puVar7[-3] = *(undefined8 *)(lVar10 + 0x88);
          lVar6 = *(longlong *)(lVar10 + 0x90);
          puVar7[-2] = lVar6;
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
            UNLOCK();
          }
          puVar7[-4] = &PTR_FUN_143f740c8;
          puVar11 = puVar11 + 0xb8;
          puVar7[-1] = 0;
          *puVar7 = 0;
          *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(lVar10 + 0xa8);
          puVar3 = (undefined1 *)(lVar10 + 0xa9);
          lVar10 = lVar10 + 0xb8;
          *(undefined1 *)((longlong)puVar7 + 9) = *puVar3;
          puVar7 = puVar7 + 0x17;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 140d248e0 FUN_140d248e0 body=430 status=ok
// SIG undefined FUN_140d248e0(void)

longlong * FUN_140d248e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_1 != param_2) {
    plVar5 = (longlong *)*param_1;
    for (iVar7 = (int)param_1[1]; iVar7 != 0; iVar7 = iVar7 + -1) {
      TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
                (plVar5 + 0x2e);
      FUN_14099a9b0(plVar5 + 0x2c);
      FUN_14099aa40(plVar5 + 0x2a);
      TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
                (plVar5 + 0x28);
      FUN_14099a950(plVar5 + 0x26);
      if (plVar5[0x14] != 0) {
        FMemory::Free();
      }
      if (plVar5[0x11] != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)plVar5[0xe];
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
      plVar4 = (longlong *)plVar5[0xb];
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
      if (plVar5[3] != 0) {
        FMemory::Free();
      }
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 0x34;
    }
    iVar7 = (int)param_2[1];
    lVar6 = *param_2;
    *(int *)(param_1 + 1) = iVar7;
    if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FPrimitiveUniformShaderParameters,FDefaultAllocator>::ResizeForCopy(param_1,iVar7);
      lVar8 = *param_1;
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        FUN_140d21c70(lVar8,lVar6);
        lVar8 = lVar8 + 0x1a0;
        lVar6 = lVar6 + 0x1a0;
      }
    }
  }
  return param_1;
}



// FUNCTION 140d24a90 FUN_140d24a90 body=31 status=ok
// SIG undefined FUN_140d24a90(void)

void FUN_140d24a90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign();
  return;
}



// FUNCTION 140d24ab0 FUN_140d24ab0 body=1635 status=ok
// SIG undefined FUN_140d24ab0(void)

/* WARNING: Removing unreachable block (ram,0x000140d24b72) */
/* WARNING: Removing unreachable block (ram,0x000140d24be0) */
/* WARNING: Removing unreachable block (ram,0x000140d24c77) */
/* WARNING: Removing unreachable block (ram,0x000140d24c8b) */
/* WARNING: Removing unreachable block (ram,0x000140d24c7c) */
/* WARNING: Removing unreachable block (ram,0x000140d24bfa) */
/* WARNING: Removing unreachable block (ram,0x000140d24c0e) */
/* WARNING: Removing unreachable block (ram,0x000140d25077) */
/* WARNING: Removing unreachable block (ram,0x000140d25090) */
/* WARNING: Removing unreachable block (ram,0x000140d24c24) */
/* WARNING: Removing unreachable block (ram,0x000140d24c02) */
/* WARNING: Removing unreachable block (ram,0x000140d24cad) */
/* WARNING: Removing unreachable block (ram,0x000140d24cc9) */
/* WARNING: Removing unreachable block (ram,0x000140d24cc4) */
/* WARNING: Removing unreachable block (ram,0x000140d24ccd) */
/* WARNING: Removing unreachable block (ram,0x000140d24d6a) */
/* WARNING: Removing unreachable block (ram,0x000140d24d7e) */
/* WARNING: Removing unreachable block (ram,0x000140d24d6f) */
/* WARNING: Removing unreachable block (ram,0x000140d24cf2) */
/* WARNING: Removing unreachable block (ram,0x000140d24d06) */
/* WARNING: Removing unreachable block (ram,0x000140d250ab) */
/* WARNING: Removing unreachable block (ram,0x000140d250c4) */
/* WARNING: Removing unreachable block (ram,0x000140d24d1c) */
/* WARNING: Removing unreachable block (ram,0x000140d24cfa) */
/* WARNING: Removing unreachable block (ram,0x000140d24da0) */
/* WARNING: Removing unreachable block (ram,0x000140d24dbc) */
/* WARNING: Removing unreachable block (ram,0x000140d24db7) */
/* WARNING: Removing unreachable block (ram,0x000140d24dc0) */
/* WARNING: Removing unreachable block (ram,0x000140d24e5f) */
/* WARNING: Removing unreachable block (ram,0x000140d24e73) */
/* WARNING: Removing unreachable block (ram,0x000140d24e64) */
/* WARNING: Removing unreachable block (ram,0x000140d24de4) */
/* WARNING: Removing unreachable block (ram,0x000140d24df8) */
/* WARNING: Removing unreachable block (ram,0x000140d250df) */
/* WARNING: Removing unreachable block (ram,0x000140d250f8) */
/* WARNING: Removing unreachable block (ram,0x000140d24e11) */
/* WARNING: Removing unreachable block (ram,0x000140d24dec) */
/* WARNING: Removing unreachable block (ram,0x000140d24e95) */
/* WARNING: Removing unreachable block (ram,0x000140d24eb1) */
/* WARNING: Removing unreachable block (ram,0x000140d24eac) */
/* WARNING: Removing unreachable block (ram,0x000140d24eb5) */
/* WARNING: Removing unreachable block (ram,0x000140d24f54) */
/* WARNING: Removing unreachable block (ram,0x000140d24f68) */
/* WARNING: Removing unreachable block (ram,0x000140d24f59) */
/* WARNING: Removing unreachable block (ram,0x000140d24ed9) */
/* WARNING: Removing unreachable block (ram,0x000140d24eed) */
/* WARNING: Removing unreachable block (ram,0x000140d25043) */
/* WARNING: Removing unreachable block (ram,0x000140d2505c) */
/* WARNING: Removing unreachable block (ram,0x000140d24f06) */
/* WARNING: Removing unreachable block (ram,0x000140d24ee1) */
/* WARNING: Removing unreachable block (ram,0x000140d24f8a) */
/* WARNING: Removing unreachable block (ram,0x000140d24f9d) */
/* WARNING: Removing unreachable block (ram,0x000140d24f98) */
/* WARNING: Removing unreachable block (ram,0x000140d24fa1) */
/* WARNING: Removing unreachable block (ram,0x000140d24fcb) */
/* WARNING: Removing unreachable block (ram,0x000140d25015) */

undefined8 FUN_140d24ab0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  FArchive::UsingCustomVersion(param_1,&DAT_14629aaa0);
  plVar1 = (longlong *)(param_2 + 0x28);
  iVar2 = FArchive::CustomVer(param_1,&DAT_14629aaa0);
  if (iVar2 < 2) {
    FUN_140d25220();
    iVar2 = 0;
    *(undefined4 *)(param_2 + 0x30) = 0;
    if (*(int *)(param_2 + 0x34) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
      iVar2 = *(int *)(param_2 + 0x30);
    }
    *(int *)(param_2 + 0x30) = iVar2;
    if (*(int *)(param_2 + 0x34) < iVar2) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar2 * 4),0,0);
  }
  else {
    FUN_140871d30(param_1,plVar1);
  }
  return param_1;
}



// FUNCTION 140d25120 FUN_140d25120 body=249 status=ok
// SIG undefined FUN_140d25120(void)

longlong * FUN_140d25120(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)*(int *)(param_2 + 1),(longlong)*(int *)((longlong)param_2 + 0xc));
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = *(int *)(param_2 + 1);
  }
  plVar1 = (longlong *)param_1[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if (-1 < (char)*(byte *)(param_1 + 5)) {
    if ((-1 < local_res8[0]) &&
       (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x1000001)))) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (((local_res8[0] != 0) || (iVar2 = 0, *(int *)((longlong)param_2 + 0xc) != 0)) &&
         (iVar2 = local_res8[0], (*(byte *)(param_1 + 5) & 1) != 0)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy
                  (param_2,local_res8[0],*(undefined4 *)((longlong)param_2 + 0xc));
        iVar2 = *(int *)(param_2 + 1);
      }
      (**(code **)(*param_1 + 0x50))(param_1,*param_2,(longlong)iVar2);
      return param_1;
    }
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80;
  return param_1;
}



// FUNCTION 140d25220 FUN_140d25220 body=465 status=ok
// SIG undefined FUN_140d25220(void)

longlong * FUN_140d25220(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  puVar7 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar5 = (longlong *)param_1[1];
  if ((int *)plVar5[1] < (int *)*plVar5 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  bVar3 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar3) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x200001)))) {
    if ((bVar3 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar2 = *param_2 + (longlong)(int)puVar7 * 8;
          FUN_140d25400(param_1,lVar2);
          FUN_140d25400(param_1,lVar2 + 2);
          FUN_140d25400(param_1,lVar2 + 4);
          FUN_140d25400(param_1,lVar2 + 6);
          uVar8 = (int)puVar7 + 1;
          puVar7 = (undefined8 *)(ulonglong)uVar8;
        } while ((int)uVar8 < (int)param_2[1]);
      }
      return param_1;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    puVar9 = puVar7;
    if (0 < local_res8[0]) {
      do {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
        }
        puVar1 = (undefined8 *)(*param_2 + (longlong)iVar4 * 8);
        puVar6 = puVar7;
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar6 = puVar1;
        }
        FUN_140d25400(param_1,puVar6);
        FUN_140d25400(param_1,(longlong)puVar6 + 2);
        FUN_140d25400(param_1,(longlong)puVar6 + 4);
        FUN_140d25400(param_1,(longlong)puVar6 + 6);
        uVar8 = (int)puVar9 + 1;
        puVar9 = (undefined8 *)(ulonglong)uVar8;
      } while ((int)uVar8 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar3 | 0x80;
  return param_1;
}



// FUNCTION 140d25400 FUN_140d25400 body=113 status=ok
// SIG undefined FUN_140d25400(void)

longlong * FUN_140d25400(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)param_1[1];
  if (puVar1 + 1 <= (undefined2 *)((undefined8 *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2,2);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2,2);
  }
  return param_1;
}



// FUNCTION 140d25480 FUN_140d25480 body=554 status=ok
// SIG undefined FUN_140d25480(void)

undefined4 * FUN_140d25480(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  longlong local_40 [3];
  undefined8 local_28;
  
  local_58 = *param_2;
  plVar1 = (longlong *)param_1[2];
  uStack_50 = 0;
  FUN_140d2ca50(plVar1,local_40,&local_58,0);
  lVar9 = local_40[0];
  if (local_40[0] != 0) goto LAB_140d255cf;
  uVar2 = plVar1[1];
  uVar8 = *plVar1 + 1;
  uVar4 = uVar2 * 3 & 0x3fffffffffffffff;
  uVar7 = uVar4 >> 2;
  if (uVar8 < uVar7) {
    if ((uVar8 <= uVar4 >> 4) && (8 < uVar2)) {
      bVar6 = 1;
      lVar9 = (uVar8 * 5 >> 2) + 1;
      uVar4 = lVar9 * 2;
      while (uVar4 < uVar7) {
        bVar6 = bVar6 + 1;
        uVar4 = lVar9 << (bVar6 & 0x3f);
      }
      uVar7 = uVar2 >> (bVar6 & 0x3f);
      uVar4 = 8;
      if (8 < uVar7) {
        uVar4 = uVar7;
      }
      if (uVar4 != uVar2) goto LAB_140d25555;
    }
  }
  else if (uVar2 < 0x800000000000001) {
    uVar4 = uVar2 * 2;
LAB_140d25555:
    FUN_140d4b530(plVar1,uVar4);
    FUN_140d2ca50(plVar1,local_40,&local_58,0);
  }
  lVar9 = plVar1[5];
  if (lVar9 == 0) {
    puVar5 = (undefined4 *)operator_new(0x18);
  }
  else {
    if (*(longlong *)(lVar9 + 0x70) != 0) {
      FUN_1439f01b0(lVar9,0,0x18);
    }
    puVar5 = (undefined4 *)FUN_1439efd10(lVar9,0x18);
  }
  *puVar5 = local_58;
  puVar5[1] = uStack_54;
  puVar5[2] = (undefined4)uStack_50;
  puVar5[3] = uStack_50._4_4_;
  FUN_140d3d6f0(plVar1,&local_58,local_28,puVar5);
  *plVar1 = *plVar1 + 1;
  lVar9 = CONCAT44(uStack_54,local_58);
LAB_140d255cf:
  if (*(longlong *)(lVar9 + 8) != 0) {
    return (undefined4 *)(*(longlong *)(lVar9 + 8) + 4);
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    puVar5 = (undefined4 *)operator_new(8);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *param_2;
      puVar5[1] = 0;
      *(undefined4 **)(lVar9 + 8) = puVar5;
      return puVar5 + 1;
    }
    *(undefined8 *)(lVar9 + 8) = 0;
    return (undefined4 *)&DAT_00000004;
  }
  if (*(longlong *)(lVar3 + 0x70) != 0) {
    FUN_1439f01b0(lVar3,0,8);
  }
  puVar5 = (undefined4 *)FUN_1439efd10(lVar3,8);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
  }
  if (puVar5 + 1 != (undefined4 *)0x0) {
    puVar5[1] = 0;
  }
  *puVar5 = *param_2;
  *(undefined4 **)(lVar9 + 8) = puVar5;
  return puVar5 + 1;
}



// FUNCTION 140d256b0 FUN_140d256b0 body=376 status=ok
// SIG undefined FUN_140d256b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140d256b0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [32];
  longlong local_48 [3];
  ulonglong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar1 = param_1[2];
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_48);
  puVar4 = (undefined8 *)0x0;
  local_28 = 0;
  plVar2 = (longlong *)FUN_140d5a260(lVar1,local_68,local_48);
  lVar1 = *plVar2;
  if (0xf < local_30) {
    uVar6 = local_30 + 1;
    lVar5 = local_48[0];
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(local_48[0] + -8);
      uVar6 = local_30 + 0x28;
      if (0x1f < (local_48[0] - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar5,uVar6);
  }
  puVar3 = *(undefined8 **)(lVar1 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    lVar5 = *param_1;
    if (lVar5 == 0) {
      puVar3 = (undefined8 *)operator_new(0x40);
      if (puVar3 != (undefined8 *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(puVar3,param_2);
        puVar3[6] = 0;
        puVar3[7] = 0xf;
        *(undefined1 *)(puVar3 + 4) = 0;
        puVar4 = puVar3;
      }
    }
    else {
      if (*(longlong *)(lVar5 + 0x70) != 0) {
        FUN_1439f01b0(lVar5,0,0x40);
      }
      puVar4 = (undefined8 *)FUN_1439efd10(lVar5,0x40);
      lVar5 = *param_1;
      puVar4[2] = 0;
      puVar4[3] = 0xf;
      *(undefined1 *)puVar4 = 0;
      FUN_140d1e160(lVar5,puVar4);
      lVar5 = *param_1;
      puVar4[6] = 0;
      puVar4[7] = 0xf;
      *(undefined1 *)(puVar4 + 4) = 0;
      FUN_140d1e160(lVar5);
      if (puVar4 != param_2) {
        puVar3 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar3 = (undefined8 *)*param_2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar4,puVar3,param_2[2]);
      }
    }
    *(undefined8 **)(lVar1 + 0x20) = puVar4;
    puVar3 = puVar4;
  }
  return puVar3 + 4;
}



// FUNCTION 140d25830 FUN_140d25830 body=381 status=ok
// SIG undefined FUN_140d25830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140d25830(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [32];
  longlong local_48 [3];
  ulonglong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar1 = param_1[2];
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_48);
  local_28 = 0;
  plVar2 = (longlong *)FUN_140d5a260(lVar1,local_68,local_48);
  lVar1 = *plVar2;
  if (0xf < local_30) {
    uVar5 = local_30 + 1;
    lVar4 = local_48[0];
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(local_48[0] + -8);
      uVar5 = local_30 + 0x28;
      if (0x1f < (local_48[0] - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar4,uVar5);
  }
  puVar3 = *(undefined8 **)(lVar1 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    lVar4 = *param_1;
    if (lVar4 == 0) {
      puVar3 = (undefined8 *)operator_new(0x40);
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(puVar3,param_2);
        FUN_141500380(puVar3 + 4);
      }
    }
    else {
      if (*(longlong *)(lVar4 + 0x70) != 0) {
        FUN_1439f01b0(lVar4,0,0x40);
      }
      puVar3 = (undefined8 *)FUN_1439efd10(lVar4,0x40);
      lVar4 = *param_1;
      puVar3[2] = 0;
      puVar3[3] = 0xf;
      *(undefined1 *)puVar3 = 0;
      FUN_140d1e160(lVar4,puVar3);
      lVar4 = *param_1;
      FUN_141500380(puVar3 + 4);
      FUN_140d1e180(lVar4,puVar3 + 4);
      if (puVar3 != param_2) {
        puVar6 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar6 = (undefined8 *)*param_2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar3,puVar6,param_2[2]);
      }
    }
    *(undefined8 **)(lVar1 + 0x20) = puVar3;
  }
  return puVar3 + 4;
}



// FUNCTION 140d259b0 FUN_140d259b0 body=335 status=ok
// SIG undefined FUN_140d259b0(void)

longlong * FUN_140d259b0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *local_48 [3];
  ulonglong local_30;
  undefined1 local_28 [32];
  
  lVar7 = *param_1;
  local_48[0] = *(longlong **)(lVar7 + 0x10);
  if (local_48[0] != (longlong *)0x0) {
    *param_1 = (longlong)local_48[0];
    return param_1;
  }
  lVar2 = param_1[1];
  uVar6 = *(longlong *)(lVar2 + 8) - 1U & param_1[2];
  param_1[2] = uVar6;
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar6 * 8);
  if (lVar3 != lVar7) {
    if ((lVar3 != 0) && (lVar3 != *(longlong *)(*(longlong *)(lVar2 + 0x20) + (uVar6 ^ 1) * 8))) {
      for (lVar3 = *(longlong *)(lVar3 + 0x10); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x10)) {
        if (lVar3 == lVar7) goto LAB_140d25adb;
      }
    }
    lVar7 = FUN_140d2ca50(lVar2,local_28,lVar7,local_48);
    local_30 = *(ulonglong *)(lVar7 + 0x10);
    param_1[2] = local_30;
    lVar7 = *(longlong *)(*(longlong *)(param_1[1] + 0x20) + local_30 * 8);
    if ((lVar7 != 0) &&
       (lVar7 == *(longlong *)(*(longlong *)(param_1[1] + 0x20) + (local_30 ^ 1) * 8))) {
      plVar8 = (longlong *)local_48[0][2];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar4 = (longlong *)*plVar8;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x19);
          plVar8 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
      }
      else {
        cVar1 = *(char *)(local_48[0][1] + 0x19);
        plVar5 = (longlong *)local_48[0][1];
        plVar4 = local_48[0];
        while ((plVar8 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar5 = (longlong *)plVar8[1];
          plVar4 = plVar8;
        }
      }
      if (plVar8 != *(longlong **)(lVar7 + 8)) {
        *param_1 = plVar8[4];
        return param_1;
      }
      FUN_140d4c050(param_1,local_30 + 2);
      return param_1;
    }
  }
LAB_140d25adb:
  FUN_140d4c050(param_1,param_1[2] + 1);
  return param_1;
}



// FUNCTION 140d25b00 FUN_140d25b00 body=335 status=ok
// SIG undefined FUN_140d25b00(void)

longlong * FUN_140d25b00(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *local_48 [3];
  ulonglong local_30;
  undefined1 local_28 [32];
  
  lVar7 = *param_1;
  local_48[0] = *(longlong **)(lVar7 + 0x28);
  if (local_48[0] != (longlong *)0x0) {
    *param_1 = (longlong)local_48[0];
    return param_1;
  }
  lVar2 = param_1[1];
  uVar6 = *(longlong *)(lVar2 + 8) - 1U & param_1[2];
  param_1[2] = uVar6;
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar6 * 8);
  if (lVar3 != lVar7) {
    if ((lVar3 != 0) && (lVar3 != *(longlong *)(*(longlong *)(lVar2 + 0x20) + (uVar6 ^ 1) * 8))) {
      for (lVar3 = *(longlong *)(lVar3 + 0x28); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x28)) {
        if (lVar3 == lVar7) goto LAB_140d25c2b;
      }
    }
    lVar7 = FUN_140d2cbc0(lVar2,local_28,lVar7,local_48);
    local_30 = *(ulonglong *)(lVar7 + 0x10);
    param_1[2] = local_30;
    lVar7 = *(longlong *)(*(longlong *)(param_1[1] + 0x20) + local_30 * 8);
    if ((lVar7 != 0) &&
       (lVar7 == *(longlong *)(*(longlong *)(param_1[1] + 0x20) + (local_30 ^ 1) * 8))) {
      plVar8 = (longlong *)local_48[0][2];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar4 = (longlong *)*plVar8;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x19);
          plVar8 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
      }
      else {
        cVar1 = *(char *)(local_48[0][1] + 0x19);
        plVar5 = (longlong *)local_48[0][1];
        plVar4 = local_48[0];
        while ((plVar8 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar5 = (longlong *)plVar8[1];
          plVar4 = plVar8;
        }
      }
      if (plVar8 != *(longlong **)(lVar7 + 8)) {
        *param_1 = plVar8[4];
        return param_1;
      }
      FUN_140d4c050(param_1,local_30 + 2);
      return param_1;
    }
  }
LAB_140d25c2b:
  FUN_140d4c050(param_1,param_1[2] + 1);
  return param_1;
}



// FUNCTION 140d25c50 FUN_140d25c50 body=306 status=ok
// SIG undefined FUN_140d25c50(void)

void FUN_140d25c50(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong local_18 [2];
  
  local_18[1] = 0xe;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"local_user_id",0x1c);
  (**(code **)*param_3)(param_3,local_18,*param_1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"local_player_count",0x26);
  (**(code **)(*param_3 + 0x18))(param_3,local_18,*(undefined4 *)param_1[1]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)param_1[2] != 0) {
    local_18[0] = 0;
    local_18[1] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"is_provisional",0x1e);
    lVar1 = *param_3;
    uVar2 = FUN_142b54800(*(undefined8 *)param_1[2]);
    (**(code **)(lVar1 + 0x40))(param_3,local_18,uVar2);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140d25d90 FUN_140d25d90 body=1121 status=ok
// SIG undefined FUN_140d25d90(void)

void FUN_140d25d90(undefined8 *param_1,longlong param_2,int param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [32];
  longlong local_88;
  longlong local_78;
  longlong local_68;
  longlong local_58;
  
  plVar9 = (longlong *)*param_1;
  lVar8 = 0;
  lVar5 = lVar8;
  if (*plVar9 != 0) {
    lVar4 = FUN_142f71d80();
    lVar6 = *plVar9;
    for (lVar7 = lVar6; (lVar5 = lVar8, lVar7 != 0 && (lVar5 = lVar6, lVar7 != lVar4));
        lVar7 = *(longlong *)(lVar7 + 0x30)) {
    }
  }
  lVar6 = lVar8;
  if (param_2 != 0) {
    lVar4 = FUN_142f71d80();
    lVar7 = param_2;
    do {
      lVar6 = param_2;
      if (lVar7 == lVar4) break;
      lVar7 = *(longlong *)(lVar7 + 0x30);
      lVar6 = lVar8;
    } while (lVar7 != 0);
  }
  if ((lVar5 == lVar6) && (*(int *)(*(longlong *)(param_1[1] + 8) + (longlong)param_3 * 4) != 0)) {
    DAT_1468703d0 = FUN_140d3b710(param_1[2]);
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    FUN_143013fe0(&local_c8,param_4,0x32,DAT_1468703d0,0,0,0,0);
    iVar3 = (int)local_c0;
    uVar13 = (ulonglong)(int)local_c0;
    DAT_1468703d0 = 0;
    if ((0 < (int)local_c0) && (*local_c8 != 0)) {
      if ((int)local_c0 < 1) {
        iVar14 = 1 - (int)local_c0;
        iVar3 = (int)local_c0 + iVar14;
        local_c0 = CONCAT44(local_c0._4_4_,iVar3);
        if (local_c0._4_4_ < iVar3) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(&local_c8);
        }
        plVar9 = local_c8 + uVar13 * 0xc;
        if (iVar14 != 0) {
          lVar5 = (longlong)plVar9 + 0x44;
          do {
            *(undefined8 *)(lVar5 + -0x24) = 0;
            *(undefined8 *)(lVar5 + -0x1c) = 0;
            *(undefined1 *)(lVar5 + -0x14) = 0;
            *(undefined8 *)(lVar5 + -0xc) = 0;
            *(undefined8 *)(lVar5 + -4) = 0;
            *(undefined8 *)(lVar5 + 4) = 0;
            *(undefined8 *)(lVar5 + 0xc) = 0;
            _guard_xfg_dispatch_icall_nop(plVar9,0,0x60);
            plVar9 = plVar9 + 0xc;
            *(undefined2 *)(lVar5 + 0x14) = 1;
            lVar5 = lVar5 + 0x60;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
      }
      else if ((1 < (int)local_c0) && (iVar14 = (int)local_c0 + -1, iVar14 != 0)) {
        plVar9 = local_c8 + 0x13;
        iVar10 = iVar14;
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
        iVar10 = ((int)local_c0 - iVar14) + -1;
        if (iVar10 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_c8 + 0xc,local_c8 + (longlong)iVar3 * 0xc,(longlong)iVar10 * 0x60);
        }
        local_c0 = CONCAT44(local_c0._4_4_,(int)local_c0 - iVar14);
        TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(&local_c8);
      }
      local_b8 = (longlong *)0x0;
      local_b0 = 0;
      FUN_143018ff0(&local_c8,*(undefined8 *)param_1[3],&local_b8,0);
      plVar9 = local_b8 + (int)local_b0;
      for (plVar11 = local_b8; plVar11 != plVar9; plVar11 = plVar11 + 1) {
        plVar1 = (longlong *)*plVar11;
        if (plVar1 != (longlong *)0x0) {
          FUN_14301f8f0();
          lVar5 = (**(code **)(*plVar1 + 0x628))(plVar1);
          if (lVar5 == 0) {
LAB_140d26040:
            lVar5 = lVar8;
          }
          else {
            lVar6 = FUN_14142bde0();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_140d26040;
          }
          if (lVar5 != 0) {
            lVar6 = param_1[2];
            iVar3 = *(int *)(lVar6 + 0xd0);
            iVar14 = iVar3 + 1;
            *(int *)(lVar6 + 0xd0) = iVar14;
            if (*(int *)(lVar6 + 0xd4) < iVar14) {
              TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(lVar6 + 200);
            }
            lVar6 = (longlong)iVar3 * 0xb0 + *(longlong *)(lVar6 + 200);
            FUN_142fde660(lVar6);
            *(undefined8 *)(lVar6 + 0x80) = 0;
            *(undefined8 *)(lVar6 + 0xa0) = 0;
            *(undefined4 *)(lVar6 + 0xac) = 0;
            *(undefined4 *)(lVar6 + 0x88) = 0xffffffff;
            *(undefined4 *)(lVar6 + 0x8c) = 0;
            *(undefined8 *)(lVar6 + 0x98) = 0;
            *(undefined4 *)(lVar6 + 0xa8) = 0;
            if (0x7fffffff < *(uint *)(lVar6 + 0xac)) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar6 + 0xa0);
            }
            if (*(undefined2 **)(lVar6 + 0xa0) != (undefined2 *)0x0) {
              **(undefined2 **)(lVar6 + 0xa0) = 0;
            }
            *(undefined4 *)(lVar6 + 0x90) = 0;
            *(undefined8 *)(lVar6 + 0x80) = 0;
            _guard_xfg_dispatch_icall_nop(local_a8,0,0x68);
            FUN_142ff3000(lVar5,local_a8);
            FUN_143001d10(lVar6,local_a8);
            if (local_58 != 0) {
              FMemory::Free();
            }
            if (local_68 != 0) {
              FMemory::Free();
            }
            if (local_78 != 0) {
              FMemory::Free();
            }
            if (local_88 != 0) {
              FMemory::Free();
            }
          }
          FUN_142227350(plVar1,0,1);
        }
      }
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free(local_b8);
      }
      uVar13 = local_c0 & 0xffffffff;
    }
    if ((int)uVar13 != 0) {
      plVar9 = local_c8 + 7;
      do {
        if (plVar9[2] != 0) {
          FMemory::Free();
        }
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar9 + -3);
        plVar9 = plVar9 + 0xc;
        uVar12 = (int)uVar13 - 1;
        uVar13 = (ulonglong)uVar12;
      } while (uVar12 != 0);
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140d26200 FUN_140d26200 body=255 status=ok
// SIG undefined FUN_140d26200(void)

void FUN_140d26200(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0xf0) != 0) {
      FMemory::Free();
    }
    TArray<FCell,FDefaultAllocator>::~TArray<FCell,FDefaultAllocator>(param_2 + 0xe0);
    if (*(longlong *)(param_2 + 0xb8) != 0) {
      FMemory::Free();
    }
    FUN_140ce1930(param_2 + 0xa8);
    TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
              (param_2 + 0x98);
    FUN_140ce1840(param_2 + 0x88);
    if (*(longlong *)(param_2 + 0x70) != 0) {
      FMemory::Free();
    }
    FUN_140ce1840(param_2 + 0x60);
    TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
              (param_2 + 0x50);
    iVar2 = *(int *)(param_2 + 0x48);
    plVar1 = *(longlong **)(param_2 + 0x40);
    if (iVar2 != 0) {
      do {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        plVar1 = plVar1 + 2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      plVar1 = *(longlong **)(param_2 + 0x40);
    }
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free(plVar1);
    }
    FUN_140ce1a60(param_2 + 0x30);
    FUN_140ce18a0(param_2 + 0x20);
    FUN_140ce18a0(param_2 + 0x10);
    FUN_140ce1840(param_2);
    FMemory::operator_delete(param_2,0x100);
  }
  return;
}



// FUNCTION 140d26330 FUN_140d26330 body=97 status=ok
// SIG undefined FUN_140d26330(void)

undefined8 * FUN_140d26330(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144510a60;
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



// FUNCTION 140d263a0 FUN_140d263a0 body=73 status=ok
// SIG undefined FUN_140d263a0(void)

longlong FUN_140d263a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x560) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x578);
  }
  return param_1;
}



// FUNCTION 140d263f0 FUN_140d263f0 body=52 status=ok
// SIG undefined FUN_140d263f0(void)

undefined8 FUN_140d263f0(undefined8 param_1,ulonglong param_2)

{
  FUN_140d23400();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140d26430 FUN_140d26430 body=52 status=ok
// SIG undefined FUN_140d26430(void)

undefined8 FUN_140d26430(undefined8 param_1,ulonglong param_2)

{
  FUN_140d23560();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 140d26470 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FMaterialResource::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14450fb40;
  FTickerObjectBase::~FTickerObjectBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140d264b0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
Chaos::TPBDRigidClusteredParticles<float,3>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_140d23750();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x630);
  }
  return param_1;
}



// FUNCTION 140d264f0 FUN_140d264f0 body=145 status=ok
// SIG undefined FUN_140d264f0(void)

undefined8 * FUN_140d264f0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14450fc20;
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
  FUN_140d23560(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 140d26590 FUN_140d26590 body=79 status=ok
// SIG undefined FUN_140d26590(void)

longlong FUN_140d26590(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x50);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 140d265e0 FUN_140d265e0 body=43 status=ok
// SIG undefined FUN_140d265e0(void)

undefined8 * FUN_140d265e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14450f8a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140d26610 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UMovieScene2DTransformSection::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140d24190();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x550);
  }
  return param_1;
}



// FUNCTION 140d26650 FUN_140d26650 body=52 status=ok
// SIG undefined FUN_140d26650(void)

undefined8 FUN_140d26650(undefined8 param_1,ulonglong param_2)

{
  FUN_140d24110();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c8);
  }
  return param_1;
}



// FUNCTION 140d26690 FUN_140d26690 body=644 status=ok
// SIG undefined FUN_140d26690(void)

undefined8 FUN_140d26690(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  longlong *plVar12;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  plVar4 = (longlong *)FUN_142f71d80();
  plVar6 = param_2;
  while (plVar6 != plVar4) {
    plVar6 = (longlong *)plVar6[6];
    if (plVar6 == (longlong *)0x0) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x140);
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x158) <= iVar1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return 0;
  }
  plVar12 = (longlong *)((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x150));
  plVar4 = (longlong *)FUN_142f71d80();
  plVar6 = param_2;
  do {
    plVar7 = (longlong *)0x0;
    plVar9 = param_2;
    if (plVar6 == plVar4) break;
    plVar6 = (longlong *)plVar6[6];
    plVar9 = plVar7;
  } while (plVar6 != (longlong *)0x0);
  lVar8 = plVar9[0x1f];
  if (lVar8 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar8 = plVar9[0x1f];
    if (lVar8 == 0) {
      return 0;
    }
  }
  lVar5 = FUN_142f71d80();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return 0;
  }
  iVar1 = (int)plVar12[1];
  *(int *)(plVar12 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar12 + 0xc) < iVar1 + 1) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
              (plVar12,iVar1);
  }
  puVar10 = (undefined2 *)((longlong)iVar1 * 0x78 + *plVar12);
  *puVar10 = 4;
  *(undefined1 *)(puVar10 + 1) = 0;
  *(undefined8 *)(puVar10 + 4) = 0;
  *(undefined8 *)(puVar10 + 8) = 0;
  *(undefined1 *)(puVar10 + 0xc) = 0;
  *(undefined8 *)(puVar10 + 0x1c) = 0;
  *(undefined4 *)(puVar10 + 0x22) = 0;
  *(undefined4 *)(puVar10 + 0x10) = 0xffffffff;
  *(undefined4 *)(puVar10 + 0x12) = 0;
  *(undefined8 *)(puVar10 + 0x18) = 0;
  *(undefined4 *)(puVar10 + 0x20) = 0;
  if (0x7fffffff < *(uint *)(puVar10 + 0x22)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar10 + 0x1c,0);
  }
  if (*(undefined2 **)(puVar10 + 0x1c) != (undefined2 *)0x0) {
    **(undefined2 **)(puVar10 + 0x1c) = 0;
  }
  *(undefined4 *)(puVar10 + 0x14) = 0;
  *(undefined8 *)(puVar10 + 0x30) = 0;
  *(undefined8 *)(puVar10 + 0x34) = 0;
  *(undefined4 *)(puVar10 + 0x24) = 0xffffffff;
  *(undefined4 *)(puVar10 + 0x26) = 0;
  *(undefined8 *)(puVar10 + 0x2c) = 0;
  *(undefined4 *)(puVar10 + 0x34) = 0;
  if (0x7fffffff < *(uint *)(puVar10 + 0x36)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar10 + 0x30,0);
  }
  if (*(undefined2 **)(puVar10 + 0x30) != (undefined2 *)0x0) {
    **(undefined2 **)(puVar10 + 0x30) = 0;
  }
  *(undefined4 *)(puVar10 + 0x28) = 0;
  *(undefined4 *)(puVar10 + 0x38) = 0;
  *(undefined1 *)(puVar10 + 0x3a) = 0;
  FUN_140d4cf30(puVar10);
  *(undefined1 *)puVar10 = 1;
  if (*(char *)(lVar8 + 0x172) != '\0') {
    FUN_142f5a990(lVar8);
    FUN_140d4c330(puVar10);
  }
  iVar1 = *(int *)(lVar8 + 0x218);
  iVar2 = *(int *)(puVar10 + 8);
  if (iVar2 < iVar1) {
    *(int *)(puVar10 + 8) = iVar1;
    if (*(int *)(puVar10 + 10) < iVar1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(puVar10 + 4);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(puVar10 + 4) + (longlong)iVar2 * 4),0,
               (longlong)(iVar1 - iVar2) << 2);
  }
  else if ((iVar1 < iVar2) && (iVar2 - iVar1 != 0)) {
    *(int *)(puVar10 + 8) = iVar2 - (iVar2 - iVar1);
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(puVar10 + 4);
  }
  plVar6 = plVar7;
  if (0 < *(int *)(puVar10 + 8)) {
    do {
      uVar11 = (int)plVar6 + 1;
      *(undefined4 *)((longlong)plVar7 + *(longlong *)(puVar10 + 4)) = 0;
      plVar7 = (longlong *)((longlong)plVar7 + 4);
      plVar6 = (longlong *)(ulonglong)uVar11;
    } while ((int)uVar11 < *(int *)(puVar10 + 8));
  }
  FUN_140d4d540(plVar12,param_2);
  return 1;
}



// FUNCTION 140d26920 FUN_140d26920 body=103 status=ok
// SIG undefined FUN_140d26920(void)

undefined8 FUN_140d26920(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[2];
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 1);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 1) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)((longlong)param_1 + 0xc)) goto LAB_140d26965;
  }
  FUN_1439f23d0(param_1,*(int *)((longlong)param_1 + 0xc) + 1);
  piVar4 = (int *)param_1[2];
  iVar2 = *piVar4;
LAB_140d26965:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141543bd0(*param_1);
  *(undefined8 *)(param_1[2] + 8 + (longlong)*(int *)(param_1 + 1) * 8) = uVar3;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  return uVar3;
}



// FUNCTION 140d26990 FUN_140d26990 body=103 status=ok
// SIG undefined FUN_140d26990(void)

undefined8 FUN_140d26990(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[2];
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 1);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 1) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)((longlong)param_1 + 0xc)) goto LAB_140d269d5;
  }
  FUN_1439f23d0(param_1,*(int *)((longlong)param_1 + 0xc) + 1);
  piVar4 = (int *)param_1[2];
  iVar2 = *piVar4;
LAB_140d269d5:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141543ce0(*param_1);
  *(undefined8 *)(param_1[2] + 8 + (longlong)*(int *)(param_1 + 1) * 8) = uVar3;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  return uVar3;
}



// FUNCTION 140d26a00 FUN_140d26a00 body=103 status=ok
// SIG undefined FUN_140d26a00(void)

undefined8 FUN_140d26a00(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[2];
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 1);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 1) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)((longlong)param_1 + 0xc)) goto LAB_140d26a45;
  }
  FUN_1439f23d0(param_1,*(int *)((longlong)param_1 + 0xc) + 1);
  piVar4 = (int *)param_1[2];
  iVar2 = *piVar4;
LAB_140d26a45:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141543d90(*param_1);
  *(undefined8 *)(param_1[2] + 8 + (longlong)*(int *)(param_1 + 1) * 8) = uVar3;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  return uVar3;
}



// FUNCTION 140d26a70 FUN_140d26a70 body=103 status=ok
// SIG undefined FUN_140d26a70(void)

undefined8 FUN_140d26a70(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[2];
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 1);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 1) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)((longlong)param_1 + 0xc)) goto LAB_140d26ab5;
  }
  FUN_1439f23d0(param_1,*(int *)((longlong)param_1 + 0xc) + 1);
  piVar4 = (int *)param_1[2];
  iVar2 = *piVar4;
LAB_140d26ab5:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141543e40(*param_1);
  *(undefined8 *)(param_1[2] + 8 + (longlong)*(int *)(param_1 + 1) * 8) = uVar3;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  return uVar3;
}



// FUNCTION 140d26ae0 FUN_140d26ae0 body=103 status=ok
// SIG undefined FUN_140d26ae0(void)

undefined8 FUN_140d26ae0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[2];
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 1);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 1) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)((longlong)param_1 + 0xc)) goto LAB_140d26b25;
  }
  FUN_1439f23d0(param_1,*(int *)((longlong)param_1 + 0xc) + 1);
  piVar4 = (int *)param_1[2];
  iVar2 = *piVar4;
LAB_140d26b25:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141543ef0(*param_1);
  *(undefined8 *)(param_1[2] + 8 + (longlong)*(int *)(param_1 + 1) * 8) = uVar3;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  return uVar3;
}



// FUNCTION 140d26b50 FUN_140d26b50 body=103 status=ok
// SIG undefined FUN_140d26b50(void)

undefined8 FUN_140d26b50(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[2];
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 1);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 1) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)((longlong)param_1 + 0xc)) goto LAB_140d26b95;
  }
  FUN_1439f23d0(param_1,*(int *)((longlong)param_1 + 0xc) + 1);
  piVar4 = (int *)param_1[2];
  iVar2 = *piVar4;
LAB_140d26b95:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141543fd0(*param_1);
  *(undefined8 *)(param_1[2] + 8 + (longlong)*(int *)(param_1 + 1) * 8) = uVar3;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  return uVar3;
}



// FUNCTION 140d26bc0 FUN_140d26bc0 body=103 status=ok
// SIG undefined FUN_140d26bc0(void)

undefined8 FUN_140d26bc0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[2];
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 1);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 1) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)((longlong)param_1 + 0xc)) goto LAB_140d26c05;
  }
  FUN_1439f23d0(param_1,*(int *)((longlong)param_1 + 0xc) + 1);
  piVar4 = (int *)param_1[2];
  iVar2 = *piVar4;
LAB_140d26c05:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141544080(*param_1);
  *(undefined8 *)(param_1[2] + 8 + (longlong)*(int *)(param_1 + 1) * 8) = uVar3;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  return uVar3;
}



// FUNCTION 140d26c30 FUN_140d26c30 body=103 status=ok
// SIG undefined FUN_140d26c30(void)

undefined8 FUN_140d26c30(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[2];
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 1);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 1) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)((longlong)param_1 + 0xc)) goto LAB_140d26c75;
  }
  FUN_1439f23d0(param_1,*(int *)((longlong)param_1 + 0xc) + 1);
  piVar4 = (int *)param_1[2];
  iVar2 = *piVar4;
LAB_140d26c75:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_1415440f0(*param_1);
  *(undefined8 *)(param_1[2] + 8 + (longlong)*(int *)(param_1 + 1) * 8) = uVar3;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  return uVar3;
}



// FUNCTION 140d26ca0 FUN_140d26ca0 body=103 status=ok
// SIG undefined FUN_140d26ca0(void)

undefined8 FUN_140d26ca0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[2];
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 1);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 1) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)((longlong)param_1 + 0xc)) goto LAB_140d26ce5;
  }
  FUN_1439f23d0(param_1,*(int *)((longlong)param_1 + 0xc) + 1);
  piVar4 = (int *)param_1[2];
  iVar2 = *piVar4;
LAB_140d26ce5:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141544150(*param_1);
  *(undefined8 *)(param_1[2] + 8 + (longlong)*(int *)(param_1 + 1) * 8) = uVar3;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  return uVar3;
}



// FUNCTION 140d26d10 FUN_140d26d10 body=103 status=ok
// SIG undefined FUN_140d26d10(void)

undefined8 FUN_140d26d10(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[2];
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 1);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 1) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)((longlong)param_1 + 0xc)) goto LAB_140d26d55;
  }
  FUN_1439f23d0(param_1,*(int *)((longlong)param_1 + 0xc) + 1);
  piVar4 = (int *)param_1[2];
  iVar2 = *piVar4;
LAB_140d26d55:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141544270(*param_1);
  *(undefined8 *)(param_1[2] + 8 + (longlong)*(int *)(param_1 + 1) * 8) = uVar3;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  return uVar3;
}



// FUNCTION 140d26d80 FUN_140d26d80 body=103 status=ok
// SIG undefined FUN_140d26d80(void)

undefined8 FUN_140d26d80(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[2];
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 1);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 1) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)((longlong)param_1 + 0xc)) goto LAB_140d26dc5;
  }
  FUN_1439f23d0(param_1,*(int *)((longlong)param_1 + 0xc) + 1);
  piVar4 = (int *)param_1[2];
  iVar2 = *piVar4;
LAB_140d26dc5:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_1415443b0(*param_1);
  *(undefined8 *)(param_1[2] + 8 + (longlong)*(int *)(param_1 + 1) * 8) = uVar3;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  return uVar3;
}



// FUNCTION 140d26df0 AddZeroed body=80 status=ok
// SIG undefined AddZeroed(void)

int TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow();
  }
  ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar1 + *param_1),0,(longlong)param_2);
  return iVar1;
}



// FUNCTION 140d26e40 FUN_140d26e40 body=156 status=ok
// SIG undefined FUN_140d26e40(void)

longlong FUN_140d26e40(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x60 + *param_1;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x34) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined4 *)(lVar2 + 0x50) = 0;
  if (0x7fffffff < *(uint *)(lVar2 + 0x54)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar2 + 0x48,0);
  }
  if (*(undefined2 **)(lVar2 + 0x48) != (undefined2 *)0x0) {
    **(undefined2 **)(lVar2 + 0x48) = 0;
  }
  *(undefined4 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  return lVar2;
}



// FUNCTION 140d26ee0 FUN_140d26ee0 body=136 status=ok
// SIG undefined FUN_140d26ee0(void)

longlong FUN_140d26ee0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 8) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0xc) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined4 *)(lVar2 + 0x28) = 0;
  if (0x7fffffff < *(uint *)(lVar2 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar2 + 0x20,0);
  }
  if (*(undefined2 **)(lVar2 + 0x20) != (undefined2 *)0x0) {
    **(undefined2 **)(lVar2 + 0x20) = 0;
  }
  *(undefined4 *)(lVar2 + 0x10) = 0;
  return lVar2;
}



// FUNCTION 140d26f70 FUN_140d26f70 body=69 status=ok
// SIG undefined FUN_140d26f70(void)

void FUN_140d26f70(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar2);
  }
  puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}



// FUNCTION 140d26fc0 AddDefaulted_GetRef body=65 status=ok
// SIG undefined AddDefaulted_GetRef(void)

void TArray<FAsyncLoadingThread2::FQueuedFailedPackageCallback,TSizedDefaultAllocator<32>_>::
     AddDefaulted_GetRef(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}



// FUNCTION 140d27010 FUN_140d27010 body=296 status=ok
// SIG undefined FUN_140d27010(void)

void FUN_140d27010(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_1 + 0x268);
  lVar3 = (longlong)iVar4;
  if ((0 < iVar4) && (*(int *)(param_1 + 0x254) <= iVar4)) {
    lVar5 = *(longlong *)(param_1 + 0x260);
    lVar2 = *(longlong *)(lVar5 + -0x10 + lVar3 * 0x10);
    *(undefined8 *)(lVar5 + -0x10 + lVar3 * 0x10) = 0;
    *(undefined8 *)(lVar5 + -8 + lVar3 * 0x10) = 0;
    iVar4 = *(int *)(param_1 + 0x268);
    lVar5 = (longlong)iVar4;
    lVar3 = *(longlong *)(param_1 + 0x260);
    lVar6 = lVar5 * 0x10 + -0x10;
    iVar7 = iVar4 + -1;
    if (*(longlong *)(lVar6 + lVar3) != 0) {
      FMemory::Free();
      iVar4 = *(int *)(param_1 + 0x268);
      lVar3 = *(longlong *)(param_1 + 0x260);
    }
    iVar7 = (iVar4 - iVar7) + -1;
    if (iVar7 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar6 + lVar3),(void *)(lVar5 * 0x10 + lVar3),(longlong)iVar7 << 4);
      iVar4 = *(int *)(param_1 + 0x268);
    }
    *(int *)(param_1 + 0x268) = iVar4 + -1;
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x260);
  iVar4 = *(int *)(param_1 + 0x268);
  *(int *)(param_1 + 0x268) = iVar4 + 1;
  if (*(int *)(param_1 + 0x26c) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(puVar1,iVar4);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)*puVar1 + 0x10),(void *)*puVar1,(longlong)iVar4 << 4);
  FString::FString(*puVar1,param_2);
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 140d27140 FUN_140d27140 body=1145 status=ok
// SIG undefined FUN_140d27140(void)

void FUN_140d27140(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined **local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  
  if ((*param_2 != 0) || (*param_3 != 0)) {
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x300)) {
      lVar11 = 0;
      iVar13 = 1;
      do {
        if (*param_2 == 0) {
LAB_140d27218:
          if (*param_3 != 0) {
            plVar3 = (longlong *)(param_1 + 0x2f8);
            plVar4 = *(longlong **)(lVar11 + 0x30 + *plVar3);
            if (((plVar4 != (longlong *)0x0) &&
                (cVar6 = (**(code **)(*plVar4 + 0x20))(), cVar6 != '\0')) &&
               (puVar5 = *(undefined8 **)(lVar11 + 0x30 + *plVar3),
               cVar6 = (**(code **)*puVar5)(puVar5,*param_3), cVar6 != '\0')) {
              lVar12 = *plVar3;
              lVar9 = (longlong)iVar10 * 0x58;
              FUN_1404bf980(lVar12 + lVar9 + 0x28);
              FUN_1404bf980(lVar12 + lVar9);
              iVar8 = *(int *)(param_1 + 0x300);
              lVar12 = *plVar3;
              iVar7 = iVar8 - iVar10;
              goto joined_r0x000140d2728e;
            }
          }
        }
        else {
          plVar3 = (longlong *)(param_1 + 0x2f8);
          plVar4 = *(longlong **)(lVar11 + 8 + *plVar3);
          if (((plVar4 == (longlong *)0x0) ||
              (cVar6 = (**(code **)(*plVar4 + 0x20))(), cVar6 == '\0')) ||
             (puVar5 = *(undefined8 **)(lVar11 + 8 + *plVar3),
             cVar6 = (**(code **)*puVar5)(puVar5,*param_2), cVar6 == '\0')) goto LAB_140d27218;
          lVar12 = *plVar3;
          lVar9 = (longlong)iVar10 * 0x58;
          FUN_1404bf980(lVar12 + lVar9 + 0x28);
          FUN_1404bf980(lVar12 + lVar9);
          iVar8 = *(int *)(param_1 + 0x300);
          lVar12 = *plVar3;
          iVar7 = iVar8 - iVar10;
joined_r0x000140d2728e:
          if (iVar7 + -1 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar9 + lVar12),(void *)((longlong)iVar13 * 0x58 + lVar12),
                       (longlong)(iVar7 + -1) * 0x58);
            iVar8 = *(int *)(param_1 + 0x300);
          }
          *(int *)(param_1 + 0x300) = iVar8 + -1;
          TArray<FCloudFileHeader,FDefaultAllocator>::ResizeShrink(param_1 + 0x2f8);
          iVar10 = iVar10 + -1;
          iVar13 = iVar13 + -1;
          lVar11 = lVar11 + -0x58;
        }
        iVar10 = iVar10 + 1;
        iVar13 = iVar13 + 1;
        lVar11 = lVar11 + 0x58;
      } while (iVar10 < *(int *)(param_1 + 0x300));
    }
    plVar3 = (longlong *)(param_1 + 0x2f8);
    iVar10 = *(int *)(param_1 + 0x300);
    *(int *)(param_1 + 0x300) = iVar10 + 1;
    if (*(int *)(param_1 + 0x304) < iVar10 + 1) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(plVar3,iVar10);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar3 + 0x58),(void *)*plVar3,(longlong)iVar10 * 0x58);
    puVar5 = (undefined8 *)*plVar3;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_143f740c8;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[5] = &PTR_FUN_143f740c8;
    puVar5[8] = 0;
    puVar5[9] = 0;
    local_e0 = *param_2;
    local_d8 = (longlong *)param_2[1];
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
    }
    local_e8 = &PTR_FUN_143f740c8;
    local_d0 = 0;
    local_c8 = 0;
    FUN_1404c0940(puVar5,&local_e8);
    if (local_d0 != 0) {
      FMemory::Free();
    }
    plVar4 = local_d8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d8 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    local_b8 = *param_3;
    local_b0 = (longlong *)param_3[1];
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    local_a8 = 0;
    local_c0 = &PTR_FUN_143f740c8;
    local_a0 = 0;
    FUN_1404c0940(puVar5 + 5,&local_c0);
    if (local_a8 != 0) {
      FMemory::Free();
    }
    plVar4 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    *(bool *)(puVar5 + 10) = *param_2 == 0;
    iVar10 = *(int *)(param_1 + 0x300);
    iVar13 = 0x14;
    if (*(int *)(param_1 + 0x2f4) < iVar10) {
      do {
        if ((iVar10 < 1) || (iVar13 == 0)) break;
        lVar11 = (longlong)*(int *)(param_1 + 0x300) * 0x58 + *plVar3;
        local_90 = *(undefined8 *)(lVar11 + -0x50);
        local_88 = *(longlong *)(lVar11 + -0x48);
        if (local_88 != 0) {
          LOCK();
          *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
          UNLOCK();
        }
        local_68 = *(undefined8 *)(lVar11 + -0x28);
        local_60 = *(longlong *)(lVar11 + -0x20);
        local_98 = &PTR_FUN_143f740c8;
        local_80 = 0;
        local_78 = 0;
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          UNLOCK();
        }
        local_48 = *(undefined1 *)(lVar11 + -8);
        iVar10 = *(int *)(param_1 + 0x300);
        local_58 = 0;
        iVar7 = iVar10 + -1;
        local_70 = &PTR_FUN_143f740c8;
        lVar12 = (longlong)iVar7 * 0x58;
        local_50 = 0;
        lVar11 = *plVar3 + lVar12;
        FUN_1404bf980(lVar11 + 0x28);
        FUN_1404bf980(lVar11);
        iVar8 = *(int *)(param_1 + 0x300);
        iVar7 = (iVar8 - iVar7) + -1;
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar3 + lVar12),(void *)((longlong)iVar10 * 0x58 + *plVar3),
                     (longlong)iVar7 * 0x58);
          iVar8 = *(int *)(param_1 + 0x300);
        }
        *(int *)(param_1 + 0x300) = iVar8 + -1;
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeShrink(plVar3);
        FUN_1404bf980(&local_70);
        FUN_1404bf980(&local_98);
        iVar10 = *(int *)(param_1 + 0x300);
        iVar13 = iVar13 + -1;
      } while (*(int *)(param_1 + 0x2f4) < iVar10);
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}



// FUNCTION 140d275c0 AddOnSessionFailureDelegate_Handle body=261 status=ok
// SIG undefined AddOnSessionFailureDelegate_Handle(void)

/* WARNING: Removing unreachable block (ram,0x000140d2768a) */

undefined8 *
IOnlineSession::AddOnSessionFailureDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x188);
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
    iVar2 = *(int *)(param_1 + 400);
    *(int *)(param_1 + 400) = iVar2 + 1;
    if (*(int *)(param_1 + 0x194) < iVar2 + 1) {
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



// FUNCTION 140d276d0 AddOnSessionParticipantsChangeDelegate_Handle body=261 status=ok
// SIG undefined AddOnSessionParticipantsChangeDelegate_Handle(void)

/* WARNING: Removing unreachable block (ram,0x000140d2779a) */

undefined8 *
FOnlineSessionEOS::AddOnSessionParticipantsChangeDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x1a0);
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
    iVar2 = *(int *)(param_1 + 0x1a8);
    *(int *)(param_1 + 0x1a8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x1ac) < iVar2 + 1) {
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



// FUNCTION 140d277e0 FUN_140d277e0 body=1687 status=ok
// SIG undefined FUN_140d277e0(void)

undefined8 FUN_140d277e0(longlong param_1,longlong param_2)

{
  void *pvVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  void **ppvVar7;
  int iVar8;
  void *pvVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  void *local_58;
  int local_50;
  uint local_4c;
  
  pvVar2 = (void *)operator_new(0x100);
  lVar3 = 0;
  if (pvVar2 != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(pvVar2,0,0x100);
    lVar3 = FUN_140d21a80(pvVar2);
  }
  plVar10 = (longlong *)(param_1 + 0x478);
  lVar6 = *plVar10;
  *plVar10 = lVar3;
  FUN_140d26200(plVar10,lVar6);
  plVar12 = (longlong *)*plVar10;
  if (plVar12 != (longlong *)(param_2 + 0x360)) {
    iVar8 = (int)plVar12[1];
    if (iVar8 != 0) {
      plVar4 = (longlong *)(*plVar12 + 0x20);
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 6;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = *(int *)(param_2 + 0x368);
    lVar3 = *(longlong *)(param_2 + 0x360);
    *(int *)(plVar12 + 1) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)plVar12 + 0xc) == 0)) {
      *(undefined4 *)((longlong)plVar12 + 0xc) = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(plVar12,iVar8);
      puVar13 = (undefined4 *)*plVar12;
      if (iVar8 != 0) {
        puVar5 = (undefined8 *)(puVar13 + 10);
        puVar11 = (undefined4 *)(lVar3 + 0xc);
        do {
          *puVar13 = puVar11[-3];
          puVar5[-1] = 0;
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + -4) = 0xffffffff;
          *(undefined4 *)((longlong)puVar5 + -0x1c) = 0;
          puVar5[-2] = 0;
          *(undefined4 *)puVar5 = 0;
          if (0x7fffffff < *(uint *)((longlong)puVar5 + 4)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar5 + -1,0);
          }
          if ((undefined2 *)puVar5[-1] != (undefined2 *)0x0) {
            *(undefined2 *)puVar5[-1] = 0;
          }
          *(undefined4 *)(puVar5 + -3) = 0;
          *(undefined4 *)(puVar5 + -4) = puVar11[-1];
          *(undefined4 *)((longlong)puVar5 + -0x1c) = *puVar11;
          *(undefined4 *)(puVar5 + -3) = puVar11[1];
          local_58 = *(void **)(puVar11 + 3);
          FString::FString(&local_50,puVar11 + 5);
          FSoftObjectPath::operator=(puVar5 + -2);
          puVar13 = puVar13 + 0xc;
          puVar5 = puVar5 + 6;
          puVar11 = puVar11 + 0xc;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  }
  pvVar2 = (void *)0x0;
  FUN_140d24500(*plVar10 + 0x10,param_2 + 0x380);
  FUN_140d24500(*plVar10 + 0x20,param_2 + 0x390);
  FUN_140d24650(*plVar10 + 0x30,param_2 + 0x3a0);
  lVar3 = *plVar10;
  plVar12 = (longlong *)(lVar3 + 0x50);
  if (plVar12 != (longlong *)(param_2 + 0x3e0)) {
    iVar8 = *(int *)(lVar3 + 0x58);
    if (iVar8 != 0) {
      plVar4 = (longlong *)(*plVar12 + 8);
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 3;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = *(int *)(param_2 + 1000);
    puVar13 = *(undefined4 **)(param_2 + 0x3e0);
    *(int *)(lVar3 + 0x58) = iVar8;
    if ((iVar8 == 0) && (*(int *)(lVar3 + 0x5c) == 0)) {
      *(undefined4 *)(lVar3 + 0x5c) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar12,iVar8);
      puVar11 = (undefined4 *)*plVar12;
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar11 = *puVar13;
        FString::FString(puVar11 + 2,puVar13 + 2);
        puVar11 = puVar11 + 6;
        puVar13 = puVar13 + 6;
      }
    }
  }
  lVar3 = *plVar10;
  plVar12 = (longlong *)(lVar3 + 0x60);
  if (plVar12 != (longlong *)(param_2 + 0x3f0)) {
    iVar8 = *(int *)(lVar3 + 0x68);
    if (iVar8 != 0) {
      plVar4 = (longlong *)(*plVar12 + 0x20);
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 6;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = *(int *)(param_2 + 0x3f8);
    lVar6 = *(longlong *)(param_2 + 0x3f0);
    *(int *)(lVar3 + 0x68) = iVar8;
    if ((iVar8 == 0) && (*(int *)(lVar3 + 0x6c) == 0)) {
      *(undefined4 *)(lVar3 + 0x6c) = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(plVar12,iVar8);
      lVar3 = *plVar12;
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        FUN_140a4ee70(lVar3,lVar6);
        lVar3 = lVar3 + 0x30;
        lVar6 = lVar6 + 0x30;
      }
    }
  }
  lVar3 = *plVar10;
  puVar5 = (undefined8 *)(lVar3 + 0x70);
  if (puVar5 != (undefined8 *)(param_2 + 0x400)) {
    iVar8 = *(int *)(param_2 + 0x408);
    pvVar1 = *(void **)(param_2 + 0x400);
    *(int *)(lVar3 + 0x78) = iVar8;
    if ((iVar8 == 0) && (*(int *)(lVar3 + 0x7c) == 0)) {
      *(undefined4 *)(lVar3 + 0x7c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar5,iVar8);
      _guard_xfg_dispatch_icall_nop((void *)*puVar5,pvVar1,(longlong)iVar8 << 4);
    }
  }
  *(undefined8 *)(*plVar10 + 0x80) = *(undefined8 *)(param_2 + 0x430);
  lVar3 = *plVar10;
  plVar12 = (longlong *)(lVar3 + 0x88);
  if (plVar12 != (longlong *)(param_2 + 0x440)) {
    iVar8 = *(int *)(lVar3 + 0x90);
    if (iVar8 != 0) {
      plVar4 = (longlong *)(*plVar12 + 0x20);
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 6;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = *(int *)(param_2 + 0x448);
    lVar6 = *(longlong *)(param_2 + 0x440);
    *(int *)(lVar3 + 0x90) = iVar8;
    if ((iVar8 == 0) && (*(int *)(lVar3 + 0x94) == 0)) {
      *(undefined4 *)(lVar3 + 0x94) = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(plVar12,iVar8);
      lVar3 = *plVar12;
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        FUN_140a4ee70(lVar3,lVar6);
        lVar3 = lVar3 + 0x30;
        lVar6 = lVar6 + 0x30;
      }
    }
  }
  lVar3 = *plVar10;
  plVar12 = (longlong *)(lVar3 + 0x98);
  if (plVar12 != (longlong *)(param_2 + 0x450)) {
    iVar8 = *(int *)(lVar3 + 0xa0);
    if (iVar8 != 0) {
      plVar4 = (longlong *)(*plVar12 + 8);
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 3;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = *(int *)(param_2 + 0x458);
    lVar6 = *(longlong *)(param_2 + 0x450);
    *(int *)(lVar3 + 0xa0) = iVar8;
    if ((iVar8 == 0) && (*(int *)(lVar3 + 0xa4) == 0)) {
      *(undefined4 *)(lVar3 + 0xa4) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar12,iVar8);
      lVar3 = *plVar12;
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        FUN_140a7a070(lVar3,lVar6);
        lVar3 = lVar3 + 0x18;
        lVar6 = lVar6 + 0x18;
      }
    }
  }
  lVar3 = *plVar10;
  plVar12 = (longlong *)(lVar3 + 0xa8);
  if (plVar12 != (longlong *)(param_2 + 0x508)) {
    iVar8 = *(int *)(lVar3 + 0xb0);
    if (iVar8 != 0) {
      plVar4 = (longlong *)(*plVar12 + 0x20);
      do {
        if (plVar4[5] != 0) {
          FMemory::Free();
        }
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        FUN_140ce1840(plVar4 + -2);
        plVar4 = plVar4 + 0xc;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    FUN_140cdd300(plVar12,*(longlong *)(param_2 + 0x508),*(undefined4 *)(param_2 + 0x510),
                  *(undefined4 *)(lVar3 + 0xb4),0);
  }
  local_50 = *(int *)(param_2 + 0x218);
  lVar3 = (longlong)local_50;
  pvVar1 = *(void **)(param_2 + 0x210);
  local_58 = (void *)0x0;
  pvVar9 = pvVar2;
  if (local_50 != 0) {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
    pvVar9 = local_58;
    _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar3 << 2);
    pvVar2 = (void *)(ulonglong)local_4c;
  }
  iVar8 = local_50;
  lVar3 = *plVar10;
  ppvVar7 = (void **)(lVar3 + 0xb8);
  if (ppvVar7 == &local_58) {
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
  }
  else {
    if (*ppvVar7 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar7 = pvVar9;
    *(int *)(lVar3 + 0xc0) = iVar8;
    *(int *)(lVar3 + 0xc4) = (int)pvVar2;
  }
  *(undefined4 *)(*plVar10 + 200) = *(undefined4 *)(param_2 + 0x22c);
  *(undefined1 *)(*plVar10 + 0xcc) = *(undefined1 *)(param_2 + 0x230);
  *(undefined1 *)(*plVar10 + 0xcd) = *(undefined1 *)(param_2 + 0x231);
  *(undefined4 *)(*plVar10 + 0xd0) = *(undefined4 *)(param_2 + 0x460);
  *(undefined4 *)(*plVar10 + 0xd4) = *(undefined4 *)(param_2 + 0x464);
  *(undefined4 *)(*plVar10 + 0xd8) = *(undefined4 *)(param_2 + 0x468);
  lVar3 = *plVar10;
  plVar12 = (longlong *)(lVar3 + 0xe0);
  if (plVar12 != (longlong *)(param_2 + 0x470)) {
    iVar8 = *(int *)(lVar3 + 0xe8);
    if (iVar8 != 0) {
      plVar4 = (longlong *)(*plVar12 + 0x38);
      do {
        if (plVar4[2] != 0) {
          FMemory::Free();
        }
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        if (plVar4[-2] != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 0xb;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    FUN_140d1bf80(plVar12,*(longlong *)(param_2 + 0x470),*(undefined4 *)(param_2 + 0x478),
                  *(undefined4 *)(lVar3 + 0xec),0);
  }
  lVar3 = *plVar10;
  puVar5 = (undefined8 *)(lVar3 + 0xf0);
  if (puVar5 != (undefined8 *)(param_2 + 0x480)) {
    iVar8 = *(int *)(param_2 + 0x488);
    pvVar2 = *(void **)(param_2 + 0x480);
    *(int *)(lVar3 + 0xf8) = iVar8;
    if ((iVar8 == 0) && (*(int *)(lVar3 + 0xfc) == 0)) {
      *(undefined4 *)(lVar3 + 0xfc) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar5,iVar8);
      _guard_xfg_dispatch_icall_nop((void *)*puVar5,pvVar2,(longlong)iVar8 << 3);
    }
  }
  return 1;
}



// FUNCTION 140d27e80 FUN_140d27e80 body=851 status=ok
// SIG undefined FUN_140d27e80(void)

void FUN_140d27e80(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  longlong local_res8;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  uint uStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uVar8 = 0;
  plVar1 = (longlong *)(param_1 + 0x388);
  local_88 = 0;
  uStack_84 = 1;
  iVar2 = *(int *)(param_1 + 0x3b0);
  puStack_38 = (uint *)(param_1 + 0x398);
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar2 != 0) {
    puVar10 = *(uint **)(param_1 + 0x3a8);
    if (*(uint **)(param_1 + 0x3a8) == (uint *)0x0) {
      puVar10 = puStack_38;
    }
    uVar9 = *puVar10;
    local_88 = uVar8;
    uStack_70 = uVar8;
    while (uVar9 == 0) {
      lVar7 = (longlong)(int)local_88;
      uStack_70 = uStack_70 + 0x20;
      uVar9 = local_88 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_88;
      local_88 = uVar9;
      if (bVar3) goto LAB_140d27f5a;
      uVar9 = puVar10[lVar7 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    iVar6 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_78._4_4_ = (uStack_70 - iVar6) + 0x1f;
    if (iVar2 < local_78._4_4_) {
LAB_140d27f5a:
      local_78._4_4_ = iVar2;
    }
  }
  uStack_30 = CONCAT44(local_78._4_4_,0xffffffff);
  auVar4._8_4_ = uStack_70;
  auVar4._0_8_ = uStack_30;
  auVar4._12_4_ = iStack_6c;
  local_20._0_4_ = SUB84(plVar1,0);
  local_20._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_40 = local_88;
  uStack_3c = uStack_84;
  local_50 = 0;
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  uStack_80 = local_88;
  uStack_7c = uStack_84;
  uStack_28 = auVar4._8_8_;
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = uStack_28;
  local_68._12_4_ = local_20._4_4_;
  bVar3 = local_78._4_4_ < *(int *)(param_1 + 0x3b0);
  local_58 = plVar1;
  local_48 = plVar1;
  local_78 = puStack_38;
  local_20 = plVar1;
  if (bVar3) {
    do {
      local_res8 = *(longlong *)((longlong)iStack_6c * 0x38 + 0x28 + *plVar1);
      if (local_res8 != 0) {
        (**(code **)(*param_2 + 0x38))(param_2,&local_res8,0,0);
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      FUN_140d29ca0(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x3d8);
  iVar2 = *(int *)(param_1 + 0x400);
  puStack_38 = (uint *)(param_1 + 1000);
  local_88 = 0;
  uStack_84 = 1;
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar2 != 0) {
    puVar10 = *(uint **)(param_1 + 0x3f8);
    if (*(uint **)(param_1 + 0x3f8) == (uint *)0x0) {
      puVar10 = puStack_38;
    }
    uVar9 = *puVar10;
    uStack_70 = uVar8;
    local_88 = uVar8;
    while (uVar9 == 0) {
      lVar7 = (longlong)(int)local_88;
      uStack_70 = uStack_70 + 0x20;
      uVar8 = local_88 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_88;
      local_88 = uVar8;
      if (bVar3) goto LAB_140d280c6;
      uVar9 = puVar10[lVar7 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    iVar6 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_78._4_4_ = (uStack_70 - iVar6) + 0x1f;
    if (iVar2 < local_78._4_4_) {
LAB_140d280c6:
      local_78._4_4_ = iVar2;
    }
  }
  uStack_30 = CONCAT44(local_78._4_4_,0xffffffff);
  auVar5._8_4_ = uStack_70;
  auVar5._0_8_ = uStack_30;
  auVar5._12_4_ = iStack_6c;
  local_20._0_4_ = SUB84(plVar1,0);
  local_20._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_28 = auVar5._8_8_;
  uStack_40 = local_88;
  uStack_3c = uStack_84;
  local_50 = 0;
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  uStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = uStack_28;
  local_68._12_4_ = local_20._4_4_;
  bVar3 = local_78._4_4_ < *(int *)(param_1 + 0x400);
  local_58 = plVar1;
  local_48 = plVar1;
  local_20 = plVar1;
  local_78 = puStack_38;
  if (bVar3) {
    do {
      local_res8 = *(longlong *)((longlong)iStack_6c * 0x38 + 0x28 + *plVar1);
      if (local_res8 != 0) {
        (**(code **)(*param_2 + 0x38))(param_2,&local_res8,0,0);
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      FUN_140d29ca0(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    (**(code **)(*param_2 + 0x38))(param_2,(longlong *)(param_1 + 0x318),0,0);
  }
  return;
}



// FUNCTION 140d281e0 FUN_140d281e0 body=111 status=ok
// SIG undefined FUN_140d281e0(void)

void FUN_140d281e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1d8);
  *(int *)(param_1 + 0x1d8) = iVar1 + 1;
  if (*(int *)(param_1 + 0x1dc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x1d0,iVar1);
  }
  FString::FString((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x1d0),param_2);
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 140d28250 FUN_140d28250 body=373 status=ok
// SIG undefined FUN_140d28250(void)

void FUN_140d28250(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if (1 < *(int *)(param_3 + 8)) {
    puVar6 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
    FUN_1404cf890(&local_58,*puVar6);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x60))(local_58,&local_48,param_3);
      if (local_48 != 0) {
        local_28 = local_48;
        plStack_20 = plStack_40;
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
          UNLOCK();
        }
        local_30 = &local_28;
        local_38 = param_2;
        FUN_140532370(param_1 + 0x1d0,local_res18,&local_38,0);
        plVar3 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_20 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_20)(plStack_20);
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
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_40 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
    }
    plVar3 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d283d0 AddZeroed body=82 status=ok
// SIG undefined AddZeroed(void)

int TArray<UMaterialInterface_*,FDefaultAllocator>::AddZeroed(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow();
  }
  ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar1 * 8),0,(longlong)param_2 << 3)
  ;
  return iVar1;
}



// FUNCTION 140d28430 FUN_140d28430 body=647 status=ok
// SIG undefined FUN_140d28430(void)

undefined1 FUN_140d28430(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined1 uVar8;
  undefined2 *puVar9;
  char *pcVar10;
  undefined8 *puVar11;
  longlong lVar12;
  char *pcVar13;
  char *pcVar14;
  bool bVar15;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  
  puVar11 = *(undefined8 **)(param_1 + 0x150);
  bVar2 = false;
  uVar8 = 0;
  puVar5 = puVar11 + (longlong)*(int *)(param_1 + 0x158) * 7;
  uVar3 = 0;
  do {
    if (puVar11 == puVar5) {
      return uVar8;
    }
    pcVar14 = (char *)*puVar11;
    pcVar13 = pcVar14 + (longlong)*(int *)(puVar11 + 1) * 0x78;
    if (pcVar14 != pcVar13) {
      pcVar10 = pcVar14 + 0x4c;
      uVar8 = uVar3;
      do {
        FSoftObjectPath::ToString(pcVar10 + -0x1c,&local_98);
        if (*(int *)(param_2 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*param_2;
        }
        puVar7 = &DAT_143f3eda8;
        if (local_90 != 0) {
          puVar7 = local_98;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
        if ((iVar4 == 0) && (*pcVar14 == *(char *)(param_2 + 2))) {
          bVar2 = true;
          FSoftObjectPath::ToString(pcVar10 + 0xc,&local_a8);
          if (*(int *)(param_2 + 4) == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = (undefined2 *)param_2[3];
          }
          puVar7 = &DAT_143f3eda8;
          if (local_a0 != 0) {
            puVar7 = local_a8;
          }
          iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
          if (iVar4 != 0) goto LAB_140d28537;
          bVar15 = true;
        }
        else {
LAB_140d28537:
          bVar15 = false;
        }
        if ((bVar2) && (bVar2 = false, local_a8 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if (local_98 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (bVar15) {
          iVar4 = 0;
          bVar15 = true;
          if (0 < *(int *)(param_2 + 6)) {
            lVar12 = 0;
            do {
              iVar1 = *(int *)(lVar12 + param_2[5]);
              if (((iVar1 < 0) || (*(int *)(pcVar10 + -0x3c) <= iVar1)) ||
                 (*(int *)(*(longlong *)(pcVar10 + -0x44) + (longlong)iVar1 * 4) !=
                  *(int *)(lVar12 + param_2[7]))) {
                bVar15 = false;
                break;
              }
              iVar4 = iVar4 + 1;
              lVar12 = lVar12 + 4;
            } while (iVar4 < *(int *)(param_2 + 6));
          }
          if (bVar15) {
            plVar6 = (longlong *)FString::FString(local_78,param_2 + 9);
            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            local_88 = *plVar6;
            *plVar6 = 0;
            local_80 = (undefined4)plVar6[1];
            local_7c = *(undefined4 *)((longlong)plVar6 + 0xc);
            plVar6[1] = 0;
            FUN_1417978e0(&local_68,&local_88);
            if (*plVar6 != 0) {
              FMemory::Free();
            }
            local_50 = local_68;
            pcVar10[-4] = -1;
            pcVar10[-3] = -1;
            pcVar10[-2] = -1;
            pcVar10[-1] = -1;
            pcVar10[0] = '\0';
            pcVar10[1] = '\0';
            pcVar10[2] = '\0';
            pcVar10[3] = '\0';
            FString::FString(local_48,&local_60);
            FSoftObjectPath::operator=(pcVar10 + 0xc,&local_50);
            pcVar10[4] = '\0';
            pcVar10[5] = '\0';
            pcVar10[6] = '\0';
            pcVar10[7] = '\0';
            if (local_60 != 0) {
              FMemory::Free();
            }
            uVar8 = 1;
          }
        }
        pcVar14 = pcVar14 + 0x78;
        pcVar10 = pcVar10 + 0x78;
        uVar3 = uVar8;
      } while (pcVar14 != pcVar13);
    }
    puVar11 = puVar11 + 7;
  } while( true );
}



// FUNCTION 140d286c0 FUN_140d286c0 body=489 status=ok
// SIG undefined FUN_140d286c0(void)

undefined8 FUN_140d286c0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  char *pcVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  puVar10 = *(undefined8 **)(param_1 + 0x150);
  bVar2 = false;
  uVar12 = 0;
  puVar11 = puVar10 + (longlong)*(int *)(param_1 + 0x158) * 7;
  do {
    if (puVar10 == puVar11) {
      return uVar12;
    }
    pcVar7 = (char *)*puVar10;
    pcVar13 = pcVar7 + (longlong)*(int *)(puVar10 + 1) * 0x78;
    for (; pcVar7 != pcVar13; pcVar7 = pcVar7 + 0x78) {
      FSoftObjectPath::ToString(pcVar7 + 0x30,&local_38);
      if (*(int *)(param_2 + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*param_2;
      }
      puVar5 = &DAT_143f3eda8;
      if (local_30 != 0) {
        puVar5 = local_38;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
      if ((iVar4 == 0) && (*pcVar7 == *(char *)(param_2 + 2))) {
        bVar2 = true;
        FSoftObjectPath::ToString(pcVar7 + 0x58,&local_48);
        if (*(int *)(param_2 + 4) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)param_2[3];
        }
        puVar5 = &DAT_143f3eda8;
        if (local_40 != 0) {
          puVar5 = local_48;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
        if (iVar4 != 0) goto LAB_140d287ba;
        bVar3 = true;
      }
      else {
LAB_140d287ba:
        bVar3 = false;
      }
      if ((bVar2) && (bVar2 = false, local_48 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (bVar3) {
        iVar4 = *(int *)(param_2 + 6);
        iVar9 = 0;
        if (0 < iVar4) {
          lVar8 = 0;
          do {
            iVar1 = *(int *)(lVar8 + param_2[5]);
            if (((iVar1 < 0) || (*(int *)(pcVar7 + 0x10) <= iVar1)) ||
               (*(int *)(*(longlong *)(pcVar7 + 8) + (longlong)iVar1 * 4) !=
                *(int *)(lVar8 + param_2[7]))) goto LAB_140d28869;
            iVar9 = iVar9 + 1;
            lVar8 = lVar8 + 4;
          } while (iVar9 < iVar4);
        }
        iVar9 = 0;
        if (0 < iVar4) {
          lVar8 = 0;
          do {
            iVar9 = iVar9 + 1;
            *(undefined4 *)(*(longlong *)(pcVar7 + 8) + (longlong)*(int *)(lVar8 + param_2[5]) * 4)
                 = *(undefined4 *)(lVar8 + param_2[9]);
            lVar8 = lVar8 + 4;
          } while (iVar9 < *(int *)(param_2 + 6));
        }
        uVar12 = 1;
      }
LAB_140d28869:
    }
    puVar10 = puVar10 + 7;
  } while( true );
}



// FUNCTION 140d288b0 FUN_140d288b0 body=71 status=ok
// SIG undefined FUN_140d288b0(void)

bool FUN_140d288b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if ((*(char *)((longlong)param_1 + 0x3e) != '\0') &&
     (((*(char *)((longlong)param_1 + 0x1b9) != '\0' || (lVar1 == 0)) ||
      (*(int *)(lVar1 + 0x708) == 1)))) {
    return (char)param_1[0x37] == '\0';
  }
  return false;
}



// FUNCTION 140d28900 FUN_140d28900 body=31 status=ok
// SIG undefined FUN_140d28900(void)

void FUN_140d28900(longlong param_1)

{
  FUN_1422235f0();
  FUN_140d48570(param_1 + 0x538);
  return;
}



// FUNCTION 140d28920 FUN_140d28920 body=53 status=ok
// SIG undefined FUN_140d28920(void)

void FUN_140d28920(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_1417502d0();
  puVar1 = *(undefined8 **)(param_1 + 0x538);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x538) = 0;
  }
  return;
}



// FUNCTION 140d28960 FUN_140d28960 body=53 status=ok
// SIG undefined FUN_140d28960(void)

void FUN_140d28960(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_1417502d0();
  puVar1 = *(undefined8 **)(param_1 + 0x430);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x430) = 0;
  }
  return;
}



// FUNCTION 140d289a0 FUN_140d289a0 body=112 status=ok
// SIG undefined FUN_140d289a0(void)

void FUN_140d289a0(longlong param_1)

{
  longlong lVar1;
  
  FUN_142223710();
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (lVar1 != 0) {
    UWindDirectionalSourceComponent::SetRadius(lVar1,0x3f800000);
    SCircularThrobber::SetPeriod(lVar1,*(undefined4 *)(param_1 + 0x488));
    ACircularAreaMarker::SetRadius(lVar1,*(undefined4 *)(param_1 + 0x498));
    SCircularThrobber::SetPeriod(lVar1,*(undefined4 *)(param_1 + 0x49c));
  }
  FUN_140d57ed0(param_1);
  return;
}



// FUNCTION 140d28a10 FUN_140d28a10 body=197 status=ok
// SIG undefined FUN_140d28a10(void)

void FUN_140d28a10(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

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
LAB_140d28a87:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
        if (cVar3 == '\0') goto LAB_140d28a87;
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



// FUNCTION 140d28af0 FUN_140d28af0 body=459 status=ok
// SIG undefined FUN_140d28af0(void)

void FUN_140d28af0(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  
  *(undefined1 *)(param_1 + 0x7c) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    cVar5 = FUN_1404c68e0(*(undefined4 *)(param_1 + 0x78));
    *(bool *)(param_1 + 0x7c) = cVar5 == '\0';
  }
  puVar3 = *(undefined1 **)(param_1 + 0x80);
  iVar2 = *(int *)(param_1 + 0x88);
  if (puVar3 != puVar3 + (longlong)iVar2 * 0x38) {
    puVar9 = puVar3 + 0x30;
    do {
      *puVar9 = 0;
      if (*(longlong *)(puVar9 + -0x18) != 0) {
        lVar6 = FUN_1405ec200();
        if (lVar6 != 0) {
          lVar7 = FUN_142e19540();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) goto LAB_140d28bb3;
        }
        *puVar9 = 1;
      }
LAB_140d28bb3:
      puVar1 = puVar9 + 8;
      puVar9 = puVar9 + 0x38;
    } while (puVar1 != puVar3 + (longlong)iVar2 * 0x38);
  }
  lVar6 = *(longlong *)(param_1 + 0x90);
  lVar7 = (longlong)*(int *)(param_1 + 0x98) * 0x38 + lVar6;
  for (; lVar6 != lVar7; lVar6 = lVar6 + 0x38) {
    *(undefined1 *)(lVar6 + 0x34) = 0;
    if (*(longlong *)(lVar6 + 0x18) != 0) {
      cVar5 = FUN_1404c68e0(*(undefined4 *)(lVar6 + 0x30));
      *(bool *)(lVar6 + 0x34) = cVar5 == '\0';
    }
  }
  plVar10 = *(longlong **)(param_1 + 0x150);
  plVar8 = plVar10 + (longlong)*(int *)(param_1 + 0x158) * 7;
  for (; plVar10 != plVar8; plVar10 = plVar10 + 7) {
    lVar6 = *plVar10;
    lVar7 = (longlong)(int)plVar10[1] * 0x78 + lVar6;
    for (; lVar6 != lVar7; lVar6 = lVar6 + 0x78) {
      *(undefined1 *)(lVar6 + 0x74) = 0;
      if (*(longlong *)(lVar6 + 0x30) != 0) {
        cVar5 = FUN_1404c68e0(*(undefined4 *)(lVar6 + 0x70));
        *(bool *)(lVar6 + 0x74) = cVar5 == '\0';
      }
    }
  }
  lVar6 = *(longlong *)(param_1 + 200);
  lVar7 = (longlong)*(int *)(param_1 + 0xd0) * 0xb0 + lVar6;
  for (; lVar6 != lVar7; lVar6 = lVar6 + 0xb0) {
    thunk_FUN_142fe9ef0(lVar6);
  }
  return;
}



// FUNCTION 140d28cc0 FUN_140d28cc0 body=414 status=ok
// SIG undefined FUN_140d28cc0(void)

void FUN_140d28cc0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  FUN_1404cf890(&local_48,0);
  plVar7 = local_48;
  if (local_48 != (longlong *)0x0) {
    local_38 = param_1[0xc];
    local_30 = (longlong *)param_1[0xd];
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    iVar6 = (**(code **)(*local_48 + 0x78))(local_48,&local_38);
    plVar2 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_30 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      plVar7 = local_48;
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar7 = local_48;
        if (iVar3 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
          plVar7 = local_48;
        }
      }
    }
    if (iVar6 == 0) {
      (**(code **)(*param_1 + 0x40))(param_1,1);
      goto LAB_140d28e10;
    }
    local_28 = param_1[0xc];
    local_20 = (longlong *)param_1[0xd];
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
      plVar7 = local_48;
    }
    cVar5 = (**(code **)(*plVar7 + 0xa8))(plVar7,&local_28);
    plVar7 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_20 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    if (cVar5 != '\0') {
      (**(code **)(*param_1 + 0x40))(param_1,2);
      goto LAB_140d28e10;
    }
  }
  (**(code **)(*param_1 + 0x38))(param_1);
LAB_140d28e10:
  plVar7 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140d28e60 FUN_140d28e60 body=538 status=ok
// SIG undefined FUN_140d28e60(void)

void FUN_140d28e60(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 local_res18 [8];
  longlong *local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_1404cdd50(&local_48,0);
  plVar5 = local_48;
  if (local_48 == (longlong *)0x0) {
    FUN_140d45290(param_1);
    goto LAB_140d28feb;
  }
  local_38 = FUN_140d3f5e0;
  uStack_30 = (longlong *)((ulonglong)uStack_30 & 0xffffffff00000000);
  local_58 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_50 = 3;
  local_58 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = param_1;
    *plVar2 = (longlong)&PTR_GetPoolName_143fc1ab0;
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar2 + 3) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_30._4_4_;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143fc1af8;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x120))(plVar5,local_res18,&local_58);
  *(undefined8 *)(param_1 + 0x278) = *puVar4;
  if (local_50 == 0) {
LAB_140d28f67:
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
  else if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
    goto LAB_140d28f67;
  }
  local_38 = *(code **)(param_1 + 0x268);
  uStack_30 = *(longlong **)(param_1 + 0x270);
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
    plVar5 = local_48;
  }
  (**(code **)(*plVar5 + 0x140))(plVar5,&local_38,param_2);
  plVar5 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_30 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
LAB_140d28feb:
  plVar5 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  iVar6 = *(int *)(param_2 + 1);
  plVar5 = (longlong *)*param_2;
  if (iVar6 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar5 = (longlong *)*param_2;
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  return;
}



// FUNCTION 140d29080 FUN_140d29080 body=149 status=ok
// SIG undefined FUN_140d29080(void)

void FUN_140d29080(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  plVar4 = (longlong *)param_2[1];
  local_30 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = &PTR_FUN_143f740c8;
  local_20 = 0;
  local_18 = 0;
  local_28 = plVar4;
  FUN_140d487a0(param_1 + 0x3d8,&local_38);
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



// FUNCTION 140d29120 FUN_140d29120 body=309 status=ok
// SIG undefined FUN_140d29120(void)

void FUN_140d29120(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined **local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  plVar4 = (longlong *)param_2[1];
  local_60 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_68 = &PTR_FUN_143f740c8;
  local_50 = 0;
  local_48 = 0;
  local_58 = plVar4;
  FUN_140d487a0(param_1 + 0x428,&local_68);
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
  plVar4 = (longlong *)param_2[1];
  local_38 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &PTR_FUN_143f740c8;
  local_28 = 0;
  local_20 = 0;
  local_30 = plVar4;
  FUN_140d48c00(param_1 + 0x478,&local_40);
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
  TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
            (param_1 + 0xf8,param_2,0);
  return;
}



// FUNCTION 140d29260 FUN_140d29260 body=476 status=ok
// SIG undefined FUN_140d29260(void)

void FUN_140d29260(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res18 [8];
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  FUN_142d7e800();
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1404cf890(&local_48,0);
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x128))(local_48,param_1 + 0xe8);
    }
    plVar6 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    puVar5 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
    FUN_1404cf890(&local_38,*puVar5);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x128))(local_38,param_1 + 0xf0);
    }
    plVar6 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
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
  FUN_1404cdd50(&local_28,0);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0xf8))(local_28,param_1 + 0xc0);
  }
  plVar6 = *(longlong **)(param_1 + 0xa0);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x68))(plVar6,param_1 + 0xb8);
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 200))
              (*(longlong **)(param_1 + 0xa0),param_1 + 0xd8);
    plVar6 = (longlong *)FUN_140d3abb0();
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6,param_1 + 0xd0);
    }
  }
  plVar6 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
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
  return;
}



// FUNCTION 140d29440 FUN_140d29440 body=120 status=ok
// SIG undefined FUN_140d29440(void)

void FUN_140d29440(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x260);
  for (iVar2 = *(int *)(param_1 + 0x268); iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  *(undefined4 *)(param_1 + 0x268) = 0;
  if (*(int *)(param_1 + 0x26c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x260,0);
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 140d294c0 ClearOnSessionFailureDelegate_Handle body=190 status=ok
// SIG undefined ClearOnSessionFailureDelegate_Handle(void)

void IOnlineSession::ClearOnSessionFailureDelegate_Handle(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 400)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x188) + lVar5);
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
    } while (iVar3 < *(int *)(param_1 + 400));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x188),0);
  *param_2 = 0;
  return;
}



// FUNCTION 140d29580 ClearOnSessionParticipantsChangeDelegate_Handle body=190 status=ok
// SIG undefined ClearOnSessionParticipantsChangeDelegate_Handle(void)

void FOnlineSessionEOS::ClearOnSessionParticipantsChangeDelegate_Handle
               (longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1a8)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1a0) + lVar5);
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
    } while (iVar3 < *(int *)(param_1 + 0x1a8));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x1a0),0);
  *param_2 = 0;
  return;
}



// FUNCTION 140d29640 FUN_140d29640 body=782 status=ok
// SIG undefined FUN_140d29640(void)

void FUN_140d29640(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_a8 [8];
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  iVar5 = 0;
  FUN_140d3bc80(&local_70,0);
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x38))(local_70,param_1 + 0x1b8);
    (**(code **)(*local_70 + 0x60))(local_70,param_1 + 0x298);
  }
  FUN_1404cf890(&local_80,0);
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 0x88))(local_80,param_1 + 0x1c0);
  }
  Online::GetIdentityInterface(&local_90,0);
  if (local_90 != (longlong *)0x0) {
    (**(code **)(*local_90 + 0x20))(local_90,param_1 + 0x1c8);
  }
  FUN_1404cdd50(&local_a0,0);
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x1b0))(local_a0,param_1 + 0x240);
    (**(code **)(*local_a0 + 0x128))(local_a0,param_1 + 0x278);
  }
  lVar2 = FUN_142b45e90();
  lVar4 = *(longlong *)(param_1 + 0x248);
  lVar2 = *(longlong *)(lVar2 + 0x18);
  if (0 < *(int *)(lVar2 + 0x48)) {
    lVar7 = 0;
    do {
      plVar6 = (longlong *)(*(longlong *)(lVar2 + 0x40) + lVar7);
      if ((((int)plVar6[1] != 0) && (plVar3 = (longlong *)*plVar6, plVar3 != (longlong *)0x0)) &&
         (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_a8), *plVar3 == lVar4)) {
        if (((int)plVar6[1] != 0) && (plVar3 = (longlong *)*plVar6, plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          if (*plVar6 != 0) {
            lVar4 = FMemory::Realloc(*plVar6,0,0);
            *plVar6 = lVar4;
          }
          *(undefined4 *)(plVar6 + 1) = 0;
        }
        break;
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar5 < *(int *)(lVar2 + 0x48));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 0x40,0);
  *(undefined8 *)(param_1 + 0x248) = 0;
  FOnlineSubsystemEOS::GetLeaderboardsInterface(lVar2,&local_60);
  if (local_60 != 0) {
    TBaseMulticastDelegate<void>::Remove(local_60 + 0x18,*(undefined8 *)(param_1 + 0x260));
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_58 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  plVar6 = local_98;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_98 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  plVar6 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_88 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  plVar6 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_78 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  plVar6 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_68 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  return;
}



// FUNCTION 140d29950 FUN_140d29950 body=657 status=ok
// SIG undefined FUN_140d29950(void)

void FUN_140d29950(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined ***local_res8;
  undefined **local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_res8 = (undefined ***)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852c60) {
    _Init_thread_header(&DAT_146852c60);
    if (DAT_146852c60 == -1) {
      FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
      _Init_thread_footer(&DAT_146852c60);
    }
  }
  uVar5 = DAT_146852c58;
  uVar6 = FUN_14168dc80();
  plVar7 = (longlong *)FModuleManager::GetModule(uVar6,uVar5);
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x50))(plVar7,local_res8);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x148))(plVar7,param_2,0);
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    UMovieSceneStringTrack::RemoveSection(*(longlong *)(param_1 + 0x228),param_2);
  }
  local_a0 = *param_2;
  local_98 = (longlong *)param_2[1];
  if (local_98 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_98 + 1) = (int)local_98[1] + 1;
    UNLOCK();
  }
  local_res8 = &local_a8;
  local_90 = 0;
  local_a8 = &PTR_FUN_143f740c8;
  local_88 = 0;
  FUN_1404bb710(param_1 + 0x518,&local_res8);
  local_a8 = &PTR_FUN_143f740c8;
  if (local_90 != 0) {
    FMemory::Free();
  }
  plVar7 = local_98;
  local_a8 = &PTR_FUN_143f73d18;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_98 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_98)(local_98);
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
  plVar7 = (longlong *)param_2[1];
  local_78 = *param_2;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_80 = &PTR_FUN_143f740c8;
  local_68 = 0;
  local_60 = 0;
  local_70 = plVar7;
  FUN_140d487a0(param_1 + 0x528,&local_80);
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
  plVar7 = (longlong *)param_2[1];
  local_50 = *param_2;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_58 = &PTR_FUN_143f740c8;
  local_40 = 0;
  local_38 = 0;
  local_48 = plVar7;
  FUN_140d48a80(param_1 + 0x578,&local_58);
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
  FUN_14055e740(param_1 + 0x1d0,param_2);
  FUN_142d7e830(param_1,param_2,param_3);
  return;
}



// FUNCTION 140d29bf0 FUN_140d29bf0 body=161 status=ok
// SIG undefined FUN_140d29bf0(void)

undefined8 FUN_140d29bf0(longlong param_1,uint param_2,char param_3)

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
      FUN_140d47e60(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140d29ca0 FUN_140d29ca0 body=161 status=ok
// SIG undefined FUN_140d29ca0(void)

undefined8 FUN_140d29ca0(longlong param_1,uint param_2,char param_3)

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
      FUN_140d480d0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140d29d50 FUN_140d29d50 body=161 status=ok
// SIG undefined FUN_140d29d50(void)

undefined8 FUN_140d29d50(longlong param_1,uint param_2,char param_3)

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
      FUN_140d48340(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140d29e00 FUN_140d29e00 body=395 status=ok
// SIG undefined FUN_140d29e00(void)

void FUN_140d29e00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  
  if (*(longlong *)(param_1 + 0x358) != 0) {
    puVar5 = (undefined8 *)FDateTime::Now(local_res8);
    uVar8 = 0;
    uStack_30._0_4_ = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x368) + 0x30) = *puVar5;
    lVar4 = *(longlong *)(param_1 + 0x5c8);
    local_38 = FUN_140d44800;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_28 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      plVar6[1] = param_1;
      *plVar6 = (longlong)&PTR_GetPoolName_143f77ac8;
      *(undefined4 *)(plVar6 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar6 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar6 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_30._4_4_;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar7;
      *plVar6 = (longlong)&PTR_GetPoolName_143f77b10;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar4 + 0x18,1);
      puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res10);
      iVar3 = *(int *)(lVar4 + 0x20);
      uVar8 = *puVar5;
      *(int *)(lVar4 + 0x20) = iVar3 + 1;
      if (*(int *)(lVar4 + 0x24) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 0x18,iVar3);
      }
      puVar5 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar4 + 0x18));
      *puVar5 = plVar6;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
    *(undefined8 *)(param_1 + 0x388) = uVar8;
    local_38 = *(code **)(param_1 + 0x358);
    uStack_30 = *(longlong **)(param_1 + 0x360);
    if (uStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
      UNLOCK();
    }
    FUN_140e969e0(*(undefined8 *)(param_1 + 0x5c8),&local_38,param_1 + 0x370,
                  *(undefined8 *)(param_1 + 0x368));
    plVar6 = uStack_30;
    if (uStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*uStack_30)(uStack_30);
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
  }
  return;
}



// FUNCTION 140d29f90 FUN_140d29f90 body=303 status=ok
// SIG undefined FUN_140d29f90(void)

longlong FUN_140d29f90(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  bool bVar10;
  uint *local_res8;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  
  lVar8 = 0;
  puVar3 = *(uint **)(*(longlong *)(param_1 + 0x20) + param_2 * 8);
  do {
    if (puVar3 == (uint *)0x0) {
      return lVar8;
    }
    puVar4 = *(undefined8 **)(param_3 + 8);
    bVar10 = true;
    puVar9 = puVar4;
    if (*(char *)((longlong)puVar4[1] + 0x19) == '\0') {
      puVar6 = (undefined8 *)puVar4[1];
      do {
        puVar9 = puVar6;
        bVar10 = *puVar3 < *(uint *)puVar9[4];
        if (bVar10) {
          puVar6 = (undefined8 *)*puVar9;
        }
        else {
          puVar6 = (undefined8 *)puVar9[2];
        }
      } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
    }
    puVar6 = puVar9;
    if (bVar10 == false) {
LAB_140d2a06e:
      if (*(uint *)puVar6[4] < *puVar3) {
        puVar7 = local_res20;
        goto LAB_140d2a081;
      }
    }
    else {
      if (puVar9 != (undefined8 *)*puVar4) {
        if (*(char *)((longlong)puVar9 + 0x19) == '\0') {
          puVar6 = (undefined8 *)*puVar9;
          if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
            cVar2 = *(char *)((longlong)puVar6[2] + 0x19);
            puVar4 = (undefined8 *)puVar6[2];
            while (cVar2 == '\0') {
              cVar2 = *(char *)((longlong)puVar4[2] + 0x19);
              puVar6 = puVar4;
              puVar4 = (undefined8 *)puVar4[2];
            }
          }
          else {
            cVar2 = *(char *)((longlong)puVar9[1] + 0x19);
            puVar5 = (undefined8 *)puVar9[1];
            puVar4 = puVar9;
            while ((puVar6 = puVar5, cVar2 == '\0' && (puVar4 == (undefined8 *)*puVar6))) {
              cVar2 = *(char *)((longlong)puVar6[1] + 0x19);
              puVar5 = (undefined8 *)puVar6[1];
              puVar4 = puVar6;
            }
            if (*(char *)((longlong)puVar4 + 0x19) != '\0') {
              puVar6 = puVar4;
            }
          }
        }
        else {
          puVar6 = (undefined8 *)puVar9[2];
        }
        goto LAB_140d2a06e;
      }
      bVar10 = true;
      puVar7 = local_res10;
LAB_140d2a081:
      local_res8 = puVar3;
      FUN_140d1e250(param_3,puVar7,bVar10,puVar9,&local_res8);
    }
    puVar1 = puVar3 + 4;
    lVar8 = lVar8 + 1;
    puVar3 = *(uint **)puVar1;
    puVar1[0] = 0;
    puVar1[1] = 0;
  } while( true );
}



// FUNCTION 140d2a0c0 FUN_140d2a0c0 body=374 status=ok
// SIG undefined FUN_140d2a0c0(void)

longlong FUN_140d2a0c0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  
  lVar10 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + param_2 * 8);
  do {
    if (lVar2 == 0) {
      return lVar10;
    }
    puVar3 = *(undefined8 **)(param_3 + 8);
    cVar5 = '\x01';
    cVar6 = *(char *)((longlong)puVar3[1] + 0x19);
    puVar4 = puVar3;
    puVar7 = (undefined8 *)puVar3[1];
    local_res8 = lVar2;
    while (cVar6 == '\0') {
      cVar5 = FUN_140d1b780(lVar2,puVar7[4]);
      if (cVar5 == '\0') {
        puVar9 = (undefined8 *)puVar7[2];
      }
      else {
        puVar9 = (undefined8 *)*puVar7;
      }
      puVar4 = puVar7;
      puVar7 = puVar9;
      cVar6 = *(char *)((longlong)puVar9 + 0x19);
    }
    puVar7 = puVar4;
    if (cVar5 == '\0') {
LAB_140d2a1bd:
      cVar6 = FUN_140d1b780(puVar7[4],lVar2);
      if (cVar6 != '\0') {
        puVar8 = local_res20;
        goto LAB_140d2a1d9;
      }
    }
    else {
      if (puVar4 != (undefined8 *)*puVar3) {
        if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
          puVar7 = (undefined8 *)*puVar4;
          if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
            cVar6 = *(char *)((longlong)puVar7[2] + 0x19);
            puVar3 = (undefined8 *)puVar7[2];
            while (cVar6 == '\0') {
              cVar6 = *(char *)((longlong)puVar3[2] + 0x19);
              puVar7 = puVar3;
              puVar3 = (undefined8 *)puVar3[2];
            }
          }
          else {
            cVar6 = *(char *)((longlong)puVar4[1] + 0x19);
            puVar9 = (undefined8 *)puVar4[1];
            puVar3 = puVar4;
            while ((puVar7 = puVar9, cVar6 == '\0' && (puVar3 == (undefined8 *)*puVar7))) {
              cVar6 = *(char *)((longlong)puVar7[1] + 0x19);
              puVar9 = (undefined8 *)puVar7[1];
              puVar3 = puVar7;
            }
            if (*(char *)((longlong)puVar3 + 0x19) != '\0') {
              puVar7 = puVar3;
            }
          }
        }
        else {
          puVar7 = (undefined8 *)puVar4[2];
        }
        goto LAB_140d2a1bd;
      }
      cVar5 = '\x01';
      puVar8 = local_res10;
LAB_140d2a1d9:
      FUN_140d1e250(param_3,puVar8,cVar5,puVar4,&local_res8);
    }
    plVar1 = (longlong *)(lVar2 + 0x28);
    lVar10 = lVar10 + 1;
    lVar2 = *plVar1;
    *plVar1 = 0;
  } while( true );
}



// FUNCTION 140d2a240 FUN_140d2a240 body=58 status=ok
// SIG undefined FUN_140d2a240(void)

void FUN_140d2a240(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144510c40;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144510c88;
  }
  return;
}



// FUNCTION 140d2a280 FUN_140d2a280 body=66 status=ok
// SIG undefined FUN_140d2a280(void)

void FUN_140d2a280(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144510bb0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144510bf8;
  }
  return;
}



// FUNCTION 140d2a2d0 FUN_140d2a2d0 body=66 status=ok
// SIG undefined FUN_140d2a2d0(void)

void FUN_140d2a2d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144510b20;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144510b68;
  }
  return;
}



// FUNCTION 140d2a320 FUN_140d2a320 body=74 status=ok
// SIG undefined FUN_140d2a320(void)

void FUN_140d2a320(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144510a80;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_144510ac8;
  }
  return;
}



// FUNCTION 140d2a370 FUN_140d2a370 body=74 status=ok
// SIG undefined FUN_140d2a370(void)

void FUN_140d2a370(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144510cd0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_144510d18;
  }
  return;
}



// FUNCTION 140d2a3c0 FUN_140d2a3c0 body=741 status=ok
// SIG undefined FUN_140d2a3c0(void)

void FUN_140d2a3c0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 local_res10 [8];
  longlong *local_68;
  int local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x47);
  if (cVar5 == '\0') {
LAB_140d2a452:
    uVar6 = GetTransientPackage();
    FUN_1417846f0(uVar6,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar9 = ANavVolume::GetPrivateStaticClass();
    uVar6 = FUN_1417985e0(uVar9,uVar6,0,0,0,0,0,0,0);
  }
  else {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x47);
    lVar7 = UGameInstance::GetFirstGamePlayer(uVar6);
    if ((lVar7 == 0) || (lVar7 = *(longlong *)(lVar7 + 0x30), lVar7 == 0)) goto LAB_140d2a452;
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
    if (!bVar4) goto LAB_140d2a452;
    uVar6 = FUN_140cfc8e0(lVar7);
  }
  plVar10 = (longlong *)param_1[0x57];
  local_38 = param_1[0x56];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_30 = plVar10;
  FUN_140d4c4a0(param_1,&local_38,uVar6);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  local_58 = param_1[0x56];
  local_50 = (longlong *)param_1[0x57];
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  uVar6 = FUN_140d3ac60(param_1);
  FUN_140d4c580(param_1,&local_58,uVar6);
  plVar10 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  uStack_20 = 0;
  local_68 = (longlong *)0x0;
  local_28 = FUN_140d44660;
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  local_60 = 3;
  local_68 = plVar10;
  if (plVar10 != (longlong *)0x0) {
    plVar10[1] = (longlong)param_1;
    *plVar10 = (longlong)&PTR_GetPoolName_143fc1ab0;
    *(undefined4 *)(plVar10 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar10 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar10 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_1c;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar10[5] = lVar7;
    *plVar10 = (longlong)&PTR_GetPoolName_143fc1af8;
  }
  plVar10 = (longlong *)(**(code **)(*param_1 + 0xe0))(param_1,local_res10,&local_68);
  param_1[0x5b] = *plVar10;
  if (local_60 != 0) {
    if (local_68 == (longlong *)0x0) goto LAB_140d2a630;
    (**(code **)(*local_68 + 0x28))(local_68,0);
    if (local_68 != (longlong *)0x0) {
      local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
    }
    local_60 = 0;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
LAB_140d2a630:
  local_48 = param_1[0x56];
  local_40 = (longlong *)param_1[0x57];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  FUN_140d589a0(param_1,&local_48);
  plVar10 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 140d2a6b0 FUN_140d2a6b0 body=74 status=ok
// SIG undefined FUN_140d2a6b0(void)

void FUN_140d2a6b0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = operator_new(0x20);
  if (lVar1 != 0) {
    uVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            basic_string<char,std::char_traits<char>,std::allocator<char>_>(lVar1,param_2);
    *param_1 = uVar2;
    return;
  }
  *param_1 = 0;
  return;
}



// FUNCTION 140d2a700 FUN_140d2a700 body=408 status=ok
// SIG undefined FUN_140d2a700(void)

undefined8 * FUN_140d2a700(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  puVar4 = (undefined8 *)operator_new(0xf8);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FUN_142d79c70(puVar4);
    puVar4[0x14] = param_1;
    *puVar4 = &PTR_FUN_14450fc20;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1e] = 0;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar7 = (longlong *)0x0;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)puVar4;
    plVar7 = plVar5;
  }
  *param_2 = puVar4;
  param_2[1] = plVar7;
  plVar5 = puVar4 + 10;
  if (puVar4 == (undefined8 *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
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
    *plVar5 = (longlong)puVar4;
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
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar7 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
  }
  return param_2;
}



// FUNCTION 140d2a8a0 FUN_140d2a8a0 body=515 status=ok
// SIG undefined FUN_140d2a8a0(void)

void FUN_140d2a8a0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  
  plVar5 = param_1 + 0x72;
  local_38 = (code *)*param_2;
  if (*plVar5 == 0) {
    uStack_30 = (longlong *)param_2[1];
    if (uStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
      UNLOCK();
    }
    lVar6 = 0;
    if (plVar5 != &local_38) {
      *plVar5 = (longlong)local_38;
      local_38 = (code *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x73,&uStack_30);
    }
    plVar5 = uStack_30;
    if (uStack_30 != (longlong *)0x0) {
      LOCK();
      plVar7 = uStack_30 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*uStack_30)(uStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*uStack_30 + 8))(uStack_30,1);
        }
      }
    }
    FString::operator=(param_1 + 0x74,param_3);
    lVar2 = param_1[0xb9];
    local_38 = FUN_140d3fb50;
    uStack_30 = (longlong *)((ulonglong)uStack_30 & 0xffffffff00000000);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      plVar5[1] = (longlong)param_1;
      *plVar5 = (longlong)&PTR_GetPoolName_143f77ac8;
      *(undefined4 *)(plVar5 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar5 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_30._4_4_;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar6;
      *plVar5 = (longlong)&PTR_GetPoolName_143f77b10;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 0x48,1);
      plVar7 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
      iVar4 = *(int *)(lVar2 + 0x50);
      lVar6 = *plVar7;
      *(int *)(lVar2 + 0x50) = iVar4 + 1;
      if (*(int *)(lVar2 + 0x54) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x48,iVar4);
      }
      puVar8 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar2 + 0x48));
      *puVar8 = plVar5;
      *(undefined4 *)(puVar8 + 1) = 3;
    }
    param_1[0x76] = lVar6;
    FUN_140e78a00(param_1[0xb9],param_2,param_3);
    return;
  }
  cVar3 = (*(code *)**(undefined8 **)local_38)(local_38);
  if (cVar3 != '\0') {
    puVar9 = &DAT_143f3eda8;
    if (*(int *)(param_3 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*param_3;
    }
    if ((int)param_1[0x75] != 0) {
      puVar9 = (undefined2 *)param_1[0x74];
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
    if (iVar4 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140d2a91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,param_2,param_3,0);
  return;
}



// FUNCTION 140d2aab0 FUN_140d2aab0 body=12 status=ok
// SIG undefined FUN_140d2aab0(void)

void FUN_140d2aab0(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_AsObject_143f60588;
  return;
}



// FUNCTION 140d2aad0 FUN_140d2aad0 body=81 status=ok
// SIG undefined FUN_140d2aad0(void)

void FUN_140d2aad0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x28) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 8) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0x40);
    return;
  }
  return;
}



// FUNCTION 140d2ab30 FUN_140d2ab30 body=137 status=ok
// SIG undefined FUN_140d2ab30(void)

void FUN_140d2ab30(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    FUN_140d22a60(lVar3 + 0x78);
    *(undefined4 *)(lVar3 + 0x70) = 0;
    if (*(longlong *)(lVar3 + 0x68) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar3 + 0x28);
    TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(lVar3 + 0x10);
    plVar4 = *(longlong **)(lVar3 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    FMemory::operator_delete(lVar3,0x90);
    return;
  }
  return;
}



// FUNCTION 140d2abc0 FUN_140d2abc0 body=708 status=ok
// SIG undefined FUN_140d2abc0(void)

void FUN_140d2abc0(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  short *psVar10;
  longlong *local_70;
  int local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  FUN_1404cf890(&local_40,0);
  Online::GetIdentityInterface(&local_50,0);
  lVar9 = -1;
  if ((((local_40 != (longlong *)0x0) && (local_50 != (longlong *)0x0)) &&
      (iVar5 = (**(code **)(*local_40 + 0x78))(local_40,param_2), iVar5 == 2)) &&
     (cVar4 = (**(code **)(*local_50 + 0x10))(local_50), cVar4 != '\0')) {
    lVar6 = FUN_142b45e90();
    uVar3 = *(undefined8 *)(lVar6 + 0x18);
    cVar4 = FUN_142b54910(uVar3,param_2);
    if ((cVar4 == '\0') &&
       (cVar4 = APlayerCameraManager::ShouldTickIfViewportsOnly(uVar3), cVar4 != '\0')) {
      iVar5 = (**(code **)(*local_50 + 0x40))(local_50);
      uStack_58 = uStack_58 & 0xffffffff00000000;
      local_70 = (longlong *)0x0;
      local_60 = FUN_140d4a710;
      plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
      local_68 = 3;
      local_70 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        plVar7[1] = (longlong)param_1;
        *plVar7 = (longlong)&PTR_GetPoolName_143fc2050;
        *(undefined4 *)(plVar7 + 2) = (undefined4)local_60;
        *(undefined4 *)((longlong)plVar7 + 0x14) = local_60._4_4_;
        *(undefined4 *)(plVar7 + 3) = (undefined4)uStack_58;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_58._4_4_;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar6;
        *plVar7 = (longlong)&PTR_GetPoolName_143fc2098;
      }
      if (iVar5 == 0) {
        psVar10 = &DAT_14450f870;
      }
      else if (iVar5 == 1) {
        psVar10 = &DAT_14450f878;
      }
      else if (iVar5 == 2) {
        psVar10 = &DAT_14450f880;
      }
      else {
        psVar10 = &DAT_143f3eda8;
      }
      uStack_58 = 0;
      local_60 = (code *)0x0;
      if (*psVar10 != 0) {
        do {
          lVar9 = lVar9 + 1;
        } while (psVar10[lVar9] != 0);
        uVar8 = (int)lVar9 + 1;
        uStack_58 = (ulonglong)uVar8;
        if (0 < (int)uVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
        }
        FGenericPlatformString::Memcpy(local_60,psVar10,(longlong)(int)uVar8 * 2);
      }
      FUN_142b6f2d0(uVar3,param_2,&local_60,&local_70,param_3);
      if (local_60 != (code *)0x0) {
        FMemory::Free();
      }
      if (local_68 != 0) {
        if (local_70 == (longlong *)0x0) goto LAB_140d2adde;
        (**(code **)(*local_70 + 0x28))(local_70,0);
        if (local_70 != (longlong *)0x0) {
          local_70 = (longlong *)FMemory::Realloc(local_70,0,0);
        }
        local_68 = 0;
      }
      if (local_70 != (longlong *)0x0) {
        FMemory::Free(local_70);
      }
      goto LAB_140d2adde;
    }
  }
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
LAB_140d2adde:
  plVar7 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  plVar7 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  return;
}



// FUNCTION 140d2ae90 FUN_140d2ae90 body=1606 status=ok
// SIG undefined FUN_140d2ae90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d2ae90(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  void *_Src;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined2 *puVar11;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  undefined8 *local_1d0;
  longlong *local_1c8;
  int local_1c0;
  void *local_1b8;
  int local_1b0;
  int local_1ac;
  void *local_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  int iStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170 [4];
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined2 *local_110;
  int local_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  longlong local_98 [4];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  cVar4 = (**(code **)(*param_1 + 0x200))();
  if (cVar4 == '\0') {
    *(undefined1 *)(param_1 + 0x44) = 0;
    (**(code **)(*param_1 + 0x78))(param_1,0);
  }
  if ((char)param_1[0x44] != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  lVar6 = FUN_142b45e90();
  uVar3 = *(undefined8 *)(lVar6 + 0x18);
  cVar4 = APlayerCameraManager::ShouldTickIfViewportsOnly(uVar3);
  if (cVar4 != '\0') {
    FUN_140d3fee0(param_1,1);
    return;
  }
  local_188 = 0;
  FUN_1404cf890(&local_130,0);
  local_180 = 0;
  Online::GetIdentityInterface(&local_140,0);
  if ((((local_130 == (longlong *)0x0) || (local_140 == (longlong *)0x0)) ||
      (iVar5 = (**(code **)(*local_130 + 0x78))(local_130,param_2), iVar5 != 2)) ||
     ((cVar4 = (**(code **)(*local_130 + 0xa8))(local_130,param_2), cVar4 != '\0' ||
      (cVar4 = (**(code **)(*local_140 + 0x10))(local_140), cVar4 == '\0')))) {
    *(undefined1 *)(param_1 + 0x44) = 0;
    (**(code **)(*param_1 + 0x78))(param_1,0);
    goto LAB_140d2b420;
  }
  local_178 = 0;
  FUN_140d3bc80(&local_150,0);
  if (local_150 == (longlong *)0x0) {
    local_c8 = 0;
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 1;
    local_98[0] = 0;
    local_98[1] = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    puVar8 = (undefined8 *)FUN_142b4b1c0(uVar3,local_e8);
    if (&local_d8 != puVar8) {
      local_d8 = *puVar8;
      *puVar8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_d0,puVar8 + 1);
    }
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_e0 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)local_e0 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
    local_a0 = 1;
    local_c8 = CONCAT44(3,(undefined4)local_c8);
    FUN_142b4b1f0(uVar3,&local_198);
    APlayerState::GetOldPlayerName(uVar3,&local_110);
    puVar11 = &DAT_143f3eda8;
    if (local_108 != 0) {
      puVar11 = local_110;
    }
    pcVar10 = (code *)&DAT_143f3eda8;
    if (iStack_190 != 0) {
      pcVar10 = local_198;
    }
    FString::PrintfImpl(&local_1b8,L"%ls/%ls",pcVar10,puVar11);
    local_1a8 = (void *)0x0;
    local_1a0 = 0;
    uVar9 = FCommandLine::Get();
    cVar4 = FParse::Value(uVar9,L"tmsurl=",&local_1a8,1);
    _Src = local_1a8;
    if (cVar4 != '\0') {
      lVar6 = (longlong)(int)local_1a0;
      local_1b0 = (int)local_1a0;
      if (((int)local_1a0 == 0) && (local_1ac == 0)) {
        local_1ac = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1b8,local_1a0 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(local_1b8,_Src,lVar6 * 2);
      }
    }
    uStack_f8 = 0;
    local_100 = FUN_140d42e20;
    local_170[2] = 0;
    local_170[3] = 0;
    local_170[0] = 0;
    local_170[1] = 0;
    local_120 = 0;
    local_118 = 0;
    puVar8 = (undefined8 *)operator_new(0x30,&local_120);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = param_1;
      *puVar8 = &PTR_GetPoolName_143f77ac8;
      *(undefined4 *)(puVar8 + 2) = (undefined4)local_100;
      *(undefined4 *)((longlong)puVar8 + 0x14) = local_100._4_4_;
      *(undefined4 *)(puVar8 + 3) = uStack_f8;
      *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_f4;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[5] = uVar9;
      *puVar8 = &PTR_GetPoolName_143f77b10;
    }
    local_1d0 = &local_120;
    local_1d8 = local_170 + 2;
    iVar5 = FUN_142b558f0(uVar3,&local_d8,&local_1b8,local_170);
    if (local_170[0] != 0) {
      FMemory::Free();
    }
    if (local_170[2] != 0) {
      FMemory::Free();
    }
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 0x44) = 0;
      (**(code **)(*param_1 + 0x78))(param_1,0);
    }
    if (local_1a8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_1b8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_110 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_198 != (code *)0x0) {
      FMemory::Free();
    }
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_98,0);
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (local_98[0] != 0) {
      FMemory::Free();
    }
    if (local_b0 != 0) {
      FMemory::Free();
    }
    if (local_c0 != 0) {
      FMemory::Free();
    }
    plVar7 = plStack_d0;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_d0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x44) = 1;
    local_198 = FUN_140d42c30;
    iStack_190 = 0;
    local_1c8 = (longlong *)0x0;
    plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_1c0 = 3;
    local_1c8 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = (longlong)param_1;
      *plVar7 = (longlong)&PTR_GetPoolName_143fc2050;
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_198;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_198._4_4_;
      *(int *)(plVar7 + 3) = iStack_190;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_18c;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar6;
      *plVar7 = (longlong)&PTR_GetPoolName_143fc2098;
    }
    plVar7 = (longlong *)(**(code **)(*local_150 + 0x30))(local_150,local_f0,&local_1c8);
    param_1[0x37] = *plVar7;
    if (local_1c0 == 0) {
LAB_140d2b0a3:
      if (local_1c8 != (longlong *)0x0) {
        FMemory::Free(local_1c8);
      }
    }
    else if (local_1c8 != (longlong *)0x0) {
      (**(code **)(*local_1c8 + 0x28))(local_1c8,0);
      if (local_1c8 != (longlong *)0x0) {
        local_1c8 = (longlong *)FMemory::Realloc(local_1c8,0,0);
      }
      local_1c0 = 0;
      goto LAB_140d2b0a3;
    }
    (**(code **)(*local_150 + 0x10))(local_150,param_2);
  }
  plVar7 = local_148;
  if (local_148 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_148 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_148)(local_148);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_148 + 8))(local_148,1);
      }
    }
  }
LAB_140d2b420:
  plVar7 = local_138;
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_138 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_138 + 8))(local_138,1);
      }
    }
  }
  plVar7 = local_128;
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_128 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_128 + 8))(local_128,1);
      }
    }
  }
  return;
}



// FUNCTION 140d2b4e0 FUN_140d2b4e0 body=511 status=ok
// SIG undefined FUN_140d2b4e0(void)

void FUN_140d2b4e0(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong **pplVar8;
  longlong local_38;
  longlong *local_30;
  longlong *local_28 [2];
  longlong *local_18 [2];
  
  lVar4 = FUN_142b45e90();
  FUN_142b46910(*(undefined8 *)(lVar4 + 0x18),&local_38);
  if (local_38 != 0) {
    cVar3 = FUN_142b436c0(local_38,param_2);
    lVar4 = local_38;
    if (cVar3 != '\0') {
      pplVar8 = (longlong **)(local_38 + 0x78);
      plVar5 = (longlong *)FMemory::Realloc(0,0x20);
      local_28[0] = plVar5;
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_GetPoolName_144510c40;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[2] = lVar6;
        *plVar5 = (longlong)&PTR_GetPoolName_144510c88;
      }
      if (local_28 != pplVar8) {
        if (plVar5 == (longlong *)0x0) {
          if ((*(int *)(lVar4 + 0x80) != 0) && (plVar7 = *pplVar8, plVar7 != (longlong *)0x0)) {
            (**(code **)(*plVar7 + 0x28))(plVar7,0);
            if (*pplVar8 != (longlong *)0x0) {
              plVar7 = (longlong *)FMemory::Realloc(*pplVar8,0,0);
              *pplVar8 = plVar7;
            }
            *(undefined4 *)(lVar4 + 0x80) = 0;
          }
        }
        else {
          (**(code **)(*plVar5 + 0x30))(plVar5,pplVar8);
        }
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        local_28[0] = (longlong *)FMemory::Realloc(plVar5,0,0);
        if (local_28[0] != (longlong *)0x0) {
          FMemory::Free(local_28[0]);
        }
      }
      pplVar8 = (longlong **)(local_38 + 0x68);
      plVar5 = (longlong *)FMemory::Realloc(0,0x20);
      local_18[0] = plVar5;
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_GetPoolName_144510c40;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[2] = lVar4;
        *plVar5 = (longlong)&PTR_GetPoolName_144510c88;
      }
      if (local_18 != pplVar8) {
        if (plVar5 == (longlong *)0x0) {
          if ((*(int *)(local_38 + 0x70) != 0) && (plVar7 = *pplVar8, plVar7 != (longlong *)0x0)) {
            (**(code **)(*plVar7 + 0x28))(plVar7,0);
            if (*pplVar8 != (longlong *)0x0) {
              plVar7 = (longlong *)FMemory::Realloc(*pplVar8,0,0);
              *pplVar8 = plVar7;
            }
            *(undefined4 *)(local_38 + 0x70) = 0;
          }
        }
        else {
          (**(code **)(*plVar5 + 0x30))(plVar5,pplVar8);
        }
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        local_18[0] = (longlong *)FMemory::Realloc(plVar5,0,0);
        if (local_18[0] != (longlong *)0x0) {
          FMemory::Free(local_18[0]);
        }
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
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 140d2b6e0 FUN_140d2b6e0 body=132 status=ok
// SIG undefined FUN_140d2b6e0(void)

void FUN_140d2b6e0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 0x38);
    do {
      if (plVar1[5] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      if (plVar1[-6] != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0xf;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 140d2b770 FUN_140d2b770 body=118 status=ok
// SIG undefined FUN_140d2b770(void)

void FUN_140d2b770(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 0x18);
    do {
      if (plVar1[5] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 140d2b7f0 Empty body=104 status=ok
// SIG undefined Empty(void)

void TArray<FMorBubbleProxyInstanceIdSnapshot::FProxyEntry,TSizedDefaultAllocator<32>_>::Empty
               (longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 140d2b860 FUN_140d2b860 body=132 status=ok
// SIG undefined FUN_140d2b860(void)

void FUN_140d2b860(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 0x40);
    do {
      if (plVar1[5] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      if (plVar1[-5] != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0xf;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 140d2b8f0 FUN_140d2b8f0 body=358 status=ok
// SIG undefined FUN_140d2b8f0(void)

void FUN_140d2b8f0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  plVar6 = (longlong *)*param_1;
  for (iVar7 = *(int *)(param_1 + 1); iVar7 != 0; iVar7 = iVar7 + -1) {
    TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
              (plVar6 + 0x2e);
    FUN_14099a9b0(plVar6 + 0x2c);
    FUN_14099aa40(plVar6 + 0x2a);
    TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
              (plVar6 + 0x28);
    FUN_14099a950(plVar6 + 0x26);
    if (plVar6[0x14] != 0) {
      FMemory::Free();
    }
    if (plVar6[0x11] != 0) {
      FMemory::Free();
    }
    plVar4 = (longlong *)plVar6[0xe];
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
    plVar4 = (longlong *)plVar6[0xb];
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
    if (plVar6[3] != 0) {
      FMemory::Free();
    }
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 0x34;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140d4bc30(param_1,param_2);
  }
  return;
}



// FUNCTION 140d2ba60 FUN_140d2ba60 body=17 status=ok
// SIG undefined FUN_140d2ba60(void)

void FUN_140d2ba60(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    iVar1 = 0;
    if (param_2 != 0) {
      uVar2 = FMemory::QuantizeSize((longlong)param_2 * 2,0);
      iVar1 = (int)(uVar2 >> 1);
      if (iVar1 < param_2) {
        iVar1 = 0x7fffffff;
      }
    }
    if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
      *(int *)((longlong)param_1 + 0xc) = iVar1;
      if ((*param_1 != 0) || (iVar1 != 0)) {
        lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 * 2,0);
        *param_1 = lVar3;
      }
    }
    return;
  }
  return;
}



// FUNCTION 140d2ba80 FUN_140d2ba80 body=117 status=ok
// SIG undefined FUN_140d2ba80(void)

void FUN_140d2ba80(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_140d2bcf0();
  cVar1 = FUN_140d29bf0(param_1,param_2);
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



// FUNCTION 140d2bb00 FUN_140d2bb00 body=485 status=ok
// SIG undefined FUN_140d2bb00(void)

void FUN_140d2bb00(longlong *param_1,int param_2)

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
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140d2bbd1;
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
LAB_140d2bbd1:
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
      if (*(longlong *)((longlong)iStack_1c * 0x40 + *param_1 + 0x28) != 0) {
        FMemory::Free();
      }
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
  cVar3 = FUN_140d29d50(param_1,param_2,1);
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



// FUNCTION 140d2bcf0 FUN_140d2bcf0 body=442 status=ok
// SIG undefined FUN_140d2bcf0(void)

void FUN_140d2bcf0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_140d2bdc1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_140d2bdc1:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x40 + *param_1;
      if (*(longlong *)(lVar5 + 0x28) != 0) {
        FMemory::Free();
      }
      FUN_1404bf980(lVar5);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140d2beb0 FUN_140d2beb0 body=401 status=ok
// SIG undefined FUN_140d2beb0(void)

void FUN_140d2beb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  lVar6 = FUN_142b45e90();
  plVar8 = *(longlong **)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(lVar6 + 0x18);
  plVar7 = plVar8 + (longlong)*(int *)(param_1 + 0x20) * 2;
  for (; plVar8 != plVar7; plVar8 = plVar8 + 2) {
    local_38 = *plVar8;
    if (local_38 != 0) {
      local_30 = (longlong *)plVar8[1];
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      FUN_142b4a990(uVar4,&local_18,&local_38);
      plVar5 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_30)(local_30);
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
      if ((local_18 == 0) || (*(char *)(local_18 + 0x18) == '\0')) {
        local_28 = *plVar8;
        local_20 = (longlong *)plVar8[1];
        if (local_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_20 + 1) = (int)local_20[1] + 1;
          UNLOCK();
        }
        FUN_140d2abc0(param_1,&local_28,0);
        plVar5 = local_20;
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_20 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
      plVar5 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 140d2c0a0 FUN_140d2c0a0 body=161 status=ok
// SIG undefined FUN_140d2c0a0(void)

void FUN_140d2c0a0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  pcVar6 = *(code **)(param_1 + 0x10);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  lVar4 = *(longlong *)(param_1 + 8);
  local_38 = *param_3;
  local_30 = param_3[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (*pcVar6)(iStack_18 + lVar4,param_2,&local_38,param_4,param_5,param_6);
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
  return;
}



// FUNCTION 140d2c150 FUN_140d2c150 body=27 status=ok
// SIG undefined FUN_140d2c150(void)

undefined1 FUN_140d2c150(void)

{
  FUN_140d41be0();
  return 1;
}



// FUNCTION 140d2c170 FUN_140d2c170 body=27 status=ok
// SIG undefined FUN_140d2c170(void)

undefined1 FUN_140d2c170(void)

{
  FUN_140d41be0();
  return 1;
}



// FUNCTION 140d2c190 FUN_140d2c190 body=63 status=ok
// SIG undefined FUN_140d2c190(void)

undefined8 FUN_140d2c190(longlong param_1)

{
  (**(code **)(param_1 + 0x10))
            ((longlong)(int)*(undefined8 *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
  return 1;
}



// FUNCTION 140d2c1d0 FUN_140d2c1d0 body=230 status=ok
// SIG undefined FUN_140d2c1d0(void)

undefined8
FUN_140d2c1d0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 local_38;
  longlong *local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  local_38 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar5 = *(longlong *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  pcVar6 = *(code **)(param_1 + 0x10);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_30 = plVar4;
  (*pcVar6)(iStack_18 + lVar5,param_2,&local_38,param_4,param_5,param_6);
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
  return 1;
}



// FUNCTION 140d2c2c0 FUN_140d2c2c0 body=275 status=ok
// SIG undefined FUN_140d2c2c0(void)

void FUN_140d2c2c0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  (**(code **)(*(longlong *)param_1[2] + 0x30))();
  puVar3 = (undefined8 *)param_1[2];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144510a60;
  *(undefined1 *)(param_1 + 3) = 0;
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



// FUNCTION 140d2c3e0 FUN_140d2c3e0 body=1637 status=ok
// SIG undefined FUN_140d2c3e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d2c3e0(longlong param_1,undefined8 param_2,short param_3,undefined4 **param_4)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  char *pcVar15;
  undefined1 auStack_348 [32];
  undefined4 *local_328;
  undefined8 local_320;
  undefined4 *local_318;
  undefined8 uStack_310;
  longlong local_308;
  undefined8 local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  longlong *plStack_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined1 local_2c8 [16];
  longlong local_2b8 [2];
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  undefined1 local_290 [8];
  longlong *local_288;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined1 local_260 [8];
  longlong *local_258;
  undefined1 local_248 [8];
  longlong *local_240;
  undefined1 local_230 [16];
  undefined1 local_220 [24];
  undefined1 local_208 [32];
  undefined4 local_1e8 [4];
  undefined1 local_1d8 [24];
  undefined1 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1a8 [24];
  undefined1 local_190;
  undefined1 local_188 [40];
  char local_160 [216];
  longlong local_88;
  undefined8 local_80;
  undefined2 *local_68;
  wchar_t *local_60;
  undefined8 local_58;
  wchar_t *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  if (param_3 == 0) {
    FString::PrintfImpl(&local_318,&DAT_144509754,0xa00000);
    if (param_4 != &local_318) {
      if (*param_4 != (undefined4 *)0x0) {
        FMemory::Free();
      }
      *param_4 = local_318;
      *(undefined4 *)(param_4 + 1) = (undefined4)uStack_310;
      *(undefined4 *)((longlong)param_4 + 0xc) = uStack_310._4_4_;
      return;
    }
    if (local_318 == (undefined4 *)0x0) {
      return;
    }
    FMemory::Free();
    return;
  }
  if (param_3 == 1) {
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_188,"WindowsNoEditor");
    puVar14 = (undefined8 *)FPaths::ProjectDir(local_2b8);
    if (*(int *)(puVar14 + 1) == 0) {
      local_68 = &DAT_143f3eda8;
    }
    else {
      local_68 = (undefined2 *)*puVar14;
    }
    local_58 = local_80;
    local_60 = L"Build";
    local_328 = (undefined4 *)0x0;
    local_50 = L"SaveIcon.png";
    local_320 = 0;
    FPaths::CombineInternal(&local_328,&local_68,4);
    if (param_4 == &local_328) {
      if (local_328 != (undefined4 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_4 != (undefined4 *)0x0) {
        FMemory::Free();
      }
      *param_4 = local_328;
      *(undefined4 *)(param_4 + 1) = (undefined4)local_320;
      *(undefined4 *)((longlong)param_4 + 0xc) = local_320._4_4_;
      local_320 = 0;
      local_328 = (undefined4 *)0x0;
    }
    if (local_2b8[0] != 0) {
      FMemory::Free();
    }
    if (local_88 == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  if (param_3 == 2) {
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(param_2,PTR_u_profile_14629a5b0);
    if (iVar7 == 0) {
      uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_260,L"User Settings",L"OakPlayerManager",L"ProfileSaveTitle");
      uVar13 = FText::ToString(uVar13);
      FString::operator=(param_4,uVar13);
    }
    else {
      uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_248,L"Character Save",L"OakPlayerManager",L"CharacterSaveTitle");
      uVar13 = FText::ToString(uVar13);
      FString::operator=(param_4,uVar13);
      local_258 = local_240;
    }
joined_r0x000140d2c8b3:
    if (local_258 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_258 + 1;
      lVar12 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_258)(local_258);
        LOCK();
        piVar1 = (int *)((longlong)local_258 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_258 + 8))(local_258,1);
        }
      }
    }
  }
  else {
    if (param_3 == 3) {
      if (*(int *)(param_1 + 0x378) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = *(undefined2 **)(param_1 + 0x370);
      }
      iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,param_2);
      if ((iVar7 == 0) && (*(longlong *)(param_1 + 0x368) != 0)) {
        cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x238);
        if (cVar6 == '\0') {
          uVar8 = 1;
        }
        else {
          uVar8 = FUN_140c10350(*(undefined4 *)(*(longlong *)(param_1 + 0x368) + 0xa0));
        }
        lVar12 = *(longlong *)(param_1 + 0x368);
        local_2f0 = 0;
        plStack_2e8 = (longlong *)0x0;
        lVar11 = FText::AsNumber(local_220,uVar8,0,&local_2f0);
        local_308 = lVar11;
        lVar12 = FText::FromString(local_208,lVar12 + 0x408);
        uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_278,L"{0} - Level {1}",L"OakPlayerManager",
                            L"CharacterSaveSubTitle");
        puVar14 = (undefined8 *)FTextFormat::FTextFormat(local_230,uVar13);
        local_1e8[0] = 4;
        FText::FText(local_1d8,lVar12);
        local_1c0 = 1;
        local_1b8 = 4;
        FText::FText(local_1a8,lVar11);
        local_318 = local_1e8;
        local_190 = 1;
        uStack_310 = local_188;
        local_300 = *puVar14;
        local_2f8 = puVar14[1];
        if (local_2f8 != 0) {
          LOCK();
          *(int *)(local_2f8 + 8) = *(int *)(local_2f8 + 8) + 1;
          UNLOCK();
        }
        local_2d8 = local_318;
        uStack_2d0 = uStack_310;
        uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_2c8,&local_2d8);
        uVar13 = FText::Format(local_290,&local_300,uVar13);
        FText::FText(local_2a8,uVar13);
        if (local_288 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_288 + 1;
          lVar11 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_288)(local_288);
            LOCK();
            piVar1 = (int *)((longlong)local_288 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_288 + 8))(local_288,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_2c8);
        lVar11 = 2;
        pcVar15 = local_160;
        do {
          lVar11 = lVar11 + -1;
          pcVar2 = pcVar15 + -0x30;
          if (*pcVar2 != '\0') {
            *pcVar2 = '\0';
            plVar4 = *(longlong **)(pcVar15 + -0x40);
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar4 + 1;
              lVar5 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                }
              }
            }
          }
          pcVar15 = pcVar2;
        } while (lVar11 != 0);
        plVar4 = (longlong *)puVar14[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          lVar11 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar4 = *(longlong **)(lVar12 + 8);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          lVar12 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar4 = *(longlong **)(local_308 + 8);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          lVar12 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        if (local_270 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_270 + 1;
          lVar12 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_270)(local_270);
            LOCK();
            piVar1 = (int *)((longlong)local_270 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_270 + 8))(local_270,1);
            }
          }
        }
        plVar4 = plStack_2e8;
        if (plStack_2e8 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_2e8 + 1;
          lVar12 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plStack_2e8)(plStack_2e8);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        uVar13 = FText::ToString(local_2a8);
        FString::operator=(param_4,uVar13);
        local_258 = local_2a0;
        goto joined_r0x000140d2c8b3;
      }
      puVar9 = (undefined4 *)&DAT_1444f977c;
    }
    else {
      if (param_3 != 4) {
        return;
      }
      puVar9 = (undefined4 *)&DAT_1444f9a4c;
    }
    if (*param_4 != puVar9) {
      iVar7 = 0;
      *(undefined4 *)(param_4 + 1) = 0;
      if (*(int *)((longlong)param_4 + 0xc) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0);
        iVar7 = *(int *)(param_4 + 1);
      }
      *(int *)(param_4 + 1) = iVar7;
      if (*(int *)((longlong)param_4 + 0xc) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar7);
      }
    }
  }
  return;
}



// FUNCTION 140d2ca50 FUN_140d2ca50 body=361 status=ok
// SIG undefined FUN_140d2ca50(void)

undefined8 * FUN_140d2ca50(longlong param_1,undefined8 *param_2,uint *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar7 = *(longlong *)(param_1 + 0x10) +
          (((((ulonglong)(byte)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_3 + 1)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_3 + 2)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_3 + 3)) * 0x100000001b3 &
          *(longlong *)(param_1 + 8) - 1U;
  puVar5 = *(uint **)(lVar1 + uVar7 * 8);
  if (puVar5 != (uint *)0x0) {
    if (puVar5 == *(uint **)(lVar1 + (uVar7 ^ 1) * 8)) {
      if ((puVar5 != (uint *)0x0) && (puVar5 == *(uint **)(lVar1 + (uVar7 ^ 1) * 8))) {
        uVar7 = uVar7 & 0xfffffffffffffffe;
        puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + uVar7 * 8) + 8);
        puVar6 = puVar2;
        if (*(char *)((longlong)puVar2[1] + 0x19) == '\0') {
          puVar3 = (undefined8 *)puVar2[1];
          do {
            if (*(uint *)puVar3[4] < *param_3) {
              puVar4 = (undefined8 *)puVar3[2];
            }
            else {
              puVar4 = (undefined8 *)*puVar3;
              puVar6 = puVar3;
            }
            puVar3 = puVar4;
          } while (*(char *)((longlong)puVar4 + 0x19) == '\0');
        }
        if ((puVar6 == puVar2) || (*param_3 < *(uint *)puVar6[4])) {
          puVar6 = puVar2;
        }
        if (puVar6 != puVar2) {
          if (param_4 != (undefined8 *)0x0) {
            *param_4 = puVar6;
          }
          puVar5 = (uint *)puVar6[4];
LAB_140d2cb92:
          *param_2 = puVar5;
          param_2[1] = param_1;
          param_2[2] = uVar7;
          goto LAB_140d2cb0d;
        }
      }
    }
    else {
      do {
        if (*puVar5 == *param_3) goto LAB_140d2cb92;
        puVar5 = *(uint **)(puVar5 + 4);
      } while (puVar5 != (uint *)0x0);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
LAB_140d2cb0d:
  param_2[3] = uVar7;
  return param_2;
}



// FUNCTION 140d2cbc0 FUN_140d2cbc0 body=424 status=ok
// SIG undefined FUN_140d2cbc0(void)

undefined8 * FUN_140d2cbc0(longlong param_1,undefined8 *param_2,char *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  size_t sVar2;
  bool bVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *local_58;
  
  uVar1 = *(ulonglong *)(param_3 + 0x18);
  pcVar9 = param_3;
  if (0xf < uVar1) {
    pcVar9 = *(char **)param_3;
  }
  lVar7 = 0;
  cVar5 = *pcVar9;
  while (cVar5 != '\0') {
    lVar7 = lVar7 * 5 + (longlong)cVar5;
    pcVar9 = pcVar9 + 1;
    cVar5 = *pcVar9;
  }
  uVar12 = *(longlong *)(param_1 + 0x10) + lVar7 & *(longlong *)(param_1 + 8) - 1U;
  lVar7 = *(longlong *)(param_1 + 0x20);
  local_58 = *(undefined8 **)(lVar7 + uVar12 * 8);
  if (local_58 != (undefined8 *)0x0) {
    if (local_58 == *(undefined8 **)(lVar7 + (uVar12 ^ 1) * 8)) {
      if ((local_58 != (undefined8 *)0x0) &&
         (local_58 == *(undefined8 **)(lVar7 + (uVar12 ^ 1) * 8))) {
        uVar12 = uVar12 & 0xfffffffffffffffe;
        puVar8 = *(undefined8 **)(*(longlong *)(lVar7 + uVar12 * 8) + 8);
        cVar5 = *(char *)((longlong)puVar8[1] + 0x19);
        puVar4 = puVar8;
        puVar11 = (undefined8 *)puVar8[1];
        while (cVar5 == '\0') {
          cVar5 = FUN_140d1b780(puVar11[4],param_3);
          if (cVar5 == '\0') {
            puVar10 = (undefined8 *)*puVar11;
          }
          else {
            puVar10 = (undefined8 *)puVar11[2];
            puVar11 = puVar4;
          }
          puVar4 = puVar11;
          puVar11 = puVar10;
          cVar5 = *(char *)((longlong)puVar10 + 0x19);
        }
        if ((puVar4 != puVar8) && (cVar5 = FUN_140d1b780(param_3,puVar4[4]), cVar5 == '\0')) {
          if (param_4 != (undefined8 *)0x0) {
            *param_4 = puVar4;
          }
          local_58 = (undefined8 *)puVar4[4];
LAB_140d2ccce:
          *param_2 = local_58;
          param_2[1] = param_1;
          param_2[2] = uVar12;
          goto LAB_140d2ccaa;
        }
      }
    }
    else {
      sVar2 = *(size_t *)(param_3 + 0x10);
      do {
        pcVar9 = param_3;
        if (0xf < uVar1) {
          pcVar9 = *(char **)param_3;
        }
        puVar8 = local_58;
        if (0xf < (ulonglong)local_58[3]) {
          puVar8 = (undefined8 *)*local_58;
        }
        if ((local_58[2] == sVar2) &&
           (iVar6 = _guard_xfg_dispatch_icall_nop(puVar8,pcVar9,local_58[2]), iVar6 == 0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) goto LAB_140d2ccce;
        local_58 = (undefined8 *)local_58[5];
      } while (local_58 != (undefined8 *)0x0);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
LAB_140d2ccaa:
  param_2[3] = uVar12;
  return param_2;
}



// FUNCTION 140d2cd70 FUN_140d2cd70 body=205 status=ok
// SIG undefined FUN_140d2cd70(void)

int * FUN_140d2cd70(longlong *param_1,int *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if ((*(longlong **)(param_3 + 8) == (longlong *)0x0) ||
       (cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))(), cVar1 == '\0')) {
      iVar2 = -1;
    }
    else {
      iVar2 = GetTypeHash(*(undefined8 *)(param_3 + 8));
    }
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
      do {
        cVar1 = FUniqueNetIdWrapper::operator==((longlong)iVar2 * 0x40 + lVar4,param_3);
        if (cVar1 != '\0') {
          *param_2 = iVar2;
          return param_2;
        }
        lVar4 = *param_1;
        iVar2 = *(int *)((longlong)iVar2 * 0x40 + 0x38 + lVar4);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140d2ce40 FindId body=102 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<enum_EAssetRegistryDependencyType::Type,int>,TDefaultMapHashableKeyFuncs<enum_EAssetRegistryDependencyType::Type,int,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0x10);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140d2ceb0 FUN_140d2ceb0 body=103 status=ok
// SIG undefined FUN_140d2ceb0(void)

int * FUN_140d2ceb0(longlong *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)((longlong)iVar1 * 0x20 + *param_1) == param_3) {
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



// FUNCTION 140d2cf20 FUN_140d2cf20 body=204 status=ok
// SIG undefined FUN_140d2cf20(void)

int * FUN_140d2cf20(longlong *param_1,int *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if ((*(longlong **)(param_3 + 8) == (longlong *)0x0) ||
       (cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))(), cVar1 == '\0')) {
      iVar2 = -1;
    }
    else {
      iVar2 = GetTypeHash(*(undefined8 *)(param_3 + 8));
    }
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
      do {
        cVar1 = FUniqueNetIdWrapper::operator==(lVar4 + (longlong)iVar2 * 0x38,param_3);
        if (cVar1 != '\0') {
          *param_2 = iVar2;
          return param_2;
        }
        lVar4 = *param_1;
        iVar2 = *(int *)((longlong)iVar2 * 0x38 + 0x30 + lVar4);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140d2cff0 FUN_140d2cff0 body=1320 status=ok
// SIG undefined FUN_140d2cff0(void)

/* WARNING: Removing unreachable block (ram,0x000140d2d366) */
/* WARNING: Removing unreachable block (ram,0x000140d2d374) */
/* WARNING: Removing unreachable block (ram,0x000140d2d382) */

void FUN_140d2cff0(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_50;
  longlong *local_48;
  
  plVar10 = param_1 + 0x65;
  local_88 = (longlong *)*plVar10;
  if (local_88 != (longlong *)0x0) {
    local_80 = (longlong *)param_1[0x66];
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    if (plVar10 != &local_78) {
      *plVar10 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x66,&plStack_70);
      plVar10 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_70 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_70 + 8))(plStack_70,1);
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x69) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x34c)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x68,0);
    }
    plVar10 = local_80;
    plVar1 = local_88;
    local_50 = local_88;
    local_48 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    if ((int)param_1[0xb0] != *(int *)((longlong)param_1 + 0x5ac)) {
      if ((local_88 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*local_88 + 0x20))(local_88), cVar5 == '\0')) {
        iVar6 = -1;
      }
      else {
        iVar6 = GetTypeHash(plVar1);
      }
      plVar7 = (longlong *)param_1[0xb7];
      if ((longlong *)param_1[0xb7] == (longlong *)0x0) {
        plVar7 = param_1 + 0xb6;
      }
      iVar6 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[0xb8] - 1U & (longlong)iVar6) * 4)
      ;
      if (iVar6 != -1) {
        lVar9 = param_1[0xaf];
        do {
          lVar11 = (longlong)iVar6 * 0x40;
          plVar7 = *(longlong **)(lVar11 + 8 + lVar9);
          if ((((plVar7 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar7 + 0x20))(), cVar5 == '\0')) ||
              (plVar1 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar1 + 0x20))(plVar1), cVar5 == '\0')) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          plVar7 = *(longlong **)(lVar11 + lVar9 + 8);
          if ((((plVar7 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar7 + 0x20))(), cVar5 == '\0')) &&
              ((plVar1 == (longlong *)0x0 ||
               (cVar5 = (**(code **)(*plVar1 + 0x20))(plVar1), cVar5 == '\0')))) ||
             ((bVar3 && (cVar5 = (**(code **)*plVar1)(plVar1,*(undefined8 *)(lVar11 + lVar9 + 8)),
                        cVar5 != '\0')))) {
            if (iVar6 != -1) {
              lVar11 = param_1[0xaf] + lVar11;
              goto LAB_140d2d1f9;
            }
            break;
          }
          lVar9 = param_1[0xaf];
          iVar6 = *(int *)(lVar11 + 0x38 + lVar9);
        } while (iVar6 != -1);
      }
    }
    lVar11 = 0;
LAB_140d2d1f9:
    plVar1 = local_48;
    plVar7 = (longlong *)(lVar11 + 0x28);
    if (lVar11 == 0) {
      plVar7 = (longlong *)0x0;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar10 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    if (plVar7 == (longlong *)0x0) {
      local_68 = 0;
      local_60 = 0;
      (**(code **)(*param_1 + 0x198))(param_1,&local_88,param_2,&local_68);
      FUN_140d22900(&local_68);
      local_98 = 0;
      local_90 = 0;
      TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(param_1 + 0xc0,&local_98,param_2);
      lVar9 = local_98;
      if ((int)local_90 != 0) {
        plVar10 = (longlong *)(local_98 + 0x10);
        iVar6 = (int)local_90;
        do {
          if (plVar10[2] != 0) {
            FMemory::Free();
          }
          if (*plVar10 != 0) {
            FMemory::Free();
          }
          if (plVar10[-2] != 0) {
            FMemory::Free();
          }
          plVar10 = plVar10 + 6;
          iVar6 = iVar6 + -1;
          lVar9 = local_98;
        } while (iVar6 != 0);
      }
    }
    else {
      (**(code **)(*param_1 + 0x198))(param_1,&local_88,param_2,plVar7);
      lVar9 = *plVar7;
      local_d8 = 0;
      lVar11 = (longlong)(int)plVar7[1] * 0x1a0 + lVar9;
      local_d0 = 0;
      for (; lVar9 != lVar11; lVar9 = lVar9 + 0x1a0) {
        FName::ToString(lVar9 + 0x30,&local_c8);
        FDateTime::ToString(lVar9 + 0x38,&local_b8);
        FUN_141682af0(lVar9 + 400,&local_a8,0);
        uVar4 = local_d0;
        lVar12 = (longlong)(int)local_d0;
        iVar6 = (int)local_d0 + 1;
        local_d0 = CONCAT44(local_d0._4_4_,iVar6);
        if (local_d0._4_4_ < iVar6) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,uVar4 & 0xffffffff);
        }
        puVar8 = (undefined8 *)(lVar12 * 0x30 + local_d8);
        *puVar8 = 0;
        *puVar8 = local_c8;
        *(undefined4 *)(puVar8 + 1) = (undefined4)local_c0;
        *(undefined4 *)((longlong)puVar8 + 0xc) = local_c0._4_4_;
        puVar8[2] = 0;
        puVar8[2] = local_b8;
        *(undefined4 *)(puVar8 + 3) = (undefined4)local_b0;
        *(undefined4 *)((longlong)puVar8 + 0x1c) = local_b0._4_4_;
        puVar8[4] = 0;
        puVar8[4] = local_a8;
        *(undefined4 *)(puVar8 + 5) = (undefined4)local_a0;
        *(undefined4 *)((longlong)puVar8 + 0x2c) = local_a0._4_4_;
        local_a0 = 0;
        local_a8 = 0;
        local_b0 = 0;
        local_b8 = 0;
        local_c0 = 0;
        local_c8 = 0;
      }
      TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(param_1 + 0xc0,&local_d8,param_2);
      lVar9 = local_d8;
      if ((int)local_d0 != 0) {
        plVar10 = (longlong *)(local_d8 + 0x10);
        iVar6 = (int)local_d0;
        do {
          if (plVar10[2] != 0) {
            FMemory::Free();
          }
          if (*plVar10 != 0) {
            FMemory::Free();
          }
          if (plVar10[-2] != 0) {
            FMemory::Free();
          }
          plVar10 = plVar10 + 6;
          iVar6 = iVar6 + -1;
          lVar9 = local_d8;
        } while (iVar6 != 0);
      }
    }
    if (lVar9 != 0) {
      FMemory::Free();
    }
    plVar10 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d2d520 FUN_140d2d520 body=352 status=ok
// SIG undefined FUN_140d2d520(void)

void FUN_140d2d520(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  plVar3 = param_1 + 0x56;
  lVar5 = *plVar3;
  if (lVar5 != 0) {
    plVar6 = (longlong *)param_1[0x57];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_30 = (longlong *)0x0;
    if (plVar3 != &local_38) {
      *plVar3 = 0;
      local_38 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x57,&local_30);
      plVar3 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_28 = lVar5;
    local_20 = plVar6;
    (**(code **)(*param_1 + 0xd8))(param_1,&local_28,param_2 == 1);
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
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar6 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 140d2d680 FUN_140d2d680 body=585 status=ok
// SIG undefined FUN_140d2d680(void)

void FUN_140d2d680(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  plVar3 = param_1 + 0x5c;
  lVar7 = *plVar3;
  if (lVar7 != 0) {
    plVar5 = (longlong *)param_1[0x5d];
    if (param_2 == 1) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_38 = lVar7;
      local_30 = plVar5;
      lVar7 = FUN_140d3a750();
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
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x528) = *(undefined8 *)(lVar7 + 0x520);
      }
    }
    else {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_48 = lVar7;
      local_40 = plVar5;
      lVar7 = FUN_140d3a750();
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
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      if (lVar7 != 0) {
        FUN_14172cc40(lVar7);
      }
    }
    plVar5 = (longlong *)param_1[0x5d];
    lVar7 = *plVar3;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_60 = (longlong *)0x0;
    if (plVar3 != &local_68) {
      *plVar3 = 0;
      local_68 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x5d,&local_60);
      plVar3 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_58 = lVar7;
    local_50 = plVar5;
    (**(code **)(*param_1 + 0xf8))(param_1,&local_58,param_2 == 1);
    plVar3 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_50)(local_50);
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
  }
  return;
}



// FUNCTION 140d2d8d0 FUN_140d2d8d0 body=331 status=ok
// SIG undefined FUN_140d2d8d0(void)

void FUN_140d2d8d0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  plVar3 = param_1 + 0x6b;
  local_18 = *plVar3;
  if (local_18 != 0) {
    param_1[0x6d] = 0;
    local_10 = (longlong *)param_1[0x6c];
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    local_20 = (longlong *)0x0;
    if (plVar3 != &local_28) {
      *plVar3 = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x6c,&local_20);
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
    *(undefined1 *)(param_1 + 0x70) = 0;
    if (param_2 != '\0') {
      if ((int)param_1[0x6f] == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)param_1[0x6e];
      }
      FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,PTR_DAT_14629a5a8);
    }
    (**(code **)(*param_1 + 0x158))(param_1,&local_18,param_1 + 0x6e,param_2);
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
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d2da20 FUN_140d2da20 body=255 status=ok
// SIG undefined FUN_140d2da20(void)

void FUN_140d2da20(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 200) != 0) {
    iVar4 = FUN_140a2f2a0(*(longlong *)(DAT_146b33f38 + 200),*(undefined4 *)(param_1 + 0xa0));
    lVar6 = *(longlong *)(param_1 + 0x100);
    iVar7 = 0;
    iVar8 = iVar4 + -2;
    if (iVar8 < 1) {
      iVar8 = 0;
    }
    lVar5 = (longlong)*(int *)(param_1 + 0x108) * 0x38 + lVar6;
    for (; lVar6 != lVar5; lVar6 = lVar6 + 0x38) {
      iVar7 = iVar7 + *(int *)(lVar6 + 0x28);
    }
    iVar7 = (iVar8 - iVar7) - *(int *)(param_1 + 0xfc);
    if (iVar7 < 1) {
      iVar7 = 0;
    }
    if (0 < iVar7) {
      *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + iVar7;
    }
    if (*(int *)(param_1 + 0xf8) < iVar4) {
      *(int *)(param_1 + 0xf8) = iVar4;
    }
  }
  cVar1 = FUN_140d49a70(param_1,param_2);
  cVar2 = FUN_140d4a310(param_1);
  cVar3 = FUN_140d48d70(param_1);
  if (cVar3 == '\0' && (cVar1 == '\0' && cVar2 == '\0')) {
    return;
  }
  FUN_1416f7d70(0xffffffff);
  return;
}



// FUNCTION 140d2db20 FUN_140d2db20 body=20374 status=ok
// SIG undefined FUN_140d2db20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140d30bb1) */
/* WARNING: Removing unreachable block (ram,0x000140d2f11b) */
/* WARNING: Removing unreachable block (ram,0x000140d30a5e) */
/* WARNING: Removing unreachable block (ram,0x000140d3207a) */

undefined8 FUN_140d2db20(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined1 uVar4;
  size_t sVar5;
  void *pvVar6;
  short *psVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined ***pppuVar18;
  undefined2 *puVar19;
  uint uVar20;
  undefined2 *puVar21;
  undefined **ppuVar22;
  ulonglong uVar23;
  undefined **ppuVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong *plVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined4 *puVar31;
  longlong lVar32;
  ulonglong uVar33;
  float fVar34;
  undefined1 auStack_31a8 [32];
  undefined4 local_3188;
  uint local_3178;
  int local_3174;
  undefined1 local_3170;
  undefined8 local_3168;
  undefined8 uStack_3160;
  undefined8 local_3158;
  undefined8 local_3150;
  undefined8 local_3148;
  undefined8 local_3140;
  undefined8 local_3138;
  undefined8 local_3130;
  undefined8 local_3128;
  undefined8 local_3120;
  short *local_3118;
  undefined8 local_3110;
  void *local_3108;
  undefined8 local_3100;
  short *local_30f8;
  undefined8 local_30f0;
  void *local_30e8;
  undefined8 local_30e0;
  short *local_30d8;
  undefined8 local_30d0;
  short *local_30c8;
  undefined8 local_30c0;
  longlong local_30b8;
  undefined8 local_30b0;
  longlong local_30a8;
  undefined8 local_30a0;
  longlong local_3098;
  ulonglong local_3090;
  undefined8 local_3088;
  undefined8 uStack_3080;
  undefined8 local_3078;
  longlong local_3070;
  undefined2 *local_3068;
  ulonglong local_3060;
  undefined2 *local_3058;
  ulonglong local_3050;
  longlong local_3048;
  ulonglong local_3040;
  int local_3038 [2];
  int local_3030 [2];
  longlong local_3028;
  ulonglong local_3020;
  longlong local_3018;
  ulonglong local_3010;
  undefined ***local_3008;
  longlong local_3000;
  ulonglong local_2ff8;
  longlong local_2ff0;
  ulonglong local_2fe8;
  longlong local_2fe0;
  ulonglong local_2fd8;
  longlong local_2fd0;
  ulonglong local_2fc8;
  longlong local_2fc0;
  ulonglong local_2fb8;
  longlong local_2fb0;
  ulonglong local_2fa8;
  longlong local_2fa0;
  ulonglong local_2f98;
  longlong local_2f90;
  ulonglong local_2f88;
  longlong local_2f80;
  ulonglong local_2f78;
  longlong local_2f70;
  ulonglong local_2f68;
  longlong local_2f60;
  ulonglong local_2f58;
  longlong local_2f50;
  ulonglong local_2f48;
  longlong local_2f40;
  ulonglong local_2f38;
  undefined1 local_2f30 [8];
  undefined4 local_2f28;
  undefined4 local_2f24;
  undefined4 local_2f20;
  undefined8 local_2f18;
  longlong local_2f10;
  undefined8 local_2f08;
  undefined4 local_2f00 [2];
  undefined4 local_2ef8;
  undefined4 local_2ef4;
  undefined4 local_2ef0;
  undefined8 local_2ee8;
  longlong local_2ee0;
  undefined8 local_2ed8;
  undefined4 local_2ed0 [2];
  undefined4 local_2ec8;
  undefined4 local_2ec4;
  undefined4 local_2ec0;
  undefined8 local_2eb8;
  longlong local_2eb0;
  undefined8 local_2ea8;
  short *local_2e98;
  undefined8 local_2e90;
  undefined4 local_2e88;
  undefined **local_2e80;
  undefined8 local_2e78;
  undefined8 uStack_2e70;
  undefined8 local_2e68;
  undefined8 local_2e60;
  undefined1 local_2e58 [8];
  undefined4 local_2e50;
  undefined4 local_2e4c;
  undefined4 local_2e48;
  undefined8 local_2e40;
  longlong local_2e38;
  undefined8 local_2e30;
  undefined4 local_2e28;
  longlong local_2e20;
  undefined8 local_2e18;
  undefined1 local_2e10 [8];
  longlong local_2e08;
  undefined8 local_2e00;
  undefined **local_2df8;
  longlong *local_2df0;
  undefined8 uStack_2de8;
  longlong local_2de0;
  undefined8 local_2dd8;
  undefined8 local_2dd0;
  undefined4 uStack_2dc8;
  undefined4 uStack_2dc4;
  undefined **local_2dc0;
  undefined8 local_2db8;
  undefined8 uStack_2db0;
  longlong local_2da8;
  undefined8 local_2da0;
  undefined8 local_2d98;
  undefined8 uStack_2d90;
  undefined4 local_2d88;
  undefined4 uStack_2d84;
  undefined1 local_2d78 [8];
  undefined1 local_2d70 [24];
  undefined1 local_2d58 [24];
  undefined1 local_2d40 [24];
  short *local_2d28;
  undefined8 local_2d20;
  undefined4 local_2d18;
  short *local_2d10;
  undefined8 local_2d08;
  undefined8 local_2d00;
  undefined8 local_2cf8;
  undefined **local_2cf0;
  undefined8 local_2ce8;
  undefined8 uStack_2ce0;
  undefined8 local_2cd8;
  undefined8 local_2cd0;
  undefined2 local_2cc8;
  undefined8 local_2cb8;
  longlong local_2cb0;
  undefined8 local_2ca8;
  undefined8 local_2ca0;
  undefined8 local_2c98;
  undefined8 local_2c90;
  undefined8 local_2c88;
  undefined8 local_2c80;
  undefined8 local_2c78;
  undefined ***local_2c70;
  longlong lStack_2c68;
  longlong local_2c60;
  undefined1 local_2c58 [16];
  undefined4 local_2c48;
  undefined4 local_2c44;
  undefined1 local_2c40;
  undefined1 local_2c3f;
  undefined1 local_2c38 [8];
  longlong local_2c30;
  undefined1 local_2c18 [24];
  int local_2c00;
  longlong local_2bf8;
  int local_2be8;
  longlong local_2be0;
  int local_2bd0;
  longlong local_2bc8;
  undefined8 local_2bc0;
  undefined4 local_2bb8;
  undefined4 local_2bb4;
  undefined4 local_2bb0;
  undefined4 local_2bac;
  undefined1 local_2b98 [8];
  longlong local_2b90;
  undefined8 local_2b80;
  undefined1 local_2b78 [16];
  undefined8 local_2b68;
  undefined1 local_2b60 [16];
  undefined8 local_2b50;
  undefined1 local_2b48 [16];
  undefined1 local_2b38 [16];
  undefined8 *local_2b28;
  undefined8 *local_2b20;
  undefined1 local_2b18;
  undefined1 local_2b10 [16];
  undefined4 local_2b00;
  undefined4 local_2afc;
  undefined1 local_2af0 [16];
  undefined4 local_2ae0;
  undefined4 local_2adc;
  undefined1 local_2ad0 [16];
  undefined4 local_2ac0;
  undefined4 local_2abc;
  undefined ***local_2ab0;
  longlong lStack_2aa8;
  longlong local_2aa0;
  undefined8 local_2a98;
  undefined1 local_2a90 [16];
  undefined8 local_2a80;
  undefined8 uStack_2a78;
  undefined8 local_2a70;
  undefined1 local_2a68 [8];
  longlong *local_2a60;
  undefined1 local_2a50 [8];
  longlong *local_2a48;
  undefined1 local_2a38 [8];
  longlong *local_2a30;
  void *local_2a18;
  int local_2a10;
  int local_2a0c;
  undefined1 local_2a08 [112];
  void *local_2998;
  int local_2990;
  int local_298c;
  undefined1 local_2988 [112];
  undefined1 local_2918 [48];
  int local_28e8;
  longlong local_28e0;
  undefined8 *local_28d8;
  undefined1 local_28c8 [16];
  undefined1 local_28b8 [16];
  undefined1 local_28a8 [16];
  undefined1 local_2898 [16];
  undefined1 local_2888 [16];
  undefined1 local_2878 [16];
  undefined1 local_2868 [16];
  undefined1 local_2858 [24];
  undefined1 local_2840 [24];
  undefined1 local_2828 [24];
  undefined1 local_2810 [24];
  undefined1 local_27f8 [24];
  undefined1 local_27e0 [24];
  undefined1 local_27c8 [32];
  undefined1 local_27a8 [256];
  longlong local_26a8;
  short *local_26a0;
  undefined4 local_2698;
  undefined1 local_2688 [256];
  longlong local_2588;
  short *local_2580;
  undefined4 local_2578;
  undefined1 local_2568 [256];
  longlong local_2468;
  short *local_2460;
  undefined4 local_2458;
  undefined1 local_2448 [256];
  longlong local_2348;
  short *local_2340;
  undefined4 local_2338;
  undefined1 local_2328 [256];
  longlong local_2228;
  short *local_2220;
  undefined4 local_2218;
  undefined1 local_2208 [256];
  longlong local_2108;
  short *local_2100;
  undefined4 local_20f8;
  undefined1 local_20e8 [256];
  longlong local_1fe8;
  short *local_1fe0;
  undefined4 local_1fd8;
  undefined1 local_1fc8 [256];
  longlong local_1ec8;
  short *local_1ec0;
  undefined4 local_1eb8;
  undefined1 local_1ea8 [256];
  longlong local_1da8;
  short *local_1da0;
  undefined4 local_1d98;
  undefined1 local_1d88 [256];
  longlong local_1c88;
  short *local_1c80;
  undefined1 local_1c68 [256];
  longlong local_1b68;
  short *local_1b60;
  undefined1 local_1b48 [256];
  longlong local_1a48;
  short *local_1a40;
  undefined1 local_1a28 [256];
  longlong local_1928;
  undefined8 local_1920;
  undefined1 local_1908 [256];
  longlong local_1808;
  short *local_1800;
  undefined1 local_17e8 [256];
  longlong local_16e8;
  undefined8 local_16e0;
  undefined1 local_16c8 [256];
  longlong local_15c8;
  undefined8 local_15c0;
  undefined1 local_15a8 [256];
  longlong local_14a8;
  undefined8 local_14a0;
  undefined1 local_1488 [256];
  longlong local_1388;
  undefined8 local_1380;
  undefined1 local_1368 [256];
  longlong local_1268;
  short *local_1260;
  undefined1 local_1248 [256];
  longlong local_1148;
  short *local_1140;
  undefined1 local_1128 [256];
  longlong local_1028;
  short *local_1020;
  undefined1 local_1008 [256];
  longlong local_f08;
  short *local_f00;
  undefined1 local_ee8 [256];
  longlong local_de8;
  short *local_de0;
  undefined1 local_dc8 [256];
  longlong local_cc8;
  short *local_cc0;
  undefined1 local_ca8 [256];
  longlong local_ba8;
  short *local_ba0;
  undefined1 local_b88 [256];
  longlong local_a88;
  short *local_a80;
  undefined1 local_a68 [256];
  longlong local_968;
  short *local_960;
  undefined1 local_948 [256];
  longlong local_848;
  short *local_840;
  undefined1 local_828 [256];
  longlong local_728;
  short *local_720;
  undefined1 local_708 [256];
  longlong local_608;
  short *local_600;
  undefined1 local_5e8 [256];
  longlong local_4e8;
  short *local_4e0;
  undefined1 local_4c8 [256];
  longlong local_3c8;
  short *local_3c0;
  undefined1 local_3a8 [256];
  longlong local_2a8;
  short *local_2a0;
  undefined1 local_288 [256];
  longlong local_188;
  short *local_180;
  undefined1 local_168 [256];
  longlong local_68;
  short *local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_31a8;
  uVar27 = 0;
  if (param_1[0xa7] == 0) {
    lVar11 = operator_new(0x4f8);
    uVar12 = uVar27;
    if (lVar11 != 0) {
      uVar12 = FUN_1415005e0(lVar11);
    }
    param_1[0xa7] = uVar12;
  }
  local_3048 = 0;
  local_3040 = 0;
  FUN_140d25120(param_2,&local_3048);
  if (((char)param_1[0xa6] != '\0') && (uVar20 = (int)local_3040 - 1, -1 < (int)uVar20)) {
    lVar11 = (longlong)(int)uVar20;
    do {
      if ((int)uVar20 < 0x20) {
        bVar3 = (&DAT_144502190)[lVar11];
      }
      else {
        bVar3 = *(byte *)(lVar11 + -0x20 + local_3048);
      }
      *(byte *)(lVar11 + local_3048) =
           (&DAT_1445021e0)[uVar20 & 0x1f] ^ *(byte *)(lVar11 + local_3048) ^ bVar3;
      lVar11 = lVar11 + -1;
      uVar20 = uVar20 - 1;
    } while (-1 < (int)uVar20);
  }
  cVar8 = FUN_1439f0d50(param_1[0xa7],local_3048,local_3040 & 0xffffffff);
  if (cVar8 == '\0') {
    uVar16 = 0;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x2a) = *(undefined1 *)(param_1[0xa7] + 0x2e0);
    *(undefined1 *)((longlong)param_1 + 0x2b) = *(undefined1 *)(param_1[0xa7] + 0x2e1);
    *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)(param_1[0xa7] + 0x2e2);
    *(undefined1 *)((longlong)param_1 + 0x2d) = *(undefined1 *)(param_1[0xa7] + 0x2e3);
    *(undefined1 *)((longlong)param_1 + 0x2e) = *(undefined1 *)(param_1[0xa7] + 0x2e4);
    *(undefined1 *)((longlong)param_1 + 0x32) = *(undefined1 *)(param_1[0xa7] + 0x2e5);
    *(undefined1 *)((longlong)param_1 + 0x33) = *(undefined1 *)(param_1[0xa7] + 0x4e2);
    *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)(param_1[0xa7] + 0x2e6);
    *(undefined1 *)((longlong)param_1 + 0x36) = *(undefined1 *)(param_1[0xa7] + 0x2e7);
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_1[0xa7] + 0x2e8);
    *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)(param_1[0xa7] + 0x2ec);
    *(undefined1 *)((longlong)param_1 + 0x3d) = *(undefined1 *)(param_1[0xa7] + 0x2ed);
    *(undefined1 *)((longlong)param_1 + 0x3e) = *(undefined1 *)(param_1[0xa7] + 0x2ee);
    *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1[0xa7] + 0x2ef);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1[0xa7] + 0x2f0);
    *(undefined1 *)((longlong)param_1 + 0x41) = *(undefined1 *)(param_1[0xa7] + 0x2f1);
    *(undefined1 *)((longlong)param_1 + 0x42) = *(undefined1 *)(param_1[0xa7] + 0x2f2);
    *(undefined1 *)((longlong)param_1 + 0x43) = *(undefined1 *)(param_1[0xa7] + 0x2f3);
    lVar11 = param_1[0xa7];
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar11 + 0x2f4);
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(lVar11 + 0x2f8);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar11 + 0x2fc);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(lVar11 + 0x300);
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(lVar11 + 0x304);
    *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)(param_1[0xa7] + 0x305);
    *(undefined1 *)((longlong)param_1 + 0x5a) = *(undefined1 *)(param_1[0xa7] + 0x306);
    lVar11 = param_1[0xa7];
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(lVar11 + 0x308);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar11 + 0x30c);
    *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(lVar11 + 0x310);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(lVar11 + 0x314);
    *(undefined1 *)((longlong)param_1 + 0x69) = *(undefined1 *)(param_1[0xa7] + 0x307);
    *(bool *)((longlong)param_1 + 0x6a) = *(char *)(param_1[0xa7] + 0x49b) == '\0';
    *(undefined1 *)((longlong)param_1 + 0x74) = *(undefined1 *)(param_1[0xa7] + 0x35c);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1[0xa7] + 0x4a4);
    iVar29 = (int)param_1[0x11];
    plVar15 = (longlong *)param_1[0x10];
    puVar13 = &DAT_1468a48d8;
    if (*(undefined8 **)(param_1[0xa7] + 0x2c0) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1[0xa7] + 0x2c0);
    }
    iVar9 = *(int *)(puVar13 + 3);
    if (*(int *)((longlong)param_1 + 0x8c) < iVar9) {
      for (; iVar29 != 0; iVar29 = iVar29 + -1) {
        TArray<FSaveGameUserSetting,FDefaultAllocator>::
        ~TArray<FSaveGameUserSetting,FDefaultAllocator>(plVar15 + 6);
        TArray<FSaveGameUserSetting,FDefaultAllocator>::
        ~TArray<FSaveGameUserSetting,FDefaultAllocator>(plVar15 + 4);
        if (plVar15[2] != 0) {
          FMemory::Free();
        }
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 8;
      }
      *(undefined4 *)(param_1 + 0x11) = 0;
      if (*(int *)((longlong)param_1 + 0x8c) != iVar9) {
        TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1 + 0x10,iVar9);
      }
    }
    else {
      for (; iVar29 != 0; iVar29 = iVar29 + -1) {
        TArray<FSaveGameUserSetting,FDefaultAllocator>::
        ~TArray<FSaveGameUserSetting,FDefaultAllocator>(plVar15 + 6);
        TArray<FSaveGameUserSetting,FDefaultAllocator>::
        ~TArray<FSaveGameUserSetting,FDefaultAllocator>(plVar15 + 4);
        if (plVar15[2] != 0) {
          FMemory::Free();
        }
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 8;
      }
      *(undefined4 *)(param_1 + 0x11) = 0;
    }
    lVar11 = param_1[0xa7];
    local_3178 = 0;
    puVar13 = &DAT_1468a48d8;
    if (*(undefined8 **)(lVar11 + 0x2c0) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(lVar11 + 0x2c0);
    }
    if (0 < *(int *)(puVar13 + 3)) {
      local_3168 = 0;
      do {
        puVar13 = &DAT_1468a48d8;
        if (*(undefined8 **)(lVar11 + 0x2c0) != (undefined8 *)0x0) {
          puVar13 = *(undefined8 **)(lVar11 + 0x2c0);
        }
        lVar11 = *(longlong *)(puVar13[4] + 8 + local_3168 * 8);
        local_30d8 = (short *)0x0;
        local_30d0 = 0;
        local_30c8 = (short *)0x0;
        local_30c0 = 0;
        local_30b8 = 0;
        local_30b0 = 0;
        local_30a8 = 0;
        local_30a0 = 0;
        plVar15 = *(longlong **)(lVar11 + 0x40);
        if (0xf < (ulonglong)plVar15[3]) {
          plVar15 = (longlong *)*plVar15;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_1d88,plVar15);
        psVar7 = local_1c80;
        if (local_30d8 != local_1c80) {
          uVar12 = uVar27;
          if ((local_1c80 != (short *)0x0) && (*local_1c80 != 0)) {
            lVar26 = -1;
            do {
              lVar26 = lVar26 + 1;
            } while (local_1c80[lVar26] != 0);
            uVar12 = (ulonglong)((int)lVar26 + 1);
          }
          uVar20 = local_30d0._4_4_;
          local_30d0 = (ulonglong)local_30d0._4_4_ << 0x20;
          uVar25 = (uint)uVar12;
          uVar33 = uVar27;
          if (uVar20 != uVar25) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_30d8,uVar12);
            uVar33 = local_30d0 & 0xffffffff;
            uVar20 = local_30d0._4_4_;
          }
          iVar29 = (int)uVar33 + uVar25;
          local_30d0 = CONCAT44(local_30d0._4_4_,iVar29);
          if ((int)uVar20 < iVar29) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_30d8);
          }
          if (uVar25 != 0) {
            _guard_xfg_dispatch_icall_nop(local_30d8,psVar7,(longlong)(int)uVar25 * 2);
          }
        }
        if (local_1c88 != 0) {
          FMemory::Free();
        }
        plVar15 = *(longlong **)(lVar11 + 0x48);
        if (0xf < (ulonglong)plVar15[3]) {
          plVar15 = (longlong *)*plVar15;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_1c68,plVar15);
        psVar7 = local_1b60;
        if (local_30c8 != local_1b60) {
          uVar12 = uVar27;
          if ((local_1b60 != (short *)0x0) && (*local_1b60 != 0)) {
            lVar26 = -1;
            do {
              lVar26 = lVar26 + 1;
            } while (local_1b60[lVar26] != 0);
            uVar12 = (ulonglong)((int)lVar26 + 1);
          }
          uVar20 = local_30c0._4_4_;
          local_30c0 = (ulonglong)local_30c0._4_4_ << 0x20;
          uVar25 = (uint)uVar12;
          uVar33 = uVar27;
          if (uVar20 != uVar25) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_30c8,uVar12);
            uVar33 = local_30c0 & 0xffffffff;
            uVar20 = local_30c0._4_4_;
          }
          iVar29 = uVar25 + (int)uVar33;
          local_30c0 = CONCAT44(local_30c0._4_4_,iVar29);
          if ((int)uVar20 < iVar29) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_30c8);
          }
          if (uVar25 != 0) {
            _guard_xfg_dispatch_icall_nop(local_30c8,psVar7,(longlong)(int)uVar25 * 2);
          }
        }
        if (local_1b68 != 0) {
          FMemory::Free();
        }
        local_3174 = 0;
        uVar12 = uVar27;
        if (0 < *(int *)(lVar11 + 0x18)) {
          do {
            local_3118 = (short *)0x0;
            local_3110 = 0;
            local_3108 = (void *)0x0;
            local_3100 = 0;
            plVar15 = *(longlong **)
                       (*(longlong *)(uVar12 + 8 + *(longlong *)(lVar11 + 0x20)) + 0x28);
            if (0xf < (ulonglong)plVar15[3]) {
              plVar15 = (longlong *)*plVar15;
            }
            TStringConversion<TStringConvert<char,wchar_t>,128>::
            TStringConversion<TStringConvert<char,wchar_t>,128>(local_1b48,plVar15);
            psVar7 = local_1a40;
            if (local_3118 != local_1a40) {
              uVar33 = uVar27;
              if ((local_1a40 != (short *)0x0) && (*local_1a40 != 0)) {
                lVar26 = -1;
                do {
                  lVar26 = lVar26 + 1;
                } while (local_1a40[lVar26] != 0);
                uVar33 = (ulonglong)((int)lVar26 + 1);
              }
              uVar20 = local_3110._4_4_;
              local_3110 = (ulonglong)local_3110._4_4_ << 0x20;
              uVar25 = (uint)uVar33;
              uVar17 = uVar27;
              if (uVar20 != uVar25) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_3118,uVar33);
                uVar17 = local_3110 & 0xffffffff;
                uVar20 = local_3110._4_4_;
              }
              iVar29 = (int)uVar17 + uVar25;
              local_3110 = CONCAT44(local_3110._4_4_,iVar29);
              if ((int)uVar20 < iVar29) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3118);
              }
              if (uVar25 != 0) {
                _guard_xfg_dispatch_icall_nop(local_3118,psVar7,(longlong)(int)uVar25 * 2);
              }
            }
            if (local_1a48 != 0) {
              FMemory::Free();
            }
            iVar29 = IStreamingManager::GetNumWantingResources
                               (*(longlong *)(uVar12 + 8 + *(longlong *)(lVar11 + 0x20)) + 0x10);
            uVar33 = uVar27;
            if (0 < iVar29) {
              do {
                puVar13 = (undefined8 *)
                          FUN_1439f1d30(*(longlong *)(uVar12 + 8 + *(longlong *)(lVar11 + 0x20)) +
                                        0x10,uVar33);
                if (0xf < (ulonglong)puVar13[3]) {
                  puVar13 = (undefined8 *)*puVar13;
                }
                TStringConversion<TStringConvert<char,wchar_t>,128>::
                TStringConversion<TStringConvert<char,wchar_t>,128>(local_1a28,puVar13);
                FName::FName(&local_2c88,local_1920,1);
                uVar17 = local_3100;
                lVar26 = (longlong)(int)local_3100;
                iVar29 = (int)local_3100 + 1;
                local_3100 = CONCAT44(local_3100._4_4_,iVar29);
                if (local_3100._4_4_ < iVar29) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_3108,uVar17 & 0xffffffff);
                }
                *(undefined8 *)((longlong)local_3108 + lVar26 * 8) = local_2c88;
                if (local_1928 != 0) {
                  FMemory::Free();
                }
                uVar20 = (int)uVar33 + 1;
                iVar29 = IStreamingManager::GetNumWantingResources
                                   (*(longlong *)(uVar12 + 8 + *(longlong *)(lVar11 + 0x20)) + 0x10)
                ;
                uVar33 = (ulonglong)uVar20;
              } while ((int)uVar20 < iVar29);
            }
            uVar33 = local_30b0;
            lVar26 = (longlong)(int)local_30b0;
            iVar29 = (int)local_30b0 + 1;
            local_30b0 = CONCAT44(local_30b0._4_4_,iVar29);
            if (local_30b0._4_4_ < iVar29) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(&local_30b8,uVar33 & 0xffffffff);
            }
            lVar26 = lVar26 * 0x20 + local_30b8;
            FString::FString(lVar26,&local_3118);
            pvVar6 = local_3108;
            *(undefined8 *)(lVar26 + 0x10) = 0;
            lVar32 = (longlong)(int)local_3100;
            *(int *)(lVar26 + 0x18) = (int)local_3100;
            if ((int)local_3100 == 0) {
              *(undefined4 *)(lVar26 + 0x1c) = 0;
            }
            else {
              TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                        (lVar26 + 0x10,local_3100 & 0xffffffff,0);
              _guard_xfg_dispatch_icall_nop(*(void **)(lVar26 + 0x10),pvVar6,lVar32 << 3);
            }
            if (local_3108 != (void *)0x0) {
              FMemory::Free();
            }
            if (local_3118 != (short *)0x0) {
              FMemory::Free();
            }
            local_3174 = local_3174 + 1;
            uVar12 = uVar12 + 8;
          } while (local_3174 < *(int *)(lVar11 + 0x18));
        }
        local_3174 = 0;
        uVar12 = uVar27;
        if (0 < *(int *)(lVar11 + 0x30)) {
          do {
            local_30f8 = (short *)0x0;
            local_30f0 = 0;
            local_30e8 = (void *)0x0;
            local_30e0 = 0;
            plVar15 = *(longlong **)
                       (*(longlong *)(uVar12 + 8 + *(longlong *)(lVar11 + 0x38)) + 0x28);
            if (0xf < (ulonglong)plVar15[3]) {
              plVar15 = (longlong *)*plVar15;
            }
            TStringConversion<TStringConvert<char,wchar_t>,128>::
            TStringConversion<TStringConvert<char,wchar_t>,128>(local_1908,plVar15);
            psVar7 = local_1800;
            if (local_30f8 != local_1800) {
              uVar33 = uVar27;
              if ((local_1800 != (short *)0x0) && (*local_1800 != 0)) {
                lVar26 = -1;
                do {
                  lVar26 = lVar26 + 1;
                } while (local_1800[lVar26] != 0);
                uVar33 = (ulonglong)((int)lVar26 + 1);
              }
              uVar20 = local_30f0._4_4_;
              local_30f0 = (ulonglong)local_30f0._4_4_ << 0x20;
              uVar25 = (uint)uVar33;
              uVar17 = uVar27;
              if (uVar20 != uVar25) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_30f8,uVar33);
                uVar17 = local_30f0 & 0xffffffff;
                uVar20 = local_30f0._4_4_;
              }
              iVar29 = uVar25 + (int)uVar17;
              local_30f0 = CONCAT44(local_30f0._4_4_,iVar29);
              if ((int)uVar20 < iVar29) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_30f8);
              }
              if (uVar25 != 0) {
                _guard_xfg_dispatch_icall_nop(local_30f8,psVar7,(longlong)(int)uVar25 * 2);
              }
            }
            if (local_1808 != 0) {
              FMemory::Free();
            }
            uVar33 = uVar27;
            uVar17 = uVar27;
            if (0 < *(int *)(*(longlong *)(uVar12 + 8 + *(longlong *)(lVar11 + 0x38)) + 0x18)) {
              do {
                local_2d98 = 0;
                plVar15 = *(longlong **)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(uVar12 + 8 + *(longlong *)(lVar11 + 0x38)) + 0x20) + 8
                             + uVar33) + 0x10);
                if (0xf < (ulonglong)plVar15[3]) {
                  plVar15 = (longlong *)*plVar15;
                }
                TStringConversion<TStringConvert<char,wchar_t>,128>::
                TStringConversion<TStringConvert<char,wchar_t>,128>(local_17e8,plVar15);
                FName::FName(&local_2cb8,local_16e0,1);
                local_2d98 = local_2cb8;
                if (local_16e8 != 0) {
                  FMemory::Free();
                }
                uVar23 = local_30e0;
                lVar26 = (longlong)(int)local_30e0;
                puVar13 = *(undefined8 **)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(uVar12 + 8 + *(longlong *)(lVar11 + 0x38)) + 0x20) + 8
                             + uVar33) + 0x18);
                puVar30 = &DAT_1468a6340;
                if (puVar13 != (undefined8 *)0x0) {
                  puVar30 = puVar13;
                }
                local_2d88 = *(undefined4 *)(puVar30 + 3);
                uStack_2d90 = puVar30[2];
                uStack_3080 = CONCAT44(uStack_3080._4_4_,local_2d88);
                iVar29 = (int)local_30e0 + 1;
                local_30e0 = CONCAT44(local_30e0._4_4_,iVar29);
                if (local_30e0._4_4_ < iVar29) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_30e8,uVar23 & 0xffffffff);
                }
                uVar20 = (int)uVar17 + 1;
                puVar13 = (undefined8 *)((longlong)local_30e8 + lVar26 * 0x18);
                *puVar13 = local_2d98;
                puVar13[1] = uStack_2d90;
                *(ulonglong *)((longlong)local_30e8 + lVar26 * 0x18 + 0x10) =
                     CONCAT44(uStack_2d84,local_2d88);
                uVar33 = uVar33 + 8;
                uVar17 = (ulonglong)uVar20;
              } while ((int)uVar20 <
                       *(int *)(*(longlong *)(uVar12 + 8 + *(longlong *)(lVar11 + 0x38)) + 0x18));
            }
            uVar33 = local_30a0;
            lVar26 = (longlong)(int)local_30a0;
            iVar29 = (int)local_30a0 + 1;
            local_30a0 = CONCAT44(local_30a0._4_4_,iVar29);
            if (local_30a0._4_4_ < iVar29) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(&local_30a8,uVar33 & 0xffffffff);
            }
            lVar26 = lVar26 * 0x20 + local_30a8;
            FString::FString(lVar26,&local_30f8);
            pvVar6 = local_30e8;
            *(undefined8 *)(lVar26 + 0x10) = 0;
            lVar32 = (longlong)(int)local_30e0;
            *(int *)(lVar26 + 0x18) = (int)local_30e0;
            if ((int)local_30e0 == 0) {
              *(undefined4 *)(lVar26 + 0x1c) = 0;
            }
            else {
              TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy
                        (lVar26 + 0x10,local_30e0 & 0xffffffff,0);
              _guard_xfg_dispatch_icall_nop(*(void **)(lVar26 + 0x10),pvVar6,lVar32 * 0x18);
            }
            if (local_30e8 != (void *)0x0) {
              FMemory::Free();
            }
            if (local_30f8 != (short *)0x0) {
              FMemory::Free();
            }
            local_3174 = local_3174 + 1;
            uVar12 = uVar12 + 8;
          } while (local_3174 < *(int *)(lVar11 + 0x30));
        }
        iVar29 = (int)param_1[0x11];
        *(int *)(param_1 + 0x11) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x8c) < iVar29 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 0x10,iVar29);
        }
        lVar11 = (longlong)iVar29 * 0x40 + param_1[0x10];
        FString::FString(lVar11,&local_30d8);
        FString::FString(lVar11 + 0x10,&local_30c8);
        *(undefined8 *)(lVar11 + 0x20) = 0;
        local_3188 = 0;
        TArray<FSBZLootValueArray,TSizedDefaultAllocator<32>_>::CopyToEmpty<FSBZLootValueArray,int>
                  (lVar11 + 0x20,local_30b8,local_30b0 & 0xffffffff,0);
        *(undefined8 *)(lVar11 + 0x30) = 0;
        local_3188 = 0;
        FUN_140d1bcc0(lVar11 + 0x30,local_30a8,local_30a0 & 0xffffffff,0);
        TArray<FSaveGameUserSetting,FDefaultAllocator>::
        ~TArray<FSaveGameUserSetting,FDefaultAllocator>(&local_30a8);
        TArray<FSaveGameUserSetting,FDefaultAllocator>::
        ~TArray<FSaveGameUserSetting,FDefaultAllocator>(&local_30b8);
        if (local_30c8 != (short *)0x0) {
          FMemory::Free();
        }
        if (local_30d8 != (short *)0x0) {
          FMemory::Free();
        }
        local_3178 = local_3178 + 1;
        lVar11 = param_1[0xa7];
        local_3168 = local_3168 + 1;
        puVar13 = &DAT_1468a48d8;
        if (*(undefined8 **)(lVar11 + 0x2c0) != (undefined8 *)0x0) {
          puVar13 = *(undefined8 **)(lVar11 + 0x2c0);
        }
      } while ((int)local_3178 < *(int *)(puVar13 + 3));
    }
    iVar29 = FUN_1439f2ae0(lVar11 + 0x10);
    plVar15 = param_1 + 0x13;
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (*(int *)((longlong)param_1 + 0xa4) < iVar29) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar15,iVar29);
    }
    iVar29 = FUN_1439f2ae0(param_1[0xa7] + 0x10);
    uVar12 = uVar27;
    if (0 < iVar29) {
      do {
        puVar14 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(param_1[0xa7] + 0x10,uVar12);
        iVar29 = (int)param_1[0x14];
        uVar10 = *puVar14;
        *(int *)(param_1 + 0x14) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0xa4) < iVar29 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar15,iVar29);
        }
        uVar20 = (int)uVar12 + 1;
        *(undefined4 *)(*plVar15 + (longlong)iVar29 * 4) = uVar10;
        iVar29 = FUN_1439f2ae0(param_1[0xa7] + 0x10);
        uVar12 = (ulonglong)uVar20;
      } while ((int)uVar20 < iVar29);
    }
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_1[0xa7] + 0x318);
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_1[0xa7] + 0x31c);
    *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(param_1[0xa7] + 800);
    *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_1[0xa7] + 0x324);
    lVar11 = param_1[0xa7];
    *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(lVar11 + 0x328);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar11 + 0x32c);
    *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(lVar11 + 0x330);
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(lVar11 + 0x334);
    *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)(lVar11 + 0x338);
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(lVar11 + 0x33c);
    *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)(lVar11 + 0x340);
    *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(lVar11 + 0x344);
    *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)(lVar11 + 0x348);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar11 + 0x34c);
    *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)(lVar11 + 0x350);
    *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(lVar11 + 0x354);
    *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)(lVar11 + 0x358);
    *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(lVar11 + 0x360);
    *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)(lVar11 + 0x364);
    *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(lVar11 + 0x368);
    *(undefined1 *)((longlong)param_1 + 0xfc) = *(undefined1 *)(lVar11 + 0x4ad);
    lVar11 = param_1[0xa7];
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar11 + 0x36c);
    *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)(lVar11 + 0x370);
    *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(lVar11 + 0x35d);
    *(undefined1 *)((longlong)param_1 + 0x109) = *(undefined1 *)(param_1[0xa7] + 0x35e);
    *(undefined1 *)((longlong)param_1 + 0x10a) = *(undefined1 *)(param_1[0xa7] + 0x35f);
    lVar11 = param_1[0xa7];
    *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)(lVar11 + 0x374);
    *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(lVar11 + 0x378);
    *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)(lVar11 + 0x37c);
    *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(lVar11 + 0x380);
    *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)(lVar11 + 900);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar11 + 0x388);
    *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)(lVar11 + 0x38c);
    *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(lVar11 + 0x390);
    *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)(lVar11 + 0x394);
    *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(lVar11 + 0x398);
    *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)(lVar11 + 0x39c);
    *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(lVar11 + 0x3a0);
    *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)(lVar11 + 0x3a4);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar11 + 0x3a8);
    *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)(lVar11 + 0x3ac);
    *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(lVar11 + 0x3b0);
    *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)(lVar11 + 0x3b4);
    *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(lVar11 + 0x3b8);
    *(undefined1 *)((longlong)param_1 + 0x154) = *(undefined1 *)(lVar11 + 0x3cc);
    *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_1[0xa7] + 0x488);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1[0xa7] + 0x48c);
    *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)(param_1[0xa7] + 0x3bc);
    *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)(param_1[0xa7] + 0x3c0);
    lVar11 = param_1[0xa7];
    *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(lVar11 + 0x3c4);
    *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)(lVar11 + 0x3c8);
    *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(lVar11 + 0x3cd);
    *(undefined4 *)((longlong)param_1 + 0x174) = *(undefined4 *)(param_1[0xa7] + 0x3d0);
    *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_1[0xa7] + 0x3ce);
    *(undefined1 *)((longlong)param_1 + 0x179) = *(undefined1 *)(param_1[0xa7] + 0x3cf);
    *(undefined1 *)((longlong)param_1 + 0x17a) = *(undefined1 *)(param_1[0xa7] + 0x3d4);
    *(undefined1 *)((longlong)param_1 + 0x17b) = *(undefined1 *)(param_1[0xa7] + 0x4e3);
    *(undefined1 *)((longlong)param_1 + 0x17e) = *(undefined1 *)(param_1[0xa7] + 0x3d5);
    *(undefined1 *)((longlong)param_1 + 0x17f) = *(undefined1 *)(param_1[0xa7] + 0x3d6);
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_1[0xa7] + 0x3d8);
    *(undefined1 *)((longlong)param_1 + 0x181) = *(undefined1 *)(param_1[0xa7] + 0x3d7);
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_1[0xa7] + 0x3dc);
    *(undefined1 *)((longlong)param_1 + 0x2ec) = *(undefined1 *)(param_1[0xa7] + 0x3e0);
    *(undefined1 *)((longlong)param_1 + 0x2ed) = *(undefined1 *)(param_1[0xa7] + 0x3e4);
    *(undefined1 *)((longlong)param_1 + 0x2ee) = *(undefined1 *)(param_1[0xa7] + 1000);
    *(undefined1 *)((longlong)param_1 + 0x2e9) = *(undefined1 *)(param_1[0xa7] + 0x414);
    *(undefined1 *)((longlong)param_1 + 0x2ea) = *(undefined1 *)(param_1[0xa7] + 0x415);
    plVar15 = *(longlong **)(param_1[0xa7] + 0x2b0);
    if (0xf < (ulonglong)plVar15[3]) {
      plVar15 = (longlong *)*plVar15;
    }
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_16c8,plVar15);
    FName::FName(&local_2cb0,local_15c0,1);
    param_1[0x32] = local_2cb0;
    if (local_15c8 != 0) {
      FMemory::Free();
    }
    plVar15 = param_1 + 0x33;
    *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)(param_1[0xa7] + 0x490);
    *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)(param_1[0xa7] + 0x495);
    *(undefined1 *)((longlong)param_1 + 0x2eb) = *(undefined1 *)(param_1[0xa7] + 0x496);
    iVar29 = *(int *)(param_1[0xa7] + 0x30);
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (*(int *)((longlong)param_1 + 0x1a4) < iVar29) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar15);
    }
    lVar11 = param_1[0xa7];
    uVar12 = uVar27;
    uVar33 = uVar27;
    if (0 < *(int *)(lVar11 + 0x30)) {
      do {
        local_2dd0 = 0;
        plVar28 = *(longlong **)
                   (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x38) + 8 + uVar33) + 0x10);
        if (0xf < (ulonglong)plVar28[3]) {
          plVar28 = (longlong *)*plVar28;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_15a8,plVar28);
        FName::FName(&local_2c78,local_14a0,1);
        local_2dd0 = local_2c78;
        if (local_14a8 != 0) {
          FMemory::Free();
        }
        uStack_2dc8 = *(undefined4 *)
                       (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x38) + 8 + uVar33) + 0x18);
        iVar29 = (int)param_1[0x34];
        *(int *)(param_1 + 0x34) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x1a4) < iVar29 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar29);
        }
        uVar20 = (int)uVar12 + 1;
        puVar14 = (undefined4 *)(*plVar15 + (longlong)iVar29 * 0x10);
        *puVar14 = (undefined4)local_2dd0;
        puVar14[1] = local_2dd0._4_4_;
        puVar14[2] = uStack_2dc8;
        puVar14[3] = uStack_2dc4;
        lVar11 = param_1[0xa7];
        uVar12 = (ulonglong)uVar20;
        uVar33 = uVar33 + 8;
      } while ((int)uVar20 < *(int *)(lVar11 + 0x30));
    }
    puVar13 = &DAT_1468a47c8;
    if (*(undefined8 **)(lVar11 + 0x2c8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(lVar11 + 0x2c8);
    }
    iVar29 = IStreamingManager::GetNumWantingResources(puVar13 + 2);
    plVar15 = param_1 + 0x35;
    *(undefined4 *)(param_1 + 0x36) = 0;
    if (*(int *)((longlong)param_1 + 0x1b4) < iVar29) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar15,iVar29);
    }
    puVar13 = &DAT_1468a47c8;
    if (*(undefined8 **)(param_1[0xa7] + 0x2c8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1[0xa7] + 0x2c8);
    }
    iVar29 = IStreamingManager::GetNumWantingResources(puVar13 + 2);
    uVar12 = uVar27;
    if (0 < iVar29) {
      do {
        puVar13 = &DAT_1468a47c8;
        if (*(undefined8 **)(param_1[0xa7] + 0x2c8) != (undefined8 *)0x0) {
          puVar13 = *(undefined8 **)(param_1[0xa7] + 0x2c8);
        }
        puVar13 = (undefined8 *)FUN_1439f1d30(puVar13 + 2,uVar12);
        if (0xf < (ulonglong)puVar13[3]) {
          puVar13 = (undefined8 *)*puVar13;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_1488,puVar13);
        FName::FName(&local_2c80,local_1380,1);
        iVar29 = (int)param_1[0x36];
        *(int *)(param_1 + 0x36) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x1b4) < iVar29 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar29);
        }
        *(undefined8 *)(*plVar15 + (longlong)iVar29 * 8) = local_2c80;
        if (local_1388 != 0) {
          FMemory::Free();
        }
        uVar20 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar20;
        puVar13 = &DAT_1468a47c8;
        if (*(undefined8 **)(param_1[0xa7] + 0x2c8) != (undefined8 *)0x0) {
          puVar13 = *(undefined8 **)(param_1[0xa7] + 0x2c8);
        }
        iVar29 = IStreamingManager::GetNumWantingResources(puVar13 + 2);
      } while ((int)uVar20 < iVar29);
    }
    puVar13 = &DAT_1468a47c8;
    if (*(undefined8 **)(param_1[0xa7] + 0x2c8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1[0xa7] + 0x2c8);
    }
    *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)(puVar13 + 5);
    puVar13 = &DAT_1468a47c8;
    if (*(undefined8 **)(param_1[0xa7] + 0x2c8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1[0xa7] + 0x2c8);
    }
    *(undefined1 *)((longlong)param_1 + 0x1b9) = *(undefined1 *)((longlong)puVar13 + 0x29);
    *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_1[0xa7] + 0x3ec);
    *(undefined1 *)((longlong)param_1 + 0x1e1) = *(undefined1 *)(param_1[0xa7] + 0x3f0);
    *(undefined1 *)((longlong)param_1 + 0x1e2) = *(undefined1 *)(param_1[0xa7] + 0x410);
    *(undefined1 *)((longlong)param_1 + 0x1e3) = *(undefined1 *)(param_1[0xa7] + 0x4b0);
    *(bool *)((longlong)param_1 + 0x1f9) = *(char *)(param_1[0xa7] + 0x4af) == '\0';
    *(bool *)((longlong)param_1 + 0x1fa) = *(char *)(param_1[0xa7] + 0x4e8) == '\0';
    plVar15 = *(longlong **)(param_1[0xa7] + 0x2b8);
    if (0xf < (ulonglong)plVar15[3]) {
      plVar15 = (longlong *)*plVar15;
    }
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_1368,plVar15);
    plVar15 = param_1 + 0x3d;
    if ((short *)*plVar15 != local_1260) {
      uVar12 = uVar27;
      if ((local_1260 != (short *)0x0) && (*local_1260 != 0)) {
        lVar11 = -1;
        do {
          lVar11 = lVar11 + 1;
        } while (local_1260[lVar11] != 0);
        uVar12 = (ulonglong)((int)lVar11 + 1);
      }
      *(undefined4 *)(param_1 + 0x3e) = 0;
      iVar29 = (int)uVar12;
      uVar33 = uVar27;
      if (*(int *)((longlong)param_1 + 500) != iVar29) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar15,uVar12);
        uVar33 = (ulonglong)*(uint *)(param_1 + 0x3e);
      }
      iVar9 = (int)uVar33 + iVar29;
      *(int *)(param_1 + 0x3e) = iVar9;
      if (*(int *)((longlong)param_1 + 500) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar15);
      }
      if (iVar29 != 0) {
        _guard_xfg_dispatch_icall_nop((void *)*plVar15,local_1260,(longlong)iVar29 * 2);
      }
    }
    if (local_1268 != 0) {
      FMemory::Free();
    }
    plVar15 = param_1 + 0x4c;
    *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)(param_1[0xa7] + 0x3f4);
    *(undefined1 *)((longlong)param_1 + 0x1fb) = *(undefined1 *)(param_1[0xa7] + 0x497);
    *(bool *)((longlong)param_1 + 0x1fc) = *(char *)(param_1[0xa7] + 0x498) == '\0';
    *(bool *)((longlong)param_1 + 0x1fd) = *(char *)(param_1[0xa7] + 0x499) == '\0';
    *(bool *)((longlong)param_1 + 0x204) = *(char *)(param_1[0xa7] + 0x49a) == '\0';
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1[0xa7] + 0x49c);
    *(bool *)((longlong)param_1 + 0x205) = *(char *)(param_1[0xa7] + 0x4ac) == '\0';
    *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(param_1[0xa7] + 0x4a8);
    *(undefined4 *)((longlong)param_1 + 0x254) = *(undefined4 *)(param_1[0xa7] + 0x3f8);
    *(undefined4 *)(param_1 + 0x4b) = *(undefined4 *)(param_1[0xa7] + 0x3fc);
    uVar10 = IStreamingManager::GetNumWantingResources(param_1[0xa7] + 0x40);
    FUN_140d4b2c0(plVar15,uVar10);
    iVar29 = IStreamingManager::GetNumWantingResources(param_1[0xa7] + 0x40);
    uVar12 = uVar27;
    if (0 < iVar29) {
      do {
        puVar13 = (undefined8 *)FUN_1439f1d30(param_1[0xa7] + 0x40,uVar12);
        if (0xf < (ulonglong)puVar13[3]) {
          puVar13 = (undefined8 *)*puVar13;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_1248,puVar13);
        psVar7 = local_1140;
        local_3148 = 0;
        local_3140 = 0;
        if ((local_1140 != (short *)0x0) && (*local_1140 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_1140[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_3140 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3148,0);
          }
          FGenericPlatformString::Memcpy(local_3148,psVar7,(longlong)(int)uVar20 * 2);
        }
        iVar29 = (int)param_1[0x4d];
        *(int *)(param_1 + 0x4d) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x26c) < iVar29 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar29);
        }
        puVar13 = (undefined8 *)((longlong)iVar29 * 0x10 + *plVar15);
        *puVar13 = 0;
        *puVar13 = local_3148;
        *(undefined4 *)(puVar13 + 1) = (undefined4)local_3140;
        *(undefined4 *)((longlong)puVar13 + 0xc) = local_3140._4_4_;
        local_3140 = 0;
        local_3148 = 0;
        if (local_1148 != 0) {
          FMemory::Free();
        }
        uVar20 = (int)uVar12 + 1;
        iVar29 = IStreamingManager::GetNumWantingResources(param_1[0xa7] + 0x40);
        uVar12 = (ulonglong)uVar20;
      } while ((int)uVar20 < iVar29);
    }
    plVar15 = param_1 + 0x4e;
    uVar10 = IStreamingManager::GetNumWantingResources(param_1[0xa7] + 0x58);
    FUN_140d4b2c0(plVar15,uVar10);
    FUN_140d2ba80(param_1 + 0x50,0);
    iVar29 = IStreamingManager::GetNumWantingResources(param_1[0xa7] + 0x58);
    uVar12 = uVar27;
    if (0 < iVar29) {
      do {
        puVar13 = (undefined8 *)FUN_1439f1d30(param_1[0xa7] + 0x58,uVar12);
        if (0xf < (ulonglong)puVar13[3]) {
          puVar13 = (undefined8 *)*puVar13;
        }
        local_26a8 = 0;
        if (puVar13 == (undefined8 *)0x0) {
          local_2698 = 0;
          local_26a0 = (short *)0x0;
        }
        else {
          lVar11 = -1;
          do {
            lVar11 = lVar11 + 1;
          } while (*(char *)((longlong)puVar13 + lVar11) != '\0');
          FUN_1406b4f20(local_27a8,puVar13,lVar11,1);
        }
        psVar7 = local_26a0;
        local_3098 = 0;
        local_3090 = 0;
        if ((local_26a0 != (short *)0x0) && (*local_26a0 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_26a0[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_3090 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3098,0);
          }
          FGenericPlatformString::Memcpy(local_3098,psVar7,(longlong)(int)uVar20 * 2);
        }
        if (local_26a8 != 0) {
          FMemory::Free();
        }
        iVar29 = (int)param_1[0x4f];
        *(int *)(param_1 + 0x4f) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x27c) < iVar29 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar29);
        }
        FString::FString((longlong)iVar29 * 0x10 + *plVar15,&local_3098);
        local_2de0 = 0;
        local_2dd8 = 0;
        local_2df8 = &PTR_FUN_143f740c8;
        local_2df0 = (longlong *)0x0;
        uStack_2de8 = 0;
        FUN_140d3be60(&local_3098,&local_2df8);
        if ((local_2df0 != (longlong *)0x0) &&
           (cVar8 = (**(code **)(*local_2df0 + 0x20))(), cVar8 != '\0')) {
          FUN_140d2cd70(param_1 + 0x50,&local_3174,&local_2df8);
          if ((local_3174 == -1) ||
             (lVar11 = (longlong)local_3174 * 0x40 + param_1[0x50], lVar11 == 0)) {
            local_3008 = &local_2df8;
            FUN_140d1cc90(param_1 + 0x50,local_3038,&local_3008,0);
            lVar11 = (longlong)local_3038[0] * 0x40 + param_1[0x50];
          }
          if ((longlong *)(lVar11 + 0x28) != &local_3098) {
            local_3188 = 0;
            TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>
                      ((longlong *)(lVar11 + 0x28),local_3098,local_3090 & 0xffffffff,
                       *(undefined4 *)(lVar11 + 0x34));
          }
        }
        local_2df8 = &PTR_FUN_143f740c8;
        if (local_2de0 != 0) {
          FMemory::Free();
        }
        local_2df8 = &PTR_FUN_143f73d18;
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_2df0);
        if (local_3098 != 0) {
          FMemory::Free();
        }
        uVar20 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar20;
        iVar29 = IStreamingManager::GetNumWantingResources(param_1[0xa7] + 0x58);
      } while ((int)uVar20 < iVar29);
    }
    *(undefined1 *)(param_1 + 0x5a) = 0;
    plVar15 = param_1 + 0x5f;
    param_1[0x5b] = *(longlong *)(param_1[0xa7] + 0x400);
    param_1[0x5c] = *(longlong *)(param_1[0xa7] + 0x408);
    iVar29 = (int)param_1[0x60];
    lVar11 = *plVar15;
    iVar9 = *(int *)(param_1[0xa7] + 0x2a0);
    if (*(int *)((longlong)param_1 + 0x304) < iVar9) {
      for (; iVar29 != 0; iVar29 = iVar29 + -1) {
        FUN_1404bf980(lVar11 + 0x28);
        FUN_1404bf980(lVar11);
        lVar11 = lVar11 + 0x58;
      }
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (*(int *)((longlong)param_1 + 0x304) != iVar9) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(plVar15,iVar9);
      }
    }
    else {
      for (; iVar29 != 0; iVar29 = iVar29 + -1) {
        FUN_1404bf980(lVar11 + 0x28);
        FUN_1404bf980(lVar11);
        lVar11 = lVar11 + 0x58;
      }
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    local_3178 = 0;
    if (0 < *(int *)(param_1[0xa7] + 0x2a0)) {
      local_3168 = 0;
      do {
        FUN_1415007d0(local_2b38);
        lVar11 = param_1[0x60];
        iVar29 = (int)lVar11 + 1;
        *(int *)(param_1 + 0x60) = iVar29;
        if (*(int *)((longlong)param_1 + 0x304) < iVar29) {
          TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(plVar15);
        }
        puVar30 = (undefined8 *)((longlong)(int)lVar11 * 0x58 + *plVar15);
        _guard_xfg_dispatch_icall_nop(puVar30,0,0x58);
        puVar30[2] = 0;
        *puVar30 = &PTR_FUN_143f740c8;
        puVar30[3] = 0;
        puVar30[4] = 0;
        puVar30[6] = 0;
        puVar30[7] = 0;
        puVar30[5] = &PTR_FUN_143f740c8;
        puVar30[8] = 0;
        puVar30[9] = 0;
        puVar13 = local_2b20;
        if (0xf < (ulonglong)local_2b20[3]) {
          puVar13 = (undefined8 *)*local_2b20;
        }
        local_2588 = 0;
        if (puVar13 == (undefined8 *)0x0) {
          local_2578 = 0;
          local_2580 = (short *)0x0;
        }
        else {
          lVar11 = -1;
          do {
            lVar11 = lVar11 + 1;
          } while (*(char *)((longlong)puVar13 + lVar11) != '\0');
          FUN_1406b4f20(local_2688,puVar13,lVar11,1);
        }
        psVar7 = local_2580;
        local_3058 = (undefined2 *)0x0;
        local_3050 = 0;
        if ((local_2580 != (short *)0x0) && (*local_2580 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_2580[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_3050 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3058,0);
          }
          FGenericPlatformString::Memcpy(local_3058,psVar7,(longlong)(int)uVar20 * 2);
        }
        if (local_2588 != 0) {
          FMemory::Free();
        }
        puVar21 = &DAT_143f3eda8;
        if (DAT_14629aa98 != 0) {
          puVar21 = DAT_14629aa90;
        }
        puVar19 = &DAT_143f3eda8;
        if ((int)local_3050 != 0) {
          puVar19 = local_3058;
        }
        iVar29 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar19,puVar21);
        if (iVar29 != 0) {
          FUN_1425e3ea0(puVar30,&local_3058);
        }
        puVar13 = local_2b28;
        if (0xf < (ulonglong)local_2b28[3]) {
          puVar13 = (undefined8 *)*local_2b28;
        }
        local_2468 = 0;
        if (puVar13 == (undefined8 *)0x0) {
          local_2458 = 0;
          local_2460 = (short *)0x0;
        }
        else {
          lVar11 = -1;
          do {
            lVar11 = lVar11 + 1;
          } while (*(char *)((longlong)puVar13 + lVar11) != '\0');
          FUN_1406b4f20(local_2568,puVar13,lVar11,1);
        }
        psVar7 = local_2460;
        local_3068 = (undefined2 *)0x0;
        local_3060 = 0;
        if ((local_2460 != (short *)0x0) && (*local_2460 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_2460[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_3060 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3068,0);
          }
          FGenericPlatformString::Memcpy(local_3068,psVar7,(longlong)(int)uVar20 * 2);
        }
        if (local_2468 != 0) {
          FMemory::Free();
        }
        puVar21 = &DAT_143f3eda8;
        if (DAT_14629aa98 != 0) {
          puVar21 = DAT_14629aa90;
        }
        puVar19 = &DAT_143f3eda8;
        if ((int)local_3060 != 0) {
          puVar19 = local_3068;
        }
        iVar29 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar19,puVar21);
        if (iVar29 != 0) {
          FUN_1425e3ea0(puVar30 + 5,&local_3068);
        }
        *(undefined1 *)(puVar30 + 10) = local_2b18;
        if (local_3068 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_3058 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        FUN_141500ba0(local_2b38);
        local_3178 = local_3178 + 1;
        local_3168 = local_3168 + 8;
      } while ((int)local_3178 < *(int *)(param_1[0xa7] + 0x2a0));
    }
    FUN_140d4b320(param_1 + 0x61);
    lVar11 = (**(code **)(*(longlong *)(param_1[0xa7] + 0x70) + 0x90))();
    plVar15 = (longlong *)FUN_140d599d0(*(undefined8 *)(lVar11 + 0x10),local_2810);
    local_3088 = (undefined ***)*plVar15;
    uStack_3080 = plVar15[1];
    local_2c60 = plVar15[2];
    local_3078 = 0;
    local_2a80 = 0;
    uStack_2a78 = 0;
    local_2a70 = 0;
    local_2aa0 = local_2c60;
    local_2c70 = local_3088;
    local_2ab0 = local_3088;
    lStack_2c68 = uStack_3080;
    lStack_2aa8 = uStack_3080;
    while (local_2c70 != (undefined ***)0x0) {
      ppuVar24 = local_2c70[4];
      local_2db8 = 0;
      uStack_2db0 = 0;
      local_2dc0 = &PTR_FUN_143f740c8;
      local_2da8 = 0;
      local_2da0 = 0;
      ppuVar22 = ppuVar24;
      if ((undefined *)0xf < ppuVar24[3]) {
        ppuVar22 = (undefined **)*ppuVar24;
      }
      local_2348 = 0;
      if (ppuVar22 == (undefined **)0x0) {
        local_2338 = 0;
        local_2340 = (short *)0x0;
      }
      else {
        lVar11 = -1;
        do {
          lVar11 = lVar11 + 1;
        } while (*(char *)((longlong)ppuVar22 + lVar11) != '\0');
        FUN_1406b4f20(local_2448,ppuVar22,lVar11,1);
      }
      psVar7 = local_2340;
      local_2ff8 = 0;
      local_3000 = 0;
      if ((local_2340 != (short *)0x0) && (*local_2340 != 0)) {
        lVar11 = -1;
        do {
          lVar26 = lVar11 + 1;
          lVar11 = lVar11 + 1;
        } while (local_2340[lVar26] != 0);
        uVar20 = (int)lVar11 + 1;
        local_2ff8 = (ulonglong)uVar20;
        if (0 < (int)uVar20) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3000,0);
        }
        FGenericPlatformString::Memcpy(local_3000,psVar7,(longlong)(int)uVar20 * 2);
      }
      FUN_1425e3ea0(&local_2dc0,&local_3000);
      if (local_3000 != 0) {
        FMemory::Free();
      }
      if (local_2348 != 0) {
        FMemory::Free();
      }
      local_3168 = CONCAT44(local_3168._4_4_,*(undefined4 *)(ppuVar24 + 7));
      uStack_3160 = ppuVar24[6];
      FUN_140d2cd70(param_1 + 0x61,&local_3178,&local_2dc0);
      if ((local_3178 == 0xffffffff) ||
         (lVar11 = (longlong)(int)local_3178 * 0x40 + param_1[0x61], lVar11 == 0)) {
        local_3088 = &local_2dc0;
        FUN_140d1ce60(param_1 + 0x61,local_3030,&local_3088,0);
        lVar11 = (longlong)local_3030[0] * 0x40 + param_1[0x61];
      }
      *(uint *)(lVar11 + 0x28) = (uint)local_3168;
      *(undefined4 *)(lVar11 + 0x2c) = local_3168._4_4_;
      *(undefined4 *)(lVar11 + 0x30) = (undefined4)uStack_3160;
      *(undefined4 *)(lVar11 + 0x34) = uStack_3160._4_4_;
      local_2dc0 = &PTR_FUN_143f740c8;
      if (local_2da8 != 0) {
        FMemory::Free();
      }
      local_2dc0 = &PTR_FUN_143f73d18;
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_2db8);
      FUN_140d25b00(&local_2c70);
    }
    plVar15 = param_1 + 0x6c;
    *(undefined4 *)(param_1 + 0x6b) = *(undefined4 *)(param_1[0xa7] + 0x418);
    FUN_140d4a8b0(plVar15,*(undefined4 *)(param_1[0xa7] + 0x108));
    lVar11 = param_1[0xa7];
    uVar12 = uVar27;
    uVar33 = uVar27;
    if (0 < *(int *)(lVar11 + 0x108)) {
      do {
        local_2ed0[0] = 0;
        local_2eb8 = 0;
        local_2eb0 = 0;
        local_2ea8 = 0;
        local_2ec8 = 0xffffffff;
        local_2ec4 = 0;
        FSoftObjectPath::Reset(&local_2eb8);
        local_2ec0 = 0;
        local_2ed0[0] =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x110) + 8 + uVar12) + 0x18);
        plVar28 = *(longlong **)
                   (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x110) + 8 + uVar12) + 0x10);
        if (0xf < (ulonglong)plVar28[3]) {
          plVar28 = (longlong *)*plVar28;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_1128,plVar28);
        psVar7 = local_1020;
        local_2ff0 = 0;
        local_2fe8 = 0;
        if ((local_1020 != (short *)0x0) && (*local_1020 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_1020[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_2fe8 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2ff0,0);
          }
          FGenericPlatformString::Memcpy(local_2ff0,psVar7,(longlong)(int)uVar20 * 2);
        }
        uVar16 = FString::FString(local_2868,&local_2ff0);
        puVar13 = (undefined8 *)FSoftObjectPath::FSoftObjectPath(local_2858,uVar16);
        local_2ec8 = 0xffffffff;
        local_2ec4 = 0;
        local_2a98 = *puVar13;
        FString::FString(local_2a90,puVar13 + 1);
        FSoftObjectPath::operator=(&local_2eb8,&local_2a98);
        local_2ec0 = 0;
        if (puVar13[1] != 0) {
          FMemory::Free();
        }
        if (local_2ff0 != 0) {
          FMemory::Free();
        }
        if (local_1028 != 0) {
          FMemory::Free();
        }
        iVar29 = (int)param_1[0x6d];
        *(int *)(param_1 + 0x6d) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x36c) < iVar29 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar15,iVar29);
        }
        FUN_140d1f2f0((longlong)iVar29 * 0x30 + *plVar15,local_2ed0);
        if (local_2eb0 != 0) {
          FMemory::Free();
        }
        lVar11 = param_1[0xa7];
        uVar20 = (int)uVar33 + 1;
        uVar12 = uVar12 + 8;
        uVar33 = (ulonglong)uVar20;
      } while ((int)uVar20 < *(int *)(lVar11 + 0x108));
    }
    iVar29 = *(int *)(lVar11 + 0x120);
    plVar15 = param_1 + 0x6e;
    *(undefined4 *)(param_1 + 0x6f) = 0;
    if (*(int *)((longlong)param_1 + 0x37c) < iVar29) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar15);
    }
    lVar11 = param_1[0xa7];
    uVar12 = uVar27;
    uVar33 = uVar27;
    if (0 < *(int *)(lVar11 + 0x120)) {
      do {
        local_3168 = 0;
        if (*(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x128) + 8 + uVar33) + 0x10) != 0) {
          if (DAT_146b33f38 == 0) {
            FUN_142d7ebe0();
            lVar11 = param_1[0xa7];
          }
          lVar26 = *(longlong *)(DAT_146b33f38 + 0x88);
          FUN_140d2ceb0(lVar26 + 0x1c0,&local_3070,
                        *(undefined4 *)
                         (*(longlong *)(*(longlong *)(lVar11 + 0x128) + 8 + uVar33) + 0x10));
          uVar17 = uVar27;
          if ((int)local_3070 != -1) {
            uVar17 = (longlong)(int)local_3070 * 0x20 + *(longlong *)(lVar26 + 0x1c0);
          }
          uVar23 = uVar17 + 8;
          if (uVar17 == 0) {
            uVar23 = uVar27;
          }
          if (uVar23 == 0) {
            local_2ca8 = 0;
            puVar13 = &local_2ca8;
            local_2ca0 = 0;
          }
          else {
            puVar13 = (undefined8 *)FString::FString(local_28c8);
          }
          FSoftObjectPath::FSoftObjectPath(local_2b98,puVar13);
          uVar17 = FSoftObjectPath::TryLoad(local_2b98);
          if ((uVar17 != 0) && (cVar8 = FUN_140d1df50(uVar17), local_3168 = uVar27, cVar8 != '\0'))
          {
            local_3168 = uVar17;
          }
          if (local_2b90 != 0) {
            FMemory::Free();
          }
        }
        iVar29 = (int)param_1[0x6f];
        uVar10 = *(undefined4 *)
                  (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x128) + 8 + uVar33) + 0x14);
        *(int *)(param_1 + 0x6f) = iVar29 + 1;
        uStack_3160 = (undefined *)CONCAT44(uStack_3160._4_4_,uVar10);
        if (*(int *)((longlong)param_1 + 0x37c) < iVar29 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar29);
        }
        uVar20 = (int)uVar12 + 1;
        puVar14 = (undefined4 *)(*plVar15 + (longlong)iVar29 * 0x10);
        *puVar14 = (uint)local_3168;
        puVar14[1] = local_3168._4_4_;
        puVar14[2] = (undefined4)uStack_3160;
        puVar14[3] = uStack_3160._4_4_;
        lVar11 = param_1[0xa7];
        uVar12 = (ulonglong)uVar20;
        uVar33 = uVar33 + 8;
      } while ((int)uVar20 < *(int *)(lVar11 + 0x120));
    }
    plVar15 = param_1 + 0x70;
    uVar10 = IStreamingManager::GetNumWantingResources(lVar11 + 0x130);
    FUN_140d4ab80(plVar15,uVar10);
    iVar29 = IStreamingManager::GetNumWantingResources(param_1[0xa7] + 0x130);
    uVar12 = uVar27;
    if (0 < iVar29) {
      do {
        FUN_142fde660(&local_2a18);
        lVar11 = FUN_1439f1d30(param_1[0xa7] + 0x130);
        lVar26 = (longlong)local_2a10;
        iVar29 = *(int *)(lVar11 + 0x10);
        local_2a10 = local_2a10 + iVar29;
        if (local_2a0c < local_2a10) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_2a18);
        }
        _guard_xfg_dispatch_icall_nop((void *)(lVar26 + (longlong)local_2a18),0,(longlong)iVar29);
        lVar11 = FUN_1439f1d30(param_1[0xa7] + 0x130,uVar12);
        sVar5 = *(size_t *)(lVar11 + 0x10);
        puVar13 = (undefined8 *)FUN_1439f1d30(param_1[0xa7] + 0x130,uVar12);
        if (0xf < (ulonglong)puVar13[3]) {
          puVar13 = (undefined8 *)*puVar13;
        }
        _guard_xfg_dispatch_icall_nop(local_2a18,puVar13,sVar5);
        iVar29 = (int)param_1[0x71];
        *(int *)(param_1 + 0x71) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x38c) < iVar29 + 1) {
          TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                    (plVar15,iVar29);
        }
        FUN_140ce10b0((longlong)iVar29 * 0x80 + *plVar15,&local_2a18);
        FUN_140b17480(local_2a08);
        if (local_2a18 != (void *)0x0) {
          FMemory::Free();
        }
        uVar20 = (int)uVar12 + 1;
        iVar29 = IStreamingManager::GetNumWantingResources(param_1[0xa7] + 0x130);
        uVar12 = (ulonglong)uVar20;
      } while ((int)uVar20 < iVar29);
    }
    plVar15 = param_1 + 0x72;
    uVar10 = IStreamingManager::GetNumWantingResources(param_1[0xa7] + 0x148);
    FUN_140d4ab80(plVar15,uVar10);
    iVar29 = IStreamingManager::GetNumWantingResources(param_1[0xa7] + 0x148);
    uVar12 = uVar27;
    if (0 < iVar29) {
      do {
        FUN_142fde660(&local_2998);
        lVar11 = FUN_1439f1d30(param_1[0xa7] + 0x148);
        lVar26 = (longlong)local_2990;
        iVar29 = *(int *)(lVar11 + 0x10);
        local_2990 = local_2990 + iVar29;
        if (local_298c < local_2990) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_2998);
        }
        _guard_xfg_dispatch_icall_nop((void *)(lVar26 + (longlong)local_2998),0,(longlong)iVar29);
        lVar11 = FUN_1439f1d30(param_1[0xa7] + 0x148,uVar12);
        sVar5 = *(size_t *)(lVar11 + 0x10);
        puVar13 = (undefined8 *)FUN_1439f1d30(param_1[0xa7] + 0x148,uVar12);
        if (0xf < (ulonglong)puVar13[3]) {
          puVar13 = (undefined8 *)*puVar13;
        }
        _guard_xfg_dispatch_icall_nop(local_2998,puVar13,sVar5);
        iVar29 = (int)param_1[0x73];
        *(int *)(param_1 + 0x73) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x39c) < iVar29 + 1) {
          TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                    (plVar15,iVar29);
        }
        FUN_140ce10b0((longlong)iVar29 * 0x80 + *plVar15,&local_2998);
        FUN_140b17480(local_2988);
        if (local_2998 != (void *)0x0) {
          FMemory::Free();
        }
        uVar20 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar20;
        iVar29 = IStreamingManager::GetNumWantingResources(param_1[0xa7] + 0x148);
      } while ((int)uVar20 < iVar29);
    }
    plVar15 = param_1 + 0x74;
    FUN_140d4af50(plVar15,*(undefined4 *)(param_1[0xa7] + 0x168));
    lVar11 = param_1[0xa7];
    uVar12 = uVar27;
    uVar33 = uVar27;
    if (0 < *(int *)(lVar11 + 0x168)) {
      do {
        local_2d78[0] = 0;
        FText::FText(local_2d70);
        FText::FText(local_2d58);
        FText::FText(local_2d40);
        local_2d28 = (short *)0x0;
        local_2cf0 = &PTR_FUN_143f740c8;
        local_2ce8 = 0;
        uStack_2ce0 = 0;
        local_2d20 = 0;
        local_2d18 = 0;
        local_2d10 = (short *)0x0;
        local_2d08 = 0;
        local_2d00 = 0;
        local_2cf8 = 0;
        local_2cd8 = 0;
        local_2cd0 = 0;
        local_2cc8 = 0;
        local_2d78[0] =
             *(undefined1 *)
              (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x170) + 8 + uVar33 * 8) + 0x40);
        puVar13 = *(undefined8 **)
                   (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x170) + 8 + uVar33 * 8) + 0x10);
        if (0xf < (ulonglong)puVar13[3]) {
          puVar13 = (undefined8 *)*puVar13;
        }
        local_2228 = 0;
        if (puVar13 == (undefined8 *)0x0) {
          local_2218 = 0;
          local_2220 = (short *)0x0;
        }
        else {
          lVar11 = -1;
          do {
            lVar11 = lVar11 + 1;
          } while (*(char *)((longlong)puVar13 + lVar11) != '\0');
          FUN_1406b4f20(local_2328,puVar13,lVar11,1);
        }
        psVar7 = local_2220;
        local_2fd8 = 0;
        local_2fe0 = 0;
        if ((local_2220 != (short *)0x0) && (*local_2220 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_2220[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_2fd8 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2fe0,0);
          }
          FGenericPlatformString::Memcpy(local_2fe0,psVar7,(longlong)(int)uVar20 * 2);
        }
        uVar16 = FText::FromString(local_2a38,&local_2fe0);
        FText::operator=(local_2d70,uVar16);
        plVar28 = local_2a30;
        if (local_2a30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_2a30 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_2a30)(local_2a30);
            LOCK();
            piVar2 = (int *)((longlong)plVar28 + 0xc);
            iVar29 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar29 == 1) {
              (**(code **)(*plVar28 + 8))(plVar28,1);
            }
          }
        }
        if (local_2fe0 != 0) {
          FMemory::Free();
        }
        if (local_2228 != 0) {
          FMemory::Free();
        }
        puVar13 = *(undefined8 **)
                   (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x170) + 8 + uVar33 * 8) + 0x18);
        if (0xf < (ulonglong)puVar13[3]) {
          puVar13 = (undefined8 *)*puVar13;
        }
        local_2108 = 0;
        if (puVar13 == (undefined8 *)0x0) {
          local_20f8 = 0;
          local_2100 = (short *)0x0;
        }
        else {
          lVar11 = -1;
          do {
            lVar11 = lVar11 + 1;
          } while (*(char *)((longlong)puVar13 + lVar11) != '\0');
          FUN_1406b4f20(local_2208,puVar13,lVar11,1);
        }
        psVar7 = local_2100;
        local_2fc8 = 0;
        local_2fd0 = 0;
        if ((local_2100 != (short *)0x0) && (*local_2100 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_2100[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_2fc8 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2fd0,0);
          }
          FGenericPlatformString::Memcpy(local_2fd0,psVar7,(longlong)(int)uVar20 * 2);
        }
        uVar16 = FText::FromString(local_2a50,&local_2fd0);
        FText::operator=(local_2d58,uVar16);
        plVar28 = local_2a48;
        if (local_2a48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_2a48 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_2a48)(local_2a48);
            LOCK();
            piVar2 = (int *)((longlong)plVar28 + 0xc);
            iVar29 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar29 == 1) {
              (**(code **)(*plVar28 + 8))(plVar28,1);
            }
          }
        }
        if (local_2fd0 != 0) {
          FMemory::Free();
        }
        if (local_2108 != 0) {
          FMemory::Free();
        }
        puVar13 = *(undefined8 **)
                   (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x170) + 8 + uVar33 * 8) + 0x20);
        if (0xf < (ulonglong)puVar13[3]) {
          puVar13 = (undefined8 *)*puVar13;
        }
        local_1fe8 = 0;
        if (puVar13 == (undefined8 *)0x0) {
          local_1fd8 = 0;
          local_1fe0 = (short *)0x0;
        }
        else {
          lVar11 = -1;
          do {
            lVar11 = lVar11 + 1;
          } while (*(char *)((longlong)puVar13 + lVar11) != '\0');
          FUN_1406b4f20(local_20e8,puVar13,lVar11,1);
        }
        psVar7 = local_1fe0;
        local_2fb8 = 0;
        local_2fc0 = 0;
        if ((local_1fe0 != (short *)0x0) && (*local_1fe0 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_1fe0[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_2fb8 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2fc0,0);
          }
          FGenericPlatformString::Memcpy(local_2fc0,psVar7,(longlong)(int)uVar20 * 2);
        }
        uVar16 = FText::FromString(local_2a68,&local_2fc0);
        FText::operator=(local_2d40,uVar16);
        plVar28 = local_2a60;
        if (local_2a60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_2a60 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_2a60)(local_2a60);
            LOCK();
            piVar2 = (int *)((longlong)plVar28 + 0xc);
            iVar29 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar29 == 1) {
              (**(code **)(*plVar28 + 8))(plVar28,1);
            }
          }
        }
        if (local_2fc0 != 0) {
          FMemory::Free();
        }
        if (local_1fe8 != 0) {
          FMemory::Free();
        }
        plVar28 = *(longlong **)
                   (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x170) + 8 + uVar33 * 8) + 0x28);
        if (0xf < (ulonglong)plVar28[3]) {
          plVar28 = (longlong *)*plVar28;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_1008,plVar28);
        psVar7 = local_f00;
        if (local_2d28 != local_f00) {
          uVar17 = uVar27;
          if ((local_f00 != (short *)0x0) && (*local_f00 != 0)) {
            lVar11 = -1;
            do {
              lVar11 = lVar11 + 1;
            } while (local_f00[lVar11] != 0);
            uVar17 = (ulonglong)((int)lVar11 + 1);
          }
          uVar20 = local_2d20._4_4_;
          local_2d20 = (ulonglong)local_2d20._4_4_ << 0x20;
          uVar25 = (uint)uVar17;
          uVar23 = uVar27;
          if (uVar20 != uVar25) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2d28,uVar17);
            uVar23 = local_2d20 & 0xffffffff;
            uVar20 = local_2d20._4_4_;
          }
          iVar29 = (int)uVar23 + uVar25;
          local_2d20 = CONCAT44(local_2d20._4_4_,iVar29);
          if ((int)uVar20 < iVar29) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d28);
          }
          if (uVar25 != 0) {
            _guard_xfg_dispatch_icall_nop(local_2d28,psVar7,(longlong)(int)uVar25 * 2);
          }
        }
        if (local_f08 != 0) {
          FMemory::Free();
        }
        plVar28 = *(longlong **)
                   (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x170) + 8 + uVar33 * 8) + 0x30);
        if (0xf < (ulonglong)plVar28[3]) {
          plVar28 = (longlong *)*plVar28;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_ee8,plVar28);
        psVar7 = local_de0;
        if (local_2d10 != local_de0) {
          uVar17 = uVar27;
          if ((local_de0 != (short *)0x0) && (*local_de0 != 0)) {
            lVar11 = -1;
            do {
              lVar11 = lVar11 + 1;
            } while (local_de0[lVar11] != 0);
            uVar17 = (ulonglong)((int)lVar11 + 1);
          }
          uVar20 = local_2d08._4_4_;
          local_2d08 = (ulonglong)local_2d08._4_4_ << 0x20;
          uVar25 = (uint)uVar17;
          uVar23 = uVar27;
          if (uVar20 != uVar25) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2d10,uVar17);
            uVar23 = local_2d08 & 0xffffffff;
            uVar20 = local_2d08._4_4_;
          }
          iVar29 = (int)uVar23 + uVar25;
          local_2d08 = CONCAT44(local_2d08._4_4_,iVar29);
          if ((int)uVar20 < iVar29) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d10);
          }
          if (uVar25 != 0) {
            _guard_xfg_dispatch_icall_nop(local_2d10,psVar7,(longlong)(int)uVar25 * 2);
          }
        }
        if (local_de8 != 0) {
          FMemory::Free();
        }
        local_2d00 = *(undefined8 *)
                      (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x170) + 8 + uVar33 * 8) + 0x48);
        local_2cf8 = *(undefined8 *)
                      (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x170) + 8 + uVar33 * 8) + 0x50);
        puVar13 = *(undefined8 **)
                   (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x170) + 8 + uVar33 * 8) + 0x38);
        if (0xf < (ulonglong)puVar13[3]) {
          puVar13 = (undefined8 *)*puVar13;
        }
        local_1ec8 = 0;
        if (puVar13 == (undefined8 *)0x0) {
          local_1eb8 = 0;
          local_1ec0 = (short *)0x0;
        }
        else {
          lVar11 = -1;
          do {
            lVar11 = lVar11 + 1;
          } while (*(char *)((longlong)puVar13 + lVar11) != '\0');
          FUN_1406b4f20(local_1fc8,puVar13,lVar11,1);
        }
        psVar7 = local_1ec0;
        local_2fa8 = 0;
        local_2fb0 = 0;
        if ((local_1ec0 != (short *)0x0) && (*local_1ec0 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_1ec0[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_2fa8 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2fb0,0);
          }
          FGenericPlatformString::Memcpy(local_2fb0,psVar7,(longlong)(int)uVar20 * 2);
        }
        FUN_1425e3ea0(&local_2cf0,&local_2fb0);
        if (local_2fb0 != 0) {
          FMemory::Free();
        }
        if (local_1ec8 != 0) {
          FMemory::Free();
        }
        local_2cc8 = CONCAT11(local_2cc8._1_1_,
                              *(undefined1 *)
                               (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x170) + 8 + uVar33 * 8)
                               + 0x44));
        iVar29 = (int)param_1[0x75];
        *(int *)(param_1 + 0x75) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x3ac) < iVar29 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar15,iVar29);
        }
        FUN_140ce1220((longlong)iVar29 * 0xb8 + *plVar15,local_2d78);
        FUN_1404bf980(&local_2cf0);
        if (local_2d10 != (short *)0x0) {
          FMemory::Free();
        }
        if (local_2d28 != (short *)0x0) {
          FMemory::Free();
        }
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_2d40);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_2d58);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_2d70);
        lVar11 = param_1[0xa7];
        uVar20 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar20;
        uVar33 = uVar33 + 1;
      } while ((int)uVar20 < *(int *)(lVar11 + 0x168));
    }
    plVar15 = param_1 + 0x76;
    uVar10 = IStreamingManager::GetNumWantingResources(lVar11 + 0x178);
    FUN_140d4b2c0(plVar15,uVar10);
    iVar29 = IStreamingManager::GetNumWantingResources(param_1[0xa7] + 0x178);
    uVar12 = uVar27;
    if (0 < iVar29) {
      do {
        puVar13 = (undefined8 *)FUN_1439f1d30(param_1[0xa7] + 0x178,uVar12);
        if (0xf < (ulonglong)puVar13[3]) {
          puVar13 = (undefined8 *)*puVar13;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_dc8,puVar13);
        psVar7 = local_cc0;
        local_3138 = 0;
        local_3130 = 0;
        if ((local_cc0 != (short *)0x0) && (*local_cc0 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_cc0[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_3130 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3138,0);
          }
          FGenericPlatformString::Memcpy(local_3138,psVar7,(longlong)(int)uVar20 * 2);
        }
        iVar29 = (int)param_1[0x77];
        *(int *)(param_1 + 0x77) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x3bc) < iVar29 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar29);
        }
        puVar13 = (undefined8 *)((longlong)iVar29 * 0x10 + *plVar15);
        *puVar13 = 0;
        *puVar13 = local_3138;
        *(undefined4 *)(puVar13 + 1) = (undefined4)local_3130;
        *(undefined4 *)((longlong)puVar13 + 0xc) = local_3130._4_4_;
        local_3130 = 0;
        local_3138 = 0;
        if (local_cc8 != 0) {
          FMemory::Free();
        }
        uVar20 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar20;
        iVar29 = IStreamingManager::GetNumWantingResources(param_1[0xa7] + 0x178);
      } while ((int)uVar20 < iVar29);
    }
    plVar15 = param_1 + 0x78;
    uVar10 = IStreamingManager::GetNumWantingResources(param_1[0xa7] + 400);
    FUN_140d4b2c0(plVar15,uVar10);
    iVar29 = IStreamingManager::GetNumWantingResources(param_1[0xa7] + 400);
    uVar12 = uVar27;
    if (0 < iVar29) {
      do {
        puVar13 = (undefined8 *)FUN_1439f1d30(param_1[0xa7] + 400,uVar12);
        if (0xf < (ulonglong)puVar13[3]) {
          puVar13 = (undefined8 *)*puVar13;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_ca8,puVar13);
        psVar7 = local_ba0;
        local_3128 = 0;
        local_3120 = 0;
        if ((local_ba0 != (short *)0x0) && (*local_ba0 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_ba0[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_3120 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3128,0);
          }
          FGenericPlatformString::Memcpy(local_3128,psVar7,(longlong)(int)uVar20 * 2);
        }
        iVar29 = (int)param_1[0x79];
        *(int *)(param_1 + 0x79) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x3cc) < iVar29 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar29);
        }
        puVar13 = (undefined8 *)((longlong)iVar29 * 0x10 + *plVar15);
        *puVar13 = 0;
        *puVar13 = local_3128;
        *(undefined4 *)(puVar13 + 1) = (undefined4)local_3120;
        *(undefined4 *)((longlong)puVar13 + 0xc) = local_3120._4_4_;
        local_3120 = 0;
        local_3128 = 0;
        if (local_ba8 != 0) {
          FMemory::Free();
        }
        uVar20 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar20;
        iVar29 = IStreamingManager::GetNumWantingResources(param_1[0xa7] + 400);
      } while ((int)uVar20 < iVar29);
    }
    plVar15 = param_1 + 0x7a;
    iVar29 = (int)param_1[0x7b];
    plVar28 = (longlong *)*plVar15;
    iVar9 = *(int *)(param_1[0xa7] + 0x1b0);
    if (*(int *)((longlong)param_1 + 0x3dc) < iVar9) {
      for (; iVar29 != 0; iVar29 = iVar29 + -1) {
        FUN_1404bf980(plVar28 + 3);
        if (*plVar28 != 0) {
          FMemory::Free();
        }
        plVar28 = plVar28 + 8;
      }
      *(undefined4 *)(param_1 + 0x7b) = 0;
      if (*(int *)((longlong)param_1 + 0x3dc) != iVar9) {
        TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(plVar15,iVar9);
      }
    }
    else {
      for (; iVar29 != 0; iVar29 = iVar29 + -1) {
        FUN_1404bf980(plVar28 + 3);
        if (*plVar28 != 0) {
          FMemory::Free();
        }
        plVar28 = plVar28 + 8;
      }
      *(undefined4 *)(param_1 + 0x7b) = 0;
    }
    lVar11 = param_1[0xa7];
    uVar12 = uVar27;
    uVar33 = uVar27;
    if (0 < *(int *)(lVar11 + 0x1b0)) {
      do {
        local_2e98 = (short *)0x0;
        local_2e80 = &PTR_FUN_143f740c8;
        local_2e78 = 0;
        uStack_2e70 = 0;
        local_2e90 = 0;
        local_2e68 = 0;
        local_2e60 = 0;
        plVar28 = *(longlong **)
                   (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x1b8) + 8 + uVar12) + 0x10);
        if (0xf < (ulonglong)plVar28[3]) {
          plVar28 = (longlong *)*plVar28;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_b88,plVar28);
        psVar7 = local_a80;
        if (local_2e98 != local_a80) {
          uVar17 = uVar27;
          if ((local_a80 != (short *)0x0) && (*local_a80 != 0)) {
            lVar11 = -1;
            do {
              lVar11 = lVar11 + 1;
            } while (local_a80[lVar11] != 0);
            uVar17 = (ulonglong)((int)lVar11 + 1);
          }
          uVar20 = local_2e90._4_4_;
          local_2e90 = (ulonglong)local_2e90._4_4_ << 0x20;
          uVar25 = (uint)uVar17;
          uVar23 = uVar27;
          if (uVar20 != uVar25) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2e98,uVar17);
            uVar23 = local_2e90 & 0xffffffff;
            uVar20 = local_2e90._4_4_;
          }
          iVar29 = (int)uVar23 + uVar25;
          local_2e90 = CONCAT44(local_2e90._4_4_,iVar29);
          if ((int)uVar20 < iVar29) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e98);
          }
          if (uVar25 != 0) {
            _guard_xfg_dispatch_icall_nop(local_2e98,psVar7,(longlong)(int)uVar25 * 2);
          }
        }
        if (local_a88 != 0) {
          FMemory::Free();
        }
        local_2e88 = *(undefined4 *)
                      (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x1b8) + 8 + uVar12) + 0x20);
        puVar13 = *(undefined8 **)
                   (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x1b8) + 8 + uVar12) + 0x18);
        if (0xf < (ulonglong)puVar13[3]) {
          puVar13 = (undefined8 *)*puVar13;
        }
        local_1da8 = 0;
        if (puVar13 == (undefined8 *)0x0) {
          local_1d98 = 0;
          local_1da0 = (short *)0x0;
        }
        else {
          lVar11 = -1;
          do {
            lVar11 = lVar11 + 1;
          } while (*(char *)((longlong)puVar13 + lVar11) != '\0');
          FUN_1406b4f20(local_1ea8,puVar13,lVar11,1);
        }
        psVar7 = local_1da0;
        local_2f98 = 0;
        local_2fa0 = 0;
        if ((local_1da0 != (short *)0x0) && (*local_1da0 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_1da0[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_2f98 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2fa0,0);
          }
          FGenericPlatformString::Memcpy(local_2fa0,psVar7,(longlong)(int)uVar20 * 2);
        }
        FUN_1425e3ea0(&local_2e80,&local_2fa0);
        if (local_2fa0 != 0) {
          FMemory::Free();
        }
        if (local_1da8 != 0) {
          FMemory::Free();
        }
        iVar29 = (int)param_1[0x7b];
        *(int *)(param_1 + 0x7b) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x3dc) < iVar29 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar15,iVar29);
        }
        FUN_140ce1040((longlong)iVar29 * 0x40 + *plVar15,&local_2e98);
        FUN_1404bf980(&local_2e80);
        if (local_2e98 != (short *)0x0) {
          FMemory::Free();
        }
        lVar11 = param_1[0xa7];
        uVar20 = (int)uVar33 + 1;
        uVar12 = uVar12 + 8;
        uVar33 = (ulonglong)uVar20;
      } while ((int)uVar20 < *(int *)(lVar11 + 0x1b0));
    }
    plVar15 = param_1 + 0x7c;
    FUN_1407d7790(plVar15,*(undefined4 *)(lVar11 + 0x1c8));
    lVar11 = param_1[0xa7];
    uVar12 = uVar27;
    uVar33 = uVar27;
    if (0 < *(int *)(lVar11 + 0x1c8)) {
      do {
        local_2e20 = 0;
        local_2e18 = 0;
        local_2e28 = *(undefined4 *)
                      (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x1d0) + 8 + uVar12) + 0x18);
        plVar28 = *(longlong **)
                   (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x1d0) + 8 + uVar12) + 0x10);
        if (0xf < (ulonglong)plVar28[3]) {
          plVar28 = (longlong *)*plVar28;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_a68,plVar28);
        psVar7 = local_960;
        local_2f90 = 0;
        local_2f88 = 0;
        if ((local_960 != (short *)0x0) && (*local_960 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_960[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_2f88 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f90,0);
          }
          FGenericPlatformString::Memcpy(local_2f90,psVar7,(longlong)(int)uVar20 * 2);
        }
        FString::operator=(&local_2e20,&local_2f90);
        if (local_2f90 != 0) {
          FMemory::Free();
        }
        if (local_968 != 0) {
          FMemory::Free();
        }
        iVar29 = (int)param_1[0x7d];
        *(int *)(param_1 + 0x7d) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x3ec) < iVar29 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar15,iVar29);
        }
        lVar11 = *plVar15;
        *(undefined4 *)(lVar11 + (longlong)iVar29 * 0x18) = local_2e28;
        FString::FString(lVar11 + (longlong)iVar29 * 0x18 + 8,&local_2e20);
        if (local_2e20 != 0) {
          FMemory::Free();
        }
        lVar11 = param_1[0xa7];
        uVar20 = (int)uVar33 + 1;
        uVar12 = uVar12 + 8;
        uVar33 = (ulonglong)uVar20;
      } while ((int)uVar20 < *(int *)(lVar11 + 0x1c8));
    }
    plVar15 = param_1 + 0x7e;
    FUN_140d4a8b0(plVar15,*(undefined4 *)(lVar11 + 0x1e0));
    lVar11 = param_1[0xa7];
    uVar12 = uVar27;
    uVar33 = uVar27;
    if (0 < *(int *)(lVar11 + 0x1e0)) {
      do {
        local_2e40 = 0;
        local_2e38 = 0;
        local_2e30 = 0;
        local_2e50 = 0xffffffff;
        local_2e4c = 0;
        FSoftObjectPath::Reset(&local_2e40);
        local_2e48 = 0;
        local_2e58[0] =
             *(undefined1 *)
              (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x1e8) + 8 + uVar12) + 0x18);
        plVar28 = *(longlong **)
                   (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x1e8) + 8 + uVar12) + 0x10);
        if (0xf < (ulonglong)plVar28[3]) {
          plVar28 = (longlong *)*plVar28;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_948,plVar28);
        psVar7 = local_840;
        local_2f80 = 0;
        local_2f78 = 0;
        if ((local_840 != (short *)0x0) && (*local_840 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_840[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_2f78 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f80,0);
          }
          FGenericPlatformString::Memcpy(local_2f80,psVar7,(longlong)(int)uVar20 * 2);
        }
        uVar16 = FString::FString(local_2878,&local_2f80);
        puVar13 = (undefined8 *)FSoftObjectPath::FSoftObjectPath(local_2840,uVar16);
        local_2e50 = 0xffffffff;
        local_2e4c = 0;
        local_2b80 = *puVar13;
        FString::FString(local_2b78,puVar13 + 1);
        FSoftObjectPath::operator=(&local_2e40,&local_2b80);
        local_2e48 = 0;
        if (puVar13[1] != 0) {
          FMemory::Free();
        }
        if (local_2f80 != 0) {
          FMemory::Free();
        }
        if (local_848 != 0) {
          FMemory::Free();
        }
        iVar29 = (int)param_1[0x7f];
        *(int *)(param_1 + 0x7f) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x3fc) < iVar29 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar15,iVar29);
        }
        FUN_140a4ee70((longlong)iVar29 * 0x30 + *plVar15,local_2e58);
        if (local_2e38 != 0) {
          FMemory::Free();
        }
        lVar11 = param_1[0xa7];
        uVar20 = (int)uVar33 + 1;
        uVar12 = uVar12 + 8;
        uVar33 = (ulonglong)uVar20;
      } while ((int)uVar20 < *(int *)(lVar11 + 0x1e0));
    }
    iVar29 = *(int *)(lVar11 + 0x1f8);
    plVar15 = param_1 + 0x80;
    *(undefined4 *)(param_1 + 0x81) = 0;
    if (*(int *)((longlong)param_1 + 0x40c) < iVar29) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar15);
    }
    lVar11 = param_1[0xa7];
    uVar12 = uVar27;
    uVar33 = uVar27;
    if (0 < *(int *)(lVar11 + 0x1f8)) {
      do {
        uVar10 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar11 + 0x200) + 8 + uVar33) + 0x10);
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        lVar11 = *(longlong *)(DAT_146b33f38 + 0x88);
        FUN_140d2ceb0(lVar11 + 0xd0,&local_3168,uVar10);
        uVar17 = uVar27;
        if ((uint)local_3168 != -1) {
          uVar17 = (longlong)(int)(uint)local_3168 * 0x20 + *(longlong *)(lVar11 + 0xd0);
        }
        uVar23 = uVar17 + 8;
        if (uVar17 == 0) {
          uVar23 = uVar27;
        }
        if (uVar23 == 0) {
          local_2c98 = 0;
          puVar13 = &local_2c98;
          local_2c90 = 0;
        }
        else {
          puVar13 = (undefined8 *)FString::FString(local_2888);
        }
        FSoftObjectPath::FSoftObjectPath(local_2c38,puVar13);
        pppuVar18 = (undefined ***)FSoftObjectPath::TryLoad(local_2c38);
        if ((pppuVar18 == (undefined ***)0x0) ||
           (cVar8 = FUN_140d1dfa0(pppuVar18), local_3088 = pppuVar18, cVar8 == '\0')) {
          local_3088 = (undefined ***)0x0;
        }
        if (local_2c30 != 0) {
          FMemory::Free();
        }
        iVar29 = (int)param_1[0x81];
        uVar4 = *(undefined1 *)
                 (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x200) + 8 + uVar33) + 0x14);
        *(int *)(param_1 + 0x81) = iVar29 + 1;
        uStack_3080 = CONCAT71(uStack_3080._1_7_,uVar4);
        if (*(int *)((longlong)param_1 + 0x40c) < iVar29 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar29);
        }
        uVar20 = (int)uVar12 + 1;
        puVar14 = (undefined4 *)(*plVar15 + (longlong)iVar29 * 0x10);
        *puVar14 = (undefined4)local_3088;
        puVar14[1] = local_3088._4_4_;
        puVar14[2] = (undefined4)uStack_3080;
        puVar14[3] = uStack_3080._4_4_;
        lVar11 = param_1[0xa7];
        uVar12 = (ulonglong)uVar20;
        uVar33 = uVar33 + 8;
      } while ((int)uVar20 < *(int *)(lVar11 + 0x1f8));
    }
    plVar15 = param_1 + 0x83;
    puVar13 = &DAT_1468a4720;
    if (*(undefined8 **)(lVar11 + 0x2d0) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(lVar11 + 0x2d0);
    }
    *(undefined4 *)(param_1 + 0x82) = *(undefined4 *)(puVar13 + 5);
    iVar29 = (int)param_1[0x84];
    puVar13 = &DAT_1468a4720;
    if (*(undefined8 **)(param_1[0xa7] + 0x2d0) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1[0xa7] + 0x2d0);
    }
    iVar9 = *(int *)(puVar13 + 3);
    if (*(int *)((longlong)param_1 + 0x424) < iVar9) {
      if (iVar29 != 0) {
        plVar28 = (longlong *)(*plVar15 + 0x20);
        do {
          if (*plVar28 != 0) {
            FMemory::Free();
          }
          plVar28 = plVar28 + 6;
          iVar29 = iVar29 + -1;
        } while (iVar29 != 0);
      }
      *(undefined4 *)(param_1 + 0x84) = 0;
      if (*(int *)((longlong)param_1 + 0x424) != iVar9) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(plVar15,iVar9);
      }
    }
    else {
      if (iVar29 != 0) {
        plVar28 = (longlong *)(*plVar15 + 0x20);
        do {
          if (*plVar28 != 0) {
            FMemory::Free();
          }
          plVar28 = plVar28 + 6;
          iVar29 = iVar29 + -1;
        } while (iVar29 != 0);
      }
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    lVar11 = param_1[0xa7];
    local_3178 = 0;
    puVar13 = &DAT_1468a4720;
    if (*(undefined8 **)(lVar11 + 0x2d0) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(lVar11 + 0x2d0);
    }
    uVar12 = uVar27;
    uVar33 = uVar27;
    if (0 < *(int *)(puVar13 + 3)) {
      do {
        local_2f00[0] = 0;
        local_2ee8 = 0;
        local_2ee0 = 0;
        local_2ed8 = 0;
        local_2ef8 = 0xffffffff;
        local_2ef4 = 0;
        FSoftObjectPath::Reset(&local_2ee8);
        local_2ef0 = 0;
        puVar13 = &DAT_1468a4720;
        if (*(undefined8 **)(param_1[0xa7] + 0x2d0) != (undefined8 *)0x0) {
          puVar13 = *(undefined8 **)(param_1[0xa7] + 0x2d0);
        }
        local_2f00[0] = *(undefined4 *)(*(longlong *)(puVar13[4] + 8 + uVar33) + 0x18);
        puVar13 = &DAT_1468a4720;
        if (*(undefined8 **)(param_1[0xa7] + 0x2d0) != (undefined8 *)0x0) {
          puVar13 = *(undefined8 **)(param_1[0xa7] + 0x2d0);
        }
        plVar28 = *(longlong **)(*(longlong *)(puVar13[4] + 8 + uVar33) + 0x10);
        if (0xf < (ulonglong)plVar28[3]) {
          plVar28 = (longlong *)*plVar28;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_828,plVar28);
        psVar7 = local_720;
        local_2f70 = 0;
        local_2f68 = 0;
        uVar20 = (uint)uVar12;
        if ((local_720 != (short *)0x0) && (*local_720 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_720[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_2f68 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f70,0);
          }
          FGenericPlatformString::Memcpy(local_2f70,psVar7,(longlong)(int)uVar20 * 2);
          uVar20 = local_3178;
        }
        uVar16 = FString::FString(local_2898,&local_2f70);
        puVar13 = (undefined8 *)FSoftObjectPath::FSoftObjectPath(local_2828,uVar16);
        local_2ef8 = 0xffffffff;
        local_2ef4 = 0;
        local_2b68 = *puVar13;
        FString::FString(local_2b60,puVar13 + 1);
        FSoftObjectPath::operator=(&local_2ee8,&local_2b68);
        local_2ef0 = 0;
        if (puVar13[1] != 0) {
          FMemory::Free();
        }
        if (local_2f70 != 0) {
          FMemory::Free();
        }
        if (local_728 != 0) {
          FMemory::Free();
        }
        iVar29 = (int)param_1[0x84];
        *(int *)(param_1 + 0x84) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x424) < iVar29 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar15,iVar29);
        }
        FUN_140e135e0((longlong)iVar29 * 0x30 + *plVar15,local_2f00);
        if (local_2ee0 != 0) {
          FMemory::Free();
        }
        lVar11 = param_1[0xa7];
        local_3178 = uVar20 + 1;
        puVar13 = &DAT_1468a4720;
        if (*(undefined8 **)(lVar11 + 0x2d0) != (undefined8 *)0x0) {
          puVar13 = *(undefined8 **)(lVar11 + 0x2d0);
        }
        uVar12 = (ulonglong)local_3178;
        uVar33 = uVar33 + 8;
      } while ((int)local_3178 < *(int *)(puVar13 + 3));
    }
    puVar13 = &DAT_1468a4720;
    if (*(undefined8 **)(lVar11 + 0x2d0) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(lVar11 + 0x2d0);
    }
    *(undefined4 *)(param_1 + 0x85) = *(undefined4 *)((longlong)puVar13 + 0x2c);
    puVar13 = &DAT_1468a4720;
    if (*(undefined8 **)(param_1[0xa7] + 0x2d0) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1[0xa7] + 0x2d0);
    }
    lVar11 = (longlong)*(int *)(puVar13 + 6);
    if ((*(int *)(puVar13 + 6) < 1) || (puVar13[7] != 0)) {
      lVar11 = puVar13[7];
    }
    param_1[0x86] = lVar11;
    plVar15 = param_1 + 0x88;
    puVar13 = &DAT_1468a4720;
    if (*(undefined8 **)(param_1[0xa7] + 0x2d0) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1[0xa7] + 0x2d0);
    }
    *(undefined4 *)(param_1 + 0x87) = *(undefined4 *)((longlong)puVar13 + 0x34);
    FUN_140d4a8b0(plVar15,*(undefined4 *)(param_1[0xa7] + 0x210));
    lVar11 = param_1[0xa7];
    uVar12 = uVar27;
    uVar33 = uVar27;
    if (0 < *(int *)(lVar11 + 0x210)) {
      do {
        local_2f18 = 0;
        local_2f10 = 0;
        local_2f08 = 0;
        local_2f28 = 0xffffffff;
        local_2f24 = 0;
        FSoftObjectPath::Reset(&local_2f18);
        local_2f20 = 0;
        local_2f30[0] =
             *(undefined1 *)
              (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x218) + 8 + uVar12) + 0x18);
        plVar28 = *(longlong **)
                   (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x218) + 8 + uVar12) + 0x10);
        if (0xf < (ulonglong)plVar28[3]) {
          plVar28 = (longlong *)*plVar28;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_708,plVar28);
        psVar7 = local_600;
        local_2f60 = 0;
        local_2f58 = 0;
        if ((local_600 != (short *)0x0) && (*local_600 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_600[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_2f58 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f60,0);
          }
          FGenericPlatformString::Memcpy(local_2f60,psVar7,(longlong)(int)uVar20 * 2);
        }
        uVar16 = FString::FString(local_28a8,&local_2f60);
        puVar13 = (undefined8 *)FSoftObjectPath::FSoftObjectPath(local_27e0,uVar16);
        local_2f28 = 0xffffffff;
        local_2f24 = 0;
        local_2b50 = *puVar13;
        FString::FString(local_2b48,puVar13 + 1);
        FSoftObjectPath::operator=(&local_2f18,&local_2b50);
        local_2f20 = 0;
        if (puVar13[1] != 0) {
          FMemory::Free();
        }
        if (local_2f60 != 0) {
          FMemory::Free();
        }
        if (local_608 != 0) {
          FMemory::Free();
        }
        iVar29 = (int)param_1[0x89];
        *(int *)(param_1 + 0x89) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x44c) < iVar29 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar15,iVar29);
        }
        FUN_140a4ee70((longlong)iVar29 * 0x30 + *plVar15,local_2f30);
        if (local_2f10 != 0) {
          FMemory::Free();
        }
        lVar11 = param_1[0xa7];
        uVar20 = (int)uVar33 + 1;
        uVar12 = uVar12 + 8;
        uVar33 = (ulonglong)uVar20;
      } while ((int)uVar20 < *(int *)(lVar11 + 0x210));
    }
    plVar15 = param_1 + 0x8a;
    FUN_1407d7790(plVar15,*(undefined4 *)(lVar11 + 0x228));
    lVar11 = param_1[0xa7];
    uVar12 = uVar27;
    uVar33 = uVar27;
    if (0 < *(int *)(lVar11 + 0x228)) {
      do {
        local_2e08 = 0;
        local_2e00 = 0;
        local_2e10[0] =
             *(undefined1 *)
              (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x230) + 8 + uVar12) + 0x18);
        plVar28 = *(longlong **)
                   (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x230) + 8 + uVar12) + 0x10);
        if (0xf < (ulonglong)plVar28[3]) {
          plVar28 = (longlong *)*plVar28;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_5e8,plVar28);
        psVar7 = local_4e0;
        local_2f50 = 0;
        local_2f48 = 0;
        if ((local_4e0 != (short *)0x0) && (*local_4e0 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_4e0[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_2f48 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f50,0);
          }
          FGenericPlatformString::Memcpy(local_2f50,psVar7,(longlong)(int)uVar20 * 2);
        }
        FString::operator=(&local_2e08,&local_2f50);
        if (local_2f50 != 0) {
          FMemory::Free();
        }
        if (local_4e8 != 0) {
          FMemory::Free();
        }
        iVar29 = (int)param_1[0x8b];
        *(int *)(param_1 + 0x8b) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x45c) < iVar29 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar15,iVar29);
        }
        FUN_140a7a070(*plVar15 + (longlong)iVar29 * 0x18,local_2e10);
        if (local_2e08 != 0) {
          FMemory::Free();
        }
        lVar11 = param_1[0xa7];
        uVar20 = (int)uVar33 + 1;
        uVar12 = uVar12 + 8;
        uVar33 = (ulonglong)uVar20;
      } while ((int)uVar20 < *(int *)(lVar11 + 0x228));
    }
    plVar15 = param_1 + 0x8e;
    puVar13 = &DAT_1468a62f0;
    if (*(undefined8 **)(lVar11 + 0x2d8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(lVar11 + 0x2d8);
    }
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(puVar13 + 8);
    puVar13 = &DAT_1468a62f0;
    if (*(undefined8 **)(param_1[0xa7] + 0x2d8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1[0xa7] + 0x2d8);
    }
    *(undefined4 *)((longlong)param_1 + 0x464) = *(undefined4 *)((longlong)puVar13 + 0x44);
    puVar13 = &DAT_1468a62f0;
    if (*(undefined8 **)(param_1[0xa7] + 0x2d8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1[0xa7] + 0x2d8);
    }
    *(undefined4 *)(param_1 + 0x8d) = *(undefined4 *)(puVar13 + 9);
    puVar13 = &DAT_1468a62f0;
    if (*(undefined8 **)(param_1[0xa7] + 0x2d8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1[0xa7] + 0x2d8);
    }
    FUN_140d4b1e0(plVar15,*(undefined4 *)(puVar13 + 6));
    lVar11 = param_1[0xa7];
    local_3178 = 0;
    puVar13 = &DAT_1468a62f0;
    if (*(undefined8 **)(lVar11 + 0x2d8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(lVar11 + 0x2d8);
    }
    uVar12 = uVar27;
    if (0 < *(int *)(puVar13 + 6)) {
      do {
        puVar13 = &DAT_1468a62f0;
        if (*(undefined8 **)(lVar11 + 0x2d8) != (undefined8 *)0x0) {
          puVar13 = *(undefined8 **)(lVar11 + 0x2d8);
        }
        FUN_1415454d0(local_2c18,*(undefined8 *)(puVar13[7] + 8 + uVar12));
        uVar10 = local_2bb8;
        iVar29 = (int)param_1[0x8f];
        *(int *)(param_1 + 0x8f) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x47c) < iVar29 + 1) {
          TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(plVar15,iVar29);
        }
        puVar14 = (undefined4 *)((longlong)iVar29 * 0x58 + *plVar15);
        *puVar14 = uVar10;
        *(undefined8 *)(puVar14 + 2) = 0;
        *(undefined8 *)(puVar14 + 4) = 1;
        *(undefined8 *)(puVar14 + 6) = 0;
        puVar14[8] = 0;
        *(undefined8 *)(puVar14 + 10) = 0;
        *(undefined8 *)(puVar14 + 0xc) = 0;
        *(undefined8 *)(puVar14 + 0xe) = 0;
        *(undefined8 *)(puVar14 + 0x10) = 0;
        *(undefined8 *)(puVar14 + 0x12) = 0;
        *(undefined8 *)(puVar14 + 0x14) = 0;
        *(undefined8 *)(puVar14 + 2) = local_2bc0;
        puVar14[4] = 0;
        puVar14[5] = local_2bb4;
        puVar14[6] = local_2bb0;
        puVar14[7] = local_2bac;
        uVar33 = uVar27;
        uVar17 = uVar27;
        if (0 < local_2be8) {
          do {
            FUN_141545450(local_2b10,*(undefined8 *)(local_2be0 + 8 + uVar33));
            FUN_140e6f750(puVar14,local_2b00,local_2afc,1);
            FComboBoxStyle::~FComboBoxStyle(local_2b10);
            uVar20 = (int)uVar17 + 1;
            uVar33 = uVar33 + 8;
            uVar17 = (ulonglong)uVar20;
          } while ((int)uVar20 < local_2be8);
        }
        uVar33 = uVar27;
        uVar17 = uVar27;
        if (0 < local_2c00) {
          do {
            FUN_141545450(local_2af0,*(undefined8 *)(local_2bf8 + 8 + uVar33));
            FUN_140e6fd10(puVar14,local_2ae0,local_2adc,1);
            FComboBoxStyle::~FComboBoxStyle(local_2af0);
            uVar20 = (int)uVar17 + 1;
            uVar33 = uVar33 + 8;
            uVar17 = (ulonglong)uVar20;
          } while ((int)uVar20 < local_2c00);
        }
        uVar33 = uVar27;
        uVar17 = uVar27;
        if (0 < local_2bd0) {
          do {
            FUN_1415453d0(local_2ad0,*(undefined8 *)(local_2bc8 + 8 + uVar33));
            FUN_140e6f680(puVar14,local_2ac0,local_2abc,1);
            FComboBoxStyle::~FComboBoxStyle(local_2ad0);
            uVar20 = (int)uVar17 + 1;
            uVar33 = uVar33 + 8;
            uVar17 = (ulonglong)uVar20;
          } while ((int)uVar20 < local_2bd0);
        }
        FUN_141545780(local_2c18);
        lVar11 = param_1[0xa7];
        local_3178 = local_3178 + 1;
        puVar13 = &DAT_1468a62f0;
        if (*(undefined8 **)(lVar11 + 0x2d8) != (undefined8 *)0x0) {
          puVar13 = *(undefined8 **)(lVar11 + 0x2d8);
        }
        uVar12 = uVar12 + 8;
      } while ((int)local_3178 < *(int *)(puVar13 + 6));
    }
    plVar15 = param_1 + 0x90;
    puVar13 = &DAT_1468a62f0;
    if (*(undefined8 **)(lVar11 + 0x2d8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(lVar11 + 0x2d8);
    }
    iVar29 = *(int *)(puVar13 + 3);
    *(undefined4 *)(param_1 + 0x91) = 0;
    if (*(int *)((longlong)param_1 + 0x48c) < iVar29) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar15);
    }
    lVar11 = param_1[0xa7];
    puVar13 = &DAT_1468a62f0;
    if (*(undefined8 **)(lVar11 + 0x2d8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(lVar11 + 0x2d8);
    }
    uVar12 = uVar27;
    uVar33 = uVar27;
    if (0 < *(int *)(puVar13 + 3)) {
      do {
        iVar29 = (int)param_1[0x91];
        lVar11 = (longlong)iVar29;
        *(int *)(param_1 + 0x91) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x48c) < iVar29 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar29);
        }
        *(undefined8 *)(*plVar15 + lVar11 * 8) = 0;
        if ((-1 < iVar29) && (iVar29 < (int)param_1[0x91])) {
          puVar13 = &DAT_1468a62f0;
          if (*(undefined8 **)(param_1[0xa7] + 0x2d8) != (undefined8 *)0x0) {
            puVar13 = *(undefined8 **)(param_1[0xa7] + 0x2d8);
          }
          *(undefined4 *)(*plVar15 + lVar11 * 8) =
               *(undefined4 *)(*(longlong *)(puVar13[4] + 8 + uVar33) + 0x10);
          puVar13 = &DAT_1468a62f0;
          if (*(undefined8 **)(param_1[0xa7] + 0x2d8) != (undefined8 *)0x0) {
            puVar13 = *(undefined8 **)(param_1[0xa7] + 0x2d8);
          }
          *(undefined4 *)(*plVar15 + 4 + lVar11 * 8) =
               *(undefined4 *)(*(longlong *)(puVar13[4] + 8 + uVar33) + 0x14);
        }
        lVar11 = param_1[0xa7];
        uVar20 = (int)uVar12 + 1;
        puVar13 = &DAT_1468a62f0;
        if (*(undefined8 **)(lVar11 + 0x2d8) != (undefined8 *)0x0) {
          puVar13 = *(undefined8 **)(lVar11 + 0x2d8);
        }
        uVar12 = (ulonglong)uVar20;
        uVar33 = uVar33 + 8;
      } while ((int)uVar20 < *(int *)(puVar13 + 3));
    }
    plVar15 = param_1 + 0x3a;
    uVar10 = IStreamingManager::GetNumWantingResources(lVar11 + 0x250);
    FUN_140d4b2c0(plVar15,uVar10);
    iVar29 = IStreamingManager::GetNumWantingResources(param_1[0xa7] + 0x250);
    uVar12 = uVar27;
    if (0 < iVar29) {
      do {
        puVar13 = (undefined8 *)FUN_1439f1d30(param_1[0xa7] + 0x250,uVar12);
        if (0xf < (ulonglong)puVar13[3]) {
          puVar13 = (undefined8 *)*puVar13;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_4c8,puVar13);
        psVar7 = local_3c0;
        local_3158 = 0;
        local_3150 = 0;
        if ((local_3c0 != (short *)0x0) && (*local_3c0 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_3c0[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_3150 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3158,0);
          }
          FGenericPlatformString::Memcpy(local_3158,psVar7,(longlong)(int)uVar20 * 2);
        }
        iVar29 = (int)param_1[0x3b];
        *(int *)(param_1 + 0x3b) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x1dc) < iVar29 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar29);
        }
        puVar13 = (undefined8 *)((longlong)iVar29 * 0x10 + *plVar15);
        *puVar13 = 0;
        *puVar13 = local_3158;
        *(undefined4 *)(puVar13 + 1) = (undefined4)local_3150;
        *(undefined4 *)((longlong)puVar13 + 0xc) = local_3150._4_4_;
        local_3150 = 0;
        local_3158 = 0;
        if (local_3c8 != 0) {
          FMemory::Free();
        }
        uVar20 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar20;
        iVar29 = IStreamingManager::GetNumWantingResources(param_1[0xa7] + 0x250);
      } while ((int)uVar20 < iVar29);
    }
    *(undefined1 *)((longlong)param_1 + 0x2f) = *(undefined1 *)(param_1[0xa7] + 0x416);
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_1[0xa7] + 0x417);
    lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((lVar11 != 0) && (lVar11 = UWorld::GetGameViewport(lVar11), lVar11 != 0)) {
      *(bool *)(lVar11 + 0x309) = (char)param_1[6] == '\0';
    }
    *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)(param_1[0xa7] + 0x450);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_1[0xa7] + 0x41c);
    *(undefined1 *)((longlong)param_1 + 0x6b) = *(undefined1 *)(param_1[0xa7] + 0x424);
    lVar11 = param_1[0xa7];
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(lVar11 + 0x42c);
    fVar34 = *(float *)(lVar11 + 0x4a0);
    if (fVar34 == 0.0) {
      fVar34 = 1.0;
    }
    *(float *)(param_1 + 0xf) = fVar34;
    plVar15 = param_1 + 0x98;
    *(undefined1 *)((longlong)param_1 + 0x17c) = *(undefined1 *)(lVar11 + 0x46d);
    *(undefined1 *)((longlong)param_1 + 0x17d) = *(undefined1 *)(param_1[0xa7] + 0x46e);
    *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_1[0xa7] + 0x46f);
    *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_1[0xa7] + 0x470);
    *(undefined1 *)((longlong)param_1 + 0x251) = *(undefined1 *)(param_1[0xa7] + 0x474);
    *(undefined1 *)((longlong)param_1 + 0x252) = *(undefined1 *)(param_1[0xa7] + 0x478);
    *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(param_1[0xa7] + 0x47c);
    *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_1[0xa7] + 0x494);
    lVar11 = param_1[0xa7];
    *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)(lVar11 + 0x480);
    *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(lVar11 + 0x484);
    *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)(lVar11 + 0x4ec);
    FUN_140d4aaa0(plVar15,*(undefined4 *)(param_1[0xa7] + 0x240));
    lVar11 = param_1[0xa7];
    local_3178 = 0;
    if (0 < *(int *)(lVar11 + 0x240)) {
      local_3168 = 0;
      do {
        FUN_141545220(local_2918,*(undefined8 *)(*(longlong *)(lVar11 + 0x248) + 8 + local_3168));
        puVar13 = local_28d8;
        if (0xf < (ulonglong)local_28d8[3]) {
          puVar13 = (undefined8 *)*local_28d8;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_3a8,puVar13);
        psVar7 = local_2a0;
        iVar29 = (int)param_1[0x99];
        *(int *)(param_1 + 0x99) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x4cc) < iVar29 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar15,iVar29);
        }
        lVar11 = (longlong)iVar29 * 0x38 + *plVar15;
        local_2f40 = 0;
        local_2f38 = 0;
        if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
          lVar26 = -1;
          do {
            lVar32 = lVar26 + 1;
            lVar26 = lVar26 + 1;
          } while (psVar7[lVar32] != 0);
          uVar20 = (int)lVar26 + 1;
          local_2f38 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f40,0);
          }
          FGenericPlatformString::Memcpy(local_2f40,psVar7,(longlong)(int)uVar20 * 2);
        }
        FUN_140a9ef00(lVar11,&local_2f40);
        if (local_2f40 != 0) {
          FMemory::Free();
        }
        if (local_2a8 != 0) {
          FMemory::Free();
        }
        if (0 < local_28e8) {
          uVar12 = uVar27;
          uVar33 = uVar27;
          do {
            FUN_1415451a0(local_2c58,*(undefined8 *)(local_28e0 + 8 + uVar33));
            iVar29 = *(int *)(lVar11 + 0x30);
            *(int *)(lVar11 + 0x30) = iVar29 + 1;
            if (*(int *)(lVar11 + 0x34) < iVar29 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(lVar11 + 0x28),iVar29);
            }
            puVar14 = (undefined4 *)((longlong)iVar29 * 0x10 + *(longlong *)(lVar11 + 0x28));
            *puVar14 = 0;
            *(undefined1 *)(puVar14 + 1) = 0;
            puVar14[2] = 0;
            *(undefined1 *)(puVar14 + 3) = 0;
            *puVar14 = local_2c48;
            *(undefined1 *)(puVar14 + 1) = local_2c40;
            puVar14[2] = local_2c44;
            *(undefined1 *)(puVar14 + 3) = local_2c3f;
            FComboBoxStyle::~FComboBoxStyle(local_2c58);
            uVar20 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar20;
            uVar33 = uVar33 + 8;
          } while ((int)uVar20 < local_28e8);
        }
        FUN_1415456d0(local_2918);
        local_3178 = local_3178 + 1;
        lVar11 = param_1[0xa7];
        local_3168 = local_3168 + 8;
      } while ((int)local_3178 < *(int *)(lVar11 + 0x240));
    }
    FUN_140d4ae80(param_1 + 0xa1,*(undefined4 *)(lVar11 + 0x270));
    lVar11 = param_1[0xa7];
    local_3174 = 0;
    uVar12 = uVar27;
    if (0 < *(int *)(lVar11 + 0x270)) {
      do {
        iVar29 = (int)param_1[0xa2];
        *(int *)(param_1 + 0xa2) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x514) < iVar29 + 1) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 0xa1,iVar29);
        }
        puVar14 = (undefined4 *)((longlong)iVar29 * 0x60 + param_1[0xa1]);
        *(undefined8 *)(puVar14 + 4) = 0;
        *(undefined8 *)(puVar14 + 6) = 0;
        pppuVar18 = (undefined ***)(puVar14 + 8);
        *pppuVar18 = (undefined **)0x0;
        *(undefined8 *)(puVar14 + 10) = 0;
        *(undefined8 *)(puVar14 + 0x10) = 0;
        *(undefined8 *)(puVar14 + 0x12) = 0;
        *(undefined8 *)(puVar14 + 0x14) = 0;
        puVar14[0xc] = 0xffffffff;
        puVar14[0xd] = 0;
        local_3008 = pppuVar18;
        FSoftObjectPath::Reset();
        puVar14[0xe] = 0;
        *(undefined8 *)(puVar14 + 0x16) = 0;
        local_3178 = 0;
        *puVar14 = *(undefined4 *)
                    (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x278) + 8 + uVar12) + 0x48);
        *(undefined1 *)(puVar14 + 1) =
             *(undefined1 *)
              (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x278) + 8 + uVar12) + 0x4c);
        *(undefined1 *)((longlong)puVar14 + 5) =
             *(undefined1 *)
              (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x278) + 8 + uVar12) + 0x4d);
        puVar14[2] = *(undefined4 *)
                      (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x278) + 8 + uVar12) + 0x50);
        puVar14[3] = *(undefined4 *)
                      (*(longlong *)(*(longlong *)(param_1[0xa7] + 0x278) + 8 + uVar12) + 0x54);
        lVar11 = param_1[0xa7];
        if (0 < *(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x278) + 8 + uVar12) + 0x18)) {
          local_3070 = 0;
          do {
            iVar29 = puVar14[6];
            local_3088 = *(undefined ****)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(lVar11 + 0x278) + 8 + uVar12) + 0x20) + 8 +
                          local_3070);
            puVar14[6] = iVar29 + 1;
            if ((int)puVar14[7] < iVar29 + 1) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(puVar14 + 4,iVar29);
            }
            puVar31 = (undefined4 *)((longlong)iVar29 * 0x30 + *(longlong *)(puVar14 + 4));
            *(undefined8 *)(puVar31 + 6) = 0;
            *(undefined8 *)(puVar31 + 8) = 0;
            *(undefined8 *)(puVar31 + 10) = 0;
            puVar31[2] = 0xffffffff;
            puVar31[3] = 0;
            FSoftObjectPath::Reset(puVar31 + 6);
            puVar31[4] = 0;
            *puVar31 = *(undefined4 *)(local_3088 + 3);
            ppuVar24 = local_3088[2];
            if ((undefined *)0xf < ppuVar24[3]) {
              ppuVar24 = (undefined **)*ppuVar24;
            }
            TStringConversion<TStringConvert<char,wchar_t>,128>::
            TStringConversion<TStringConvert<char,wchar_t>,128>(local_288,ppuVar24);
            psVar7 = local_180;
            local_3028 = 0;
            local_3020 = 0;
            if ((local_180 != (short *)0x0) && (*local_180 != 0)) {
              lVar11 = -1;
              do {
                lVar11 = lVar11 + 1;
              } while (local_180[lVar11] != 0);
              uVar20 = (int)lVar11 + 1;
              local_3168 = CONCAT44(local_3168._4_4_,uVar20);
              local_3020 = (ulonglong)uVar20;
              if (0 < (int)uVar20) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3028,0);
                uVar20 = (uint)local_3168;
              }
              FGenericPlatformString::Memcpy(local_3028,psVar7,(longlong)(int)uVar20 * 2);
            }
            uVar16 = FString::FString(local_28b8,&local_3028);
            lVar11 = FSoftObjectPath::FSoftObjectPath(local_27c8,uVar16);
            puVar31[2] = 0xffffffff;
            puVar31[3] = 0;
            uVar16 = FSoftObjectPath::FSoftObjectPath(local_27f8,lVar11);
            FSoftObjectPath::operator=(puVar31 + 6,uVar16);
            puVar31[4] = 0;
            if (*(longlong *)(lVar11 + 8) != 0) {
              FMemory::Free();
            }
            if (local_3028 != 0) {
              FMemory::Free();
            }
            if (local_188 != 0) {
              FMemory::Free();
            }
            local_3178 = local_3178 + 1;
            lVar11 = param_1[0xa7];
            local_3070 = local_3070 + 8;
            pppuVar18 = local_3008;
          } while ((int)local_3178 <
                   *(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x278) + 8 + uVar12) + 0x18));
        }
        plVar15 = *(longlong **)(*(longlong *)(*(longlong *)(lVar11 + 0x278) + 8 + uVar12) + 0x40);
        if (0xf < (ulonglong)plVar15[3]) {
          plVar15 = (longlong *)*plVar15;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,plVar15);
        psVar7 = local_60;
        local_3018 = 0;
        local_3010 = 0;
        if ((local_60 != (short *)0x0) && (*local_60 != 0)) {
          lVar11 = -1;
          do {
            lVar26 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_60[lVar26] != 0);
          uVar20 = (int)lVar11 + 1;
          local_3010 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3018,0);
          }
          FGenericPlatformString::Memcpy(local_3018,psVar7,(longlong)(int)uVar20 * 2);
        }
        FUN_140d4c7f0(puVar14,&local_3018);
        if (local_3018 != 0) {
          FMemory::Free();
        }
        if (local_68 != 0) {
          FMemory::Free();
        }
        lVar11 = param_1[0xa7];
        uVar33 = uVar27;
        uVar17 = uVar27;
        if (0 < *(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x278) + 8 + uVar12) + 0x30)) {
          do {
            iVar29 = *(int *)(pppuVar18 + 1);
            local_3170 = *(undefined1 *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar11 + 0x278) + 8 + uVar12) + 0x38) + 8
                            + uVar17) + 0x10);
            *(int *)(pppuVar18 + 1) = iVar29 + 1;
            if (*(int *)((longlong)pppuVar18 + 0xc) < iVar29 + 1) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(pppuVar18,iVar29);
            }
            uVar20 = (int)uVar33 + 1;
            *(undefined1 *)((longlong)iVar29 + (longlong)*pppuVar18) = local_3170;
            lVar11 = param_1[0xa7];
            uVar33 = (ulonglong)uVar20;
            uVar17 = uVar17 + 8;
          } while ((int)uVar20 <
                   *(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x278) + 8 + uVar12) + 0x30));
        }
        local_3174 = local_3174 + 1;
        uVar12 = uVar12 + 8;
      } while (local_3174 < *(int *)(lVar11 + 0x270));
    }
    iVar29 = FUN_1439f2ae0(lVar11 + 0x280);
    plVar15 = param_1 + 0x42;
    *(undefined4 *)(param_1 + 0x43) = 0;
    if (*(int *)((longlong)param_1 + 0x21c) < iVar29) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar15,iVar29);
    }
    iVar29 = FUN_1439f2ae0(param_1[0xa7] + 0x280);
    if (0 < iVar29) {
      do {
        puVar14 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(param_1[0xa7] + 0x280,uVar27);
        iVar29 = (int)param_1[0x43];
        uVar10 = *puVar14;
        *(int *)(param_1 + 0x43) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0x21c) < iVar29 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar15,iVar29);
        }
        uVar20 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar20;
        *(undefined4 *)(*plVar15 + (longlong)iVar29 * 4) = uVar10;
        iVar29 = FUN_1439f2ae0(param_1[0xa7] + 0x280);
      } while ((int)uVar20 < iVar29);
    }
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1[0xa7] + 0x4b4);
    lVar11 = param_1[0xa7];
    *(undefined4 *)((longlong)param_1 + 0x224) = *(undefined4 *)(lVar11 + 0x4b8);
    *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(lVar11 + 0x4bc);
    *(undefined4 *)((longlong)param_1 + 0x22c) = *(undefined4 *)(lVar11 + 0x4dc);
    *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)(param_1[0xa7] + 0x4e0);
    *(undefined1 *)((longlong)param_1 + 0x231) = *(undefined1 *)(param_1[0xa7] + 0x4e1);
    *(undefined4 *)((longlong)param_1 + 0x24c) = *(undefined4 *)(param_1[0xa7] + 0x4d8);
    *(undefined4 *)((longlong)param_1 + 0x234) = *(undefined4 *)(param_1[0xa7] + 0x4c0);
    lVar11 = param_1[0xa7];
    *(undefined4 *)(param_1 + 0x47) = *(undefined4 *)(lVar11 + 0x4c4);
    *(undefined4 *)((longlong)param_1 + 0x23c) = *(undefined4 *)(lVar11 + 0x4c8);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar11 + 0x4cc);
    lVar11 = param_1[0xa7];
    *(undefined4 *)((longlong)param_1 + 0x244) = *(undefined4 *)(lVar11 + 0x4d0);
    *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(lVar11 + 0x4d4);
    if (*(char *)((longlong)param_1 + 0xfc) == '\0') {
      if (*(float *)((longlong)param_1 + 0xec) == 0.1) {
        *(undefined4 *)((longlong)param_1 + 0xec) = 0x3e19999a;
      }
      if (*(float *)((longlong)param_1 + 0xf4) == 0.1) {
        *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3e19999a;
      }
      *(undefined1 *)((longlong)param_1 + 0xfc) = 1;
      lVar11 = param_1[0xa7];
    }
    uVar16 = 1;
    *(undefined4 *)(param_1 + 0xa3) = *(undefined4 *)(lVar11 + 0x4e4);
  }
  if (local_3048 != 0) {
    FMemory::Free();
  }
  return uVar16;
}



// FUNCTION 140d32ac0 FUN_140d32ac0 body=31003 status=FAIL
// SIG undefined FUN_140d32ac0(void)
/* DECOMPILE FAILED */

// FUNCTION 140d3a3e0 FUN_140d3a3e0 body=62 status=ok
// SIG undefined FUN_140d3a3e0(void)

void FUN_140d3a3e0(longlong *param_1)

{
  int iVar1;
  
  if ((char)param_1[0x25] == '\x03') {
    iVar1 = rand();
    *(int *)(param_1 + 0xa1) = iVar1;
    FUN_140d3d080(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140d3a411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x600))(param_1);
    return;
  }
  return;
}



// FUNCTION 140d3a420 FUN_140d3a420 body=38 status=ok
// SIG undefined FUN_140d3a420(void)

undefined8 FUN_140d3a420(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_140c12480();
    if (lVar1 != 0) {
      uVar2 = UUGMenuManager::GetFadeHUD(lVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140d3a450 FUN_140d3a450 body=140 status=ok
// SIG undefined FUN_140d3a450(void)

longlong * FUN_140d3a450(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = FUN_1405ec200();
  if (lVar2 != 0) {
    lVar3 = FUN_14171bfe0();
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
      lVar4 = FUN_14144bcb0();
      lVar3 = lVar2;
      do {
        if (lVar3 == lVar4) {
          *param_2 = lVar2;
          return param_2;
        }
        lVar3 = *(longlong *)(lVar3 + 0x30);
      } while (lVar3 != 0);
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 140d3a4e0 FUN_140d3a4e0 body=26 status=ok
// SIG undefined FUN_140d3a4e0(void)

undefined8 * FUN_140d3a4e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d3df30();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 140d3a500 FUN_140d3a500 body=174 status=ok
// SIG undefined FUN_140d3a500(void)

longlong FUN_140d3a500(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x168) <= param_2)) {
    iVar3 = (param_2 - *(int *)(param_1 + 0x168)) + 1;
    iVar1 = *(int *)(param_1 + 0x168);
    *(int *)(param_1 + 0x168) = iVar1 + iVar3;
    if (*(int *)(param_1 + 0x16c) < iVar1 + iVar3) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x160,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x160));
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
    }
  }
  return (longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x160);
}



// FUNCTION 140d3a5b0 FUN_140d3a5b0 body=90 status=ok
// SIG undefined FUN_140d3a5b0(void)

longlong FUN_140d3a5b0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 0x48);
  if (lVar2 != 0) {
    lVar3 = FUN_142f76400();
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



// FUNCTION 140d3a610 FUN_140d3a610 body=90 status=ok
// SIG undefined FUN_140d3a610(void)

longlong FUN_140d3a610(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 0x50);
  if (lVar2 != 0) {
    lVar3 = UUGJournalKey::GetPrivateStaticClass();
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



// FUNCTION 140d3a670 GetObjectPath body=27 status=ok
// SIG undefined GetObjectPath(void)

undefined8 UVariantObjectBinding::GetObjectPath(longlong param_1,undefined8 param_2)

{
  FSoftObjectPath::ToString(param_1 + 0x38);
  return param_2;
}



// FUNCTION 140d3a690 FUN_140d3a690 body=90 status=ok
// SIG undefined FUN_140d3a690(void)

longlong FUN_140d3a690(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar3 = UUGJournalKey::GetPrivateStaticClass();
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



// FUNCTION 140d3a6f0 FUN_140d3a6f0 body=90 status=ok
// SIG undefined FUN_140d3a6f0(void)

longlong FUN_140d3a6f0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar3 = FUN_1414adde0();
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



// FUNCTION 140d3a750 FUN_140d3a750 body=521 status=ok
// SIG undefined FUN_140d3a750(void)

undefined8 FUN_140d3a750(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  plVar2 = (longlong *)*param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar11 = (undefined8 *)0x0;
  puVar9 = puVar11;
  if (*(int *)(param_1 + 0x3e0) != *(int *)(param_1 + 0x40c)) {
    if ((plVar2 == (longlong *)0x0) || (cVar6 = (**(code **)(*plVar2 + 0x20))(), cVar6 == '\0')) {
      iVar7 = -1;
    }
    else {
      iVar7 = GetTypeHash(plVar2);
    }
    lVar8 = *(longlong *)(param_1 + 0x418);
    if (*(longlong *)(param_1 + 0x418) == 0) {
      lVar8 = param_1 + 0x410;
    }
    iVar7 = *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x420) - 1U & (longlong)iVar7) * 4);
    if (iVar7 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x3d8);
      do {
        lVar12 = (longlong)iVar7 * 0x38;
        plVar4 = *(longlong **)(lVar12 + 8 + lVar8);
        if ((((plVar4 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar4 + 0x20))(), cVar6 == '\0')) ||
            (plVar2 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*plVar2 + 0x20))(plVar2), cVar6 == '\0')) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        plVar4 = *(longlong **)(lVar12 + lVar8 + 8);
        if ((((plVar4 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar4 + 0x20))(), cVar6 == '\0')) &&
            ((plVar2 == (longlong *)0x0 ||
             (cVar6 = (**(code **)(*plVar2 + 0x20))(plVar2), cVar6 == '\0')))) ||
           ((bVar5 && (cVar6 = (**(code **)*plVar2)(plVar2,*(undefined8 *)(lVar12 + lVar8 + 8)),
                      cVar6 != '\0')))) {
          if (iVar7 != -1) {
            puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x3d8) + lVar12);
          }
          break;
        }
        lVar8 = *(longlong *)(param_1 + 0x3d8);
        iVar7 = *(int *)(lVar12 + 0x30 + lVar8);
      } while (iVar7 != -1);
    }
  }
  puVar10 = puVar9 + 5;
  if (puVar9 == (undefined8 *)0x0) {
    puVar10 = puVar11;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (puVar10 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar10;
}



// FUNCTION 140d3a960 FUN_140d3a960 body=521 status=ok
// SIG undefined FUN_140d3a960(void)

undefined8 FUN_140d3a960(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  plVar2 = (longlong *)*param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar11 = (undefined8 *)0x0;
  puVar9 = puVar11;
  if (*(int *)(param_1 + 0x430) != *(int *)(param_1 + 0x45c)) {
    if ((plVar2 == (longlong *)0x0) || (cVar6 = (**(code **)(*plVar2 + 0x20))(), cVar6 == '\0')) {
      iVar7 = -1;
    }
    else {
      iVar7 = GetTypeHash(plVar2);
    }
    lVar8 = *(longlong *)(param_1 + 0x468);
    if (*(longlong *)(param_1 + 0x468) == 0) {
      lVar8 = param_1 + 0x460;
    }
    iVar7 = *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x470) - 1U & (longlong)iVar7) * 4);
    if (iVar7 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x428);
      do {
        lVar12 = (longlong)iVar7 * 0x38;
        plVar4 = *(longlong **)(lVar12 + 8 + lVar8);
        if ((((plVar4 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar4 + 0x20))(), cVar6 == '\0')) ||
            (plVar2 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*plVar2 + 0x20))(plVar2), cVar6 == '\0')) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        plVar4 = *(longlong **)(lVar12 + lVar8 + 8);
        if ((((plVar4 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar4 + 0x20))(), cVar6 == '\0')) &&
            ((plVar2 == (longlong *)0x0 ||
             (cVar6 = (**(code **)(*plVar2 + 0x20))(plVar2), cVar6 == '\0')))) ||
           ((bVar5 && (cVar6 = (**(code **)*plVar2)(plVar2,*(undefined8 *)(lVar12 + lVar8 + 8)),
                      cVar6 != '\0')))) {
          if (iVar7 != -1) {
            puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x428) + lVar12);
          }
          break;
        }
        lVar8 = *(longlong *)(param_1 + 0x428);
        iVar7 = *(int *)(lVar12 + 0x30 + lVar8);
      } while (iVar7 != -1);
    }
  }
  puVar10 = puVar9 + 5;
  if (puVar9 == (undefined8 *)0x0) {
    puVar10 = puVar11;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (puVar10 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar10;
}



// FUNCTION 140d3ab70 FUN_140d3ab70 body=27 status=ok
// SIG undefined FUN_140d3ab70(void)

undefined8 FUN_140d3ab70(longlong param_1,undefined8 param_2)

{
  FSoftObjectPath::ToString(param_1 + 0x40);
  return param_2;
}



// FUNCTION 140d3ab90 FUN_140d3ab90 body=27 status=ok
// SIG undefined FUN_140d3ab90(void)

undefined8 FUN_140d3ab90(longlong param_1,undefined8 param_2)

{
  FSoftObjectPath::ToString(param_1 + 0x18);
  return param_2;
}



// FUNCTION 140d3abb0 FUN_140d3abb0 body=130 status=ok
// SIG undefined FUN_140d3abb0(void)

undefined8 FUN_140d3abb0(void)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686e7c8) {
    _Init_thread_header(&DAT_14686e7c8);
    if (DAT_14686e7c8 == -1) {
      FName::FName(&DAT_14686e7c0,L"OnlineSubsystemUtils",1);
      _Init_thread_footer(&DAT_14686e7c8);
    }
  }
  lVar1 = FModuleManager::GetModulePtr_Internal(DAT_14686e7c0);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x28);
  }
  return 0;
}



// FUNCTION 140d3ac40 FUN_140d3ac40 body=31 status=ok
// SIG undefined FUN_140d3ac40(void)

void FUN_140d3ac40(longlong param_1,undefined2 *param_2)

{
  *param_2 = *(undefined2 *)(param_1 + 0x1e0);
  return;
}



// FUNCTION 140d3ac60 FUN_140d3ac60 body=214 status=ok
// SIG undefined FUN_140d3ac60(void)

void FUN_140d3ac60(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x238);
  if (cVar2 != '\0') {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x238);
    lVar4 = UGameInstance::GetFirstGamePlayer(uVar3);
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0)) {
      lVar5 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140cfcaa0(lVar4);
        return;
      }
    }
  }
  uVar3 = GetTransientPackage();
  FUN_1417846f0(uVar3,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar6 = FUN_1414707f0();
  FUN_1417985e0(uVar6,uVar3,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 140d3ad40 FUN_140d3ad40 body=90 status=ok
// SIG undefined FUN_140d3ad40(void)

longlong FUN_140d3ad40(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 8);
  if (lVar2 != 0) {
    lVar3 = AInteractiveFoliageActor::GetPrivateStaticClass();
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



// FUNCTION 140d3ada0 FUN_140d3ada0 body=8 status=ok
// SIG undefined FUN_140d3ada0(void)

undefined1 FUN_140d3ada0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x17b);
}



// FUNCTION 140d3adb0 GetPreloadBinaries body=8 status=ok
// SIG undefined GetPreloadBinaries(void)

undefined1 FPluginManager::GetPreloadBinaries(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x17a);
}



// FUNCTION 140d3adc0 FUN_140d3adc0 body=125 status=ok
// SIG undefined FUN_140d3adc0(void)

undefined4 FUN_140d3adc0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_res10 [6];
  
  if ((*(longlong **)(param_2 + 8) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar1 != '\0')) {
    FUN_140d2cf20(param_1 + 0x4c8,local_res10,param_2);
    puVar2 = (undefined4 *)0x0;
    if (local_res10[0] != -1) {
      puVar2 = (undefined4 *)((longlong)local_res10[0] * 0x38 + *(longlong *)(param_1 + 0x4c8));
    }
    puVar3 = puVar2 + 10;
    if (puVar2 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    if (puVar3 != (undefined4 *)0x0) {
      return *puVar3;
    }
  }
  return 0;
}



// FUNCTION 140d3ae40 FUN_140d3ae40 body=8 status=ok
// SIG undefined FUN_140d3ae40(void)

longlong FUN_140d3ae40(longlong param_1)

{
  return param_1 + 0x308;
}



// FUNCTION 140d3ae50 FUN_140d3ae50 body=195 status=ok
// SIG undefined FUN_140d3ae50(void)

undefined8 * FUN_140d3ae50(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  *param_2 = 0;
  iVar3 = *(int *)(param_1 + 0x268);
  puVar4 = *(undefined8 **)(param_1 + 0x260);
  *(int *)(param_2 + 1) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar3,0);
  puVar2 = (undefined8 *)*param_2;
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
  return param_2;
}



// FUNCTION 140d3af20 FUN_140d3af20 body=139 status=ok
// SIG undefined FUN_140d3af20(void)

void FUN_140d3af20(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  FUN_140d47630();
  iVar1 = *(int *)(param_1 + 0x278);
  plVar2 = (longlong *)*param_2;
  for (iVar3 = *(int *)(param_2 + 1); iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar1);
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_2,param_1 + 0x270);
  return;
}



// FUNCTION 140d3afb0 FUN_140d3afb0 body=157 status=ok
// SIG undefined FUN_140d3afb0(void)

undefined4 FUN_140d3afb0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  longlong *local_18;
  longlong *local_10;
  
  local_res10[0] = 0;
  local_res18 = 0;
  FUN_1404cdd50(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x118))(local_18,local_res10);
  }
  plVar6 = local_10;
  uVar5 = local_res10[0];
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
    return uVar5;
  }
  return local_res10[0];
}



// FUNCTION 140d3b050 FUN_140d3b050 body=175 status=ok
// SIG undefined FUN_140d3b050(void)

longlong FUN_140d3b050(longlong param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x2c0) <= param_2)) {
    iVar3 = (param_2 - *(int *)(param_1 + 0x2c0)) + 1;
    iVar2 = *(int *)(param_1 + 0x2c0);
    *(int *)(param_1 + 0x2c0) = iVar2 + iVar3;
    if (*(int *)(param_1 + 0x2c4) < iVar2 + iVar3) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x2b8,iVar2);
    }
    puVar1 = (undefined2 *)(*(longlong *)(param_1 + 0x2b8) + (longlong)iVar2 * 0xc);
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 2) = 0;
      puVar1 = puVar1 + 6;
    }
  }
  return *(longlong *)(param_1 + 0x2b8) + (longlong)param_2 * 0xc;
}



// FUNCTION 140d3b100 FUN_140d3b100 body=14 status=ok
// SIG undefined FUN_140d3b100(void)

undefined8 * FUN_140d3b100(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x424);
  *param_2 = *(undefined8 *)(param_1 + 0x41c);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 140d3b110 FUN_140d3b110 body=8 status=ok
// SIG undefined FUN_140d3b110(void)

undefined1 FUN_140d3b110(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x1ba);
}



// FUNCTION 140d3b120 FUN_140d3b120 body=73 status=ok
// SIG undefined FUN_140d3b120(void)

int FUN_140d3b120(int *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 local_res8 [32];
  
  if (param_2 == 0) {
    plVar1 = (longlong *)FDateTime::Now(local_res8);
    param_2 = *plVar1;
  }
  iVar2 = 0x23 - (int)((param_2 - *(longlong *)(param_1 + 2)) / 864000000000);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  return iVar2 + *param_1;
}



// FUNCTION 140d3b170 FUN_140d3b170 body=130 status=ok
// SIG undefined FUN_140d3b170(void)

undefined8 FUN_140d3b170(void)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686e7a8) {
    _Init_thread_header(&DAT_14686e7a8);
    if (DAT_14686e7a8 == -1) {
      FName::FName(&DAT_14686e7a0,L"OnlineSubsystemUtils",1);
      _Init_thread_footer(&DAT_14686e7a8);
    }
  }
  lVar1 = FModuleManager::GetModulePtr_Internal(DAT_14686e7a0);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x18);
  }
  return 0;
}



// FUNCTION 140d3b200 FUN_140d3b200 body=56 status=ok
// SIG undefined FUN_140d3b200(void)

undefined4 FUN_140d3b200(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x198);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x1a0) * 2;
  while( true ) {
    if (plVar1 == plVar2) {
      return 0xffffffff;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 2;
  }
  return (int)plVar1[1];
}



// FUNCTION 140d3b240 FUN_140d3b240 body=86 status=ok
// SIG undefined FUN_140d3b240(void)

longlong FUN_140d3b240(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200();
  if (lVar2 != 0) {
    lVar3 = FUN_14144ec10();
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



// FUNCTION 140d3b2a0 FUN_140d3b2a0 body=235 status=ok
// SIG undefined FUN_140d3b2a0(void)

longlong FUN_140d3b2a0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 local_18 [16];
  
  iVar1 = *(int *)(param_1 + 0x140);
  if (iVar1 < 0) {
LAB_140d3b2d0:
    iVar5 = (iVar1 - *(int *)(param_1 + 0x188)) + 1;
    iVar2 = *(int *)(param_1 + 0x188);
    iVar3 = iVar2 + iVar5;
    *(int *)(param_1 + 0x188) = iVar3;
    if (*(int *)(param_1 + 0x18c) < iVar3) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x180);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x180)),0,
               (longlong)iVar5 << 4);
  }
  else {
    if (iVar1 < *(int *)(param_1 + 0x188)) goto LAB_140d3b36e;
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x188) <= iVar1)) goto LAB_140d3b2d0;
  }
  puVar4 = (undefined1 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x180));
  if (puVar4 != local_18) {
    *(undefined4 *)(puVar4 + 8) = 0;
    if (*(int *)(puVar4 + 0xc) == 0) {
      *(undefined4 *)(puVar4 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,0);
    }
  }
LAB_140d3b36e:
  return (longlong)*(int *)(param_1 + 0x140) * 0x10 + *(longlong *)(param_1 + 0x180);
}



// FUNCTION 140d3b390 FUN_140d3b390 body=14 status=ok
// SIG undefined FUN_140d3b390(void)

undefined8 * FUN_140d3b390(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x2d8);
  return param_2;
}



// FUNCTION 140d3b3a0 GetStateName body=14 status=ok
// SIG undefined GetStateName(void)

undefined8 * AController::GetStateName(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x2e0);
  return param_2;
}



// FUNCTION 140d3b3b0 FUN_140d3b3b0 body=433 status=ok
// SIG undefined FUN_140d3b3b0(void)

void FUN_140d3b3b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_14686e808) && (_Init_thread_header(&DAT_14686e808), DAT_14686e808 == -1)) {
    uVar1 = FUN_14149d910();
    FUN_14149d910();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RepGust",1);
    DAT_14686e800 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686e808);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686e800 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_14686e800 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686e800 + 0x30));
  }
  if ((*piVar5 < DAT_14686e818) && (_Init_thread_header(&DAT_14686e818), DAT_14686e818 == -1)) {
    uVar1 = FUN_14149d910();
    FUN_14149d910();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RepDirection",1);
    DAT_14686e810 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686e818);
  }
  if (0 < *(int *)(DAT_14686e810 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_14686e810 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_14686e810 + 0x30));
  }
  return;
}



// FUNCTION 140d3b570 FUN_140d3b570 body=34 status=ok
// SIG undefined FUN_140d3b570(void)

undefined8 * FUN_140d3b570(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x328);
  lVar1 = *(longlong *)(param_1 + 0x330);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 140d3b5a0 FUN_140d3b5a0 body=30 status=ok
// SIG undefined FUN_140d3b5a0(void)

undefined8 * FUN_140d3b5a0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140c498b0(param_1 + 0x20);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 140d3b5c0 FUN_140d3b5c0 body=30 status=ok
// SIG undefined FUN_140d3b5c0(void)

longlong FUN_140d3b5c0(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x158))) {
    return (longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x150);
  }
  return 0;
}



// FUNCTION 140d3b5e0 FUN_140d3b5e0 body=90 status=ok
// SIG undefined FUN_140d3b5e0(void)

longlong FUN_140d3b5e0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 0x78);
  if (lVar2 != 0) {
    lVar3 = UUGJournalKey::GetPrivateStaticClass();
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



// FUNCTION 140d3b640 FUN_140d3b640 body=90 status=ok
// SIG undefined FUN_140d3b640(void)

longlong FUN_140d3b640(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 0x50);
  if (lVar2 != 0) {
    lVar3 = UXSkinAnimationProfile::GetPrivateStaticClass();
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



// FUNCTION 140d3b6a0 GetNumBoneInfluences body=7 status=ok
// SIG undefined GetNumBoneInfluences(void)

undefined4 TGPUSkinAPEXClothVertexFactory<1>::GetNumBoneInfluences(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x418);
}



// FUNCTION 140d3b6b0 FUN_140d3b6b0 body=86 status=ok
// SIG undefined FUN_140d3b6b0(void)

longlong FUN_140d3b6b0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200();
  if (lVar2 != 0) {
    lVar3 = UTextureRenderTarget2D::GetPrivateStaticClass();
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



// FUNCTION 140d3b710 FUN_140d3b710 body=90 status=ok
// SIG undefined FUN_140d3b710(void)

longlong FUN_140d3b710(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 0x50);
  if (lVar2 != 0) {
    lVar3 = UTextureRenderTarget2D::GetPrivateStaticClass();
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



// FUNCTION 140d3b770 FUN_140d3b770 body=52 status=ok
// SIG undefined FUN_140d3b770(void)

undefined8 * FUN_140d3b770(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_140d1be90(param_2,*(undefined8 *)(param_1 + 0x2f8),*(undefined4 *)(param_1 + 0x300),0,0);
  return param_2;
}



// FUNCTION 140d3b7b0 FUN_140d3b7b0 body=90 status=ok
// SIG undefined FUN_140d3b7b0(void)

longlong FUN_140d3b7b0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 8);
  if (lVar2 != 0) {
    lVar3 = FUN_1414ba190();
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



// FUNCTION 140d3b810 FUN_140d3b810 body=90 status=ok
// SIG undefined FUN_140d3b810(void)

longlong FUN_140d3b810(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 8);
  if (lVar2 != 0) {
    lVar3 = FUN_142e19540();
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



// FUNCTION 140d3b870 AsString body=30 status=ok
// SIG undefined AsString(void)

undefined8 FLocMetadataValueString::AsString(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 8);
  return param_2;
}



// FUNCTION 140d3b890 FUN_140d3b890 body=8 status=ok
// SIG undefined FUN_140d3b890(void)

longlong FUN_140d3b890(longlong param_1)

{
  return param_1 + 0x408;
}



// FUNCTION 140d3b8a0 FUN_140d3b8a0 body=195 status=ok
// SIG undefined FUN_140d3b8a0(void)

undefined8 * FUN_140d3b8a0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  *param_2 = 0;
  iVar3 = *(int *)(param_1 + 0x1d8);
  puVar4 = *(undefined8 **)(param_1 + 0x1d0);
  *(int *)(param_2 + 1) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar3,0);
  puVar2 = (undefined8 *)*param_2;
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
  return param_2;
}



// FUNCTION 140d3b970 FUN_140d3b970 body=244 status=ok
// SIG undefined FUN_140d3b970(void)

undefined8 * FUN_140d3b970(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int local_res8 [2];
  undefined8 local_18;
  longlong *local_10;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140549810((longlong *)(param_1 + 0x1d0),local_res8);
  puVar6 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x1d0) + (longlong)local_res8[0] * 0x28);
  }
  puVar7 = puVar6 + 2;
  if (puVar6 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  if (puVar7 != (undefined8 *)0x0) {
    local_18 = *puVar7;
    local_10 = (longlong *)puVar7[1];
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    if (param_2 != &local_18) {
      *param_2 = local_18;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_10);
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
  }
  return param_2;
}



// FUNCTION 140d3ba70 FUN_140d3ba70 body=8 status=ok
// SIG undefined FUN_140d3ba70(void)

undefined1 FUN_140d3ba70(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x17d);
}



// FUNCTION 140d3ba80 FUN_140d3ba80 body=90 status=ok
// SIG undefined FUN_140d3ba80(void)

longlong FUN_140d3ba80(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar3 = UXSkinAnimationProfile::GetPrivateStaticClass();
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



// FUNCTION 140d3bae0 FUN_140d3bae0 body=90 status=ok
// SIG undefined FUN_140d3bae0(void)

longlong FUN_140d3bae0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 8);
  if (lVar2 != 0) {
    lVar3 = FUN_1413c0f50();
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



// FUNCTION 140d3bb40 FUN_140d3bb40 body=90 status=ok
// SIG undefined FUN_140d3bb40(void)

longlong FUN_140d3bb40(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar3 = UXSkinAnimationProfile::GetPrivateStaticClass();
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



// FUNCTION 140d3bba0 FUN_140d3bba0 body=86 status=ok
// SIG undefined FUN_140d3bba0(void)

longlong FUN_140d3bba0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200();
  if (lVar2 != 0) {
    lVar3 = FUN_1414a98a0();
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



// FUNCTION 140d3bc00 FUN_140d3bc00 body=90 status=ok
// SIG undefined FUN_140d3bc00(void)

longlong FUN_140d3bc00(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 8);
  if (lVar2 != 0) {
    lVar3 = FUN_142e1f230();
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



// FUNCTION 140d3bc80 FUN_140d3bc80 body=250 status=ok
// SIG undefined FUN_140d3bc80(void)

undefined8 * FUN_140d3bc80(undefined8 *param_1,undefined8 param_2)

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
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x58))(plVar5,local_28);
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



// FUNCTION 140d3bd80 FUN_140d3bd80 body=30 status=ok
// SIG undefined FUN_140d3bd80(void)

undefined8 * FUN_140d3bd80(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140c498b0(param_1 + 0x10);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 140d3bda0 FUN_140d3bda0 body=90 status=ok
// SIG undefined FUN_140d3bda0(void)

longlong FUN_140d3bda0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar3 = FUN_1414ecd30();
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



// FUNCTION 140d3be00 GetTypeHash body=88 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(longlong *param_1)

{
  code *pcVar1;
  uint uVar2;
  byte *pbVar3;
  uint *puVar4;
  undefined8 *puVar5;
  
  uVar2 = (**(code **)(*param_1 + 0x18))();
  if (uVar2 < 4) {
    pbVar3 = (byte *)(**(code **)(*param_1 + 0x10))(param_1);
    return (uint)*pbVar3;
  }
  pcVar1 = *(code **)(*param_1 + 0x10);
  if (uVar2 < 8) {
    puVar4 = (uint *)(*pcVar1)();
    return *puVar4;
  }
  puVar5 = (undefined8 *)(*pcVar1)(param_1);
  return (int)((ulonglong)*puVar5 >> 0x20) * 0x17 + (int)*puVar5;
}



// FUNCTION 140d3be60 FUN_140d3be60 body=465 status=ok
// SIG undefined FUN_140d3be60(void)

undefined8 FUN_140d3be60(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong local_68 [3];
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined **local_38;
  longlong *local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  
  TJsonReaderFactory<wchar_t>::Create(local_48,param_1);
  local_68[2] = 0;
  plStack_50 = (longlong *)0x0;
  cVar6 = FUN_1404a7f60(local_48,local_68 + 2);
  if ((cVar6 != '\0') && (local_68[2] != 0)) {
    local_68[0] = 0;
    local_68[1] = 0;
    cVar6 = FUN_1416b40a0(local_68[2],&DAT_14629aa20,local_68);
    if (cVar6 != '\0') {
      local_30 = (longlong *)0x0;
      local_38 = &PTR_FUN_143f740c8;
      local_28 = (longlong *)0x0;
      local_20 = 0;
      local_18 = 0;
      FUN_1425e3ea0(&local_38,local_68);
      if (local_30 == (longlong *)0x0) {
LAB_140d3bf1f:
        uVar7 = 0;
      }
      else {
        cVar6 = (**(code **)(*local_30 + 0x20))();
        if (cVar6 == '\0') goto LAB_140d3bf1f;
        uVar7 = 1;
      }
      local_38 = &PTR_FUN_143f740c8;
      if (local_20 != 0) {
        FMemory::Free();
      }
      plVar5 = local_28;
      local_38 = &PTR_FUN_143f73d18;
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
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      goto LAB_140d3bf9f;
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  uVar7 = 0;
LAB_140d3bf9f:
  plVar5 = plStack_50;
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
  return uVar7;
}



// FUNCTION 140d3c040 FUN_140d3c040 body=124 status=ok
// SIG undefined FUN_140d3c040(void)

void FUN_140d3c040(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = (longlong)(int)param_1[1] * 0x78 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x78) {
    if (*(char *)(lVar2 + 0x74) != '\0') {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                  (param_2,iVar1);
      }
      FUN_140d1f660((longlong)iVar1 * 0x78 + *param_2,lVar2);
    }
  }
  return;
}



// FUNCTION 140d3c0c0 FUN_140d3c0c0 body=652 status=ok
// SIG undefined FUN_140d3c0c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140d3c0c0(longlong param_1,undefined8 *param_2,float *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined8 local_68;
  float local_60;
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  uVar2 = _DAT_1464aa6e8;
  if (*(int *)(param_1 + 0x568) == 0) {
    *param_2 = _DAT_1464aa6e0;
    param_2[1] = uVar2;
  }
  else {
    local_68 = *(undefined8 *)param_3;
    fVar6 = *(float *)(param_1 + 0x544);
    if ((*param_3 < fVar6) || (fVar6 = *(float *)(param_1 + 0x550), fVar6 < *param_3)) {
      uVar1 = (ulonglong)local_68 >> 0x20;
      local_68 = CONCAT44((int)uVar1,fVar6);
    }
    fVar6 = *(float *)(param_1 + 0x548);
    if ((param_3[1] < fVar6) || (fVar6 = *(float *)(param_1 + 0x554), fVar6 < param_3[1])) {
      local_68 = CONCAT44(fVar6,(undefined4)local_68);
    }
    fVar6 = *(float *)(param_1 + 0x54c);
    if ((param_3[2] < fVar6) ||
       (fVar6 = *(float *)(param_1 + 0x558), local_60 = param_3[2], fVar6 < param_3[2])) {
      local_60 = fVar6;
    }
    FUN_140d3c400(fVar6,&local_48,&local_68);
    if (((local_48 == 0.0) && (fStack_44 == 0.0)) && (fStack_40 == 0.0)) {
      local_48 = 1.0;
    }
    else {
      fVar7 = fStack_44 * fStack_44 + local_48 * local_48 + fStack_40 * fStack_40;
      fVar6 = fStack_44;
      fVar8 = fStack_40;
      fVar5 = local_48;
      if ((fVar7 != 1.0) &&
         (fVar6 = DAT_1468b5d94, fVar8 = DAT_1468b5d98, fVar5 = DAT_1468b5d90, 1e-08 <= fVar7)) {
        auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar8 = auVar9._0_4_;
        fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
        fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
        fVar5 = fVar8 * local_48;
        fVar6 = fVar8 * fStack_44;
        fVar8 = fVar8 * fStack_40;
      }
      local_48 = fVar5;
      fStack_44 = fVar6;
      fStack_40 = fVar8;
      pfVar3 = (float *)FRotator::Vector(param_1 + 0x4e0,&local_68);
      pfVar4 = (float *)FRotator::Vector(param_1 + 0x528,local_58);
      fStack_3c = fStack_3c *
                  (*pfVar3 * *pfVar4 * 2.0 + pfVar3[1] * pfVar4[1] * 2.0 +
                  pfVar3[2] * pfVar4[2] * 2.0);
    }
    *param_2 = CONCAT44(fStack_44,local_48);
    param_2[1] = CONCAT44(fStack_3c,fStack_40);
  }
  return param_2;
}



// FUNCTION 140d3c350 FUN_140d3c350 body=172 status=ok
// SIG undefined FUN_140d3c350(void)

undefined8 *
FUN_140d3c350(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res20 [8];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  
  *param_4 = 0;
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
  if (((lVar3 != 0) && (cVar2 = UWorld::IsGameWorld(lVar3), cVar2 != '\0')) &&
     (plVar1 = *(longlong **)(lVar3 + 0x1b8), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x1c0))(plVar1,param_3,&local_30,param_4,local_38,local_res20);
    *param_1 = local_30;
    *(undefined4 *)(param_1 + 1) = local_28;
    return param_1;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 140d3c400 FUN_140d3c400 body=1887 status=ok
// SIG undefined FUN_140d3c400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_140d3c400(longlong param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_158 [76];
  
  if (0 < *(int *)(param_1 + 0x568)) {
    iVar3 = *(int *)(param_1 + 0x538);
    lVar10 = 0;
    fVar16 = ((*param_3 - (float)*(undefined8 *)(param_1 + 0x544)) * (float)iVar3) /
             (*(float *)(param_1 + 0x550) - *(float *)(param_1 + 0x544));
    fVar19 = ((param_3[1] - (float)((ulonglong)*(undefined8 *)(param_1 + 0x544) >> 0x20)) *
             (float)*(int *)(param_1 + 0x53c)) /
             (*(float *)(param_1 + 0x554) - *(float *)(param_1 + 0x548));
    fVar14 = ((param_3[2] - *(float *)(param_1 + 0x54c)) * (float)*(int *)(param_1 + 0x540)) /
             (*(float *)(param_1 + 0x558) - *(float *)(param_1 + 0x54c));
    fVar13 = fVar14;
    do {
      lVar7 = 0;
      do {
        lVar9 = 0;
        lVar1 = lVar7 + lVar10 * 2;
        iVar6 = 1;
        do {
          fVar17 = -0.5 - (fVar16 + fVar16);
          fVar15 = (fVar16 + fVar16) - 0.5;
          if (lVar10 == 0) {
            iVar5 = (int)ROUND(fVar15) >> 1;
          }
          else {
            iVar5 = -((int)ROUND(fVar17) >> 1);
          }
          fVar20 = -0.5 - (fVar19 + fVar19);
          fVar18 = (fVar19 + fVar19) - 0.5;
          if (lVar7 == 0) {
            iVar8 = (int)ROUND(fVar18) >> 1;
          }
          else {
            iVar8 = -((int)ROUND(fVar20) >> 1);
          }
          fVar21 = (fVar14 + fVar14) - 0.5;
          fVar22 = -0.5 - (fVar14 + fVar14);
          if (lVar9 == 0) {
            iVar4 = (int)ROUND(fVar21) >> 1;
          }
          else {
            iVar4 = -((int)ROUND(fVar22) >> 1);
          }
          if ((((-1 < iVar5) && (iVar5 < iVar3)) && (-1 < iVar8)) &&
             (((iVar8 < *(int *)(param_1 + 0x53c) && (-1 < iVar4)) &&
              (iVar4 < *(int *)(param_1 + 0x540))))) {
            fVar13 = *(float *)(*(longlong *)(param_1 + 0x560) +
                               (longlong)
                               ((iVar4 * *(int *)(param_1 + 0x53c) + iVar8) * iVar3 + iVar5) * 4);
          }
          lVar2 = lVar9 + lVar1 * 2;
          fVar11 = (float)((uint)fVar13 >> 0x10 & 0xff) * 0.003921569;
          local_158[lVar2] = (fVar11 + fVar11) - 1.0;
          fVar11 = (float)((uint)fVar13 >> 8 & 0xff) * 0.003921569;
          fVar12 = (float)((uint)fVar13 & 0xff) * 0.003921569;
          local_158[lVar2 + 8] = (fVar11 + fVar11) - 1.0;
          local_158[lVar2 + 0x10] = (fVar12 + fVar12) - 1.0;
          local_158[lVar2 + 0x18] = (float)((uint)fVar13 >> 0x18) * 0.003921569;
          if (lVar10 == 0) {
            iVar5 = (int)ROUND(fVar15) >> 1;
          }
          else {
            iVar5 = -((int)ROUND(fVar17) >> 1);
          }
          if (lVar7 == 0) {
            iVar8 = (int)ROUND(fVar18) >> 1;
          }
          else {
            iVar8 = -((int)ROUND(fVar20) >> 1);
          }
          if (iVar6 == 0) {
            iVar4 = (int)ROUND(fVar21) >> 1;
          }
          else {
            iVar4 = -((int)ROUND(fVar22) >> 1);
          }
          if (((-1 < iVar5) && (iVar5 < iVar3)) &&
             ((-1 < iVar8 &&
              (((iVar8 < *(int *)(param_1 + 0x53c) && (-1 < iVar4)) &&
               (iVar4 < *(int *)(param_1 + 0x540))))))) {
            fVar13 = *(float *)(*(longlong *)(param_1 + 0x560) +
                               (longlong)
                               ((iVar4 * *(int *)(param_1 + 0x53c) + iVar8) * iVar3 + iVar5) * 4);
          }
          lVar2 = lVar9 + lVar1 * 2;
          iVar6 = iVar6 + 2;
          lVar9 = lVar9 + 2;
          fVar15 = (float)((uint)fVar13 >> 0x10 & 0xff) * 0.003921569;
          local_158[lVar2 + 1] = (fVar15 + fVar15) - 1.0;
          fVar15 = (float)((uint)fVar13 >> 8 & 0xff) * 0.003921569;
          fVar17 = (float)((uint)fVar13 & 0xff) * 0.003921569;
          local_158[lVar2 + 9] = (fVar15 + fVar15) - 1.0;
          local_158[lVar2 + 0x11] = (fVar17 + fVar17) - 1.0;
          local_158[lVar2 + 0x19] = (float)((uint)fVar13 >> 0x18) * 0.003921569;
        } while (lVar9 < 2);
        lVar7 = lVar7 + 1;
      } while (lVar7 < 2);
      lVar10 = lVar10 + 1;
    } while (lVar10 < 2);
    fVar16 = fVar16 - (float)((int)ROUND((fVar16 + fVar16) - 0.5) >> 1);
    fVar15 = (local_158[5] - local_158[1]) * fVar16 + local_158[1];
    fVar19 = fVar19 - (float)((int)ROUND((fVar19 + fVar19) - 0.5) >> 1);
    fVar13 = (local_158[4] - local_158[0]) * fVar16 + local_158[0];
    fVar14 = fVar14 - (float)((int)ROUND((fVar14 + fVar14) - 0.5) >> 1);
    fVar13 = (((local_158[6] - local_158[2]) * fVar16 + local_158[2]) - fVar13) * fVar19 + fVar13;
    fVar17 = (local_158[0xd] - local_158[9]) * fVar16 + local_158[9];
    *param_2 = (((((local_158[7] - local_158[3]) * fVar16 + local_158[3]) - fVar15) * fVar19 +
                fVar15) - fVar13) * fVar14 + fVar13;
    fVar13 = (local_158[0xc] - local_158[8]) * fVar16 + local_158[8];
    fVar13 = (((local_158[0xe] - local_158[10]) * fVar16 + local_158[10]) - fVar13) * fVar19 +
             fVar13;
    param_2[1] = (((((local_158[0xf] - local_158[0xb]) * fVar16 + local_158[0xb]) - fVar17) * fVar19
                  + fVar17) - fVar13) * fVar14 + fVar13;
    fVar13 = (local_158[0x14] - local_158[0x10]) * fVar16 + local_158[0x10];
    fVar15 = (local_158[0x15] - local_158[0x11]) * fVar16 + local_158[0x11];
    fVar13 = (((local_158[0x16] - local_158[0x12]) * fVar16 + local_158[0x12]) - fVar13) * fVar19 +
             fVar13;
    fVar17 = (local_158[0x1d] - local_158[0x19]) * fVar16 + local_158[0x19];
    param_2[2] = (((((local_158[0x17] - local_158[0x13]) * fVar16 + local_158[0x13]) - fVar15) *
                   fVar19 + fVar15) - fVar13) * fVar14 + fVar13;
    fVar13 = (local_158[0x1c] - local_158[0x18]) * fVar16 + local_158[0x18];
    fVar13 = (((local_158[0x1e] - local_158[0x1a]) * fVar16 + local_158[0x1a]) - fVar13) * fVar19 +
             fVar13;
    param_2[3] = (((((local_158[0x1f] - local_158[0x1b]) * fVar16 + local_158[0x1b]) - fVar17) *
                   fVar19 + fVar17) - fVar13) * fVar14 + fVar13;
  }
  return param_2;
}



// FUNCTION 140d3cb60 FUN_140d3cb60 body=333 status=ok
// SIG undefined FUN_140d3cb60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140d3cb60(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90 [2];
  undefined8 local_88;
  longlong local_80;
  char local_6c;
  longlong *local_60;
  longlong local_58;
  undefined8 local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
  if (lVar1 != 0) {
    plVar5 = (longlong *)0x0;
    plVar2 = (longlong *)FUN_14149d910();
    local_98 = plVar5;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = (longlong *)FUN_14149d910();
      plVar4 = plVar2;
      do {
        local_98 = plVar2;
        if (plVar4 == plVar3) break;
        plVar4 = (longlong *)plVar4[6];
        local_98 = plVar5;
      } while (plVar4 != (longlong *)0x0);
    }
    local_90[0] = 5;
    local_38 = '\0';
    local_a8 = lVar1;
    FUN_14044bc80(&local_88,&local_a8,&local_98);
    FUN_14045a130(local_90);
    if (local_6c == '\0') {
      plVar5 = local_60;
    }
    if (local_38 != '\0') {
      local_38 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(local_88,local_40);
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (local_80 != 0) {
        FMemory::Free();
      }
    }
    if (plVar5 != (longlong *)0x0) {
      local_a0 = (undefined4)param_3[1];
      local_a8 = *param_3;
      (**(code **)(*plVar5 + 0x6f8))(plVar5,param_1,&local_a8);
    }
  }
  return param_1;
}



// FUNCTION 140d3ccb0 FUN_140d3ccb0 body=34 status=ok
// SIG undefined FUN_140d3ccb0(void)

undefined8 * FUN_140d3ccb0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x228);
  lVar1 = *(longlong *)(param_1 + 0x230);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 140d3cce0 FUN_140d3cce0 body=295 status=ok
// SIG undefined FUN_140d3cce0(void)

void FUN_140d3cce0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  undefined4 uStack_2c;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x238);
  if (cVar3 != '\0') {
    uVar8 = 0;
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x238);
    plVar1 = (longlong *)(lVar4 + 0xc30);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar5 != (longlong *)0x0) {
      plVar5[1] = param_1;
      *plVar5 = (longlong)&PTR_GetPoolName_143fc2050;
      *(undefined4 *)(plVar5 + 2) = 0x40d3f740;
      *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
      *(undefined4 *)(plVar5 + 3) = 0;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_2c;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar6;
      *plVar5 = (longlong)&PTR_GetPoolName_143fc2098;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
      iVar2 = *(int *)(lVar4 + 0xc38);
      uVar8 = *puVar7;
      *(int *)(lVar4 + 0xc38) = iVar2 + 1;
      if (*(int *)(lVar4 + 0xc3c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar7 = plVar5;
      *(undefined4 *)(puVar7 + 1) = 3;
    }
    *(undefined8 *)(param_1 + 0x2d0) = uVar8;
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x238);
    FUN_140becd00(uVar8,param_2);
  }
  return;
}



// FUNCTION 140d3ce10 FUN_140d3ce10 body=179 status=ok
// SIG undefined FUN_140d3ce10(void)

undefined8 FUN_140d3ce10(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x518);
  lVar1 = lVar4 + (longlong)*(int *)(param_1 + 0x520) * 0x28;
  while( true ) {
    if (lVar4 == lVar1) {
      return 0;
    }
    if (((*(longlong **)(lVar4 + 8) == (longlong *)0x0) ||
        (cVar3 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x20))(), cVar3 == '\0')) ||
       (cVar3 = (**(code **)(*(longlong *)*param_2 + 0x20))(), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((((*(longlong **)(lVar4 + 8) == (longlong *)0x0) ||
         (cVar3 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x20))(), cVar3 == '\0')) &&
        (cVar3 = (**(code **)(*(longlong *)*param_2 + 0x20))(), cVar3 == '\0')) ||
       ((bVar2 && (cVar3 = (**(code **)**(undefined8 **)(lVar4 + 8))
                                     (*(undefined8 **)(lVar4 + 8),*param_2), cVar3 != '\0'))))
    break;
    lVar4 = lVar4 + 0x28;
  }
  return 1;
}



// FUNCTION 140d3ced0 FUN_140d3ced0 body=52 status=ok
// SIG undefined FUN_140d3ced0(void)

ulonglong FUN_140d3ced0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x1a8);
  plVar1 = plVar2 + *(int *)(param_1 + 0x1b0);
  if (plVar2 != plVar1) {
    do {
      if (*plVar2 == *param_2) {
        return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
  }
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}



// FUNCTION 140d3cf10 FUN_140d3cf10 body=154 status=ok
// SIG undefined FUN_140d3cf10(void)

void FUN_140d3cf10(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  longlong local_res8;
  int local_res18 [4];
  
  local_res18[0] = 0;
  FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
            (local_res18,param_3 * 4,param_2,param_3);
  *(int *)(param_1 + 0x90) = local_res18[0];
  iVar1 = local_res18[0] + param_4;
  TInlineAllocator<128,FDefaultAllocator>::ForElementType<char>::ResizeAllocation(param_1,0,iVar1,1)
  ;
  local_res8 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    local_res8 = param_1;
  }
  *(longlong *)(param_1 + 0x88) = local_res8;
  FTCHARToUTF8_Convert::Convert_Impl<char_*>(&local_res8,iVar1,param_2,param_3 + param_4);
  return;
}



// FUNCTION 140d3cfb0 FUN_140d3cfb0 body=193 status=ok
// SIG undefined FUN_140d3cfb0(void)

void FUN_140d3cfb0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  FUN_140520750();
  if ((param_2 != 0) && (lVar5 = *(longlong *)(param_2 + 400), lVar5 != 0)) {
    lVar2 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140d3d016;
  }
  lVar5 = 0;
LAB_140d3d016:
  FWeakObjectPtr::operator=(param_1 + 0x238,lVar5);
  puVar3 = (undefined8 *)FName::FName(local_res8,L"GbxShiftOverlay",1);
  plVar4 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar3);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = param_1 + 0x60;
    if (param_1 == 0) {
      lVar5 = 0;
    }
    (**(code **)(*plVar4 + 0xc0))(plVar4,lVar5);
  }
  return;
}



// FUNCTION 140d3d080 FUN_140d3d080 body=264 status=ok
// SIG undefined FUN_140d3d080(void)

void FUN_140d3d080(longlong param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  
  *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_1 + 0x534);
  *(undefined4 *)(param_1 + 0x50c) = 0;
  fVar4 = *(float *)(param_1 + 0x47c);
  uVar3 = *(int *)(param_1 + 0x508) * 0xbb38435 + 0x3619636b;
  fVar1 = (float)(uVar3 & 0x7fffff | 0x3f800000);
  fVar2 = (float)(uVar3 * 0x338435 + 0x19636b & 0x7fffff | 0x3f800000);
  fVar4 = ((fVar1 - (float)(int)fVar1) * (fVar4 + fVar4) - fVar4) + *(float *)(param_1 + 0x478);
  *(float *)(param_1 + 0x510) = fVar4;
  *(float *)(param_1 + 0x514) = fVar4 * *(float *)(param_1 + 0x480);
  *(float *)(param_1 + 0x51c) =
       (fVar2 - (float)(int)fVar2) * (*(float *)(param_1 + 0x48c) - *(float *)(param_1 + 0x488)) +
       *(float *)(param_1 + 0x488);
  if (*(char *)(param_1 + 0x128) == '\x03') {
    fVar4 = (float)FUN_142c49730(param_1 + 0x470);
    if (fVar4 <= 0.1) {
      fVar4 = 0.1;
    }
    *(float *)(param_1 + 0x520) = fVar4;
  }
  return;
}



// FUNCTION 140d3d190 FUN_140d3d190 body=476 status=ok
// SIG undefined FUN_140d3d190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d3d190(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined ****local_90;
  longlong local_88 [2];
  undefined **local_78;
  undefined8 local_70;
  int local_68;
  undefined ***local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  wchar_t *local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((DAT_1464c9c20 != '\0') && (0 < *(int *)(param_1 + 0x70))) {
    local_78 = &PTR_FUN_1445109b8;
    local_70 = *(undefined8 *)(param_1 + 0x68);
    local_68 = *(int *)(param_1 + 0x70) * 4;
    local_58 = &local_78;
    local_30 = L"FOakWindVectorFieldResource";
    local_90 = &local_58;
    local_b0 = *(undefined4 *)(param_1 + 0x60);
    local_98 = 8;
    lVar7 = 0;
    local_a0 = 1;
    local_50 = 0;
    local_48 = 1;
    local_44 = _DAT_1468b5d78;
    uStack_40 = uRam00000001468b5d7c;
    uStack_3c = uRam00000001468b5d80;
    uStack_38 = uRam00000001468b5d84;
    local_34 = 0;
    local_28 = 0;
    local_20 = 0;
    local_a8 = 2;
    local_b8 = *(undefined4 *)(param_1 + 0x5c);
    (**(code **)(*DAT_146ab6358 + 0x5f8))
              (DAT_146ab6358,local_88,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x58));
    plVar1 = (longlong *)(param_1 + 0x50);
    if (plVar1 != local_88) {
      puVar4 = (undefined8 *)*plVar1;
      *plVar1 = local_88[0];
      local_88[0] = 0;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar4 + 1);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          if ((*(char *)(puVar4 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
            LOCK();
            bVar8 = *(int *)((longlong)puVar4 + 0xc) == 0;
            if (bVar8) {
              *(int *)((longlong)puVar4 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar8) {
              uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar6 != 0) {
                lVar7 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar7 + 8) = puVar4;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(int *)(param_1 + 0x74) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x68,0);
    }
  }
  return;
}



// FUNCTION 140d3d370 FUN_140d3d370 body=548 status=ok
// SIG undefined FUN_140d3d370(void)

void FUN_140d3d370(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  
  FUN_140d4d540(param_1,param_2[2]);
  iVar2 = (int)param_2[1];
  lVar5 = (longlong)iVar2;
  FUN_140d2b6e0(param_1,iVar2);
  if (0 < iVar2) {
    lVar9 = 0;
    do {
      plVar8 = (longlong *)(*param_2 + lVar9);
      if (*plVar8 != 0) {
        lVar4 = FUN_142f71d80();
        for (lVar3 = *plVar8; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
          if (lVar3 == lVar4) {
            if (*plVar8 != 0) {
              iVar2 = (int)param_1[1];
              *(int *)(param_1 + 1) = iVar2 + 1;
              if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
                TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::
                ResizeGrow(param_1,iVar2);
              }
              puVar6 = (undefined2 *)(*param_1 + (longlong)iVar2 * 0x78);
              *puVar6 = 4;
              *(undefined1 *)(puVar6 + 1) = 0;
              *(undefined8 *)(puVar6 + 4) = 0;
              *(undefined8 *)(puVar6 + 8) = 0;
              *(undefined1 *)(puVar6 + 0xc) = 0;
              *(undefined8 *)(puVar6 + 0x1c) = 0;
              *(undefined8 *)(puVar6 + 0x20) = 0;
              *(undefined4 *)(puVar6 + 0x10) = 0xffffffff;
              *(undefined4 *)(puVar6 + 0x12) = 0;
              *(undefined8 *)(puVar6 + 0x18) = 0;
              *(undefined4 *)(puVar6 + 0x20) = 0;
              if (0x7fffffff < *(uint *)(puVar6 + 0x22)) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar6 + 0x1c,0);
              }
              if (*(undefined2 **)(puVar6 + 0x1c) != (undefined2 *)0x0) {
                **(undefined2 **)(puVar6 + 0x1c) = 0;
              }
              *(undefined4 *)(puVar6 + 0x14) = 0;
              *(undefined8 *)(puVar6 + 0x30) = 0;
              *(undefined8 *)(puVar6 + 0x34) = 0;
              *(undefined4 *)(puVar6 + 0x24) = 0xffffffff;
              *(undefined4 *)(puVar6 + 0x26) = 0;
              *(undefined8 *)(puVar6 + 0x2c) = 0;
              *(undefined4 *)(puVar6 + 0x34) = 0;
              if ((*(int *)(puVar6 + 0x36) < 0) && (*(int *)(puVar6 + 0x36) != 0)) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar6 + 0x30,0);
              }
              if (*(undefined2 **)(puVar6 + 0x30) != (undefined2 *)0x0) {
                **(undefined2 **)(puVar6 + 0x30) = 0;
              }
              *(undefined4 *)(puVar6 + 0x28) = 0;
              *(undefined4 *)(puVar6 + 0x38) = 0;
              *(undefined1 *)(puVar6 + 0x3a) = 0;
              puVar7 = (undefined1 *)(*param_1 + (longlong)iVar2 * 0x78);
              FUN_140d4cf30(puVar7,*plVar8);
              plVar1 = (longlong *)(puVar7 + 8);
              *puVar7 = (char)plVar8[1];
              if (plVar1 != plVar8 + 2) {
                iVar2 = (int)plVar8[3];
                _Src = (void *)plVar8[2];
                *(int *)(puVar7 + 0x10) = iVar2;
                if ((iVar2 == 0) && (*(int *)(puVar7 + 0x14) == 0)) {
                  *(undefined4 *)(puVar7 + 0x14) = 0;
                }
                else {
                  TArray<int,FDefaultAllocator>::ResizeForCopy(plVar1,iVar2);
                  _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar2 << 2);
                }
              }
              FUN_140d4c330(puVar7,plVar8[4]);
              puVar7[1] = (char)plVar8[5];
              puVar7[2] = *(undefined1 *)((longlong)plVar8 + 0x29);
              puVar7[0x18] = *(undefined1 *)((longlong)plVar8 + 0x2a);
            }
            break;
          }
        }
      }
      lVar9 = lVar9 + 0x30;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 140d3d5a0 FUN_140d3d5a0 body=321 status=ok
// SIG undefined FUN_140d3d5a0(void)

void FUN_140d3d5a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *local_res8;
  
  bVar9 = false;
  local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
  FUN_142d84ff0();
  lVar4 = *(longlong *)(param_1 + 0x28);
  plVar12 = local_res8;
  if (lVar4 == 0) {
LAB_140d3d61d:
    bVar8 = false;
    plVar13 = local_res8;
  }
  else {
    lVar5 = *(longlong *)(lVar4 + 0x60);
    plVar12 = *(longlong **)(lVar4 + 0x68);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    bVar9 = true;
    if (lVar5 == 0) goto LAB_140d3d61d;
    puVar6 = (undefined8 *)*param_2;
    plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x68);
    uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x60);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    bVar9 = true;
    bVar8 = true;
    cVar11 = (**(code **)*puVar6)(puVar6,uVar7);
    if (cVar11 != '\0') {
      bVar10 = true;
      goto LAB_140d3d625;
    }
  }
  bVar10 = false;
LAB_140d3d625:
  if ((bVar8) && (plVar13 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if ((bVar9) && (plVar12 != (longlong *)0x0)) {
    LOCK();
    plVar13 = plVar12 + 1;
    lVar4 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
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
  if (bVar10) {
    local_res8 = (longlong *)0x0;
    plVar12 = (longlong *)FUN_1404b0000(&local_res8);
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x148))(plVar12,param_2,0);
    }
  }
  return;
}



// FUNCTION 140d3d6f0 FUN_140d3d6f0 body=296 status=ok
// SIG undefined FUN_140d3d6f0(void)

longlong * FUN_140d3d6f0(longlong param_1,longlong *param_2,ulonglong param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_48 [3];
  longlong local_30 [2];
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + param_3 * 8);
  if (lVar1 == 0) {
    *(undefined8 *)(param_4 + 0x10) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x20) + param_3 * 8) = param_4;
    local_48[0] = param_4;
  }
  else {
    if ((lVar1 == 0) || (lVar1 == *(longlong *)(*(longlong *)(param_1 + 0x20) + (param_3 ^ 1) * 8)))
    {
      FUN_140d3d950(param_1,param_2,param_3);
      return param_2;
    }
    uVar2 = 0;
    lVar4 = lVar1;
    do {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar2 = uVar2 + 1;
    } while (lVar4 != 0);
    if (uVar2 < 8) {
      *(longlong *)(param_4 + 0x10) = lVar1;
      *(longlong *)(*(longlong *)(param_1 + 0x20) + param_3 * 8) = param_4;
      *param_2 = param_4;
      param_2[1] = param_1;
      param_2[2] = param_3;
      return param_2;
    }
    FUN_140d57400(param_1,param_3);
    *(undefined8 *)(param_4 + 0x10) = 0;
    local_30[0] = param_4;
    plVar3 = (longlong *)
             FUN_140d1e6d0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + param_3 * 8),local_48,
                           local_30);
    param_3 = param_3 & 0xfffffffffffffffe;
    local_48[0] = *(longlong *)(*plVar3 + 0x20);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  if (param_3 < *(ulonglong *)(param_1 + 0x18)) {
    uVar2 = param_3;
  }
  *(ulonglong *)(param_1 + 0x18) = uVar2;
  *param_2 = local_48[0];
  param_2[1] = param_1;
  param_2[2] = param_3;
  return param_2;
}



// FUNCTION 140d3d820 FUN_140d3d820 body=296 status=ok
// SIG undefined FUN_140d3d820(void)

longlong * FUN_140d3d820(longlong param_1,longlong *param_2,ulonglong param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_48 [3];
  longlong local_30 [2];
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + param_3 * 8);
  if (lVar1 == 0) {
    *(undefined8 *)(param_4 + 0x28) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x20) + param_3 * 8) = param_4;
    local_48[0] = param_4;
  }
  else {
    if ((lVar1 == 0) || (lVar1 == *(longlong *)(*(longlong *)(param_1 + 0x20) + (param_3 ^ 1) * 8)))
    {
      FUN_140d3d9d0(param_1,param_2,param_3);
      return param_2;
    }
    uVar2 = 0;
    lVar4 = lVar1;
    do {
      lVar4 = *(longlong *)(lVar4 + 0x28);
      uVar2 = uVar2 + 1;
    } while (lVar4 != 0);
    if (uVar2 < 8) {
      *(longlong *)(param_4 + 0x28) = lVar1;
      *(longlong *)(*(longlong *)(param_1 + 0x20) + param_3 * 8) = param_4;
      *param_2 = param_4;
      param_2[1] = param_1;
      param_2[2] = param_3;
      return param_2;
    }
    FUN_140d575e0(param_1,param_3);
    *(undefined8 *)(param_4 + 0x28) = 0;
    local_30[0] = param_4;
    plVar3 = (longlong *)
             FUN_140d1e830(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + param_3 * 8),local_48,
                           local_30);
    param_3 = param_3 & 0xfffffffffffffffe;
    local_48[0] = *(longlong *)(*plVar3 + 0x20);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  if (param_3 < *(ulonglong *)(param_1 + 0x18)) {
    uVar2 = param_3;
  }
  *(ulonglong *)(param_1 + 0x18) = uVar2;
  *param_2 = local_48[0];
  param_2[1] = param_1;
  param_2[2] = param_3;
  return param_2;
}



// FUNCTION 140d3d950 FUN_140d3d950 body=114 status=ok
// SIG undefined FUN_140d3d950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140d3d950(longlong param_1,undefined8 *param_2,ulonglong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_4 + 0x10) = 0;
  local_38 = param_4;
  plVar1 = (longlong *)
           FUN_140d1e6d0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + param_3 * 8),local_30,
                         &local_38);
  *param_2 = *(undefined8 *)(*plVar1 + 0x20);
  param_2[1] = param_1;
  param_2[2] = param_3 & 0xfffffffffffffffe;
  return param_2;
}



// FUNCTION 140d3d9d0 FUN_140d3d9d0 body=114 status=ok
// SIG undefined FUN_140d3d9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140d3d9d0(longlong param_1,undefined8 *param_2,ulonglong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_4 + 0x28) = 0;
  local_38 = param_4;
  plVar1 = (longlong *)
           FUN_140d1e830(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + param_3 * 8),local_30,
                         &local_38);
  *param_2 = *(undefined8 *)(*plVar1 + 0x20);
  param_2[1] = param_1;
  param_2[2] = param_3 & 0xfffffffffffffffe;
  return param_2;
}



// FUNCTION 140d3da50 IsLastMovieInPlaylist body=8 status=ok
// SIG undefined IsLastMovieInPlaylist(void)

bool FWebMMovieStreamer::IsLastMovieInPlaylist(longlong param_1)

{
  return *(int *)(param_1 + 0x28) == 0;
}



// FUNCTION 140d3da60 FUN_140d3da60 body=158 status=ok
// SIG undefined FUN_140d3da60(void)

undefined8 FUN_140d3da60(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  
  iVar1 = *(int *)(param_1 + 0x140);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x168))) {
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x160));
    puVar5 = (undefined8 *)*puVar2;
    puVar2 = puVar5 + (longlong)*(int *)(puVar2 + 1) * 3;
    for (; puVar5 != puVar2; puVar5 = puVar5 + 3) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      if (*(int *)(puVar5 + 1) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*puVar5;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140d3db00 FUN_140d3db00 body=15 status=ok
// SIG undefined FUN_140d3db00(void)

bool FUN_140d3db00(longlong param_1)

{
  return *(longlong *)(param_1 + 0x60) != 0;
}



// FUNCTION 140d3db10 FUN_140d3db10 body=26 status=ok
// SIG undefined FUN_140d3db10(void)

undefined1 FUN_140d3db10(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x300) == 0) && (*(longlong *)(param_1 + 0x2b0) == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 140d3db90 FUN_140d3db90 body=587 status=ok
// SIG undefined FUN_140d3db90(void)

void FUN_140d3db90(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 **ppuVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 local_res8 [8];
  undefined8 *local_58;
  longlong *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  ppuVar2 = (undefined8 **)(param_1 + 0x65);
  local_58 = (undefined8 *)*param_2;
  if (*ppuVar2 == (undefined8 *)0x0) {
    local_50 = (longlong *)param_2[1];
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    lVar5 = 0;
    if (ppuVar2 != &local_58) {
      *ppuVar2 = local_58;
      local_58 = (undefined8 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x66,&local_50);
    }
    plVar8 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    lVar3 = param_1[0xb9];
    *(undefined4 *)(param_1 + 0x6a) = 0xffffffff;
    local_38 = FUN_140d405a0;
    uStack_30._0_4_ = 0;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar8 != (longlong *)0x0) {
      plVar8[1] = (longlong)param_1;
      *plVar8 = (longlong)&PTR_GetPoolName_143f77ac8;
      *(undefined4 *)(plVar8 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar8 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar8 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_30._4_4_;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar5;
      *plVar8 = (longlong)&PTR_GetPoolName_143f77b10;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 0x30,1);
      plVar6 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,local_res8);
      iVar9 = *(int *)(lVar3 + 0x38);
      lVar5 = *plVar6;
      *(int *)(lVar3 + 0x38) = iVar9 + 1;
      if (*(int *)(lVar3 + 0x3c) < iVar9 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar3 + 0x30,iVar9);
      }
      puVar7 = (undefined8 *)((longlong)iVar9 * 0x10 + *(longlong *)(lVar3 + 0x30));
      *puVar7 = plVar8;
      *(undefined4 *)(puVar7 + 1) = 3;
    }
    param_1[0x67] = lVar5;
    FUN_140e86260(param_1[0xb9],param_2);
  }
  else {
    cVar4 = (**(code **)*local_58)(local_58);
    if (cVar4 == '\0') {
      local_38 = (code *)0x0;
      uStack_30 = 0;
      (**(code **)(*param_1 + 0x198))(param_1,param_2,0,&local_38);
      FUN_140d22900(&local_38);
      local_48 = 0;
      local_40 = 0;
      TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(param_1 + 0xc0,&local_48,0);
      if ((int)local_40 != 0) {
        plVar8 = (longlong *)(local_48 + 0x10);
        iVar9 = (int)local_40;
        do {
          if (plVar8[2] != 0) {
            FMemory::Free();
          }
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          if (plVar8[-2] != 0) {
            FMemory::Free();
          }
          plVar8 = plVar8 + 6;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (local_48 != 0) {
        FMemory::Free();
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d3dde0 FUN_140d3dde0 body=335 status=ok
// SIG undefined FUN_140d3dde0(void)

void FUN_140d3dde0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  
  uVar8 = 0;
  lVar4 = *(longlong *)(param_1 + 0x5c8);
  local_38 = FUN_140d40c80;
  uStack_30 = (longlong *)((ulonglong)uStack_30 & 0xffffffff00000000);
  plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_28 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = param_1;
    *plVar5 = (longlong)&PTR_GetPoolName_143f77ac8;
    *(undefined4 *)(plVar5 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar5 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar5 + 3) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_30._4_4_;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_143f77b10;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar4 + 0x30,1);
    puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
    iVar3 = *(int *)(lVar4 + 0x38);
    uVar8 = *puVar7;
    *(int *)(lVar4 + 0x38) = iVar3 + 1;
    if (*(int *)(lVar4 + 0x3c) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 0x30,iVar3);
    }
    puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar4 + 0x30));
    *puVar7 = plVar5;
    *(undefined4 *)(puVar7 + 1) = 3;
  }
  *(undefined8 *)(param_1 + 0x2c0) = uVar8;
  local_38 = *(code **)(param_1 + 0x2b0);
  uStack_30 = *(longlong **)(param_1 + 0x2b8);
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  FUN_140e86260(*(undefined8 *)(param_1 + 0x5c8),&local_38);
  plVar5 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*uStack_30)(uStack_30);
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



// FUNCTION 140d3df30 FUN_140d3df30 body=111 status=ok
// SIG undefined FUN_140d3df30(void)

longlong FUN_140d3df30(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = FUN_1405ec200();
  if (lVar2 != 0) {
    lVar3 = FUN_14171bfe0();
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
      lVar4 = UUGLoadoutBarUW::GetPrivateStaticClass();
      lVar3 = lVar2;
      do {
        if (lVar3 == lVar4) {
          return lVar2;
        }
        lVar3 = *(longlong *)(lVar3 + 0x30);
      } while (lVar3 != 0);
    }
  }
  return 0;
}



// FUNCTION 140d3dfa0 FUN_140d3dfa0 body=5561 status=ok
// SIG undefined FUN_140d3dfa0(void)

undefined1 * FUN_140d3dfa0(longlong param_1,longlong param_2)

{
  longlong **pplVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  int *piVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  char *pcVar19;
  int *piVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  int *piVar23;
  undefined4 *puVar24;
  int iVar25;
  undefined8 *puVar26;
  int iVar27;
  longlong lVar28;
  char *pcVar29;
  int *piVar30;
  undefined1 *puVar31;
  longlong *plVar32;
  int iVar33;
  char *pcVar34;
  longlong lVar35;
  char *pcVar36;
  longlong *plVar37;
  int *piVar38;
  bool bVar39;
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_98;
  int local_90;
  int local_8c;
  undefined2 *local_88;
  int local_80;
  undefined4 uStack_7c;
  undefined2 *local_68;
  int local_60;
  undefined4 uStack_5c;
  
  puVar12 = *(undefined8 **)(param_1 + 0x478);
  if ((puVar12 == (undefined8 *)0x0) || (param_2 == 0)) {
    return &stack0x00000000;
  }
  piVar14 = (int *)*puVar12;
  piVar38 = piVar14 + (longlong)*(int *)(puVar12 + 1) * 0xc;
  if (piVar14 != piVar38) {
    plVar32 = (longlong *)(param_2 + 0x360);
    do {
      FSoftObjectPath::ToString(piVar14 + 6,&local_88);
      piVar30 = (int *)*plVar32;
      piVar23 = piVar30 + (longlong)*(int *)(param_2 + 0x368) * 0xc;
      for (; piVar30 != piVar23; piVar30 = piVar30 + 0xc) {
        FSoftObjectPath::ToString(piVar30 + 6,&local_68);
        puVar17 = &DAT_143f3eda8;
        if (local_60 != 0) {
          puVar17 = local_68;
        }
        puVar15 = &DAT_143f3eda8;
        if (local_80 != 0) {
          puVar15 = local_88;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar17);
        if (local_68 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (iVar8 == 0) {
          if (piVar30 != (int *)0x0) {
            iVar8 = *piVar14;
            if (*piVar14 <= *piVar30) {
              iVar8 = *piVar30;
            }
            *piVar30 = iVar8;
            goto LAB_140d3e0c6;
          }
          break;
        }
      }
      iVar8 = *(int *)(param_2 + 0x368);
      *(int *)(param_2 + 0x368) = iVar8 + 1;
      if (*(int *)(param_2 + 0x36c) < iVar8 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar32,iVar8);
      }
      FUN_140d1f2f0((longlong)iVar8 * 0x30 + *plVar32,piVar14);
LAB_140d3e0c6:
      if (local_88 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      piVar14 = piVar14 + 0xc;
    } while (piVar14 != piVar38);
    puVar12 = *(undefined8 **)(param_1 + 0x478);
  }
  lVar28 = puVar12[2];
  lVar35 = (longlong)*(int *)(puVar12 + 3) * 0x80 + lVar28;
  if (lVar28 != lVar35) {
    plVar32 = (longlong *)(param_2 + 0x380);
    do {
      FUN_142fde6b0(&local_68,lVar28);
      lVar11 = FUN_140d1dec0(plVar32,&local_68);
      if (lVar11 == 0) {
        iVar8 = *(int *)(param_2 + 0x388);
        *(int *)(param_2 + 0x388) = iVar8 + 1;
        if (*(int *)(param_2 + 0x38c) < iVar8 + 1) {
          TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                    (plVar32,iVar8);
        }
        FUN_140ce10b0((longlong)iVar8 * 0x80 + *plVar32,lVar28);
      }
      if (CONCAT44(uStack_5c,local_60) != 0) {
        FMemory::Free();
      }
      lVar28 = lVar28 + 0x80;
    } while (lVar28 != lVar35);
  }
  plVar32 = *(longlong **)(param_2 + 0x380);
  iVar8 = *(int *)(param_2 + 0x388);
  plVar37 = plVar32 + (longlong)iVar8 * 0x10;
  local_98 = plVar37;
  if (plVar32 != plVar37) {
    do {
      local_res20 = plVar32;
      FUN_142fde6b0(&local_88,plVar32,1);
      lVar28 = *(longlong *)(param_1 + 200);
      iVar8 = *(int *)(param_1 + 0xd0);
      for (lVar35 = lVar28; lVar35 != (longlong)iVar8 * 0xb0 + lVar28; lVar35 = lVar35 + 0xb0) {
        FUN_142fde6b0(&local_68,lVar35);
        cVar7 = FUN_1430190b0(&local_88,&local_68);
        if (CONCAT44(uStack_5c,local_60) != 0) {
          FMemory::Free();
        }
        plVar32 = local_res20;
        if (cVar7 != '\0') {
          iVar8 = (int)((lVar35 - lVar28) / 0xb0);
          if ((iVar8 != -1) &&
             (lVar28 = (longlong)*(int *)(param_1 + 0xe0), *(int *)(param_1 + 0xe0) != 0)) {
            iVar9 = 0;
            local_res18 = (longlong *)((ulonglong)local_res18 & 0xffffffff00000000);
            lVar35 = 0;
            bVar39 = **(int **)(param_1 + 0xd8) != iVar8;
            iVar33 = 0;
            do {
              lVar35 = lVar35 + 1;
              iVar27 = iVar33 + 1;
              if (lVar35 < lVar28) {
                piVar14 = (int *)(lVar35 * 0x58 + *(longlong *)(param_1 + 0xd8));
                do {
                  if (bVar39 != (*piVar14 != iVar8)) break;
                  iVar27 = iVar27 + 1;
                  lVar35 = lVar35 + 1;
                  piVar14 = piVar14 + 0x16;
                } while (lVar35 < lVar28);
              }
              iVar25 = iVar27 - iVar33;
              if (bVar39 == false) {
                if (iVar25 != 0) {
                  plVar32 = (longlong *)
                            ((longlong)iVar33 * 0x58 + 0x20 + *(longlong *)(param_1 + 0xd8));
                  do {
                    if (plVar32[5] != 0) {
                      FMemory::Free();
                    }
                    if (*plVar32 != 0) {
                      FMemory::Free();
                    }
                    plVar32 = plVar32 + 0xb;
                    iVar25 = iVar25 + -1;
                  } while (iVar25 != 0);
                }
                iVar9 = (int)local_res18;
              }
              else {
                if (iVar9 != iVar33) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)iVar9 * 0x58 + *(longlong *)(param_1 + 0xd8)),
                             (void *)((longlong)iVar33 * 0x58 + *(longlong *)(param_1 + 0xd8)),
                             (longlong)iVar25 * 0x58);
                }
                local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar9 + iVar25);
                iVar9 = iVar9 + iVar25;
              }
              bVar39 = (bool)(bVar39 ^ 1);
              iVar33 = iVar27;
            } while (lVar35 < lVar28);
            *(int *)(param_1 + 0xe0) = iVar9;
            plVar32 = local_res20;
            plVar37 = local_98;
          }
          break;
        }
      }
      if (CONCAT44(uStack_7c,local_80) != 0) {
        FMemory::Free();
      }
      plVar32 = plVar32 + 0x10;
    } while (plVar32 != plVar37);
    iVar8 = *(int *)(param_2 + 0x388);
  }
  plVar32 = *(longlong **)(param_2 + 0x380);
  plVar37 = plVar32 + (longlong)iVar8 * 0x10;
  local_res20 = plVar32;
  local_98 = plVar37;
  if (plVar32 != plVar37) {
    do {
      local_res20 = plVar32;
      FUN_142fde6b0(&local_68,plVar32);
      iVar8 = *(int *)(param_1 + 0xd0);
      if (iVar8 != 0) {
        iVar33 = 0;
        iVar9 = 0;
        FUN_142fde6b0(&local_88,*(undefined8 *)(param_1 + 200));
        cVar7 = FUN_1430190b0(&local_68,&local_88);
        if (CONCAT44(uStack_7c,local_80) != 0) {
          FMemory::Free();
        }
        bVar39 = cVar7 == '\0';
        do {
          local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar9);
          iVar27 = iVar9 + 1;
          iVar25 = iVar9;
          if (iVar27 < iVar8) {
            do {
              FUN_142fde6b0(&local_88,(longlong)iVar27 * 0xb0 + *(longlong *)(param_1 + 200));
              cVar7 = FUN_1430190b0(&local_68,&local_88);
              if (CONCAT44(uStack_7c,local_80) != 0) {
                FMemory::Free();
              }
            } while ((bVar39 == (cVar7 == '\0')) && (iVar27 = iVar27 + 1, iVar27 < iVar8));
            iVar25 = (int)local_res18;
          }
          iVar9 = iVar27;
          iVar27 = iVar9 - iVar25;
          if (bVar39 == false) {
            plVar32 = (longlong *)((longlong)iVar25 * 0xb0 + *(longlong *)(param_1 + 200));
            for (; iVar27 != 0; iVar27 = iVar27 + -1) {
              if (plVar32[0x14] != 0) {
                FMemory::Free();
              }
              if (plVar32[0xc] != 0) {
                FMemory::Free();
              }
              if (plVar32[10] != 0) {
                FMemory::Free();
              }
              if (plVar32[8] != 0) {
                FMemory::Free();
              }
              if (plVar32[6] != 0) {
                FMemory::Free();
              }
              if (*plVar32 != 0) {
                FMemory::Free();
              }
              plVar32 = plVar32 + 0x16;
            }
          }
          else {
            if (iVar33 != iVar25) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar33 * 0xb0 + *(longlong *)(param_1 + 200)),
                         (void *)((longlong)iVar25 * 0xb0 + *(longlong *)(param_1 + 200)),
                         (longlong)iVar27 * 0xb0);
            }
            iVar33 = iVar33 + iVar27;
          }
          bVar39 = (bool)(bVar39 ^ 1);
        } while (iVar9 < iVar8);
        *(int *)(param_1 + 0xd0) = iVar33;
        plVar32 = local_res20;
        plVar37 = local_98;
      }
      if (CONCAT44(uStack_5c,local_60) != 0) {
        FMemory::Free();
      }
      plVar32 = plVar32 + 0x10;
      local_res20 = plVar32;
    } while (plVar32 != plVar37);
  }
  lVar35 = *(longlong *)(param_1 + 0x478);
  lVar28 = *(longlong *)(lVar35 + 0x20);
  lVar11 = (longlong)*(int *)(lVar35 + 0x28) * 0x80 + lVar28;
  if (lVar28 != lVar11) {
    plVar32 = (longlong *)(param_2 + 0x390);
    do {
      FUN_142fde6b0(&local_68,lVar28);
      lVar35 = FUN_140d1dec0(plVar32,&local_68);
      if (lVar35 == 0) {
        iVar8 = *(int *)(param_2 + 0x398);
        *(int *)(param_2 + 0x398) = iVar8 + 1;
        if (*(int *)(param_2 + 0x39c) < iVar8 + 1) {
          TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                    (plVar32,iVar8);
        }
        FUN_140ce10b0((longlong)iVar8 * 0x80 + *plVar32,lVar28);
      }
      if (CONCAT44(uStack_5c,local_60) != 0) {
        FMemory::Free();
      }
      lVar28 = lVar28 + 0x80;
    } while (lVar28 != lVar11);
    lVar35 = *(longlong *)(param_1 + 0x478);
  }
  pcVar29 = *(char **)(lVar35 + 0x30);
  pcVar34 = pcVar29 + (longlong)*(int *)(lVar35 + 0x38) * 0xb8;
  if (pcVar29 != pcVar34) {
    plVar32 = (longlong *)(param_2 + 0x3b0);
    do {
      puVar12 = (undefined8 *)*plVar32;
      puVar26 = puVar12 + (longlong)*(int *)(param_2 + 0x3b8) * 2;
      for (; puVar12 != puVar26; puVar12 = puVar12 + 2) {
        if (*(int *)(pcVar29 + 0x70) == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          puVar17 = *(undefined2 **)(pcVar29 + 0x68);
        }
        if (*(int *)(puVar12 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar12;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar17);
        if (iVar8 == 0) goto LAB_140d3e888;
      }
      FUN_142fde710(&local_88,pcVar29 + 0x50);
      plVar37 = (longlong *)(param_2 + 0x3a0);
      pcVar19 = (char *)*plVar37;
      iVar8 = *(int *)(param_2 + 0x3a8);
      pcVar36 = pcVar19 + (longlong)iVar8 * 0xb8;
      if (pcVar19 != pcVar36) {
        do {
          FUN_142fde710(&local_68,pcVar19 + 0x50);
          if (((((*pcVar29 == *pcVar19) &&
                (cVar7 = FText::EqualTo(pcVar29 + 8,pcVar19 + 8), cVar7 != '\0')) &&
               (cVar7 = FText::EqualTo(pcVar29 + 0x20,pcVar19 + 0x20), cVar7 != '\0')) &&
              ((cVar7 = FText::EqualTo(pcVar29 + 0x38,pcVar19 + 0x38), cVar7 != '\0' &&
               (cVar7 = FUN_1430190b0(&local_88,&local_68), cVar7 != '\0')))) &&
             ((*(int *)(pcVar29 + 0x60) == *(int *)(pcVar19 + 0x60) &&
              ((*pcVar29 != '\x02' ||
               (cVar7 = FUniqueNetIdWrapper::operator==(pcVar29 + 0x88,pcVar19 + 0x88),
               cVar7 != '\0')))))) {
            bVar39 = true;
          }
          else {
            bVar39 = false;
          }
          if (CONCAT44(uStack_5c,local_60) != 0) {
            FMemory::Free();
          }
          if (bVar39) {
            if (pcVar29[0xb0] != '\0') {
              local_res18 = (longlong *)(pcVar19 + 0x68);
              pcVar19[0xb0] = '\x01';
              TArray<FString,FDefaultAllocator>::
              RemoveAll<<lambda_0089088ead215b5f35713e72b81bce1f>_>(param_2 + 0x3c0,&local_res18);
            }
            goto LAB_140d3e87a;
          }
          pcVar19 = pcVar19 + 0xb8;
        } while (pcVar19 != pcVar36);
        iVar8 = *(int *)(param_2 + 0x3a8);
      }
      *(int *)(param_2 + 0x3a8) = iVar8 + 1;
      if (*(int *)(param_2 + 0x3ac) < iVar8 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar37,iVar8);
      }
      FUN_140ce1220((longlong)iVar8 * 0xb8 + *plVar37,pcVar29);
      iVar8 = TArray<FString,FDefaultAllocator>::Find(plVar32,pcVar29 + 0x68);
      if (iVar8 == -1) {
        iVar8 = *(int *)(param_2 + 0x3b8);
        *(int *)(param_2 + 0x3b8) = iVar8 + 1;
        if (*(int *)(param_2 + 0x3bc) < iVar8 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar32,iVar8);
        }
        FString::FString((longlong)iVar8 * 0x10 + *plVar32,pcVar29 + 0x68);
      }
      if (pcVar29[0xb0] == '\0') {
        plVar37 = (longlong *)(param_2 + 0x3c0);
        iVar8 = TArray<FString,FDefaultAllocator>::Find(plVar37,pcVar29 + 0x68);
        if (iVar8 == -1) {
          iVar8 = *(int *)(param_2 + 0x3c8);
          *(int *)(param_2 + 0x3c8) = iVar8 + 1;
          if (*(int *)(param_2 + 0x3cc) < iVar8 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar37,iVar8);
          }
          FString::FString((longlong)iVar8 * 0x10 + *plVar37,pcVar29 + 0x68);
        }
      }
LAB_140d3e87a:
      if (CONCAT44(uStack_7c,local_80) != 0) {
        FMemory::Free();
      }
LAB_140d3e888:
      pcVar29 = pcVar29 + 0xb8;
    } while (pcVar29 != pcVar34);
    lVar35 = *(longlong *)(param_1 + 0x478);
  }
  lVar28 = *(longlong *)(lVar35 + 0x40);
  lVar11 = (longlong)*(int *)(lVar35 + 0x48) * 0x10 + lVar28;
  if (lVar28 != lVar11) {
    plVar32 = (longlong *)(param_2 + 0x3b0);
    do {
      iVar8 = TArray<FString,FDefaultAllocator>::Find(plVar32,lVar28);
      if (iVar8 == -1) {
        iVar8 = *(int *)(param_2 + 0x3b8);
        *(int *)(param_2 + 0x3b8) = iVar8 + 1;
        if (*(int *)(param_2 + 0x3bc) < iVar8 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar32,iVar8);
        }
        FString::FString((longlong)iVar8 * 0x10 + *plVar32,lVar28);
      }
      lVar28 = lVar28 + 0x10;
    } while (lVar28 != lVar11);
    lVar35 = *(longlong *)(param_1 + 0x478);
  }
  piVar38 = *(int **)(lVar35 + 0x50);
  piVar14 = piVar38 + (longlong)*(int *)(lVar35 + 0x58) * 6;
  if (piVar38 != piVar14) {
    plVar32 = (longlong *)(param_2 + 0x3e0);
    piVar30 = piVar38 + 2;
    do {
      piVar20 = (int *)*plVar32;
      piVar23 = piVar20 + (longlong)*(int *)(param_2 + 1000) * 6;
      for (; piVar20 != piVar23; piVar20 = piVar20 + 6) {
        if (piVar20[4] == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          puVar17 = *(undefined2 **)(piVar20 + 2);
        }
        if (piVar30[2] == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = *(undefined2 **)piVar30;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar17);
        if (iVar8 == 0) {
          if (piVar20 != (int *)0x0) {
            iVar8 = *piVar38;
            if (*piVar38 <= *piVar20) {
              iVar8 = *piVar20;
            }
            *piVar20 = iVar8;
            goto LAB_140d3ea04;
          }
          break;
        }
      }
      iVar8 = *(int *)(param_2 + 1000);
      *(int *)(param_2 + 1000) = iVar8 + 1;
      if (*(int *)(param_2 + 0x3ec) < iVar8 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar32,iVar8);
      }
      piVar23 = (int *)(*plVar32 + (longlong)iVar8 * 0x18);
      *piVar23 = *piVar38;
      FString::FString(piVar23 + 2,piVar30);
LAB_140d3ea04:
      piVar38 = piVar38 + 6;
      piVar30 = piVar30 + 6;
    } while (piVar38 != piVar14);
    lVar35 = *(longlong *)(param_1 + 0x478);
  }
  pcVar29 = *(char **)(lVar35 + 0x60);
  pcVar34 = pcVar29 + (longlong)*(int *)(lVar35 + 0x68) * 0x30;
  if (pcVar29 != pcVar34) {
    plVar32 = (longlong *)(param_2 + 0x3f0);
    do {
      puVar21 = (undefined1 *)*plVar32;
      puVar31 = puVar21 + (longlong)*(int *)(param_2 + 0x3f8) * 0x30;
      for (; puVar21 != puVar31; puVar21 = puVar21 + 0x30) {
        FSoftObjectPath::ToString(puVar21 + 0x18,&local_88);
        FSoftObjectPath::ToString(pcVar29 + 0x18,&local_68);
        puVar17 = &DAT_143f3eda8;
        if (local_80 != 0) {
          puVar17 = local_88;
        }
        puVar15 = &DAT_143f3eda8;
        if (local_60 != 0) {
          puVar15 = local_68;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar17);
        if (local_68 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_88 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (iVar8 == 0) {
          if (puVar21 != (undefined1 *)0x0) {
            if (*pcVar29 == '\0') {
              *puVar21 = 0;
            }
            goto LAB_140d3eb11;
          }
          break;
        }
      }
      iVar8 = *(int *)(param_2 + 0x3f8);
      *(int *)(param_2 + 0x3f8) = iVar8 + 1;
      if (*(int *)(param_2 + 0x3fc) < iVar8 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar32,iVar8);
      }
      FUN_140a4ee70((longlong)iVar8 * 0x30 + *plVar32,pcVar29);
LAB_140d3eb11:
      pcVar29 = pcVar29 + 0x30;
    } while (pcVar29 != pcVar34);
    lVar35 = *(longlong *)(param_1 + 0x478);
  }
  puVar12 = *(undefined8 **)(lVar35 + 0x70);
  puVar26 = puVar12 + (longlong)*(int *)(lVar35 + 0x78) * 2;
  if (puVar12 != puVar26) {
    plVar32 = (longlong *)(param_2 + 0x400);
    do {
      plVar37 = (longlong *)*plVar32;
      iVar8 = *(int *)(param_2 + 0x408);
      plVar22 = plVar37 + (longlong)iVar8 * 2;
      if (plVar37 != plVar22) {
        do {
          if (*plVar37 != 0) {
            plVar4 = (longlong *)*plVar37;
            iVar8 = (**(code **)(*(longlong *)*puVar12 + 0x278))();
            iVar9 = (**(code **)(*plVar4 + 0x278))(plVar4);
            if (iVar8 == iVar9) {
              if (*(char *)(puVar12 + 1) == '\0') {
                *(undefined1 *)(plVar37 + 1) = 0;
              }
              goto LAB_140d3ebcc;
            }
          }
          plVar37 = plVar37 + 2;
        } while (plVar37 != plVar22);
        iVar8 = *(int *)(param_2 + 0x408);
      }
      *(int *)(param_2 + 0x408) = iVar8 + 1;
      if (*(int *)(param_2 + 0x40c) < iVar8 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar32,iVar8);
      }
      uVar6 = puVar12[1];
      puVar2 = (undefined8 *)(*plVar32 + (longlong)iVar8 * 0x10);
      *puVar2 = *puVar12;
      puVar2[1] = uVar6;
LAB_140d3ebcc:
      puVar12 = puVar12 + 2;
    } while (puVar12 != puVar26);
    lVar35 = *(longlong *)(param_1 + 0x478);
  }
  if (*(longlong *)(param_2 + 0x430) < *(longlong *)(lVar35 + 0x80)) {
    *(longlong *)(param_2 + 0x430) = *(longlong *)(lVar35 + 0x80);
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 200) != 0) {
      uVar10 = FUN_140a2f190(*(longlong *)(DAT_146b33f38 + 200),*(undefined8 *)(param_2 + 0x430));
      *(undefined4 *)(param_2 + 0x428) = uVar10;
    }
  }
  lVar28 = *(longlong *)(param_1 + 0x478);
  pcVar29 = *(char **)(lVar28 + 0x88);
  pcVar34 = pcVar29 + (longlong)*(int *)(lVar28 + 0x90) * 0x30;
  if (pcVar29 != pcVar34) {
    plVar32 = (longlong *)(param_2 + 0x440);
    do {
      puVar21 = (undefined1 *)*plVar32;
      puVar31 = puVar21 + (longlong)*(int *)(param_2 + 0x448) * 0x30;
      for (; puVar21 != puVar31; puVar21 = puVar21 + 0x30) {
        FSoftObjectPath::ToString(pcVar29 + 0x18,&local_88);
        FSoftObjectPath::ToString(puVar21 + 0x18,&local_68);
        puVar17 = &DAT_143f3eda8;
        if (local_80 != 0) {
          puVar17 = local_88;
        }
        puVar15 = &DAT_143f3eda8;
        if (local_60 != 0) {
          puVar15 = local_68;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar17);
        if (local_68 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_88 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (iVar8 == 0) {
          if (puVar21 != (undefined1 *)0x0) {
            if (*pcVar29 == '\0') {
              *puVar21 = 0;
            }
            goto LAB_140d3ed31;
          }
          break;
        }
      }
      iVar8 = *(int *)(param_2 + 0x448);
      *(int *)(param_2 + 0x448) = iVar8 + 1;
      if (*(int *)(param_2 + 0x44c) < iVar8 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar32,iVar8);
      }
      FUN_140a4ee70((longlong)iVar8 * 0x30 + *plVar32,pcVar29);
LAB_140d3ed31:
      pcVar29 = pcVar29 + 0x30;
    } while (pcVar29 != pcVar34);
    lVar28 = *(longlong *)(param_1 + 0x478);
  }
  plVar32 = *(longlong **)(lVar28 + 0x98);
  local_98 = plVar32 + (longlong)*(int *)(lVar28 + 0xa0) * 3;
  if (plVar32 != local_98) {
    plVar37 = (longlong *)(param_2 + 0x450);
    local_res18 = plVar37;
    do {
      plVar22 = (longlong *)*plVar37;
      local_res20 = plVar22 + (longlong)*(int *)(param_2 + 0x458) * 3;
      if (plVar22 != local_res20) {
        do {
          local_80 = (int)plVar32[2];
          lVar28 = (longlong)local_80;
          puVar17 = (undefined2 *)0x0;
          pvVar5 = (void *)plVar32[1];
          local_88 = (undefined2 *)0x0;
          if (local_80 == 0) {
            uStack_7c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
            puVar17 = local_88;
            _guard_xfg_dispatch_icall_nop(local_88,pvVar5,lVar28 * 2);
          }
          iVar8 = local_80;
          local_60 = (int)plVar22[2];
          lVar28 = (longlong)local_60;
          puVar15 = (undefined2 *)0x0;
          pvVar5 = (void *)plVar22[1];
          local_68 = (undefined2 *)0x0;
          if (local_60 == 0) {
            uStack_5c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
            puVar15 = local_68;
            _guard_xfg_dispatch_icall_nop(local_68,pvVar5,lVar28 * 2);
          }
          puVar18 = &DAT_143f3eda8;
          if (iVar8 != 0) {
            puVar18 = puVar17;
          }
          puVar16 = &DAT_143f3eda8;
          if (local_60 != 0) {
            puVar16 = puVar15;
          }
          iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar16,puVar18);
          if (puVar15 != (undefined2 *)0x0) {
            FMemory::Free(puVar15);
          }
          if (puVar17 != (undefined2 *)0x0) {
            FMemory::Free(puVar17);
          }
          if (iVar8 == 0) {
            if (plVar22 != (longlong *)0x0) {
              plVar37 = local_res18;
              if ((char)*plVar32 == '\0') {
                *(undefined1 *)plVar22 = 0;
              }
              goto LAB_140d3ef23;
            }
            break;
          }
          plVar22 = plVar22 + 3;
        } while (plVar22 != local_res20);
      }
      plVar37 = local_res18;
      iVar8 = (int)local_res18[1];
      *(int *)(local_res18 + 1) = iVar8 + 1;
      if (*(int *)((longlong)local_res18 + 0xc) < iVar8 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(local_res18,iVar8);
      }
      FUN_140a7a070(*plVar37 + (longlong)iVar8 * 0x18,plVar32);
LAB_140d3ef23:
      plVar32 = plVar32 + 3;
    } while (plVar32 != local_98);
    lVar28 = *(longlong *)(param_1 + 0x478);
  }
  plVar32 = *(longlong **)(lVar28 + 0xa8);
  plVar37 = plVar32 + (longlong)*(int *)(lVar28 + 0xb0) * 0xc;
  if (plVar32 != plVar37) {
    plVar22 = (longlong *)(param_2 + 0x508);
    local_res20 = plVar22;
    local_98 = plVar37;
    do {
      piVar14 = (int *)*plVar22;
      piVar38 = piVar14 + (longlong)(int)plVar22[1] * 0x18;
      if (piVar14 != piVar38) {
LAB_140d3ef90:
        cVar7 = FSoftObjectPath::operator==(piVar14 + 0x10);
        if (cVar7 == '\0') goto code_r0x000140d3efa2;
        if (piVar14 != (int *)0x0) {
          iVar8 = (int)*plVar32;
          if ((int)*plVar32 <= *piVar14) {
            iVar8 = *piVar14;
          }
          *piVar14 = iVar8;
          if (*(char *)((longlong)plVar32 + 4) == '\0') {
            *(undefined1 *)(piVar14 + 1) = 0;
          }
          if (*(char *)((longlong)plVar32 + 5) != '\0') {
            *(undefined1 *)((longlong)piVar14 + 5) = 1;
          }
          iVar8 = (int)plVar32[1];
          if ((int)plVar32[1] <= piVar14[2]) {
            iVar8 = piVar14[2];
          }
          piVar14[2] = iVar8;
          piVar38 = (int *)plVar32[2];
          piVar30 = piVar38 + (longlong)(int)plVar32[3] * 0xc;
          for (; piVar38 != piVar30; piVar38 = piVar38 + 0xc) {
            piVar23 = *(int **)(piVar14 + 4);
            piVar20 = piVar23 + (longlong)piVar14[6] * 0xc;
            for (; piVar23 != piVar20; piVar23 = piVar23 + 0xc) {
              cVar7 = FSoftObjectPath::operator==(piVar23 + 6);
              if (cVar7 != '\0') {
                if (piVar23 != (int *)0x0) {
                  iVar8 = *piVar38;
                  if (*piVar38 <= *piVar23) {
                    iVar8 = *piVar23;
                  }
                  *piVar23 = iVar8;
                  goto LAB_140d3f0ae;
                }
                break;
              }
            }
            iVar8 = piVar14[6];
            piVar14[6] = iVar8 + 1;
            if (piVar14[7] < iVar8 + 1) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(piVar14 + 4,iVar8);
            }
            FUN_140e135e0((longlong)iVar8 * 0x30 + *(longlong *)(piVar14 + 4));
LAB_140d3f0ae:
            plVar37 = local_98;
          }
          iVar8 = piVar14[10];
          iVar9 = (int)plVar32[5];
          if ((int)plVar32[5] <= piVar14[10]) {
            iVar9 = piVar14[10];
          }
          if (iVar8 < iVar9) {
            piVar14[10] = iVar9;
            if (piVar14[0xb] < iVar9) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(piVar14 + 8);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar8 + *(longlong *)(piVar14 + 8)),0,
                       (longlong)(iVar9 - iVar8));
          }
          else if ((iVar9 < iVar8) && (iVar9 != iVar8)) {
            piVar14[10] = iVar9;
            TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(piVar14 + 8);
          }
          iVar8 = 0;
          lVar28 = 0;
          plVar22 = local_res20;
          if (0 < piVar14[10]) {
            do {
              if (iVar8 < (int)plVar32[5]) {
                *(byte *)(*(longlong *)(piVar14 + 8) + lVar28) =
                     *(byte *)(*(longlong *)(piVar14 + 8) + lVar28) | *(byte *)(plVar32[4] + lVar28)
                ;
              }
              iVar8 = iVar8 + 1;
              lVar28 = lVar28 + 1;
            } while (iVar8 < piVar14[10]);
          }
          goto LAB_140d3f159;
        }
      }
LAB_140d3efab:
      iVar8 = (int)plVar22[1];
      *(int *)(plVar22 + 1) = iVar8 + 1;
      if (*(int *)((longlong)plVar22 + 0xc) < iVar8 + 1) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar22,iVar8);
      }
      FUN_140d20850((longlong)iVar8 * 0x60 + *plVar22);
LAB_140d3f159:
      plVar32 = plVar32 + 0xc;
    } while (plVar32 != plVar37);
  }
  plVar37 = (longlong *)0x0;
  local_98 = (longlong *)0x0;
  pplVar1 = (longlong **)(param_2 + 0x210);
  local_90 = *(int *)(param_2 + 0x218);
  lVar28 = (longlong)local_90;
  plVar32 = *pplVar1;
  if (local_90 == 0) {
    local_8c = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
    plVar37 = local_98;
    _guard_xfg_dispatch_icall_nop(local_98,plVar32,lVar28 << 2);
  }
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x478) + 0xc0);
  if (iVar8 <= local_90) {
    iVar8 = local_90;
  }
  if (local_90 < iVar8) {
    lVar28 = (longlong)local_90;
    iVar33 = iVar8 - local_90;
    local_90 = iVar8;
    if (local_8c < iVar8) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_98);
      plVar37 = local_98;
    }
    iVar9 = local_90;
    _guard_xfg_dispatch_icall_nop((int *)((longlong)plVar37 + lVar28 * 4),0,(longlong)iVar33 << 2);
  }
  else {
    iVar9 = local_90;
    if ((iVar8 < local_90) && (iVar8 != local_90)) {
      local_90 = iVar8;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&local_98);
      plVar37 = local_98;
      iVar9 = local_90;
    }
  }
  lVar28 = *(longlong *)(param_1 + 0x478);
  iVar8 = 0;
  plVar32 = plVar37;
  if (0 < *(int *)(lVar28 + 0xc0)) {
    do {
      iVar33 = *(int *)((*(longlong *)(lVar28 + 0xb8) - (longlong)plVar37) + (longlong)plVar32);
      if (iVar33 <= (int)*plVar32) {
        iVar33 = (int)*plVar32;
      }
      iVar8 = iVar8 + 1;
      *(int *)plVar32 = iVar33;
      lVar28 = *(longlong *)(param_1 + 0x478);
      plVar32 = (longlong *)((longlong)plVar32 + 4);
    } while (iVar8 < *(int *)(lVar28 + 0xc0));
  }
  if (pplVar1 != &local_98) {
    *(int *)(param_2 + 0x218) = iVar9;
    if ((iVar9 == 0) && (*(int *)(param_2 + 0x21c) == 0)) {
      *(undefined4 *)(param_2 + 0x21c) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(pplVar1,iVar9);
      _guard_xfg_dispatch_icall_nop(*pplVar1,plVar37,(longlong)iVar9 << 2);
    }
  }
  *(undefined1 *)(param_2 + 0x28) = 1;
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x478) + 200);
  if (iVar8 <= *(int *)(param_2 + 0x22c)) {
    iVar8 = *(int *)(param_2 + 0x22c);
  }
  *(int *)(param_2 + 0x22c) = iVar8;
  *(byte *)(param_2 + 0x230) =
       *(byte *)(param_2 + 0x230) | *(byte *)(*(longlong *)(param_1 + 0x478) + 0xcc);
  *(undefined1 *)(param_2 + 0x28) = 1;
  *(byte *)(param_2 + 0x231) =
       *(byte *)(param_2 + 0x231) | *(byte *)(*(longlong *)(param_1 + 0x478) + 0xcd);
  *(undefined1 *)(param_2 + 0x28) = 1;
  lVar28 = *(longlong *)(param_1 + 0x478);
  piVar14 = *(int **)(lVar28 + 0xe0);
  piVar38 = piVar14 + (longlong)*(int *)(lVar28 + 0xe8) * 0x16;
  if (piVar14 != piVar38) {
    plVar32 = (longlong *)(param_2 + 0x470);
    do {
      piVar23 = (int *)*plVar32;
      iVar8 = *(int *)(param_2 + 0x478);
      piVar30 = piVar23 + (longlong)iVar8 * 0x16;
      if (piVar23 != piVar30) {
LAB_140d3f346:
        if (*piVar14 != *piVar23) goto code_r0x000140d3f34e;
        lVar28 = *(longlong *)(piVar14 + 2);
        if (*(longlong *)(piVar14 + 2) <= *(longlong *)(piVar23 + 2)) {
          lVar28 = *(longlong *)(piVar23 + 2);
        }
        *(longlong *)(piVar23 + 2) = lVar28;
        uVar13 = piVar14[4];
        if ((uint)piVar14[4] <= (uint)piVar23[4]) {
          uVar13 = piVar23[4];
        }
        piVar23[4] = uVar13;
        iVar8 = piVar14[5];
        if (piVar14[5] <= piVar23[5]) {
          iVar8 = piVar23[5];
        }
        piVar23[5] = iVar8;
        uVar13 = piVar14[6];
        if ((uint)piVar14[6] <= (uint)piVar23[6]) {
          uVar13 = piVar23[6];
        }
        piVar23[6] = uVar13;
        uVar13 = piVar14[7];
        if ((uint)piVar14[7] <= (uint)piVar23[7]) {
          uVar13 = piVar23[7];
        }
        piVar23[7] = uVar13;
        puVar12 = (undefined8 *)UListView::OnItemSelectionChanged(piVar14);
        puVar24 = (undefined4 *)*puVar12;
        puVar3 = puVar24 + (longlong)*(int *)(puVar12 + 1) * 2;
        for (; puVar24 != puVar3; puVar24 = puVar24 + 2) {
          FUN_140e6f750(piVar23,*puVar24,puVar24[1],0);
        }
        puVar12 = (undefined8 *)IMessageToken::ToText(piVar14);
        puVar24 = (undefined4 *)*puVar12;
        puVar3 = puVar24 + (longlong)*(int *)(puVar12 + 1) * 2;
        for (; puVar24 != puVar3; puVar24 = puVar24 + 2) {
          FUN_140e6fd10(piVar23,*puVar24,puVar24[1]);
        }
        puVar12 = (undefined8 *)FUN_1404b0b80(piVar14);
        puVar24 = (undefined4 *)*puVar12;
        puVar3 = puVar24 + (longlong)*(int *)(puVar12 + 1) * 2;
        for (; puVar24 != puVar3; puVar24 = puVar24 + 2) {
          FUN_140e86870(piVar23,*puVar24,puVar24[1]);
        }
        goto LAB_140d3f37a;
      }
LAB_140d3f357:
      *(int *)(param_2 + 0x478) = iVar8 + 1;
      if (*(int *)(param_2 + 0x47c) < iVar8 + 1) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(plVar32);
      }
      FUN_140d22050(*plVar32 + (longlong)iVar8 * 0x58,piVar14);
LAB_140d3f37a:
      piVar14 = piVar14 + 0x16;
    } while (piVar14 != piVar38);
    lVar28 = *(longlong *)(param_1 + 0x478);
  }
  puVar24 = *(undefined4 **)(lVar28 + 0xf0);
  puVar3 = puVar24 + (longlong)*(int *)(lVar28 + 0xf8) * 2;
  if (puVar24 != puVar3) {
    plVar32 = (longlong *)(param_2 + 0x480);
    do {
      lVar11 = *plVar32;
      lVar35 = (longlong)*(int *)(param_2 + 0x488) * 8;
      lVar28 = lVar11 + lVar35;
      if (lVar11 != lVar28) {
        do {
          if (puVar24[1] == *(int *)(lVar11 + 4)) goto LAB_140d3f407;
          lVar11 = lVar11 + 8;
        } while (lVar11 != lVar28);
      }
      iVar8 = *(int *)(param_2 + 0x488) + 1;
      *(int *)(param_2 + 0x488) = iVar8;
      if (*(int *)(param_2 + 0x48c) < iVar8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar32);
      }
      lVar28 = *plVar32;
      *(undefined8 *)(lVar28 + lVar35) = 0;
      *(undefined4 *)(lVar28 + 4 + lVar35) = puVar24[1];
      *(undefined4 *)(lVar28 + lVar35) = *puVar24;
LAB_140d3f407:
      puVar24 = puVar24 + 2;
    } while (puVar24 != puVar3);
  }
  if (plVar37 != (longlong *)0x0) {
    FMemory::Free(plVar37);
  }
  return (undefined1 *)0x1;
code_r0x000140d3efa2:
  piVar14 = piVar14 + 0x18;
  if (piVar14 == piVar38) goto LAB_140d3efab;
  goto LAB_140d3ef90;
code_r0x000140d3f34e:
  piVar23 = piVar23 + 0x16;
  if (piVar23 == piVar30) goto LAB_140d3f357;
  goto LAB_140d3f346;
}



// FUNCTION 140d3f560 FUN_140d3f560 body=113 status=ok
// SIG undefined FUN_140d3f560(void)

void FUN_140d3f560(longlong *param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (0 < (int)param_1[1]) {
    lVar4 = 0;
    do {
      if ((int)uVar5 < 0x20) {
        bVar3 = *(byte *)(lVar4 + param_2);
      }
      else {
        bVar3 = *(byte *)(*param_1 + -0x20 + lVar4);
      }
      pbVar1 = (byte *)(*param_1 + lVar4);
      uVar2 = uVar5 & 0x8000001f;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xffffffe0) + 1;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 1;
      *pbVar1 = *(byte *)((int)uVar2 + param_3) ^ *pbVar1 ^ bVar3;
    } while ((int)uVar5 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 140d3f5e0 FUN_140d3f5e0 body=303 status=ok
// SIG undefined FUN_140d3f5e0(void)

void FUN_140d3f5e0(undefined8 param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  longlong local_28;
  longlong *local_20;
  
  if (param_2 == 1) {
    lVar4 = FUN_142b45e90();
    FOnlineSubsystemEOS::GetLeaderboardsInterface(*(undefined8 *)(lVar4 + 0x18),&local_28);
    if ((local_28 != 0) && (0 < (int)param_3[1])) {
      puVar5 = (undefined8 *)*param_3;
      puVar6 = puVar5 + (longlong)(int)param_3[1] * 2;
      for (; puVar5 != puVar6; puVar5 = puVar5 + 2) {
        local_30 = *(int *)(puVar5 + 1);
        lVar4 = (longlong)local_30;
        _Src = (void *)*puVar5;
        local_38 = (void *)0x0;
        if (local_30 == 0) {
          local_2c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
          _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar4 * 2);
        }
        FUN_142b665e0(local_28,&local_38);
        if (local_38 != (void *)0x0) {
          FMemory::Free();
        }
      }
    }
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
  }
  FUN_140d45290(param_1);
  return;
}



// FUNCTION 140d3f740 FUN_140d3f740 body=590 status=ok
// SIG undefined FUN_140d3f740(void)

void FUN_140d3f740(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x238);
    uVar11 = 0;
    if (cVar5 != '\0') {
      lVar6 = FWeakObjectPtr::Get(param_1 + 0x238);
      TBaseMulticastDelegate<void>::Remove(lVar6 + 0xc30,*(undefined8 *)(param_1 + 0x2d0));
      *(undefined8 *)(param_1 + 0x2d0) = 0;
    }
    plVar7 = (longlong *)FName::FName(local_res8,&DAT_1444f8a9c,1);
    if (param_2 == *plVar7) {
      lVar6 = *(longlong *)(param_1 + 0x5c8);
      local_48 = FUN_140d3faa0;
      uStack_40._0_4_ = 0;
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      local_38 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        plVar7[1] = param_1;
        *plVar7 = (longlong)&PTR_GetPoolName_143f77ac8;
        *(undefined4 *)(plVar7 + 2) = (undefined4)local_48;
        *(undefined4 *)((longlong)plVar7 + 0x14) = local_48._4_4_;
        *(undefined4 *)(plVar7 + 3) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_40._4_4_;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar8;
        *plVar7 = (longlong)&PTR_GetPoolName_143f77b10;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar6 + 0x48,1);
        puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res18);
        iVar3 = *(int *)(lVar6 + 0x50);
        uVar11 = *puVar9;
        *(int *)(lVar6 + 0x50) = iVar3 + 1;
        if (*(int *)(lVar6 + 0x54) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar6 + 0x48,iVar3);
        }
        puVar9 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar6 + 0x48));
        *puVar9 = plVar7;
        *(undefined4 *)(puVar9 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x2c8) = uVar11;
      puVar4 = PTR_u_profile_14629a5b0;
      local_58 = 0;
      local_50 = 0;
      if ((PTR_u_profile_14629a5b0 != (undefined *)0x0) && (*(short *)PTR_u_profile_14629a5b0 != 0))
      {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (*(short *)(PTR_u_profile_14629a5b0 + lVar6 * 2) != 0);
        uVar10 = (int)lVar6 + 1;
        local_50 = (ulonglong)uVar10;
        if (0 < (int)uVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        }
        FGenericPlatformString::Memcpy(local_58,puVar4,(longlong)(int)uVar10 * 2);
      }
      local_48 = *(code **)(param_1 + 0x2b0);
      uStack_40 = *(longlong **)(param_1 + 0x2b8);
      if (uStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
        UNLOCK();
      }
      FUN_140e78a00(*(undefined8 *)(param_1 + 0x5c8),&local_48,&local_58);
      plVar7 = uStack_40;
      if (uStack_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = uStack_40 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*uStack_40)(uStack_40);
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
      if (local_58 != 0) {
        FMemory::Free();
      }
    }
    else {
      FUN_140d2d520(param_1,2);
    }
  }
  return;
}



// FUNCTION 140d3f990 FUN_140d3f990 body=89 status=ok
// SIG undefined FUN_140d3f990(void)

void FUN_140d3f990(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_140d3abb0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1 + 0x1a);
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    FUN_140b89c10();
  }
                    /* WARNING: Could not recover jumptable at 0x000140d3f9e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}



// FUNCTION 140d3f9f0 FUN_140d3f9f0 body=173 status=ok
// SIG undefined FUN_140d3f9f0(void)

void FUN_140d3f9f0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140d3abb0();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_1 + 0x1a);
    cVar1 = FUN_1404c8420(plVar2);
    if (cVar1 == '\0') {
      FUN_140d466e0(param_1);
      return;
    }
  }
  plVar2 = (longlong *)FUN_140d3abb0();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_1 + 0x1a);
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    FUN_140b89c10();
  }
                    /* WARNING: Could not recover jumptable at 0x000140d3fa99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}



// FUNCTION 140d3faa0 FUN_140d3faa0 body=173 status=ok
// SIG undefined FUN_140d3faa0(void)

void FUN_140d3faa0(longlong param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    cVar1 = (*(code *)**(undefined8 **)*param_2)();
    if (cVar1 != '\0') {
      if (*(int *)(param_3 + 1) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*param_3;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,PTR_u_profile_14629a5b0);
      if (iVar2 == 0) {
        TBaseMulticastDelegate<void>::Remove
                  (*(longlong *)(param_1 + 0x5c8) + 0x48,*(undefined8 *)(param_1 + 0x2c8));
        *(undefined8 *)(param_1 + 0x2c8) = 0;
        if (param_4 == 1) {
          FUN_140d2a3c0();
          return;
        }
        FUN_140d2d520(param_1,2);
      }
    }
  }
  return;
}



// FUNCTION 140d3fb50 FUN_140d3fb50 body=825 status=ok
// SIG undefined FUN_140d3fb50(void)

void FUN_140d3fb50(longlong *param_1,longlong *param_2,undefined8 *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong lVar11;
  int local_res8 [2];
  longlong *local_res10;
  undefined8 *local_res18;
  int local_res20;
  longlong local_c8;
  longlong *plStack_c0;
  undefined1 local_b8 [8];
  undefined **local_b0;
  longlong *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined **local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined ***local_60;
  int *local_58;
  
  plVar3 = param_1 + 0x72;
  if ((*plVar3 != 0) &&
     (local_res10 = param_2, local_res18 = param_3, local_res20 = param_4,
     cVar5 = (*(code *)**(undefined8 **)*param_2)(), cVar5 != '\0')) {
    puVar8 = &DAT_143f3eda8;
    if ((int)param_1[0x75] == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)param_1[0x74];
    }
    if (*(int *)(param_3 + 1) != 0) {
      puVar8 = (undefined2 *)*param_3;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar10);
    if (iVar6 == 0) {
      TBaseMulticastDelegate<void>::Remove(param_1[0xb9] + 0x48,param_1[0x76]);
      param_1[0x76] = 0;
      local_c8 = 0;
      plStack_c0 = (longlong *)0x0;
      if (plVar3 != &local_c8) {
        *plVar3 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x73,&plStack_c0);
        plVar3 = plStack_c0;
        if (plStack_c0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_c0 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_c0)(plStack_c0);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
            }
          }
        }
      }
      if (local_res20 == 1) {
        plVar3 = (longlong *)*param_2;
        local_a0 = param_2[1];
        if (local_a0 != 0) {
          LOCK();
          *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
          UNLOCK();
        }
        plVar1 = param_1 + 0xa5;
        local_b0 = &PTR_FUN_143f740c8;
        local_98 = 0;
        local_90 = 0;
        local_a8 = plVar3;
        if ((int)param_1[0xa6] != *(int *)((longlong)param_1 + 0x55c)) {
          if ((plVar3 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar3 + 0x20))(), cVar5 == '\0')) {
            iVar6 = -1;
          }
          else {
            iVar6 = GetTypeHash(plVar3);
          }
          plVar7 = (longlong *)param_1[0xad];
          if ((longlong *)param_1[0xad] == (longlong *)0x0) {
            plVar7 = param_1 + 0xac;
          }
          iVar6 = *(int *)((longlong)plVar7 +
                          ((longlong)(int)param_1[0xae] - 1U & (longlong)iVar6) * 4);
          if (iVar6 != -1) {
            lVar9 = *plVar1;
            do {
              lVar11 = (longlong)iVar6 * 0x38;
              plVar7 = *(longlong **)(lVar9 + 8 + lVar11);
              if ((((plVar7 == (longlong *)0x0) ||
                   (cVar5 = (**(code **)(*plVar7 + 0x20))(), cVar5 == '\0')) ||
                  (plVar3 == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3), cVar5 == '\0')) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              plVar7 = *(longlong **)(lVar9 + lVar11 + 8);
              if ((((plVar7 == (longlong *)0x0) ||
                   (cVar5 = (**(code **)(*plVar7 + 0x20))(), cVar5 == '\0')) &&
                  ((plVar3 == (longlong *)0x0 ||
                   (cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3), cVar5 == '\0')))) ||
                 ((bVar4 && (cVar5 = (**(code **)*plVar3)
                                               (plVar3,*(undefined8 *)(lVar9 + lVar11 + 8)),
                            cVar5 != '\0')))) {
                if ((iVar6 != -1) && (*plVar1 + lVar11 != 0)) {
                  iVar6 = *(int *)(*plVar1 + lVar11 + 0x28);
                  goto LAB_140d3fdb3;
                }
                break;
              }
              lVar9 = *plVar1;
              iVar6 = *(int *)(lVar9 + 0x30 + lVar11);
            } while (iVar6 != -1);
          }
        }
        iVar6 = 0;
LAB_140d3fdb3:
        FUN_1404bf980(&local_b0);
        param_2 = local_res10;
        if (0 < iVar6) {
          local_res8[0] = iVar6 + -1;
          local_80 = *local_res10;
          local_78 = local_res10[1];
          if (local_78 != 0) {
            LOCK();
            *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
            UNLOCK();
          }
          local_70 = 0;
          local_88 = &PTR_FUN_143f740c8;
          local_60 = &local_88;
          local_68 = 0;
          local_58 = local_res8;
          FUN_140d1d390(plVar1,local_b8,&local_60,0);
          FUN_1404bf980(&local_88);
        }
      }
      (**(code **)(*param_1 + 0x178))(param_1,param_2,local_res18,local_res20 == 1);
    }
  }
  return;
}



// FUNCTION 140d3fe90 FUN_140d3fe90 body=74 status=ok
// SIG undefined FUN_140d3fe90(void)

void FUN_140d3fe90(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  
  puVar1 = (undefined8 *)param_1[0xc];
  if (puVar1 != (undefined8 *)0x0) {
    cVar2 = (**(code **)*puVar1)(puVar1,*param_2);
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)param_1[0x14] + 0x88))((longlong *)param_1[0x14],param_1 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x000140d3fed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140d3fee0 FUN_140d3fee0 body=208 status=ok
// SIG undefined FUN_140d3fee0(void)

void FUN_140d3fee0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_18;
  longlong *local_10;
  
  *(undefined1 *)(param_1 + 0x44) = 0;
  (**(code **)(*param_1 + 0x78))();
  if (param_2 != '\0') {
    plVar7 = (longlong *)param_1[3];
    plVar6 = plVar7 + (longlong)(int)param_1[4] * 2;
    for (; plVar7 != plVar6; plVar7 = plVar7 + 2) {
      local_18 = *plVar7;
      if (local_18 != 0) {
        local_10 = (longlong *)plVar7[1];
        if (local_10 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_10 + 1) = (int)local_10[1] + 1;
          UNLOCK();
        }
        FUN_140d2abc0(param_1,&local_18,0);
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
    }
  }
  return;
}



// FUNCTION 140d3ffc0 FUN_140d3ffc0 body=490 status=ok
// SIG undefined FUN_140d3ffc0(void)

void FUN_140d3ffc0(longlong *param_1,int param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  lVar6 = param_1[0x15];
  if (((lVar6 != 0) && (*(int *)(lVar6 + 0x40) != 0)) &&
     (plVar4 = *(longlong **)(lVar6 + 0x38), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    if (*(longlong *)(lVar6 + 0x38) != 0) {
      uVar5 = FMemory::Realloc(*(longlong *)(lVar6 + 0x38),0,0);
      *(undefined8 *)(lVar6 + 0x38) = uVar5;
    }
    *(undefined4 *)(lVar6 + 0x40) = 0;
  }
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x40))(param_1,5);
    plVar4 = (longlong *)param_3[1];
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) {
      return;
    }
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    (**(code **)(*plVar4 + 8))(plVar4,1);
    return;
  }
  if (param_2 == 2) {
    (**(code **)(*param_1 + 0x40))(param_1,6);
  }
  else {
    if (param_2 == 5) {
      local_48 = 0;
      uStack_40 = 0;
      FUN_140c236f0(1,5,&local_48);
    }
    else if (param_2 == 4) {
      local_38 = 0;
      uStack_30 = 0;
      FUN_140c236f0(1,4,&local_38);
    }
    else if (param_2 == 3) {
      local_28 = 0;
      uStack_20 = 0;
      FUN_140c236f0(1,8,&local_28);
    }
    else {
      lVar6 = FUN_140d3a750(param_1[0x14],param_3);
      if (lVar6 == 0) {
        (**(code **)(*param_1 + 0x40))(param_1,5);
        goto LAB_140d4018d;
      }
      local_res8 = *(undefined4 *)(param_1[0x14] + 0x238);
      local_resc = *(undefined4 *)(param_1[0x14] + 0x23c);
      lVar6 = FWeakObjectPtr::Get(&local_res8);
      if (lVar6 != 0) {
        local_58 = *param_3;
        local_50 = param_3[1];
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        FUN_140bec800(lVar6,&local_58,param_4);
        FUN_140d589a0(param_1[0x14],param_3);
      }
    }
    (**(code **)(*param_1 + 0x38))(param_1);
  }
LAB_140d4018d:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
  return;
}



// FUNCTION 140d401b0 FUN_140d401b0 body=573 status=ok
// SIG undefined FUN_140d401b0(void)

void FUN_140d401b0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38 [2];
  
  local_60 = *(int *)(param_4 + 1);
  lVar9 = (longlong)local_60;
  _Src = (void *)*param_4;
  local_68 = (void *)0x0;
  if (local_60 == 0) {
    local_5c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
    _guard_xfg_dispatch_icall_nop(local_68,_Src,lVar9 * 2);
  }
  puVar4 = (undefined8 *)FName::FName(local_res20,L"STEAM",1);
  puVar5 = (undefined8 *)FName::FName(local_88,"OnlineSubsystem",1);
  uVar6 = FUN_14168dc80();
  cVar3 = FModuleManager::IsModuleLoaded(uVar6,*puVar5);
  if (cVar3 != '\0') {
    puVar5 = (undefined8 *)FName::FName(local_80,"OnlineSubsystem",1);
    uVar6 = *puVar5;
    uVar7 = FUN_14168dc80();
    plVar8 = (longlong *)FModuleManager::GetModule(uVar7,uVar6);
    cVar3 = (**(code **)(*plVar8 + 0x70))(plVar8,*puVar4);
    if (cVar3 != '\0') {
      uVar6 = FName::FName(local_78,L"STEAM",1);
      cVar3 = FUN_1404aefa0(uVar6);
      if (cVar3 != '\0') {
        uVar6 = FName::FName(local_70,L"STEAM",1);
        plVar8 = (longlong *)FUN_1404b0000(uVar6);
        if (plVar8 != (longlong *)0x0) {
          puVar10 = &DAT_143f3eda8;
          if (*(int *)(param_4 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*param_4;
          }
          puVar4 = (undefined8 *)(**(code **)(*plVar8 + 0x118))(plVar8,local_38);
          if (*(int *)(puVar4 + 1) != 0) {
            puVar10 = (undefined2 *)*puVar4;
          }
          FString::PrintfImpl(&local_58,L"%s~%s",puVar10,puVar11);
          if (local_68 != (void *)0x0) {
            FMemory::Free();
          }
          local_68 = local_58;
          local_60 = (int)local_50;
          local_5c = local_50._4_4_;
          local_50 = 0;
          local_58 = (void *)0x0;
          if (local_38[0] != 0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  lVar9 = FUN_142b45e90();
  FUN_142b48170(*(undefined8 *)(lVar9 + 0x18),&local_48,param_2);
  if (local_48 != 0) {
    FUN_142b59a60(local_48,param_2,param_3,&local_68);
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d403f0 FUN_140d403f0 body=139 status=ok
// SIG undefined FUN_140d403f0(void)

void FUN_140d403f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_res8;
  
  cVar1 = TArray<FString,FDefaultAllocator>::Contains<FString>(param_1 + 0x50,param_3);
  if (cVar1 != '\0') {
    local_res8 = param_3;
    TArray<FString,FDefaultAllocator>::RemoveAll<<lambda_0089088ead215b5f35713e72b81bce1f>_>
              (param_1 + 0x50,&local_res8);
    if ((int)param_1[0x51] == 0) {
      plVar2 = (longlong *)FUN_140d3b170();
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x50))(plVar2,param_1 + 0x52);
        param_1[0x52] = 0;
      }
      (**(code **)(*param_1 + 0xb8))(param_1,0);
    }
  }
  return;
}



// FUNCTION 140d40480 FUN_140d40480 body=228 status=ok
// SIG undefined FUN_140d40480(void)

void FUN_140d40480(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_18;
  longlong *local_10;
  
  if ((param_2 != '\0') && (0 < *(int *)(param_1 + 0x20))) {
    plVar5 = (longlong *)(*(longlong **)(param_1 + 0x18))[1];
    lVar6 = **(longlong **)(param_1 + 0x18);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (lVar6 != 0) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_18 = lVar6;
      local_10 = plVar5;
      FUN_140d2ae90(param_1,&local_18);
      plVar3 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_10)(local_10);
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
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
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
  return;
}



// FUNCTION 140d405a0 FUN_140d405a0 body=1758 status=ok
// SIG undefined FUN_140d405a0(void)

void FUN_140d405a0(longlong param_1,longlong *param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  wchar_t *_Str;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined **local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined ***local_68;
  longlong local_60;
  int local_58;
  undefined ***local_50;
  undefined4 *local_48;
  
  if ((*(longlong *)(param_1 + 0x328) != 0) &&
     (cVar7 = (*(code *)**(undefined8 **)*param_2)(), cVar7 != '\0')) {
    TBaseMulticastDelegate<void>::Remove
              (*(longlong *)(param_1 + 0x5c8) + 0x30,*(undefined8 *)(param_1 + 0x338));
    *(undefined8 *)(param_1 + 0x338) = 0;
    if (param_3 == 1) {
      local_b8 = (longlong *)param_2[1];
      local_c0 = (longlong *)*param_2;
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
        UNLOCK();
      }
      local_b0 = 0;
      plVar10 = (longlong *)(param_1 + 0x578);
      local_c8 = &PTR_FUN_143f740c8;
      local_a8 = 0;
      if (*(int *)(param_1 + 0x580) != *(int *)(param_1 + 0x5ac)) {
        if ((local_c0 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*local_c0 + 0x20))(local_c0), cVar7 == '\0')) {
          iVar8 = -1;
        }
        else {
          iVar8 = GetTypeHash(local_c0);
        }
        lVar16 = *(longlong *)(param_1 + 0x5b8);
        if (*(longlong *)(param_1 + 0x5b8) == 0) {
          lVar16 = param_1 + 0x5b0;
        }
        iVar8 = *(int *)(lVar16 + ((longlong)*(int *)(param_1 + 0x5c0) - 1U & (longlong)iVar8) * 4);
        if (iVar8 != -1) {
          lVar16 = *plVar10;
          do {
            lVar18 = (longlong)iVar8 * 0x40;
            plVar3 = *(longlong **)(lVar18 + 8 + lVar16);
            if ((((plVar3 == (longlong *)0x0) ||
                 (cVar7 = (**(code **)(*plVar3 + 0x20))(), cVar7 == '\0')) ||
                (local_c0 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*local_c0 + 0x20))(local_c0), cVar7 == '\0')) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            plVar3 = *(longlong **)(lVar18 + lVar16 + 8);
            if ((((plVar3 == (longlong *)0x0) ||
                 (cVar7 = (**(code **)(*plVar3 + 0x20))(), cVar7 == '\0')) &&
                ((local_c0 == (longlong *)0x0 ||
                 (cVar7 = (**(code **)(*local_c0 + 0x20))(local_c0), cVar7 == '\0')))) ||
               ((bVar5 && (cVar7 = (**(code **)*local_c0)
                                             (local_c0,*(undefined8 *)(lVar18 + lVar16 + 8)),
                          cVar7 != '\0')))) {
              if ((iVar8 != -1) && (lVar18 = *plVar10 + lVar18, lVar18 != 0)) goto LAB_140d4079c;
              break;
            }
            lVar16 = *plVar10;
            iVar8 = *(int *)(lVar18 + 0x38 + lVar16);
          } while (iVar8 != -1);
        }
      }
      local_68 = &local_c8;
      FUN_140d1c740(plVar10,&local_a0,&local_68,0);
      lVar18 = (longlong)local_a0 * 0x40 + *plVar10;
LAB_140d4079c:
      local_c8 = &PTR_FUN_143f740c8;
      if (local_b0 != 0) {
        FMemory::Free();
      }
      plVar10 = local_b8;
      local_c8 = &PTR_FUN_143f73d18;
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_b8 + 1;
        lVar16 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if (*(int *)(lVar18 + 0x34) < 0) {
        FUN_140d2b8f0((undefined8 *)(lVar18 + 0x28),0);
      }
      else {
        plVar10 = *(longlong **)(lVar18 + 0x28);
        for (iVar8 = *(int *)(lVar18 + 0x30); iVar8 != 0; iVar8 = iVar8 + -1) {
          TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
                    (plVar10 + 0x2e);
          FUN_14099a9b0(plVar10 + 0x2c);
          FUN_14099aa40(plVar10 + 0x2a);
          TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
                    (plVar10 + 0x28);
          FUN_14099a950(plVar10 + 0x26);
          if (plVar10[0x14] != 0) {
            FMemory::Free();
          }
          if (plVar10[0x11] != 0) {
            FMemory::Free();
          }
          plVar3 = (longlong *)plVar10[0xe];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar3 + 1;
            lVar16 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
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
          plVar3 = (longlong *)plVar10[0xb];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar3 + 1;
            lVar16 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
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
          if (plVar10[3] != 0) {
            FMemory::Free();
          }
          if (*plVar10 != 0) {
            FMemory::Free();
          }
          plVar10 = plVar10 + 0x34;
        }
        *(undefined4 *)(lVar18 + 0x30) = 0;
      }
      local_d8 = 0;
      local_d0 = 0;
      FUN_140d2b8f0(&local_d8,*(undefined4 *)(param_4 + 1));
      puVar19 = (undefined8 *)*param_4;
      puVar20 = puVar19 + (longlong)*(int *)(param_4 + 1) * 2;
      for (; puVar19 != puVar20; puVar19 = puVar19 + 2) {
        if (*(int *)(puVar19 + 1) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = (undefined2 *)*puVar19;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,PTR_u_profile_14629a5b0);
        if (iVar8 != 0) {
          if (*(int *)(puVar19 + 1) == 0) {
            puVar13 = &DAT_143f3eda8;
          }
          else {
            puVar13 = (undefined2 *)*puVar19;
          }
          iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,PTR_DAT_14629a5a8);
          if (iVar8 != 0) {
            if (*(int *)(puVar19 + 1) == 0) {
              _Str = L"";
            }
            else {
              _Str = (wchar_t *)*puVar19;
            }
            uVar9 = wcstoul(_Str,(wchar_t **)0x0,0x10);
            FString::PrintfImpl(&local_60,&DAT_1444ffd84,uVar9);
            iVar8 = *(int *)(puVar19 + 1) + -1;
            if (*(int *)(puVar19 + 1) == 0) {
              iVar8 = 0;
            }
            if (local_58 == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = local_58 + -1;
            }
            if (local_60 != 0) {
              FMemory::Free();
            }
            if (iVar8 == iVar14) {
              puVar4 = *(undefined8 **)(lVar18 + 0x28);
              iVar8 = *(int *)(lVar18 + 0x30);
              for (puVar15 = puVar4; puVar15 != puVar4 + (longlong)iVar8 * 0x34;
                  puVar15 = puVar15 + 0x34) {
                if (*(int *)(puVar19 + 1) == 0) {
                  puVar13 = &DAT_143f3eda8;
                }
                else {
                  puVar13 = (undefined2 *)*puVar19;
                }
                if (*(int *)(puVar15 + 1) == 0) {
                  puVar12 = &DAT_143f3eda8;
                }
                else {
                  puVar12 = (undefined2 *)*puVar15;
                }
                iVar14 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
                uVar6 = local_d0;
                if (iVar14 == 0) {
                  iVar8 = (int)(((longlong)puVar15 - (longlong)puVar4) / 0x1a0);
                  if ((-1 < iVar8) && (iVar8 < *(int *)(lVar18 + 0x30))) {
                    lVar17 = (longlong)(int)local_d0;
                    lVar16 = *(longlong *)(lVar18 + 0x28);
                    iVar14 = (int)local_d0 + 1;
                    local_d0 = CONCAT44(local_d0._4_4_,iVar14);
                    if (local_d0._4_4_ < iVar14) {
                      FUN_140d4bba0(&local_d8,uVar6 & 0xffffffff);
                    }
                    FUN_140d21c70(lVar17 * 0x1a0 + local_d8,(longlong)iVar8 * 0x1a0 + lVar16);
                    goto LAB_140d40aa2;
                  }
                  break;
                }
              }
              uVar6 = local_d0;
              lVar16 = (longlong)(int)local_d0;
              iVar8 = (int)local_d0 + 1;
              local_d0 = CONCAT44(local_d0._4_4_,iVar8);
              if (local_d0._4_4_ < iVar8) {
                FUN_140d4bba0(&local_d8,uVar6 & 0xffffffff);
              }
              FUN_140d21e60(lVar16 * 0x1a0 + local_d8,puVar19,1);
            }
          }
        }
LAB_140d40aa2:
      }
      FUN_140d248e0(lVar18 + 0x28,&local_d8);
      local_9c = *(undefined4 *)(lVar18 + 0x30);
      local_90 = *param_2;
      local_88 = (longlong *)param_2[1];
      if (local_88 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_88 + 1) = (int)local_88[1] + 1;
        UNLOCK();
      }
      local_50 = &local_98;
      local_48 = &local_9c;
      local_98 = &PTR_FUN_143f740c8;
      local_80 = 0;
      local_78 = 0;
      FUN_140d1d390(param_1 + 0x528,local_70,&local_50,0);
      local_98 = &PTR_FUN_143f740c8;
      if (local_80 != 0) {
        FMemory::Free();
      }
      plVar10 = local_88;
      local_98 = &PTR_FUN_143f73d18;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_88 + 1;
        lVar16 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x238);
      if (cVar7 != '\0') {
        plVar10 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x238);
        uVar11 = (**(code **)(*plVar10 + 0x148))(plVar10);
        lVar16 = FUN_142f6caf0(uVar11);
        if (lVar16 != 0) {
          FUN_142f5dfe0(lVar16,param_1 + 0x340,0);
        }
      }
      *(undefined4 *)(param_1 + 0x350) = 0;
      FUN_140d47130(param_1);
      FUN_140d22900(&local_d8);
    }
    else {
      FUN_140d2cff0(param_1,0);
    }
  }
  return;
}



// FUNCTION 140d40c80 FUN_140d40c80 body=470 status=ok
// SIG undefined FUN_140d40c80(void)

void FUN_140d40c80(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int local_res8 [2];
  undefined1 local_58 [8];
  undefined ***local_50;
  int *local_48;
  undefined **local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong local_28;
  undefined8 local_20;
  
  if ((*(longlong *)(param_1 + 0x2b0) != 0) &&
     (cVar5 = (*(code *)**(undefined8 **)*param_2)(), cVar5 != '\0')) {
    TBaseMulticastDelegate<void>::Remove
              (*(longlong *)(param_1 + 0x5c8) + 0x30,*(undefined8 *)(param_1 + 0x2c0));
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    if ((param_3 == 1) && (0 < *(int *)(param_4 + 1))) {
      puVar8 = (undefined8 *)*param_4;
      puVar9 = puVar8 + (longlong)*(int *)(param_4 + 1) * 2;
      local_res8[0] = 0;
      for (; puVar8 != puVar9; puVar8 = puVar8 + 2) {
        if (*(int *)(puVar8 + 1) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = (undefined2 *)*puVar8;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,PTR_u_profile_14629a5b0);
        if (iVar6 != 0) {
          if (*(int *)(puVar8 + 1) == 0) {
            puVar7 = &DAT_143f3eda8;
          }
          else {
            puVar7 = (undefined2 *)*puVar8;
          }
          iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,PTR_DAT_14629a5a8);
          if (iVar6 != 0) {
            local_res8[0] = local_res8[0] + 1;
          }
        }
      }
      local_38 = *param_2;
      local_30 = (longlong *)param_2[1];
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      local_50 = &local_40;
      local_28 = 0;
      local_48 = local_res8;
      local_40 = &PTR_FUN_143f740c8;
      local_20 = 0;
      FUN_140d1d390(param_1 + 0x528,local_58,&local_50,0);
      local_40 = &PTR_FUN_143f740c8;
      if (local_28 != 0) {
        FMemory::Free();
      }
      plVar4 = local_30;
      local_40 = &PTR_FUN_143f73d18;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_30)(local_30);
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
      FUN_140d4cab0(param_1,param_2,0 < local_res8[0]);
    }
    FUN_140d2d520(param_1,1);
  }
  return;
}



// FUNCTION 140d40e60 FUN_140d40e60 body=594 status=ok
// SIG undefined FUN_140d40e60(void)

void FUN_140d40e60(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  undefined2 *puVar8;
  wchar_t *_Str;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  int local_res8 [2];
  undefined1 local_78 [8];
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined ***local_60;
  int *local_58;
  undefined **local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  
  if ((*(longlong *)(param_1 + 0x358) != 0) &&
     (cVar5 = (*(code *)**(undefined8 **)*param_2)(), cVar5 != '\0')) {
    TBaseMulticastDelegate<void>::Remove
              (*(longlong *)(param_1 + 0x5c8) + 0x30,*(undefined8 *)(param_1 + 0x388));
    *(undefined8 *)(param_1 + 0x388) = 0;
    if (param_3 == 1) {
      puVar9 = (undefined8 *)*param_4;
      puVar10 = puVar9 + (longlong)*(int *)(param_4 + 1) * 2;
      uVar11 = 0;
      local_res8[0] = 0;
      for (; puVar9 != puVar10; puVar9 = puVar9 + 2) {
        if (*(int *)(puVar9 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*puVar9;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,PTR_u_profile_14629a5b0);
        if (iVar6 != 0) {
          if (*(int *)(puVar9 + 1) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*puVar9;
          }
          iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,PTR_DAT_14629a5a8);
          if (iVar6 != 0) {
            local_res8[0] = local_res8[0] + 1;
          }
        }
        if (*(int *)(puVar9 + 1) == 0) {
          _Str = L"";
        }
        else {
          _Str = (wchar_t *)*puVar9;
        }
        uVar7 = wcstoul(_Str,(wchar_t **)0x0,0x10);
        if (uVar11 < uVar7) {
          uVar11 = uVar7;
        }
      }
      local_48 = *param_2;
      local_40 = (longlong *)param_2[1];
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      local_60 = &local_50;
      local_38 = 0;
      local_58 = local_res8;
      local_50 = &PTR_FUN_143f740c8;
      local_30 = 0;
      FUN_140d1d390(param_1 + 0x528,local_78,&local_60,0);
      local_50 = &PTR_FUN_143f740c8;
      if (local_38 != 0) {
        FMemory::Free();
      }
      plVar3 = local_40;
      local_50 = &PTR_FUN_143f73d18;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40)(local_40);
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
      *(undefined1 *)(param_1 + 0x380) = 1;
      *(uint *)(*(longlong *)(param_1 + 0x368) + 0x28) = uVar11 + 1;
      FString::PrintfImpl(&local_70,&DAT_1444f8e44,
                          *(undefined4 *)(*(longlong *)(param_1 + 0x368) + 0x28));
      plVar3 = (longlong *)(param_1 + 0x370);
      if (plVar3 == &local_70) {
        if (local_70 != 0) {
          FMemory::Free();
        }
        FUN_140d29e00(param_1);
      }
      else {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        *plVar3 = local_70;
        *(undefined4 *)(param_1 + 0x378) = local_68;
        *(undefined4 *)(param_1 + 0x37c) = local_64;
        FUN_140d29e00(param_1);
      }
    }
    else {
      FUN_140d2d8d0(param_1,0);
    }
  }
  return;
}



// FUNCTION 140d410c0 FUN_140d410c0 body=448 status=ok
// SIG undefined FUN_140d410c0(void)

void FUN_140d410c0(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  char cVar11;
  longlong *plVar12;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  
  bVar8 = false;
  plVar12 = local_48;
  if (param_3 == 2) {
    cVar11 = FUN_142d868e0();
    if (cVar11 != '\0') {
      FUN_1404cf890(&local_40,0);
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 0x118))(local_40,param_2);
      }
      FUN_140d2ae90(param_1,param_2);
      plVar12 = local_38;
      if (local_38 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar1 = local_38 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 != 1) {
        return;
      }
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return;
      }
      (**(code **)(*local_38 + 8))(local_38,1);
      return;
    }
LAB_140d411d7:
    bVar7 = false;
  }
  else {
    if ((param_3 != 0) || (lVar10 = param_1[5], lVar10 == 0)) goto LAB_140d411d7;
    lVar4 = *(longlong *)(lVar10 + 0x60);
    plVar12 = *(longlong **)(lVar10 + 0x68);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    bVar8 = true;
    if (lVar4 == 0) goto LAB_140d411d7;
    puVar5 = (undefined8 *)*param_2;
    local_48 = *(longlong **)(param_1[5] + 0x68);
    uVar6 = *(undefined8 *)(param_1[5] + 0x60);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    bVar8 = true;
    bVar7 = true;
    cVar11 = (**(code **)*puVar5)(puVar5,uVar6);
    if (cVar11 != '\0') {
      bVar9 = true;
      goto LAB_140d411df;
    }
  }
  bVar9 = false;
LAB_140d411df:
  if ((bVar7) && (local_48 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if ((bVar8) && (plVar12 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (bVar9) {
    (**(code **)(*param_1 + 0x58))(param_1,param_2,1);
  }
  return;
}



// FUNCTION 140d41280 FUN_140d41280 body=1313 status=ok
// SIG undefined FUN_140d41280(void)

void FUN_140d41280(longlong *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  uint local_res10;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  longlong *local_110;
  undefined8 *local_108;
  int local_100;
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
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  
  lVar6 = FUN_142b45e90();
  FOnlineSubsystemEOS::GetLeaderboardsInterface(*(undefined8 *)(lVar6 + 0x18),&local_48);
  uVar10 = 0;
  local_138 = (longlong *)0x0;
  local_130 = 0;
  uVar18 = uVar10;
  if ((param_2 & 0xfffffffb) == 0) {
    iVar5 = FUN_140953d20(local_48);
    local_res10 = 0;
    uVar12 = uVar10;
    if (0 < iVar5) {
      do {
        uVar13 = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = (longlong *)0x0;
        local_70 = 0;
        local_68 = (undefined2 *)0x0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        cVar4 = FUN_142b46080(local_48,uVar10,&local_f8);
        uVar17 = (uint)uVar10;
        if ((cVar4 != '\0') && (uVar17 = local_res10, 0 < (int)local_70)) {
          iVar20 = (int)uVar12;
          iVar11 = (int)local_70;
          if ((1 < (int)local_60) && (uVar10 = uVar13, 0 < (int)local_70)) {
            while( true ) {
              if (*(int *)(uVar13 + 8 + (longlong)local_78) == 0) {
                puVar15 = &DAT_143f3eda8;
              }
              else {
                puVar15 = *(undefined2 **)(uVar13 + (longlong)local_78);
              }
              puVar14 = &DAT_143f3eda8;
              if ((int)local_60 != 0) {
                puVar14 = local_68;
              }
              FString::PrintfImpl(&local_128,L"%s:%s",puVar14,puVar15);
              plVar7 = (longlong *)((longlong)local_78 + uVar13);
              if (plVar7 != &local_128) {
                if (*plVar7 != 0) {
                  FMemory::Free();
                }
                *plVar7 = local_128;
                local_128 = 0;
                *(undefined4 *)(plVar7 + 1) = (undefined4)local_120;
                *(undefined4 *)((longlong)plVar7 + 0xc) = local_120._4_4_;
                local_120 = 0;
              }
              if (local_128 != 0) {
                FMemory::Free();
              }
              uVar19 = (int)uVar10 + 1;
              uVar13 = uVar13 + 0x10;
              if ((int)local_70 <= (int)uVar19) break;
              uVar10 = (ulonglong)uVar19;
            }
            iVar20 = local_130._4_4_;
            iVar11 = (int)local_70;
          }
          if (iVar11 != 0) {
            iVar16 = (int)uVar18;
            if (iVar20 < iVar11 + (int)uVar18) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_138);
              iVar16 = (int)local_130;
            }
            plVar8 = local_138 + (longlong)iVar16 * 2;
            plVar7 = local_78;
            iVar20 = iVar11;
            do {
              *plVar8 = 0;
              iVar2 = (int)plVar7[1];
              pvVar3 = (void *)*plVar7;
              *(int *)(plVar8 + 1) = iVar2;
              if (iVar2 == 0) {
                *(undefined4 *)((longlong)plVar8 + 0xc) = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar8,iVar2,0);
                _guard_xfg_dispatch_icall_nop((void *)*plVar8,pvVar3,(longlong)iVar2 * 2);
              }
              plVar8 = plVar8 + 2;
              plVar7 = plVar7 + 2;
              iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
            uVar18 = (ulonglong)(uint)(iVar16 + iVar11);
            local_130 = CONCAT44(local_130._4_4_,iVar16 + iVar11);
          }
        }
        TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
        ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(&local_58);
        if (local_68 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        plVar7 = local_78;
        for (iVar11 = (int)local_70; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          plVar7 = plVar7 + 2;
        }
        if (local_78 != (longlong *)0x0) {
          FMemory::Free(local_78);
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
        if (local_f8 != 0) {
          FMemory::Free();
        }
        local_res10 = uVar17 + 1;
        uVar10 = (ulonglong)local_res10;
        uVar12 = local_130 >> 0x20;
      } while ((int)local_res10 < iVar5);
      if (0 < (int)uVar18) {
        local_108 = (undefined8 *)0x0;
        local_100 = (int)uVar18;
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_108,uVar18,0);
        puVar9 = local_108;
        plVar7 = local_138;
        uVar10 = uVar18;
        do {
          *puVar9 = 0;
          iVar5 = (int)plVar7[1];
          pvVar3 = (void *)*plVar7;
          *(int *)(puVar9 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar9,iVar5,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar3,(longlong)iVar5 * 2);
          }
          puVar9 = puVar9 + 2;
          plVar7 = plVar7 + 2;
          uVar17 = (int)uVar10 - 1;
          uVar10 = (ulonglong)uVar17;
        } while (uVar17 != 0);
        FUN_140d28e60(param_1,&local_108);
        goto LAB_140d4170c;
      }
    }
    FUN_140d45290(param_1);
  }
  else {
    (**(code **)(*param_1 + 0xb8))(param_1,param_2);
    local_110 = (longlong *)0x0;
    if (param_1 + 0x4d != &local_118) {
      param_1[0x4d] = 0;
      local_118 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x4e,&local_110);
      plVar7 = local_110;
      uVar18 = 0;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_110 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
            goto LAB_140d41744;
          }
        }
        uVar18 = local_130 & 0xffffffff;
      }
    }
  }
LAB_140d4170c:
  plVar8 = local_138;
  uVar17 = (uint)uVar18;
  plVar7 = local_138;
  while (uVar17 != 0) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
    uVar17 = (int)uVar18 - 1;
    uVar18 = (ulonglong)uVar17;
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
LAB_140d41744:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_40 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140d417b0 FUN_140d417b0 body=606 status=ok
// SIG undefined FUN_140d417b0(void)

void FUN_140d417b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  code *local_38;
  undefined4 uStack_30;
  
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x238);
    if (cVar5 != '\0') {
      lVar6 = FWeakObjectPtr::Get(param_1 + 0x238);
      TBaseMulticastDelegate<void>::Remove(lVar6 + 0xc48,*(undefined8 *)(param_1 + 0x2f8));
      *(undefined8 *)(param_1 + 0x2f8) = 0;
    }
    plVar7 = (longlong *)FName::FName(local_res8,&DAT_1444f8b1c,1);
    if (param_2 != *plVar7) {
      FUN_140d2d680(param_1,2);
      return;
    }
    plVar7 = *(longlong **)(param_1 + 0x2e8);
    local_48 = *(undefined8 *)(param_1 + 0x2e0);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_40 = plVar7;
    lVar6 = FUN_140d3a750(param_1,&local_48);
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    if (lVar6 != 0) {
      local_38 = FUN_140d446d0;
      uStack_30 = 0;
      puVar8 = (undefined8 *)
               FUN_140d1b800(*(longlong *)(param_1 + 0x5c8) + 0x18,local_res18,param_1,&local_38);
      local_68 = 0;
      local_60 = 0;
      *(undefined8 *)(param_1 + 0x2f0) = *puVar8;
      puVar4 = PTR_u_profile_14629a5b0;
      if ((PTR_u_profile_14629a5b0 != (undefined *)0x0) && (*(short *)PTR_u_profile_14629a5b0 != 0))
      {
        lVar10 = -1;
        do {
          lVar10 = lVar10 + 1;
        } while (*(short *)(PTR_u_profile_14629a5b0 + lVar10 * 2) != 0);
        uVar9 = (int)lVar10 + 1;
        local_60 = (ulonglong)uVar9;
        if (0 < (int)uVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
        }
        FGenericPlatformString::Memcpy(local_68,puVar4,(longlong)(int)uVar9 * 2);
      }
      local_58 = *(undefined8 *)(param_1 + 0x2e0);
      local_50 = *(longlong **)(param_1 + 0x2e8);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      FUN_140e969e0(*(undefined8 *)(param_1 + 0x5c8),&local_58,&local_68,lVar6);
      plVar7 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_50)(local_50);
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
      if (local_68 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140d41a10 FUN_140d41a10 body=142 status=ok
// SIG undefined FUN_140d41a10(void)

void FUN_140d41a10(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1404cdd50(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0xf8))(local_18,param_1 + 0x18);
  }
  (**(code **)(*param_1 + 0x38))(param_1);
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



// FUNCTION 140d41aa0 FUN_140d41aa0 body=318 status=ok
// SIG undefined FUN_140d41aa0(void)

void FUN_140d41aa0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int local_res20 [2];
  int local_38 [2];
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  lVar5 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_18,param_2);
  if (local_18 != 0) {
    local_30 = 0;
    FUN_1404cf890(&local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_res20[0] = 1;
      local_38[0] = 1;
      (**(code **)(*local_28 + 0x140))(local_28,param_2,3,local_res20);
      (**(code **)(*local_28 + 0x140))(local_28,param_2,9,local_38);
      *(bool *)(local_18 + 600) = local_res20[0] != 1;
      *(bool *)(local_18 + 0x259) = local_38[0] != 1;
    }
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
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 140d41be0 FUN_140d41be0 body=1083 status=ok
// SIG undefined FUN_140d41be0(void)

void FUN_140d41be0(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong **pplVar12;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong *local_50 [2];
  longlong *local_40;
  longlong local_38;
  undefined1 local_30 [8];
  
  puVar6 = (undefined8 *)param_1[0xc];
  if ((puVar6 != (undefined8 *)0x0) &&
     (cVar4 = (**(code **)*puVar6)(puVar6,*param_2), cVar4 != '\0')) {
    plVar11 = (longlong *)0x0;
    FUN_1404cf890(&local_90,0);
    if ((local_90 != (longlong *)0x0) && (*param_4 == param_1[0x1d])) {
      (**(code **)(*local_90 + 0x128))(local_90,param_4);
    }
    puVar6 = (undefined8 *)FName::FName(local_30,L"SPARK",1);
    FUN_1404cf890(&local_a0,*puVar6);
    if ((local_a0 != (longlong *)0x0) && (*param_4 == param_1[0x1e])) {
      (**(code **)(*local_a0 + 0x128))(local_a0,param_4);
    }
    if ((param_1[0x1d] == 0) && (param_1[0x1e] == 0)) {
      local_a8 = *(undefined4 *)(param_1[0x14] + 0x238);
      local_a4 = *(undefined4 *)(param_1[0x14] + 0x23c);
      lVar7 = FWeakObjectPtr::Get(&local_a8);
      if (lVar7 == 0) {
        (**(code **)(*param_1 + 0x40))(param_1,5);
      }
      else {
        local_80 = *param_2;
        local_78 = param_2[1];
        if (local_78 != 0) {
          LOCK();
          *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
          UNLOCK();
        }
        uVar5 = FUN_140bcaa10(lVar7,&local_80);
        local_70 = *param_2;
        local_68 = param_2[1];
        if (local_68 != 0) {
          LOCK();
          *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
          UNLOCK();
        }
        cVar4 = FUN_140baf970(lVar7,&local_70,uVar5);
        if (cVar4 == '\0') {
          (**(code **)(*param_1 + 0x38))(param_1);
        }
        else {
          plVar8 = (longlong *)operator_new(0xa0);
          if (plVar8 != (longlong *)0x0) {
            *(undefined4 *)(plVar8 + 1) = 1;
            *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
            *plVar8 = (longlong)&PTR_FUN_1444f84d8;
            FUN_140ddbea0(plVar8 + 2,lVar7,param_2,uVar5);
            plVar11 = plVar8;
          }
          local_b8 = plVar11 + 2;
          plStack_b0 = plVar11;
          SharedPointerInternals::EnableSharedFromThis(&local_b8,local_b8,local_b8);
          local_c8 = local_b8;
          plStack_c0 = plStack_b0;
          if (plStack_b0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
            UNLOCK();
          }
          pplVar2 = (longlong **)(param_1 + 0x15);
          if (pplVar2 != &local_c8) {
            *pplVar2 = local_b8;
            local_c8 = (longlong *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x16,&plStack_c0);
          }
          plVar11 = plStack_c0;
          if (plStack_c0 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_c0 + 1;
            lVar9 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plStack_c0)(plStack_c0);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
              }
            }
          }
          plVar11 = plStack_b0;
          if (plStack_b0 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_b0 + 1;
            lVar9 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plStack_b0)(plStack_b0);
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
          plVar11 = *pplVar2;
          local_60 = FUN_140d3ffc0;
          uStack_58 = 0;
          pplVar12 = (longlong **)(plVar11 + 7);
          plVar8 = (longlong *)FMemory::Realloc(0,0x30);
          local_50[0] = plVar8;
          if (plVar8 != (longlong *)0x0) {
            plVar8[1] = (longlong)param_1;
            *plVar8 = (longlong)&PTR_GetPoolName_144510cd0;
            plVar8[2] = (longlong)local_60;
            plVar8[3] = CONCAT44(uStack_54,uStack_58);
            lVar9 = FDelegateHandle::GenerateNewID();
            plVar8[5] = lVar9;
            *plVar8 = (longlong)&PTR_GetPoolName_144510d18;
          }
          if (local_50 != pplVar12) {
            if (plVar8 == (longlong *)0x0) {
              if (((int)plVar11[8] != 0) && (plVar10 = *pplVar12, plVar10 != (longlong *)0x0)) {
                (**(code **)(*plVar10 + 0x28))(plVar10,0);
                if (*pplVar12 != (longlong *)0x0) {
                  plVar10 = (longlong *)FMemory::Realloc(*pplVar12,0,0);
                  *pplVar12 = plVar10;
                }
                *(undefined4 *)(plVar11 + 8) = 0;
              }
            }
            else {
              (**(code **)(*plVar8 + 0x30))(plVar8,pplVar12);
            }
          }
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x28))(plVar8,0);
            local_50[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
            if (local_50[0] != (longlong *)0x0) {
              FMemory::Free(local_50[0]);
            }
          }
          local_40 = *pplVar2;
          local_38 = param_1[0x16];
          if (local_38 != 0) {
            LOCK();
            *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
            UNLOCK();
          }
          FUN_140be1ac0(lVar7,&local_40);
        }
      }
    }
    plVar11 = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_98 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    plVar11 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_88 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d42020 FUN_140d42020 body=875 status=ok
// SIG undefined FUN_140d42020(void)

void FUN_140d42020(longlong *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                  longlong param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined1 local_68 [8];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40 [3];
  
  if (param_1[0x56] == 0) {
    return;
  }
  cVar4 = (*(code *)**(undefined8 **)*param_2)();
  if (cVar4 == '\0') {
    return;
  }
  if (*(int *)(param_3 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*param_3;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,PTR_u_profile_14629a5b0);
  if (iVar6 != 0) {
    return;
  }
  TBaseMulticastDelegate<void>::Remove(param_1[0xb9],param_1[0x58]);
  param_1[0x58] = 0;
  if (param_4 != 1) {
    if (param_4 == 4) {
      FUN_140d2a3c0(param_1);
      return;
    }
    if (param_4 == 6) {
      FUN_140d2d520(param_1,6);
      return;
    }
    FUN_1404cf890(&local_50,0);
    if ((local_50 == (code *)0x0) ||
       (iVar6 = (**(code **)(*(longlong *)local_50 + 0x78))(local_50,param_2), iVar6 != 0)) {
      FUN_140d3cce0(param_1,param_2);
    }
    else {
      FUN_140d2d520(param_1,6);
    }
    if (CONCAT44(uStack_44,uStack_48) == 0) {
      return;
    }
    LOCK();
    piVar1 = (int *)(CONCAT44(uStack_44,uStack_48) + 8);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 != 1) {
      return;
    }
    puVar2 = (undefined8 *)CONCAT44(uStack_44,uStack_48);
    (**(code **)*puVar2)(puVar2);
    LOCK();
    piVar1 = (int *)((longlong)puVar2 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 != 1) {
      return;
    }
    (**(code **)(*(longlong *)CONCAT44(uStack_44,uStack_48) + 8))
              ((longlong *)CONCAT44(uStack_44,uStack_48),1);
    return;
  }
  if (param_5 == 0) {
LAB_140d422cb:
    FUN_140d3cce0(param_1,param_2);
    return;
  }
  lVar7 = ANavVolume::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
      != lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) goto LAB_140d422cb;
  FUN_140d4c4a0(param_1,param_2,param_5);
  cVar5 = '\0';
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x47);
  if (cVar4 != '\0') {
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x47);
    lVar7 = UGameInstance::GetFirstGamePlayer(uVar8);
    if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x30), lVar7 != 0)) {
      lVar9 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        cVar5 = FUN_140d01b90(lVar7);
      }
    }
  }
  iVar6 = *(int *)(param_5 + 0xa8);
  if ((cVar5 != '\0') || (iVar6 == 0)) {
    uVar8 = FUN_140d3ac60(param_1);
    FUN_140d4c580(param_1,param_2,uVar8);
    FUN_140d2d520(param_1,1);
    return;
  }
  uStack_48 = 0;
  local_60 = (longlong *)0x0;
  local_50 = FUN_140d42b90;
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  local_58 = 3;
  local_60 = plVar10;
  if (plVar10 != (longlong *)0x0) {
    plVar10[1] = (longlong)param_1;
    *plVar10 = (longlong)&PTR_GetPoolName_144510a80;
    *(undefined4 *)(plVar10 + 2) = (undefined4)local_50;
    *(undefined4 *)((longlong)plVar10 + 0x14) = local_50._4_4_;
    *(undefined4 *)(plVar10 + 3) = uStack_48;
    *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_44;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar10[5] = lVar7;
    *plVar10 = (longlong)&PTR_GetPoolName_144510ac8;
  }
  plVar10 = (longlong *)(**(code **)(*param_1 + 0x120))(param_1,local_68,&local_60);
  param_1[0x58] = *plVar10;
  if (local_58 != 0) {
    if (local_60 == (longlong *)0x0) goto LAB_140d42267;
    (**(code **)(*local_60 + 0x28))(local_60,0);
    if (local_60 != (longlong *)0x0) {
      local_60 = (longlong *)FMemory::Realloc(local_60,0,0);
    }
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FMemory::Free(local_60);
  }
LAB_140d42267:
  FString::PrintfImpl(local_40,&DAT_1444f8e44,iVar6);
  FUN_140d46ef0(param_1,param_2,local_40,0);
  if (local_40[0] == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140d42390 FUN_140d42390 body=110 status=ok
// SIG undefined FUN_140d42390(void)

void FUN_140d42390(longlong *param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  
  puVar1 = (undefined8 *)param_1[0xc];
  if (puVar1 != (undefined8 *)0x0) {
    cVar3 = (**(code **)*puVar1)(puVar1,*param_2);
    if (cVar3 != '\0') {
      plVar2 = (longlong *)param_1[0x14];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 200))(plVar2,param_1 + 0x1b);
      }
      if (param_3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140d423e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x38))();
        return;
      }
      (**(code **)(*param_1 + 0x40))(param_1,4);
    }
  }
  return;
}



// FUNCTION 140d42400 FUN_140d42400 body=653 status=ok
// SIG undefined FUN_140d42400(void)

void FUN_140d42400(longlong *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  wint_t wVar7;
  wint_t wVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  wint_t *pwVar15;
  undefined2 *puVar16;
  bool bVar17;
  longlong local_48;
  longlong *local_40;
  
  plVar3 = param_1 + 0x60;
  if (*plVar3 == 0) {
    return;
  }
  cVar6 = (*(code *)**(undefined8 **)*param_2)();
  if (cVar6 == '\0') {
    return;
  }
  puVar16 = &DAT_143f3eda8;
  if ((int)param_1[99] == 0) {
    puVar14 = &DAT_143f3eda8;
  }
  else {
    puVar14 = (undefined2 *)param_1[0x62];
  }
  if (*(int *)(param_3 + 1) == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)*param_3;
  }
  iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar14);
  if (iVar9 != 0) {
    return;
  }
  TBaseMulticastDelegate<void>::Remove(param_1[0xb9],param_1[100]);
  bVar17 = param_4 == 1;
  param_1[100] = 0;
  lVar11 = 0;
  if (param_4 == 1) {
    if (param_5 != 0) {
      lVar11 = FUN_1414707f0();
      if ((*(int *)(*(longlong *)(param_5 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_5 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if (*(int *)(param_3 + 1) != 0) {
          puVar16 = (undefined2 *)*param_3;
        }
        pwVar15 = &DAT_1443179c0;
        do {
          wVar7 = *(wint_t *)((longlong)(puVar16 + -0xa218bce0) + (longlong)pwVar15);
          lVar11 = param_5;
          if ((wVar7 == 0) && (*pwVar15 == 0)) goto LAB_140d4258c;
          if (wVar7 != *pwVar15) {
            wVar7 = towlower(wVar7);
            wVar8 = towlower(*pwVar15);
            if (wVar7 != wVar8) goto LAB_140d42550;
          }
          pwVar15 = pwVar15 + 1;
        } while( true );
      }
    }
    bVar17 = false;
    lVar11 = 0;
  }
LAB_140d4258c:
  local_40 = (longlong *)0x0;
  if (plVar3 != &local_48) {
    *plVar3 = 0;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x61,&local_40);
    plVar3 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  if ((lVar11 != 0) && (cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x47), cVar6 != '\0')) {
    uVar12 = FWeakObjectPtr::Get(param_1 + 0x47);
    cVar6 = FUN_140bca8a0(uVar12);
    if (cVar6 != '\0') {
      if (DAT_146af4bf0 != (longlong *)0x0) {
        (**(code **)(*DAT_146af4bf0 + 0x18))(DAT_146af4bf0,lVar11);
      }
      FUN_142d87cb0(lVar11);
    }
  }
  (**(code **)(*param_1 + 0x138))(param_1,param_2,param_3,bVar17,lVar11,param_4);
  return;
LAB_140d42550:
  if (wVar7 != wVar8) {
    uVar10 = FUN_140d4d650(param_3);
    *(undefined4 *)(param_5 + 0x28) = uVar10;
    FUN_140d4c580(param_1,param_2,param_5);
  }
  goto LAB_140d4258c;
}



// FUNCTION 140d42690 FUN_140d42690 body=1274 status=ok
// SIG undefined FUN_140d42690(void)

/* WARNING: Removing unreachable block (ram,0x000140d42ac6) */
/* WARNING: Removing unreachable block (ram,0x000140d42ad4) */
/* WARNING: Removing unreachable block (ram,0x000140d42ae2) */

void FUN_140d42690(longlong *param_1,longlong *param_2,undefined8 *param_3,int param_4,
                  longlong param_5)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_90;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (param_1[0x65] == 0) {
    return;
  }
  cVar6 = (*(code *)**(undefined8 **)*param_2)();
  if (cVar6 == '\0') {
    return;
  }
  plVar13 = (longlong *)*param_2;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  local_90 = plVar13;
  if ((int)param_1[0xb0] != *(int *)((longlong)param_1 + 0x5ac)) {
    if ((plVar13 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar13 + 0x20))(plVar13), cVar6 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      iVar7 = GetTypeHash(plVar13);
    }
    else {
      iVar7 = -1;
    }
    plVar8 = (longlong *)param_1[0xb7];
    if ((longlong *)param_1[0xb7] == (longlong *)0x0) {
      plVar8 = param_1 + 0xb6;
    }
    iVar7 = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[0xb8] - 1U & (longlong)iVar7) * 4);
    if (iVar7 != -1) {
      lVar10 = param_1[0xaf];
      do {
        lVar15 = (longlong)iVar7 * 0x40;
        plVar8 = *(longlong **)(lVar15 + 8 + lVar10);
        if ((plVar8 == (longlong *)0x0) || (cVar6 = (**(code **)(*plVar8 + 0x20))(), cVar6 == '\0'))
        {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if ((plVar13 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar13 + 0x20))(plVar13), cVar6 == '\0')) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_140d427ea;
          bVar3 = true;
        }
        else {
LAB_140d427ea:
          bVar3 = false;
        }
        plVar8 = *(longlong **)(lVar15 + lVar10 + 8);
        if ((plVar8 == (longlong *)0x0) || (cVar6 = (**(code **)(*plVar8 + 0x20))(), cVar6 == '\0'))
        {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
LAB_140d42826:
          if ((bVar3) &&
             (cVar6 = (**(code **)*plVar13)(plVar13,*(undefined8 *)(lVar15 + lVar10 + 8)),
             cVar6 != '\0')) goto LAB_140d4283b;
          bVar3 = false;
        }
        else {
          if ((plVar13 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar13 + 0x20))(), cVar6 == '\0')) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) goto LAB_140d42826;
LAB_140d4283b:
          bVar3 = true;
        }
        if (bVar3) {
          if ((iVar7 != -1) && (param_1[0xaf] + lVar15 != 0)) {
            plVar13 = (longlong *)(param_1[0xaf] + lVar15 + 0x28);
            goto LAB_140d42860;
          }
          break;
        }
        lVar10 = param_1[0xaf];
        iVar7 = *(int *)(lVar15 + 0x38 + lVar10);
      } while (iVar7 != -1);
    }
  }
  plVar13 = (longlong *)0x0;
LAB_140d42860:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar2 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar2)();
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
  if (plVar13 == (longlong *)0x0) {
    FUN_140d2cff0(param_1,0);
    return;
  }
  iVar7 = (int)param_1[0x6a];
  if ((iVar7 < 0) || ((int)plVar13[1] <= iVar7)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  puVar9 = &DAT_143f3eda8;
  puVar11 = (undefined8 *)((longlong)iVar7 * 0x1a0 + *plVar13);
  if (*(int *)(param_3 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*param_3;
  }
  if (*(int *)(puVar11 + 1) != 0) {
    puVar9 = (undefined2 *)*puVar11;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar12);
  if (iVar7 != 0) {
    return;
  }
  TBaseMulticastDelegate<void>::Remove(param_1[0xb9],param_1[0x67]);
  param_1[0x67] = 0;
  if ((param_4 == 1) && (param_5 != 0)) {
    lVar10 = FUN_1414707f0();
    if ((*(int *)(*(longlong *)(param_5 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_5 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140d58020(param_1,(longlong)(int)param_1[0x6a] * 0x1a0 + *plVar13,param_5);
      goto LAB_140d429c7;
    }
  }
  *(undefined4 *)((longlong)(int)param_1[0x6a] * 0x1a0 + 0x10 + *plVar13) = 2;
LAB_140d429c7:
  (**(code **)(*param_1 + 0x1b8))(param_1,param_2,plVar13);
  local_a8 = 0;
  local_a0 = 0;
  lVar10 = *plVar13;
  lVar15 = (longlong)(int)plVar13[1] * 0x1a0 + lVar10;
  for (; lVar10 != lVar15; lVar10 = lVar10 + 0x1a0) {
    FName::ToString(lVar10 + 0x30,&local_70);
    FDateTime::ToString(lVar10 + 0x38,&local_60);
    FUN_141682af0(lVar10 + 400,&local_50,0);
    uVar5 = local_a0;
    lVar14 = (longlong)(int)local_a0;
    iVar7 = (int)local_a0 + 1;
    local_a0 = CONCAT44(local_a0._4_4_,iVar7);
    if (local_a0._4_4_ < iVar7) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_a8,uVar5 & 0xffffffff);
    }
    puVar11 = (undefined8 *)(lVar14 * 0x30 + local_a8);
    *puVar11 = 0;
    *puVar11 = local_70;
    *(undefined4 *)(puVar11 + 1) = (undefined4)local_68;
    *(undefined4 *)((longlong)puVar11 + 0xc) = local_68._4_4_;
    puVar11[2] = 0;
    puVar11[2] = local_60;
    *(undefined4 *)(puVar11 + 3) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar11 + 0x1c) = local_58._4_4_;
    puVar11[4] = 0;
    puVar11[4] = local_50;
    *(undefined4 *)(puVar11 + 5) = (undefined4)local_48;
    *(undefined4 *)((longlong)puVar11 + 0x2c) = local_48._4_4_;
    local_48 = 0;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
  }
  TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(param_1 + 0xbd,&local_a8,1);
  *(int *)(param_1 + 0x6a) = (int)param_1[0x6a] + 1;
  FUN_140d47130(param_1);
  if ((int)local_a0 != 0) {
    plVar13 = (longlong *)(local_a8 + 0x10);
    iVar7 = (int)local_a0;
    do {
      if (plVar13[2] != 0) {
        FMemory::Free();
      }
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      if (plVar13[-2] != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 6;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d42b90 FUN_140d42b90 body=160 status=ok
// SIG undefined FUN_140d42b90(void)

void FUN_140d42b90(longlong *param_1,undefined8 *param_2,undefined8 param_3,char param_4,
                  longlong param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_1[0x56] != 0) {
    cVar1 = (*(code *)**(undefined8 **)*param_2)();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x128))(param_1,param_1 + 0x58);
      if ((param_4 == '\0') || (param_5 == 0)) {
        uVar2 = FUN_140d3ac60(param_1);
        lVar3 = FUN_140d3a750(param_1,param_2);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0xa8) = 1;
          *(undefined1 *)(lVar3 + 0x28) = 1;
        }
        FUN_140d4c580(param_1,param_2,uVar2);
      }
      FUN_140d3dde0(param_1);
    }
  }
  return;
}



// FUNCTION 140d42c30 FUN_140d42c30 body=481 status=ok
// SIG undefined FUN_140d42c30(void)

void FUN_140d42c30(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28 [2];
  
  plVar5 = (longlong *)0x0;
  bVar8 = false;
  FUN_140d3bc80(&local_48,0);
  plVar7 = local_48;
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x38))(local_48,param_1 + 0x1b8);
    if (param_2 == 0) {
      local_28[0] = 0;
      local_28[1] = 0;
      cVar3 = (**(code **)(*plVar7 + 0x18))(plVar7,local_28);
      if (cVar3 != '\0') {
        plVar4 = (longlong *)operator_new(0x40);
        local_38 = plVar5;
        if (plVar4 != (longlong *)0x0) {
          *(undefined4 *)plVar4 = 0;
          plVar4[1] = 0;
          plVar4[2] = 0;
          plVar4[3] = 0;
          plVar4[4] = 0;
          plVar4[5] = 0;
          plVar4[6] = 0;
          plVar4[7] = 0;
          local_38 = plVar4;
        }
        plVar4 = (longlong *)operator_new(0x18);
        if (plVar4 != (longlong *)0x0) {
          *(undefined4 *)(plVar4 + 1) = 1;
          *plVar4 = (longlong)&PTR_FUN_144510d60;
          *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
          plVar4[2] = (longlong)local_38;
          plVar5 = plVar4;
        }
        local_30 = plVar5;
        SharedPointerInternals::EnableSharedFromThis(&local_38,local_38,local_38);
        bVar8 = local_38 != (longlong *)0x0;
        if (bVar8) {
          FUN_142b61620(local_28);
          FUN_140dc08b0();
          lVar6 = FUN_142b45e90();
          FUN_142b6d4e0(*(undefined8 *)(lVar6 + 0x18),&local_38);
        }
        plVar5 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_30 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          plVar7 = local_48;
          if ((int)lVar6 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar7 = local_48;
            if (iVar2 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
              plVar7 = local_48;
            }
          }
        }
      }
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  FUN_140d3fee0(param_1,bVar8);
  plVar7 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140d42e20 FUN_140d42e20 body=365 status=ok
// SIG undefined FUN_140d42e20(void)

void FUN_140d42e20(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  longlong *local_18;
  longlong *local_10;
  
  bVar7 = false;
  cVar3 = (**(code **)(*param_1 + 0x200))();
  if (((cVar3 != '\0') && (cVar3 = FUN_142b01f90(*param_2), cVar3 != '\0')) &&
     (iVar4 = FUN_142afb290(*param_2), iVar4 - 200U < 7)) {
    plVar5 = (longlong *)operator_new(0x40);
    local_10 = (longlong *)0x0;
    local_18 = local_10;
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = 0;
      plVar5[3] = 0;
      plVar5[4] = 0;
      plVar5[5] = 0;
      plVar5[6] = 0;
      plVar5[7] = 0;
      local_18 = plVar5;
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *plVar5 = (longlong)&PTR_FUN_144510d60;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      plVar5[2] = (longlong)local_18;
      local_10 = plVar5;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
    bVar7 = local_18 != (longlong *)0x0;
    if (bVar7) {
      FUN_142b61620(*param_2 + 0x98);
      FUN_140dc08b0();
      lVar6 = FUN_142b45e90();
      FUN_142b6d4e0(*(undefined8 *)(lVar6 + 0x18),&local_18);
    }
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_10)(local_10);
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
  FUN_140d3fee0(param_1,bVar7);
  return;
}



// FUNCTION 140d42fd0 FUN_140d42fd0 body=134 status=ok
// SIG undefined FUN_140d42fd0(void)

void FUN_140d42fd0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_18;
  longlong *local_10;
  
  lVar4 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar4 + 0x18),&local_18,param_2);
  if (local_18 != 0) {
    uVar5 = FUN_14203c4a0();
    FUN_140d28250(param_1,param_2,uVar5);
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
  return;
}


