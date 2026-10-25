// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1402f3860 `dynamic_initializer_for_'CVarVolumetricFogHistoryWeight'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVolumetricFogHistoryWeight''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVolumetricFogHistoryWeight__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaa3d8 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.VolumetricFog.HistoryWeight",&DAT_1464c36e4,
                  L"How much the history value should be weighted each frame.  This is a tradeoff between visible jittering and responsiveness."
                  ,0x60);
  _DAT_146aaa3d0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9c9a0);
  return;
}



// FUNCTION 1402f38d0 FUN_1402f38d0 body=100 status=ok
// SIG undefined FUN_1402f38d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f38d0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaa408 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.VolumetricFog.InitializeUseAsyncCompute",&DAT_146aa954c,
                  L"Run VolumetricFog InitializeVolume on async compute. 0 - No async; 1 - Schedule at Z-PrePass; 2 - Schedule at post-ZPrePass; Positive - Enable if efficient; Negative - force async."
                  ,0x60);
  _DAT_146aaa400 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9c9f0);
  return;
}



// FUNCTION 1402f3940 `dynamic_initializer_for_'CVarVolumetricFogInjectShadowedLightsSeparately'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVolumetricFogInjectShadowedLightsSeparately''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVolumetricFogInjectShadowedLightsSeparately__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaa378 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.VolumetricFog.InjectShadowedLightsSeparately",&DAT_1464c36cc,
                  L"Whether to allow the volumetric fog feature.",0x60);
  _DAT_146aaa370 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9ca40);
  return;
}



// FUNCTION 1402f39b0 `dynamic_initializer_for_'CVarVolumetricFogJitter'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVolumetricFogJitter''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVolumetricFogJitter__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaa3c8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.VolumetricFog.Jitter",&DAT_1464c36e0,
                  L"Whether to apply jitter to each frame\'s volumetric fog computation, achieving temporal super sampling."
                  ,0x60);
  _DAT_146aaa3c0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9ca90);
  return;
}



// FUNCTION 1402f3a20 `dynamic_initializer_for_'CVarVolumetricFogLightFunctionSupersampleScale'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVolumetricFogLightFunctionSupersampleScale''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVolumetricFogLightFunctionSupersampleScale__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaa8a8 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.VolumetricFog.LightFunctionSupersampleScale",&DAT_1464c3704,
                  L"Scales the slice depth distribution.",0x60);
  _DAT_146aaa8a0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9cae0);
  return;
}



// FUNCTION 1402f3a90 `dynamic_initializer_for_'CVarVolumetricFogTemporalReprojection'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVolumetricFogTemporalReprojection''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVolumetricFogTemporalReprojection__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaa3b8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.VolumetricFog.TemporalReprojection",&DAT_1464c36dc,
                  L"Whether to use temporal reprojection on volumetric fog.",0x60);
  _DAT_146aaa3b0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9cb30);
  return;
}



// FUNCTION 1402f3b00 `dynamic_initializer_for_'CVarVolumetricFogVoxelizationShowOnlyPassIndex'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVolumetricFogVoxelizationShowOnlyPassIndex''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVolumetricFogVoxelizationShowOnlyPassIndex__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaaa18 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.VolumetricFog.VoxelizationShowOnlyPassIndex",&DAT_1464c36c4,
                  L"When >= 0, indicates a single voxelization pass to render for debugging.",0x20);
  _DAT_146aaaa10 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9cb80);
  return;
}



// FUNCTION 1402f3b70 `dynamic_initializer_for_'CVarVolumetricFogVoxelizationSlicesPerPass'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVolumetricFogVoxelizationSlicesPerPass''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVolumetricFogVoxelizationSlicesPerPass__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaaa08 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.VolumetricFog.VoxelizationSlicesPerGSPass",&DAT_1464c36c0,
                  L"How many depth slices to render in a single voxelization pass (max geometry shader expansion).  Must recompile voxelization shaders to propagate changes."
                  ,4);
  _DAT_146aaaa00 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9cbd0);
  return;
}



// FUNCTION 1402f3be0 `dynamic_initializer_for_'CVarVolumetricLightmapVisualizationMinScreenFraction'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVolumetricLightmapVisualizationMinScreenFraction''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVolumetricLightmapVisualizationMinScreenFraction__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaa0b0 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.VolumetricLightmap.VisualizationMinScreenFraction",
                  &DAT_1464c36fc,
                  L"Minimum screen size of a volumetric lightmap visualization sphere",0x20);
  _DAT_146aaa0a8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9cc20);
  return;
}



// FUNCTION 1402f3c50 `dynamic_initializer_for_'CVarVolumetricLightmapVisualizationRadiusScale'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVolumetricLightmapVisualizationRadiusScale''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVolumetricLightmapVisualizationRadiusScale__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaa0a0 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.VolumetricLightmap.VisualizationRadiusScale",&DAT_1464c36f8,
                  L"Scales the size of the spheres used to visualize volumetric lightmap samples.",
                  0x20);
  _DAT_146aaa098 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9cc70);
  return;
}



// FUNCTION 1402f3cf0 FUN_1402f3cf0 body=67 status=ok
// SIG undefined FUN_1402f3cf0(void)

void FUN_1402f3cf0(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1464c3790 + 0x28))();
    atexit(FUN_143e9ccc0);
    return;
  }
  FUN_141edf270(&PTR_PTR_1464c3790);
  atexit(FUN_143e9ccc0);
  return;
}



// FUNCTION 1402f3d40 FUN_1402f3d40 body=67 status=ok
// SIG undefined FUN_1402f3d40(void)

void FUN_1402f3d40(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1464c3718 + 0x28))();
    atexit(FUN_143e9cd20);
    return;
  }
  FUN_141edf270(&PTR_PTR_1464c3718);
  atexit(FUN_143e9cd20);
  return;
}



// FUNCTION 1402f3d90 FUN_1402f3d90 body=67 status=ok
// SIG undefined FUN_1402f3d90(void)

void FUN_1402f3d90(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1464c3860 + 0x28))();
    atexit(FUN_143e9cd70);
    return;
  }
  FUN_141edf270(&PTR_PTR_1464c3860);
  atexit(FUN_143e9cd70);
  return;
}



// FUNCTION 1402f3de0 FUN_1402f3de0 body=67 status=ok
// SIG undefined FUN_1402f3de0(void)

void FUN_1402f3de0(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1464c37d0 + 0x28))();
    atexit(FUN_143e9cdd0);
    return;
  }
  FUN_141edf270(&PTR_PTR_1464c37d0);
  atexit(FUN_143e9cdd0);
  return;
}



// FUNCTION 1402f3e30 FUN_1402f3e30 body=93 status=ok
// SIG undefined FUN_1402f3e30(void)

void FUN_1402f3e30(void)

{
  char cVar1;
  
  FUN_141df7500(&DAT_146aaaa20);
  DAT_146aaaa20 = &PTR_FUN_144e8a478;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (*(code *)DAT_146aaaa20[5])();
    atexit(_dynamic_atexit_destructor_for__GQuadMeshVertexBuffer__);
    return;
  }
  FUN_141edf270(&DAT_146aaaa20);
  atexit(_dynamic_atexit_destructor_for__GQuadMeshVertexBuffer__);
  return;
}



// FUNCTION 1402f3e90 FUN_1402f3e90 body=67 status=ok
// SIG undefined FUN_1402f3e90(void)

void FUN_1402f3e90(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1464c3810 + 0x28))();
    atexit(_dynamic_atexit_destructor_for__GVirtualTextureFeedback__);
    return;
  }
  FUN_141edf270(&PTR_PTR_1464c3810);
  atexit(_dynamic_atexit_destructor_for__GVirtualTextureFeedback__);
  return;
}



// FUNCTION 1402f3ef0 FUN_1402f3ef0 body=67 status=ok
// SIG undefined FUN_1402f3ef0(void)

void FUN_1402f3ef0(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1464c3750 + 0x28))();
    atexit(FUN_143e9cf00);
    return;
  }
  FUN_141edf270(&PTR_PTR_1464c3750);
  atexit(FUN_143e9cf00);
  return;
}



// FUNCTION 1402f3fc0 `dynamic_initializer_for_'VelocityPipeline'' body=78 status=ok
// SIG undefined `dynamic_initializer_for_'VelocityPipeline''(void)

void _dynamic_initializer_for__VelocityPipeline__(void)

{
  FUN_1419d7f20(&DAT_146aaa010,L"VelocityPipeline",&DAT_146aa9ad0,0,0,0,&DAT_146aa9ec0,1);
  atexit((_func_5014 *)&LAB_143e9cf60);
  return;
}



// FUNCTION 1402f4070 `dynamic_initializer_for_'ScriptStruct_Renderer_StaticRegisterNativesFLightPropagationVolumeSettings'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Renderer_StaticRegisterNativesFLightPropagationVolumeSettings''(void)

void _dynamic_initializer_for__ScriptStruct_Renderer_StaticRegisterNativesFLightPropagationVolumeSettings__
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
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144e8b910;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"LightPropagationVolumeSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402f40d0 FUN_1402f40d0 body=66 status=ok
// SIG undefined FUN_1402f40d0(void)

void FUN_1402f40d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightPropagationVolumeSettings",1);
  UObjectCompiledInDeferStruct
            (FLightPropagationVolumeSettings::StaticStruct,L"/Script/Renderer",*puVar1,0,0);
  return;
}



// FUNCTION 1402f4120 `dynamic_initializer_for_'ModuleRegistrantAnalytics'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantAnalytics''(void)

void _dynamic_initializer_for__ModuleRegistrantAnalytics__(void)

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
    plVar1[1] = (longlong)&DAT_146aaef28;
    plVar1[2] = (longlong)FUN_141e0e0b0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"Analytics",1);
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



// FUNCTION 1402f4220 `dynamic_initializer_for_'ModuleRegistrantEngineSettings'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantEngineSettings''(void)

void _dynamic_initializer_for__ModuleRegistrantEngineSettings__(void)

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
    plVar1[1] = (longlong)&DAT_146aaef29;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"EngineSettings",1);
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



// FUNCTION 1402f4400 `dynamic_initializer_for_'ScriptStruct_EngineSettings_StaticRegisterNativesFAutoCompleteCommand'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_EngineSettings_StaticRegisterNativesFAutoCompleteCommand''(void)

void _dynamic_initializer_for__ScriptStruct_EngineSettings_StaticRegisterNativesFAutoCompleteCommand__
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
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144e8e128;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AutoCompleteCommand",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402f4460 `dynamic_initializer_for_'ScriptStruct_EngineSettings_StaticRegisterNativesFGameModeName'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_EngineSettings_StaticRegisterNativesFGameModeName''(void)

void _dynamic_initializer_for__ScriptStruct_EngineSettings_StaticRegisterNativesFGameModeName__
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
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144e8e2f0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GameModeName",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402f44c0 FUN_1402f44c0 body=66 status=ok
// SIG undefined FUN_1402f44c0(void)

void FUN_1402f44c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EThreePlayerSplitScreenType",1);
  UObjectCompiledInDeferEnum
            (EThreePlayerSplitScreenType_StaticEnum,L"/Script/EngineSettings",*puVar1,0,0);
  return;
}



// FUNCTION 1402f4510 FUN_1402f4510 body=66 status=ok
// SIG undefined FUN_1402f4510(void)

void FUN_1402f4510(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ETwoPlayerSplitScreenType",1);
  UObjectCompiledInDeferEnum
            (ETwoPlayerSplitScreenType_StaticEnum,L"/Script/EngineSettings",*puVar1,0,0);
  return;
}



// FUNCTION 1402f4560 FUN_1402f4560 body=66 status=ok
// SIG undefined FUN_1402f4560(void)

void FUN_1402f4560(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AutoCompleteCommand",1);
  UObjectCompiledInDeferStruct
            (FAutoCompleteCommand::StaticStruct,L"/Script/EngineSettings",*puVar1,0,0);
  return;
}



// FUNCTION 1402f45b0 FUN_1402f45b0 body=66 status=ok
// SIG undefined FUN_1402f45b0(void)

void FUN_1402f45b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GameModeName",1);
  UObjectCompiledInDeferStruct(FGameModeName::StaticStruct,L"/Script/EngineSettings",*puVar1,0,0);
  return;
}



// FUNCTION 1402f4600 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UConsoleSettings'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UConsoleSettings''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UConsoleSettings__(void)

{
  UObjectCompiledInDefer
            (FUN_141e0fcd0,UConsoleSettings::GetPrivateStaticClass,L"UConsoleSettings",
             L"/Script/EngineSettings",0,0,0);
  return;
}



// FUNCTION 1402f4640 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameMapsSettings'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameMapsSettings''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UGameMapsSettings__(void)

{
  UObjectCompiledInDefer
            (FUN_141e0fd00,UGameMapsSettings::GetPrivateStaticClass,L"UGameMapsSettings",
             L"/Script/EngineSettings",0,0,0);
  return;
}



// FUNCTION 1402f4680 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameNetworkManagerSettings'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameNetworkManagerSettings''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UGameNetworkManagerSettings__(void)

{
  UObjectCompiledInDefer
            (FUN_141e0fd30,UGameNetworkManagerSettings::StaticClass,L"UGameNetworkManagerSettings",
             L"/Script/EngineSettings",0,0,0);
  return;
}



// FUNCTION 1402f46c0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameSessionSettings'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameSessionSettings''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UGameSessionSettings__(void)

{
  UObjectCompiledInDefer
            (FUN_141e0fd60,UGameSessionSettings::StaticClass,L"UGameSessionSettings",
             L"/Script/EngineSettings",0,0,0);
  return;
}



// FUNCTION 1402f4700 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGeneralEngineSettings'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGeneralEngineSettings''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UGeneralEngineSettings__(void)

{
  UObjectCompiledInDefer
            (FUN_141e0fd90,UGeneralEngineSettings::StaticClass,L"UGeneralEngineSettings",
             L"/Script/EngineSettings",0,0,0);
  return;
}



// FUNCTION 1402f4740 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGeneralProjectSettings'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGeneralProjectSettings''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UGeneralProjectSettings__(void)

{
  UObjectCompiledInDefer
            (FUN_141e0fdc0,UGeneralProjectSettings::GetPrivateStaticClass,L"UGeneralProjectSettings"
             ,L"/Script/EngineSettings",0,0,0);
  return;
}



// FUNCTION 1402f4780 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UHudSettings'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UHudSettings''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UHudSettings__(void)

{
  UObjectCompiledInDefer
            (FUN_141e0fdf0,UHudSettings::StaticClass,L"UHudSettings",L"/Script/EngineSettings",0,0,0
            );
  return;
}



// FUNCTION 1402f47c0 FUN_1402f47c0 body=277 status=ok
// SIG undefined FUN_1402f47c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f47c0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [32];
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar1[1] = (longlong)FUN_141e13800;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  _DAT_146aaf108 = &PTR_FUN_143f3ece8;
  DAT_146aaf110 = &local_18;
  _DAT_146aaf118 = 0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  puVar3 = (undefined8 *)
           (**(code **)(*DAT_1468b1f88 + 0x40))(DAT_1468b1f88,local_res8,DAT_146aaf110);
  _DAT_146aaf118 = *puVar3;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402f48c4;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402f48c4:
  atexit((_func_5014 *)&LAB_143e9cf70);
  return;
}



// FUNCTION 1402f4970 FUN_1402f4970 body=392 status=ok
// SIG undefined FUN_1402f4970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f4970(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_30 = 2;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_144e926f8;
    plVar3[1] = (longlong)FUN_141e14940;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144e92740;
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,
                     L"Enables or disables the HMD device. Use 1, True, or Yes to enable, 0, False or No to disable."
                     ,L"HeadMountedDisplay",L"CCommandText_EnableHMD");
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf1e8 =
       (**(code **)(*DAT_1468b1f88 + 0x68))(DAT_1468b1f88,L"vr.bEnableHMD",puVar7,&local_38,0);
  _DAT_146aaf1e0 = &PTR_FUN_143f3ecf0;
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
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_1402f4ae8;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_1402f4ae8:
  atexit(FUN_143e9cf90);
  return;
}



// FUNCTION 1402f4b00 FUN_1402f4b00 body=392 status=ok
// SIG undefined FUN_1402f4b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f4b00(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_30 = 2;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_144e926f8;
    plVar3[1] = (longlong)FUN_141e14f30;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144e92740;
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,
                     L"Enables or disables the stereo rendering. Use 1, True, or Yes to enable, 0, False or No to disable."
                     ,L"HeadMountedDisplay",L"CCommandText_EnableStereo");
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf1f8 =
       (**(code **)(*DAT_1468b1f88 + 0x68))(DAT_1468b1f88,L"vr.bEnableStereo",puVar7,&local_38,0);
  _DAT_146aaf1f0 = &PTR_FUN_143f3ecf0;
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
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_1402f4c78;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_1402f4c78:
  atexit(FUN_143e9cfe0);
  return;
}



// FUNCTION 1402f4c90 FUN_1402f4c90 body=392 status=ok
// SIG undefined FUN_1402f4c90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f4c90(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_30 = 2;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_144e926f8;
    plVar3[1] = (longlong)FUN_141e16740;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144e92740;
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,
                     L"Reset the rotation and position of the head mounted display.\nPass in an optional yaw for the new rotation in degrees."
                     ,L"HeadMountedDisplay",L"CVarText_HMDReset");
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf1c8 =
       (**(code **)(*DAT_1468b1f88 + 0x68))
                 (DAT_1468b1f88,L"vr.HeadTracking.Reset",puVar7,&local_38,0);
  _DAT_146aaf1c0 = &PTR_FUN_143f3ecf0;
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
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_1402f4e08;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_1402f4e08:
  atexit(FUN_143e9d030);
  return;
}



// FUNCTION 1402f4e20 FUN_1402f4e20 body=392 status=ok
// SIG undefined FUN_1402f4e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f4e20(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_30 = 2;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_144e926f8;
    plVar3[1] = (longlong)FUN_141e167b0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144e92740;
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,
                     L"Reset the rotation of the head mounted display.\nPass in an optional yaw for the new rotation in degrees ."
                     ,L"HeadMountedDisplay",L"CVarText_HMDResetOrientation");
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf1b8 =
       (**(code **)(*DAT_1468b1f88 + 0x68))
                 (DAT_1468b1f88,L"vr.HeadTracking.ResetOrientation",puVar7,&local_38,0);
  _DAT_146aaf1b0 = &PTR_FUN_143f3ecf0;
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
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_1402f4f98;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_1402f4f98:
  atexit(FUN_143e9d080);
  return;
}



// FUNCTION 1402f4fb0 FUN_1402f4fb0 body=392 status=ok
// SIG undefined FUN_1402f4fb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f4fb0(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_30 = 2;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_144e926f8;
    plVar3[1] = (longlong)&LAB_141e16820;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144e92740;
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Reset the position of the head mounted display.",
                     L"HeadMountedDisplay",L"CVarText_HMDResetPosition");
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf1a8 =
       (**(code **)(*DAT_1468b1f88 + 0x68))
                 (DAT_1468b1f88,L"vr.HeadTracking.ResetPosition",puVar7,&local_38,0);
  _DAT_146aaf1a0 = &PTR_FUN_143f3ecf0;
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
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_1402f5128;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_1402f5128:
  atexit(FUN_143e9d0d0);
  return;
}



// FUNCTION 1402f5140 FUN_1402f5140 body=392 status=ok
// SIG undefined FUN_1402f5140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f5140(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_30 = 2;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_144e926f8;
    plVar3[1] = (longlong)FUN_141e16850;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144e92740;
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Reports the current status of the head tracking.",
                     L"HeadMountedDisplay",L"CVarText_HMDStatus");
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf1d8 =
       (**(code **)(*DAT_1468b1f88 + 0x68))
                 (DAT_1468b1f88,L"vr.HeadTracking.Status",puVar7,&local_38,0);
  _DAT_146aaf1d0 = &PTR_FUN_143f3ecf0;
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
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_1402f52b8;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_1402f52b8:
  atexit(FUN_143e9d120);
  return;
}



// FUNCTION 1402f52d0 FUN_1402f52d0 body=392 status=ok
// SIG undefined FUN_1402f52d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f52d0(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_30 = 2;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_144e926f8;
    plVar3[1] = (longlong)FUN_141e16990;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144e92740;
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Prints version information for the current HMD device.",
                     L"HeadMountedDisplay",L"CCommandText_HMDVersion");
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf208 =
       (**(code **)(*DAT_1468b1f88 + 0x68))(DAT_1468b1f88,L"vr.HMDVersion",puVar7,&local_38,0);
  _DAT_146aaf200 = &PTR_FUN_143f3ecf0;
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
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_1402f5448;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_1402f5448:
  atexit(FUN_143e9d170);
  return;
}



// FUNCTION 1402f5460 FUN_1402f5460 body=392 status=ok
// SIG undefined FUN_1402f5460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f5460(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_30 = 2;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_144e926f8;
    plVar3[1] = (longlong)FUN_141e1a080;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144e92740;
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,
                     L"Changes the look of the spectator if supported by the HMD plugin.\n 0: disable mirroring\n 1: single eye\n 2: stereo pair\nNumbers larger than 2 may be possible and specify HMD plugin-specific variations.\nNegative values are treated the same as 0."
                     ,L"HeadMountedDisplay",L"CVarText_SpectatorScreenMode");
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf198 =
       (**(code **)(*DAT_1468b1f88 + 0x68))
                 (DAT_1468b1f88,L"vr.SpectatorScreenMode",puVar7,&local_38,0);
  _DAT_146aaf190 = &PTR_FUN_143f3ecf0;
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
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_1402f55d8;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_1402f55d8:
  atexit(FUN_143e9d1c0);
  return;
}



// FUNCTION 1402f55f0 FUN_1402f55f0 body=392 status=ok
// SIG undefined FUN_1402f55f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f55f0(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_30 = 2;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_144e926f8;
    plVar3[1] = (longlong)FUN_141e1a4f0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144e92740;
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,
                     L"Floor or 0 - tracking origin is at the floor, Eye or 1 - tracking origin is at the eye level."
                     ,L"HeadMountedDisplay",L"CCommandText_TrackingOrigin");
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf188 =
       (**(code **)(*DAT_1468b1f88 + 0x68))(DAT_1468b1f88,L"vr.TrackingOrigin",puVar7,&local_38,0);
  _DAT_146aaf180 = &PTR_FUN_143f3ecf0;
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
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_1402f5768;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_1402f5768:
  atexit(FUN_143e9d210);
  return;
}



// FUNCTION 1402f5780 `dynamic_initializer_for_'CVarEnableDevOverrides'' body=234 status=ok
// SIG undefined `dynamic_initializer_for_'CVarEnableDevOverrides''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarEnableDevOverrides__(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,
                     L"Enables or disables console commands that modify various developer-only settings."
                     ,L"HeadMountedDisplay",L"CVarText_EnableDevOverrides");
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf140 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"vr.Debug.bEnableDevOverrides",0,puVar7,0);
  _DAT_146aaf138 = &PTR_FUN_143f3ecf8;
  _DAT_146aaf148 = (**(code **)(*DAT_146aaf140 + 0x38))(DAT_146aaf140);
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
  atexit(FUN_143e9d260);
  return;
}



// FUNCTION 1402f5870 `dynamic_initializer_for_'CVarEnableMotionControllerLateUpdate'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarEnableMotionControllerLateUpdate''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `anonymous_namespace'::_dynamic_initializer_for__CVarEnableMotionControllerLateUpdate__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf280 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"vr.EnableMotionControllerLateUpdate",1,
                  L"This command allows you to specify whether the motion controller late update is applied.\n 0: don\'t use late update\n 1: use late update (default)"
                  ,1);
  _DAT_146aaf278 = &PTR_FUN_143f3ecf8;
  DAT_146aaf288 = (**(code **)(*DAT_146aaf280 + 0x38))(DAT_146aaf280);
  atexit(FUN_143e9d2b0);
  return;
}



// FUNCTION 1402f58f0 `dynamic_initializer_for_'CVarHiddenAreaMask'' body=237 status=ok
// SIG undefined `dynamic_initializer_for_'CVarHiddenAreaMask''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarHiddenAreaMask__(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Enable or disable hidden area mask\n0: disabled\n1: enabled",
                     L"HeadMountedDisplay",L"CVarText_HiddenAreaMask");
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf128 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"vr.HiddenAreaMask",1,puVar7,0x60);
  _DAT_146aaf120 = &PTR_FUN_143f3ecf8;
  _DAT_146aaf130 = (**(code **)(*DAT_146aaf128 + 0x38))(DAT_146aaf128);
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
  atexit(FUN_143e9d300);
  return;
}



// FUNCTION 1402f59e0 `dynamic_initializer_for_'CVarMixLayerPriorities'' body=234 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMixLayerPriorities''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMixLayerPriorities__(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,
                     L"By default, Face-Locked Stereo Layers are always rendered on top of any other layer position types.\nSet this to a non-zero value to disable this behavior (not supported on all platforms.)"
                     ,L"HeadMountedDisplay",L"CVarText_MixLayerPriorities");
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf158 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"vr.StereoLayers.bMixLayerPriorities",0,puVar7,0x20);
  _DAT_146aaf150 = &PTR_FUN_143f3ecf8;
  _DAT_146aaf160 = (**(code **)(*DAT_146aaf158 + 0x38))(DAT_146aaf158);
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
  atexit(FUN_143e9d350);
  return;
}



// FUNCTION 1402f5ad0 `dynamic_initializer_for_'CVarPixelDensity'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPixelDensity''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPixelDensity__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf170 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"vr.PixelDensity",0x3f800000,
                  L"Pixel density sets the VR render target texture size as a factor of recommended texture size.\nThe recommended texture size is the size that will result in no under sampling in most distorted area of the view when computing the final image to be displayed on the device by the runtime compositor.\nNote that the recommended texture size will likely be larger than the display panel resolution of the device as the texture is used as input data for the final composition/lens distortion pass provided by the device\'s runtime.\nA pixel density of 1.0 (default) will use the device\'s recommended texture size.\n"
                  ,0x40);
  _DAT_146aaf168 = &PTR_FUN_143f3ecf8;
  _DAT_146aaf178 = (**(code **)(*DAT_146aaf170 + 0x40))(DAT_146aaf170);
  atexit(FUN_143e9d3a0);
  return;
}



// FUNCTION 1402f5b50 FUN_1402f5b50 body=392 status=ok
// SIG undefined FUN_1402f5b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f5b50(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_30 = 2;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_144e926f8;
    plVar3[1] = (longlong)FUN_141e1a6f0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144e92740;
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Get or set the current world to meters scale.",L"HeadMountedDisplay"
                     ,L"CCommandText_WorldToMeters");
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf218 =
       (**(code **)(*DAT_1468b1f88 + 0x68))
                 (DAT_1468b1f88,L"vr.WorldToMetersScale",puVar7,&local_38,0);
  _DAT_146aaf210 = &PTR_FUN_143f3ecf0;
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
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_1402f5cc8;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_1402f5cc8:
  atexit(FUN_143e9d3f0);
  return;
}



// FUNCTION 1402f5ce0 FUN_1402f5ce0 body=39 status=ok
// SIG undefined FUN_1402f5ce0(void)

void FUN_1402f5ce0(void)

{
  FStaticSelfRegisteringExec::FStaticSelfRegisteringExec(&DAT_146aaf220,FUN_141e13a00);
  atexit((_func_5014 *)&LAB_143e9d440);
  return;
}



// FUNCTION 1402f5d10 FUN_1402f5d10 body=51 status=ok
// SIG undefined FUN_1402f5d10(void)

void FUN_1402f5d10(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146aaf250);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146aaf250,4000);
  atexit((_func_5014 *)&LAB_143e9d450);
  return;
}



// FUNCTION 1402f5e40 `dynamic_initializer_for_'LegacyHandMappings'' body=836 status=ok
// SIG undefined `dynamic_initializer_for_'LegacyHandMappings''(void)

void XRMotionControllerBase_Impl::_dynamic_initializer_for__LegacyHandMappings__(void)

{
  DAT_146aaf2d0 = DAT_146aaf2a8;
  FName::FName(&DAT_146aaf2d8,L"EControllerHand::Left",1);
  DAT_146aaf2e0 = DAT_146aaf2c0;
  FName::FName(&DAT_146aaf2e8,L"EControllerHand::Right",1);
  FName::FName(&DAT_146aaf2f0,L"AnyHand",1);
  FName::FName(&DAT_146aaf2f8,L"EControllerHand::AnyHand",1);
  FName::FName(&DAT_146aaf300,&DAT_144e8fc80,1);
  FName::FName(&DAT_146aaf308,L"EControllerHand::Pad",1);
  FName::FName(&DAT_146aaf310,L"ExternalCamera",1);
  FName::FName(&DAT_146aaf318,L"EControllerHand::ExternalCamera",1);
  FName::FName(&DAT_146aaf320,&DAT_144e8fcd8,1);
  FName::FName(&DAT_146aaf328,L"EControllerHand::Gun",1);
  FName::FName(&DAT_146aaf330,L"Special_1",1);
  FName::FName(&DAT_146aaf338,L"EControllerHand::Special_1",1);
  FName::FName(&DAT_146aaf340,L"Special_2",1);
  FName::FName(&DAT_146aaf348,L"EControllerHand::Special_2",1);
  FName::FName(&DAT_146aaf350,L"Special_3",1);
  FName::FName(&DAT_146aaf358,L"EControllerHand::Special_3",1);
  FName::FName(&DAT_146aaf360,L"Special_4",1);
  FName::FName(&DAT_146aaf368,L"EControllerHand::Special_4",1);
  FName::FName(&DAT_146aaf370,L"Special_5",1);
  FName::FName(&DAT_146aaf378,L"EControllerHand::Special_5",1);
  FName::FName(&DAT_146aaf380,L"Special_6",1);
  FName::FName(&DAT_146aaf388,L"EControllerHand::Special_6",1);
  FName::FName(&DAT_146aaf390,L"Special_7",1);
  FName::FName(&DAT_146aaf398,L"EControllerHand::Special_7",1);
  FName::FName(&DAT_146aaf3a0,L"Special_8",1);
  FName::FName(&DAT_146aaf3a8,L"EControllerHand::Special_8",1);
  FName::FName(&DAT_146aaf3b0,L"Special_9",1);
  FName::FName(&DAT_146aaf3b8,L"EControllerHand::Special_9",1);
  FName::FName(&DAT_146aaf3c0,L"Special_10",1);
  FName::FName(&DAT_146aaf3c8,L"EControllerHand::Special_10",1);
  FName::FName(&DAT_146aaf3d0,L"Special_11",1);
  FName::FName(&DAT_146aaf3d8,L"EControllerHand::Special_11",1);
  return;
}



// FUNCTION 1402f6190 `dynamic_initializer_for_'ModuleRegistrantHeadMountedDisplay'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantHeadMountedDisplay''(void)

void _dynamic_initializer_for__ModuleRegistrantHeadMountedDisplay__(void)

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
    plVar1[1] = (longlong)&DAT_146aaf0ec;
    plVar1[2] = (longlong)FUN_141e16ad0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"HeadMountedDisplay",1);
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



// FUNCTION 1402f6550 `dynamic_initializer_for_'ScriptStruct_HeadMountedDisplay_StaticRegisterNativesFXRDeviceId'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_HeadMountedDisplay_StaticRegisterNativesFXRDeviceId''(void)

void _dynamic_initializer_for__ScriptStruct_HeadMountedDisplay_StaticRegisterNativesFXRDeviceId__
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
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144e97ac0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"XRDeviceId",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402f65f0 FUN_1402f65f0 body=66 status=ok
// SIG undefined FUN_1402f65f0(void)

void FUN_1402f65f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EHMDTrackingOrigin",1);
  UObjectCompiledInDeferEnum
            (EHMDTrackingOrigin_StaticEnum,L"/Script/HeadMountedDisplay",*puVar1,0,0);
  return;
}



// FUNCTION 1402f6640 FUN_1402f6640 body=66 status=ok
// SIG undefined FUN_1402f6640(void)

void FUN_1402f6640(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EHMDWornState",1);
  UObjectCompiledInDeferEnum(EHMDWornState_StaticEnum,L"/Script/HeadMountedDisplay",*puVar1,0,0);
  return;
}



// FUNCTION 1402f6690 FUN_1402f6690 body=66 status=ok
// SIG undefined FUN_1402f6690(void)

void FUN_1402f6690(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EOrientPositionSelector",1);
  UObjectCompiledInDeferEnum
            (EOrientPositionSelector_StaticEnum,L"/Script/HeadMountedDisplay",*puVar1,0,0);
  return;
}



// FUNCTION 1402f66e0 FUN_1402f66e0 body=66 status=ok
// SIG undefined FUN_1402f66e0(void)

void FUN_1402f66e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESpectatorScreenMode",1);
  UObjectCompiledInDeferEnum
            (ESpectatorScreenMode_StaticEnum,L"/Script/HeadMountedDisplay",*puVar1,0,0);
  return;
}



// FUNCTION 1402f6730 FUN_1402f6730 body=66 status=ok
// SIG undefined FUN_1402f6730(void)

void FUN_1402f6730(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ETrackingStatus",1);
  UObjectCompiledInDeferEnum(ETrackingStatus_StaticEnum,L"/Script/HeadMountedDisplay",*puVar1,0,0);
  return;
}



// FUNCTION 1402f6780 FUN_1402f6780 body=66 status=ok
// SIG undefined FUN_1402f6780(void)

void FUN_1402f6780(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EXRTrackedDeviceType",1);
  UObjectCompiledInDeferEnum
            (EXRTrackedDeviceType_StaticEnum,L"/Script/HeadMountedDisplay",*puVar1,0,0);
  return;
}



// FUNCTION 1402f67d0 FUN_1402f67d0 body=66 status=ok
// SIG undefined FUN_1402f67d0(void)

void FUN_1402f67d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"XRDeviceId",1);
  UObjectCompiledInDeferStruct(FXRDeviceId::StaticStruct,L"/Script/HeadMountedDisplay",*puVar1,0,0);
  return;
}



// FUNCTION 1402f6820 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAsyncTask_LoadXRDeviceVisComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAsyncTask_LoadXRDeviceVisComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAsyncTask_LoadXRDeviceVisComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_141e1b260,UAsyncTask_LoadXRDeviceVisComponent::GetPrivateStaticClass,
             L"UAsyncTask_LoadXRDeviceVisComponent",L"/Script/HeadMountedDisplay",0,0,0);
  return;
}



// FUNCTION 1402f6860 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UHeadMountedDisplayFunctionLibrary'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UHeadMountedDisplayFunctionLibrary''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UHeadMountedDisplayFunctionLibrary__(void)

{
  UObjectCompiledInDefer
            (FUN_141e1b3f0,UHeadMountedDisplayFunctionLibrary::GetPrivateStaticClass,
             L"UHeadMountedDisplayFunctionLibrary",L"/Script/HeadMountedDisplay",0,0,0);
  return;
}



// FUNCTION 1402f68a0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UMotionControllerComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UMotionControllerComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UMotionControllerComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_141e1a800,AArchVisCharacter::StaticClass,L"UMotionControllerComponent",
             L"/Script/HeadMountedDisplay",0,0,0);
  return;
}



// FUNCTION 1402f68e0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UMotionTrackedDeviceFunctionLibrary'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UMotionTrackedDeviceFunctionLibrary''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UMotionTrackedDeviceFunctionLibrary__(void)

{
  UObjectCompiledInDefer
            (FUN_141e1ab30,UMotionTrackedDeviceFunctionLibrary::GetPrivateStaticClass,
             L"UMotionTrackedDeviceFunctionLibrary",L"/Script/HeadMountedDisplay",0,0,0);
  return;
}



// FUNCTION 1402f6920 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UVRNotificationsComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UVRNotificationsComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UVRNotificationsComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_141e1af80,FUN_141e1aed0,L"UVRNotificationsComponent",L"/Script/HeadMountedDisplay",
             0,0,0);
  return;
}



// FUNCTION 1402f6960 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UXRAssetFunctionLibrary'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UXRAssetFunctionLibrary''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UXRAssetFunctionLibrary__(void)

{
  UObjectCompiledInDefer
            (FUN_141e1b1d0,UXRAssetFunctionLibrary::GetPrivateStaticClass,L"UXRAssetFunctionLibrary"
             ,L"/Script/HeadMountedDisplay",0,0,0);
  return;
}



// FUNCTION 1402f69a0 FUN_1402f69a0 body=51 status=ok
// SIG undefined FUN_1402f69a0(void)

void FUN_1402f69a0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146aafbc0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146aafbc0,4000);
  atexit((_func_5014 *)&LAB_143e9d570);
  return;
}



// FUNCTION 1402f69f0 `dynamic_initializer_for_'CVarDelayAcquireBackBuffer'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDelayAcquireBackBuffer''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDelayAcquireBackBuffer__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafa50 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Vulkan.DelayAcquireBackBuffer",1,
                  L"Whether to delay acquiring the back buffer \n 0: acquire next image on frame start \n 1: acquire next image just before presenting, rendering is done to intermediate image which is then copied to a real backbuffer (default) \n 2: acquire next image on first use"
                  ,4);
  _DAT_146aafa48 = &PTR_FUN_143f3ecf8;
  DAT_146aafa58 = (**(code **)(*DAT_146aafa50 + 0x38))(DAT_146aafa50);
  atexit(FUN_143e9d5d0);
  return;
}



// FUNCTION 1402f6a70 `dynamic_initializer_for_'CVarVulkanProfileCmdBuffers'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVulkanProfileCmdBuffers''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVulkanProfileCmdBuffers__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf9c0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Vulkan.ProfileCmdBuffers",&DAT_146aaf89c,
                  L"Insert GPU timing queries in every cmd buffer\n",0);
  _DAT_146aaf9b8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9d620);
  return;
}



// FUNCTION 1402f6ae0 `dynamic_initializer_for_'CVarVulkanSubmitAfterEveryEndRenderPass'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVulkanSubmitAfterEveryEndRenderPass''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVulkanSubmitAfterEveryEndRenderPass__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf9e8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Vulkan.SubmitAfterEveryEndRenderPass",&DAT_146aaf890,
                  L"Forces a submit after every end render pass.\n 0: Don\'t(default)\n 1: Enable submitting"
                  ,0);
  _DAT_146aaf9e0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9d670);
  return;
}



// FUNCTION 1402f6b50 `dynamic_initializer_for_'CVarVulkanUseBufferBinning'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVulkanUseBufferBinning''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VulkanRHI::_dynamic_initializer_for__CVarVulkanUseBufferBinning__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafac8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Vulkan.UseBufferBinning",&DAT_146aaf894,
                  L"Enable binning sub-allocations within buffers to help reduce fragmentation at the expense of higher high watermark [read-only]\n"
                  ,4);
  _DAT_146aafac0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9d6c0);
  return;
}



// FUNCTION 1402f6bc0 `dynamic_initializer_for_'CVarVulkanUseSingleQueue'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVulkanUseSingleQueue''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVulkanUseSingleQueue__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf9b0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Vulkan.UseSingleQueue",&DAT_146aaf898,
                  L"Forces using the same queue for uploads and graphics.\n 0: Uses multiple queues(default)\n 1: Always uses the gfx queue for submissions"
                  ,0);
  _DAT_146aaf9a8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9d710);
  return;
}



// FUNCTION 1402f6c30 `dynamic_initializer_for_'GAllowPresentOnComputeQueue'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'GAllowPresentOnComputeQueue''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GAllowPresentOnComputeQueue__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafa20 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Vulkan.AllowPresentOnComputeQueue",0,
                  L"0 to present on the graphics queue1 to allow presenting on the compute queue if available"
                  ,0);
  _DAT_146aafa18 = &PTR_FUN_143f3ecf8;
  DAT_146aafa28 = (**(code **)(*DAT_146aafa20 + 0x38))(DAT_146aafa20);
  atexit(FUN_143e9d760);
  return;
}



// FUNCTION 1402f6ca0 `dynamic_initializer_for_'GCVarRobustBufferAccess'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'GCVarRobustBufferAccess''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GCVarRobustBufferAccess__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafa38 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Vulkan.RobustBufferAccess",1,
                  L"0 to disable robust buffer access1 to enable (default)",4);
  _DAT_146aafa30 = &PTR_FUN_143f3ecf8;
  DAT_146aafa40 = (**(code **)(*DAT_146aafa38 + 0x38))(DAT_146aafa38);
  atexit(FUN_143e9d7b0);
  return;
}



// FUNCTION 1402f6d20 `dynamic_initializer_for_'GCVarSubmitOnDispatch'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'GCVarSubmitOnDispatch''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GCVarSubmitOnDispatch__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf9d0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Vulkan.SubmitOnDispatch",0,
                  L"0 to not do anything special on dispatch(default)\n1 to submit the cmd buffer after each dispatch"
                  ,0x20);
  _DAT_146aaf9c8 = &PTR_FUN_143f3ecf8;
  DAT_146aaf9d8 = (**(code **)(*DAT_146aaf9d0 + 0x38))(DAT_146aaf9d0);
  atexit(FUN_143e9d800);
  return;
}



// FUNCTION 1402f6d90 `dynamic_initializer_for_'GCVarUniqueValidationMessages'' body=99 status=ok
// SIG undefined `dynamic_initializer_for_'GCVarUniqueValidationMessages''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GCVarUniqueValidationMessages__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aaf9f8 =
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Vulkan.UniqueValidationMessages",1,
                  L"Filter out validation errors with the same code (only when r.Vulkan.EnableValidation is non zero)"
                  ,0);
  _DAT_146aaf9f0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9d850);
  return;
}



// FUNCTION 1402f6e00 FUN_1402f6e00 body=51 status=ok
// SIG undefined FUN_1402f6e00(void)

void FUN_1402f6e00(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146aafa60);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146aafa60,4000);
  atexit((_func_5014 *)&LAB_143e9d8a0);
  return;
}



// FUNCTION 1402f6e40 FUN_1402f6e40 body=51 status=ok
// SIG undefined FUN_1402f6e40(void)

void FUN_1402f6e40(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146aafb48);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146aafb48,4000);
  atexit((_func_5014 *)&LAB_143e9d8b0);
  return;
}



// FUNCTION 1402f6e80 FUN_1402f6e80 body=51 status=ok
// SIG undefined FUN_1402f6e80(void)

void FUN_1402f6e80(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146aafb70);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146aafb70,4000);
  atexit((_func_5014 *)&LAB_143e9d8c0);
  return;
}



// FUNCTION 1402f6ec0 FUN_1402f6ec0 body=51 status=ok
// SIG undefined FUN_1402f6ec0(void)

void FUN_1402f6ec0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146aafaf8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146aafaf8,4000);
  atexit((_func_5014 *)&LAB_143e9d8d0);
  return;
}



// FUNCTION 1402f6f00 FUN_1402f6f00 body=51 status=ok
// SIG undefined FUN_1402f6f00(void)

void FUN_1402f6f00(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146aafad0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146aafad0,4000);
  atexit((_func_5014 *)&LAB_143e9d8e0);
  return;
}



// FUNCTION 1402f6f50 FUN_1402f6f50 body=51 status=ok
// SIG undefined FUN_1402f6f50(void)

void FUN_1402f6f50(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146aafa88);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146aafa88,4000);
  atexit((_func_5014 *)&LAB_143e9d920);
  return;
}



// FUNCTION 1402f6f90 `dynamic_initializer_for_'GRHIAllowAsyncComputeCvar'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'GRHIAllowAsyncComputeCvar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GRHIAllowAsyncComputeCvar__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafa08 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Vulkan.AllowAsyncCompute",0,
                  L"0 to disable async compute queue(if available)1 to allow async compute queue",0)
  ;
  _DAT_146aafa00 = &PTR_FUN_143f3ecf8;
  DAT_146aafa10 = (**(code **)(*DAT_146aafa08 + 0x38))(DAT_146aafa08);
  atexit(FUN_143e9d930);
  return;
}



// FUNCTION 1402f7000 FUN_1402f7000 body=51 status=ok
// SIG undefined FUN_1402f7000(void)

void FUN_1402f7000(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146aafb98);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146aafb98,4000);
  atexit((_func_5014 *)&LAB_143e9d980);
  return;
}



// FUNCTION 1402f7040 FUN_1402f7040 body=51 status=ok
// SIG undefined FUN_1402f7040(void)

void FUN_1402f7040(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146aafb20);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146aafb20,4000);
  atexit((_func_5014 *)&LAB_143e9d990);
  return;
}



// FUNCTION 1402f7080 `dynamic_initializer_for_'CVarCpuWaitForFence'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarCpuWaitForFence''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarCpuWaitForFence__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafe18 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Vulkan.CpuWaitForFence",&DAT_1464c9544,
                  L"Whether to have the Cpu wait for the fence in AcquireImageIndex",0x20);
  _DAT_146aafe10 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9d9a0);
  return;
}



// FUNCTION 1402f70f0 `dynamic_initializer_for_'CVarDSetCacheMaxPoolLookups'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDSetCacheMaxPoolLookups''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDSetCacheMaxPoolLookups__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafc20 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Vulkan.DSetCacheMaxPoolLookups",&DAT_1464c9560,
                  L"Maximum count of pool\'s caches to lookup before allocating new descriptor.\n",
                  0x24);
  _DAT_146aafc18 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9d9f0);
  return;
}



// FUNCTION 1402f7160 `dynamic_initializer_for_'CVarDSetCacheTargetSetsPerPool'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDSetCacheTargetSetsPerPool''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDSetCacheTargetSetsPerPool__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafc10 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Vulkan.DSetCacheTargetSetsPerPool",&DAT_1464c955c,
                  L"Target number of descriptor set allocations per single pool.\n",0x24);
  _DAT_146aafc08 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9da40);
  return;
}



// FUNCTION 1402f71d0 FUN_1402f71d0 body=100 status=ok
// SIG undefined FUN_1402f71d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f71d0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafe68 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Vulkan.GoogleAdjustSpeed",&DAT_1464c9558,
                  L"The google convergence speed (in micro seconds)",0x20);
  _DAT_146aafe60 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9da90);
  return;
}



// FUNCTION 1402f7240 FUN_1402f7240 body=100 status=ok
// SIG undefined FUN_1402f7240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f7240(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafe58 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Vulkan.GoogleTargetMargin",&DAT_1464c9554,
                  L"The target margin for the google display timing (microseconds)",0x20);
  _DAT_146aafe50 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9dae0);
  return;
}



// FUNCTION 1402f72b0 `dynamic_initializer_for_'CVarPipelineLRUCacheEvictBinaryPreloadScreen'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPipelineLRUCacheEvictBinaryPreloadScreen''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPipelineLRUCacheEvictBinaryPreloadScreen__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafc58 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Vulkan.PipelineLRUCacheEvictBinaryPreloadScreen",0,
                  L"1: Use a preload screen while loading preevicted PSOs ala r.Vulkan.PipelineLRUCacheEvictBinary"
                  ,0x20);
  _DAT_146aafc50 = &PTR_FUN_143f3ecf8;
  _DAT_146aafc60 = (**(code **)(*DAT_146aafc58 + 0x38))(DAT_146aafc58);
  atexit(FUN_143e9db30);
  return;
}



// FUNCTION 1402f7320 `dynamic_initializer_for_'CVarVulkanCPURHIFramePacer'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVulkanCPURHIFramePacer''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVulkanCPURHIFramePacer__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafe38 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Vulkan.CPURHIThreadFramePacer",&DAT_1464c954c,
                  L"Whether to enable the simple RHI thread CPU Framepacer for Vulkan",0x20);
  _DAT_146aafe30 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9db80);
  return;
}



// FUNCTION 1402f7390 `dynamic_initializer_for_'CVarVulkanCPURenderThreadFramePacer'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVulkanCPURenderThreadFramePacer''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVulkanCPURenderThreadFramePacer__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafe28 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Vulkan.CPURenderthreadFramePacer",&DAT_1464c9548,
                  L"Whether to enable the simple RHI thread CPU Framepacer for Vulkan",0x20);
  _DAT_146aafe20 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9dbd0);
  return;
}



// FUNCTION 1402f7400 `dynamic_initializer_for_'CVarVulkanExtensionFramePacer'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVulkanExtensionFramePacer''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVulkanExtensionFramePacer__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafe48 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Vulkan.ExtensionFramePacer",&DAT_1464c9550,
                  L"Whether to enable the google extension Framepacer for Vulkan (when available on device)"
                  ,0x20);
  _DAT_146aafe40 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9dc20);
  return;
}



// FUNCTION 1402f7470 `dynamic_initializer_for_'CVarVulkanIgnoreCPUReads'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVulkanIgnoreCPUReads''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVulkanIgnoreCPUReads__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafd00 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Vulkan.IgnoreCPUReads",&DAT_146aafc04,
                  L"Debugging utility for GPU->CPU reads.\n 0 will read from the GPU (default).\n 1 will read from GPU but fill the buffer instead of copying from a texture.\n 2 will NOT read from the GPU and fill with zeros.\n"
                  ,0);
  _DAT_146aafcf8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9dc70);
  return;
}



// FUNCTION 1402f74e0 `dynamic_initializer_for_'CVarVulkanSubmitOnCopyToResolve'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVulkanSubmitOnCopyToResolve''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVulkanSubmitOnCopyToResolve__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafcf0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Vulkan.SubmitOnCopyToResolve",&DAT_146aafc00,
                  L"Submits the Queue to the GPU on every RHICopyToResolveTarget call.\n 0: Do not submit (default)\n 1: Submit"
                  ,0);
  _DAT_146aafce8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9dcc0);
  return;
}



// FUNCTION 1402f7550 `dynamic_initializer_for_'CVarVulkanWaitForIdleOnSubmit'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVulkanWaitForIdleOnSubmit''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVulkanWaitForIdleOnSubmit__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafce0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Vulkan.WaitForIdleOnSubmit",&DAT_146aafbf8,
                  L"Waits for the GPU to be idle on every submit. Useful for tracking GPU hangs.\n 0: Do not wait(default)\n 1: Wait"
                  ,0);
  _DAT_146aafcd8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9dd10);
  return;
}



// FUNCTION 1402f75c0 FUN_1402f75c0 body=51 status=ok
// SIG undefined FUN_1402f75c0(void)

void FUN_1402f75c0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146aafc28);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146aafc28,4000);
  atexit((_func_5014 *)&LAB_143e9dd60);
  return;
}



// FUNCTION 1402f7600 FUN_1402f7600 body=115 status=ok
// SIG undefined FUN_1402f7600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f7600(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafcb0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Vulkan.AllowDescriptorWriteFix",1,&DAT_144e9cc44,0x20);
  _DAT_146aafca8 = &PTR_FUN_143f3ecf8;
  DAT_146aafcb8 = (**(code **)(*DAT_146aafcb0 + 0x38))(DAT_146aafcb0);
  atexit(FUN_143e9dd70);
  return;
}



// FUNCTION 1402f7680 `dynamic_initializer_for_'GDescriptorSetLayoutMode'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'GDescriptorSetLayoutMode''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GDescriptorSetLayoutMode__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafdd8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Vulkan.DescriptorSetLayoutMode",0,
                  L"0 to not change layouts (eg Set 0 = Vertex, 1 = Pixel, etc\n1 to use a new set for common Uniform Buffers\n2 to collapse all sets into Set 0\n"
                  ,0x24);
  _DAT_146aafdd0 = &PTR_FUN_143f3ecf8;
  DAT_146aafde0 = (**(code **)(*DAT_146aafdd8 + 0x38))(DAT_146aafdd8);
  atexit(FUN_143e9ddc0);
  return;
}



// FUNCTION 1402f76f0 `dynamic_initializer_for_'GDynamicGlobalUBs'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'GDynamicGlobalUBs''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GDynamicGlobalUBs__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafdc0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Vulkan.DynamicGlobalUBs",1,
                  L"2 to treat ALL uniform buffers as dynamic\n1 to treat global/packed uniform buffers as dynamic [default]\n0 to treat them as regular"
                  ,0x24);
  _DAT_146aafdb8 = &PTR_FUN_143f3ecf8;
  DAT_146aafdc8 = (**(code **)(*DAT_146aafdc0 + 0x38))(DAT_146aafdc0);
  atexit(FUN_143e9de10);
  return;
}



// FUNCTION 1402f7770 `dynamic_initializer_for_'GEnablePipelineCacheCompressionCvar'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'GEnablePipelineCacheCompressionCvar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GEnablePipelineCacheCompressionCvar__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafca0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Vulkan.PipelineCacheCompression",&DAT_1464c9540,
                  L"Enable/disable compression on the Vulkan pipeline cache disk file\n",0x20);
  _DAT_146aafc98 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9de60);
  return;
}



// FUNCTION 1402f77e0 `dynamic_initializer_for_'GEnablePipelineCacheLoadCvar'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'GEnablePipelineCacheLoadCvar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GEnablePipelineCacheLoadCvar__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafc70 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Vulkan.PipelineCacheLoad",1,
                  L"0 to disable loading the pipeline cache1 to enable using pipeline cache",0);
  _DAT_146aafc68 = &PTR_FUN_143f3ecf8;
  DAT_146aafc78 = (**(code **)(*DAT_146aafc70 + 0x38))(DAT_146aafc70);
  atexit(FUN_143e9deb0);
  return;
}



// FUNCTION 1402f7870 `dynamic_initializer_for_'GPipelineCacheFromShaderPipelineCacheCvar'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'GPipelineCacheFromShaderPipelineCacheCvar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GPipelineCacheFromShaderPipelineCacheCvar__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafc88 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Vulkan.PipelineCacheFromShaderPipelineCache",0,
                  L"0 look for a pipeline cache in the normal locations with the normal names.1 tie the vulkan pipeline cache to the shader pipeline cache, use the PSOFC guid as part of the filename, etc."
                  ,4);
  _DAT_146aafc80 = &PTR_FUN_143f3ecf8;
  _DAT_146aafc90 = (**(code **)(*DAT_146aafc88 + 0x38))(DAT_146aafc88);
  atexit(FUN_143e9df30);
  return;
}



// FUNCTION 1402f78f0 `dynamic_initializer_for_'GRHIThreadCvar'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'GRHIThreadCvar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GRHIThreadCvar__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafd78 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Vulkan.RHIThread",1,
                  L"0 to only use Render Thread\n1 to use ONE RHI Thread\n2 to use multiple RHI Thread\n"
                  ,0);
  _DAT_146aafd70 = &PTR_FUN_143f3ecf8;
  DAT_146aafd80 = (**(code **)(*DAT_146aafd78 + 0x38))(DAT_146aafd78);
  atexit(FUN_143e9dfb0);
  return;
}



// FUNCTION 1402f7970 FUN_1402f7970 body=51 status=ok
// SIG undefined FUN_1402f7970(void)

void FUN_1402f7970(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146aafde8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146aafde8,4000);
  atexit((_func_5014 *)&LAB_143e9e000);
  return;
}



// FUNCTION 1402f79b0 FUN_1402f79b0 body=51 status=ok
// SIG undefined FUN_1402f79b0(void)

void FUN_1402f79b0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146aafd08);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146aafd08,4000);
  atexit((_func_5014 *)&LAB_143e9e010);
  return;
}



// FUNCTION 1402f79f0 `dynamic_initializer_for_'GSubmitOcclusionBatchCmdBufferCVar'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'GSubmitOcclusionBatchCmdBufferCVar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GSubmitOcclusionBatchCmdBufferCVar__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146aafcc8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Vulkan.SubmitOcclusionBatchCmdBuffer",1,
                  L"1 to submit the cmd buffer after end occlusion query batch (default)",0x20);
  _DAT_146aafcc0 = &PTR_FUN_143f3ecf8;
  DAT_146aafcd0 = (**(code **)(*DAT_146aafcc8 + 0x38))(DAT_146aafcc8);
  atexit(FUN_143e9e020);
  return;
}



// FUNCTION 1402f7a70 FUN_1402f7a70 body=51 status=ok
// SIG undefined FUN_1402f7a70(void)

void FUN_1402f7a70(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146aafd90);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146aafd90,4000);
  atexit((_func_5014 *)&LAB_143e9e070);
  return;
}



// FUNCTION 1402f7ab0 `dynamic_initializer_for_'ModuleRegistrantVulkanRHI'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantVulkanRHI''(void)

void _dynamic_initializer_for__ModuleRegistrantVulkanRHI__(void)

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
    plVar1[1] = (longlong)&DAT_146aafd88;
    plVar1[2] = (longlong)FUN_141e49ca0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"VulkanRHI",1);
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



// FUNCTION 1402f7c10 FUN_1402f7c10 body=100 status=ok
// SIG undefined FUN_1402f7c10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f7c10(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab0410 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Vulkan.AllowUniformUpload",&DAT_146ab03c8,
                  L"Allow Uniform Buffer uploads outside of renderpasses\n 0: Disabled, buffers are always reallocated\n 1: Enabled, buffers are uploaded outside renderpasses"
                  ,0);
  _DAT_146ab0408 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9e0d0);
  return;
}



// FUNCTION 1402f7c80 `dynamic_initializer_for_'CVarVulkanSubmitOnTextureUnlock'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVulkanSubmitOnTextureUnlock''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVulkanSubmitOnTextureUnlock__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab03d8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Vulkan.SubmitOnTextureUnlock",&DAT_1464c9670,
                  L"Whether to submit upload cmd buffer on each texture unlock.\n 0: Do not submit\n 1: Submit (default)"
                  ,0);
  _DAT_146ab03d0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9e120);
  return;
}



// FUNCTION 1402f7cf0 FUN_1402f7cf0 body=44 status=ok
// SIG undefined FUN_1402f7cf0(void)

void FUN_1402f7cf0(void)

{
  undefined2 *puVar1;
  
  puVar1 = &DAT_143f3eda8;
  if (DAT_1464c9718 != 0) {
    puVar1 = DAT_1464c9710;
  }
  DAT_146ab03cc = FCrc::StrCrc32<wchar_t>(puVar1,0);
  return;
}



// FUNCTION 1402f7d20 `dynamic_initializer_for_'EventDeepString'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'EventDeepString''(void)

void _dynamic_initializer_for__EventDeepString__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464c9710,0);
  FGenericPlatformString::Memcpy(DAT_1464c9710,L"EventTooDeep",0x1a);
  atexit((_func_5014 *)&LAB_143e9e170);
  return;
}



// FUNCTION 1402f7d80 FUN_1402f7d80 body=51 status=ok
// SIG undefined FUN_1402f7d80(void)

void FUN_1402f7d80(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146ab03e0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146ab03e0,4000);
  atexit((_func_5014 *)&LAB_143e9e1c0);
  return;
}



// FUNCTION 1402f7dd0 `dynamic_initializer_for_'CVarAllowRGLHIThread'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAllowRGLHIThread''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAllowRGLHIThread__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab3620 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.OpenGL.AllowRHIThread",0,
                  L"Toggle experimental OpenGL RHI thread support.\n0: GL scene rendering operations are performed on the render thread. (default)\n1: GL scene rendering operations are queued onto the RHI thread gaining some parallelism with the render thread. (mobile feature levels only)"
                  ,0x24);
  _DAT_146ab3618 = &PTR_FUN_143f3ecf8;
  DAT_146ab3628 = (**(code **)(*DAT_146ab3620 + 0x38))(DAT_146ab3620);
  atexit(FUN_143e9e270);
  return;
}



// FUNCTION 1402f7e40 `dynamic_initializer_for_'CVarBindlessTexture'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarBindlessTexture''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OpenGLConsoleVariables::_dynamic_initializer_for__CVarBindlessTexture__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab35b0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"OpenGL.BindlessTexture",&DAT_146ab0540,
                  L"If true, use GL_ARB_bindless_texture over traditional glBindTexture/glBindSampler."
                  ,4);
  _DAT_146ab35a8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9e2c0);
  return;
}



// FUNCTION 1402f7eb0 `dynamic_initializer_for_'CVarMaxSubDataSize'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMaxSubDataSize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OpenGLConsoleVariables::_dynamic_initializer_for__CVarMaxSubDataSize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab35a0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"OpenGL.MaxSubDataSize",&DAT_1464c97d4,
                  L"Maximum amount of data to send to glBufferSubData in one call",4);
  _DAT_146ab3598 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9e310);
  return;
}



// FUNCTION 1402f7f20 `dynamic_initializer_for_'CVarOpenGLAddExtensions'' body=140 status=ok
// SIG undefined `dynamic_initializer_for_'CVarOpenGLAddExtensions''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarOpenGLAddExtensions__(void)

{
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab3d70 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"r.OpenGL.AddExtensions",local_18,
                  L"List of comma separated OpenGL extensions to add to a driver reported extensions string"
                  ,4);
  _DAT_146ab3d68 = &PTR_FUN_143f3ecf8;
  DAT_146ab3d78 = (**(code **)(*DAT_146ab3d70 + 0x48))(DAT_146ab3d70);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143e9e360);
  return;
}



// FUNCTION 1402f7fb0 `dynamic_initializer_for_'CVarOpenGLStripExtensions'' body=140 status=ok
// SIG undefined `dynamic_initializer_for_'CVarOpenGLStripExtensions''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarOpenGLStripExtensions__(void)

{
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab3d58 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"r.OpenGL.StripExtensions",local_18,
                  L"List of comma separated OpenGL extensions to strip from a driver reported extensions string"
                  ,4);
  _DAT_146ab3d50 = &PTR_FUN_143f3ecf8;
  DAT_146ab3d60 = (**(code **)(*DAT_146ab3d58 + 0x48))(DAT_146ab3d58);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143e9e3b0);
  return;
}



// FUNCTION 1402f8040 `dynamic_initializer_for_'CVarRebindTextureBuffers'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRebindTextureBuffers''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OpenGLConsoleVariables::_dynamic_initializer_for__CVarRebindTextureBuffers__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab35c0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"OpenGL.RebindTextureBuffers",&DAT_146ab0534,
                  L"If true, rebind GL_TEXTURE_BUFFER\'s to their GL_TEXTURE name whenever the buffer is modified."
                  ,0);
  _DAT_146ab35b8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9e400);
  return;
}



// FUNCTION 1402f80b0 `dynamic_initializer_for_'CVarSkipCompute'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSkipCompute''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OpenGLConsoleVariables::_dynamic_initializer_for__CVarSkipCompute__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab3580 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"OpenGL.SkipCompute",&DAT_146ab0530,
                  L"If true, don\'t issue dispatch work.",0);
  _DAT_146ab3578 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9e450);
  return;
}



// FUNCTION 1402f8120 `dynamic_initializer_for_'CVarUseBufferDiscard'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUseBufferDiscard''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OpenGLConsoleVariables::_dynamic_initializer_for__CVarUseBufferDiscard__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab35d0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"OpenGL.UseBufferDiscard",&DAT_1464c97d8,
                  L"If true, use dynamic buffer orphaning hint.",0);
  _DAT_146ab35c8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9e4a0);
  return;
}



// FUNCTION 1402f8190 `dynamic_initializer_for_'CVarUseEmulatedUBs'' body=96 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUseEmulatedUBs''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OpenGLConsoleVariables::_dynamic_initializer_for__CVarUseEmulatedUBs__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab3570 =
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"OpenGL.UseEmulatedUBs",0,
                  L"If true, enable using emulated uniform buffers on ES2 mode.",4);
  _DAT_146ab3568 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9e4f0);
  return;
}



// FUNCTION 1402f81f0 `dynamic_initializer_for_'CVarUseMapBuffer'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUseMapBuffer''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OpenGLConsoleVariables::_dynamic_initializer_for__CVarUseMapBuffer__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab3560 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"OpenGL.UseMapBuffer",&DAT_146ab053c,
                  L"If true, use glMapBuffer otherwise use glBufferSubdata.",0);
  _DAT_146ab3558 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9e540);
  return;
}



// FUNCTION 1402f8260 `dynamic_initializer_for_'CVarUseSeparateShaderObjects'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUseSeparateShaderObjects''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OpenGLConsoleVariables::_dynamic_initializer_for__CVarUseSeparateShaderObjects__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab35e0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"OpenGL.UseSeparateShaderObjects",0,
                  L"If set to 1, use OpenGL\'s separate shader objects to eliminate expensive program linking"
                  ,0x24);
  _DAT_146ab35d8 = &PTR_FUN_143f3ecf8;
  _DAT_146ab35e8 = (**(code **)(*DAT_146ab35e0 + 0x38))(DAT_146ab35e0);
  atexit(FUN_143e9e590);
  return;
}



// FUNCTION 1402f82d0 `dynamic_initializer_for_'CVarUseVAB'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUseVAB''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OpenGLConsoleVariables::_dynamic_initializer_for__CVarUseVAB__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab3590 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"OpenGL.UseVAB",&DAT_1464c97d0,
                  L"If true, use GL_VERTEX_ATTRIB_BINDING instead of traditional vertex array setup."
                  ,4);
  _DAT_146ab3588 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9e5e0);
  return;
}



// FUNCTION 1402f8510 CVarUseProgramBinaryCache'' body=112 status=ok
// SIG undefined CVarUseProgramBinaryCache''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FOpenGLProgramBinaryCache::CVarUseProgramBinaryCache__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab3e40 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.UseProgramBinaryCache",0,
                  L"If true, enables binary program cache",0x24);
  _DAT_146ab3e38 = &PTR_FUN_143f3ecf8;
  _DAT_146ab3e48 = (**(code **)(*DAT_146ab3e40 + 0x38))(DAT_146ab3e40);
  atexit(FUN_143e9e690);
  return;
}



// FUNCTION 1402f8590 `dynamic_initializer_for_'CVarUseGlClipControlIfAvailable'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUseGlClipControlIfAvailable''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OpenGLConsoleVariables::_dynamic_initializer_for__CVarUseGlClipControlIfAvailable__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab3e20 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"OpenGL.UseGlClipControlIfAvailable",&DAT_1464c97f0,
                  L"If true, the engine trys to use glClipControl if the driver supports it.",0x24);
  _DAT_146ab3e18 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9e710);
  return;
}



// FUNCTION 1402f8620 `dynamic_initializer_for_'ModuleRegistrantOpenGLDrv'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantOpenGLDrv''(void)

void _dynamic_initializer_for__ModuleRegistrantOpenGLDrv__(void)

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
    plVar1[1] = (longlong)&DAT_146ab3e10;
    plVar1[2] = (longlong)FUN_141e9d7c0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"OpenGLDrv",1);
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



// FUNCTION 1402f8750 `dynamic_initializer_for_'CVarSyncInterval'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSyncInterval''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RHIOpenGLConsoleVariables::_dynamic_initializer_for__CVarSyncInterval__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6228 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"RHI.SyncIntervalOgl",&DAT_1464c9b04,
                  L"When synchronizing with OpenGL, specifies the interval at which to refresh.",0);
  _DAT_146ab6220 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9ea50);
  return;
}



// FUNCTION 1402f87c0 `dynamic_initializer_for_'CVarUBODirectWrite'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUBODirectWrite''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OpenGLConsoleVariables::_dynamic_initializer_for__CVarUBODirectWrite__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab4b00 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"OpenGL.UBODirectWrite",&DAT_1464c9b0c,
                  L"Enables direct writes to the UBO via Buffer Storage",4);
  _DAT_146ab4af8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9eaa0);
  return;
}



// FUNCTION 1402f8830 `dynamic_initializer_for_'CVarUBOPoolSize'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUBOPoolSize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OpenGLConsoleVariables::_dynamic_initializer_for__CVarUBOPoolSize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab4af0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"OpenGL.UBOPoolSize",&DAT_1464c9b08,
                  L"Size of the UBO pool, 0 disables UBO Pool",4);
  _DAT_146ab4ae8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9eaf0);
  return;
}



// FUNCTION 1402f88a0 `dynamic_initializer_for_'CVarUseStagingBuffer'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUseStagingBuffer''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OpenGLConsoleVariables::_dynamic_initializer_for__CVarUseStagingBuffer__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6208 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"OpenGL.UseStagingBuffer",&DAT_1464c9b00,
                  L"Enables maps of dynamic vertex buffers to go to a staging buffer",4);
  _DAT_146ab6200 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9eb40);
  return;
}



// FUNCTION 1402f8910 FUN_1402f8910 body=51 status=ok
// SIG undefined FUN_1402f8910(void)

void FUN_1402f8910(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b40);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146ab4b40,4000);
  atexit((_func_5014 *)&LAB_143e9eb90);
  return;
}



// FUNCTION 1402f8950 FUN_1402f8950 body=51 status=ok
// SIG undefined FUN_1402f8950(void)

void FUN_1402f8950(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b18);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146ab4b18,4000);
  atexit((_func_5014 *)&LAB_143e9eba0);
  return;
}



// FUNCTION 1402f8a20 CVarDumpTransitionsForResource'' body=139 status=ok
// SIG undefined CVarDumpTransitionsForResource''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDumpTransitionsHelper::CVarDumpTransitionsForResource__(void)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ac35b8 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"r.DumpTransitionsForResource",local_18,
                  L"Prints callstack when the given resource is transitioned. Only implemented for DX11 at the moment.Name of the resource to dump"
                  ,0);
  _DAT_146ac35b0 = &PTR_FUN_143f3ecf8;
  DAT_146ac35c0 = (**(code **)(*DAT_146ac35b8 + 0x48))(DAT_146ac35b8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143e9ed40);
  return;
}



// FUNCTION 1402f8ab0 FUN_1402f8ab0 body=277 status=ok
// SIG undefined FUN_1402f8ab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f8ab0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [32];
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar1[1] = (longlong)FDumpTransitionsHelper::DumpTransitionForResourceHandler;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  _DAT_146ac3910 = &PTR_FUN_143f3ece8;
  DAT_146ac3918 = &local_18;
  _DAT_146ac3920 = 0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  puVar3 = (undefined8 *)
           (**(code **)(*DAT_1468b1f88 + 0x40))(DAT_1468b1f88,local_res8,DAT_146ac3918);
  _DAT_146ac3920 = *puVar3;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402f8bb4;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402f8bb4:
  atexit((_func_5014 *)&LAB_143e9ed90);
  return;
}



// FUNCTION 1402f8be0 FUN_1402f8be0 body=33 status=ok
// SIG undefined FUN_1402f8be0(void)

void FUN_1402f8be0(void)

{
  InitializeSRWLock((PSRWLOCK)&DAT_146ab66c8);
  atexit((_func_5014 *)&DAT_143e9ee00);
  return;
}



// FUNCTION 1402f8c40 ResourceTransitionAccessStrings'' body=394 status=ok
// SIG undefined ResourceTransitionAccessStrings''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FResourceTransitionUtility::ResourceTransitionAccessStrings__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464c9d60,0);
  FGenericPlatformString::Memcpy(DAT_1464c9d60,L"EReadable",0x14);
  _DAT_1464c9d78 = 10;
  DAT_1464c9d70 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464c9d70,0);
  FGenericPlatformString::Memcpy(DAT_1464c9d70,L"EWritable",0x14);
  DAT_1464c9d80 = 0;
  _DAT_1464c9d88 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464c9d80,0);
  FGenericPlatformString::Memcpy(DAT_1464c9d80,L"ERWBarrier",0x16);
  DAT_1464c9d90 = 0;
  _DAT_1464c9d98 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464c9d90,0);
  FGenericPlatformString::Memcpy(DAT_1464c9d90,L"ERWNoBarrier",0x1a);
  DAT_1464c9da0 = 0;
  _DAT_1464c9da8 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464c9da0,0);
  FGenericPlatformString::Memcpy(DAT_1464c9da0,L"ERWSubResBarrier",0x22);
  DAT_1464c9db0 = 0;
  _DAT_1464c9db8 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464c9db0,0);
  FGenericPlatformString::Memcpy(DAT_1464c9db0,L"EMetaData",0x14);
  DAT_1464c9dc0 = 0;
  _DAT_1464c9dc8 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464c9dc0,0);
  FGenericPlatformString::Memcpy(DAT_1464c9dc0,L"EMaxAccess",0x16);
  atexit(`dynamic_atexit_destructor_for_'FResourceTransitionUtility::
         ResourceTransitionAccessStrings__);
  return;
}



// FUNCTION 1402f8de0 FUN_1402f8de0 body=74 status=ok
// SIG undefined FUN_1402f8de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f8de0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1464ca0e8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1464ca0e8,4000);
  DAT_1464ca120 = 1;
  DAT_1464ca110 = 0;
  _DAT_1464ca118 = 0;
  atexit(`dynamic_atexit_destructor_for_'FRHIFrameFlipTrackingRunnable::Singleton__);
  return;
}



// FUNCTION 1402f8e30 Singleton'' body=84 status=ok
// SIG undefined Singleton''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FRHIFrameOffsetThread::Singleton__(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1464ca138);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1464ca138,4000);
  DAT_1464ca178 = 1;
  _DAT_1464ca160 = 0;
  DAT_1464ca180 = 0;
  _DAT_1464ca168 = 0;
  DAT_1464ca170 = 0;
  atexit(`dynamic_atexit_destructor_for_'FRHIFrameOffsetThread::Singleton__);
  return;
}



// FUNCTION 1402f8ec0 FUN_1402f8ec0 body=51 status=ok
// SIG undefined FUN_1402f8ec0(void)

void FUN_1402f8ec0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146ab63b0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146ab63b0,4000);
  atexit((_func_5014 *)&LAB_143e9f060);
  return;
}



// FUNCTION 1402f8f00 FUN_1402f8f00 body=269 status=ok
// SIG undefined FUN_1402f8f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f8f00(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_1444d51e8;
    plVar1[1] = (longlong)&LAB_141ebda20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab65c8 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"GpuProfile.DiscardQueries",
                  L"Discards all outstanding gpu timing queries at the beginning of the next frame",
                  &local_18,0);
  _DAT_146ab65c0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402f8ffc;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402f8ffc:
  atexit(FUN_143e9f070);
  return;
}



// FUNCTION 1402f9010 FUN_1402f9010 body=269 status=ok
// SIG undefined FUN_1402f9010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f9010(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_1444d51e8;
    plVar1[1] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6638 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"ToggleIdealCaptureOptions",
                  L"Toggles ideal options for gpu/cpu captures",&local_18,0);
  _DAT_146ab6630 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402f910c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402f910c:
  atexit(FUN_143e9f0c0);
  return;
}



// FUNCTION 1402f9120 `dynamic_initializer_for_'CPrio_FParallelTranslateCommandList'' body=65 status=ok
// SIG undefined `dynamic_initializer_for_'CPrio_FParallelTranslateCommandList''(void)

void _dynamic_initializer_for__CPrio_FParallelTranslateCommandList__(void)

{
  FUN_141eb92c0(&DAT_146ac3308,L"TaskGraph.TaskPriorities.ParallelTranslateCommandList",
                L"Task and thread priority for FParallelTranslateCommandList.",0,0,0xffffffff);
  atexit(FUN_143e9f110);
  return;
}



// FUNCTION 1402f9170 `dynamic_initializer_for_'CPrio_FParallelTranslateCommandListPrepass'' body=65 status=ok
// SIG undefined `dynamic_initializer_for_'CPrio_FParallelTranslateCommandListPrepass''(void)

void _dynamic_initializer_for__CPrio_FParallelTranslateCommandListPrepass__(void)

{
  FUN_141eb92c0(&DAT_146ac3338,L"TaskGraph.TaskPriorities.ParallelTranslateCommandListPrepass",
                L"Task and thread priority for FParallelTranslateCommandList for the prepass, which we would like to get to the GPU asap."
                ,0,0x200,0xffffffff);
  atexit(FUN_143e9f170);
  return;
}



// FUNCTION 1402f91c0 FUN_1402f91c0 body=68 status=ok
// SIG undefined FUN_1402f91c0(void)

void FUN_1402f91c0(void)

{
  FUN_141eb92c0(&DAT_146ac3368,L"TaskGraph.TaskPriorities.ParallelTranslateSetupCommandList",
                L"Task and thread priority for FParallelTranslateSetupCommandList.",0x800,0x200,
                0x200);
  atexit(FUN_143e9f1d0);
  return;
}



// FUNCTION 1402f9210 FUN_1402f9210 body=351 status=ok
// SIG undefined FUN_1402f9210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f9210(void)

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
    plVar1[1] = (longlong)&DAT_146ac32d8;
    plVar1[2] = (longlong)FUN_141591020;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ac32e0 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"TaskGraph.TaskPriorities.RHIThreadOnTaskThreads",
                  L"Task and thread priority for when we are running \'RHI thread\' tasks on any thread."
                  ,&local_18,0);
  _DAT_146ac32d8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402f930f;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402f930f:
  DAT_146ac32e8 = 0;
  _DAT_146ac32f0 = 0x30;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146ac32e8,0);
  FGenericPlatformString::Memcpy
            (DAT_146ac32e8,L"TaskGraph.TaskPriorities.RHIThreadOnTaskThreads",0x60);
  _DAT_146ac32f8 = 0;
  DAT_146ac3300 = 0xffffffff;
  atexit(FUN_143e9f230);
  return;
}



// FUNCTION 1402f9370 `dynamic_initializer_for_'CPrio_SceneRenderingTask'' body=65 status=ok
// SIG undefined `dynamic_initializer_for_'CPrio_SceneRenderingTask''(void)

void _dynamic_initializer_for__CPrio_SceneRenderingTask__(void)

{
  FUN_141eb92c0(&DAT_146ac32a8,L"TaskGraph.TaskPriorities.SceneRenderingTask",
                L"Task and thread priority for various scene rendering tasks.",0,0x200,0xffffffff);
  atexit(FUN_143e9f290);
  return;
}



// FUNCTION 1402f93c0 `dynamic_initializer_for_'CVarDisableEngineAndAppRegistration'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDisableEngineAndAppRegistration''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDisableEngineAndAppRegistration__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6828 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DisableEngineAndAppRegistration",0,
                  L"If true, disables engine and app registration, to disable GPU driver optimizations during debugging and development\nChanges will only take effect in new game/editor instances - can\'t be changed at runtime.\n"
                  ,0);
  _DAT_146ab6820 = &PTR_FUN_143f3ecf8;
  _DAT_146ab6830 = (**(code **)(*DAT_146ab6828 + 0x38))(DAT_146ab6828);
  atexit(FUN_143e9f2f0);
  return;
}



// FUNCTION 1402f9430 FUN_1402f9430 body=115 status=ok
// SIG undefined FUN_1402f9430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f9430(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6e58 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.EnableAsyncCompute",1,
                  L"0: Don\'t use async compute even if GSupportsEfficientAsyncCompute is true \n1: Use async compute if GSupportsEfficientAsyncCompute is true"
                  ,0);
  _DAT_146ab6e50 = &PTR_FUN_143f3ecf8;
  _DAT_146ab6e60 = (**(code **)(*DAT_146ab6e58 + 0x38))(DAT_146ab6e58);
  atexit(FUN_143e9f340);
  return;
}



// FUNCTION 1402f94b0 `dynamic_initializer_for_'CVarGPUCrashDataCollectionEnable'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGPUCrashDataCollectionEnable''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGPUCrashDataCollectionEnable__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6580 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.gpucrash.collectionenable",1,
                  L"Stores GPU crash data from scoped events when a applicable crash debugging system is available."
                  ,0x20);
  _DAT_146ab6578 = &PTR_FUN_143f3ecf8;
  _DAT_146ab6588 = (**(code **)(*DAT_146ab6580 + 0x38))(DAT_146ab6580);
  atexit(FUN_143e9f390);
  return;
}



// FUNCTION 1402f9530 `dynamic_initializer_for_'CVarGPUCrashDataDepth'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGPUCrashDataDepth''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGPUCrashDataDepth__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6598 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.gpucrash.datadepth",0xffffffff,
                  L"Limits the amount of marker scope depth we record for GPU crash debugging to the given scope depth."
                  ,0x20);
  _DAT_146ab6590 = &PTR_FUN_143f3ecf8;
  _DAT_146ab65a0 = (**(code **)(*DAT_146ab6598 + 0x38))(DAT_146ab6598);
  atexit(FUN_143e9f3e0);
  return;
}



// FUNCTION 1402f95b0 `dynamic_initializer_for_'CVarGPUCrashDebugging'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGPUCrashDebugging''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGPUCrashDebugging__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6ad8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.GPUCrashDebugging",0,
                  L"Enable vendor specific GPU crash analysis tools",4);
  _DAT_146ab6ad0 = &PTR_FUN_143f3ecf8;
  _DAT_146ab6ae0 = (**(code **)(*DAT_146ab6ad8 + 0x38))(DAT_146ab6ad8);
  atexit(FUN_143e9f430);
  return;
}



// FUNCTION 1402f9620 `dynamic_initializer_for_'CVarGPUDefragAllowOverlappedMoves'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGPUDefragAllowOverlappedMoves''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGPUDefragAllowOverlappedMoves__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab64b8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.GPUDefrag.AllowOverlappedMoves",&DAT_1464c9c08,
                  L"Allows defrag relocations that partially overlap themselves.\n",0);
  _DAT_146ab64b0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9f480);
  return;
}



// FUNCTION 1402f9690 `dynamic_initializer_for_'CVarGPUDefragEnableTimeLimits'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGPUDefragEnableTimeLimits''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGPUDefragEnableTimeLimits__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6498 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.GPUDefrag.EnableTimeLimits",&DAT_1464c9c00,
                  L"Limits CPU time spent doing GPU defragmentation.\n",0);
  _DAT_146ab6490 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9f4d0);
  return;
}



// FUNCTION 1402f9700 `dynamic_initializer_for_'CVarGPUDefragMaxRelocations'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGPUDefragMaxRelocations''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGPUDefragMaxRelocations__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab64a8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.GPUDefrag.MaxRelocations",&DAT_1464c9c04,
                  L"Limits the number of total relocations in a frame regardless of number of bytes moved..\n"
                  ,0);
  _DAT_146ab64a0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9f520);
  return;
}



// FUNCTION 1402f9770 FUN_1402f9770 body=115 status=ok
// SIG undefined FUN_1402f9770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f9770(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab65d8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.GpuProfile.AutomaticallyToggleIdealCaptureOptions",1,
                  L"1: When an external profiler connects and requests a CPU or GPU capture, ideal capture options are enabled automatically\n2: On platforms that don\'t support detecting when a profiler attaches, Ideal Capture Options are enabled at startup and never disabled. Same as 1 for platforms that support the detection"
                  ,0);
  _DAT_146ab65d0 = &PTR_FUN_143f3ecf8;
  DAT_146ab65e0 = (**(code **)(*DAT_146ab65d8 + 0x38))(DAT_146ab65d8);
  atexit(FUN_143e9f570);
  return;
}



// FUNCTION 1402f97f0 FUN_1402f97f0 body=115 status=ok
// SIG undefined FUN_1402f97f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f97f0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6608 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.GpuProfile.IdealCaptureOptionsToggleDrawEvents",1,
                  L"1: When ideal capture options are toggled, GEmitDrawEvents is set to true",0);
  _DAT_146ab6600 = &PTR_FUN_143f3ecf8;
  DAT_146ab6610 = (**(code **)(*DAT_146ab6608 + 0x38))(DAT_146ab6608);
  atexit(FUN_143e9f5c0);
  return;
}



// FUNCTION 1402f9870 FUN_1402f9870 body=112 status=ok
// SIG undefined FUN_1402f9870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f9870(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab65f0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.GpuProfile.IdealCaptureOptionsToggleMaterialDrawEvents",0,
                  L"1: When ideal capture options are toggled, GShowMaterialDrawEventTypes is set to true"
                  ,0);
  _DAT_146ab65e8 = &PTR_FUN_143f3ecf8;
  _DAT_146ab65f8 = (**(code **)(*DAT_146ab65f0 + 0x38))(DAT_146ab65f0);
  atexit(FUN_143e9f610);
  return;
}



// FUNCTION 1402f98e0 FUN_1402f98e0 body=115 status=ok
// SIG undefined FUN_1402f98e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f98e0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6620 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.GpuProfile.IdealCaptureOptionsToggleNamedEvents",1,
                  L"1: When ideal capture options are toggled, GCycleStatsShouldEmitNamedEvents is set to INT_MAX (or the value of r.StatNamedEventsMaxStack if set to > 0)"
                  ,0);
  _DAT_146ab6618 = &PTR_FUN_143f3ecf8;
  DAT_146ab6628 = (**(code **)(*DAT_146ab6620 + 0x38))(DAT_146ab6620);
  atexit(FUN_143e9f660);
  return;
}



// FUNCTION 1402f9960 FUN_1402f9960 body=112 status=ok
// SIG undefined FUN_1402f9960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f9960(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6900 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.GraphicsMode",0,L"0 = Graphics Mode1 = Performance Mode",4);
  _DAT_146ab68f8 = &PTR_FUN_143f3ecf8;
  _DAT_146ab6908 = (**(code **)(*DAT_146ab6900 + 0x38))(DAT_146ab6900);
  atexit(FUN_143e9f6b0);
  return;
}



// FUNCTION 1402f99d0 FUN_1402f99d0 body=115 status=ok
// SIG undefined FUN_1402f99d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f99d0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab68b8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.GraphicsMode.ResX",0xf00,&DAT_144ed3fcc,4);
  _DAT_146ab68b0 = &PTR_FUN_143f3ecf8;
  _DAT_146ab68c0 = (**(code **)(*DAT_146ab68b8 + 0x38))(DAT_146ab68b8);
  atexit(FUN_143e9f700);
  return;
}



// FUNCTION 1402f9a50 FUN_1402f9a50 body=115 status=ok
// SIG undefined FUN_1402f9a50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f9a50(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab68d0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.GraphicsMode.ResY",0x870,&DAT_144ed403c,4);
  _DAT_146ab68c8 = &PTR_FUN_143f3ecf8;
  _DAT_146ab68d8 = (**(code **)(*DAT_146ab68d0 + 0x38))(DAT_146ab68d0);
  atexit(FUN_143e9f750);
  return;
}



// FUNCTION 1402f9ad0 FUN_1402f9ad0 body=117 status=ok
// SIG undefined FUN_1402f9ad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f9ad0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab68e8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.GraphicsMode.ScreenPercentage",0x42a6aa7f,&DAT_144ed408c,4);
  _DAT_146ab68e0 = &PTR_FUN_143f3ecf8;
  _DAT_146ab68f0 = (**(code **)(*DAT_146ab68e8 + 0x40))(DAT_146ab68e8);
  atexit(FUN_143e9f7a0);
  return;
}



// FUNCTION 1402f9b50 FUN_1402f9b50 body=112 status=ok
// SIG undefined FUN_1402f9b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f9b50(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6858 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.HardwareUpscaleAllowed",0,L"Enables Hardware upscale",4);
  _DAT_146ab6850 = &PTR_FUN_143f3ecf8;
  _DAT_146ab6860 = (**(code **)(*DAT_146ab6858 + 0x38))(DAT_146ab6858);
  atexit(FUN_143e9f7f0);
  return;
}



// FUNCTION 1402f9bc0 FUN_1402f9bc0 body=112 status=ok
// SIG undefined FUN_1402f9bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f9bc0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ac38f8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.IsNextGenPlus",0,L"If we\'re on a next gen console or not",4);
  _DAT_146ac38f0 = &PTR_FUN_143f3ecf8;
  _DAT_146ac3900 = (**(code **)(*DAT_146ac38f8 + 0x38))(DAT_146ac38f8);
  atexit(FUN_143e9f840);
  return;
}



// FUNCTION 1402f9c30 `dynamic_initializer_for_'CVarPSOEvictionTime'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPSOEvictionTime''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPSOEvictionTime__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab66f0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.pso.evictiontime",0x3c,
                  L"Time between checks to remove stale objects from the cache. 0 = no eviction (which may eventually OOM...)"
                  ,0x24);
  _DAT_146ab66e8 = &PTR_FUN_143f3ecf8;
  DAT_146ab66f8 = (**(code **)(*DAT_146ab66f0 + 0x38))(DAT_146ab66f0);
  atexit(FUN_143e9f890);
  return;
}



// FUNCTION 1402f9cb0 `dynamic_initializer_for_'CVarPSOFileCacheEnabled'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPSOFileCacheEnabled''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPSOFileCacheEnabled__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6648 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.Enabled",0,
                  L"1 Enables the PipelineFileCache, 0 disables it.",0x20);
  _DAT_146ab6640 = &PTR_FUN_143f3ecf8;
  DAT_146ab6650 = (**(code **)(*DAT_146ab6648 + 0x38))(DAT_146ab6648);
  atexit(FUN_143e9f8e0);
  return;
}



// FUNCTION 1402f9d20 FUN_1402f9d20 body=115 status=ok
// SIG undefined FUN_1402f9d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f9d20(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab66b8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.GameVersionInvalidatesCache",1,
                  L"0: never invalidated. 1: invalidated at runtime for non-stable pipelinecaches. 2: always invalidated"
                  ,0x20);
  _DAT_146ab66b0 = &PTR_FUN_143f3ecf8;
  DAT_146ab66c0 = (**(code **)(*DAT_146ab66b8 + 0x38))(DAT_146ab66b8);
  atexit(FUN_143e9f930);
  return;
}



// FUNCTION 1402f9da0 `dynamic_initializer_for_'CVarPSOFileCacheLogPSO'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPSOFileCacheLogPSO''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPSOFileCacheLogPSO__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6660 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.LogPSO",0,
                  L"1 Logs new PSO entries into the file cache and allow saving, 0 uses existing PSO file cache in readonly mode (if enabled)."
                  ,0x20);
  _DAT_146ab6658 = &PTR_FUN_143f3ecf8;
  DAT_146ab6668 = (**(code **)(*DAT_146ab6660 + 0x38))(DAT_146ab6660);
  atexit(FUN_143e9f980);
  return;
}



// FUNCTION 1402f9e10 `dynamic_initializer_for_'CVarPSOFileCachePrintNewPSODescriptors'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPSOFileCachePrintNewPSODescriptors''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPSOFileCachePrintNewPSODescriptors__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6690 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.PrintNewPSODescriptors",&DAT_146ab6394,
                  L"1 prints descriptions for all new PSO entries to the log/console while 0 does not. Defaults to 0 in *Shipping* builds, otherwise 1."
                  ,0);
  _DAT_146ab6688 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e9f9d0);
  return;
}



// FUNCTION 1402f9e80 `dynamic_initializer_for_'CVarPSOFileCacheReportPSO'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPSOFileCacheReportPSO''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPSOFileCacheReportPSO__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6678 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.ReportPSO",0,
                  L"1 reports new PSO entries via a delegate, but does not record or modify any cache file."
                  ,0x20);
  _DAT_146ab6670 = &PTR_FUN_143f3ecf8;
  DAT_146ab6680 = (**(code **)(*DAT_146ab6678 + 0x38))(DAT_146ab6678);
  atexit(FUN_143e9fa20);
  return;
}



// FUNCTION 1402f9ef0 `dynamic_initializer_for_'CVarPSOFileCacheSaveUserCache'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPSOFileCacheSaveUserCache''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPSOFileCacheSaveUserCache__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab66a0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.SaveUserCache",0,
                  L"If > 0 then any missed PSOs will be saved to a writable user cache file for subsequent runs to load and avoid in-game hitches. Enabled by default on macOS only."
                  ,0x20);
  _DAT_146ab6698 = &PTR_FUN_143f3ecf8;
  DAT_146ab66a8 = (**(code **)(*DAT_146ab66a0 + 0x38))(DAT_146ab66a0);
  atexit(FUN_143e9fa70);
  return;
}



// FUNCTION 1402f9f60 FUN_1402f9f60 body=115 status=ok
// SIG undefined FUN_1402f9f60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f9f60(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6870 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.PerformanceMode.ResX",0x780,&DAT_144ed3e34,4);
  _DAT_146ab6868 = &PTR_FUN_143f3ecf8;
  _DAT_146ab6878 = (**(code **)(*DAT_146ab6870 + 0x38))(DAT_146ab6870);
  atexit(FUN_143e9fac0);
  return;
}



// FUNCTION 1402f9fe0 FUN_1402f9fe0 body=115 status=ok
// SIG undefined FUN_1402f9fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f9fe0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6888 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.PerformanceMode.ResY",0x438,&DAT_144ed3f0c,4);
  _DAT_146ab6880 = &PTR_FUN_143f3ecf8;
  _DAT_146ab6890 = (**(code **)(*DAT_146ab6888 + 0x38))(DAT_146ab6888);
  atexit(FUN_143e9fb10);
  return;
}



// FUNCTION 1402fa060 FUN_1402fa060 body=117 status=ok
// SIG undefined FUN_1402fa060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402fa060(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab68a0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.PerformanceMode.ScreenPercentage",0x42c80000,&DAT_144ed3f54,4);
  _DAT_146ab6898 = &PTR_FUN_143f3ecf8;
  _DAT_146ab68a8 = (**(code **)(*DAT_146ab68a0 + 0x40))(DAT_146ab68a0);
  atexit(FUN_143e9fb60);
  return;
}



// FUNCTION 1402fa0e0 `dynamic_initializer_for_'CVarRHICmdAsyncRHIThreadDispatch'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdAsyncRHIThreadDispatch''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdAsyncRHIThreadDispatch__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6d80 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdAsyncRHIThreadDispatch",1,
                  L"Experiemental option to do RHI dispatches async. This keeps data flowing to the RHI thread faster and avoid a block at the end of the frame."
                  ,0);
  _DAT_146ab6d78 = &PTR_FUN_143f3ecf8;
  DAT_146ab6d88 = (**(code **)(*DAT_146ab6d80 + 0x38))(DAT_146ab6d80);
  atexit(FUN_143e9fbb0);
  return;
}



// FUNCTION 1402fa160 `dynamic_initializer_for_'CVarRHICmdBalanceTranslatesAfterTasks'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdBalanceTranslatesAfterTasks''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdBalanceTranslatesAfterTasks__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6de0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdBalanceTranslatesAfterTasks",0,
                  L"Experimental option to balance the parallel translates after the render tasks are complete. This minimizes the number of deferred contexts, but adds latency to starting the translates. r.RHICmdBalanceParallelLists overrides and disables this option"
                  ,0);
  _DAT_146ab6dd8 = &PTR_FUN_143f3ecf8;
  DAT_146ab6de8 = (**(code **)(*DAT_146ab6de0 + 0x38))(DAT_146ab6de0);
  atexit(FUN_143e9fc00);
  return;
}



// FUNCTION 1402fa1d0 `dynamic_initializer_for_'CVarRHICmdBufferWriteLocks'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdBufferWriteLocks''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdBufferWriteLocks__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6d68 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdBufferWriteLocks",1,
                  L"Only relevant with an RHI thread. Debugging option to diagnose problems with buffered locks."
                  ,0);
  _DAT_146ab6d60 = &PTR_FUN_143f3ecf8;
  DAT_146ab6d70 = (**(code **)(*DAT_146ab6d68 + 0x38))(DAT_146ab6d68);
  atexit(FUN_143e9fc50);
  return;
}



// FUNCTION 1402fa250 `dynamic_initializer_for_'CVarRHICmdBypass'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdBypass''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdBypass__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6c90 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdBypass",0,
                  L"Whether to bypass the rhi command list and send the rhi commands immediately.\n0: Disable (required for the multithreaded renderer)\n1: Enable (convenient for debugging low level graphics API calls, can suppress artifacts from multithreaded renderer code)"
                  ,0);
  _DAT_146ab6c88 = &PTR_FUN_143f3ecf8;
  _DAT_146ab6c98 = (**(code **)(*DAT_146ab6c90 + 0x38))(DAT_146ab6c90);
  atexit(FUN_143e9fca0);
  return;
}



// FUNCTION 1402fa2c0 `dynamic_initializer_for_'CVarRHICmdCollectRHIThreadStatsFromHighLevel'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdCollectRHIThreadStatsFromHighLevel''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdCollectRHIThreadStatsFromHighLevel__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6d98 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdCollectRHIThreadStatsFromHighLevel",1,
                  L"This pushes stats on the RHI thread executes so you can determine which high level pass they came from. This has an adverse effect on framerate. This is on by default."
                  ,0);
  _DAT_146ab6d90 = &PTR_FUN_143f3ecf8;
  _DAT_146ab6da0 = (**(code **)(*DAT_146ab6d98 + 0x38))(DAT_146ab6d98);
  atexit(FUN_143e9fcf0);
  return;
}



// FUNCTION 1402fa340 `dynamic_initializer_for_'CVarRHICmdFlushOnQueueParallelSubmit'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdFlushOnQueueParallelSubmit''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdFlushOnQueueParallelSubmit__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6d38 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdFlushOnQueueParallelSubmit",0,
                  L"Wait for completion of parallel commandlists immediately after submitting. For issue diagnosis. Only available on some RHIs."
                  ,0);
  _DAT_146ab6d30 = &PTR_FUN_143f3ecf8;
  _DAT_146ab6d40 = (**(code **)(*DAT_146ab6d38 + 0x38))(DAT_146ab6d38);
  atexit(FUN_143e9fd40);
  return;
}



// FUNCTION 1402fa3b0 `dynamic_initializer_for_'CVarRHICmdFlushRenderThreadTasks'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdFlushRenderThreadTasks''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdFlushRenderThreadTasks__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6d08 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdFlushRenderThreadTasks",0,
                  L"If true, then we flush the render thread tasks every pass. For issue diagnosis. This is a master switch for more granular cvars."
                  ,0);
  _DAT_146ab6d00 = &PTR_FUN_143f3ecf8;
  DAT_146ab6d10 = (**(code **)(*DAT_146ab6d08 + 0x38))(DAT_146ab6d08);
  atexit(FUN_143e9fd90);
  return;
}



// FUNCTION 1402fa420 `dynamic_initializer_for_'CVarRHICmdFlushUpdateTextureReference'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdFlushUpdateTextureReference''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdFlushUpdateTextureReference__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6d20 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdFlushUpdateTextureReference",0,
                  L"If true, then we flush the rhi thread when we do RHIUpdateTextureReference, otherwise this is deferred. For issue diagnosis."
                  ,0);
  _DAT_146ab6d18 = &PTR_FUN_143f3ecf8;
  DAT_146ab6d28 = (**(code **)(*DAT_146ab6d20 + 0x38))(DAT_146ab6d20);
  atexit(FUN_143e9fde0);
  return;
}



// FUNCTION 1402fa490 `dynamic_initializer_for_'CVarRHICmdForceRHIFlush'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdForceRHIFlush''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdForceRHIFlush__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6dc8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdForceRHIFlush",0,
                  L"Force a flush for every task sent to the RHI thread. For issue diagnosis.",0);
  _DAT_146ab6dc0 = &PTR_FUN_143f3ecf8;
  DAT_146ab6dd0 = (**(code **)(*DAT_146ab6dc8 + 0x38))(DAT_146ab6dc8);
  atexit(FUN_143e9fe30);
  return;
}



// FUNCTION 1402fa500 `dynamic_initializer_for_'CVarRHICmdMergeSmallDeferredContexts'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdMergeSmallDeferredContexts''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdMergeSmallDeferredContexts__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6d50 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdMergeSmallDeferredContexts",1,
                  L"When it can be determined, merge small parallel translate tasks based on r.RHICmdMinDrawsPerParallelCmdList."
                  ,0);
  _DAT_146ab6d48 = &PTR_FUN_143f3ecf8;
  DAT_146ab6d58 = (**(code **)(*DAT_146ab6d50 + 0x38))(DAT_146ab6d50);
  atexit(FUN_143e9fe80);
  return;
}



// FUNCTION 1402fa580 `dynamic_initializer_for_'CVarRHICmdMinCmdlistForParallelTranslate'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdMinCmdlistForParallelTranslate''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdMinCmdlistForParallelTranslate__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6df8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdMinCmdlistForParallelTranslate",2,
                  L"If there are fewer than this number of parallel translates, they just run on the RHI thread and immediate context. Only relevant if r.RHICmdBalanceTranslatesAfterTasks is on."
                  ,0);
  _DAT_146ab6df0 = &PTR_FUN_143f3ecf8;
  DAT_146ab6e00 = (**(code **)(*DAT_146ab6df8 + 0x38))(DAT_146ab6df8);
  atexit(FUN_143e9fed0);
  return;
}



// FUNCTION 1402fa600 `dynamic_initializer_for_'CVarRHICmdMinCmdlistSizeForParallelTranslate'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdMinCmdlistSizeForParallelTranslate''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdMinCmdlistSizeForParallelTranslate__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6e10 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdMinCmdlistSizeForParallelTranslate",0x20,
                  L"In kilobytes. Cmdlists are merged into one parallel translate until we have at least this much memory to process. For a given pass, we won\'t do more translates than we have task threads. Only relevant if r.RHICmdBalanceTranslatesAfterTasks is on."
                  ,0);
  _DAT_146ab6e08 = &PTR_FUN_143f3ecf8;
  DAT_146ab6e18 = (**(code **)(*DAT_146ab6e10 + 0x38))(DAT_146ab6e10);
  atexit(FUN_143e9ff20);
  return;
}



// FUNCTION 1402fa680 `dynamic_initializer_for_'CVarRHICmdUseDeferredContexts'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdUseDeferredContexts''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdUseDeferredContexts__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6cf0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdUseDeferredContexts",1,
                  L"True to use deferred contexts to parallelize command list execution. Only available on some RHIs."
                  ,0);
  _DAT_146ab6ce8 = &PTR_FUN_143f3ecf8;
  DAT_146ab6cf8 = (**(code **)(*DAT_146ab6cf0 + 0x38))(DAT_146ab6cf0);
  atexit(FUN_143e9ff70);
  return;
}



// FUNCTION 1402fa700 `dynamic_initializer_for_'CVarRHICmdUseParallelAlgorithms'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdUseParallelAlgorithms''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdUseParallelAlgorithms__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6cc0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdUseParallelAlgorithms",1,
                  L"True to use parallel algorithms. Ignored if r.RHICmdBypass is 1.",0);
  _DAT_146ab6cb8 = &PTR_FUN_143f3ecf8;
  _DAT_146ab6cc8 = (**(code **)(*DAT_146ab6cc0 + 0x38))(DAT_146ab6cc0);
  atexit(FUN_143e9ffc0);
  return;
}



// FUNCTION 1402fa780 `dynamic_initializer_for_'CVarRHICmdUseThread'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdUseThread''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdUseThread__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6db0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdUseThread",1,L"Uses the RHI thread. For issue diagnosis.",
                  0);
  _DAT_146ab6da8 = &PTR_FUN_143f3ecf8;
  DAT_146ab6db8 = (**(code **)(*DAT_146ab6db0 + 0x38))(DAT_146ab6db0);
  atexit(FUN_143ea0010);
  return;
}



// FUNCTION 1402fa800 `dynamic_initializer_for_'CVarRHICmdWidth'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdWidth''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdWidth__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6cd8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdWidth",8,
                  L"Controls the task granularity of a great number of things in the parallel renderer."
                  ,0);
  _DAT_146ab6cd0 = &PTR_FUN_143f3ecf8;
  DAT_146ab6ce0 = (**(code **)(*DAT_146ab6cd8 + 0x38))(DAT_146ab6cd8);
  atexit(FUN_143ea0060);
  return;
}



// FUNCTION 1402fa880 FUN_1402fa880 body=117 status=ok
// SIG undefined FUN_1402fa880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402fa880(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6918 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.RHIDeletionLatencyFrames",0x41200000,&DAT_144ed42ac,0);
  _DAT_146ab6910 = &PTR_FUN_143f3ecf8;
  DAT_146ab6920 = (**(code **)(*DAT_146ab6918 + 0x40))(DAT_146ab6918);
  atexit(FUN_143ea00b0);
  return;
}



// FUNCTION 1402fa900 FUN_1402fa900 body=112 status=ok
// SIG undefined FUN_1402fa900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402fa900(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6e40 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHILogBeginEndScopes",0,&DAT_144ed1074,0);
  _DAT_146ab6e38 = &PTR_FUN_143f3ecf8;
  _DAT_146ab6e48 = (**(code **)(*DAT_146ab6e40 + 0x38))(DAT_146ab6e40);
  atexit(FUN_143ea0100);
  return;
}



// FUNCTION 1402fa970 `dynamic_initializer_for_'CVarRHIPresentThresholdBottom'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHIPresentThresholdBottom''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHIPresentThresholdBottom__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ac3960 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"rhi.PresentThreshold.Bottom",0,
                  L"Specifies the percentage of the screen from the bottom where tearing is allowed.\nOnly effective on supported platforms.\nRange: 0.0 - 1.0\n"
                  ,0);
  _DAT_146ac3958 = &PTR_FUN_143f3ecf8;
  _DAT_146ac3968 = (**(code **)(*DAT_146ac3960 + 0x40))(DAT_146ac3960);
  atexit(FUN_143ea0150);
  return;
}



// FUNCTION 1402fa9e0 `dynamic_initializer_for_'CVarRHIPresentThresholdTop'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHIPresentThresholdTop''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHIPresentThresholdTop__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ac3948 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"rhi.PresentThreshold.Top",0,
                  L"Specifies the percentage of the screen from the top where tearing is allowed.\nOnly effective on supported platforms.\nRange: 0.0 - 1.0\n"
                  ,0);
  _DAT_146ac3940 = &PTR_FUN_143f3ecf8;
  _DAT_146ac3950 = (**(code **)(*DAT_146ac3948 + 0x40))(DAT_146ac3948);
  atexit(FUN_143ea01a0);
  return;
}



// FUNCTION 1402faa50 `dynamic_initializer_for_'CVarRHIRenderPassValidation'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHIRenderPassValidation''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHIRenderPassValidation__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6ca8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RenderPass.Validation",0,&DAT_144ed0f9c,0);
  _DAT_146ab6ca0 = &PTR_FUN_143f3ecf8;
  _DAT_146ab6cb0 = (**(code **)(*DAT_146ab6ca8 + 0x38))(DAT_146ab6ca8);
  atexit(FUN_143ea01f0);
  return;
}



// FUNCTION 1402faac0 `dynamic_initializer_for_'CVarRHISyncAllowEarlyKick'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHISyncAllowEarlyKick''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHISyncAllowEarlyKick__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ac3978 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"rhi.SyncAllowEarlyKick",1,
                  L"When 1, allows the RHI vsync thread to kick off the next frame early if we\'ve missed the vsync."
                  ,0);
  _DAT_146ac3970 = &PTR_FUN_143f3ecf8;
  DAT_146ac3980 = (**(code **)(*DAT_146ac3978 + 0x38))(DAT_146ac3978);
  atexit(FUN_143ea0240);
  return;
}



// FUNCTION 1402fab40 `dynamic_initializer_for_'CVarRHISyncInterval'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHISyncInterval''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHISyncInterval__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ac3930 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"rhi.SyncInterval",1,
                  L"Determines the frequency of VSyncs in supported RHIs.  0 - Unlocked\n  1 - 60 Hz (16.66 ms)\n  2 - 30 Hz (33.33 ms)\n  3 - 20 Hz (50.00 ms)\n"
                  ,0);
  _DAT_146ac3928 = &PTR_FUN_143f3ecf8;
  DAT_146ac3938 = (**(code **)(*DAT_146ac3930 + 0x38))(DAT_146ac3930);
  atexit(FUN_143ea0290);
  return;
}



// FUNCTION 1402fabc0 `dynamic_initializer_for_'CVarRHISyncSlackMS'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHISyncSlackMS''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHISyncSlackMS__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ac3990 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"rhi.SyncSlackMS",0x41200000,
                  L"Increases input latency by this many milliseconds, to help performance (trade-off tunable). Gamethread will be kicked off this many milliseconds before the vsync"
                  ,0);
  _DAT_146ac3988 = &PTR_FUN_143f3ecf8;
  DAT_146ac3998 = (**(code **)(*DAT_146ac3990 + 0x40))(DAT_146ac3990);
  atexit(FUN_143ea02e0);
  return;
}



// FUNCTION 1402fac40 FUN_1402fac40 body=112 status=ok
// SIG undefined FUN_1402fac40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402fac40(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6e28 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHIUseGpuTimersForExecutionBatches",0,L"1: use, 0: don\'t use",0
                 );
  _DAT_146ab6e20 = &PTR_FUN_143f3ecf8;
  DAT_146ab6e30 = (**(code **)(*DAT_146ab6e28 + 0x38))(DAT_146ab6e28);
  atexit(FUN_143ea0330);
  return;
}



// FUNCTION 1402facb0 FUN_1402facb0 body=115 status=ok
// SIG undefined FUN_1402facb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402facb0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6840 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.AllowTessellation",1,
                  L"Enables tessllation on platforms that support it (requires engine restart)",0x24
                 );
  _DAT_146ab6838 = &PTR_FUN_143f3ecf8;
  DAT_146ab6848 = (**(code **)(*DAT_146ab6840 + 0x38))(DAT_146ab6840);
  atexit(FUN_143ea0380);
  return;
}



// FUNCTION 1402fad30 `dynamic_initializer_for_'CVarUseVulkanRealUBs'' body=99 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUseVulkanRealUBs''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarUseVulkanRealUBs__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6818 =
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Vulkan.UseRealUBs",1,
                  L"0: Emulate uniform buffers on Vulkan SM4/SM5 [default]\n1: Use real uniform buffers"
                  ,4);
  _DAT_146ab6810 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea03d0);
  return;
}



// FUNCTION 1402fada0 `dynamic_initializer_for_'CVarWarnOfBadDrivers'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarWarnOfBadDrivers''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarWarnOfBadDrivers__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab63e0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.WarnOfBadDrivers",1,
                  L"On engine startup we can check the current GPU driver and warn the user about issues and suggest a specific version\nThe test is fast so this should not cost any performance.\n 0: off\n 1: a message on startup might appear (default)\n 2: Simulating the system has a blacklisted NVIDIA driver (UI should appear)\n 3: Simulating the system has a blacklisted AMD driver (UI should appear)\n 4: Simulating the system has a not blacklisted AMD driver (no UI should appear)\n 5: Simulating the system has a Intel driver (no UI should appear)"
                  ,0x20);
  _DAT_146ab63d8 = &PTR_FUN_143f3ecf8;
  DAT_146ab63e8 = (**(code **)(*DAT_146ab63e0 + 0x38))(DAT_146ab63e0);
  atexit(FUN_143ea0420);
  return;
}



// FUNCTION 1402fae30 FUN_1402fae30 body=269 status=ok
// SIG undefined FUN_1402fae30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402fae30(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar1[1] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6708 =
       (**(code **)(*DAT_1468b1f88 + 0x88))
                 (DAT_1468b1f88,L"r.DumpPipelineCache",L"Dump current cache stats.",&local_18,0);
  _DAT_146ab6700 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402faf2c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402faf2c:
  atexit(FUN_143ea0470);
  return;
}



// FUNCTION 1402faf40 `dynamic_initializer_for_'FeatureLevelNames'' body=108 status=ok
// SIG undefined `dynamic_initializer_for_'FeatureLevelNames''(void)

void _dynamic_initializer_for__FeatureLevelNames__(void)

{
  FName::FName(&DAT_146ab6b38,&DAT_144ed6228,1);
  FName::FName(&DAT_146ab6b40,L"ES3_1",1);
  FName::FName(&DAT_146ab6b48,&DAT_144ed6240,1);
  FName::FName(&DAT_146ab6b50,&DAT_144ed6248,1);
  return;
}



// FUNCTION 1402fafd0 FUN_1402fafd0 body=266 status=ok
// SIG undefined FUN_1402fafd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402fafd0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143fca720;
    plVar1[1] = (longlong)FUN_141ebcd60;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143fca768;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab63f8 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"r.RHISetGPUCaptureOptions",
                  L"Utility function to change multiple CVARs useful when profiling or debugging GPU rendering. Setting to 1 or 0 will guarantee all options are in the appropriate state.\nr.rhithread.enable, r.rhicmdbypass, r.showmaterialdrawevents, toggledrawevents\nPlatform RHI\'s may implement more feature toggles."
                  ,&local_18,0);
  _DAT_146ab63f0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402fb0c9;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402fb0c9:
  atexit(FUN_143ea04c0);
  return;
}



// FUNCTION 1402fb100 `dynamic_initializer_for_'GCVarAsyncPipelineCompile'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'GCVarAsyncPipelineCompile''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GCVarAsyncPipelineCompile__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab66d8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.AsyncPipelineCompile",1,
                  L"0 to Create PSOs at the moment they are requested\n1 to Create Pipeline State Objects asynchronously(default)"
                  ,0x24);
  _DAT_146ab66d0 = &PTR_FUN_143f3ecf8;
  DAT_146ab66e0 = (**(code **)(*DAT_146ab66d8 + 0x38))(DAT_146ab66d8);
  atexit(FUN_143ea0570);
  return;
}



// FUNCTION 1402fb180 `dynamic_initializer_for_'GCVarRHIRenderPass'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'GCVarRHIRenderPass''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GCVarRHIRenderPass__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6ac0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"r.RHIRenderPasses",0,&DAT_144ed58bc,0);
  _DAT_146ab6ab8 = &PTR_FUN_143f3ecf8;
  _DAT_146ab6ac8 = (**(code **)(*DAT_146ab6ac0 + 0x38))(DAT_146ab6ac0);
  atexit(FUN_143ea05c0);
  return;
}



// FUNCTION 1402fb1f0 `dynamic_initializer_for_'GComputePipelineCache'' body=177 status=ok
// SIG undefined `dynamic_initializer_for_'GComputePipelineCache''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GComputePipelineCache__(void)

{
  InitializeSRWLock((PSRWLOCK)&DAT_146ab6710);
  _DAT_146ab6758 = 0xffffffff;
  DAT_146ab6718 = &DAT_146ab6728;
  _DAT_146ab67a8 = 0xffffffff;
  _DAT_146ab6720 = &DAT_146ab6778;
  _DAT_146ab6728 = 0;
  _DAT_146ab6730 = 0;
  _DAT_146ab6748 = 0;
  _DAT_146ab6750 = 0;
  _DAT_146ab675c = 0;
  DAT_146ab6768 = 0;
  _DAT_146ab6770 = 0;
  _DAT_146ab6778 = 0;
  _DAT_146ab6780 = 0;
  _DAT_146ab6798 = 0;
  _DAT_146ab67a0 = 0;
  _DAT_146ab67ac = 0;
  DAT_146ab67b8 = 0;
  _DAT_146ab67c0 = 0;
  atexit(_dynamic_atexit_destructor_for__GComputePipelineCache__);
  return;
}



// FUNCTION 1402fb2c0 `dynamic_initializer_for_'GGPUHitchThresholdCVar'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'GGPUHitchThresholdCVar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GGPUHitchThresholdCVar__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6aa8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"RHI.GPUHitchThreshold",0x42c80000,
                  L"Threshold for detecting hitches on the GPU (in milliseconds).",0);
  _DAT_146ab6aa0 = &PTR_FUN_143f3ecf8;
  DAT_146ab6ab0 = (**(code **)(*DAT_146ab6aa8 + 0x40))(DAT_146ab6aa8);
  atexit(FUN_143ea0680);
  return;
}



// FUNCTION 1402fb350 `dynamic_initializer_for_'GGraphicsPipelineCache'' body=113 status=ok
// SIG undefined `dynamic_initializer_for_'GGraphicsPipelineCache''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GGraphicsPipelineCache__(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1464ca048);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1464ca048,4000);
  DAT_1464c9f88 = &DAT_1464c9f98;
  DAT_1464c9f90 = &DAT_1464c9fe8;
  DAT_1464ca070 = 0;
  _DAT_1464ca078 = 0;
  _DAT_1464ca080 = 0;
  _DAT_1464c9f80 = TlsAlloc();
  atexit(_dynamic_atexit_destructor_for__GGraphicsPipelineCache__);
  return;
}



// FUNCTION 1402fb3f0 `dynamic_initializer_for_'GProfileAssetSummaryCallOuts'' body=139 status=ok
// SIG undefined `dynamic_initializer_for_'GProfileAssetSummaryCallOuts''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GProfileAssetSummaryCallOuts__(void)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6568 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"r.ProfileGPU.AssetSummaryCallOuts",local_18,
                  L"Comma separated list of substrings that deserve special mention in the final summary (e.g., \"LOD,HeroName\"\nr.ProfileGPU.PrintAssetSummary must be true to enable this feature"
                  ,0);
  _DAT_146ab6560 = &PTR_FUN_143f3ecf8;
  DAT_146ab6570 = (**(code **)(*DAT_146ab6568 + 0x48))(DAT_146ab6568);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143ea07d0);
  return;
}



// FUNCTION 1402fb480 `dynamic_initializer_for_'GProfileGPUPatternCVar'' body=181 status=ok
// SIG undefined `dynamic_initializer_for_'GProfileGPUPatternCVar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GProfileGPUPatternCVar__(void)

{
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_144ed5934,4);
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab64d8 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"r.ProfileGPU.Pattern",local_18,
                  L"Allows to filter the entries when using ProfileGPU, the pattern match is case sensitive.\n\'*\' can be used in the end to get all entries starting with the string.\n    \'*\' without any leading characters disables the pattern matching and uses a time threshold instead (default).\n\'?\' allows to ignore one character.\ne.g. AmbientOcclusionSetup, AmbientOcclusion*, Ambient???lusion*, *"
                  ,0);
  _DAT_146ab64d0 = &PTR_FUN_143f3ecf8;
  _DAT_146ab64e0 = (**(code **)(*DAT_146ab64d8 + 0x48))(DAT_146ab64d8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143ea0820);
  return;
}



// FUNCTION 1402fb540 `dynamic_initializer_for_'GProfileGPURootCVar'' body=181 status=ok
// SIG undefined `dynamic_initializer_for_'GProfileGPURootCVar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GProfileGPURootCVar__(void)

{
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_144ed594c,4);
  if (DAT_1468b1f88 == (undefined8 *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab64f0 =
       (longlong *)
       (**(code **)*DAT_1468b1f88)
                 (DAT_1468b1f88,L"r.ProfileGPU.Root",local_18,
                  L"Allows to filter the tree when using ProfileGPU, the pattern match is case sensitive."
                  ,0);
  _DAT_146ab64e8 = &PTR_FUN_143f3ecf8;
  _DAT_146ab64f8 = (**(code **)(*DAT_146ab64f0 + 0x48))(DAT_146ab64f0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143ea0870);
  return;
}



// FUNCTION 1402fb600 `dynamic_initializer_for_'GProfileGPUShowEvents'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'GProfileGPUShowEvents''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GProfileGPUShowEvents__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6520 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ProfileGPU.ShowLeafEvents",0,
                  L"Allows profileGPU to display event-only leaf nodes with no draws associated.",0)
  ;
  _DAT_146ab6518 = &PTR_FUN_143f3ecf8;
  DAT_146ab6528 = (**(code **)(*DAT_146ab6520 + 0x38))(DAT_146ab6520);
  atexit(FUN_143ea08c0);
  return;
}



// FUNCTION 1402fb670 `dynamic_initializer_for_'GProfileGPUSort'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'GProfileGPUSort''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GProfileGPUSort__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab65b0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ProfileGPU.Sort",0,
                  L"Sorts the TTY Dump independently at each level of the tree in various modes.\n0 : Chronological\n1 : By time elapsed\n2 : By number of prims\n3 : By number of verts\n"
                  ,0);
  _DAT_146ab65a8 = &PTR_FUN_143f3ecf8;
  DAT_146ab65b8 = (**(code **)(*DAT_146ab65b0 + 0x38))(DAT_146ab65b0);
  atexit(FUN_143ea0910);
  return;
}



// FUNCTION 1402fb6e0 `dynamic_initializer_for_'GProfileGPUTransitions'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'GProfileGPUTransitions''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GProfileGPUTransitions__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6538 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ProfileGPU.ShowTransitions",0,
                  L"Allows profileGPU to display resource transition events.",0);
  _DAT_146ab6530 = &PTR_FUN_143f3ecf8;
  _DAT_146ab6540 = (**(code **)(*DAT_146ab6538 + 0x38))(DAT_146ab6538);
  atexit(FUN_143ea0960);
  return;
}



// FUNCTION 1402fb750 `dynamic_initializer_for_'GProfilePrintAssetSummary'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'GProfilePrintAssetSummary''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GProfilePrintAssetSummary__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6550 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ProfileGPU.PrintAssetSummary",0,
                  L"Should we print a summary split by asset (r.ShowMaterialDrawEvents is strongly recommended as well).\n"
                  ,0);
  _DAT_146ab6548 = &PTR_FUN_143f3ecf8;
  DAT_146ab6558 = (**(code **)(*DAT_146ab6550 + 0x38))(DAT_146ab6550);
  atexit(FUN_143ea09b0);
  return;
}



// FUNCTION 1402fb7c0 `dynamic_initializer_for_'GProfileShowEventHistogram'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'GProfileShowEventHistogram''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GProfileShowEventHistogram__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6508 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ProfileGPU.ShowEventHistogram",0,
                  L"Whether the event histogram should be shown.",0);
  _DAT_146ab6500 = &PTR_FUN_143f3ecf8;
  DAT_146ab6510 = (**(code **)(*DAT_146ab6508 + 0x38))(DAT_146ab6508);
  atexit(FUN_143ea0a00);
  return;
}



// FUNCTION 1402fb870 `dynamic_initializer_for_'GRHICommandList'' body=64 status=ok
// SIG undefined `dynamic_initializer_for_'GRHICommandList''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GRHICommandList__(void)

{
  FRHICommandListBase::FRHICommandListBase(&DAT_146ab6e78,1);
  _DAT_146ab7020 = 1;
  FRHICommandListBase::FRHICommandListBase(&DAT_146ab7030,1);
  atexit(_dynamic_atexit_destructor_for__GRHICommandList__);
  return;
}



// FUNCTION 1402fb900 FUN_1402fb900 body=51 status=ok
// SIG undefined FUN_1402fb900(void)

void FUN_1402fb900(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146ab7278);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146ab7278,4000);
  atexit((_func_5014 *)&LAB_143ea0b80);
  return;
}



// FUNCTION 1402fb940 `dynamic_initializer_for_'GSaveScreenshotAfterProfilingGPUCVar'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'GSaveScreenshotAfterProfilingGPUCVar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GSaveScreenshotAfterProfilingGPUCVar__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6a78 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ProfileGPU.Screenshot",1,
                  L"Whether a screenshot should be taken when profiling the GPU. 0:off, 1:on (default)"
                  ,0x20);
  _DAT_146ab6a70 = &PTR_FUN_143f3ecf8;
  DAT_146ab6a80 = (**(code **)(*DAT_146ab6a78 + 0x38))(DAT_146ab6a78);
  atexit(FUN_143ea0b90);
  return;
}



// FUNCTION 1402fb9c0 `dynamic_initializer_for_'GShowProfilerAfterProfilingGPUCVar'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'GShowProfilerAfterProfilingGPUCVar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GShowProfilerAfterProfilingGPUCVar__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6a90 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ProfileGPU.ShowUI",1,
                  L"Whether the user interface profiler should be displayed after profiling the GPU.\nThe results will always go to the log/console\n0:off, 1:on (default)"
                  ,0x20);
  _DAT_146ab6a88 = &PTR_FUN_143f3ecf8;
  _DAT_146ab6a98 = (**(code **)(*DAT_146ab6a90 + 0x38))(DAT_146ab6a90);
  atexit(FUN_143ea0be0);
  return;
}



// FUNCTION 1402fba60 FUN_1402fba60 body=256 status=ok
// SIG undefined FUN_1402fba60(void)

void FUN_1402fba60(void)

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
    *plVar1 = (longlong)
              TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>,class_IModuleInterface*___ptr64___cdecl(void)>
              ::vftable;
    plVar1[1] = (longlong)&DAT_146ab67f0;
    plVar1[2] = (longlong)FUN_14043cbe0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,&DAT_144ed3904,1);
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



// FUNCTION 1402fc070 `dynamic_initializer_for_'ResourceTableCachingCvar'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'ResourceTableCachingCvar''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__ResourceTableCachingCvar__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ab6a60 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"rhi.ResourceTableCaching",1,
                  L"If 1, the RHI will cache resource table contents within a frame. Otherwise resource tables are rebuilt for every draw call."
                  ,0);
  _DAT_146ab6a58 = &PTR_FUN_143f3ecf8;
  _DAT_146ab6a68 = (**(code **)(*DAT_146ab6a60 + 0x38))(DAT_146ab6a60);
  atexit(FUN_143ea0cd0);
  return;
}



// FUNCTION 1402fc150 FUN_1402fc150 body=114 status=ok
// SIG undefined FUN_1402fc150(void)

void FUN_1402fc150(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_146ab6800,4);
  DAT_146ab6808 = DAT_146ab6808 + 4;
  if (DAT_146ab680c < DAT_146ab6808) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146ab6800);
  }
  *DAT_146ab6800 = 0x4900480052;
  DAT_146ab67f8 = FCsvProfiler::RegisterCategory(&DAT_146ab6800,1,0);
  atexit((_func_5014 *)&LAB_143ea0da0);
  return;
}



// FUNCTION 1402fc210 `dynamic_initializer_for_'CVarForwardShading'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarForwardShading''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarForwardShading__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ac3e78 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.ForwardShading",&DAT_146ac3ac0,
                  L"Whether to use forward shading on desktop platforms - requires Shader Model 5 hardware.\nForward shading has lower constant cost, but fewer features supported. 0:off, 1:on\nThis rendering path is a work in progress with many unimplemented features, notably only a single reflection capture is applied per object and no translucency dynamic shadow receiving."
                  ,0x24);
  _DAT_146ac3e70 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea0e20);
  return;
}



// FUNCTION 1402fc280 `dynamic_initializer_for_'CVarGTSyncType'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGTSyncType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGTSyncType__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ac3b70 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.GTSyncType",0,
                  L"Determines how the game thread syncs with the render thread, RHI thread and GPU.\nSyncing to the GPU swap chain flip allows for lower frame latency.\n 0 - Sync the game thread with the render thread (default).\n 1 - Sync the game thread with the RHI thread.\n 2 - Sync the game thread with the GPU swap chain flip (only on supported platforms).\n"
                  ,0);
  _DAT_146ac3b68 = &PTR_FUN_143f3ecf8;
  DAT_146ac3b78 = (**(code **)(*DAT_146ac3b70 + 0x38))(DAT_146ac3b70);
  atexit(FUN_143ea0e70);
  return;
}



// FUNCTION 1402fc2f0 `dynamic_initializer_for_'CVarMaxVertexBytesAllocatedPerFrame'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMaxVertexBytesAllocatedPerFrame''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMaxVertexBytesAllocatedPerFrame__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ac3cd8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.MaxVertexBytesAllocatedPerFrame",&DAT_1464ca1a0,
                  L"The maximum number of transient vertex buffer bytes to allocate before we start panic logging who is doing the allocations"
                  ,0);
  _DAT_146ac3cd0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea0ec0);
  return;
}



// FUNCTION 1402fc360 FUN_1402fc360 body=269 status=ok
// SIG undefined FUN_1402fc360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402fc360(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_1444d51e8;
    plVar1[1] = (longlong)HandleRHIThreadEnableChanged;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ac3cc8 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"r.RHIThread.Enable",
                  L"Enables/disabled the RHI Thread and determine if the RHI work runs on a dedicated thread or not.\n"
                  ,&local_18,0);
  _DAT_146ac3cc0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402fc45c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402fc45c:
  atexit(FUN_143ea0f10);
  return;
}



// FUNCTION 1402fc470 `dynamic_initializer_for_'CVarTimeToBlockOnRenderFence'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarTimeToBlockOnRenderFence''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarTimeToBlockOnRenderFence__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ac3b88 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"g.TimeToBlockOnRenderFence",&DAT_1464cabdc,
                  L"Number of milliseconds the game thread should block when waiting on a render thread fence."
                  ,0);
  _DAT_146ac3b80 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea0f60);
  return;
}



// FUNCTION 1402fc4e0 `dynamic_initializer_for_'CVarTimeoutForBlockOnRenderFence'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarTimeoutForBlockOnRenderFence''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarTimeoutForBlockOnRenderFence__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146ac3b98 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"g.TimeoutForBlockOnRenderFence",&DAT_1464cabe0,
                  L"Number of milliseconds the game thread should wait before failing when waiting on a render thread fence."
                  ,0);
  _DAT_146ac3b90 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ea0fb0);
  return;
}



// FUNCTION 1402fc560 FUN_1402fc560 body=160 status=ok
// SIG undefined FUN_1402fc560(void)

void FUN_1402fc560(void)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)operator_new(0x68);
  if (plVar2 == (longlong *)0x0) {
    DAT_146ac3e20 = plVar2;
    return;
  }
  *(undefined4 *)(plVar2 + 1) = 4;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined1 *)(plVar2 + 5) = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[9] = -0x3810000020000000;
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  *(undefined4 *)(plVar2 + 0xc) = 0;
  *(undefined2 *)((longlong)plVar2 + 100) = 0;
  *(undefined1 *)((longlong)plVar2 + 0x66) = 0;
  *plVar2 = (longlong)&PTR__scalar_deleting_destructor__144ede470;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(*plVar2 + 0x28))();
    DAT_146ac3e20 = plVar2;
    return;
  }
  FUN_141edf270(plVar2);
  DAT_146ac3e20 = plVar2;
  return;
}



// FUNCTION 1402fc600 FUN_1402fc600 body=160 status=ok
// SIG undefined FUN_1402fc600(void)

void FUN_1402fc600(void)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)operator_new(0x68);
  if (plVar2 == (longlong *)0x0) {
    DAT_146ac3e68 = plVar2;
    return;
  }
  *(undefined4 *)(plVar2 + 1) = 4;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined1 *)(plVar2 + 5) = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[9] = -0x3810000020000000;
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  *(undefined4 *)(plVar2 + 0xc) = 0;
  *(undefined2 *)((longlong)plVar2 + 100) = 0;
  *(undefined1 *)((longlong)plVar2 + 0x66) = 0;
  *plVar2 = (longlong)&PTR__scalar_deleting_destructor__144ede778;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(*plVar2 + 0x28))();
    DAT_146ac3e68 = plVar2;
    return;
  }
  FUN_141edf270(plVar2);
  DAT_146ac3e68 = plVar2;
  return;
}



// FUNCTION 1402fc6a0 FUN_1402fc6a0 body=160 status=ok
// SIG undefined FUN_1402fc6a0(void)

void FUN_1402fc6a0(void)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)operator_new(0x68);
  if (plVar2 == (longlong *)0x0) {
    DAT_146ac3e00 = plVar2;
    return;
  }
  *(undefined4 *)(plVar2 + 1) = 4;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined1 *)(plVar2 + 5) = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[9] = -0x3810000020000000;
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  *(undefined4 *)(plVar2 + 0xc) = 0;
  *(undefined2 *)((longlong)plVar2 + 100) = 0;
  *(undefined1 *)((longlong)plVar2 + 0x66) = 0;
  *plVar2 = (longlong)&PTR__scalar_deleting_destructor__144ede2f0;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(*plVar2 + 0x28))();
    DAT_146ac3e00 = plVar2;
    return;
  }
  FUN_141edf270(plVar2);
  DAT_146ac3e00 = plVar2;
  return;
}



// FUNCTION 1402fc740 FUN_1402fc740 body=190 status=ok
// SIG undefined FUN_1402fc740(void)

void FUN_1402fc740(void)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)operator_new(0x70);
  if (plVar2 == (longlong *)0x0) {
    DAT_146ac3e58 = plVar2;
    return;
  }
  *(undefined4 *)(plVar2 + 1) = 4;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined1 *)(plVar2 + 5) = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[9] = -0x3810000020000000;
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  *(undefined4 *)(plVar2 + 0xc) = 0;
  *(undefined2 *)((longlong)plVar2 + 100) = 0;
  *(undefined1 *)((longlong)plVar2 + 0x66) = 0;
  *plVar2 = (longlong)&PTR__scalar_deleting_destructor__144ede6b8;
  *(undefined4 *)(plVar2 + 0xd) = DAT_1464aa734;
  *plVar2 = (longlong)&PTR__scalar_deleting_destructor__144ede718;
  *(undefined4 *)((longlong)plVar2 + 0x6c) = 2;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(*plVar2 + 0x28))();
    DAT_146ac3e58 = plVar2;
    return;
  }
  FUN_141edf270(plVar2);
  DAT_146ac3e58 = plVar2;
  return;
}



// FUNCTION 1402fc800 FUN_1402fc800 body=190 status=ok
// SIG undefined FUN_1402fc800(void)

void FUN_1402fc800(void)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)operator_new(0x70);
  if (plVar2 == (longlong *)0x0) {
    DAT_146ac3e60 = plVar2;
    return;
  }
  *(undefined4 *)(plVar2 + 1) = 4;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined1 *)(plVar2 + 5) = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[9] = -0x3810000020000000;
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  *(undefined4 *)(plVar2 + 0xc) = 0;
  *(undefined2 *)((longlong)plVar2 + 100) = 0;
  *(undefined1 *)((longlong)plVar2 + 0x66) = 0;
  *plVar2 = (longlong)&PTR__scalar_deleting_destructor__144ede6b8;
  *(undefined4 *)(plVar2 + 0xd) = DAT_1464aa734;
  *plVar2 = (longlong)&PTR__scalar_deleting_destructor__144ede718;
  *(undefined4 *)((longlong)plVar2 + 0x6c) = 0xc;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(*plVar2 + 0x28))();
    DAT_146ac3e60 = plVar2;
    return;
  }
  FUN_141edf270(plVar2);
  DAT_146ac3e60 = plVar2;
  return;
}



// FUNCTION 1402fc8c0 FUN_1402fc8c0 body=160 status=ok
// SIG undefined FUN_1402fc8c0(void)

void FUN_1402fc8c0(void)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)operator_new(0x68);
  if (plVar2 == (longlong *)0x0) {
    DAT_146ac3e10 = plVar2;
    return;
  }
  *(undefined4 *)(plVar2 + 1) = 4;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined1 *)(plVar2 + 5) = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[9] = -0x3810000020000000;
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  *(undefined4 *)(plVar2 + 0xc) = 0;
  *(undefined2 *)((longlong)plVar2 + 100) = 0;
  *(undefined1 *)((longlong)plVar2 + 0x66) = 0;
  *plVar2 = (longlong)&PTR__scalar_deleting_destructor__144ede3b0;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(*plVar2 + 0x28))();
    DAT_146ac3e10 = plVar2;
    return;
  }
  FUN_141edf270(plVar2);
  DAT_146ac3e10 = plVar2;
  return;
}



// FUNCTION 1402fc960 FUN_1402fc960 body=160 status=ok
// SIG undefined FUN_1402fc960(void)

void FUN_1402fc960(void)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)operator_new(0x68);
  if (plVar2 == (longlong *)0x0) {
    DAT_146ac3e40 = plVar2;
    return;
  }
  *(undefined4 *)(plVar2 + 1) = 4;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined1 *)(plVar2 + 5) = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[9] = -0x3810000020000000;
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  *(undefined4 *)(plVar2 + 0xc) = 0;
  *(undefined2 *)((longlong)plVar2 + 100) = 0;
  *(undefined1 *)((longlong)plVar2 + 0x66) = 0;
  *plVar2 = (longlong)&PTR__scalar_deleting_destructor__144ede5f8;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(*plVar2 + 0x28))();
    DAT_146ac3e40 = plVar2;
    return;
  }
  FUN_141edf270(plVar2);
  DAT_146ac3e40 = plVar2;
  return;
}



// FUNCTION 1402fca00 FUN_1402fca00 body=160 status=ok
// SIG undefined FUN_1402fca00(void)

void FUN_1402fca00(void)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)operator_new(0x68);
  if (plVar2 == (longlong *)0x0) {
    DAT_146ac3e30 = plVar2;
    return;
  }
  *(undefined4 *)(plVar2 + 1) = 4;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined1 *)(plVar2 + 5) = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[9] = -0x3810000020000000;
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  *(undefined4 *)(plVar2 + 0xc) = 0;
  *(undefined2 *)((longlong)plVar2 + 100) = 0;
  *(undefined1 *)((longlong)plVar2 + 0x66) = 0;
  *plVar2 = (longlong)&PTR__scalar_deleting_destructor__144ede530;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(*plVar2 + 0x28))();
    DAT_146ac3e30 = plVar2;
    return;
  }
  FUN_141edf270(plVar2);
  DAT_146ac3e30 = plVar2;
  return;
}



// FUNCTION 1402fcaa0 FUN_1402fcaa0 body=147 status=ok
// SIG undefined FUN_1402fcaa0(void)

void FUN_1402fcaa0(void)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)operator_new(0x58);
  if (plVar2 == (longlong *)0x0) {
    DAT_146ac3e38 = plVar2;
    return;
  }
  *(undefined4 *)(plVar2 + 1) = 4;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined1 *)(plVar2 + 5) = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  *plVar2 = (longlong)&PTR__scalar_deleting_destructor__144ede590;
  *(undefined4 *)(plVar2 + 9) = 0x10;
  *(undefined8 *)((longlong)plVar2 + 0x4c) = 0x10000;
  *(undefined1 *)((longlong)plVar2 + 0x54) = 1;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(*plVar2 + 0x28))();
    DAT_146ac3e38 = plVar2;
    return;
  }
  FUN_141edf270(plVar2);
  DAT_146ac3e38 = plVar2;
  return;
}



// FUNCTION 1402fcb40 `dynamic_initializer_for_'GMipColorTexture'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'GMipColorTexture''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GMipColorTexture__(void)

{
  _DAT_146ac3e48 = (undefined8 *)operator_new();
  if (_DAT_146ac3e48 != (undefined8 *)0x0) {
    *(undefined4 *)(_DAT_146ac3e48 + 1) = 4;
    _DAT_146ac3e48[2] = 0;
    _DAT_146ac3e48[3] = 0;
    *(undefined1 *)(_DAT_146ac3e48 + 5) = 0;
    _DAT_146ac3e48[6] = 0;
    _DAT_146ac3e48[7] = 0;
    _DAT_146ac3e48[8] = 0;
    _DAT_146ac3e48[9] = 0xc7efffffe0000000;
    _DAT_146ac3e48[10] = 0;
    _DAT_146ac3e48[0xb] = 0;
    *(undefined4 *)(_DAT_146ac3e48 + 0xc) = 0;
    *(undefined2 *)((longlong)_DAT_146ac3e48 + 100) = 0;
    *(undefined1 *)((longlong)_DAT_146ac3e48 + 0x66) = 0;
    *_DAT_146ac3e48 = &PTR__scalar_deleting_destructor__144ede658;
    return;
  }
  _DAT_146ac3e48 = (undefined8 *)0x0;
  return;
}



// FUNCTION 1402fcbc0 FUN_1402fcbc0 body=170 status=ok
// SIG undefined FUN_1402fcbc0(void)

void FUN_1402fcbc0(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 2;
  lVar2 = 0x146ac3db2;
  do {
    *(undefined4 *)(lVar2 + -0x3a) = 4;
    lVar3 = lVar3 + -1;
    *(undefined8 *)(lVar2 + -0x32) = 0;
    *(undefined8 *)(lVar2 + -0x2a) = 0;
    *(undefined1 *)(lVar2 + -0x1a) = 0;
    *(undefined8 *)(lVar2 + -0x12) = 0;
    *(undefined8 *)(lVar2 + -10) = 0;
    *(undefined2 *)(lVar2 + -1) = 0xffff;
    *(undefined1 *)(lVar2 + -2) = 0xff;
    *(undefined1 *)(lVar2 + 1) = 0xff;
    *(undefined ***)(lVar2 + -0x42) = &PTR_FUN_144ede250;
    cVar1 = IsInRenderingThread();
    if (cVar1 == '\0') {
      FUN_141edf270(lVar2 + -0x42);
    }
    else {
      (**(code **)(*(longlong *)(lVar2 + -0x42) + 0x28))();
    }
    lVar2 = lVar2 + 0x48;
  } while (lVar3 != 0);
  atexit(FUN_143ea1010);
  return;
}



// FUNCTION 1402fcc70 FUN_1402fcc70 body=67 status=ok
// SIG undefined FUN_1402fcc70(void)

void FUN_1402fcc70(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1464cacb0 + 0x28))();
    atexit(FUN_143ea1080);
    return;
  }
  FUN_141edf270(&PTR_PTR_1464cacb0);
  atexit(FUN_143ea1080);
  return;
}


