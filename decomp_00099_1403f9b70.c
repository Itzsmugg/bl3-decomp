// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1403f9b70 FUN_1403f9b70 body=58 status=ok
// SIG undefined FUN_1403f9b70(void)

void FUN_1403f9b70(void)

{
  UObjectCompiledInDefer
            (FUN_14302c260,FUN_143028e70,L"UInventoryParticleAspectData",L"/Script/GbxInventory",0,0
             ,0);
  return;
}



// FUNCTION 1403f9bb0 FUN_1403f9bb0 body=58 status=ok
// SIG undefined FUN_1403f9bb0(void)

void FUN_1403f9bb0(void)

{
  UObjectCompiledInDefer
            (FUN_143029390,UPlayFabProfilesAPI::GetPrivateStaticClass,L"UInventoryRarityData",
             L"/Script/GbxInventory",0,0,0);
  return;
}



// FUNCTION 1403f9bf0 FUN_1403f9bf0 body=58 status=ok
// SIG undefined FUN_1403f9bf0(void)

void FUN_1403f9bf0(void)

{
  UObjectCompiledInDefer
            (FUN_14302c290,FUN_143029920,L"UInventorySerialNumberAssetInterface",
             L"/Script/GbxInventory",0,0,0);
  return;
}



// FUNCTION 1403f9c30 FUN_1403f9c30 body=58 status=ok
// SIG undefined FUN_1403f9c30(void)

void FUN_1403f9c30(void)

{
  UObjectCompiledInDefer
            (FUN_14302c2c0,UInputSettings::GetPrivateStaticClass,L"UInventorySerialNumberDatabase",
             L"/Script/GbxInventory",0,0,0);
  return;
}



// FUNCTION 1403f9c70 FUN_1403f9c70 body=58 status=ok
// SIG undefined FUN_1403f9c70(void)

void FUN_1403f9c70(void)

{
  UObjectCompiledInDefer
            (FUN_14302c2f0,thunk_FUN_14302b3d0,L"UItemPoolData",L"/Script/GbxInventory",0,0,0);
  return;
}



// FUNCTION 1403f9cb0 FUN_1403f9cb0 body=58 status=ok
// SIG undefined FUN_1403f9cb0(void)

void FUN_1403f9cb0(void)

{
  UObjectCompiledInDefer
            (FUN_14302c320,FUN_1430297f0,L"UItemPoolExpansionData",L"/Script/GbxInventory",0,0,0);
  return;
}



// FUNCTION 1403f9cf0 FUN_1403f9cf0 body=58 status=ok
// SIG undefined FUN_1403f9cf0(void)

void FUN_1403f9cf0(void)

{
  UObjectCompiledInDefer
            (FUN_14302c350,FUN_143028c80,L"UItemPoolListData",L"/Script/GbxInventory",0,0,0);
  return;
}



// FUNCTION 1403f9d30 FUN_1403f9d30 body=58 status=ok
// SIG undefined FUN_1403f9d30(void)

void FUN_1403f9d30(void)

{
  UObjectCompiledInDefer
            (FUN_143028b10,FUN_143029740,L"UItemPoolListInterface",L"/Script/GbxInventory",0,0,0);
  return;
}



// FUNCTION 1403f9d70 FUN_1403f9d70 body=58 status=ok
// SIG undefined FUN_1403f9d70(void)

void FUN_1403f9d70(void)

{
  UObjectCompiledInDefer
            (FUN_143029220,UAsyncTaskDownloadImage::GetPrivateStaticClass,
             L"UItemPoolPartSelectionOverrideData",L"/Script/GbxInventory",0,0,0);
  return;
}



// FUNCTION 1403f9db0 FUN_1403f9db0 body=58 status=ok
// SIG undefined FUN_1403f9db0(void)

void FUN_1403f9db0(void)

{
  UObjectCompiledInDefer
            (FUN_14302c380,FUN_143029600,L"ULootableBalanceData",L"/Script/GbxInventory",0,0,0);
  return;
}



// FUNCTION 1403f9f90 FUN_1403f9f90 body=92 status=ok
// SIG undefined FUN_1403f9f90(void)

void FUN_1403f9f90(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144861690;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ManufacturerGradeData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fa010 FUN_1403fa010 body=66 status=ok
// SIG undefined FUN_1403fa010(void)

void FUN_1403fa010(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EPickupFlyToAlignmentType",1);
  UObjectCompiledInDeferEnum(FUN_14302d2f0,L"/Script/GbxInventory",*puVar1,0,0);
  return;
}



// FUNCTION 1403fa060 FUN_1403fa060 body=66 status=ok
// SIG undefined FUN_1403fa060(void)

void FUN_1403fa060(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EPlayerDroppability",1);
  UObjectCompiledInDeferEnum(FUN_14302d330,L"/Script/GbxInventory",*puVar1,0,0);
  return;
}



// FUNCTION 1403fa0b0 FUN_1403fa0b0 body=66 status=ok
// SIG undefined FUN_1403fa0b0(void)

void FUN_1403fa0b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ManufacturerGradeData",1);
  UObjectCompiledInDeferStruct(FUN_14302d540,L"/Script/GbxInventory",*puVar1,0,0);
  return;
}



// FUNCTION 1403fa100 FUN_1403fa100 body=58 status=ok
// SIG undefined FUN_1403fa100(void)

void FUN_1403fa100(void)

{
  UObjectCompiledInDefer
            (FUN_14302d5a0,UUGRichTextBlock::GetPrivateStaticClass,L"APickupableMeshActor",
             L"/Script/GbxInventory",0,0,0);
  return;
}



// FUNCTION 1403fa140 FUN_1403fa140 body=58 status=ok
// SIG undefined FUN_1403fa140(void)

void FUN_1403fa140(void)

{
  UObjectCompiledInDefer
            (FUN_14302d050,FUN_14302cf90,L"ULootFunctionLibrary",L"/Script/GbxInventory",0,0,0);
  return;
}



// FUNCTION 1403fa180 FUN_1403fa180 body=58 status=ok
// SIG undefined FUN_1403fa180(void)

void FUN_1403fa180(void)

{
  UObjectCompiledInDefer(FUN_14302d5d0,FUN_14302d0c0,L"ULootListData",L"/Script/GbxInventory",0,0,0)
  ;
  return;
}



// FUNCTION 1403fa1c0 FUN_1403fa1c0 body=58 status=ok
// SIG undefined FUN_1403fa1c0(void)

void FUN_1403fa1c0(void)

{
  UObjectCompiledInDefer
            (FUN_14302cb40,thunk_FUN_14302d370,L"ULootableComponent",L"/Script/GbxInventory",0,0,0);
  return;
}



// FUNCTION 1403fa200 FUN_1403fa200 body=58 status=ok
// SIG undefined FUN_1403fa200(void)

void FUN_1403fa200(void)

{
  UObjectCompiledInDefer
            (FUN_14302d600,&LAB_14143ad20,L"UManufacturerData",L"/Script/GbxInventory",0,0,0);
  return;
}



// FUNCTION 1403fa240 FUN_1403fa240 body=58 status=ok
// SIG undefined FUN_1403fa240(void)

void FUN_1403fa240(void)

{
  UObjectCompiledInDefer
            (FUN_14302d630,FUN_14302cca0,L"UPickupFlyToAbleInterface",L"/Script/GbxInventory",0,0,0)
  ;
  return;
}



// FUNCTION 1403fa280 FUN_1403fa280 body=58 status=ok
// SIG undefined FUN_1403fa280(void)

void FUN_1403fa280(void)

{
  UObjectCompiledInDefer
            (FUN_14302d660,FUN_14302ce20,L"UPickupFlyToData",L"/Script/GbxInventory",0,0,0);
  return;
}



// FUNCTION 1403fa2c0 FUN_1403fa2c0 body=58 status=ok
// SIG undefined FUN_1403fa2c0(void)

void FUN_1403fa2c0(void)

{
  UObjectCompiledInDefer
            (FUN_14302d690,FUN_14302cee0,L"UPickupFlyToTargetInterface",L"/Script/GbxInventory",0,0,
             0);
  return;
}



// FUNCTION 1403fa300 FUN_1403fa300 body=115 status=ok
// SIG undefined FUN_1403fa300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fa300(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47108 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.CleanUpDestructionOnJoin",1,&DAT_145a51a9c,0);
  _DAT_146b47100 = &PTR_FUN_143f3ecf8;
  DAT_146b47110 = (**(code **)(*DAT_146b47108 + 0x38))(DAT_146b47108);
  atexit(FUN_143ec2b60);
  return;
}



// FUNCTION 1403fa3f0 FUN_1403fa3f0 body=32 status=ok
// SIG undefined FUN_1403fa3f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fa3f0(void)

{
  _DAT_14678b6a8 = FUN_140626880();
  atexit((_func_5014 *)&LAB_143ec2bb0);
  return;
}



// FUNCTION 1403fa470 FUN_1403fa470 body=256 status=ok
// SIG undefined FUN_1403fa470(void)

void FUN_1403fa470(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146b470cc;
    plVar1[2] = (longlong)FUN_143031cc0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"GbxDestruction",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 1403fa5e0 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14678b690,0);
  FGenericPlatformString::Memcpy(DAT_14678b690,&DAT_145a52568,8);
  atexit((_func_5014 *)&LAB_143ec2c00);
  return;
}



// FUNCTION 1403fa7f0 FUN_1403fa7f0 body=92 status=ok
// SIG undefined FUN_1403fa7f0(void)

void FUN_1403fa7f0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a572e0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxDestructibleNetBuffer",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fa890 FUN_1403fa890 body=66 status=ok
// SIG undefined FUN_1403fa890(void)

void FUN_1403fa890(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EDestructibleRelevance",1);
  UObjectCompiledInDeferEnum(FUN_1430370d0,L"/Script/GbxDestruction",*puVar1,0,0);
  return;
}



// FUNCTION 1403fa8e0 FUN_1403fa8e0 body=66 status=ok
// SIG undefined FUN_1403fa8e0(void)

void FUN_1403fa8e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxDestructibleNetBuffer",1);
  UObjectCompiledInDeferStruct(FUN_143037210,L"/Script/GbxDestruction",*puVar1,0,0);
  return;
}



// FUNCTION 1403fa930 FUN_1403fa930 body=58 status=ok
// SIG undefined FUN_1403fa930(void)

void FUN_1403fa930(void)

{
  UObjectCompiledInDefer(FUN_143036db0,FUN_143036ba0,L"AClothActor",L"/Script/GbxDestruction",0,0,0)
  ;
  return;
}



// FUNCTION 1403fa970 FUN_1403fa970 body=58 status=ok
// SIG undefined FUN_1403fa970(void)

void FUN_1403fa970(void)

{
  UObjectCompiledInDefer
            (FUN_143037290,FUN_143036e50,L"AClothManager",L"/Script/GbxDestruction",0,0,0);
  return;
}



// FUNCTION 1403fa9b0 FUN_1403fa9b0 body=58 status=ok
// SIG undefined FUN_1403fa9b0(void)

void FUN_1403fa9b0(void)

{
  UObjectCompiledInDefer
            (FUN_1430372c0,UUGRichTextBlock::GetPrivateStaticClass,L"AClothSkeletalMeshActor",
             L"/Script/GbxDestruction",0,0,0);
  return;
}



// FUNCTION 1403fa9f0 FUN_1403fa9f0 body=58 status=ok
// SIG undefined FUN_1403fa9f0(void)

void FUN_1403fa9f0(void)

{
  UObjectCompiledInDefer
            (FUN_1430372f0,APlayerState::GetPrivateStaticClass,L"AClothStaticMeshActor",
             L"/Script/GbxDestruction",0,0,0);
  return;
}



// FUNCTION 1403faa30 FUN_1403faa30 body=58 status=ok
// SIG undefined FUN_1403faa30(void)

void FUN_1403faa30(void)

{
  UObjectCompiledInDefer
            (Z_Construct_UClass_UNavAreaMeta,FUN_143036740,L"AGbxDestructibleActor",
             L"/Script/GbxDestruction",0,0,0);
  return;
}



// FUNCTION 1403faa70 FUN_1403faa70 body=58 status=ok
// SIG undefined FUN_1403faa70(void)

void FUN_1403faa70(void)

{
  UObjectCompiledInDefer
            (FUN_143037320,FUN_143036940,L"AGbxUserDestructibleSyncManager",
             L"/Script/GbxDestruction",0,0,0);
  return;
}



// FUNCTION 1403faab0 FUN_1403faab0 body=58 status=ok
// SIG undefined FUN_1403faab0(void)

void FUN_1403faab0(void)

{
  UObjectCompiledInDefer
            (FUN_143036ab0,FUN_143036a00,L"UGbxDestructibleComponent",L"/Script/GbxDestruction",0,0,
             0);
  return;
}



// FUNCTION 1403fab30 FUN_1403fab30 body=68 status=ok
// SIG undefined FUN_1403fab30(void)

void FUN_1403fab30(void)

{
  FUN_141eb92c0(&DAT_146b47510,L"TaskGraph.TaskPriorities.ParallelLightBeamTickTask",
                L"Task and thread priority for FParallelLightBeamTickTask",0x800,0,0x200);
  atexit(FUN_143ec2c80);
  return;
}



// FUNCTION 1403fab80 FUN_1403fab80 body=68 status=ok
// SIG undefined FUN_1403fab80(void)

void FUN_1403fab80(void)

{
  FUN_141eb92c0(&DAT_146b47690,L"TaskGraph.TaskPriorities.ParallelLightProjectileBatchTickTask",
                L"Task and thread priority for FParallelLightProjectileBatchTickTask",0x800,0,0x200)
  ;
  atexit(FUN_143ec2ce0);
  return;
}



// FUNCTION 1403fabd0 FUN_1403fabd0 body=68 status=ok
// SIG undefined FUN_1403fabd0(void)

void FUN_1403fabd0(void)

{
  FUN_141eb92c0(&DAT_146b475b8,L"TaskGraph.TaskPriorities.ParallelLightProjectileTickTask",
                L"Task and thread priority for FParallelLightProjectileTickTask",0x800,0,0x200);
  atexit(FUN_143ec2d40);
  return;
}



// FUNCTION 1403fac20 FUN_1403fac20 body=115 status=ok
// SIG undefined FUN_1403fac20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fac20(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b475f8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"LightProjectile.BatchTick",1,
                  L"Should light projectile ticks be batched together for performance?\n",0);
  _DAT_146b475f0 = &PTR_FUN_143f3ecf8;
  DAT_146b47600 = (**(code **)(*DAT_146b475f8 + 0x38))(DAT_146b475f8);
  atexit(FUN_143ec2da0);
  return;
}



// FUNCTION 1403faca0 FUN_1403faca0 body=100 status=ok
// SIG undefined FUN_1403faca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403faca0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47580 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"LightProjectile.DisableSignificanceTest",&DAT_146b47330,
                  L"Disables the tracer significance test.",0);
  _DAT_146b47578 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec2df0);
  return;
}



// FUNCTION 1403fad10 `dynamic_initializer_for_'ParticleSystemPoolKillUnusedTime'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'ParticleSystemPoolKillUnusedTime''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__ParticleSystemPoolKillUnusedTime__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47560 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"LightBeam.KillUnusedParticlesTime",&DAT_14678c5c0,
                  L"How long a pooled particle component needs to be unused for before it is destroyed."
                  ,0);
  _DAT_146b47558 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec2e40);
  return;
}



// FUNCTION 1403fad80 FUN_1403fad80 body=100 status=ok
// SIG undefined FUN_1403fad80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fad80(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47550 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"LightBeam.RecycleUnusedParticlesTime",&DAT_14678c5bc,
                  L"How long a pooled particle component needs to be unused for before it can be recycled for use for a different templete."
                  ,0);
  _DAT_146b47548 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec2e90);
  return;
}



// FUNCTION 1403fadf0 `dynamic_initializer_for_'ParticleSystemPoolingCleanTime'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'ParticleSystemPoolingCleanTime''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__ParticleSystemPoolingCleanTime__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47570 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"LightBeam.ParticleCleanTime",&DAT_14678c5c4,
                  L"How often should the pool be cleaned (in seconds).",0);
  _DAT_146b47568 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec2ee0);
  return;
}



// FUNCTION 1403fae60 FUN_1403fae60 body=115 status=ok
// SIG undefined FUN_1403fae60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fae60(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47610 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"LightProjectile.BatchSize",10,
                  L"Maximum number of projectiles to batch together for ticking.\n",0);
  _DAT_146b47608 = &PTR_FUN_143f3ecf8;
  DAT_146b47618 = (**(code **)(*DAT_146b47610 + 0x38))(DAT_146b47610);
  atexit(FUN_143ec2f30);
  return;
}



// FUNCTION 1403faee0 `dynamic_initializer_for_'ParticleSystemPoolKillUnusedTime'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'ParticleSystemPoolKillUnusedTime''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__ParticleSystemPoolKillUnusedTime__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47678 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"LightProjectile.KillUnusedParticlesTime",&DAT_14678c5b4,
                  L"How long a pooled particle component needs to be unused for before it is destroyed."
                  ,0);
  _DAT_146b47670 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec2f80);
  return;
}



// FUNCTION 1403faf50 FUN_1403faf50 body=100 status=ok
// SIG undefined FUN_1403faf50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403faf50(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47668 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"LightProjectile.RecycleUnusedParticlesTime",&DAT_14678c5b0,
                  L"How long a pooled particle component needs to be unused for before it can be recycled for use for a different templete."
                  ,0);
  _DAT_146b47660 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec2fd0);
  return;
}



// FUNCTION 1403fafc0 `dynamic_initializer_for_'ParticleSystemPoolingCleanTime'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'ParticleSystemPoolingCleanTime''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__ParticleSystemPoolingCleanTime__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47688 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"LightProjectile.ParticleCleanTime",&DAT_14678c5b8,
                  L"How often should the pool be cleaned (in seconds).",0);
  _DAT_146b47680 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec3020);
  return;
}



// FUNCTION 1403fb030 FUN_1403fb030 body=100 status=ok
// SIG undefined FUN_1403fb030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fb030(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47648 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"LightProjectile.StartThrottlingNPCTracerCount",&DAT_14678c5a8,
                  L"Number of NPC tracers that are allowed to spawn within the throttle frame period before throtting is started."
                  ,0x40);
  _DAT_146b47640 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec3070);
  return;
}



// FUNCTION 1403fb0a0 FUN_1403fb0a0 body=100 status=ok
// SIG undefined FUN_1403fb0a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fb0a0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47658 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"LightProjectile.StartThrottlingPlayerTracerCount",&DAT_14678c5ac,
                  L"Number of player tracers that are allowed to spawn within the throttle frame period before throtting is started."
                  ,0x40);
  _DAT_146b47650 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec30c0);
  return;
}



// FUNCTION 1403fb110 FUN_1403fb110 body=100 status=ok
// SIG undefined FUN_1403fb110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fb110(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47638 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"LightProjectile.ThrottleTracerFramePeriod",&DAT_14678c5a4,
                  L"Controls tracer spawning based on how many frame since the last spawn.",0x40);
  _DAT_146b47630 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec3110);
  return;
}



// FUNCTION 1403fb180 FUN_1403fb180 body=100 status=ok
// SIG undefined FUN_1403fb180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fb180(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47628 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"LightProjectile.TracerThrottleLevel",&DAT_14678c5a0,
                  L"Controls tracer effect throttling.\n3:all, 2: remote players and npc, 1: npc 0: none\n"
                  ,0x40);
  _DAT_146b47620 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec3160);
  return;
}



// FUNCTION 1403fb1f0 FUN_1403fb1f0 body=115 status=ok
// SIG undefined FUN_1403fb1f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fb1f0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b474e8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"LightBeam.ParallelTick",1,
                  L"If 1, light beam movement and collision will be run across the task graph system."
                  ,0);
  _DAT_146b474e0 = &PTR_FUN_143f3ecf8;
  DAT_146b474f0 = (**(code **)(*DAT_146b474e8 + 0x38))(DAT_146b474e8);
  atexit(FUN_143ec31b0);
  return;
}



// FUNCTION 1403fb270 FUN_1403fb270 body=115 status=ok
// SIG undefined FUN_1403fb270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fb270(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47590 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"LightProjectile.ParallelTick",1,
                  L"If 1, light projectile movement and collision will be run across the task graph system."
                  ,0);
  _DAT_146b47588 = &PTR_FUN_143f3ecf8;
  DAT_146b47598 = (**(code **)(*DAT_146b47590 + 0x38))(DAT_146b47590);
  atexit(FUN_143ec3200);
  return;
}



// FUNCTION 1403fb2f0 FUN_1403fb2f0 body=112 status=ok
// SIG undefined FUN_1403fb2f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fb2f0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47500 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"CriticalPathStall.LightBeam",0,
                  L"Sleep for the given time in each light beam tick task. Time is given in ms. This is a debug option used for critical path analysis and forcing a change in the critical path."
                  ,0);
  _DAT_146b474f8 = &PTR_FUN_143f3ecf8;
  _DAT_146b47508 = (**(code **)(*DAT_146b47500 + 0x40))(DAT_146b47500);
  atexit(FUN_143ec3250);
  return;
}



// FUNCTION 1403fb360 FUN_1403fb360 body=112 status=ok
// SIG undefined FUN_1403fb360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fb360(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b476c8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"CriticalPathStall.LightProjectileBatch",0,
                  L"Sleep for the given time in each light projectile batch tick task. Time is given in ms. This is a debug option used for critical path analysis and forcing a change in the critical path."
                  ,0);
  _DAT_146b476c0 = &PTR_FUN_143f3ecf8;
  _DAT_146b476d0 = (**(code **)(*DAT_146b476c8 + 0x40))(DAT_146b476c8);
  atexit(FUN_143ec32a0);
  return;
}



// FUNCTION 1403fb3d0 FUN_1403fb3d0 body=112 status=ok
// SIG undefined FUN_1403fb3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fb3d0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b475a8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"CriticalPathStall.LightProjectile",0,
                  L"Sleep for the given time in each light projectile tick task. Time is given in ms. This is a debug option used for critical path analysis and forcing a change in the critical path."
                  ,0);
  _DAT_146b475a0 = &PTR_FUN_143f3ecf8;
  _DAT_146b475b0 = (**(code **)(*DAT_146b475a8 + 0x40))(DAT_146b475a8);
  atexit(FUN_143ec32f0);
  return;
}



// FUNCTION 1403fb550 FUN_1403fb550 body=256 status=ok
// SIG undefined FUN_1403fb550(void)

void FUN_1403fb550(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146b47334;
    plVar1[2] = (longlong)FStaticallyLinkedModuleRegistrant<FVoiceModule>::InitializeModule;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"GbxWeapon",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 1403fb760 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14678c660,0);
  FGenericPlatformString::Memcpy(DAT_14678c660,&DAT_145a58748,8);
  atexit((_func_5014 *)&LAB_143ec3340);
  return;
}



// FUNCTION 1403fb900 FUN_1403fb900 body=59 status=ok
// SIG undefined FUN_1403fb900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fb900(void)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = _DAT_14678c810;
  uStack_14 = uRam000000014678c814;
  uStack_10 = uRam000000014678c818;
  uStack_c = uRam000000014678c81c;
  FCustomVersionRegistration::FCustomVersionRegistration(&DAT_146b479f8,&local_18,0,DAT_146b479f0);
  atexit((_func_5014 *)&LAB_143ec3360);
  return;
}



// FUNCTION 1403fb940 FUN_1403fb940 body=355 status=ok
// SIG undefined FUN_1403fb940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fb940(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_10 = 3;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&DAT_143f3ed00;
    plVar1[1] = (longlong)&DAT_146b47a68;
    plVar1[2] = (longlong)FUN_141591020;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47a70 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"TaskGraph.TaskPriorities.ParallelWeaponFireProjectileTask",
                  L"Task and thread priority for FParallelWeaponFireProjectileTask",&local_18,0);
  _DAT_146b47a68 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1403fba3f;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1403fba3f:
  DAT_146b47a78 = 0;
  _DAT_146b47a80 = 0x3a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146b47a78,0);
  FGenericPlatformString::Memcpy
            (DAT_146b47a78,L"TaskGraph.TaskPriorities.ParallelWeaponFireProjectileTask",0x74);
  _DAT_146b47a88 = 0x800;
  DAT_146b47a90 = 0x200;
  atexit(FUN_143ec3370);
  return;
}



// FUNCTION 1403fbab0 FUN_1403fbab0 body=115 status=ok
// SIG undefined FUN_1403fbab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fbab0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47a28 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"Weapon.MaxAsyncSpawnProjectileDelay",0x96,
                  L"Maximum delay(ms) before all projectiles are forced to spawn.",0);
  _DAT_146b47a20 = &PTR_FUN_143f3ecf8;
  DAT_146b47a30 = (**(code **)(*DAT_146b47a28 + 0x38))(DAT_146b47a28);
  atexit(FUN_143ec33d0);
  return;
}



// FUNCTION 1403fbb30 FUN_1403fbb30 body=115 status=ok
// SIG undefined FUN_1403fbb30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fbb30(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47a58 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"Weapon.MaxProjectilesPerTask",8,
                  L"Maximum number of projectiles to spawn in a parallel task.",0);
  _DAT_146b47a50 = &PTR_FUN_143f3ecf8;
  DAT_146b47a60 = (**(code **)(*DAT_146b47a58 + 0x38))(DAT_146b47a58);
  atexit(FUN_143ec3420);
  return;
}



// FUNCTION 1403fbbb0 FUN_1403fbbb0 body=115 status=ok
// SIG undefined FUN_1403fbbb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fbbb0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47a40 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"Weapon.MinParallelProjectilesPerShot",4,
                  L"Minimum number of projectiles per shot to qualify spawning a separate worker task."
                  ,0);
  _DAT_146b47a38 = &PTR_FUN_143f3ecf8;
  DAT_146b47a48 = (**(code **)(*DAT_146b47a40 + 0x38))(DAT_146b47a40);
  atexit(FUN_143ec3470);
  return;
}



// FUNCTION 1403fbc30 FUN_1403fbc30 body=112 status=ok
// SIG undefined FUN_1403fbc30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fbc30(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47aa0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"CriticalPathStall.WeaponFireProjectile",0,
                  L"Sleep for the given time in each fire projectile task. Time is given in ms. This is a debug option used for critical path analysis and forcing a change in the critical path."
                  ,0);
  _DAT_146b47a98 = &PTR_FUN_143f3ecf8;
  _DAT_146b47aa8 = (**(code **)(*DAT_146b47aa0 + 0x40))(DAT_146b47aa0);
  atexit(FUN_143ec34c0);
  return;
}



// FUNCTION 1403fbca0 FUN_1403fbca0 body=115 status=ok
// SIG undefined FUN_1403fbca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403fbca0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b47a10 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"Weapon.ParallelFireProjectile",1,
                  L"If 1, the expensive parts of weapon firing are done in a parallel task.",0);
  _DAT_146b47a08 = &PTR_FUN_143f3ecf8;
  DAT_146b47a18 = (**(code **)(*DAT_146b47a10 + 0x38))(DAT_146b47a10);
  atexit(FUN_143ec3510);
  return;
}



// FUNCTION 1403fbf40 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14678c7d0,0);
  FGenericPlatformString::Memcpy(DAT_14678c7d0,&DAT_145a61870,8);
  atexit((_func_5014 *)&LAB_143ec3560);
  return;
}



// FUNCTION 1403fbfa0 FUN_1403fbfa0 body=237 status=ok
// SIG undefined FUN_1403fbfa0(void)

void FUN_1403fbfa0(void)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  if ((DAT_146aeb1c0 != 0) && (DAT_146aeb1c0 != 1)) {
    FUN_14309f510(&DAT_146b48010);
    atexit((_func_5014 *)&LAB_143ec3580);
    return;
  }
  plVar2 = (longlong *)FUN_14218de70();
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_145a69d40;
    plVar3[1] = (longlong)&DAT_146b48010;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_145a69d88;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 2;
  }
  atexit((_func_5014 *)&LAB_143ec3580);
  return;
}



// FUNCTION 1403fc1c0 FUN_1403fc1c0 body=245 status=ok
// SIG undefined FUN_1403fc1c0(void)

void FUN_1403fc1c0(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  if ((DAT_146aeb1c0 != 0) && (DAT_146aeb1c0 != 1)) {
    uVar2 = FUN_14309b120();
    FUN_1430990d0(&DAT_146b47f40,uVar2);
    atexit((_func_5014 *)&LAB_143ec3590);
    return;
  }
  plVar3 = (longlong *)FUN_14218de70();
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_145a69dd0;
    plVar4[1] = (longlong)&DAT_146b47f40;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[3] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_145a69e18;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar1);
    }
    puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar3);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 2;
  }
  atexit((_func_5014 *)&LAB_143ec3590);
  return;
}



// FUNCTION 1403fc3a0 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14678c830,0);
  FGenericPlatformString::Memcpy(DAT_14678c830,&DAT_145a68518,8);
  atexit((_func_5014 *)&LAB_143ec35a0);
  return;
}



// FUNCTION 1403fc880 FUN_1403fc880 body=92 status=ok
// SIG undefined FUN_1403fc880(void)

void FUN_1403fc880(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 200;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a730d0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ClientLightBeamState",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fc8e0 FUN_1403fc8e0 body=92 status=ok
// SIG undefined FUN_1403fc8e0(void)

void FUN_1403fc8e0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_1440ce368;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"FiringPatternSample",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fc940 FUN_1403fc940 body=92 status=ok
// SIG undefined FUN_1403fc940(void)

void FUN_1403fc940(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_145a72ad0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxTrajectometerTraceData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fc9a0 FUN_1403fc9a0 body=92 status=ok
// SIG undefined FUN_1403fc9a0(void)

void FUN_1403fc9a0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a73300;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightBeamAttachment",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fca00 FUN_1403fca00 body=92 status=ok
// SIG undefined FUN_1403fca00(void)

void FUN_1403fca00(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a72fb8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightBeamImpactFXTrackingData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fca60 FUN_1403fca60 body=92 status=ok
// SIG undefined FUN_1403fca60(void)

void FUN_1403fca60(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x128;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a731e8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightBeamInitializationData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fcac0 FUN_1403fcac0 body=92 status=ok
// SIG undefined FUN_1403fcac0(void)

void FUN_1403fcac0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a73418;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightBeamQueryData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fcb20 FUN_1403fcb20 body=92 status=ok
// SIG undefined FUN_1403fcb20(void)

void FUN_1403fcb20(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a72ea0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightBeamTickFunction",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fcb80 FUN_1403fcb80 body=92 status=ok
// SIG undefined FUN_1403fcb80(void)

void FUN_1403fcb80(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a72d18;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponShotModifierData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fcc30 FUN_1403fcc30 body=66 status=ok
// SIG undefined FUN_1403fcc30(void)

void FUN_1403fcc30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxTrajectoryTraceShape",1);
  UObjectCompiledInDeferEnum(FUN_1430a9250,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fcc80 FUN_1403fcc80 body=66 status=ok
// SIG undefined FUN_1403fcc80(void)

void FUN_1403fcc80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ELightBeamQueryActorType",1);
  UObjectCompiledInDeferEnum(FUN_1430a92b0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fccd0 FUN_1403fccd0 body=66 status=ok
// SIG undefined FUN_1403fccd0(void)

void FUN_1403fccd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ClientLightBeamState",1);
  UObjectCompiledInDeferStruct
            (FAnimNode_BlendListBase::StaticStruct,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fcd20 FUN_1403fcd20 body=66 status=ok
// SIG undefined FUN_1403fcd20(void)

void FUN_1403fcd20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"FiringPatternSample",1);
  UObjectCompiledInDeferStruct(FUN_1430a9690,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fcd70 FUN_1403fcd70 body=66 status=ok
// SIG undefined FUN_1403fcd70(void)

void FUN_1403fcd70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxTrajectometerTraceData",1);
  UObjectCompiledInDeferStruct(FUN_1430a9710,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fcdc0 FUN_1403fcdc0 body=66 status=ok
// SIG undefined FUN_1403fcdc0(void)

void FUN_1403fcdc0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightBeamAttachment",1);
  UObjectCompiledInDeferStruct(FUN_1430a9790,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fce10 FUN_1403fce10 body=66 status=ok
// SIG undefined FUN_1403fce10(void)

void FUN_1403fce10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightBeamImpactFXTrackingData",1);
  UObjectCompiledInDeferStruct(FUN_1430a9810,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fce60 FUN_1403fce60 body=66 status=ok
// SIG undefined FUN_1403fce60(void)

void FUN_1403fce60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightBeamInitializationData",1);
  UObjectCompiledInDeferStruct(FUN_1430a9890,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fceb0 FUN_1403fceb0 body=66 status=ok
// SIG undefined FUN_1403fceb0(void)

void FUN_1403fceb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightBeamQueryData",1);
  UObjectCompiledInDeferStruct(FUN_1430a9910,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fcf00 FUN_1403fcf00 body=66 status=ok
// SIG undefined FUN_1403fcf00(void)

void FUN_1403fcf00(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightBeamTickFunction",1);
  UObjectCompiledInDeferStruct(FUN_1430a9990,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fcf50 FUN_1403fcf50 body=66 status=ok
// SIG undefined FUN_1403fcf50(void)

void FUN_1403fcf50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponShotModifierData",1);
  UObjectCompiledInDeferStruct(FUN_1430a9a10,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fcfa0 FUN_1403fcfa0 body=58 status=ok
// SIG undefined FUN_1403fcfa0(void)

void FUN_1403fcfa0(void)

{
  UObjectCompiledInDefer
            (FUN_1430a9a90,FUN_1430a85e0,L"AGbxTrajectometerProjectile",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fcfe0 FUN_1403fcfe0 body=58 status=ok
// SIG undefined FUN_1403fcfe0(void)

void FUN_1403fcfe0(void)

{
  UObjectCompiledInDefer
            (FUN_1430a9ac0,FUN_1430a7dc0,L"UAmmoProviderInterface",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fd020 FUN_1403fd020 body=58 status=ok
// SIG undefined FUN_1403fd020(void)

void FUN_1403fd020(void)

{
  UObjectCompiledInDefer
            (FUN_1430a9af0,FUN_1430a7f60,L"UAnimNotify_AmmoReloaded",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fd060 FUN_1403fd060 body=58 status=ok
// SIG undefined FUN_1403fd060(void)

void FUN_1403fd060(void)

{
  UObjectCompiledInDefer
            (FUN_1430a9b20,FUN_1430a8390,L"UAnimNotify_EquipInterruptible",L"/Script/GbxWeapon",0,0,
             0);
  return;
}



// FUNCTION 1403fd0a0 FUN_1403fd0a0 body=58 status=ok
// SIG undefined FUN_1403fd0a0(void)

void FUN_1403fd0a0(void)

{
  UObjectCompiledInDefer
            (FUN_1430a9b50,FUN_1430a87c0,L"UAnimNotify_WeaponSkeletalControlEvent",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fd0e0 FUN_1403fd0e0 body=58 status=ok
// SIG undefined FUN_1403fd0e0(void)

void FUN_1403fd0e0(void)

{
  UObjectCompiledInDefer
            (FUN_1430a9b80,FUN_1430a78f0,L"UBodyWeaponHoldData",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fd120 FUN_1403fd120 body=58 status=ok
// SIG undefined FUN_1403fd120(void)

void FUN_1403fd120(void)

{
  UObjectCompiledInDefer
            (FUN_1430a9bb0,FUN_1430a76d0,L"UBodyWeaponHoldManagerComponent",L"/Script/GbxWeapon",0,0
             ,0);
  return;
}



// FUNCTION 1403fd160 FUN_1403fd160 body=58 status=ok
// SIG undefined FUN_1403fd160(void)

void FUN_1403fd160(void)

{
  UObjectCompiledInDefer
            (FUN_1430a9be0,FUN_1430a7b00,L"UEnvQueryContext_ProjectileProxy",L"/Script/GbxWeapon",0,
             0,0);
  return;
}



// FUNCTION 1403fd1a0 FUN_1403fd1a0 body=58 status=ok
// SIG undefined FUN_1403fd1a0(void)

void FUN_1403fd1a0(void)

{
  UObjectCompiledInDefer
            (FUN_1430a9c10,FUN_1430a7610,L"UEnvQueryGenerator_FindProjectileTargets",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fd1e0 FUN_1403fd1e0 body=58 status=ok
// SIG undefined FUN_1403fd1e0(void)

void FUN_1403fd1e0(void)

{
  UObjectCompiledInDefer
            (FUN_1430a9c40,FUN_1430a7780,L"UEnvQueryItemType_ProjectileProxy",L"/Script/GbxWeapon",0
             ,0,0);
  return;
}



// FUNCTION 1403fd220 FUN_1403fd220 body=58 status=ok
// SIG undefined FUN_1403fd220(void)

void FUN_1403fd220(void)

{
  UObjectCompiledInDefer(FUN_1430a9c70,FUN_1430a7840,L"UFiringPattern",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fd260 FUN_1403fd260 body=58 status=ok
// SIG undefined FUN_1403fd260(void)

void FUN_1403fd260(void)

{
  UObjectCompiledInDefer
            (FUN_1430a9ca0,FUN_1430a7a60,L"UFiringPatternData",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fd2a0 FUN_1403fd2a0 body=58 status=ok
// SIG undefined FUN_1403fd2a0(void)

void FUN_1403fd2a0(void)

{
  UObjectCompiledInDefer(FUN_1430a9cd0,FUN_1430a7cf0,L"UGbxAmmoTypeData",L"/Script/GbxWeapon",0,0,0)
  ;
  return;
}



// FUNCTION 1403fd2e0 FUN_1403fd2e0 body=58 status=ok
// SIG undefined FUN_1403fd2e0(void)

void FUN_1403fd2e0(void)

{
  UObjectCompiledInDefer
            (FUN_1430a9d00,FUN_1430a7e70,L"UGbxProjectileManager",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fd320 FUN_1403fd320 body=58 status=ok
// SIG undefined FUN_1403fd320(void)

void FUN_1403fd320(void)

{
  UObjectCompiledInDefer
            (FUN_1430a86d0,thunk_FUN_1430a9310,L"UGbxProjectileMovementComponent",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fd360 FUN_1403fd360 body=58 status=ok
// SIG undefined FUN_1403fd360(void)

void FUN_1403fd360(void)

{
  UObjectCompiledInDefer
            (FUN_1430a7bf0,FUN_1430a79b0,L"UGbxTrajectometerComponent",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fd3a0 FUN_1403fd3a0 body=58 status=ok
// SIG undefined FUN_1403fd3a0(void)

void FUN_1403fd3a0(void)

{
  UObjectCompiledInDefer
            (FUN_1430a9d30,FUN_1430a8880,L"UGbxWeaponUserInterface",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fd3e0 FUN_1403fd3e0 body=58 status=ok
// SIG undefined FUN_1403fd3e0(void)

void FUN_1403fd3e0(void)

{
  UObjectCompiledInDefer
            (FUN_1430a8010,UScrollBar::GetPrivateStaticClass,L"ULightBeam",L"/Script/GbxWeapon",0,0,
             0);
  return;
}



// FUNCTION 1403fd5b0 FUN_1403fd5b0 body=92 status=ok
// SIG undefined FUN_1403fd5b0(void)

void FUN_1403fd5b0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a77530;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightBeamParticlePoolData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fd610 FUN_1403fd610 body=92 status=ok
// SIG undefined FUN_1403fd610(void)

void FUN_1403fd610(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a77978;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightProjectileAttachment",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fd670 FUN_1403fd670 body=92 status=ok
// SIG undefined FUN_1403fd670(void)

void FUN_1403fd670(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_143f61bc8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightProjectileExplodeData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fd6d0 FUN_1403fd6d0 body=92 status=ok
// SIG undefined FUN_1403fd6d0(void)

void FUN_1403fd6d0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_143f61bc8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightProjectileImpactData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fd730 `dynamic_initializer_for_'ScriptStruct_LiveLinkInterface_StaticRegisterNativesFCachedSubjectFrame'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_LiveLinkInterface_StaticRegisterNativesFCachedSubjectFrame''(void)

void _dynamic_initializer_for__ScriptStruct_LiveLinkInterface_StaticRegisterNativesFCachedSubjectFrame__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x140;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a77ba8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightProjectileInitializationData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fd790 FUN_1403fd790 body=92 status=ok
// SIG undefined FUN_1403fd790(void)

void FUN_1403fd790(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a77dd8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightProjectileQueryData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fd7f0 FUN_1403fd7f0 body=92 status=ok
// SIG undefined FUN_1403fd7f0(void)

void FUN_1403fd7f0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x34;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_145a77cc0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightProjectileRingData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fd850 FUN_1403fd850 body=92 status=ok
// SIG undefined FUN_1403fd850(void)

void FUN_1403fd850(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a77860;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightProjectileTickFunction",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fd8b0 FUN_1403fd8b0 body=92 status=ok
// SIG undefined FUN_1403fd8b0(void)

void FUN_1403fd8b0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a77648;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"PostLightBeamTickFunction",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fd910 FUN_1403fd910 body=92 status=ok
// SIG undefined FUN_1403fd910(void)

void FUN_1403fd910(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a77a90;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ReplicatedLightProjectileInitializationData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fd9b0 FUN_1403fd9b0 body=66 status=ok
// SIG undefined FUN_1403fd9b0(void)

void FUN_1403fd9b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ELightBeamFlag",1);
  UObjectCompiledInDeferEnum(FUN_1430ab880,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fda00 FUN_1403fda00 body=66 status=ok
// SIG undefined FUN_1403fda00(void)

void FUN_1403fda00(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ELightBeamLock",1);
  UObjectCompiledInDeferEnum(FUN_1430ab8c0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fda50 FUN_1403fda50 body=66 status=ok
// SIG undefined FUN_1403fda50(void)

void FUN_1403fda50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ELightProjectileQueryActorType",1);
  UObjectCompiledInDeferEnum(FUN_1430ab900,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fdaa0 FUN_1403fdaa0 body=66 status=ok
// SIG undefined FUN_1403fdaa0(void)

void FUN_1403fdaa0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightBeamParticlePoolData",1);
  UObjectCompiledInDeferStruct(FUN_1430abe30,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fdaf0 FUN_1403fdaf0 body=66 status=ok
// SIG undefined FUN_1403fdaf0(void)

void FUN_1403fdaf0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightProjectileAttachment",1);
  UObjectCompiledInDeferStruct(FUN_1430abe90,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fdb40 FUN_1403fdb40 body=66 status=ok
// SIG undefined FUN_1403fdb40(void)

void FUN_1403fdb40(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightProjectileExplodeData",1);
  UObjectCompiledInDeferStruct(FUN_1430abef0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fdb90 FUN_1403fdb90 body=66 status=ok
// SIG undefined FUN_1403fdb90(void)

void FUN_1403fdb90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightProjectileImpactData",1);
  UObjectCompiledInDeferStruct(FUN_1430abf50,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fdbe0 FUN_1403fdbe0 body=66 status=ok
// SIG undefined FUN_1403fdbe0(void)

void FUN_1403fdbe0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightProjectileInitializationData",1);
  UObjectCompiledInDeferStruct
            (FInstancedStaticMeshComponentInstanceData::StaticStruct,L"/Script/GbxWeapon",*puVar1,0,
             0);
  return;
}



// FUNCTION 1403fdc30 FUN_1403fdc30 body=66 status=ok
// SIG undefined FUN_1403fdc30(void)

void FUN_1403fdc30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightProjectileQueryData",1);
  UObjectCompiledInDeferStruct(FUN_1430ac010,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fdc80 FUN_1403fdc80 body=66 status=ok
// SIG undefined FUN_1403fdc80(void)

void FUN_1403fdc80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightProjectileRingData",1);
  UObjectCompiledInDeferStruct(FBatchedLine::StaticStruct,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fdcd0 FUN_1403fdcd0 body=66 status=ok
// SIG undefined FUN_1403fdcd0(void)

void FUN_1403fdcd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightProjectileTickFunction",1);
  UObjectCompiledInDeferStruct(FUN_1430ac0d0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fdd20 FUN_1403fdd20 body=66 status=ok
// SIG undefined FUN_1403fdd20(void)

void FUN_1403fdd20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PostLightBeamTickFunction",1);
  UObjectCompiledInDeferStruct(FUN_1430ac130,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fdd70 FUN_1403fdd70 body=66 status=ok
// SIG undefined FUN_1403fdd70(void)

void FUN_1403fdd70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ReplicatedLightProjectileInitializationData",1);
  UObjectCompiledInDeferStruct(FLensBloomSettings::StaticStruct,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fddc0 FUN_1403fddc0 body=58 status=ok
// SIG undefined FUN_1403fddc0(void)

void FUN_1403fddc0(void)

{
  UObjectCompiledInDefer
            (FUN_1430aa950,AFGConveyorBeltHologram::GetPrivateStaticClass,L"ALightBeamManager",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fde00 FUN_1403fde00 body=58 status=ok
// SIG undefined FUN_1403fde00(void)

void FUN_1403fde00(void)

{
  UObjectCompiledInDefer(FUN_1430aace0,&LAB_141435270,L"ULightBeamData",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fde40 FUN_1403fde40 body=58 status=ok
// SIG undefined FUN_1403fde40(void)

void FUN_1403fde40(void)

{
  UObjectCompiledInDefer
            (FUN_1430aaaf0,FUN_1430aaa40,L"ULightBeamStatics",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fde80 FUN_1403fde80 body=58 status=ok
// SIG undefined FUN_1403fde80(void)

void FUN_1403fde80(void)

{
  UObjectCompiledInDefer
            (FUN_1430aad70,&LAB_141435280,L"ULightProjectile",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fe1e0 FUN_1403fe1e0 body=92 status=ok
// SIG undefined FUN_1403fe1e0(void)

void FUN_1403fe1e0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a7bca0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightProjectileAudioProperties",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fe240 FUN_1403fe240 body=92 status=ok
// SIG undefined FUN_1403fe240(void)

void FUN_1403fe240(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a7c190;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightProjectileBatchTickFunction",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fe2a0 FUN_1403fe2a0 body=92 status=ok
// SIG undefined FUN_1403fe2a0(void)

void FUN_1403fe2a0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a77530;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightProjectileParticlePoolData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fe300 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFInputScaleBiasClamp'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFInputScaleBiasClamp''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFInputScaleBiasClamp__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_145a7be40;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightProjectileRingSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fe360 FUN_1403fe360 body=92 status=ok
// SIG undefined FUN_1403fe360(void)

void FUN_1403fe360(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_145a7bf58;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightProjectileRingSubdivisionSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fe3c0 FUN_1403fe3c0 body=92 status=ok
// SIG undefined FUN_1403fe3c0(void)

void FUN_1403fe3c0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144001b28;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightProjectileTimedEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fe420 FUN_1403fe420 body=92 status=ok
// SIG undefined FUN_1403fe420(void)

void FUN_1403fe420(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a7c2a8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"PostLightProjectileTickFunction",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fe4d0 FUN_1403fe4d0 body=66 status=ok
// SIG undefined FUN_1403fe4d0(void)

void FUN_1403fe4d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ELightProjectileFlag",1);
  UObjectCompiledInDeferEnum(FUN_1430aed90,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fe520 FUN_1403fe520 body=66 status=ok
// SIG undefined FUN_1403fe520(void)

void FUN_1403fe520(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ELightProjectileSplitPattern",1);
  UObjectCompiledInDeferEnum(FUN_1430aedd0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fe570 FUN_1403fe570 body=66 status=ok
// SIG undefined FUN_1403fe570(void)

void FUN_1403fe570(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ELightProjectileSubdivisionMode",1);
  UObjectCompiledInDeferEnum(FUN_1430aee10,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fe5c0 FUN_1403fe5c0 body=66 status=ok
// SIG undefined FUN_1403fe5c0(void)

void FUN_1403fe5c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ELightProjectileTracerThrottleLevel",1);
  UObjectCompiledInDeferEnum(FUN_1430aee50,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fe610 FUN_1403fe610 body=66 status=ok
// SIG undefined FUN_1403fe610(void)

void FUN_1403fe610(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightProjectileAudioProperties",1);
  UObjectCompiledInDeferStruct(FUN_1430af8c0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fe660 FUN_1403fe660 body=66 status=ok
// SIG undefined FUN_1403fe660(void)

void FUN_1403fe660(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightProjectileBatchTickFunction",1);
  UObjectCompiledInDeferStruct(FUN_1430af920,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fe6b0 FUN_1403fe6b0 body=66 status=ok
// SIG undefined FUN_1403fe6b0(void)

void FUN_1403fe6b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightProjectileParticlePoolData",1);
  UObjectCompiledInDeferStruct(FUN_1430af980,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fe700 FUN_1403fe700 body=66 status=ok
// SIG undefined FUN_1403fe700(void)

void FUN_1403fe700(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightProjectileRingSettings",1);
  UObjectCompiledInDeferStruct(FUN_1430af9e0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fe750 FUN_1403fe750 body=66 status=ok
// SIG undefined FUN_1403fe750(void)

void FUN_1403fe750(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightProjectileRingSubdivisionSettings",1);
  UObjectCompiledInDeferStruct(FUN_1430afa40,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fe7a0 FUN_1403fe7a0 body=66 status=ok
// SIG undefined FUN_1403fe7a0(void)

void FUN_1403fe7a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightProjectileTimedEvent",1);
  UObjectCompiledInDeferStruct(FUN_1430afaa0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fe7f0 FUN_1403fe7f0 body=66 status=ok
// SIG undefined FUN_1403fe7f0(void)

void FUN_1403fe7f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PostLightProjectileTickFunction",1);
  UObjectCompiledInDeferStruct(FUN_1430afb00,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403fe840 FUN_1403fe840 body=58 status=ok
// SIG undefined FUN_1403fe840(void)

void FUN_1403fe840(void)

{
  UObjectCompiledInDefer
            (FUN_1430ae6f0,thunk_FUN_1430aee90,L"ALightProjectileManager",L"/Script/GbxWeapon",0,0,0
            );
  return;
}



// FUNCTION 1403fe880 FUN_1403fe880 body=58 status=ok
// SIG undefined FUN_1403fe880(void)

void FUN_1403fe880(void)

{
  UObjectCompiledInDefer
            (FUN_1430afb60,FUN_1430ae350,L"ULightProjectileAimViewPointHomingModifier",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fe8c0 FUN_1403fe8c0 body=58 status=ok
// SIG undefined FUN_1403fe8c0(void)

void FUN_1403fe8c0(void)

{
  UObjectCompiledInDefer
            (FUN_1430afb90,FUN_1430ae560,L"ULightProjectileCurveModifier",L"/Script/GbxWeapon",0,0,0
            );
  return;
}



// FUNCTION 1403fe900 FUN_1403fe900 body=58 status=ok
// SIG undefined FUN_1403fe900(void)

void FUN_1403fe900(void)

{
  UObjectCompiledInDefer
            (FUN_1430ae130,thunk_FUN_1430aef40,L"ULightProjectileData",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fe940 FUN_1403fe940 body=58 status=ok
// SIG undefined FUN_1403fe940(void)

void FUN_1403fe940(void)

{
  UObjectCompiledInDefer
            (FUN_1430afbc0,FUN_1430ae630,L"ULightProjectileHomingModifier",L"/Script/GbxWeapon",0,0,
             0);
  return;
}



// FUNCTION 1403fe980 FUN_1403fe980 body=58 status=ok
// SIG undefined FUN_1403fe980(void)

void FUN_1403fe980(void)

{
  UObjectCompiledInDefer
            (FUN_1430ae440,FUN_1430ae480,L"ULightProjectileMoveModifier",L"/Script/GbxWeapon",0,0,0)
  ;
  return;
}



// FUNCTION 1403fe9c0 FUN_1403fe9c0 body=58 status=ok
// SIG undefined FUN_1403fe9c0(void)

void FUN_1403fe9c0(void)

{
  UObjectCompiledInDefer
            (FUN_1430afbf0,FUN_1430ae820,L"ULightProjectileRandomDrunkenModifier",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fea00 FUN_1403fea00 body=58 status=ok
// SIG undefined FUN_1403fea00(void)

void FUN_1403fea00(void)

{
  UObjectCompiledInDefer
            (FUN_1430ae990,UBlueprintSetLibrary::GetPrivateStaticClass,L"ULightProjectileStatics",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403fea40 FUN_1403fea40 body=58 status=ok
// SIG undefined FUN_1403fea40(void)

void FUN_1403fea40(void)

{
  UObjectCompiledInDefer
            (FUN_1430afc20,FUN_1430ae070,L"ULightProjectileWaveModifier",L"/Script/GbxWeapon",0,0,0)
  ;
  return;
}



// FUNCTION 1403fefb0 FUN_1403fefb0 body=92 status=ok
// SIG undefined FUN_1403fefb0(void)

void FUN_1403fefb0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a83968;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"PredictProjectilePathAsyncRequest",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ff010 `dynamic_initializer_for_'ScriptStruct_FSHProject_StaticRegisterNativesFItemData'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_FSHProject_StaticRegisterNativesFItemData''(void)

void _dynamic_initializer_for__ScriptStruct_FSHProject_StaticRegisterNativesFItemData__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x188;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a83850;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ThrowProjectileAsyncRequest",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ff070 FUN_1403ff070 body=92 status=ok
// SIG undefined FUN_1403ff070(void)

void FUN_1403ff070(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a84188;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponAttachState",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ff0d0 FUN_1403ff0d0 body=92 status=ok
// SIG undefined FUN_1403ff0d0(void)

void FUN_1403ff0d0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a842a0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponUseModeState",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ff170 FUN_1403ff170 body=66 status=ok
// SIG undefined FUN_1403ff170(void)

void FUN_1403ff170(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EHitTypeEnum",1);
  UObjectCompiledInDeferEnum(FUN_1430b3930,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403ff1c0 FUN_1403ff1c0 body=66 status=ok
// SIG undefined FUN_1403ff1c0(void)

void FUN_1403ff1c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ERecoilEndOfPatternAction",1);
  UObjectCompiledInDeferEnum(FUN_1430b3970,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403ff210 FUN_1403ff210 body=66 status=ok
// SIG undefined FUN_1403ff210(void)

void FUN_1403ff210(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponReloadEvent",1);
  UObjectCompiledInDeferEnum(FUN_1430b39b0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403ff260 FUN_1403ff260 body=66 status=ok
// SIG undefined FUN_1403ff260(void)

void FUN_1403ff260(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponUseEvent",1);
  UObjectCompiledInDeferEnum(FUN_1430b39f0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403ff2b0 FUN_1403ff2b0 body=66 status=ok
// SIG undefined FUN_1403ff2b0(void)

void FUN_1403ff2b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PredictProjectilePathAsyncRequest",1);
  UObjectCompiledInDeferStruct(FUN_1430b4ab0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403ff300 FUN_1403ff300 body=66 status=ok
// SIG undefined FUN_1403ff300(void)

void FUN_1403ff300(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ThrowProjectileAsyncRequest",1);
  UObjectCompiledInDeferStruct
            (FAnimNode_RotationOffsetBlendSpace::StaticStruct,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403ff350 FUN_1403ff350 body=66 status=ok
// SIG undefined FUN_1403ff350(void)

void FUN_1403ff350(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponAttachState",1);
  UObjectCompiledInDeferStruct(FUN_1430b4b70,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403ff3a0 FUN_1403ff3a0 body=66 status=ok
// SIG undefined FUN_1403ff3a0(void)

void FUN_1403ff3a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponUseModeState",1);
  UObjectCompiledInDeferStruct(FUN_1430b4bd0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1403ff3f0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_AProjectile'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_AProjectile''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_AProjectile__(void)

{
  UObjectCompiledInDefer(FUN_1430b1400,&LAB_1414744d0,L"AProjectile",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403ff430 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_AWeapon'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_AWeapon''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_AWeapon__(void)

{
  UObjectCompiledInDefer(FUN_1430b1c70,&LAB_14149b3f0,L"AWeapon",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403ff470 FUN_1403ff470 body=58 status=ok
// SIG undefined FUN_1403ff470(void)

void FUN_1403ff470(void)

{
  UObjectCompiledInDefer
            (FUN_1430b1080,USlateBlueprintLibrary::GetPrivateStaticClass,
             L"UProjectileBlueprintLibrary",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403ff4b0 FUN_1403ff4b0 body=58 status=ok
// SIG undefined FUN_1403ff4b0(void)

void FUN_1403ff4b0(void)

{
  UObjectCompiledInDefer
            (FUN_1430b4c30,FUN_1430b1980,L"UProjectileEQSProxy",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403ff4f0 FUN_1403ff4f0 body=58 status=ok
// SIG undefined FUN_1403ff4f0(void)

void FUN_1403ff4f0(void)

{
  UObjectCompiledInDefer
            (FUN_1430b4c60,FUN_1430b1a30,L"UProjectileSourceInterface",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403ff530 FUN_1403ff530 body=58 status=ok
// SIG undefined FUN_1403ff530(void)

void FUN_1403ff530(void)

{
  UObjectCompiledInDefer
            (FUN_1430b1ba0,UAnimMontage::GetPrivateStaticClass,L"URecoilControlComponent",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403ff570 FUN_1403ff570 body=58 status=ok
// SIG undefined FUN_1403ff570(void)

void FUN_1403ff570(void)

{
  UObjectCompiledInDefer
            (FUN_1430b4c90,UTextureRenderTargetCube::GetPrivateStaticClass,L"URecoilPatternData",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403ff5b0 FUN_1403ff5b0 body=58 status=ok
// SIG undefined FUN_1403ff5b0(void)

void FUN_1403ff5b0(void)

{
  UObjectCompiledInDefer
            (FUN_1430b1c30,&LAB_1414d6890,L"UWalkingProjectileMovementComponent",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1403ff980 FUN_1403ff980 body=92 status=ok
// SIG undefined FUN_1403ff980(void)

void FUN_1403ff980(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a8a220;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BodyWeaponActionInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ff9e0 FUN_1403ff9e0 body=92 status=ok
// SIG undefined FUN_1403ff9e0(void)

void FUN_1403ff9e0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a8a450;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ConditionalActionInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ffa40 FUN_1403ffa40 body=92 status=ok
// SIG undefined FUN_1403ffa40(void)

void FUN_1403ffa40(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a8a338;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ConditionalWeaponActionSet",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ffaa0 FUN_1403ffaa0 body=92 status=ok
// SIG undefined FUN_1403ffaa0(void)

void FUN_1403ffaa0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a8b110;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponChargeAttributeEffect",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ffb00 FUN_1403ffb00 body=92 status=ok
// SIG undefined FUN_1403ffb00(void)

void FUN_1403ffb00(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144001b28;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponChargeEventNotify",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ffb60 FUN_1403ffb60 body=92 status=ok
// SIG undefined FUN_1403ffb60(void)

void FUN_1403ffb60(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a8ac48;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponEffectAttachment",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ffbc0 FUN_1403ffbc0 body=92 status=ok
// SIG undefined FUN_1403ffbc0(void)

void FUN_1403ffbc0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_145a8b890;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponEffectQueryData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ffc20 FUN_1403ffc20 body=92 status=ok
// SIG undefined FUN_1403ffc20(void)

void FUN_1403ffc20(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a8b9a8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponMaterialEffectData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ffc80 FUN_1403ffc80 body=92 status=ok
// SIG undefined FUN_1403ffc80(void)

void FUN_1403ffc80(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a8ab30;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponMaterialEffectInstance",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ffce0 FUN_1403ffce0 body=92 status=ok
// SIG undefined FUN_1403ffce0(void)

void FUN_1403ffce0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a8bbd8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponRegisterAttachmentEffectData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ffd40 FUN_1403ffd40 body=92 status=ok
// SIG undefined FUN_1403ffd40(void)

void FUN_1403ffd40(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a8bac0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponRegisterMaterialEffectData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ffda0 FUN_1403ffda0 body=92 status=ok
// SIG undefined FUN_1403ffda0(void)

void FUN_1403ffda0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a8b660;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponRegisterSkeletalControlData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ffe00 FUN_1403ffe00 body=92 status=ok
// SIG undefined FUN_1403ffe00(void)

void FUN_1403ffe00(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a8b778;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponRegisterTrinketAttachmentData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ffe60 FUN_1403ffe60 body=92 status=ok
// SIG undefined FUN_1403ffe60(void)

void FUN_1403ffe60(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a8aa18;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponSkeletalControlInstance",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ffec0 FUN_1403ffec0 body=92 status=ok
// SIG undefined FUN_1403ffec0(void)

void FUN_1403ffec0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a8a900;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponTrinketAttachment",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403fff60 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1467a4158,0);
  FGenericPlatformString::Memcpy(DAT_1467a4158,&DAT_145a88100,8);
  atexit((_func_5014 *)&LAB_143ec35c0);
  return;
}



// FUNCTION 1403fffc0 FUN_1403fffc0 body=66 status=ok
// SIG undefined FUN_1403fffc0(void)

void FUN_1403fffc0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EAmmoRegenType",1);
  UObjectCompiledInDeferEnum(FUN_1430bc5c0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140400010 FUN_140400010 body=66 status=ok
// SIG undefined FUN_140400010(void)

void FUN_140400010(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponActionType",1);
  UObjectCompiledInDeferEnum(FUN_1430bc600,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140400060 FUN_140400060 body=66 status=ok
// SIG undefined FUN_140400060(void)

void FUN_140400060(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponAttachmentVisibilityType",1);
  UObjectCompiledInDeferEnum(FUN_1430bc640,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1404000b0 FUN_1404000b0 body=66 status=ok
// SIG undefined FUN_1404000b0(void)

void FUN_1404000b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponChargeComparisonOperatorType",1);
  UObjectCompiledInDeferEnum(FUN_1430bc680,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140400100 FUN_140400100 body=66 status=ok
// SIG undefined FUN_140400100(void)

void FUN_140400100(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponChargeEventType",1);
  UObjectCompiledInDeferEnum(FUN_1430bc6c0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140400150 FUN_140400150 body=66 status=ok
// SIG undefined FUN_140400150(void)

void FUN_140400150(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponChargeState",1);
  UObjectCompiledInDeferEnum(FUN_1430bc700,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1404001a0 FUN_1404001a0 body=66 status=ok
// SIG undefined FUN_1404001a0(void)

void FUN_1404001a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponEffectFlag",1);
  UObjectCompiledInDeferEnum(FUN_1430bc740,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1404001f0 FUN_1404001f0 body=66 status=ok
// SIG undefined FUN_1404001f0(void)

void FUN_1404001f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponEffectType",1);
  UObjectCompiledInDeferEnum(FUN_1430bc780,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140400240 FUN_140400240 body=66 status=ok
// SIG undefined FUN_140400240(void)

void FUN_140400240(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponMaterialEffectBlendMode",1);
  UObjectCompiledInDeferEnum(FUN_1430bc7c0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140400290 FUN_140400290 body=66 status=ok
// SIG undefined FUN_140400290(void)

void FUN_140400290(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponSkeletalControlEvent",1);
  UObjectCompiledInDeferEnum(FUN_1430bc800,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1404002e0 FUN_1404002e0 body=66 status=ok
// SIG undefined FUN_1404002e0(void)

void FUN_1404002e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponTextureMipsSetting",1);
  UObjectCompiledInDeferEnum(FUN_1430bc840,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140400330 FUN_140400330 body=66 status=ok
// SIG undefined FUN_140400330(void)

void FUN_140400330(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"BodyWeaponActionInfo",1);
  UObjectCompiledInDeferStruct(FUN_1430bcef0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140400380 FUN_140400380 body=66 status=ok
// SIG undefined FUN_140400380(void)

void FUN_140400380(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ConditionalActionInfo",1);
  UObjectCompiledInDeferStruct(FUN_1430bcf50,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1404003d0 FUN_1404003d0 body=66 status=ok
// SIG undefined FUN_1404003d0(void)

void FUN_1404003d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ConditionalWeaponActionSet",1);
  UObjectCompiledInDeferStruct(FUN_1430bcfb0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140400420 FUN_140400420 body=66 status=ok
// SIG undefined FUN_140400420(void)

void FUN_140400420(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponChargeAttributeEffect",1);
  UObjectCompiledInDeferStruct(FUN_1430bd010,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140400470 FUN_140400470 body=66 status=ok
// SIG undefined FUN_140400470(void)

void FUN_140400470(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponChargeEventNotify",1);
  UObjectCompiledInDeferStruct(FUN_1430bd070,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1404004c0 FUN_1404004c0 body=66 status=ok
// SIG undefined FUN_1404004c0(void)

void FUN_1404004c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponEffectAttachment",1);
  UObjectCompiledInDeferStruct(FUN_1430bd0d0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140400510 FUN_140400510 body=66 status=ok
// SIG undefined FUN_140400510(void)

void FUN_140400510(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponEffectQueryData",1);
  UObjectCompiledInDeferStruct(FUN_1430bd130,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140400560 FUN_140400560 body=66 status=ok
// SIG undefined FUN_140400560(void)

void FUN_140400560(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponMaterialEffectData",1);
  UObjectCompiledInDeferStruct(FUN_1430bd190,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1404005b0 FUN_1404005b0 body=66 status=ok
// SIG undefined FUN_1404005b0(void)

void FUN_1404005b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponMaterialEffectInstance",1);
  UObjectCompiledInDeferStruct(FUN_1430bd1f0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140400600 FUN_140400600 body=66 status=ok
// SIG undefined FUN_140400600(void)

void FUN_140400600(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponRegisterAttachmentEffectData",1);
  UObjectCompiledInDeferStruct(FUN_1430bd250,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140400650 FUN_140400650 body=66 status=ok
// SIG undefined FUN_140400650(void)

void FUN_140400650(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponRegisterMaterialEffectData",1);
  UObjectCompiledInDeferStruct(FPoseDriverTarget::StaticStruct,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1404006a0 FUN_1404006a0 body=66 status=ok
// SIG undefined FUN_1404006a0(void)

void FUN_1404006a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponRegisterSkeletalControlData",1);
  UObjectCompiledInDeferStruct(FUN_1430bd310,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1404006f0 FUN_1404006f0 body=66 status=ok
// SIG undefined FUN_1404006f0(void)

void FUN_1404006f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponRegisterTrinketAttachmentData",1);
  UObjectCompiledInDeferStruct(FUN_1430bd370,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140400740 FUN_140400740 body=66 status=ok
// SIG undefined FUN_140400740(void)

void FUN_140400740(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponSkeletalControlInstance",1);
  UObjectCompiledInDeferStruct(FUN_1430bd3d0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140400790 FUN_140400790 body=66 status=ok
// SIG undefined FUN_140400790(void)

void FUN_140400790(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponTrinketAttachment",1);
  UObjectCompiledInDeferStruct(FUN_1430bd430,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1404007e0 FUN_1404007e0 body=58 status=ok
// SIG undefined FUN_1404007e0(void)

void FUN_1404007e0(void)

{
  UObjectCompiledInDefer
            (FUN_1430bd4d0,FUN_1430baa70,L"UGbxCondition_ZoomState",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140400820 FUN_140400820 body=58 status=ok
// SIG undefined FUN_140400820(void)

void FUN_140400820(void)

{
  UObjectCompiledInDefer
            (FUN_1430bd500,FUN_1430bb100,L"UWeaponAccuracyPoolAttributePropertyValueResolver",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140400860 FUN_140400860 body=58 status=ok
// SIG undefined FUN_140400860(void)

void FUN_140400860(void)

{
  UObjectCompiledInDefer
            (FUN_1430bd530,FUN_1430bb3d0,L"UWeaponAmmoChamberBoneControl",L"/Script/GbxWeapon",0,0,0
            );
  return;
}



// FUNCTION 1404008a0 FUN_1404008a0 body=58 status=ok
// SIG undefined FUN_1404008a0(void)

void FUN_1404008a0(void)

{
  UObjectCompiledInDefer
            (FUN_1430ba540,thunk_FUN_1430bc880,L"UWeaponAmmoComponent",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1404008e0 FUN_1404008e0 body=58 status=ok
// SIG undefined FUN_1404008e0(void)

void FUN_1404008e0(void)

{
  UObjectCompiledInDefer
            (FUN_1430ba7a0,UActionBuff::GetPrivateStaticClass,L"UWeaponAmmoPoolComponent",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140400920 FUN_140400920 body=58 status=ok
// SIG undefined FUN_140400920(void)

void FUN_140400920(void)

{
  UObjectCompiledInDefer
            (FUN_1430bd560,FUN_1430ba930,L"UWeaponAmmoRegenAttributeValueResolver",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140400960 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UWeaponAnimInstance'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UWeaponAnimInstance''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UWeaponAnimInstance__(void)

{
  UObjectCompiledInDefer
            (FUN_1430ba9f0,thunk_FUN_1430bc930,L"UWeaponAnimInstance",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1404009a0 FUN_1404009a0 body=58 status=ok
// SIG undefined FUN_1404009a0(void)

void FUN_1404009a0(void)

{
  UObjectCompiledInDefer
            (FUN_1430bd590,thunk_FUN_1430bc9e0,L"UWeaponAnimNotify",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1404009e0 FUN_1404009e0 body=58 status=ok
// SIG undefined FUN_1404009e0(void)

void FUN_1404009e0(void)

{
  UObjectCompiledInDefer
            (FUN_1430bab20,UARTrackedObject::GetPrivateStaticClass,L"UWeaponAttachmentSlot",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140400a20 FUN_140400a20 body=58 status=ok
// SIG undefined FUN_140400a20(void)

void FUN_140400a20(void)

{
  UObjectCompiledInDefer
            (FUN_1430bd5c0,FUN_1430bae90,L"UWeaponAttributeContextResolver",L"/Script/GbxWeapon",0,0
             ,0);
  return;
}



// FUNCTION 140400a60 FUN_140400a60 body=58 status=ok
// SIG undefined FUN_140400a60(void)

void FUN_140400a60(void)

{
  UObjectCompiledInDefer
            (FUN_1430bd5f0,thunk_FUN_1430bca90,L"UWeaponAudioProviderComponent",L"/Script/GbxWeapon"
             ,0,0,0);
  return;
}



// FUNCTION 140400aa0 FUN_140400aa0 body=58 status=ok
// SIG undefined FUN_140400aa0(void)

void FUN_140400aa0(void)

{
  UObjectCompiledInDefer
            (FUN_1430bb1c0,UUGStartScreenUW::GetPrivateStaticClass,L"UWeaponChargeComponent",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140400ae0 FUN_140400ae0 body=58 status=ok
// SIG undefined FUN_140400ae0(void)

void FUN_140400ae0(void)

{
  UObjectCompiledInDefer
            (FUN_1430bd620,FUN_1430bafa0,L"UWeaponChargePercentValueResolver",L"/Script/GbxWeapon",0
             ,0,0);
  return;
}



// FUNCTION 140400b20 FUN_140400b20 body=58 status=ok
// SIG undefined FUN_140400b20(void)

void FUN_140400b20(void)

{
  UObjectCompiledInDefer
            (FUN_1430ba670,FUN_1430ba5c0,L"UWeaponClipReloadComponent",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140400b60 FUN_140400b60 body=58 status=ok
// SIG undefined FUN_140400b60(void)

void FUN_140400b60(void)

{
  UObjectCompiledInDefer
            (FUN_1430bd650,FUN_1430bb610,L"UWeaponConsumedLoadedAmmoValueResolver",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140400ba0 FUN_140400ba0 body=58 status=ok
// SIG undefined FUN_140400ba0(void)

void FUN_140400ba0(void)

{
  UObjectCompiledInDefer
            (FUN_1430bd680,FUN_1430bb490,L"UWeaponDebugInterface",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140401010 FUN_140401010 body=92 status=ok
// SIG undefined FUN_140401010(void)

void FUN_140401010(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a90a88;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightBeamFlagName",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140401070 FUN_140401070 body=92 status=ok
// SIG undefined FUN_140401070(void)

void FUN_140401070(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a90ba0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightProjectileFlagName",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1404010d0 FUN_1404010d0 body=92 status=ok
// SIG undefined FUN_1404010d0(void)

void FUN_1404010d0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a90cb8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponActionTypeName",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140401130 FUN_140401130 body=92 status=ok
// SIG undefined FUN_140401130(void)

void FUN_140401130(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a90dd0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponEffectTypeName",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140401190 FUN_140401190 body=92 status=ok
// SIG undefined FUN_140401190(void)

void FUN_140401190(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144001b28;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponHeatEventNotify",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1404011f0 FUN_1404011f0 body=92 status=ok
// SIG undefined FUN_1404011f0(void)

void FUN_1404011f0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a90970;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponShotModifierTypeName",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140401290 FUN_140401290 body=66 status=ok
// SIG undefined FUN_140401290(void)

void FUN_140401290(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponEquipType",1);
  UObjectCompiledInDeferEnum(FUN_1430bf170,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1404012e0 FUN_1404012e0 body=66 status=ok
// SIG undefined FUN_1404012e0(void)

void FUN_1404012e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponFireRateState",1);
  UObjectCompiledInDeferEnum(FUN_1430bf1b0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140401330 FUN_140401330 body=66 status=ok
// SIG undefined FUN_140401330(void)

void FUN_140401330(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponHeatComparisonOperatorType",1);
  UObjectCompiledInDeferEnum(FUN_1430bf1f0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140401380 FUN_140401380 body=66 status=ok
// SIG undefined FUN_140401380(void)

void FUN_140401380(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponPutDownType",1);
  UObjectCompiledInDeferEnum(FUN_1430bf230,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}


