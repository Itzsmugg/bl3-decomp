// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1403a5bd0 FUN_1403a5bd0 body=66 status=ok
// SIG undefined FUN_1403a5bd0(void)

void FUN_1403a5bd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGameplayTaskState",1);
  UObjectCompiledInDeferEnum(EGameplayTaskState_StaticEnum,L"/Script/GameplayTasks",*puVar1,0,0);
  return;
}



// FUNCTION 1403a5c20 FUN_1403a5c20 body=66 status=ok
// SIG undefined FUN_1403a5c20(void)

void FUN_1403a5c20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ETaskResourceOverlapPolicy",1);
  UObjectCompiledInDeferEnum
            (ETaskResourceOverlapPolicy_StaticEnum,L"/Script/GameplayTasks",*puVar1,0,0);
  return;
}



// FUNCTION 1403a5c70 FUN_1403a5c70 body=66 status=ok
// SIG undefined FUN_1403a5c70(void)

void FUN_1403a5c70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GameplayResourceSet",1);
  UObjectCompiledInDeferStruct
            (FGameplayResourceSet::StaticStruct,L"/Script/GameplayTasks",*puVar1,0,0);
  return;
}



// FUNCTION 1403a5cc0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTask'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTask''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UGameplayTask__(void)

{
  UObjectCompiledInDefer
            (FUN_142b7bdc0,UGameplayTask::GetPrivateStaticClass,L"UGameplayTask",
             L"/Script/GameplayTasks",0,0,0);
  return;
}



// FUNCTION 1403a5d00 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTaskOwnerInterface'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTaskOwnerInterface''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UGameplayTaskOwnerInterface__(void)

{
  UObjectCompiledInDefer
            (FUN_142b7cab0,UGameplayTaskOwnerInterface::StaticClass,L"UGameplayTaskOwnerInterface",
             L"/Script/GameplayTasks",0,0,0);
  return;
}



// FUNCTION 1403a5d40 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTaskResource'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTaskResource''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UGameplayTaskResource__(void)

{
  UObjectCompiledInDefer
            (FUN_142b7cae0,UGameplayTaskResource::GetPrivateStaticClass,L"UGameplayTaskResource",
             L"/Script/GameplayTasks",0,0,0);
  return;
}



// FUNCTION 1403a5d80 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTask_ClaimResource'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTask_ClaimResource''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UGameplayTask_ClaimResource__(void)

{
  UObjectCompiledInDefer
            (FUN_142b7bfa0,UGameplayTask_ClaimResource::GetPrivateStaticClass,
             L"UGameplayTask_ClaimResource",L"/Script/GameplayTasks",0,0,0);
  return;
}



// FUNCTION 1403a5dc0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTask_SpawnActor'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTask_SpawnActor''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UGameplayTask_SpawnActor__(void)

{
  UObjectCompiledInDefer
            (FUN_142b7c0f0,UGameplayTask_SpawnActor::GetPrivateStaticClass,
             L"UGameplayTask_SpawnActor",L"/Script/GameplayTasks",0,0,0);
  return;
}



// FUNCTION 1403a5e00 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTask_TimeLimitedExecution'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTask_TimeLimitedExecution''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UGameplayTask_TimeLimitedExecution__(void)

{
  UObjectCompiledInDefer
            (FUN_142b7c270,UGameplayTask_TimeLimitedExecution::StaticClass,
             L"UGameplayTask_TimeLimitedExecution",L"/Script/GameplayTasks",0,0,0);
  return;
}



// FUNCTION 1403a5e40 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTask_WaitDelay'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTask_WaitDelay''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UGameplayTask_WaitDelay__(void)

{
  UObjectCompiledInDefer
            (FUN_142b7c390,UGameplayTask_WaitDelay::GetPrivateStaticClass,L"UGameplayTask_WaitDelay"
             ,L"/Script/GameplayTasks",0,0,0);
  return;
}



// FUNCTION 1403a5e80 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTasksComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UGameplayTasksComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UGameplayTasksComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_142b7c4c0,UEnvQueryTest_Cover::StaticClass,L"UGameplayTasksComponent",
             L"/Script/GameplayTasks",0,0,0);
  return;
}



// FUNCTION 1403a5ed0 FUN_1403a5ed0 body=51 status=ok
// SIG undefined FUN_1403a5ed0(void)

void FUN_1403a5ed0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146b2ba88);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146b2ba88,4000);
  atexit((_func_5014 *)&LAB_143ebf180);
  return;
}



// FUNCTION 1403a5f80 FUN_1403a5f80 body=351 status=ok
// SIG undefined FUN_1403a5f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403a5f80(void)

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
    plVar1[1] = (longlong)&DAT_146b2baf0;
    plVar1[2] = (longlong)FUN_141591020;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b2baf8 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"TaskGraph.TaskPriorities.NavTriggerAsyncQueries",
                  L"Task and thread priority for UNavigationSystemV1::PerformAsyncQueries.",
                  &local_18,0);
  _DAT_146b2baf0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1403a607f;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1403a607f:
  DAT_146b2bb00 = 0;
  _DAT_146b2bb08 = 0x30;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146b2bb00,0);
  FGenericPlatformString::Memcpy
            (DAT_146b2bb00,L"TaskGraph.TaskPriorities.NavTriggerAsyncQueries",0x60);
  _DAT_146b2bb10 = 0x1000;
  DAT_146b2bb18 = 0;
  atexit(FUN_143ebf1f0);
  return;
}



// FUNCTION 1403a60e0 `dynamic_initializer_for_'CVarNavCollisionAvailable'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarNavCollisionAvailable''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarNavCollisionAvailable__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b2ba70 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"ai.NavCollisionAvailable",1,
                  L"If set to 0 NavCollision won\'t be cooked and will be unavailable at runtime.\n"
                  ,0x40);
  _DAT_146b2ba68 = &PTR_FUN_143f3ecf8;
  DAT_146b2ba78 = (**(code **)(*DAT_146b2ba70 + 0x38))(DAT_146b2ba70);
  atexit(FUN_143ebf250);
  return;
}



// FUNCTION 1403a6190 `dynamic_initializer_for_'ModuleRegistrantNavigationSystem'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantNavigationSystem''(void)

void _dynamic_initializer_for__ModuleRegistrantNavigationSystem__(void)

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
    plVar1[1] = (longlong)&DAT_146b2ba62;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"NavigationSystem",1);
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



// FUNCTION 1403a62b0 FUN_1403a62b0 body=102 status=ok
// SIG undefined FUN_1403a62b0(void)

void FUN_1403a62b0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FMemory::Realloc(0,0x20);
  DAT_146b2bb28 = 2;
  DAT_146b2bb20 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144e926f8;
    puVar1[1] = FUN_142b89c90;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[3] = uVar2;
    *puVar1 = &PTR_GetPoolName_144e92740;
  }
  atexit(FUN_143ebf2d0);
  return;
}



// FUNCTION 1403a6320 FUN_1403a6320 body=102 status=ok
// SIG undefined FUN_1403a6320(void)

void FUN_1403a6320(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FMemory::Realloc(0,0x20);
  DAT_146b2bb38 = 2;
  DAT_146b2bb30 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144e926f8;
    puVar1[1] = FUN_142b8a340;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[3] = uVar2;
    *puVar1 = &PTR_GetPoolName_144e92740;
  }
  atexit(FUN_143ebf330);
  return;
}



// FUNCTION 1403a6870 FUN_1403a6870 body=92 status=ok
// SIG undefined FUN_1403a6870(void)

void FUN_1403a6870(void)

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
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_1457dd7a8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"HavokNavMeshEdgeMatchingSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a68d0 FUN_1403a68d0 body=92 status=ok
// SIG undefined FUN_1403a68d0(void)

void FUN_1403a68d0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_1457dd460;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"HavokNavMeshExtraVertexSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a6930 FUN_1403a6930 body=92 status=ok
// SIG undefined FUN_1403a6930(void)

void FUN_1403a6930(void)

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
    *puVar1 = &PTR_FUN_1457dd578;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"HavokNavMeshOverlappingTrianglesSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a6990 FUN_1403a6990 body=92 status=ok
// SIG undefined FUN_1403a6990(void)

void FUN_1403a6990(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_1457dd690;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"HavokNavMeshRegionPruningSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a69f0 `dynamic_initializer_for_'ScriptStruct_Medium_StaticRegisterNativesFSymPostprocessExpFog'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Medium_StaticRegisterNativesFSymPostprocessExpFog''(void)

void _dynamic_initializer_for__ScriptStruct_Medium_StaticRegisterNativesFSymPostprocessExpFog__
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
    *(undefined4 *)(puVar1 + 1) = 0x7c;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_1457dd348;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"HavokNavMeshSimplificationSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a6a50 FUN_1403a6a50 body=92 status=ok
// SIG undefined FUN_1403a6a50(void)

void FUN_1403a6a50(void)

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
    *puVar1 = &PTR_FUN_1457dd8c0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"HavokNavSectionFixedBound",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a6ab0 FUN_1403a6ab0 body=92 status=ok
// SIG undefined FUN_1403a6ab0(void)

void FUN_1403a6ab0(void)

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
    *puVar1 = &PTR_FUN_1457ddc08;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"HavokNavVolumeBorderSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a6b10 `dynamic_initializer_for_'ScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptExecutionPaddingInfo'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptExecutionPaddingInfo''(void)

void _dynamic_initializer_for__ScriptStruct_Niagara_StaticRegisterNativesFNiagaraScriptExecutionPaddingInfo__
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
    *(undefined4 *)(puVar1 + 1) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    *puVar1 = &PTR_FUN_1457ddd20;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"HavokNavVolumeChunkSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a6b70 FUN_1403a6b70 body=92 status=ok
// SIG undefined FUN_1403a6b70(void)

void FUN_1403a6b70(void)

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
    *puVar1 = &PTR_FUN_1457ddaf0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"HavokNavVolumeMergingSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a6bd0 FUN_1403a6bd0 body=92 status=ok
// SIG undefined FUN_1403a6bd0(void)

void FUN_1403a6bd0(void)

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
    *puVar1 = &PTR_FUN_1457dd9d8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"HavokNavVolumePruningSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a6c30 FUN_1403a6c30 body=92 status=ok
// SIG undefined FUN_1403a6c30(void)

void FUN_1403a6c30(void)

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
    *puVar1 = &PTR_FUN_1457dd230;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"HavokTraversalAnalysisSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a6cb0 FUN_1403a6cb0 body=66 status=ok
// SIG undefined FUN_1403a6cb0(void)

void FUN_1403a6cb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EHavokNavMaterial",1);
  UObjectCompiledInDeferEnum
            (ERuntimeGenerationType_StaticEnum,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a6d00 FUN_1403a6d00 body=66 status=ok
// SIG undefined FUN_1403a6d00(void)

void FUN_1403a6d00(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EHavokNavMeshCharacterWidthUsage",1);
  UObjectCompiledInDeferEnum
            (ERuntimeGenerationType_StaticEnum,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a6d50 FUN_1403a6d50 body=66 status=ok
// SIG undefined FUN_1403a6d50(void)

void FUN_1403a6d50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EHavokNavMeshEdgeMatchingMetric",1);
  UObjectCompiledInDeferEnum
            (ERuntimeGenerationType_StaticEnum,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a6da0 FUN_1403a6da0 body=66 status=ok
// SIG undefined FUN_1403a6da0(void)

void FUN_1403a6da0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EHavokNavMeshVertexSelectionMethod",1);
  UObjectCompiledInDeferEnum
            (ERuntimeGenerationType_StaticEnum,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a6df0 FUN_1403a6df0 body=66 status=ok
// SIG undefined FUN_1403a6df0(void)

void FUN_1403a6df0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EHavokNavMeshWalkableTriangleSeetings",1);
  UObjectCompiledInDeferEnum
            (ERuntimeGenerationType_StaticEnum,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a6e40 FUN_1403a6e40 body=66 status=ok
// SIG undefined FUN_1403a6e40(void)

void FUN_1403a6e40(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EHavokNavVolumeCellWidthToResolutionRounding",1);
  UObjectCompiledInDeferEnum
            (ERuntimeGenerationType_StaticEnum,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a6e90 FUN_1403a6e90 body=66 status=ok
// SIG undefined FUN_1403a6e90(void)

void FUN_1403a6e90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EHavokUserEdgeDirection",1);
  UObjectCompiledInDeferEnum
            (ERuntimeGenerationType_StaticEnum,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a6ee0 FUN_1403a6ee0 body=66 status=ok
// SIG undefined FUN_1403a6ee0(void)

void FUN_1403a6ee0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"HavokNavMeshEdgeMatchingSettings",1);
  UObjectCompiledInDeferStruct(FUN_142ba88c0,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a6f30 FUN_1403a6f30 body=66 status=ok
// SIG undefined FUN_1403a6f30(void)

void FUN_1403a6f30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"HavokNavMeshExtraVertexSettings",1);
  UObjectCompiledInDeferStruct(FUN_142ba8920,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a6f80 FUN_1403a6f80 body=66 status=ok
// SIG undefined FUN_1403a6f80(void)

void FUN_1403a6f80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"HavokNavMeshOverlappingTrianglesSettings",1);
  UObjectCompiledInDeferStruct(FUN_142ba8980,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a6fd0 FUN_1403a6fd0 body=66 status=ok
// SIG undefined FUN_1403a6fd0(void)

void FUN_1403a6fd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"HavokNavMeshRegionPruningSettings",1);
  UObjectCompiledInDeferStruct
            (FNavCollisionCylinder::StaticStruct,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a7020 FUN_1403a7020 body=66 status=ok
// SIG undefined FUN_1403a7020(void)

void FUN_1403a7020(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"HavokNavMeshSimplificationSettings",1);
  UObjectCompiledInDeferStruct
            (FSymPostprocessExpFog::StaticStruct,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a7070 FUN_1403a7070 body=66 status=ok
// SIG undefined FUN_1403a7070(void)

void FUN_1403a7070(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"HavokNavSectionFixedBound",1);
  UObjectCompiledInDeferStruct(FUN_142ba8aa0,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a70c0 FUN_1403a70c0 body=66 status=ok
// SIG undefined FUN_1403a70c0(void)

void FUN_1403a70c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"HavokNavVolumeBorderSettings",1);
  UObjectCompiledInDeferStruct(FUN_142ba8b00,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a7110 FUN_1403a7110 body=66 status=ok
// SIG undefined FUN_1403a7110(void)

void FUN_1403a7110(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"HavokNavVolumeChunkSettings",1);
  UObjectCompiledInDeferStruct(FUN_142ba8b60,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a7160 FUN_1403a7160 body=66 status=ok
// SIG undefined FUN_1403a7160(void)

void FUN_1403a7160(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"HavokNavVolumeMergingSettings",1);
  UObjectCompiledInDeferStruct
            (FSupportedAreaData::StaticStruct,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a71b0 FUN_1403a71b0 body=66 status=ok
// SIG undefined FUN_1403a71b0(void)

void FUN_1403a71b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"HavokNavVolumePruningSettings",1);
  UObjectCompiledInDeferStruct(FUN_142ba8c20,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a7200 FUN_1403a7200 body=66 status=ok
// SIG undefined FUN_1403a7200(void)

void FUN_1403a7200(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"HavokTraversalAnalysisSettings",1);
  UObjectCompiledInDeferStruct
            (FSupportedAreaData::StaticStruct,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a7250 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_AAbstractNavData'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_AAbstractNavData''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_AAbstractNavData__(void)

{
  UObjectCompiledInDefer
            (FUN_142ba8d40,FUN_142ba6e70,L"AAbstractNavData",L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a7290 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UCrowdManagerBase'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UCrowdManagerBase''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UCrowdManagerBase__(void)

{
  UObjectCompiledInDefer
            (FUN_142ba8d70,UCrowdManagerBase::GetPrivateStaticClass,L"UCrowdManagerBase",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a72d0 FUN_1403a72d0 body=58 status=ok
// SIG undefined FUN_1403a72d0(void)

void FUN_1403a72d0(void)

{
  UObjectCompiledInDefer
            (FUN_142ba8da0,FUN_142ba7280,L"UGbxNavLayerBase",L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a7310 FUN_1403a7310 body=58 status=ok
// SIG undefined FUN_1403a7310(void)

void FUN_1403a7310(void)

{
  UObjectCompiledInDefer
            (FUN_142ba8dd0,FUN_142ba6aa0,L"UGbxUserEdgeBase",L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a7350 FUN_1403a7350 body=58 status=ok
// SIG undefined FUN_1403a7350(void)

void FUN_1403a7350(void)

{
  UObjectCompiledInDefer
            (FUN_142ba7100,FUN_142ba7060,L"UHavokNavData",L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a7390 FUN_1403a7390 body=58 status=ok
// SIG undefined FUN_1403a7390(void)

void FUN_1403a7390(void)

{
  UObjectCompiledInDefer
            (FUN_142ba7420,FUN_142ba7330,L"UHavokNavLayer",L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a73d0 FUN_1403a73d0 body=58 status=ok
// SIG undefined FUN_1403a73d0(void)

void FUN_1403a73d0(void)

{
  UObjectCompiledInDefer
            (FUN_142ba8e00,FUN_142ba7480,L"UHavokNavLayerRegistry",L"/Script/NavigationSystem",0,0,0
            );
  return;
}



// FUNCTION 1403a7410 FUN_1403a7410 body=58 status=ok
// SIG undefined FUN_1403a7410(void)

void FUN_1403a7410(void)

{
  UObjectCompiledInDefer
            (FUN_142ba8e30,UNavLinkTrivial::StaticClass,L"UHavokNavMesh",L"/Script/NavigationSystem"
             ,0,0,0);
  return;
}



// FUNCTION 1403a7450 FUN_1403a7450 body=58 status=ok
// SIG undefined FUN_1403a7450(void)

void FUN_1403a7450(void)

{
  UObjectCompiledInDefer
            (FUN_142ba8e60,FUN_142ba6d80,L"UHavokNavMeshGenerationSettings",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a7490 FUN_1403a7490 body=58 status=ok
// SIG undefined FUN_1403a7490(void)

void FUN_1403a7490(void)

{
  UObjectCompiledInDefer
            (FUN_142ba75e0,FUN_142ba7530,L"UHavokNavMeshLayer",L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a74d0 FUN_1403a74d0 body=58 status=ok
// SIG undefined FUN_1403a74d0(void)

void FUN_1403a74d0(void)

{
  UObjectCompiledInDefer
            (FUN_142ba8e90,FUN_142ba7620,L"UHavokNavMeshLayer_Default",L"/Script/NavigationSystem",0
             ,0,0);
  return;
}



// FUNCTION 1403a7510 FUN_1403a7510 body=58 status=ok
// SIG undefined FUN_1403a7510(void)

void FUN_1403a7510(void)

{
  UObjectCompiledInDefer
            (FUN_142ba8ec0,URecastNavMeshDataChunk::GetPrivateStaticClass,L"UHavokNavVolume",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a7550 FUN_1403a7550 body=58 status=ok
// SIG undefined FUN_1403a7550(void)

void FUN_1403a7550(void)

{
  UObjectCompiledInDefer
            (FUN_142ba8ef0,UTwitchInteractivitySettings::GetPrivateStaticClass,
             L"UHavokNavVolumeGenerationSettings",L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a7590 FUN_1403a7590 body=58 status=ok
// SIG undefined FUN_1403a7590(void)

void FUN_1403a7590(void)

{
  UObjectCompiledInDefer
            (FUN_142ba7a50,FUN_142ba7990,L"UHavokNavVolumeLayer",L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a75d0 FUN_1403a75d0 body=58 status=ok
// SIG undefined FUN_1403a75d0(void)

void FUN_1403a75d0(void)

{
  UObjectCompiledInDefer
            (FUN_142ba8f20,FUN_142ba7b40,L"UHavokNavVolumeLayer_Default",L"/Script/NavigationSystem"
             ,0,0,0);
  return;
}



// FUNCTION 1403a7610 FUN_1403a7610 body=58 status=ok
// SIG undefined FUN_1403a7610(void)

void FUN_1403a7610(void)

{
  UObjectCompiledInDefer
            (FUN_142ba8f50,URecastFilter_UseDefaultArea::StaticClass,L"UHavokNavigationQueryFilter",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a7650 FUN_1403a7650 body=58 status=ok
// SIG undefined FUN_1403a7650(void)

void FUN_1403a7650(void)

{
  UObjectCompiledInDefer
            (FUN_142ba6750,UDialog_Speaker::GetPrivateStaticClass,L"UHavokTraversalType",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a7690 FUN_1403a7690 body=58 status=ok
// SIG undefined FUN_1403a7690(void)

void FUN_1403a7690(void)

{
  UObjectCompiledInDefer
            (FUN_142ba8f80,FUN_142ba67a0,L"UHavokTraversalType_ClimbUp",L"/Script/NavigationSystem",
             0,0,0);
  return;
}



// FUNCTION 1403a76d0 FUN_1403a76d0 body=58 status=ok
// SIG undefined FUN_1403a76d0(void)

void FUN_1403a76d0(void)

{
  UObjectCompiledInDefer
            (FUN_142ba8fb0,FUN_142ba6860,L"UHavokTraversalType_DropDown",L"/Script/NavigationSystem"
             ,0,0,0);
  return;
}



// FUNCTION 1403a7710 FUN_1403a7710 body=58 status=ok
// SIG undefined FUN_1403a7710(void)

void FUN_1403a7710(void)

{
  UObjectCompiledInDefer
            (FUN_142ba8fe0,FUN_142ba6920,L"UHavokTraversalType_Jump",L"/Script/NavigationSystem",0,0
             ,0);
  return;
}



// FUNCTION 1403a7750 FUN_1403a7750 body=58 status=ok
// SIG undefined FUN_1403a7750(void)

void FUN_1403a7750(void)

{
  UObjectCompiledInDefer
            (FUN_142ba9010,FUN_142ba69e0,L"UHavokTraversalType_Vault",L"/Script/NavigationSystem",0,
             0,0);
  return;
}



// FUNCTION 1403a7790 FUN_1403a7790 body=58 status=ok
// SIG undefined FUN_1403a7790(void)

void FUN_1403a7790(void)

{
  UObjectCompiledInDefer
            (FUN_142ba9040,UInterpTrack::GetPrivateStaticClass,L"UHavokUserEdge",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a77d0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavArea'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavArea''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavArea__(void)

{
  UObjectCompiledInDefer
            (FUN_142ba9070,UAITask::GetPrivateStaticClass,L"UNavArea",L"/Script/NavigationSystem",0,
             0,0);
  return;
}



// FUNCTION 1403a7810 FUN_1403a7810 body=58 status=ok
// SIG undefined FUN_1403a7810(void)

void FUN_1403a7810(void)

{
  UObjectCompiledInDefer
            (FUN_142ba90a0,UNavLinkTrivial::StaticClass,L"UNavTraversalData",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a7b00 `dynamic_initializer_for_'ScriptStruct_NavigationSystem_StaticRegisterNativesFNavCollisionBox'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_NavigationSystem_StaticRegisterNativesFNavCollisionBox''(void)

void _dynamic_initializer_for__ScriptStruct_NavigationSystem_StaticRegisterNativesFNavCollisionBox__
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
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144134d30;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"NavCollisionBox",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a7b60 `dynamic_initializer_for_'ScriptStruct_NavigationSystem_StaticRegisterNativesFNavCollisionCylinder'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_NavigationSystem_StaticRegisterNativesFNavCollisionCylinder''(void)

void _dynamic_initializer_for__ScriptStruct_NavigationSystem_StaticRegisterNativesFNavCollisionCylinder__
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
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144170d98;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"NavCollisionCylinder",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a7bc0 `dynamic_initializer_for_'ScriptStruct_NavigationSystem_StaticRegisterNativesFNavGraphEdge'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_NavigationSystem_StaticRegisterNativesFNavGraphEdge''(void)

void _dynamic_initializer_for__ScriptStruct_NavigationSystem_StaticRegisterNativesFNavGraphEdge__
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
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1457e1ef0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"NavGraphEdge",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a7c20 `dynamic_initializer_for_'ScriptStruct_NavigationSystem_StaticRegisterNativesFNavGraphNode'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_NavigationSystem_StaticRegisterNativesFNavGraphNode''(void)

void _dynamic_initializer_for__ScriptStruct_NavigationSystem_StaticRegisterNativesFNavGraphNode__
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
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1457e1dd8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"NavGraphNode",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a7c80 `dynamic_initializer_for_'ScriptStruct_NavigationSystem_StaticRegisterNativesFNavigationFilterArea'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_NavigationSystem_StaticRegisterNativesFNavigationFilterArea''(void)

void _dynamic_initializer_for__ScriptStruct_NavigationSystem_StaticRegisterNativesFNavigationFilterArea__
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
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1457e2090;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"NavigationFilterArea",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a7ce0 `dynamic_initializer_for_'ScriptStruct_NavigationSystem_StaticRegisterNativesFNavigationFilterFlags'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_NavigationSystem_StaticRegisterNativesFNavigationFilterFlags''(void)

void _dynamic_initializer_for__ScriptStruct_NavigationSystem_StaticRegisterNativesFNavigationFilterFlags__
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
    *(undefined4 *)(puVar1 + 1) = 4;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_1440be8b8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"NavigationFilterFlags",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a7d40 `dynamic_initializer_for_'ScriptStruct_NavigationSystem_StaticRegisterNativesFSupportedAreaData'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_NavigationSystem_StaticRegisterNativesFSupportedAreaData''(void)

void _dynamic_initializer_for__ScriptStruct_NavigationSystem_StaticRegisterNativesFSupportedAreaData__
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
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1457e1cc0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SupportedAreaData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a7de0 FUN_1403a7de0 body=66 status=ok
// SIG undefined FUN_1403a7de0(void)

void FUN_1403a7de0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ENavCostDisplay",1);
  UObjectCompiledInDeferEnum(ENavCostDisplay_StaticEnum,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a7e30 FUN_1403a7e30 body=66 status=ok
// SIG undefined FUN_1403a7e30(void)

void FUN_1403a7e30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ERuntimeGenerationType",1);
  UObjectCompiledInDeferEnum
            (ERuntimeGenerationType_StaticEnum,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a7e80 FUN_1403a7e80 body=66 status=ok
// SIG undefined FUN_1403a7e80(void)

void FUN_1403a7e80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"NavCollisionBox",1);
  UObjectCompiledInDeferStruct
            (FNavCollisionBox::StaticStruct,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a7ed0 FUN_1403a7ed0 body=66 status=ok
// SIG undefined FUN_1403a7ed0(void)

void FUN_1403a7ed0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"NavCollisionCylinder",1);
  UObjectCompiledInDeferStruct
            (FNavCollisionCylinder::StaticStruct,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a7f20 FUN_1403a7f20 body=66 status=ok
// SIG undefined FUN_1403a7f20(void)

void FUN_1403a7f20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"NavGraphEdge",1);
  UObjectCompiledInDeferStruct(FNavGraphEdge::StaticStruct,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a7f70 FUN_1403a7f70 body=66 status=ok
// SIG undefined FUN_1403a7f70(void)

void FUN_1403a7f70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"NavGraphNode",1);
  UObjectCompiledInDeferStruct(FNavGraphNode::StaticStruct,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a7fc0 FUN_1403a7fc0 body=66 status=ok
// SIG undefined FUN_1403a7fc0(void)

void FUN_1403a7fc0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"NavigationFilterArea",1);
  UObjectCompiledInDeferStruct
            (FNavigationFilterArea::StaticStruct,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a8010 FUN_1403a8010 body=66 status=ok
// SIG undefined FUN_1403a8010(void)

void FUN_1403a8010(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"NavigationFilterFlags",1);
  UObjectCompiledInDeferStruct
            (FNavigationFilterFlags::StaticStruct,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a8060 FUN_1403a8060 body=66 status=ok
// SIG undefined FUN_1403a8060(void)

void FUN_1403a8060(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SupportedAreaData",1);
  UObjectCompiledInDeferStruct
            (FSupportedAreaData::StaticStruct,L"/Script/NavigationSystem",*puVar1,0,0);
  return;
}



// FUNCTION 1403a80b0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ANavigationData'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ANavigationData''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_ANavigationData__(void)

{
  UObjectCompiledInDefer
            (FUN_142ba9670,thunk_FUN_142baab40,L"ANavigationData",L"/Script/NavigationSystem",0,0,0)
  ;
  return;
}



// FUNCTION 1403a80f0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ANavigationGraph'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ANavigationGraph''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_ANavigationGraph__(void)

{
  UObjectCompiledInDefer
            (FUN_142bab2b0,FUN_142ba9700,L"ANavigationGraph",L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a8130 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ANavigationGraphNode'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ANavigationGraphNode''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_ANavigationGraphNode__(void)

{
  UObjectCompiledInDefer
            (FUN_142bab2e0,AXScriptedBotSpawner::GetPrivateStaticClass,L"ANavigationGraphNode",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a8170 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ANavigationTestingActor'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ANavigationTestingActor''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_ANavigationTestingActor__(void)

{
  UObjectCompiledInDefer
            (FUN_142bab310,ARemnantQuest::GetPrivateStaticClass,L"ANavigationTestingActor",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a81b0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavAreaMeta'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavAreaMeta''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavAreaMeta__(void)

{
  UObjectCompiledInDefer
            (FUN_142ba9e60,UAITask::GetPrivateStaticClass,L"UNavAreaMeta",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a81f0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavAreaMeta_SwitchByAgent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavAreaMeta_SwitchByAgent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavAreaMeta_SwitchByAgent__(void)

{
  UObjectCompiledInDefer
            (FUN_142bab340,FUN_142ba9ea0,L"UNavAreaMeta_SwitchByAgent",L"/Script/NavigationSystem",0
             ,0,0);
  return;
}



// FUNCTION 1403a8230 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavArea_Default'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavArea_Default''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavArea_Default__(void)

{
  UObjectCompiledInDefer
            (FUN_142bab370,UAITask_LockLogic::StaticClass,L"UNavArea_Default",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a8270 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavArea_LowHeight'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavArea_LowHeight''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavArea_LowHeight__(void)

{
  UObjectCompiledInDefer
            (FUN_142bab3a0,UAITask_LockLogic::StaticClass,L"UNavArea_LowHeight",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a82b0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavArea_Null'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavArea_Null''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavArea_Null__(void)

{
  UObjectCompiledInDefer
            (FUN_142bab3d0,UAITask_LockLogic::StaticClass,L"UNavArea_Null",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a82f0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavArea_Obstacle'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavArea_Obstacle''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavArea_Obstacle__(void)

{
  UObjectCompiledInDefer
            (FUN_142bab400,UAITask_LockLogic::StaticClass,L"UNavArea_Obstacle",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a8330 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavCollision'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavCollision''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavCollision__(void)

{
  UObjectCompiledInDefer
            (FUN_142bab430,UNavCollision::GetPrivateStaticClass,L"UNavCollision",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a8370 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavLinkComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavLinkComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavLinkComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_142bab460,FUN_142ba9500,L"UNavLinkComponent",L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a83b0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavLinkCustomComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavLinkCustomComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavLinkCustomComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_142bab490,UCurveLinearColor::GetPrivateStaticClass,L"UNavLinkCustomComponent",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a83f0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavigationGraphNodeComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavigationGraphNodeComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavigationGraphNodeComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_142bab4c0,UUGStartScreenUW::GetPrivateStaticClass,L"UNavigationGraphNodeComponent",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a8430 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavigationInvokerComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavigationInvokerComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavigationInvokerComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_142bab4f0,FUN_142ba9ce0,L"UNavigationInvokerComponent",L"/Script/NavigationSystem",
             0,0,0);
  return;
}



// FUNCTION 1403a8470 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavigationPath'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavigationPath''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavigationPath__(void)

{
  UObjectCompiledInDefer
            (FUN_142baa000,UNavigationPath::GetPrivateStaticClass,L"UNavigationPath",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a84b0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavigationPathGenerator'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavigationPathGenerator''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavigationPathGenerator__(void)

{
  UObjectCompiledInDefer
            (FUN_142bab520,UNavigationPathGenerator::StaticClass,L"UNavigationPathGenerator",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a84f0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavigationQueryFilter'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavigationQueryFilter''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavigationQueryFilter__(void)

{
  UObjectCompiledInDefer
            (FUN_142bab550,UNavigationQueryFilter::GetPrivateStaticClass,L"UNavigationQueryFilter",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a8530 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavigationSystemModuleConfig'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavigationSystemModuleConfig''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavigationSystemModuleConfig__(void)

{
  UObjectCompiledInDefer
            (FUN_142bab580,UNullNavSysConfig::StaticClass,L"UNavigationSystemModuleConfig",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a8570 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavigationSystemV1'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavigationSystemV1''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavigationSystemV1__(void)

{
  UObjectCompiledInDefer
            (FUN_142baa260,FUN_142ba9430,L"UNavigationSystemV1",L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a87e0 FUN_1403a87e0 body=66 status=ok
// SIG undefined FUN_1403a87e0(void)

void FUN_1403a87e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ERecastPartitioning",1);
  UObjectCompiledInDeferEnum(ERecastPartitioning_StaticEnum,L"/Script/NavigationSystem",*puVar1,0,0)
  ;
  return;
}



// FUNCTION 1403a8830 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ANavMeshBoundsVolume'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ANavMeshBoundsVolume''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_ANavMeshBoundsVolume__(void)

{
  UObjectCompiledInDefer
            (FUN_142bad7e0,APlayerStateGunfire::GetPrivateStaticClass,L"ANavMeshBoundsVolume",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a8870 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ANavModifierVolume'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ANavModifierVolume''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_ANavModifierVolume__(void)

{
  UObjectCompiledInDefer
            (FUN_142bacf60,FUN_142bace00,L"ANavModifierVolume",L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a88b0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ARecastNavMesh'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ARecastNavMesh''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_ARecastNavMesh__(void)

{
  UObjectCompiledInDefer
            (FUN_142bad810,FUN_142bac770,L"ARecastNavMesh",L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a88f0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavLinkCustomInterface'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavLinkCustomInterface''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavLinkCustomInterface__(void)

{
  UObjectCompiledInDefer
            (FUN_142bad840,UNavLinkCustomInterface::GetPrivateStaticClass,L"UNavLinkCustomInterface"
             ,L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a8930 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavLinkHostInterface'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavLinkHostInterface''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavLinkHostInterface__(void)

{
  UObjectCompiledInDefer
            (FUN_142bad870,UNavLinkHostInterface::GetPrivateStaticClass,L"UNavLinkHostInterface",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a8970 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavLinkRenderingComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavLinkRenderingComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavLinkRenderingComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_142bad8a0,AGImpulseWindProjectile::GetPrivateStaticClass,
             L"UNavLinkRenderingComponent",L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a89b0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavLinkTrivial'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavLinkTrivial''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavLinkTrivial__(void)

{
  UObjectCompiledInDefer
            (FUN_142bad8d0,UNavLinkTrivial::StaticClass,L"UNavLinkTrivial",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a89f0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavMeshRenderingComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavMeshRenderingComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavMeshRenderingComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_142bad900,UInputKeySelector::GetPrivateStaticClass,L"UNavMeshRenderingComponent",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a8a30 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavModifierComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavModifierComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavModifierComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_142bacd60,FUN_142bacca0,L"UNavModifierComponent",L"/Script/NavigationSystem",0,0,0)
  ;
  return;
}



// FUNCTION 1403a8a70 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavNodeInterface'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavNodeInterface''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavNodeInterface__(void)

{
  UObjectCompiledInDefer
            (FUN_142bad930,UNavNodeInterface::StaticClass,L"UNavNodeInterface",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a8ab0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavRelevantComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavRelevantComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavRelevantComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_142bacd90,UThrobber::GetPrivateStaticClass,L"UNavRelevantComponent",
             L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a8af0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavTestRenderingComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNavTestRenderingComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNavTestRenderingComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_142bad960,AGImpulseWindProjectile::GetPrivateStaticClass,
             L"UNavTestRenderingComponent",L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a8b30 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_URecastFilter_UseDefaultArea'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_URecastFilter_UseDefaultArea''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_URecastFilter_UseDefaultArea__(void)

{
  UObjectCompiledInDefer
            (FUN_142bad990,URecastFilter_UseDefaultArea::StaticClass,L"URecastFilter_UseDefaultArea"
             ,L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a8b70 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_URecastNavMeshDataChunk'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_URecastNavMeshDataChunk''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_URecastNavMeshDataChunk__(void)

{
  UObjectCompiledInDefer
            (FUN_142bad9c0,URecastNavMeshDataChunk::GetPrivateStaticClass,L"URecastNavMeshDataChunk"
             ,L"/Script/NavigationSystem",0,0,0);
  return;
}



// FUNCTION 1403a8ce0 `dynamic_initializer_for_'Logic'' body=65 status=ok
// SIG undefined `dynamic_initializer_for_'Logic''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FAIResources::_dynamic_initializer_for__Logic__(void)

{
  undefined8 local_res8 [4];
  
  FName::FName(local_res8,L"Logic",1);
  DAT_146b2c540 = DAT_146b2c5bc;
  DAT_146b2c5bc = DAT_146b2c5bc + '\x01';
  _DAT_146b2c548 = local_res8[0];
  return;
}



// FUNCTION 1403a8d30 `dynamic_initializer_for_'ModuleRegistrantAIModule'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantAIModule''(void)

void _dynamic_initializer_for__ModuleRegistrantAIModule__(void)

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
    plVar1[1] = (longlong)&DAT_146b2c4b1;
    plVar1[2] = (longlong)FUN_142bc0e70;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"AIModule",1);
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



// FUNCTION 1403a8e30 `dynamic_initializer_for_'Movement'' body=65 status=ok
// SIG undefined `dynamic_initializer_for_'Movement''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FAIResources::_dynamic_initializer_for__Movement__(void)

{
  undefined8 local_res8 [4];
  
  FName::FName(local_res8,L"Movement",1);
  DAT_146b2c530 = DAT_146b2c5bc;
  DAT_146b2c5bc = DAT_146b2c5bc + '\x01';
  _DAT_146b2c538 = local_res8[0];
  return;
}



// FUNCTION 1403a8e80 `dynamic_initializer_for_'Perception'' body=65 status=ok
// SIG undefined `dynamic_initializer_for_'Perception''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FAIResources::_dynamic_initializer_for__Perception__(void)

{
  undefined8 local_res8 [4];
  
  FName::FName(local_res8,L"Perception",1);
  DAT_146b2c550 = DAT_146b2c5bc;
  DAT_146b2c5bc = DAT_146b2c5bc + '\x01';
  _DAT_146b2c558 = local_res8[0];
  return;
}



// FUNCTION 1403a8ee0 `dynamic_initializer_for_'ResourceSetup'' body=44 status=ok
// SIG undefined `dynamic_initializer_for_'ResourceSetup''(void)

void _dynamic_initializer_for__ResourceSetup__(void)

{
  FAIResources::RegisterResource(&DAT_146b2c530);
  FAIResources::RegisterResource(&DAT_146b2c540);
  FAIResources::RegisterResource(&DAT_146b2c550);
  return;
}



// FUNCTION 1403a9050 `dynamic_initializer_for_'TAG_EQS'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'TAG_EQS''(void)

void EVisLogTags::_dynamic_initializer_for__TAG_EQS__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146691070,0);
  FGenericPlatformString::Memcpy(DAT_146691070,L"LogEQS",0xe);
  atexit((_func_5014 *)&LAB_143ebf560);
  return;
}



// FUNCTION 1403a90d0 `dynamic_initializer_for_'CVarDebugSelectedActors'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDebugSelectedActors''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FCrowdDebug::_dynamic_initializer_for__CVarDebugSelectedActors__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b2c7a8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"ai.crowd.DebugSelectedActors",&DAT_146b2c750,
                  L"Enable debug drawing for selected crowd agent.\n0: Disable, 1: Enable",0);
  _DAT_146b2c7a0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebf580);
  return;
}



// FUNCTION 1403a9140 `dynamic_initializer_for_'CVarDebugVisLog'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDebugVisLog''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FCrowdDebug::_dynamic_initializer_for__CVarDebugVisLog__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b2c7b8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"ai.crowd.DebugVisLog",&DAT_146b2c754,
                  L"Enable detailed vislog recording for all crowd agents.\n0: Disable, 1: Enable",0
                 );
  _DAT_146b2c7b0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebf5d0);
  return;
}



// FUNCTION 1403a91b0 `dynamic_initializer_for_'CVarDrawDebugBoundaries'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDrawDebugBoundaries''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FCrowdDebug::_dynamic_initializer_for__CVarDrawDebugBoundaries__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b2c828 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"ai.crowd.DrawDebugBoundaries",&DAT_146b2c758,
                  L"Draw shared navmesh boundaries used by crowd simulation.\n0: Disable, 1: Enable"
                  ,0);
  _DAT_146b2c820 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebf620);
  return;
}



// FUNCTION 1403a9220 `dynamic_initializer_for_'CVarDrawDebugCollisionSegments'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDrawDebugCollisionSegments''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FCrowdDebug::_dynamic_initializer_for__CVarDrawDebugCollisionSegments__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b2c7d8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"ai.crowd.DrawDebugCollisionSegments",&DAT_1466910b4,
                  L"Draw colliding navmesh edges, requires ai.crowd.DebugSelectedActors.\n0: Disable, 1: Enable"
                  ,0);
  _DAT_146b2c7d0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebf670);
  return;
}



// FUNCTION 1403a9290 `dynamic_initializer_for_'CVarDrawDebugCorners'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDrawDebugCorners''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FCrowdDebug::_dynamic_initializer_for__CVarDrawDebugCorners__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b2c7c8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"ai.crowd.DrawDebugCorners",&DAT_1466910b0,
                  L"Draw path corners data, requires ai.crowd.DebugSelectedActors.\n0: Disable, 1: Enable"
                  ,0);
  _DAT_146b2c7c0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebf6c0);
  return;
}



// FUNCTION 1403a9300 `dynamic_initializer_for_'CVarDrawDebugNeighbors'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDrawDebugNeighbors''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FCrowdDebug::_dynamic_initializer_for__CVarDrawDebugNeighbors__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b2c818 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"ai.crowd.DrawDebugNeighbors",&DAT_1466910c4,
                  L"Draw current neighbors data, requires ai.crowd.DebugSelectedActors.\n0: Disable, 1: Enable"
                  ,0);
  _DAT_146b2c810 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebf710);
  return;
}



// FUNCTION 1403a9370 `dynamic_initializer_for_'CVarDrawDebugPath'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDrawDebugPath''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FCrowdDebug::_dynamic_initializer_for__CVarDrawDebugPath__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b2c7e8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"ai.crowd.DrawDebugPath",&DAT_1466910b8,
                  L"Draw active paths, requires ai.crowd.DebugSelectedActors.\n0: Disable, 1: Enable"
                  ,0);
  _DAT_146b2c7e0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebf760);
  return;
}



// FUNCTION 1403a93e0 `dynamic_initializer_for_'CVarDrawDebugPathOptimization'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDrawDebugPathOptimization''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FCrowdDebug::_dynamic_initializer_for__CVarDrawDebugPathOptimization__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b2c808 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"ai.crowd.DrawDebugPathOptimization",&DAT_1466910c0,
                  L"Draw path optimization data, requires ai.crowd.DebugSelectedActors.\n0: Disable, 1: Enable"
                  ,0);
  _DAT_146b2c800 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebf7b0);
  return;
}



// FUNCTION 1403a9450 `dynamic_initializer_for_'CVarDrawDebugVelocityObstacles'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDrawDebugVelocityObstacles''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FCrowdDebug::_dynamic_initializer_for__CVarDrawDebugVelocityObstacles__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b2c7f8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"ai.crowd.DrawDebugVelocityObstacles",&DAT_1466910bc,
                  L"Draw velocity obstacle sampling, requires ai.crowd.DebugSelectedActors.\n0: Disable, 1: Enable"
                  ,0);
  _DAT_146b2c7f0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebf800);
  return;
}



// FUNCTION 1403a9600 `dynamic_initializer_for_'TAG_EQS'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'TAG_EQS''(void)

void EVisLogTags::_dynamic_initializer_for__TAG_EQS__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146691290,0);
  FGenericPlatformString::Memcpy(DAT_146691290,L"LogEQS",0xe);
  atexit((_func_5014 *)&LAB_143ebf8d0);
  return;
}



// FUNCTION 1403a9850 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderBoolValue'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderBoolValue''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderBoolValue__
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
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145813c18;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AIDataProviderBoolValue",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a98b0 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderFloatValue'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderFloatValue''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderFloatValue__
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
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145813d30;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AIDataProviderFloatValue",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a9910 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderIntValue'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderIntValue''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderIntValue__
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
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145813e48;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AIDataProviderIntValue",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a9970 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderStructValue'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderStructValue''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderStructValue__
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
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145813f60;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AIDataProviderStructValue",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a99d0 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderTypedValue'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderTypedValue''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderTypedValue__
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
    *puVar1 = &PTR_FUN_145814078;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AIDataProviderTypedValue",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a9a30 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderValue'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderValue''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderValue__
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
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145814190;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AIDataProviderValue",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a9a90 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAISenseAffiliationFilter'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAISenseAffiliationFilter''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFAISenseAffiliationFilter__
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
    *(undefined4 *)(puVar1 + 1) = 4;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_1440be8b8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AISenseAffiliationFilter",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a9af0 FUN_1403a9af0 body=92 status=ok
// SIG undefined FUN_1403a9af0(void)

void FUN_1403a9af0(void)

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
    *puVar1 = &PTR_FUN_145814570;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AIStimulus",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a9b50 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFActorPerceptionBlueprintInfo'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFActorPerceptionBlueprintInfo''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFActorPerceptionBlueprintInfo__
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
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145814328;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ActorPerceptionBlueprintInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403a9bd0 FUN_1403a9bd0 body=66 status=ok
// SIG undefined FUN_1403a9bd0(void)

void FUN_1403a9bd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EAISenseNotifyType",1);
  UObjectCompiledInDeferEnum(EAISenseNotifyType_StaticEnum,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403a9c20 FUN_1403a9c20 body=66 status=ok
// SIG undefined FUN_1403a9c20(void)

void FUN_1403a9c20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIDataProviderBoolValue",1);
  UObjectCompiledInDeferStruct
            (FAIDataProviderBoolValue::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403a9c70 FUN_1403a9c70 body=66 status=ok
// SIG undefined FUN_1403a9c70(void)

void FUN_1403a9c70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIDataProviderFloatValue",1);
  UObjectCompiledInDeferStruct
            (FAIDataProviderFloatValue::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403a9cc0 FUN_1403a9cc0 body=66 status=ok
// SIG undefined FUN_1403a9cc0(void)

void FUN_1403a9cc0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIDataProviderIntValue",1);
  UObjectCompiledInDeferStruct
            (FAIDataProviderIntValue::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403a9d10 FUN_1403a9d10 body=66 status=ok
// SIG undefined FUN_1403a9d10(void)

void FUN_1403a9d10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIDataProviderStructValue",1);
  UObjectCompiledInDeferStruct
            (FAIDataProviderStructValue::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403a9d60 FUN_1403a9d60 body=66 status=ok
// SIG undefined FUN_1403a9d60(void)

void FUN_1403a9d60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIDataProviderTypedValue",1);
  UObjectCompiledInDeferStruct
            (FAIDataProviderTypedValue::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403a9db0 FUN_1403a9db0 body=66 status=ok
// SIG undefined FUN_1403a9db0(void)

void FUN_1403a9db0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIDataProviderValue",1);
  UObjectCompiledInDeferStruct(FAIDataProviderValue::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403a9e00 FUN_1403a9e00 body=66 status=ok
// SIG undefined FUN_1403a9e00(void)

void FUN_1403a9e00(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AISenseAffiliationFilter",1);
  UObjectCompiledInDeferStruct
            (FAISenseAffiliationFilter::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403a9e50 FUN_1403a9e50 body=66 status=ok
// SIG undefined FUN_1403a9e50(void)

void FUN_1403a9e50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIStimulus",1);
  UObjectCompiledInDeferStruct(FFileManifestData::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403a9ea0 FUN_1403a9ea0 body=66 status=ok
// SIG undefined FUN_1403a9ea0(void)

void FUN_1403a9ea0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ActorPerceptionBlueprintInfo",1);
  UObjectCompiledInDeferStruct
            (FActorPerceptionBlueprintInfo::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403a9ef0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_AAIController'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_AAIController''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_AAIController__(void)

{
  UObjectCompiledInDefer(FUN_142c2ca90,&LAB_1407b0940,L"AAIController",L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403a9f30 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIAsyncTaskBlueprintProxy'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIAsyncTaskBlueprintProxy''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAIAsyncTaskBlueprintProxy__(void)

{
  UObjectCompiledInDefer
            (FUN_142c2c310,UAIAsyncTaskBlueprintProxy::GetPrivateStaticClass,
             L"UAIAsyncTaskBlueprintProxy",L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403a9f70 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIBlueprintHelperLibrary'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIBlueprintHelperLibrary''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAIBlueprintHelperLibrary__(void)

{
  UObjectCompiledInDefer
            (FUN_142c2c4e0,UAIBlueprintHelperLibrary::GetPrivateStaticClass,
             L"UAIBlueprintHelperLibrary",L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403a9fb0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIDataProvider'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIDataProvider''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAIDataProvider__(void)

{
  UObjectCompiledInDefer
            (FUN_142c2d320,UAIDataProvider::StaticClass,L"UAIDataProvider",L"/Script/AIModule",0,0,0
            );
  return;
}



// FUNCTION 1403a9ff0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIDataProvider_QueryParams'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIDataProvider_QueryParams''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAIDataProvider_QueryParams__(void)

{
  UObjectCompiledInDefer
            (FUN_142c2c080,UAIDataProvider_QueryParams::StaticClass,L"UAIDataProvider_QueryParams",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403aa030 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIDataProvider_Random'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIDataProvider_Random''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAIDataProvider_Random__(void)

{
  UObjectCompiledInDefer
            (FUN_142c2e640,UAIDataProvider_Random::StaticClass,L"UAIDataProvider_Random",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403aa070 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIHotSpotManager'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIHotSpotManager''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAIHotSpotManager__(void)

{
  UObjectCompiledInDefer
            (FUN_142c2e670,UAIHotSpotManager::GetPrivateStaticClass,L"UAIHotSpotManager",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403aa0b0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIPerceptionComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIPerceptionComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAIPerceptionComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_142c2c8e0,UHomeWidget::GetPrivateStaticClass,L"UAIPerceptionComponent",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403aa0f0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIPerceptionListenerInterface'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIPerceptionListenerInterface''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAIPerceptionListenerInterface__(void)

{
  UObjectCompiledInDefer
            (FUN_142c2e6a0,UAIPerceptionListenerInterface::GetPrivateStaticClass,
             L"UAIPerceptionListenerInterface",L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403aa130 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIPerceptionStimuliSourceComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIPerceptionStimuliSourceComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAIPerceptionStimuliSourceComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_142c2cff0,FUN_142c2cf40,L"UAIPerceptionStimuliSourceComponent",L"/Script/AIModule",
             0,0,0);
  return;
}



// FUNCTION 1403aa170 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIPerceptionSystem'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIPerceptionSystem''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAIPerceptionSystem__(void)

{
  UObjectCompiledInDefer
            (FUN_142c2d100,FUN_142c2c780,L"UAIPerceptionSystem",L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403aa6c0 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIDamageEvent'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIDamageEvent''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFAIDamageEvent__(void)

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
    *puVar1 = &PTR_FUN_145819988;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AIDamageEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403aa720 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIMoveRequest'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIMoveRequest''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFAIMoveRequest__(void)

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
    *puVar1 = &PTR_FUN_14581a950;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AIMoveRequest",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403aa780 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAINoiseEvent'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAINoiseEvent''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFAINoiseEvent__(void)

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
    *puVar1 = &PTR_FUN_145819ab0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AINoiseEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403aa7e0 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIPredictionEvent'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIPredictionEvent''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFAIPredictionEvent__(void)

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
    *puVar1 = &PTR_FUN_145819bd8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AIPredictionEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403aa840 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIRequestID'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAIRequestID''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFAIRequestID__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 4;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_14581aa68;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AIRequestID",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403aa8a0 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAISightEvent'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAISightEvent''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFAISightEvent__(void)

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
    *puVar1 = &PTR_FUN_145819d10;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AISightEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403aa900 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAITeamStimulusEvent'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAITeamStimulusEvent''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFAITeamStimulusEvent__
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
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145819e28;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AITeamStimulusEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403aa960 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAITouchEvent'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFAITouchEvent''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFAITouchEvent__(void)

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
    *puVar1 = &PTR_FUN_145819f40;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AITouchEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403aa9c0 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFBehaviorTreeTemplateInfo'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFBehaviorTreeTemplateInfo''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFBehaviorTreeTemplateInfo__
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
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1447cfb08;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BehaviorTreeTemplateInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403aaa20 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFBlackboardKeySelector'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFBlackboardKeySelector''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFBlackboardKeySelector__
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
    *puVar1 = &PTR_FUN_14581ac30;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BlackboardKeySelector",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403aaa80 FUN_1403aaa80 body=92 status=ok
// SIG undefined FUN_1403aaa80(void)

void FUN_1403aaa80(void)

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
    *puVar1 = &PTR_FUN_145819850;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SenseMetadata",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403aab00 FUN_1403aab00 body=66 status=ok
// SIG undefined FUN_1403aab00(void)

void FUN_1403aab00(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EAILockSource",1);
  UObjectCompiledInDeferEnum(FUN_142c33180,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403aab50 FUN_1403aab50 body=66 status=ok
// SIG undefined FUN_1403aab50(void)

void FUN_1403aab50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EAIOptionFlag",1);
  UObjectCompiledInDeferEnum(EAIOptionFlag_StaticEnum,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403aaba0 FUN_1403aaba0 body=66 status=ok
// SIG undefined FUN_1403aaba0(void)

void FUN_1403aaba0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EAIRequestPriority",1);
  UObjectCompiledInDeferEnum(FUN_142c33200,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403aabf0 FUN_1403aabf0 body=66 status=ok
// SIG undefined FUN_1403aabf0(void)

void FUN_1403aabf0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EAITaskPriority",1);
  UObjectCompiledInDeferEnum(EAITaskPriority_StaticEnum,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403aac40 FUN_1403aac40 body=66 status=ok
// SIG undefined FUN_1403aac40(void)

void FUN_1403aac40(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EBTFlowAbortMode",1);
  UObjectCompiledInDeferEnum(EBTFlowAbortMode_StaticEnum,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403aac90 FUN_1403aac90 body=66 status=ok
// SIG undefined FUN_1403aac90(void)

void FUN_1403aac90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EBTNodeResult",1);
  UObjectCompiledInDeferEnum(EBTNodeResult_StaticEnum,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403aace0 FUN_1403aace0 body=66 status=ok
// SIG undefined FUN_1403aace0(void)

void FUN_1403aace0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGenericAICheck",1);
  UObjectCompiledInDeferEnum(EGenericAICheck_StaticEnum,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403aad30 FUN_1403aad30 body=66 status=ok
// SIG undefined FUN_1403aad30(void)

void FUN_1403aad30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EPawnActionAbortState",1);
  UObjectCompiledInDeferEnum(EPawnActionAbortState_StaticEnum,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403aad80 FUN_1403aad80 body=66 status=ok
// SIG undefined FUN_1403aad80(void)

void FUN_1403aad80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EPawnActionEventType",1);
  UObjectCompiledInDeferEnum(EPawnActionEventType_StaticEnum,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403aadd0 FUN_1403aadd0 body=66 status=ok
// SIG undefined FUN_1403aadd0(void)

void FUN_1403aadd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EPawnActionResult",1);
  UObjectCompiledInDeferEnum(EPawnActionResult_StaticEnum,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403aae20 FUN_1403aae20 body=66 status=ok
// SIG undefined FUN_1403aae20(void)

void FUN_1403aae20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"FAIDistanceType",1);
  UObjectCompiledInDeferEnum(FAIDistanceType_StaticEnum,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403aae70 FUN_1403aae70 body=66 status=ok
// SIG undefined FUN_1403aae70(void)

void FUN_1403aae70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIDamageEvent",1);
  UObjectCompiledInDeferStruct(FAIDamageEvent::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403aaec0 FUN_1403aaec0 body=66 status=ok
// SIG undefined FUN_1403aaec0(void)

void FUN_1403aaec0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIMoveRequest",1);
  UObjectCompiledInDeferStruct(FAIMoveRequest::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403aaf10 FUN_1403aaf10 body=66 status=ok
// SIG undefined FUN_1403aaf10(void)

void FUN_1403aaf10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AINoiseEvent",1);
  UObjectCompiledInDeferStruct(FAINoiseEvent::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403aaf60 FUN_1403aaf60 body=66 status=ok
// SIG undefined FUN_1403aaf60(void)

void FUN_1403aaf60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIPredictionEvent",1);
  UObjectCompiledInDeferStruct(FAIPredictionEvent::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403aafb0 FUN_1403aafb0 body=66 status=ok
// SIG undefined FUN_1403aafb0(void)

void FUN_1403aafb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIRequestID",1);
  UObjectCompiledInDeferStruct(FAIRequestID::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403ab000 FUN_1403ab000 body=66 status=ok
// SIG undefined FUN_1403ab000(void)

void FUN_1403ab000(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AISightEvent",1);
  UObjectCompiledInDeferStruct(FAISightEvent::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403ab050 FUN_1403ab050 body=66 status=ok
// SIG undefined FUN_1403ab050(void)

void FUN_1403ab050(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AITeamStimulusEvent",1);
  UObjectCompiledInDeferStruct(FAITeamStimulusEvent::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403ab0a0 FUN_1403ab0a0 body=66 status=ok
// SIG undefined FUN_1403ab0a0(void)

void FUN_1403ab0a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AITouchEvent",1);
  UObjectCompiledInDeferStruct(FAITouchEvent::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403ab0f0 FUN_1403ab0f0 body=66 status=ok
// SIG undefined FUN_1403ab0f0(void)

void FUN_1403ab0f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"BehaviorTreeTemplateInfo",1);
  UObjectCompiledInDeferStruct
            (FBehaviorTreeTemplateInfo::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403ab140 FUN_1403ab140 body=66 status=ok
// SIG undefined FUN_1403ab140(void)

void FUN_1403ab140(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"BlackboardKeySelector",1);
  UObjectCompiledInDeferStruct(FBlackboardKeySelector::StaticStruct,L"/Script/AIModule",*puVar1,0,0)
  ;
  return;
}



// FUNCTION 1403ab190 FUN_1403ab190 body=66 status=ok
// SIG undefined FUN_1403ab190(void)

void FUN_1403ab190(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SenseMetadata",1);
  UObjectCompiledInDeferStruct(FPawnActionStack::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403ab1e0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIResourceInterface'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIResourceInterface''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAIResourceInterface__(void)

{
  UObjectCompiledInDefer
            (FUN_142c33f30,UAIResourceInterface::StaticClass,L"UAIResourceInterface",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab220 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIResource_Logic'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIResource_Logic''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAIResource_Logic__(void)

{
  UObjectCompiledInDefer
            (FUN_142c33f60,UAIResource_Logic::GetPrivateStaticClass,L"UAIResource_Logic",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab260 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIResource_Movement'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAIResource_Movement''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAIResource_Movement__(void)

{
  UObjectCompiledInDefer
            (FUN_142c33f90,UAIResource_Movement::GetPrivateStaticClass,L"UAIResource_Movement",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab2a0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISense'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISense''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISense__(void)

{
  UObjectCompiledInDefer(FUN_142c327e0,thunk_FUN_142c33440,L"UAISense",L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab2e0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseBlueprintListener'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseBlueprintListener''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISenseBlueprintListener__(void)

{
  UObjectCompiledInDefer
            (FUN_142c33fc0,UAISenseBlueprintListener::StaticClass,L"UAISenseBlueprintListener",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab320 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseConfig'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseConfig''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISenseConfig__(void)

{
  UObjectCompiledInDefer
            (FUN_142c31830,UAISenseConfig::StaticClass,L"UAISenseConfig",L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab360 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseConfig_Blueprint'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseConfig_Blueprint''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISenseConfig_Blueprint__(void)

{
  UObjectCompiledInDefer
            (FUN_142c33ff0,UAISenseConfig_Blueprint::StaticClass,L"UAISenseConfig_Blueprint",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab3a0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseConfig_Damage'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseConfig_Damage''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISenseConfig_Damage__(void)

{
  UObjectCompiledInDefer
            (FUN_142c34020,UAISenseConfig_Damage::StaticClass,L"UAISenseConfig_Damage",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab3e0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseConfig_Hearing'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseConfig_Hearing''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISenseConfig_Hearing__(void)

{
  UObjectCompiledInDefer
            (FUN_142c34050,UAISenseConfig_Hearing::GetPrivateStaticClass,L"UAISenseConfig_Hearing",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab420 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseConfig_Prediction'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseConfig_Prediction''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISenseConfig_Prediction__(void)

{
  UObjectCompiledInDefer
            (FUN_142c34080,UAISenseConfig_Prediction::StaticClass,L"UAISenseConfig_Prediction",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab460 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseConfig_Sight'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseConfig_Sight''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISenseConfig_Sight__(void)

{
  UObjectCompiledInDefer
            (FUN_142c340b0,UAISenseConfig_Sight::GetPrivateStaticClass,L"UAISenseConfig_Sight",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab4a0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseConfig_Team'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseConfig_Team''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISenseConfig_Team__(void)

{
  UObjectCompiledInDefer
            (FUN_142c340e0,UAISenseConfig_Team::StaticClass,L"UAISenseConfig_Team",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab4e0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseConfig_Touch'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseConfig_Touch''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISenseConfig_Touch__(void)

{
  UObjectCompiledInDefer
            (FUN_142c34110,UAISenseConfig_Touch::StaticClass,L"UAISenseConfig_Touch",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab520 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseEvent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseEvent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISenseEvent__(void)

{
  UObjectCompiledInDefer
            (FUN_142c323f0,UAISenseEvent::StaticClass,L"UAISenseEvent",L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab560 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseEvent_Damage'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseEvent_Damage''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISenseEvent_Damage__(void)

{
  UObjectCompiledInDefer
            (FUN_142c34140,UAISenseEvent_Damage::GetPrivateStaticClass,L"UAISenseEvent_Damage",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab5a0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseEvent_Hearing'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISenseEvent_Hearing''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISenseEvent_Hearing__(void)

{
  UObjectCompiledInDefer
            (FUN_142c34170,UAISenseEvent_Hearing::GetPrivateStaticClass,L"UAISenseEvent_Hearing",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab5e0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISense_Blueprint'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISense_Blueprint''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISense_Blueprint__(void)

{
  UObjectCompiledInDefer
            (FUN_142c30c50,FUN_142c32970,L"UAISense_Blueprint",L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab620 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISense_Damage'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISense_Damage''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISense_Damage__(void)

{
  UObjectCompiledInDefer
            (FUN_142c30f70,UGameplayTask_SpawnActor::GetPrivateStaticClass,L"UAISense_Damage",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab660 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISense_Hearing'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISense_Hearing''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISense_Hearing__(void)

{
  UObjectCompiledInDefer(FUN_142c31b90,FUN_142c31250,L"UAISense_Hearing",L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab6a0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISense_Prediction'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISense_Prediction''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISense_Prediction__(void)

{
  UObjectCompiledInDefer
            (FUN_142c32270,UGameplayTask_SpawnActor::GetPrivateStaticClass,L"UAISense_Prediction",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab6e0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISense_Sight'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISense_Sight''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISense_Sight__(void)

{
  UObjectCompiledInDefer(FUN_142c341a0,FUN_142c325b0,L"UAISense_Sight",L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab720 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISense_Team'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISense_Team''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISense_Team__(void)

{
  UObjectCompiledInDefer
            (FUN_142c341d0,UGameplayTask_SpawnActor::GetPrivateStaticClass,L"UAISense_Team",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab760 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISense_Touch'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISense_Touch''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISense_Touch__(void)

{
  UObjectCompiledInDefer
            (FUN_142c34200,UGameplayTask_SpawnActor::GetPrivateStaticClass,L"UAISense_Touch",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab7a0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISightTargetInterface'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISightTargetInterface''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISightTargetInterface__(void)

{
  UObjectCompiledInDefer
            (FUN_142c34230,UAISightTargetInterface::GetPrivateStaticClass,L"UAISightTargetInterface"
             ,L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab7e0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISystem'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAISystem''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAISystem__(void)

{
  UObjectCompiledInDefer(FUN_142c311c0,FUN_142c32730,L"UAISystem",L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab820 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAITask'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAITask''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAITask__(void)

{
  UObjectCompiledInDefer(FUN_142c31500,&LAB_14079fea0,L"UAITask",L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab860 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAITask_LockLogic'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAITask_LockLogic''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAITask_LockLogic__(void)

{
  UObjectCompiledInDefer
            (FUN_142c34260,UAITask_LockLogic::StaticClass,L"UAITask_LockLogic",L"/Script/AIModule",0
             ,0,0);
  return;
}



// FUNCTION 1403ab8a0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAITask_MoveTo'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAITask_MoveTo''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAITask_MoveTo__(void)

{
  UObjectCompiledInDefer
            (FUN_142c32910,UAITask_MoveTo::GetPrivateStaticClass,L"UAITask_MoveTo",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab8e0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAITask_RunEQS'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAITask_RunEQS''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAITask_RunEQS__(void)

{
  UObjectCompiledInDefer
            (FUN_142c317d0,UAITask_RunEQS::GetPrivateStaticClass,L"UAITask_RunEQS",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab920 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UBehaviorTree'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UBehaviorTree''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UBehaviorTree__(void)

{
  UObjectCompiledInDefer
            (FUN_142c34290,UBehaviorTree::StaticClass,L"UBehaviorTree",L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab960 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UBehaviorTreeComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UBehaviorTreeComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UBehaviorTreeComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_142c31030,UProgressBar::GetPrivateStaticClass,L"UBehaviorTreeComponent",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab9a0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UBehaviorTreeManager'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UBehaviorTreeManager''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UBehaviorTreeManager__(void)

{
  UObjectCompiledInDefer
            (FUN_142c342c0,UBehaviorTreeManager::GetPrivateStaticClass,L"UBehaviorTreeManager",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ab9e0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UBehaviorTreeTypes'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UBehaviorTreeTypes''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UBehaviorTreeTypes__(void)

{
  UObjectCompiledInDefer
            (FUN_142c342f0,UBehaviorTreeTypes::StaticClass,L"UBehaviorTreeTypes",L"/Script/AIModule"
             ,0,0,0);
  return;
}



// FUNCTION 1403abf30 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFBTCompositeChild'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFBTCompositeChild''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFBTCompositeChild__(void)

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
    *puVar1 = &PTR_FUN_14581f8c0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BTCompositeChild",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403abf90 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFBTDecoratorLogic'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFBTDecoratorLogic''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFBTDecoratorLogic__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 4;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    *puVar1 = &PTR_FUN_14581f9d8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BTDecoratorLogic",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403abff0 `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFBlackboardEntry'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AIModule_StaticRegisterNativesFBlackboardEntry''(void)

void _dynamic_initializer_for__ScriptStruct_AIModule_StaticRegisterNativesFBlackboardEntry__(void)

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
    *puVar1 = &PTR_FUN_14581f610;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BlackboardEntry",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1403ac070 FUN_1403ac070 body=66 status=ok
// SIG undefined FUN_1403ac070(void)

void FUN_1403ac070(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EArithmeticKeyOperation",1);
  UObjectCompiledInDeferEnum(EArithmeticKeyOperation_StaticEnum,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403ac0c0 FUN_1403ac0c0 body=66 status=ok
// SIG undefined FUN_1403ac0c0(void)

void FUN_1403ac0c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EBTBlackboardRestart",1);
  UObjectCompiledInDeferEnum(EBTBlackboardRestart_StaticEnum,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403ac110 FUN_1403ac110 body=66 status=ok
// SIG undefined FUN_1403ac110(void)

void FUN_1403ac110(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EBTChildIndex",1);
  UObjectCompiledInDeferEnum(EBTChildIndex_StaticEnum,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403ac160 FUN_1403ac160 body=66 status=ok
// SIG undefined FUN_1403ac160(void)

void FUN_1403ac160(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EBTDecoratorLogic",1);
  UObjectCompiledInDeferEnum(EBTDecoratorLogic_StaticEnum,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403ac1b0 FUN_1403ac1b0 body=66 status=ok
// SIG undefined FUN_1403ac1b0(void)

void FUN_1403ac1b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EBTParallelMode",1);
  UObjectCompiledInDeferEnum(EBTParallelMode_StaticEnum,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403ac200 FUN_1403ac200 body=66 status=ok
// SIG undefined FUN_1403ac200(void)

void FUN_1403ac200(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EBasicKeyOperation",1);
  UObjectCompiledInDeferEnum(EBasicKeyOperation_StaticEnum,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403ac250 FUN_1403ac250 body=66 status=ok
// SIG undefined FUN_1403ac250(void)

void FUN_1403ac250(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EBlackBoardEntryComparison",1);
  UObjectCompiledInDeferEnum(EBlackBoardEntryComparison_StaticEnum,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403ac2a0 FUN_1403ac2a0 body=66 status=ok
// SIG undefined FUN_1403ac2a0(void)

void FUN_1403ac2a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ETextKeyOperation",1);
  UObjectCompiledInDeferEnum(ETextKeyOperation_StaticEnum,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403ac2f0 FUN_1403ac2f0 body=66 status=ok
// SIG undefined FUN_1403ac2f0(void)

void FUN_1403ac2f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"BTCompositeChild",1);
  UObjectCompiledInDeferStruct(FBTCompositeChild::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403ac340 FUN_1403ac340 body=66 status=ok
// SIG undefined FUN_1403ac340(void)

void FUN_1403ac340(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"BTDecoratorLogic",1);
  UObjectCompiledInDeferStruct(FBTDecoratorLogic::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403ac390 FUN_1403ac390 body=66 status=ok
// SIG undefined FUN_1403ac390(void)

void FUN_1403ac390(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"BlackboardEntry",1);
  UObjectCompiledInDeferStruct(FBlackboardEntry::StaticStruct,L"/Script/AIModule",*puVar1,0,0);
  return;
}



// FUNCTION 1403ac3e0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UBTAuxiliaryNode'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UBTAuxiliaryNode''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UBTAuxiliaryNode__(void)

{
  UObjectCompiledInDefer
            (FUN_142c360c0,UBTAuxiliaryNode::StaticClass,L"UBTAuxiliaryNode",L"/Script/AIModule",0,0
             ,0);
  return;
}



// FUNCTION 1403ac420 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UBTCompositeNode'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UBTCompositeNode''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UBTCompositeNode__(void)

{
  UObjectCompiledInDefer
            (FUN_142c36570,UBTCompositeNode::GetPrivateStaticClass,L"UBTCompositeNode",
             L"/Script/AIModule",0,0,0);
  return;
}



// FUNCTION 1403ac460 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UBTComposite_Selector'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UBTComposite_Selector''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UBTComposite_Selector__(void)

{
  UObjectCompiledInDefer
            (FUN_142c37e60,UBTComposite_Selector::StaticClass,L"UBTComposite_Selector",
             L"/Script/AIModule",0,0,0);
  return;
}


