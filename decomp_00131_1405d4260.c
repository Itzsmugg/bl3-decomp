// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1405d4260 FUN_1405d4260 body=162 status=ok
// SIG undefined FUN_1405d4260(void)

longlong FUN_1405d4260(void)

{
  if (DAT_146854730 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"ActiveAmbientLocationValidator_DistanceFromListener",
                  &DAT_146854730,FUN_140447710,0x30,0x10000000,0,L"Engine",FUN_1405d4930,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d4100,&LAB_140447700,0);
  }
  return DAT_146854730;
}



// FUNCTION 1405d4310 FUN_1405d4310 body=47 status=ok
// SIG undefined FUN_1405d4310(void)

longlong FUN_1405d4310(void)

{
  if (DAT_146854700 == 0) {
    FUN_141786440(&DAT_146854700,&PTR_FUN_143fe9c60);
  }
  return DAT_146854700;
}



// FUNCTION 1405d4340 FUN_1405d4340 body=47 status=ok
// SIG undefined FUN_1405d4340(void)

longlong FUN_1405d4340(void)

{
  if (DAT_146854718 == 0) {
    FUN_141786440(&DAT_146854718,&PTR_FUN_143fe9db0);
  }
  return DAT_146854718;
}



// FUNCTION 1405d4370 FUN_1405d4370 body=47 status=ok
// SIG undefined FUN_1405d4370(void)

longlong FUN_1405d4370(void)

{
  if (DAT_146854710 == 0) {
    FUN_141786a30(&DAT_146854710,&PTR_FUN_146205e20);
  }
  return DAT_146854710;
}



// FUNCTION 1405d43c0 FUN_1405d43c0 body=162 status=ok
// SIG undefined FUN_1405d43c0(void)

longlong FUN_1405d43c0(void)

{
  if (DAT_146854848 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AnimNotify_WwiseEvent",&DAT_146854848,FUN_140447710,0x68,
                  0x10000000,0,L"Engine",&LAB_1405d4ab0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimNotify::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146854848;
}



// FUNCTION 1405d4480 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AAfrPlayerState::GetPrivateStaticClass(void)

{
  if (DAT_146854750 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"ActiveAmbientSound",&DAT_146854750,
                  StaticRegisterNativesAAfrPlayerState,0x468,0x10000000,0,L"Engine",&LAB_1405d4680,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146854750;
}



// FUNCTION 1405d4530 FUN_1405d4530 body=47 status=ok
// SIG undefined FUN_1405d4530(void)

longlong FUN_1405d4530(void)

{
  if (DAT_146854748 == 0) {
    FUN_141786440(&DAT_146854748,&PTR_GetPrivateStaticClass_143fea380);
  }
  return DAT_146854748;
}



// FUNCTION 1405d4560 FUN_1405d4560 body=47 status=ok
// SIG undefined FUN_1405d4560(void)

longlong FUN_1405d4560(void)

{
  if (DAT_146854738 == 0) {
    FUN_141786a30(&DAT_146854738,&PTR_FUN_146205f00);
  }
  return DAT_146854738;
}



// FUNCTION 1405d4590 FUN_1405d4590 body=47 status=ok
// SIG undefined FUN_1405d4590(void)

longlong FUN_1405d4590(void)

{
  if (DAT_146854740 == 0) {
    FUN_141786a30(&DAT_146854740,&PTR_FUN_146205f40);
  }
  return DAT_146854740;
}



// FUNCTION 1405d45e0 FUN_1405d45e0 body=47 status=ok
// SIG undefined FUN_1405d45e0(void)

longlong FUN_1405d45e0(void)

{
  if (DAT_146854770 == 0) {
    FUN_141786440(&DAT_146854770,&PTR_FUN_143fea550);
  }
  return DAT_146854770;
}



// FUNCTION 1405d4610 FUN_1405d4610 body=47 status=ok
// SIG undefined FUN_1405d4610(void)

longlong FUN_1405d4610(void)

{
  if (DAT_146854768 == 0) {
    FUN_141786a30(&DAT_146854768,&PTR_FUN_1462060e0);
  }
  return DAT_146854768;
}



// FUNCTION 1405d4640 FUN_1405d4640 body=53 status=ok
// SIG undefined FUN_1405d4640(void)

void FUN_1405d4640(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_143febc40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405d4720 FUN_1405d4720 body=41 status=ok
// SIG undefined FUN_1405d4720(void)

void FUN_1405d4720(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_143fddd10;
  }
  return;
}



// FUNCTION 1405d4750 FUN_1405d4750 body=41 status=ok
// SIG undefined FUN_1405d4750(void)

void FUN_1405d4750(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_143feacd8;
  }
  return;
}



// FUNCTION 1405d4790 FUN_1405d4790 body=75 status=ok
// SIG undefined FUN_1405d4790(void)

void FUN_1405d4790(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = FUN_14178c940();
    FUN_141781840(puVar1,uVar2);
    *puVar1 = &PTR__scalar_deleting_destructor__143fddf98;
    puVar1[5] = &PTR_LAB_143fde220;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  return;
}



// FUNCTION 1405d47e0 FUN_1405d47e0 body=102 status=ok
// SIG undefined FUN_1405d47e0(void)

void FUN_1405d47e0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = FUN_14178c940();
    FUN_141781840(puVar1,uVar2);
    *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
    *puVar1 = &PTR_FUN_143feb1e8;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0x447a0000;
  }
  return;
}



// FUNCTION 1405d4850 FUN_1405d4850 body=62 status=ok
// SIG undefined FUN_1405d4850(void)

void FUN_1405d4850(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
    *puVar1 = &PTR_FUN_143feb1e8;
  }
  return;
}



// FUNCTION 1405d4890 FUN_1405d4890 body=62 status=ok
// SIG undefined FUN_1405d4890(void)

void FUN_1405d4890(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_143feaf60;
    *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  }
  return;
}



// FUNCTION 1405d48d0 FUN_1405d48d0 body=41 status=ok
// SIG undefined FUN_1405d48d0(void)

void FUN_1405d48d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_143feb4a0;
  }
  return;
}



// FUNCTION 1405d4900 FUN_1405d4900 body=41 status=ok
// SIG undefined FUN_1405d4900(void)

void FUN_1405d4900(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_143feb720;
  }
  return;
}



// FUNCTION 1405d4930 FUN_1405d4930 body=60 status=ok
// SIG undefined FUN_1405d4930(void)

void FUN_1405d4930(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = FUN_14178c940();
    FUN_141781840(puVar1,uVar2);
    *puVar1 = &PTR_FUN_143feb9a0;
    *(undefined4 *)(puVar1 + 5) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x461c4000;
  }
  return;
}



// FUNCTION 1405d4980 FUN_1405d4980 body=41 status=ok
// SIG undefined FUN_1405d4980(void)

void FUN_1405d4980(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_143febd68;
  }
  return;
}



// FUNCTION 1405d49b0 FUN_1405d49b0 body=41 status=ok
// SIG undefined FUN_1405d49b0(void)

void FUN_1405d49b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_143febff0;
  }
  return;
}



// FUNCTION 1405d49e0 FUN_1405d49e0 body=60 status=ok
// SIG undefined FUN_1405d49e0(void)

void FUN_1405d49e0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = FUN_14178c940();
    FUN_141781840(puVar1,uVar2);
    *puVar1 = &PTR_FUN_143fec278;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x3f800000;
  }
  return;
}



// FUNCTION 1405d4a20 FUN_1405d4a20 body=74 status=ok
// SIG undefined FUN_1405d4a20(void)

void FUN_1405d4a20(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = FUN_14178c940();
    FUN_141781840(puVar1,uVar2);
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x3f800000;
    *puVar1 = &PTR_FUN_143fec500;
    *(undefined4 *)(puVar1 + 6) = 0x3e4ccccd;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x3e800000;
  }
  return;
}



// FUNCTION 1405d4ac0 FUN_1405d4ac0 body=169 status=ok
// SIG undefined FUN_1405d4ac0(void)

void FUN_1405d4ac0(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_141781840(puVar3,param_1);
    puVar1 = puVar3 + 5;
    *puVar1 = &PTR__purecall_143f740d8;
    plVar4 = (longlong *)FUN_1404cfca0();
    iVar2 = (int)plVar4[1];
    *(int *)(plVar4 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar4 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar2);
    }
    *(undefined8 **)(*plVar4 + (longlong)iVar2 * 8) = puVar1;
    *puVar3 = &PTR__scalar_deleting_destructor__143fec918;
    *puVar1 = &PTR_FUN_143fecb90;
    *(undefined4 *)((longlong)puVar3 + 0x34) = 0;
    *(undefined4 *)(puVar3 + 6) = 0xffffffff;
    puVar3[7] = 0;
    puVar3[8] = 0;
    *(undefined4 *)(puVar3 + 9) = 0xffffffff;
    *(undefined1 *)((longlong)puVar3 + 0x4c) = 0;
  }
  return;
}



// FUNCTION 1405d4b70 FUN_1405d4b70 body=276 status=ok
// SIG undefined FUN_1405d4b70(void)

void FUN_1405d4b70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_143feccf0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x7c) = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0xffffffff;
    puVar1[0x11] = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0;
    *(undefined2 *)(puVar1 + 0x13) = 0x203;
    *(undefined4 *)((longlong)puVar1 + 0x9c) = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    puVar1[0x30] = 0;
    *(undefined4 *)(puVar1 + 0x32) = 0;
    puVar1[0x2a] = &LAB_1405d5490;
  }
  return;
}



// FUNCTION 1405d4c90 FUN_1405d4c90 body=51 status=ok
// SIG undefined FUN_1405d4c90(void)

void FUN_1405d4c90(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_143feaa50;
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  return;
}



// FUNCTION 1405d4cd0 InternalConstructor<UMovieSceneStringTrack> body=46 status=ok
// SIG undefined InternalConstructor<UMovieSceneStringTrack>(void)

void InternalConstructor<UMovieSceneStringTrack>(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = FUN_14178c940();
    FUN_141781840(puVar1,uVar2);
    *puVar1 = &PTR_FUN_143fd4d90;
  }
  return;
}



// FUNCTION 1405d4d00 FUN_1405d4d00 body=182 status=ok
// SIG undefined FUN_1405d4d00(void)

undefined4 * FUN_1405d4d00(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  local_18 = 0;
  local_10 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  uVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,10,"....t....",10,0x3f);
  iVar1 = param_1[4];
  param_1[4] = iVar1 + 1;
  if ((int)param_1[5] < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 2));
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_10;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_10._4_4_;
  return param_1;
}



// FUNCTION 1405d4dc0 ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_> body=95 status=ok
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



// FUNCTION 1405d4e20 ~TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>(void)

void TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>::
     ~TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x20);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 7;
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



// FUNCTION 1405d4e80 FUN_1405d4e80 body=327 status=ok
// SIG undefined FUN_1405d4e80(void)

void FUN_1405d4e80(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x13);
  plVar1 = (longlong *)param_1[0x12];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0x12];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x11);
  plVar1 = (longlong *)param_1[0x10];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0x10];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
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
  iVar2 = *(int *)(param_1 + 9);
  plVar1 = (longlong *)param_1[8];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[8];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 6);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 4);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1405d4fd0 operator= body=113 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FName,TSizedDefaultAllocator<32>_>::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1405d5050 operator= body=110 status=ok
// SIG undefined operator=(void)

undefined8 * FVRMoveActionArray::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<FVRMoveActionContainer,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x1c);
  }
  return param_1;
}



// FUNCTION 1405d50c0 FUN_1405d50c0 body=373 status=ok
// SIG undefined FUN_1405d50c0(void)

longlong * FUN_1405d50c0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined1 local_40 [24];
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar4 = (int)param_1[1];
  if (iVar4 != 0) {
    plVar2 = (longlong *)(*param_1 + 0x18);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = (int)param_2[1];
  lVar1 = *param_2;
  *(int *)(param_1 + 1) = iVar4;
  if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar4);
    puVar6 = (undefined4 *)*param_1;
    if (iVar4 != 0) {
      puVar5 = (undefined8 *)(puVar6 + 8);
      puVar3 = (undefined4 *)(lVar1 + 4);
      do {
        puVar5[-1] = 0;
        *puVar5 = 0;
        *puVar6 = 0xffffffff;
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
        *puVar6 = puVar3[-1];
        *(undefined4 *)((longlong)puVar5 + -0x1c) = *puVar3;
        *(undefined4 *)(puVar5 + -3) = puVar3[1];
        FString::FString(local_40,puVar3 + 5);
        FSoftObjectPath::operator=(puVar5 + -2);
        puVar6 = puVar6 + 10;
        puVar5 = puVar5 + 5;
        puVar3 = puVar3 + 10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return param_1;
}



// FUNCTION 1405d5240 FUN_1405d5240 body=109 status=ok
// SIG undefined FUN_1405d5240(void)

undefined8 * FUN_1405d5240(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 1405d52c0 FUN_1405d52c0 body=52 status=ok
// SIG undefined FUN_1405d52c0(void)

undefined8 FUN_1405d52c0(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1405d5300 FUN_1405d5300 body=52 status=ok
// SIG undefined FUN_1405d5300(void)

undefined8 FUN_1405d5300(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1405d5340 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UControlsSaveGame::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>::
  ~TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>(param_1 + 0x38);
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1405d5390 FUN_1405d5390 body=215 status=ok
// SIG undefined FUN_1405d5390(void)

longlong FUN_1405d5390(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 400) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x180);
    if (*(longlong **)(param_1 + 0x180) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0x160);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  FUN_1405d4e80(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x48,0);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 1405d5470 FUN_1405d5470 body=27 status=ok
// SIG undefined FUN_1405d5470(void)

void FUN_1405d5470(undefined8 param_1)

{
  FUN_1405c5350();
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 1405d5500 FUN_1405d5500 body=113 status=ok
// SIG undefined FUN_1405d5500(void)

void FUN_1405d5500(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0xa8);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  return;
}



// FUNCTION 1405d5580 FUN_1405d5580 body=75 status=ok
// SIG undefined FUN_1405d5580(void)

void FUN_1405d5580(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x78);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  return;
}



// FUNCTION 1405d5600 FUN_1405d5600 body=239 status=ok
// SIG undefined FUN_1405d5600(void)

undefined8 FUN_1405d5600(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  void *_Src;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined8 *)(param_3 + 8);
    do {
      *param_2 = puVar4[-1];
      puVar1 = param_2 + 4;
      param_2[1] = *puVar4;
      param_2[2] = puVar4[1];
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(puVar4 + 2);
      if (puVar1 != puVar4 + 3) {
        iVar3 = *(int *)(puVar4 + 4);
        _Src = (void *)puVar4[3];
        *(int *)(param_2 + 5) = iVar3;
        if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0x2c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 << 2);
        }
      }
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar4 + 5);
      puVar2 = (undefined1 *)((longlong)puVar4 + 0x2c);
      puVar4 = puVar4 + 7;
      *(undefined1 *)((longlong)param_2 + 0x34) = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 7;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405d56f0 FUN_1405d56f0 body=161 status=ok
// SIG undefined FUN_1405d56f0(void)

undefined8 FUN_1405d56f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x18);
    do {
      FUN_1405913a0(puVar1 + -6,param_3 + -0x18 + (longlong)puVar1);
      puVar1[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined4 *)(param_3 + 4 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_3 + 8 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 3) = *(undefined8 *)(param_3 + 0xc + (longlong)puVar1);
      puVar1[5] = *(undefined4 *)(param_3 + 0x14 + (longlong)puVar1);
      puVar1[6] = *(undefined4 *)(param_3 + 0x18 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 7) = *(undefined8 *)(param_3 + 0x1c + (longlong)puVar1);
      puVar1[9] = *(undefined4 *)(param_3 + 0x24 + (longlong)puVar1);
      puVar1 = puVar1 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405d57a0 FUN_1405d57a0 body=241 status=ok
// SIG undefined FUN_1405d57a0(void)

undefined8 FUN_1405d57a0(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      lVar2 = *param_2;
      for (iVar3 = (int)param_2[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
        FUN_140591060(lVar2);
        lVar2 = lVar2 + 0x18;
      }
      iVar3 = (int)param_3[1];
      lVar2 = *param_3;
      *(int *)(param_2 + 1) = iVar3;
      if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_2,iVar3);
        lVar4 = *param_2;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          FUN_14058f8f0(lVar4,lVar2);
          puVar1 = (undefined4 *)(lVar2 + 0x10);
          lVar2 = lVar2 + 0x18;
          *(undefined4 *)(lVar4 + 0x10) = *puVar1;
          lVar4 = lVar4 + 0x18;
        }
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 1405d58a0 FUN_1405d58a0 body=252 status=ok
// SIG undefined FUN_1405d58a0(void)

undefined8 FUN_1405d58a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x20;
    do {
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                (param_2 + -0x20,param_3 + -0x20 + param_2);
      FUN_1405d5240(param_2 + -0x10,param_3 + -0x10 + param_2);
      FUN_1405d50c0(param_2,param_3 + param_2);
      FUN_1405d50c0(param_2 + 0x10,param_3 + 0x10 + param_2);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                (param_2 + 0x20,param_3 + 0x20 + param_2);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_2 + 0x30,param_3 + 0x30 + param_2);
      FVRMoveActionArray::operator=(param_2 + 0x40,param_3 + 0x40 + param_2);
      FVRMoveActionArray::operator=(param_2 + 0x50,param_3 + 0x50 + param_2);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                (param_2 + 0x60,param_3 + 0x60 + param_2);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                (param_2 + 0x70,param_3 + 0x70 + param_2);
      *(undefined1 *)(param_2 + 0x80) = *(undefined1 *)(param_3 + 0x80 + param_2);
      param_2 = param_2 + 0xa8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405d59a0 FUN_1405d59a0 body=283 status=ok
// SIG undefined FUN_1405d59a0(void)

undefined8 FUN_1405d59a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  void *_Src;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    do {
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_2,param_3 + -0x10);
      FUN_1405d5240(param_2 + 0x10,param_3);
      FUN_1405d50c0(param_2 + 0x20,param_3 + 0x10);
      FUN_1405d50c0(param_2 + 0x30,param_3 + 0x20);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_2 + 0x40,param_3 + 0x30);
      FVRMoveActionArray::operator=(param_2 + 0x50,param_3 + 0x40);
      puVar1 = (undefined8 *)(param_2 + 0x60);
      if (puVar1 != (undefined8 *)(param_3 + 0x50)) {
        iVar3 = *(int *)(param_3 + 0x58);
        _Src = *(void **)(param_3 + 0x50);
        *(int *)(param_2 + 0x68) = iVar3;
        if ((iVar3 == 0) && (*(int *)(param_2 + 0x6c) == 0)) {
          *(undefined4 *)(param_2 + 0x6c) = 0;
        }
        else {
          FUN_1405d62d0(puVar1,iVar3);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 * 0x14);
        }
      }
      puVar2 = (undefined1 *)(param_3 + 0x60);
      param_3 = param_3 + 0x78;
      *(undefined1 *)(param_2 + 0x70) = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x78;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405d5af0 Copy body=86 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FTutorialButtonGuideKeyData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8 + param_2);
      *(undefined4 *)(param_2 + -4) = *(undefined4 *)(param_3 + -4 + param_2);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_2,param_3 + param_2);
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405d5b60 FUN_1405d5b60 body=81 status=ok
// SIG undefined FUN_1405d5b60(void)

void FUN_1405d5b60(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_2[1];
  lVar1 = *param_2;
  if (iVar2 != 0) {
    do {
      FUN_140591060(lVar1);
      lVar1 = lVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_2;
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 1405d5bd0 FUN_1405d5bd0 body=156 status=ok
// SIG undefined FUN_1405d5bd0(void)

void FUN_1405d5bd0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_2[0xc] != 0) {
    FMemory::Free();
  }
  if (param_2[10] != 0) {
    FMemory::Free();
  }
  if (param_2[8] != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_2 + 6);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_2 + 4);
  if (param_2[2] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_2 + 1);
  plVar1 = (longlong *)*param_2;
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_2;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1405d5c70 FUN_1405d5c70 body=87 status=ok
// SIG undefined FUN_1405d5c70(void)

void FUN_1405d5c70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x10);
  plVar1 = *(longlong **)(param_2 + 8);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_2 + 8);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1405d5cd0 FUN_1405d5cd0 body=55 status=ok
// SIG undefined FUN_1405d5cd0(void)

void FUN_1405d5cd0(void)

{
  undefined8 uVar1;
  
  if (DAT_1468545c0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_1468545c0 = GetStaticEnum(FUN_1405d6d70,uVar1,L"EDistributedSoundDebugVisualizationMode");
  }
  return;
}



// FUNCTION 1405d5d10 FUN_1405d5d10 body=55 status=ok
// SIG undefined FUN_1405d5d10(void)

void FUN_1405d5d10(void)

{
  undefined8 uVar1;
  
  if (DAT_1468545d0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_1468545d0 = GetStaticEnum(FUN_1405d6da0,uVar1,L"EFilterResultOperation");
  }
  return;
}



// FUNCTION 1405d5d50 FUN_1405d5d50 body=55 status=ok
// SIG undefined FUN_1405d5d50(void)

void FUN_1405d5d50(void)

{
  undefined8 uVar1;
  
  if (DAT_1468545c8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_1468545c8 = GetStaticEnum(FUN_1405d6dd0,uVar1,L"EOcclusionVoxelThinningAlgorithm");
  }
  return;
}



// FUNCTION 1405d5d90 FUN_1405d5d90 body=55 status=ok
// SIG undefined FUN_1405d5d90(void)

void FUN_1405d5d90(void)

{
  undefined8 uVar1;
  
  if (DAT_1468545d8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_1468545d8 = GetStaticEnum(FUN_1405d6e00,uVar1,L"EWwiseNotifyComponentMethod");
  }
  return;
}



// FUNCTION 1405d5df0 FUN_1405d5df0 body=6 status=ok
// SIG undefined FUN_1405d5df0(void)

undefined8 FUN_1405d5df0(void)

{
  return 0xffa65e8f;
}



// FUNCTION 1405d5e00 FUN_1405d5e00 body=6 status=ok
// SIG undefined FUN_1405d5e00(void)

undefined8 FUN_1405d5e00(void)

{
  return 0x93f39bc6;
}



// FUNCTION 1405d5e10 FUN_1405d5e10 body=6 status=ok
// SIG undefined FUN_1405d5e10(void)

undefined8 FUN_1405d5e10(void)

{
  return 0xc6741c74;
}



// FUNCTION 1405d5e20 FUN_1405d5e20 body=6 status=ok
// SIG undefined FUN_1405d5e20(void)

undefined8 FUN_1405d5e20(void)

{
  return 0x307e3b43;
}



// FUNCTION 1405d5e30 FUN_1405d5e30 body=6 status=ok
// SIG undefined FUN_1405d5e30(void)

undefined8 FUN_1405d5e30(void)

{
  return 0xee884357;
}



// FUNCTION 1405d5e40 FUN_1405d5e40 body=6 status=ok
// SIG undefined FUN_1405d5e40(void)

undefined8 FUN_1405d5e40(void)

{
  return 0x938eff5c;
}



// FUNCTION 1405d5e50 FUN_1405d5e50 body=6 status=ok
// SIG undefined FUN_1405d5e50(void)

undefined8 FUN_1405d5e50(void)

{
  return 0x56948d75;
}



// FUNCTION 1405d5e60 FUN_1405d5e60 body=61 status=ok
// SIG undefined FUN_1405d5e60(void)

void FUN_1405d5e60(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468545f8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1405d5ea0 FUN_1405d5ea0 body=284 status=ok
// SIG undefined FUN_1405d5ea0(void)

void FUN_1405d5ea0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  FUN_140590080(local_50);
  local_58 = param_2;
  FUN_1405913a0(local_50,param_3);
  local_40 = *(undefined4 *)(param_3 + 0x10);
  local_38 = *(undefined4 *)(param_3 + 0x18);
  local_34 = *(undefined4 *)(param_3 + 0x1c);
  lVar1 = *param_1;
  local_2c = *(undefined8 *)(param_3 + 0x24);
  local_30 = *(undefined1 *)(param_3 + 0x20);
  local_20 = *(undefined4 *)(param_3 + 0x30);
  local_24 = *(undefined4 *)(param_3 + 0x2c);
  local_1c = *(undefined8 *)(param_3 + 0x34);
  local_14 = *(undefined4 *)(param_3 + 0x3c);
  uVar2 = FUN_14178ac60(param_1,DAT_146854618);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_58);
  FUN_1405913a0(param_3,local_50);
  *(undefined4 *)(param_3 + 0x10) = local_40;
  *(undefined4 *)(param_3 + 0x18) = local_38;
  *(undefined1 *)(param_3 + 0x20) = local_30;
  *(undefined8 *)(param_3 + 0x24) = local_2c;
  *(undefined4 *)(param_3 + 0x1c) = local_34;
  *(undefined4 *)(param_3 + 0x2c) = local_24;
  *(undefined8 *)(param_3 + 0x34) = local_1c;
  *(undefined4 *)(param_3 + 0x30) = local_20;
  *(undefined4 *)(param_3 + 0x3c) = local_14;
  FUN_140591060(local_50);
  return;
}



// FUNCTION 1405d5fc0 FUN_1405d5fc0 body=93 status=ok
// SIG undefined FUN_1405d5fc0(void)

bool FUN_1405d5fc0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  char local_14;
  
  local_20 = *param_3;
  local_18 = *(undefined4 *)(param_3 + 1);
  lVar1 = *param_1;
  local_14 = '\0';
  local_28 = param_2;
  uVar2 = FUN_14178ac60(local_20,DAT_146854610);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return local_14 != '\0';
}



// FUNCTION 1405d6120 FUN_1405d6120 body=129 status=ok
// SIG undefined FUN_1405d6120(void)

bool FUN_1405d6120(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  char local_10;
  
  local_20 = *param_3;
  local_18 = *(undefined4 *)(param_3 + 1);
  lVar1 = *param_1;
  local_10 = '\0';
  local_28 = param_2;
  local_14 = param_4;
  uVar2 = FUN_14178ac60(local_20,DAT_146854600);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  *param_3 = local_20;
  *(undefined4 *)(param_3 + 1) = local_18;
  return local_10 != '\0';
}



// FUNCTION 1405d61b0 ResizeForCopy body=136 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FVRMoveActionContainer,TSizedDefaultAllocator<32>_>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x1c,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 4);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if ((iVar4 != param_3) && ((*param_1 != 0 || (iVar4 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x1c,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 1405d6240 ResizeForCopy body=132 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x28,0);
    iVar3 = (int)(uVar1 / 0x28);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x28,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1405d62d0 FUN_1405d62d0 body=132 status=ok
// SIG undefined FUN_1405d62d0(void)

void FUN_1405d62d0(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x14,0);
    iVar3 = (int)(uVar1 / 0x14);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x14,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1405d6360 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UAnimNotify::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1405d6370 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UAnimNotifyState::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1405d6390 StaticRegisterNativesAAfrPlayerState body=34 status=ok
// SIG undefined StaticRegisterNativesAAfrPlayerState(void)

void AAfrPlayerState::StaticRegisterNativesAAfrPlayerState(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DisableSounds_143febc20,2);
  return;
}



// FUNCTION 1405d63c0 StaticRegisterNativesABasePlayerState body=34 status=ok
// SIG undefined StaticRegisterNativesABasePlayerState(void)

void ABasePlayerState::StaticRegisterNativesABasePlayerState(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ExportAsRaw_143fecf88,3);
  return;
}



// FUNCTION 1405d63f0 StaticRegisterNativesUGProviderStoreSubsystem body=34 status=ok
// SIG undefined StaticRegisterNativesUGProviderStoreSubsystem(void)

void UGProviderStoreSubsystem::StaticRegisterNativesUGProviderStoreSubsystem(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddLocation_143feb470,3);
  return;
}



// FUNCTION 1405d6420 FUN_1405d6420 body=34 status=ok
// SIG undefined FUN_1405d6420(void)

void FUN_1405d6420(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1405d1f10();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_Startle_143febd58,1);
  return;
}



// FUNCTION 1405d6450 FUN_1405d6450 body=34 status=ok
// SIG undefined FUN_1405d6450(void)

void FUN_1405d6450(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1405d29f0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddLocation_143fed448,1);
  return;
}



// FUNCTION 1405d6480 FUN_1405d6480 body=82 status=ok
// SIG undefined FUN_1405d6480(void)

void FUN_1405d6480(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146854870 == 0) {
    uVar1 = FUN_1405d5df0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146854870 = GetStaticStruct(FUN_1405d6e30,uVar2,L"ADMSubscriberData",0x38,uVar1);
  }
  return;
}



// FUNCTION 1405d64e0 FUN_1405d64e0 body=82 status=ok
// SIG undefined FUN_1405d64e0(void)

void FUN_1405d64e0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146854758 == 0) {
    uVar1 = FUN_1405d5e00();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146854758 = GetStaticStruct(FUN_1405d6e60,uVar2,L"ActiveAmbientInstance",0x40,uVar1);
  }
  return;
}



// FUNCTION 1405d6540 FUN_1405d6540 body=82 status=ok
// SIG undefined FUN_1405d6540(void)

void FUN_1405d6540(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146854850 == 0) {
    uVar1 = FUN_1405d5e10();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146854850 = GetStaticStruct(FUN_1405d6e90,uVar2,L"ActiveLoopingSoundNotifyData",0x10,uVar1);
  }
  return;
}



// FUNCTION 1405d65a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNotifyEvent::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146854900 == 0) {
    uVar1 = FUN_1405d5e20();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146854900 = GetStaticStruct(FUN_1405d6ec0,uVar2,L"AudioPrepComponentFilter",0xa8,uVar1);
  }
  return;
}



// FUNCTION 1405d6600 FUN_1405d6600 body=82 status=ok
// SIG undefined FUN_1405d6600(void)

void FUN_1405d6600(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468548e0 == 0) {
    uVar1 = FUN_1405d5e30();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_1468548e0 = GetStaticStruct(FUN_1405d6ef0,uVar2,L"AudioPrepHitResultFilter",0x78,uVar1);
  }
  return;
}



// FUNCTION 1405d6660 FUN_1405d6660 body=82 status=ok
// SIG undefined FUN_1405d6660(void)

void FUN_1405d6660(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468548f0 == 0) {
    uVar1 = FUN_1405d5e40();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_1468548f0 =
         GetStaticStruct(FUN_1405d6f20,uVar2,L"AudioPropHitFilter_DirectionLimit",0x14,uVar1);
  }
  return;
}



// FUNCTION 1405d66c0 FUN_1405d66c0 body=82 status=ok
// SIG undefined FUN_1405d66c0(void)

void FUN_1405d66c0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146854928 == 0) {
    uVar1 = FUN_1405d5e50();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146854928 = GetStaticStruct(FUN_1405d6f50,uVar2,L"ResultGridFilter",0x18,uVar1);
  }
  return;
}



// FUNCTION 1405d6720 FUN_1405d6720 body=308 status=ok
// SIG undefined FUN_1405d6720(void)

void FUN_1405d6720(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_140590080(local_60);
  local_68 = param_2;
  FUN_1405913a0(local_60,param_3);
  local_50 = *(undefined4 *)(param_3 + 0x10);
  local_48 = *(undefined4 *)(param_3 + 0x18);
  local_44 = *(undefined4 *)(param_3 + 0x1c);
  lVar1 = *param_1;
  local_3c = *(undefined8 *)(param_3 + 0x24);
  local_40 = *(undefined1 *)(param_3 + 0x20);
  local_30 = *(undefined4 *)(param_3 + 0x30);
  local_34 = *(undefined4 *)(param_3 + 0x2c);
  local_2c = *(undefined8 *)(param_3 + 0x34);
  local_24 = *(undefined4 *)(param_3 + 0x3c);
  local_20 = param_4;
  uVar2 = FUN_14178ac60(param_1,DAT_146854620);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_68);
  FUN_1405913a0(param_3,local_60);
  *(undefined4 *)(param_3 + 0x10) = local_50;
  *(undefined4 *)(param_3 + 0x18) = local_48;
  *(undefined1 *)(param_3 + 0x20) = local_40;
  *(undefined8 *)(param_3 + 0x24) = local_3c;
  *(undefined4 *)(param_3 + 0x1c) = local_44;
  *(undefined4 *)(param_3 + 0x2c) = local_34;
  *(undefined8 *)(param_3 + 0x34) = local_2c;
  *(undefined4 *)(param_3 + 0x30) = local_30;
  *(undefined4 *)(param_3 + 0x3c) = local_24;
  FUN_140591060(local_60);
  return;
}



// FUNCTION 1405d6860 FUN_1405d6860 body=47 status=ok
// SIG undefined FUN_1405d6860(void)

longlong FUN_1405d6860(void)

{
  if (DAT_1468547d8 == 0) {
    FUN_141786440(&DAT_1468547d8,&PTR_GetPrivateStaticClass_143fe57a0);
  }
  return DAT_1468547d8;
}



// FUNCTION 1405d6890 FUN_1405d6890 body=47 status=ok
// SIG undefined FUN_1405d6890(void)

longlong FUN_1405d6890(void)

{
  if (DAT_1468547e8 == 0) {
    FUN_141786440(&DAT_1468547e8,&PTR_GetPrivateStaticClass_143fe5930);
  }
  return DAT_1468547e8;
}



// FUNCTION 1405d68c0 FUN_1405d68c0 body=47 status=ok
// SIG undefined FUN_1405d68c0(void)

longlong FUN_1405d68c0(void)

{
  if (DAT_1468547f8 == 0) {
    FUN_141786440(&DAT_1468547f8,&PTR_FUN_143fe5a60);
  }
  return DAT_1468547f8;
}



// FUNCTION 1405d68f0 FUN_1405d68f0 body=47 status=ok
// SIG undefined FUN_1405d68f0(void)

longlong FUN_1405d68f0(void)

{
  if (DAT_1468546f0 == 0) {
    FUN_141786440(&DAT_1468546f0,&PTR_FUN_143fe96b0);
  }
  return DAT_1468546f0;
}



// FUNCTION 1405d6920 FUN_1405d6920 body=47 status=ok
// SIG undefined FUN_1405d6920(void)

longlong FUN_1405d6920(void)

{
  if (DAT_1468546a8 == 0) {
    FUN_141786440(&DAT_1468546a8,&PTR_FUN_143fe83f0);
  }
  return DAT_1468546a8;
}



// FUNCTION 1405d6950 FUN_1405d6950 body=47 status=ok
// SIG undefined FUN_1405d6950(void)

longlong FUN_1405d6950(void)

{
  if (DAT_1468546b8 == 0) {
    FUN_141786440(&DAT_1468546b8,&PTR_FUN_143fe87a0);
  }
  return DAT_1468546b8;
}



// FUNCTION 1405d6980 FUN_1405d6980 body=47 status=ok
// SIG undefined FUN_1405d6980(void)

longlong FUN_1405d6980(void)

{
  if (DAT_146854728 == 0) {
    FUN_141786440(&DAT_146854728,&PTR_FUN_143fe9ff0);
  }
  return DAT_146854728;
}



// FUNCTION 1405d69b0 Z_Construct_UClass_UScreenDetectableComponent body=47 status=ok
// SIG undefined Z_Construct_UClass_UScreenDetectableComponent(void)

longlong Z_Construct_UClass_UScreenDetectableComponent(void)

{
  if (DAT_1468547c0 == 0) {
    FUN_141786440(&DAT_1468547c0,&PTR_FUN_143fe4d80);
  }
  return DAT_1468547c0;
}



// FUNCTION 1405d69e0 FUN_1405d69e0 body=47 status=ok
// SIG undefined FUN_1405d69e0(void)

longlong FUN_1405d69e0(void)

{
  if (DAT_146854860 == 0) {
    FUN_141786440(&DAT_146854860,&PTR_FUN_143fe5230);
  }
  return DAT_146854860;
}



// FUNCTION 1405d6a10 FUN_1405d6a10 body=47 status=ok
// SIG undefined FUN_1405d6a10(void)

longlong FUN_1405d6a10(void)

{
  if (DAT_146854808 == 0) {
    FUN_141786440(&DAT_146854808,&PTR_FUN_143fe5f40);
  }
  return DAT_146854808;
}



// FUNCTION 1405d6a40 FUN_1405d6a40 body=47 status=ok
// SIG undefined FUN_1405d6a40(void)

longlong FUN_1405d6a40(void)

{
  if (DAT_146854828 == 0) {
    FUN_141786440(&DAT_146854828,&PTR_FUN_143fe7110);
  }
  return DAT_146854828;
}



// FUNCTION 1405d6a70 FUN_1405d6a70 body=47 status=ok
// SIG undefined FUN_1405d6a70(void)

longlong FUN_1405d6a70(void)

{
  if (DAT_146854840 == 0) {
    FUN_141786440(&DAT_146854840,&PTR_FUN_143fea230);
  }
  return DAT_146854840;
}



// FUNCTION 1405d6aa0 FUN_1405d6aa0 body=47 status=ok
// SIG undefined FUN_1405d6aa0(void)

longlong FUN_1405d6aa0(void)

{
  if (DAT_146854890 == 0) {
    FUN_141786440(&DAT_146854890,&PTR_FUN_143fe5720);
  }
  return DAT_146854890;
}



// FUNCTION 1405d6ad0 Z_Construct_UClass_UAccelByteBlueprintsEntitlement body=47 status=ok
// SIG undefined Z_Construct_UClass_UAccelByteBlueprintsEntitlement(void)

longlong Z_Construct_UClass_UAccelByteBlueprintsEntitlement(void)

{
  if (DAT_146854880 == 0) {
    FUN_141786440(&DAT_146854880,&PTR_GetPrivateStaticClass_143fe5510);
  }
  return DAT_146854880;
}



// FUNCTION 1405d6b00 FUN_1405d6b00 body=47 status=ok
// SIG undefined FUN_1405d6b00(void)

longlong FUN_1405d6b00(void)

{
  if (DAT_1468548a8 == 0) {
    FUN_141786440(&DAT_1468548a8,&PTR_FUN_143fe5d80);
  }
  return DAT_1468548a8;
}



// FUNCTION 1405d6b30 FUN_1405d6b30 body=47 status=ok
// SIG undefined FUN_1405d6b30(void)

longlong FUN_1405d6b30(void)

{
  if (DAT_146854910 == 0) {
    FUN_141786440(&DAT_146854910,&PTR_FUN_143fe6a50);
  }
  return DAT_146854910;
}



// FUNCTION 1405d6b60 FUN_1405d6b60 body=47 status=ok
// SIG undefined FUN_1405d6b60(void)

longlong FUN_1405d6b60(void)

{
  if (DAT_146854980 == 0) {
    FUN_141786440(&DAT_146854980,&PTR_FUN_143fe79c0);
  }
  return DAT_146854980;
}



// FUNCTION 1405d6b90 FUN_1405d6b90 body=47 status=ok
// SIG undefined FUN_1405d6b90(void)

longlong FUN_1405d6b90(void)

{
  if (DAT_146854990 == 0) {
    FUN_141786440(&DAT_146854990,&PTR_FUN_143fe7d00);
  }
  return DAT_146854990;
}



// FUNCTION 1405d6bc0 FUN_1405d6bc0 body=47 status=ok
// SIG undefined FUN_1405d6bc0(void)

longlong FUN_1405d6bc0(void)

{
  if (DAT_1468549d0 == 0) {
    FUN_141786440(&DAT_1468549d0,&PTR_FUN_143fe8b50);
  }
  return DAT_1468549d0;
}



// FUNCTION 1405d6bf0 FUN_1405d6bf0 body=47 status=ok
// SIG undefined FUN_1405d6bf0(void)

longlong FUN_1405d6bf0(void)

{
  if (DAT_146854a00 == 0) {
    FUN_141786440(&DAT_146854a00,&PTR_FUN_143fe95c0);
  }
  return DAT_146854a00;
}



// FUNCTION 1405d6c20 FUN_1405d6c20 body=47 status=ok
// SIG undefined FUN_1405d6c20(void)

longlong FUN_1405d6c20(void)

{
  if (DAT_1468549f0 == 0) {
    FUN_141786440(&DAT_1468549f0,&PTR_FUN_143fe9140);
  }
  return DAT_1468549f0;
}



// FUNCTION 1405d6c50 FUN_1405d6c50 body=47 status=ok
// SIG undefined FUN_1405d6c50(void)

longlong FUN_1405d6c50(void)

{
  if (DAT_1468549e0 == 0) {
    FUN_141786440(&DAT_1468549e0,&PTR_FUN_143fe8dd0);
  }
  return DAT_1468549e0;
}



// FUNCTION 1405d6c80 FUN_1405d6c80 body=47 status=ok
// SIG undefined FUN_1405d6c80(void)

longlong FUN_1405d6c80(void)

{
  if (DAT_1468549b0 == 0) {
    FUN_141786440(&DAT_1468549b0,&PTR_FUN_143fe8360);
  }
  return DAT_1468549b0;
}



// FUNCTION 1405d6cb0 FUN_1405d6cb0 body=47 status=ok
// SIG undefined FUN_1405d6cb0(void)

longlong FUN_1405d6cb0(void)

{
  if (DAT_1468549a0 == 0) {
    FUN_141786440(&DAT_1468549a0,&PTR_FUN_143fe80c0);
  }
  return DAT_1468549a0;
}



// FUNCTION 1405d6ce0 FUN_1405d6ce0 body=47 status=ok
// SIG undefined FUN_1405d6ce0(void)

longlong FUN_1405d6ce0(void)

{
  if (DAT_1468549c0 == 0) {
    FUN_141786440(&DAT_1468549c0,&PTR_FUN_143fe8730);
  }
  return DAT_1468549c0;
}



// FUNCTION 1405d6d10 FUN_1405d6d10 body=47 status=ok
// SIG undefined FUN_1405d6d10(void)

longlong FUN_1405d6d10(void)

{
  if (DAT_146854a10 == 0) {
    FUN_141786440(&DAT_146854a10,&PTR_FUN_143fe9800);
  }
  return DAT_146854a10;
}



// FUNCTION 1405d6d40 FUN_1405d6d40 body=47 status=ok
// SIG undefined FUN_1405d6d40(void)

longlong FUN_1405d6d40(void)

{
  if (DAT_146854a20 == 0) {
    FUN_141786440(&DAT_146854a20,&PTR_FUN_143fe9ad0);
  }
  return DAT_146854a20;
}



// FUNCTION 1405d6d70 FUN_1405d6d70 body=47 status=ok
// SIG undefined FUN_1405d6d70(void)

longlong FUN_1405d6d70(void)

{
  if (DAT_1468547d0 == 0) {
    FUN_1417866a0(&DAT_1468547d0,&PTR_Z_Construct_UPackage__Script_Engine_1462087e0);
  }
  return DAT_1468547d0;
}



// FUNCTION 1405d6da0 FUN_1405d6da0 body=47 status=ok
// SIG undefined FUN_1405d6da0(void)

longlong FUN_1405d6da0(void)

{
  if (DAT_146854920 == 0) {
    FUN_1417866a0(&DAT_146854920,&PTR_Z_Construct_UPackage__Script_Engine_1462088d0);
  }
  return DAT_146854920;
}



// FUNCTION 1405d6dd0 FUN_1405d6dd0 body=47 status=ok
// SIG undefined FUN_1405d6dd0(void)

longlong FUN_1405d6dd0(void)

{
  if (DAT_1468548a0 == 0) {
    FUN_1417866a0(&DAT_1468548a0,&PTR_Z_Construct_UPackage__Script_Engine_146208880);
  }
  return DAT_1468548a0;
}



// FUNCTION 1405d6e00 FUN_1405d6e00 body=47 status=ok
// SIG undefined FUN_1405d6e00(void)

longlong FUN_1405d6e00(void)

{
  if (DAT_146854838 == 0) {
    FUN_1417866a0(&DAT_146854838,&PTR_Z_Construct_UPackage__Script_Engine_146208830);
  }
  return DAT_146854838;
}



// FUNCTION 1405d6e30 FUN_1405d6e30 body=47 status=ok
// SIG undefined FUN_1405d6e30(void)

longlong FUN_1405d6e30(void)

{
  if (DAT_146854878 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146854878,&PTR_Z_Construct_UPackage__Script_Engine_146207300);
  }
  return DAT_146854878;
}



// FUNCTION 1405d6e60 FUN_1405d6e60 body=47 status=ok
// SIG undefined FUN_1405d6e60(void)

longlong FUN_1405d6e60(void)

{
  if (DAT_146854760 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146854760,&PTR_Z_Construct_UPackage__Script_Engine_146206020);
  }
  return DAT_146854760;
}



// FUNCTION 1405d6e90 FUN_1405d6e90 body=47 status=ok
// SIG undefined FUN_1405d6e90(void)

longlong FUN_1405d6e90(void)

{
  if (DAT_146854858 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146854858,&PTR_Z_Construct_UPackage__Script_Engine_146206f90);
  }
  return DAT_146854858;
}



// FUNCTION 1405d6ec0 FUN_1405d6ec0 body=47 status=ok
// SIG undefined FUN_1405d6ec0(void)

longlong FUN_1405d6ec0(void)

{
  if (DAT_146854908 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146854908,&PTR_Z_Construct_UPackage__Script_Engine_1462081c0);
  }
  return DAT_146854908;
}



// FUNCTION 1405d6ef0 FUN_1405d6ef0 body=47 status=ok
// SIG undefined FUN_1405d6ef0(void)

longlong FUN_1405d6ef0(void)

{
  if (DAT_1468548e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468548e8,&PTR_Z_Construct_UPackage__Script_Engine_146207bb0);
  }
  return DAT_1468548e8;
}



// FUNCTION 1405d6f20 FUN_1405d6f20 body=47 status=ok
// SIG undefined FUN_1405d6f20(void)

longlong FUN_1405d6f20(void)

{
  if (DAT_1468548f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468548f8,&PTR_Z_Construct_UPackage__Script_Engine_146207cb0);
  }
  return DAT_1468548f8;
}



// FUNCTION 1405d6f50 FUN_1405d6f50 body=47 status=ok
// SIG undefined FUN_1405d6f50(void)

longlong FUN_1405d6f50(void)

{
  if (DAT_146854930 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146854930,&PTR_Z_Construct_UPackage__Script_Engine_146208350);
  }
  return DAT_146854930;
}



// FUNCTION 1405d6f80 FUN_1405d6f80 body=221 status=ok
// SIG undefined FUN_1405d6f80(void)

void FUN_1405d6f80(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 local_res10 [2];
  undefined1 local_28 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res10[0] = 0;
  puVar2 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FOutputDevice::CanBeUsedOnAnyThread(param_1,puVar2,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1405d7060 execSetBuildGuideStartEnd body=281 status=ok
// SIG undefined execSetBuildGuideStartEnd(void)

void AFGBuildGuide::execSetBuildGuideStartEnd(long param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_28 = local_48;
  local_18 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_40;
  local_10 = local_30;
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 1405d71e0 execPanTo body=219 status=ok
// SIG undefined execPanTo(void)

void AMiniMapDisplayActor::execPanTo(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 local_res10 [2];
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  local_res10[0] = 0;
  puVar1 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1405cdd60(param_1,puVar1,local_res10[0]);
  return;
}



// FUNCTION 1405d72d0 FUN_1405d72d0 body=162 status=ok
// SIG undefined FUN_1405d72d0(void)

longlong FUN_1405d72d0(void)

{
  if (DAT_146854ce0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"GbxAudioBlueprintLibrary",&DAT_146854ce0,FUN_1405d9720,0x28,
                  0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146854ce0;
}



// FUNCTION 1405d7380 FUN_1405d7380 body=47 status=ok
// SIG undefined FUN_1405d7380(void)

longlong FUN_1405d7380(void)

{
  if (DAT_146854cd8 == 0) {
    FUN_141786440(&DAT_146854cd8,&PTR_FUN_143fedbb0);
  }
  return DAT_146854cd8;
}



// FUNCTION 1405d73b0 FUN_1405d73b0 body=47 status=ok
// SIG undefined FUN_1405d73b0(void)

longlong FUN_1405d73b0(void)

{
  if (DAT_146854cb0 == 0) {
    FUN_141786a30(&DAT_146854cb0,&PTR_FUN_14620abf0);
  }
  return DAT_146854cb0;
}



// FUNCTION 1405d73e0 FUN_1405d73e0 body=47 status=ok
// SIG undefined FUN_1405d73e0(void)

longlong FUN_1405d73e0(void)

{
  if (DAT_146854cb8 == 0) {
    FUN_141786a30(&DAT_146854cb8,&PTR_FUN_14620ad30);
  }
  return DAT_146854cb8;
}



// FUNCTION 1405d7410 FUN_1405d7410 body=47 status=ok
// SIG undefined FUN_1405d7410(void)

longlong FUN_1405d7410(void)

{
  if (DAT_146854cc0 == 0) {
    FUN_141786a30(&DAT_146854cc0,&PTR_FUN_14620ae70);
  }
  return DAT_146854cc0;
}



// FUNCTION 1405d7440 FUN_1405d7440 body=47 status=ok
// SIG undefined FUN_1405d7440(void)

longlong FUN_1405d7440(void)

{
  if (DAT_146854cc8 == 0) {
    FUN_141786a30(&DAT_146854cc8,&PTR_FUN_14620af30);
  }
  return DAT_146854cc8;
}



// FUNCTION 1405d7470 FUN_1405d7470 body=47 status=ok
// SIG undefined FUN_1405d7470(void)

longlong FUN_1405d7470(void)

{
  if (DAT_146854cd0 == 0) {
    FUN_141786a30(&DAT_146854cd0,&PTR_FUN_14620aff0);
  }
  return DAT_146854cd0;
}



// FUNCTION 1405d74b0 FUN_1405d74b0 body=162 status=ok
// SIG undefined FUN_1405d74b0(void)

longlong FUN_1405d74b0(void)

{
  if (DAT_146854cf0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"GbxAudioGlobalsData",&DAT_146854cf0,FUN_140447710,0x1e8,
                  0x10000000,0,L"Engine",&LAB_1405d8800,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146854cf0;
}



// FUNCTION 1405d7570 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTwitchInteractivitySettings::GetPrivateStaticClass(void)

{
  if (DAT_146854d00 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_146854d00,FUN_140447710,0x68,
                  0x10000006,0,L"Game",&LAB_1405d8820,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146854d00;
}



// FUNCTION 1405d7610 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AUGAreaEffectActor::GetPrivateStaticClass(void)

{
  if (DAT_146854c10 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"DistributedAmbientSound",&DAT_146854c10,
                  StaticRegisterNativesAUGAreaEffectActor,0x4e8,0x10000000,0,L"Engine",
                  &LAB_1405d86d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146854c10;
}



// FUNCTION 1405d76d0 FUN_1405d76d0 body=162 status=ok
// SIG undefined FUN_1405d76d0(void)

longlong FUN_1405d76d0(void)

{
  if (DAT_146854d20 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"LightAudioComponent",&DAT_146854d20,FUN_1405d9750,0x370,
                  0x10000000,0,L"Engine",&LAB_1405d8840,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_146854d20;
}



// FUNCTION 1405d7780 FUN_1405d7780 body=47 status=ok
// SIG undefined FUN_1405d7780(void)

longlong FUN_1405d7780(void)

{
  if (DAT_146854c08 == 0) {
    FUN_141786440(&DAT_146854c08,&PTR_GetPrivateStaticClass_143feeb20);
  }
  return DAT_146854c08;
}



// FUNCTION 1405d77b0 FUN_1405d77b0 body=47 status=ok
// SIG undefined FUN_1405d77b0(void)

longlong FUN_1405d77b0(void)

{
  if (DAT_146854bf8 == 0) {
    FUN_141786a30(&DAT_146854bf8,&PTR_FUN_146209a30);
  }
  return DAT_146854bf8;
}



// FUNCTION 1405d77e0 FUN_1405d77e0 body=47 status=ok
// SIG undefined FUN_1405d77e0(void)

longlong FUN_1405d77e0(void)

{
  if (DAT_146854c00 == 0) {
    FUN_141786a30(&DAT_146854c00,&PTR_FUN_146209a70);
  }
  return DAT_146854c00;
}



// FUNCTION 1405d7820 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ABasePlayerState::GetPrivateStaticClass(void)

{
  if (DAT_146854c38 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"FluidSimExampleZone",&DAT_146854c38,
                  StaticRegisterNativesABasePlayerState,0x458,0x10000000,0,L"Engine",&LAB_1405d4700,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146854c38;
}



// FUNCTION 1405d78d0 FUN_1405d78d0 body=47 status=ok
// SIG undefined FUN_1405d78d0(void)

longlong FUN_1405d78d0(void)

{
  if (DAT_146854c30 == 0) {
    FUN_141786440(&DAT_146854c30,&PTR_GetPrivateStaticClass_143feee80);
  }
  return DAT_146854c30;
}



// FUNCTION 1405d7900 FUN_1405d7900 body=47 status=ok
// SIG undefined FUN_1405d7900(void)

longlong FUN_1405d7900(void)

{
  if (DAT_146854c18 == 0) {
    FUN_141786a30(&DAT_146854c18,&PTR_FUN_146209dd0);
  }
  return DAT_146854c18;
}



// FUNCTION 1405d7930 FUN_1405d7930 body=47 status=ok
// SIG undefined FUN_1405d7930(void)

longlong FUN_1405d7930(void)

{
  if (DAT_146854c20 == 0) {
    FUN_141786a30(&DAT_146854c20,&PTR_FUN_146209e10);
  }
  return DAT_146854c20;
}



// FUNCTION 1405d7960 FUN_1405d7960 body=47 status=ok
// SIG undefined FUN_1405d7960(void)

longlong FUN_1405d7960(void)

{
  if (DAT_146854c28 == 0) {
    FUN_141786a30(&DAT_146854c28,&PTR_FUN_146209e50);
  }
  return DAT_146854c28;
}



// FUNCTION 1405d79a0 FUN_1405d79a0 body=162 status=ok
// SIG undefined FUN_1405d79a0(void)

longlong FUN_1405d79a0(void)

{
  if (DAT_146854bc0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"CharacterSoundLogicComponent",&DAT_146854bc0,FUN_140447710,
                  0x338,0x10000001,0,L"Engine",&LAB_1405d8750,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146854bc0;
}



// FUNCTION 1405d7a50 FUN_1405d7a50 body=162 status=ok
// SIG undefined FUN_1405d7a50(void)

longlong FUN_1405d7a50(void)

{
  if (DAT_146854b80 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"CharacterSoundData",&DAT_146854b80,FUN_1405d96c0,0xa0,
                  0x10000000,0,L"Engine",FUN_1405d86f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146854b80;
}



// FUNCTION 1405d7b00 Z_Construct_UPackage__Script_Engine body=47 status=ok
// SIG undefined Z_Construct_UPackage__Script_Engine(void)

longlong Z_Construct_UPackage__Script_Engine(void)

{
  if (DAT_146854ca8 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146854ca8,&PTR_s__Script_GbxAudio_143ff1d30);
  }
  return DAT_146854ca8;
}



// FUNCTION 1405d7b30 FUN_1405d7b30 body=47 status=ok
// SIG undefined FUN_1405d7b30(void)

longlong FUN_1405d7b30(void)

{
  if (DAT_146854b78 == 0) {
    FUN_141786440(&DAT_146854b78,&PTR_FUN_143fefc00);
  }
  return DAT_146854b78;
}



// FUNCTION 1405d7b60 FUN_1405d7b60 body=47 status=ok
// SIG undefined FUN_1405d7b60(void)

longlong FUN_1405d7b60(void)

{
  if (DAT_146854b70 == 0) {
    FUN_141786a30(&DAT_146854b70,&PTR_FUN_146209250);
  }
  return DAT_146854b70;
}



// FUNCTION 1405d7b90 FUN_1405d7b90 body=53 status=ok
// SIG undefined FUN_1405d7b90(void)

void FUN_1405d7b90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_143ff0ef0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405d7bd0 FUN_1405d7bd0 body=47 status=ok
// SIG undefined FUN_1405d7bd0(void)

longlong FUN_1405d7bd0(void)

{
  if (DAT_146854d18 == 0) {
    FUN_141786440(&DAT_146854d18,&PTR_FUN_143fef3d0);
  }
  return DAT_146854d18;
}



// FUNCTION 1405d7c00 FUN_1405d7c00 body=47 status=ok
// SIG undefined FUN_1405d7c00(void)

longlong FUN_1405d7c00(void)

{
  if (DAT_146854d08 == 0) {
    FUN_141786a30(&DAT_146854d08,&PTR_FUN_14620c0b0);
  }
  return DAT_146854d08;
}



// FUNCTION 1405d7c30 FUN_1405d7c30 body=47 status=ok
// SIG undefined FUN_1405d7c30(void)

longlong FUN_1405d7c30(void)

{
  if (DAT_146854d10 == 0) {
    FUN_141786a30(&DAT_146854d10,&PTR_FUN_14620c230);
  }
  return DAT_146854d10;
}



// FUNCTION 1405d7c60 FUN_1405d7c60 body=53 status=ok
// SIG undefined FUN_1405d7c60(void)

void FUN_1405d7c60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_143ff1008;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405d7ca0 FUN_1405d7ca0 body=53 status=ok
// SIG undefined FUN_1405d7ca0(void)

void FUN_1405d7ca0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_143ff1120;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405d7cf0 FUN_1405d7cf0 body=53 status=ok
// SIG undefined FUN_1405d7cf0(void)

void FUN_1405d7cf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &PTR_FUN_143ff1238;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405d7d30 FUN_1405d7d30 body=53 status=ok
// SIG undefined FUN_1405d7d30(void)

void FUN_1405d7d30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_143ff1478;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405d7d70 FUN_1405d7d70 body=53 status=ok
// SIG undefined FUN_1405d7d70(void)

void FUN_1405d7d70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_143ff1350;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405d7db0 FUN_1405d7db0 body=53 status=ok
// SIG undefined FUN_1405d7db0(void)

void FUN_1405d7db0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_143ff1590;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405d7e10 FUN_1405d7e10 body=162 status=ok
// SIG undefined FUN_1405d7e10(void)

longlong FUN_1405d7e10(void)

{
  if (DAT_146854bd8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"CharacterSoundTag",&DAT_146854bd8,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",FUN_1405d8760,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146854bd8;
}



// FUNCTION 1405d7ec0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPathFollowingAgentInterface::GetPrivateStaticClass(void)

{
  if (DAT_146854b90 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"CharacterSoundInterface",&DAT_146854b90,FUN_140447710,0x28,
                  0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146854b90;
}



// FUNCTION 1405d7f80 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGHUDGearBarUW::GetPrivateStaticClass(void)

{
  if (DAT_146854ca0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"FoleyMainComponent",&DAT_146854ca0,
                  StaticRegisterNativesUUGHUDGearBarUW,0x278,0x10000000,0,L"Engine",&LAB_1405d87b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146854ca0;
}



// FUNCTION 1405d8040 FUN_1405d8040 body=53 status=ok
// SIG undefined FUN_1405d8040(void)

void FUN_1405d8040(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_143ff1948;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405d8080 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGCombatTextWidget::GetPrivateStaticClass(void)

{
  if (DAT_146854c48 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"FoleyAccessoryComponent",&DAT_146854c48,FUN_140447710,800,
                  0x10000000,0,L"Engine",&LAB_1405d8790,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_146854c48;
}



// FUNCTION 1405d8140 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPathFollowingAgentInterface::GetPrivateStaticClass(void)

{
  if (DAT_146854c58 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"FoleyImplementerInterface",&DAT_146854c58,FUN_140447710,0x28
                  ,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146854c58;
}



// FUNCTION 1405d8200 FUN_1405d8200 body=47 status=ok
// SIG undefined FUN_1405d8200(void)

longlong FUN_1405d8200(void)

{
  if (DAT_146854c98 == 0) {
    FUN_141786440(&DAT_146854c98,&PTR_GetPrivateStaticClass_143fed570);
  }
  return DAT_146854c98;
}



// FUNCTION 1405d8230 FUN_1405d8230 body=47 status=ok
// SIG undefined FUN_1405d8230(void)

longlong FUN_1405d8230(void)

{
  if (DAT_146854c80 == 0) {
    FUN_141786a30(&DAT_146854c80,&PTR_FUN_14620a370);
  }
  return DAT_146854c80;
}



// FUNCTION 1405d8260 FUN_1405d8260 body=47 status=ok
// SIG undefined FUN_1405d8260(void)

longlong FUN_1405d8260(void)

{
  if (DAT_146854c88 == 0) {
    FUN_141786a30(&DAT_146854c88,&PTR_FUN_14620a3f0);
  }
  return DAT_146854c88;
}



// FUNCTION 1405d8290 FUN_1405d8290 body=47 status=ok
// SIG undefined FUN_1405d8290(void)

longlong FUN_1405d8290(void)

{
  if (DAT_146854c90 == 0) {
    FUN_141786a30(&DAT_146854c90,&PTR_FUN_14620a4e0);
  }
  return DAT_146854c90;
}



// FUNCTION 1405d82c0 FUN_1405d82c0 body=53 status=ok
// SIG undefined FUN_1405d82c0(void)

void FUN_1405d82c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_143ff1ad0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405d8300 FUN_1405d8300 body=53 status=ok
// SIG undefined FUN_1405d8300(void)

void FUN_1405d8300(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_143ff1be8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405d8340 FUN_1405d8340 body=906 status=ok
// SIG undefined FUN_1405d8340(void)

int * FUN_1405d8340(longlong *param_1,int *param_2,ulonglong *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulonglong *_Src;
  uint *puVar17;
  int iVar18;
  bool bVar19;
  
  iVar18 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar13 * 0x30);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x30) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar13;
  lVar9 = (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar17 = (uint *)((longlong)plVar11 + lVar9);
  *puVar17 = *puVar17 | 1 << ((byte)iVar13 & 0x1f);
  uVar5 = param_3[1];
  lVar10 = (longlong)iVar13 * 0x30;
  _Src = (ulonglong *)(*param_1 + lVar10);
  *_Src = *param_3;
  _Src[1] = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar5 = param_3[3];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(int *)(_Src + 2) = (int)param_3[2];
  *(undefined4 *)((longlong)_Src + 0x14) = uVar3;
  *(int *)(_Src + 3) = (int)uVar5;
  *(undefined4 *)((longlong)_Src + 0x1c) = uVar4;
  bVar19 = false;
  _Src[4] = param_3[4];
  *(undefined4 *)(_Src + 5) = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar8 != 1) {
    iVar7 = iVar18;
    if (iVar8 != 0) {
      iVar15 = (int)(*_Src >> 4);
      uVar14 = 0x9e3779b9U - iVar15 ^ iVar15 << 8;
      uVar12 = -(uVar14 + iVar15) ^ uVar14 >> 0xd;
      uVar16 = (iVar15 - uVar14) - uVar12 ^ uVar12 >> 0xc;
      uVar14 = (uVar14 - uVar16) - uVar12 ^ uVar16 << 0x10;
      uVar12 = (uVar12 - uVar14) - uVar16 ^ uVar14 >> 5;
      uVar16 = (uVar16 - uVar14) - uVar12 ^ uVar12 >> 3;
      uVar14 = (uVar14 - uVar16) - uVar12 ^ uVar16 << 10;
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      iVar15 = *(int *)((longlong)plVar11 +
                       (((longlong)(int)((uVar12 - uVar14) - uVar16) ^ (ulonglong)(uVar14 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar15 != -1) {
        do {
          iVar7 = iVar15;
          if (*(ulonglong *)(*param_1 + (longlong)iVar15 * 0x30) == *_Src) break;
          iVar15 = *(int *)(*param_1 + 0x28 + (longlong)iVar15 * 0x30);
          iVar7 = iVar18;
        } while (iVar15 != -1);
      }
    }
    bVar19 = iVar7 != -1;
    if (bVar19) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar7 * 0x30 + *param_1),_Src,0x28);
      bVar2 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar13;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar10 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar18 = (int)param_1[6];
      }
      *(int *)(lVar10 + 4 + lVar1) = iVar18;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar11 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar17 = (uint *)((longlong)plVar11 + lVar9);
      *puVar17 = *puVar17 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1405d86a0;
    }
  }
  cVar6 = TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar8,0);
  if (cVar6 == '\0') {
    iVar18 = (int)(*_Src >> 4);
    uVar14 = 0x9e3779b9U - iVar18 ^ iVar18 << 8;
    uVar16 = -(uVar14 + iVar18) ^ uVar14 >> 0xd;
    uVar12 = (iVar18 - uVar14) - uVar16 ^ uVar16 >> 0xc;
    uVar14 = (uVar14 - uVar12) - uVar16 ^ uVar12 << 0x10;
    uVar16 = (uVar16 - uVar14) - uVar12 ^ uVar14 >> 5;
    uVar12 = (uVar12 - uVar14) - uVar16 ^ uVar16 >> 3;
    uVar14 = (uVar14 - uVar12) - uVar16 ^ uVar12 << 10;
    uVar12 = ((uVar16 - uVar14) - uVar12 ^ uVar14 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x2c) = uVar12;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 5) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
LAB_1405d86a0:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar19;
  }
  return param_2;
}



// FUNCTION 1405d86f0 FUN_1405d86f0 body=96 status=ok
// SIG undefined FUN_1405d86f0(void)

void FUN_1405d86f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_143ff0c58;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
    puVar1[0x10] = 0;
    *(undefined4 *)(puVar1 + 0x11) = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  return;
}



// FUNCTION 1405d8760 FUN_1405d8760 body=48 status=ok
// SIG undefined FUN_1405d8760(void)

void FUN_1405d8760(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x3f800000;
    *puVar1 = &PTR_FUN_143ff16a8;
  }
  return;
}



// FUNCTION 1405d87d0 FUN_1405d87d0 body=41 status=ok
// SIG undefined FUN_1405d87d0(void)

void FUN_1405d87d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(puVar1,param_1);
    *puVar1 = &PTR_FUN_143ff1d58;
  }
  return;
}



// FUNCTION 1405d8850 ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1405d88c0 operator= body=506 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction,0>,FDefaultSetAllocator>
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
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = ConditionalRehash(param_1,iVar9,1);
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1405d8a1b;
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
LAB_1405d8a1b:
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
        FUN_1405d8340(param_1,local_res8,(longlong)iStack_4c * 0x30 + *param_2,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 1405d8ac0 FUN_1405d8ac0 body=119 status=ok
// SIG undefined FUN_1405d8ac0(void)

longlong FUN_1405d8ac0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x40);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1405d8b40 FUN_1405d8b40 body=52 status=ok
// SIG undefined FUN_1405d8b40(void)

undefined8 FUN_1405d8b40(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1405d8b80 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction,0>,FDefaultSetAllocator>
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
      TSet<TTuple<TSharedPtr<SWidget,0>,FText>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,0>,FText,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1405d8c90 FUN_1405d8c90 body=69 status=ok
// SIG undefined FUN_1405d8c90(void)

void FUN_1405d8c90(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  FGuid::NewGuid(param_2 + 0x14);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  param_2[0x40] = 0;
  *(undefined4 *)(param_2 + 0x44) = 0xbf800000;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  return;
}



// FUNCTION 1405d8ce0 FUN_1405d8ce0 body=86 status=ok
// SIG undefined FUN_1405d8ce0(void)

void FUN_1405d8ce0(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140590080(param_2 + 2);
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[8] = 0;
  return;
}



// FUNCTION 1405d8e40 FUN_1405d8e40 body=121 status=ok
// SIG undefined FUN_1405d8e40(void)

undefined8 FUN_1405d8e40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x10;
    do {
      puVar1 = (undefined4 *)(param_3 + -0x10 + param_2);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(param_2 + -0x10) = *puVar1;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      *(undefined4 *)(param_2 + -8) = uVar4;
      *(undefined4 *)(param_2 + -4) = uVar5;
      FUN_1405913a0(param_2,param_3 + param_2);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10 + param_2);
      puVar2 = (undefined8 *)(param_3 + 0x18 + param_2);
      uVar6 = puVar2[1];
      *(undefined8 *)(param_2 + 0x18) = *puVar2;
      *(undefined8 *)(param_2 + 0x20) = uVar6;
      puVar1 = (undefined4 *)(param_3 + 0x28 + param_2);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(param_2 + 0x28) = *puVar1;
      *(undefined4 *)(param_2 + 0x2c) = uVar3;
      *(undefined4 *)(param_2 + 0x30) = uVar4;
      *(undefined4 *)(param_2 + 0x34) = uVar5;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405d8ec0 FUN_1405d8ec0 body=103 status=ok
// SIG undefined FUN_1405d8ec0(void)

undefined8 FUN_1405d8ec0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8 + param_2);
      FUN_1405913a0(param_2,param_3 + param_2);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10 + param_2);
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405d8f30 FUN_1405d8f30 body=281 status=ok
// SIG undefined FUN_1405d8f30(void)

undefined8 FUN_1405d8f30(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Src;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined8 *)(param_3 + 8);
    do {
      *param_2 = puVar4[-1];
      puVar1 = param_2 + 3;
      param_2[1] = *puVar4;
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar4 + 1);
      *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)puVar4 + 0xc);
      if (puVar1 != puVar4 + 2) {
        iVar3 = *(int *)(puVar4 + 3);
        _Src = (void *)puVar4[2];
        *(int *)(param_2 + 4) = iVar3;
        if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0x24) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x24) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar3);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 << 3);
        }
      }
      param_2[5] = puVar4[4];
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar4 + 5);
      *(undefined8 *)((longlong)param_2 + 0x34) = *(undefined8 *)((longlong)puVar4 + 0x2c);
      *(undefined4 *)((longlong)param_2 + 0x3c) = *(undefined4 *)((longlong)puVar4 + 0x34);
      *(undefined1 *)(param_2 + 8) = *(undefined1 *)(puVar4 + 7);
      *(undefined1 *)((longlong)param_2 + 0x41) = *(undefined1 *)((longlong)puVar4 + 0x39);
      *(undefined1 *)((longlong)param_2 + 0x42) = *(undefined1 *)((longlong)puVar4 + 0x3a);
      puVar2 = (undefined4 *)((longlong)puVar4 + 0x3c);
      puVar4 = puVar4 + 9;
      *(undefined4 *)((longlong)param_2 + 0x44) = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 9;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405d9050 FUN_1405d9050 body=71 status=ok
// SIG undefined FUN_1405d9050(void)

undefined1 FUN_1405d9050(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction,0>,FDefaultSetAllocator>
      ::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405d90a0 FUN_1405d90a0 body=158 status=ok
// SIG undefined FUN_1405d90a0(void)

undefined8 FUN_1405d90a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar1 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar1;
      if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        FUN_1405d95e0(param_2,iVar1);
        _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 * 0x78);
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 1405d9160 FUN_1405d9160 body=43 status=ok
// SIG undefined FUN_1405d9160(void)

void FUN_1405d9160(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_2);
  return;
}



// FUNCTION 1405d9190 FUN_1405d9190 body=85 status=ok
// SIG undefined FUN_1405d9190(void)

void FUN_1405d9190(void)

{
  if (DAT_146854a38 == 0) {
    if (DAT_146854ca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146854ca8,&PTR_s__Script_GbxAudio_143ff1d30);
    }
    DAT_146854a38 = GetStaticEnum(FUN_1405d9dd0,DAT_146854ca8,L"ECharacterSoundType");
  }
  return;
}



// FUNCTION 1405d91f0 FUN_1405d91f0 body=85 status=ok
// SIG undefined FUN_1405d91f0(void)

void FUN_1405d91f0(void)

{
  if (DAT_146854a30 == 0) {
    if (DAT_146854ca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146854ca8,&PTR_s__Script_GbxAudio_143ff1d30);
    }
    DAT_146854a30 = GetStaticEnum(FUN_1405d9e00,DAT_146854ca8,L"EDistributedSoundMode");
  }
  return;
}



// FUNCTION 1405d9250 FUN_1405d9250 body=6 status=ok
// SIG undefined FUN_1405d9250(void)

undefined8 FUN_1405d9250(void)

{
  return 0x2fb7dff7;
}



// FUNCTION 1405d9260 FUN_1405d9260 body=6 status=ok
// SIG undefined FUN_1405d9260(void)

undefined8 FUN_1405d9260(void)

{
  return 0x11611d45;
}



// FUNCTION 1405d9270 FUN_1405d9270 body=6 status=ok
// SIG undefined FUN_1405d9270(void)

undefined8 FUN_1405d9270(void)

{
  return 0x88ab2c78;
}



// FUNCTION 1405d9280 FUN_1405d9280 body=6 status=ok
// SIG undefined FUN_1405d9280(void)

undefined8 FUN_1405d9280(void)

{
  return 0x425a3256;
}



// FUNCTION 1405d9290 FUN_1405d9290 body=6 status=ok
// SIG undefined FUN_1405d9290(void)

undefined8 FUN_1405d9290(void)

{
  return 0x208cfce3;
}



// FUNCTION 1405d92a0 FUN_1405d92a0 body=6 status=ok
// SIG undefined FUN_1405d92a0(void)

undefined8 FUN_1405d92a0(void)

{
  return 0xc8271e6;
}



// FUNCTION 1405d92b0 FUN_1405d92b0 body=6 status=ok
// SIG undefined FUN_1405d92b0(void)

undefined8 FUN_1405d92b0(void)

{
  return 0x88549f07;
}



// FUNCTION 1405d92c0 FUN_1405d92c0 body=6 status=ok
// SIG undefined FUN_1405d92c0(void)

undefined8 FUN_1405d92c0(void)

{
  return 0xdcfa947a;
}



// FUNCTION 1405d92d0 FUN_1405d92d0 body=6 status=ok
// SIG undefined FUN_1405d92d0(void)

undefined8 FUN_1405d92d0(void)

{
  return 0x71f5bf1e;
}



// FUNCTION 1405d92e0 FUN_1405d92e0 body=6 status=ok
// SIG undefined FUN_1405d92e0(void)

undefined8 FUN_1405d92e0(void)

{
  return 0x2fd795d9;
}



// FUNCTION 1405d9360 Rehash body=635 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TSharedPtr<SWidget,0>,FText>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,0>,FText,0>,FDefaultSetAllocator>
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
  ulonglong *puVar15;
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
        if (bVar3) goto LAB_1405d949f;
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
LAB_1405d949f:
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
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x30 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x2c) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 5) =
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



// FUNCTION 1405d95e0 FUN_1405d95e0 body=124 status=ok
// SIG undefined FUN_1405d95e0(void)

void FUN_1405d95e0(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x78,0);
    iVar3 = (int)(uVar1 / 0x78);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x78,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1405d9660 StaticRegisterNativesAUGAreaEffectActor body=34 status=ok
// SIG undefined StaticRegisterNativesAUGAreaEffectActor(void)

void AUGAreaEffectActor::StaticRegisterNativesAUGAreaEffectActor(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DoFindNewLocationsAndRebuild_143ff1a80,2)
  ;
  return;
}



// FUNCTION 1405d9690 StaticRegisterNativesABasePlayerState body=34 status=ok
// SIG undefined StaticRegisterNativesABasePlayerState(void)

void ABasePlayerState::StaticRegisterNativesABasePlayerState(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ApplyToOtherSim_143ff1aa0,3);
  return;
}



// FUNCTION 1405d96c0 FUN_1405d96c0 body=34 status=ok
// SIG undefined FUN_1405d96c0(void)

void FUN_1405d96c0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1405d7a50();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_RefreshAll_143ff1468,1);
  return;
}



// FUNCTION 1405d96f0 StaticRegisterNativesUUGHUDGearBarUW body=34 status=ok
// SIG undefined StaticRegisterNativesUUGHUDGearBarUW(void)

void UUGHUDGearBarUW::StaticRegisterNativesUUGHUDGearBarUW(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_PlayFootstep_143ff1d00,3);
  return;
}



// FUNCTION 1405d9720 FUN_1405d9720 body=34 status=ok
// SIG undefined FUN_1405d9720(void)

void FUN_1405d9720(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1405d72d0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ApplyListenerAudioEffect_143ff1fd0,5);
  return;
}



// FUNCTION 1405d9750 FUN_1405d9750 body=34 status=ok
// SIG undefined FUN_1405d9750(void)

void FUN_1405d9750(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1405d76d0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_PostWwiseEvent_143ff2020,2);
  return;
}



// FUNCTION 1405d9780 FUN_1405d9780 body=113 status=ok
// SIG undefined FUN_1405d9780(void)

void FUN_1405d9780(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146854b60 == 0) {
    if (DAT_146854ca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146854ca8,&PTR_s__Script_GbxAudio_143ff1d30);
    }
    lVar1 = DAT_146854ca8;
    uVar2 = FUN_1405d9250();
    DAT_146854b60 = GetStaticStruct(FUN_1405d9e30,lVar1,L"CharacterSoundImplementation",0x20,uVar2);
  }
  return;
}



// FUNCTION 1405d9800 FUN_1405d9800 body=113 status=ok
// SIG undefined FUN_1405d9800(void)

void FUN_1405d9800(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146854b40 == 0) {
    if (DAT_146854ca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146854ca8,&PTR_s__Script_GbxAudio_143ff1d30);
    }
    lVar1 = DAT_146854ca8;
    uVar2 = FUN_1405d9260();
    DAT_146854b40 = GetStaticStruct(FUN_1405d9e60,lVar1,L"CharacterSoundLoopDetails",0x20,uVar2);
  }
  return;
}



// FUNCTION 1405d9880 FUN_1405d9880 body=113 status=ok
// SIG undefined FUN_1405d9880(void)

void FUN_1405d9880(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146854be0 == 0) {
    if (DAT_146854ca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146854ca8,&PTR_s__Script_GbxAudio_143ff1d30);
    }
    lVar1 = DAT_146854ca8;
    uVar2 = FUN_1405d9280();
    DAT_146854be0 = GetStaticStruct(FUN_1405d9e90,lVar1,L"CharacterVocalLoop",0x28,uVar2);
  }
  return;
}



// FUNCTION 1405d9900 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNodeHierarchyWithUserData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146854b50 == 0) {
    if (DAT_146854ca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146854ca8,&PTR_s__Script_GbxAudio_143ff1d30);
    }
    lVar1 = DAT_146854ca8;
    uVar2 = FUN_1405d9270();
    DAT_146854b50 =
         GetStaticStruct(FUN_1405d9ec0,lVar1,L"CharacterVocalLoopImplementation",0x78,uVar2);
  }
  return;
}



// FUNCTION 1405d9980 FUN_1405d9980 body=113 status=ok
// SIG undefined FUN_1405d9980(void)

void FUN_1405d9980(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146854ba8 == 0) {
    if (DAT_146854ca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146854ca8,&PTR_s__Script_GbxAudio_143ff1d30);
    }
    lVar1 = DAT_146854ca8;
    uVar2 = FUN_1405d9290();
    DAT_146854ba8 = GetStaticStruct(FUN_1405d9ef0,lVar1,L"CurrentVocalLoopInfo",0x48,uVar2);
  }
  return;
}



// FUNCTION 1405d9a00 FUN_1405d9a00 body=113 status=ok
// SIG undefined FUN_1405d9a00(void)

void FUN_1405d9a00(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146854b98 == 0) {
    if (DAT_146854ca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146854ca8,&PTR_s__Script_GbxAudio_143ff1d30);
    }
    lVar1 = DAT_146854ca8;
    uVar2 = FUN_1405d92a0();
    DAT_146854b98 = GetStaticStruct(FUN_1405d9f20,lVar1,L"CurrentVocalization",0x20,uVar2);
  }
  return;
}



// FUNCTION 1405d9a80 FUN_1405d9a80 body=113 status=ok
// SIG undefined FUN_1405d9a80(void)

void FUN_1405d9a80(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146854c70 == 0) {
    if (DAT_146854ca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146854ca8,&PTR_s__Script_GbxAudio_143ff1d30);
    }
    lVar1 = DAT_146854ca8;
    uVar2 = FUN_1405d92b0();
    DAT_146854c70 = GetStaticStruct(FUN_1405d9f50,lVar1,L"ExtraFoleyParameter",0x10,uVar2);
  }
  return;
}



// FUNCTION 1405d9b00 FUN_1405d9b00 body=113 status=ok
// SIG undefined FUN_1405d9b00(void)

void FUN_1405d9b00(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146854c60 == 0) {
    if (DAT_146854ca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146854ca8,&PTR_s__Script_GbxAudio_143ff1d30);
    }
    lVar1 = DAT_146854ca8;
    uVar2 = FUN_1405d92c0();
    DAT_146854c60 = GetStaticStruct(FUN_1405d9f80,lVar1,L"FoleyEventParams",0x48,uVar2);
  }
  return;
}



// FUNCTION 1405d9b80 FUN_1405d9b80 body=113 status=ok
// SIG undefined FUN_1405d9b80(void)

void FUN_1405d9b80(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146854b30 == 0) {
    if (DAT_146854ca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146854ca8,&PTR_s__Script_GbxAudio_143ff1d30);
    }
    lVar1 = DAT_146854ca8;
    uVar2 = FUN_1405d92d0();
    DAT_146854b30 = GetStaticStruct(FUN_1405d9fb0,lVar1,L"InheritableSoundMap",0x50,uVar2);
  }
  return;
}



// FUNCTION 1405d9c00 FUN_1405d9c00 body=113 status=ok
// SIG undefined FUN_1405d9c00(void)

void FUN_1405d9c00(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146854b20 == 0) {
    if (DAT_146854ca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146854ca8,&PTR_s__Script_GbxAudio_143ff1d30);
    }
    lVar1 = DAT_146854ca8;
    uVar2 = FUN_1405d92e0();
    DAT_146854b20 = GetStaticStruct(FUN_1405d9fe0,lVar1,L"InheritableVocalLoopList",0x10,uVar2);
  }
  return;
}



// FUNCTION 1405d9c80 FUN_1405d9c80 body=47 status=ok
// SIG undefined FUN_1405d9c80(void)

longlong FUN_1405d9c80(void)

{
  if (DAT_146854b88 == 0) {
    FUN_141786440(&DAT_146854b88,&PTR_GetPrivateStaticClass_143feff40);
  }
  return DAT_146854b88;
}



// FUNCTION 1405d9cb0 FUN_1405d9cb0 body=47 status=ok
// SIG undefined FUN_1405d9cb0(void)

longlong FUN_1405d9cb0(void)

{
  if (DAT_146854bb8 == 0) {
    FUN_141786440(&DAT_146854bb8,&PTR_FUN_143fefb20);
  }
  return DAT_146854bb8;
}



// FUNCTION 1405d9ce0 FUN_1405d9ce0 body=47 status=ok
// SIG undefined FUN_1405d9ce0(void)

longlong FUN_1405d9ce0(void)

{
  if (DAT_146854bd0 == 0) {
    FUN_141786440(&DAT_146854bd0,&PTR_FUN_143ff0000);
  }
  return DAT_146854bd0;
}



// FUNCTION 1405d9d10 FUN_1405d9d10 body=47 status=ok
// SIG undefined FUN_1405d9d10(void)

longlong FUN_1405d9d10(void)

{
  if (DAT_146854c40 == 0) {
    FUN_141786440(&DAT_146854c40,&PTR_GetPrivateStaticClass_143ff0350);
  }
  return DAT_146854c40;
}



// FUNCTION 1405d9d40 FUN_1405d9d40 body=47 status=ok
// SIG undefined FUN_1405d9d40(void)

longlong FUN_1405d9d40(void)

{
  if (DAT_146854c50 == 0) {
    FUN_141786440(&DAT_146854c50,&PTR_GetPrivateStaticClass_143ff0520);
  }
  return DAT_146854c50;
}



// FUNCTION 1405d9d70 FUN_1405d9d70 body=47 status=ok
// SIG undefined FUN_1405d9d70(void)

longlong FUN_1405d9d70(void)

{
  if (DAT_146854ce8 == 0) {
    FUN_141786440(&DAT_146854ce8,&PTR_FUN_143fedf70);
  }
  return DAT_146854ce8;
}



// FUNCTION 1405d9da0 FUN_1405d9da0 body=47 status=ok
// SIG undefined FUN_1405d9da0(void)

longlong FUN_1405d9da0(void)

{
  if (DAT_146854cf8 == 0) {
    FUN_141786440(&DAT_146854cf8,&PTR_GetPrivateStaticClass_143fee710);
  }
  return DAT_146854cf8;
}



// FUNCTION 1405d9dd0 FUN_1405d9dd0 body=47 status=ok
// SIG undefined FUN_1405d9dd0(void)

longlong FUN_1405d9dd0(void)

{
  if (DAT_146854bc8 == 0) {
    FUN_1417866a0(&DAT_146854bc8,&PTR_Z_Construct_UPackage__Script_Engine_14620c4c0);
  }
  return DAT_146854bc8;
}



// FUNCTION 1405d9e00 FUN_1405d9e00 body=47 status=ok
// SIG undefined FUN_1405d9e00(void)

longlong FUN_1405d9e00(void)

{
  if (DAT_146854bf0 == 0) {
    FUN_1417866a0(&DAT_146854bf0,&PTR_Z_Construct_UPackage__Script_Engine_14620c510);
  }
  return DAT_146854bf0;
}



// FUNCTION 1405d9e30 FUN_1405d9e30 body=47 status=ok
// SIG undefined FUN_1405d9e30(void)

longlong FUN_1405d9e30(void)

{
  if (DAT_146854b68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146854b68,&PTR_Z_Construct_UPackage__Script_Engine_1462091d0);
  }
  return DAT_146854b68;
}



// FUNCTION 1405d9e60 FUN_1405d9e60 body=47 status=ok
// SIG undefined FUN_1405d9e60(void)

longlong FUN_1405d9e60(void)

{
  if (DAT_146854b48 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146854b48,&PTR_Z_Construct_UPackage__Script_Engine_146208b50);
  }
  return DAT_146854b48;
}



// FUNCTION 1405d9e90 FUN_1405d9e90 body=47 status=ok
// SIG undefined FUN_1405d9e90(void)

longlong FUN_1405d9e90(void)

{
  if (DAT_146854be8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146854be8,&PTR_Z_Construct_UPackage__Script_Engine_1462099b0);
  }
  return DAT_146854be8;
}



// FUNCTION 1405d9ec0 FUN_1405d9ec0 body=47 status=ok
// SIG undefined FUN_1405d9ec0(void)

longlong FUN_1405d9ec0(void)

{
  if (DAT_146854b58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146854b58,&PTR_Z_Construct_UPackage__Script_Engine_146208fd0);
  }
  return DAT_146854b58;
}



// FUNCTION 1405d9ef0 FUN_1405d9ef0 body=47 status=ok
// SIG undefined FUN_1405d9ef0(void)

longlong FUN_1405d9ef0(void)

{
  if (DAT_146854bb0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146854bb0,&PTR_Z_Construct_UPackage__Script_Engine_146209550);
  }
  return DAT_146854bb0;
}



// FUNCTION 1405d9f20 FUN_1405d9f20 body=47 status=ok
// SIG undefined FUN_1405d9f20(void)

longlong FUN_1405d9f20(void)

{
  if (DAT_146854ba0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146854ba0,&PTR_Z_Construct_UPackage__Script_Engine_146209410);
  }
  return DAT_146854ba0;
}



// FUNCTION 1405d9f50 FUN_1405d9f50 body=47 status=ok
// SIG undefined FUN_1405d9f50(void)

longlong FUN_1405d9f50(void)

{
  if (DAT_146854c78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146854c78,&PTR_Z_Construct_UPackage__Script_Engine_14620a170);
  }
  return DAT_146854c78;
}



// FUNCTION 1405d9f80 FUN_1405d9f80 body=47 status=ok
// SIG undefined FUN_1405d9f80(void)

longlong FUN_1405d9f80(void)

{
  if (DAT_146854c68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146854c68,&PTR_Z_Construct_UPackage__Script_Engine_14620a0b0);
  }
  return DAT_146854c68;
}



// FUNCTION 1405d9fb0 FUN_1405d9fb0 body=47 status=ok
// SIG undefined FUN_1405d9fb0(void)

longlong FUN_1405d9fb0(void)

{
  if (DAT_146854b38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146854b38,&PTR_Z_Construct_UPackage__Script_Engine_146208ad0);
  }
  return DAT_146854b38;
}



// FUNCTION 1405d9fe0 FUN_1405d9fe0 body=47 status=ok
// SIG undefined FUN_1405d9fe0(void)

longlong FUN_1405d9fe0(void)

{
  if (DAT_146854b28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146854b28,&PTR_Z_Construct_UPackage__Script_Engine_1462089d0);
  }
  return DAT_146854b28;
}



// FUNCTION 1405da010 FUN_1405da010 body=301 status=ok
// SIG undefined FUN_1405da010(void)

void FUN_1405da010(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
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
  FUN_1405c49c0(local_10,local_18,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 1405da140 FUN_1405da140 body=303 status=ok
// SIG undefined FUN_1405da140(void)

void FUN_1405da140(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
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
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar2 = &local_b8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FOutputDevice::CanBeUsedOnAnyThread(local_res10,puVar2);
  *param_3 = uVar1;
  FUN_1405d4e80(&local_b8);
  return;
}



// FUNCTION 1405da270 FUN_1405da270 body=706 status=ok
// SIG undefined FUN_1405da270(void)

void FUN_1405da270(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong **pplVar2;
  longlong *plVar3;
  int iVar4;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  byte local_128 [4];
  undefined4 local_124;
  uint local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  byte local_98 [4];
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  _guard_xfg_dispatch_icall_nop(local_128,0,0x90);
  local_11c = 0x3f800000;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_128);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  local_1a8 = (longlong *)0x0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_1a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a8);
  }
  pplVar2 = &local_1a8;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  local_8c = local_11c;
  local_84 = local_114;
  local_78 = local_108;
  local_6c = local_fc;
  local_98[0] = local_98[0] ^ (local_98[0] ^ local_128[0]) & 3;
  local_94 = local_124;
  local_60 = local_f0;
  local_90 = local_90 ^ (local_90 ^ local_120) & 1;
  local_7c = local_10c;
  local_70 = local_100;
  local_64 = local_f4;
  local_58 = local_e8;
  local_4c = local_dc;
  local_40 = local_d0;
  local_38 = local_c8;
  local_34 = local_c4;
  local_30 = local_c0;
  local_2c = local_bc;
  local_28 = local_b8;
  local_24 = local_b4;
  local_20 = local_b0;
  local_54 = local_e4;
  local_18 = local_a8;
  local_48 = local_d8;
  local_10 = local_a0;
  local_88 = local_118;
  local_3c = local_cc;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FOutputDevice::CanBeUsedOnAnyThread(local_98,pplVar2);
  *param_3 = uVar1;
  if (local_148 != 0) {
    FMemory::Free();
  }
  if (local_158 != 0) {
    FMemory::Free();
  }
  if (local_168 != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(&local_178);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(&local_188);
  if (local_198 != 0) {
    FMemory::Free();
  }
  plVar3 = local_1a8;
  for (iVar4 = (int)local_1a0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_1a8 != (longlong *)0x0) {
    FMemory::Free(local_1a8);
  }
  return;
}



// FUNCTION 1405da540 FUN_1405da540 body=535 status=ok
// SIG undefined FUN_1405da540(void)

void FUN_1405da540(undefined8 param_1,longlong param_2)

{
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_78[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_38 = local_60;
  local_30 = local_58;
  local_20 = local_48;
  local_28 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1405cc090(param_1,&local_28,&local_38,local_68,local_78[0],local_res20[0],local_70,
                local_res10[0] != 0);
  return;
}



// FUNCTION 1405da760 FUN_1405da760 body=368 status=ok
// SIG undefined FUN_1405da760(void)

void FUN_1405da760(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  void *local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined4 local_64;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined4 local_14;
  
  local_98 = 0x3f800000;
  local_94 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_68 = 0;
  local_66 = 0;
  local_64 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  _Src = local_90;
  local_48 = local_98;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_88;
  local_58 = local_a8;
  local_50 = uStack_a0;
  local_44 = local_94;
  local_40 = (void *)0x0;
  local_38 = (int)local_88;
  if ((int)local_88 == 0) {
    local_34 = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_40,local_88 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_40,_Src,lVar1 << 3);
  }
  local_28 = local_78;
  local_1c = local_6c;
  local_18 = (undefined1)local_68;
  local_17 = local_68._1_1_;
  local_30 = local_80;
  local_16 = local_66;
  local_14 = local_64;
  local_24 = local_74;
  FUN_1405cc150(param_1,&local_58);
  if (local_90 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1405da8d0 FUN_1405da8d0 body=176 status=ok
// SIG undefined FUN_1405da8d0(void)

void FUN_1405da8d0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 local_res10;
  undefined1 local_28 [32];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = FUN_1405cc530(param_1,local_28,local_res10);
  FUN_1405913a0(param_3,lVar1);
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
  FUN_140591060(local_28);
  return;
}



// FUNCTION 1405da980 FUN_1405da980 body=175 status=ok
// SIG undefined FUN_1405da980(void)

void FUN_1405da980(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
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
  FUN_1405cd000(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1405daa30 FUN_1405daa30 body=390 status=ok
// SIG undefined FUN_1405daa30(void)

void FUN_1405daa30(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined1 local_res10 [16];
  int local_res20 [2];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_24);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar1 = local_res20[0] != 0;
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
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
  FUN_1405cd870(param_1,local_20,local_24,bVar1,local_28,local_res10[0]);
  return;
}



// FUNCTION 1405dabc0 FUN_1405dabc0 body=254 status=ok
// SIG undefined FUN_1405dabc0(void)

void FUN_1405dabc0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
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
  FUN_1405cd900(param_1,local_18[0],local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 1405dacc0 FUN_1405dacc0 body=175 status=ok
// SIG undefined FUN_1405dacc0(void)

void FUN_1405dacc0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
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
  FUN_1405cfc80(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1405dad70 FUN_1405dad70 body=47 status=ok
// SIG undefined FUN_1405dad70(void)

longlong FUN_1405dad70(void)

{
  if (DAT_146854eb0 == 0) {
    FUN_141786440(&DAT_146854eb0,&PTR_FUN_143ff2180);
  }
  return DAT_146854eb0;
}


