// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14028d460 `dynamic_initializer_for_'DepthPipeline'' body=78 status=ok
// SIG undefined `dynamic_initializer_for_'DepthPipeline''(void)

void _dynamic_initializer_for__DepthPipeline__(void)

{
  FUN_1419d7f20(&DAT_146a10c00,L"DepthPipeline",&DAT_146a14f50,0,0,0,&DAT_146a109d0,1);
  atexit((_func_5014 *)&LAB_143e89170);
  return;
}



// FUNCTION 14028d4b0 `dynamic_initializer_for_'DepthPosOnlyNoPixelPipeline'' body=71 status=ok
// SIG undefined `dynamic_initializer_for_'DepthPosOnlyNoPixelPipeline''(void)

void _dynamic_initializer_for__DepthPosOnlyNoPixelPipeline__(void)

{
  FUN_1419d7f20(&DAT_146a10b90,L"DepthPosOnlyNoPixelPipeline",&DAT_146a150a0,0,0,0,0,1);
  atexit((_func_5014 *)&LAB_143e89180);
  return;
}



// FUNCTION 14028d520 FUN_14028d520 body=67 status=ok
// SIG undefined FUN_14028d520(void)

void FUN_14028d520(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1464c1810 + 0x28))();
    atexit(_dynamic_atexit_destructor_for__GTileRendererVertexBuffer__);
    return;
  }
  FUN_141edf270(&PTR_PTR_1464c1810);
  atexit(_dynamic_atexit_destructor_for__GTileRendererVertexBuffer__);
  return;
}



// FUNCTION 14028d580 FUN_14028d580 body=266 status=ok
// SIG undefined FUN_14028d580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028d580(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar1[1] = (longlong)&LAB_141b0be50;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a110d0 =
       (**(code **)(*DAT_1468b1f88 + 0x78))
                 (DAT_1468b1f88,L"r.AOListMemory",&DAT_144dcb974,&local_18,0);
  _DAT_146a110c8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14028d679;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14028d679:
  atexit(FUN_143e89240);
  return;
}



// FUNCTION 14028d690 FUN_14028d690 body=266 status=ok
// SIG undefined FUN_14028d690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028d690(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar1[1] = (longlong)&LAB_141b0be60;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a110e0 =
       (**(code **)(*DAT_1468b1f88 + 0x78))
                 (DAT_1468b1f88,L"r.AOListMeshDistanceFields",&DAT_144dcb9bc,&local_18,0);
  _DAT_146a110d8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14028d789;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14028d789:
  atexit(FUN_143e89290);
  return;
}



// FUNCTION 14028d8a0 FUN_14028d8a0 body=405 status=ok
// SIG undefined FUN_14028d8a0(void)

void FUN_14028d8a0(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  longlong local_48;
  int local_40;
  int local_3c;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_141b4b3d0(&local_48,local_res8[0]);
  iVar3 = local_40;
  lVar13 = (longlong)local_40;
  local_38 = L"IntegratedLightScattering";
  local_28 = 0x90;
  pwStack_30 = L"Texture3D";
  local_40 = local_40 + 1;
  uStack_24 = 9;
  uStack_1c = 1;
  local_18 = 1;
  uStack_10 = 0;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  uVar7 = uStack_1c;
  uVar4 = local_28;
  iVar3 = local_40;
  uVar5 = (undefined4)uStack_24;
  uVar6 = uStack_24._4_4_;
  local_28 = 0x98;
  uStack_24 = 8;
  puVar1 = (undefined8 *)(local_48 + lVar13 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = pwStack_30;
  uStack_1c = 1;
  uVar8 = (undefined4)local_18;
  uVar9 = local_18._4_4_;
  uVar10 = (undefined4)uStack_10;
  uVar11 = uStack_10._4_4_;
  local_18 = 1;
  puVar2 = (undefined4 *)(local_48 + 0x10 + lVar13 * 0x30);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  uStack_10 = 0;
  puVar2 = (undefined4 *)(local_48 + 0x20 + lVar13 * 0x30);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  puVar2[2] = uVar10;
  puVar2[3] = uVar11;
  lVar13 = (longlong)local_40;
  local_38 = L"IntegratedLightScatteringSampler";
  pwStack_30 = L"SamplerState";
  local_40 = local_40 + 1;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  puVar1 = (undefined8 *)(local_48 + lVar13 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = pwStack_30;
  puVar2 = (undefined4 *)(local_48 + 0x10 + lVar13 * 0x30);
  *puVar2 = local_28;
  puVar2[1] = (undefined4)uStack_24;
  puVar2[2] = uStack_24._4_4_;
  puVar2[3] = uStack_1c;
  puVar2 = (undefined4 *)(local_48 + 0x20 + lVar13 * 0x30);
  *puVar2 = (undefined4)local_18;
  puVar2[1] = local_18._4_4_;
  puVar2[2] = (undefined4)uStack_10;
  puVar2[3] = uStack_10._4_4_;
  uVar12 = FName::FName(local_res8,L"FFogUniformParameters",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_146a177d0,uVar12,L"FFogUniformParameters",L"FogStruct",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0xa0,&local_48,1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143e892e0);
  return;
}



// FUNCTION 14028da40 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FShadowObjectCullPS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a19970,0,L"FShadowObjectCullPS<true>",
             L"/Engine/Private/DistanceFieldShadowing.usf",L"ShadowObjectCullPS",3,1,FUN_141b2d8f0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a19970 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a19aa0 = FUN_141b2bd00;
  _DAT_146a19aa8 = FUN_141b45e30;
  _DAT_146a19ab0 = BuildSettings::IsPromotedBuild;
  _DAT_146a19ab8 = FShadowObjectCullPS<1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e892f0);
  return;
}



// FUNCTION 14028daf0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FShadowObjectCullPS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a19ac0,0,L"FShadowObjectCullPS<false>",
             L"/Engine/Private/DistanceFieldShadowing.usf",L"ShadowObjectCullPS",3,1,FUN_141b2d8f0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a19ac0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a19bf0 = FUN_141b2bd00;
  _DAT_146a19bf8 = FUN_141b45e30;
  _DAT_146a19c00 = BuildSettings::IsPromotedBuild;
  _DAT_146a19c08 = FShadowObjectCullPS<0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e89300);
  return;
}



// FUNCTION 14028dba0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TConeTraceScreenGridGlobalOcclusionCS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a196d0,0,L"TConeTraceScreenGridGlobalOcclusionCStrue",
             L"/Engine/Private/DistanceFieldScreenGridLighting.usf",L"ConeTraceGlobalOcclusionCS",5,
             1,FUN_141b2d920,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a196d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a19800 = FUN_141b2bd30;
  _DAT_146a19808 = FUN_141b18a90;
  _DAT_146a19810 = BuildSettings::IsPromotedBuild;
  _DAT_146a19818 = FUN_141b35200;
  atexit((_func_5014 *)&LAB_143e89310);
  return;
}



// FUNCTION 14028dc50 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TConeTraceScreenGridGlobalOcclusionCS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a19820,0,L"TConeTraceScreenGridGlobalOcclusionCSfalse",
             L"/Engine/Private/DistanceFieldScreenGridLighting.usf",L"ConeTraceGlobalOcclusionCS",5,
             1,FUN_141b2d920,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a19820 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a19950 = FUN_141b2bd30;
  _DAT_146a19958 = FUN_141b18a90;
  _DAT_146a19960 = BuildSettings::IsPromotedBuild;
  _DAT_146a19968 = FUN_141b352c0;
  atexit((_func_5014 *)&LAB_143e89320);
  return;
}



// FUNCTION 14028dd00 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TConeTraceScreenGridObjectOcclusionCS<1,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a19190,0,L"TConeTraceScreenGridObjectOcclusionCStruetrue",
             L"/Engine/Private/DistanceFieldScreenGridLighting.usf",L"ConeTraceObjectOcclusionCS",5,
             1,FUN_141b2d950,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a19190 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a192c0 = FUN_141b2bd60;
  _DAT_146a192c8 = FUN_141b18a90;
  _DAT_146a192d0 = BuildSettings::IsPromotedBuild;
  _DAT_146a192d8 = TConeTraceScreenGridObjectOcclusionCS<1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e89330);
  return;
}



// FUNCTION 14028ddb0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TConeTraceScreenGridObjectOcclusionCS<1,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a19430,0,L"TConeTraceScreenGridObjectOcclusionCStruefalse",
             L"/Engine/Private/DistanceFieldScreenGridLighting.usf",L"ConeTraceObjectOcclusionCS",5,
             1,FUN_141b2d950,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a19430 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a19560 = FUN_141b2bd60;
  _DAT_146a19568 = FUN_141b18a90;
  _DAT_146a19570 = BuildSettings::IsPromotedBuild;
  _DAT_146a19578 = TConeTraceScreenGridObjectOcclusionCS<1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e89340);
  return;
}



// FUNCTION 14028de60 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TConeTraceScreenGridObjectOcclusionCS<0,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a192e0,0,L"TConeTraceScreenGridObjectOcclusionCSfalsetrue",
             L"/Engine/Private/DistanceFieldScreenGridLighting.usf",L"ConeTraceObjectOcclusionCS",5,
             1,FUN_141b2d950,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a192e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a19410 = FUN_141b2bd60;
  _DAT_146a19418 = FUN_141b18a90;
  _DAT_146a19420 = BuildSettings::IsPromotedBuild;
  _DAT_146a19428 = TConeTraceScreenGridObjectOcclusionCS<0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e89350);
  return;
}



// FUNCTION 14028df10 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TConeTraceScreenGridObjectOcclusionCS<0,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a19580,0,L"TConeTraceScreenGridObjectOcclusionCSfalsefalse",
             L"/Engine/Private/DistanceFieldScreenGridLighting.usf",L"ConeTraceObjectOcclusionCS",5,
             1,FUN_141b2d950,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a19580 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a196b0 = FUN_141b2bd60;
  _DAT_146a196b8 = FUN_141b18a90;
  _DAT_146a196c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a196c8 = TConeTraceScreenGridObjectOcclusionCS<0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e89360);
  return;
}



// FUNCTION 14028dfc0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDistanceFieldAOUpsamplePS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a18b00,0,L"TDistanceFieldAOUpsamplePStrue",
             L"/Engine/Private/DistanceFieldLightingPost.usf",L"AOUpsamplePS",3,1,
             TCapsuleShadowingUpsamplePS<1,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a18b00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a18c30 = TDistanceFieldAOUpsamplePS<1>::ConstructCompiledInstance;
  _DAT_146a18c38 = FUN_141b18a90;
  _DAT_146a18c40 = BuildSettings::IsPromotedBuild;
  _DAT_146a18c48 = &LAB_141b356f0;
  atexit((_func_5014 *)&LAB_143e89370);
  return;
}



// FUNCTION 14028e070 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDistanceFieldAOUpsamplePS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a189b0,0,L"TDistanceFieldAOUpsamplePSfalse",
             L"/Engine/Private/DistanceFieldLightingPost.usf",L"AOUpsamplePS",3,1,
             TCapsuleShadowingUpsamplePS<1,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a189b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a18ae0 = TDistanceFieldAOUpsamplePS<1>::ConstructCompiledInstance;
  _DAT_146a18ae8 = FUN_141b18a90;
  _DAT_146a18af0 = BuildSettings::IsPromotedBuild;
  _DAT_146a18af8 = &LAB_141b35710;
  atexit((_func_5014 *)&LAB_143e89380);
  return;
}



// FUNCTION 14028e120 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDistanceFieldShadowingCS<1,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a19eb0,0,L"FDistanceFieldShadowingCSDFS_DirectionalLightTiledCulling1",
             L"/Engine/Private/DistanceFieldShadowing.usf",L"DistanceFieldShadowingCS",5,1,
             FUN_141b2d980,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a19eb0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a19fe0 = FUN_141b2bec0;
  _DAT_146a19fe8 = FUN_141b45e70;
  _DAT_146a19ff0 = BuildSettings::IsPromotedBuild;
  _DAT_146a19ff8 = TDistanceFieldShadowingCS<1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e89390);
  return;
}



// FUNCTION 14028e1d0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDistanceFieldShadowingCS<1,2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1a000,0,L"FDistanceFieldShadowingCSDFS_DirectionalLightTiledCulling2",
             L"/Engine/Private/DistanceFieldShadowing.usf",L"DistanceFieldShadowingCS",5,1,
             FUN_141b2d980,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1a000 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1a130 = FUN_141b2bec0;
  _DAT_146a1a138 = FUN_141b45e70;
  _DAT_146a1a140 = BuildSettings::IsPromotedBuild;
  _DAT_146a1a148 = TDistanceFieldShadowingCS<1,2>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e893a0);
  return;
}



// FUNCTION 14028e280 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDistanceFieldShadowingCS<2,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1a150,0,L"FDistanceFieldShadowingCSDFS_PointLightTiledCulling1",
             L"/Engine/Private/DistanceFieldShadowing.usf",L"DistanceFieldShadowingCS",5,1,
             FUN_141b2d980,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1a150 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1a280 = FUN_141b2bec0;
  _DAT_146a1a288 = FUN_141b45e70;
  _DAT_146a1a290 = BuildSettings::IsPromotedBuild;
  _DAT_146a1a298 = TDistanceFieldShadowingCS<2,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e893b0);
  return;
}



// FUNCTION 14028e330 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDistanceFieldShadowingCS<2,2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1a2a0,0,L"FDistanceFieldShadowingCSDFS_PointLightTiledCulling2",
             L"/Engine/Private/DistanceFieldShadowing.usf",L"DistanceFieldShadowingCS",5,1,
             FUN_141b2d980,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1a2a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1a3d0 = FUN_141b2bec0;
  _DAT_146a1a3d8 = FUN_141b45e70;
  _DAT_146a1a3e0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1a3e8 = TDistanceFieldShadowingCS<2,2>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e893c0);
  return;
}



// FUNCTION 14028e3e0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDistanceFieldShadowingCS<0,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a19c10,0,L"FDistanceFieldShadowingCSDFS_DirectionalLightScatterTileCulling1",
             L"/Engine/Private/DistanceFieldShadowing.usf",L"DistanceFieldShadowingCS",5,1,
             FUN_141b2d980,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a19c10 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a19d40 = FUN_141b2bec0;
  _DAT_146a19d48 = FUN_141b45e70;
  _DAT_146a19d50 = BuildSettings::IsPromotedBuild;
  _DAT_146a19d58 = TDistanceFieldShadowingCS<0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e893d0);
  return;
}



// FUNCTION 14028e490 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDistanceFieldShadowingCS<0,2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a19d60,0,L"FDistanceFieldShadowingCSDFS_DirectionalLightScatterTileCulling2",
             L"/Engine/Private/DistanceFieldShadowing.usf",L"DistanceFieldShadowingCS",5,1,
             FUN_141b2d980,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a19d60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a19e90 = FUN_141b2bec0;
  _DAT_146a19e98 = FUN_141b45e70;
  _DAT_146a19ea0 = BuildSettings::IsPromotedBuild;
  _DAT_146a19ea8 = TDistanceFieldShadowingCS<0,2>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e893e0);
  return;
}



// FUNCTION 14028e540 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDistanceFieldShadowingUpsamplePS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1a3f0,0,L"TDistanceFieldShadowingUpsamplePS<true>",
             L"/Engine/Private/DistanceFieldShadowing.usf",L"DistanceFieldShadowingUpsamplePS",3,1,
             TDistanceFieldShadowingUpsamplePS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1a3f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1a520 = FUN_141b2bef0;
  _DAT_146a1a528 = FUN_141b45e70;
  _DAT_146a1a530 = BuildSettings::IsPromotedBuild;
  _DAT_146a1a538 = TDistanceFieldShadowingUpsamplePS<1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e893f0);
  return;
}



// FUNCTION 14028e5f0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDistanceFieldShadowingUpsamplePS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1a540,0,L"TDistanceFieldShadowingUpsamplePS<false>",
             L"/Engine/Private/DistanceFieldShadowing.usf",L"DistanceFieldShadowingUpsamplePS",3,1,
             TDistanceFieldShadowingUpsamplePS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1a540 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1a670 = FUN_141b2bef0;
  _DAT_146a1a678 = FUN_141b45e70;
  _DAT_146a1a680 = BuildSettings::IsPromotedBuild;
  _DAT_146a1a688 = TDistanceFieldShadowingUpsamplePS<0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e89400);
  return;
}



// FUNCTION 14028e6a0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDistortionApplyScreenPS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1aa80,0,L"TDistortionApplyScreenPStrue",
             L"/Engine/Private/DistortApplyScreenPS.usf",L"Main",3,1,FUN_141b2da40,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1aa80 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1abb0 = TDistortionApplyScreenPS<1>::ConstructCompiledInstance;
  _DAT_146a1abb8 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a1abc0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1abc8 = &LAB_141b35b50;
  atexit((_func_5014 *)&LAB_143e89410);
  return;
}



// FUNCTION 14028e750 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDistortionApplyScreenPS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1a930,0,L"TDistortionApplyScreenPSfalse",
             L"/Engine/Private/DistortApplyScreenPS.usf",L"Main",3,1,FUN_141b2da40,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1a930 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1aa60 = TDistortionApplyScreenPS<0>::ConstructCompiledInstance;
  _DAT_146a1aa68 = BuildSettings::IsPromotedBuild;
  _DAT_146a1aa70 = BuildSettings::IsPromotedBuild;
  _DAT_146a1aa78 = &LAB_141b35b70;
  atexit((_func_5014 *)&LAB_143e89420);
  return;
}



// FUNCTION 14028e800 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDistortionMergePS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1ad20,0,L"TDistortionMergePStrue",L"/Engine/Private/DistortApplyScreenPS.usf",
             L"Merge",3,1,FUN_141b2daa0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1ad20 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1ae50 = TDistortionMergePS<1>::ConstructCompiledInstance;
  _DAT_146a1ae58 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a1ae60 = BuildSettings::IsPromotedBuild;
  _DAT_146a1ae68 = &LAB_141b35b50;
  atexit((_func_5014 *)&LAB_143e89430);
  return;
}



// FUNCTION 14028e8b0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDistortionMergePS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1abd0,0,L"TDistortionMergePSfalse",L"/Engine/Private/DistortApplyScreenPS.usf"
             ,L"Merge",3,1,FUN_141b2daa0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1abd0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1ad00 = TDistortionMergePS<0>::ConstructCompiledInstance;
  _DAT_146a1ad08 = BuildSettings::IsPromotedBuild;
  _DAT_146a1ad10 = BuildSettings::IsPromotedBuild;
  _DAT_146a1ad18 = &LAB_141b35b70;
  atexit((_func_5014 *)&LAB_143e89440);
  return;
}



// FUNCTION 14028e960 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDistortionMeshDS<FDistortMeshAccumulatePolicy>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1b110,2,L"TDistortionMeshDS<FDistortMeshAccumulatePolicy>",
             L"/Engine/Private/DistortAccumulateVS.usf",L"MainDomain",2,1,
             TTranslucencyShadowDepthVS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1b110 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1b240 = FUN_141b2c260;
  _DAT_146a1b248 = FUN_141b45ea0;
  _DAT_146a1b250 = BuildSettings::IsPromotedBuild;
  _DAT_146a1b258 = FUN_141ac7cb0;
  atexit((_func_5014 *)&LAB_143e89450);
  return;
}



// FUNCTION 14028ea10 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDistortionMeshHS<FDistortMeshAccumulatePolicy>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1afc0,2,L"TDistortionMeshHS<FDistortMeshAccumulatePolicy>",
             L"/Engine/Private/DistortAccumulateVS.usf",L"MainHull",1,1,
             TTranslucencyShadowDepthVS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1afc0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1b0f0 = FUN_141b2c260;
  _DAT_146a1b0f8 = FUN_141b45ea0;
  _DAT_146a1b100 = BuildSettings::IsPromotedBuild;
  _DAT_146a1b108 = FUN_141ac7cb0;
  atexit((_func_5014 *)&LAB_143e89460);
  return;
}



// FUNCTION 14028eac0 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDistortionMeshPS<FDistortMeshAccumulatePolicy>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1b260,2,L"TDistortionMeshPS<FDistortMeshAccumulatePolicy>",
             L"/Engine/Private/DistortAccumulatePS.usf",L"Main",3,1,FUN_141b008c0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1b260 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1b390 = FUN_141b2c300;
  _DAT_146a1b398 = FUN_141b45f10;
  _DAT_146a1b3a0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1b3a8 = FUN_141ac7cb0;
  atexit((_func_5014 *)&LAB_143e89470);
  return;
}



// FUNCTION 14028eb70 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDistortionMeshVS<FDistortMeshAccumulatePolicy>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1ae70,2,L"TDistortionMeshVS<FDistortMeshAccumulatePolicy>",
             L"/Engine/Private/DistortAccumulateVS.usf",L"Main",0,1,
             TTranslucencyShadowDepthVS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1ae70 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1afa0 = FUN_141b2c390;
  _DAT_146a1afa8 = FUN_141b45f10;
  _DAT_146a1afb0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1afb8 = FUN_141ac7cb0;
  atexit((_func_5014 *)&LAB_143e89480);
  return;
}



// FUNCTION 14028ec20 FUN_14028ec20 body=170 status=ok
// SIG undefined FUN_14028ec20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028ec20(void)

{
  FShaderType::FShaderType
            (&DAT_146a1b520,0,
             L"TExponentialHeightFogPS<EHeightFogFeature::InscatteringTexture GBX_COMMA true>",
             L"/Engine/Private/HeightFogPixelShader.usf",L"ExponentialPixelMain",3,1,FUN_141b2daf0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1b520 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1b650 = FUN_141b2c3f0;
  _DAT_146a1b658 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a1b660 = BuildSettings::IsPromotedBuild;
  _DAT_146a1b668 = FUN_141b35b90;
  atexit((_func_5014 *)&LAB_143e89490);
  return;
}



// FUNCTION 14028ecd0 FUN_14028ecd0 body=170 status=ok
// SIG undefined FUN_14028ecd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028ecd0(void)

{
  FShaderType::FShaderType
            (&DAT_146a1bd00,0,
             L"TExponentialHeightFogPS<EHeightFogFeature::InscatteringTexture GBX_COMMA false>",
             L"/Engine/Private/HeightFogPixelShader.usf",L"ExponentialPixelMain",3,1,FUN_141b2daf0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1bd00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1be30 = FUN_141b2c3f0;
  _DAT_146a1be38 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a1be40 = BuildSettings::IsPromotedBuild;
  _DAT_146a1be48 = FUN_141b35c10;
  atexit((_func_5014 *)&LAB_143e894a0);
  return;
}



// FUNCTION 14028ed80 FUN_14028ed80 body=170 status=ok
// SIG undefined FUN_14028ed80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028ed80(void)

{
  FShaderType::FShaderType
            (&DAT_146a1b670,0,
             L"TExponentialHeightFogPS<EHeightFogFeature::DirectionalLightInscattering GBX_COMMA true>"
             ,L"/Engine/Private/HeightFogPixelShader.usf",L"ExponentialPixelMain",3,1,FUN_141b2daf0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1b670 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1b7a0 = FUN_141b2c3f0;
  _DAT_146a1b7a8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a1b7b0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1b7b8 = FUN_141b35c80;
  atexit((_func_5014 *)&LAB_143e894b0);
  return;
}



// FUNCTION 14028ee30 FUN_14028ee30 body=170 status=ok
// SIG undefined FUN_14028ee30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028ee30(void)

{
  FShaderType::FShaderType
            (&DAT_146a1be50,0,
             L"TExponentialHeightFogPS<EHeightFogFeature::DirectionalLightInscattering GBX_COMMA false>"
             ,L"/Engine/Private/HeightFogPixelShader.usf",L"ExponentialPixelMain",3,1,FUN_141b2daf0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1be50 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1bf80 = FUN_141b2c3f0;
  _DAT_146a1bf88 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a1bf90 = BuildSettings::IsPromotedBuild;
  _DAT_146a1bf98 = FUN_141b35d00;
  atexit((_func_5014 *)&LAB_143e894c0);
  return;
}



// FUNCTION 14028eee0 FUN_14028eee0 body=170 status=ok
// SIG undefined FUN_14028eee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028eee0(void)

{
  FShaderType::FShaderType
            (&DAT_146a1b7c0,0,
             L"TExponentialHeightFogPS<EHeightFogFeature::HeightFogAndVolumetricFog GBX_COMMA true>"
             ,L"/Engine/Private/HeightFogPixelShader.usf",L"ExponentialPixelMain",3,1,FUN_141b2daf0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1b7c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1b8f0 = FUN_141b2c3f0;
  _DAT_146a1b8f8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a1b900 = BuildSettings::IsPromotedBuild;
  _DAT_146a1b908 = FUN_141b35d70;
  atexit((_func_5014 *)&LAB_143e894d0);
  return;
}



// FUNCTION 14028ef90 FUN_14028ef90 body=170 status=ok
// SIG undefined FUN_14028ef90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028ef90(void)

{
  FShaderType::FShaderType
            (&DAT_146a1bfa0,0,
             L"TExponentialHeightFogPS<EHeightFogFeature::HeightFogAndVolumetricFog GBX_COMMA false>"
             ,L"/Engine/Private/HeightFogPixelShader.usf",L"ExponentialPixelMain",3,1,FUN_141b2daf0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1bfa0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1c0d0 = FUN_141b2c3f0;
  _DAT_146a1c0d8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a1c0e0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1c0e8 = FUN_141b35df0;
  atexit((_func_5014 *)&LAB_143e894e0);
  return;
}



// FUNCTION 14028f040 FUN_14028f040 body=170 status=ok
// SIG undefined FUN_14028f040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028f040(void)

{
  FShaderType::FShaderType
            (&DAT_146a1b910,0,
             L"TExponentialHeightFogPS<EHeightFogFeature::InscatteringTextureAndVolumetricFog GBX_COMMA true>"
             ,L"/Engine/Private/HeightFogPixelShader.usf",L"ExponentialPixelMain",3,1,FUN_141b2daf0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1b910 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1ba40 = FUN_141b2c3f0;
  _DAT_146a1ba48 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a1ba50 = BuildSettings::IsPromotedBuild;
  _DAT_146a1ba58 = FUN_141b35e60;
  atexit((_func_5014 *)&LAB_143e894f0);
  return;
}



// FUNCTION 14028f0f0 FUN_14028f0f0 body=170 status=ok
// SIG undefined FUN_14028f0f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028f0f0(void)

{
  FShaderType::FShaderType
            (&DAT_146a1c0f0,0,
             L"TExponentialHeightFogPS<EHeightFogFeature::InscatteringTextureAndVolumetricFog GBX_COMMA false>"
             ,L"/Engine/Private/HeightFogPixelShader.usf",L"ExponentialPixelMain",3,1,FUN_141b2daf0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1c0f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1c220 = FUN_141b2c3f0;
  _DAT_146a1c228 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a1c230 = BuildSettings::IsPromotedBuild;
  _DAT_146a1c238 = FUN_141b35ee0;
  atexit((_func_5014 *)&LAB_143e89500);
  return;
}



// FUNCTION 14028f1a0 FUN_14028f1a0 body=170 status=ok
// SIG undefined FUN_14028f1a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028f1a0(void)

{
  FShaderType::FShaderType
            (&DAT_146a1ba60,0,
             L"TExponentialHeightFogPS<EHeightFogFeature::DirectionalLightInscatteringAndVolumetricFog GBX_COMMA true>"
             ,L"/Engine/Private/HeightFogPixelShader.usf",L"ExponentialPixelMain",3,1,FUN_141b2daf0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1ba60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1bb90 = FUN_141b2c3f0;
  _DAT_146a1bb98 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a1bba0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1bba8 = FUN_141b35f60;
  atexit((_func_5014 *)&LAB_143e89510);
  return;
}



// FUNCTION 14028f250 FUN_14028f250 body=170 status=ok
// SIG undefined FUN_14028f250(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028f250(void)

{
  FShaderType::FShaderType
            (&DAT_146a1c240,0,
             L"TExponentialHeightFogPS<EHeightFogFeature::DirectionalLightInscatteringAndVolumetricFog GBX_COMMA false>"
             ,L"/Engine/Private/HeightFogPixelShader.usf",L"ExponentialPixelMain",3,1,FUN_141b2daf0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1c240 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1c370 = FUN_141b2c3f0;
  _DAT_146a1c378 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a1c380 = BuildSettings::IsPromotedBuild;
  _DAT_146a1c388 = FUN_141b35fe0;
  atexit((_func_5014 *)&LAB_143e89520);
  return;
}



// FUNCTION 14028f300 FUN_14028f300 body=170 status=ok
// SIG undefined FUN_14028f300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028f300(void)

{
  FShaderType::FShaderType
            (&DAT_146a1b3d0,0,
             L"TExponentialHeightFogPS<EHeightFogFeature::HeightFog GBX_COMMA true>",
             L"/Engine/Private/HeightFogPixelShader.usf",L"ExponentialPixelMain",3,1,FUN_141b2daf0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1b3d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1b500 = FUN_141b2c3f0;
  _DAT_146a1b508 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a1b510 = BuildSettings::IsPromotedBuild;
  _DAT_146a1b518 = FUN_141b36060;
  atexit((_func_5014 *)&LAB_143e89530);
  return;
}



// FUNCTION 14028f3b0 FUN_14028f3b0 body=170 status=ok
// SIG undefined FUN_14028f3b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028f3b0(void)

{
  FShaderType::FShaderType
            (&DAT_146a1bbb0,0,
             L"TExponentialHeightFogPS<EHeightFogFeature::HeightFog GBX_COMMA false>",
             L"/Engine/Private/HeightFogPixelShader.usf",L"ExponentialPixelMain",3,1,FUN_141b2daf0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1bbb0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1bce0 = FUN_141b2c3f0;
  _DAT_146a1bce8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a1bcf0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1bcf8 = FUN_141b360d0;
  atexit((_func_5014 *)&LAB_143e89540);
  return;
}



// FUNCTION 14028f460 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TFilterHistoryPS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a18860,0,L"TFilterHistoryPStrue",
             L"/Engine/Private/DistanceFieldLightingPost.usf",L"FilterHistoryPS",3,1,
             FTranslucentObjectShadowingPS::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a18860 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a18990 = TFilterHistoryPS<1>::ConstructCompiledInstance;
  _DAT_146a18998 = FUN_141b18a90;
  _DAT_146a189a0 = BuildSettings::IsPromotedBuild;
  _DAT_146a189a8 = TFilterHistoryPS<1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e89550);
  return;
}



// FUNCTION 14028f510 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TFilterHistoryPS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a18710,0,L"TFilterHistoryPSfalse",
             L"/Engine/Private/DistanceFieldLightingPost.usf",L"FilterHistoryPS",3,1,
             FTranslucentObjectShadowingPS::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a18710 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a18840 = TFilterHistoryPS<1>::ConstructCompiledInstance;
  _DAT_146a18848 = FUN_141b18a90;
  _DAT_146a18850 = BuildSettings::IsPromotedBuild;
  _DAT_146a18858 = TFilterHistoryPS<0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e89560);
  return;
}



// FUNCTION 14028f5c0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TObjectCullPS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a18c50,0,L"TObjectCullPS<true>",
             L"/Engine/Private/DistanceFieldObjectCulling.usf",L"ObjectCullPS",3,1,FUN_141b2dbc0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a18c50 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a18d80 = FUN_141b2c6a0;
  _DAT_146a18d88 = FUN_141b45f40;
  _DAT_146a18d90 = BuildSettings::IsPromotedBuild;
  _DAT_146a18d98 = FUN_141b361c0;
  atexit((_func_5014 *)&LAB_143e89570);
  return;
}



// FUNCTION 14028f670 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TObjectCullPS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a18da0,0,L"TObjectCullPS<false>",
             L"/Engine/Private/DistanceFieldObjectCulling.usf",L"ObjectCullPS",3,1,FUN_141b2dbc0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a18da0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a18ed0 = FUN_141b2c6a0;
  _DAT_146a18ed8 = FUN_141b45f40;
  _DAT_146a18ee0 = BuildSettings::IsPromotedBuild;
  _DAT_146a18ee8 = FUN_141b36250;
  atexit((_func_5014 *)&LAB_143e89580);
  return;
}



// FUNCTION 14028f720 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TRemoveObjectsFromBufferCS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a18ef0,0,L"TRemoveObjectsFromBufferCS<true>",
             L"/Engine/Private/DistanceFieldObjectCulling.usf",L"RemoveObjectsFromBufferCS",5,1,
             TRemoveObjectsFromBufferCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a18ef0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a19020 = FUN_141b2c6d0;
  _DAT_146a19028 = FUN_141b18a90;
  _DAT_146a19030 = BuildSettings::IsPromotedBuild;
  _DAT_146a19038 = TRemoveObjectsFromBufferCS<1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e89590);
  return;
}



// FUNCTION 14028f7d0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TRemoveObjectsFromBufferCS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a19040,0,L"TRemoveObjectsFromBufferCS<false>",
             L"/Engine/Private/DistanceFieldObjectCulling.usf",L"RemoveObjectsFromBufferCS",5,1,
             TRemoveObjectsFromBufferCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a19040 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a19170 = FUN_141b2c6d0;
  _DAT_146a19178 = FUN_141b18a90;
  _DAT_146a19180 = BuildSettings::IsPromotedBuild;
  _DAT_146a19188 = TRemoveObjectsFromBufferCS<0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e895a0);
  return;
}



// FUNCTION 14028f880 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TVisualizeMeshDistanceFieldCS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1a690,0,L"TVisualizeMeshDistanceFieldCS<true>",
             L"/Engine/Private/DistanceFieldVisualization.usf",L"VisualizeMeshDistanceFieldCS",5,1,
             FUN_141b2dc70,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1a690 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1a7c0 = FUN_141b2c700;
  _DAT_146a1a7c8 = FUN_141b18a90;
  _DAT_146a1a7d0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1a7d8 = TVisualizeMeshDistanceFieldCS<1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e895b0);
  return;
}



// FUNCTION 14028f930 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TVisualizeMeshDistanceFieldCS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1a7e0,0,L"TVisualizeMeshDistanceFieldCS<false>",
             L"/Engine/Private/DistanceFieldVisualization.usf",L"VisualizeMeshDistanceFieldCS",5,1,
             FUN_141b2dc70,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1a7e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1a910 = FUN_141b2c700;
  _DAT_146a1a918 = FUN_141b18a90;
  _DAT_146a1a920 = BuildSettings::IsPromotedBuild;
  _DAT_146a1a928 = TVisualizeMeshDistanceFieldCS<0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e895c0);
  return;
}



// FUNCTION 14028f9e0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FBuildTileConesCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a16610,0,L"FBuildTileConesCS",L"/Engine/Private/DistanceFieldObjectCulling.usf"
             ,L"BuildTileConesMain",5,1,FUN_141b2dca0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a16610 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a16740 = FUN_141b2c730;
  _DAT_146a16748 = FUN_141b18a90;
  _DAT_146a16750 = BuildSettings::IsPromotedBuild;
  _DAT_146a16758 = FBuildTileConesCS::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e895d0);
  return;
}



// FUNCTION 14028fa90 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCombineConeVisibilityCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a16f70,0,L"FCombineConeVisibilityCS",
             L"/Engine/Private/DistanceFieldScreenGridLighting.usf",L"CombineConeVisibilityCS",5,1,
             FUN_141b2dcd0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a16f70 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a170a0 = FUN_141b2c760;
  _DAT_146a170a8 = FUN_141b18a90;
  _DAT_146a170b0 = BuildSettings::IsPromotedBuild;
  _DAT_146a170b8 = FCombineConeVisibilityCS::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e895e0);
  return;
}



// FUNCTION 14028fb40 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCombineIrradianceScreenGridCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a15f50,0,L"FCombineIrradianceScreenGridCS",
             L"/Engine/Private/DistanceFieldGlobalIllumination.usf",L"CombineIrradianceScreenGridCS"
             ,5,1,FUN_141b2dd40,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a15f50 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a16080 = FCombineIrradianceScreenGridCS::ConstructCompiledInstance;
  _DAT_146a16088 = FCombineIrradianceScreenGridCS::ShouldCompilePermutation;
  _DAT_146a16090 = BuildSettings::IsPromotedBuild;
  _DAT_146a16098 = &LAB_141b36550;
  atexit((_func_5014 *)&LAB_143e895f0);
  return;
}



// FUNCTION 14028fbf0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FComputeCulledObjectStartOffsetCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a174d0,0,L"FComputeCulledObjectStartOffsetCS",
             L"/Engine/Private/DistanceFieldShadowing.usf",L"ComputeCulledTilesStartOffsetCS",5,1,
             FUN_141b2dda0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a174d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a17600 = FComputeCulledObjectStartOffsetCS::ConstructCompiledInstance;
  _DAT_146a17608 = FUN_141b45e70;
  _DAT_146a17610 = BuildSettings::IsPromotedBuild;
  _DAT_146a17618 = &LAB_141b36570;
  atexit((_func_5014 *)&LAB_143e89600);
  return;
}



// FUNCTION 14028fca0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FComputeCulledTilesStartOffsetCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a168b0,0,L"FComputeCulledTilesStartOffsetCS",
             L"/Engine/Private/DistanceFieldObjectCulling.usf",L"ComputeCulledTilesStartOffsetCS",5,
             1,FUN_141b2de10,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a168b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a169e0 = FUN_141b2c910;
  _DAT_146a169e8 = FUN_141b18a90;
  _DAT_146a169f0 = BuildSettings::IsPromotedBuild;
  _DAT_146a169f8 = FComputeCulledTilesStartOffsetCS::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e89610);
  return;
}



// FUNCTION 14028fd50 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FComputeIrradianceScreenGridCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a15e00,0,L"FComputeIrradianceScreenGridCS",
             L"/Engine/Private/DistanceFieldGlobalIllumination.usf",L"ComputeIrradianceScreenGridCS"
             ,5,1,FUN_141b2de40,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a15e00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a15f30 = FUN_141b2c940;
  _DAT_146a15f38 = FCombineIrradianceScreenGridCS::ShouldCompilePermutation;
  _DAT_146a15f40 = BuildSettings::IsPromotedBuild;
  _DAT_146a15f48 = FComputeIrradianceScreenGridCS::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e89620);
  return;
}



// FUNCTION 14028fe00 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FComputeStepBentNormalScreenGridCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a15cb0,0,L"FComputeStepBentNormalScreenGridCS",
             L"/Engine/Private/DistanceFieldGlobalIllumination.usf",
             L"ComputeStepBentNormalScreenGridCS",5,1,FUN_141b2de70,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a15cb0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a15de0 = FComputeStepBentNormalScreenGridCS::ConstructCompiledInstance;
  _DAT_146a15de8 = FCombineIrradianceScreenGridCS::ShouldCompilePermutation;
  _DAT_146a15df0 = BuildSettings::IsPromotedBuild;
  _DAT_146a15df8 = FComputeStepBentNormalScreenGridCS::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e89630);
  return;
}



// FUNCTION 14028feb0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCopyObjectBufferCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a16b70,0,L"FCopyObjectBufferCS",
             L"/Engine/Private/DistanceFieldObjectCulling.usf",L"CopyObjectBufferCS",5,1,
             FCopyObjectBufferCS::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage
            );
  _DAT_146a16b70 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a16ca0 = FCopyObjectBufferCS::ConstructCompiledInstance;
  _DAT_146a16ca8 = FUN_141b18a90;
  _DAT_146a16cb0 = BuildSettings::IsPromotedBuild;
  _DAT_146a16cb8 = &LAB_141b36720;
  atexit((_func_5014 *)&LAB_143e89640);
  return;
}



// FUNCTION 14028ff60 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCopySurfelBufferCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a16cc0,0,L"FCopySurfelBufferCS",L"/Engine/Private/SurfelTree.usf",
             L"CopySurfelBufferCS",5,1,FUN_141b2df50,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a16cc0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a16df0 = FCopySurfelBufferCS::ConstructCompiledInstance;
  _DAT_146a16df8 = FCombineIrradianceScreenGridCS::ShouldCompilePermutation;
  _DAT_146a16e00 = BuildSettings::IsPromotedBuild;
  _DAT_146a16e08 = &LAB_141b36720;
  atexit((_func_5014 *)&LAB_143e89650);
  return;
}



// FUNCTION 140290010 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCopyVPLFluxBufferCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a16e10,0,L"FCopyVPLFluxBufferCS",L"/Engine/Private/SurfelTree.usf",
             L"CopyVPLFluxBufferCS",5,1,FUN_141b2dfc0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a16e10 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a16f40 = FCopyVPLFluxBufferCS::ConstructCompiledInstance;
  _DAT_146a16f48 = FUN_141b18a90;
  _DAT_146a16f50 = BuildSettings::IsPromotedBuild;
  _DAT_146a16f58 = &LAB_141b36720;
  atexit((_func_5014 *)&LAB_143e89660);
  return;
}



// FUNCTION 1402900c0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCullObjectsForShadowCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a17230,0,L"FCullObjectsForShadowCS",
             L"/Engine/Private/DistanceFieldShadowing.usf",L"CullObjectsForShadowCS",5,1,
             FUN_141b2e030,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a17230 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a17360 = FUN_141b2cd80;
  _DAT_146a17368 = FUN_141b45e70;
  _DAT_146a17370 = BuildSettings::IsPromotedBuild;
  _DAT_146a17378 = &LAB_141b36720;
  atexit((_func_5014 *)&LAB_143e89670);
  return;
}



// FUNCTION 140290170 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCullObjectsForViewCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a164c0,0,L"FCullObjectsForViewCS",
             L"/Engine/Private/DistanceFieldObjectCulling.usf",L"CullObjectsForViewCS",5,1,
             FUN_141b2e060,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a164c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a165f0 = FUN_141b2cdb0;
  _DAT_146a165f8 = FUN_141b18a90;
  _DAT_146a16600 = BuildSettings::IsPromotedBuild;
  _DAT_146a16608 = &LAB_141b36720;
  atexit((_func_5014 *)&LAB_143e89680);
  return;
}



// FUNCTION 140290220 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCullVPLsForViewCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a158c0,0,L"FCullVPLsForViewCS",
             L"/Engine/Private/DistanceFieldGlobalIllumination.usf",L"CullVPLsForViewCS",5,1,
             FCullVPLsForViewCS::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage)
  ;
  _DAT_146a158c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a159f0 = FUN_141b2cde0;
  _DAT_146a159f8 = FCombineIrradianceScreenGridCS::ShouldCompilePermutation;
  _DAT_146a15a00 = BuildSettings::IsPromotedBuild;
  _DAT_146a15a08 = FUN_141b36740;
  atexit((_func_5014 *)&LAB_143e89690);
  return;
}



// FUNCTION 1402902d0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FGammaCorrectionPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a179b0,0,L"FGammaCorrectionPS",L"/Engine/Private/GammaCorrection.usf",L"MainPS"
             ,3,1,FUN_141b2e110,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a179b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a17ae0 = FGammaCorrectionPS::ConstructCompiledInstance;
  _DAT_146a17ae8 = BuildSettings::IsPromotedBuild;
  _DAT_146a17af0 = BuildSettings::IsPromotedBuild;
  _DAT_146a17af8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e896a0);
  return;
}



// FUNCTION 140290380 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FGammaCorrectionVS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a17b00,0,L"FGammaCorrectionVS",L"/Engine/Private/GammaCorrection.usf",L"MainVS"
             ,0,1,FUN_14049d790,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a17b00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a17c30 = FUN_14049d5b0;
  _DAT_146a17c38 = BuildSettings::IsPromotedBuild;
  _DAT_146a17c40 = BuildSettings::IsPromotedBuild;
  _DAT_146a17c48 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e896b0);
  return;
}



// FUNCTION 140290430 FUN_140290430 body=170 status=ok
// SIG undefined FUN_140290430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140290430(void)

{
  FShaderType::FShaderType
            (&DAT_146a18530,0,L"FGbxSkyApplyPS",L"/Engine/Private/GbxSkyApplyShader.usf",
             L"GbxSkyApplyMain",3,1,FUN_141a145b0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a18530 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a18660 = FUN_141b2cf30;
  _DAT_146a18668 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a18670 = BuildSettings::IsPromotedBuild;
  _DAT_146a18678 = &LAB_141b36780;
  atexit((_func_5014 *)&LAB_143e896c0);
  return;
}



// FUNCTION 1402904e0 FUN_1402904e0 body=170 status=ok
// SIG undefined FUN_1402904e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402904e0(void)

{
  FShaderType::FShaderType
            (&DAT_146a17c50,0,L"FGbxSkyCubeMipGenComputeShader",
             L"/Engine/Private/GbxSkyCubeMipGenComputeShader.usf",L"ComputeShaderMain",5,1,
             FUN_141b2e170,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a17c50 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a17d80 = FUN_141b2cfd0;
  _DAT_146a17d88 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a17d90 = BuildSettings::IsPromotedBuild;
  _DAT_146a17d98 = FUN_141b367a0;
  atexit((_func_5014 *)&LAB_143e896d0);
  return;
}



// FUNCTION 140290590 FUN_140290590 body=170 status=ok
// SIG undefined FUN_140290590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140290590(void)

{
  FShaderType::FShaderType
            (&DAT_146a17da0,0,L"FGbxSkyEnvApplyComputeShader",
             L"/Engine/Private/GbxSkyEnvApplyComputeShader.usf",L"ComputeShaderMain",5,1,
             FUN_141b2e1d0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a17da0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a17ed0 = FUN_141b2d0d0;
  _DAT_146a17ed8 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a17ee0 = BuildSettings::IsPromotedBuild;
  _DAT_146a17ee8 = FUN_141b367f0;
  atexit((_func_5014 *)&LAB_143e896e0);
  return;
}



// FUNCTION 140290640 FUN_140290640 body=170 status=ok
// SIG undefined FUN_140290640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140290640(void)

{
  FShaderType::FShaderType
            (&DAT_146a17ef0,0,L"FGbxSkyEnvCopyComputeShader",
             L"/Engine/Private/GbxSkyEnvCopyComputeShader.usf",L"ComputeShaderMain",5,1,
             FUN_141b2e170,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a17ef0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a18020 = FUN_141b2d1f0;
  _DAT_146a18028 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a18030 = BuildSettings::IsPromotedBuild;
  _DAT_146a18038 = FUN_141b36840;
  atexit((_func_5014 *)&LAB_143e896f0);
  return;
}



// FUNCTION 1402906f0 FUN_1402906f0 body=173 status=ok
// SIG undefined FUN_1402906f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402906f0(void)

{
  FShaderType::FShaderType
            (&DAT_146a18190,2,L"FGbxSkyMaterialPS",L"/Engine/Private/GbxSkyMaterialShader.usf",
             L"MainPP",3,1,FUN_141b2e230,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a18190 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a182c0 = FUN_141b2d2f0;
  _DAT_146a182c8 = FUN_141b45ff0;
  _DAT_146a182d0 = BuildSettings::IsPromotedBuild;
  _DAT_146a182d8 = FUN_141ac7cb0;
  atexit((_func_5014 *)&LAB_143e89700);
  return;
}



// FUNCTION 1402907a0 FUN_1402907a0 body=173 status=ok
// SIG undefined FUN_1402907a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402907a0(void)

{
  FShaderType::FShaderType
            (&DAT_146a18040,2,L"FGbxSkyMaterialVS",L"/Engine/Private/GbxSkyMaterialShader.usf",
             L"Main",0,1,FUN_141b2e280,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a18040 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a18170 = FUN_141b2d3d0;
  _DAT_146a18178 = FUN_141b45ff0;
  _DAT_146a18180 = BuildSettings::IsPromotedBuild;
  _DAT_146a18188 = FUN_141ac7cb0;
  atexit((_func_5014 *)&LAB_143e89710);
  return;
}



// FUNCTION 140290850 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FGeometryAwareUpsamplePS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a16250,0,L"FGeometryAwareUpsamplePS",
             L"/Engine/Private/DistanceFieldLightingPost.usf",L"GeometryAwareUpsamplePS",3,1,
             FUN_141b2e2d0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a16250 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a16380 = FUN_141b2d4c0;
  _DAT_146a16388 = FUN_141b18a90;
  _DAT_146a16390 = BuildSettings::IsPromotedBuild;
  _DAT_146a16398 = &LAB_141b36890;
  atexit((_func_5014 *)&LAB_143e89720);
  return;
}



// FUNCTION 140290900 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FHeightFogVS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a17860,0,L"FHeightFogVS",L"/Engine/Private/HeightFogVertexShader.usf",L"Main",0
             ,1,FClearReplacementPS::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a17860 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a17990 = FHeightFogVS::ConstructCompiledInstance;
  _DAT_146a17998 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a179a0 = BuildSettings::IsPromotedBuild;
  _DAT_146a179a8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e89730);
  return;
}



// FUNCTION 1402909b0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FLightVPLsCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a15b60,0,L"FLightVPLsCS",L"/Engine/Private/DistanceFieldGlobalIllumination.usf"
             ,L"LightVPLsCS",5,1,FUN_141b2e300,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a15b60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a15c90 = FUN_141b2d560;
  _DAT_146a15c98 = FCombineIrradianceScreenGridCS::ShouldCompilePermutation;
  _DAT_146a15ca0 = BuildSettings::IsPromotedBuild;
  _DAT_146a15ca8 = FUN_141b368b0;
  atexit((_func_5014 *)&LAB_143e89740);
  return;
}



// FUNCTION 140290a60 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FObjectCullVS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a16760,0,L"FObjectCullVS",L"/Engine/Private/DistanceFieldObjectCulling.usf",
             L"ObjectCullVS",0,1,FUN_141b2e330,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a16760 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a16890 = FUN_141b2d590;
  _DAT_146a16898 = FUN_141b18a90;
  _DAT_146a168a0 = BuildSettings::IsPromotedBuild;
  _DAT_146a168a8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e89750);
  return;
}



// FUNCTION 140290b10 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FSetupLightVPLsIndirectArgumentsCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a15a10,0,L"FSetupLightVPLsIndirectArgumentsCS",
             L"/Engine/Private/DistanceFieldGlobalIllumination.usf",
             L"SetupLightVPLsIndirectArgumentsCS",5,1,
             FSetupLightVPLsIndirectArgumentsCS::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a15a10 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a15b40 = FUN_141b2d5c0;
  _DAT_146a15b48 = FCombineIrradianceScreenGridCS::ShouldCompilePermutation;
  _DAT_146a15b50 = BuildSettings::IsPromotedBuild;
  _DAT_146a15b58 = &LAB_141b368f0;
  atexit((_func_5014 *)&LAB_143e89760);
  return;
}



// FUNCTION 140290bc0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FSetupVPLCullndirectArgumentsCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a15770,0,L"FSetupVPLCullndirectArgumentsCS",
             L"/Engine/Private/DistanceFieldGlobalIllumination.usf",
             L"SetupVPLCullndirectArgumentsCS",5,1,FUN_141b2e3e0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a15770 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a158a0 = FSetupVPLCullndirectArgumentsCS::ConstructCompiledInstance;
  _DAT_146a158a8 = FCombineIrradianceScreenGridCS::ShouldCompilePermutation;
  _DAT_146a158b0 = BuildSettings::IsPromotedBuild;
  _DAT_146a158b8 = FUN_141b36740;
  atexit((_func_5014 *)&LAB_143e89770);
  return;
}



// FUNCTION 140290c70 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FShadowObjectCullVS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a17380,0,L"FShadowObjectCullVS",L"/Engine/Private/DistanceFieldShadowing.usf",
             L"ShadowObjectCullVS",0,1,FShadowHeightfieldsPS::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a17380 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a174b0 = FUN_141b2d690;
  _DAT_146a174b8 = FUN_141b45e70;
  _DAT_146a174c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a174c8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e89780);
  return;
}



// FUNCTION 140290d20 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FUpdateHistoryDepthRejectionPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a16100,0,L"FUpdateHistoryDepthRejectionPS",
             L"/Engine/Private/DistanceFieldLightingPost.usf",L"UpdateHistoryDepthRejectionPS",3,1,
             FUN_141b2e4b0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a16100 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a16230 = FUN_141b2d6c0;
  _DAT_146a16238 = FUN_141b18a90;
  _DAT_146a16240 = BuildSettings::IsPromotedBuild;
  _DAT_146a16248 = &LAB_141b36890;
  atexit((_func_5014 *)&LAB_143e89790);
  return;
}



// FUNCTION 140290dd0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FUploadObjectsToBufferCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a16a20,0,L"FUploadObjectsToBufferCS",
             L"/Engine/Private/DistanceFieldObjectCulling.usf",L"UploadObjectsToBufferCS",5,1,
             FUN_141b2e4e0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a16a20 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a16b50 = FUploadObjectsToBufferCS::ConstructCompiledInstance;
  _DAT_146a16b58 = FUN_141b18a90;
  _DAT_146a16b60 = BuildSettings::IsPromotedBuild;
  _DAT_146a16b68 = &LAB_141b36720;
  atexit((_func_5014 *)&LAB_143e897a0);
  return;
}



// FUNCTION 140290e80 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FVPLPlacementCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a15620,0,L"FVPLPlacementCS",
             L"/Engine/Private/DistanceFieldGlobalIllumination.usf",L"VPLPlacementCS",5,1,
             FUN_141b2e550,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a15620 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a15750 = FUN_141b2d7f0;
  _DAT_146a15758 = FCombineIrradianceScreenGridCS::ShouldCompilePermutation;
  _DAT_146a15760 = BuildSettings::IsPromotedBuild;
  _DAT_146a15768 = FUN_141b36910;
  atexit((_func_5014 *)&LAB_143e897b0);
  return;
}



// FUNCTION 140290f30 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FVisualizeDistanceFieldUpsamplePS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a17620,0,L"FVisualizeDistanceFieldUpsamplePS",
             L"/Engine/Private/DistanceFieldVisualization.usf",L"VisualizeDistanceFieldUpsamplePS",3
             ,1,TExponentialHeightFogPS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a17620 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a17750 = FVisualizeDistanceFieldUpsamplePS::ConstructCompiledInstance;
  _DAT_146a17758 = FUN_141b18a90;
  _DAT_146a17760 = BuildSettings::IsPromotedBuild;
  _DAT_146a17768 = &LAB_141b36890;
  atexit((_func_5014 *)&LAB_143e897c0);
  return;
}



// FUNCTION 140290fe0 FUN_140290fe0 body=269 status=ok
// SIG undefined FUN_140290fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140290fe0(void)

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
    plVar1[1] = (longlong)FUN_141b2b400;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a18520 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"GbxSky.Benchmark",
                  L"Performs a GPU Perf benchmark on GbxSky \nUsage: GbxSky.Benchmark StartTime DurationSeconds [TimeScale] [SampleCount] \nEx:    GbxSky.Benchmark 100 5 1 128 \nEx:    GbxSky.Benchmark 100 5"
                  ,&local_18,0);
  _DAT_146a18518 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402910dc;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402910dc:
  atexit(FUN_143e897d0);
  return;
}



// FUNCTION 1402910f0 `dynamic_initializer_for_'CVarAOClearHistory'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOClearHistory''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOClearHistory__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a160b8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AOClearHistory",&DAT_146a1538c,&DAT_144dd5dcc,0x20);
  _DAT_146a160b0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e89820);
  return;
}



// FUNCTION 140291160 `dynamic_initializer_for_'CVarAOHistoryDistanceThreshold'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOHistoryDistanceThreshold''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOHistoryDistanceThreshold__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a160e8 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.AOHistoryDistanceThreshold",&DAT_1464c1a18,
                  L"World space distance threshold needed to discard last frame\'s DFAO results.  Lower values reduce ghosting from characters when near a wall but increase flickering artifacts."
                  ,0x20);
  _DAT_146a160e0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e89870);
  return;
}



// FUNCTION 1402911d0 `dynamic_initializer_for_'CVarAOHistoryStabilityPass'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOHistoryStabilityPass''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOHistoryStabilityPass__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a160c8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AOHistoryStabilityPass",&DAT_1464c1a10,
                  L"Whether to gather stable results to fill in holes in the temporal reprojection.  Adds some GPU cost but improves temporal stability with foliage."
                  ,0x20);
  _DAT_146a160c0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e898c0);
  return;
}



// FUNCTION 140291240 `dynamic_initializer_for_'CVarAOHistoryWeight'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOHistoryWeight''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOHistoryWeight__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a160d8 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.AOHistoryWeight",&DAT_1464c1a14,
                  L"Amount of last frame\'s AO to lerp into the final result.  Higher values increase stability, lower values have less streaking under occluder movement."
                  ,0x20);
  _DAT_146a160d0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e89910);
  return;
}



// FUNCTION 1402912b0 `dynamic_initializer_for_'CVarAOLogObjectBufferReallocation'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOLogObjectBufferReallocation''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOLogObjectBufferReallocation__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a16a18 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AOLogObjectBufferReallocation",&DAT_146a153b4,&DAT_144dd6194,
                  0x20);
  _DAT_146a16a10 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e89960);
  return;
}



// FUNCTION 140291320 `dynamic_initializer_for_'CVarAOMaxObjectBoundingRadius'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOMaxObjectBoundingRadius''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOMaxObjectBoundingRadius__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a16a08 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.AOMaxObjectBoundingRadius",&DAT_1464c1a38,
                  L"Objects larger than this will not contribute to AO calculations, to improve performance."
                  ,0x20);
  _DAT_146a16a00 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e899b0);
  return;
}



// FUNCTION 140291390 `dynamic_initializer_for_'CVarAOScatterTileCulling'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOScatterTileCulling''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOScatterTileCulling__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a163a8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AOScatterTileCulling",&DAT_1464c1a28,
                  L"Whether to use the rasterizer for binning occluder objects into screenspace tiles."
                  ,0x20);
  _DAT_146a163a0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e89a00);
  return;
}



// FUNCTION 140291400 `dynamic_initializer_for_'CVarAOUseConesForGI'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOUseConesForGI''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOUseConesForGI__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a15430 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AOUseConesForGI",&DAT_1464c1a60,&DAT_144dd6da4,0x20);
  _DAT_146a15428 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e89a50);
  return;
}



// FUNCTION 140291470 `dynamic_initializer_for_'CVarAOUseHistory'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOUseHistory''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOUseHistory__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a160a8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AOUseHistory",&DAT_1464c1a0c,
                  L"Whether to apply a temporal filter to the distance field AO, which reduces flickering but also adds trails when occluders are moving."
                  ,0x20);
  _DAT_146a160a0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e89aa0);
  return;
}



// FUNCTION 1402914e0 `dynamic_initializer_for_'CVarAOUseJitter'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOUseJitter''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOUseJitter__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a16f68 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AOUseJitter",&DAT_1464c19f0,
                  L"Whether to use 4x temporal supersampling with Screen Grid DFAO.  When jitter is disabled, a shorter history can be used but there will be more spatial aliasing."
                  ,0x20);
  _DAT_146a16f60 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e89af0);
  return;
}



// FUNCTION 140291550 `dynamic_initializer_for_'CVarAOViewFadeDistanceScale'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOViewFadeDistanceScale''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOViewFadeDistanceScale__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a160f8 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.AOViewFadeDistanceScale",&DAT_1464c1a1c,
                  L"Distance over which AO will fade out as it approaches r.AOMaxViewDistance, as a fraction of r.AOMaxViewDistance."
                  ,0x20);
  _DAT_146a160f0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e89b40);
  return;
}



// FUNCTION 1402915c0 `dynamic_initializer_for_'CVarAverageObjectsPerShadowCullTile'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAverageObjectsPerShadowCullTile''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAverageObjectsPerShadowCullTile__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a17128 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.DFShadowAverageObjectsPerCullTile",&DAT_1464c1a30,
                  L"Determines how much memory should be allocated in distance field object culling data structures.  Too much = memory waste, too little = flickering due to buffer overflow."
                  ,0x24);
  _DAT_146a17120 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e89b90);
  return;
}



// FUNCTION 140291630 `dynamic_initializer_for_'CVarDFShadowQuality'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDFShadowQuality''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDFShadowQuality__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a170d8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.DFShadowQuality",&DAT_1464c19fc,
                  L"Defines the distance field shadow method which allows to adjust for quality or performance.\n 0:off, 1:medium (less samples, no SSS), 2:high (default)"
                  ,0x60);
  _DAT_146a170d0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e89be0);
  return;
}



// FUNCTION 1402916a0 `dynamic_initializer_for_'CVarDisableDistortion'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDisableDistortion''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDisableDistortion__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a17788 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DisableDistortion",0,
                  L"Prevents distortion effects from rendering.  Saves a full-screen framebuffer\'s worth of memory."
                  ,0);
  _DAT_146a17780 = &PTR_FUN_143f3ecf8;
  _DAT_146a17790 = (**(code **)(*DAT_146a17788 + 0x38))(DAT_146a17788);
  atexit(FUN_143e89c30);
  return;
}



// FUNCTION 140291710 `dynamic_initializer_for_'CVarDistanceFieldGI'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDistanceFieldGI''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDistanceFieldGI__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a153c0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.DistanceFieldGI",&DAT_146a153b0,&DAT_144dd6354,0x24);
  _DAT_146a153b8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e89c80);
  return;
}



// FUNCTION 140291780 `dynamic_initializer_for_'CVarDistanceFieldShadowing'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDistanceFieldShadowing''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDistanceFieldShadowing__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a170c8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.DistanceFieldShadowing",&DAT_1464c19f8,
                  L"Whether the distance field shadowing feature is allowed.",0x60);
  _DAT_146a170c0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e89cd0);
  return;
}



// FUNCTION 1402917f0 `dynamic_initializer_for_'CVarEmitMeshDrawEvent'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarEmitMeshDrawEvent''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarEmitMeshDrawEvent__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a177a0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.EmitMeshDrawEvents",&DAT_146a15388,
                  L"Emits a GPU event around each drawing policy draw call.  /nUseful for seeing stats about each draw call, however it greatly distorts total time and time per draw call."
                  ,0x20);
  _DAT_146a17798 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e89d20);
  return;
}



// FUNCTION 140291860 `dynamic_initializer_for_'CVarFog'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFog''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFog__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a177c0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Fog",1,L" 0: disabled\n 1: enabled (default)",0x60);
  _DAT_146a177b8 = &PTR_FUN_143f3ecf8;
  DAT_146a177c8 = (**(code **)(*DAT_146a177c0 + 0x38))(DAT_146a177c0);
  atexit(FUN_143e89d70);
  return;
}



// FUNCTION 1402918e0 `dynamic_initializer_for_'CVarFullResolutionDFShadowing'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFullResolutionDFShadowing''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFullResolutionDFShadowing__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a170e8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.DFFullResolution",&DAT_146a15384,
                  L"1 = full resolution distance field shadowing, 0 = half resolution with bilateral upsample."
                  ,0x60);
  _DAT_146a170e0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e89dc0);
  return;
}



// FUNCTION 140291950 FUN_140291950 body=115 status=ok
// SIG undefined FUN_140291950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140291950(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a18388 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxSky.AutoPerfAdjustment",2,
                  L"0: Sample count from GbxSky.TargetSampleCount is used \n1: Sample count is automatically adjusted, but only reduced \n2: Sample count is automatically adjusted, both increased and reduced"
                  ,0);
  _DAT_146a18380 = &PTR_FUN_143f3ecf8;
  DAT_146a18390 = (**(code **)(*DAT_146a18388 + 0x38))(DAT_146a18388);
  atexit(FUN_143e89e10);
  return;
}



// FUNCTION 1402919d0 FUN_1402919d0 body=115 status=ok
// SIG undefined FUN_1402919d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402919d0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a184c0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxSky.BufferAlphaBlend",1,
                  L"0: Alpha blending disabled \n1: Alpha blending enabled",0x20);
  _DAT_146a184b8 = &PTR_FUN_143f3ecf8;
  DAT_146a184c8 = (**(code **)(*DAT_146a184c0 + 0x38))(DAT_146a184c0);
  atexit(FUN_143e89e60);
  return;
}



// FUNCTION 140291a50 FUN_140291a50 body=115 status=ok
// SIG undefined FUN_140291a50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140291a50(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a184a8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxSky.DepthTest",1,
                  L"0: Septh testing disabled \n1: Depth testing enabled",0x20);
  _DAT_146a184a0 = &PTR_FUN_143f3ecf8;
  DAT_146a184b0 = (**(code **)(*DAT_146a184a8 + 0x38))(DAT_146a184a8);
  atexit(FUN_143e89eb0);
  return;
}



// FUNCTION 140291ad0 FUN_140291ad0 body=115 status=ok
// SIG undefined FUN_140291ad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140291ad0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a18490 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxSky.BufferDownSampleFactor",1,
                  L"1: No downsampling \n>1: Downsampled by a factor of n",0x20);
  _DAT_146a18488 = &PTR_FUN_143f3ecf8;
  DAT_146a18498 = (**(code **)(*DAT_146a18490 + 0x38))(DAT_146a18490);
  atexit(FUN_143e89f00);
  return;
}



// FUNCTION 140291b50 FUN_140291b50 body=112 status=ok
// SIG undefined FUN_140291b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140291b50(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a18460 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxSky.ClearCubeMapMode",0,
                  L"0: Cubemap is never cleared \n1: Clear cubemap every frame \n2: One time clear, value is set back to 0 afterwards \n3: Cleared every n frames where n is the value of GbxSky.UpdateDistribution"
                  ,0x20);
  _DAT_146a18458 = &PTR_FUN_143f3ecf8;
  DAT_146a18468 = (**(code **)(*DAT_146a18460 + 0x38))(DAT_146a18460);
  atexit(FUN_143e89f50);
  return;
}



// FUNCTION 140291bc0 FUN_140291bc0 body=112 status=ok
// SIG undefined FUN_140291bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140291bc0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a18400 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxSky.ComputeDepthMode",0,
                  L"0: No depth is used for compute updates \n1: Cube depthmap is used for compute updates \n2: Cube depthmap is used for compute updates and visualized"
                  ,0);
  _DAT_146a183f8 = &PTR_FUN_143f3ecf8;
  DAT_146a18408 = (**(code **)(*DAT_146a18400 + 0x38))(DAT_146a18400);
  atexit(FUN_143e89fa0);
  return;
}



// FUNCTION 140291c30 FUN_140291c30 body=115 status=ok
// SIG undefined FUN_140291c30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140291c30(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a18418 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxSky.ComputeShaderThreadGroups",4,
                  L"1, 2, 4, 8, 16 are valid values. Signifies the X and Y of the shader thread groups \n"
                  ,0);
  _DAT_146a18410 = &PTR_FUN_143f3ecf8;
  DAT_146a18420 = (**(code **)(*DAT_146a18418 + 0x38))(DAT_146a18418);
  atexit(FUN_143e89ff0);
  return;
}



// FUNCTION 140291cb0 FUN_140291cb0 body=115 status=ok
// SIG undefined FUN_140291cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140291cb0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a184f0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxSky.CubeMapFormat",1,L"0: PF_R8G8B8A8 \n1: PF_FloatRGBA",0x20);
  _DAT_146a184e8 = &PTR_FUN_143f3ecf8;
  DAT_146a184f8 = (**(code **)(*DAT_146a184f0 + 0x38))(DAT_146a184f0);
  atexit(FUN_143e8a040);
  return;
}



// FUNCTION 140291d30 FUN_140291d30 body=115 status=ok
// SIG undefined FUN_140291d30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140291d30(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a18508 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxSky.CubeMapMips",0xffffffff,L"n: Cubemap mips",0x20);
  _DAT_146a18500 = &PTR_FUN_143f3ecf8;
  DAT_146a18510 = (**(code **)(*DAT_146a18508 + 0x38))(DAT_146a18508);
  atexit(FUN_143e8a090);
  return;
}



// FUNCTION 140291db0 FUN_140291db0 body=115 status=ok
// SIG undefined FUN_140291db0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140291db0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a184d8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxSky.CubeMapResolution",0x200,L"n: Cubemap resolution",0x20);
  _DAT_146a184d0 = &PTR_FUN_143f3ecf8;
  DAT_146a184e0 = (**(code **)(*DAT_146a184d8 + 0x38))(DAT_146a184d8);
  atexit(FUN_143e8a0e0);
  return;
}



// FUNCTION 140291e30 FUN_140291e30 body=112 status=ok
// SIG undefined FUN_140291e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140291e30(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a18370 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxSky.DebugInfo",0,
                  L"0: No Debug Info \n>0: Mystery debug info :)",0);
  _DAT_146a18368 = &PTR_FUN_143f3ecf8;
  _DAT_146a18378 = (**(code **)(*DAT_146a18370 + 0x38))(DAT_146a18370);
  atexit(FUN_143e8a130);
  return;
}



// FUNCTION 140291ea0 FUN_140291ea0 body=112 status=ok
// SIG undefined FUN_140291ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140291ea0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a18430 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxSky.DebugShader",0,
                  L"0: Non-Debug shaders are used \n1: Shaders with GBXSKY_DEBUG defined are used \n"
                  ,0);
  _DAT_146a18428 = &PTR_FUN_143f3ecf8;
  DAT_146a18438 = (**(code **)(*DAT_146a18430 + 0x38))(DAT_146a18430);
  atexit(FUN_143e8a180);
  return;
}



// FUNCTION 140291f10 FUN_140291f10 body=115 status=ok
// SIG undefined FUN_140291f10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140291f10(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a18358 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"GbxSky.Enabled",1,&DAT_144dd60d4,0);
  _DAT_146a18350 = &PTR_FUN_143f3ecf8;
  DAT_146a18360 = (**(code **)(*DAT_146a18358 + 0x38))(DAT_146a18358);
  atexit(FUN_143e8a1d0);
  return;
}



// FUNCTION 140291f90 FUN_140291f90 body=112 status=ok
// SIG undefined FUN_140291f90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140291f90(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a18478 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"GbxSky.OverrideWorldTime",0,
                  L"0: Nothing \n!= 0: Aboslute world time used for rendering (for debugging/profiling/etc)"
                  ,0);
  _DAT_146a18470 = &PTR_FUN_143f3ecf8;
  _DAT_146a18480 = (**(code **)(*DAT_146a18478 + 0x40))(DAT_146a18478);
  atexit(FUN_143e8a220);
  return;
}



// FUNCTION 140292000 FUN_140292000 body=112 status=ok
// SIG undefined FUN_140292000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140292000(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a183e8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxSky.RandomUpdateDistribution",0,
                  L"0: Linear update distribution \n1: Random update distribution",0);
  _DAT_146a183e0 = &PTR_FUN_143f3ecf8;
  _DAT_146a183f0 = (**(code **)(*DAT_146a183e8 + 0x38))(DAT_146a183e8);
  atexit(FUN_143e8a270);
  return;
}



// FUNCTION 140292070 FUN_140292070 body=117 status=ok
// SIG undefined FUN_140292070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140292070(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a183a0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"GbxSky.TargetGpuCostMS",0x40200000,
                  L"n: Target maximum gpu time spent in milliseconds per frame",0);
  _DAT_146a18398 = &PTR_FUN_143f3ecf8;
  DAT_146a183a8 = (**(code **)(*DAT_146a183a0 + 0x40))(DAT_146a183a0);
  atexit(FUN_143e8a2c0);
  return;
}



// FUNCTION 1402920f0 `dynamic_initializer_for_'CVarReflectionCaptureSize'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarReflectionCaptureSize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarReflectionCaptureSize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a183b8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxSky.TargetSampleCount",0x80,
                  L"n: Target sample count for raymarching. Will not be exceeded but can go lower if GbxSKy.TargetGpuCostMS is not met"
                  ,0);
  _DAT_146a183b0 = &PTR_FUN_143f3ecf8;
  DAT_146a183c0 = (**(code **)(*DAT_146a183b8 + 0x38))(DAT_146a183b8);
  atexit(FUN_143e8a310);
  return;
}



// FUNCTION 140292170 FUN_140292170 body=115 status=ok
// SIG undefined FUN_140292170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140292170(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a183d0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"GbxSky.UpdateDistribution",0x10,
                  L"n: Full workload is split between n frames",0);
  _DAT_146a183c8 = &PTR_FUN_143f3ecf8;
  DAT_146a183d8 = (**(code **)(*DAT_146a183d0 + 0x38))(DAT_146a183d0);
  atexit(FUN_143e8a360);
  return;
}



// FUNCTION 1402921f0 FUN_1402921f0 body=112 status=ok
// SIG undefined FUN_1402921f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402921f0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a18448 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"GbxSky.ZKillThresholdOverride",0,
                  L"If not 0, this value will be used in place of ZKillThreshold from GbxSkyDefinition \nCube UV\'s with Z values below this threshold are not processed"
                  ,0);
  _DAT_146a18440 = &PTR_FUN_143f3ecf8;
  _DAT_146a18450 = (**(code **)(*DAT_146a18448 + 0x40))(DAT_146a18448);
  atexit(FUN_143e8a3b0);
  return;
}



// FUNCTION 140292260 `dynamic_initializer_for_'CVarMaxDistanceFieldObjectsPerCullTile'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMaxDistanceFieldObjectsPerCullTile''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMaxDistanceFieldObjectsPerCullTile__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a163b8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AOAverageObjectsPerCullTile",&DAT_1464c1a2c,
                  L"Determines how much memory should be allocated in distance field object culling data structures.  Too much = memory waste, too little = flickering due to buffer overflow."
                  ,0x24);
  _DAT_146a163b0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8a400);
  return;
}



// FUNCTION 1402922d0 `dynamic_initializer_for_'CVarShadowCullTileWorldSize'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarShadowCullTileWorldSize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarShadowCullTileWorldSize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a17108 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.DFShadowCullTileWorldSize",&DAT_1464c1a04,
                  L"World space size of a tile used for culling for directional lights.",0x60);
  _DAT_146a17100 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8a450);
  return;
}



// FUNCTION 140292340 `dynamic_initializer_for_'CVarShadowScatterTileCulling'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarShadowScatterTileCulling''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarShadowScatterTileCulling__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a170f8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.DFShadowScatterTileCulling",&DAT_1464c1a00,
                  L"Whether to use the rasterizer to scatter objects onto the tile grid for culling."
                  ,0x20);
  _DAT_146a170f0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8a4a0);
  return;
}



// FUNCTION 1402923b0 `dynamic_initializer_for_'CVarTwoSidedMeshDistanceBias'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarTwoSidedMeshDistanceBias''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarTwoSidedMeshDistanceBias__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a17118 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.DFTwoSidedMeshDistanceBias",&DAT_1464c1a08,
                  L"World space amount to expand distance field representations of two sided meshes.  This is useful to get tree shadows to match up with standard shadow mapping."
                  ,0x20);
  _DAT_146a17110 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8a4f0);
  return;
}



// FUNCTION 140292420 `dynamic_initializer_for_'CVarVPLDirectionalLightTraceDistance'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVPLDirectionalLightTraceDistance''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVPLDirectionalLightTraceDistance__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a15400 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.VPLDirectionalLightTraceDistance",&DAT_1464c1a54,&DAT_144dd65e4,
                  0x20);
  _DAT_146a153f8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8a540);
  return;
}



// FUNCTION 140292490 `dynamic_initializer_for_'CVarVPLGridDimension'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVPLGridDimension''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVPLGridDimension__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a153f0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.VPLGridDimension",&DAT_1464c1a50,&DAT_144dd65bc,0x20);
  _DAT_146a153e8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8a590);
  return;
}



// FUNCTION 140292500 `dynamic_initializer_for_'CVarVPLMeshGlobalIllumination'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVPLMeshGlobalIllumination''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVPLMeshGlobalIllumination__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a153d0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.VPLMeshGlobalIllumination",&DAT_1464c1a48,&DAT_144dd6564,0x20);
  _DAT_146a153c8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8a5e0);
  return;
}



// FUNCTION 140292570 `dynamic_initializer_for_'CVarVPLPlacementCameraRadius'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVPLPlacementCameraRadius''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVPLPlacementCameraRadius__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a15410 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.VPLPlacementCameraRadius",&DAT_1464c1a58,&DAT_144dd6614,0x20);
  _DAT_146a15408 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8a630);
  return;
}



// FUNCTION 1402925e0 `dynamic_initializer_for_'CVarVPLSelfOcclusionReplacement'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVPLSelfOcclusionReplacement''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVPLSelfOcclusionReplacement__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a15450 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.VPLSelfOcclusionReplacement",&DAT_1464c1a68,&DAT_144dd70c4,0x20)
  ;
  _DAT_146a15448 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8a680);
  return;
}



// FUNCTION 140292650 `dynamic_initializer_for_'CVarVPLSpreadUpdateOver'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVPLSpreadUpdateOver''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVPLSpreadUpdateOver__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a15440 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.VPLSpreadUpdateOver",&DAT_1464c1a64,&DAT_144dd6de4,0x20);
  _DAT_146a15438 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8a6d0);
  return;
}



// FUNCTION 1402926c0 `dynamic_initializer_for_'CVarVPLSurfelRepresentation'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVPLSurfelRepresentation''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVPLSurfelRepresentation__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a153e0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.VPLSurfelRepresentation",&DAT_1464c1a4c,&DAT_144dd6584,0x20);
  _DAT_146a153d8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8a720);
  return;
}



// FUNCTION 140292730 `dynamic_initializer_for_'CVarVPLViewCulling'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarVPLViewCulling''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarVPLViewCulling__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a15420 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.VPLViewCulling",&DAT_1464c1a5c,&DAT_144dd6994,0x20);
  _DAT_146a15418 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8a770);
  return;
}



// FUNCTION 1402927d0 FUN_1402927d0 body=32 status=ok
// SIG undefined FUN_1402927d0(void)

void FUN_1402927d0(void)

{
  FUN_141b26190(&DAT_146a163c0);
  atexit(FUN_143e8a7c0);
  return;
}



// FUNCTION 1402927f0 FUN_1402927f0 body=67 status=ok
// SIG undefined FUN_1402927f0(void)

void FUN_1402927f0(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1464c1a70 + 0x28))();
    atexit(FUN_143e8a800);
    return;
  }
  FUN_141edf270(&PTR_PTR_1464c1a70);
  atexit(FUN_143e8a800);
  return;
}



// FUNCTION 140292840 FUN_140292840 body=32 status=ok
// SIG undefined FUN_140292840(void)

void FUN_140292840(void)

{
  FUN_141b26280(&DAT_146a15540);
  atexit(_dynamic_atexit_destructor_for__GTileRendererVertexBuffer__);
  return;
}



// FUNCTION 140292860 FUN_140292860 body=67 status=ok
// SIG undefined FUN_140292860(void)

void FUN_140292860(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1464c1b50 + 0x28))();
    atexit(Impl::_dynamic_atexit_destructor_for__TestPlayer__);
    return;
  }
  FUN_141edf270(&PTR_PTR_1464c1b50);
  atexit(Impl::_dynamic_atexit_destructor_for__TestPlayer__);
  return;
}



// FUNCTION 1402928b0 FUN_1402928b0 body=79 status=ok
// SIG undefined FUN_1402928b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402928b0(void)

{
  char cVar1;
  
  _DAT_1464c1ae4 = DAT_146a15538;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1464c1ab0 + 0x28))();
    atexit(Impl::_dynamic_atexit_destructor_for__TestPlayer__);
    return;
  }
  FUN_141edf270(&PTR_PTR_1464c1ab0);
  atexit(Impl::_dynamic_atexit_destructor_for__TestPlayer__);
  return;
}



// FUNCTION 140292900 FUN_140292900 body=67 status=ok
// SIG undefined FUN_140292900(void)

void FUN_140292900(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1464c1b00 + 0x28))();
    atexit(Impl::_dynamic_atexit_destructor_for__TestPlayer__);
    return;
  }
  FUN_141edf270(&PTR_PTR_1464c1b00);
  atexit(Impl::_dynamic_atexit_destructor_for__TestPlayer__);
  return;
}



// FUNCTION 140292950 FUN_140292950 body=67 status=ok
// SIG undefined FUN_140292950(void)

void FUN_140292950(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1464c1bc0 + 0x28))();
    atexit(FUN_143e8a970);
    return;
  }
  FUN_141edf270(&PTR_PTR_1464c1bc0);
  atexit(FUN_143e8a970);
  return;
}



// FUNCTION 1402929a0 FUN_1402929a0 body=32 status=ok
// SIG undefined FUN_1402929a0(void)

void FUN_1402929a0(void)

{
  FUN_141b26190(&DAT_146a17130);
  atexit(FUN_143e8a9c0);
  return;
}



// FUNCTION 1402929d0 FUN_1402929d0 body=32 status=ok
// SIG undefined FUN_1402929d0(void)

void FUN_1402929d0(void)

{
  FUN_141b26280(&DAT_146a15460);
  atexit(_dynamic_atexit_destructor_for__GTileRendererVertexBuffer__);
  return;
}



// FUNCTION 1402929f0 FUN_1402929f0 body=78 status=ok
// SIG undefined FUN_1402929f0(void)

void FUN_1402929f0(void)

{
  FUN_1419d7f20(&DAT_146a182e0,L"GbxSkyPipeline",&DAT_146a18040,0,0,0,&DAT_146a18190,1);
  atexit((_func_5014 *)&LAB_143e8aa50);
  return;
}



// FUNCTION 140292b10 StaticStruct'' body=137 status=ok
// SIG undefined StaticStruct''(void)

void `dynamic_initializer_for_'FForwardLightData::StaticStruct__(void)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  longlong local_18 [3];
  
  FForwardLightData::zzGetMembersBefore(local_18,local_res8[0]);
  uVar1 = FName::FName(local_res8,L"FForwardLightData",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_146a1ea50,uVar1,L"FForwardLightData",L"ForwardLightData",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x280,local_18,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143e8aa60);
  return;
}



// FUNCTION 140292ba0 FUN_140292ba0 body=519 status=ok
// SIG undefined FUN_140292ba0(void)

void FUN_140292ba0(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  longlong local_48;
  int local_40;
  int local_3c;
  wchar_t *local_38;
  undefined2 *puStack_30;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_141b7c1f0(&local_48,local_res8[0]);
  iVar3 = local_40;
  lVar14 = (longlong)local_40;
  local_38 = L"SunIntensity";
  local_28 = 0x1f0;
  puStack_30 = &DAT_143f3eda8;
  local_40 = local_40 + 1;
  uStack_24 = 4;
  uStack_1c = 1;
  local_18 = 1;
  uStack_10 = 0;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  uVar8 = uStack_1c;
  uVar5 = local_28;
  puVar4 = puStack_30;
  iVar3 = local_40;
  puStack_30 = &DAT_143f3eda8;
  uVar6 = (undefined4)uStack_24;
  uVar7 = uStack_24._4_4_;
  local_28 = 500;
  uStack_24 = 4;
  puVar1 = (undefined8 *)(local_48 + lVar14 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = puVar4;
  uStack_1c = 1;
  uVar9 = (undefined4)local_18;
  uVar10 = local_18._4_4_;
  uVar11 = (undefined4)uStack_10;
  uVar12 = uStack_10._4_4_;
  local_18 = 1;
  puVar2 = (undefined4 *)(local_48 + 0x10 + lVar14 * 0x30);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  uStack_10 = 0;
  puVar2 = (undefined4 *)(local_48 + 0x20 + lVar14 * 0x30);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  lVar14 = (longlong)local_40;
  local_38 = L"SunLightColorOverrideWeight";
  local_40 = local_40 + 1;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  uVar8 = uStack_1c;
  uVar5 = local_28;
  puVar4 = puStack_30;
  iVar3 = local_40;
  puStack_30 = &DAT_143f3eda8;
  uVar6 = (undefined4)uStack_24;
  uVar7 = uStack_24._4_4_;
  local_28 = 0x1f8;
  uStack_24 = 4;
  puVar1 = (undefined8 *)(local_48 + lVar14 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = puVar4;
  uStack_1c = 1;
  uVar9 = (undefined4)local_18;
  uVar10 = local_18._4_4_;
  uVar11 = (undefined4)uStack_10;
  uVar12 = uStack_10._4_4_;
  local_18 = 1;
  puVar2 = (undefined4 *)(local_48 + 0x10 + lVar14 * 0x30);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  uStack_10 = 0;
  puVar2 = (undefined4 *)(local_48 + 0x20 + lVar14 * 0x30);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  lVar14 = (longlong)local_40;
  local_38 = L"SkyEnvironmentWeight";
  local_40 = local_40 + 1;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  puVar1 = (undefined8 *)(local_48 + lVar14 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = puStack_30;
  puVar2 = (undefined4 *)(local_48 + 0x10 + lVar14 * 0x30);
  *puVar2 = local_28;
  puVar2[1] = (undefined4)uStack_24;
  puVar2[2] = uStack_24._4_4_;
  puVar2[3] = uStack_1c;
  puVar2 = (undefined4 *)(local_48 + 0x20 + lVar14 * 0x30);
  *puVar2 = (undefined4)local_18;
  puVar2[1] = local_18._4_4_;
  puVar2[2] = (undefined4)uStack_10;
  puVar2[3] = uStack_10._4_4_;
  uVar13 = FName::FName(local_res8,L"FGbxSkyUB",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_146a1c440,uVar13,L"FGbxSkyUB",L"GbxSky",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x200,&local_48,1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143e8aa70);
  return;
}



// FUNCTION 140292db0 FUN_140292db0 body=170 status=ok
// SIG undefined FUN_140292db0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140292db0(void)

{
  FShaderType::FShaderType
            (&DAT_146a1ece0,0,L"FGbxSkyUpdateComputeShaderCS<1 GBX_COMMA true>",
             L"/Engine/Private/GbxSkyUpdateComputeShader.usf",L"ComputeShaderMain",5,1,FUN_141b5fc00
             ,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1ece0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1ee10 = FUN_141b5eba0;
  _DAT_146a1ee18 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a1ee20 = BuildSettings::IsPromotedBuild;
  _DAT_146a1ee28 = FUN_141b66ec0;
  atexit((_func_5014 *)&LAB_143e8aa80);
  return;
}



// FUNCTION 140292e60 FUN_140292e60 body=170 status=ok
// SIG undefined FUN_140292e60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140292e60(void)

{
  FShaderType::FShaderType
            (&DAT_146a1f370,0,L"FGbxSkyUpdateComputeShaderCS<1 GBX_COMMA false>",
             L"/Engine/Private/GbxSkyUpdateComputeShader.usf",L"ComputeShaderMain",5,1,FUN_141b5fc00
             ,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1f370 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1f4a0 = FUN_141b5eba0;
  _DAT_146a1f4a8 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a1f4b0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1f4b8 = FUN_141b66f40;
  atexit((_func_5014 *)&LAB_143e8aa90);
  return;
}



// FUNCTION 140292f10 FUN_140292f10 body=170 status=ok
// SIG undefined FUN_140292f10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140292f10(void)

{
  FShaderType::FShaderType
            (&DAT_146a1ee30,0,L"FGbxSkyUpdateComputeShaderCS<2 GBX_COMMA true>",
             L"/Engine/Private/GbxSkyUpdateComputeShader.usf",L"ComputeShaderMain",5,1,FUN_141b5fc30
             ,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1ee30 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1ef60 = FUN_141b5ebd0;
  _DAT_146a1ef68 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a1ef70 = BuildSettings::IsPromotedBuild;
  _DAT_146a1ef78 = FUN_141b66fc0;
  atexit((_func_5014 *)&LAB_143e8aaa0);
  return;
}



// FUNCTION 140292fc0 FUN_140292fc0 body=170 status=ok
// SIG undefined FUN_140292fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140292fc0(void)

{
  FShaderType::FShaderType
            (&DAT_146a1f4c0,0,L"FGbxSkyUpdateComputeShaderCS<2 GBX_COMMA false>",
             L"/Engine/Private/GbxSkyUpdateComputeShader.usf",L"ComputeShaderMain",5,1,FUN_141b5fc30
             ,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1f4c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1f5f0 = FUN_141b5ebd0;
  _DAT_146a1f5f8 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a1f600 = BuildSettings::IsPromotedBuild;
  _DAT_146a1f608 = FUN_141b67040;
  atexit((_func_5014 *)&LAB_143e8aab0);
  return;
}



// FUNCTION 140293070 FUN_140293070 body=170 status=ok
// SIG undefined FUN_140293070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140293070(void)

{
  FShaderType::FShaderType
            (&DAT_146a1ef80,0,L"FGbxSkyUpdateComputeShaderCS<4 GBX_COMMA true>",
             L"/Engine/Private/GbxSkyUpdateComputeShader.usf",L"ComputeShaderMain",5,1,FUN_141b5fc60
             ,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1ef80 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1f0b0 = FUN_141b5ec00;
  _DAT_146a1f0b8 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a1f0c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1f0c8 = FUN_141b670c0;
  atexit((_func_5014 *)&LAB_143e8aac0);
  return;
}



// FUNCTION 140293120 FUN_140293120 body=170 status=ok
// SIG undefined FUN_140293120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140293120(void)

{
  FShaderType::FShaderType
            (&DAT_146a1f610,0,L"FGbxSkyUpdateComputeShaderCS<4 GBX_COMMA false>",
             L"/Engine/Private/GbxSkyUpdateComputeShader.usf",L"ComputeShaderMain",5,1,FUN_141b5fc60
             ,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1f610 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1f740 = FUN_141b5ec00;
  _DAT_146a1f748 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a1f750 = BuildSettings::IsPromotedBuild;
  _DAT_146a1f758 = FUN_141b67140;
  atexit((_func_5014 *)&LAB_143e8aad0);
  return;
}



// FUNCTION 1402931d0 FUN_1402931d0 body=170 status=ok
// SIG undefined FUN_1402931d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402931d0(void)

{
  FShaderType::FShaderType
            (&DAT_146a1f0d0,0,L"FGbxSkyUpdateComputeShaderCS<8 GBX_COMMA true>",
             L"/Engine/Private/GbxSkyUpdateComputeShader.usf",L"ComputeShaderMain",5,1,FUN_141b5fc90
             ,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1f0d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1f200 = FUN_141b5ec30;
  _DAT_146a1f208 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a1f210 = BuildSettings::IsPromotedBuild;
  _DAT_146a1f218 = FUN_141b671c0;
  atexit((_func_5014 *)&LAB_143e8aae0);
  return;
}



// FUNCTION 140293280 FUN_140293280 body=170 status=ok
// SIG undefined FUN_140293280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140293280(void)

{
  FShaderType::FShaderType
            (&DAT_146a1f760,0,L"FGbxSkyUpdateComputeShaderCS<8 GBX_COMMA false>",
             L"/Engine/Private/GbxSkyUpdateComputeShader.usf",L"ComputeShaderMain",5,1,FUN_141b5fc90
             ,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1f760 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1f890 = FUN_141b5ec30;
  _DAT_146a1f898 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a1f8a0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1f8a8 = FUN_141b67240;
  atexit((_func_5014 *)&LAB_143e8aaf0);
  return;
}



// FUNCTION 140293330 FUN_140293330 body=170 status=ok
// SIG undefined FUN_140293330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140293330(void)

{
  FShaderType::FShaderType
            (&DAT_146a1f220,0,L"FGbxSkyUpdateComputeShaderCS<16 GBX_COMMA true>",
             L"/Engine/Private/GbxSkyUpdateComputeShader.usf",L"ComputeShaderMain",5,1,FUN_141b5fcc0
             ,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1f220 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1f350 = FUN_141b5ec60;
  _DAT_146a1f358 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a1f360 = BuildSettings::IsPromotedBuild;
  _DAT_146a1f368 = FUN_141b672c0;
  atexit((_func_5014 *)&LAB_143e8ab00);
  return;
}



// FUNCTION 1402933e0 FUN_1402933e0 body=170 status=ok
// SIG undefined FUN_1402933e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402933e0(void)

{
  FShaderType::FShaderType
            (&DAT_146a1f8b0,0,L"FGbxSkyUpdateComputeShaderCS<16 GBX_COMMA false>",
             L"/Engine/Private/GbxSkyUpdateComputeShader.usf",L"ComputeShaderMain",5,1,FUN_141b5fcc0
             ,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1f8b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1f9e0 = FUN_141b5ec60;
  _DAT_146a1f9e8 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a1f9f0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1f9f8 = FUN_141b67340;
  atexit((_func_5014 *)&LAB_143e8ab10);
  return;
}



// FUNCTION 140293490 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FPostProcessBenchmarkPS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a205d0,0,L"FPostProcessBenchmarkPS1",L"/Engine/Private/GPUBenchmark.usf",
             L"MainPS",3,1,FUN_141b2daa0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a205d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a20700 = FPostProcessBenchmarkPS<1>::ConstructCompiledInstance;
  _DAT_146a20708 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a20710 = BuildSettings::IsPromotedBuild;
  _DAT_146a20718 = &LAB_141b673c0;
  atexit((_func_5014 *)&LAB_143e8ab20);
  return;
}



// FUNCTION 140293540 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FPostProcessBenchmarkPS<2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a20720,0,L"FPostProcessBenchmarkPS2",L"/Engine/Private/GPUBenchmark.usf",
             L"MainPS",3,1,FUN_141b2daa0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a20720 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a20850 = FPostProcessBenchmarkPS<1>::ConstructCompiledInstance;
  _DAT_146a20858 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a20860 = BuildSettings::IsPromotedBuild;
  _DAT_146a20868 = &LAB_141b673e0;
  atexit((_func_5014 *)&LAB_143e8ab30);
  return;
}



// FUNCTION 1402935f0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FPostProcessBenchmarkPS<3>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a20870,0,L"FPostProcessBenchmarkPS3",L"/Engine/Private/GPUBenchmark.usf",
             L"MainPS",3,1,FUN_141b2daa0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a20870 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a209a0 = FPostProcessBenchmarkPS<1>::ConstructCompiledInstance;
  _DAT_146a209a8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a209b0 = BuildSettings::IsPromotedBuild;
  _DAT_146a209b8 = &LAB_141b67400;
  atexit((_func_5014 *)&LAB_143e8ab40);
  return;
}



// FUNCTION 1402936a0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FPostProcessBenchmarkPS<4>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a209c0,0,L"FPostProcessBenchmarkPS4",L"/Engine/Private/GPUBenchmark.usf",
             L"MainPS",3,1,FUN_141b2daa0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a209c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a20af0 = FPostProcessBenchmarkPS<1>::ConstructCompiledInstance;
  _DAT_146a20af8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a20b00 = BuildSettings::IsPromotedBuild;
  _DAT_146a20b08 = &LAB_141b67420;
  atexit((_func_5014 *)&LAB_143e8ab50);
  return;
}



// FUNCTION 140293750 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FPostProcessBenchmarkPS<5>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a20b10,0,L"FPostProcessBenchmarkPS5",L"/Engine/Private/GPUBenchmark.usf",
             L"MainPS",3,1,FUN_141b2daa0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a20b10 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a20c40 = FPostProcessBenchmarkPS<1>::ConstructCompiledInstance;
  _DAT_146a20c48 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a20c50 = BuildSettings::IsPromotedBuild;
  _DAT_146a20c58 = &LAB_141b67440;
  atexit((_func_5014 *)&LAB_143e8ab60);
  return;
}



// FUNCTION 140293800 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FPostProcessBenchmarkPS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a20480,0,L"FPostProcessBenchmarkPS0",L"/Engine/Private/GPUBenchmark.usf",
             L"MainPS",3,1,FUN_141b2daa0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a20480 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a205b0 = FPostProcessBenchmarkPS<1>::ConstructCompiledInstance;
  _DAT_146a205b8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a205c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a205c8 = &LAB_141b67460;
  atexit((_func_5014 *)&LAB_143e8ab70);
  return;
}



// FUNCTION 1402938b0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FPostProcessBenchmarkVS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a20db0,0,L"FPostProcessBenchmarkVS1",L"/Engine/Private/GPUBenchmark.usf",
             L"MainBenchmarkVS",0,1,FUN_14049d790,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a20db0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a20ee0 = FUN_14049d5b0;
  _DAT_146a20ee8 = BuildSettings::IsPromotedBuild;
  _DAT_146a20ef0 = BuildSettings::IsPromotedBuild;
  _DAT_146a20ef8 = &LAB_141b67480;
  atexit((_func_5014 *)&LAB_143e8ab80);
  return;
}



// FUNCTION 140293960 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FPostProcessBenchmarkVS<2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a20f00,0,L"FPostProcessBenchmarkVS2",L"/Engine/Private/GPUBenchmark.usf",
             L"MainBenchmarkVS",0,1,FUN_14049d790,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a20f00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a21030 = FUN_14049d5b0;
  _DAT_146a21038 = BuildSettings::IsPromotedBuild;
  _DAT_146a21040 = BuildSettings::IsPromotedBuild;
  _DAT_146a21048 = &LAB_141b674a0;
  atexit((_func_5014 *)&LAB_143e8ab90);
  return;
}



// FUNCTION 140293a10 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FPostProcessBenchmarkVS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a20c60,0,L"FPostProcessBenchmarkVS0",L"/Engine/Private/GPUBenchmark.usf",
             L"MainBenchmarkVS",0,1,FUN_14049d790,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a20c60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a20d90 = FUN_14049d5b0;
  _DAT_146a20d98 = BuildSettings::IsPromotedBuild;
  _DAT_146a20da0 = BuildSettings::IsPromotedBuild;
  _DAT_146a20da8 = &LAB_141b674c0;
  atexit((_func_5014 *)&LAB_143e8aba0);
  return;
}



// FUNCTION 140293ac0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TCompositeObjectDistanceFieldsCS<1,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1fca0,0,L"TCompositeObjectDistanceFieldsCStrueFlatten_YAxis",
             L"/Engine/Private/GlobalDistanceField.usf",L"CompositeObjectDistanceFieldsCS",5,1,
             FUN_141b5fcf0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1fca0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1fdd0 = FUN_141b5ed30;
  _DAT_146a1fdd8 = FUN_141b18a90;
  _DAT_146a1fde0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1fde8 = TCompositeObjectDistanceFieldsCS<1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e8abb0);
  return;
}



// FUNCTION 140293b70 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TCompositeObjectDistanceFieldsCS<1,2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1fdf0,0,L"TCompositeObjectDistanceFieldsCStrueFlatten_ZAxis",
             L"/Engine/Private/GlobalDistanceField.usf",L"CompositeObjectDistanceFieldsCS",5,1,
             FUN_141b5fcf0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1fdf0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1ff20 = FUN_141b5ed30;
  _DAT_146a1ff28 = FUN_141b18a90;
  _DAT_146a1ff30 = BuildSettings::IsPromotedBuild;
  _DAT_146a1ff38 = TCompositeObjectDistanceFieldsCS<1,2>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e8abc0);
  return;
}



// FUNCTION 140293c20 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TCompositeObjectDistanceFieldsCS<1,3>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1fa00,0,L"TCompositeObjectDistanceFieldsCStrueFlatten_None",
             L"/Engine/Private/GlobalDistanceField.usf",L"CompositeObjectDistanceFieldsCS",5,1,
             FUN_141b5fcf0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1fa00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1fb30 = FUN_141b5ed30;
  _DAT_146a1fb38 = FUN_141b18a90;
  _DAT_146a1fb40 = BuildSettings::IsPromotedBuild;
  _DAT_146a1fb48 = TCompositeObjectDistanceFieldsCS<1,3>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e8abd0);
  return;
}



// FUNCTION 140293cd0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TCompositeObjectDistanceFieldsCS<1,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1fb50,0,L"TCompositeObjectDistanceFieldsCStrueFlatten_XAxis",
             L"/Engine/Private/GlobalDistanceField.usf",L"CompositeObjectDistanceFieldsCS",5,1,
             FUN_141b5fcf0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1fb50 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1fc80 = FUN_141b5ed30;
  _DAT_146a1fc88 = FUN_141b18a90;
  _DAT_146a1fc90 = BuildSettings::IsPromotedBuild;
  _DAT_146a1fc98 = TCompositeObjectDistanceFieldsCS<1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e8abe0);
  return;
}



// FUNCTION 140293d80 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TCompositeObjectDistanceFieldsCS<0,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a201e0,0,L"TCompositeObjectDistanceFieldsCSfalseFlatten_YAxis",
             L"/Engine/Private/GlobalDistanceField.usf",L"CompositeObjectDistanceFieldsCS",5,1,
             FUN_141b5fcf0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a201e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a20310 = FUN_141b5ed30;
  _DAT_146a20318 = FUN_141b18a90;
  _DAT_146a20320 = BuildSettings::IsPromotedBuild;
  _DAT_146a20328 = TCompositeObjectDistanceFieldsCS<0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e8abf0);
  return;
}



// FUNCTION 140293e30 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TCompositeObjectDistanceFieldsCS<0,2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a20330,0,L"TCompositeObjectDistanceFieldsCSfalseFlatten_ZAxis",
             L"/Engine/Private/GlobalDistanceField.usf",L"CompositeObjectDistanceFieldsCS",5,1,
             FUN_141b5fcf0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a20330 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a20460 = FUN_141b5ed30;
  _DAT_146a20468 = FUN_141b18a90;
  _DAT_146a20470 = BuildSettings::IsPromotedBuild;
  _DAT_146a20478 = TCompositeObjectDistanceFieldsCS<0,2>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e8ac00);
  return;
}



// FUNCTION 140293ee0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TCompositeObjectDistanceFieldsCS<0,3>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1ff40,0,L"TCompositeObjectDistanceFieldsCSfalseFlatten_None",
             L"/Engine/Private/GlobalDistanceField.usf",L"CompositeObjectDistanceFieldsCS",5,1,
             FUN_141b5fcf0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1ff40 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a20070 = FUN_141b5ed30;
  _DAT_146a20078 = FUN_141b18a90;
  _DAT_146a20080 = BuildSettings::IsPromotedBuild;
  _DAT_146a20088 = TCompositeObjectDistanceFieldsCS<0,3>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e8ac10);
  return;
}



// FUNCTION 140293f90 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TCompositeObjectDistanceFieldsCS<0,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a20090,0,L"TCompositeObjectDistanceFieldsCSfalseFlatten_XAxis",
             L"/Engine/Private/GlobalDistanceField.usf",L"CompositeObjectDistanceFieldsCS",5,1,
             FUN_141b5fcf0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a20090 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a201c0 = FUN_141b5ed30;
  _DAT_146a201c8 = FUN_141b18a90;
  _DAT_146a201d0 = BuildSettings::IsPromotedBuild;
  _DAT_146a201d8 = TCompositeObjectDistanceFieldsCS<0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e8ac20);
  return;
}



// FUNCTION 140294040 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSComplexTransformCS<2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a220d0,0,L"FGSComplexTransformCSLength2",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedComplexFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a220d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a22200 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a22208 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a22210 = BuildSettings::IsPromotedBuild;
  _DAT_146a22218 = FUN_141b67960;
  atexit((_func_5014 *)&LAB_143e8ac30);
  return;
}



// FUNCTION 1402940f0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSComplexTransformCS<4>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a22610,0,L"FGSComplexTransformCSLength4",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedComplexFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a22610 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a22740 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a22748 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a22750 = BuildSettings::IsPromotedBuild;
  _DAT_146a22758 = FUN_141b679a0;
  atexit((_func_5014 *)&LAB_143e8ac40);
  return;
}



// FUNCTION 1402941a0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSComplexTransformCS<8>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a22b50,0,L"FGSComplexTransformCSLength8",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedComplexFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a22b50 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a22c80 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a22c88 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a22c90 = BuildSettings::IsPromotedBuild;
  _DAT_146a22c98 = FUN_141b679e0;
  atexit((_func_5014 *)&LAB_143e8ac50);
  return;
}



// FUNCTION 140294250 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSComplexTransformCS<16>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a22220,0,L"FGSComplexTransformCSLength16",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedComplexFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a22220 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a22350 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a22358 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a22360 = BuildSettings::IsPromotedBuild;
  _DAT_146a22368 = FUN_141b67a20;
  atexit((_func_5014 *)&LAB_143e8ac60);
  return;
}



// FUNCTION 140294300 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSComplexTransformCS<256>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a228b0,0,L"FGSComplexTransformCSLength256",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedComplexFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a228b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a229e0 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a229e8 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a229f0 = BuildSettings::IsPromotedBuild;
  _DAT_146a229f8 = FUN_141b67a60;
  atexit((_func_5014 *)&LAB_143e8ac70);
  return;
}



// FUNCTION 1402943b0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSComplexTransformCS<4096>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a22f40,0,L"FGSComplexTransformCSLength4096",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedComplexFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a22f40 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a23070 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a23078 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a23080 = BuildSettings::IsPromotedBuild;
  _DAT_146a23088 = FUN_141b67aa0;
  atexit((_func_5014 *)&LAB_143e8ac80);
  return;
}



// FUNCTION 140294460 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSComplexTransformCS<32>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a22760,0,L"FGSComplexTransformCSLength32",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedComplexFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a22760 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a22890 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a22898 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a228a0 = BuildSettings::IsPromotedBuild;
  _DAT_146a228a8 = FUN_141b67ae0;
  atexit((_func_5014 *)&LAB_143e8ac90);
  return;
}



// FUNCTION 140294510 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSComplexTransformCS<512>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a22df0,0,L"FGSComplexTransformCSLength512",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedComplexFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a22df0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a22f20 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a22f28 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a22f30 = BuildSettings::IsPromotedBuild;
  _DAT_146a22f38 = FUN_141b67b20;
  atexit((_func_5014 *)&LAB_143e8aca0);
  return;
}



// FUNCTION 1402945c0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSComplexTransformCS<64>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a22ca0,0,L"FGSComplexTransformCSLength64",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedComplexFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a22ca0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a22dd0 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a22dd8 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a22de0 = BuildSettings::IsPromotedBuild;
  _DAT_146a22de8 = FUN_141b67b60;
  atexit((_func_5014 *)&LAB_143e8acb0);
  return;
}



// FUNCTION 140294670 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSComplexTransformCS<1024>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a224c0,0,L"FGSComplexTransformCSLength1024",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedComplexFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a224c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a225f0 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a225f8 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a22600 = BuildSettings::IsPromotedBuild;
  _DAT_146a22608 = FUN_141b67ba0;
  atexit((_func_5014 *)&LAB_143e8acc0);
  return;
}



// FUNCTION 140294720 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSComplexTransformCS<128>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a22370,0,L"FGSComplexTransformCSLength128",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedComplexFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a22370 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a224a0 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a224a8 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a224b0 = BuildSettings::IsPromotedBuild;
  _DAT_146a224b8 = FUN_141b67be0;
  atexit((_func_5014 *)&LAB_143e8acd0);
  return;
}



// FUNCTION 1402947d0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSComplexTransformCS<2048>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a22a00,0,L"FGSComplexTransformCSLength2048",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedComplexFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a22a00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a22b30 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a22b38 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a22b40 = BuildSettings::IsPromotedBuild;
  _DAT_146a22b48 = FUN_141b67c20;
  atexit((_func_5014 *)&LAB_143e8ace0);
  return;
}



// FUNCTION 140294880 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSConvolutionWithTexturerCS<2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a24050,0,L"FGSConvolutionWithTextureCSLength2",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GSConvolutionWithTextureCS",5,1,
             FUN_141b5fd90,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a24050 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a24180 = FUN_141b5edb0;
  _DAT_146a24188 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a24190 = BuildSettings::IsPromotedBuild;
  _DAT_146a24198 = FUN_141b67c60;
  atexit((_func_5014 *)&LAB_143e8acf0);
  return;
}



// FUNCTION 140294930 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSConvolutionWithTexturerCS<4>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a24590,0,L"FGSConvolutionWithTextureCSLength4",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GSConvolutionWithTextureCS",5,1,
             FUN_141b5fd90,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a24590 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a246c0 = FUN_141b5edb0;
  _DAT_146a246c8 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a246d0 = BuildSettings::IsPromotedBuild;
  _DAT_146a246d8 = FUN_141b67ca0;
  atexit((_func_5014 *)&LAB_143e8ad00);
  return;
}



// FUNCTION 1402949e0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSConvolutionWithTexturerCS<8>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a24ad0,0,L"FGSConvolutionWithTextureCSLength8",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GSConvolutionWithTextureCS",5,1,
             FUN_141b5fd90,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a24ad0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a24c00 = FUN_141b5edb0;
  _DAT_146a24c08 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a24c10 = BuildSettings::IsPromotedBuild;
  _DAT_146a24c18 = FUN_141b67ce0;
  atexit((_func_5014 *)&LAB_143e8ad10);
  return;
}



// FUNCTION 140294a90 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSConvolutionWithTexturerCS<16>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a241a0,0,L"FGSConvolutionWithTextureCSLength16",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GSConvolutionWithTextureCS",5,1,
             FUN_141b5fd90,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a241a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a242d0 = FUN_141b5edb0;
  _DAT_146a242d8 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a242e0 = BuildSettings::IsPromotedBuild;
  _DAT_146a242e8 = FUN_141b67d20;
  atexit((_func_5014 *)&LAB_143e8ad20);
  return;
}



// FUNCTION 140294b40 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSConvolutionWithTexturerCS<256>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a24830,0,L"FGSConvolutionWithTextureCSLength256",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GSConvolutionWithTextureCS",5,1,
             FUN_141b5fd90,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a24830 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a24960 = FUN_141b5edb0;
  _DAT_146a24968 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a24970 = BuildSettings::IsPromotedBuild;
  _DAT_146a24978 = FUN_141b67d60;
  atexit((_func_5014 *)&LAB_143e8ad30);
  return;
}



// FUNCTION 140294bf0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSConvolutionWithTexturerCS<4096>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a24ec0,0,L"FGSConvolutionWithTextureCSLength4096",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GSConvolutionWithTextureCS",5,1,
             FUN_141b5fd90,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a24ec0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a24ff0 = FUN_141b5edb0;
  _DAT_146a24ff8 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a25000 = BuildSettings::IsPromotedBuild;
  _DAT_146a25008 = FUN_141b67da0;
  atexit((_func_5014 *)&LAB_143e8ad40);
  return;
}



// FUNCTION 140294ca0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSConvolutionWithTexturerCS<32>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a246e0,0,L"FGSConvolutionWithTextureCSLength32",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GSConvolutionWithTextureCS",5,1,
             FUN_141b5fd90,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a246e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a24810 = FUN_141b5edb0;
  _DAT_146a24818 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a24820 = BuildSettings::IsPromotedBuild;
  _DAT_146a24828 = FUN_141b67de0;
  atexit((_func_5014 *)&LAB_143e8ad50);
  return;
}



// FUNCTION 140294d50 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSConvolutionWithTexturerCS<512>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a24d70,0,L"FGSConvolutionWithTextureCSLength512",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GSConvolutionWithTextureCS",5,1,
             FUN_141b5fd90,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a24d70 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a24ea0 = FUN_141b5edb0;
  _DAT_146a24ea8 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a24eb0 = BuildSettings::IsPromotedBuild;
  _DAT_146a24eb8 = FUN_141b67e20;
  atexit((_func_5014 *)&LAB_143e8ad60);
  return;
}



// FUNCTION 140294e00 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSConvolutionWithTexturerCS<64>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a24c20,0,L"FGSConvolutionWithTextureCSLength64",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GSConvolutionWithTextureCS",5,1,
             FUN_141b5fd90,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a24c20 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a24d50 = FUN_141b5edb0;
  _DAT_146a24d58 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a24d60 = BuildSettings::IsPromotedBuild;
  _DAT_146a24d68 = FUN_141b67e60;
  atexit((_func_5014 *)&LAB_143e8ad70);
  return;
}



// FUNCTION 140294eb0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSConvolutionWithTexturerCS<1024>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a24440,0,L"FGSConvolutionWithTextureCSLength1024",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GSConvolutionWithTextureCS",5,1,
             FUN_141b5fd90,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a24440 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a24570 = FUN_141b5edb0;
  _DAT_146a24578 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a24580 = BuildSettings::IsPromotedBuild;
  _DAT_146a24588 = FUN_141b67ea0;
  atexit((_func_5014 *)&LAB_143e8ad80);
  return;
}



// FUNCTION 140294f60 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSConvolutionWithTexturerCS<128>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a242f0,0,L"FGSConvolutionWithTextureCSLength128",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GSConvolutionWithTextureCS",5,1,
             FUN_141b5fd90,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a242f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a24420 = FUN_141b5edb0;
  _DAT_146a24428 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a24430 = BuildSettings::IsPromotedBuild;
  _DAT_146a24438 = FUN_141b67ee0;
  atexit((_func_5014 *)&LAB_143e8ad90);
  return;
}



// FUNCTION 140295010 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSConvolutionWithTexturerCS<2048>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a24980,0,L"FGSConvolutionWithTextureCSLength2048",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GSConvolutionWithTextureCS",5,1,
             FUN_141b5fd90,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a24980 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a24ab0 = FUN_141b5edb0;
  _DAT_146a24ab8 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a24ac0 = BuildSettings::IsPromotedBuild;
  _DAT_146a24ac8 = FUN_141b67f20;
  atexit((_func_5014 *)&LAB_143e8ada0);
  return;
}



// FUNCTION 1402950c0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSTwoForOneTransformCS<2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a23090,0,L"FGSTwoForOneTransformCSLength2",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedTwoForOneFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a23090 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a231c0 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a231c8 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a231d0 = BuildSettings::IsPromotedBuild;
  _DAT_146a231d8 = FUN_141b67f60;
  atexit((_func_5014 *)&LAB_143e8adb0);
  return;
}



// FUNCTION 140295170 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSTwoForOneTransformCS<4>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a235d0,0,L"FGSTwoForOneTransformCSLength4",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedTwoForOneFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a235d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a23700 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a23708 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a23710 = BuildSettings::IsPromotedBuild;
  _DAT_146a23718 = FUN_141b67fa0;
  atexit((_func_5014 *)&LAB_143e8adc0);
  return;
}



// FUNCTION 140295220 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSTwoForOneTransformCS<8>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a23b10,0,L"FGSTwoForOneTransformCSLength8",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedTwoForOneFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a23b10 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a23c40 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a23c48 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a23c50 = BuildSettings::IsPromotedBuild;
  _DAT_146a23c58 = FUN_141b67fe0;
  atexit((_func_5014 *)&LAB_143e8add0);
  return;
}



// FUNCTION 1402952d0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSTwoForOneTransformCS<16>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a231e0,0,L"FGSTwoForOneTransformCSLength16",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedTwoForOneFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a231e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a23310 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a23318 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a23320 = BuildSettings::IsPromotedBuild;
  _DAT_146a23328 = FUN_141b68020;
  atexit((_func_5014 *)&LAB_143e8ade0);
  return;
}



// FUNCTION 140295380 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSTwoForOneTransformCS<256>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a23870,0,L"FGSTwoForOneTransformCSLength256",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedTwoForOneFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a23870 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a239a0 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a239a8 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a239b0 = BuildSettings::IsPromotedBuild;
  _DAT_146a239b8 = FUN_141b68060;
  atexit((_func_5014 *)&LAB_143e8adf0);
  return;
}



// FUNCTION 140295430 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSTwoForOneTransformCS<4096>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a23f00,0,L"FGSTwoForOneTransformCSLength4096",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedTwoForOneFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a23f00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a24030 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a24038 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a24040 = BuildSettings::IsPromotedBuild;
  _DAT_146a24048 = FUN_141b680a0;
  atexit((_func_5014 *)&LAB_143e8ae00);
  return;
}



// FUNCTION 1402954e0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSTwoForOneTransformCS<32>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a23720,0,L"FGSTwoForOneTransformCSLength32",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedTwoForOneFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a23720 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a23850 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a23858 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a23860 = BuildSettings::IsPromotedBuild;
  _DAT_146a23868 = FUN_141b680e0;
  atexit((_func_5014 *)&LAB_143e8ae10);
  return;
}



// FUNCTION 140295590 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSTwoForOneTransformCS<512>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a23db0,0,L"FGSTwoForOneTransformCSLength512",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedTwoForOneFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a23db0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a23ee0 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a23ee8 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a23ef0 = BuildSettings::IsPromotedBuild;
  _DAT_146a23ef8 = FUN_141b68120;
  atexit((_func_5014 *)&LAB_143e8ae20);
  return;
}



// FUNCTION 140295640 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSTwoForOneTransformCS<64>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a23c60,0,L"FGSTwoForOneTransformCSLength64",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedTwoForOneFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a23c60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a23d90 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a23d98 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a23da0 = BuildSettings::IsPromotedBuild;
  _DAT_146a23da8 = FUN_141b68160;
  atexit((_func_5014 *)&LAB_143e8ae30);
  return;
}



// FUNCTION 1402956f0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSTwoForOneTransformCS<1024>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a23480,0,L"FGSTwoForOneTransformCSLength1024",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedTwoForOneFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a23480 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a235b0 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a235b8 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a235c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a235c8 = FUN_141b681a0;
  atexit((_func_5014 *)&LAB_143e8ae40);
  return;
}



// FUNCTION 1402957a0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSTwoForOneTransformCS<128>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a23330,0,L"FGSTwoForOneTransformCSLength128",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedTwoForOneFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a23330 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a23460 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a23468 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a23470 = BuildSettings::IsPromotedBuild;
  _DAT_146a23478 = FUN_141b681e0;
  atexit((_func_5014 *)&LAB_143e8ae50);
  return;
}



// FUNCTION 140295850 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::TGSTwoForOneTransformCS<2048>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a239c0,0,L"FGSTwoForOneTransformCSLength2048",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedTwoForOneFFTCS",5,1,
             GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a239c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a23af0 = GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance;
  _DAT_146a23af8 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a23b00 = BuildSettings::IsPromotedBuild;
  _DAT_146a23b08 = FUN_141b68220;
  atexit((_func_5014 *)&LAB_143e8ae60);
  return;
}



// FUNCTION 140295900 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TLightGridInjectionCS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a25130,0,L"TLightGridInjectionCS<true>",
             L"/Engine/Private/LightGridInjection.usf",L"LightGridInjectionCS",5,1,
             TLightGridInjectionCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a25130 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a25260 = TLightGridInjectionCS<1>::ConstructCompiledInstance;
  _DAT_146a25268 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a25270 = BuildSettings::IsPromotedBuild;
  _DAT_146a25278 = FUN_141b68260;
  atexit((_func_5014 *)&LAB_143e8ae70);
  return;
}



// FUNCTION 1402959b0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TLightGridInjectionCS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a25280,0,L"TLightGridInjectionCS<false>",
             L"/Engine/Private/LightGridInjection.usf",L"LightGridInjectionCS",5,1,
             TLightGridInjectionCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a25280 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a253b0 = TLightGridInjectionCS<1>::ConstructCompiledInstance;
  _DAT_146a253b8 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a253c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a253c8 = FUN_141b68310;
  atexit((_func_5014 *)&LAB_143e8ae80);
  return;
}



// FUNCTION 140295a60 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCalculateHeightfieldIrradianceScreenGridCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1e540,0,L"FCalculateHeightfieldIrradianceScreenGridCS",
             L"/Engine/Private/HeightfieldLighting.usf",
             L"CalculateHeightfieldIrradianceScreenGridCS",5,1,FUN_141b5fe60,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1e540 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1e670 = FUN_141b5ee80;
  _DAT_146a1e678 = FCombineIrradianceScreenGridCS::ShouldCompilePermutation;
  _DAT_146a1e680 = BuildSettings::IsPromotedBuild;
  _DAT_146a1e688 = FCalculateHeightfieldIrradianceScreenGridCS::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e8ae90);
  return;
}



// FUNCTION 140295b10 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCalculateHeightfieldOcclusionScreenGridCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1e3f0,0,L"FCalculateHeightfieldOcclusionScreenGridCS",
             L"/Engine/Private/HeightfieldLighting.usf",L"CalculateHeightfieldOcclusionScreenGridCS"
             ,5,1,FUN_141b5fe90,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1e3f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1e520 = FUN_141b5eeb0;
  _DAT_146a1e528 = FCombineIrradianceScreenGridCS::ShouldCompilePermutation;
  _DAT_146a1e530 = BuildSettings::IsPromotedBuild;
  _DAT_146a1e538 = FCalculateHeightfieldIrradianceScreenGridCS::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e8aea0);
  return;
}



// FUNCTION 140295bc0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::FComplexFFTPassCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1cd50,0,L"GPUFFT::FComplexFFTPassCS",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"ComplexFFTPassCS",5,1,FUN_141b5fec0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1cd50 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1ce80 = GPUFFT::FComplexFFTPassCS::ConstructCompiledInstance;
  _DAT_146a1ce88 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a1ce90 = BuildSettings::IsPromotedBuild;
  _DAT_146a1ce98 = &LAB_141b68430;
  atexit((_func_5014 *)&LAB_143e8aeb0);
  return;
}



// FUNCTION 140295c70 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::FComplexMultiplyImagesCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1d140,0,L"GPUFFT::FComplexMultiplyImagesCS",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"ComplexMultiplyImagesCS",5,1,
             FUN_141b5ff30,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1d140 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1d270 = GPUFFT::FComplexMultiplyImagesCS::ConstructCompiledInstance;
  _DAT_146a1d278 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a1d280 = BuildSettings::IsPromotedBuild;
  _DAT_146a1d288 = &LAB_141b68450;
  atexit((_func_5014 *)&LAB_143e8aec0);
  return;
}



// FUNCTION 140295d20 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCompositeHeightfieldsIntoGlobalDistanceFieldCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1c960,0,L"FCompositeHeightfieldsIntoGlobalDistanceFieldCS",
             L"/Engine/Private/GlobalDistanceField.usf",
             L"CompositeHeightfieldsIntoGlobalDistanceFieldCS",5,1,FUN_141b5ff80,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1c960 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1ca90 = FUN_141b5f160;
  _DAT_146a1ca98 = FUN_141b746b0;
  _DAT_146a1caa0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1caa8 = &LAB_141b68470;
  atexit((_func_5014 *)&LAB_143e8aed0);
  return;
}



// FUNCTION 140295dd0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::FCopyWindowCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1cff0,0,L"GPUFFT::FCopyWindowCS",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"CopyWindowCS",5,1,FUN_141b2e110,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1cff0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1d120 = GPUFFT::FCopyWindowCS::ConstructCompiledInstance;
  _DAT_146a1d128 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a1d130 = BuildSettings::IsPromotedBuild;
  _DAT_146a1d138 = GPUFFT::FCopyWindowCS::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e8aee0);
  return;
}



// FUNCTION 140295e80 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCullObjectsForVolumeCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1c6c0,0,L"FCullObjectsForVolumeCS",L"/Engine/Private/GlobalDistanceField.usf",
             L"CullObjectsForVolumeCS",5,1,FCullObjectsForVolumeCS::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1c6c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1c7f0 = FUN_141b5f2a0;
  _DAT_146a1c7f8 = FUN_141b18a90;
  _DAT_146a1c800 = BuildSettings::IsPromotedBuild;
  _DAT_146a1c808 = &LAB_141b684f0;
  atexit((_func_5014 *)&LAB_143e8aef0);
  return;
}



// FUNCTION 140295f30 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCullObjectsToGridCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1c810,0,L"FCullObjectsToGridCS",L"/Engine/Private/GlobalDistanceField.usf",
             L"CullObjectsToGridCS",5,1,FUN_141b5ffe0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1c810 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1c940 = FUN_141b5f2d0;
  _DAT_146a1c948 = FUN_141b18a90;
  _DAT_146a1c950 = BuildSettings::IsPromotedBuild;
  _DAT_146a1c958 = FCullObjectsToGridCS::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e8af00);
  return;
}



// FUNCTION 140295fe0 FUN_140295fe0 body=170 status=ok
// SIG undefined FUN_140295fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140295fe0(void)

{
  FShaderType::FShaderType
            (&DAT_146a1c4d0,0,L"FGbxSkyUpdateDepthComputeShaderCS",
             L"/Engine/Private/GbxSkyUpdateDepthComputeShader.usf",L"ComputeShaderMain",5,1,
             FUN_141b60010,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1c4d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1c600 = FUN_141b5f300;
  _DAT_146a1c608 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a1c610 = BuildSettings::IsPromotedBuild;
  _DAT_146a1c618 = FUN_141b68550;
  atexit((_func_5014 *)&LAB_143e8af10);
  return;
}



// FUNCTION 140296090 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::FGroupShardSubFFTPassCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1cc00,0,L"GPUFFT::FGroupShardSubFFTPassCS",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"GroupSharedSubComplexFFTCS",5,1,
             FUN_141b60060,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1cc00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1cd30 = GPUFFT::FGroupShardSubFFTPassCS::ConstructCompiledInstance;
  _DAT_146a1cd38 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a1cd40 = BuildSettings::IsPromotedBuild;
  _DAT_146a1cd48 = GPUFFT::FGroupShardSubFFTPassCS::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e8af20);
  return;
}



// FUNCTION 140296140 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FHdrCustomResolve2xPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1d3e0,0,L"FHdrCustomResolve2xPS",
             L"/Engine/Private/HdrCustomResolveShaders.usf",L"HdrCustomResolve2xPS",3,1,
             FResolveDepth2XPS::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1d3e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1d510 = FHdrCustomResolve2xPS::ConstructCompiledInstance;
  _DAT_146a1d518 = FUN_141a194e0;
  _DAT_146a1d520 = BuildSettings::IsPromotedBuild;
  _DAT_146a1d528 = &LAB_141b68600;
  atexit((_func_5014 *)&LAB_143e8af30);
  return;
}



// FUNCTION 1402961f0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FHdrCustomResolve4xPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1d530,0,L"FHdrCustomResolve4xPS",
             L"/Engine/Private/HdrCustomResolveShaders.usf",L"HdrCustomResolve4xPS",3,1,
             FResolveDepth2XPS::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1d530 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1d660 = FHdrCustomResolve2xPS::ConstructCompiledInstance;
  _DAT_146a1d668 = FUN_141a194e0;
  _DAT_146a1d670 = BuildSettings::IsPromotedBuild;
  _DAT_146a1d678 = &LAB_141b68620;
  atexit((_func_5014 *)&LAB_143e8af40);
  return;
}



// FUNCTION 1402962a0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FHdrCustomResolve8xPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1d680,0,L"FHdrCustomResolve8xPS",
             L"/Engine/Private/HdrCustomResolveShaders.usf",L"HdrCustomResolve8xPS",3,1,
             FResolveDepth2XPS::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1d680 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1d7b0 = FHdrCustomResolve2xPS::ConstructCompiledInstance;
  _DAT_146a1d7b8 = FUN_141a194e0;
  _DAT_146a1d7c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1d7c8 = &LAB_141b68640;
  atexit((_func_5014 *)&LAB_143e8af50);
  return;
}



// FUNCTION 140296350 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FHdrCustomResolveFMask2xPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1d7d0,0,L"FHdrCustomResolveFMask2xPS",
             L"/Engine/Private/HdrCustomResolveShaders.usf",L"HdrCustomResolveFMaskPS",3,1,
             FUN_141a145b0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1d7d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1d900 = FHdrCustomResolveFMask2xPS::ConstructCompiledInstance;
  _DAT_146a1d908 = FUN_141a194e0;
  _DAT_146a1d910 = BuildSettings::IsPromotedBuild;
  _DAT_146a1d918 = FUN_141b68660;
  atexit((_func_5014 *)&LAB_143e8af60);
  return;
}



// FUNCTION 140296400 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FHdrCustomResolveFMask4xPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1d920,0,L"FHdrCustomResolveFMask4xPS",
             L"/Engine/Private/HdrCustomResolveShaders.usf",L"HdrCustomResolveFMaskPS",3,1,
             FUN_141a145b0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1d920 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1da50 = FHdrCustomResolveFMask2xPS::ConstructCompiledInstance;
  _DAT_146a1da58 = FUN_141a194e0;
  _DAT_146a1da60 = BuildSettings::IsPromotedBuild;
  _DAT_146a1da68 = FUN_141b686a0;
  atexit((_func_5014 *)&LAB_143e8af70);
  return;
}



// FUNCTION 1402964b0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FHdrCustomResolveFMask8xPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1da70,0,L"FHdrCustomResolveFMask8xPS",
             L"/Engine/Private/HdrCustomResolveShaders.usf",L"HdrCustomResolveFMaskPS",3,1,
             FUN_141a145b0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1da70 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1dba0 = FHdrCustomResolveFMask2xPS::ConstructCompiledInstance;
  _DAT_146a1dba8 = FUN_141a194e0;
  _DAT_146a1dbb0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1dbb8 = FUN_141b686e0;
  atexit((_func_5014 *)&LAB_143e8af80);
  return;
}



// FUNCTION 140296560 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FHdrCustomResolveVS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1d290,0,L"FHdrCustomResolveVS",L"/Engine/Private/HdrCustomResolveShaders.usf",
             L"HdrCustomResolveVS",0,1,FUN_14049d790,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1d290 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1d3c0 = FUN_14049d5b0;
  _DAT_146a1d3c8 = FUN_141a194e0;
  _DAT_146a1d3d0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1d3d8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e8af90);
  return;
}



// FUNCTION 140296610 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FHeightfieldComponentQuadVS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1deb0,0,L"FHeightfieldComponentQuadVS",
             L"/Engine/Private/HeightfieldLighting.usf",L"HeightfieldComponentQuadVS",0,1,
             FUN_141b600c0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1deb0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1dfe0 = FHeightfieldComponentQuadVS::ConstructCompiledInstance;
  _DAT_146a1dfe8 = FCombineIrradianceScreenGridCS::ShouldCompilePermutation;
  _DAT_146a1dff0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1dff8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e8afa0);
  return;
}



// FUNCTION 1402966c0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FHeightfieldSubsectionQuadVS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1dc10,0,L"FHeightfieldSubsectionQuadVS",
             L"/Engine/Private/HeightfieldLighting.usf",L"HeightfieldSubsectionQuadVS",0,1,
             FResolveDepth2XPS::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1dc10 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1dd40 = FHeightfieldSubsectionQuadVS::ConstructCompiledInstance;
  _DAT_146a1dd48 = FCombineIrradianceScreenGridCS::ShouldCompilePermutation;
  _DAT_146a1dd50 = BuildSettings::IsPromotedBuild;
  _DAT_146a1dd58 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e8afb0);
  return;
}



// FUNCTION 140296770 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FInitializeHeightfieldsPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1dd60,0,L"FInitializeHeightfieldsPS",
             L"/Engine/Private/HeightfieldLighting.usf",L"InitializeHeightfieldsPS",3,1,
             FUN_141b60110,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1dd60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1de90 = FInitializeHeightfieldsPS::ConstructCompiledInstance;
  _DAT_146a1de98 = FCombineIrradianceScreenGridCS::ShouldCompilePermutation;
  _DAT_146a1dea0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1dea8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e8afc0);
  return;
}



// FUNCTION 140296820 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FLightFunctionPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1e8b0,1,L"FLightFunctionPS",L"/Engine/Private/LightFunctionPixelShader.usf",
             L"Main",3,1,FUN_141b60160,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1e8b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1e9e0 = FUN_141b5f7a0;
  _DAT_146a1e9e8 = FUN_141b74740;
  _DAT_146a1e9f0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1e9f8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e8afd0);
  return;
}



// FUNCTION 1402968d0 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FLightFunctionVS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1e760,1,L"FLightFunctionVS",L"/Engine/Private/LightFunctionVertexShader.usf",
             L"Main",0,1,FUN_141b601b0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1e760 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1e890 = FOcclusionQueryVS::ConstructCompiledInstance;
  _DAT_146a1e898 = FUN_141b74740;
  _DAT_146a1e8a0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1e8a8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e8afe0);
  return;
}



// FUNCTION 140296980 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FLightGridCompactCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1eae0,0,L"FLightGridCompactCS",L"/Engine/Private/LightGridInjection.usf",
             L"LightGridCompactCS",5,1,TLightGridInjectionCS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1eae0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1ec10 = TLightGridInjectionCS<1>::ConstructCompiledInstance;
  _DAT_146a1ec18 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a1ec20 = BuildSettings::IsPromotedBuild;
  _DAT_146a1ec28 = FUN_141b68720;
  atexit((_func_5014 *)&LAB_143e8aff0);
  return;
}



// FUNCTION 140296a30 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FLightHeightfieldsPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1e2a0,1,L"FLightHeightfieldsPS",L"/Engine/Private/HeightfieldLighting.usf",
             L"LightHeightfieldsPS",3,1,FUN_141b60210,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1e2a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1e3d0 = FUN_141b5f910;
  _DAT_146a1e3d8 = FUN_141b74780;
  _DAT_146a1e3e0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1e3e8 = &LAB_141b687c0;
  atexit((_func_5014 *)&LAB_143e8b000);
  return;
}



// FUNCTION 140296ae0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::FPackTwoForOneFFTPassCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1cea0,0,L"GPUFFT::FPackTwoForOneFFTPassCS",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"PackTwoForOneFFTPassCS",5,1,
             FUN_141b60290,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1cea0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1cfd0 = GPUFFT::FPackTwoForOneFFTPassCS::ConstructCompiledInstance;
  _DAT_146a1cfd8 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a1cfe0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1cfe8 = &LAB_141b687e0;
  atexit((_func_5014 *)&LAB_143e8b010);
  return;
}



// FUNCTION 140296b90 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FRayTracedShadowHeightfieldsPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1e150,0,L"FRayTracedShadowHeightfieldsPS",
             L"/Engine/Private/HeightfieldLighting.usf",L"RayTracedShadowHeightfieldsPS",3,1,
             FUN_141b602e0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1e150 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1e280 = FUN_141b5fa30;
  _DAT_146a1e288 = FCombineIrradianceScreenGridCS::ShouldCompilePermutation;
  _DAT_146a1e290 = BuildSettings::IsPromotedBuild;
  _DAT_146a1e298 = &LAB_141b68800;
  atexit((_func_5014 *)&LAB_143e8b020);
  return;
}



// FUNCTION 140296c40 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'GPUFFT::FReorderFFTPassCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1cab0,0,L"GPUFFT::FReorderFFTPassCS",
             L"/Engine/Private/GPUFastFourierTransform.usf",L"ReorderFFTPassCS",5,1,FUN_141b5fec0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1cab0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1cbe0 = GPUFFT::FReorderFFTPassCS::ConstructCompiledInstance;
  _DAT_146a1cbe8 = GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation;
  _DAT_146a1cbf0 = BuildSettings::IsPromotedBuild;
  _DAT_146a1cbf8 = &LAB_141b68820;
  atexit((_func_5014 *)&LAB_143e8b030);
  return;
}



// FUNCTION 140296cf0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FShadowHeightfieldsPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a1e000,0,L"FShadowHeightfieldsPS",L"/Engine/Private/HeightfieldLighting.usf",
             L"ShadowHeightfieldsPS",3,1,FShadowHeightfieldsPS::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a1e000 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a1e130 = FUN_141b5fbd0;
  _DAT_146a1e138 = FCombineIrradianceScreenGridCS::ShouldCompilePermutation;
  _DAT_146a1e140 = BuildSettings::IsPromotedBuild;
  _DAT_146a1e148 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e8b040);
  return;
}



// FUNCTION 140296da0 FUN_140296da0 body=355 status=ok
// SIG undefined FUN_140296da0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140296da0(void)

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
    plVar1[1] = (longlong)&DAT_146a1e730;
    plVar1[2] = (longlong)FUN_141591020;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a1e738 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"TaskGraph.TaskPriorities.UpdateCachePrimitivesTask",
                  L"Task and thread priority for FUpdateCachePrimitivesTask.",&local_18,0);
  _DAT_146a1e730 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140296e9f;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140296e9f:
  DAT_146a1e740 = 0;
  _DAT_146a1e748 = 0x33;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146a1e740,0);
  FGenericPlatformString::Memcpy
            (DAT_146a1e740,L"TaskGraph.TaskPriorities.UpdateCachePrimitivesTask",0x66);
  _DAT_146a1e750 = 0x800;
  DAT_146a1e758 = 0x200;
  atexit(FUN_143e8b0b0);
  return;
}



// FUNCTION 140296f10 `dynamic_initializer_for_'CVarAOGlobalDFClipmapDistanceExponent'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOGlobalDFClipmapDistanceExponent''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOGlobalDFClipmapDistanceExponent__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a1c688 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.AOGlobalDFClipmapDistanceExponent",&DAT_1464c1c60,
                  L"Exponent used to derive each clipmap\'s size, together with r.AOInnerGlobalDFClipmapDistance."
                  ,0x20);
  _DAT_146a1c680 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8b110);
  return;
}



// FUNCTION 140296f80 `dynamic_initializer_for_'CVarAOGlobalDFResolution'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOGlobalDFResolution''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOGlobalDFResolution__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a1c698 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AOGlobalDFResolution",&DAT_1464c1c64,
                  L"Resolution of the global distance field.  Higher values increase fidelity but also increase memory and composition cost."
                  ,0x20);
  _DAT_146a1c690 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8b160);
  return;
}



// FUNCTION 140296ff0 `dynamic_initializer_for_'CVarAOGlobalDFStartDistance'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOGlobalDFStartDistance''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOGlobalDFStartDistance__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a1c6a8 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.AOGlobalDFStartDistance",&DAT_1464c1c68,
                  L"World space distance along a cone trace to switch to using the global distance field instead of the object distance fields.\nThis has to be large enough to hide the low res nature of the global distance field, but smaller values result in faster cone tracing."
                  ,0x20);
  _DAT_146a1c6a0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8b1b0);
  return;
}



// FUNCTION 140297060 `dynamic_initializer_for_'CVarAOGlobalDistanceField'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOGlobalDistanceField''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOGlobalDistanceField__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a1c628 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AOGlobalDistanceField",&DAT_1464c1c88,
                  L"Whether to use a global distance field to optimize occlusion cone traces.\nThe global distance field is created by compositing object distance fields into clipmaps as the viewer moves through the level."
                  ,0x20);
  _DAT_146a1c620 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8b200);
  return;
}



// FUNCTION 1402970d0 `dynamic_initializer_for_'CVarAOGlobalDistanceFieldCacheMostlyStaticSeparately'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOGlobalDistanceFieldCacheMostlyStaticSeparately''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOGlobalDistanceFieldCacheMostlyStaticSeparately__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a1c648 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AOGlobalDistanceFieldCacheMostlyStaticSeparately",&DAT_1464c1c54
                  ,
                  L"Whether to cache mostly static primitives separately from movable primitives, which reduces global DF update cost when a movable primitive is modified.  Adds another 12Mb of volume textures."
                  ,0x20);
  _DAT_146a1c640 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8b250);
  return;
}



// FUNCTION 140297140 `dynamic_initializer_for_'CVarAOGlobalDistanceFieldPartialUpdates'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOGlobalDistanceFieldPartialUpdates''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOGlobalDistanceFieldPartialUpdates__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a1c658 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AOGlobalDistanceFieldPartialUpdates",&DAT_1464c1c58,
                  L"Whether to allow partial updates of the global distance field.  When profiling it\'s useful to disable this and get the worst case composition time that happens on camera cuts."
                  ,0x20);
  _DAT_146a1c650 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8b2a0);
  return;
}



// FUNCTION 1402971b0 `dynamic_initializer_for_'CVarAOGlobalDistanceFieldRepresentHeightfields'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOGlobalDistanceFieldRepresentHeightfields''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOGlobalDistanceFieldRepresentHeightfields__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a1c6b8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AOGlobalDistanceFieldRepresentHeightfields",&DAT_1464c1c6c,
                  L"Whether to put landscape in the global distance field.  Changing this won\'t propagate until the global distance field gets recached (fly away and back)."
                  ,0x20);
  _DAT_146a1c6b0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8b2f0);
  return;
}



// FUNCTION 140297220 `dynamic_initializer_for_'CVarAOGlobalDistanceFieldStaggeredUpdatess'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOGlobalDistanceFieldStaggeredUpdatess''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOGlobalDistanceFieldStaggeredUpdatess__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a1c668 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AOGlobalDistanceFieldStaggeredUpdates",&DAT_1464c1c5c,
                  L"Whether to allow the larger clipmaps to be updated less frequently.",0x20);
  _DAT_146a1c660 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8b340);
  return;
}



// FUNCTION 140297290 `dynamic_initializer_for_'CVarAOHeightfieldOcclusion'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAOHeightfieldOcclusion''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAOHeightfieldOcclusion__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a1dbc8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AOHeightfieldOcclusion",&DAT_146a1c424,
                  L"Whether to compute AO from heightfields (landscape)",0x20);
  _DAT_146a1dbc0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e8b390);
  return;
}


