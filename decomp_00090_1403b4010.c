// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1403b4010 FUN_1403b4010 body=62 status=ok
// SIG undefined FUN_1403b4010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b4010(void)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = _DAT_1466ad3d0;
  uStack_14 = uRam00000001466ad3d4;
  uStack_10 = uRam00000001466ad3d8;
  uStack_c = uRam00000001466ad3dc;
  FCustomVersionRegistration::FCustomVersionRegistration(&DAT_146b31f70,&local_18,1,DAT_146b31f68);
  atexit((_func_5014 *)&LAB_143ec02c0);
  return;
}



// FUNCTION 1403b41d0 FUN_1403b41d0 body=100 status=ok
// SIG undefined FUN_1403b41d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b41d0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b31d28 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.damage.MaxNumRadiusDamageRequestsPerTick",&DAT_1466ad2f0,
                  L"Maximum number of replicated radius damage requests processed in a single tick",
                  1);
  _DAT_146b31d20 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec02d0);
  return;
}



// FUNCTION 1403b43b0 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1466ad308,0);
  FGenericPlatformString::Memcpy(DAT_1466ad308,&DAT_145877e08,8);
  atexit((_func_5014 *)&LAB_143ec0320);
  return;
}



// FUNCTION 1403b45c0 FUN_1403b45c0 body=100 status=ok
// SIG undefined FUN_1403b45c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b45c0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b322d8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.DrawImpactDecalOverlapTest",&DAT_146b32010,
                  L"Whether to draw debug overlap test failures.\n0: Disable, 1: Enable",0);
  _DAT_146b322d0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec0440);
  return;
}



// FUNCTION 1403b4630 FUN_1403b4630 body=100 status=ok
// SIG undefined FUN_1403b4630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b4630(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b322e8 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"gbx.DrawImpactDecalOverlapTestLifeTime",&DAT_1466ad428,
                  L"Lifetime to use for impact decal overlap test debug draw.",0);
  _DAT_146b322e0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec0490);
  return;
}



// FUNCTION 1403b46a0 FUN_1403b46a0 body=100 status=ok
// SIG undefined FUN_1403b46a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b46a0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b322f8 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"gbx.MaxImpactDecalOverlapTestThickness",&DAT_1466ad42c,
                  L"Maximum thickness to use for impact decal overlap test.",0);
  _DAT_146b322f0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec04e0);
  return;
}



// FUNCTION 1403b4710 FUN_1403b4710 body=100 status=ok
// SIG undefined FUN_1403b4710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b4710(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b322c8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.PoolImpactDecals",&DAT_1466ad424,
                  L"Whether to recycle impact decals by using a pool.\n0: Disable, 1: Enable",0);
  _DAT_146b322c0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec0530);
  return;
}



// FUNCTION 1403b4780 FUN_1403b4780 body=100 status=ok
// SIG undefined FUN_1403b4780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b4780(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b32298 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.ImpactEffects.DefaultDecalLimit",&DAT_1466ad418,
                  L"Default limit on per-frame-per-source usage of a Decal for impact effects",0);
  _DAT_146b32290 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec0580);
  return;
}



// FUNCTION 1403b47f0 FUN_1403b47f0 body=100 status=ok
// SIG undefined FUN_1403b47f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b47f0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b322b8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.ImpactEffects.DefaultHitRegionLimit",&DAT_1466ad420,
                  L"Default limit on per-frame-per-source usage of a HitRegion for impact effects",0
                 );
  _DAT_146b322b0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec05d0);
  return;
}



// FUNCTION 1403b4860 FUN_1403b4860 body=100 status=ok
// SIG undefined FUN_1403b4860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b4860(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b32288 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.ImpactEffects.DefaultImpactLimit",&DAT_1466ad414,
                  L"Default limit on per-frame-per-source usage of an ImpactData for impact effects"
                  ,0);
  _DAT_146b32280 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec0620);
  return;
}



// FUNCTION 1403b48d0 FUN_1403b48d0 body=100 status=ok
// SIG undefined FUN_1403b48d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b48d0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b322a8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.ImpactEffects.DefaultParticleLimit",&DAT_1466ad41c,
                  L"Default limit on per-frame-per-source usage of a ParticleSystem for impact effects"
                  ,0);
  _DAT_146b322a0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec0670);
  return;
}



// FUNCTION 1403b4940 FUN_1403b4940 body=100 status=ok
// SIG undefined FUN_1403b4940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b4940(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b32238 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"gbx.ImpactEffects.DefaultProximityRadius",&DAT_1466ad400,
                  L"A default radius to use when more appropriate effect bounds could not be found",
                  0);
  _DAT_146b32230 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec06c0);
  return;
}



// FUNCTION 1403b49b0 FUN_1403b49b0 body=100 status=ok
// SIG undefined FUN_1403b49b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b49b0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b32278 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.ImpactEffects.EnableHardLimit",&DAT_1466ad410,
                  L"Enable hard limits on the number of impact effects spawned per-frame",0);
  _DAT_146b32270 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec0710);
  return;
}



// FUNCTION 1403b4a20 FUN_1403b4a20 body=100 status=ok
// SIG undefined FUN_1403b4a20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b4a20(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b32258 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"gbx.ImpactEffects.ProximityLargeOnSmallTuner",&DAT_1466ad408,
                  L"An overlap amount that should be used when a large-radius impact overlaps with a small-radius impact"
                  ,0);
  _DAT_146b32250 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec0760);
  return;
}



// FUNCTION 1403b4a90 FUN_1403b4a90 body=100 status=ok
// SIG undefined FUN_1403b4a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b4a90(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b32248 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"gbx.ImpactEffects.ProximityLargeThreshold",&DAT_1466ad404,
                  L"A threshold indicating when bounds are large (and likely more intersting)",0);
  _DAT_146b32240 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec07b0);
  return;
}



// FUNCTION 1403b4b00 FUN_1403b4b00 body=100 status=ok
// SIG undefined FUN_1403b4b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b4b00(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b32218 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.ImpactEffects.ProximityLifeTime",&DAT_1466ad3f8,
                  L"The number of ticks we should track the proximity of an impact effect for",0);
  _DAT_146b32210 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec0800);
  return;
}



// FUNCTION 1403b4b70 FUN_1403b4b70 body=100 status=ok
// SIG undefined FUN_1403b4b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b4b70(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b32208 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.ImpactEffects.EnableProximityLimit",&DAT_1466ad3f4,
                  L"Enable proximity limits on impact effects (avoids spawning impacts near other impacts)"
                  ,0);
  _DAT_146b32200 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec0850);
  return;
}



// FUNCTION 1403b4be0 FUN_1403b4be0 body=100 status=ok
// SIG undefined FUN_1403b4be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b4be0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b32228 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"gbx.ImpactEffects.ProximityOverlapLimit",&DAT_1466ad3fc,
                  L"The amount of proximity overlap that will be tolerated.",0);
  _DAT_146b32220 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec08a0);
  return;
}



// FUNCTION 1403b4c50 FUN_1403b4c50 body=100 status=ok
// SIG undefined FUN_1403b4c50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b4c50(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b32268 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"gbx.ImpactEffects.ProximitySmallOnLargeTuner",&DAT_1466ad40c,
                  L"An overlap amount that should be used when a small-radius impact overlaps with a large-radius impact"
                  ,0);
  _DAT_146b32260 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec08f0);
  return;
}



// FUNCTION 1403b4cc0 FUN_1403b4cc0 body=100 status=ok
// SIG undefined FUN_1403b4cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b4cc0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b321f8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"sg.ImpactEffectsQuality",&DAT_1466ad3f0,
                  L"Controls impact effect level-of-detail.\n0:low, 1:normal\n",0x80);
  _DAT_146b321f0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec0940);
  return;
}



// FUNCTION 1403b4d30 FUN_1403b4d30 body=115 status=ok
// SIG undefined FUN_1403b4d30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b4d30(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b321e0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"ImpactEffects.UseEmitterPool",1,
                  L"Pool particle system components spawned by impact data.",0);
  _DAT_146b321d8 = &PTR_FUN_143f3ecf8;
  _DAT_146b321e8 = (**(code **)(*DAT_146b321e0 + 0x38))(DAT_146b321e0);
  atexit(FUN_143ec0990);
  return;
}



// FUNCTION 1403b4ec0 FUN_1403b4ec0 body=256 status=ok
// SIG undefined FUN_1403b4ec0(void)

void FUN_1403b4ec0(void)

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
    plVar1[1] = (longlong)&DAT_146b32014;
    plVar1[2] = (longlong)
                FStaticallyLinkedModuleRegistrant<FSlateFileDialogsModule>::InitializeModule;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"GbxGameSystemCore",1);
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



// FUNCTION 1403b5050 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1466ad4c0,0);
  FGenericPlatformString::Memcpy(DAT_1466ad4c0,&DAT_145881ee8,8);
  atexit((_func_5014 *)&LAB_143ec0a30);
  return;
}



// FUNCTION 1403b50b0 FUN_1403b50b0 body=100 status=ok
// SIG undefined FUN_1403b50b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b50b0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b34090 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.Micropatch.EnableLogging",&DAT_146b33f2c,
                  L"Turns on/off micropatch logging.",0);
  _DAT_146b34088 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec0a50);
  return;
}



// FUNCTION 1403b5120 FUN_1403b5120 body=100 status=ok
// SIG undefined FUN_1403b5120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b5120(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b34080 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"gbx.Micropatch.PostLoadLimit",&DAT_1466ad5dc,
                  L"Limits the number of post-load micropatch requests that can happen in a given tick."
                  ,0);
  _DAT_146b34078 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec0aa0);
  return;
}



// FUNCTION 1403b5190 FUN_1403b5190 body=100 status=ok
// SIG undefined FUN_1403b5190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b5190(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b34168 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"SigMan.FOVFactor",&DAT_1466ad5d0,
                  L"Determines how much player zoom influences significance. 0 = None, 1 = Full.\n",
                  0);
  _DAT_146b34160 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec0af0);
  return;
}



// FUNCTION 1403b5200 FUN_1403b5200 body=66 status=ok
// SIG undefined FUN_1403b5200(void)

void FUN_1403b5200(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,&DAT_146b340b0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3f130;
  }
  DAT_146b340a0 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit(`LogPrioritizedListHelper'::`2'::_dynamic_atexit_destructor_for__ResetFunc__);
  return;
}



// FUNCTION 1403b52c0 FUN_1403b52c0 body=223 status=ok
// SIG undefined FUN_1403b52c0(void)

void FUN_1403b52c0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FEngineVersion::CompatibleWith();
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_145895a68;
    plVar3[1] = (longlong)&DAT_146b3400d;
    plVar3[2] = (longlong)FUN_142d8e670;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_145895ab0;
  }
  if (local_18 != plVar2) {
    if (plVar3 == (longlong *)0x0) {
      if (((int)plVar2[1] != 0) && (plVar1 = (longlong *)*plVar2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*plVar2 != 0) {
          lVar4 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar4;
        }
        *(undefined4 *)(plVar2 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar2);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return;
}



// FUNCTION 1403b53a0 FUN_1403b53a0 body=321 status=ok
// SIG undefined FUN_1403b53a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b53a0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  if ((DAT_146aeaf18 == '\0') && (puVar2 = (undefined8 *)FUN_14218ce40(), puVar2 != &DAT_146aeaeb0))
  {
    DAT_146aeaeb0 = *puVar2;
    uRam0000000146aeaeb8 = puVar2[1];
    _DAT_146aeaec0 = puVar2[2];
    uRam0000000146aeaec8 = puVar2[3];
    _DAT_146aeaed0 = puVar2[4];
    DAT_146aeaed8 = puVar2[5];
    _DAT_146aeaee0 = puVar2[6];
    _DAT_146aeaee8 = puVar2[7];
    _DAT_146aeaef0 = puVar2[8];
    _DAT_146aeaef8 = puVar2[9];
    DAT_146aeaf00 = puVar2[10];
    DAT_146aeaf08 = puVar2[0xb];
    DAT_146aeaf10 = puVar2[0xc];
    DAT_146aeaf18 = '\x01';
  }
  uVar1 = DAT_146aeaeb0;
  local_18 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_1458959d8;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[2] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_145895a20;
  }
  FUN_1421928f0(local_res8,uVar1,0x1e,&local_18);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 1403b5630 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1466ad610,0);
  FGenericPlatformString::Memcpy(DAT_1466ad610,&DAT_145895278,8);
  atexit((_func_5014 *)&LAB_143ec0c40);
  return;
}



// FUNCTION 1403b5820 PhysicalAnimationProfile'' body=88 status=ok
// SIG undefined PhysicalAnimationProfile''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'UPhysicalAnimationComponent::PhysicalAnimationProfile__(void)

{
  FConstraintProfileProperties::FConstraintProfileProperties(&DAT_146b34450);
  DAT_146b344dc = DAT_146b344dc | 3;
  DAT_146b344ec = DAT_146b344ec | 3;
  DAT_146b344f8._4_1_ = DAT_146b344f8._4_1_ | 3;
  DAT_146b34530 = DAT_146b34530 | 3;
  _DAT_146b34478 = 0;
  DAT_146b3447a = 0;
  _DAT_146b34498 = 0;
  DAT_146b344b4 = 0;
  DAT_146b3454c = 0;
  return;
}



// FUNCTION 1403b58a0 FUN_1403b58a0 body=143 status=ok
// SIG undefined FUN_1403b58a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b58a0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  FTickFunction::FTickFunction(&DAT_146b343d0);
  _DAT_146b343d0 = &PTR_FUN_14589f9c8;
  puVar3 = &DAT_146b34430;
  DAT_146b34420 = 0;
  lVar4 = 2;
  do {
    lVar4 = lVar4 + -1;
    puVar1 = (undefined8 *)operator_new(0x10);
    puVar2 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      puVar2 = puVar1;
    }
    puVar3[1] = puVar2;
    *puVar3 = puVar2;
    puVar3 = puVar3 + 2;
  } while (lVar4 != 0);
  atexit(FUN_143ec0c60);
  return;
}



// FUNCTION 1403b5930 FUN_1403b5930 body=117 status=ok
// SIG undefined FUN_1403b5930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b5930(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b343c0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"ai.perfectknowledgetime",0x40a00000,
                  L"Set the length of time an AI knows exactly where an enemy is after it goes out of sight.\n"
                  ,1);
  _DAT_146b343b8 = &PTR_FUN_143f3ecf8;
  DAT_146b343c8 = (**(code **)(*DAT_146b343c0 + 0x40))(DAT_146b343c0);
  atexit(FUN_143ec0cd0);
  return;
}



// FUNCTION 1403b59b0 FUN_1403b59b0 body=115 status=ok
// SIG undefined FUN_1403b59b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b59b0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b34560 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.UseAsyncPhysicalAnimationPosing",1,
                  L"Whether or not to use async physical animation posing.",0);
  _DAT_146b34558 = &PTR_FUN_143f3ecf8;
  DAT_146b34568 = (**(code **)(*DAT_146b34560 + 0x38))(DAT_146b34560);
  atexit(FUN_143ec0d20);
  return;
}



// FUNCTION 1403b5c20 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1466ad750,0);
  FGenericPlatformString::Memcpy(DAT_1466ad750,&DAT_14589cf58,8);
  atexit((_func_5014 *)&LAB_143ec0d70);
  return;
}



// FUNCTION 1403b5d30 FUN_1403b5d30 body=117 status=ok
// SIG undefined FUN_1403b5d30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b5d30(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b34878 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"input.glyphchangethreshold",0x447a0000,&DAT_1458a673c,0);
  _DAT_146b34870 = &PTR_FUN_143f3ecf8;
  DAT_146b34880 = (**(code **)(*DAT_146b34878 + 0x40))(DAT_146b34878);
  atexit(FUN_143ec0e50);
  return;
}



// FUNCTION 1403b5df0 FUN_1403b5df0 body=279 status=ok
// SIG undefined FUN_1403b5df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b5df0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *local_18;
  int local_10;
  
  if ((DAT_146b34840 == '\0') && (puVar2 = (undefined8 *)FUN_142dcc740(), puVar2 != &DAT_146b34828))
  {
    DAT_146b34828._0_4_ = *(undefined4 *)puVar2;
    DAT_146b34828._4_4_ = *(undefined4 *)((longlong)puVar2 + 4);
    _DAT_146b34830 = *(undefined4 *)(puVar2 + 1);
    uRam0000000146b34834 = *(undefined4 *)((longlong)puVar2 + 0xc);
    _DAT_146b34838 = puVar2[2];
    DAT_146b34840 = '\x01';
  }
  uVar1 = CONCAT44(DAT_146b34828._4_4_,(undefined4)DAT_146b34828);
  local_18 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_143fca720;
    plVar3[1] = (longlong)FUN_142dcc2f0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143fca768;
  }
  FUN_1421928f0(&DAT_146b34848,uVar1,0x14,&local_18);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 1403b5f80 FUN_1403b5f80 body=283 status=ok
// SIG undefined FUN_1403b5f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b5f80(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  if ((DAT_146aeb1c0 == 0) || (DAT_146aeb1c0 == 1)) {
    plVar3 = (longlong *)FUN_14218de70();
    plVar4 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_1458acf38;
      plVar4[1] = (longlong)&DAT_146b34828;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_1458acf80;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar1 = (int)plVar3[1];
      *(int *)(plVar3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar1);
      }
      puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar3);
      *puVar2 = plVar4;
      *(undefined4 *)(puVar2 + 1) = 2;
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_142dcc740();
    if (puVar2 != &DAT_146b34828) {
      DAT_146b34828 = *puVar2;
      _DAT_146b34830 = puVar2[1];
      _DAT_146b34838 = puVar2[2];
      DAT_146b34840 = 1;
      atexit((_func_5014 *)&LAB_143ec0ea0);
      return;
    }
  }
  atexit((_func_5014 *)&LAB_143ec0ea0);
  return;
}



// FUNCTION 1403b6220 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1466ad8c0,0);
  FGenericPlatformString::Memcpy(DAT_1466ad8c0,&DAT_1458a7b68,8);
  atexit((_func_5014 *)&LAB_143ec0ef0);
  return;
}



// FUNCTION 1403b63d0 FUN_1403b63d0 body=32 status=ok
// SIG undefined FUN_1403b63d0(void)

void FUN_1403b63d0(void)

{
  FDifficultyFloat::FDifficultyFloat(&DAT_146b34bd0);
  atexit((_func_5014 *)&LAB_143ec0f30);
  return;
}



// FUNCTION 1403b63f0 FUN_1403b63f0 body=59 status=ok
// SIG undefined FUN_1403b63f0(void)

void FUN_1403b63f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1466adab0,0);
  FGenericPlatformString::Memcpy(DAT_1466adab0,L"CONTEXTPAWN",0x18);
  atexit((_func_5014 *)&LAB_143ec0f40);
  return;
}



// FUNCTION 1403b6600 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1466ada50,0);
  FGenericPlatformString::Memcpy(DAT_1466ada50,&DAT_1458b4590,8);
  atexit((_func_5014 *)&LAB_143ec1000);
  return;
}



// FUNCTION 1403b6940 FUN_1403b6940 body=92 status=ok
// SIG undefined FUN_1403b6940(void)

void FUN_1403b6940(void)

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
    *puVar1 = &PTR_FUN_1458c2348;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AIBulletEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b69a0 FUN_1403b69a0 body=92 status=ok
// SIG undefined FUN_1403b69a0(void)

void FUN_1403b69a0(void)

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
    *puVar1 = &PTR_FUN_144aaeaf0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AIChargeState",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b6a00 FUN_1403b6a00 body=92 status=ok
// SIG undefined FUN_1403b6a00(void)

void FUN_1403b6a00(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1458c1c20;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AIDodgeBasicData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b6a60 FUN_1403b6a60 body=92 status=ok
// SIG undefined FUN_1403b6a60(void)

void FUN_1403b6a60(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x1b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1458c1b08;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AIDodgeData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b6ac0 FUN_1403b6ac0 body=92 status=ok
// SIG undefined FUN_1403b6ac0(void)

void FUN_1403b6ac0(void)

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
    *puVar1 = &PTR_FUN_1458c19f0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AIDodgeInstance",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b6b20 FUN_1403b6b20 body=92 status=ok
// SIG undefined FUN_1403b6b20(void)

void FUN_1403b6b20(void)

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
    *puVar1 = &PTR_FUN_1458c0bb8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ActorPartList",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b6b80 FUN_1403b6b80 body=92 status=ok
// SIG undefined FUN_1403b6b80(void)

void FUN_1403b6b80(void)

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
    *puVar1 = &PTR_FUN_1458c0e18;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ActorPartListData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b6be0 FUN_1403b6be0 body=92 status=ok
// SIG undefined FUN_1403b6be0(void)

void FUN_1403b6be0(void)

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
    *puVar1 = &PTR_FUN_1458c0aa0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ActorPartSelectionOverrideData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b6c40 FUN_1403b6c40 body=92 status=ok
// SIG undefined FUN_1403b6c40(void)

void FUN_1403b6c40(void)

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
    *puVar1 = &PTR_FUN_1458c0f70;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ActorTagCompositeQuery",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b6ca0 FUN_1403b6ca0 body=92 status=ok
// SIG undefined FUN_1403b6ca0(void)

void FUN_1403b6ca0(void)

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
    *puVar1 = &PTR_FUN_1458c1088;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ActorTagQuery",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b6d00 FUN_1403b6d00 body=92 status=ok
// SIG undefined FUN_1403b6d00(void)

void FUN_1403b6d00(void)

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
    *puVar1 = &PTR_FUN_1458c1d80;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AimAssistSmoothingProperties",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b6d60 FUN_1403b6d60 body=92 status=ok
// SIG undefined FUN_1403b6d60(void)

void FUN_1403b6d60(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1458c2230;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AimControlParameters",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b6dc0 FUN_1403b6dc0 body=92 status=ok
// SIG undefined FUN_1403b6dc0(void)

void FUN_1403b6dc0(void)

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
    *puVar1 = &PTR_FUN_1458c2118;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AimSensitivityLevelParameters",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b6e20 FUN_1403b6e20 body=92 status=ok
// SIG undefined FUN_1403b6e20(void)

void FUN_1403b6e20(void)

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
    *puVar1 = &PTR_FUN_1458c0920;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ConditionalMultiSelectionGestaltPartNameData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b6e80 FUN_1403b6e80 body=92 status=ok
// SIG undefined FUN_1403b6e80(void)

void FUN_1403b6e80(void)

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
    *puVar1 = &PTR_FUN_1458c0808;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"MultiSelectionGestaltPartNameData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b6ee0 FUN_1403b6ee0 body=92 status=ok
// SIG undefined FUN_1403b6ee0(void)

void FUN_1403b6ee0(void)

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
    *puVar1 = &PTR_FUN_1458c0cd0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RuntimeActorPartListData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b6f40 FUN_1403b6f40 body=92 status=ok
// SIG undefined FUN_1403b6f40(void)

void FUN_1403b6f40(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144128cb8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RuntimeActorPartListPartTypeData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b6fa0 FUN_1403b6fa0 body=92 status=ok
// SIG undefined FUN_1403b6fa0(void)

void FUN_1403b6fa0(void)

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
    *puVar1 = &PTR_FUN_144c209f8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeightedActorPartData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b7050 FUN_1403b7050 body=66 status=ok
// SIG undefined FUN_1403b7050(void)

void FUN_1403b7050(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EAIDodgeType",1);
  UObjectCompiledInDeferEnum(FUN_142df64b0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b70a0 FUN_1403b70a0 body=66 status=ok
// SIG undefined FUN_1403b70a0(void)

void FUN_1403b70a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EActorPartReplacementMode",1);
  UObjectCompiledInDeferEnum(FUN_142df64f0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b70f0 FUN_1403b70f0 body=66 status=ok
// SIG undefined FUN_1403b70f0(void)

void FUN_1403b70f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EActorPartTypeSelectionOverrideMode",1);
  UObjectCompiledInDeferEnum(FUN_142df6530,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b7140 FUN_1403b7140 body=66 status=ok
// SIG undefined FUN_1403b7140(void)

void FUN_1403b7140(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EActorTagQueryMode",1);
  UObjectCompiledInDeferEnum(FUN_142df6570,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b7190 FUN_1403b7190 body=66 status=ok
// SIG undefined FUN_1403b7190(void)

void FUN_1403b7190(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EChargeCurveType",1);
  UObjectCompiledInDeferEnum(FUN_142df65b0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b71e0 FUN_1403b71e0 body=66 status=ok
// SIG undefined FUN_1403b71e0(void)

void FUN_1403b71e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ERelativeSizeCharge",1);
  UObjectCompiledInDeferEnum(FUN_142df65f0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b7230 FUN_1403b7230 body=66 status=ok
// SIG undefined FUN_1403b7230(void)

void FUN_1403b7230(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIBulletEvent",1);
  UObjectCompiledInDeferStruct
            (FAnimNode_RefPose::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b7280 FUN_1403b7280 body=66 status=ok
// SIG undefined FUN_1403b7280(void)

void FUN_1403b7280(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIChargeState",1);
  UObjectCompiledInDeferStruct
            (FPoseDriverTransform::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b72d0 FUN_1403b72d0 body=66 status=ok
// SIG undefined FUN_1403b72d0(void)

void FUN_1403b72d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIDodgeBasicData",1);
  UObjectCompiledInDeferStruct(FUN_142df6bb0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b7320 FUN_1403b7320 body=66 status=ok
// SIG undefined FUN_1403b7320(void)

void FUN_1403b7320(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIDodgeData",1);
  UObjectCompiledInDeferStruct(FUN_142df6c10,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b7370 FUN_1403b7370 body=66 status=ok
// SIG undefined FUN_1403b7370(void)

void FUN_1403b7370(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIDodgeInstance",1);
  UObjectCompiledInDeferStruct
            (FSubmixEffectConvolutionReverbSettings::StaticStruct,L"/Script/GbxGameSystemCore",
             *puVar1,0,0);
  return;
}



// FUNCTION 1403b73c0 FUN_1403b73c0 body=66 status=ok
// SIG undefined FUN_1403b73c0(void)

void FUN_1403b73c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ActorPartList",1);
  UObjectCompiledInDeferStruct
            (FPoseDriverTransform::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b7410 FUN_1403b7410 body=66 status=ok
// SIG undefined FUN_1403b7410(void)

void FUN_1403b7410(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ActorPartListData",1);
  UObjectCompiledInDeferStruct
            (FReferenceBoneFrame::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b7460 FUN_1403b7460 body=66 status=ok
// SIG undefined FUN_1403b7460(void)

void FUN_1403b7460(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ActorPartSelectionOverrideData",1);
  UObjectCompiledInDeferStruct(FUN_142df6d90,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b74b0 FUN_1403b74b0 body=66 status=ok
// SIG undefined FUN_1403b74b0(void)

void FUN_1403b74b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ActorTagCompositeQuery",1);
  UObjectCompiledInDeferStruct(FUN_142df6df0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b7500 FUN_1403b7500 body=66 status=ok
// SIG undefined FUN_1403b7500(void)

void FUN_1403b7500(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ActorTagQuery",1);
  UObjectCompiledInDeferStruct
            (FPoseDriverTransform::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b7550 FUN_1403b7550 body=66 status=ok
// SIG undefined FUN_1403b7550(void)

void FUN_1403b7550(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AimAssistSmoothingProperties",1);
  UObjectCompiledInDeferStruct
            (FSubmixEffectConvolutionReverbSettings::StaticStruct,L"/Script/GbxGameSystemCore",
             *puVar1,0,0);
  return;
}



// FUNCTION 1403b75a0 FUN_1403b75a0 body=66 status=ok
// SIG undefined FUN_1403b75a0(void)

void FUN_1403b75a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AimControlParameters",1);
  UObjectCompiledInDeferStruct(FUN_142df6f10,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b75f0 FUN_1403b75f0 body=66 status=ok
// SIG undefined FUN_1403b75f0(void)

void FUN_1403b75f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AimSensitivityLevelParameters",1);
  UObjectCompiledInDeferStruct(FUN_142df6f70,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b7640 FUN_1403b7640 body=66 status=ok
// SIG undefined FUN_1403b7640(void)

void FUN_1403b7640(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ConditionalMultiSelectionGestaltPartNameData",1);
  UObjectCompiledInDeferStruct
            (FSubmixEffectConvolutionReverbSettings::StaticStruct,L"/Script/GbxGameSystemCore",
             *puVar1,0,0);
  return;
}



// FUNCTION 1403b7690 FUN_1403b7690 body=66 status=ok
// SIG undefined FUN_1403b7690(void)

void FUN_1403b7690(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"MultiSelectionGestaltPartNameData",1);
  UObjectCompiledInDeferStruct
            (FReferenceBoneFrame::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b76e0 FUN_1403b76e0 body=66 status=ok
// SIG undefined FUN_1403b76e0(void)

void FUN_1403b76e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RuntimeActorPartListData",1);
  UObjectCompiledInDeferStruct
            (FReferenceBoneFrame::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b7730 FUN_1403b7730 body=66 status=ok
// SIG undefined FUN_1403b7730(void)

void FUN_1403b7730(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RuntimeActorPartListPartTypeData",1);
  UObjectCompiledInDeferStruct(FUN_142df70f0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b7780 FUN_1403b7780 body=66 status=ok
// SIG undefined FUN_1403b7780(void)

void FUN_1403b7780(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeightedActorPartData",1);
  UObjectCompiledInDeferStruct(FUN_142df7150,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b77d0 FUN_1403b77d0 body=58 status=ok
// SIG undefined FUN_1403b77d0(void)

void FUN_1403b77d0(void)

{
  UObjectCompiledInDefer
            (FUN_142df71b0,FUN_142df4d60,L"UAIChargeData",L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b7810 FUN_1403b7810 body=58 status=ok
// SIG undefined FUN_1403b7810(void)

void FUN_1403b7810(void)

{
  UObjectCompiledInDefer
            (FUN_142df71e0,FUN_142df49b0,L"UAIDataProvider_AttributeData",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b7850 FUN_1403b7850 body=58 status=ok
// SIG undefined FUN_1403b7850(void)

void FUN_1403b7850(void)

{
  UObjectCompiledInDefer
            (FUN_142df7210,FUN_142df4a70,L"UAIDataProvider_AttributeInitializationData",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b7890 FUN_1403b7890 body=58 status=ok
// SIG undefined FUN_1403b7890(void)

void FUN_1403b7890(void)

{
  UObjectCompiledInDefer
            (FUN_142df7240,FUN_142df4b30,L"UAIDataProvider_AttributeInitializer",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b78d0 FUN_1403b78d0 body=58 status=ok
// SIG undefined FUN_1403b78d0(void)

void FUN_1403b78d0(void)

{
  UObjectCompiledInDefer
            (FUN_142df5030,ULevelSequencePlayer::GetPrivateStaticClass,L"UAIDodgeComponent",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b7910 FUN_1403b7910 body=58 status=ok
// SIG undefined FUN_1403b7910(void)

void FUN_1403b7910(void)

{
  UObjectCompiledInDefer
            (FUN_142df4800,FUN_142df53d0,L"UAISense_Bullet",L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b7950 FUN_1403b7950 body=58 status=ok
// SIG undefined FUN_1403b7950(void)

void FUN_1403b7950(void)

{
  UObjectCompiledInDefer
            (FUN_142df7270,thunk_FUN_142df6630,L"UAchievementUtility",L"/Script/GbxGameSystemCore",0
             ,0,0);
  return;
}



// FUNCTION 1403b7990 FUN_1403b7990 body=58 status=ok
// SIG undefined FUN_1403b7990(void)

void FUN_1403b7990(void)

{
  UObjectCompiledInDefer
            (FUN_142df72a0,FUN_142df5230,L"UActorAttributeContextResolver",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b79d0 FUN_1403b79d0 body=58 status=ok
// SIG undefined FUN_1403b79d0(void)

void FUN_1403b79d0(void)

{
  UObjectCompiledInDefer
            (FUN_142df4670,UWidget::GetPrivateStaticClass,L"UActorPartData",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b7a10 FUN_1403b7a10 body=58 status=ok
// SIG undefined FUN_1403b7a10(void)

void FUN_1403b7a10(void)

{
  UObjectCompiledInDefer
            (FUN_142df72d0,UPawnAction_BlueprintBase::GetPrivateStaticClass,
             L"UActorPartSelectionData",L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b7a50 FUN_1403b7a50 body=58 status=ok
// SIG undefined FUN_1403b7a50(void)

void FUN_1403b7a50(void)

{
  UObjectCompiledInDefer
            (FUN_142df4fa0,UAsyncActionLoadPrimaryAssetBase::StaticClass,L"UActorPartSetData",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b7a90 FUN_1403b7a90 body=58 status=ok
// SIG undefined FUN_1403b7a90(void)

void FUN_1403b7a90(void)

{
  UObjectCompiledInDefer
            (FUN_142df7300,thunk_FUN_142df66d0,L"UAimAssistParameters",L"/Script/GbxGameSystemCore",
             0,0,0);
  return;
}



// FUNCTION 1403b7ad0 FUN_1403b7ad0 body=58 status=ok
// SIG undefined FUN_1403b7ad0(void)

void FUN_1403b7ad0(void)

{
  UObjectCompiledInDefer
            (FUN_142df7330,thunk_FUN_142df6780,L"UAimAssistStrategy",L"/Script/GbxGameSystemCore",0,
             0,0);
  return;
}



// FUNCTION 1403b7b10 FUN_1403b7b10 body=58 status=ok
// SIG undefined FUN_1403b7b10(void)

void FUN_1403b7b10(void)

{
  UObjectCompiledInDefer
            (FUN_142df7360,FUN_142df5490,L"UAimControlData",L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b80d0 FUN_1403b80d0 body=92 status=ok
// SIG undefined FUN_1403b80d0(void)

void FUN_1403b80d0(void)

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
    *puVar1 = &PTR_FUN_1458c78c0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimActionDef",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b8130 FUN_1403b8130 body=92 status=ok
// SIG undefined FUN_1403b8130(void)

void FUN_1403b8130(void)

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
    *puVar1 = &PTR_FUN_1458c7c08;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimMeshExtra",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b8190 FUN_1403b8190 body=92 status=ok
// SIG undefined FUN_1403b8190(void)

void FUN_1403b8190(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1458c7af0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimMeshList",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b81f0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFVectorCurve'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFVectorCurve''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFVectorCurve__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x170;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1458c86e0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AsyncExplosionImpactRequest",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b8250 FUN_1403b8250 body=92 status=ok
// SIG undefined FUN_1403b8250(void)

void FUN_1403b8250(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1458c87f8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AsyncExplosionImpactRequestEntry",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b82b0 FUN_1403b82b0 body=92 status=ok
// SIG undefined FUN_1403b82b0(void)

void FUN_1403b82b0(void)

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
    *puVar1 = &PTR_FUN_1458c8910;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AttributeBaseValueData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b8310 FUN_1403b8310 body=92 status=ok
// SIG undefined FUN_1403b8310(void)

void FUN_1403b8310(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1458c8a28;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AttributeDefinedValueRow",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b8370 FUN_1403b8370 body=92 status=ok
// SIG undefined FUN_1403b8370(void)

void FUN_1403b8370(void)

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
    *puVar1 = &PTR_FUN_1458c8b40;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AttributeEffectData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b83d0 FUN_1403b83d0 body=92 status=ok
// SIG undefined FUN_1403b83d0(void)

void FUN_1403b83d0(void)

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
    *puVar1 = &PTR_FUN_1458c8ee0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AttributeInitializationData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b8430 FUN_1403b8430 body=92 status=ok
// SIG undefined FUN_1403b8430(void)

void FUN_1403b8430(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1458c9050;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AttributePropertyValueResolverTestStruct",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b8490 FUN_1403b8490 body=92 status=ok
// SIG undefined FUN_1403b8490(void)

void FUN_1403b8490(void)

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
    *puVar1 = &PTR_FUN_1458c7778;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxAISightEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b84f0 FUN_1403b84f0 body=92 status=ok
// SIG undefined FUN_1403b84f0(void)

void FUN_1403b84f0(void)

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
    *puVar1 = &PTR_FUN_1440b88f8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"PredictionSource",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b8550 `dynamic_initializer_for_'ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RotationOffsetBlendSpace'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RotationOffsetBlendSpace''(void)

void _dynamic_initializer_for__ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RotationOffsetBlendSpace__
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
    *(undefined4 *)(puVar1 + 1) = 0x1e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1458c85c8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"StretchAnimData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b85b0 FUN_1403b85b0 body=92 status=ok
// SIG undefined FUN_1403b85b0(void)

void FUN_1403b85b0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1458c79d8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeightedAnim",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b8660 FUN_1403b8660 body=66 status=ok
// SIG undefined FUN_1403b8660(void)

void FUN_1403b8660(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EAnimActionDefInput",1);
  UObjectCompiledInDeferEnum(FUN_142dfabc0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b86b0 FUN_1403b86b0 body=66 status=ok
// SIG undefined FUN_1403b86b0(void)

void FUN_1403b86b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EAnimNotifyAlignType",1);
  UObjectCompiledInDeferEnum(FUN_142dfac00,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b8700 FUN_1403b8700 body=66 status=ok
// SIG undefined FUN_1403b8700(void)

void FUN_1403b8700(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EAttributeInitializerUsageMode",1);
  UObjectCompiledInDeferEnum(FUN_142dfac40,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b8750 FUN_1403b8750 body=66 status=ok
// SIG undefined FUN_1403b8750(void)

void FUN_1403b8750(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimActionDef",1);
  UObjectCompiledInDeferStruct
            (FPoseDriverTransform::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b87a0 FUN_1403b87a0 body=66 status=ok
// SIG undefined FUN_1403b87a0(void)

void FUN_1403b87a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimMeshExtra",1);
  UObjectCompiledInDeferStruct(FUN_142dfb270,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b87f0 FUN_1403b87f0 body=66 status=ok
// SIG undefined FUN_1403b87f0(void)

void FUN_1403b87f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimMeshList",1);
  UObjectCompiledInDeferStruct(FUN_142dfb2d0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b8840 FUN_1403b8840 body=66 status=ok
// SIG undefined FUN_1403b8840(void)

void FUN_1403b8840(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AsyncExplosionImpactRequest",1);
  UObjectCompiledInDeferStruct(FVectorCurve::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b8890 FUN_1403b8890 body=66 status=ok
// SIG undefined FUN_1403b8890(void)

void FUN_1403b8890(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AsyncExplosionImpactRequestEntry",1);
  UObjectCompiledInDeferStruct(FUN_142dfb390,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b88e0 FUN_1403b88e0 body=66 status=ok
// SIG undefined FUN_1403b88e0(void)

void FUN_1403b88e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AttributeBaseValueData",1);
  UObjectCompiledInDeferStruct(FUN_142dfb3f0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b8930 FUN_1403b8930 body=66 status=ok
// SIG undefined FUN_1403b8930(void)

void FUN_1403b8930(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AttributeDefinedValueRow",1);
  UObjectCompiledInDeferStruct(FUN_142dfb450,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b8980 FUN_1403b8980 body=66 status=ok
// SIG undefined FUN_1403b8980(void)

void FUN_1403b8980(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AttributeEffectData",1);
  UObjectCompiledInDeferStruct
            (FAnimNode_Root::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b89d0 FUN_1403b89d0 body=66 status=ok
// SIG undefined FUN_1403b89d0(void)

void FUN_1403b89d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AttributeInitializationData",1);
  UObjectCompiledInDeferStruct
            (FAnimNode_RefPose::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b8a20 FUN_1403b8a20 body=66 status=ok
// SIG undefined FUN_1403b8a20(void)

void FUN_1403b8a20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AttributePropertyValueResolverTestStruct",1);
  UObjectCompiledInDeferStruct(FUN_142dfb570,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b8a70 FUN_1403b8a70 body=66 status=ok
// SIG undefined FUN_1403b8a70(void)

void FUN_1403b8a70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxAISightEvent",1);
  UObjectCompiledInDeferStruct
            (FPoseDriverTransform::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b8ac0 FUN_1403b8ac0 body=66 status=ok
// SIG undefined FUN_1403b8ac0(void)

void FUN_1403b8ac0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PredictionSource",1);
  UObjectCompiledInDeferStruct(FUN_142dfb630,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b8b10 FUN_1403b8b10 body=66 status=ok
// SIG undefined FUN_1403b8b10(void)

void FUN_1403b8b10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"StretchAnimData",1);
  UObjectCompiledInDeferStruct(FUN_142dfb690,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b8b60 FUN_1403b8b60 body=66 status=ok
// SIG undefined FUN_1403b8b60(void)

void FUN_1403b8b60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeightedAnim",1);
  UObjectCompiledInDeferStruct
            (FAnimNode_PoseSnapshot::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b8bb0 FUN_1403b8bb0 body=58 status=ok
// SIG undefined FUN_1403b8bb0(void)

void FUN_1403b8bb0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfb750,FUN_142df99c0,L"UAISenseConfig_Bullet",L"/Script/GbxGameSystemCore",0,0,0
            );
  return;
}



// FUNCTION 1403b8bf0 FUN_1403b8bf0 body=58 status=ok
// SIG undefined FUN_1403b8bf0(void)

void FUN_1403b8bf0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfb780,UAISenseConfig_Damage::StaticClass,L"UAISenseConfig_GbxPrediction",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b8c30 FUN_1403b8c30 body=58 status=ok
// SIG undefined FUN_1403b8c30(void)

void FUN_1403b8c30(void)

{
  UObjectCompiledInDefer
            (FUN_142dfb7b0,FUN_142df95d0,L"UAISense_GbxPrediction",L"/Script/GbxGameSystemCore",0,0,
             0);
  return;
}



// FUNCTION 1403b8c70 FUN_1403b8c70 body=58 status=ok
// SIG undefined FUN_1403b8c70(void)

void FUN_1403b8c70(void)

{
  UObjectCompiledInDefer
            (FUN_142df9680,FUN_142df90a0,L"UAISense_GbxSight",L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b8cb0 FUN_1403b8cb0 body=58 status=ok
// SIG undefined FUN_1403b8cb0(void)

void FUN_1403b8cb0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfb7e0,UFGPlayerSettings::GetPrivateStaticClass,
             L"UAnimNotifyState_DeathOverride",L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b8cf0 FUN_1403b8cf0 body=58 status=ok
// SIG undefined FUN_1403b8cf0(void)

void FUN_1403b8cf0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfb810,FUN_142df85c0,L"UAnimNotifyState_DisableLegIK",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b8d30 FUN_1403b8d30 body=58 status=ok
// SIG undefined FUN_1403b8d30(void)

void FUN_1403b8d30(void)

{
  UObjectCompiledInDefer
            (FUN_142dfb840,FUN_142df86a0,L"UAnimNotifyState_DisableLegIKTracing",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b8d70 FUN_1403b8d70 body=58 status=ok
// SIG undefined FUN_1403b8d70(void)

void FUN_1403b8d70(void)

{
  UObjectCompiledInDefer
            (FUN_142dfb870,FUN_142df87a0,L"UAnimNotifyState_DisableLookAt",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b8db0 FUN_1403b8db0 body=58 status=ok
// SIG undefined FUN_1403b8db0(void)

void FUN_1403b8db0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfb8a0,FUN_142df8990,L"UAnimNotifyState_Feedback",L"/Script/GbxGameSystemCore",0
             ,0,0);
  return;
}



// FUNCTION 1403b8df0 FUN_1403b8df0 body=58 status=ok
// SIG undefined FUN_1403b8df0(void)

void FUN_1403b8df0(void)

{
  UObjectCompiledInDefer
            (FUN_142df8b10,FUN_142df8a60,L"UAnimNotifyState_GbxAction",L"/Script/GbxGameSystemCore",
             0,0,0);
  return;
}



// FUNCTION 1403b8e30 FUN_1403b8e30 body=58 status=ok
// SIG undefined FUN_1403b8e30(void)

void FUN_1403b8e30(void)

{
  UObjectCompiledInDefer
            (FUN_142dfb8d0,FUN_142df8b50,L"UAnimNotifyState_RootMotionRotation",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b8e70 FUN_1403b8e70 body=58 status=ok
// SIG undefined FUN_1403b8e70(void)

void FUN_1403b8e70(void)

{
  UObjectCompiledInDefer
            (FUN_142dfb900,FUN_142df8cb0,L"UAnimNotifyState_SoftAlign",L"/Script/GbxGameSystemCore",
             0,0,0);
  return;
}



// FUNCTION 1403b8eb0 FUN_1403b8eb0 body=58 status=ok
// SIG undefined FUN_1403b8eb0(void)

void FUN_1403b8eb0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfb930,FUN_142df9b40,L"UAnimNotifyState_StretchAction",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b8ef0 FUN_1403b8ef0 body=58 status=ok
// SIG undefined FUN_1403b8ef0(void)

void FUN_1403b8ef0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfb960,FUN_142df81c0,L"UAnimNotifyState_StretchBonesMarker",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b8f30 FUN_1403b8f30 body=58 status=ok
// SIG undefined FUN_1403b8f30(void)

void FUN_1403b8f30(void)

{
  UObjectCompiledInDefer
            (FUN_142dfb990,FUN_142df97d0,L"UAnimNotify_CanInterruptAnim",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b8f70 FUN_1403b8f70 body=58 status=ok
// SIG undefined FUN_1403b8f70(void)

void FUN_1403b8f70(void)

{
  UObjectCompiledInDefer
            (FUN_142dfb9c0,FUN_142df98e0,L"UAnimNotify_CauseDamage",L"/Script/GbxGameSystemCore",0,0
             ,0);
  return;
}



// FUNCTION 1403b8fb0 FUN_1403b8fb0 body=58 status=ok
// SIG undefined FUN_1403b8fb0(void)

void FUN_1403b8fb0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfb9f0,FUN_142df8fe0,L"UAnimNotify_Feedback",L"/Script/GbxGameSystemCore",0,0,0)
  ;
  return;
}



// FUNCTION 1403b8ff0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimNotify_Footstep'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAnimNotify_Footstep''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAnimNotify_Footstep__(void)

{
  UObjectCompiledInDefer
            (FUN_142dfba20,UClothingSimulationInteractorNv::GetPrivateStaticClass,
             L"UAnimNotify_Footstep",L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b9030 FUN_1403b9030 body=58 status=ok
// SIG undefined FUN_1403b9030(void)

void FUN_1403b9030(void)

{
  UObjectCompiledInDefer
            (FUN_142df8e30,FUN_142df8d80,L"UAnimNotify_GbxAction",L"/Script/GbxGameSystemCore",0,0,0
            );
  return;
}



// FUNCTION 1403b9070 FUN_1403b9070 body=58 status=ok
// SIG undefined FUN_1403b9070(void)

void FUN_1403b9070(void)

{
  UObjectCompiledInDefer
            (FUN_142dfba50,UClothingSimulationInteractorNv::GetPrivateStaticClass,
             L"UAnimNotify_HandPlant",L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b90b0 FUN_1403b90b0 body=58 status=ok
// SIG undefined FUN_1403b90b0(void)

void FUN_1403b90b0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfba80,thunk_FUN_142dfad30,L"UAnimNotify_PawnAttachSlotTransition",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b90f0 FUN_1403b90f0 body=58 status=ok
// SIG undefined FUN_1403b90f0(void)

void FUN_1403b90f0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfbab0,FUN_142df9170,L"UAnimNotify_PlayJumpedImpact",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b9130 FUN_1403b9130 body=58 status=ok
// SIG undefined FUN_1403b9130(void)

void FUN_1403b9130(void)

{
  UObjectCompiledInDefer
            (FUN_142dfbae0,FUN_142df9410,L"UAnimNotify_PlayLandedImpact",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b9170 FUN_1403b9170 body=58 status=ok
// SIG undefined FUN_1403b9170(void)

void FUN_1403b9170(void)

{
  UObjectCompiledInDefer
            (FUN_142dfbb10,FUN_142df9510,L"UAnimNotify_SetRagdollObjectHoldTransform",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b91b0 FUN_1403b91b0 body=58 status=ok
// SIG undefined FUN_1403b91b0(void)

void FUN_1403b91b0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfbb40,FUN_142df9720,L"UAnimNotify_StretchBonesMarker",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b91f0 FUN_1403b91f0 body=58 status=ok
// SIG undefined FUN_1403b91f0(void)

void FUN_1403b91f0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfbb70,thunk_FUN_142dfade0,L"UAssetMappingData",L"/Script/GbxGameSystemCore",0,0
             ,0);
  return;
}



// FUNCTION 1403b9230 FUN_1403b9230 body=58 status=ok
// SIG undefined FUN_1403b9230(void)

void FUN_1403b9230(void)

{
  UObjectCompiledInDefer
            (FUN_142dfbba0,FUN_142df9bf0,L"UAsyncExplosionImpactManager",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b9270 FUN_1403b9270 body=58 status=ok
// SIG undefined FUN_1403b9270(void)

void FUN_1403b9270(void)

{
  UObjectCompiledInDefer
            (FUN_142df82e0,&LAB_1413c1cb0,L"UAttributeContextResolver",L"/Script/GbxGameSystemCore",
             0,0,0);
  return;
}



// FUNCTION 1403b92b0 FUN_1403b92b0 body=58 status=ok
// SIG undefined FUN_1403b92b0(void)

void FUN_1403b92b0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfbbd0,FUN_142df83d0,L"UAttributeEffectMultiMutatorData",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b92f0 FUN_1403b92f0 body=58 status=ok
// SIG undefined FUN_1403b92f0(void)

void FUN_1403b92f0(void)

{
  UObjectCompiledInDefer
            (FUN_142df8580,thunk_FUN_142dfaf30,L"UAttributeEffectMutatorData",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b9330 FUN_1403b9330 body=58 status=ok
// SIG undefined FUN_1403b9330(void)

void FUN_1403b9330(void)

{
  UObjectCompiledInDefer
            (FUN_142df88f0,UAnimNotifyState::GetPrivateStaticClass,L"UAttributeInitializer",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b9370 FUN_1403b9370 body=58 status=ok
// SIG undefined FUN_1403b9370(void)

void FUN_1403b9370(void)

{
  UObjectCompiledInDefer
            (FUN_142dfbc00,FUN_142df8c00,L"UAttributeModifierTestContext",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b93b0 FUN_1403b93b0 body=58 status=ok
// SIG undefined FUN_1403b93b0(void)

void FUN_1403b93b0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfbc30,UMapBuildDataRegistry::GetPrivateStaticClass,
             L"UAttributePropertyValueResolverTestContext",L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b93f0 FUN_1403b93f0 body=58 status=ok
// SIG undefined FUN_1403b93f0(void)

void FUN_1403b93f0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfbc60,UCurveFloat::GetPrivateStaticClass,L"UTestAttributePropertyValueResolver"
             ,L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b9860 FUN_1403b9860 body=92 status=ok
// SIG undefined FUN_1403b9860(void)

void FUN_1403b9860(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144128cb8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BulletPerceptionProperties",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b98c0 FUN_1403b98c0 body=92 status=ok
// SIG undefined FUN_1403b98c0(void)

void FUN_1403b98c0(void)

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
    *puVar1 = &PTR_FUN_143ff1be8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ChallengeDataType",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b9920 FUN_1403b9920 body=92 status=ok
// SIG undefined FUN_1403b9920(void)

void FUN_1403b9920(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_1458ce9b8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ChallengeGoalValue",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b9980 FUN_1403b9980 body=92 status=ok
// SIG undefined FUN_1403b9980(void)

void FUN_1403b9980(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1458ce300;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GameStageGradeWeightData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b99e0 FUN_1403b99e0 body=92 status=ok
// SIG undefined FUN_1403b99e0(void)

void FUN_1403b99e0(void)

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
    *puVar1 = &PTR_FUN_1458ce8a0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"StatChallengeTest",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403b9a70 FUN_1403b9a70 body=66 status=ok
// SIG undefined FUN_1403b9a70(void)

void FUN_1403b9a70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EBalanceValueType",1);
  UObjectCompiledInDeferEnum(FUN_142dfdd60,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b9ac0 FUN_1403b9ac0 body=66 status=ok
// SIG undefined FUN_1403b9ac0(void)

void FUN_1403b9ac0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EChallengeType",1);
  UObjectCompiledInDeferEnum(EChallengeType_StaticEnum,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b9b10 FUN_1403b9b10 body=66 status=ok
// SIG undefined FUN_1403b9b10(void)

void FUN_1403b9b10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"BulletPerceptionProperties",1);
  UObjectCompiledInDeferStruct(FUN_142dfe3d0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b9b60 FUN_1403b9b60 body=66 status=ok
// SIG undefined FUN_1403b9b60(void)

void FUN_1403b9b60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ChallengeDataType",1);
  UObjectCompiledInDeferStruct(FUN_142dfe430,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b9bb0 FUN_1403b9bb0 body=66 status=ok
// SIG undefined FUN_1403b9bb0(void)

void FUN_1403b9bb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ChallengeGoalValue",1);
  UObjectCompiledInDeferStruct(FUN_142dfe490,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b9c00 FUN_1403b9c00 body=66 status=ok
// SIG undefined FUN_1403b9c00(void)

void FUN_1403b9c00(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GameStageGradeWeightData",1);
  UObjectCompiledInDeferStruct(FUN_142dfe4f0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b9c50 FUN_1403b9c50 body=66 status=ok
// SIG undefined FUN_1403b9c50(void)

void FUN_1403b9c50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"StatChallengeTest",1);
  UObjectCompiledInDeferStruct
            (FAnimNode_MeshSpaceRefPose::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403b9ca0 FUN_1403b9ca0 body=58 status=ok
// SIG undefined FUN_1403b9ca0(void)

void FUN_1403b9ca0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfe5b0,&LAB_1413d2540,L"UAttributePropertyValueResolver",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b9ce0 FUN_1403b9ce0 body=58 status=ok
// SIG undefined FUN_1403b9ce0(void)

void FUN_1403b9ce0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfd180,UDungeonEventListener::GetPrivateStaticClass,L"UAttributeValueResolver",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b9d20 FUN_1403b9d20 body=58 status=ok
// SIG undefined FUN_1403b9d20(void)

void FUN_1403b9d20(void)

{
  UObjectCompiledInDefer
            (FUN_142dfe5e0,FUN_142dfc2d0,L"UBTDecorator_GbxCondition",L"/Script/GbxGameSystemCore",0
             ,0,0);
  return;
}



// FUNCTION 1403b9d60 FUN_1403b9d60 body=58 status=ok
// SIG undefined FUN_1403b9d60(void)

void FUN_1403b9d60(void)

{
  UObjectCompiledInDefer
            (FUN_142dfe610,UBTTask_RunBehaviorDynamic::GetPrivateStaticClass,
             L"UBTTask_PlayGbxAction",L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b9da0 FUN_1403b9da0 body=58 status=ok
// SIG undefined FUN_1403b9da0(void)

void FUN_1403b9da0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfe640,FUN_142dfc9b0,L"UBalanceFormulaAttributeValueResolver",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b9de0 FUN_1403b9de0 body=58 status=ok
// SIG undefined FUN_1403b9de0(void)

void FUN_1403b9de0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfe670,FUN_142dfca70,L"UBalanceStateAttributeValueResolver",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b9e20 FUN_1403b9e20 body=58 status=ok
// SIG undefined FUN_1403b9e20(void)

void FUN_1403b9e20(void)

{
  UObjectCompiledInDefer
            (FUN_142dfcc00,&LAB_1412e3580,L"UBalanceStateComponent",L"/Script/GbxGameSystemCore",0,0
             ,0);
  return;
}



// FUNCTION 1403b9e60 FUN_1403b9e60 body=58 status=ok
// SIG undefined FUN_1403b9e60(void)

void FUN_1403b9e60(void)

{
  UObjectCompiledInDefer
            (FUN_142dfe6a0,UTextureRenderTargetCube::GetPrivateStaticClass,
             L"UBalanceTableAttributeValueResolver",L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b9ea0 FUN_1403b9ea0 body=58 status=ok
// SIG undefined FUN_1403b9ea0(void)

void FUN_1403b9ea0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfe6d0,FUN_142dfd500,L"UBlackboardKeyAttributeContextResolver",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b9ee0 FUN_1403b9ee0 body=58 status=ok
// SIG undefined FUN_1403b9ee0(void)

void FUN_1403b9ee0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfe700,FUN_142dfd690,L"UBlackboardKeyType_GbxFlag",L"/Script/GbxGameSystemCore",
             0,0,0);
  return;
}



// FUNCTION 1403b9f20 FUN_1403b9f20 body=58 status=ok
// SIG undefined FUN_1403b9f20(void)

void FUN_1403b9f20(void)

{
  UObjectCompiledInDefer
            (FUN_142dfe730,FUN_142dfc210,L"UBlackboardKeyType_Struct",L"/Script/GbxGameSystemCore",0
             ,0,0);
  return;
}



// FUNCTION 1403b9f60 FUN_1403b9f60 body=58 status=ok
// SIG undefined FUN_1403b9f60(void)

void FUN_1403b9f60(void)

{
  UObjectCompiledInDefer
            (FUN_142dfe760,FUN_142dfd5b0,L"UBlackboardKeyType_TargetActorInfo",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b9fa0 FUN_1403b9fa0 body=58 status=ok
// SIG undefined FUN_1403b9fa0(void)

void FUN_1403b9fa0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfc440,UUIBlueprintFunctionLibrary::GetPrivateStaticClass,
             L"UBoneModBlueprintLibrary",L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403b9fe0 FUN_1403b9fe0 body=58 status=ok
// SIG undefined FUN_1403b9fe0(void)

void FUN_1403b9fe0(void)

{
  UObjectCompiledInDefer
            (FUN_142dfe790,UGCombatTextWidget::GetPrivateStaticClass,L"UBoneModComponent",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403ba020 FUN_1403ba020 body=58 status=ok
// SIG undefined FUN_1403ba020(void)

void FUN_1403ba020(void)

{
  UObjectCompiledInDefer
            (FUN_142dfe7c0,UDamageableInterface::GetPrivateStaticClass,
             L"UCauseDamageContextSourceInterface",L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403ba060 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UChallenge'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UChallenge''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UChallenge__(void)

{
  UObjectCompiledInDefer
            (FUN_142dfcd80,thunk_FUN_142dfdfe0,L"UChallenge",L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403ba470 FUN_1403ba470 body=92 status=ok
// SIG undefined FUN_1403ba470(void)

void FUN_1403ba470(void)

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
    *puVar1 = &PTR_FUN_1458d4830;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AttributeConditionalValue",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ba4d0 FUN_1403ba4d0 body=92 status=ok
// SIG undefined FUN_1403ba4d0(void)

void FUN_1403ba4d0(void)

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
    *puVar1 = &PTR_FUN_1458d33b0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ChallengeInstanceData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ba530 FUN_1403ba530 body=92 status=ok
// SIG undefined FUN_1403ba530(void)

void FUN_1403ba530(void)

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
    *puVar1 = &PTR_FUN_1458d34c8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ChallengePersistentState",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ba590 FUN_1403ba590 body=92 status=ok
// SIG undefined FUN_1403ba590(void)

void FUN_1403ba590(void)

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
    *puVar1 = &PTR_FUN_1458d35e0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ChallengeStatInstanceData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ba630 FUN_1403ba630 body=66 status=ok
// SIG undefined FUN_1403ba630(void)

void FUN_1403ba630(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ECharacterMovementAttributeValueType",1);
  UObjectCompiledInDeferEnum(FUN_142e03350,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403ba680 FUN_1403ba680 body=66 status=ok
// SIG undefined FUN_1403ba680(void)

void FUN_1403ba680(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ECinematicAudioMode",1);
  UObjectCompiledInDeferEnum(FUN_142e03390,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403ba6d0 FUN_1403ba6d0 body=66 status=ok
// SIG undefined FUN_1403ba6d0(void)

void FUN_1403ba6d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AttributeConditionalValue",1);
  UObjectCompiledInDeferStruct
            (FAnimNode_Root::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403ba720 FUN_1403ba720 body=66 status=ok
// SIG undefined FUN_1403ba720(void)

void FUN_1403ba720(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ChallengeInstanceData",1);
  UObjectCompiledInDeferStruct(FUN_142e03ac0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403ba770 FUN_1403ba770 body=66 status=ok
// SIG undefined FUN_1403ba770(void)

void FUN_1403ba770(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ChallengePersistentState",1);
  UObjectCompiledInDeferStruct
            (FBoneSocketTarget::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403ba7c0 FUN_1403ba7c0 body=66 status=ok
// SIG undefined FUN_1403ba7c0(void)

void FUN_1403ba7c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ChallengeStatInstanceData",1);
  UObjectCompiledInDeferStruct
            (FAnimNode_RefPose::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403ba810 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ABeacon'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ABeacon''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_ABeacon__(void)

{
  UObjectCompiledInDefer(FUN_142e01b90,FUN_142e01ae0,L"ABeacon",L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403ba850 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_AChallengeManager'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_AChallengeManager''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_AChallengeManager__(void)

{
  UObjectCompiledInDefer
            (FUN_142e01f90,USpinBox::GetPrivateStaticClass,L"AChallengeManager",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403ba890 FUN_1403ba890 body=58 status=ok
// SIG undefined FUN_1403ba890(void)

void FUN_1403ba890(void)

{
  UObjectCompiledInDefer
            (FUN_142e03be0,AXScriptedBotSpawner::GetPrivateStaticClass,L"AClothManagerInterface",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403ba8d0 FUN_1403ba8d0 body=58 status=ok
// SIG undefined FUN_1403ba8d0(void)

void FUN_1403ba8d0(void)

{
  UObjectCompiledInDefer
            (FUN_142e03c10,thunk_FUN_142e03480,L"UChallengeCategoryData",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403ba910 FUN_1403ba910 body=58 status=ok
// SIG undefined FUN_1403ba910(void)

void FUN_1403ba910(void)

{
  UObjectCompiledInDefer
            (FUN_142e03c40,FUN_142e01ec0,L"UChallengeConditionData",L"/Script/GbxGameSystemCore",0,0
             ,0);
  return;
}



// FUNCTION 1403ba950 FUN_1403ba950 body=58 status=ok
// SIG undefined FUN_1403ba950(void)

void FUN_1403ba950(void)

{
  UObjectCompiledInDefer
            (FUN_142e01890,FUN_142e017e0,L"UChallengeLevelActorComponent",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403ba990 FUN_1403ba990 body=58 status=ok
// SIG undefined FUN_1403ba990(void)

void FUN_1403ba990(void)

{
  UObjectCompiledInDefer
            (FUN_142e01cc0,UGNavigationHeaderItem::GetPrivateStaticClass,
             L"UChallengeLevelParentComponent",L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403ba9d0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UChallengeList'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UChallengeList''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UChallengeList__(void)

{
  UObjectCompiledInDefer
            (FUN_142e03c70,UClothingSimulationInteractorNv::GetPrivateStaticClass,L"UChallengeList",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403baa10 FUN_1403baa10 body=58 status=ok
// SIG undefined FUN_1403baa10(void)

void FUN_1403baa10(void)

{
  UObjectCompiledInDefer
            (FUN_142e03ca0,UDamageableInterface::GetPrivateStaticClass,
             L"UChallengeObserverInterface",L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403baa50 FUN_1403baa50 body=58 status=ok
// SIG undefined FUN_1403baa50(void)

void FUN_1403baa50(void)

{
  UObjectCompiledInDefer
            (FUN_142e03cd0,FUN_142e02020,L"UChallengeRewardData",L"/Script/GbxGameSystemCore",0,0,0)
  ;
  return;
}



// FUNCTION 1403baa90 FUN_1403baa90 body=58 status=ok
// SIG undefined FUN_1403baa90(void)

void FUN_1403baa90(void)

{
  UObjectCompiledInDefer
            (FUN_142e03d00,FUN_142e013f0,L"UChallengeSystemSettings",L"/Script/GbxGameSystemCore",0,
             0,0);
  return;
}



// FUNCTION 1403baad0 FUN_1403baad0 body=58 status=ok
// SIG undefined FUN_1403baad0(void)

void FUN_1403baad0(void)

{
  UObjectCompiledInDefer
            (FUN_142e020e0,thunk_FUN_142e035e0,L"UChallengesComponent",L"/Script/GbxGameSystemCore",
             0,0,0);
  return;
}



// FUNCTION 1403bab10 FUN_1403bab10 body=58 status=ok
// SIG undefined FUN_1403bab10(void)

void FUN_1403bab10(void)

{
  UObjectCompiledInDefer
            (FUN_142e03d30,thunk_FUN_142e03690,L"UCharacterAttributeContextResolver",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403bab50 FUN_1403bab50 body=58 status=ok
// SIG undefined FUN_1403bab50(void)

void FUN_1403bab50(void)

{
  UObjectCompiledInDefer
            (FUN_142e03d60,FUN_142e014b0,L"UCharacterBestTargetAttributeContextResolver",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403bab90 FUN_1403bab90 body=58 status=ok
// SIG undefined FUN_1403bab90(void)

void FUN_1403bab90(void)

{
  UObjectCompiledInDefer
            (FUN_142e03d90,FUN_142e01570,L"UCharacterMovementAttributeValueResolver",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403babd0 FUN_1403babd0 body=58 status=ok
// SIG undefined FUN_1403babd0(void)

void FUN_1403babd0(void)

{
  UObjectCompiledInDefer
            (FUN_142e016e0,FUN_142e01630,L"UCinematicModeBlueprintLibrary",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403bac10 FUN_1403bac10 body=58 status=ok
// SIG undefined FUN_1403bac10(void)

void FUN_1403bac10(void)

{
  UObjectCompiledInDefer
            (FUN_142e03dc0,thunk_FUN_142e03740,L"UCinematicModeData",L"/Script/GbxGameSystemCore",0,
             0,0);
  return;
}



// FUNCTION 1403bac50 FUN_1403bac50 body=58 status=ok
// SIG undefined FUN_1403bac50(void)

void FUN_1403bac50(void)

{
  UObjectCompiledInDefer
            (FUN_142e03df0,FUN_142e01db0,L"UConditionalAttributeValueResolver",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403bac90 FUN_1403bac90 body=58 status=ok
// SIG undefined FUN_1403bac90(void)

void FUN_1403bac90(void)

{
  UObjectCompiledInDefer
            (FUN_142e03e20,FUN_142e02530,L"UConditionalDamageCriticalModifier",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403bacd0 FUN_1403bacd0 body=58 status=ok
// SIG undefined FUN_1403bacd0(void)

void FUN_1403bacd0(void)

{
  UObjectCompiledInDefer
            (FUN_142e03e50,FUN_142e02630,L"UConditionalDamageHitRegionModifier",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403bad10 FUN_1403bad10 body=58 status=ok
// SIG undefined FUN_1403bad10(void)

void FUN_1403bad10(void)

{
  UObjectCompiledInDefer
            (FUN_142e03e80,thunk_FUN_142e037f0,L"UCustomChallengePersistentState",
             L"/Script/GbxGameSystemCore",0,0,0);
  return;
}



// FUNCTION 1403bb120 FUN_1403bb120 body=92 status=ok
// SIG undefined FUN_1403bb120(void)

void FUN_1403bb120(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x168;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1458dae30;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CMMotionData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403bb180 FUN_1403bb180 body=92 status=ok
// SIG undefined FUN_1403bb180(void)

void FUN_1403bb180(void)

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
    *puVar1 = &PTR_FUN_1458c8910;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ConditionalDamageDamageConditionalValue",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403bb1e0 FUN_1403bb1e0 body=92 status=ok
// SIG undefined FUN_1403bb1e0(void)

void FUN_1403bb1e0(void)

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
    *puVar1 = &PTR_FUN_143f61bc8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ConditionalDamageDamageTypeConditional",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403bb240 FUN_1403bb240 body=92 status=ok
// SIG undefined FUN_1403bb240(void)

void FUN_1403bb240(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_1458db050;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CriticalHitDamageOverrides",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403bb2a0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFDebuggingInfoForSingleFunction'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFDebuggingInfoForSingleFunction''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFDebuggingInfoForSingleFunction__
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
    *(undefined4 *)(puVar1 + 1) = 400;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1458db1b8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DamageTargetResult",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403bb300 FUN_1403bb300 body=92 status=ok
// SIG undefined FUN_1403bb300(void)

void FUN_1403bb300(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1458db2d0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DamagedActor",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403bb3a0 FUN_1403bb3a0 body=66 status=ok
// SIG undefined FUN_1403bb3a0(void)

void FUN_1403bb3a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ECMGravityModificationType",1);
  UObjectCompiledInDeferEnum(FUN_142e06f70,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb3f0 FUN_1403bb3f0 body=66 status=ok
// SIG undefined FUN_1403bb3f0(void)

void FUN_1403bb3f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ECMInheritVelocityType",1);
  UObjectCompiledInDeferEnum(FUN_142e06fb0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb440 FUN_1403bb440 body=66 status=ok
// SIG undefined FUN_1403bb440(void)

void FUN_1403bb440(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ECMLedgeBehavior",1);
  UObjectCompiledInDeferEnum(FUN_142e06ff0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb490 FUN_1403bb490 body=66 status=ok
// SIG undefined FUN_1403bb490(void)

void FUN_1403bb490(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ECMMoveFBControlType",1);
  UObjectCompiledInDeferEnum(FUN_142e07030,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb4e0 FUN_1403bb4e0 body=66 status=ok
// SIG undefined FUN_1403bb4e0(void)

void FUN_1403bb4e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ECMMoveLRControlType",1);
  UObjectCompiledInDeferEnum(FUN_142e07070,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb530 FUN_1403bb530 body=66 status=ok
// SIG undefined FUN_1403bb530(void)

void FUN_1403bb530(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ECMMovementType",1);
  UObjectCompiledInDeferEnum(FUN_142e070b0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb580 FUN_1403bb580 body=66 status=ok
// SIG undefined FUN_1403bb580(void)

void FUN_1403bb580(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ECMTeleportPreferenceType",1);
  UObjectCompiledInDeferEnum(FUN_142e070f0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb5d0 FUN_1403bb5d0 body=66 status=ok
// SIG undefined FUN_1403bb5d0(void)

void FUN_1403bb5d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ECMTerminalVelocityModificationType",1);
  UObjectCompiledInDeferEnum(FUN_142e07130,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb620 FUN_1403bb620 body=66 status=ok
// SIG undefined FUN_1403bb620(void)

void FUN_1403bb620(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EConditionalAreaDamageFilter",1);
  UObjectCompiledInDeferEnum(FUN_142e07170,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb670 FUN_1403bb670 body=66 status=ok
// SIG undefined FUN_1403bb670(void)

void FUN_1403bb670(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EConditionalDamageCriticalFilter",1);
  UObjectCompiledInDeferEnum(FUN_142e071b0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb6c0 FUN_1403bb6c0 body=66 status=ok
// SIG undefined FUN_1403bb6c0(void)

void FUN_1403bb6c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EConditionalDamageModifierType",1);
  UObjectCompiledInDeferEnum(FUN_142e071f0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb710 FUN_1403bb710 body=66 status=ok
// SIG undefined FUN_1403bb710(void)

void FUN_1403bb710(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EConditionalDamageTypeBonusMode",1);
  UObjectCompiledInDeferEnum(FUN_142e07230,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb760 FUN_1403bb760 body=66 status=ok
// SIG undefined FUN_1403bb760(void)

void FUN_1403bb760(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ECriticalHitDamageOverride",1);
  UObjectCompiledInDeferEnum(FUN_142e07270,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb7b0 FUN_1403bb7b0 body=66 status=ok
// SIG undefined FUN_1403bb7b0(void)

void FUN_1403bb7b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EDamageAreaBoxOriginType",1);
  UObjectCompiledInDeferEnum(FUN_142e072b0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb800 FUN_1403bb800 body=66 status=ok
// SIG undefined FUN_1403bb800(void)

void FUN_1403bb800(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EDamageAreaOverlapFilterType",1);
  UObjectCompiledInDeferEnum(FUN_142e072f0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb850 FUN_1403bb850 body=66 status=ok
// SIG undefined FUN_1403bb850(void)

void FUN_1403bb850(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EDamageFilterExprMode",1);
  UObjectCompiledInDeferEnum(FUN_142e07330,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb8a0 FUN_1403bb8a0 body=66 status=ok
// SIG undefined FUN_1403bb8a0(void)

void FUN_1403bb8a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CMMotionData",1);
  UObjectCompiledInDeferStruct
            (FAnimNode_HandIKRetargeting::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb8f0 FUN_1403bb8f0 body=66 status=ok
// SIG undefined FUN_1403bb8f0(void)

void FUN_1403bb8f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ConditionalDamageDamageConditionalValue",1);
  UObjectCompiledInDeferStruct(FUN_142e07a50,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb940 FUN_1403bb940 body=66 status=ok
// SIG undefined FUN_1403bb940(void)

void FUN_1403bb940(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ConditionalDamageDamageTypeConditional",1);
  UObjectCompiledInDeferStruct(FUN_142e07ab0,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb990 FUN_1403bb990 body=66 status=ok
// SIG undefined FUN_1403bb990(void)

void FUN_1403bb990(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CriticalHitDamageOverrides",1);
  UObjectCompiledInDeferStruct(FUN_142e07b10,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bb9e0 FUN_1403bb9e0 body=66 status=ok
// SIG undefined FUN_1403bb9e0(void)

void FUN_1403bb9e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DamageTargetResult",1);
  UObjectCompiledInDeferStruct
            (FAnimNode_Fabrik::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}



// FUNCTION 1403bba30 FUN_1403bba30 body=66 status=ok
// SIG undefined FUN_1403bba30(void)

void FUN_1403bba30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DamagedActor",1);
  UObjectCompiledInDeferStruct
            (FModularSynthPreset::StaticStruct,L"/Script/GbxGameSystemCore",*puVar1,0,0);
  return;
}


