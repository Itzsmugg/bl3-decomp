// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1414ccc40 FUN_1414ccc40 body=38 status=ok
// SIG undefined FUN_1414ccc40(void)

void FUN_1414ccc40(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x418);
  FUN_1414cb160(param_2);
  return;
}



// FUNCTION 1414ccc80 FUN_1414ccc80 body=47 status=ok
// SIG undefined FUN_1414ccc80(void)

void FUN_1414ccc80(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x58);
  FTickFunction::FTickFunction(param_2);
  *param_2 = &PTR__scalar_deleting_destructor__1446fe648;
  return;
}



// FUNCTION 1414cccb0 FUN_1414cccb0 body=426 status=ok
// SIG undefined FUN_1414cccb0(void)

undefined8 FUN_1414cccb0(undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  
  if (param_4 != 0) {
    piVar5 = (int *)(param_3 + 0x28);
    do {
      *param_2 = (char)piVar5[-10];
      plVar1 = (longlong *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(piVar5 + -8);
      if ((longlong *)(piVar5 + -6) != plVar1) {
        if ((piVar5[-4] == 0) || (plVar3 = *(longlong **)(piVar5 + -6), plVar3 == (longlong *)0x0))
        {
          if ((*(int *)(param_2 + 0x18) != 0) &&
             (plVar3 = (longlong *)*plVar1, plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x28))(plVar3,0);
            if (*plVar1 != 0) {
              lVar4 = FMemory::Realloc(*plVar1,0,0);
              *plVar1 = lVar4;
            }
            *(undefined4 *)(param_2 + 0x18) = 0;
          }
        }
        else {
          (**(code **)(*plVar3 + 0x30))();
        }
      }
      plVar1 = (longlong *)(param_2 + 0x20);
      if ((longlong *)(piVar5 + -2) != plVar1) {
        if ((*piVar5 == 0) || (plVar3 = *(longlong **)(piVar5 + -2), plVar3 == (longlong *)0x0)) {
          if ((*(int *)(param_2 + 0x28) != 0) && ((longlong *)*plVar1 != (longlong *)0x0)) {
            (**(code **)(*(longlong *)*plVar1 + 0x28))();
            if (*plVar1 != 0) {
              lVar4 = FMemory::Realloc(*plVar1,0,0);
              *plVar1 = lVar4;
            }
            *(undefined4 *)(param_2 + 0x28) = 0;
          }
        }
        else {
          (**(code **)(*plVar3 + 0x30))();
        }
      }
      plVar1 = (longlong *)(param_2 + 0x30);
      if ((longlong *)(piVar5 + 2) != plVar1) {
        if ((piVar5[4] == 0) || (plVar3 = *(longlong **)(piVar5 + 2), plVar3 == (longlong *)0x0)) {
          if ((*(int *)(param_2 + 0x38) != 0) && ((longlong *)*plVar1 != (longlong *)0x0)) {
            (**(code **)(*(longlong *)*plVar1 + 0x28))();
            if (*plVar1 != 0) {
              lVar4 = FMemory::Realloc(*plVar1,0,0);
              *plVar1 = lVar4;
            }
            *(undefined4 *)(param_2 + 0x38) = 0;
          }
        }
        else {
          (**(code **)(*plVar3 + 0x30))();
        }
      }
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(piVar5 + 6);
      param_2[0x48] = (char)piVar5[8];
      param_2[0x49] = *(undefined1 *)((longlong)piVar5 + 0x21);
      param_2[0x4a] = *(undefined1 *)((longlong)piVar5 + 0x22);
      param_2[0x4b] = *(undefined1 *)((longlong)piVar5 + 0x23);
      piVar2 = piVar5 + 9;
      piVar5 = piVar5 + 0x14;
      param_2[0x4c] = (char)*piVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x50;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414cce60 FUN_1414cce60 body=140 status=ok
// SIG undefined FUN_1414cce60(void)

undefined1 FUN_1414cce60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    lVar3 = param_2 + 0x50;
    TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2,param_3);
    lVar1 = param_3 - param_2;
    lVar2 = 4;
    do {
      param_2 = param_2 + 0x10;
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2,lVar1 + param_2);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    param_3 = param_3 + 0x50;
    param_2 = lVar3;
  }
  return 1;
}



// FUNCTION 1414ccef0 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FRBFEntry>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414ccf40 FUN_1414ccf40 body=117 status=ok
// SIG undefined FUN_1414ccf40(void)

undefined8 FUN_1414ccf40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0xc);
    do {
      *(undefined4 *)((longlong)puVar1 + -0xc) = *(undefined4 *)(param_3 + -0xc + (longlong)puVar1);
      puVar1[-1] = *(undefined8 *)(param_3 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 8 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_3 + 0xc + (longlong)puVar1);
      TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
      ::operator=((longlong)puVar1 + 0x14,param_3 + 0x14 + (longlong)puVar1);
      puVar1 = puVar1 + 0xe;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414ccfc0 FUN_1414ccfc0 body=162 status=ok
// SIG undefined FUN_1414ccfc0(void)

undefined8 FUN_1414ccfc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 8);
    do {
      puVar1[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      local_28 = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      FString::FString(local_20,param_3 + 0x10 + (longlong)puVar1);
      FSoftObjectPath::operator=(puVar1 + 2,&local_28);
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_3 + 0x20 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(param_3 + 0x28 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_3 + 0x30 + (longlong)puVar1);
      puVar1 = puVar1 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414cd070 Copy body=174 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FCS_CharacterDeathDefinitions>::Copy
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar2 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar2;
      if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_2,iVar2);
        ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 * 0x30);
      }
    }
    puVar1 = param_3 + 2;
    param_3 = param_3 + 3;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)puVar1;
    param_2 = param_2 + 3;
  }
  return 1;
}



// FUNCTION 1414cd120 Copy body=87 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FMWInputTextRenames>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FCS_CharacterDeathDefinitions::operator=(param_2,param_3 + param_2);
      TSet<TTuple<FString,FVector>,TDefaultMapHashableKeyFuncs<FString,FVector,0>,FDefaultSetAllocator>
      ::operator=(param_2 + 0x18,param_3 + 0x18 + param_2);
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414cd180 FUN_1414cd180 body=110 status=ok
// SIG undefined FUN_1414cd180(void)

undefined8 FUN_1414cd180(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x14);
    do {
      *(undefined8 *)(puVar1 + -5) = *(undefined8 *)(param_3 + -0x14 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + -3) = *(undefined8 *)(param_3 + -0xc + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
      ::operator=(puVar1 + 1,param_3 + 4 + (longlong)puVar1);
      puVar1 = puVar1 + 0x1a;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414cd1f0 FUN_1414cd1f0 body=136 status=ok
// SIG undefined FUN_1414cd1f0(void)

undefined8 FUN_1414cd1f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x14);
    do {
      *(undefined8 *)(puVar1 + -5) = *(undefined8 *)(param_3 + -0x14 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + -3) = *(undefined8 *)(param_3 + -0xc + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_3 + 4 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      puVar1[4] = *(undefined4 *)(param_3 + 0x10 + (longlong)puVar1);
      FUN_140c64f20(puVar1 + 5,param_3 + 0x14 + (longlong)puVar1);
      puVar1 = puVar1 + 0x1e;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414cd280 FUN_1414cd280 body=107 status=ok
// SIG undefined FUN_1414cd280(void)

undefined8 FUN_1414cd280(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x58);
    do {
      *(undefined4 *)(puVar1 + -0x58) = *(undefined4 *)(puVar1 + param_3 + -0x58);
      TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
      ::operator=(puVar1 + -0x50,puVar1 + param_3 + -0x50);
      *puVar1 = puVar1[param_3];
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(puVar1 + param_3 + 4);
      *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(puVar1 + param_3 + 0xc);
      puVar1 = puVar1 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414cd2f0 FUN_1414cd2f0 body=74 status=ok
// SIG undefined FUN_1414cd2f0(void)

undefined1 FUN_1414cd2f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1414cc430(param_2 + param_3,param_3);
      param_3 = param_3 + 0x418;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414cd340 FUN_1414cd340 body=41 status=ok
// SIG undefined FUN_1414cd340(void)

void FUN_1414cd340(undefined8 param_1,longlong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0x30);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0x20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0x10);
  return;
}



// FUNCTION 1414cd370 FUN_1414cd370 body=87 status=ok
// SIG undefined FUN_1414cd370(void)

void FUN_1414cd370(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = param_2 + 10;
  lVar2 = 4;
  do {
    plVar1 = plVar3 + -2;
    plVar3 = plVar3 + -2;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414cd3d0 FUN_1414cd3d0 body=44 status=ok
// SIG undefined FUN_1414cd3d0(void)

void FUN_1414cd3d0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x68) = 0;
  if (*(longlong *)(param_2 + 0x60) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_2 + 0x20);
  return;
}



// FUNCTION 1414cd410 Destruct body=44 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FEnvQueryRequest>::Destruct(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x60) = 0;
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_2 + 0x18);
  return;
}



// FUNCTION 1414cd440 FUN_1414cd440 body=79 status=ok
// SIG undefined FUN_1414cd440(void)

void FUN_1414cd440(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x70) = 0;
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FMemory::Free();
  }
  FUN_140c71a80((longlong *)(param_2 + 0x28),0);
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1414cd490 Destruct body=44 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FChaosHandlerSet>::Destruct(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x50) = 0;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_2 + 8);
  return;
}



// FUNCTION 1414cd4c0 FUN_1414cd4c0 body=221 status=ok
// SIG undefined FUN_1414cd4c0(void)

void FUN_1414cd4c0(undefined8 param_1,longlong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_2 + 0x308);
  FTickFunction::~FTickFunction(param_2 + 0x2b0);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_2 + 0x290);
  if (*(longlong *)(param_2 + 0x280) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0x260);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0x250);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0x240);
  if (*(longlong *)(param_2 + 0x220) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x188) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0xd8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 200);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0xb8);
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1414cd5a0 FUN_1414cd5a0 body=55 status=ok
// SIG undefined FUN_1414cd5a0(void)

void FUN_1414cd5a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14689ff40 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689ff40 = GetStaticEnum(FUN_1414ce520,uVar1,L"EStandInActorType");
  }
  return;
}



// FUNCTION 1414cd5e0 FUN_1414cd5e0 body=55 status=ok
// SIG undefined FUN_1414cd5e0(void)

void FUN_1414cd5e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14689ff38 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689ff38 = GetStaticEnum(FUN_1414ce550,uVar1,L"EStandInAutoScaleMode");
  }
  return;
}



// FUNCTION 1414cd620 Empty body=406 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FSoftObjectPath,USingleObjectPool_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_1414cd6f1;
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
LAB_1414cd6f1:
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
      if (*(longlong *)(*param_1 + 8 + (longlong)iStack_1c * 0x28) != 0) {
        FMemory::Free();
      }
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



// FUNCTION 1414cd7c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGLoadoutBarUW::GetPrivateStaticClass(void)

{
  if (DAT_1468a01a0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"StandInCharacterComponent",&DAT_1468a01a0,
                  StaticRegisterNativesUUGLoadoutBarUW,600,0x10000000,0,L"Engine",FUN_1414caf80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_1468a01a0;
}



// FUNCTION 1414cd870 FUN_1414cd870 body=6 status=ok
// SIG undefined FUN_1414cd870(void)

undefined8 FUN_1414cd870(void)

{
  return 0x67267106;
}



// FUNCTION 1414cd880 FUN_1414cd880 body=6 status=ok
// SIG undefined FUN_1414cd880(void)

undefined8 FUN_1414cd880(void)

{
  return 0x952d18c2;
}



// FUNCTION 1414cd890 FUN_1414cd890 body=6 status=ok
// SIG undefined FUN_1414cd890(void)

undefined8 FUN_1414cd890(void)

{
  return 0x9cc0843f;
}



// FUNCTION 1414cd8a0 FUN_1414cd8a0 body=6 status=ok
// SIG undefined FUN_1414cd8a0(void)

undefined8 FUN_1414cd8a0(void)

{
  return 0x7603eb18;
}



// FUNCTION 1414cd8b0 FUN_1414cd8b0 body=6 status=ok
// SIG undefined FUN_1414cd8b0(void)

undefined8 FUN_1414cd8b0(void)

{
  return 0x7c0976fb;
}



// FUNCTION 1414cd8c0 FUN_1414cd8c0 body=6 status=ok
// SIG undefined FUN_1414cd8c0(void)

undefined8 FUN_1414cd8c0(void)

{
  return 0x173cbff9;
}



// FUNCTION 1414cd8d0 FUN_1414cd8d0 body=6 status=ok
// SIG undefined FUN_1414cd8d0(void)

undefined8 FUN_1414cd8d0(void)

{
  return 0xb829790d;
}



// FUNCTION 1414cd8e0 FUN_1414cd8e0 body=6 status=ok
// SIG undefined FUN_1414cd8e0(void)

undefined8 FUN_1414cd8e0(void)

{
  return 0x8984794e;
}



// FUNCTION 1414cd8f0 FUN_1414cd8f0 body=6 status=ok
// SIG undefined FUN_1414cd8f0(void)

undefined8 FUN_1414cd8f0(void)

{
  return 0x163e0e41;
}



// FUNCTION 1414cd900 FUN_1414cd900 body=6 status=ok
// SIG undefined FUN_1414cd900(void)

undefined8 FUN_1414cd900(void)

{
  return 0xb26d47f4;
}



// FUNCTION 1414cd910 FUN_1414cd910 body=6 status=ok
// SIG undefined FUN_1414cd910(void)

undefined8 FUN_1414cd910(void)

{
  return 0xbf790e55;
}



// FUNCTION 1414cd920 FUN_1414cd920 body=6 status=ok
// SIG undefined FUN_1414cd920(void)

undefined8 FUN_1414cd920(void)

{
  return 0x3614faf5;
}



// FUNCTION 1414cd930 FUN_1414cd930 body=6 status=ok
// SIG undefined FUN_1414cd930(void)

undefined8 FUN_1414cd930(void)

{
  return 0x9b02c64d;
}



// FUNCTION 1414cd940 FUN_1414cd940 body=6 status=ok
// SIG undefined FUN_1414cd940(void)

undefined8 FUN_1414cd940(void)

{
  return 0xf1d055d4;
}



// FUNCTION 1414cd950 FUN_1414cd950 body=6 status=ok
// SIG undefined FUN_1414cd950(void)

undefined8 FUN_1414cd950(void)

{
  return 0x7cfae7d5;
}



// FUNCTION 1414cd960 FUN_1414cd960 body=6 status=ok
// SIG undefined FUN_1414cd960(void)

undefined8 FUN_1414cd960(void)

{
  return 0x39a814a3;
}



// FUNCTION 1414cd970 FUN_1414cd970 body=6 status=ok
// SIG undefined FUN_1414cd970(void)

undefined8 FUN_1414cd970(void)

{
  return 0xedde4532;
}



// FUNCTION 1414cd980 FUN_1414cd980 body=66 status=ok
// SIG undefined FUN_1414cd980(void)

void FUN_1414cd980(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0018);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 1414cd9f0 FUN_1414cd9f0 body=61 status=ok
// SIG undefined FUN_1414cd9f0(void)

void FUN_1414cd9f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0008);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414cda30 Rehash body=636 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
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
    lVar4 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar4;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar9 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_1414cdb6f;
        uVar9 = puVar14[lVar4 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
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
      if (iVar8 < iStack_44) {
LAB_1414cdb6f:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        lVar4 = *param_1 + (longlong)iStack_1c * 0x28;
        iVar8 = (int)(*(ulonglong *)(*param_1 + (longlong)iStack_1c * 0x28) >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)(lVar4 + 0x24) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1414cdcb0 FUN_1414cdcb0 body=34 status=ok
// SIG undefined FUN_1414cdcb0(void)

void FUN_1414cdcb0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414ca080();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetOwningPlayer_144bd2ab0,3);
  return;
}



// FUNCTION 1414cdce0 FUN_1414cdce0 body=34 status=ok
// SIG undefined FUN_1414cdce0(void)

void FUN_1414cdce0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414ca2f0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_Initialize_144bd3420,1);
  return;
}



// FUNCTION 1414cdd10 FUN_1414cdd10 body=34 status=ok
// SIG undefined FUN_1414cdd10(void)

void FUN_1414cdd10(void)

{
  undefined8 uVar1;
  
  uVar1 = UMaterialInstanceDynamic::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetSplineComponent_144bd2a60,5);
  return;
}



// FUNCTION 1414cdd40 StaticRegisterNativesUUGLoadoutBarUW body=34 status=ok
// SIG undefined StaticRegisterNativesUUGLoadoutBarUW(void)

void UUGLoadoutBarUW::StaticRegisterNativesUUGLoadoutBarUW(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnAuxiliaryActorDestroyed_144bd3770,1);
  return;
}



// FUNCTION 1414cdd70 FUN_1414cdd70 body=82 status=ok
// SIG undefined FUN_1414cdd70(void)

void FUN_1414cdd70(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a02a8 == 0) {
    uVar1 = FUN_1414cd870();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a02a8 = GetStaticStruct(FUN_1414ce580,uVar2,L"DesiredStandInActorData",0x50,uVar1);
  }
  return;
}



// FUNCTION 1414cddd0 FUN_1414cddd0 body=82 status=ok
// SIG undefined FUN_1414cddd0(void)

void FUN_1414cddd0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a01a8 == 0) {
    uVar1 = FUN_1414cd880();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a01a8 = GetStaticStruct(FUN_1414ce5b0,uVar2,L"FrontendStandInSlotSettings",0x50,uVar1);
  }
  return;
}



// FUNCTION 1414cde30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a01b8 == 0) {
    uVar1 = FUN_1414cd890();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a01b8 =
         GetStaticStruct(FUN_1414ce5e0,uVar2,L"FrontendStandInSlotTransitionSettings",0x10,uVar1);
  }
  return;
}



// FUNCTION 1414cde90 FUN_1414cde90 body=82 status=ok
// SIG undefined FUN_1414cde90(void)

void FUN_1414cde90(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a01c8 == 0) {
    uVar1 = FUN_1414cd8a0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a01c8 = GetStaticStruct(FUN_1414ce610,uVar2,L"GlobalsStandInSettings",0x70,uVar1);
  }
  return;
}



// FUNCTION 1414cdef0 FUN_1414cdef0 body=82 status=ok
// SIG undefined FUN_1414cdef0(void)

void FUN_1414cdef0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0128 == 0) {
    uVar1 = FUN_1414cd8b0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0128 = GetStaticStruct(FUN_1414ce640,uVar2,L"HardPointSlotSettings",0x28,uVar1);
  }
  return;
}



// FUNCTION 1414cdf50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0138 == 0) {
    uVar1 = FUN_1414cd8c0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0138 = GetStaticStruct(FUN_1414ce670,uVar2,L"IronBearHardPointAugmentInfo",0x40,uVar1);
  }
  return;
}



// FUNCTION 1414cdfb0 FUN_1414cdfb0 body=82 status=ok
// SIG undefined FUN_1414cdfb0(void)

void FUN_1414cdfb0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0298 == 0) {
    uVar1 = FUN_1414cd8d0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0298 = GetStaticStruct(FUN_1414ce6a0,uVar2,L"StandInLightComponentInstance",0x28,uVar1)
    ;
  }
  return;
}



// FUNCTION 1414ce010 FUN_1414ce010 body=82 status=ok
// SIG undefined FUN_1414ce010(void)

void FUN_1414ce010(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0220 == 0) {
    uVar1 = FUN_1414cd8e0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0220 =
         GetStaticStruct(FUN_1414ce6d0,uVar2,L"StandInLightingComponentConfig",0x30,uVar1);
  }
  return;
}



// FUNCTION 1414ce070 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0210 == 0) {
    uVar1 = FUN_1414cd8f0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0210 = GetStaticStruct(FUN_1414ce700,uVar2,L"StandInLightingConfig",0x18,uVar1);
  }
  return;
}



// FUNCTION 1414ce0d0 FUN_1414ce0d0 body=82 status=ok
// SIG undefined FUN_1414ce0d0(void)

void FUN_1414ce0d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0200 == 0) {
    uVar1 = FUN_1414cd900();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0200 = GetStaticStruct(FUN_1414ce730,uVar2,L"StandInLightingSetting",0x68,uVar1);
  }
  return;
}



// FUNCTION 1414ce130 FUN_1414ce130 body=82 status=ok
// SIG undefined FUN_1414ce130(void)

void FUN_1414ce130(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0240 == 0) {
    uVar1 = FUN_1414cd920();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0240 =
         GetStaticStruct(FUN_1414ce760,uVar2,L"StandInPlayerClassSpecificPositionSetting",0x68,uVar1
                        );
  }
  return;
}



// FUNCTION 1414ce190 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0250 == 0) {
    uVar1 = FUN_1414cd910();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0250 =
         GetStaticStruct(FUN_1414ce790,uVar2,
                         L"StandInPlayerClassSpecificPositionSettingContextOverride",0x18,uVar1);
  }
  return;
}



// FUNCTION 1414ce1f0 FUN_1414ce1f0 body=82 status=ok
// SIG undefined FUN_1414ce1f0(void)

void FUN_1414ce1f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0230 == 0) {
    uVar1 = FUN_1414cd930();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0230 = GetStaticStruct(FUN_1414ce7c0,uVar2,L"StandInPositionSetting",0x78,uVar1);
  }
  return;
}



// FUNCTION 1414ce250 FUN_1414ce250 body=82 status=ok
// SIG undefined FUN_1414ce250(void)

void FUN_1414ce250(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0260 == 0) {
    uVar1 = FUN_1414cd940();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0260 = GetStaticStruct(FUN_1414ce7f0,uVar2,L"StandInScaleSetting",0x68,uVar1);
  }
  return;
}



// FUNCTION 1414ce2b0 FUN_1414ce2b0 body=82 status=ok
// SIG undefined FUN_1414ce2b0(void)

void FUN_1414ce2b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a01f0 == 0) {
    uVar1 = FUN_1414cd950();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a01f0 = GetStaticStruct(FUN_1414ce820,uVar2,L"StandInUIConfigData",0x418,uVar1);
  }
  return;
}



// FUNCTION 1414ce310 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSynth2DSliderStyle::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0288 == 0) {
    uVar1 = FUN_1414cd970();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0288 = GetStaticStruct(FUN_1414ce850,uVar2,L"StandInUIController",0x390,uVar1);
  }
  return;
}



// FUNCTION 1414ce370 FUN_1414ce370 body=82 status=ok
// SIG undefined FUN_1414ce370(void)

void FUN_1414ce370(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a02b8 == 0) {
    uVar1 = FUN_1414cd960();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a02b8 =
         GetStaticStruct(FUN_1414ce880,uVar2,L"StandInUIControllerTickFunction",0x58,uVar1);
  }
  return;
}



// FUNCTION 1414ce3d0 FUN_1414ce3d0 body=47 status=ok
// SIG undefined FUN_1414ce3d0(void)

longlong FUN_1414ce3d0(void)

{
  if (DAT_1468a0148 == 0) {
    FUN_141786440(&DAT_1468a0148,&PTR_GetPrivateStaticClass_144bd0f10);
  }
  return DAT_1468a0148;
}



// FUNCTION 1414ce400 FUN_1414ce400 body=47 status=ok
// SIG undefined FUN_1414ce400(void)

longlong FUN_1414ce400(void)

{
  if (DAT_1468a0158 == 0) {
    FUN_141786440(&DAT_1468a0158,&PTR_FUN_144bd12b0);
  }
  return DAT_1468a0158;
}



// FUNCTION 1414ce430 FUN_1414ce430 body=47 status=ok
// SIG undefined FUN_1414ce430(void)

longlong FUN_1414ce430(void)

{
  if (DAT_1468a00e8 == 0) {
    FUN_141786440(&DAT_1468a00e8,&PTR_GetPrivateStaticClass_144bcea00);
  }
  return DAT_1468a00e8;
}



// FUNCTION 1414ce460 FUN_1414ce460 body=47 status=ok
// SIG undefined FUN_1414ce460(void)

longlong FUN_1414ce460(void)

{
  if (DAT_1468a0180 == 0) {
    FUN_141786440(&DAT_1468a0180,&PTR_FUN_144bcf230);
  }
  return DAT_1468a0180;
}



// FUNCTION 1414ce490 FUN_1414ce490 body=47 status=ok
// SIG undefined FUN_1414ce490(void)

longlong FUN_1414ce490(void)

{
  if (DAT_1468a0270 == 0) {
    FUN_141786440(&DAT_1468a0270,&PTR_FUN_144bd09b0);
  }
  return DAT_1468a0270;
}



// FUNCTION 1414ce4c0 FUN_1414ce4c0 body=47 status=ok
// SIG undefined FUN_1414ce4c0(void)

longlong FUN_1414ce4c0(void)

{
  if (DAT_1468a01d8 == 0) {
    FUN_141786440(&DAT_1468a01d8,&PTR_GetPrivateStaticClass_144bcfd80);
  }
  return DAT_1468a01d8;
}



// FUNCTION 1414ce4f0 FUN_1414ce4f0 body=47 status=ok
// SIG undefined FUN_1414ce4f0(void)

longlong FUN_1414ce4f0(void)

{
  if (DAT_1468a02c8 == 0) {
    FUN_141786440(&DAT_1468a02c8,&PTR_GetPrivateStaticClass_144bd0ad0);
  }
  return DAT_1468a02c8;
}



// FUNCTION 1414ce520 FUN_1414ce520 body=47 status=ok
// SIG undefined FUN_1414ce520(void)

longlong FUN_1414ce520(void)

{
  if (DAT_1468a0280 == 0) {
    FUN_1417866a0(&DAT_1468a0280,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646c0e0);
  }
  return DAT_1468a0280;
}



// FUNCTION 1414ce550 FUN_1414ce550 body=47 status=ok
// SIG undefined FUN_1414ce550(void)

longlong FUN_1414ce550(void)

{
  if (DAT_1468a01e8 == 0) {
    FUN_1417866a0(&DAT_1468a01e8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646c090);
  }
  return DAT_1468a01e8;
}



// FUNCTION 1414ce580 FUN_1414ce580 body=47 status=ok
// SIG undefined FUN_1414ce580(void)

longlong FUN_1414ce580(void)

{
  if (DAT_1468a02b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a02b0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646bfd0);
  }
  return DAT_1468a02b0;
}



// FUNCTION 1414ce5b0 FUN_1414ce5b0 body=47 status=ok
// SIG undefined FUN_1414ce5b0(void)

longlong FUN_1414ce5b0(void)

{
  if (DAT_1468a01b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a01b0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646a080);
  }
  return DAT_1468a01b0;
}



// FUNCTION 1414ce5e0 FUN_1414ce5e0 body=47 status=ok
// SIG undefined FUN_1414ce5e0(void)

longlong FUN_1414ce5e0(void)

{
  if (DAT_1468a01c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a01c0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646a140);
  }
  return DAT_1468a01c0;
}



// FUNCTION 1414ce610 FUN_1414ce610 body=47 status=ok
// SIG undefined FUN_1414ce610(void)

longlong FUN_1414ce610(void)

{
  if (DAT_1468a01d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a01d0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646a330);
  }
  return DAT_1468a01d0;
}



// FUNCTION 1414ce640 FUN_1414ce640 body=47 status=ok
// SIG undefined FUN_1414ce640(void)

longlong FUN_1414ce640(void)

{
  if (DAT_1468a0130 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0130,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464694b0);
  }
  return DAT_1468a0130;
}



// FUNCTION 1414ce670 FUN_1414ce670 body=47 status=ok
// SIG undefined FUN_1414ce670(void)

longlong FUN_1414ce670(void)

{
  if (DAT_1468a0140 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0140,&PTR_Z_Construct_UPackage__Script_MechWarrior_146469690);
  }
  return DAT_1468a0140;
}



// FUNCTION 1414ce6a0 FUN_1414ce6a0 body=47 status=ok
// SIG undefined FUN_1414ce6a0(void)

longlong FUN_1414ce6a0(void)

{
  if (DAT_1468a02a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a02a0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646bef0);
  }
  return DAT_1468a02a0;
}



// FUNCTION 1414ce6d0 FUN_1414ce6d0 body=47 status=ok
// SIG undefined FUN_1414ce6d0(void)

longlong FUN_1414ce6d0(void)

{
  if (DAT_1468a0228 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0228,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646b240);
  }
  return DAT_1468a0228;
}



// FUNCTION 1414ce700 FUN_1414ce700 body=47 status=ok
// SIG undefined FUN_1414ce700(void)

longlong FUN_1414ce700(void)

{
  if (DAT_1468a0218 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0218,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646b020);
  }
  return DAT_1468a0218;
}



// FUNCTION 1414ce730 FUN_1414ce730 body=47 status=ok
// SIG undefined FUN_1414ce730(void)

longlong FUN_1414ce730(void)

{
  if (DAT_1468a0208 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0208,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646af20);
  }
  return DAT_1468a0208;
}



// FUNCTION 1414ce760 FUN_1414ce760 body=47 status=ok
// SIG undefined FUN_1414ce760(void)

longlong FUN_1414ce760(void)

{
  if (DAT_1468a0248 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0248,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646b680);
  }
  return DAT_1468a0248;
}



// FUNCTION 1414ce790 FUN_1414ce790 body=47 status=ok
// SIG undefined FUN_1414ce790(void)

longlong FUN_1414ce790(void)

{
  if (DAT_1468a0258 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0258,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646b780);
  }
  return DAT_1468a0258;
}



// FUNCTION 1414ce7c0 FUN_1414ce7c0 body=47 status=ok
// SIG undefined FUN_1414ce7c0(void)

longlong FUN_1414ce7c0(void)

{
  if (DAT_1468a0238 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0238,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646b4c0);
  }
  return DAT_1468a0238;
}



// FUNCTION 1414ce7f0 FUN_1414ce7f0 body=47 status=ok
// SIG undefined FUN_1414ce7f0(void)

longlong FUN_1414ce7f0(void)

{
  if (DAT_1468a0268 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0268,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646b980);
  }
  return DAT_1468a0268;
}



// FUNCTION 1414ce820 FUN_1414ce820 body=47 status=ok
// SIG undefined FUN_1414ce820(void)

longlong FUN_1414ce820(void)

{
  if (DAT_1468a01f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a01f8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646ade0);
  }
  return DAT_1468a01f8;
}



// FUNCTION 1414ce850 FUN_1414ce850 body=47 status=ok
// SIG undefined FUN_1414ce850(void)

longlong FUN_1414ce850(void)

{
  if (DAT_1468a0290 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0290,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646be60);
  }
  return DAT_1468a0290;
}



// FUNCTION 1414ce880 FUN_1414ce880 body=47 status=ok
// SIG undefined FUN_1414ce880(void)

longlong FUN_1414ce880(void)

{
  if (DAT_1468a02c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a02c0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646c020);
  }
  return DAT_1468a02c0;
}



// FUNCTION 1414ce8b0 FUN_1414ce8b0 body=44 status=ok
// SIG undefined FUN_1414ce8b0(void)

void FUN_1414ce8b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140e80e50();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414ce8e0 FUN_1414ce8e0 body=44 status=ok
// SIG undefined FUN_1414ce8e0(void)

void FUN_1414ce8e0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140e80eb0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414ce910 FUN_1414ce910 body=44 status=ok
// SIG undefined FUN_1414ce910(void)

void FUN_1414ce910(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140eaf760();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414ce940 execRestartPlayerAtPlayerStart body=195 status=ok
// SIG undefined execRestartPlayerAtPlayerStart(void)

void AGameModeBase::execRestartPlayerAtPlayerStart(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x708))(param_1,local_res10,local_res8);
  return;
}



// FUNCTION 1414cea10 execHandleFireCauserDestroyed body=132 status=ok
// SIG undefined execHandleFireCauserDestroyed(void)

void UFireComponent::execHandleFireCauserDestroyed(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x440))(param_1,local_res8);
  return;
}



// FUNCTION 1414ceae0 FUN_1414ceae0 body=191 status=ok
// SIG undefined FUN_1414ceae0(void)

void FUN_1414ceae0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  undefined8 local_res20;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140e91300(param_1,bVar1,local_res20);
  return;
}



// FUNCTION 1414ceba0 FUN_1414ceba0 body=123 status=ok
// SIG undefined FUN_1414ceba0(void)

void FUN_1414ceba0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140ec0420(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414cec20 FUN_1414cec20 body=195 status=ok
// SIG undefined FUN_1414cec20(void)

void FUN_1414cec20(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x518))(param_1,local_res10,local_res8);
  return;
}



// FUNCTION 1414ced10 FUN_1414ced10 body=47 status=ok
// SIG undefined FUN_1414ced10(void)

longlong FUN_1414ced10(void)

{
  if (DAT_1468a0870 == 0) {
    FUN_141786440(&DAT_1468a0870,&PTR_GetPrivateStaticClass_144bd5f10);
  }
  return DAT_1468a0870;
}



// FUNCTION 1414ced40 FUN_1414ced40 body=47 status=ok
// SIG undefined FUN_1414ced40(void)

longlong FUN_1414ced40(void)

{
  if (DAT_1468a0800 == 0) {
    FUN_141786a30(&DAT_1468a0800,&PTR_FUN_14646f850);
  }
  return DAT_1468a0800;
}



// FUNCTION 1414ced70 FUN_1414ced70 body=47 status=ok
// SIG undefined FUN_1414ced70(void)

longlong FUN_1414ced70(void)

{
  if (DAT_1468a0808 == 0) {
    FUN_141786a30(&DAT_1468a0808,&PTR_FUN_14646f9f0);
  }
  return DAT_1468a0808;
}



// FUNCTION 1414ceda0 FUN_1414ceda0 body=47 status=ok
// SIG undefined FUN_1414ceda0(void)

longlong FUN_1414ceda0(void)

{
  if (DAT_1468a0810 == 0) {
    FUN_141786a30(&DAT_1468a0810,&PTR_FUN_14646fa70);
  }
  return DAT_1468a0810;
}



// FUNCTION 1414cedd0 FUN_1414cedd0 body=47 status=ok
// SIG undefined FUN_1414cedd0(void)

longlong FUN_1414cedd0(void)

{
  if (DAT_1468a0818 == 0) {
    FUN_141786a30(&DAT_1468a0818,&PTR_FUN_14646faf0);
  }
  return DAT_1468a0818;
}



// FUNCTION 1414cee00 FUN_1414cee00 body=47 status=ok
// SIG undefined FUN_1414cee00(void)

longlong FUN_1414cee00(void)

{
  if (DAT_1468a0820 == 0) {
    FUN_141786a30(&DAT_1468a0820,&PTR_FUN_14646fb70);
  }
  return DAT_1468a0820;
}



// FUNCTION 1414cee30 FUN_1414cee30 body=47 status=ok
// SIG undefined FUN_1414cee30(void)

longlong FUN_1414cee30(void)

{
  if (DAT_1468a0828 == 0) {
    FUN_141786a30(&DAT_1468a0828,&PTR_FUN_14646fc00);
  }
  return DAT_1468a0828;
}



// FUNCTION 1414cee60 FUN_1414cee60 body=47 status=ok
// SIG undefined FUN_1414cee60(void)

longlong FUN_1414cee60(void)

{
  if (DAT_1468a0830 == 0) {
    FUN_141786a30(&DAT_1468a0830,&PTR_FUN_14646fcd0);
  }
  return DAT_1468a0830;
}



// FUNCTION 1414cee90 FUN_1414cee90 body=47 status=ok
// SIG undefined FUN_1414cee90(void)

longlong FUN_1414cee90(void)

{
  if (DAT_1468a0838 == 0) {
    FUN_141786a30(&DAT_1468a0838,&PTR_FUN_14646fd60);
  }
  return DAT_1468a0838;
}



// FUNCTION 1414ceec0 FUN_1414ceec0 body=47 status=ok
// SIG undefined FUN_1414ceec0(void)

longlong FUN_1414ceec0(void)

{
  if (DAT_1468a0840 == 0) {
    FUN_141786a30(&DAT_1468a0840,&PTR_FUN_14646fe20);
  }
  return DAT_1468a0840;
}



// FUNCTION 1414ceef0 FUN_1414ceef0 body=47 status=ok
// SIG undefined FUN_1414ceef0(void)

longlong FUN_1414ceef0(void)

{
  if (DAT_1468a0848 == 0) {
    FUN_141786a30(&DAT_1468a0848,&PTR_FUN_14646fea0);
  }
  return DAT_1468a0848;
}



// FUNCTION 1414cef20 FUN_1414cef20 body=47 status=ok
// SIG undefined FUN_1414cef20(void)

longlong FUN_1414cef20(void)

{
  if (DAT_1468a0850 == 0) {
    FUN_141786a30(&DAT_1468a0850,&PTR_FUN_14646fee0);
  }
  return DAT_1468a0850;
}



// FUNCTION 1414cef50 FUN_1414cef50 body=47 status=ok
// SIG undefined FUN_1414cef50(void)

longlong FUN_1414cef50(void)

{
  if (DAT_1468a0858 == 0) {
    FUN_141786a30(&DAT_1468a0858,&PTR_FUN_14646ff70);
  }
  return DAT_1468a0858;
}



// FUNCTION 1414cef80 FUN_1414cef80 body=47 status=ok
// SIG undefined FUN_1414cef80(void)

longlong FUN_1414cef80(void)

{
  if (DAT_1468a0860 == 0) {
    FUN_141786a30(&DAT_1468a0860,&PTR_FUN_14646fff0);
  }
  return DAT_1468a0860;
}



// FUNCTION 1414cefb0 FUN_1414cefb0 body=47 status=ok
// SIG undefined FUN_1414cefb0(void)

longlong FUN_1414cefb0(void)

{
  if (DAT_1468a0868 == 0) {
    FUN_141786a30(&DAT_1468a0868,&PTR_FUN_146470080);
  }
  return DAT_1468a0868;
}



// FUNCTION 1414cefe0 FUN_1414cefe0 body=151 status=ok
// SIG undefined FUN_1414cefe0(void)

longlong FUN_1414cefe0(void)

{
  if (DAT_1468a0728 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TedioreBehavior",&DAT_1468a0728,FUN_140447710,0x30,0x10000001
                  ,0,L"Engine",&LAB_1414d09a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468a0728;
}



// FUNCTION 1414cf080 FUN_1414cf080 body=47 status=ok
// SIG undefined FUN_1414cf080(void)

longlong FUN_1414cf080(void)

{
  if (DAT_1468a0720 == 0) {
    FUN_141786440(&DAT_1468a0720,&PTR_FUN_144bd62f0);
  }
  return DAT_1468a0720;
}



// FUNCTION 1414cf0b0 FUN_1414cf0b0 body=47 status=ok
// SIG undefined FUN_1414cf0b0(void)

longlong FUN_1414cf0b0(void)

{
  if (DAT_1468a06a0 == 0) {
    FUN_141786a30(&DAT_1468a06a0,&PTR_FUN_14646dcc0);
  }
  return DAT_1468a06a0;
}



// FUNCTION 1414cf0e0 FUN_1414cf0e0 body=47 status=ok
// SIG undefined FUN_1414cf0e0(void)

longlong FUN_1414cf0e0(void)

{
  if (DAT_1468a06a8 == 0) {
    FUN_141786a30(&DAT_1468a06a8,&PTR_FUN_14646dd40);
  }
  return DAT_1468a06a8;
}



// FUNCTION 1414cf110 FUN_1414cf110 body=47 status=ok
// SIG undefined FUN_1414cf110(void)

longlong FUN_1414cf110(void)

{
  if (DAT_1468a06b0 == 0) {
    FUN_141786a30(&DAT_1468a06b0,&PTR_FUN_14646ddc0);
  }
  return DAT_1468a06b0;
}



// FUNCTION 1414cf140 FUN_1414cf140 body=47 status=ok
// SIG undefined FUN_1414cf140(void)

longlong FUN_1414cf140(void)

{
  if (DAT_1468a06b8 == 0) {
    FUN_141786a30(&DAT_1468a06b8,&PTR_FUN_14646de40);
  }
  return DAT_1468a06b8;
}



// FUNCTION 1414cf170 FUN_1414cf170 body=47 status=ok
// SIG undefined FUN_1414cf170(void)

longlong FUN_1414cf170(void)

{
  if (DAT_1468a06c0 == 0) {
    FUN_141786a30(&DAT_1468a06c0,&PTR_FUN_14646dec0);
  }
  return DAT_1468a06c0;
}



// FUNCTION 1414cf1a0 FUN_1414cf1a0 body=47 status=ok
// SIG undefined FUN_1414cf1a0(void)

longlong FUN_1414cf1a0(void)

{
  if (DAT_1468a06c8 == 0) {
    FUN_141786a30(&DAT_1468a06c8,&PTR_FUN_14646df80);
  }
  return DAT_1468a06c8;
}



// FUNCTION 1414cf1d0 FUN_1414cf1d0 body=47 status=ok
// SIG undefined FUN_1414cf1d0(void)

longlong FUN_1414cf1d0(void)

{
  if (DAT_1468a06d0 == 0) {
    FUN_141786a30(&DAT_1468a06d0,&PTR_FUN_14646e000);
  }
  return DAT_1468a06d0;
}



// FUNCTION 1414cf200 FUN_1414cf200 body=47 status=ok
// SIG undefined FUN_1414cf200(void)

longlong FUN_1414cf200(void)

{
  if (DAT_1468a06d8 == 0) {
    FUN_141786a30(&DAT_1468a06d8,&PTR_FUN_14646e080);
  }
  return DAT_1468a06d8;
}



// FUNCTION 1414cf230 FUN_1414cf230 body=47 status=ok
// SIG undefined FUN_1414cf230(void)

longlong FUN_1414cf230(void)

{
  if (DAT_1468a06e0 == 0) {
    FUN_141786a30(&DAT_1468a06e0,&PTR_FUN_14646e100);
  }
  return DAT_1468a06e0;
}



// FUNCTION 1414cf260 FUN_1414cf260 body=47 status=ok
// SIG undefined FUN_1414cf260(void)

longlong FUN_1414cf260(void)

{
  if (DAT_1468a06e8 == 0) {
    FUN_141786a30(&DAT_1468a06e8,&PTR_FUN_14646e180);
  }
  return DAT_1468a06e8;
}



// FUNCTION 1414cf290 FUN_1414cf290 body=47 status=ok
// SIG undefined FUN_1414cf290(void)

longlong FUN_1414cf290(void)

{
  if (DAT_1468a06f0 == 0) {
    FUN_141786a30(&DAT_1468a06f0,&PTR_FUN_14646e200);
  }
  return DAT_1468a06f0;
}



// FUNCTION 1414cf2c0 FUN_1414cf2c0 body=47 status=ok
// SIG undefined FUN_1414cf2c0(void)

longlong FUN_1414cf2c0(void)

{
  if (DAT_1468a06f8 == 0) {
    FUN_141786a30(&DAT_1468a06f8,&PTR_FUN_14646e280);
  }
  return DAT_1468a06f8;
}



// FUNCTION 1414cf2f0 FUN_1414cf2f0 body=47 status=ok
// SIG undefined FUN_1414cf2f0(void)

longlong FUN_1414cf2f0(void)

{
  if (DAT_1468a0700 == 0) {
    FUN_141786a30(&DAT_1468a0700,&PTR_FUN_14646e300);
  }
  return DAT_1468a0700;
}



// FUNCTION 1414cf320 FUN_1414cf320 body=47 status=ok
// SIG undefined FUN_1414cf320(void)

longlong FUN_1414cf320(void)

{
  if (DAT_1468a0708 == 0) {
    FUN_141786a30(&DAT_1468a0708,&PTR_FUN_14646e3c0);
  }
  return DAT_1468a0708;
}



// FUNCTION 1414cf350 FUN_1414cf350 body=47 status=ok
// SIG undefined FUN_1414cf350(void)

longlong FUN_1414cf350(void)

{
  if (DAT_1468a0710 == 0) {
    FUN_141786a30(&DAT_1468a0710,&PTR_FUN_14646e440);
  }
  return DAT_1468a0710;
}



// FUNCTION 1414cf380 FUN_1414cf380 body=47 status=ok
// SIG undefined FUN_1414cf380(void)

longlong FUN_1414cf380(void)

{
  if (DAT_1468a0718 == 0) {
    FUN_141786a30(&DAT_1468a0718,&PTR_FUN_14646e4c0);
  }
  return DAT_1468a0718;
}



// FUNCTION 1414cf3c0 FUN_1414cf3c0 body=162 status=ok
// SIG undefined FUN_1414cf3c0(void)

longlong FUN_1414cf3c0(void)

{
  if (DAT_1468a0738 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TedioreBehavior_Bouncy",&DAT_1468a0738,FUN_140447710,0x68,
                  0x10000000,0,L"Engine",&LAB_1414d09b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414cefe0,&LAB_140447700,0);
  }
  return DAT_1468a0738;
}



// FUNCTION 1414cf490 FUN_1414cf490 body=162 status=ok
// SIG undefined FUN_1414cf490(void)

longlong FUN_1414cf490(void)

{
  if (DAT_1468a0748 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TedioreBehavior_Drunken",&DAT_1468a0748,FUN_140447710,0x38,
                  0x10000000,0,L"Engine",&LAB_1414d09c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414cefe0,&LAB_140447700,0);
  }
  return DAT_1468a0748;
}



// FUNCTION 1414cf540 FUN_1414cf540 body=162 status=ok
// SIG undefined FUN_1414cf540(void)

longlong FUN_1414cf540(void)

{
  if (DAT_1468a0640 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"StreamingEventDispatcher",&DAT_1468a0640,FUN_1414d1c80,0x4f8,
                  0x10000000,0,L"Engine",&LAB_1414d08b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_1468a0640;
}



// FUNCTION 1414cf600 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAnimMontage::GetPrivateStaticClass(void)

{
  if (DAT_1468a0758 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TedioreBehavior_Homing",&DAT_1468a0758,FUN_140447710,0x1e0,
                  0x10000000,0,L"Engine",&LAB_1414d09d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414cefe0,&LAB_140447700,0);
  }
  return DAT_1468a0758;
}



// FUNCTION 1414cf6b0 FUN_1414cf6b0 body=47 status=ok
// SIG undefined FUN_1414cf6b0(void)

longlong FUN_1414cf6b0(void)

{
  if (DAT_1468a0638 == 0) {
    FUN_141786440(&DAT_1468a0638,&PTR_FUN_144bda610);
  }
  return DAT_1468a0638;
}



// FUNCTION 1414cf6e0 FUN_1414cf6e0 body=47 status=ok
// SIG undefined FUN_1414cf6e0(void)

longlong FUN_1414cf6e0(void)

{
  if (DAT_1468a0590 == 0) {
    FUN_141786a30(&DAT_1468a0590,&PTR_FUN_14646c720);
  }
  return DAT_1468a0590;
}



// FUNCTION 1414cf710 FUN_1414cf710 body=47 status=ok
// SIG undefined FUN_1414cf710(void)

longlong FUN_1414cf710(void)

{
  if (DAT_1468a0598 == 0) {
    FUN_141786a30(&DAT_1468a0598,&PTR_FUN_14646c820);
  }
  return DAT_1468a0598;
}



// FUNCTION 1414cf740 FUN_1414cf740 body=47 status=ok
// SIG undefined FUN_1414cf740(void)

longlong FUN_1414cf740(void)

{
  if (DAT_1468a05a0 == 0) {
    FUN_141786a30(&DAT_1468a05a0,&PTR_FUN_14646c860);
  }
  return DAT_1468a05a0;
}



// FUNCTION 1414cf770 FUN_1414cf770 body=47 status=ok
// SIG undefined FUN_1414cf770(void)

longlong FUN_1414cf770(void)

{
  if (DAT_1468a05a8 == 0) {
    FUN_141786a30(&DAT_1468a05a8,&PTR_FUN_14646c960);
  }
  return DAT_1468a05a8;
}



// FUNCTION 1414cf7a0 FUN_1414cf7a0 body=47 status=ok
// SIG undefined FUN_1414cf7a0(void)

longlong FUN_1414cf7a0(void)

{
  if (DAT_1468a05b0 == 0) {
    FUN_141786a30(&DAT_1468a05b0,&PTR_FUN_14646ca20);
  }
  return DAT_1468a05b0;
}



// FUNCTION 1414cf7d0 FUN_1414cf7d0 body=47 status=ok
// SIG undefined FUN_1414cf7d0(void)

longlong FUN_1414cf7d0(void)

{
  if (DAT_1468a05b8 == 0) {
    FUN_141786a30(&DAT_1468a05b8,&PTR_FUN_14646cae0);
  }
  return DAT_1468a05b8;
}



// FUNCTION 1414cf800 FUN_1414cf800 body=47 status=ok
// SIG undefined FUN_1414cf800(void)

longlong FUN_1414cf800(void)

{
  if (DAT_1468a05c0 == 0) {
    FUN_141786a30(&DAT_1468a05c0,&PTR_FUN_14646cba0);
  }
  return DAT_1468a05c0;
}



// FUNCTION 1414cf830 FUN_1414cf830 body=47 status=ok
// SIG undefined FUN_1414cf830(void)

longlong FUN_1414cf830(void)

{
  if (DAT_1468a05c8 == 0) {
    FUN_141786a30(&DAT_1468a05c8,&PTR_FUN_14646cc30);
  }
  return DAT_1468a05c8;
}



// FUNCTION 1414cf860 FUN_1414cf860 body=47 status=ok
// SIG undefined FUN_1414cf860(void)

longlong FUN_1414cf860(void)

{
  if (DAT_1468a05d0 == 0) {
    FUN_141786a30(&DAT_1468a05d0,&PTR_FUN_14646cdf0);
  }
  return DAT_1468a05d0;
}



// FUNCTION 1414cf890 FUN_1414cf890 body=47 status=ok
// SIG undefined FUN_1414cf890(void)

longlong FUN_1414cf890(void)

{
  if (DAT_1468a05d8 == 0) {
    FUN_141786a30(&DAT_1468a05d8,&PTR_FUN_14646ceb0);
  }
  return DAT_1468a05d8;
}



// FUNCTION 1414cf8c0 FUN_1414cf8c0 body=47 status=ok
// SIG undefined FUN_1414cf8c0(void)

longlong FUN_1414cf8c0(void)

{
  if (DAT_1468a05e0 == 0) {
    FUN_141786a30(&DAT_1468a05e0,&PTR_FUN_14646cef0);
  }
  return DAT_1468a05e0;
}



// FUNCTION 1414cf8f0 FUN_1414cf8f0 body=47 status=ok
// SIG undefined FUN_1414cf8f0(void)

longlong FUN_1414cf8f0(void)

{
  if (DAT_1468a05e8 == 0) {
    FUN_141786a30(&DAT_1468a05e8,&PTR_FUN_14646cf30);
  }
  return DAT_1468a05e8;
}



// FUNCTION 1414cf920 FUN_1414cf920 body=47 status=ok
// SIG undefined FUN_1414cf920(void)

longlong FUN_1414cf920(void)

{
  if (DAT_1468a05f0 == 0) {
    FUN_141786a30(&DAT_1468a05f0,&PTR_FUN_14646cf70);
  }
  return DAT_1468a05f0;
}



// FUNCTION 1414cf950 FUN_1414cf950 body=47 status=ok
// SIG undefined FUN_1414cf950(void)

longlong FUN_1414cf950(void)

{
  if (DAT_1468a05f8 == 0) {
    FUN_141786a30(&DAT_1468a05f8,&PTR_FUN_14646cff0);
  }
  return DAT_1468a05f8;
}



// FUNCTION 1414cf980 FUN_1414cf980 body=47 status=ok
// SIG undefined FUN_1414cf980(void)

longlong FUN_1414cf980(void)

{
  if (DAT_1468a0600 == 0) {
    FUN_141786a30(&DAT_1468a0600,&PTR_FUN_14646d070);
  }
  return DAT_1468a0600;
}



// FUNCTION 1414cf9b0 FUN_1414cf9b0 body=47 status=ok
// SIG undefined FUN_1414cf9b0(void)

longlong FUN_1414cf9b0(void)

{
  if (DAT_1468a0608 == 0) {
    FUN_141786a30(&DAT_1468a0608,&PTR_FUN_14646d0b0);
  }
  return DAT_1468a0608;
}



// FUNCTION 1414cf9e0 FUN_1414cf9e0 body=47 status=ok
// SIG undefined FUN_1414cf9e0(void)

longlong FUN_1414cf9e0(void)

{
  if (DAT_1468a0610 == 0) {
    FUN_141786a30(&DAT_1468a0610,&PTR_FUN_14646d130);
  }
  return DAT_1468a0610;
}



// FUNCTION 1414cfa10 FUN_1414cfa10 body=47 status=ok
// SIG undefined FUN_1414cfa10(void)

longlong FUN_1414cfa10(void)

{
  if (DAT_1468a0618 == 0) {
    FUN_141786a30(&DAT_1468a0618,&PTR_FUN_14646d1b0);
  }
  return DAT_1468a0618;
}



// FUNCTION 1414cfa40 FUN_1414cfa40 body=47 status=ok
// SIG undefined FUN_1414cfa40(void)

longlong FUN_1414cfa40(void)

{
  if (DAT_1468a0620 == 0) {
    FUN_141786a30(&DAT_1468a0620,&PTR_FUN_14646d230);
  }
  return DAT_1468a0620;
}



// FUNCTION 1414cfa70 FUN_1414cfa70 body=47 status=ok
// SIG undefined FUN_1414cfa70(void)

longlong FUN_1414cfa70(void)

{
  if (DAT_1468a0628 == 0) {
    FUN_141786a30(&DAT_1468a0628,&PTR_FUN_14646d2f0);
  }
  return DAT_1468a0628;
}



// FUNCTION 1414cfaa0 FUN_1414cfaa0 body=47 status=ok
// SIG undefined FUN_1414cfaa0(void)

longlong FUN_1414cfaa0(void)

{
  if (DAT_1468a0630 == 0) {
    FUN_141786a30(&DAT_1468a0630,&PTR_FUN_14646d3b0);
  }
  return DAT_1468a0630;
}



// FUNCTION 1414cfae0 FUN_1414cfae0 body=162 status=ok
// SIG undefined FUN_1414cfae0(void)

longlong FUN_1414cfae0(void)

{
  if (DAT_1468a0588 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"StreamerLootableObject",&DAT_1468a0588,FUN_1414d1c50,0x830,
                  0x10000000,0,L"Engine",&LAB_1414d0890,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1413c3a10
                  ,&LAB_140447700,0);
  }
  return DAT_1468a0588;
}



// FUNCTION 1414cfb90 FUN_1414cfb90 body=47 status=ok
// SIG undefined FUN_1414cfb90(void)

longlong FUN_1414cfb90(void)

{
  if (DAT_1468a0580 == 0) {
    FUN_141786440(&DAT_1468a0580,&PTR_FUN_144bda060);
  }
  return DAT_1468a0580;
}



// FUNCTION 1414cfbc0 FUN_1414cfbc0 body=47 status=ok
// SIG undefined FUN_1414cfbc0(void)

longlong FUN_1414cfbc0(void)

{
  if (DAT_1468a0570 == 0) {
    FUN_141786a30(&DAT_1468a0570,&PTR_FUN_14646c410);
  }
  return DAT_1468a0570;
}



// FUNCTION 1414cfbf0 FUN_1414cfbf0 body=47 status=ok
// SIG undefined FUN_1414cfbf0(void)

longlong FUN_1414cfbf0(void)

{
  if (DAT_1468a0578 == 0) {
    FUN_141786a30(&DAT_1468a0578,&PTR_FUN_14646c490);
  }
  return DAT_1468a0578;
}



// FUNCTION 1414cfc40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCompositingElementInput::GetPrivateStaticClass(void)

{
  if (DAT_1468a0668 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"StreamingPoolActionInfo",&DAT_1468a0668,
                  StaticRegisterNativesUCompositingElementInput,0x68,0x10000001,0,L"Engine",
                  &LAB_1414d0940,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468a0668;
}



// FUNCTION 1414cfcf0 FUN_1414cfcf0 body=162 status=ok
// SIG undefined FUN_1414cfcf0(void)

longlong FUN_1414cfcf0(void)

{
  if (DAT_1468a0798 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TedioreBehavior_Sticky",&DAT_1468a0798,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",&LAB_1414d0a00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414cefe0,&LAB_140447700,0);
  }
  return DAT_1468a0798;
}



// FUNCTION 1414cfda0 FUN_1414cfda0 body=47 status=ok
// SIG undefined FUN_1414cfda0(void)

longlong FUN_1414cfda0(void)

{
  if (DAT_1468a0660 == 0) {
    FUN_141786440(&DAT_1468a0660,&PTR_GetPrivateStaticClass_144bdad30);
  }
  return DAT_1468a0660;
}



// FUNCTION 1414cfdd0 FUN_1414cfdd0 body=47 status=ok
// SIG undefined FUN_1414cfdd0(void)

longlong FUN_1414cfdd0(void)

{
  if (DAT_1468a0648 == 0) {
    FUN_141786a30(&DAT_1468a0648,&PTR_FUN_14646d660);
  }
  return DAT_1468a0648;
}



// FUNCTION 1414cfe00 FUN_1414cfe00 body=47 status=ok
// SIG undefined FUN_1414cfe00(void)

longlong FUN_1414cfe00(void)

{
  if (DAT_1468a0650 == 0) {
    FUN_141786a30(&DAT_1468a0650,&PTR_FUN_14646d760);
  }
  return DAT_1468a0650;
}



// FUNCTION 1414cfe30 FUN_1414cfe30 body=47 status=ok
// SIG undefined FUN_1414cfe30(void)

longlong FUN_1414cfe30(void)

{
  if (DAT_1468a0658 == 0) {
    FUN_141786a30(&DAT_1468a0658,&PTR_FUN_14646d8a0);
  }
  return DAT_1468a0658;
}



// FUNCTION 1414cfe60 FUN_1414cfe60 body=47 status=ok
// SIG undefined FUN_1414cfe60(void)

longlong FUN_1414cfe60(void)

{
  if (DAT_1468a0790 == 0) {
    FUN_141786440(&DAT_1468a0790,&PTR_FUN_144bdaab0);
  }
  return DAT_1468a0790;
}



// FUNCTION 1414cfe90 FUN_1414cfe90 body=47 status=ok
// SIG undefined FUN_1414cfe90(void)

longlong FUN_1414cfe90(void)

{
  if (DAT_1468a0788 == 0) {
    FUN_141786a30(&DAT_1468a0788,&PTR_FUN_14646f090);
  }
  return DAT_1468a0788;
}



// FUNCTION 1414cfed0 FUN_1414cfed0 body=162 status=ok
// SIG undefined FUN_1414cfed0(void)

longlong FUN_1414cfed0(void)

{
  if (DAT_1468a07a8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TedioreBehavior_SuppressBouncy",&DAT_1468a07a8,FUN_140447710,
                  0x30,0x10000000,0,L"Engine",&LAB_1414d0a10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414cefe0,&LAB_140447700,0);
  }
  return DAT_1468a07a8;
}



// FUNCTION 1414cffa0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_1468a0678 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SwayPatternData",&DAT_1468a0678,FUN_140447710,0x48,0x10000000
                  ,0,L"Engine",&LAB_1414d0960,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468a0678;
}



// FUNCTION 1414d0050 FUN_1414d0050 body=162 status=ok
// SIG undefined FUN_1414d0050(void)

longlong FUN_1414d0050(void)

{
  if (DAT_1468a07b8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TedioreBehavior_SuppressDrunken",&DAT_1468a07b8,FUN_140447710
                  ,0x30,0x10000000,0,L"Engine",&LAB_1414d0a20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414cefe0,&LAB_140447700,0);
  }
  return DAT_1468a07b8;
}



// FUNCTION 1414d0120 FUN_1414d0120 body=162 status=ok
// SIG undefined FUN_1414d0120(void)

longlong FUN_1414d0120(void)

{
  if (DAT_1468a07c8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TedioreBehavior_SuppressHoming",&DAT_1468a07c8,FUN_140447710,
                  0x30,0x10000000,0,L"Engine",&LAB_1414d0a20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414cefe0,&LAB_140447700,0);
  }
  return DAT_1468a07c8;
}



// FUNCTION 1414d01e0 FUN_1414d01e0 body=162 status=ok
// SIG undefined FUN_1414d01e0(void)

longlong FUN_1414d01e0(void)

{
  if (DAT_1468a0548 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"StatusEffectStackingStrategyData_OakElemental",&DAT_1468a0548
                  ,FUN_140447710,0x30,0x10000000,0,L"Engine",&LAB_1414d08e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142e7ab40,&LAB_140447700,0);
  }
  return DAT_1468a0548;
}



// FUNCTION 1414d02a0 FUN_1414d02a0 body=162 status=ok
// SIG undefined FUN_1414d02a0(void)

longlong FUN_1414d02a0(void)

{
  if (DAT_1468a0568 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"StreamerBoosterData",&DAT_1468a0568,FUN_140447710,0x50,
                  0x10000000,0,L"Engine",FUN_1414d0900,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468a0568;
}



// FUNCTION 1414d0350 FUN_1414d0350 body=162 status=ok
// SIG undefined FUN_1414d0350(void)

longlong FUN_1414d0350(void)

{
  if (DAT_1468a0780 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TedioreBehavior_Shooting",&DAT_1468a0780,FUN_140447710,0x68,
                  0x10000000,0,L"Engine",&LAB_1414d09f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414cefe0,&LAB_140447700,0);
  }
  return DAT_1468a0780;
}



// FUNCTION 1414d0400 FUN_1414d0400 body=47 status=ok
// SIG undefined FUN_1414d0400(void)

longlong FUN_1414d0400(void)

{
  if (DAT_1468a0778 == 0) {
    FUN_141786440(&DAT_1468a0778,&PTR_FUN_144bdb760);
  }
  return DAT_1468a0778;
}



// FUNCTION 1414d0430 FUN_1414d0430 body=47 status=ok
// SIG undefined FUN_1414d0430(void)

longlong FUN_1414d0430(void)

{
  if (DAT_1468a0770 == 0) {
    FUN_141786a30(&DAT_1468a0770,&PTR_FUN_14646ed80);
  }
  return DAT_1468a0770;
}



// FUNCTION 1414d0460 FUN_1414d0460 body=53 status=ok
// SIG undefined FUN_1414d0460(void)

void FUN_1414d0460(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144bdc4e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414d04b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGSlider::GetPrivateStaticClass(void)

{
  if (DAT_1468a0878 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TedioreProjectile",&DAT_1468a0878,FUN_1414d1cb0,0x838,
                  0x10000000,0,L"Engine",&LAB_1414d08d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1414744d0,&LAB_140447700,0);
  }
  return DAT_1468a0878;
}



// FUNCTION 1414d0570 FUN_1414d0570 body=162 status=ok
// SIG undefined FUN_1414d0570(void)

longlong FUN_1414d0570(void)

{
  if (DAT_1468a07f0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TedioreBehavior_TargetCombo",&DAT_1468a07f0,FUN_1414d1d10,
                  0x78,0x10000000,0,L"Engine",&LAB_1414d0a30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414cefe0,&LAB_140447700,0);
  }
  return DAT_1468a07f0;
}



// FUNCTION 1414d0620 FUN_1414d0620 body=162 status=ok
// SIG undefined FUN_1414d0620(void)

longlong FUN_1414d0620(void)

{
  if (DAT_1468a0768 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TedioreBehavior_MIRV",&DAT_1468a0768,FUN_140447710,0x108,
                  0x10000000,0,L"Engine",&LAB_1414d09e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414cefe0,&LAB_140447700,0);
  }
  return DAT_1468a0768;
}



// FUNCTION 1414d06d0 FUN_1414d06d0 body=162 status=ok
// SIG undefined FUN_1414d06d0(void)

longlong FUN_1414d06d0(void)

{
  if (DAT_1468a0698 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TechnicalVehicleAnimInstance",&DAT_1468a0698,FUN_140447710,
                  0x1ab0,0x10000008,0,L"Engine",&LAB_1414d0980,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,thunk_FUN_141496ed0,
                  &LAB_14084f730,0);
  }
  return DAT_1468a0698;
}



// FUNCTION 1414d0780 FUN_1414d0780 body=47 status=ok
// SIG undefined FUN_1414d0780(void)

longlong FUN_1414d0780(void)

{
  if (DAT_1468a07e8 == 0) {
    FUN_141786440(&DAT_1468a07e8,&PTR_FUN_144bd4cb0);
  }
  return DAT_1468a07e8;
}



// FUNCTION 1414d07b0 FUN_1414d07b0 body=47 status=ok
// SIG undefined FUN_1414d07b0(void)

longlong FUN_1414d07b0(void)

{
  if (DAT_1468a07d0 == 0) {
    FUN_141786a30(&DAT_1468a07d0,&PTR_FUN_14646f280);
  }
  return DAT_1468a07d0;
}



// FUNCTION 1414d07e0 FUN_1414d07e0 body=47 status=ok
// SIG undefined FUN_1414d07e0(void)

longlong FUN_1414d07e0(void)

{
  if (DAT_1468a07d8 == 0) {
    FUN_141786a30(&DAT_1468a07d8,&PTR_FUN_14646f300);
  }
  return DAT_1468a07d8;
}



// FUNCTION 1414d0810 FUN_1414d0810 body=47 status=ok
// SIG undefined FUN_1414d0810(void)

longlong FUN_1414d0810(void)

{
  if (DAT_1468a07e0 == 0) {
    FUN_141786a30(&DAT_1468a07e0,&PTR_FUN_14646f500);
  }
  return DAT_1468a07e0;
}



// FUNCTION 1414d0840 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x790;
    *puVar1 = &PTR_FUN_144bdc8d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1414d0900 FUN_1414d0900 body=59 status=ok
// SIG undefined FUN_1414d0900(void)

void FUN_1414d0900(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144bdc268;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  return;
}



// FUNCTION 1414d0a40 FUN_1414d0a40 body=137 status=ok
// SIG undefined FUN_1414d0a40(void)

undefined8 * FUN_1414d0a40(undefined8 *param_1)

{
  FUN_14084bd40();
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  *param_1 = &PTR_FUN_144717f30;
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x6fc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x704) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70c) = 0;
  *(undefined1 *)(param_1 + 0xef) = 0;
  *(undefined8 *)((longlong)param_1 + 0x77c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x784) = 0;
  *(undefined1 *)((longlong)param_1 + 0x78c) = 0;
  return param_1;
}



// FUNCTION 1414d0ad0 FUN_1414d0ad0 body=159 status=ok
// SIG undefined FUN_1414d0ad0(void)

void FUN_1414d0ad0(longlong *param_1)

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



// FUNCTION 1414d0b70 FUN_1414d0b70 body=745 status=ok
// SIG undefined FUN_1414d0b70(void)

longlong FUN_1414d0b70(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  FUN_14084cff0();
  puVar1 = (undefined8 *)(param_1 + 0x6c8);
  *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_2 + 0x6b8);
  *(undefined8 *)(param_1 + 0x6c0) = *(undefined8 *)(param_2 + 0x6c0);
  if (puVar1 != (undefined8 *)(param_2 + 0x6c8)) {
    iVar2 = *(int *)(param_2 + 0x6d0);
    _Src = *(void **)(param_2 + 0x6c8);
    *(int *)(param_1 + 0x6d0) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x6d4) == 0)) {
      *(undefined4 *)(param_1 + 0x6d4) = 0;
    }
    else {
      TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 5);
    }
  }
  *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_2 + 0x6d8);
  *(undefined1 *)(param_1 + 0x6dc) = *(undefined1 *)(param_2 + 0x6dc);
  *(undefined1 *)(param_1 + 0x6dd) = *(undefined1 *)(param_2 + 0x6dd);
  *(undefined1 *)(param_1 + 0x6de) = *(undefined1 *)(param_2 + 0x6de);
  *(undefined1 *)(param_1 + 0x6df) = *(undefined1 *)(param_2 + 0x6df);
  *(undefined1 *)(param_1 + 0x6e0) = *(undefined1 *)(param_2 + 0x6e0);
  *(undefined1 *)(param_1 + 0x6e1) = *(undefined1 *)(param_2 + 0x6e1);
  *(undefined1 *)(param_1 + 0x6e2) = *(undefined1 *)(param_2 + 0x6e2);
  *(undefined1 *)(param_1 + 0x6e3) = *(undefined1 *)(param_2 + 0x6e3);
  *(undefined1 *)(param_1 + 0x6e4) = *(undefined1 *)(param_2 + 0x6e4);
  *(undefined4 *)(param_1 + 0x6e8) = *(undefined4 *)(param_2 + 0x6e8);
  *(undefined4 *)(param_1 + 0x6ec) = *(undefined4 *)(param_2 + 0x6ec);
  *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_2 + 0x6f0);
  *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(param_2 + 0x6f4);
  *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_2 + 0x6f8);
  *(undefined4 *)(param_1 + 0x6fc) = *(undefined4 *)(param_2 + 0x6fc);
  *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(param_2 + 0x700);
  *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(param_2 + 0x704);
  *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_2 + 0x708);
  *(undefined4 *)(param_1 + 0x70c) = *(undefined4 *)(param_2 + 0x70c);
  *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(param_2 + 0x710);
  *(undefined8 *)(param_1 + 0x714) = *(undefined8 *)(param_2 + 0x714);
  *(undefined4 *)(param_1 + 0x71c) = *(undefined4 *)(param_2 + 0x71c);
  *(undefined8 *)(param_1 + 0x720) = *(undefined8 *)(param_2 + 0x720);
  *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(param_2 + 0x728);
  *(undefined8 *)(param_1 + 0x72c) = *(undefined8 *)(param_2 + 0x72c);
  *(undefined4 *)(param_1 + 0x734) = *(undefined4 *)(param_2 + 0x734);
  *(undefined8 *)(param_1 + 0x738) = *(undefined8 *)(param_2 + 0x738);
  *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(param_2 + 0x740);
  *(undefined8 *)(param_1 + 0x744) = *(undefined8 *)(param_2 + 0x744);
  *(undefined4 *)(param_1 + 0x74c) = *(undefined4 *)(param_2 + 0x74c);
  *(undefined8 *)(param_1 + 0x750) = *(undefined8 *)(param_2 + 0x750);
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_2 + 0x758);
  *(undefined8 *)(param_1 + 0x75c) = *(undefined8 *)(param_2 + 0x75c);
  *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_2 + 0x764);
  *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(param_2 + 0x768);
  *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(param_2 + 0x76c);
  *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(param_2 + 0x770);
  *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(param_2 + 0x774);
  *(undefined1 *)(param_1 + 0x778) = *(undefined1 *)(param_2 + 0x778);
  *(undefined4 *)(param_1 + 0x77c) = *(undefined4 *)(param_2 + 0x77c);
  *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(param_2 + 0x780);
  *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(param_2 + 0x784);
  *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(param_2 + 0x788);
  *(undefined1 *)(param_1 + 0x78c) = *(undefined1 *)(param_2 + 0x78c);
  return param_1;
}



// FUNCTION 1414d0e60 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UNiagaraScriptSourceBase::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_1414d0ad0(param_1 + 0x40);
  FUN_1414d0ad0(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1414d0eb0 FUN_1414d0eb0 body=82 status=ok
// SIG undefined FUN_1414d0eb0(void)

undefined4 FUN_1414d0eb0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  lVar1 = *param_1;
  local_10 = 0;
  local_18 = param_2;
  local_14 = param_3;
  uVar2 = FUN_14178ac60(0,DAT_1468a0530);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return local_10;
}



// FUNCTION 1414d0f10 FUN_1414d0f10 body=57 status=ok
// SIG undefined FUN_1414d0f10(void)

void FUN_1414d0f10(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a03f0);
                    /* WARNING: Could not recover jumptable at 0x0001414d0f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414d0f90 FUN_1414d0f90 body=116 status=ok
// SIG undefined FUN_1414d0f90(void)

undefined8 FUN_1414d0f90(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x20);
    do {
      puVar1[-4] = *(undefined8 *)(param_3 + -0x20 + (longlong)puVar1);
      FText::operator=(puVar1 + -3,param_3 + -0x18 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      puVar1 = puVar1 + 6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414d1010 FUN_1414d1010 body=74 status=ok
// SIG undefined FUN_1414d1010(void)

undefined1 FUN_1414d1010(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1414d0b70(param_2 + param_3,param_3);
      param_3 = param_3 + 0x790;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414d1060 FUN_1414d1060 body=55 status=ok
// SIG undefined FUN_1414d1060(void)

void FUN_1414d1060(void)

{
  undefined8 uVar1;
  
  if (DAT_1468a02d8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a02d8 = GetStaticEnum(FUN_1414d20b0,uVar1,L"EBehaviorOutput");
  }
  return;
}



// FUNCTION 1414d10a0 FUN_1414d10a0 body=179 status=ok
// SIG undefined FUN_1414d10a0(void)

void FUN_1414d10a0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_58 = *param_2;
  FString::FString(local_50,param_2 + 1);
  FSoftObjectPath::operator=(&local_40,&local_58);
  lVar1 = *param_1;
  local_28 = param_3;
  local_20 = param_4;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a03f8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_40);
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (param_2[1] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414d1160 FUN_1414d1160 body=57 status=ok
// SIG undefined FUN_1414d1160(void)

void FUN_1414d1160(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0400);
                    /* WARNING: Could not recover jumptable at 0x0001414d1196. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414d11a0 FUN_1414d11a0 body=6 status=ok
// SIG undefined FUN_1414d11a0(void)

undefined8 FUN_1414d11a0(void)

{
  return 0xf3f92e04;
}



// FUNCTION 1414d11b0 FUN_1414d11b0 body=6 status=ok
// SIG undefined FUN_1414d11b0(void)

undefined8 FUN_1414d11b0(void)

{
  return 0x7f2a0a3c;
}



// FUNCTION 1414d11c0 FUN_1414d11c0 body=164 status=ok
// SIG undefined FUN_1414d11c0(void)

void FUN_1414d11c0(longlong *param_1,undefined8 param_2,void **param_3)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_28;
  void *local_20;
  ulonglong local_18;
  
  local_20 = (void *)0x0;
  local_18 = 0;
  local_28 = param_2;
  if (&local_20 != param_3) {
    uVar1 = *(uint *)(param_3 + 1);
    _Src = *param_3;
    local_18 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_20,uVar1,0);
      _guard_xfg_dispatch_icall_nop(local_20,_Src,(longlong)(int)uVar1 << 3);
    }
  }
  lVar2 = *param_1;
  uVar3 = FUN_14178ac60(param_1,DAT_1468a0408);
  (**(code **)(lVar2 + 0x208))(param_1,uVar3,&local_28);
  if (local_20 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414d1270 FUN_1414d1270 body=61 status=ok
// SIG undefined FUN_1414d1270(void)

void FUN_1414d1270(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0520);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d12b0 FUN_1414d12b0 body=61 status=ok
// SIG undefined FUN_1414d12b0(void)

void FUN_1414d12b0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0460);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d12f0 FUN_1414d12f0 body=61 status=ok
// SIG undefined FUN_1414d12f0(void)

void FUN_1414d12f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0468);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d1330 FUN_1414d1330 body=61 status=ok
// SIG undefined FUN_1414d1330(void)

void FUN_1414d1330(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0528);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d1370 FUN_1414d1370 body=61 status=ok
// SIG undefined FUN_1414d1370(void)

void FUN_1414d1370(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0470);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d13b0 FUN_1414d13b0 body=61 status=ok
// SIG undefined FUN_1414d13b0(void)

void FUN_1414d13b0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0478);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d13f0 FUN_1414d13f0 body=61 status=ok
// SIG undefined FUN_1414d13f0(void)

void FUN_1414d13f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0480);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d1430 FUN_1414d1430 body=346 status=ok
// SIG undefined FUN_1414d1430(void)

void FUN_1414d1430(longlong *param_1,undefined8 param_2,byte *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_a8;
  byte local_a0 [4];
  undefined4 local_9c;
  uint local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  _guard_xfg_dispatch_icall_nop(local_a0,0,0x90);
  local_94 = *(undefined4 *)(param_3 + 0xc);
  local_90 = *(undefined4 *)(param_3 + 0x10);
  local_a0[0] = local_a0[0] ^ (*param_3 ^ local_a0[0]) & 3;
  local_9c = *(undefined4 *)(param_3 + 4);
  local_8c = *(undefined8 *)(param_3 + 0x14);
  local_98 = local_98 ^ (*(uint *)(param_3 + 8) ^ local_98) & 1;
  local_84 = *(undefined4 *)(param_3 + 0x1c);
  local_78 = *(undefined4 *)(param_3 + 0x28);
  local_6c = *(undefined4 *)(param_3 + 0x34);
  local_60 = *(undefined4 *)(param_3 + 0x40);
  local_54 = *(undefined4 *)(param_3 + 0x4c);
  local_48 = *(undefined4 *)(param_3 + 0x58);
  local_40 = *(undefined4 *)(param_3 + 0x60);
  local_3c = *(undefined4 *)(param_3 + 100);
  local_38 = *(undefined4 *)(param_3 + 0x68);
  local_80 = *(undefined8 *)(param_3 + 0x20);
  local_34 = *(undefined4 *)(param_3 + 0x6c);
  local_74 = *(undefined8 *)(param_3 + 0x2c);
  local_30 = *(undefined4 *)(param_3 + 0x70);
  local_68 = *(undefined8 *)(param_3 + 0x38);
  local_2c = *(undefined4 *)(param_3 + 0x74);
  local_5c = *(undefined8 *)(param_3 + 0x44);
  local_28 = *(undefined4 *)(param_3 + 0x78);
  local_20 = *(undefined8 *)(param_3 + 0x80);
  local_50 = *(undefined8 *)(param_3 + 0x50);
  local_18 = *(undefined8 *)(param_3 + 0x88);
  local_44 = *(undefined4 *)(param_3 + 0x5c);
  lVar1 = *param_1;
  local_a8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0488);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_a8);
  return;
}



// FUNCTION 1414d1590 FUN_1414d1590 body=61 status=ok
// SIG undefined FUN_1414d1590(void)

void FUN_1414d1590(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0490);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d15d0 FUN_1414d15d0 body=61 status=ok
// SIG undefined FUN_1414d15d0(void)

void FUN_1414d15d0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0498);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d1610 FUN_1414d1610 body=61 status=ok
// SIG undefined FUN_1414d1610(void)

void FUN_1414d1610(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a04e8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d1650 FUN_1414d1650 body=61 status=ok
// SIG undefined FUN_1414d1650(void)

void FUN_1414d1650(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a04a0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d1690 FUN_1414d1690 body=61 status=ok
// SIG undefined FUN_1414d1690(void)

void FUN_1414d1690(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a04a8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d16d0 FUN_1414d16d0 body=61 status=ok
// SIG undefined FUN_1414d16d0(void)

void FUN_1414d16d0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a04b0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d1710 FUN_1414d1710 body=61 status=ok
// SIG undefined FUN_1414d1710(void)

void FUN_1414d1710(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a04b8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d1750 FUN_1414d1750 body=61 status=ok
// SIG undefined FUN_1414d1750(void)

void FUN_1414d1750(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a04c0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d1790 FUN_1414d1790 body=346 status=ok
// SIG undefined FUN_1414d1790(void)

void FUN_1414d1790(longlong *param_1,undefined8 param_2,byte *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_a8;
  byte local_a0 [4];
  undefined4 local_9c;
  uint local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  _guard_xfg_dispatch_icall_nop(local_a0,0,0x90);
  local_94 = *(undefined4 *)(param_3 + 0xc);
  local_90 = *(undefined4 *)(param_3 + 0x10);
  local_a0[0] = local_a0[0] ^ (*param_3 ^ local_a0[0]) & 3;
  local_9c = *(undefined4 *)(param_3 + 4);
  local_8c = *(undefined8 *)(param_3 + 0x14);
  local_98 = local_98 ^ (*(uint *)(param_3 + 8) ^ local_98) & 1;
  local_84 = *(undefined4 *)(param_3 + 0x1c);
  local_78 = *(undefined4 *)(param_3 + 0x28);
  local_6c = *(undefined4 *)(param_3 + 0x34);
  local_60 = *(undefined4 *)(param_3 + 0x40);
  local_54 = *(undefined4 *)(param_3 + 0x4c);
  local_48 = *(undefined4 *)(param_3 + 0x58);
  local_40 = *(undefined4 *)(param_3 + 0x60);
  local_3c = *(undefined4 *)(param_3 + 100);
  local_38 = *(undefined4 *)(param_3 + 0x68);
  local_80 = *(undefined8 *)(param_3 + 0x20);
  local_34 = *(undefined4 *)(param_3 + 0x6c);
  local_74 = *(undefined8 *)(param_3 + 0x2c);
  local_30 = *(undefined4 *)(param_3 + 0x70);
  local_68 = *(undefined8 *)(param_3 + 0x38);
  local_2c = *(undefined4 *)(param_3 + 0x74);
  local_5c = *(undefined8 *)(param_3 + 0x44);
  local_28 = *(undefined4 *)(param_3 + 0x78);
  local_20 = *(undefined8 *)(param_3 + 0x80);
  local_50 = *(undefined8 *)(param_3 + 0x50);
  local_18 = *(undefined8 *)(param_3 + 0x88);
  local_44 = *(undefined4 *)(param_3 + 0x5c);
  lVar1 = *param_1;
  local_a8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a04c8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_a8);
  return;
}



// FUNCTION 1414d18f0 FUN_1414d18f0 body=61 status=ok
// SIG undefined FUN_1414d18f0(void)

void FUN_1414d18f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a04d0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d1930 FUN_1414d1930 body=61 status=ok
// SIG undefined FUN_1414d1930(void)

void FUN_1414d1930(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a04d8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d1980 FUN_1414d1980 body=61 status=ok
// SIG undefined FUN_1414d1980(void)

void FUN_1414d1980(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0538);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d19c0 FUN_1414d19c0 body=61 status=ok
// SIG undefined FUN_1414d19c0(void)

void FUN_1414d19c0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a03e0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d1a00 FUN_1414d1a00 body=61 status=ok
// SIG undefined FUN_1414d1a00(void)

void FUN_1414d1a00(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0510);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d1a40 FUN_1414d1a40 body=57 status=ok
// SIG undefined FUN_1414d1a40(void)

void FUN_1414d1a40(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0410);
                    /* WARNING: Could not recover jumptable at 0x0001414d1a76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414d1a80 FUN_1414d1a80 body=57 status=ok
// SIG undefined FUN_1414d1a80(void)

void FUN_1414d1a80(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0440);
                    /* WARNING: Could not recover jumptable at 0x0001414d1ab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414d1ac0 FUN_1414d1ac0 body=72 status=ok
// SIG undefined FUN_1414d1ac0(void)

void FUN_1414d1ac0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = *param_1;
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0448);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return;
}



// FUNCTION 1414d1b10 FUN_1414d1b10 body=73 status=ok
// SIG undefined FUN_1414d1b10(void)

void FUN_1414d1b10(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  lVar1 = *param_1;
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  uVar2 = FUN_14178ac60(local_28,DAT_1468a0418);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return;
}



// FUNCTION 1414d1b60 FUN_1414d1b60 body=61 status=ok
// SIG undefined FUN_1414d1b60(void)

void FUN_1414d1b60(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0420);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d1ba0 FUN_1414d1ba0 body=159 status=ok
// SIG undefined FUN_1414d1ba0(void)

void FUN_1414d1ba0(longlong *param_1,void **param_2)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  void *local_18;
  ulonglong local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  if (&local_18 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    _Src = *param_2;
    local_10 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,uVar1,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  lVar2 = *param_1;
  uVar3 = FUN_14178ac60(param_1,DAT_1468a0428);
  (**(code **)(lVar2 + 0x208))(param_1,uVar3,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414d1c40 thunk_FUN_142e7ab40 body=5 status=ok
// SIG undefined thunk_FUN_142e7ab40(void)

void thunk_FUN_142e7ab40(void)

{
  FUN_142e7ab40();
  return;
}



// FUNCTION 1414d1c50 FUN_1414d1c50 body=34 status=ok
// SIG undefined FUN_1414d1c50(void)

void FUN_1414d1c50(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414cfae0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_TriggerShowEffectSlideout_144bdc600,1);
  return;
}



// FUNCTION 1414d1c80 FUN_1414d1c80 body=34 status=ok
// SIG undefined FUN_1414d1c80(void)

void FUN_1414d1c80(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414cf540();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CleanEventEnemy_144bdc770,0x15);
  return;
}



// FUNCTION 1414d1cb0 FUN_1414d1cb0 body=34 status=ok
// SIG undefined FUN_1414d1cb0(void)

void FUN_1414d1cb0(void)

{
  undefined8 uVar1;
  
  uVar1 = UUGSlider::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CalculateExplosionDamage_144bdca20,0xd);
  return;
}



// FUNCTION 1414d1ce0 StaticRegisterNativesUCompositingElementInput body=34 status=ok
// SIG undefined StaticRegisterNativesUCompositingElementInput(void)

void UCompositingElementInput::StaticRegisterNativesUCompositingElementInput(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SimulatePollActionSelected_144bdc8c0,1);
  return;
}



// FUNCTION 1414d1d10 FUN_1414d1d10 body=34 status=ok
// SIG undefined FUN_1414d1d10(void)

void FUN_1414d1d10(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414d0570();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnProjectileTakeAnyDamage_144bdc9e8,1);
  return;
}



// FUNCTION 1414d1d40 FUN_1414d1d40 body=82 status=ok
// SIG undefined FUN_1414d1d40(void)

void FUN_1414d1d40(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0550 == 0) {
    uVar1 = FUN_1414d11a0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0550 = GetStaticStruct(FUN_1414d20e0,uVar2,L"StreamerBoosterInfo",0x30,uVar1);
  }
  return;
}



// FUNCTION 1414d1da0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimSequencerInstanceProxy::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0680 == 0) {
    uVar1 = FUN_1414d11b0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0680 =
         GetStaticStruct(FUN_1414d2110,uVar2,L"TechnicalVehicleAnimInstanceProxy",0x790,uVar1);
  }
  return;
}



// FUNCTION 1414d1e00 FUN_1414d1e00 body=66 status=ok
// SIG undefined FUN_1414d1e00(void)

void FUN_1414d1e00(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0430);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 1414d1e50 FUN_1414d1e50 body=66 status=ok
// SIG undefined FUN_1414d1e50(void)

void FUN_1414d1e50(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0438);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 1414d1ea0 FUN_1414d1ea0 body=47 status=ok
// SIG undefined FUN_1414d1ea0(void)

longlong FUN_1414d1ea0(void)

{
  if (DAT_1468a0540 == 0) {
    FUN_141786440(&DAT_1468a0540,&PTR_FUN_144bdb4c0);
  }
  return DAT_1468a0540;
}



// FUNCTION 1414d1ed0 FUN_1414d1ed0 body=47 status=ok
// SIG undefined FUN_1414d1ed0(void)

longlong FUN_1414d1ed0(void)

{
  if (DAT_1468a0560 == 0) {
    FUN_141786440(&DAT_1468a0560,&PTR_FUN_144bdb920);
  }
  return DAT_1468a0560;
}



// FUNCTION 1414d1f00 FUN_1414d1f00 body=47 status=ok
// SIG undefined FUN_1414d1f00(void)

longlong FUN_1414d1f00(void)

{
  if (DAT_1468a0670 == 0) {
    FUN_141786440(&DAT_1468a0670,&PTR_GetPrivateStaticClass_144bdb040);
  }
  return DAT_1468a0670;
}



// FUNCTION 1414d1f30 FUN_1414d1f30 body=47 status=ok
// SIG undefined FUN_1414d1f30(void)

longlong FUN_1414d1f30(void)

{
  if (DAT_1468a0690 == 0) {
    FUN_141786440(&DAT_1468a0690,&PTR_FUN_144bdc070);
  }
  return DAT_1468a0690;
}



// FUNCTION 1414d1f60 FUN_1414d1f60 body=47 status=ok
// SIG undefined FUN_1414d1f60(void)

longlong FUN_1414d1f60(void)

{
  if (DAT_1468a0730 == 0) {
    FUN_141786440(&DAT_1468a0730,&PTR_FUN_144bd6830);
  }
  return DAT_1468a0730;
}



// FUNCTION 1414d1f90 FUN_1414d1f90 body=47 status=ok
// SIG undefined FUN_1414d1f90(void)

longlong FUN_1414d1f90(void)

{
  if (DAT_1468a0740 == 0) {
    FUN_141786440(&DAT_1468a0740,&PTR_FUN_144bd7a20);
  }
  return DAT_1468a0740;
}



// FUNCTION 1414d1fc0 FUN_1414d1fc0 body=47 status=ok
// SIG undefined FUN_1414d1fc0(void)

longlong FUN_1414d1fc0(void)

{
  if (DAT_1468a0750 == 0) {
    FUN_141786440(&DAT_1468a0750,&PTR_GetPrivateStaticClass_144bd8250);
  }
  return DAT_1468a0750;
}



// FUNCTION 1414d1ff0 FUN_1414d1ff0 body=47 status=ok
// SIG undefined FUN_1414d1ff0(void)

longlong FUN_1414d1ff0(void)

{
  if (DAT_1468a0760 == 0) {
    FUN_141786440(&DAT_1468a0760,&PTR_FUN_144bdbe50);
  }
  return DAT_1468a0760;
}


