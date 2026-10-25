// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1407e4af0 FUN_1407e4af0 body=53 status=ok
// SIG undefined FUN_1407e4af0(void)

void FUN_1407e4af0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_1440ebf18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407e4b30 FUN_1407e4b30 body=162 status=ok
// SIG undefined FUN_1407e4b30(void)

longlong FUN_1407e4b30(void)

{
  if (DAT_14685cc10 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnOptionData",&DAT_14685cc10,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",FUN_1407e6620,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14685cc10;
}



// FUNCTION 1407e4bf0 FUN_1407e4bf0 body=47 status=ok
// SIG undefined FUN_1407e4bf0(void)

longlong FUN_1407e4bf0(void)

{
  if (DAT_14685ca68 == 0) {
    FUN_141786440(&DAT_14685ca68,&PTR_FUN_1440e66c0);
  }
  return DAT_14685ca68;
}



// FUNCTION 1407e4c20 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGVersusPlayerState::GetPrivateStaticClass(void)

{
  if (DAT_14685cca8 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnPointComponent",&DAT_14685cca8,FUN_1407e7f40,0x980,
                  0x10000000,0,L"Engine",&LAB_1407e6670,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_14685cca8;
}



// FUNCTION 1407e4ce0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPawnAction_Sequence::StaticClass(void)

{
  if (DAT_14685ca80 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnerStyle_Bunch",&DAT_14685ca80,FUN_140447710,0xc0,
                  0x10000000,0,L"Engine",&LAB_1407e67a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1407e6070,&LAB_140447700,0);
  }
  return DAT_14685ca80;
}



// FUNCTION 1407e4d90 FUN_1407e4d90 body=47 status=ok
// SIG undefined FUN_1407e4d90(void)

longlong FUN_1407e4d90(void)

{
  if (DAT_14685ca78 == 0) {
    FUN_141786440(&DAT_14685ca78,&PTR_StaticClass_1440e67a0);
  }
  return DAT_14685ca78;
}



// FUNCTION 1407e4dd0 FUN_1407e4dd0 body=162 status=ok
// SIG undefined FUN_1407e4dd0(void)

longlong FUN_1407e4dd0(void)

{
  if (DAT_14685caa0 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnerStyle_BunchList",&DAT_14685caa0,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",FUN_1407e67b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1407e6070,&LAB_140447700,0);
  }
  return DAT_14685caa0;
}



// FUNCTION 1407e4e80 FUN_1407e4e80 body=47 status=ok
// SIG undefined FUN_1407e4e80(void)

longlong FUN_1407e4e80(void)

{
  if (DAT_14685cc48 == 0) {
    FUN_141786440(&DAT_14685cc48,&PTR_LAB_1440e6c40);
  }
  return DAT_14685cc48;
}



// FUNCTION 1407e4eb0 FUN_1407e4eb0 body=47 status=ok
// SIG undefined FUN_1407e4eb0(void)

longlong FUN_1407e4eb0(void)

{
  if (DAT_14685cc20 == 0) {
    FUN_141786a30(&DAT_14685cc20,&PTR_FUN_146261ab0);
  }
  return DAT_14685cc20;
}



// FUNCTION 1407e4ee0 FUN_1407e4ee0 body=47 status=ok
// SIG undefined FUN_1407e4ee0(void)

longlong FUN_1407e4ee0(void)

{
  if (DAT_14685cc28 == 0) {
    FUN_141786a30(&DAT_14685cc28,&PTR_FUN_146261af0);
  }
  return DAT_14685cc28;
}



// FUNCTION 1407e4f10 FUN_1407e4f10 body=47 status=ok
// SIG undefined FUN_1407e4f10(void)

longlong FUN_1407e4f10(void)

{
  if (DAT_14685cc30 == 0) {
    FUN_141786a30(&DAT_14685cc30,&PTR_FUN_146261b70);
  }
  return DAT_14685cc30;
}



// FUNCTION 1407e4f40 FUN_1407e4f40 body=47 status=ok
// SIG undefined FUN_1407e4f40(void)

longlong FUN_1407e4f40(void)

{
  if (DAT_14685cc38 == 0) {
    FUN_141786a30(&DAT_14685cc38,&PTR_FUN_146261bb0);
  }
  return DAT_14685cc38;
}



// FUNCTION 1407e4f70 FUN_1407e4f70 body=47 status=ok
// SIG undefined FUN_1407e4f70(void)

longlong FUN_1407e4f70(void)

{
  if (DAT_14685cc40 == 0) {
    FUN_141786a30(&DAT_14685cc40,&PTR_FUN_146261c30);
  }
  return DAT_14685cc40;
}



// FUNCTION 1407e4fb0 FUN_1407e4fb0 body=53 status=ok
// SIG undefined FUN_1407e4fb0(void)

void FUN_1407e4fb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x140;
    *puVar1 = &PTR_FUN_1440e9b90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407e5000 FUN_1407e5000 body=53 status=ok
// SIG undefined FUN_1407e5000(void)

void FUN_1407e5000(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &PTR_FUN_1440ea0e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407e5040 FUN_1407e5040 body=162 status=ok
// SIG undefined FUN_1407e5040(void)

longlong FUN_1407e5040(void)

{
  if (DAT_14685ccb8 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnPointProvider",&DAT_14685ccb8,FUN_140447710,0x28,
                  0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_14685ccb8;
}



// FUNCTION 1407e5100 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCurveLinearColor::GetPrivateStaticClass(void)

{
  if (DAT_14685cab0 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnerStyle_Den",&DAT_14685cab0,FUN_140447710,0x250,
                  0x10000000,0,L"Engine",&LAB_1407e67f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1407e6070,&LAB_140447700,0);
  }
  return DAT_14685cab0;
}



// FUNCTION 1407e51b0 FUN_1407e51b0 body=47 status=ok
// SIG undefined FUN_1407e51b0(void)

longlong FUN_1407e51b0(void)

{
  if (DAT_14685caa8 == 0) {
    FUN_141786440(&DAT_14685caa8,&PTR_GetPrivateStaticClass_1440e71f0);
  }
  return DAT_14685caa8;
}



// FUNCTION 1407e51f0 FUN_1407e51f0 body=162 status=ok
// SIG undefined FUN_1407e51f0(void)

longlong FUN_1407e51f0(void)

{
  if (DAT_14685cae8 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnerStyle_Encounter",&DAT_14685cae8,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",&LAB_1407e6800,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1407e6070,&LAB_140447700,0);
  }
  return DAT_14685cae8;
}



// FUNCTION 1407e52a0 FUN_1407e52a0 body=151 status=ok
// SIG undefined FUN_1407e52a0(void)

longlong FUN_1407e52a0(void)

{
  if (DAT_14685cbc8 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnManager",&DAT_14685cbc8,FUN_1407e7f10,0x330,0x10000006,
                  0,L"Engine",&LAB_1407e6610,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14685cbc8;
}



// FUNCTION 1407e5340 FUN_1407e5340 body=53 status=ok
// SIG undefined FUN_1407e5340(void)

void FUN_1407e5340(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_1440ea220;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407e5380 FUN_1407e5380 body=53 status=ok
// SIG undefined FUN_1407e5380(void)

void FUN_1407e5380(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1440ea338;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1407e53d0 FUN_1407e53d0 body=162 status=ok
// SIG undefined FUN_1407e53d0(void)

longlong FUN_1407e53d0(void)

{
  if (DAT_14685caf8 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnerStyle_Single",&DAT_14685caf8,FUN_140447710,0x38,
                  0x10000000,0,L"Engine",InternalConstructor<UAIResource_Logic>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1407e6070,&LAB_140447700,0);
  }
  return DAT_14685caf8;
}



// FUNCTION 1407e5480 FUN_1407e5480 body=47 status=ok
// SIG undefined FUN_1407e5480(void)

longlong FUN_1407e5480(void)

{
  if (DAT_14685cca0 == 0) {
    FUN_141786440(&DAT_14685cca0,&PTR_GetPrivateStaticClass_1440e7ee0);
  }
  return DAT_14685cca0;
}



// FUNCTION 1407e54b0 FUN_1407e54b0 body=47 status=ok
// SIG undefined FUN_1407e54b0(void)

longlong FUN_1407e54b0(void)

{
  if (DAT_14685cc60 == 0) {
    FUN_141786a30(&DAT_14685cc60,&PTR_FUN_146261f10);
  }
  return DAT_14685cc60;
}



// FUNCTION 1407e54e0 FUN_1407e54e0 body=47 status=ok
// SIG undefined FUN_1407e54e0(void)

longlong FUN_1407e54e0(void)

{
  if (DAT_14685cc68 == 0) {
    FUN_141786a30(&DAT_14685cc68,&PTR_FUN_146261f50);
  }
  return DAT_14685cc68;
}



// FUNCTION 1407e5510 FUN_1407e5510 body=47 status=ok
// SIG undefined FUN_1407e5510(void)

longlong FUN_1407e5510(void)

{
  if (DAT_14685cc70 == 0) {
    FUN_141786a30(&DAT_14685cc70,&PTR_FUN_146261fd0);
  }
  return DAT_14685cc70;
}



// FUNCTION 1407e5540 FUN_1407e5540 body=47 status=ok
// SIG undefined FUN_1407e5540(void)

longlong FUN_1407e5540(void)

{
  if (DAT_14685cc78 == 0) {
    FUN_141786a30(&DAT_14685cc78,&PTR_FUN_146262050);
  }
  return DAT_14685cc78;
}



// FUNCTION 1407e5570 FUN_1407e5570 body=47 status=ok
// SIG undefined FUN_1407e5570(void)

longlong FUN_1407e5570(void)

{
  if (DAT_14685cc80 == 0) {
    FUN_141786a30(&DAT_14685cc80,&PTR_FUN_1462620d0);
  }
  return DAT_14685cc80;
}



// FUNCTION 1407e55a0 FUN_1407e55a0 body=47 status=ok
// SIG undefined FUN_1407e55a0(void)

longlong FUN_1407e55a0(void)

{
  if (DAT_14685cc88 == 0) {
    FUN_141786a30(&DAT_14685cc88,&PTR_FUN_146262190);
  }
  return DAT_14685cc88;
}



// FUNCTION 1407e55d0 FUN_1407e55d0 body=47 status=ok
// SIG undefined FUN_1407e55d0(void)

longlong FUN_1407e55d0(void)

{
  if (DAT_14685cc90 == 0) {
    FUN_141786a30(&DAT_14685cc90,&PTR_FUN_1462621d0);
  }
  return DAT_14685cc90;
}



// FUNCTION 1407e5600 FUN_1407e5600 body=47 status=ok
// SIG undefined FUN_1407e5600(void)

longlong FUN_1407e5600(void)

{
  if (DAT_14685cc98 == 0) {
    FUN_141786a30(&DAT_14685cc98,&PTR_FUN_146262250);
  }
  return DAT_14685cc98;
}



// FUNCTION 1407e5630 FUN_1407e5630 body=47 status=ok
// SIG undefined FUN_1407e5630(void)

longlong FUN_1407e5630(void)

{
  if (DAT_14685caf0 == 0) {
    FUN_141786440(&DAT_14685caf0,&PTR_FUN_1440e79c0);
  }
  return DAT_14685caf0;
}



// FUNCTION 1407e5670 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextureRenderTargetCube::GetPrivateStaticClass(void)

{
  if (DAT_14685cb10 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnerStyleFactory_Bunch",&DAT_14685cb10,FUN_1407e7fa0,0xd8
                  ,0x10000000,0,L"Engine",FUN_1407e6700,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPawnAction_Sequence::StaticClass,&LAB_140447700,0);
  }
  return DAT_14685cb10;
}



// FUNCTION 1407e5720 FUN_1407e5720 body=47 status=ok
// SIG undefined FUN_1407e5720(void)

longlong FUN_1407e5720(void)

{
  if (DAT_14685cb08 == 0) {
    FUN_141786440(&DAT_14685cb08,&PTR_GetPrivateStaticClass_1440e7d40);
  }
  return DAT_14685cb08;
}



// FUNCTION 1407e5750 FUN_1407e5750 body=47 status=ok
// SIG undefined FUN_1407e5750(void)

longlong FUN_1407e5750(void)

{
  if (DAT_14685cb00 == 0) {
    FUN_141786a30(&DAT_14685cb00,&PTR_FUN_1462600a0);
  }
  return DAT_14685cb00;
}



// FUNCTION 1407e5790 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGCutsceneScreenUW::GetPrivateStaticClass(void)

{
  if (DAT_14685cb28 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnerStyleFactory_Den",&DAT_14685cb28,
                  StaticRegisterNativesUUGCutsceneScreenUW,0x268,0x10000000,0,L"Engine",
                  FUN_1407e6740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UCurveLinearColor::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685cb28;
}



// FUNCTION 1407e5840 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPawnAction::GetPrivateStaticClass(void)

{
  if (DAT_14685cb60 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnFactory",&DAT_14685cb60,FUN_140447710,0x98,0x10000001,0
                  ,L"Engine",&LAB_1407e64a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14685cb60;
}



// FUNCTION 1407e58e0 FUN_1407e58e0 body=47 status=ok
// SIG undefined FUN_1407e58e0(void)

longlong FUN_1407e58e0(void)

{
  if (DAT_14685cb20 == 0) {
    FUN_141786440(&DAT_14685cb20,&PTR_GetPrivateStaticClass_1440e8370);
  }
  return DAT_14685cb20;
}



// FUNCTION 1407e5910 FUN_1407e5910 body=47 status=ok
// SIG undefined FUN_1407e5910(void)

longlong FUN_1407e5910(void)

{
  if (DAT_14685cb18 == 0) {
    FUN_141786a30(&DAT_14685cb18,&PTR_FUN_1462602d0);
  }
  return DAT_14685cb18;
}



// FUNCTION 1407e5950 FUN_1407e5950 body=47 status=ok
// SIG undefined FUN_1407e5950(void)

longlong FUN_1407e5950(void)

{
  if (DAT_14685cb58 == 0) {
    FUN_141786440(&DAT_14685cb58,&PTR_GetPrivateStaticClass_1440e8540);
  }
  return DAT_14685cb58;
}



// FUNCTION 1407e5990 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAsyncTaskDownloadImage::GetPrivateStaticClass(void)

{
  if (DAT_14685cb40 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnerStyleFactory_Single",&DAT_14685cb40,
                  StaticRegisterNativesUAsyncTaskDownloadImage,0x50,0x10000000,0,L"Engine",
                  FUN_1407e6770,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1407e53d0,&LAB_140447700,0);
  }
  return DAT_14685cb40;
}



// FUNCTION 1407e5a50 FUN_1407e5a50 body=47 status=ok
// SIG undefined FUN_1407e5a50(void)

longlong FUN_1407e5a50(void)

{
  if (DAT_14685cb38 == 0) {
    FUN_141786440(&DAT_14685cb38,&PTR_GetPrivateStaticClass_1440e8840);
  }
  return DAT_14685cb38;
}



// FUNCTION 1407e5a80 FUN_1407e5a80 body=47 status=ok
// SIG undefined FUN_1407e5a80(void)

longlong FUN_1407e5a80(void)

{
  if (DAT_14685cb30 == 0) {
    FUN_141786a30(&DAT_14685cb30,&PTR_FUN_1462604f0);
  }
  return DAT_14685cb30;
}



// FUNCTION 1407e5ab0 FUN_1407e5ab0 body=162 status=ok
// SIG undefined FUN_1407e5ab0(void)

longlong FUN_1407e5ab0(void)

{
  if (DAT_14685ca60 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnerStateInterface",&DAT_14685ca60,FUN_140447710,0x28,
                  0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_14685ca60;
}



// FUNCTION 1407e5b60 FUN_1407e5b60 body=162 status=ok
// SIG undefined FUN_1407e5b60(void)

longlong FUN_1407e5b60(void)

{
  if (DAT_14685cb70 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnFactory_Container",&DAT_14685cb70,FUN_140447710,0xa0,
                  0x10000000,0,L"Engine",FUN_1407e64c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPawnAction::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685cb70;
}



// FUNCTION 1407e5c10 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCheckBox::GetPrivateStaticClass(void)

{
  if (DAT_14685ca50 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnerLinkComponent",&DAT_14685ca50,FUN_140447710,0x770,
                  0x10000000,0,L"Engine",&LAB_1407e66c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_14685ca50;
}



// FUNCTION 1407e5ce0 FUN_1407e5ce0 body=162 status=ok
// SIG undefined FUN_1407e5ce0(void)

longlong FUN_1407e5ce0(void)

{
  if (DAT_14685cb90 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnFactory_ContainerSoftRef",&DAT_14685cb90,FUN_140447710,
                  0xb0,0x10000000,0,L"Engine",InternalConstructor<UControlRigWorkflowOptions>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPawnAction::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685cb90;
}



// FUNCTION 1407e5d90 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ACameraActor::GetPrivateStaticClass(void)

{
  if (DAT_14685ccd8 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnPreviewComponent",&DAT_14685ccd8,FUN_1407e7f70,0x840,
                  0x10000000,0,L"Engine",&LAB_1407e6680,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142e6f660,&LAB_140447700,0);
  }
  return DAT_14685ccd8;
}



// FUNCTION 1407e5e50 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAnimMontage::GetPrivateStaticClass(void)

{
  if (DAT_14685cba8 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnFactory_Generic",&DAT_14685cba8,
                  StaticRegisterNativesUAnimMontage,0x1d8,0x10000000,0,L"Engine",FUN_1407e6530,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPawnAction::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685cba8;
}



// FUNCTION 1407e5f00 FUN_1407e5f00 body=47 status=ok
// SIG undefined FUN_1407e5f00(void)

longlong FUN_1407e5f00(void)

{
  if (DAT_14685ccd0 == 0) {
    FUN_141786440(&DAT_14685ccd0,&PTR_GetPrivateStaticClass_1440e8e30);
  }
  return DAT_14685ccd0;
}



// FUNCTION 1407e5f30 FUN_1407e5f30 body=47 status=ok
// SIG undefined FUN_1407e5f30(void)

longlong FUN_1407e5f30(void)

{
  if (DAT_14685ccc0 == 0) {
    FUN_141786a30(&DAT_14685ccc0,&PTR_FUN_1462628b0);
  }
  return DAT_14685ccc0;
}



// FUNCTION 1407e5f60 FUN_1407e5f60 body=47 status=ok
// SIG undefined FUN_1407e5f60(void)

longlong FUN_1407e5f60(void)

{
  if (DAT_14685ccc8 == 0) {
    FUN_141786a30(&DAT_14685ccc8,&PTR_FUN_1462628f0);
  }
  return DAT_14685ccc8;
}



// FUNCTION 1407e5fa0 FUN_1407e5fa0 body=53 status=ok
// SIG undefined FUN_1407e5fa0(void)

void FUN_1407e5fa0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1440e9ca8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407e5fe0 FUN_1407e5fe0 body=47 status=ok
// SIG undefined FUN_1407e5fe0(void)

longlong FUN_1407e5fe0(void)

{
  if (DAT_14685cba0 == 0) {
    FUN_141786440(&DAT_14685cba0,&PTR_GetPrivateStaticClass_1440e9450);
  }
  return DAT_14685cba0;
}



// FUNCTION 1407e6010 FUN_1407e6010 body=47 status=ok
// SIG undefined FUN_1407e6010(void)

longlong FUN_1407e6010(void)

{
  if (DAT_14685cb98 == 0) {
    FUN_141786a30(&DAT_14685cb98,&PTR_FUN_146260ad0);
  }
  return DAT_14685cb98;
}



// FUNCTION 1407e6070 FUN_1407e6070 body=162 status=ok
// SIG undefined FUN_1407e6070(void)

longlong FUN_1407e6070(void)

{
  if (DAT_14685ca70 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnerStyle",&DAT_14685ca70,FUN_140447710,0x30,0x10000001,0
                  ,L"Engine",FUN_1407e66d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14685ca70;
}



// FUNCTION 1407e6120 FUN_1407e6120 body=875 status=ok
// SIG undefined FUN_1407e6120(void)

int * FUN_1407e6120(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong *_Src;
  int iVar12;
  bool bVar13;
  
  iVar12 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar10 = *(int *)((longlong)iVar8 * 0x20 + 4 + *param_1);
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar10 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  _Src = (ulonglong *)((longlong)iVar8 * 0x20 + *param_1);
  TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>::
  TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>
            (_Src,param_3);
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  bVar13 = false;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar8 != 1) {
    iVar7 = iVar12;
    if (iVar8 != 0) {
      iVar10 = (int)(*_Src >> 4);
      uVar9 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
      uVar5 = -(uVar9 + iVar10) ^ uVar9 >> 0xd;
      uVar11 = (iVar10 - uVar9) - uVar5 ^ uVar5 >> 0xc;
      uVar9 = (uVar9 - uVar11) - uVar5 ^ uVar11 << 0x10;
      uVar5 = (uVar5 - uVar9) - uVar11 ^ uVar9 >> 5;
      uVar11 = (uVar11 - uVar9) - uVar5 ^ uVar5 >> 3;
      uVar9 = (uVar9 - uVar11) - uVar5 ^ uVar11 << 10;
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar4 +
                       (((longlong)(int)((uVar5 - uVar9) - uVar11) ^ (ulonglong)(uVar9 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        do {
          iVar7 = iVar10;
          if (*(ulonglong *)((longlong)iVar10 * 0x20 + *param_1) == *_Src) break;
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *param_1);
          iVar7 = iVar12;
        } while (iVar10 != -1);
      }
    }
    bVar13 = iVar7 != -1;
    if (bVar13) {
      _Dst = (void *)((longlong)iVar7 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      iVar8 = *param_2;
      bVar2 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar8;
      }
      puVar6 = (undefined4 *)((longlong)iVar8 * 0x20 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      puVar6[1] = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar4 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar4 == (longlong *)0x0) {
        plVar4 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar4 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1407e6467;
    }
  }
  cVar3 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar8,0);
  if (cVar3 == '\0') {
    iVar12 = (int)(*_Src >> 4);
    uVar9 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
    uVar11 = -(uVar9 + iVar12) ^ uVar9 >> 0xd;
    uVar5 = (iVar12 - uVar9) - uVar11 ^ uVar11 >> 0xc;
    uVar9 = (uVar9 - uVar5) - uVar11 ^ uVar5 << 0x10;
    uVar11 = (uVar11 - uVar9) - uVar5 ^ uVar9 >> 5;
    uVar5 = (uVar5 - uVar9) - uVar11 ^ uVar11 >> 3;
    uVar9 = (uVar9 - uVar5) - uVar11 ^ uVar5 << 10;
    uVar5 = ((uVar11 - uVar9) - uVar5 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar5;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1407e6467:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 1407e64c0 FUN_1407e64c0 body=41 status=ok
// SIG undefined FUN_1407e64c0(void)

void FUN_1407e64c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1407bcd80(puVar1,param_1);
    *puVar1 = &PTR_FUN_1440eb140;
  }
  return;
}



// FUNCTION 1407e64f0 InternalConstructor<UControlRigWorkflowOptions> body=64 status=ok
// SIG undefined InternalConstructor<UControlRigWorkflowOptions>(void)

void InternalConstructor<UControlRigWorkflowOptions>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1407bcd80(puVar1,param_1);
    *puVar1 = &PTR_FUN_1440eb480;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
  }
  return;
}



// FUNCTION 1407e6530 FUN_1407e6530 body=210 status=ok
// SIG undefined FUN_1407e6530(void)

void FUN_1407e6530(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1407bcd80(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0xa9) = 0;
    *puVar1 = &PTR_FUN_1440eb7c0;
    puVar1[0x13] = &PTR_LAB_1440ebb10;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x16) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xb4) = 0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0xd4)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0x19,0);
    }
    if ((undefined2 *)puVar1[0x19] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0x19] = 0;
    }
    *(undefined4 *)(puVar1 + 0x17) = 0;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
  }
  return;
}



// FUNCTION 1407e6620 FUN_1407e6620 body=65 status=ok
// SIG undefined FUN_1407e6620(void)

void FUN_1407e6620(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1440ec030;
    puVar1[6] = 0;
    puVar1[7] = 0;
    FUN_1407bb9d0(puVar1 + 8);
    return;
  }
  return;
}



// FUNCTION 1407e6690 FUN_1407e6690 body=41 status=ok
// SIG undefined FUN_1407e6690(void)

void FUN_1407e6690(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDeveloperSettings::UDeveloperSettings(puVar1,param_1);
    *puVar1 = &PTR_FUN_1440ebb38;
  }
  return;
}



// FUNCTION 1407e66d0 FUN_1407e66d0 body=41 status=ok
// SIG undefined FUN_1407e66d0(void)

void FUN_1407e66d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_1440df218;
  }
  return;
}



// FUNCTION 1407e6700 FUN_1407e6700 body=54 status=ok
// SIG undefined FUN_1407e6700(void)

void FUN_1407e6700(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1407bd660(puVar1);
    *puVar1 = &PTR_FUN_1440ea780;
    puVar1[0x18] = 0;
    puVar1[0x1a] = 0;
  }
  return;
}



// FUNCTION 1407e6740 FUN_1407e6740 body=38 status=ok
// SIG undefined FUN_1407e6740(void)

void FUN_1407e6740(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1407bd760(puVar1);
    *puVar1 = &PTR_FUN_1440eaac0;
  }
  return;
}



// FUNCTION 1407e6770 FUN_1407e6770 body=41 status=ok
// SIG undefined FUN_1407e6770(void)

void FUN_1407e6770(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_1440eae00;
  }
  return;
}



// FUNCTION 1407e67b0 FUN_1407e67b0 body=51 status=ok
// SIG undefined FUN_1407e67b0(void)

void FUN_1407e67b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_1440e9dc0;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 1407e6810 InternalConstructor<UAIResource_Logic> body=41 status=ok
// SIG undefined InternalConstructor<UAIResource_Logic>(void)

void InternalConstructor<UAIResource_Logic>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_1440ea450;
  }
  return;
}



// FUNCTION 1407e6850 TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_> body=112 status=ok
// SIG undefined TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>(void)

undefined8 *
TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>::
TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>
          (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[1],_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1407e68c0 FUN_1407e68c0 body=106 status=ok
// SIG undefined FUN_1407e68c0(void)

void FUN_1407e68c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  iVar4 = *(int *)(param_1 + 200);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_1;
  }
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 8);
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar1 = *(longlong *)(param_1 + 0xc0);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407e6930 FUN_1407e6930 body=101 status=ok
// SIG undefined FUN_1407e6930(void)

void FUN_1407e6930(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x88);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x25;
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



// FUNCTION 1407e69a0 FUN_1407e69a0 body=105 status=ok
// SIG undefined FUN_1407e69a0(void)

void FUN_1407e69a0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x48);
  }
  if ((plVar2 != (longlong *)0x0) ||
     ((*(int *)(param_1 + 0x50) != 0 &&
      (plVar2 = *(longlong **)(param_1 + 0x48), plVar2 != (longlong *)0x0)))) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    if (*(longlong *)(param_1 + 0x48) != 0) {
      uVar1 = FMemory::Realloc(*(longlong *)(param_1 + 0x48),0,0);
      *(undefined8 *)(param_1 + 0x48) = uVar1;
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1407e6a10 FUN_1407e6a10 body=562 status=ok
// SIG undefined FUN_1407e6a10(void)

longlong * FUN_1407e6a10(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  
  if (param_1 != param_2) {
    iVar8 = (int)param_1[1];
    if (iVar8 != 0) {
      plVar9 = (longlong *)(*param_1 + 0x58);
      do {
        plVar5 = (longlong *)plVar9[7];
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
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 0x15;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = (int)param_2[1];
    lVar6 = *param_2;
    *(int *)(param_1 + 1) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FInAppPurchaseProductInfo,FDefaultAllocator>::ResizeForCopy(param_1,iVar8);
      puVar11 = (undefined8 *)*param_1;
      if (iVar8 != 0) {
        puVar10 = (undefined4 *)((longlong)puVar11 + 0xa4);
        puVar7 = (undefined4 *)(lVar6 + 0xa4);
        do {
          *puVar11 = *(undefined8 *)(puVar7 + -0x29);
          *(undefined1 *)(puVar10 + -0x27) = *(undefined1 *)(puVar7 + -0x27);
          puVar10[-0x26] = puVar7[-0x26];
          puVar10[-0x25] = puVar7[-0x25];
          puVar10[-0x24] = puVar7[-0x24];
          *(undefined1 *)(puVar10 + -0x23) = *(undefined1 *)(puVar7 + -0x23);
          *(undefined1 *)((longlong)puVar10 + -0x8b) = *(undefined1 *)((longlong)puVar7 + -0x8b);
          *(undefined1 *)((longlong)puVar10 + -0x8a) = *(undefined1 *)((longlong)puVar7 + -0x8a);
          *(undefined1 *)((longlong)puVar10 + -0x89) = *(undefined1 *)((longlong)puVar7 + -0x89);
          *(undefined8 *)(puVar10 + -0x22) = *(undefined8 *)(puVar7 + -0x22);
          puVar10[-0x20] = puVar7[-0x20];
          *(undefined8 *)(puVar10 + -0x1f) = *(undefined8 *)(puVar7 + -0x1f);
          puVar10[-0x1d] = puVar7[-0x1d];
          *(undefined8 *)(puVar10 + -0x1c) = *(undefined8 *)(puVar7 + -0x1c);
          puVar10[-0x1a] = puVar7[-0x1a];
          *(undefined8 *)(puVar10 + -0x19) = *(undefined8 *)(puVar7 + -0x19);
          puVar10[-0x17] = puVar7[-0x17];
          *(undefined8 *)(puVar10 + -0x15) = *(undefined8 *)(puVar7 + -0x15);
          FString::FString(puVar10 + -0x13,puVar7 + -0x13);
          puVar10[-0xf] = puVar7[-0xf];
          puVar10[-0xe] = puVar7[-0xe];
          *(undefined8 *)(puVar10 + -0xd) = *(undefined8 *)(puVar7 + -0xd);
          puVar10[-0xb] = puVar7[-0xb];
          puVar10[-10] = puVar7[-10];
          *(undefined2 *)(puVar10 + -9) = *(undefined2 *)(puVar7 + -9);
          *(undefined1 *)((longlong)puVar10 + -0x22) = *(undefined1 *)((longlong)puVar7 + -0x22);
          *(undefined8 *)(puVar10 + -7) = *(undefined8 *)(puVar7 + -7);
          lVar6 = *(longlong *)(puVar7 + -5);
          *(longlong *)(puVar10 + -5) = lVar6;
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
            UNLOCK();
          }
          puVar11 = puVar11 + 0x15;
          *(undefined8 *)(puVar10 + -3) = *(undefined8 *)(puVar7 + -3);
          puVar10[-1] = puVar7[-1];
          uVar4 = *puVar7;
          puVar7 = puVar7 + 0x2a;
          *puVar10 = uVar4;
          puVar10 = puVar10 + 0x2a;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 1407e6c50 FUN_1407e6c50 body=465 status=ok
// SIG undefined FUN_1407e6c50(void)

longlong * FUN_1407e6c50(longlong *param_1,longlong *param_2)

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
    TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1407e6d8d;
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
LAB_1407e6d8d:
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
        FUN_1407e6120(param_1,local_res8,(longlong)iStack_3c * 0x20 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 1407e6e30 FUN_1407e6e30 body=235 status=ok
// SIG undefined FUN_1407e6e30(void)

undefined8 * FUN_1407e6e30(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  plVar1 = param_1 + 9;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_1[8] = param_2[8];
  if (param_2 + 9 != plVar1) {
    if ((*(int *)(param_2 + 10) == 0) ||
       (plVar2 = (longlong *)param_2[9], plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 10) != 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)
         ) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar3 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar3;
        }
        *(undefined4 *)(param_1 + 10) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
    }
  }
  param_1[0xb] = param_2[0xb];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined2 *)((longlong)param_1 + 100) = *(undefined2 *)((longlong)param_2 + 100);
  *(undefined1 *)((longlong)param_1 + 0x66) = *(undefined1 *)((longlong)param_2 + 0x66);
  return param_1;
}



// FUNCTION 1407e6f20 FUN_1407e6f20 body=848 status=ok
// SIG undefined FUN_1407e6f20(void)

undefined8 * FUN_1407e6f20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)((longlong)param_2 + 10);
  *(undefined1 *)((longlong)param_1 + 0xb) = *(undefined1 *)((longlong)param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined2 *)((longlong)param_1 + 0x2c) = *(undefined2 *)((longlong)param_2 + 0x2c);
  *(undefined1 *)((longlong)param_1 + 0x2e) = *(undefined1 *)((longlong)param_2 + 0x2e);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined1 *)((longlong)param_1 + 0x5c) = *(undefined1 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  FUN_1407e6a10(param_1 + 0xe,param_2 + 0xe);
  puVar1 = param_1 + 0x10;
  if (puVar1 != param_2 + 0x10) {
    iVar8 = *(int *)(param_2 + 0x11);
    pvVar4 = (void *)param_2[0x10];
    *(int *)(param_1 + 0x11) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0x8c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar1,iVar8);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar4,(longlong)iVar8 << 4);
    }
  }
  plVar2 = param_1 + 0x13;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  if (plVar2 != param_2 + 0x13) {
    iVar8 = *(int *)(param_1 + 0x14);
    if (iVar8 != 0) {
      plVar6 = (longlong *)(*plVar2 + 8);
      do {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 3;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = *(int *)(param_2 + 0x14);
    lVar5 = param_2[0x13];
    *(int *)(param_1 + 0x14) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0xa4) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar2,iVar8);
      puVar7 = (undefined4 *)*plVar2;
      if (iVar8 != 0) {
        puVar9 = (undefined1 *)(lVar5 + 4);
        do {
          *puVar7 = *(undefined4 *)(puVar9 + -4);
          *(undefined1 *)(puVar7 + 1) = *puVar9;
          *(undefined8 *)(puVar7 + 2) = 0;
          iVar3 = *(int *)(puVar9 + 0xc);
          pvVar4 = *(void **)(puVar9 + 4);
          puVar7[4] = iVar3;
          if (iVar3 == 0) {
            puVar7[5] = 0;
          }
          else {
            TArray<int,FDefaultAllocator>::ResizeForCopy(puVar7 + 2,iVar3,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(puVar7 + 2),pvVar4,(longlong)iVar3 << 2);
          }
          puVar7 = puVar7 + 6;
          puVar9 = puVar9 + 0x18;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  }
  puVar1 = param_1 + 0x17;
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  if (puVar1 != param_2 + 0x17) {
    iVar8 = *(int *)(param_2 + 0x18);
    pvVar4 = (void *)param_2[0x17];
    *(int *)(param_1 + 0x18) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0xc4) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar8);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar4,(longlong)iVar8 << 2);
    }
  }
  puVar1 = param_1 + 0x19;
  if (puVar1 != param_2 + 0x19) {
    iVar8 = *(int *)(param_2 + 0x1a);
    pvVar4 = (void *)param_2[0x19];
    *(int *)(param_1 + 0x1a) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0xd4) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar8);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar4,(longlong)iVar8 << 3);
    }
  }
  puVar1 = param_1 + 0x1b;
  if (puVar1 != param_2 + 0x1b) {
    iVar8 = *(int *)(param_2 + 0x1c);
    pvVar4 = (void *)param_2[0x1b];
    *(int *)(param_1 + 0x1c) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0xe4) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar8);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar4,(longlong)iVar8 << 3);
    }
  }
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
  FUN_1407e6c50(param_1 + 0x1e,param_2 + 0x1e);
  return param_1;
}



// FUNCTION 1407e7280 FUN_1407e7280 body=43 status=ok
// SIG undefined FUN_1407e7280(void)

undefined8 * FUN_1407e7280(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440e9a70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1407e72b0 FUN_1407e72b0 body=52 status=ok
// SIG undefined FUN_1407e72b0(void)

undefined8 FUN_1407e72b0(undefined8 param_1,ulonglong param_2)

{
  FUN_1407be1b0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1407e72f0 FUN_1407e72f0 body=73 status=ok
// SIG undefined FUN_1407e72f0(void)

longlong FUN_1407e72f0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  FUN_1407be1b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1407e7340 FUN_1407e7340 body=111 status=ok
// SIG undefined FUN_1407e7340(void)

longlong FUN_1407e7340(longlong param_1,ulonglong param_2)

{
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x1c8);
  FUN_1407e68c0(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_1440e9a70;
  FUN_1407be1b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 1407e73b0 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPaperTerrainMaterial::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_1407e6930(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1407e73f0 FUN_1407e73f0 body=52 status=ok
// SIG undefined FUN_1407e73f0(void)

undefined8 FUN_1407e73f0(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 1407e7430 FUN_1407e7430 body=52 status=ok
// SIG undefined FUN_1407e7430(void)

undefined8 FUN_1407e7430(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x268);
  }
  return param_1;
}



// FUNCTION 1407e74d0 FUN_1407e74d0 body=37 status=ok
// SIG undefined FUN_1407e74d0(void)

void FUN_1407e74d0(undefined8 param_1,longlong param_2)

{
  FUN_1407bbca0(param_2);
  *(undefined4 *)(param_2 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x6c) = 0;
  return;
}



// FUNCTION 1407e7520 FUN_1407e7520 body=482 status=ok
// SIG undefined FUN_1407e7520(void)

undefined8 FUN_1407e7520(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  
  if (param_4 != 0) {
    plVar10 = (longlong *)(param_3 + 0x20);
    do {
      *param_2 = plVar10[-4];
      plVar1 = param_2 + 4;
      uVar3 = *(undefined4 *)((longlong)plVar10 + -0x14);
      lVar6 = plVar10[-2];
      uVar4 = *(undefined4 *)((longlong)plVar10 + -0xc);
      *(int *)(param_2 + 1) = (int)plVar10[-3];
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
      *(int *)(param_2 + 2) = (int)lVar6;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
      *(int *)(param_2 + 3) = (int)plVar10[-1];
      if (plVar1 != plVar10) {
        plVar5 = (longlong *)*plVar1;
        for (iVar7 = (int)param_2[5]; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (plVar5[6] != 0) {
            FMemory::Free();
          }
          if (plVar5[4] != 0) {
            FMemory::Free();
          }
          if (plVar5[2] != 0) {
            FMemory::Free();
          }
          if (*plVar5 != 0) {
            FMemory::Free();
          }
          plVar5 = plVar5 + 0x2b;
        }
        iVar7 = (int)plVar10[1];
        lVar6 = *plVar10;
        *(int *)(param_2 + 5) = iVar7;
        if ((iVar7 == 0) && (*(int *)((longlong)param_2 + 0x2c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
        }
        else {
          FUN_1407e7d30(plVar1,iVar7);
          puVar9 = (undefined8 *)*plVar1;
          if (iVar7 != 0) {
            puVar8 = (undefined1 *)(lVar6 + 0x40);
            lVar6 = (longlong)puVar9 + 0x3c;
            do {
              *puVar9 = 0;
              *(undefined8 *)(lVar6 + -0x34) = 0;
              *(undefined8 *)(lVar6 + -0x2c) = 0;
              *(undefined8 *)(lVar6 + -0x24) = 0;
              FGameplayTagContainer::operator=(puVar9,puVar8 + -0x40);
              *(undefined8 *)(lVar6 + -0x1c) = 0;
              *(undefined8 *)(lVar6 + -0x14) = 0;
              *(undefined8 *)(lVar6 + -0xc) = 0;
              *(undefined8 *)(lVar6 + -4) = 0;
              FGameplayTagContainer::operator=((undefined8 *)(lVar6 + -0x1c),puVar8 + -0x20);
              *(undefined1 *)(lVar6 + 4) = *puVar8;
              FUN_142de2b80(lVar6 + 0xc,puVar8 + 8);
              *(undefined1 *)(lVar6 + 0x8c) = puVar8[0x88];
              FUN_142de2b80(lVar6 + 0x94,puVar8 + 0x90);
              puVar9 = puVar9 + 0x2b;
              *(undefined1 *)(lVar6 + 0x114) = puVar8[0x110];
              puVar2 = puVar8 + 0x111;
              puVar8 = puVar8 + 0x158;
              *(undefined1 *)(lVar6 + 0x115) = *puVar2;
              iVar7 = iVar7 + -1;
              lVar6 = lVar6 + 0x158;
            } while (iVar7 != 0);
          }
        }
      }
      plVar1 = plVar10 + 2;
      plVar10 = plVar10 + 7;
      param_2[6] = *plVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 7;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407e77e0 FUN_1407e77e0 body=306 status=ok
// SIG undefined FUN_1407e77e0(void)

undefined8 FUN_1407e77e0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    puVar5 = (undefined8 *)(param_3 + 0x30);
    do {
      *param_2 = puVar5[-6];
      plVar1 = param_2 + 9;
      param_2[1] = puVar5[-5];
      param_2[2] = puVar5[-4];
      param_2[3] = puVar5[-3];
      param_2[4] = puVar5[-2];
      *(undefined4 *)(param_2 + 5) = *(undefined4 *)(puVar5 + -1);
      *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)((longlong)puVar5 + -4);
      param_2[6] = *puVar5;
      *(undefined4 *)(param_2 + 7) = *(undefined4 *)(puVar5 + 1);
      *(undefined4 *)((longlong)param_2 + 0x3c) = *(undefined4 *)((longlong)puVar5 + 0xc);
      param_2[8] = puVar5[2];
      if (puVar5 + 3 != plVar1) {
        if ((*(int *)(puVar5 + 4) == 0) ||
           (plVar3 = (longlong *)puVar5[3], plVar3 == (longlong *)0x0)) {
          if ((*(int *)(param_2 + 10) != 0) &&
             (plVar3 = (longlong *)*plVar1, plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x28))(plVar3,0);
            if (*plVar1 != 0) {
              lVar4 = FMemory::Realloc(*plVar1,0,0);
              *plVar1 = lVar4;
            }
            *(undefined4 *)(param_2 + 10) = 0;
          }
        }
        else {
          (**(code **)(*plVar3 + 0x30))();
        }
      }
      param_2[0xb] = puVar5[5];
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(puVar5 + 6);
      *(undefined2 *)((longlong)param_2 + 100) = *(undefined2 *)((longlong)puVar5 + 0x34);
      puVar2 = (undefined1 *)((longlong)puVar5 + 0x36);
      puVar5 = puVar5 + 0xd;
      *(undefined1 *)((longlong)param_2 + 0x66) = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xd;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407e7920 FUN_1407e7920 body=128 status=ok
// SIG undefined FUN_1407e7920(void)

undefined8 FUN_1407e7920(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x6c);
    do {
      FUN_1407e6e30(puVar1 + -0x6c,puVar1 + param_3 + -0x6c);
      *(undefined4 *)(puVar1 + -4) = *(undefined4 *)(puVar1 + param_3 + -4);
      *puVar1 = puVar1[param_3];
      puVar1[1] = puVar1[param_3 + 1];
      puVar1[2] = puVar1[param_3 + 2];
      puVar1[3] = puVar1[param_3 + 3];
      puVar1 = puVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407e79a0 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FStructSerializerSetTestStruct>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1407e6f20(param_2 + param_3,param_3);
      param_3 = param_3 + 0x140;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407e7a20 FUN_1407e7a20 body=55 status=ok
// SIG undefined FUN_1407e7a20(void)

void FUN_1407e7a20(void)

{
  undefined8 uVar1;
  
  if (DAT_14685c938 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685c938 = GetStaticEnum(FUN_1407e85a0,uVar1,L"EEncounterAdvanceType");
  }
  return;
}



// FUNCTION 1407e7a60 FUN_1407e7a60 body=55 status=ok
// SIG undefined FUN_1407e7a60(void)

void FUN_1407e7a60(void)

{
  undefined8 uVar1;
  
  if (DAT_14685c930 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685c930 = GetStaticEnum(FUN_1407e85d0,uVar1,L"EScriptedWarmupState");
  }
  return;
}



// FUNCTION 1407e7aa0 FUN_1407e7aa0 body=55 status=ok
// SIG undefined FUN_1407e7aa0(void)

void FUN_1407e7aa0(void)

{
  undefined8 uVar1;
  
  if (DAT_14685c928 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685c928 = GetStaticEnum(FUN_1407e8600,uVar1,L"ESpawnSystemStreamStyle");
  }
  return;
}



// FUNCTION 1407e7ae0 FUN_1407e7ae0 body=162 status=ok
// SIG undefined FUN_1407e7ae0(void)

longlong FUN_1407e7ae0(void)

{
  if (DAT_14685cc50 == 0) {
    FUN_14171ccd0(L"/Script/GbxSpawn",L"SpawnPoint",&DAT_14685cc50,FUN_1407e7eb0,0x4c0,0x10000001,0,
                  L"Engine",&LAB_1407e6490,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14685cc50;
}



// FUNCTION 1407e7bc0 FUN_1407e7bc0 body=6 status=ok
// SIG undefined FUN_1407e7bc0(void)

undefined8 FUN_1407e7bc0(void)

{
  return 0x8f6722aa;
}



// FUNCTION 1407e7bd0 FUN_1407e7bd0 body=6 status=ok
// SIG undefined FUN_1407e7bd0(void)

undefined8 FUN_1407e7bd0(void)

{
  return 0x5a1c202;
}



// FUNCTION 1407e7be0 FUN_1407e7be0 body=6 status=ok
// SIG undefined FUN_1407e7be0(void)

undefined8 FUN_1407e7be0(void)

{
  return 0x423e496e;
}



// FUNCTION 1407e7bf0 FUN_1407e7bf0 body=6 status=ok
// SIG undefined FUN_1407e7bf0(void)

undefined8 FUN_1407e7bf0(void)

{
  return 0xa8723484;
}



// FUNCTION 1407e7c00 FUN_1407e7c00 body=6 status=ok
// SIG undefined FUN_1407e7c00(void)

undefined8 FUN_1407e7c00(void)

{
  return 0xd4df7a52;
}



// FUNCTION 1407e7c10 FUN_1407e7c10 body=6 status=ok
// SIG undefined FUN_1407e7c10(void)

undefined8 FUN_1407e7c10(void)

{
  return 0x407020e4;
}



// FUNCTION 1407e7c20 FUN_1407e7c20 body=6 status=ok
// SIG undefined FUN_1407e7c20(void)

undefined8 FUN_1407e7c20(void)

{
  return 0x60436900;
}



// FUNCTION 1407e7c30 FUN_1407e7c30 body=6 status=ok
// SIG undefined FUN_1407e7c30(void)

undefined8 FUN_1407e7c30(void)

{
  return 0x539e58be;
}



// FUNCTION 1407e7cd0 FUN_1407e7cd0 body=85 status=ok
// SIG undefined FUN_1407e7cd0(void)

undefined8 FUN_1407e7cd0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Gearbox/ActorArchetypeProviderInterface.h"
             ,0x12,L"Pure virtual not implemented (%s)",
             L"IActorArchetypeProviderInterface::ProvideActorArchetype");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Gearbox/ActorArchetypeProviderInterface.h"
             ,0x12,L"Pure virtual not implemented (%s)",
             L"IActorArchetypeProviderInterface::ProvideActorArchetype");
  return 0;
}



// FUNCTION 1407e7d30 FUN_1407e7d30 body=130 status=ok
// SIG undefined FUN_1407e7d30(void)

void FUN_1407e7d30(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x158,0);
    iVar3 = (int)(uVar1 / 0x158);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x158,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1407e7dc0 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_1407da110(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1407e7e30 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_1407da1d0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1407e7ea0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UCircularThrobber::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1407e7eb0 FUN_1407e7eb0 body=34 status=ok
// SIG undefined FUN_1407e7eb0(void)

void FUN_1407e7eb0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407e7ae0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DisableSpawnPoint_1440ec2b0,5);
  return;
}



// FUNCTION 1407e7ee0 StaticRegisterNativesUAnimMontage body=34 status=ok
// SIG undefined StaticRegisterNativesUAnimMontage(void)

void UAnimMontage::StaticRegisterNativesUAnimMontage(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ShouldSkipActorProperty_1440ebb28,1);
  return;
}



// FUNCTION 1407e7f10 FUN_1407e7f10 body=34 status=ok
// SIG undefined FUN_1407e7f10(void)

void FUN_1407e7f10(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407e52a0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ActorDestroyed_1440ebdf0,1);
  return;
}



// FUNCTION 1407e7f40 FUN_1407e7f40 body=34 status=ok
// SIG undefined FUN_1407e7f40(void)

void FUN_1407e7f40(void)

{
  undefined8 uVar1;
  
  uVar1 = AGVersusPlayerState::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DisableSpawnPoint_1440ec300,8);
  return;
}



// FUNCTION 1407e7f70 FUN_1407e7f70 body=34 status=ok
// SIG undefined FUN_1407e7f70(void)

void FUN_1407e7f70(void)

{
  undefined8 uVar1;
  
  uVar1 = ACameraActor::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnCycleActor_1440ec380,2);
  return;
}



// FUNCTION 1407e7fa0 FUN_1407e7fa0 body=34 status=ok
// SIG undefined FUN_1407e7fa0(void)

void FUN_1407e7fa0(void)

{
  undefined8 uVar1;
  
  uVar1 = UTextureRenderTargetCube::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_IsFactoryClassAllowed_1440eaab0,1);
  return;
}



// FUNCTION 1407e7fd0 StaticRegisterNativesUUGCutsceneScreenUW body=34 status=ok
// SIG undefined StaticRegisterNativesUUGCutsceneScreenUW(void)

void UUGCutsceneScreenUW::StaticRegisterNativesUUGCutsceneScreenUW(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_IsFactoryClassAllowed_1440eadf0,1);
  return;
}



// FUNCTION 1407e8000 StaticRegisterNativesUAsyncTaskDownloadImage body=34 status=ok
// SIG undefined StaticRegisterNativesUAsyncTaskDownloadImage(void)

void UAsyncTaskDownloadImage::StaticRegisterNativesUAsyncTaskDownloadImage(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_IsFactoryClassAllowed_1440eb130,1);
  return;
}



// FUNCTION 1407e8030 FUN_1407e8030 body=82 status=ok
// SIG undefined FUN_1407e8030(void)

void FUN_1407e8030(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685cad0 == 0) {
    uVar1 = FUN_1407e7bc0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685cad0 = GetStaticStruct(FUN_1407e8630,uVar2,L"EncounterAdvanceData",0x10,uVar1);
  }
  return;
}



// FUNCTION 1407e8090 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_RefPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685cac0 == 0) {
    uVar1 = FUN_1407e7bd0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685cac0 = GetStaticStruct(FUN_1407e8660,uVar2,L"EncounterWave",0x38,uVar1);
  }
  return;
}



// FUNCTION 1407e80f0 FUN_1407e80f0 body=82 status=ok
// SIG undefined FUN_1407e80f0(void)

void FUN_1407e80f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685ca88 == 0) {
    uVar1 = FUN_1407e7be0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685ca88 = GetStaticStruct(FUN_1407e8690,uVar2,L"SpawnBunchListItem",0x90,uVar1);
  }
  return;
}



// FUNCTION 1407e8150 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FCharacterVoicesData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685cbf8 == 0) {
    uVar1 = FUN_1407e7c00();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685cbf8 = GetStaticStruct(FUN_1407e4a80,uVar2,L"SpawnManagerAsyncRequest",0x68,uVar1);
  }
  return;
}



// FUNCTION 1407e81b0 FUN_1407e81b0 body=82 status=ok
// SIG undefined FUN_1407e81b0(void)

void FUN_1407e81b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685cbe8 == 0) {
    uVar1 = FUN_1407e7bf0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685cbe8 = GetStaticStruct(FUN_1407e86c0,uVar2,L"SpawnManagerAsyncRequestEntry",0x70,uVar1)
    ;
  }
  return;
}



// FUNCTION 1407e8210 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseDriverTransform::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685cb78 == 0) {
    uVar1 = FUN_1407e7c10();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685cb78 = GetStaticStruct(FUN_1407e86f0,uVar2,L"SpawnOptionDataSoftPath",0x18,uVar1);
  }
  return;
}



// FUNCTION 1407e8270 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_CopyPoseFromMesh::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685ca28 == 0) {
    uVar1 = FUN_1407e7c20();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685ca28 = GetStaticStruct(FUN_1407e8720,uVar2,L"SpawnerData",0x140,uVar1);
  }
  return;
}



// FUNCTION 1407e82d0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FReferenceBoneFrame::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685ca38 == 0) {
    uVar1 = FUN_1407e7c30();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685ca38 = GetStaticStruct(FUN_1407e8750,uVar2,L"SpawnerLinkData",0x28,uVar1);
  }
  return;
}



// FUNCTION 1407e8330 FUN_1407e8330 body=47 status=ok
// SIG undefined FUN_1407e8330(void)

longlong FUN_1407e8330(void)

{
  if (DAT_14685cb68 == 0) {
    FUN_141786440(&DAT_14685cb68,&PTR_FUN_1440e8900);
  }
  return DAT_14685cb68;
}



// FUNCTION 1407e8360 FUN_1407e8360 body=47 status=ok
// SIG undefined FUN_1407e8360(void)

longlong FUN_1407e8360(void)

{
  if (DAT_14685cb88 == 0) {
    FUN_141786440(&DAT_14685cb88,&PTR_FUN_1440e8be0);
  }
  return DAT_14685cb88;
}



// FUNCTION 1407e8390 FUN_1407e8390 body=47 status=ok
// SIG undefined FUN_1407e8390(void)

longlong FUN_1407e8390(void)

{
  if (DAT_14685cc08 == 0) {
    FUN_141786440(&DAT_14685cc08,&PTR_FUN_1440e6560);
  }
  return DAT_14685cc08;
}



// FUNCTION 1407e83c0 FUN_1407e83c0 body=47 status=ok
// SIG undefined FUN_1407e83c0(void)

longlong FUN_1407e83c0(void)

{
  if (DAT_14685ccb0 == 0) {
    FUN_141786440(&DAT_14685ccb0,&PTR_FUN_1440e8400);
  }
  return DAT_14685ccb0;
}



// FUNCTION 1407e83f0 FUN_1407e83f0 body=47 status=ok
// SIG undefined FUN_1407e83f0(void)

longlong FUN_1407e83f0(void)

{
  if (DAT_14685cbd0 == 0) {
    FUN_141786440(&DAT_14685cbd0,&PTR_FUN_1440e5f80);
  }
  return DAT_14685cbd0;
}



// FUNCTION 1407e8420 FUN_1407e8420 body=47 status=ok
// SIG undefined FUN_1407e8420(void)

longlong FUN_1407e8420(void)

{
  if (DAT_14685ca48 == 0) {
    FUN_141786440(&DAT_14685ca48,&PTR_GetPrivateStaticClass_1440e91a0);
  }
  return DAT_14685ca48;
}



// FUNCTION 1407e8450 FUN_1407e8450 body=47 status=ok
// SIG undefined FUN_1407e8450(void)

longlong FUN_1407e8450(void)

{
  if (DAT_14685ca58 == 0) {
    FUN_141786440(&DAT_14685ca58,&PTR_FUN_1440e9570);
  }
  return DAT_14685ca58;
}



// FUNCTION 1407e8480 FUN_1407e8480 body=47 status=ok
// SIG undefined FUN_1407e8480(void)

longlong FUN_1407e8480(void)

{
  if (DAT_14685ca98 == 0) {
    FUN_141786440(&DAT_14685ca98,&PTR_FUN_1440e7010);
  }
  return DAT_14685ca98;
}



// FUNCTION 1407e84b0 FUN_1407e84b0 body=47 status=ok
// SIG undefined FUN_1407e84b0(void)

longlong FUN_1407e84b0(void)

{
  if (DAT_14685cae0 == 0) {
    FUN_141786440(&DAT_14685cae0,&PTR_FUN_1440e7770);
  }
  return DAT_14685cae0;
}



// FUNCTION 1407e84e0 FUN_1407e84e0 body=47 status=ok
// SIG undefined FUN_1407e84e0(void)

longlong FUN_1407e84e0(void)

{
  if (DAT_14685cb48 == 0) {
    FUN_141786440(&DAT_14685cb48,&PTR_GetPrivateStaticClass_1440e5ce0);
  }
  return DAT_14685cb48;
}



// FUNCTION 1407e8510 FUN_1407e8510 body=47 status=ok
// SIG undefined FUN_1407e8510(void)

longlong FUN_1407e8510(void)

{
  if (DAT_14685cbe0 == 0) {
    FUN_141786a30(&DAT_14685cbe0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146261600);
  }
  return DAT_14685cbe0;
}



// FUNCTION 1407e8540 FUN_1407e8540 body=47 status=ok
// SIG undefined FUN_1407e8540(void)

longlong FUN_1407e8540(void)

{
  if (DAT_14685cc58 == 0) {
    FUN_141786a30(&DAT_14685cc58,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146261ed0);
  }
  return DAT_14685cc58;
}



// FUNCTION 1407e8570 FUN_1407e8570 body=47 status=ok
// SIG undefined FUN_1407e8570(void)

longlong FUN_1407e8570(void)

{
  if (DAT_14685cc18 == 0) {
    FUN_141786a30(&DAT_14685cc18,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146261a70);
  }
  return DAT_14685cc18;
}



// FUNCTION 1407e85a0 FUN_1407e85a0 body=47 status=ok
// SIG undefined FUN_1407e85a0(void)

longlong FUN_1407e85a0(void)

{
  if (DAT_14685cab8 == 0) {
    FUN_1417866a0(&DAT_14685cab8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146262c00);
  }
  return DAT_14685cab8;
}



// FUNCTION 1407e85d0 FUN_1407e85d0 body=47 status=ok
// SIG undefined FUN_1407e85d0(void)

longlong FUN_1407e85d0(void)

{
  if (DAT_14685ca20 == 0) {
    FUN_1417866a0(&DAT_14685ca20,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625ee40);
  }
  return DAT_14685ca20;
}



// FUNCTION 1407e8600 FUN_1407e8600 body=47 status=ok
// SIG undefined FUN_1407e8600(void)

longlong FUN_1407e8600(void)

{
  if (DAT_14685cbb0 == 0) {
    FUN_1417866a0(&DAT_14685cbb0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146262c50);
  }
  return DAT_14685cbb0;
}



// FUNCTION 1407e8630 FUN_1407e8630 body=47 status=ok
// SIG undefined FUN_1407e8630(void)

longlong FUN_1407e8630(void)

{
  if (DAT_14685cad8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685cad8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625fed0);
  }
  return DAT_14685cad8;
}



// FUNCTION 1407e8660 FUN_1407e8660 body=47 status=ok
// SIG undefined FUN_1407e8660(void)

longlong FUN_1407e8660(void)

{
  if (DAT_14685cac8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685cac8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625fce0);
  }
  return DAT_14685cac8;
}



// FUNCTION 1407e8690 FUN_1407e8690 body=47 status=ok
// SIG undefined FUN_1407e8690(void)

longlong FUN_1407e8690(void)

{
  if (DAT_14685ca90 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685ca90,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625f800);
  }
  return DAT_14685ca90;
}



// FUNCTION 1407e86c0 FUN_1407e86c0 body=47 status=ok
// SIG undefined FUN_1407e86c0(void)

longlong FUN_1407e86c0(void)

{
  if (DAT_14685cbf0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685cbf0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146261640);
  }
  return DAT_14685cbf0;
}



// FUNCTION 1407e86f0 FUN_1407e86f0 body=47 status=ok
// SIG undefined FUN_1407e86f0(void)

longlong FUN_1407e86f0(void)

{
  if (DAT_14685cb80 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685cb80,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146260960);
  }
  return DAT_14685cb80;
}



// FUNCTION 1407e8720 FUN_1407e8720 body=47 status=ok
// SIG undefined FUN_1407e8720(void)

longlong FUN_1407e8720(void)

{
  if (DAT_14685ca30 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685ca30,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625f170);
  }
  return DAT_14685ca30;
}



// FUNCTION 1407e8750 FUN_1407e8750 body=47 status=ok
// SIG undefined FUN_1407e8750(void)

longlong FUN_1407e8750(void)

{
  if (DAT_14685ca40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685ca40,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14625f330);
  }
  return DAT_14685ca40;
}



// FUNCTION 1407e8790 FUN_1407e8790 body=128 status=ok
// SIG undefined FUN_1407e8790(void)

void FUN_1407e8790(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
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
  thunk_FUN_1407d7200(param_1,local_res10);
  return;
}



// FUNCTION 1407e88b0 FUN_1407e88b0 body=52 status=ok
// SIG undefined FUN_1407e88b0(void)

void FUN_1407e88b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1407cb590(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 1407e8910 FUN_1407e8910 body=96 status=ok
// SIG undefined FUN_1407e8910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407e8910(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_1407cb7a0(param_1,local_48);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  return;
}



// FUNCTION 1407e89a0 FUN_1407e89a0 body=143 status=ok
// SIG undefined FUN_1407e89a0(void)

void FUN_1407e89a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  
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
  uVar1 = FUN_1407cd120(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407e8a50 FUN_1407e8a50 body=128 status=ok
// SIG undefined FUN_1407e8a50(void)

void FUN_1407e8a50(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
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
  FUN_1407daa40(param_1,local_res10);
  return;
}



// FUNCTION 1407e8ad0 FUN_1407e8ad0 body=127 status=ok
// SIG undefined FUN_1407e8ad0(void)

void FUN_1407e8ad0(longlong param_1,longlong param_2)

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
  *(undefined8 *)(param_1 + 0x8e0) = local_res8;
  return;
}



// FUNCTION 1407e8b50 FUN_1407e8b50 body=132 status=ok
// SIG undefined FUN_1407e8b50(void)

void FUN_1407e8b50(undefined8 param_1,longlong param_2,byte *param_3)

{
  longlong local_res10;
  
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
  *param_3 = (*(byte *)(local_res10 + 0x3e) ^ 0xff) & 1;
  return;
}



// FUNCTION 1407e8be0 FUN_1407e8be0 body=53 status=ok
// SIG undefined FUN_1407e8be0(void)

void FUN_1407e8be0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &PTR_FUN_1440ed850;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407e8c20 FUN_1407e8c20 body=53 status=ok
// SIG undefined FUN_1407e8c20(void)

void FUN_1407e8c20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1440ed968;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407e8c60 FUN_1407e8c60 body=53 status=ok
// SIG undefined FUN_1407e8c60(void)

void FUN_1407e8c60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x158;
    *puVar1 = &PTR_FUN_1440eda80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407e8ca0 FUN_1407e8ca0 body=53 status=ok
// SIG undefined FUN_1407e8ca0(void)

void FUN_1407e8ca0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x128;
    *puVar1 = &PTR_FUN_1440edb98;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407e8ce0 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 7;
    *puVar1 = &PTR_FUN_1440edcb0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 1407e8d20 FUN_1407e8d20 body=53 status=ok
// SIG undefined FUN_1407e8d20(void)

void FUN_1407e8d20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1440eddc8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1407e8d60 FUN_1407e8d60 body=53 status=ok
// SIG undefined FUN_1407e8d60(void)

void FUN_1407e8d60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *puVar1 = &PTR_FUN_1440ed530;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407e8ed0 FUN_1407e8ed0 body=504 status=ok
// SIG undefined FUN_1407e8ed0(void)

undefined8 FUN_1407e8ed0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar7 = (undefined4 *)(param_2 + 0x114);
    do {
      *(undefined8 *)(puVar7 + -0x45) = *(undefined8 *)(param_3 + -0x114 + (longlong)puVar7);
      *(undefined1 *)(puVar7 + -0x43) = *(undefined1 *)(param_3 + -0x10c + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0x10b) =
           *(undefined1 *)(param_3 + -0x10b + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0x10a) =
           *(undefined1 *)(param_3 + -0x10a + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0x109) =
           *(undefined1 *)(param_3 + -0x109 + (longlong)puVar7);
      *(undefined8 *)(puVar7 + -0x42) = *(undefined8 *)(param_3 + -0x108 + (longlong)puVar7);
      *(undefined8 *)(puVar7 + -0x3f) = *(undefined8 *)(param_3 + -0xfc + (longlong)puVar7);
      *(undefined8 *)(puVar7 + -0x3d) = *(undefined8 *)(param_3 + -0xf4 + (longlong)puVar7);
      puVar1 = (undefined8 *)(param_3 + -0xec + (longlong)puVar7);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + -0x3b) = *puVar1;
      *(undefined8 *)(puVar7 + -0x39) = uVar6;
      puVar1 = (undefined8 *)(param_3 + -0xdc + (longlong)puVar7);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + -0x37) = *puVar1;
      *(undefined8 *)(puVar7 + -0x35) = uVar6;
      puVar1 = (undefined8 *)(param_3 + -0xcc + (longlong)puVar7);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + -0x33) = *puVar1;
      *(undefined8 *)(puVar7 + -0x31) = uVar6;
      *(undefined8 *)(puVar7 + -0x2f) = *(undefined8 *)(param_3 + -0xbc + (longlong)puVar7);
      puVar2 = (undefined4 *)(param_3 + -0xb4 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar7[-0x2d] = *puVar2;
      puVar7[-0x2c] = uVar3;
      puVar7[-0x2b] = uVar4;
      puVar7[-0x2a] = uVar5;
      *(undefined8 *)(puVar7 + -0x29) = *(undefined8 *)(param_3 + -0xa4 + (longlong)puVar7);
      puVar7[-0x27] = *(undefined4 *)(param_3 + -0x9c + (longlong)puVar7);
      puVar7[-0x26] = *(undefined4 *)(param_3 + -0x98 + (longlong)puVar7);
      puVar7[-0x25] = *(undefined4 *)(param_3 + -0x94 + (longlong)puVar7);
      FString::operator=(puVar7 + -0x23,param_3 + -0x8c + (longlong)puVar7);
      *(undefined1 *)(puVar7 + -0x1f) = *(undefined1 *)(param_3 + -0x7c + (longlong)puVar7);
      *(undefined1 *)(puVar7 + -0x1d) = *(undefined1 *)(param_3 + -0x74 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0x73) =
           *(undefined1 *)(param_3 + -0x73 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0x72) =
           *(undefined1 *)(param_3 + -0x72 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0x71) =
           *(undefined1 *)(param_3 + -0x71 + (longlong)puVar7);
      *(undefined8 *)(puVar7 + -0x1c) = *(undefined8 *)(param_3 + -0x70 + (longlong)puVar7);
      *(undefined8 *)(puVar7 + -0x19) = *(undefined8 *)(param_3 + -100 + (longlong)puVar7);
      *(undefined8 *)(puVar7 + -0x17) = *(undefined8 *)(param_3 + -0x5c + (longlong)puVar7);
      puVar1 = (undefined8 *)(param_3 + -0x54 + (longlong)puVar7);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + -0x15) = *puVar1;
      *(undefined8 *)(puVar7 + -0x13) = uVar6;
      puVar1 = (undefined8 *)(param_3 + -0x44 + (longlong)puVar7);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + -0x11) = *puVar1;
      *(undefined8 *)(puVar7 + -0xf) = uVar6;
      puVar1 = (undefined8 *)(param_3 + -0x34 + (longlong)puVar7);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + -0xd) = *puVar1;
      *(undefined8 *)(puVar7 + -0xb) = uVar6;
      *(undefined8 *)(puVar7 + -9) = *(undefined8 *)(param_3 + -0x24 + (longlong)puVar7);
      puVar1 = (undefined8 *)(param_3 + -0x1c + (longlong)puVar7);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + -7) = *puVar1;
      *(undefined8 *)(puVar7 + -5) = uVar6;
      *(undefined8 *)(puVar7 + -3) = *(undefined8 *)(param_3 + -0xc + (longlong)puVar7);
      puVar7[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar7);
      *puVar7 = *(undefined4 *)(param_3 + (longlong)puVar7);
      puVar7[1] = *(undefined4 *)(param_3 + 4 + (longlong)puVar7);
      puVar7[3] = *(undefined4 *)(param_3 + 0xc + (longlong)puVar7);
      puVar7 = puVar7 + 0x4a;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407e90d0 FUN_1407e90d0 body=534 status=ok
// SIG undefined FUN_1407e90d0(void)

undefined8 FUN_1407e90d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar7 = (undefined4 *)(param_2 + 0x144);
    do {
      FGameplayTagContainer::operator=(puVar7 + -0x51,param_3 + -0x144 + (longlong)puVar7);
      FGameplayTagContainer::operator=(puVar7 + -0x49,param_3 + -0x124 + (longlong)puVar7);
      *(undefined1 *)(puVar7 + -0x41) = *(undefined1 *)(param_3 + -0x104 + (longlong)puVar7);
      *(undefined1 *)(puVar7 + -0x3f) = *(undefined1 *)(param_3 + -0xfc + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0xfb) =
           *(undefined1 *)(param_3 + -0xfb + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0xfa) =
           *(undefined1 *)(param_3 + -0xfa + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0xf9) =
           *(undefined1 *)(param_3 + -0xf9 + (longlong)puVar7);
      *(undefined8 *)(puVar7 + -0x3e) = *(undefined8 *)(param_3 + -0xf8 + (longlong)puVar7);
      *(undefined8 *)(puVar7 + -0x3b) = *(undefined8 *)(param_3 + -0xec + (longlong)puVar7);
      *(undefined8 *)(puVar7 + -0x39) = *(undefined8 *)(param_3 + -0xe4 + (longlong)puVar7);
      puVar2 = (undefined8 *)(param_3 + -0xdc + (longlong)puVar7);
      uVar6 = puVar2[1];
      *(undefined8 *)(puVar7 + -0x37) = *puVar2;
      *(undefined8 *)(puVar7 + -0x35) = uVar6;
      puVar2 = (undefined8 *)(param_3 + -0xcc + (longlong)puVar7);
      uVar6 = puVar2[1];
      *(undefined8 *)(puVar7 + -0x33) = *puVar2;
      *(undefined8 *)(puVar7 + -0x31) = uVar6;
      puVar2 = (undefined8 *)(param_3 + -0xbc + (longlong)puVar7);
      uVar6 = puVar2[1];
      *(undefined8 *)(puVar7 + -0x2f) = *puVar2;
      *(undefined8 *)(puVar7 + -0x2d) = uVar6;
      *(undefined8 *)(puVar7 + -0x2b) = *(undefined8 *)(param_3 + -0xac + (longlong)puVar7);
      puVar2 = (undefined8 *)(param_3 + -0xa4 + (longlong)puVar7);
      uVar6 = puVar2[1];
      *(undefined8 *)(puVar7 + -0x29) = *puVar2;
      *(undefined8 *)(puVar7 + -0x27) = uVar6;
      *(undefined8 *)(puVar7 + -0x25) = *(undefined8 *)(param_3 + -0x94 + (longlong)puVar7);
      puVar7[-0x23] = *(undefined4 *)(param_3 + -0x8c + (longlong)puVar7);
      puVar7[-0x22] = *(undefined4 *)(param_3 + -0x88 + (longlong)puVar7);
      puVar7[-0x21] = *(undefined4 *)(param_3 + -0x84 + (longlong)puVar7);
      *(undefined1 *)(puVar7 + -0x1f) = *(undefined1 *)(param_3 + -0x7c + (longlong)puVar7);
      *(undefined1 *)(puVar7 + -0x1d) = *(undefined1 *)(param_3 + -0x74 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0x73) =
           *(undefined1 *)(param_3 + -0x73 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0x72) =
           *(undefined1 *)(param_3 + -0x72 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0x71) =
           *(undefined1 *)(param_3 + -0x71 + (longlong)puVar7);
      *(undefined8 *)(puVar7 + -0x1c) = *(undefined8 *)((longlong)puVar7 + param_3 + -0x70);
      *(undefined8 *)(puVar7 + -0x19) = *(undefined8 *)((longlong)puVar7 + param_3 + -100);
      *(undefined8 *)(puVar7 + -0x17) = *(undefined8 *)((longlong)puVar7 + param_3 + -0x5c);
      puVar2 = (undefined8 *)((longlong)puVar7 + param_3 + -0x54);
      uVar6 = puVar2[1];
      *(undefined8 *)(puVar7 + -0x15) = *puVar2;
      *(undefined8 *)(puVar7 + -0x13) = uVar6;
      puVar2 = (undefined8 *)((longlong)puVar7 + param_3 + -0x44);
      uVar6 = puVar2[1];
      *(undefined8 *)(puVar7 + -0x11) = *puVar2;
      *(undefined8 *)(puVar7 + -0xf) = uVar6;
      puVar2 = (undefined8 *)((longlong)puVar7 + param_3 + -0x34);
      uVar6 = puVar2[1];
      *(undefined8 *)(puVar7 + -0xd) = *puVar2;
      *(undefined8 *)(puVar7 + -0xb) = uVar6;
      *(undefined8 *)(puVar7 + -9) = *(undefined8 *)((longlong)puVar7 + param_3 + -0x24);
      puVar1 = (undefined4 *)((longlong)puVar7 + param_3 + -0x1c);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar7[-7] = *puVar1;
      puVar7[-6] = uVar3;
      puVar7[-5] = uVar4;
      puVar7[-4] = uVar5;
      *(undefined8 *)(puVar7 + -3) = *(undefined8 *)((longlong)puVar7 + param_3 + -0xc);
      puVar7[-1] = *(undefined4 *)((longlong)puVar7 + param_3 + -4);
      *puVar7 = *(undefined4 *)(param_3 + (longlong)puVar7);
      puVar7[1] = *(undefined4 *)((longlong)puVar7 + param_3 + 4);
      *(undefined1 *)(puVar7 + 3) = *(undefined1 *)(param_3 + 0xc + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + 0xd) = *(undefined1 *)(param_3 + 0xd + (longlong)puVar7);
      puVar7 = puVar7 + 0x56;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407e92f0 FUN_1407e92f0 body=226 status=ok
// SIG undefined FUN_1407e92f0(void)

undefined8 FUN_1407e92f0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  void *_Src;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined4 *)(param_3 + 8);
    do {
      *param_2 = *(undefined8 *)(puVar4 + -2);
      puVar1 = param_2 + 3;
      *(undefined4 *)(param_2 + 1) = *puVar4;
      param_2[2] = *(undefined8 *)(puVar4 + 2);
      if (puVar1 != (undefined8 *)(puVar4 + 4)) {
        iVar3 = puVar4[6];
        _Src = *(void **)(puVar4 + 4);
        *(int *)(param_2 + 4) = iVar3;
        if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0x24) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x24) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar3);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 << 3);
        }
      }
      *(undefined1 *)(param_2 + 5) = *(undefined1 *)(puVar4 + 8);
      puVar2 = (undefined1 *)((longlong)puVar4 + 0x21);
      puVar4 = puVar4 + 0xc;
      *(undefined1 *)((longlong)param_2 + 0x29) = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 6;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407e93e0 FUN_1407e93e0 body=528 status=ok
// SIG undefined FUN_1407e93e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1407e93e0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  uVar9 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (param_4 != 0) {
    puVar10 = (uint *)(param_3 + 0xa4);
    local_28 = uVar9;
    do {
      *param_2 = *(undefined8 *)(puVar10 + -0x29);
      *(char *)(param_2 + 1) = (char)puVar10[-0x27];
      *(uint *)((longlong)param_2 + 0xc) = puVar10[-0x26];
      *(uint *)(param_2 + 2) = puVar10[-0x25];
      *(uint *)((longlong)param_2 + 0x14) = puVar10[-0x24];
      *(char *)(param_2 + 3) = (char)puVar10[-0x23];
      *(undefined1 *)((longlong)param_2 + 0x19) = *(undefined1 *)((longlong)puVar10 + -0x8b);
      *(undefined1 *)((longlong)param_2 + 0x1a) = *(undefined1 *)((longlong)puVar10 + -0x8a);
      *(undefined1 *)((longlong)param_2 + 0x1b) = *(undefined1 *)((longlong)puVar10 + -0x89);
      *(undefined8 *)((longlong)param_2 + 0x1c) = *(undefined8 *)(puVar10 + -0x22);
      *(uint *)((longlong)param_2 + 0x24) = puVar10[-0x20];
      param_2[5] = *(undefined8 *)(puVar10 + -0x1f);
      *(uint *)(param_2 + 6) = puVar10[-0x1d];
      *(undefined8 *)((longlong)param_2 + 0x34) = *(undefined8 *)(puVar10 + -0x1c);
      *(uint *)((longlong)param_2 + 0x3c) = puVar10[-0x1a];
      param_2[8] = *(undefined8 *)(puVar10 + -0x19);
      *(uint *)(param_2 + 9) = puVar10[-0x17];
      param_2[10] = *(undefined8 *)(puVar10 + -0x15);
      FString::operator=(param_2 + 0xb,puVar10 + -0x13);
      puVar3 = param_2 + 0x11;
      *(uint *)(param_2 + 0xd) = puVar10[-0xf];
      *(uint *)((longlong)param_2 + 0x6c) = puVar10[-0xe];
      param_2[0xe] = *(undefined8 *)(puVar10 + -0xd);
      *(uint *)(param_2 + 0xf) = puVar10[-0xb];
      *(uint *)((longlong)param_2 + 0x7c) = puVar10[-10];
      *(short *)(param_2 + 0x10) = (short)puVar10[-9];
      *(undefined1 *)((longlong)param_2 + 0x82) = *(undefined1 *)((longlong)puVar10 + -0x22);
      plVar6 = *(longlong **)(puVar10 + -5);
      uVar7 = *(undefined8 *)(puVar10 + -7);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_48 = uVar7;
      plStack_40 = plVar6;
      if (&local_48 != puVar3) {
        local_48 = *puVar3;
        plStack_40 = (longlong *)param_2[0x12];
        *puVar3 = uVar7;
        param_2[0x12] = plVar6;
        local_38 = uVar7;
        plStack_30 = plVar6;
      }
      plVar6 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_40 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_40 + 8))(plStack_40,1);
          }
        }
      }
      param_2[0x13] = *(undefined8 *)(puVar10 + -3);
      *(uint *)(param_2 + 0x14) = puVar10[-1];
      uVar5 = *puVar10;
      uVar9 = (ulonglong)uVar5;
      puVar10 = puVar10 + 0x2a;
      *(uint *)((longlong)param_2 + 0xa4) = uVar5;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x15;
    } while (param_4 != 0);
  }
  return CONCAT71((int7)(uVar9 >> 8),1);
}



// FUNCTION 1407e9610 FUN_1407e9610 body=118 status=ok
// SIG undefined FUN_1407e9610(void)

void FUN_1407e9610(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_2 + 0x90);
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
  if (*(longlong *)(param_2 + 0x58) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1407e9690 FUN_1407e9690 body=55 status=ok
// SIG undefined FUN_1407e9690(void)

void FUN_1407e9690(void)

{
  undefined8 uVar1;
  
  if (DAT_14685cd10 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685cd10 = GetStaticEnum(FUN_1407e9c00,uVar1,L"EIrrelevantAction");
  }
  return;
}



// FUNCTION 1407e96d0 FUN_1407e96d0 body=55 status=ok
// SIG undefined FUN_1407e96d0(void)

void FUN_1407e96d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14685cd18 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685cd18 = GetStaticEnum(FUN_1407e9c30,uVar1,L"ERespawnStyle");
  }
  return;
}



// FUNCTION 1407e9710 FUN_1407e9710 body=55 status=ok
// SIG undefined FUN_1407e9710(void)

void FUN_1407e9710(void)

{
  undefined8 uVar1;
  
  if (DAT_14685cd00 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685cd00 = GetStaticEnum(FUN_1407e9c60,uVar1,L"ESpawnLimitType");
  }
  return;
}



// FUNCTION 1407e9750 FUN_1407e9750 body=55 status=ok
// SIG undefined FUN_1407e9750(void)

void FUN_1407e9750(void)

{
  undefined8 uVar1;
  
  if (DAT_14685ccf8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685ccf8 = GetStaticEnum(FUN_1407e9c90,uVar1,L"ESpawnPointFilter");
  }
  return;
}



// FUNCTION 1407e9790 FUN_1407e9790 body=55 status=ok
// SIG undefined FUN_1407e9790(void)

void FUN_1407e9790(void)

{
  undefined8 uVar1;
  
  if (DAT_14685ccf0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685ccf0 = GetStaticEnum(FUN_1407e9cc0,uVar1,L"ESpawnPointUseType");
  }
  return;
}



// FUNCTION 1407e97d0 FUN_1407e97d0 body=55 status=ok
// SIG undefined FUN_1407e97d0(void)

void FUN_1407e97d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14685cd20 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685cd20 = GetStaticEnum(FUN_1407e9cf0,uVar1,L"ESpawnStretchType");
  }
  return;
}



// FUNCTION 1407e9810 FUN_1407e9810 body=55 status=ok
// SIG undefined FUN_1407e9810(void)

void FUN_1407e9810(void)

{
  undefined8 uVar1;
  
  if (DAT_14685cce8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685cce8 = GetStaticEnum(FUN_1407e9d20,uVar1,L"ESpawnerActorState");
  }
  return;
}



// FUNCTION 1407e9850 FUN_1407e9850 body=55 status=ok
// SIG undefined FUN_1407e9850(void)

void FUN_1407e9850(void)

{
  undefined8 uVar1;
  
  if (DAT_14685cd08 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685cd08 = GetStaticEnum(FUN_1407e9d50,uVar1,L"ESpawnerCritical");
  }
  return;
}



// FUNCTION 1407e9890 FUN_1407e9890 body=55 status=ok
// SIG undefined FUN_1407e9890(void)

void FUN_1407e9890(void)

{
  undefined8 uVar1;
  
  if (DAT_14685cce0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685cce0 = GetStaticEnum(FUN_1407e9d80,uVar1,L"ESpawnerType");
  }
  return;
}



// FUNCTION 1407e98d0 FUN_1407e98d0 body=6 status=ok
// SIG undefined FUN_1407e98d0(void)

undefined8 FUN_1407e98d0(void)

{
  return 0x1595b3ae;
}



// FUNCTION 1407e98e0 FUN_1407e98e0 body=6 status=ok
// SIG undefined FUN_1407e98e0(void)

undefined8 FUN_1407e98e0(void)

{
  return 0xbfb29104;
}



// FUNCTION 1407e98f0 FUN_1407e98f0 body=6 status=ok
// SIG undefined FUN_1407e98f0(void)

undefined8 FUN_1407e98f0(void)

{
  return 0x8660e762;
}



// FUNCTION 1407e9900 FUN_1407e9900 body=6 status=ok
// SIG undefined FUN_1407e9900(void)

undefined8 FUN_1407e9900(void)

{
  return 0xe0be9d40;
}



// FUNCTION 1407e9910 FUN_1407e9910 body=6 status=ok
// SIG undefined FUN_1407e9910(void)

undefined8 FUN_1407e9910(void)

{
  return 0xb84e89b5;
}



// FUNCTION 1407e9920 FUN_1407e9920 body=6 status=ok
// SIG undefined FUN_1407e9920(void)

undefined8 FUN_1407e9920(void)

{
  return 0xb92df75b;
}



// FUNCTION 1407e9930 FUN_1407e9930 body=6 status=ok
// SIG undefined FUN_1407e9930(void)

undefined8 FUN_1407e9930(void)

{
  return 0x7c6cbf62;
}



// FUNCTION 1407e9960 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_MeshSpaceRefPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685ce18 == 0) {
    uVar1 = FUN_1407e98d0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685ce18 = GetStaticStruct(FUN_1407e9db0,uVar2,L"PointWidget",0x30,uVar1);
  }
  return;
}



// FUNCTION 1407e99c0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPlayerCharacterState::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685ce08 == 0) {
    uVar1 = FUN_1407e98e0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685ce08 = GetStaticStruct(FUN_1407e9de0,uVar2,L"SpawnDetails",7,uVar1);
  }
  return;
}



// FUNCTION 1407e9a20 FUN_1407e9a20 body=82 status=ok
// SIG undefined FUN_1407e9a20(void)

void FUN_1407e9a20(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685cdf8 == 0) {
    uVar1 = FUN_1407e98f0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685cdf8 = GetStaticStruct(FUN_1407e9e10,uVar2,L"SpawnFactoryData",0x128,uVar1);
  }
  return;
}



// FUNCTION 1407e9a80 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_SpringBone::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685cde8 == 0) {
    uVar1 = FUN_1407e9900();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685cde8 = GetStaticStruct(FUN_1407e9e40,uVar2,L"SpawnLimitData",0x158,uVar1);
  }
  return;
}



// FUNCTION 1407e9ae0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_MeshSpaceRefPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685cdd8 == 0) {
    uVar1 = FUN_1407e9910();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685cdd8 = GetStaticStruct(FUN_1407e9e70,uVar2,L"SpawnPointGroup",0x30,uVar1);
  }
  return;
}



// FUNCTION 1407e9b40 FUN_1407e9b40 body=82 status=ok
// SIG undefined FUN_1407e9b40(void)

void FUN_1407e9b40(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685cd70 == 0) {
    uVar1 = FUN_1407e9920();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685cd70 = GetStaticStruct(FUN_1407e9ea0,uVar2,L"SpawnPreviewState",0xf0,uVar1);
  }
  return;
}



// FUNCTION 1407e9ba0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseDriverTarget::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685cdc8 == 0) {
    uVar1 = FUN_1407e9930();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_14685cdc8 = GetStaticStruct(FUN_1407e9ed0,uVar2,L"SpawnerActorData",0xa8,uVar1);
  }
  return;
}



// FUNCTION 1407e9c00 FUN_1407e9c00 body=47 status=ok
// SIG undefined FUN_1407e9c00(void)

longlong FUN_1407e9c00(void)

{
  if (DAT_14685cdb0 == 0) {
    FUN_1417866a0(&DAT_14685cdb0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146263ae0);
  }
  return DAT_14685cdb0;
}



// FUNCTION 1407e9c30 FUN_1407e9c30 body=47 status=ok
// SIG undefined FUN_1407e9c30(void)

longlong FUN_1407e9c30(void)

{
  if (DAT_14685cdb8 == 0) {
    FUN_1417866a0(&DAT_14685cdb8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146263b30);
  }
  return DAT_14685cdb8;
}



// FUNCTION 1407e9c60 FUN_1407e9c60 body=47 status=ok
// SIG undefined FUN_1407e9c60(void)

longlong FUN_1407e9c60(void)

{
  if (DAT_14685cda0 == 0) {
    FUN_1417866a0(&DAT_14685cda0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146263a40);
  }
  return DAT_14685cda0;
}



// FUNCTION 1407e9c90 FUN_1407e9c90 body=47 status=ok
// SIG undefined FUN_1407e9c90(void)

longlong FUN_1407e9c90(void)

{
  if (DAT_14685cd98 == 0) {
    FUN_1417866a0(&DAT_14685cd98,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1462639f0);
  }
  return DAT_14685cd98;
}



// FUNCTION 1407e9cc0 FUN_1407e9cc0 body=47 status=ok
// SIG undefined FUN_1407e9cc0(void)

longlong FUN_1407e9cc0(void)

{
  if (DAT_14685cd90 == 0) {
    FUN_1417866a0(&DAT_14685cd90,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1462639a0);
  }
  return DAT_14685cd90;
}



// FUNCTION 1407e9cf0 FUN_1407e9cf0 body=47 status=ok
// SIG undefined FUN_1407e9cf0(void)

longlong FUN_1407e9cf0(void)

{
  if (DAT_14685cdc0 == 0) {
    FUN_1417866a0(&DAT_14685cdc0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146263b80);
  }
  return DAT_14685cdc0;
}



// FUNCTION 1407e9d20 FUN_1407e9d20 body=47 status=ok
// SIG undefined FUN_1407e9d20(void)

longlong FUN_1407e9d20(void)

{
  if (DAT_14685cd88 == 0) {
    FUN_1417866a0(&DAT_14685cd88,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146263950);
  }
  return DAT_14685cd88;
}



// FUNCTION 1407e9d50 FUN_1407e9d50 body=47 status=ok
// SIG undefined FUN_1407e9d50(void)

longlong FUN_1407e9d50(void)

{
  if (DAT_14685cda8 == 0) {
    FUN_1417866a0(&DAT_14685cda8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146263a90);
  }
  return DAT_14685cda8;
}



// FUNCTION 1407e9d80 FUN_1407e9d80 body=47 status=ok
// SIG undefined FUN_1407e9d80(void)

longlong FUN_1407e9d80(void)

{
  if (DAT_14685cd80 == 0) {
    FUN_1417866a0(&DAT_14685cd80,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146263900);
  }
  return DAT_14685cd80;
}



// FUNCTION 1407e9db0 FUN_1407e9db0 body=47 status=ok
// SIG undefined FUN_1407e9db0(void)

longlong FUN_1407e9db0(void)

{
  if (DAT_14685ce20 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685ce20,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1462638b0);
  }
  return DAT_14685ce20;
}



// FUNCTION 1407e9de0 FUN_1407e9de0 body=47 status=ok
// SIG undefined FUN_1407e9de0(void)

longlong FUN_1407e9de0(void)

{
  if (DAT_14685ce10 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685ce10,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146263820);
  }
  return DAT_14685ce10;
}



// FUNCTION 1407e9e10 FUN_1407e9e10 body=47 status=ok
// SIG undefined FUN_1407e9e10(void)

longlong FUN_1407e9e10(void)

{
  if (DAT_14685ce00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685ce00,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146263510);
  }
  return DAT_14685ce00;
}



// FUNCTION 1407e9e40 FUN_1407e9e40 body=47 status=ok
// SIG undefined FUN_1407e9e40(void)

longlong FUN_1407e9e40(void)

{
  if (DAT_14685cdf0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685cdf0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146263380);
  }
  return DAT_14685cdf0;
}



// FUNCTION 1407e9e70 FUN_1407e9e70 body=47 status=ok
// SIG undefined FUN_1407e9e70(void)

longlong FUN_1407e9e70(void)

{
  if (DAT_14685cde0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685cde0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146263090);
  }
  return DAT_14685cde0;
}



// FUNCTION 1407e9ea0 FUN_1407e9ea0 body=47 status=ok
// SIG undefined FUN_1407e9ea0(void)

longlong FUN_1407e9ea0(void)

{
  if (DAT_14685cd78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685cd78,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146262d90);
  }
  return DAT_14685cd78;
}



// FUNCTION 1407e9ed0 FUN_1407e9ed0 body=47 status=ok
// SIG undefined FUN_1407e9ed0(void)

longlong FUN_1407e9ed0(void)

{
  if (DAT_14685cdd0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685cdd0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146262ed0);
  }
  return DAT_14685cdd0;
}



// FUNCTION 1407e9f00 FUN_1407e9f00 body=575 status=ok
// SIG undefined FUN_1407e9f00(void)

int * FUN_1407e9f00(longlong param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int local_res8 [2];
  int local_res10;
  
  if (*(int *)(param_1 + 0x1ac) == 0) {
    iVar8 = *(int *)(param_1 + 0x188);
    *(int *)(param_1 + 0x188) = iVar8 + 1;
    if (*(int *)(param_1 + 0x18c) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TInlineAllocator<16,FDefaultAllocator>_>
      ::ResizeGrow(param_1,iVar8);
    }
    FUN_1406dc2a0(param_1 + 400,0,1);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x1a8);
    lVar6 = *(longlong *)(param_1 + 0x180);
    if (*(longlong *)(param_1 + 0x180) == 0) {
      lVar6 = param_1;
    }
    iVar5 = *(int *)(param_1 + 0x1ac) + -1;
    iVar2 = *(int *)(lVar6 + 4 + (longlong)iVar8 * 0x18);
    *(int *)(param_1 + 0x1a8) = iVar2;
    *(int *)(param_1 + 0x1ac) = iVar5;
    if (iVar5 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x180);
      if (*(longlong *)(param_1 + 0x180) == 0) {
        lVar6 = param_1;
      }
      *(undefined4 *)(lVar6 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  *param_2 = iVar8;
  lVar6 = *(longlong *)(param_1 + 0x198);
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar6 = param_1 + 400;
  }
  puVar1 = (uint *)(lVar6 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  lVar6 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar6 = param_1;
  }
  bVar9 = false;
  _Src = (undefined8 *)(lVar6 + (longlong)iVar8 * 0x18);
  uVar3 = *(undefined8 *)*param_3;
  *_Src = uVar3;
  *(undefined4 *)(_Src + 1) = 0;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  local_res10 = *(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x1ac);
  if (local_res10 != 1) {
    FUN_1406e9740(param_1,local_res8,uVar3);
    bVar9 = local_res8[0] != -1;
    if (bVar9) {
      lVar6 = *(longlong *)(param_1 + 0x180);
      if (*(longlong *)(param_1 + 0x180) == 0) {
        lVar6 = param_1;
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar6 + (longlong)local_res8[0] * 0x18),_Src,0x10);
      FUN_1407ee970(param_1,iVar8,1);
      *param_2 = local_res8[0];
      goto LAB_1407ea11e;
    }
  }
  cVar4 = TSet<TTuple<unsigned___int64,unsigned___int64>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned___int64,0>,TInlineSetAllocator<16,TSetAllocator<TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>,FDefaultAllocator,2,8,4>,2,4>_>
          ::ConditionalRehash(param_1,local_res10,0);
  if (cVar4 == '\0') {
    uVar7 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src & *(int *)(param_1 + 0x1d8) - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar7;
    lVar6 = *(longlong *)(param_1 + 0x1d0);
    if (*(longlong *)(param_1 + 0x1d0) == 0) {
      lVar6 = param_1 + 0x1b0;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          (lVar6 + ((longlong)*(int *)(param_1 + 0x1d8) - 1U & (longlong)(int)uVar7) * 4);
    lVar6 = *(longlong *)(param_1 + 0x1d0);
    if (*(longlong *)(param_1 + 0x1d0) == 0) {
      lVar6 = param_1 + 0x1b0;
    }
    *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x1d8) - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_1407ea11e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 1407ea140 FUN_1407ea140 body=95 status=ok
// SIG undefined FUN_1407ea140(void)

int * FUN_1407ea140(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  piVar1 = piVar2 + (longlong)*(int *)(param_1 + 1) * 6;
  if (piVar2 != piVar1) {
    do {
      if (((piVar2[1] == param_2[1] && piVar2[2] == param_2[2]) && piVar2[3] == param_2[3]) &&
          *piVar2 == *param_2) {
        return piVar2;
      }
      piVar2 = piVar2 + 6;
    } while (piVar2 != piVar1);
  }
  return (int *)0x0;
}



// FUNCTION 1407ea1a0 FUN_1407ea1a0 body=739 status=ok
// SIG undefined FUN_1407ea1a0(void)

undefined8 * FUN_1407ea1a0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong local_res8;
  undefined2 *local_38;
  undefined8 local_30;
  
  local_res8 = DAT_14685cf20;
  lVar4 = FName::GetComparisonNameEntry(&local_res8);
  uVar10 = 0;
  if (lVar4 == 0) {
    local_38 = (undefined2 *)0x0;
    local_30 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar4,&local_38);
  }
  puVar9 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar9 = local_38;
  }
  FUN_141784790(param_2,puVar9);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  lVar5 = FUN_1407f0270();
  lVar4 = local_res8;
  plVar1 = (longlong *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0xa8);
  if (0 < iVar2) {
    plVar6 = *(longlong **)(param_2 + 0xa0);
    uVar12 = uVar10;
    plVar13 = plVar6;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = plVar1;
      plVar13 = plVar1;
    }
    do {
      iVar11 = (int)uVar12;
      if (*plVar6 == local_res8) {
        if (iVar11 != -1) {
          if ((lVar5 != 0) && (plVar13[(longlong)iVar11 * 2 + 1] != 0)) {
            FUN_1417905a0(param_2,local_res8,plVar13[(longlong)iVar11 * 2 + 1],lVar5);
          }
          goto LAB_1407ea2da;
        }
        break;
      }
      uVar10 = uVar10 + 1;
      plVar6 = plVar6 + 2;
      uVar12 = (ulonglong)(iVar11 + 1);
    } while ((longlong)uVar10 < (longlong)iVar2);
  }
  *(int *)(param_2 + 0xa8) = iVar2 + 1;
  if (*(int *)(param_2 + 0xac) < iVar2 + 1) {
    TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
    ResizeGrow(plVar1,iVar2);
  }
  plVar6 = *(longlong **)(param_2 + 0xa0);
  if (*(longlong **)(param_2 + 0xa0) == (longlong *)0x0) {
    plVar6 = plVar1;
  }
  plVar6 = plVar6 + (longlong)iVar2 * 2;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = lVar4;
    plVar6[1] = lVar5;
  }
LAB_1407ea2da:
  FUN_1421f1b60(param_1,param_2);
  plVar1 = param_1 + 0xa7;
  *param_1 = &PTR_FUN_1440ee738;
  param_1[0x8b] = &PTR_LAB_1440eee48;
  param_1[0xa6] = &PTR_LAB_1440eee58;
  *plVar1 = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0x3f800000;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  param_1[0xbe] = 0;
  uVar3 = DAT_1464aa734;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(undefined4 *)(param_1 + 0xbf) = uVar3;
  *(undefined2 *)((longlong)param_1 + 0x5fc) = 0;
  FUN_1421f5ed0(param_1);
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0xa9] = param_1;
    param_1[0xa8] = &DAT_14685cf30;
    *plVar1 = (longlong)DAT_14685cf30;
    DAT_14685cf30 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  uVar8 = DAT_14685cf28;
  uVar7 = UEnvQueryTest_Cover::StaticClass();
  uVar8 = FUN_141752410(param_1,uVar8,uVar7,uVar7,1,0,0);
  param_1[0xb2] = uVar8;
  return param_1;
}



// FUNCTION 1407ea490 FUN_1407ea490 body=308 status=ok
// SIG undefined FUN_1407ea490(void)

undefined8 * FUN_1407ea490(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  FUN_1421f2560();
  *param_1 = &PTR_FUN_1440eeea0;
  param_1[5] = &PTR_LAB_1440ef148;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  uVar3 = UScrollBar::GetPrivateStaticClass();
  uVar3 = UObjectBaseUtility::GetTypedOuter(param_1,uVar3);
  param_1[0x114] = uVar3;
  FWeakObjectPtr::operator=(&local_18,0);
  local_10 = 0;
  puVar4 = (undefined8 *)FName::FName(local_res8,L"OnStarted",1);
  FWeakObjectPtr::operator=(&local_18,param_1);
  local_10 = *puVar4;
  plVar1 = param_1 + 0x6f;
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  iVar2 = *(int *)(param_1 + 0x70);
  *(int *)(param_1 + 0x70) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 900) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  puVar5 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
  plVar1 = param_1 + 0x71;
  *puVar5 = local_18;
  puVar5[1] = local_14;
  *(undefined8 *)(puVar5 + 2) = local_10;
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  iVar2 = *(int *)(param_1 + 0x72);
  *(int *)(param_1 + 0x72) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x394) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  puVar5 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
  *puVar5 = local_18;
  puVar5[1] = local_14;
  *(undefined8 *)(puVar5 + 2) = local_10;
  return param_1;
}



// FUNCTION 1407ea5d0 ~TArray<MenuData,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<MenuData,FDefaultAllocator>(void)

void TArray<MenuData,FDefaultAllocator>::~TArray<MenuData,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar2 != 0) {
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



// FUNCTION 1407ea630 FUN_1407ea630 body=147 status=ok
// SIG undefined FUN_1407ea630(void)

void FUN_1407ea630(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x4a0);
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
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143fddd00;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 1407ea6d0 ~FSlateFontInfo body=77 status=ok
// SIG undefined ~FSlateFontInfo(void)

void FSlateFontInfo::~FSlateFontInfo(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  return;
}



// FUNCTION 1407ea720 FUN_1407ea720 body=120 status=ok
// SIG undefined FUN_1407ea720(void)

void FUN_1407ea720(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x888) = 0;
  if (*(longlong *)(param_1 + 0x880) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x840);
  if (*(longlong *)(param_1 + 0x830) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x820) != '\0') {
    *(undefined1 *)(param_1 + 0x820) = 0;
  }
  if (*(longlong *)(param_1 + 0x7f0) != 0) {
    FMemory::Free();
  }
  FUN_141f3bd50(param_1);
  return;
}



// FUNCTION 1407ea7a0 FUN_1407ea7a0 body=227 status=ok
// SIG undefined FUN_1407ea7a0(void)

undefined8 FUN_1407ea7a0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1407e2730();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = UCableComponent::GetAttachedActor(param_2);
      return uVar3;
    }
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = APostProcessVolume::GetPrivateStaticClass();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
          lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        uVar3 = FUN_1407e27e0();
                    /* WARNING: Could not recover jumptable at 0x0001407ea874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1407ea8b0 FUN_1407ea8b0 body=262 status=ok
// SIG undefined FUN_1407ea8b0(void)

longlong FUN_1407ea8b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x5d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    FMemory::Free();
  }
  TArray<MenuData,FDefaultAllocator>::~TArray<MenuData,FDefaultAllocator>(param_1 + 0x5a0);
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x570) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x560) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x550) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x548) != 0) {
    if (*(longlong *)(param_1 + 0x538) == 0) {
      **(longlong **)(param_1 + 0x540) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x540) = *(longlong *)(param_1 + 0x538);
      *(undefined8 *)(*(longlong *)(param_1 + 0x538) + 8) = *(undefined8 *)(param_1 + 0x540);
      *(undefined8 *)(param_1 + 0x538) = 0;
    }
    *(undefined8 *)(param_1 + 0x540) = 0;
    *(undefined8 *)(param_1 + 0x548) = 0;
  }
  *(undefined ***)(param_1 + 0x530) = &PTR_FUN_144055190;
  FUN_1407ea630(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x600);
  }
  return param_1;
}



// FUNCTION 1407ea9c0 FUN_1407ea9c0 body=119 status=ok
// SIG undefined FUN_1407ea9c0(void)

longlong FUN_1407ea9c0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x9e8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>_>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>_>_>
            (param_1 + 8);
  FUN_1404bf750(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x9f8);
  }
  return param_1;
}



// FUNCTION 1407eaa40 FUN_1407eaa40 body=73 status=ok
// SIG undefined FUN_1407eaa40(void)

longlong FUN_1407eaa40(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x890) != 0) {
    FMemory::Free();
  }
  FUN_1407ea720(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8a8);
  }
  return param_1;
}



// FUNCTION 1407eaa90 FUN_1407eaa90 body=738 status=ok
// SIG undefined FUN_1407eaa90(void)

void FUN_1407eaa90(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong local_res10 [2];
  undefined8 local_res20;
  undefined4 local_48;
  undefined4 local_44;
  longlong *local_40;
  
  if (DAT_146263bc8 == 0) {
    return;
  }
  local_res20 = 0;
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  local_res10[0] = param_2;
  FWeakObjectPtr::operator=(&local_48,param_3);
  if (*(longlong *)(param_3 + 0x4b0) == 0) {
LAB_1407eab09:
    iVar7 = 0;
  }
  else {
    cVar1 = UMovieSceneSequencePlayer::IsPlaying();
    iVar7 = 1;
    if (cVar1 == '\0') goto LAB_1407eab09;
  }
  lVar2 = param_1 + 0x1e8;
  iVar6 = *(int *)(param_1 + 0x9f0);
  lVar3 = *(longlong *)(param_1 + 0x9e8);
  if (*(longlong *)(param_1 + 0x9e8) == 0) {
    lVar3 = lVar2;
  }
  lVar5 = (longlong)iVar6 * 0x10 + lVar3;
  if (lVar3 != lVar5) {
    do {
      cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar3,&local_48);
      lVar4 = local_res10[0];
      if (cVar1 != '\0') {
        if (*(longlong *)(lVar3 + 8) == local_res10[0]) {
          return;
        }
        lVar2 = param_1 + 8;
        FUN_1406e9740(lVar2,&local_res20);
        if ((int)local_res20 == -1) {
LAB_1407eaca3:
          local_40 = (longlong *)(lVar3 + 8);
          FUN_1407e9f00(lVar2,&local_res20,&local_40,0);
          lVar5 = *(longlong *)(param_1 + 0x188);
          if (*(longlong *)(param_1 + 0x188) == 0) {
            lVar5 = lVar2;
          }
          lVar5 = lVar5 + (longlong)(int)local_res20 * 0x18;
          lVar4 = local_res10[0];
        }
        else {
          lVar5 = *(longlong *)(param_1 + 0x188);
          if (*(longlong *)(param_1 + 0x188) == 0) {
            lVar5 = lVar2;
          }
          lVar5 = lVar5 + (longlong)(int)local_res20 * 0x18;
          if (lVar5 == 0) goto LAB_1407eaca3;
        }
        *(longlong *)(lVar3 + 8) = lVar4;
        FUN_1406e9740(lVar2,&local_res20,local_res10[0]);
        if ((int)local_res20 != -1) {
          lVar3 = *(longlong *)(param_1 + 0x188);
          if (*(longlong *)(param_1 + 0x188) == 0) {
            lVar3 = lVar2;
          }
          lVar3 = lVar3 + (longlong)(int)local_res20 * 0x18;
          if (lVar3 != 0) goto LAB_1407ead57;
        }
        local_40 = local_res10;
        FUN_1407e9f00(lVar2,&local_res20,&local_40,0);
        lVar3 = *(longlong *)(param_1 + 0x188);
        if (*(longlong *)(param_1 + 0x188) == 0) {
          lVar3 = lVar2;
        }
        lVar3 = lVar3 + (longlong)(int)local_res20 * 0x18;
LAB_1407ead57:
        iVar6 = iVar7;
        if (*(int *)(lVar5 + 8) == 0) {
          iVar6 = 0;
        }
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) - iVar6;
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + iVar7;
        return;
      }
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != lVar5);
    iVar6 = *(int *)(param_1 + 0x9f0);
  }
  lVar3 = local_res10[0];
  local_res20 = CONCAT44(local_res20._4_4_,local_44);
  *(int *)(param_1 + 0x9f0) = iVar6 + 1;
  if (*(int *)(param_1 + 0x9f4) < iVar6 + 1) {
    FUN_1407eec40(lVar2,iVar6);
  }
  lVar5 = *(longlong *)(param_1 + 0x9e8);
  if (*(longlong *)(param_1 + 0x9e8) == 0) {
    lVar5 = lVar2;
  }
  lVar2 = (longlong)iVar6;
  *(int *)(lVar5 + 4 + lVar2 * 0x10) = (int)local_res20;
  *(undefined4 *)(lVar5 + lVar2 * 0x10) = local_48;
  *(longlong *)(lVar5 + 8 + lVar2 * 0x10) = lVar3;
  lVar2 = param_1 + 8;
  FUN_1406e9740(lVar2,&local_res20,local_res10[0]);
  if ((int)local_res20 != -1) {
    lVar3 = *(longlong *)(param_1 + 0x188);
    if (*(longlong *)(param_1 + 0x188) == 0) {
      lVar3 = lVar2;
    }
    lVar3 = lVar3 + (longlong)(int)local_res20 * 0x18;
    if (lVar3 != 0) goto LAB_1407eac32;
  }
  local_40 = local_res10;
  FUN_1407e9f00(lVar2,&local_res20,&local_40,0);
  lVar3 = *(longlong *)(param_1 + 0x188);
  if (*(longlong *)(param_1 + 0x188) == 0) {
    lVar3 = lVar2;
  }
  lVar3 = lVar3 + (longlong)(int)local_res20 * 0x18;
LAB_1407eac32:
  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + iVar7;
  return;
}



// FUNCTION 1407ead90 FUN_1407ead90 body=300 status=ok
// SIG undefined FUN_1407ead90(void)

void FUN_1407ead90(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    FUN_1407eb420(param_1 + 8,0x10);
    *(undefined4 *)(param_1 + 0x9f0) = 0;
    if (*(int *)(param_1 + 0x9f4) != 0x80) {
      FUN_1407eede0(param_1 + 0x1e8,0x80);
      return;
    }
  }
  else {
    FUN_1407ee690(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0x9f0) + -1;
    if (-1 < iVar5) {
      lVar4 = (longlong)iVar5 << 4;
      lVar6 = lVar4;
      do {
        lVar2 = *(longlong *)(param_1 + 0x9e8);
        if (*(longlong *)(param_1 + 0x9e8) == 0) {
          lVar2 = param_1 + 0x1e8;
        }
        if (*(longlong *)(lVar2 + 8 + lVar4) == param_2) {
          iVar1 = *(int *)(param_1 + 0x9f0);
          iVar3 = (iVar1 - iVar5) + -1;
          if (0 < iVar3) {
            iVar3 = 1;
          }
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar6 + lVar2),(void *)((longlong)(iVar1 - iVar3) * 0x10 + lVar2),
                       (longlong)iVar3 << 4);
            iVar1 = *(int *)(param_1 + 0x9f0);
          }
          *(int *)(param_1 + 0x9f0) = iVar1 + -1;
          FUN_1407eecd0(param_1 + 0x1e8);
        }
        lVar6 = lVar6 + -0x10;
        lVar4 = lVar4 + -0x10;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  return;
}



// FUNCTION 1407eaec0 FUN_1407eaec0 body=30 status=ok
// SIG undefined FUN_1407eaec0(void)

void FUN_1407eaec0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407eb580();
  FUN_1407ead90(uVar1,param_1);
  return;
}



// FUNCTION 1407eaee0 ConditionalRehash body=153 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<unsigned___int64,unsigned___int64>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned___int64,0>,TInlineSetAllocator<16,TSetAllocator<TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>,FDefaultAllocator,2,8,4>,2,4>_>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  
  uVar2 = param_2 >> 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar4 = 0x20;
  cVar5 = '\0';
  if (uVar2 != 0) {
    iVar4 = 0x1f - iVar1;
  }
  uVar2 = uVar2 - 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (uVar2 != 0) {
    cVar5 = '\x1f' - (char)iVar1;
  }
  uVar3 = 1 << (0x20U - cVar5 & ~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x1f);
  uVar2 = 8;
  if ((7 < uVar3) && (uVar2 = uVar3, param_2 < 4)) {
    uVar2 = 8;
  }
  if ((0 < (int)param_2) &&
     (((iVar1 = *(int *)(param_1 + 0x1d8), iVar1 == 0 || (iVar1 < (int)uVar2)) ||
      (((int)uVar2 < iVar1 && (param_3 != '\0')))))) {
    *(uint *)(param_1 + 0x1d8) = uVar2;
    FUN_1406f40c0(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 1407eaf80 FUN_1407eaf80 body=1055 status=ok
// SIG undefined FUN_1407eaf80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1407eaf80(undefined8 param_1,longlong param_2,char param_3,undefined4 *param_4,
                      undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 **ppuVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_148 [32];
  undefined8 **local_128;
  char local_118;
  undefined8 *local_110;
  longlong local_108;
  longlong *plStack_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 **local_e8;
  undefined8 local_e0;
  undefined8 **local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 **local_c0;
  longlong *local_b8;
  undefined8 *local_b0 [5];
  undefined1 local_88;
  ushort local_86;
  uint local_84;
  undefined1 local_80 [8];
  longlong local_78;
  undefined1 local_68 [24];
  longlong local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_c8 = param_5;
  local_118 = param_3;
  if (param_2 == 0) {
    plVar11 = *(longlong **)(param_4 + 0xe);
  }
  else {
    local_f8 = (undefined8 *)UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if ((local_f8 != (undefined8 *)0x0) && ((*(uint *)(local_f8 + 0x106) & 0x400) == 0)) {
      local_e8 = &local_f0;
      local_f0 = local_f8;
      local_e0 = FUN_14073d6c0(&local_f0,DAT_14685cf30);
      ppuVar7 = local_e8;
      local_d8 = &local_f0;
      local_d0 = 0;
      puVar9 = (undefined8 *)FUN_14073d6c0(local_e8,local_e0);
      local_110 = (undefined8 *)FUN_14073d6c0(local_d8,local_d0);
      if (puVar9 != local_110) {
        do {
          plVar11 = (longlong *)puVar9[2];
          FSoftObjectPath::FSoftObjectPath(local_80,param_2);
          cVar8 = FSoftObjectPath::operator==(plVar11 + 0x97,local_80);
          if (local_78 != 0) {
            FMemory::Free();
          }
          if (cVar8 != '\0') {
            if (plVar11 != (longlong *)0x0) goto LAB_1407eb2d0;
            break;
          }
          puVar9 = (undefined8 *)FUN_14073d6c0(ppuVar7,*puVar9);
        } while (puVar9 != local_110);
      }
      FActorSpawnParameters::FActorSpawnParameters(local_b0);
      puVar9 = local_f8;
      local_c0 = &local_110;
      local_84 = local_84 | 0x40;
      local_86 = local_86 | 8;
      local_b8 = &local_108;
      local_88 = 1;
      local_110 = local_f8;
      local_128 = (undefined8 **)((ulonglong)local_128 & 0xffffffffffffff00);
      FUN_1416ff220(&local_f8,&local_c0,*(undefined8 *)(param_2 + 0x18),0);
      local_b0[0] = local_f8;
      uVar10 = UScrollBar::GetPrivateStaticClass();
      local_128 = local_b0;
      plVar11 = (longlong *)UWorld::SpawnActor(puVar9,uVar10,0,0);
      if (plVar11 == (longlong *)0x0) {
        FSlateFontInfo::~FSlateFontInfo(param_4);
        return 0;
      }
      uVar10 = FSoftObjectPath::FSoftObjectPath(local_68,param_2);
      FSoftObjectPath::operator=(plVar11 + 0x97,uVar10);
      plVar4 = plVar11 + 0x93;
      *(undefined4 *)(plVar11 + 0x8d) = *param_4;
      *(undefined4 *)((longlong)plVar11 + 0x46c) = param_4[1];
      *(undefined1 *)(plVar11 + 0x8e) = *(undefined1 *)(param_4 + 2);
      *(undefined4 *)((longlong)plVar11 + 0x474) = param_4[3];
      *(undefined1 *)(plVar11 + 0x8f) = *(undefined1 *)(param_4 + 4);
      *(undefined1 *)((longlong)plVar11 + 0x479) = *(undefined1 *)((longlong)param_4 + 0x11);
      *(undefined1 *)((longlong)plVar11 + 0x47a) = *(undefined1 *)((longlong)param_4 + 0x12);
      *(undefined1 *)((longlong)plVar11 + 0x47b) = *(undefined1 *)((longlong)param_4 + 0x13);
      *(undefined1 *)((longlong)plVar11 + 0x47c) = *(undefined1 *)(param_4 + 5);
      *(undefined1 *)((longlong)plVar11 + 0x47d) = *(undefined1 *)((longlong)param_4 + 0x15);
      *(undefined1 *)((longlong)plVar11 + 0x47e) = *(undefined1 *)((longlong)param_4 + 0x16);
      plVar11[0x90] = *(longlong *)(param_4 + 6);
      plVar11[0x91] = *(longlong *)(param_4 + 8);
      plVar11[0x92] = *(longlong *)(param_4 + 10);
      plVar3 = *(longlong **)(param_4 + 0xe);
      lVar6 = *(longlong *)(param_4 + 0xc);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_108 = lVar6;
      plStack_100 = plVar3;
      if (&local_108 != plVar4) {
        local_108 = *plVar4;
        plStack_100 = (longlong *)plVar11[0x94];
        *plVar4 = lVar6;
        plVar11[0x94] = (longlong)plVar3;
        local_50 = lVar6;
        plStack_48 = plVar3;
      }
      plVar4 = plStack_100;
      if (plStack_100 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_100 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_100)(plStack_100);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_100 + 8))(plStack_100,1);
          }
        }
      }
      *(undefined1 *)(plVar11 + 0x95) = *(undefined1 *)(param_4 + 0x10);
LAB_1407eb2d0:
      if (plVar11[0xb3] == 0) {
        (**(code **)(*plVar11 + 0x6e8))(plVar11);
      }
      if (((local_118 != '\0') && (plVar11[0x96] != 0)) &&
         (((char)plVar11[0x25] == '\x03' || ((char)plVar11[0xbd] != '\0')))) {
        FUN_141f5abf0();
      }
      FUN_1407ee570(plVar11);
      *local_c8 = plVar11;
      plVar4 = *(longlong **)(param_4 + 0xe);
      lVar6 = plVar11[0xb3];
      if (plVar4 == (longlong *)0x0) {
        return lVar6;
      }
      LOCK();
      plVar11 = plVar4 + 1;
      lVar5 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar5 != 1) {
        return lVar6;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return lVar6;
      }
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return lVar6;
    }
    plVar11 = *(longlong **)(param_4 + 0xe);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar11 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return 0;
}



// FUNCTION 1407eb3a0 FUN_1407eb3a0 body=114 status=ok
// SIG undefined FUN_1407eb3a0(void)

void FUN_1407eb3a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar2 = FUN_1407eff40();
  uVar2 = FUN_1417985e0(uVar2,param_1,lVar1,0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x598) = uVar2;
  return;
}



// FUNCTION 1407eb420 FUN_1407eb420 body=232 status=ok
// SIG undefined FUN_1407eb420(void)

void FUN_1407eb420(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char cVar9;
  
  FUN_1407eb510();
  uVar2 = param_2 >> 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar4 = 0x20;
  if (uVar2 != 0) {
    iVar4 = 0x1f - iVar1;
  }
  uVar2 = uVar2 - 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (uVar2 == 0) {
    cVar9 = '\0';
  }
  else {
    cVar9 = '\x1f' - (char)iVar1;
  }
  uVar6 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  uVar2 = 8;
  if ((7 < uVar6) && (uVar2 = uVar6, param_2 < 4)) {
    uVar2 = 8;
  }
  if ((0 < (int)param_2) &&
     (((iVar1 = *(int *)(param_1 + 0x1d8), iVar1 == 0 || (iVar1 < (int)uVar2)) ||
      ((int)uVar2 < iVar1)))) {
    *(uint *)(param_1 + 0x1d8) = uVar2;
    FUN_1406f40c0(param_1);
    return;
  }
  if (0 < (int)*(uint *)(param_1 + 0x1d8)) {
    uVar7 = 0;
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x1d8);
    do {
      lVar5 = *(longlong *)(param_1 + 0x1d0);
      if (*(longlong *)(param_1 + 0x1d0) == 0) {
        lVar5 = param_1 + 0x1b0;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x1d8) - 1U & uVar7;
      uVar7 = uVar7 + 1;
      *(undefined4 *)(lVar5 + uVar3 * 4) = 0xffffffff;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 1407eb510 FUN_1407eb510 body=110 status=ok
// SIG undefined FUN_1407eb510(void)

void FUN_1407eb510(longlong param_1,int param_2)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x18c) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TInlineAllocator<16,FDefaultAllocator>_>
    ::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  uVar1 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x1a4) != uVar1) {
    *(uint *)(param_1 + 0x1a4) = uVar1;
    TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Realloc(param_1 + 400,0);
  }
  return;
}



// FUNCTION 1407eb580 FUN_1407eb580 body=283 status=ok
// SIG undefined FUN_1407eb580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1407eb580(void)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14685da48) {
    _Init_thread_header(&DAT_14685da48);
    if (DAT_14685da48 == -1) {
      _DAT_14685d050 = &PTR__purecall_143f740d8;
      plVar2 = (longlong *)FUN_1404cfca0();
      iVar1 = (int)plVar2[1];
      *(int *)(plVar2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
      }
      *(undefined **)(*plVar2 + (longlong)iVar1 * 8) = &DAT_14685d050;
      _DAT_14685d050 = &PTR_FUN_1440ef1f8;
      _DAT_14685d1d8 = 0;
      _DAT_14685d1e0 = 0;
      _DAT_14685d1f0 = 0;
      _DAT_14685d1f8 = 0;
      _DAT_14685d204 = 0;
      DAT_14685d228 = 0;
      _DAT_14685d230 = 0;
      DAT_14685da38 = 0;
      _DAT_14685da40 = 0;
      _DAT_14685d200 = 0xffffffff;
      atexit(_dynamic_atexit_destructor_for__GColorList__);
      _Init_thread_footer(&DAT_14685da48);
      return &DAT_14685d050;
    }
  }
  return &DAT_14685d050;
}



// FUNCTION 1407eb6f0 FUN_1407eb6f0 body=1651 status=ok
// SIG undefined FUN_1407eb6f0(void)

void FUN_1407eb6f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_142231c90();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_14685cfc8) && (_Init_thread_header(&DAT_14685cfc8), DAT_14685cfc8 == -1)) {
    uVar1 = UScrollBar::GetPrivateStaticClass();
    UScrollBar::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedLevelSequence",1);
    DAT_14685cfc0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14685cfc8);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14685cfc0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14685cfc0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14685cfc0 + 0x30));
  }
  if ((*piVar5 < DAT_14685cfd8) && (_Init_thread_header(&DAT_14685cfd8), DAT_14685cfd8 == -1)) {
    uVar1 = UScrollBar::GetPrivateStaticClass();
    UScrollBar::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedPlaybackStatus",1);
    DAT_14685cfd0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14685cfd8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14685cfd0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14685cfd0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14685cfd0 + 0x30));
  }
  if ((*piVar5 < DAT_14685cfe8) && (_Init_thread_header(&DAT_14685cfe8), DAT_14685cfe8 == -1)) {
    uVar1 = UScrollBar::GetPrivateStaticClass();
    UScrollBar::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bReplicatedReversePlayback",1);
    DAT_14685cfe0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14685cfe8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14685cfe0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14685cfe0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14685cfe0 + 0x30));
  }
  if ((*piVar5 < DAT_14685cff8) && (_Init_thread_header(&DAT_14685cff8), DAT_14685cff8 == -1)) {
    uVar1 = UScrollBar::GetPrivateStaticClass();
    UScrollBar::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedPlaybackPosition",1);
    DAT_14685cff0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14685cff8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14685cff0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14685cff0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14685cff0 + 0x30));
  }
  if ((*piVar5 < DAT_14685d008) && (_Init_thread_header(&DAT_14685d008), DAT_14685d008 == -1)) {
    uVar1 = UScrollBar::GetPrivateStaticClass();
    UScrollBar::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedPlaybackRate",1);
    DAT_14685d000 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14685d008);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14685d000 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14685d000 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14685d000 + 0x30));
  }
  if ((*piVar5 < DAT_14685d018) && (_Init_thread_header(&DAT_14685d018), DAT_14685d018 == -1)) {
    uVar1 = UScrollBar::GetPrivateStaticClass();
    UScrollBar::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedLoopCount",1);
    DAT_14685d010 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14685d018);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14685d010 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14685d010 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14685d010 + 0x30));
  }
  if ((*piVar5 < DAT_14685d028) && (_Init_thread_header(&DAT_14685d028), DAT_14685d028 == -1)) {
    uVar1 = UScrollBar::GetPrivateStaticClass();
    UScrollBar::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"BoundActors",1);
    DAT_14685d020 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14685d028);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14685d020 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14685d020 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14685d020 + 0x30));
  }
  if ((*piVar5 < DAT_14685d038) && (_Init_thread_header(&DAT_14685d038), DAT_14685d038 == -1)) {
    uVar1 = UScrollBar::GetPrivateStaticClass();
    UScrollBar::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bPendingReplicatedCutsceneSkip",1);
    DAT_14685d030 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14685d038);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14685d030 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14685d030 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14685d030 + 0x30));
  }
  if ((*piVar5 < DAT_14685d048) && (_Init_thread_header(&DAT_14685d048), DAT_14685d048 == -1)) {
    uVar1 = UScrollBar::GetPrivateStaticClass();
    UScrollBar::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bWasCutsceneSkipped",1);
    DAT_14685d040 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14685d048);
  }
  if (0 < *(int *)(DAT_14685d040 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14685d040 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_14685d040 + 0x30));
  }
  return;
}



// FUNCTION 1407ebd70 FUN_1407ebd70 body=29 status=ok
// SIG undefined FUN_1407ebd70(void)

ulonglong FUN_1407ebd70(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    uVar1 = FUN_141f533d0(*(longlong *)(param_1 + 0x4b0));
    return uVar1;
  }
  return (ulonglong)*(uint *)(param_1 + 0x46c);
}



// FUNCTION 1407ebdb0 FUN_1407ebdb0 body=124 status=ok
// SIG undefined FUN_1407ebdb0(void)

void FUN_1407ebdb0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  if ((*(longlong *)(param_1 + 0x598) != 0) &&
     ((*(char *)(param_1 + 0x128) == '\x03' || (*(char *)(param_1 + 0x5e8) != '\0')))) {
    UMovieSceneSequencePlayer::GoToEndAndStop();
    lVar2 = *(longlong *)(param_1 + 0x598);
    if (*(char *)(lVar2 + 0x371) != '\0') {
      FUN_1405cd430();
      lVar2 = *(longlong *)(param_1 + 0x598);
    }
    puVar1 = (undefined8 *)UMovieSceneSequencePlayer::GetLastValidTime(lVar2,local_res8);
    FMovieScenePlaybackPosition::Reset(lVar2 + 0x760,*puVar1);
    FUN_1407ee570(param_1);
  }
  return;
}



// FUNCTION 1407ebe30 FUN_1407ebe30 body=670 status=ok
// SIG undefined FUN_1407ebe30(void)

void FUN_1407ebe30(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined8 local_res8;
  code *local_18;
  undefined8 uStack_10;
  
  FUN_1407edca0();
  FUN_1421f4610(param_1);
  pwVar5 = *(wchar_t **)(param_1 + 0x4b0);
  pwVar6 = (wchar_t *)0x0;
  if (pwVar5 != (wchar_t *)0x0) {
    lVar3 = FUN_1407eff40();
    if ((*(int *)(*(longlong *)(pwVar5 + 8) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar5 + 8) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1407ebe9e;
  }
  pwVar5 = pwVar6;
LAB_1407ebe9e:
  *(wchar_t **)(param_1 + 0x598) = pwVar5;
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
    local_18 = FUN_1407eccc0;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&AGbxLevelSequenceActor::OnLevelSequencePlay",L"::");
    pwVar5 = pwVar6;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar5 = pwVar2;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x4b0) + 0x378,param_1,&local_18,local_res8);
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = FUN_1407ecc90;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&AGbxLevelSequenceActor::OnLevelSequencePause",L"::");
    pwVar5 = pwVar6;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar5 = pwVar2;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x4b0) + 0x3a8,param_1,&local_18,local_res8);
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = FUN_1407ecc60;
    pwVar4 = _guard_xfg_dispatch_icall_nop
                       (L"&AGbxLevelSequenceActor::OnLevelSequenceFinished",L"::");
    pwVar5 = pwVar6;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar5 = pwVar2;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x4b0) + 0x3b8,param_1,&local_18,local_res8);
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = FUN_1407ecd00;
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AGbxLevelSequenceActor::OnLevelSequenceStop",L"::");
    while (pwVar4 = pwVar5, pwVar4 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar6 = pwVar4;
    }
    FName::FName(&local_res8,pwVar6 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x4b0) + 0x398,param_1,&local_18,local_res8);
  }
  return;
}



// FUNCTION 1407ec0d0 FUN_1407ec0d0 body=39 status=ok
// SIG undefined FUN_1407ec0d0(void)

undefined1 FUN_1407ec0d0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x598) != 0) {
    cVar1 = FUN_1407ec100();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1407ec100 FUN_1407ec100 body=238 status=ok
// SIG undefined FUN_1407ec100(void)

ulonglong FUN_1407ec100(longlong param_1)

{
  ulonglong in_RAX;
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fStackX_14;
  undefined1 local_18 [16];
  
  if (*(char *)(param_1 + 0x3c8) == '\0') {
    puVar1 = (undefined8 *)FUN_141f520f0(param_1,local_18);
    iVar4 = *(int *)(param_1 + 0x3e4) + *(int *)(param_1 + 0x3e0);
    iVar3 = (int)((ulonglong)puVar1[1] >> 0x20);
    in_RAX = (ulonglong)iVar4;
    iVar2 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x760) >> 0x20);
    fStackX_14 = (float)((ulonglong)*puVar1 >> 0x20);
    if (((float)(longlong)((longlong)iVar2 * in_RAX) + (float)iVar2 * 0.0) /
        (float)(int)*(undefined8 *)(param_1 + 0x760) <=
        ((float)((longlong)iVar3 * (longlong)(int)*puVar1) + (float)iVar3 * fStackX_14) /
        (float)(int)puVar1[1]) {
      return CONCAT71((int7)(int3)((uint)iVar4 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1407ec1f0 FUN_1407ec1f0 body=39 status=ok
// SIG undefined FUN_1407ec1f0(void)

undefined1 FUN_1407ec1f0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    cVar1 = UMovieSceneSequencePlayer::IsPaused();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1407ec220 FUN_1407ec220 body=39 status=ok
// SIG undefined FUN_1407ec220(void)

undefined1 FUN_1407ec220(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    cVar1 = UMovieSceneSequencePlayer::IsPlaying();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1407ec250 FUN_1407ec250 body=63 status=ok
// SIG undefined FUN_1407ec250(void)

void FUN_1407ec250(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = FUN_1407eb580();
    FUN_1407eaa90(uVar1,param_2,param_1);
  }
  return;
}



// FUNCTION 1407ec2a0 FillContext body=20 status=ok
// SIG undefined FillContext(void)

void FClothingSimulationCommon::FillContext(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  return;
}



// FUNCTION 1407ec2c0 FUN_1407ec2c0 body=2187 status=ok
// SIG undefined FUN_1407ec2c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1407ec2c0(longlong param_1,int *param_2,undefined4 param_3,longlong *param_4,
                       char param_5)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong **pplVar7;
  longlong *plVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong *plVar20;
  int iVar21;
  int *piVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  longlong local_res8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  float local_a0;
  longlong *local_98;
  undefined1 local_90 [8];
  float local_88;
  longlong *local_78;
  undefined4 local_70;
  
  lVar12 = *(longlong *)(param_1 + -8);
  if (lVar12 != 0) {
    lVar3 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar23 = false;
    }
    else {
      bVar23 = true;
    }
    if (bVar23) {
      piVar22 = *(int **)(lVar12 + 0x5a0);
      piVar10 = piVar22 + (longlong)*(int *)(lVar12 + 0x5a8) * 0x14;
      if (piVar22 != piVar10) {
        do {
          if (((piVar22[1] == param_2[1] && piVar22[2] == param_2[2]) && piVar22[3] == param_2[3])
              && *piVar22 == *param_2) {
            piVar11 = *(int **)(lVar12 + 0x5d8);
            piVar10 = piVar11 + (longlong)*(int *)(lVar12 + 0x5e0) * 6;
            goto joined_r0x0001407ec3d4;
          }
          piVar22 = piVar22 + 0x14;
        } while (piVar22 != piVar10);
      }
    }
  }
  goto LAB_1407ec38c;
joined_r0x0001407ec3d4:
  if (piVar11 == piVar10) goto LAB_1407ec408;
  if (((piVar11[1] == param_2[1] && piVar11[2] == param_2[2]) && piVar11[3] == param_2[3]) &&
      *piVar11 == *param_2) {
    bVar23 = true;
    lVar3 = FWeakObjectPtr::Get(piVar11 + 4);
    if (lVar3 != 0) {
      iVar15 = (int)param_4[2];
      *(int *)(param_4 + 2) = iVar15 + 1;
      if (*(int *)((longlong)param_4 + 0x14) < iVar15 + 1) {
        FUN_1407eebb0(param_4,iVar15);
      }
      plVar8 = (longlong *)param_4[1];
      if ((longlong *)param_4[1] == (longlong *)0x0) {
        plVar8 = param_4;
      }
      plVar8[iVar15] = lVar3;
      return (ulonglong)(uint7)(int7)(int3)((uint)iVar15 >> 8) << 8;
    }
    goto LAB_1407ec40b;
  }
  piVar11 = piVar11 + 6;
  goto joined_r0x0001407ec3d4;
LAB_1407ec408:
  bVar23 = false;
LAB_1407ec40b:
  if (*(longlong *)(piVar22 + 8) != 0) {
    plVar5 = (longlong *)FUN_1428dfc70();
    plVar8 = *(longlong **)(piVar22 + 8);
    for (plVar14 = plVar8; local_98 = plVar8, plVar14 != (longlong *)0x0;
        plVar14 = (longlong *)plVar14[6]) {
      if (plVar14 == plVar5) {
        if (plVar8 == (longlong *)0x0) break;
        iVar15 = *(int *)((longlong)plVar8 + 0xc);
        lVar3 = 0;
        if (iVar15 < (int)DAT_1469e91c4) {
          uVar9 = iVar15 >> 0x1f & 0xffff;
          uVar2 = iVar15 + uVar9;
          lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)((uVar2 & 0xffff) - uVar9) * 0x18;
        }
        if ((*(uint *)(lVar3 + 8) >> 0x19 & 1) != 0) {
          return 1;
        }
        if (*(char *)(lVar12 + 0x128) == '\x03') {
          local_res8._0_1_ =
               UMovieSceneBindingOverrides::LocateBoundObjects(param_1,param_2,param_3);
          lVar3 = 0;
          if ((int)param_4[2] < 1) {
            lVar6 = FUN_1407c7450(lVar12);
            if (lVar6 != 0) {
              fVar27 = 3.4028235e+38;
              FUN_1407c0b80(lVar6,&local_e0);
              FUN_1407e0180(&local_e0,local_90);
              FUN_1407e0240(&local_e0,&local_78);
              cVar1 = FUN_1407be9c0(local_90,&local_78);
              if (cVar1 != '\0') {
                do {
                  lVar6 = FUN_1407beb00(local_90);
                  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < (int)plVar8[0x12]) ||
                     (*(longlong **)
                       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                       (longlong)(int)plVar8[0x12] * 8) != plVar8 + 0x11)) {
                    bVar23 = false;
                  }
                  else {
                    bVar23 = true;
                  }
                  if (bVar23) {
                    lVar13 = *(longlong *)(lVar12 + 0x5a0);
                    lVar16 = (longlong)*(int *)(lVar12 + 0x5a8) * 0x50 + lVar13;
                    for (; lVar13 != lVar16; lVar13 = lVar13 + 0x50) {
                      cVar1 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
                                        (lVar6,lVar13 + 0x28);
                      if (cVar1 != '\0') goto LAB_1407ec739;
                    }
                    lVar13 = *(longlong *)(lVar6 + 0x168);
                    if (lVar13 == 0) {
                      local_b8 = DAT_1468b5d98;
                      pplVar7 = &local_c0;
                      local_c0 = _DAT_1468b5d90;
                    }
                    else {
                      pplVar7 = &local_d0;
                      local_c8 = *(undefined4 *)(lVar13 + 0x228);
                      local_d0 = *(longlong **)(lVar13 + 0x220);
                    }
                    fVar25 = (float)piVar22[0xc] - SUB84(*pplVar7,0);
                    local_a0 = *(float *)(pplVar7 + 1);
                    fVar24 = (float)piVar22[0xd] - (float)((ulonglong)*pplVar7 >> 0x20);
                    fVar24 = fVar25 * fVar25 + fVar24 * fVar24 +
                             ((float)piVar22[0xe] - local_a0) * ((float)piVar22[0xe] - local_a0);
                    if (fVar24 < fVar27) {
                      lVar3 = lVar6;
                      fVar27 = fVar24;
                    }
                  }
LAB_1407ec739:
                  FCorePlayerControllerIterator::operator++(local_90);
                  cVar1 = FUN_1407be9c0(local_90,&local_78);
                } while (cVar1 != '\0');
                if (lVar3 != 0) {
                  FWeakObjectPtr::operator=(piVar22 + 10,lVar3);
                  FUN_1407eee60(lVar12,piVar22,lVar3);
                  iVar15 = (int)param_4[2];
                  *(int *)(param_4 + 2) = iVar15 + 1;
                  if (*(int *)((longlong)param_4 + 0x14) < iVar15 + 1) {
                    FUN_1407eebb0(param_4,iVar15);
                  }
                  local_res8._0_1_ = 0;
                  plVar8 = (longlong *)param_4[1];
                  if ((longlong *)param_4[1] == (longlong *)0x0) {
                    plVar8 = param_4;
                  }
                  plVar8[iVar15] = lVar3;
                }
              }
            }
          }
          else {
            local_e0 = (longlong *)0x0;
            local_d8 = 0;
            plVar14 = (longlong *)
                      ((ulonglong)(param_4[1] != 0) - 1 & (ulonglong)param_4 | param_4[1]);
            plVar8 = plVar14 + (int)param_4[2];
            local_d0 = plVar14;
            local_b0 = plVar8;
            if (plVar14 != plVar8) {
              do {
                lVar3 = 0;
                local_d0 = plVar14;
                lVar6 = FUN_1407ea7a0(local_e8,*plVar14);
                if (lVar6 != 0) {
                  local_res8 = 0;
                  if ((int)local_d8._4_4_ < 0x10) {
                    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_e0,0x10);
                  }
                  FUN_1407c7b00(lVar6,&local_e0,1);
                  plVar5 = local_98;
                  if ((int)local_d8 < 1) {
                    if (param_5 != '\0') {
                      FUN_1407c56e0(lVar6);
                    }
                  }
                  else {
                    fVar27 = 3.4028235e+38;
                    plVar8 = local_e0 + (int)local_d8;
                    local_a8 = plVar8;
                    plVar20 = local_e0;
                    if (local_e0 != plVar8) {
                      do {
                        lVar6 = *plVar20;
                        if (lVar6 != 0) {
                          iVar15 = (int)plVar5[0x12];
                          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar15) ||
                             (*(longlong **)
                               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                               (longlong)iVar15 * 8) != plVar5 + 0x11)) {
                            bVar23 = false;
                          }
                          else {
                            bVar23 = true;
                          }
                          if (bVar23) {
                            lVar13 = *(longlong *)(lVar12 + 0x5a0);
                            lVar16 = (longlong)*(int *)(lVar12 + 0x5a8) * 0x50 + lVar13;
                            for (; lVar3 = local_res8, lVar13 != lVar16; lVar13 = lVar13 + 0x50) {
                              cVar1 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
                                                (lVar6,lVar13 + 0x28);
                              plVar8 = local_a8;
                              if (cVar1 != '\0') goto LAB_1407ec95f;
                            }
                            lVar13 = *(longlong *)(lVar6 + 0x168);
                            if (lVar13 == 0) {
                              local_70 = DAT_1468b5d98;
                              pplVar7 = &local_78;
                              local_78 = _DAT_1468b5d90;
                            }
                            else {
                              pplVar7 = &local_c0;
                              local_b8 = *(undefined4 *)(lVar13 + 0x228);
                              local_c0 = *(longlong **)(lVar13 + 0x220);
                            }
                            fVar26 = (float)piVar22[0xc] - SUB84(*pplVar7,0);
                            fVar25 = (float)piVar22[0xd] - (float)((ulonglong)*pplVar7 >> 0x20);
                            local_88 = *(float *)(pplVar7 + 1);
                            fVar24 = (float)piVar22[0xe] - *(float *)(pplVar7 + 1);
                            fVar24 = fVar26 * fVar26 + fVar25 * fVar25 + fVar24 * fVar24;
                            if (fVar24 < fVar27) {
                              lVar3 = lVar6;
                              fVar27 = fVar24;
                              local_res8 = lVar6;
                            }
                          }
                        }
LAB_1407ec95f:
                        plVar20 = plVar20 + 1;
                        plVar14 = local_d0;
                      } while (plVar20 != plVar8);
                    }
                    lVar6 = local_d8;
                    uVar2 = local_d8._4_4_;
                    local_d8 = (ulonglong)local_d8._4_4_ << 0x20;
                    plVar8 = local_b0;
                    if ((lVar6 < 0) && (uVar2 != 0)) {
                      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_e0,0);
                      plVar8 = local_b0;
                    }
                  }
                  local_res8._0_1_ = 0;
                  *plVar14 = lVar3;
                  FWeakObjectPtr::operator=(piVar22 + 10,lVar3);
                  FUN_1407eee60(lVar12,piVar22,lVar3);
                }
                plVar14 = plVar14 + 1;
              } while (plVar14 != plVar8);
              local_d0 = plVar14;
              if (local_e0 != (longlong *)0x0) {
                FMemory::Free();
              }
            }
          }
          uVar4 = 0;
          lVar12 = (longlong)(int)param_4[2];
          if ((int)param_4[2] != 0) {
            plVar8 = (longlong *)param_4[1];
            if ((longlong *)param_4[1] == (longlong *)0x0) {
              plVar8 = param_4;
            }
            bVar23 = *plVar8 != 0;
            uVar17 = uVar4;
            uVar18 = uVar4;
            do {
              iVar15 = (int)uVar17;
              uVar4 = uVar4 + 1;
              uVar17 = (ulonglong)(iVar15 + 1);
              if ((longlong)uVar4 < lVar12) {
                plVar8 = (longlong *)param_4[1];
                if ((longlong *)param_4[1] == (longlong *)0x0) {
                  plVar8 = param_4;
                }
                plVar8 = plVar8 + uVar4;
                do {
                  if (bVar23 != (*plVar8 != 0)) break;
                  uVar17 = (ulonglong)((int)uVar17 + 1);
                  uVar4 = uVar4 + 1;
                  plVar8 = plVar8 + 1;
                } while ((longlong)uVar4 < lVar12);
              }
              iVar21 = (int)uVar17 - iVar15;
              if (bVar23 != false) {
                iVar19 = (int)uVar18;
                if (iVar19 != iVar15) {
                  uVar18 = (ulonglong)(param_4[1] != 0) - 1 & (ulonglong)param_4 | param_4[1];
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(uVar18 + (longlong)iVar19 * 8),
                             (void *)(uVar18 + (longlong)iVar15 * 8),(longlong)iVar21 << 3);
                }
                uVar18 = (ulonglong)(uint)(iVar19 + iVar21);
              }
              bVar23 = (bool)(bVar23 ^ 1);
            } while ((longlong)uVar4 < lVar12);
            *(int *)(param_4 + 2) = (int)uVar18;
          }
          return (ulonglong)(byte)local_res8;
        }
        if (bVar23) break;
        if (((*(longlong *)(lVar12 + 0x598) == 0) || (uVar4 = FUN_1407ec100(), (char)uVar4 == '\0'))
           || ((char)piVar22[0x12] == '\x02')) {
          plVar14 = local_98;
          lVar12 = plVar8[0x1f];
          if (lVar12 == 0) {
            (**(code **)(*local_98 + 0x368))(local_98);
            lVar12 = plVar14[0x1f];
            if (lVar12 == 0) break;
          }
          lVar3 = FUN_1428dfc70();
          iVar15 = *(int *)(lVar3 + 0x90);
          uVar4 = (longlong)iVar15;
          if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < iVar15) ||
             (uVar4 = *(ulonglong *)(*(longlong *)(lVar12 + 0x10) + 0x88),
             *(longlong *)(uVar4 + (longlong)iVar15 * 8) != lVar3 + 0x88)) {
            uVar4 = uVar4 & 0xffffffffffffff00;
          }
          else {
            uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
          }
          if (((char)uVar4 == '\0') || ((*(byte *)(lVar12 + 0x92) & 0x40) == 0)) break;
        }
        return uVar4 & 0xffffffffffffff00;
      }
    }
  }
LAB_1407ec38c:
  uVar4 = UMovieSceneBindingOverrides::LocateBoundObjects(param_1,param_2,param_3,param_4);
  return uVar4;
}



// FUNCTION 1407ecb50 FUN_1407ecb50 body=272 status=ok
// SIG undefined FUN_1407ecb50(void)

void FUN_1407ecb50(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  FUN_1421f4c40();
  lVar6 = *param_4;
  lVar1 = lVar6 + (longlong)(int)param_4[1] * 8;
  if (lVar6 != lVar1) {
    do {
      lVar3 = FWeakObjectPtr::Get(lVar6);
      FUN_1407ef4d0(param_1 + -0x28,lVar3,1);
      if (lVar3 != 0) {
        lVar4 = FUN_14291fb80();
        lVar7 = lVar4 + 0x88;
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar7)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          uVar5 = *(undefined8 *)(lVar3 + 0x488);
        }
        else {
          lVar4 = FUN_1429d7ab0();
          lVar7 = lVar4 + 0x88;
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar7)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_1407ecc3e;
          uVar5 = *(undefined8 *)(lVar3 + 0x490);
        }
        FUN_1407ef4d0(param_1 + -0x28,uVar5,CONCAT71((int7)((ulonglong)lVar7 >> 8),1));
      }
LAB_1407ecc3e:
      lVar6 = lVar6 + 8;
    } while (lVar6 != lVar1);
  }
  return;
}



// FUNCTION 1407ecc60 FUN_1407ecc60 body=33 status=ok
// SIG undefined FUN_1407ecc60(void)

void FUN_1407ecc60(longlong param_1)

{
  FUN_1407ee570();
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x570,0);
  return;
}



// FUNCTION 1407ecc90 FUN_1407ecc90 body=33 status=ok
// SIG undefined FUN_1407ecc90(void)

void FUN_1407ecc90(longlong param_1)

{
  FUN_1407ee570();
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x560,0);
  return;
}



// FUNCTION 1407eccc0 FUN_1407eccc0 body=59 status=ok
// SIG undefined FUN_1407eccc0(void)

void FUN_1407eccc0(longlong param_1)

{
  FUN_1407ee570();
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x550,0);
  if ((*(char *)(param_1 + 0x128) == '\x03') || (*(char *)(param_1 + 0x5e8) != '\0')) {
    *(undefined1 *)(param_1 + 0x5fd) = 0;
  }
  return;
}



// FUNCTION 1407ecd00 FUN_1407ecd00 body=174 status=ok
// SIG undefined FUN_1407ecd00(void)

void FUN_1407ecd00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FUN_1407ee570();
  lVar1 = *(longlong *)(param_1 + 0x5a0);
  lVar2 = (longlong)*(int *)(param_1 + 0x5a8) * 0x50 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x50) {
    FWeakObjectPtr::operator=(&local_res8,0);
    *(undefined4 *)(lVar1 + 0x28) = local_res8;
    *(undefined4 *)(lVar1 + 0x2c) = local_resc;
  }
  *(undefined4 *)(param_1 + 0x5e0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x5e4)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x5d8,0);
  }
  if (*(char *)(param_1 + 0x5fc) != '\0') {
    FUN_1407eef20(param_1,0);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x580,0);
  return;
}



// FUNCTION 1407ecdb0 FUN_1407ecdb0 body=178 status=ok
// SIG undefined FUN_1407ecdb0(void)

void FUN_1407ecdb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  FUN_1407ef410(param_1 + -0x28,param_2,1);
  lVar1 = *(longlong *)(param_1 + 0x878);
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x598) != 0)) && (param_2 != 0)) &&
     (*(char *)(lVar1 + 0x128) == '\x03')) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = (**(code **)(*(longlong *)(*(longlong *)(lVar1 + 0x598) + 0x28) + 0x50))();
      FUN_141f4f0f0(uVar4,local_18,param_2);
      FUN_1407eee60(lVar1,local_18,param_2);
    }
  }
  return;
}



// FUNCTION 1407ece70 FUN_1407ece70 body=250 status=ok
// SIG undefined FUN_1407ece70(void)

void FUN_1407ece70(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  if (((*(char *)(param_1 + 0x128) == '\x03') || (*(char *)(param_1 + 0x5e8) != '\0')) &&
     (*(longlong *)(param_1 + 0x4b0) != 0)) {
    cVar1 = UMovieSceneSequencePlayer::IsPlaying();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x5fd) = 1;
      lVar3 = 0;
      if (*(longlong *)(param_1 + 0x598) != 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x598) + 0x371) = 1;
        lVar3 = *(longlong *)(param_1 + 0x598);
        if ((lVar3 != 0) &&
           ((*(char *)(param_1 + 0x128) == '\x03' || (*(char *)(param_1 + 0x5e8) != '\0')))) {
          UMovieSceneSequencePlayer::GoToEndAndStop();
          lVar3 = *(longlong *)(param_1 + 0x598);
          if (*(char *)(lVar3 + 0x371) != '\0') {
            FUN_1405cd430();
            lVar3 = *(longlong *)(param_1 + 0x598);
          }
          puVar2 = (undefined8 *)UMovieSceneSequencePlayer::GetLastValidTime(lVar3,local_res8);
          FMovieScenePlaybackPosition::Reset(lVar3 + 0x760,*puVar2);
          FUN_1407ee570(param_1);
          lVar3 = *(longlong *)(param_1 + 0x598);
        }
      }
      if (lVar3 != 0) {
        *(undefined1 *)(lVar3 + 0x371) = 0;
      }
    }
  }
  if (*(char *)(param_1 + 0x5fc) != '\0') {
    FUN_1407eef20(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1407ecf90 FUN_1407ecf90 body=683 status=ok
// SIG undefined FUN_1407ecf90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407ecf90(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  uint local_c8;
  uint local_c0;
  undefined8 local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 != 0) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::GetPlayerControllerIterator(uVar4,&local_b8);
    while( true ) {
      if ((iStack_b0 < 0) || (*(int *)((longlong)local_b8 + 8) <= iStack_b0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      plVar5 = (longlong *)FWeakObjectPtr::Get();
      if (plVar5 != (longlong *)0x0) {
        lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (cVar2 = (**(code **)(*plVar5 + 0x768))(), cVar2 != '\0')) {
          local_c0 = local_c0 & 0xffffff00;
          local_c8 = 0x3f800000;
          FUN_142ddb980(plVar5,1,(int)param_1[0xbf],0x3f80000000000000);
        }
      }
      iStack_b0 = iStack_b0 + 1;
    }
    if ((char)param_1[0x25] == '\x03') {
      local_b8 = FUN_1407ece70;
      iStack_b0 = 0;
      lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        *(undefined4 *)(plVar5 + 2) = (undefined4)local_b8;
        *(undefined4 *)((longlong)plVar5 + 0x14) = local_b8._4_4_;
        *(int *)(plVar5 + 3) = iStack_b0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_ac;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar3;
        *plVar5 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_a8 = 0;
      local_a0 = 0;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x30))(plVar5,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_c0 = 0xbf800000;
      local_c8 = local_c8 & 0xffffff00;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar4,param_1 + 0xbe,&local_a8,0x3f800000);
      if (local_48 != 0) {
        plVar6 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar6 = local_58;
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        lVar3 = FMemory::Realloc(plVar5,0,0);
        if (lVar3 != 0) {
          FMemory::Free(lVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 1407ed240 FUN_1407ed240 body=796 status=ok
// SIG undefined FUN_1407ed240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407ed240(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar5 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = *(longlong *)(lVar1 + 0x5a0);
      lVar9 = (longlong)*(int *)(lVar1 + 0x5a8) * 0x50 + lVar5;
      for (; lVar5 != lVar9; lVar5 = lVar5 + 0x50) {
        uVar6 = FWeakObjectPtr::Get(lVar5 + 0x28);
        FUN_1407ef410(param_1,uVar6,1);
      }
      if (*(char *)(lVar1 + 0x128) != '\x03') {
        lVar9 = *(longlong *)(lVar1 + 0x5d8);
        lVar5 = lVar9 + (longlong)*(int *)(lVar1 + 0x5e0) * 0x18;
        for (; lVar9 != lVar5; lVar9 = lVar9 + 0x18) {
          uVar6 = FWeakObjectPtr::Get(lVar9 + 0x10);
          FUN_1407ef410(param_1,uVar6,1);
        }
      }
      plVar7 = *(longlong **)(param_1 + 0x3d8);
      if ((plVar7 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar7 + 0x298))(), lVar5 != 0)) {
        lVar9 = *(longlong *)(lVar5 + 0x70);
        local_48 = (undefined8 *)0x0;
        local_40 = 0;
        lVar5 = (longlong)*(int *)(lVar5 + 0x78) * 0x30 + lVar9;
        if (lVar9 != lVar5) {
          do {
            (**(code **)(*plVar7 + 0x288))(plVar7,lVar9,lVar1,&local_50);
            puVar8 = &local_50;
            if (local_48 != (undefined8 *)0x0) {
              puVar8 = local_48;
            }
            uVar10 = 0;
            uVar11 = (longlong)(int)local_40 & 0x1fffffffffffffff;
            if (puVar8 + (int)local_40 < puVar8) {
              uVar11 = 0;
            }
            if (uVar11 != 0) {
              do {
                FUN_1407ef410(param_1,*puVar8,1);
                uVar10 = uVar10 + 1;
                puVar8 = puVar8 + 1;
              } while (uVar10 != uVar11);
            }
            lVar3 = local_40;
            uVar4 = local_40._4_4_;
            local_40 = (ulonglong)local_40._4_4_ << 0x20;
            if ((lVar3 < 0) && (uVar4 != 0)) {
              FUN_1407eed70(&local_50,0);
            }
            lVar9 = lVar9 + 0x30;
          } while (lVar9 != lVar5);
          if (local_48 != (undefined8 *)0x0) {
            FMemory::Free();
          }
        }
      }
      if (*(longlong *)(lVar1 + 0x4e8) != 0) {
        lVar5 = FUN_1421f4100(lVar1,0,0);
        if (lVar5 == 0) {
          local_58 = *(undefined8 *)(lVar1 + 0x18);
        }
        else {
          local_58 = *(undefined8 *)(lVar5 + 0x18);
        }
        lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x4e8) + 0x30);
        lVar1 = lVar5 + (longlong)*(int *)(*(longlong *)(lVar1 + 0x4e8) + 0x38) * 0x24;
        for (; lVar5 != lVar1; lVar5 = lVar5 + 0x24) {
          plVar7 = (longlong *)FWeakObjectPtr::Get(lVar5 + 0x18);
          if (plVar7 != (longlong *)0x0) {
            lVar9 = FUN_1428dfc70();
            if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                lVar9 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              uVar6 = FUN_1407e27e0();
              lVar9 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar6);
              if (lVar9 != 0) {
                FUN_142dafbc0(lVar9 + 0x6f0,&local_58);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1407ed560 FUN_1407ed560 body=832 status=ok
// SIG undefined FUN_1407ed560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407ed560(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  cVar5 = IsGarbageCollecting();
  if (((cVar5 == '\0') && (DAT_1468c217e == '\0')) &&
     (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)) {
    lVar6 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar6 = *(longlong *)(lVar1 + 0x5a0);
      lVar10 = (longlong)*(int *)(lVar1 + 0x5a8) * 0x50 + lVar6;
      for (; lVar6 != lVar10; lVar6 = lVar6 + 0x50) {
        uVar7 = FWeakObjectPtr::Get(lVar6 + 0x28);
        FUN_1407ef410(param_1,uVar7,0);
      }
      if (*(char *)(lVar1 + 0x128) != '\x03') {
        lVar10 = *(longlong *)(lVar1 + 0x5d8);
        lVar6 = lVar10 + (longlong)*(int *)(lVar1 + 0x5e0) * 0x18;
        for (; lVar10 != lVar6; lVar10 = lVar10 + 0x18) {
          uVar7 = FWeakObjectPtr::Get(lVar10 + 0x10);
          FUN_1407ef410(param_1,uVar7,0);
        }
      }
      plVar8 = *(longlong **)(param_1 + 0x3d8);
      if ((plVar8 != (longlong *)0x0) && (lVar6 = (**(code **)(*plVar8 + 0x298))(), lVar6 != 0)) {
        lVar10 = *(longlong *)(lVar6 + 0x70);
        local_48 = (undefined8 *)0x0;
        local_40 = 0;
        lVar6 = (longlong)*(int *)(lVar6 + 0x78) * 0x30 + lVar10;
        if (lVar10 != lVar6) {
          do {
            (**(code **)(*plVar8 + 0x288))(plVar8,lVar10,lVar1,&local_50);
            puVar9 = &local_50;
            if (local_48 != (undefined8 *)0x0) {
              puVar9 = local_48;
            }
            uVar11 = 0;
            uVar12 = (longlong)(int)local_40 & 0x1fffffffffffffff;
            if (puVar9 + (int)local_40 < puVar9) {
              uVar12 = 0;
            }
            if (uVar12 != 0) {
              do {
                FUN_1407ef410(param_1,*puVar9,0);
                uVar11 = uVar11 + 1;
                puVar9 = puVar9 + 1;
              } while (uVar11 != uVar12);
            }
            lVar3 = local_40;
            uVar4 = local_40._4_4_;
            local_40 = (ulonglong)local_40._4_4_ << 0x20;
            if ((lVar3 < 0) && (uVar4 != 0)) {
              FUN_1407eed70(&local_50,0);
            }
            lVar10 = lVar10 + 0x30;
          } while (lVar10 != lVar6);
          if (local_48 != (undefined8 *)0x0) {
            FMemory::Free();
          }
        }
      }
      if (*(longlong *)(lVar1 + 0x4e8) != 0) {
        lVar6 = FUN_1421f4100(lVar1,0,0);
        if (lVar6 == 0) {
          local_58 = *(undefined8 *)(lVar1 + 0x18);
        }
        else {
          local_58 = *(undefined8 *)(lVar6 + 0x18);
        }
        lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x4e8) + 0x30);
        lVar1 = lVar6 + (longlong)*(int *)(*(longlong *)(lVar1 + 0x4e8) + 0x38) * 0x24;
        for (; lVar6 != lVar1; lVar6 = lVar6 + 0x24) {
          plVar8 = (longlong *)FWeakObjectPtr::Get(lVar6 + 0x18);
          if (plVar8 != (longlong *)0x0) {
            lVar10 = FUN_1428dfc70();
            if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                lVar10 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              uVar7 = FUN_1407e27e0();
              lVar10 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar7);
              if (lVar10 != 0) {
                FUN_142dbb5d0(lVar10 + 0x6f0,&local_58);
              }
            }
          }
        }
      }
    }
  }
  FUN_1421f5030(param_1);
  return;
}



// FUNCTION 1407ed8d0 FUN_1407ed8d0 body=39 status=ok
// SIG undefined FUN_1407ed8d0(void)

void FUN_1407ed8d0(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x4b0) != 0) &&
     ((*(char *)(param_1 + 0x128) == '\x03' || (*(char *)(param_1 + 0x5e8) != '\0')))) {
    FUN_141f5abf0(*(longlong *)(param_1 + 0x4b0));
    return;
  }
  return;
}



// FUNCTION 1407ed900 FUN_1407ed900 body=78 status=ok
// SIG undefined FUN_1407ed900(void)

void FUN_1407ed900(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x4b0) != 0) &&
     ((*(char *)(param_1 + 0x128) == '\x03' || (*(char *)(param_1 + 0x5e8) != '\0')))) {
    FUN_141f5b140(*(longlong *)(param_1 + 0x4b0),0);
    FUN_141f5abf0(*(undefined8 *)(param_1 + 0x4b0));
    FUN_1407ee570(param_1);
    return;
  }
  return;
}



// FUNCTION 1407ed950 FUN_1407ed950 body=63 status=ok
// SIG undefined FUN_1407ed950(void)

void FUN_1407ed950(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x4b0) != 0) &&
     ((*(char *)(param_1 + 0x128) == '\x03' || (*(char *)(param_1 + 0x5e8) != '\0')))) {
    FUN_141f5ae70();
    FUN_1407ee570(param_1);
    return;
  }
  return;
}



// FUNCTION 1407ed990 FUN_1407ed990 body=775 status=ok
// SIG undefined FUN_1407ed990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407ed990(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  float fStackX_c;
  longlong local_28;
  undefined1 local_20 [24];
  
  FUN_142238870();
  if ((char)param_1[0xbd] != '\0') {
    return;
  }
  if (param_1[0xb3] == 0) {
    lVar3 = param_1[0x96];
    if (lVar3 == 0) {
      local_28 = param_1[0xb6];
      FString::FString(local_20,param_1 + 0xb7);
      FSoftObjectPath::operator=(param_1 + 0x97,&local_28);
      (**(code **)(*param_1 + 0x6e8))(param_1);
      lVar6 = param_1[0xb3];
    }
    else {
      lVar6 = FUN_1407eff40();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      lVar6 = 0;
      if (bVar4) {
        lVar6 = lVar3;
      }
      param_1[0xb3] = lVar6;
    }
    if (lVar6 == 0) {
      return;
    }
  }
  FUN_141f65d20();
  *(undefined4 *)(param_1[0xb3] + 0x400) = *(undefined4 *)((longlong)param_1 + 0x5d4);
  if (*(char *)((longlong)param_1 + 0x5fd) != '\0') {
    *(undefined1 *)(param_1[0xb3] + 0x371) = 1;
  }
  uVar5 = (**(code **)(*(longlong *)(param_1[0xb3] + 0x28) + 0x30))();
  bVar1 = *(byte *)(param_1[0xb3] + 0x3cc);
  puVar7 = (undefined8 *)FUN_141f520f0(param_1[0xb3],&local_28);
  bVar2 = *(byte *)(param_1 + 0xb9);
  iVar8 = (int)((ulonglong)puVar7[1] >> 0x20);
  fStackX_c = (float)((ulonglong)*puVar7 >> 0x20);
  if (uVar5 == bVar2) {
    if (((bVar1 & 1) != *(byte *)((longlong)param_1 + 0x5c9)) && (uVar5 == 1)) {
      UMovieSceneSequencePlayer::ChangePlaybackDirection(param_1[0xb3]);
      FUN_141f5b140(param_1[0xb3]);
      goto LAB_1407edbcd;
    }
    if (ABS(((float)iVar8 * fStackX_c + (float)((longlong)iVar8 * (longlong)(int)*puVar7)) /
            (float)(int)puVar7[1] - *(float *)((longlong)param_1 + 0x5cc)) < _DAT_146263bd0)
    goto LAB_1407edbcd;
    if (*(byte *)((longlong)param_1 + 0x5c9) == 0) {
      FUN_141f5abf0(param_1[0xb3]);
    }
    else {
      UMovieSceneSequencePlayer::PlayReverse();
    }
    FUN_141f5b140(param_1[0xb3]);
    if ((char)param_1[0xb9] != '\0') {
      if ((char)param_1[0xb9] == '\x06') {
        FUN_141f5aa50(param_1[0xb3]);
      }
      goto LAB_1407edbcd;
    }
  }
  else {
    if (bVar2 != 0) {
      if (bVar2 == 1) {
        if (*(char *)((longlong)param_1 + 0x5c9) == '\0') {
          FUN_141f5abf0(param_1[0xb3]);
        }
        else {
          UMovieSceneSequencePlayer::PlayReverse();
        }
        FUN_141f5b140(param_1[0xb3]);
      }
      else if (bVar2 == 3) {
        FUN_141f63400(param_1[0xb3]);
        FUN_141f5b140(param_1[0xb3]);
      }
      else if (bVar2 == 6) {
        FUN_141f5b140(param_1[0xb3]);
        FUN_141f5aa50(param_1[0xb3]);
      }
      goto LAB_1407edbcd;
    }
    FUN_141f5b140(param_1[0xb3]);
  }
  FUN_141f66f00(param_1[0xb3]);
LAB_1407edbcd:
  if (*(char *)((longlong)param_1 + 0x5fd) != '\0') {
    FUN_1405cd430();
    *(undefined1 *)(param_1[0xb3] + 0x371) = 0;
  }
  return;
}



// FUNCTION 1407edca0 FUN_1407edca0 body=2245 status=ok
// SIG undefined FUN_1407edca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001407ee316) */
/* WARNING: Removing unreachable block (ram,0x0001407ee1bc) */
/* WARNING: Removing unreachable block (ram,0x0001407ee064) */
/* WARNING: Removing unreachable block (ram,0x0001407ee10f) */
/* WARNING: Removing unreachable block (ram,0x0001407ee268) */
/* WARNING: Removing unreachable block (ram,0x0001407ee3bf) */
/* WARNING: Removing unreachable block (ram,0x0001407ee2af) */

void FUN_1407edca0(longlong *param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  uint *puVar19;
  char *pcVar20;
  int iVar21;
  undefined4 *puVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong *plVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStack_1b8 [32];
  undefined4 local_198 [2];
  longlong *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined4 *local_100;
  longlong local_f8;
  undefined4 local_f0;
  char local_ec [4];
  undefined4 local_e8;
  char local_e4 [4];
  undefined4 local_e0;
  char local_dc [4];
  undefined4 local_d8;
  char local_d4 [4];
  undefined4 local_d0;
  char local_cc [4];
  undefined4 local_c8;
  char local_c4 [52];
  ulonglong local_90;
  
  local_90 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  plVar17 = param_1 + 0xb4;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_198[0] = 0;
  iVar14 = *(int *)((longlong)param_1 + 0x5ac);
  iVar21 = (int)param_1[0xb5];
  local_108 = plVar17;
  if (iVar14 < 0) {
    if (iVar21 != 0) {
      plVar23 = (longlong *)(*plVar17 + 0x10);
      do {
        if (*plVar23 != 0) {
          FMemory::Free();
        }
        plVar23 = plVar23 + 10;
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
      iVar14 = *(int *)((longlong)param_1 + 0x5ac);
    }
    *(undefined4 *)(param_1 + 0xb5) = 0;
    if (iVar14 != 0) {
      TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(plVar17,0);
    }
  }
  else {
    if (iVar21 != 0) {
      plVar23 = (longlong *)(*plVar17 + 0x10);
      do {
        if (*plVar23 != 0) {
          FMemory::Free();
        }
        plVar23 = plVar23 + 10;
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
    }
    *(undefined4 *)(param_1 + 0xb5) = 0;
  }
  lVar15 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((((lVar15 != 0) && ((*(int *)(lVar15 + 0x708) - 1U & 0xfffffffd) == 0)) &&
      (plVar23 = (longlong *)FUN_1421f4100(param_1,1,0), plVar23 != (longlong *)0x0)) &&
     (local_f8 = (**(code **)(*plVar23 + 0x298))(plVar23), local_f8 != 0)) {
    puVar26 = *(undefined4 **)(local_f8 + 0x70);
    puVar27 = puVar26 + (longlong)*(int *)(local_f8 + 0x78) * 0xc;
    uVar28 = local_198[0];
    uVar29 = local_198[0];
    uVar30 = local_198[0];
    uVar31 = local_198[0];
    uVar32 = local_198[0];
    uVar33 = local_198[0];
    local_100 = puVar27;
    if (puVar26 != puVar27) {
      do {
        local_138 = puVar26;
        puVar16 = (undefined8 *)UMovieScene::FindSpawnable(local_f8,puVar26);
        if (((puVar16 != (undefined8 *)0x0) && (puVar16[0xc] != 0)) &&
           (lVar15 = *(longlong *)(puVar16[0xc] + 0x10), lVar15 != 0)) {
          local_188 = *puVar26;
          uStack_184 = puVar26[1];
          uStack_180 = puVar26[2];
          uStack_17c = puVar26[3];
          local_178 = 0;
          local_170 = 0;
          local_168 = 0;
          local_160 = 0xffffffff;
          local_140 = 0;
          FString::operator=(&local_178,puVar26 + 4);
          local_158 = *(undefined4 *)(puVar16 + 2);
          uStack_154 = *(undefined4 *)((longlong)puVar16 + 0x14);
          local_150 = *(undefined4 *)(puVar16 + 3);
          local_118 = (longlong *)*puVar16;
          uStack_110 = *(undefined4 *)(puVar16 + 1);
          uStack_10c = *(undefined4 *)((longlong)puVar16 + 0xc);
          local_168 = lVar15;
          FQuat::Rotator(&local_118,&local_130);
          plVar24 = *(longlong **)(puVar26 + 8);
          local_140 = CONCAT71(local_140._1_7_,*(undefined1 *)(puVar16 + 0xf));
          local_14c = local_130;
          uStack_148 = local_12c;
          plVar23 = plVar24 + (int)puVar26[10];
          local_144 = local_128;
          local_190 = plVar23;
          local_118 = plVar24;
          if (plVar24 != plVar23) {
            do {
              plVar17 = (longlong *)*plVar24;
              if (plVar17 != (longlong *)0x0) {
                local_118 = plVar24;
                lVar15 = UMovieScene3DTransformTrack::GetPrivateStaticClass();
                if ((*(int *)(plVar17[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar17[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8) !=
                    lVar15 + 0x88)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                plVar23 = local_190;
                if (bVar6) {
                  plVar17 = (longlong *)(**(code **)(*plVar17 + 0x2f0))(plVar17);
                  plVar25 = (longlong *)*plVar17;
                  plVar17 = plVar25 + (int)plVar17[1];
                  plVar23 = local_190;
                  for (; local_190 = plVar23, plVar25 != plVar17; plVar25 = plVar25 + 1) {
                    lVar15 = *plVar25;
                    if (lVar15 != 0) {
                      lVar18 = UMovieScene3DTransformSection::GetPrivateStaticClass();
                      bVar6 = true;
                      if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar18 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar18 + 0x90) * 8) != lVar18 + 0x88)) {
                        bVar6 = false;
                      }
                      if (bVar6) {
                        puVar19 = (uint *)FUN_141ff5350(lVar15,local_198);
                        uVar1 = *puVar19;
                        UMovieSceneSection::GetChannelProxy(lVar15);
                        FMovieSceneFloatChannel::StaticStruct();
                        lVar15 = FMovieSceneChannelProxy::FindEntry();
                        if (lVar15 == 0) {
                          lVar18 = 0;
                          iVar14 = 0;
                        }
                        else {
                          lVar18 = *(longlong *)(lVar15 + 8);
                          iVar14 = *(int *)(lVar15 + 0x10);
                        }
                        if ((uVar1 & 1) != 0) {
                          for (iVar21 = 0x1f; 1U >> iVar21 == 0; iVar21 = iVar21 + -1) {
                          }
                          if ((iVar21 < 0) || (iVar14 <= iVar21)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if ((bVar6) &&
                             (lVar15 = *(longlong *)(lVar18 + (longlong)iVar21 * 8), lVar15 != 0)) {
                            if (*(int *)(lVar15 + 0x28) < 1) {
                              if (*(char *)(lVar15 + 0x34) == '\0') {
                                bVar8 = true;
                                local_c4[8] = 0;
                                pcVar20 = local_c4 + 4;
                              }
                              else {
                                pcVar20 = (char *)&local_f0;
                                local_f0 = *(undefined4 *)(lVar15 + 0x30);
                                bVar7 = true;
                                local_ec[0] = 1;
                              }
                              if (pcVar20[4] != '\0') {
                                uVar33 = *(undefined4 *)pcVar20;
                              }
                              if (bVar8) {
                                bVar8 = false;
                                local_c4[8] = 0;
                              }
                              if (bVar7) {
                                bVar7 = false;
                                local_ec[0] = 0;
                              }
                              if (pcVar20[4] != '\0') {
                                local_158 = uVar33;
                              }
                            }
                            else {
                              local_158 = **(undefined4 **)(lVar15 + 0x20);
                            }
                          }
                        }
                        if ((uVar1 >> 1 & 1) != 0) {
                          for (iVar21 = 0x1f; 2U >> iVar21 == 0; iVar21 = iVar21 + -1) {
                          }
                          if ((iVar21 < 0) || (iVar14 <= iVar21)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if ((bVar6) &&
                             (lVar15 = *(longlong *)(lVar18 + (longlong)iVar21 * 8), lVar15 != 0)) {
                            if (*(int *)(lVar15 + 0x28) < 1) {
                              if (*(char *)(lVar15 + 0x34) == '\0') {
                                bVar9 = true;
                                local_c4[0x10] = 0;
                                pcVar20 = local_c4 + 0xc;
                              }
                              else {
                                local_e8 = *(undefined4 *)(lVar15 + 0x30);
                                bVar10 = true;
                                local_e4[0] = 1;
                                pcVar20 = (char *)&local_e8;
                              }
                              if (pcVar20[4] != '\0') {
                                uVar32 = *(undefined4 *)pcVar20;
                              }
                              if (bVar9) {
                                bVar9 = false;
                                local_c4[0x10] = 0;
                              }
                              if (bVar10) {
                                bVar10 = false;
                                local_e4[0] = 0;
                              }
                              if (pcVar20[4] != '\0') {
                                uStack_154 = uVar32;
                              }
                            }
                            else {
                              uStack_154 = **(undefined4 **)(lVar15 + 0x20);
                            }
                          }
                        }
                        if ((uVar1 >> 2 & 1) != 0) {
                          for (iVar21 = 0x1f; 4U >> iVar21 == 0; iVar21 = iVar21 + -1) {
                          }
                          if ((iVar21 < 0) || (iVar14 <= iVar21)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if ((bVar6) &&
                             (lVar15 = *(longlong *)(lVar18 + (longlong)iVar21 * 8), lVar15 != 0)) {
                            if (*(int *)(lVar15 + 0x28) < 1) {
                              if (*(char *)(lVar15 + 0x34) == '\0') {
                                bVar11 = true;
                                local_c4[0x18] = 0;
                                pcVar20 = local_c4 + 0x14;
                              }
                              else {
                                pcVar20 = (char *)&local_e0;
                                local_e0 = *(undefined4 *)(lVar15 + 0x30);
                                bVar12 = true;
                                local_dc[0] = 1;
                              }
                              if (pcVar20[4] != '\0') {
                                uVar31 = *(undefined4 *)pcVar20;
                              }
                              if (bVar11) {
                                bVar11 = false;
                                local_c4[0x18] = 0;
                              }
                              if (bVar12) {
                                bVar12 = false;
                                local_dc[0] = 0;
                              }
                              if (pcVar20[4] != '\0') {
                                local_150 = uVar31;
                              }
                            }
                            else {
                              local_150 = **(undefined4 **)(lVar15 + 0x20);
                            }
                          }
                        }
                        if ((uVar1 >> 3 & 1) != 0) {
                          for (iVar21 = 0x1f; 8U >> iVar21 == 0; iVar21 = iVar21 + -1) {
                          }
                          if ((iVar21 < 0) || (iVar14 <= iVar21)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if ((bVar6) &&
                             (lVar15 = *(longlong *)(lVar18 + (longlong)iVar21 * 8), lVar15 != 0)) {
                            if (*(int *)(lVar15 + 0x28) < 1) {
                              if (*(char *)(lVar15 + 0x34) == '\0') {
                                local_c4[0x20] = 0;
                                pcVar20 = local_c4 + 0x1c;
                              }
                              else {
                                pcVar20 = (char *)&local_d8;
                                local_d8 = *(undefined4 *)(lVar15 + 0x30);
                                bVar13 = true;
                                local_d4[0] = 1;
                              }
                              if (pcVar20[4] != '\0') {
                                uVar30 = *(undefined4 *)pcVar20;
                              }
                              if (bVar13) {
                                bVar13 = false;
                                local_d4[0] = 0;
                              }
                              if (pcVar20[4] != '\0') {
                                local_144 = uVar30;
                              }
                            }
                            else {
                              local_144 = **(undefined4 **)(lVar15 + 0x20);
                            }
                          }
                        }
                        if ((uVar1 >> 4 & 1) != 0) {
                          for (iVar21 = 0x1f; 0x10U >> iVar21 == 0; iVar21 = iVar21 + -1) {
                          }
                          if ((iVar21 < 0) || (iVar14 <= iVar21)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if ((bVar6) &&
                             (lVar15 = *(longlong *)(lVar18 + (longlong)iVar21 * 8), lVar15 != 0)) {
                            if (*(int *)(lVar15 + 0x28) < 1) {
                              if (*(char *)(lVar15 + 0x34) == '\0') {
                                bVar2 = true;
                                local_c4[0x28] = 0;
                                pcVar20 = local_c4 + 0x24;
                              }
                              else {
                                pcVar20 = (char *)&local_d0;
                                local_d0 = *(undefined4 *)(lVar15 + 0x30);
                                bVar3 = true;
                                local_cc[0] = 1;
                              }
                              if (pcVar20[4] != '\0') {
                                uVar29 = *(undefined4 *)pcVar20;
                              }
                              if (bVar2) {
                                bVar2 = false;
                                local_c4[0x28] = 0;
                              }
                              if (bVar3) {
                                bVar3 = false;
                                local_cc[0] = 0;
                              }
                              if (pcVar20[4] != '\0') {
                                local_14c = uVar29;
                              }
                            }
                            else {
                              local_14c = **(undefined4 **)(lVar15 + 0x20);
                            }
                          }
                        }
                        if ((uVar1 >> 5 & 1) != 0) {
                          for (iVar21 = 0x1f; 0x20U >> iVar21 == 0; iVar21 = iVar21 + -1) {
                          }
                          if ((iVar21 < 0) || (iVar14 <= iVar21)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if ((bVar6) &&
                             (lVar15 = *(longlong *)(lVar18 + (longlong)iVar21 * 8), lVar15 != 0)) {
                            if (*(int *)(lVar15 + 0x28) < 1) {
                              if (*(char *)(lVar15 + 0x34) == '\0') {
                                bVar4 = true;
                                local_c4[0x30] = 0;
                                pcVar20 = local_c4 + 0x2c;
                              }
                              else {
                                pcVar20 = (char *)&local_c8;
                                local_c8 = *(undefined4 *)(lVar15 + 0x30);
                                bVar5 = true;
                                local_c4[0] = '\x01';
                              }
                              if (pcVar20[4] != '\0') {
                                uVar28 = *(undefined4 *)pcVar20;
                              }
                              if (bVar4) {
                                bVar4 = false;
                                local_c4[0x30] = 0;
                              }
                              if (bVar5) {
                                bVar5 = false;
                                local_c4[0] = '\0';
                              }
                              if (pcVar20[4] != '\0') {
                                uStack_148 = uVar28;
                              }
                            }
                            else {
                              uStack_148 = **(undefined4 **)(lVar15 + 0x20);
                            }
                          }
                        }
                      }
                    }
                    plVar24 = local_118;
                    plVar23 = local_190;
                  }
                }
              }
              plVar24 = plVar24 + 1;
              plVar17 = local_108;
              puVar26 = local_138;
              puVar27 = local_100;
              local_118 = plVar24;
            } while (plVar24 != plVar23);
          }
          iVar14 = (int)plVar17[1];
          *(int *)(plVar17 + 1) = iVar14 + 1;
          if (*(int *)((longlong)plVar17 + 0xc) < iVar14 + 1) {
            TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar17,iVar14);
          }
          puVar22 = (undefined4 *)((longlong)iVar14 * 0x50 + *plVar17);
          *puVar22 = local_188;
          puVar22[1] = uStack_184;
          puVar22[2] = uStack_180;
          puVar22[3] = uStack_17c;
          FString::FString(puVar22 + 4,&local_178);
          *(longlong *)(puVar22 + 8) = local_168;
          puVar22[10] = (undefined4)local_160;
          puVar22[0xb] = local_160._4_4_;
          *(ulonglong *)(puVar22 + 0xc) = CONCAT44(uStack_154,local_158);
          puVar22[0xe] = local_150;
          *(ulonglong *)(puVar22 + 0xf) = CONCAT44(uStack_148,local_14c);
          puVar22[0x11] = local_144;
          *(undefined1 *)(puVar22 + 0x12) = (undefined1)local_140;
          if (local_178 != 0) {
            FMemory::Free();
          }
        }
        puVar26 = puVar26 + 0xc;
      } while (puVar26 != puVar27);
    }
  }
  return;
}


