// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140353130 FUN_140353130 body=258 status=ok
// SIG undefined FUN_140353130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140353130(void)

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
    *plVar1 = (longlong)&PTR_GetPoolName_145187f58;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[2] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_145187fa0;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09008 =
       (**(code **)(*DAT_1468b1f88 + 0x88))
                 (DAT_1468b1f88,L"mallocleak.stop",L"Stops tracking allocations",&local_18,0);
  _DAT_146b09000 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140353221;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140353221:
  atexit(FUN_143eb8920);
  return;
}



// FUNCTION 140353240 FUN_140353240 body=386 status=ok
// SIG undefined FUN_140353240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140353240(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar3 < DAT_146b09300) {
    _Init_thread_header(&DAT_146b09300);
    if (DAT_146b09300 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146b092f8 =
           (**(code **)(*DAT_1468b1f88 + 0x28))
                     (DAT_1468b1f88,L"net.MaxRepArrayMemory",&DAT_146534b6c,
                      L"Maximum allowable size for replicated dynamic arrays (in bytes). Value must be between 1 and 65535"
                      ,0);
      _DAT_146b092f0 = &PTR_FUN_143f3ecf0;
      atexit(FUN_143eb8200);
      _Init_thread_footer(&DAT_146b09300);
    }
  }
  if (*piVar3 < DAT_146b09318) {
    _Init_thread_header(&DAT_146b09318);
    if (DAT_146b09318 == -1) {
      DAT_146b09308 = (undefined8 *)0x0;
      DAT_146b09310 = 0;
      puVar1 = (undefined8 *)FMemory::Realloc(0,0x20);
      DAT_146b09310 = 2;
      DAT_146b09308 = puVar1;
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_GetPoolName_1451893f0;
        uVar2 = FDelegateHandle::GenerateNewID();
        puVar1[2] = uVar2;
        *puVar1 = &PTR_GetPoolName_145189438;
      }
      atexit(FUN_143eb8660);
      _Init_thread_footer(&DAT_146b09318);
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x0001403532a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x40))(DAT_1468b1f88,&DAT_146b090b0,&DAT_146b09308);
  return;
}



// FUNCTION 1403533d0 FUN_1403533d0 body=405 status=ok
// SIG undefined FUN_1403533d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403533d0(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar4 < DAT_146b092d0) {
    _Init_thread_header(&DAT_146b092d0);
    uVar1 = DAT_146534b68;
    if (DAT_146b092d0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146b092c8 =
           (**(code **)(*DAT_1468b1f88 + 0x10))
                     (DAT_1468b1f88,L"net.MaxRepArraySize",uVar1,
                      L"Maximum allowable size for replicated dynamic arrays (in number of elements). Value must be between 1 and 65535."
                      ,0);
      _DAT_146b092c0 = &PTR_FUN_143f3ecf0;
      atexit(FUN_143eb8250);
      _Init_thread_footer(&DAT_146b092d0);
    }
  }
  if (*piVar4 < DAT_146b092e8) {
    _Init_thread_header(&DAT_146b092e8);
    if (DAT_146b092e8 == -1) {
      DAT_146b092d8 = (undefined8 *)0x0;
      DAT_146b092e0 = 0;
      puVar2 = (undefined8 *)FMemory::Realloc(0,0x20);
      DAT_146b092e0 = 2;
      DAT_146b092d8 = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_GetPoolName_145189360;
        uVar3 = FDelegateHandle::GenerateNewID();
        puVar2[2] = uVar3;
        *puVar2 = &PTR_GetPoolName_1451893a8;
      }
      atexit(FUN_143eb86d0);
      _Init_thread_footer(&DAT_146b092e8);
    }
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x00014035343e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x40))(DAT_1468b1f88,&DAT_146b090a8,&DAT_146b092d8);
  return;
}



// FUNCTION 140353690 FUN_140353690 body=269 status=ok
// SIG undefined FUN_140353690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140353690(void)

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
    plVar1[1] = (longlong)RecompileRenderer;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09038 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"r.RecompileRenderer",L"Recompiles the renderer module on the fly."
                  ,&local_18,0);
  _DAT_146b09030 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14035378c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14035378c:
  atexit(FUN_143eb8970);
  return;
}



// FUNCTION 1403537f0 FUN_1403537f0 body=137 status=ok
// SIG undefined FUN_1403537f0(void)

void FUN_1403537f0(void)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  longlong local_18 [3];
  
  FUN_142767b80(local_18,local_res8[0]);
  uVar1 = FName::FName(local_res8,L"FInstancedViewUniformShaderParameters",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_146b09780,uVar1,L"FInstancedViewUniformShaderParameters",L"InstancedView",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0xd50,local_18,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143eb8a00);
  return;
}



// FUNCTION 140353880 StaticStruct'' body=137 status=ok
// SIG undefined StaticStruct''(void)

void `dynamic_initializer_for_'FMobileDirectionalLightShaderParameters::StaticStruct__(void)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  longlong local_18 [3];
  
  FUN_142768a20(local_18,local_res8[0]);
  uVar1 = FName::FName(local_res8,L"FMobileDirectionalLightShaderParameters",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_146b09820,uVar1,L"FMobileDirectionalLightShaderParameters",
             L"MobileDirectionalLight",FManaUniformBufferNV12::ConstructUniformBufferParameter,0x160
             ,local_18,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143eb8a10);
  return;
}



// FUNCTION 140353910 FUN_140353910 body=407 status=ok
// SIG undefined FUN_140353910(void)

void FUN_140353910(void)

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
  
  FUN_142768c40(&local_48,local_res8[0]);
  iVar3 = local_40;
  lVar14 = (longlong)local_40;
  local_38 = L"OriginGameTime";
  local_28 = 0x188;
  puStack_30 = &DAT_143f3eda8;
  local_40 = local_40 + 1;
  uStack_24 = 2;
  uStack_1c = 1;
  local_18 = 2;
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
  local_28 = 400;
  uStack_24 = 2;
  puVar1 = (undefined8 *)(local_48 + lVar14 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = puVar4;
  uStack_1c = 1;
  uVar9 = (undefined4)local_18;
  uVar10 = local_18._4_4_;
  uVar11 = (undefined4)uStack_10;
  uVar12 = uStack_10._4_4_;
  local_18 = 2;
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
  local_38 = L"OriginRealTime";
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
  uVar13 = FName::FName(local_res8,L"FPrimitiveUniformShaderParameters",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_146b09640,uVar13,L"FPrimitiveUniformShaderParameters",L"Primitive",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x1a0,&local_48,1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143eb8a20);
  return;
}



// FUNCTION 140353ab0 FUN_140353ab0 body=526 status=ok
// SIG undefined FUN_140353ab0(void)

void FUN_140353ab0(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  wchar_t *pwVar4;
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
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_14276b340(&local_48,local_res8[0]);
  iVar3 = local_40;
  lVar14 = (longlong)local_40;
  local_38 = L"WindVectorFieldTextureSampler";
  local_28 = 0xf10;
  pwStack_30 = L"SamplerState";
  local_40 = local_40 + 1;
  uStack_24 = 8;
  uStack_1c = 1;
  local_18 = 1;
  uStack_10 = 0;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  uVar8 = uStack_1c;
  uVar5 = local_28;
  iVar3 = local_40;
  uVar6 = (undefined4)uStack_24;
  uVar7 = uStack_24._4_4_;
  local_28 = 0xf18;
  uStack_24 = 9;
  puVar1 = (undefined8 *)(local_48 + lVar14 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = pwStack_30;
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
  local_38 = L"GbxColorRemapLUTArrayTexture";
  pwStack_30 = L"Texture2DArray";
  local_40 = local_40 + 1;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  uVar8 = uStack_1c;
  uVar5 = local_28;
  pwVar4 = pwStack_30;
  iVar3 = local_40;
  pwStack_30 = L"SamplerState";
  uVar6 = (undefined4)uStack_24;
  uVar7 = uStack_24._4_4_;
  local_28 = 0xf20;
  uStack_24 = 8;
  puVar1 = (undefined8 *)(local_48 + lVar14 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = pwVar4;
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
  local_38 = L"GbxColorRemapLUTArrayTextureSampler";
  local_40 = local_40 + 1;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  puVar1 = (undefined8 *)(local_48 + lVar14 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = pwStack_30;
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
  uVar13 = FName::FName(local_res8,L"FViewUniformShaderParameters",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_146b096e0,uVar13,L"FViewUniformShaderParameters",L"View",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0xf30,&local_48,1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143eb8a30);
  return;
}



// FUNCTION 140353cc0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TScreenVSForGS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0a3f0,0,L"TScreenVSForGS<true>",L"/Engine/Private/ScreenVertexShader.usf",
             L"MainForGS",0,1,FUN_14049d790,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0a3f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0a520 = FUN_14049d5b0;
  _DAT_146b0a528 = TScreenVSForGS<1>::ShouldCompilePermutation;
  _DAT_146b0a530 = BuildSettings::IsPromotedBuild;
  _DAT_146b0a538 = &LAB_142753d90;
  atexit((_func_5014 *)&LAB_143eb8a40);
  return;
}



// FUNCTION 140353d70 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TScreenVSForGS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0a2a0,0,L"TScreenVSForGS<false>",L"/Engine/Private/ScreenVertexShader.usf",
             L"MainForGS",0,1,FUN_14049d790,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0a2a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0a3d0 = FUN_14049d5b0;
  _DAT_146b0a3d8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146b0a3e0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0a3e8 = TScreenVSForGS<0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb8a50);
  return;
}



// FUNCTION 140353e20 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FScreenPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b09b00,0,L"FScreenPS",L"/Engine/Private/ScreenPixelShader.usf",L"Main",3,1,
             FUN_141a145b0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b09b00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b09c30 = FHdrCustomResolveFMask2xPS::ConstructCompiledInstance;
  _DAT_146b09c38 = BuildSettings::IsPromotedBuild;
  _DAT_146b09c40 = BuildSettings::IsPromotedBuild;
  _DAT_146b09c48 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143eb8a60);
  return;
}



// FUNCTION 140353ed0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FScreenPS_OSE::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b09da0,0,L"FScreenPS_OSE",L"/Engine/Private/ScreenPixelShaderOES.usf",L"Main",3
             ,1,FUN_141a145b0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b09da0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b09ed0 = FHdrCustomResolveFMask2xPS::ConstructCompiledInstance;
  _DAT_146b09ed8 = BuildSettings::IsPromotedBuild;
  _DAT_146b09ee0 = BuildSettings::IsPromotedBuild;
  _DAT_146b09ee8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143eb8a70);
  return;
}



// FUNCTION 140353f80 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FScreenVS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b09c50,0,L"FScreenVS",L"/Engine/Private/ScreenVertexShader.usf",L"Main",0,1,
             FUN_14049d790,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b09c50 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b09d80 = FUN_14049d5b0;
  _DAT_146b09d88 = BuildSettings::IsPromotedBuild;
  _DAT_146b09d90 = BuildSettings::IsPromotedBuild;
  _DAT_146b09d98 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143eb8a80);
  return;
}



// FUNCTION 140354030 FUN_140354030 body=115 status=ok
// SIG undefined FUN_140354030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140354030(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b098b0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.AmbientOcclusion.Enable",0xffffffff,
                  L"1 on; 0 off; -1 don\'t touch",0x20);
  _DAT_146b098a8 = &PTR_FUN_143f3ecf8;
  DAT_146b098b8 = (**(code **)(*DAT_146b098b0 + 0x38))(DAT_146b098b0);
  atexit(FUN_143eb8a90);
  return;
}



// FUNCTION 1403540b0 `dynamic_initializer_for_'CVarAllowTranslucencyAfterDOF'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAllowTranslucencyAfterDOF''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAllowTranslucencyAfterDOF__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09ac0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.SeparateTranslucency",1,
                  L"Allows to disable the separate translucency feature (all translucency is rendered in separate RT and composited\nafter DOF, if not specified otherwise in the material).\n 0: off (translucency is affected by depth of field)\n 1: on costs GPU performance and memory but keeps translucency unaffected by Depth of Field. (default)"
                  ,0x60);
  _DAT_146b09ab8 = &PTR_FUN_143f3ecf8;
  DAT_146b09ac8 = (**(code **)(*DAT_146b09ac0 + 0x38))(DAT_146b09ac0);
  atexit(FUN_143eb8ae0);
  return;
}



// FUNCTION 140354130 `dynamic_initializer_for_'CVarCompensateForFOV'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarCompensateForFOV''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarCompensateForFOV__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09af0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"lod.CompensateForFOV",1,
                  L"When not 0 account for FOV in LOD calculations.",0);
  _DAT_146b09ae8 = &PTR_FUN_143f3ecf8;
  DAT_146b09af8 = (**(code **)(*DAT_146b09af0 + 0x38))(DAT_146b09af0);
  atexit(FUN_143eb8b30);
  return;
}



// FUNCTION 1403541b0 `dynamic_initializer_for_'CVarCreateShadersOnLoad'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarCreateShadersOnLoad''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarCreateShadersOnLoad__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b0a018 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.CreateShadersOnLoad",&DAT_146b09450,
                  L"Whether to create shaders on load, which can reduce hitching, but use more memory.  Otherwise they will be created as needed."
                  ,0);
  _DAT_146b0a010 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eb8b80);
  return;
}



// FUNCTION 140354220 `dynamic_initializer_for_'CVarD3DRemoveUnusedInterpolators'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarD3DRemoveUnusedInterpolators''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarD3DRemoveUnusedInterpolators__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b0a000 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.D3D.RemoveUnusedInterpolators",1,
                  L"Enables removing unused interpolators mode when compiling pipelines for D3D.\n -1: Do not actually remove, but make the app think it did (for debugging)\n 0: Disable (default)\n 1: Enable removing unused"
                  ,4);
  _DAT_146b09ff8 = &PTR_FUN_143f3ecf8;
  _DAT_146b0a008 = (**(code **)(*DAT_146b0a000 + 0x38))(DAT_146b0a000);
  atexit(FUN_143eb8bd0);
  return;
}



// FUNCTION 1403542a0 `dynamic_initializer_for_'CVarDefaultAmbientOcclusion'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDefaultAmbientOcclusion''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDefaultAmbientOcclusion__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b098e0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DefaultFeature.AmbientOcclusion",1,
                  L"Engine default (project setting) for AmbientOcclusion is (postprocess volume/camera/game setting still can override)\n 0: off, sets AmbientOcclusionIntensity to 0\n 1: on (default)"
                  ,0);
  _DAT_146b098d8 = &PTR_FUN_143f3ecf8;
  DAT_146b098e8 = (**(code **)(*DAT_146b098e0 + 0x38))(DAT_146b098e0);
  atexit(FUN_143eb8c20);
  return;
}



// FUNCTION 140354320 `dynamic_initializer_for_'CVarDefaultAmbientOcclusionStaticFraction'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDefaultAmbientOcclusionStaticFraction''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDefaultAmbientOcclusionStaticFraction__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b098f8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DefaultFeature.AmbientOcclusionStaticFraction",1,
                  L"Engine default (project setting) for AmbientOcclusion is (postprocess volume/camera/game setting still can override)\n 0: off, sets AmbientOcclusionStaticFraction to 0\n 1: on (default, costs extra pass, only useful if there is some baked lighting)"
                  ,0);
  _DAT_146b098f0 = &PTR_FUN_143f3ecf8;
  DAT_146b09900 = (**(code **)(*DAT_146b098f8 + 0x38))(DAT_146b098f8);
  atexit(FUN_143eb8c70);
  return;
}



// FUNCTION 1403543a0 FUN_1403543a0 body=115 status=ok
// SIG undefined FUN_1403543a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403543a0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09970 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DefaultFeature.AntiAliasing",1,
                  L"Engine default (project setting) for AntiAliasingMethod is (postprocess volume/camera/game setting still can override)\n 0: off (no anti-aliasing)\n 1: FXAA (faster than TemporalAA but much more shimmering for non static cases)\n 2: TemporalAA (default)\n 3: MSAA (Forward shading only)"
                  ,0x20);
  _DAT_146b09968 = &PTR_FUN_143f3ecf8;
  DAT_146b09978 = (**(code **)(*DAT_146b09970 + 0x38))(DAT_146b09970);
  atexit(FUN_143eb8cc0);
  return;
}



// FUNCTION 140354420 `dynamic_initializer_for_'CVarDefaultAutoExposure'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDefaultAutoExposure''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDefaultAutoExposure__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09910 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DefaultFeature.AutoExposure",1,
                  L"Engine default (project setting) for AutoExposure is (postprocess volume/camera/game setting still can override)\n 0: off, sets AutoExposureMinBrightness and AutoExposureMaxBrightness to 1\n 1: on (default)"
                  ,0);
  _DAT_146b09908 = &PTR_FUN_143f3ecf8;
  DAT_146b09918 = (**(code **)(*DAT_146b09910 + 0x38))(DAT_146b09910);
  atexit(FUN_143eb8d10);
  return;
}



// FUNCTION 1403544a0 `dynamic_initializer_for_'CVarDefaultAutoExposureMethod'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDefaultAutoExposureMethod''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDefaultAutoExposureMethod__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09928 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DefaultFeature.AutoExposure.Method",0,
                  L"Engine default (project setting) for AutoExposure Method (postprocess volume/camera/game setting still can override)\n 0: Histogram based (requires compute shader, default)\n 1: Basic AutoExposure"
                  ,0);
  _DAT_146b09920 = &PTR_FUN_143f3ecf8;
  DAT_146b09930 = (**(code **)(*DAT_146b09928 + 0x38))(DAT_146b09928);
  atexit(FUN_143eb8d60);
  return;
}



// FUNCTION 140354510 `dynamic_initializer_for_'CVarDefaultBloom'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDefaultBloom''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDefaultBloom__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b098c8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DefaultFeature.Bloom",1,
                  L"Engine default (project setting) for Bloom is (postprocess volume/camera/game setting still can override)\n 0: off, set BloomIntensity to 0\n 1: on (default)"
                  ,0);
  _DAT_146b098c0 = &PTR_FUN_143f3ecf8;
  DAT_146b098d0 = (**(code **)(*DAT_146b098c8 + 0x38))(DAT_146b098c8);
  atexit(FUN_143eb8db0);
  return;
}



// FUNCTION 140354590 `dynamic_initializer_for_'CVarDefaultLensFlare'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDefaultLensFlare''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDefaultLensFlare__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09958 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DefaultFeature.LensFlare",0,
                  L"Engine default (project setting) for LensFlare is (postprocess volume/camera/game setting still can override)\n 0: off, sets LensFlareIntensity to 0\n 1: on (default)"
                  ,0);
  _DAT_146b09950 = &PTR_FUN_143f3ecf8;
  DAT_146b09960 = (**(code **)(*DAT_146b09958 + 0x38))(DAT_146b09958);
  atexit(FUN_143eb8e00);
  return;
}



// FUNCTION 140354600 `dynamic_initializer_for_'CVarDefaultMotionBlur'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDefaultMotionBlur''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDefaultMotionBlur__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09940 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DefaultFeature.MotionBlur",1,
                  L"Engine default (project setting) for MotionBlur is (postprocess volume/camera/game setting still can override)\n 0: off, sets MotionBlurAmount to 0\n 1: on (default)"
                  ,0);
  _DAT_146b09938 = &PTR_FUN_143f3ecf8;
  DAT_146b09948 = (**(code **)(*DAT_146b09940 + 0x38))(DAT_146b09940);
  atexit(FUN_143eb8e50);
  return;
}



// FUNCTION 140354680 `dynamic_initializer_for_'CVarDefaultPointLightUnits'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDefaultPointLightUnits''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDefaultPointLightUnits__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09988 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DefaultFeature.PointLightUnits",1,
                  L"Default units to use for point lights\n 0: unitless \n 1: candelas (default)\n 2: lumens"
                  ,0);
  _DAT_146b09980 = &PTR_FUN_143f3ecf8;
  _DAT_146b09990 = (**(code **)(*DAT_146b09988 + 0x38))(DAT_146b09988);
  atexit(FUN_143eb8ea0);
  return;
}



// FUNCTION 140354700 `dynamic_initializer_for_'CVarDefaultSpotLightUnits'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDefaultSpotLightUnits''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDefaultSpotLightUnits__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b099a0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DefaultFeature.SpotLightUnits",1,
                  L"Default units to use for point lights\n 0: unitless \n 1: candelas (default)\n 2: lumens"
                  ,0);
  _DAT_146b09998 = &PTR_FUN_143f3ecf8;
  _DAT_146b099a8 = (**(code **)(*DAT_146b099a0 + 0x38))(DAT_146b099a0);
  atexit(FUN_143eb8ef0);
  return;
}



// FUNCTION 140354780 `dynamic_initializer_for_'CVarDiffuseColorMax'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDiffuseColorMax''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDiffuseColorMax__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09a78 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.DiffuseColor.Max",0x3f800000,
                  L"Allows quick material test by remapping the diffuse color at 1 to a new value (0..1), Only for non shipping built!\n1: (default)"
                  ,0x21);
  _DAT_146b09a70 = &PTR_FUN_143f3ecf8;
  _DAT_146b09a80 = (**(code **)(*DAT_146b09a78 + 0x40))(DAT_146b09a78);
  atexit(FUN_143eb8f40);
  return;
}



// FUNCTION 140354800 `dynamic_initializer_for_'CVarDiffuseColorMin'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDiffuseColorMin''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDiffuseColorMin__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09a60 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.DiffuseColor.Min",0,
                  L"Allows quick material test by remapping the diffuse color at 1 to a new value (0..1), Only for non shipping built!\n1: (default)"
                  ,0x21);
  _DAT_146b09a58 = &PTR_FUN_143f3ecf8;
  _DAT_146b09a68 = (**(code **)(*DAT_146b09a60 + 0x40))(DAT_146b09a60);
  atexit(FUN_143eb8f90);
  return;
}



// FUNCTION 140354870 `dynamic_initializer_for_'CVarDumpSCWJobInfoOnCrash'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDumpSCWJobInfoOnCrash''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDumpSCWJobInfoOnCrash__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09f40 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.DumpSCWQueuedJobs",&DAT_146b09444,
                  L"When set to 1, it will dump a job list to help track down crashes that happened on ShaderCompileWorker."
                  ,0);
  _DAT_146b09f38 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eb8fe0);
  return;
}



// FUNCTION 1403548e0 `dynamic_initializer_for_'CVarDumpShaderDebugInfo'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDumpShaderDebugInfo''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDumpShaderDebugInfo__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09f10 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.DumpShaderDebugInfo",&DAT_146b09438,
                  L"When set to 1, will cause any material shaders that are then compiled to dump debug info to GameName/Saved/ShaderDebugInfo\nThe debug info is platform dependent, but usually includes a preprocessed version of the shader source.\nCan be set to a value of 2 for only dumping global shaders debug info.\nOn iOS, if the PowerVR graphics SDK is installed to the default path, the PowerVR shader compiler will be called and errors will be reported during the cook."
                  ,0);
  _DAT_146b09f08 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eb9030);
  return;
}



// FUNCTION 140354950 `dynamic_initializer_for_'CVarDumpShaderDebugSCWCommandLine'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDumpShaderDebugSCWCommandLine''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDumpShaderDebugSCWCommandLine__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09f30 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.DumpShaderDebugWorkerCommandLine",&DAT_146b09440,
                  L"Only valid when r.DumpShaderDebugInfo=1.\nWhen set to 1, it will generate a file that can be used with ShaderCompileWorker\'s -directcompile."
                  ,0);
  _DAT_146b09f28 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eb9080);
  return;
}



// FUNCTION 1403549c0 `dynamic_initializer_for_'CVarDumpShaderDebugShortNames'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDumpShaderDebugShortNames''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDumpShaderDebugShortNames__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09f20 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.DumpShaderDebugShortNames",&DAT_146b0943c,
                  L"Only valid when r.DumpShaderDebugInfo=1.\nWhen set to 1, will shorten names factory and shader type folder names to avoid issues with long paths."
                  ,0);
  _DAT_146b09f18 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eb90d0);
  return;
}



// FUNCTION 140354a30 `dynamic_initializer_for_'CVarEnableTemporalUpsample'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarEnableTemporalUpsample''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarEnableTemporalUpsample__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09ad8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.TemporalAA.Upsampling",0,
                  L"Whether to do primary screen percentage with temporal AA or not.\n 0: use spatial upscale pass independently of TAA (default);\n 1: TemporalAA performs spatial and temporal upscale as screen percentage method."
                  ,0);
  _DAT_146b09ad0 = &PTR_FUN_143f3ecf8;
  DAT_146b09ae0 = (**(code **)(*DAT_146b09ad8 + 0x38))(DAT_146b09ad8);
  atexit(FUN_143eb9120);
  return;
}



// FUNCTION 140354aa0 `dynamic_initializer_for_'CVarForceAllCoresForShaderCompiling'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarForceAllCoresForShaderCompiling''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarForceAllCoresForShaderCompiling__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09f60 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.ForceAllCoresForShaderCompiling",&DAT_146b0944c,
                  L"When set to 1, it will ignore INI settings and launch as many ShaderCompileWorker instances as cores are available.\nImproves shader throughput but for big projects it can make the machine run OOM"
                  ,0);
  _DAT_146b09f58 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eb9170);
  return;
}



// FUNCTION 140354b10 `dynamic_initializer_for_'CVarGPUCsvStatsEnabled'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGPUCsvStatsEnabled''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGPUCsvStatsEnabled__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b095d8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.GPUCsvStatsEnabled",0,
                  L"Enables or disables GPU stat recording to CSVs",0);
  _DAT_146b095d0 = &PTR_FUN_143f3ecf8;
  DAT_146b095e0 = (**(code **)(*DAT_146b095d8 + 0x38))(DAT_146b095d8);
  atexit(FUN_143eb91c0);
  return;
}



// FUNCTION 140354b80 `dynamic_initializer_for_'CVarGPUStatsChildTimesIncluded'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGPUStatsChildTimesIncluded''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGPUStatsChildTimesIncluded__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09618 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.GPUStatsChildTimesIncluded",0,
                  L"If this is enabled, the child stat timings will be included in their parents\' times.\nThis presents problems for non-hierarchical stats if we\'re expecting them to add up\nto the total GPU time, so we probably want this disabled.\n"
                  ,0);
  _DAT_146b09610 = &PTR_FUN_143f3ecf8;
  DAT_146b09620 = (**(code **)(*DAT_146b09618 + 0x38))(DAT_146b09618);
  atexit(FUN_143eb9210);
  return;
}



// FUNCTION 140354bf0 FUN_140354bf0 body=112 status=ok
// SIG undefined FUN_140354bf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140354bf0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b095a8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.GPUStatsEnabled",0,L"Enables or disables GPU stat recording",0);
  _DAT_146b095a0 = &PTR_FUN_143f3ecf8;
  DAT_146b095b0 = (**(code **)(*DAT_146b095a8 + 0x38))(DAT_146b095a8);
  atexit(FUN_143eb9260);
  return;
}



// FUNCTION 140354c60 `dynamic_initializer_for_'CVarGPUStatsMaxQueriesPerFrame'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGPUStatsMaxQueriesPerFrame''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGPUStatsMaxQueriesPerFrame__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b095c0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.GPUStatsMaxQueriesPerFrame",0xffffffff,
                  L"Limits the number of timestamps allocated per frame. -1 = no limit",0x20);
  _DAT_146b095b8 = &PTR_FUN_143f3ecf8;
  DAT_146b095c8 = (**(code **)(*DAT_146b095c0 + 0x38))(DAT_146b095c0);
  atexit(FUN_143eb92b0);
  return;
}



// FUNCTION 140354ce0 `dynamic_initializer_for_'CVarGPUTracingStatsEnabled'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarGPUTracingStatsEnabled''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarGPUTracingStatsEnabled__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09600 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.GPUTracingStatsEnabled",1,
                  L"Enables or disables GPU stat recording to tracing profiler",0);
  _DAT_146b095f8 = &PTR_FUN_143f3ecf8;
  _DAT_146b09608 = (**(code **)(*DAT_146b09600 + 0x38))(DAT_146b09600);
  atexit(FUN_143eb9300);
  return;
}



// FUNCTION 140354d60 FUN_140354d60 body=112 status=ok
// SIG undefined FUN_140354d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140354d60(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09f70 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Shaders.KeepDebugInfo",0,
                  L"Whether to keep shader reflection and debug data from shader bytecode, default is to strip.  When using graphical debuggers like Nsight it can be useful to enable this on startup."
                  ,0);
  _DAT_146b09f68 = &PTR_FUN_143f3ecf8;
  _DAT_146b09f78 = (**(code **)(*DAT_146b09f70 + 0x38))(DAT_146b09f70);
  atexit(FUN_143eb9350);
  return;
}



// FUNCTION 140354dd0 `dynamic_initializer_for_'CVarLODTemporalLag'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarLODTemporalLag''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarLODTemporalLag__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09480 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"lod.TemporalLag",0x3f000000,
                  L"This controls the the time lag for temporal LOD, in seconds.",0);
  _DAT_146b09478 = &PTR_FUN_143f3ecf8;
  DAT_146b09488 = (**(code **)(*DAT_146b09480 + 0x40))(DAT_146b09480);
  atexit(FUN_143eb93a0);
  return;
}



// FUNCTION 140354e50 `dynamic_initializer_for_'CVarMotionBlurAmount'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMotionBlurAmount''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMotionBlurAmount__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b099d0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.MotionBlur.Amount",0xbf800000,
                  L"Allows to override the postprocess setting (scale of motion blur)\n-1: override (default)"
                  ,0x60);
  _DAT_146b099c8 = &PTR_FUN_143f3ecf8;
  DAT_146b099d8 = (**(code **)(*DAT_146b099d0 + 0x40))(DAT_146b099d0);
  atexit(FUN_143eb93f0);
  return;
}



// FUNCTION 140354ed0 `dynamic_initializer_for_'CVarMotionBlurMax'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMotionBlurMax''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMotionBlurMax__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b099e8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.MotionBlur.Max",0xbf800000,
                  L"Allows to override the postprocess setting (max length of motion blur, in percent of the screen width)\n-1: override (default)"
                  ,0x60);
  _DAT_146b099e0 = &PTR_FUN_143f3ecf8;
  DAT_146b099f0 = (**(code **)(*DAT_146b099e8 + 0x40))(DAT_146b099e8);
  atexit(FUN_143eb9440);
  return;
}



// FUNCTION 140354f50 FUN_140354f50 body=117 status=ok
// SIG undefined FUN_140354f50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140354f50(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09a00 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.MotionBlur.PerObjectSize",0xbf800000,
                  L"Allows to override the postprocess setting (PerObjectSize of motion blur, the minimum projected screen radius for a primitive to be drawn in the velocity pass)\n-1: override (default)"
                  ,0x60);
  _DAT_146b099f8 = &PTR_FUN_143f3ecf8;
  DAT_146b09a08 = (**(code **)(*DAT_146b09a00 + 0x40))(DAT_146b09a00);
  atexit(FUN_143eb9490);
  return;
}



// FUNCTION 140354fd0 `dynamic_initializer_for_'CVarMotionBlurScale'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMotionBlurScale''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMotionBlurScale__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b099b8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.MotionBlur.Scale",0x3f800000,
                  L"Allows to scale the postprocess intensity/amount setting in the postprocess.\n1: don\'t do any scaling (default)"
                  ,0x60);
  _DAT_146b099b0 = &PTR_FUN_143f3ecf8;
  DAT_146b099c0 = (**(code **)(*DAT_146b099b8 + 0x40))(DAT_146b099b8);
  atexit(FUN_143eb94e0);
  return;
}



// FUNCTION 140355050 FUN_140355050 body=115 status=ok
// SIG undefined FUN_140355050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140355050(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09f88 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Shaders.Optimize",1,
                  L"Whether to optimize shaders.  When using graphical debuggers like Nsight it can be useful to disable this on startup."
                  ,0);
  _DAT_146b09f80 = &PTR_FUN_143f3ecf8;
  _DAT_146b09f90 = (**(code **)(*DAT_146b09f88 + 0x38))(DAT_146b09f88);
  atexit(FUN_143eb9530);
  return;
}



// FUNCTION 1403550d0 `dynamic_initializer_for_'CVarRoughnessMax'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRoughnessMax''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRoughnessMax__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09aa8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Roughness.Max",0x3f800000,
                  L"Allows quick material test by remapping the roughness at 1 to a new value (0..1), Only for non shipping built!\n1: (default)"
                  ,0x21);
  _DAT_146b09aa0 = &PTR_FUN_143f3ecf8;
  _DAT_146b09ab0 = (**(code **)(*DAT_146b09aa8 + 0x40))(DAT_146b09aa8);
  atexit(FUN_143eb9580);
  return;
}



// FUNCTION 140355150 `dynamic_initializer_for_'CVarRoughnessMin'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRoughnessMin''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRoughnessMin__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09a90 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.Roughness.Min",0,
                  L"Allows quick material test by remapping the roughness at 0 to a new value (0..1), Only for non shipping built!\n0: (default)"
                  ,0x21);
  _DAT_146b09a88 = &PTR_FUN_143f3ecf8;
  _DAT_146b09a98 = (**(code **)(*DAT_146b09a90 + 0x40))(DAT_146b09a90);
  atexit(FUN_143eb95d0);
  return;
}



// FUNCTION 1403551c0 `dynamic_initializer_for_'CVarSSAOFadeRadiusScale'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSSAOFadeRadiusScale''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSSAOFadeRadiusScale__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09810 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.AmbientOcclusion.FadeRadiusScale",0x3f800000,
                  L"Allows to scale the ambient occlusion fade radius (SSAO).\n 0.01:smallest .. 1.0:normal (default), <1:smaller, >1:larger"
                  ,0x21);
  _DAT_146b09808 = &PTR_FUN_143f3ecf8;
  DAT_146b09818 = (**(code **)(*DAT_146b09810 + 0x40))(DAT_146b09810);
  atexit(FUN_143eb9620);
  return;
}



// FUNCTION 140355240 FUN_140355240 body=117 status=ok
// SIG undefined FUN_140355240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140355240(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b096d0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.SSR.Intensity",0xbf800000,
                  L"Allows to override the post process setting ScreenSpaceReflectionIntensity.\n 0..100: use specified intensity (overrride PostprocessVolume setting)\n -1: no override (default)"
                  ,0x60);
  _DAT_146b096c8 = &PTR_FUN_143f3ecf8;
  DAT_146b096d8 = (**(code **)(*DAT_146b096d0 + 0x40))(DAT_146b096d0);
  atexit(FUN_143eb9670);
  return;
}



// FUNCTION 1403552c0 `dynamic_initializer_for_'CVarSSRMaxRoughness'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSSRMaxRoughness''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSSRMaxRoughness__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09630 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.SSR.MaxRoughness",0xbf800000,
                  L"Allows to override the post process setting ScreenSpaceReflectionMaxRoughness.\nIt defines until what roughness we fade the screen space reflections, 0.8 works well, smaller can run faster.\n(Useful for testing, no scalability or project setting)\n 0..1: use specified max roughness (overrride PostprocessVolume setting)\n -1: no override (default)"
                  ,0x60);
  _DAT_146b09628 = &PTR_FUN_143f3ecf8;
  DAT_146b09638 = (**(code **)(*DAT_146b09630 + 0x40))(DAT_146b09630);
  atexit(FUN_143eb96c0);
  return;
}



// FUNCTION 140355340 FUN_140355340 body=117 status=ok
// SIG undefined FUN_140355340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140355340(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09770 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.SSR.OverrideQuality",0xbf800000,
                  L"Allows to override the post process setting ScreenSpaceReflectionQuality.\n 0..100: use specified quality (overrride PostprocessVolume setting)\n -1: no override (default)"
                  ,0x60);
  _DAT_146b09768 = &PTR_FUN_143f3ecf8;
  DAT_146b09778 = (**(code **)(*DAT_146b09770 + 0x40))(DAT_146b09770);
  atexit(FUN_143eb9710);
  return;
}



// FUNCTION 1403553c0 `dynamic_initializer_for_'CVarSceneColorFringeMax'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSceneColorFringeMax''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSceneColorFringeMax__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09a18 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.SceneColorFringe.Max",0xbf800000,
                  L"Allows to clamp the postprocess setting (in percent, Scene chromatic aberration / color fringe to simulate an artifact that happens in real-world lens, mostly visible in the image corners)\n-1: don\'t clamp (default)\n-2: to test extreme fringe"
                  ,0x60);
  _DAT_146b09a10 = &PTR_FUN_143f3ecf8;
  DAT_146b09a20 = (**(code **)(*DAT_146b09a18 + 0x40))(DAT_146b09a18);
  atexit(FUN_143eb9760);
  return;
}



// FUNCTION 140355440 `dynamic_initializer_for_'CVarShaderBoundsChecking'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarShaderBoundsChecking''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarShaderBoundsChecking__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09fd0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Shaders.BoundsChecking",1,
                  L"Whether to enforce bounds-checking & flush-to-zero/ignore for buffer reads & writes in shaders. Defaults to 1 (enabled). Not all shader languages can omit bounds checking."
                  ,4);
  _DAT_146b09fc8 = &PTR_FUN_143f3ecf8;
  _DAT_146b09fd8 = (**(code **)(*DAT_146b09fd0 + 0x38))(DAT_146b09fd0);
  atexit(FUN_143eb97b0);
  return;
}



// FUNCTION 1403554c0 FUN_1403554c0 body=112 status=ok
// SIG undefined FUN_1403554c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403554c0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09ef8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderDevelopmentModeRetryWhenUnattended",0,
                  L"Whether to retry failed shader compilations or not when FApp::IsUnattended is true (r.ShaderDevelopmentMode must be true as well to retry)"
                  ,0);
  _DAT_146b09ef0 = &PTR_FUN_143f3ecf8;
  _DAT_146b09f00 = (**(code **)(*DAT_146b09ef8 + 0x38))(DAT_146b09ef8);
  atexit(FUN_143eb9800);
  return;
}



// FUNCTION 140355530 `dynamic_initializer_for_'CVarShaderFastMath'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarShaderFastMath''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarShaderFastMath__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09fa0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Shaders.FastMath",1,
                  L"Whether to use fast-math optimisations in shaders.",4);
  _DAT_146b09f98 = &PTR_FUN_143f3ecf8;
  _DAT_146b09fa8 = (**(code **)(*DAT_146b09fa0 + 0x38))(DAT_146b09fa0);
  atexit(FUN_143eb9850);
  return;
}



// FUNCTION 1403555b0 `dynamic_initializer_for_'CVarShaderFlowControl'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarShaderFlowControl''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarShaderFlowControl__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09fe8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Shaders.FlowControlMode",0,
                  L"Specifies whether the shader compiler should preserve or unroll flow-control in shader code.\nThis is primarily a debugging aid and will override any per-shader or per-material settings if not left at the default value (0).\n\t0: Off (Default) - Entirely at the discretion of the platform compiler or the specific shader/material.\n\t1: Prefer - Attempt to preserve flow-control.\n\t2: Avoid - Attempt to unroll and flatten flow-control.\n"
                  ,4);
  _DAT_146b09fe0 = &PTR_FUN_143f3ecf8;
  _DAT_146b09ff0 = (**(code **)(*DAT_146b09fe8 + 0x38))(DAT_146b09fe8);
  atexit(FUN_143eb98a0);
  return;
}



// FUNCTION 140355620 `dynamic_initializer_for_'CVarShaderZeroInitialise'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarShaderZeroInitialise''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarShaderZeroInitialise__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09fb8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Shaders.ZeroInitialise",1,
                  L"Whether to enforce zero initialise local variables of primitive type in shaders. Defaults to 1 (enabled). Not all shader languages can omit zero initialisation."
                  ,4);
  _DAT_146b09fb0 = &PTR_FUN_143f3ecf8;
  _DAT_146b09fc0 = (**(code **)(*DAT_146b09fb8 + 0x38))(DAT_146b09fb8);
  atexit(FUN_143eb98f0);
  return;
}



// FUNCTION 1403556a0 `dynamic_initializer_for_'CVarShowShaderWarnings'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarShowShaderWarnings''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarShowShaderWarnings__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09f50 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.ShowShaderCompilerWarnings",&DAT_146b09448,
                  L"When set to 1, will display all warnings.",0);
  _DAT_146b09f48 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eb9940);
  return;
}



// FUNCTION 140355710 `dynamic_initializer_for_'CVarTessellationAdaptivePixelsPerTriangle'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarTessellationAdaptivePixelsPerTriangle''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarTessellationAdaptivePixelsPerTriangle__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09a48 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.TessellationAdaptivePixelsPerTriangle",0x42400000,
                  L"Global tessellation factor multiplier",0x20);
  _DAT_146b09a40 = &PTR_FUN_143f3ecf8;
  DAT_146b09a50 = (**(code **)(*DAT_146b09a48 + 0x40))(DAT_146b09a48);
  atexit(FUN_143eb9990);
  return;
}



// FUNCTION 140355790 `dynamic_initializer_for_'CVarTonemapperQuality'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarTonemapperQuality''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarTonemapperQuality__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b09a30 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Tonemapper.Quality",5,
                  L"Defines the Tonemapper Quality in the range 0..5\nDepending on the used settings we might pick a faster shader permutation\n 0: basic tonemapper only, lowest quality\n 1: + FilmContrast\n 2: + Vignette\n 3: + FilmShadowTintAmount\n 4: + Grain\n 5: + GrainJitter = full quality (default)"
                  ,0x60);
  _DAT_146b09a28 = &PTR_FUN_143f3ecf8;
  DAT_146b09a38 = (**(code **)(*DAT_146b09a30 + 0x38))(DAT_146b09a30);
  atexit(FUN_143eb99e0);
  return;
}



// FUNCTION 140355810 FUN_140355810 body=115 status=ok
// SIG undefined FUN_140355810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140355810(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b094b8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.UseParallelGetDynamicMeshElementsTasks",1,
                  L"If > 0, and if FApp::ShouldUseThreadingForPerformance(), then parts of GetDynamicMeshElements will be done in parallel."
                  ,0);
  _DAT_146b094b0 = &PTR_FUN_143f3ecf8;
  DAT_146b094c0 = (**(code **)(*DAT_146b094b8 + 0x38))(DAT_146b094b8);
  atexit(FUN_143eb9a30);
  return;
}



// FUNCTION 1403558f0 `dynamic_initializer_for_'GCachedGeneratedInstancedStereoCode'' body=135 status=ok
// SIG undefined `dynamic_initializer_for_'GCachedGeneratedInstancedStereoCode''(void)

void _dynamic_initializer_for__GCachedGeneratedInstancedStereoCode__(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  DAT_146b0a028 = (undefined8 *)operator_new(0x18);
  if (DAT_146b0a028 != (undefined8 *)0x0) {
    *(undefined4 *)(DAT_146b0a028 + 1) = 1;
    *DAT_146b0a028 = &PTR_DestroyObject_14413b698;
    *(undefined4 *)((longlong)DAT_146b0a028 + 0xc) = 1;
    DAT_146b0a028[2] = puVar1;
  }
  DAT_146b0a020 = puVar1;
  SharedPointerInternals::EnableSharedFromThis(&DAT_146b0a020,puVar1,puVar1);
  atexit(FUN_143eb9ac0);
  return;
}



// FUNCTION 140355980 FUN_140355980 body=67 status=ok
// SIG undefined FUN_140355980(void)

void FUN_140355980(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_146534c80 + 0x28))();
    atexit(FUN_143eb9b10);
    return;
  }
  FUN_141edf270(&PTR_PTR_146534c80);
  atexit(FUN_143eb9b10);
  return;
}



// FUNCTION 1403559d0 FUN_1403559d0 body=67 status=ok
// SIG undefined FUN_1403559d0(void)

void FUN_1403559d0(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_146534c48 + 0x28))();
    atexit(FUN_143eb9b70);
    return;
  }
  FUN_141edf270(&PTR_PTR_146534c48);
  atexit(FUN_143eb9b70);
  return;
}



// FUNCTION 140355ad0 FUN_140355ad0 body=114 status=ok
// SIG undefined FUN_140355ad0(void)

void FUN_140355ad0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_146b094d0,4);
  DAT_146b094d8 = DAT_146b094d8 + 4;
  if (DAT_146b094dc < DAT_146b094d8) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146b094d0);
  }
  *DAT_146b094d0 = 0x5500500047;
  DAT_146b094c8 = FCsvProfiler::RegisterCategory(&DAT_146b094d0,1,0);
  atexit((_func_5014 *)&LAB_143eb9be0);
  return;
}



// FUNCTION 140355b50 `dynamic_initializer_for_'_GCsvStat_Total'' body=316 status=ok
// SIG undefined `dynamic_initializer_for_'_GCsvStat_Total''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for___GCsvStat_Total__(void)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  bool bVar6;
  undefined2 *local_28;
  undefined8 local_20;
  undefined2 *local_18;
  undefined8 local_10;
  
  uVar1 = DAT_146b094c8;
  local_10 = 0xc;
  local_18 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"__CSVSTAT__",0x18);
  iVar5 = (int)local_10;
  iVar3 = local_10._4_4_;
  bVar6 = (int)local_10 != 0;
  local_28 = local_18;
  local_18 = (undefined2 *)0x0;
  local_20._0_4_ = (int)local_10;
  local_20._4_4_ = local_10._4_4_;
  local_10 = 0;
  if (iVar3 < (int)((6 - (uint)bVar6) + iVar5)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    iVar5 = (int)local_20;
  }
  iVar3 = (6 - (uint)(iVar5 != 0)) + iVar5;
  local_20 = CONCAT44(local_20._4_4_,iVar3);
  if (local_20._4_4_ < iVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar5);
  }
  puVar2 = local_28;
  builtin_wcsncpy(local_28 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)),L"Total",6);
  puVar4 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar4 = local_28;
  }
  local_28 = (undefined2 *)0x0;
  local_20 = 0;
  FName::FName(&DAT_146b095e8,puVar4,1);
  if (puVar2 != (undefined2 *)0x0) {
    FMemory::Free(puVar2);
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  _DAT_146b095f0 = uVar1;
  return;
}



// FUNCTION 140355c90 FUN_140355c90 body=59 status=ok
// SIG undefined FUN_140355c90(void)

void FUN_140355c90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146534db8,0);
  FGenericPlatformString::Memcpy(DAT_146534db8,L"_GEN_VARIABLE",0x1c);
  atexit((_func_5014 *)&LAB_143eb9c00);
  return;
}



// FUNCTION 140355cf0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0dc00,0,L"FSimpleElementGammaPS_SRGBEncodedSE_BLEND_Masked",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0dc00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0dd30 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0dd38 = &LAB_142782630;
  _DAT_146b0dd40 = BuildSettings::IsPromotedBuild;
  _DAT_146b0dd48 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9c60);
  return;
}



// FUNCTION 140355da0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<1>,2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0dd50,0,L"FSimpleElementGammaPS_SRGBEncodedSE_BLEND_Translucent",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0dd50 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0de80 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0de88 = &LAB_142782630;
  _DAT_146b0de90 = BuildSettings::IsPromotedBuild;
  _DAT_146b0de98 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,2>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9c70);
  return;
}



// FUNCTION 140355e50 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<1>,3>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0dea0,0,L"FSimpleElementGammaPS_SRGBEncodedSE_BLEND_Additive",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0dea0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0dfd0 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0dfd8 = &LAB_142782630;
  _DAT_146b0dfe0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0dfe8 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,3>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9c80);
  return;
}



// FUNCTION 140355f00 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<1>,4>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0dff0,0,L"FSimpleElementGammaPS_SRGBEncodedSE_BLEND_Modulate",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0dff0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0e120 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0e128 = &LAB_142782630;
  _DAT_146b0e130 = BuildSettings::IsPromotedBuild;
  _DAT_146b0e138 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,4>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9c90);
  return;
}



// FUNCTION 140355fb0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<1>,5>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0e140,0,L"FSimpleElementGammaPS_SRGBEncodedSE_BLEND_MaskedDistanceField",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0e140 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0e270 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0e278 = &LAB_142782630;
  _DAT_146b0e280 = BuildSettings::IsPromotedBuild;
  _DAT_146b0e288 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,5>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9ca0);
  return;
}



// FUNCTION 140356060 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<1>,6>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0e290,0,
             L"FSimpleElementGammaPS_SRGBEncodedSE_BLEND_MaskedDistanceFieldShadowed",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0e290 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0e3c0 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0e3c8 = &LAB_142782630;
  _DAT_146b0e3d0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0e3d8 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,6>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9cb0);
  return;
}



// FUNCTION 140356110 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<1>,7>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0e3e0,0,L"FSimpleElementGammaPS_SRGBEncodedSE_BLEND_TranslucentDistanceField",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0e3e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0e510 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0e518 = &LAB_142782630;
  _DAT_146b0e520 = BuildSettings::IsPromotedBuild;
  _DAT_146b0e528 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,7>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9cc0);
  return;
}



// FUNCTION 1403561c0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<1>,8>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0e680,0,
             L"FSimpleElementGammaPS_SRGBEncodedSE_BLEND_TranslucentDistanceFieldShadowed",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0e680 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0e7b0 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0e7b8 = &LAB_142782630;
  _DAT_146b0e7c0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0e7c8 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,8>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9cd0);
  return;
}



// FUNCTION 140356270 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<1>,9>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0e530,0,L"FSimpleElementGammaPS_SRGBEncodedSE_BLEND_AlphaComposite",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0e530 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0e660 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0e668 = &LAB_142782630;
  _DAT_146b0e670 = BuildSettings::IsPromotedBuild;
  _DAT_146b0e678 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,9>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9ce0);
  return;
}



// FUNCTION 140356320 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<1>,10>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0e7d0,0,L"FSimpleElementGammaPS_SRGBEncodedSE_BLEND_AlphaBlend",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0e7d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0e900 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0e908 = &LAB_142782630;
  _DAT_146b0e910 = BuildSettings::IsPromotedBuild;
  _DAT_146b0e918 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,10>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9cf0);
  return;
}



// FUNCTION 1403563d0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<1>,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0dab0,0,L"FSimpleElementGammaPS_SRGBEncodedSE_BLEND_Opaque",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0dab0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0dbe0 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0dbe8 = &LAB_142782630;
  _DAT_146b0dbf0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0dbf8 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9d00);
  return;
}



// FUNCTION 140356480 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<1>,11>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0e920,0,L"FSimpleElementGammaPS_SRGBEncodedSE_BLEND_TranslucentAlphaOnly",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0e920 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0ea50 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0ea58 = &LAB_142782630;
  _DAT_146b0ea60 = BuildSettings::IsPromotedBuild;
  _DAT_146b0ea68 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,11>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9d10);
  return;
}



// FUNCTION 140356530 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<1>,12>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0ea70,0,
             L"FSimpleElementGammaPS_SRGBEncodedSE_BLEND_TranslucentAlphaOnlyWriteAlpha",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0ea70 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0eba0 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0eba8 = &LAB_142782630;
  _DAT_146b0ebb0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0ebb8 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,12>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9d20);
  return;
}



// FUNCTION 1403565e0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<0>,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0ed10,0,L"FSimpleElementGammaPS_LinearEncodedSE_BLEND_Masked",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0ed10 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0ee40 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0ee48 = &LAB_142782630;
  _DAT_146b0ee50 = BuildSettings::IsPromotedBuild;
  _DAT_146b0ee58 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9d30);
  return;
}



// FUNCTION 140356690 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<0>,2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0ee60,0,L"FSimpleElementGammaPS_LinearEncodedSE_BLEND_Translucent",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0ee60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0ef90 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0ef98 = &LAB_142782630;
  _DAT_146b0efa0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0efa8 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,2>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9d40);
  return;
}



// FUNCTION 140356740 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<0>,3>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0efb0,0,L"FSimpleElementGammaPS_LinearEncodedSE_BLEND_Additive",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0efb0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0f0e0 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0f0e8 = &LAB_142782630;
  _DAT_146b0f0f0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0f0f8 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,3>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9d50);
  return;
}



// FUNCTION 1403567f0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<0>,4>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0f100,0,L"FSimpleElementGammaPS_LinearEncodedSE_BLEND_Modulate",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0f100 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0f230 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0f238 = &LAB_142782630;
  _DAT_146b0f240 = BuildSettings::IsPromotedBuild;
  _DAT_146b0f248 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,4>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9d60);
  return;
}



// FUNCTION 1403568a0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<0>,5>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0f250,0,L"FSimpleElementGammaPS_LinearEncodedSE_BLEND_MaskedDistanceField",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0f250 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0f380 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0f388 = &LAB_142782630;
  _DAT_146b0f390 = BuildSettings::IsPromotedBuild;
  _DAT_146b0f398 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,5>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9d70);
  return;
}



// FUNCTION 140356950 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<0>,6>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0f3a0,0,
             L"FSimpleElementGammaPS_LinearEncodedSE_BLEND_MaskedDistanceFieldShadowed",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0f3a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0f4d0 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0f4d8 = &LAB_142782630;
  _DAT_146b0f4e0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0f4e8 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,6>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9d80);
  return;
}



// FUNCTION 140356a00 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<0>,7>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0f4f0,0,
             L"FSimpleElementGammaPS_LinearEncodedSE_BLEND_TranslucentDistanceField",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0f4f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0f620 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0f628 = &LAB_142782630;
  _DAT_146b0f630 = BuildSettings::IsPromotedBuild;
  _DAT_146b0f638 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,7>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9d90);
  return;
}



// FUNCTION 140356ab0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<0>,8>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0f790,0,
             L"FSimpleElementGammaPS_LinearEncodedSE_BLEND_TranslucentDistanceFieldShadowed",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0f790 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0f8c0 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0f8c8 = &LAB_142782630;
  _DAT_146b0f8d0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0f8d8 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,8>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9da0);
  return;
}



// FUNCTION 140356b60 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<0>,9>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0f640,0,L"FSimpleElementGammaPS_LinearEncodedSE_BLEND_AlphaComposite",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0f640 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0f770 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0f778 = &LAB_142782630;
  _DAT_146b0f780 = BuildSettings::IsPromotedBuild;
  _DAT_146b0f788 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,9>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9db0);
  return;
}



// FUNCTION 140356c10 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<0>,10>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0f8e0,0,L"FSimpleElementGammaPS_LinearEncodedSE_BLEND_AlphaBlend",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0f8e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0fa10 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0fa18 = &LAB_142782630;
  _DAT_146b0fa20 = BuildSettings::IsPromotedBuild;
  _DAT_146b0fa28 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,10>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9dc0);
  return;
}



// FUNCTION 140356cc0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<0>,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0ebc0,0,L"FSimpleElementGammaPS_LinearEncodedSE_BLEND_Opaque",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0ebc0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0ecf0 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0ecf8 = &LAB_142782630;
  _DAT_146b0ed00 = BuildSettings::IsPromotedBuild;
  _DAT_146b0ed08 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9dd0);
  return;
}



// FUNCTION 140356d70 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<0>,11>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0fa30,0,L"FSimpleElementGammaPS_LinearEncodedSE_BLEND_TranslucentAlphaOnly",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0fa30 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0fb60 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0fb68 = &LAB_142782630;
  _DAT_146b0fb70 = BuildSettings::IsPromotedBuild;
  _DAT_146b0fb78 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,11>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9de0);
  return;
}



// FUNCTION 140356e20 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaPS<0>,12>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0fb80,0,
             L"FSimpleElementGammaPS_LinearEncodedSE_BLEND_TranslucentAlphaOnlyWriteAlpha",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0fb80 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0fcb0 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0fcb8 = &LAB_142782630;
  _DAT_146b0fcc0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0fcc8 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,12>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9df0);
  return;
}



// FUNCTION 140356ed0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b10f30,0,L"FSimpleElementMaskedGammaPS_SRGBEncodedSE_BLEND_Masked",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b10f30 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b11060 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b11068 = &LAB_142782630;
  _DAT_146b11070 = BuildSettings::IsPromotedBuild;
  _DAT_146b11078 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9e00);
  return;
}



// FUNCTION 140356f80 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,2>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b11080,0,L"FSimpleElementMaskedGammaPS_SRGBEncodedSE_BLEND_Translucent",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b11080 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b111b0 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b111b8 = &LAB_142782630;
  _DAT_146b111c0 = BuildSettings::IsPromotedBuild;
  _DAT_146b111c8 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,2>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9e10);
  return;
}



// FUNCTION 140357030 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,3>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b111d0,0,L"FSimpleElementMaskedGammaPS_SRGBEncodedSE_BLEND_Additive",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b111d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b11300 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b11308 = &LAB_142782630;
  _DAT_146b11310 = BuildSettings::IsPromotedBuild;
  _DAT_146b11318 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,3>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9e20);
  return;
}



// FUNCTION 1403570e0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,4>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b11320,0,L"FSimpleElementMaskedGammaPS_SRGBEncodedSE_BLEND_Modulate",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b11320 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b11450 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b11458 = &LAB_142782630;
  _DAT_146b11460 = BuildSettings::IsPromotedBuild;
  _DAT_146b11468 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,4>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9e30);
  return;
}



// FUNCTION 140357190 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,5>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b11470,0,L"FSimpleElementMaskedGammaPS_SRGBEncodedSE_BLEND_MaskedDistanceField"
             ,L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b11470 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b115a0 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b115a8 = &LAB_142782630;
  _DAT_146b115b0 = BuildSettings::IsPromotedBuild;
  _DAT_146b115b8 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,5>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9e40);
  return;
}



// FUNCTION 140357240 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,6>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b115c0,0,
             L"FSimpleElementMaskedGammaPS_SRGBEncodedSE_BLEND_MaskedDistanceFieldShadowed",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b115c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b116f0 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b116f8 = &LAB_142782630;
  _DAT_146b11700 = BuildSettings::IsPromotedBuild;
  _DAT_146b11708 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,6>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9e50);
  return;
}



// FUNCTION 1403572f0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,7>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b11710,0,
             L"FSimpleElementMaskedGammaPS_SRGBEncodedSE_BLEND_TranslucentDistanceField",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b11710 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b11840 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b11848 = &LAB_142782630;
  _DAT_146b11850 = BuildSettings::IsPromotedBuild;
  _DAT_146b11858 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,7>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9e60);
  return;
}



// FUNCTION 1403573a0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,8>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b119b0,0,
             L"FSimpleElementMaskedGammaPS_SRGBEncodedSE_BLEND_TranslucentDistanceFieldShadowed",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b119b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b11ae0 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b11ae8 = &LAB_142782630;
  _DAT_146b11af0 = BuildSettings::IsPromotedBuild;
  _DAT_146b11af8 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,8>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9e70);
  return;
}



// FUNCTION 140357450 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,9>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b11860,0,L"FSimpleElementMaskedGammaPS_SRGBEncodedSE_BLEND_AlphaComposite",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b11860 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b11990 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b11998 = &LAB_142782630;
  _DAT_146b119a0 = BuildSettings::IsPromotedBuild;
  _DAT_146b119a8 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,9>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9e80);
  return;
}



// FUNCTION 140357500 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,10>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b11b00,0,L"FSimpleElementMaskedGammaPS_SRGBEncodedSE_BLEND_AlphaBlend",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b11b00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b11c30 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b11c38 = &LAB_142782630;
  _DAT_146b11c40 = BuildSettings::IsPromotedBuild;
  _DAT_146b11c48 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,10>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9e90);
  return;
}



// FUNCTION 1403575b0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,0>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b10de0,0,L"FSimpleElementMaskedGammaPS_SRGBEncodedSE_BLEND_Opaque",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b10de0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b10f10 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b10f18 = &LAB_142782630;
  _DAT_146b10f20 = BuildSettings::IsPromotedBuild;
  _DAT_146b10f28 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9ea0);
  return;
}



// FUNCTION 140357660 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,11>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b11c50,0,
             L"FSimpleElementMaskedGammaPS_SRGBEncodedSE_BLEND_TranslucentAlphaOnly",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b11c50 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b11d80 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b11d88 = &LAB_142782630;
  _DAT_146b11d90 = BuildSettings::IsPromotedBuild;
  _DAT_146b11d98 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,11>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9eb0);
  return;
}



// FUNCTION 140357710 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,12>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b11da0,0,
             L"FSimpleElementMaskedGammaPS_SRGBEncodedSE_BLEND_TranslucentAlphaOnlyWriteAlpha",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b11da0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b11ed0 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b11ed8 = &LAB_142782630;
  _DAT_146b11ee0 = BuildSettings::IsPromotedBuild;
  _DAT_146b11ee8 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,12>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9ec0);
  return;
}



// FUNCTION 1403577c0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<0>,1>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b12040,0,L"FSimpleElementMaskedGammaPS_LinearEncodedSE_BLEND_Masked",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b12040 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b12170 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b12178 = &LAB_142782630;
  _DAT_146b12180 = BuildSettings::IsPromotedBuild;
  _DAT_146b12188 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9ed0);
  return;
}



// FUNCTION 140357870 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<0>,2>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b12190,0,L"FSimpleElementMaskedGammaPS_LinearEncodedSE_BLEND_Translucent",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b12190 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b122c0 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b122c8 = &LAB_142782630;
  _DAT_146b122d0 = BuildSettings::IsPromotedBuild;
  _DAT_146b122d8 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,2>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9ee0);
  return;
}



// FUNCTION 140357920 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<0>,3>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b122e0,0,L"FSimpleElementMaskedGammaPS_LinearEncodedSE_BLEND_Additive",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b122e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b12410 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b12418 = &LAB_142782630;
  _DAT_146b12420 = BuildSettings::IsPromotedBuild;
  _DAT_146b12428 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,3>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9ef0);
  return;
}



// FUNCTION 1403579d0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<0>,4>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b12430,0,L"FSimpleElementMaskedGammaPS_LinearEncodedSE_BLEND_Modulate",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b12430 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b12560 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b12568 = &LAB_142782630;
  _DAT_146b12570 = BuildSettings::IsPromotedBuild;
  _DAT_146b12578 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,4>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9f00);
  return;
}



// FUNCTION 140357a80 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<0>,5>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b12580,0,
             L"FSimpleElementMaskedGammaPS_LinearEncodedSE_BLEND_MaskedDistanceField",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b12580 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b126b0 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b126b8 = &LAB_142782630;
  _DAT_146b126c0 = BuildSettings::IsPromotedBuild;
  _DAT_146b126c8 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,5>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9f10);
  return;
}



// FUNCTION 140357b30 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<0>,6>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b126d0,0,
             L"FSimpleElementMaskedGammaPS_LinearEncodedSE_BLEND_MaskedDistanceFieldShadowed",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b126d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b12800 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b12808 = &LAB_142782630;
  _DAT_146b12810 = BuildSettings::IsPromotedBuild;
  _DAT_146b12818 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,6>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9f20);
  return;
}



// FUNCTION 140357be0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<0>,7>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b12820,0,
             L"FSimpleElementMaskedGammaPS_LinearEncodedSE_BLEND_TranslucentDistanceField",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b12820 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b12950 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b12958 = &LAB_142782630;
  _DAT_146b12960 = BuildSettings::IsPromotedBuild;
  _DAT_146b12968 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,7>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9f30);
  return;
}



// FUNCTION 140357c90 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<0>,8>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b12ac0,0,
             L"FSimpleElementMaskedGammaPS_LinearEncodedSE_BLEND_TranslucentDistanceFieldShadowed",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b12ac0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b12bf0 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b12bf8 = &LAB_142782630;
  _DAT_146b12c00 = BuildSettings::IsPromotedBuild;
  _DAT_146b12c08 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,8>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9f40);
  return;
}



// FUNCTION 140357d40 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<0>,9>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b12970,0,L"FSimpleElementMaskedGammaPS_LinearEncodedSE_BLEND_AlphaComposite",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b12970 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b12aa0 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b12aa8 = &LAB_142782630;
  _DAT_146b12ab0 = BuildSettings::IsPromotedBuild;
  _DAT_146b12ab8 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,9>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9f50);
  return;
}



// FUNCTION 140357df0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<0>,10>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b12c10,0,L"FSimpleElementMaskedGammaPS_LinearEncodedSE_BLEND_AlphaBlend",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b12c10 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b12d40 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b12d48 = &LAB_142782630;
  _DAT_146b12d50 = BuildSettings::IsPromotedBuild;
  _DAT_146b12d58 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,10>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9f60);
  return;
}



// FUNCTION 140357ea0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<0>,0>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b11ef0,0,L"FSimpleElementMaskedGammaPS_LinearEncodedSE_BLEND_Opaque",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b11ef0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b12020 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b12028 = &LAB_142782630;
  _DAT_146b12030 = BuildSettings::IsPromotedBuild;
  _DAT_146b12038 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9f70);
  return;
}



// FUNCTION 140357f50 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<0>,11>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b12d60,0,
             L"FSimpleElementMaskedGammaPS_LinearEncodedSE_BLEND_TranslucentAlphaOnly",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b12d60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b12e90 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b12e98 = &LAB_142782630;
  _DAT_146b12ea0 = BuildSettings::IsPromotedBuild;
  _DAT_146b12ea8 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,11>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9f80);
  return;
}



// FUNCTION 140358000 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementMaskedGammaPS<0>,12>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b12eb0,0,
             L"FSimpleElementMaskedGammaPS_LinearEncodedSE_BLEND_TranslucentAlphaOnlyWriteAlpha",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
             FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b12eb0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b12fe0 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b12fe8 = &LAB_142782630;
  _DAT_146b12ff0 = BuildSettings::IsPromotedBuild;
  _DAT_146b12ff8 = FEncodedSimpleElement<FSimpleElementGammaPS<0>,12>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9f90);
  return;
}



// FUNCTION 1403580b0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0caf0,0,L"FSimpleElementAlphaOnlyPSEncodedSE_BLEND_Masked",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"AlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0caf0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0cc20 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0cc28 = &LAB_142782630;
  _DAT_146b0cc30 = BuildSettings::IsPromotedBuild;
  _DAT_146b0cc38 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9fa0);
  return;
}



// FUNCTION 140358160 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,2>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0cc40,0,L"FSimpleElementAlphaOnlyPSEncodedSE_BLEND_Translucent",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"AlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0cc40 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0cd70 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0cd78 = &LAB_142782630;
  _DAT_146b0cd80 = BuildSettings::IsPromotedBuild;
  _DAT_146b0cd88 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,2>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9fb0);
  return;
}



// FUNCTION 140358210 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,3>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0cd90,0,L"FSimpleElementAlphaOnlyPSEncodedSE_BLEND_Additive",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"AlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0cd90 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0cec0 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0cec8 = &LAB_142782630;
  _DAT_146b0ced0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0ced8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,3>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9fc0);
  return;
}



// FUNCTION 1403582c0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,4>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0cee0,0,L"FSimpleElementAlphaOnlyPSEncodedSE_BLEND_Modulate",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"AlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0cee0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0d010 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0d018 = &LAB_142782630;
  _DAT_146b0d020 = BuildSettings::IsPromotedBuild;
  _DAT_146b0d028 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,4>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9fd0);
  return;
}



// FUNCTION 140358370 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,5>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0d030,0,L"FSimpleElementAlphaOnlyPSEncodedSE_BLEND_MaskedDistanceField",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"AlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0d030 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0d160 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0d168 = &LAB_142782630;
  _DAT_146b0d170 = BuildSettings::IsPromotedBuild;
  _DAT_146b0d178 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,5>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9fe0);
  return;
}



// FUNCTION 140358420 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,6>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0d180,0,
             L"FSimpleElementAlphaOnlyPSEncodedSE_BLEND_MaskedDistanceFieldShadowed",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"AlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0d180 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0d2b0 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0d2b8 = &LAB_142782630;
  _DAT_146b0d2c0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0d2c8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,6>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eb9ff0);
  return;
}



// FUNCTION 1403584d0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,7>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0d2d0,0,L"FSimpleElementAlphaOnlyPSEncodedSE_BLEND_TranslucentDistanceField",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"AlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0d2d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0d400 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0d408 = &LAB_142782630;
  _DAT_146b0d410 = BuildSettings::IsPromotedBuild;
  _DAT_146b0d418 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,7>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba000);
  return;
}



// FUNCTION 140358580 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,8>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0d570,0,
             L"FSimpleElementAlphaOnlyPSEncodedSE_BLEND_TranslucentDistanceFieldShadowed",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"AlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0d570 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0d6a0 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0d6a8 = &LAB_142782630;
  _DAT_146b0d6b0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0d6b8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,8>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba010);
  return;
}



// FUNCTION 140358630 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,9>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0d420,0,L"FSimpleElementAlphaOnlyPSEncodedSE_BLEND_AlphaComposite",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"AlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0d420 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0d550 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0d558 = &LAB_142782630;
  _DAT_146b0d560 = BuildSettings::IsPromotedBuild;
  _DAT_146b0d568 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,9>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba020);
  return;
}



// FUNCTION 1403586e0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,10>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0d6c0,0,L"FSimpleElementAlphaOnlyPSEncodedSE_BLEND_AlphaBlend",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"AlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0d6c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0d7f0 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0d7f8 = &LAB_142782630;
  _DAT_146b0d800 = BuildSettings::IsPromotedBuild;
  _DAT_146b0d808 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,10>::ModifyCompilationEnvironment
  ;
  atexit((_func_5014 *)&LAB_143eba030);
  return;
}



// FUNCTION 140358790 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,0>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0c9a0,0,L"FSimpleElementAlphaOnlyPSEncodedSE_BLEND_Opaque",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"AlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0c9a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0cad0 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0cad8 = &LAB_142782630;
  _DAT_146b0cae0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0cae8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba040);
  return;
}



// FUNCTION 140358840 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,11>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0d810,0,L"FSimpleElementAlphaOnlyPSEncodedSE_BLEND_TranslucentAlphaOnly",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"AlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0d810 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0d940 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0d948 = &LAB_142782630;
  _DAT_146b0d950 = BuildSettings::IsPromotedBuild;
  _DAT_146b0d958 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,11>::ModifyCompilationEnvironment
  ;
  atexit((_func_5014 *)&LAB_143eba050);
  return;
}



// FUNCTION 1403588f0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,12>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0d960,0,
             L"FSimpleElementAlphaOnlyPSEncodedSE_BLEND_TranslucentAlphaOnlyWriteAlpha",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"AlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0d960 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0da90 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0da98 = &LAB_142782630;
  _DAT_146b0daa0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0daa8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,12>::ModifyCompilationEnvironment
  ;
  atexit((_func_5014 *)&LAB_143eba060);
  return;
}



// FUNCTION 1403589a0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b14260,0,L"FSimpleElementColorChannelMaskPSEncodedSE_BLEND_Masked",
             L"/Engine/Private/SimpleElementColorChannelMaskPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b14260 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b14390 =
       FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructCompiledInstance;
  _DAT_146b14398 = &LAB_142782660;
  _DAT_146b143a0 = BuildSettings::IsPromotedBuild;
  _DAT_146b143a8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba070);
  return;
}



// FUNCTION 140358a50 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,2>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b143b0,0,L"FSimpleElementColorChannelMaskPSEncodedSE_BLEND_Translucent",
             L"/Engine/Private/SimpleElementColorChannelMaskPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b143b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b144e0 =
       FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructCompiledInstance;
  _DAT_146b144e8 = &LAB_142782660;
  _DAT_146b144f0 = BuildSettings::IsPromotedBuild;
  _DAT_146b144f8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,2>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba080);
  return;
}



// FUNCTION 140358b00 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,3>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b14500,0,L"FSimpleElementColorChannelMaskPSEncodedSE_BLEND_Additive",
             L"/Engine/Private/SimpleElementColorChannelMaskPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b14500 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b14630 =
       FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructCompiledInstance;
  _DAT_146b14638 = &LAB_142782660;
  _DAT_146b14640 = BuildSettings::IsPromotedBuild;
  _DAT_146b14648 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,3>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba090);
  return;
}



// FUNCTION 140358bb0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,4>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b14650,0,L"FSimpleElementColorChannelMaskPSEncodedSE_BLEND_Modulate",
             L"/Engine/Private/SimpleElementColorChannelMaskPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b14650 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b14780 =
       FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructCompiledInstance;
  _DAT_146b14788 = &LAB_142782660;
  _DAT_146b14790 = BuildSettings::IsPromotedBuild;
  _DAT_146b14798 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,4>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba0a0);
  return;
}



// FUNCTION 140358c60 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,5>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b147a0,0,L"FSimpleElementColorChannelMaskPSEncodedSE_BLEND_MaskedDistanceField"
             ,L"/Engine/Private/SimpleElementColorChannelMaskPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b147a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b148d0 =
       FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructCompiledInstance;
  _DAT_146b148d8 = &LAB_142782660;
  _DAT_146b148e0 = BuildSettings::IsPromotedBuild;
  _DAT_146b148e8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,5>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba0b0);
  return;
}



// FUNCTION 140358d10 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,6>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b148f0,0,
             L"FSimpleElementColorChannelMaskPSEncodedSE_BLEND_MaskedDistanceFieldShadowed",
             L"/Engine/Private/SimpleElementColorChannelMaskPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b148f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b14a20 =
       FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructCompiledInstance;
  _DAT_146b14a28 = &LAB_142782660;
  _DAT_146b14a30 = BuildSettings::IsPromotedBuild;
  _DAT_146b14a38 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,6>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba0c0);
  return;
}



// FUNCTION 140358dc0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,7>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b14a40,0,
             L"FSimpleElementColorChannelMaskPSEncodedSE_BLEND_TranslucentDistanceField",
             L"/Engine/Private/SimpleElementColorChannelMaskPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b14a40 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b14b70 =
       FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructCompiledInstance;
  _DAT_146b14b78 = &LAB_142782660;
  _DAT_146b14b80 = BuildSettings::IsPromotedBuild;
  _DAT_146b14b88 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,7>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba0d0);
  return;
}



// FUNCTION 140358e70 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,8>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b14ce0,0,
             L"FSimpleElementColorChannelMaskPSEncodedSE_BLEND_TranslucentDistanceFieldShadowed",
             L"/Engine/Private/SimpleElementColorChannelMaskPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b14ce0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b14e10 =
       FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructCompiledInstance;
  _DAT_146b14e18 = &LAB_142782660;
  _DAT_146b14e20 = BuildSettings::IsPromotedBuild;
  _DAT_146b14e28 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,8>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba0e0);
  return;
}



// FUNCTION 140358f20 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,9>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b14b90,0,L"FSimpleElementColorChannelMaskPSEncodedSE_BLEND_AlphaComposite",
             L"/Engine/Private/SimpleElementColorChannelMaskPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b14b90 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b14cc0 =
       FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructCompiledInstance;
  _DAT_146b14cc8 = &LAB_142782660;
  _DAT_146b14cd0 = BuildSettings::IsPromotedBuild;
  _DAT_146b14cd8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,9>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba0f0);
  return;
}



// FUNCTION 140358fd0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,10>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b14e30,0,L"FSimpleElementColorChannelMaskPSEncodedSE_BLEND_AlphaBlend",
             L"/Engine/Private/SimpleElementColorChannelMaskPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b14e30 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b14f60 =
       FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructCompiledInstance;
  _DAT_146b14f68 = &LAB_142782660;
  _DAT_146b14f70 = BuildSettings::IsPromotedBuild;
  _DAT_146b14f78 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,10>::ModifyCompilationEnvironment
  ;
  atexit((_func_5014 *)&LAB_143eba100);
  return;
}



// FUNCTION 140359080 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,0>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b14110,0,L"FSimpleElementColorChannelMaskPSEncodedSE_BLEND_Opaque",
             L"/Engine/Private/SimpleElementColorChannelMaskPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b14110 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b14240 =
       FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructCompiledInstance;
  _DAT_146b14248 = &LAB_142782660;
  _DAT_146b14250 = BuildSettings::IsPromotedBuild;
  _DAT_146b14258 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba110);
  return;
}



// FUNCTION 140359130 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,11>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b14f80,0,
             L"FSimpleElementColorChannelMaskPSEncodedSE_BLEND_TranslucentAlphaOnly",
             L"/Engine/Private/SimpleElementColorChannelMaskPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b14f80 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b150b0 =
       FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructCompiledInstance;
  _DAT_146b150b8 = &LAB_142782660;
  _DAT_146b150c0 = BuildSettings::IsPromotedBuild;
  _DAT_146b150c8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,11>::ModifyCompilationEnvironment
  ;
  atexit((_func_5014 *)&LAB_143eba120);
  return;
}



// FUNCTION 1403591e0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,12>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b150d0,0,
             L"FSimpleElementColorChannelMaskPSEncodedSE_BLEND_TranslucentAlphaOnlyWriteAlpha",
             L"/Engine/Private/SimpleElementColorChannelMaskPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b150d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b15200 =
       FEncodedSimpleElement<FSimpleElementColorChannelMaskPS,1>::ConstructCompiledInstance;
  _DAT_146b15208 = &LAB_142782660;
  _DAT_146b15210 = BuildSettings::IsPromotedBuild;
  _DAT_146b15218 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,12>::ModifyCompilationEnvironment
  ;
  atexit((_func_5014 *)&LAB_143eba130);
  return;
}



// FUNCTION 140359290 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b13150,0,L"FSimpleElementDistanceFieldGammaPSEncodedSE_BLEND_Masked",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaDistanceFieldMain",3,1,
             TGPUSkinCacheCS<1>::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage)
  ;
  _DAT_146b13150 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b13280 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146b13288 = &LAB_142782630;
  _DAT_146b13290 = BuildSettings::IsPromotedBuild;
  _DAT_146b13298 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba140);
  return;
}



// FUNCTION 140359340 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,2>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b132a0,0,L"FSimpleElementDistanceFieldGammaPSEncodedSE_BLEND_Translucent",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaDistanceFieldMain",3,1,
             TGPUSkinCacheCS<1>::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage)
  ;
  _DAT_146b132a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b133d0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146b133d8 = &LAB_142782630;
  _DAT_146b133e0 = BuildSettings::IsPromotedBuild;
  _DAT_146b133e8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,2>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba150);
  return;
}



// FUNCTION 1403593f0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,3>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b133f0,0,L"FSimpleElementDistanceFieldGammaPSEncodedSE_BLEND_Additive",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaDistanceFieldMain",3,1,
             TGPUSkinCacheCS<1>::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage)
  ;
  _DAT_146b133f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b13520 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146b13528 = &LAB_142782630;
  _DAT_146b13530 = BuildSettings::IsPromotedBuild;
  _DAT_146b13538 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,3>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba160);
  return;
}



// FUNCTION 1403594a0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,4>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b13540,0,L"FSimpleElementDistanceFieldGammaPSEncodedSE_BLEND_Modulate",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaDistanceFieldMain",3,1,
             TGPUSkinCacheCS<1>::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage)
  ;
  _DAT_146b13540 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b13670 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146b13678 = &LAB_142782630;
  _DAT_146b13680 = BuildSettings::IsPromotedBuild;
  _DAT_146b13688 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,4>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba170);
  return;
}



// FUNCTION 140359550 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,5>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b13690,0,
             L"FSimpleElementDistanceFieldGammaPSEncodedSE_BLEND_MaskedDistanceField",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaDistanceFieldMain",3,1,
             TGPUSkinCacheCS<1>::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage)
  ;
  _DAT_146b13690 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b137c0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146b137c8 = &LAB_142782630;
  _DAT_146b137d0 = BuildSettings::IsPromotedBuild;
  _DAT_146b137d8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,5>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba180);
  return;
}



// FUNCTION 140359600 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,6>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b137e0,0,
             L"FSimpleElementDistanceFieldGammaPSEncodedSE_BLEND_MaskedDistanceFieldShadowed",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaDistanceFieldMain",3,1,
             TGPUSkinCacheCS<1>::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage)
  ;
  _DAT_146b137e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b13910 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146b13918 = &LAB_142782630;
  _DAT_146b13920 = BuildSettings::IsPromotedBuild;
  _DAT_146b13928 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,6>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba190);
  return;
}



// FUNCTION 1403596b0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,7>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b13930,0,
             L"FSimpleElementDistanceFieldGammaPSEncodedSE_BLEND_TranslucentDistanceField",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaDistanceFieldMain",3,1,
             TGPUSkinCacheCS<1>::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage)
  ;
  _DAT_146b13930 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b13a60 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146b13a68 = &LAB_142782630;
  _DAT_146b13a70 = BuildSettings::IsPromotedBuild;
  _DAT_146b13a78 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,7>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba1a0);
  return;
}



// FUNCTION 140359760 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,8>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b13bd0,0,
             L"FSimpleElementDistanceFieldGammaPSEncodedSE_BLEND_TranslucentDistanceFieldShadowed",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaDistanceFieldMain",3,1,
             TGPUSkinCacheCS<1>::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage)
  ;
  _DAT_146b13bd0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b13d00 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146b13d08 = &LAB_142782630;
  _DAT_146b13d10 = BuildSettings::IsPromotedBuild;
  _DAT_146b13d18 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,8>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba1b0);
  return;
}



// FUNCTION 140359810 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,9>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b13a80,0,L"FSimpleElementDistanceFieldGammaPSEncodedSE_BLEND_AlphaComposite",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaDistanceFieldMain",3,1,
             TGPUSkinCacheCS<1>::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage)
  ;
  _DAT_146b13a80 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b13bb0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146b13bb8 = &LAB_142782630;
  _DAT_146b13bc0 = BuildSettings::IsPromotedBuild;
  _DAT_146b13bc8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,9>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba1c0);
  return;
}



// FUNCTION 1403598c0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,10>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b13d20,0,L"FSimpleElementDistanceFieldGammaPSEncodedSE_BLEND_AlphaBlend",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaDistanceFieldMain",3,1,
             TGPUSkinCacheCS<1>::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage)
  ;
  _DAT_146b13d20 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b13e50 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146b13e58 = &LAB_142782630;
  _DAT_146b13e60 = BuildSettings::IsPromotedBuild;
  _DAT_146b13e68 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,10>::ModifyCompilationEnvironment
  ;
  atexit((_func_5014 *)&LAB_143eba1d0);
  return;
}



// FUNCTION 140359970 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,0>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b13000,0,L"FSimpleElementDistanceFieldGammaPSEncodedSE_BLEND_Opaque",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaDistanceFieldMain",3,1,
             TGPUSkinCacheCS<1>::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage)
  ;
  _DAT_146b13000 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b13130 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146b13138 = &LAB_142782630;
  _DAT_146b13140 = BuildSettings::IsPromotedBuild;
  _DAT_146b13148 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba1e0);
  return;
}



// FUNCTION 140359a20 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,11>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b13e70,0,
             L"FSimpleElementDistanceFieldGammaPSEncodedSE_BLEND_TranslucentAlphaOnly",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaDistanceFieldMain",3,1,
             TGPUSkinCacheCS<1>::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage)
  ;
  _DAT_146b13e70 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b13fa0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146b13fa8 = &LAB_142782630;
  _DAT_146b13fb0 = BuildSettings::IsPromotedBuild;
  _DAT_146b13fb8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,11>::ModifyCompilationEnvironment
  ;
  atexit((_func_5014 *)&LAB_143eba1f0);
  return;
}



// FUNCTION 140359ad0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,12>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b13fc0,0,
             L"FSimpleElementDistanceFieldGammaPSEncodedSE_BLEND_TranslucentAlphaOnlyWriteAlpha",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaDistanceFieldMain",3,1,
             TGPUSkinCacheCS<1>::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage)
  ;
  _DAT_146b13fc0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b140f0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146b140f8 = &LAB_142782630;
  _DAT_146b14100 = BuildSettings::IsPromotedBuild;
  _DAT_146b14108 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,12>::ModifyCompilationEnvironment
  ;
  atexit((_func_5014 *)&LAB_143eba200);
  return;
}



// FUNCTION 140359b80 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaAlphaOnlyPS,1>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0fe20,0,L"FSimpleElementGammaAlphaOnlyPSEncodedSE_BLEND_Masked",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaAlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0fe20 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0ff50 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0ff58 = &LAB_142782630;
  _DAT_146b0ff60 = BuildSettings::IsPromotedBuild;
  _DAT_146b0ff68 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba210);
  return;
}



// FUNCTION 140359c30 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaAlphaOnlyPS,2>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0ff70,0,L"FSimpleElementGammaAlphaOnlyPSEncodedSE_BLEND_Translucent",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaAlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0ff70 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b100a0 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b100a8 = &LAB_142782630;
  _DAT_146b100b0 = BuildSettings::IsPromotedBuild;
  _DAT_146b100b8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,2>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba220);
  return;
}



// FUNCTION 140359ce0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaAlphaOnlyPS,3>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b100c0,0,L"FSimpleElementGammaAlphaOnlyPSEncodedSE_BLEND_Additive",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaAlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b100c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b101f0 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b101f8 = &LAB_142782630;
  _DAT_146b10200 = BuildSettings::IsPromotedBuild;
  _DAT_146b10208 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,3>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba230);
  return;
}



// FUNCTION 140359d90 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaAlphaOnlyPS,4>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b10210,0,L"FSimpleElementGammaAlphaOnlyPSEncodedSE_BLEND_Modulate",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaAlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b10210 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b10340 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b10348 = &LAB_142782630;
  _DAT_146b10350 = BuildSettings::IsPromotedBuild;
  _DAT_146b10358 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,4>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba240);
  return;
}



// FUNCTION 140359e40 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaAlphaOnlyPS,5>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b10360,0,L"FSimpleElementGammaAlphaOnlyPSEncodedSE_BLEND_MaskedDistanceField",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaAlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b10360 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b10490 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b10498 = &LAB_142782630;
  _DAT_146b104a0 = BuildSettings::IsPromotedBuild;
  _DAT_146b104a8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,5>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba250);
  return;
}



// FUNCTION 140359ef0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaAlphaOnlyPS,6>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b104b0,0,
             L"FSimpleElementGammaAlphaOnlyPSEncodedSE_BLEND_MaskedDistanceFieldShadowed",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaAlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b104b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b105e0 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b105e8 = &LAB_142782630;
  _DAT_146b105f0 = BuildSettings::IsPromotedBuild;
  _DAT_146b105f8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,6>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba260);
  return;
}



// FUNCTION 140359fa0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaAlphaOnlyPS,7>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b10600,0,
             L"FSimpleElementGammaAlphaOnlyPSEncodedSE_BLEND_TranslucentDistanceField",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaAlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b10600 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b10730 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b10738 = &LAB_142782630;
  _DAT_146b10740 = BuildSettings::IsPromotedBuild;
  _DAT_146b10748 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,7>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba270);
  return;
}



// FUNCTION 14035a050 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaAlphaOnlyPS,8>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b108a0,0,
             L"FSimpleElementGammaAlphaOnlyPSEncodedSE_BLEND_TranslucentDistanceFieldShadowed",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaAlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b108a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b109d0 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b109d8 = &LAB_142782630;
  _DAT_146b109e0 = BuildSettings::IsPromotedBuild;
  _DAT_146b109e8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,8>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba280);
  return;
}



// FUNCTION 14035a100 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaAlphaOnlyPS,9>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b10750,0,L"FSimpleElementGammaAlphaOnlyPSEncodedSE_BLEND_AlphaComposite",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaAlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b10750 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b10880 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b10888 = &LAB_142782630;
  _DAT_146b10890 = BuildSettings::IsPromotedBuild;
  _DAT_146b10898 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,9>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba290);
  return;
}



// FUNCTION 14035a1b0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaAlphaOnlyPS,10>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b109f0,0,L"FSimpleElementGammaAlphaOnlyPSEncodedSE_BLEND_AlphaBlend",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaAlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b109f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b10b20 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b10b28 = &LAB_142782630;
  _DAT_146b10b30 = BuildSettings::IsPromotedBuild;
  _DAT_146b10b38 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,10>::ModifyCompilationEnvironment
  ;
  atexit((_func_5014 *)&LAB_143eba2a0);
  return;
}



// FUNCTION 14035a260 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaAlphaOnlyPS,0>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146b0fcd0,0,L"FSimpleElementGammaAlphaOnlyPSEncodedSE_BLEND_Opaque",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaAlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0fcd0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0fe00 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0fe08 = &LAB_142782630;
  _DAT_146b0fe10 = BuildSettings::IsPromotedBuild;
  _DAT_146b0fe18 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba2b0);
  return;
}



// FUNCTION 14035a310 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaAlphaOnlyPS,11>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b10b40,0,L"FSimpleElementGammaAlphaOnlyPSEncodedSE_BLEND_TranslucentAlphaOnly",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaAlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b10b40 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b10c70 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b10c78 = &LAB_142782630;
  _DAT_146b10c80 = BuildSettings::IsPromotedBuild;
  _DAT_146b10c88 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,11>::ModifyCompilationEnvironment
  ;
  atexit((_func_5014 *)&LAB_143eba2c0);
  return;
}



// FUNCTION 14035a3c0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementGammaAlphaOnlyPS,12>::
     StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b10c90,0,
             L"FSimpleElementGammaAlphaOnlyPSEncodedSE_BLEND_TranslucentAlphaOnlyWriteAlpha",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaAlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b10c90 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b10dc0 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b10dc8 = &LAB_142782630;
  _DAT_146b10dd0 = BuildSettings::IsPromotedBuild;
  _DAT_146b10dd8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,12>::ModifyCompilationEnvironment
  ;
  atexit((_func_5014 *)&LAB_143eba2d0);
  return;
}



// FUNCTION 14035a470 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementPS,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0b9e0,0,L"FSimpleElementPSEncodedSE_BLEND_Masked",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0b9e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0bb10 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0bb18 = &LAB_142782630;
  _DAT_146b0bb20 = BuildSettings::IsPromotedBuild;
  _DAT_146b0bb28 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba2e0);
  return;
}



// FUNCTION 14035a520 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementPS,2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0bb30,0,L"FSimpleElementPSEncodedSE_BLEND_Translucent",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0bb30 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0bc60 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0bc68 = &LAB_142782630;
  _DAT_146b0bc70 = BuildSettings::IsPromotedBuild;
  _DAT_146b0bc78 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,2>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba2f0);
  return;
}



// FUNCTION 14035a5d0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementPS,3>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0bc80,0,L"FSimpleElementPSEncodedSE_BLEND_Additive",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0bc80 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0bdb0 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0bdb8 = &LAB_142782630;
  _DAT_146b0bdc0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0bdc8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,3>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba300);
  return;
}



// FUNCTION 14035a680 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementPS,4>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0bdd0,0,L"FSimpleElementPSEncodedSE_BLEND_Modulate",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0bdd0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0bf00 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0bf08 = &LAB_142782630;
  _DAT_146b0bf10 = BuildSettings::IsPromotedBuild;
  _DAT_146b0bf18 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,4>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba310);
  return;
}



// FUNCTION 14035a730 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementPS,5>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0bf20,0,L"FSimpleElementPSEncodedSE_BLEND_MaskedDistanceField",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0bf20 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0c050 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0c058 = &LAB_142782630;
  _DAT_146b0c060 = BuildSettings::IsPromotedBuild;
  _DAT_146b0c068 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,5>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba320);
  return;
}



// FUNCTION 14035a7e0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementPS,6>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0c070,0,L"FSimpleElementPSEncodedSE_BLEND_MaskedDistanceFieldShadowed",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0c070 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0c1a0 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0c1a8 = &LAB_142782630;
  _DAT_146b0c1b0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0c1b8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,6>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba330);
  return;
}



// FUNCTION 14035a890 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementPS,7>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0c1c0,0,L"FSimpleElementPSEncodedSE_BLEND_TranslucentDistanceField",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0c1c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0c2f0 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0c2f8 = &LAB_142782630;
  _DAT_146b0c300 = BuildSettings::IsPromotedBuild;
  _DAT_146b0c308 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,7>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba340);
  return;
}



// FUNCTION 14035a940 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementPS,8>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0c460,0,L"FSimpleElementPSEncodedSE_BLEND_TranslucentDistanceFieldShadowed",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0c460 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0c590 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0c598 = &LAB_142782630;
  _DAT_146b0c5a0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0c5a8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,8>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba350);
  return;
}



// FUNCTION 14035a9f0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementPS,9>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0c310,0,L"FSimpleElementPSEncodedSE_BLEND_AlphaComposite",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0c310 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0c440 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0c448 = &LAB_142782630;
  _DAT_146b0c450 = BuildSettings::IsPromotedBuild;
  _DAT_146b0c458 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,9>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba360);
  return;
}



// FUNCTION 14035aaa0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementPS,10>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0c5b0,0,L"FSimpleElementPSEncodedSE_BLEND_AlphaBlend",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0c5b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0c6e0 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0c6e8 = &LAB_142782630;
  _DAT_146b0c6f0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0c6f8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,10>::ModifyCompilationEnvironment
  ;
  atexit((_func_5014 *)&LAB_143eba370);
  return;
}



// FUNCTION 14035ab50 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementPS,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0b890,0,L"FSimpleElementPSEncodedSE_BLEND_Opaque",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0b890 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0b9c0 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0b9c8 = &LAB_142782630;
  _DAT_146b0b9d0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0b9d8 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143eba380);
  return;
}



// FUNCTION 14035ac00 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementPS,11>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0c700,0,L"FSimpleElementPSEncodedSE_BLEND_TranslucentAlphaOnly",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0c700 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0c830 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0c838 = &LAB_142782630;
  _DAT_146b0c840 = BuildSettings::IsPromotedBuild;
  _DAT_146b0c848 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,11>::ModifyCompilationEnvironment
  ;
  atexit((_func_5014 *)&LAB_143eba390);
  return;
}



// FUNCTION 14035acb0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FEncodedSimpleElement<FSimpleElementPS,12>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0c850,0,L"FSimpleElementPSEncodedSE_BLEND_TranslucentAlphaOnlyWriteAlpha",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"Main",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0c850 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0c980 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0c988 = &LAB_142782630;
  _DAT_146b0c990 = BuildSettings::IsPromotedBuild;
  _DAT_146b0c998 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,12>::ModifyCompilationEnvironment
  ;
  atexit((_func_5014 *)&LAB_143eba3a0);
  return;
}



// FUNCTION 14035ad60 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FSimpleElementGammaPS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0b350,0,L"FSimpleElementGammaPS_SRGB",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0b350 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0b480 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0b488 = BuildSettings::IsPromotedBuild;
  _DAT_146b0b490 = BuildSettings::IsPromotedBuild;
  _DAT_146b0b498 = &LAB_14277f5f0;
  atexit((_func_5014 *)&LAB_143eba3b0);
  return;
}



// FUNCTION 14035ae10 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FSimpleElementGammaPS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0b4a0,0,L"FSimpleElementGammaPS_Linear",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0b4a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0b5d0 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0b5d8 = BuildSettings::IsPromotedBuild;
  _DAT_146b0b5e0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0b5e8 = &LAB_14277f610;
  atexit((_func_5014 *)&LAB_143eba3c0);
  return;
}



// FUNCTION 14035aec0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FSimpleElementMaskedGammaPS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0b5f0,0,L"FSimpleElementMaskedGammaPS_SRGB",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,FUN_14276f190,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0b5f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0b720 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0b728 = BuildSettings::IsPromotedBuild;
  _DAT_146b0b730 = BuildSettings::IsPromotedBuild;
  _DAT_146b0b738 = &LAB_14277f5f0;
  atexit((_func_5014 *)&LAB_143eba3d0);
  return;
}



// FUNCTION 14035af70 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FSimpleElementMaskedGammaPS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0b740,0,L"FSimpleElementMaskedGammaPS_Linear",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,FUN_14276f190,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0b740 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0b870 =
       FEncodedSimpleElement<FSimpleElementMaskedGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0b878 = BuildSettings::IsPromotedBuild;
  _DAT_146b0b880 = BuildSettings::IsPromotedBuild;
  _DAT_146b0b888 = &LAB_14277f610;
  atexit((_func_5014 *)&LAB_143eba3e0);
  return;
}



// FUNCTION 14035b020 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FSimpleElementAlphaOnlyPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0ab30,0,L"FSimpleElementAlphaOnlyPS",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"AlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0ab30 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0ac60 = FEncodedSimpleElement<FSimpleElementAlphaOnlyPS,1>::ConstructCompiledInstance;
  _DAT_146b0ac68 = BuildSettings::IsPromotedBuild;
  _DAT_146b0ac70 = BuildSettings::IsPromotedBuild;
  _DAT_146b0ac78 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143eba3f0);
  return;
}



// FUNCTION 14035b0d0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FSimpleElementColorChannelMaskPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0b070,0,L"FSimpleElementColorChannelMaskPS",
             L"/Engine/Private/SimpleElementColorChannelMaskPixelShader.usf",L"Main",3,1,
             FUN_14276f1c0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0b070 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0b1a0 = FUN_14276ee20;
  _DAT_146b0b1a8 = &LAB_1427826a0;
  _DAT_146b0b1b0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0b1b8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143eba400);
  return;
}



// FUNCTION 14035b180 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FSimpleElementDistanceFieldGammaPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0add0,0,L"FSimpleElementDistanceFieldGammaPS",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaDistanceFieldMain",3,1,
             FCullObjectsForVolumeCS::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0add0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0af00 = FUN_14276ee50;
  _DAT_146b0af08 = BuildSettings::IsPromotedBuild;
  _DAT_146b0af10 = BuildSettings::IsPromotedBuild;
  _DAT_146b0af18 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143eba410);
  return;
}



// FUNCTION 14035b230 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FSimpleElementGammaAlphaOnlyPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0ac80,0,L"FSimpleElementGammaAlphaOnlyPS",
             L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaAlphaOnlyMain",3,1,
             FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0ac80 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0adb0 = FEncodedSimpleElement<FSimpleElementGammaPS<1>,1>::ConstructCompiledInstance;
  _DAT_146b0adb8 = BuildSettings::IsPromotedBuild;
  _DAT_146b0adc0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0adc8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143eba420);
  return;
}



// FUNCTION 14035b2e0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FSimpleElementHitProxyPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0af20,0,L"FSimpleElementHitProxyPS",
             L"/Engine/Private/SimpleElementHitProxyPixelShader.usf",L"Main",3,1,FUN_141a145b0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0af20 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0b050 = FHdrCustomResolveFMask2xPS::ConstructCompiledInstance;
  _DAT_146b0b058 = &LAB_1427826a0;
  _DAT_146b0b060 = BuildSettings::IsPromotedBuild;
  _DAT_146b0b068 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143eba430);
  return;
}



// FUNCTION 14035b390 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FSimpleElementPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0a9e0,0,L"FSimpleElementPS",L"/Engine/Private/SimpleElementPixelShader.usf",
             L"Main",3,1,FUN_14276f240,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0a9e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0ab10 = FUN_14276ef20;
  _DAT_146b0ab18 = BuildSettings::IsPromotedBuild;
  _DAT_146b0ab20 = BuildSettings::IsPromotedBuild;
  _DAT_146b0ab28 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143eba440);
  return;
}



// FUNCTION 14035b440 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FSimpleElementVS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b0a890,0,L"FSimpleElementVS",L"/Engine/Private/SimpleElementVertexShader.usf",
             L"Main",0,1,FUN_141c19f80,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b0a890 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b0a9c0 = FSimpleElementVS::ConstructCompiledInstance;
  _DAT_146b0a9c8 = BuildSettings::IsPromotedBuild;
  _DAT_146b0a9d0 = BuildSettings::IsPromotedBuild;
  _DAT_146b0a9d8 = &LAB_14277f630;
  atexit((_func_5014 *)&LAB_143eba450);
  return;
}



// FUNCTION 14035b4f0 FUN_14035b4f0 body=115 status=ok
// SIG undefined FUN_14035b4f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035b4f0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b0a850 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.CapsuleShadows.AllowInSplitScreen",1,&DAT_14519dcb4,0);
  _DAT_146b0a848 = &PTR_FUN_143f3ecf8;
  DAT_146b0a858 = (**(code **)(*DAT_146b0a850 + 0x38))(DAT_146b0a850);
  atexit(FUN_143eba460);
  return;
}



// FUNCTION 14035b570 `dynamic_initializer_for_'CVarDebugDrawBoneAxes'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDebugDrawBoneAxes''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDebugDrawBoneAxes__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b0b1c8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"a.DebugDrawBoneAxes",0,
                  L"When drawing bones (using Show Bones), draw bone axes.",0);
  _DAT_146b0b1c0 = &PTR_FUN_143f3ecf8;
  _DAT_146b0b1d0 = (**(code **)(*DAT_146b0b1c8 + 0x38))(DAT_146b0b1c8);
  atexit(FUN_143eba4b0);
  return;
}



// FUNCTION 14035b5e0 `dynamic_initializer_for_'CVarDebugDrawSimpleBones'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDebugDrawSimpleBones''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDebugDrawSimpleBones__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b0a880 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"a.DebugDrawSimpleBones",0,
                  L"When drawing bones (using Show Bones), draw bones as simple lines.",0);
  _DAT_146b0a878 = &PTR_FUN_143f3ecf8;
  _DAT_146b0a888 = (**(code **)(*DAT_146b0a880 + 0x38))(DAT_146b0a880);
  atexit(FUN_143eba500);
  return;
}



// FUNCTION 14035b650 FUN_14035b650 body=115 status=ok
// SIG undefined FUN_14035b650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035b650(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b0a838 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Lightmass.ForceStrictShadowMapChannelSeparation",1,
                  L"0: 1: Force all RGBA shadowmap allocations to group together separately for shadowmap atlasing"
                  ,0);
  _DAT_146b0a830 = &PTR_FUN_143f3ecf8;
  _DAT_146b0a840 = (**(code **)(*DAT_146b0a838 + 0x38))(DAT_146b0a838);
  atexit(FUN_143eba550);
  return;
}



// FUNCTION 14035b6d0 `dynamic_initializer_for_'CVarXGEShaderCompile'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarXGEShaderCompile''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void XGEShaderCompilerVariables::_dynamic_initializer_for__CVarXGEShaderCompile__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b0a778 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.XGEShaderCompile",&DAT_146534d30,
                  L"Enables or disables the use of XGE to build shaders.\n0: Local builds only. \n1: Distribute builds using XGE (default)."
                  ,0);
  _DAT_146b0a770 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eba5a0);
  return;
}



// FUNCTION 14035b740 `dynamic_initializer_for_'CVarXGEShaderCompileBatchGroupSize'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarXGEShaderCompileBatchGroupSize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void XGEShaderCompilerVariables::_dynamic_initializer_for__CVarXGEShaderCompileBatchGroupSize__
               (void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b0a7a8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.XGEShaderCompile.Xml.BatchGroupSize",&DAT_146534d3c,
                  L"Specifies the number of batches to fill with shaders.\nShaders are spread across this number of batches until all the batches are full.\nThis allows the XGE compile to go wider when compiling a small number of shaders.\nDefault = 128\n"
                  ,0);
  _DAT_146b0a7a0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eba5f0);
  return;
}



// FUNCTION 14035b7b0 `dynamic_initializer_for_'CVarXGEShaderCompileBatchSize'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarXGEShaderCompileBatchSize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void XGEShaderCompilerVariables::_dynamic_initializer_for__CVarXGEShaderCompileBatchSize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b0a798 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.XGEShaderCompile.Xml.BatchSize",&DAT_146534d38,
                  L"Specifies the number of shaders to batch together into a single XGE task.\nDefault = 16\n"
                  ,0);
  _DAT_146b0a790 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eba640);
  return;
}



// FUNCTION 14035b820 `dynamic_initializer_for_'CVarXGEShaderCompileJobTimeout'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarXGEShaderCompileJobTimeout''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void XGEShaderCompilerVariables::_dynamic_initializer_for__CVarXGEShaderCompileJobTimeout__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b0a7b8 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.XGEShaderCompile.Xml.JobTimeout",&DAT_146534d40,
                  L"The number of seconds to wait for additional shader jobs to be submitted before starting a build.\nDefault = 0.5\n"
                  ,0);
  _DAT_146b0a7b0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eba690);
  return;
}



// FUNCTION 14035b890 `dynamic_initializer_for_'CVarXGEShaderCompileMode'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarXGEShaderCompileMode''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void XGEShaderCompilerVariables::_dynamic_initializer_for__CVarXGEShaderCompileMode__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b0a788 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.XGEShaderCompile.Mode",&DAT_146534d34,
                  L"Selects which dispatch mode to use.\n0: Use legacy xml dispatch mode. (default)\n1: Prefer interception mode if available (requires XGE controller support). Falls back to legacy mode otherwise.\n2: Force interception mode. Disables XGE shader compiling if XGE controller is not available.\n"
                  ,0);
  _DAT_146b0a780 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eba6e0);
  return;
}



// FUNCTION 14035b900 FUN_14035b900 body=115 status=ok
// SIG undefined FUN_14035b900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035b900(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b0a868 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Bloom.AllowInSplitScreen",1,&DAT_14519dcd4,0);
  _DAT_146b0a860 = &PTR_FUN_143f3ecf8;
  DAT_146b0a870 = (**(code **)(*DAT_146b0a868 + 0x38))(DAT_146b0a868);
  atexit(FUN_143eba730);
  return;
}



// FUNCTION 14035b9f0 `dynamic_initializer_for_'GRegisterAnimationCustomVersion'' body=81 status=ok
// SIG undefined `dynamic_initializer_for_'GRegisterAnimationCustomVersion''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GRegisterAnimationCustomVersion__(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = _DAT_146534dc8;
  uStack_14 = uRam0000000146534dcc;
  uStack_10 = uRam0000000146534dd0;
  uStack_c = uRam0000000146534dd4;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxSkeletalMeshVer",1);
  FCustomVersionRegistration::FCustomVersionRegistration(&DAT_146b0b1e8,&local_18,5,*puVar1);
  atexit((_func_5014 *)&LAB_143eba780);
  return;
}



// FUNCTION 14035ba50 `dynamic_initializer_for_'GRegisterOverlappingVerticesCustomVersion'' body=81 status=ok
// SIG undefined `dynamic_initializer_for_'GRegisterOverlappingVerticesCustomVersion''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GRegisterOverlappingVerticesCustomVersion__(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = _DAT_146534d68;
  uStack_14 = uRam0000000146534d6c;
  uStack_10 = uRam0000000146534d70;
  uStack_c = uRam0000000146534d74;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"OverlappingVerticeDetectionVer",1);
  FCustomVersionRegistration::FCustomVersionRegistration(&DAT_146b0b208,&local_18,1,*puVar1);
  atexit((_func_5014 *)&LAB_143eba790);
  return;
}



// FUNCTION 14035bab0 `dynamic_initializer_for_'GRegisterRecomputeTangentCustomVersion'' body=81 status=ok
// SIG undefined `dynamic_initializer_for_'GRegisterRecomputeTangentCustomVersion''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GRegisterRecomputeTangentCustomVersion__(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = _DAT_146534d58;
  uStack_14 = uRam0000000146534d5c;
  uStack_10 = uRam0000000146534d60;
  uStack_c = uRam0000000146534d64;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RecomputeTangentCustomVer",1);
  FCustomVersionRegistration::FCustomVersionRegistration(&DAT_146b0b1f8,&local_18,1,*puVar1);
  atexit((_func_5014 *)&LAB_143eba7a0);
  return;
}



// FUNCTION 14035bb10 `dynamic_initializer_for_'GRegisterSkeletalMeshCustomVersion'' body=81 status=ok
// SIG undefined `dynamic_initializer_for_'GRegisterSkeletalMeshCustomVersion''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GRegisterSkeletalMeshCustomVersion__(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = _DAT_146534d48;
  uStack_14 = uRam0000000146534d4c;
  uStack_10 = uRam0000000146534d50;
  uStack_c = uRam0000000146534d54;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SkeletalMeshVer",1);
  FCustomVersionRegistration::FCustomVersionRegistration(&DAT_146b0b1d8,&local_18,0x10,*puVar1);
  atexit((_func_5014 *)&LAB_143eba7b0);
  return;
}



// FUNCTION 14035bc40 `dynamic_initializer_for_'XGE_InputFileName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'XGE_InputFileName''(void)

void _dynamic_initializer_for__XGE_InputFileName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146534d88,0);
  FGenericPlatformString::Memcpy(DAT_146534d88,L"WorkerInput.in",0x1e);
  atexit((_func_5014 *)&LAB_143eba820);
  return;
}



// FUNCTION 14035bc80 `dynamic_initializer_for_'XGE_OutputFileName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'XGE_OutputFileName''(void)

void _dynamic_initializer_for__XGE_OutputFileName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146534d98,0);
  FGenericPlatformString::Memcpy(DAT_146534d98,L"WorkerOutput.out",0x22);
  atexit((_func_5014 *)&LAB_143eba840);
  return;
}



// FUNCTION 14035bcc0 `dynamic_initializer_for_'XGE_ScriptFileName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'XGE_ScriptFileName''(void)

void _dynamic_initializer_for__XGE_ScriptFileName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146534d78,0);
  FGenericPlatformString::Memcpy(DAT_146534d78,L"xgscript.xml",0x1a);
  atexit((_func_5014 *)&LAB_143eba860);
  return;
}



// FUNCTION 14035bd00 `dynamic_initializer_for_'XGE_SuccessFileName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'XGE_SuccessFileName''(void)

void _dynamic_initializer_for__XGE_SuccessFileName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146534da8,0);
  FGenericPlatformString::Memcpy(DAT_146534da8,L"Success",0x10);
  atexit((_func_5014 *)&LAB_143eba880);
  return;
}



// FUNCTION 14035bd70 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FGPUMorphNormalizeCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b156a0,0,L"FGPUMorphNormalizeCS",L"/Engine/Private/MorphTargets.usf",
             L"GPUMorphNormalizeCS",5,1,FUN_14276f240,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b156a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b157d0 = FGPUMorphNormalizeCS::ConstructCompiledInstance;
  _DAT_146b157d8 = &LAB_1424ad6d0;
  _DAT_146b157e0 = BuildSettings::IsPromotedBuild;
  _DAT_146b157e8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143eba8c0);
  return;
}



// FUNCTION 14035be20 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FGPUMorphUpdateCS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b15550,0,L"FGPUMorphUpdateCS",L"/Engine/Private/MorphTargets.usf",
             L"GPUMorphUpdateCS",5,1,FUN_1427d6910,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b15550 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b15680 = FGPUMorphUpdateCS::ConstructCompiledInstance;
  _DAT_146b15688 = &LAB_1424ad6d0;
  _DAT_146b15690 = BuildSettings::IsPromotedBuild;
  _DAT_146b15698 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143eba8d0);
  return;
}



// FUNCTION 14035bed0 FUN_14035bed0 body=355 status=ok
// SIG undefined FUN_14035bed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035bed0(void)

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
    plVar1[1] = (longlong)&DAT_146b15460;
    plVar1[2] = (longlong)FUN_141591020;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b15468 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"TaskGraph.TaskPriorities.ParallelClothTask",
                  L"Task and thread priority for parallel cloth.",&local_18,0);
  _DAT_146b15460 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14035bfcf;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14035bfcf:
  DAT_146b15470 = 0;
  _DAT_146b15478 = 0x2b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146b15470,0);
  FGenericPlatformString::Memcpy(DAT_146b15470,L"TaskGraph.TaskPriorities.ParallelClothTask",0x56);
  _DAT_146b15480 = 0x800;
  DAT_146b15488 = 0x200;
  atexit(FUN_143eba8e0);
  return;
}



// FUNCTION 14035c040 FUN_14035c040 body=100 status=ok
// SIG undefined FUN_14035c040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035c040(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b153c8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"p.AllowNotForDedServerPhysicsAssets",&DAT_146534dfc,
                  L"Allow \'Not For Dedicated Server\' flag on PhysicsAssets\n0: ignore flag, 1: obey flag (default)"
                  ,0);
  _DAT_146b153c0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143eba940);
  return;
}



// FUNCTION 14035c0b0 FUN_14035c0b0 body=115 status=ok
// SIG undefined FUN_14035c0b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035c0b0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b15508 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DeferSkeletalClothDynamicDataUpdateUntilGDME",1,
                  L"If > 0, then do skeletal mesh (with cloth) dynamic data updates will be deferred until GDME. Experimental option."
                  ,0);
  _DAT_146b15500 = &PTR_FUN_143f3ecf8;
  DAT_146b15510 = (**(code **)(*DAT_146b15508 + 0x38))(DAT_146b15508);
  atexit(FUN_143eba990);
  return;
}



// FUNCTION 14035c130 `dynamic_initializer_for_'CVarDeferSkeletalDynamicDataUpdateUntilGDME'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDeferSkeletalDynamicDataUpdateUntilGDME''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDeferSkeletalDynamicDataUpdateUntilGDME__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b154f0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DeferSkeletalDynamicDataUpdateUntilGDME",0,
                  L"If > 0, then do skeletal mesh dynamic data updates will be deferred until GDME. Experimental option."
                  ,0);
  _DAT_146b154e8 = &PTR_FUN_143f3ecf8;
  DAT_146b154f8 = (**(code **)(*DAT_146b154f0 + 0x38))(DAT_146b154f0);
  atexit(FUN_143eba9e0);
  return;
}



// FUNCTION 14035c1a0 `dynamic_initializer_for_'CVarEnableRagdollPhysics'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarEnableRagdollPhysics''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarEnableRagdollPhysics__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b15380 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"p.RagdollPhysics",1,
                  L"If 1, ragdoll physics will be used. Otherwise just root body is simulated",0);
  _DAT_146b15378 = &PTR_FUN_143f3ecf8;
  DAT_146b15388 = (**(code **)(*DAT_146b15380 + 0x38))(DAT_146b15380);
  atexit(FUN_143ebaa30);
  return;
}



// FUNCTION 14035c220 `dynamic_initializer_for_'CVarMorphTargetWeightThreshold'' body=162 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMorphTargetWeightThreshold''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMorphTargetWeightThreshold__(void)

{
  undefined2 *puVar1;
  undefined2 *local_18;
  int local_10;
  
  FString::PrintfImpl(&local_18,L"Set MorphTarget Weight Threshold (Default : %f).\n",
                      0x3e45798ee0000000);
  puVar1 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar1 = local_18;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b154e0 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.MorphTarget.WeightThreshold",&DAT_146534df4,puVar1,0);
  _DAT_146b154d8 = &PTR_FUN_143f3ecf0;
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  atexit(FUN_143ebaa80);
  return;
}



// FUNCTION 14035c2d0 `dynamic_initializer_for_'CVarMotionBlurDebug'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMotionBlurDebug''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMotionBlurDebug__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b154b8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.MotionBlurDebug",0,
                  L"Defines if we log debugging output for motion blur rendering.\n 0: off (default)\n 1: on"
                  ,0x21);
  _DAT_146b154b0 = &PTR_FUN_143f3ecf8;
  _DAT_146b154c0 = (**(code **)(*DAT_146b154b8 + 0x38))(DAT_146b154b8);
  atexit(FUN_143ebaad0);
  return;
}



// FUNCTION 14035c340 `dynamic_initializer_for_'CVarPoolGpuSkins'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPoolGpuSkins''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPoolGpuSkins__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b15808 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.GpuSkin.Pool",&DAT_146534df8,
                  L"Should we pool gpu skins.\n 0: Don\'t pool anything\n 1: Pool gpu skins bro (default)\n"
                  ,0);
  _DAT_146b15800 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebab20);
  return;
}



// FUNCTION 14035c3b0 `dynamic_initializer_for_'CVarStripSkeletalMeshLodsBelowMinLod'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStripSkeletalMeshLodsBelowMinLod''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStripSkeletalMeshLodsBelowMinLod__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b15498 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.SkeletalMesh.StripMinLodDataDuringCooking",&DAT_146b15370,
                  L"If set will strip skeletal mesh LODs under the minimum renderable LOD for the target platform during cooking."
                  ,0);
  _DAT_146b15490 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebab70);
  return;
}



// FUNCTION 14035c420 `dynamic_initializer_for_'CVarUseGPUMorphTargets'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUseGPUMorphTargets''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarUseGPUMorphTargets__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b154d0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.MorphTarget.Mode",&DAT_146534df0,
                  L"Use GPU for computing morph targets.\n 0: Use original CPU method (loop per morph then by vertex)\n 1: Enable GPU method (default)\n"
                  ,0);
  _DAT_146b154c8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebabc0);
  return;
}



// FUNCTION 14035c4f0 FUN_14035c4f0 body=51 status=ok
// SIG undefined FUN_14035c4f0(void)

void FUN_14035c4f0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146b15528);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146b15528,4000);
  atexit((_func_5014 *)&LAB_143ebac30);
  return;
}



// FUNCTION 14035c5c0 `dynamic_initializer_for_'_GCsvStat_MorphTargets'' body=314 status=ok
// SIG undefined `dynamic_initializer_for_'_GCsvStat_MorphTargets''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for___GCsvStat_MorphTargets__(void)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  bool bVar6;
  undefined2 *local_28;
  undefined8 local_20;
  undefined2 *local_18;
  undefined8 local_10;
  
  uVar1 = DAT_146b094c8;
  local_10 = 0xc;
  local_18 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"__CSVSTAT__",0x18);
  iVar5 = (int)local_10;
  iVar3 = local_10._4_4_;
  bVar6 = (int)local_10 != 0;
  local_28 = local_18;
  local_18 = (undefined2 *)0x0;
  local_20._0_4_ = (int)local_10;
  local_20._4_4_ = local_10._4_4_;
  local_10 = 0;
  if (iVar3 < (int)((0xd - (uint)bVar6) + iVar5)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    iVar5 = (int)local_20;
  }
  iVar3 = (0xd - (uint)(iVar5 != 0)) + iVar5;
  local_20 = CONCAT44(local_20._4_4_,iVar3);
  if (local_20._4_4_ < iVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar5);
  }
  puVar2 = local_28;
  builtin_wcsncpy(local_28 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)),L"MorphTargets",0xd);
  puVar4 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar4 = local_28;
  }
  local_28 = (undefined2 *)0x0;
  local_20 = 0;
  FName::FName(&DAT_146b154a0,puVar4,1);
  if (puVar2 != (undefined2 *)0x0) {
    FMemory::Free(puVar2);
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  _DAT_146b154a8 = uVar1;
  return;
}



// FUNCTION 14035c710 StaticStruct'' body=288 status=ok
// SIG undefined StaticStruct''(void)

void `dynamic_initializer_for_'FSpeedTreeUniformParameters::StaticStruct__(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res8 [32];
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
  
  FSpeedTreeUniformParameters::zzGetMembersBefore(&local_48,local_res8[0]);
  iVar3 = local_40;
  lVar5 = (longlong)local_40;
  local_38 = L"PrevWindAnimation";
  puStack_30 = &DAT_143f3eda8;
  uStack_10 = 0;
  local_40 = local_40 + 1;
  local_28 = 0x250;
  uStack_24 = 4;
  uStack_1c = 1;
  local_18 = 4;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  puVar1 = (undefined8 *)(local_48 + lVar5 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = puStack_30;
  puVar2 = (undefined4 *)(local_48 + 0x10 + lVar5 * 0x30);
  *puVar2 = local_28;
  puVar2[1] = (undefined4)uStack_24;
  puVar2[2] = uStack_24._4_4_;
  puVar2[3] = uStack_1c;
  puVar2 = (undefined4 *)(local_48 + 0x20 + lVar5 * 0x30);
  *puVar2 = (undefined4)local_18;
  puVar2[1] = local_18._4_4_;
  puVar2[2] = (undefined4)uStack_10;
  puVar2[3] = uStack_10._4_4_;
  uVar4 = FName::FName(local_res8,L"FSpeedTreeUniformParameters",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_146b15eb0,uVar4,L"FSpeedTreeUniformParameters",L"SpeedTreeData",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x260,&local_48,1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143ebac70);
  return;
}



// FUNCTION 14035c8a0 FUN_14035c8a0 body=115 status=ok
// SIG undefined FUN_14035c8a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035c8a0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16158 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.CollisionOverlayDrawDistance",25000,
                  L"0: No override>= 0: MaxDrawDistance for collision overlay",0);
  _DAT_146b16150 = &PTR_FUN_143f3ecf8;
  _DAT_146b16160 = (**(code **)(*DAT_146b16158 + 0x38))(DAT_146b16158);
  atexit(FUN_143ebacd0);
  return;
}



// FUNCTION 14035c920 `dynamic_initializer_for_'CVarForceStripMeshAdjacencyDataDuringCooking'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarForceStripMeshAdjacencyDataDuringCooking''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarForceStripMeshAdjacencyDataDuringCooking__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16038 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.ForceStripAdjacencyDataDuringCooking",&DAT_146b16004,
                  L"If set, adjacency data will be stripped for all static and skeletal meshes during cooking (acting like the target platform did not support tessellation)."
                  ,0);
  _DAT_146b16030 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebad20);
  return;
}



// FUNCTION 14035c990 FUN_14035c990 body=112 status=ok
// SIG undefined FUN_14035c990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035c990(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16098 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Lightmass.ForceStaticMeshLODSharing",0,&DAT_1451b9d34,0);
  _DAT_146b16090 = &PTR_FUN_143f3ecf8;
  _DAT_146b160a0 = (**(code **)(*DAT_146b16098 + 0x38))(DAT_146b16098);
  atexit(FUN_143ebad70);
  return;
}



// FUNCTION 14035ca00 FUN_14035ca00 body=100 status=ok
// SIG undefined FUN_14035ca00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035ca00(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16088 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.StripDepthOnlyBuffers",&DAT_146b1600c,
                  L"How to discard Depth only Index buffers. 1: only if they\'re equal. 2: always.",
                  4);
  _DAT_146b16080 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebadc0);
  return;
}



// FUNCTION 14035ca70 `dynamic_initializer_for_'CVarStripMinLodDataDuringCooking'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStripMinLodDataDuringCooking''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStripMinLodDataDuringCooking__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16020 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.StaticMesh.StripMinLodDataDuringCooking",0,
                  L"If non-zero, data for Static Mesh LOD levels below MinLOD will be discarded at cook time"
                  ,0);
  _DAT_146b16018 = &PTR_FUN_143f3ecf8;
  _DAT_146b16028 = (**(code **)(*DAT_146b16020 + 0x38))(DAT_146b16020);
  atexit(FUN_143ebae10);
  return;
}



// FUNCTION 14035cae0 FUN_14035cae0 body=100 status=ok
// SIG undefined FUN_14035cae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035cae0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16078 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.StripReversedBuffers",&DAT_146b16008,
                  L"How to discard Reversed Index buffers",4);
  _DAT_146b16070 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebae60);
  return;
}



// FUNCTION 14035cb50 `dynamic_initializer_for_'CVarSupportDepthOnlyIndexBuffers'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSupportDepthOnlyIndexBuffers''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSupportDepthOnlyIndexBuffers__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16048 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.SupportDepthOnlyIndexBuffers",1,
                  L"Enables depth-only index buffers. Saves a little time at the expense of doubling the size of index buffers."
                  ,0x24);
  _DAT_146b16040 = &PTR_FUN_143f3ecf8;
  DAT_146b16050 = (**(code **)(*DAT_146b16048 + 0x38))(DAT_146b16048);
  atexit(FUN_143ebaeb0);
  return;
}



// FUNCTION 14035cbd0 `dynamic_initializer_for_'CVarSupportReversedIndexBuffers'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSupportReversedIndexBuffers''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSupportReversedIndexBuffers__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16060 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.SupportReversedIndexBuffers",1,
                  L"Enables reversed index buffers. Saves a little time at the expense of doubling the size of index buffers."
                  ,0x24);
  _DAT_146b16058 = &PTR_FUN_143f3ecf8;
  DAT_146b16068 = (**(code **)(*DAT_146b16060 + 0x38))(DAT_146b16060);
  atexit(FUN_143ebaf00);
  return;
}



// FUNCTION 14035ccc0 FUN_14035ccc0 body=269 status=ok
// SIG undefined FUN_14035ccc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035ccc0(void)

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
    plVar1[1] = (longlong)FUN_142827270;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b161a0 =
       (**(code **)(*DAT_1468b1f88 + 0x88))
                 (DAT_1468b1f88,L"ToggleForceDefaultMaterial",
                  L"Render all meshes with the default material.",&local_18,0);
  _DAT_146b16198 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14035cdbc;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14035cdbc:
  atexit(FUN_143ebafa0);
  return;
}



// FUNCTION 14035cdd0 FUN_14035cdd0 body=269 status=ok
// SIG undefined FUN_14035cdd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035cdd0(void)

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
    plVar1[1] = (longlong)FUN_1428272f0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16190 =
       (**(code **)(*DAT_1468b1f88 + 0x88))
                 (DAT_1468b1f88,L"ToggleReversedIndexBuffers",
                  L"Render static meshes with negative transform determinants using a reversed index buffer."
                  ,&local_18,0);
  _DAT_146b16188 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14035cecc;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14035cecc:
  atexit(FUN_143ebaff0);
  return;
}



// FUNCTION 14035cee0 FUN_14035cee0 body=269 status=ok
// SIG undefined FUN_14035cee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035cee0(void)

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
    plVar1[1] = (longlong)FUN_142827330;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16170 =
       (**(code **)(*DAT_1468b1f88 + 0x88))
                 (DAT_1468b1f88,L"ToggleShadowIndexBuffers",
                  L"Render static meshes with an optimized shadow index buffer that minimizes unique vertices."
                  ,&local_18,0);
  _DAT_146b16168 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14035cfdc;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14035cfdc:
  atexit(FUN_143ebb040);
  return;
}



// FUNCTION 14035cff0 FUN_14035cff0 body=266 status=ok
// SIG undefined FUN_14035cff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035cff0(void)

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
    plVar1[1] = (longlong)FUN_1428272b0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16180 =
       (**(code **)(*DAT_1468b1f88 + 0x78))
                 (DAT_1468b1f88,L"r.TogglePreCulledIndexBuffers",
                  L"Toggles use of preculled index buffers from the command \'PreCullIndexBuffers\'"
                  ,&local_18,0);
  _DAT_146b16178 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14035d0e9;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14035d0e9:
  atexit(FUN_143ebb090);
  return;
}



// FUNCTION 14035d170 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FStereoLayerPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b164e0,0,L"FStereoLayerPS",L"/Engine/Private/StereoLayerShader.usf",L"MainPS",3
             ,1,FUN_141a145b0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b164e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b16610 = FHdrCustomResolveFMask2xPS::ConstructCompiledInstance;
  _DAT_146b16618 = BuildSettings::IsPromotedBuild;
  _DAT_146b16620 = BuildSettings::IsPromotedBuild;
  _DAT_146b16628 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143ebb120);
  return;
}



// FUNCTION 14035d220 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FStereoLayerVS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146b16390,0,L"FStereoLayerVS",L"/Engine/Private/StereoLayerShader.usf",L"MainVS",0
             ,1,FUN_141dfde30,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146b16390 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146b164c0 = FStereoLayerVS::ConstructCompiledInstance;
  _DAT_146b164c8 = BuildSettings::IsPromotedBuild;
  _DAT_146b164d0 = BuildSettings::IsPromotedBuild;
  _DAT_146b164d8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143ebb130);
  return;
}



// FUNCTION 14035d2e0 `dynamic_initializer_for_'CVarFramesForFullUpdate'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFramesForFullUpdate''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFramesForFullUpdate__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16700 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.FramesForFullUpdate",5,
                  L"Texture streaming is time sliced per frame. This values gives the number of frames to visit all textures."
                  ,0);
  _DAT_146b166f8 = &PTR_FUN_143f3ecf8;
  DAT_146b16708 = (**(code **)(*DAT_146b16700 + 0x38))(DAT_146b16700);
  atexit(FUN_143ebb190);
  return;
}



// FUNCTION 14035d360 FUN_14035d360 body=112 status=ok
// SIG undefined FUN_14035d360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035d360(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16778 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.MipMapLODBias.Character",0,
                  L"Apply additional mip map bias for all character 2D textures",0);
  _DAT_146b16770 = &PTR_FUN_143f3ecf8;
  DAT_146b16780 = (**(code **)(*DAT_146b16778 + 0x38))(DAT_146b16778);
  atexit(FUN_143ebb1e0);
  return;
}



// FUNCTION 14035d3d0 FUN_14035d3d0 body=112 status=ok
// SIG undefined FUN_14035d3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035d3d0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16760 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.MipMapLODBias.Environment",0,
                  L"Apply additional mip map bias for all environment 2D textures",0);
  _DAT_146b16758 = &PTR_FUN_143f3ecf8;
  DAT_146b16768 = (**(code **)(*DAT_146b16760 + 0x38))(DAT_146b16760);
  atexit(FUN_143ebb230);
  return;
}



// FUNCTION 14035d440 `dynamic_initializer_for_'CVarStreamableDelegateDelayFrames'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStreamableDelegateDelayFrames''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStreamableDelegateDelayFrames__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16638 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"s.StreamableDelegateDelayFrames",&DAT_146534ee8,
                  L"Number of frames to delay StreamableManager delegates ",0);
  _DAT_146b16630 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ebb280);
  return;
}



// FUNCTION 14035d4b0 FUN_14035d4b0 body=115 status=ok
// SIG undefined FUN_14035d4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035d4b0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b16688 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Streaming.AdaptiveBoostEnabled",1,
                  L"nonzero = enable adaptive boost computations",0x40);
  _DAT_146b16680 = &PTR_FUN_143f3ecf8;
  DAT_146b16690 = (**(code **)(*DAT_146b16688 + 0x38))(DAT_146b16688);
  atexit(FUN_143ebb2d0);
  return;
}


