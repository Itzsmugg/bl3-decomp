// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141bb1640 FUN_141bb1640 body=184 status=ok
// SIG undefined FUN_141bb1640(void)

void FUN_141bb1640(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141bbc830(param_3,L"UNDEFINED_ACCURACY",0x3c75c28f);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_NUM_TEX_COORD",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"INITIAL_GPU_SCALE",0x100);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"TILE_RESOLUTION",0x20);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_NUM_TEXTURE_REGISTER",0x20);
  FUN_141ac7cb0(param_1,param_2,param_3);
  return;
}



// FUNCTION 141bb1720 FUN_141bb1720 body=349 status=ok
// SIG undefined FUN_141bb1720(void)

void FUN_141bb1720(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  DWORD DVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  FUN_1404a3a40(param_3,L"DIRECTIONAL_LIGHT_CSM",&DAT_143f591f0);
  uVar8 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fe6a8) && (_Init_thread_header(&DAT_1469fe6a8), DAT_1469fe6a8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.CSM.MaxMobileCascades");
    uVar6 = uVar8;
    if (plVar5 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe6a0 = uVar6;
    _Init_thread_footer(&DAT_1469fe6a8);
  }
  uVar6 = DAT_1469fe6a0;
  if (DAT_1469fe6a0 == 0) {
    uVar8 = 4;
    goto LAB_141bb17d9;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    uVar4 = 4;
    if (DVar3 == DAT_1468c21c0) goto LAB_141bb17c1;
  }
  else {
LAB_141bb17c1:
    uVar4 = uVar8;
  }
  uVar1 = *(uint *)(uVar4 + uVar6);
  if (-1 < (int)uVar1) {
    uVar7 = 4;
    if ((int)uVar1 < 4) {
      uVar7 = uVar1;
    }
    uVar8 = (ulonglong)uVar7;
  }
LAB_141bb17d9:
  FUN_141a172f0(param_3,L"MAX_MOBILE_SHADOWCASCADES",uVar8);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  return;
}



// FUNCTION 141bb1880 FUN_141bb1880 body=407 status=ok
// SIG undefined FUN_141bb1880(void)

void FUN_141bb1880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  DWORD DVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  FUN_1404a3a40(param_3,L"DIRECTIONAL_LIGHT_CSM",&DAT_143f591f0);
  uVar8 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fe6a8) && (_Init_thread_header(&DAT_1469fe6a8), DAT_1469fe6a8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.CSM.MaxMobileCascades");
    uVar6 = uVar8;
    if (plVar5 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe6a0 = uVar6;
    _Init_thread_footer(&DAT_1469fe6a8);
  }
  uVar6 = DAT_1469fe6a0;
  if (DAT_1469fe6a0 == 0) {
    uVar8 = 4;
    goto LAB_141bb192f;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    uVar4 = 4;
    if (DVar3 == DAT_1468c21c0) goto LAB_141bb1917;
  }
  else {
LAB_141bb1917:
    uVar4 = uVar8;
  }
  uVar1 = *(uint *)(uVar4 + uVar6);
  if (-1 < (int)uVar1) {
    uVar7 = 4;
    if ((int)uVar1 < 4) {
      uVar7 = uVar1;
    }
    uVar8 = (ulonglong)uVar7;
  }
LAB_141bb192f:
  FUN_141a172f0(param_3,L"MAX_MOBILE_SHADOWCASCADES",uVar8);
  FUN_141a172f0(param_3,L"STATICLIGHTING_TEXTUREMASK",1);
  FUN_141a172f0(param_3,L"STATICLIGHTING_SIGNEDDISTANCEFIELD",1);
  FUN_1404a3a40(param_3,PTR_u_LQ_TEXTURE_LIGHTMAP_1464c1f50,&DAT_143f591f0);
  FUN_141a172f0(param_3,L"NUM_LIGHTMAP_COEFFICIENTS",DAT_1464c1f60);
  return;
}



// FUNCTION 141bb1a20 FUN_141bb1a20 body=349 status=ok
// SIG undefined FUN_141bb1a20(void)

void FUN_141bb1a20(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  DWORD DVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  uVar8 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fe6a8) && (_Init_thread_header(&DAT_1469fe6a8), DAT_1469fe6a8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.CSM.MaxMobileCascades");
    uVar6 = uVar8;
    if (plVar5 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe6a0 = uVar6;
    _Init_thread_footer(&DAT_1469fe6a8);
  }
  uVar6 = DAT_1469fe6a0;
  if (DAT_1469fe6a0 == 0) {
    uVar8 = 4;
    goto LAB_141bb1ad9;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    uVar4 = 4;
    if (DVar3 == DAT_1468c21c0) goto LAB_141bb1ac1;
  }
  else {
LAB_141bb1ac1:
    uVar4 = uVar8;
  }
  uVar1 = *(uint *)(uVar4 + uVar6);
  if (-1 < (int)uVar1) {
    uVar7 = 4;
    if ((int)uVar1 < 4) {
      uVar7 = uVar1;
    }
    uVar8 = (ulonglong)uVar7;
  }
LAB_141bb1ad9:
  FUN_141a172f0(param_3,L"MAX_MOBILE_SHADOWCASCADES",uVar8);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  return;
}



// FUNCTION 141bb1b80 FUN_141bb1b80 body=349 status=ok
// SIG undefined FUN_141bb1b80(void)

void FUN_141bb1b80(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  DWORD DVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  FUN_1404a3a40(param_3,L"DIRECTIONAL_LIGHT_CSM",&DAT_143f591f0);
  uVar8 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fe6a8) && (_Init_thread_header(&DAT_1469fe6a8), DAT_1469fe6a8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.CSM.MaxMobileCascades");
    uVar6 = uVar8;
    if (plVar5 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe6a0 = uVar6;
    _Init_thread_footer(&DAT_1469fe6a8);
  }
  uVar6 = DAT_1469fe6a0;
  if (DAT_1469fe6a0 == 0) {
    uVar8 = 4;
    goto LAB_141bb1c39;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    uVar4 = 4;
    if (DVar3 == DAT_1468c21c0) goto LAB_141bb1c21;
  }
  else {
LAB_141bb1c21:
    uVar4 = uVar8;
  }
  uVar1 = *(uint *)(uVar4 + uVar6);
  if (-1 < (int)uVar1) {
    uVar7 = 4;
    if ((int)uVar1 < 4) {
      uVar7 = uVar1;
    }
    uVar8 = (ulonglong)uVar7;
  }
LAB_141bb1c39:
  FUN_141a172f0(param_3,L"MAX_MOBILE_SHADOWCASCADES",uVar8);
  FUN_141bb1a20(param_1,param_2,param_3);
  return;
}



// FUNCTION 141bb1ce0 FUN_141bb1ce0 body=343 status=ok
// SIG undefined FUN_141bb1ce0(void)

void FUN_141bb1ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  DWORD DVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_1404a3a40(param_3,L"DIRECTIONAL_LIGHT_CSM",&DAT_143f591f0);
  uVar8 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fe6a8) && (_Init_thread_header(&DAT_1469fe6a8), DAT_1469fe6a8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.CSM.MaxMobileCascades");
    uVar6 = uVar8;
    if (plVar5 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe6a0 = uVar6;
    _Init_thread_footer(&DAT_1469fe6a8);
  }
  uVar6 = DAT_1469fe6a0;
  if (DAT_1469fe6a0 == 0) {
    uVar8 = 4;
    goto LAB_141bb1da5;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    uVar4 = 4;
    if (DVar3 == DAT_1468c21c0) goto LAB_141bb1d8d;
  }
  else {
LAB_141bb1d8d:
    uVar4 = uVar8;
  }
  uVar1 = *(uint *)(uVar4 + uVar6);
  if (-1 < (int)uVar1) {
    uVar7 = 4;
    if ((int)uVar1 < 4) {
      uVar7 = uVar1;
    }
    uVar8 = (ulonglong)uVar7;
  }
LAB_141bb1da5:
  FUN_141a172f0(param_3,L"MAX_MOBILE_SHADOWCASCADES",uVar8);
  return;
}



// FUNCTION 141bb1e40 FUN_141bb1e40 body=73 status=ok
// SIG undefined FUN_141bb1e40(void)

void FUN_141bb1e40(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1404a3a40(param_3,L"DIRECTIONAL_LIGHT_CSM",&DAT_143f591f0);
  FUN_141bb1e90(param_1,param_2,param_3);
  return;
}



// FUNCTION 141bb1e90 FUN_141bb1e90 body=365 status=ok
// SIG undefined FUN_141bb1e90(void)

void FUN_141bb1e90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  DWORD DVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  uVar8 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fe6a8) && (_Init_thread_header(&DAT_1469fe6a8), DAT_1469fe6a8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.CSM.MaxMobileCascades");
    uVar6 = uVar8;
    if (plVar5 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe6a0 = uVar6;
    _Init_thread_footer(&DAT_1469fe6a8);
  }
  uVar6 = DAT_1469fe6a0;
  if (DAT_1469fe6a0 == 0) {
    uVar8 = 4;
    goto LAB_141bb1f3f;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    uVar4 = 4;
    if (DVar3 == DAT_1468c21c0) goto LAB_141bb1f27;
  }
  else {
LAB_141bb1f27:
    uVar4 = uVar8;
  }
  uVar1 = *(uint *)(uVar4 + uVar6);
  if (-1 < (int)uVar1) {
    uVar7 = 4;
    if ((int)uVar1 < 4) {
      uVar7 = uVar1;
    }
    uVar8 = (ulonglong)uVar7;
  }
LAB_141bb1f3f:
  FUN_141a172f0(param_3,L"MAX_MOBILE_SHADOWCASCADES",uVar8);
  FUN_1404a3a40(param_3,PTR_u_LQ_TEXTURE_LIGHTMAP_1464c1f50,&DAT_143f591f0);
  FUN_141a172f0(param_3,L"NUM_LIGHTMAP_COEFFICIENTS",DAT_1464c1f60);
  return;
}



// FUNCTION 141bb2000 FUN_141bb2000 body=216 status=ok
// SIG undefined FUN_141bb2000(void)

void FUN_141bb2000(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res18 [16];
  longlong local_38 [4];
  longlong *local_18;
  longlong *local_10;
  
  local_38[3] = 2;
  local_38[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],&DAT_144deba34,4);
  local_38[0] = 0;
  local_38[1] = 0x1f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"CACHED_POINT_INDIRECT_LIGHTING",0x3e);
  local_18 = local_38;
  local_10 = local_38 + 2;
  FUN_140497620(param_3 + 0x200,local_res18,&local_18,0);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  FUN_1404a3a40(param_3,L"TRANSLUCENT_SELF_SHADOWING",&DAT_143f591f0);
  return;
}



// FUNCTION 141bb20e0 FUN_141bb20e0 body=250 status=ok
// SIG undefined FUN_141bb20e0(void)

void FUN_141bb20e0(int *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  
  TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FInverseSquaredDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting>
  ::
  TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FInverseSquaredDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting>
            (&local_18,param_1[1]);
  FUN_141a172f0(param_2,L"LIGHT_SOURCE_SHAPE",local_18);
  lVar1 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(lVar1,L"USE_IES_PROFILE",local_14);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"INVERSE_SQUARED_FALLOFF",local_13);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"VISUALIZE_LIGHT_CULLING",local_12);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"USE_LIGHTING_CHANNELS",local_11);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"USE_TRANSMISSION",local_10);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"SUPPORTS_CONTACT_SHADOWS",local_f);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"IS_SIMPLE_LIGHT",local_e);
  if (*param_1 == 0x1f) {
    FUN_141a172f0(param_2,L"__XBOX_ENABLE_WAVE32",1);
  }
  return;
}



// FUNCTION 141bb21e0 FUN_141bb21e0 body=626 status=ok
// SIG undefined FUN_141bb21e0(void)

void FUN_141bb21e0(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4,
                  ulonglong *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  ulonglong local_res8;
  undefined8 local_res18;
  undefined4 *local_res20;
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar11;
  uint uVar12;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar13;
  ulonglong *puVar14;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_98 [56];
  longlong local_60;
  longlong local_58;
  undefined8 local_50 [3];
  
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  uVar9 = 0;
  uVar6 = uVar9;
  if (param_3[3] != 0) {
    uVar6 = *(ulonglong *)(*(longlong *)(param_3[3] + 0x140) + 0xd8);
  }
  uVar12 = *(uint *)(*param_3 + 0x8c);
  local_res8 = CONCAT44(uVar12 >> 0xc,
                        ((uVar12 >> 0x13 & 0x80 | uVar12 & 0x100) >> 2 | uVar12 & 0x10) >> 4 |
                        uVar12 & 8) & 0x3fffffffff;
  local_res20 = param_4;
  if ((((int)param_3[5] == 0) || (uVar6 == 0)) ||
     (cVar4 = FUN_141ae2600(uVar6,*(undefined4 *)((longlong)param_3 + 0x24)), cVar4 == '\0')) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  lVar7 = *param_3;
  uVar2 = *(undefined4 *)(*param_1 + 0x1a38);
  uVar5 = FUN_142753a10();
  puVar14 = &local_res8;
  FUN_141b89db0(local_98,*(undefined8 *)(lVar7 + 0xa0),*(undefined8 *)(lVar7 + 0xa8),param_3[2],
                CONCAT44(uVar11,*local_res20),(int)param_3[4],
                CONCAT44(uVar13,*(undefined4 *)((longlong)param_3 + 0x24)),uVar10,puVar14,0,uVar2,
                uVar5);
  plVar1 = param_1 + 1;
  FUN_141bc0840(local_98,plVar1,*param_1);
  lVar7 = *(longlong *)(local_58 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar3 = *(undefined8 *)(lVar7 + 0x40);
  local_d8 = 0;
  local_res18 = 0;
  lVar7 = *(longlong *)(local_60 + 0x48);
  local_res8 = 0;
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  local_d0 = local_50[0];
  local_c8 = *(undefined8 *)(lVar7 + 0x38);
  local_c0 = 0;
  uStack_b8 = 0;
  local_a8 = 0;
  local_b0 = uVar3;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_d8);
  FUN_141a9adc0(param_2,local_98,plVar1,&local_d0);
  lVar7 = *param_1;
  FUN_141bbe140(local_60,param_2,lVar7,plVar1);
  FUN_141bbda70(local_58,param_2,lVar7,plVar1);
  lVar7 = *param_3;
  if (0 < *(int *)(lVar7 + 0x80)) {
    do {
      local_res8 = *param_5;
      puVar14 = (ulonglong *)((ulonglong)puVar14 & 0xffffffffffffff00);
      uVar8 = (uint)uVar9;
      uVar12 = uVar8;
      FUN_141bbd400(local_98,param_2,*param_1,param_3[3],lVar7,uVar8,plVar1,&local_res8,puVar14);
      FUN_141b315b0(local_98,param_2,*param_1,*param_3,uVar9,uVar12 & 0xffffff00);
      lVar7 = *param_3;
      uVar9 = (ulonglong)(uVar8 + 1);
    } while ((int)(uVar8 + 1) < *(int *)(lVar7 + 0x80));
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_50);
  return;
}



// FUNCTION 141bb2460 FUN_141bb2460 body=758 status=ok
// SIG undefined FUN_141bb2460(void)

void FUN_141bb2460(longlong *param_1,undefined8 param_2,longlong param_3,longlong **param_4,
                  undefined8 param_5)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong *local_res8;
  undefined1 local_res18 [16];
  
  lVar7 = 0;
  local_res8 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_1[1] + 0xa8) + 0x40))
            (*(longlong **)(param_1[1] + 0xa8),*(undefined4 *)(param_3 + 0x30),local_res18,
             &local_res8);
  cVar3 = (**(code **)(*local_res8 + 0x1d0))();
  lVar8 = lVar7;
  if ((cVar3 != '\0') && (lVar8 = 0, *(int *)(DAT_146a29180 + 4) != 0)) {
    lVar8 = 1;
  }
  if (*param_1 == 0) {
    return;
  }
  switch(*(uint *)param_4) {
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x12:
    lVar4 = DAT_146a485b0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a485b8) &&
       (_Init_thread_header(&DAT_146a485b8), lVar4 = DAT_146a485b0, DAT_146a485b8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))
                         (DAT_1468b1f88,L"r.Mobile.EnableStaticAndCSMShadowReceivers");
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_146a485b0 = lVar7;
      _Init_thread_footer(&DAT_146a485b8);
      lVar4 = DAT_146a485b0;
    }
    break;
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    lVar4 = DAT_146a485c0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a485c8) &&
       (_Init_thread_header(&DAT_146a485c8), lVar4 = DAT_146a485c0, DAT_146a485c8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))
                         (DAT_1468b1f88,L"r.Mobile.EnableMovableLightCSMShaderCulling");
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_146a485c0 = lVar7;
      _Init_thread_footer(&DAT_146a485c8);
      lVar4 = DAT_146a485c0;
    }
    break;
  default:
    goto switchD_141bb24f1_default;
  }
  if (*(int *)(lVar4 + 4) != 0) {
    uVar1 = *(uint *)param_4;
    uVar9 = uVar1;
    switch(uVar1) {
    case 0xd:
      uVar9 = 0xe;
      break;
    case 0xe:
      uVar9 = 0xd;
      break;
    case 0xf:
      uVar9 = 0x12;
      break;
    case 0x10:
      uVar9 = 0x11;
      break;
    case 0x11:
      uVar9 = 0x10;
      break;
    case 0x12:
      uVar9 = 0xf;
      break;
    case 0x13:
      uVar9 = 0x14;
      break;
    case 0x14:
      uVar9 = 0x13;
      break;
    case 0x15:
      uVar9 = 0x16;
      break;
    case 0x16:
      uVar9 = 0x15;
    }
    if (uVar9 != uVar1) {
      if ((uVar1 < 0x17) && ((0x564000U >> (uVar1 & 0x1f) & 1) != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      uVar5 = FUN_141d0a280(*param_1,lVar8);
      if (bVar2) {
        FUN_141b80420(param_1,uVar5,param_3,param_4,param_5);
        local_res8 = (longlong *)CONCAT44(local_res8._4_4_,uVar9);
        uVar5 = FUN_141d0a2a0(*param_1,lVar8);
        param_4 = &local_res8;
      }
      else {
        local_res8 = (longlong *)CONCAT44(local_res8._4_4_,uVar9);
        FUN_141b80420(param_1,uVar5,param_3,&local_res8,param_5);
        uVar5 = FUN_141d0a2a0(*param_1,lVar8);
      }
      goto LAB_141bb2666;
    }
  }
switchD_141bb24f1_default:
  uVar5 = FUN_141d0a2a0(*param_1,lVar8);
LAB_141bb2666:
  FUN_141b80420(param_1,uVar5,param_3,param_4,param_5);
  return;
}



// FUNCTION 141bb27b0 FUN_141bb27b0 body=810 status=ok
// SIG undefined FUN_141bb27b0(void)

void FUN_141bb27b0(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 local_res20 [2];
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_48 [16];
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  lVar7 = *param_2;
  lVar5 = FSceneRenderTargets::Get(param_2[8]);
  uVar1 = *(undefined8 *)(*(longlong *)(lVar5 + 0x60) + 8);
  puVar6 = (undefined8 *)FSceneRenderTargets::GetSceneColorSurface(lVar5);
  FUN_141ad74f0(param_2[8],*puVar6,uVar1,0,CONCAT44(uVar9,0x11),0);
  local_48 = *(undefined1 (*) [16])(lVar7 + 0x1aa0);
  uVar9 = local_48._12_4_;
  *(int *)(param_2 + 9) = local_48._0_4_;
  *(int *)((longlong)param_2 + 0x4c) = local_48._4_4_;
  *(int *)(param_2 + 10) = local_48._8_4_;
  *(undefined4 *)((longlong)param_2 + 0x54) = uVar9;
  local_res18 = *(undefined4 *)((longlong)param_2 + 0x4c);
  lVar2 = param_2[8];
  lVar4 = param_2[10];
  local_res10 = CONCAT44(local_res10._4_4_,(int)param_2[9]);
  puVar8 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 5;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
    puVar8 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar6;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar8;
  *(undefined8 **)(lVar2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_143f59420;
  *(undefined4 *)(puVar8 + 2) = (undefined4)local_res10;
  *(undefined4 *)((longlong)puVar8 + 0x14) = local_res18;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(int *)((longlong)puVar8 + 0x1c) = (int)lVar4;
  *(undefined4 *)(puVar8 + 4) = uVar9;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
  local_res10 = 0;
  FUN_141b95fb0(param_2[8],lVar7,1,&local_res10);
  local_70 = 0x11;
  local_80 = 0;
  uStack_78 = 0;
  local_68 = *(longlong *)(lVar7 + 0x20);
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  local_60 = local_res10;
  local_50 = 0;
  local_4c = 0;
  local_58._4_4_ =
       (uint)(*(char *)(lVar7 + 0x1205) != '\0') | -(uint)(*(char *)(lVar7 + 0x11b4) != '\0') & 8;
  local_58._0_4_ = 0;
  uStack_78 = FUN_141abfb70();
  local_58 = (ulonglong)local_58._4_4_ << 0x20;
  local_res20[0] = 1;
  FUN_141bf0190(lVar7 + 0x1d70,param_2[8],lVar7,&local_80,local_res20);
  puVar6 = (undefined8 *)FSceneRenderTargets::GetSceneColorTexture(lVar5);
  uVar1 = *puVar6;
  puVar6 = (undefined8 *)FSceneRenderTargets::GetSceneColorSurface(lVar5);
  lVar7 = param_2[8];
  plVar3 = (longlong *)*puVar6;
  puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 10;
  if (*(undefined8 **)(lVar7 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x58);
    puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 10;
  }
  *(undefined8 **)(lVar7 + 0x30) = puVar6;
  *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
  **(undefined8 **)(lVar7 + 8) = puVar8;
  *(undefined8 **)(lVar7 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar8 + 2) = 0;
  *(undefined4 *)((longlong)puVar8 + 0x14) = 0xffffffff;
  *(undefined4 *)(puVar8 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = 0xffffffff;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 0xffffffff;
  *(undefined4 *)(puVar8 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)puVar8 + 0x2c) = 0xffffffff;
  *(undefined4 *)(puVar8 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)puVar8 + 0x34) = 0;
  *(undefined4 *)(puVar8 + 7) = 0;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
  puVar8[8] = plVar3;
  puVar8[9] = uVar1;
  lVar7 = (**(code **)(*plVar3 + 8))(plVar3);
  if (lVar7 == 0) {
    lVar7 = (**(code **)(*(longlong *)puVar8[8] + 0x18))();
    if (lVar7 == 0) {
      (**(code **)(*(longlong *)puVar8[8] + 0x20))();
    }
  }
  lVar7 = (**(code **)(*(longlong *)puVar8[9] + 8))();
  if (lVar7 == 0) {
    lVar7 = (**(code **)(*(longlong *)puVar8[9] + 0x18))();
    if (lVar7 == 0) {
      (**(code **)(*(longlong *)puVar8[9] + 0x20))();
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  return;
}



// FUNCTION 141bb2ae0 ProcessChildren body=702 status=ok
// SIG undefined ProcessChildren(void)

void TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::
     TConstElementBoxIterator<TMemStackAllocator<0>_>::ProcessChildren(float *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 in_EAX;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  fVar1 = param_1[0x15];
  fVar22 = param_1[0x14];
  lVar2 = *(longlong *)(param_1 + 8);
  fVar29 = param_1[4] + *param_1;
  fVar30 = param_1[5] + param_1[1];
  fVar31 = param_1[6] + param_1[2];
  fVar23 = *param_1 - param_1[4];
  fVar24 = param_1[1] - param_1[5];
  fVar25 = param_1[2] - param_1[6];
  fVar26 = (fVar1 + param_1[0xc]) - fVar22;
  fVar27 = (fVar1 + param_1[0xd]) - fVar22;
  fVar28 = (fVar1 + param_1[0xe]) - fVar22;
  fVar20 = (param_1[0xc] - fVar1) + fVar22;
  fVar21 = (param_1[0xd] - fVar1) + fVar22;
  fVar22 = (param_1[0xe] - fVar1) + fVar22;
  auVar4._4_4_ = -(uint)(fVar22 < fVar25);
  auVar4._0_4_ = -(uint)(fVar22 < fVar25);
  auVar4._8_4_ = -(uint)(fVar22 < fVar25);
  auVar4._12_4_ = -(uint)(fVar22 < fVar25);
  iVar10 = movmskps(in_EAX,auVar4);
  auVar5._4_4_ = -(uint)(fVar21 < fVar24);
  auVar5._0_4_ = -(uint)(fVar21 < fVar24);
  auVar5._8_4_ = -(uint)(fVar21 < fVar24);
  auVar5._12_4_ = -(uint)(fVar21 < fVar24);
  iVar11 = movmskps(iVar10,auVar5);
  auVar8._4_4_ = -(uint)(fVar20 < fVar23);
  auVar8._0_4_ = -(uint)(fVar20 < fVar23);
  auVar8._8_4_ = -(uint)(fVar20 < fVar23);
  auVar8._12_4_ = -(uint)(fVar20 < fVar23);
  iVar12 = movmskps(iVar11,auVar8);
  auVar6._4_4_ = -(uint)(fVar28 < fVar31);
  auVar6._0_4_ = -(uint)(fVar28 < fVar31);
  auVar6._8_4_ = -(uint)(fVar28 < fVar31);
  auVar6._12_4_ = -(uint)(fVar28 < fVar31);
  iVar13 = movmskps(iVar12,auVar6);
  auVar7._4_4_ = -(uint)(fVar27 < fVar30);
  auVar7._0_4_ = -(uint)(fVar27 < fVar30);
  auVar7._8_4_ = -(uint)(fVar27 < fVar30);
  auVar7._12_4_ = -(uint)(fVar27 < fVar30);
  iVar14 = movmskps(iVar13,auVar7);
  auVar9._4_4_ = -(uint)(fVar26 < fVar29);
  auVar9._0_4_ = -(uint)(fVar26 < fVar29);
  auVar9._8_4_ = -(uint)(fVar26 < fVar29);
  auVar9._12_4_ = -(uint)(fVar26 < fVar29);
  iVar15 = movmskps(iVar14,auVar9);
  uVar19 = 0;
  do {
    uVar16 = (~uVar19 & 7) << 3 | uVar19 & 7;
    if ((uVar16 & ((((((uint)(iVar10 == 0) * 2 | (uint)(iVar11 == 0)) * 2 | (uint)(iVar12 == 0)) * 2
                    | (uint)(iVar13 != 0)) * 2 | (uint)(iVar14 != 0)) * 2 | (uint)(iVar15 != 0))) ==
        uVar16) {
      lVar3 = *(longlong *)(lVar2 + 0x4018 + (ulonglong)(uVar19 & 7) * 8);
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x4058) & 0x7fffffff) != 0)) {
        fVar1 = param_1[0x1a];
        param_1[0x1a] = (float)((int)fVar1 + 1);
        if ((int)param_1[0x1b] < (int)fVar1 + 1) {
          TArray<TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNodeReference,TMemStackAllocator<0>_>
          ::ResizeGrow(param_1 + 0x18,fVar1);
        }
        puVar18 = (undefined8 *)0x0;
        puVar17 = (undefined8 *)((longlong)(int)fVar1 * 0x40 + *(longlong *)(param_1 + 0x18));
        if (puVar17 != (undefined8 *)0x0) {
          puVar17[2] = 0;
          *(undefined4 *)(puVar17 + 3) = 0;
          *(undefined8 *)((longlong)puVar17 + 0x1c) = 0x3f800000;
          *(undefined8 *)((longlong)puVar17 + 0x24) = 0;
          *(undefined4 *)((longlong)puVar17 + 0x2c) = 0x3f800000;
          *puVar17 = 0;
          puVar18 = puVar17;
        }
        *puVar18 = *(undefined8 *)
                    (*(longlong *)(param_1 + 8) + 0x4018 + (ulonglong)(uVar19 & 7) * 8);
        *(float *)(puVar18 + 2) =
             *(float *)(&DAT_146534f00 + (ulonglong)(uVar19 & 1) * 4) * param_1[0x15] + param_1[0xc]
        ;
        *(float *)((longlong)puVar18 + 0x14) =
             *(float *)(&DAT_146534f00 + (ulonglong)(uVar19 >> 1 & 1) * 4) * param_1[0x15] +
             param_1[0xd];
        fVar1 = *(float *)(&DAT_146534f00 + (ulonglong)(uVar19 >> 2 & 1) * 4);
        fVar22 = param_1[0x15];
        fVar20 = param_1[0xe];
        *(undefined4 *)((longlong)puVar18 + 0x1c) = 0;
        *(float *)(puVar18 + 3) = fVar1 * fVar22 + fVar20;
        *(float *)(puVar18 + 4) = param_1[0x14];
        *(float *)((longlong)puVar18 + 0x24) = param_1[0x14];
        *(float *)(puVar18 + 5) = param_1[0x14];
        *(undefined4 *)((longlong)puVar18 + 0x2c) = 0;
        fVar1 = param_1[0x14];
        *(float *)(puVar18 + 6) = fVar1 * 0.53125;
        *(float *)((longlong)puVar18 + 0x34) = param_1[0x14] - fVar1 * 0.53125;
      }
    }
    if ((uVar19 & 7) < 7) {
      uVar19 = uVar19 ^ (uVar19 + 1 ^ uVar19) & 7;
    }
    else {
      uVar19 = uVar19 | 8;
    }
  } while (uVar19 >> 3 == 0);
  return;
}



// FUNCTION 141bb2da0 Realloc body=203 status=ok
// SIG undefined Realloc(void)

void TBitArray<SceneRenderingBitArrayAllocator>::Realloc(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  
  iVar1 = (int)(param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU)) >> 5;
  lVar5 = (longlong)iVar1;
  pvVar4 = *(void **)((longlong)param_1 + 0x10);
  iVar2 = *(int *)((longlong)param_1 + 0x1c) + 0x1f;
  uVar3 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
  if (uVar3 < 5) {
    if (pvVar4 != (void *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,lVar5 << 2);
    }
  }
  else if (pvVar4 == (void *)0x0) {
    FUN_140848a70((longlong)param_1 + 0x10,0,uVar3,4);
    ::_guard_xfg_dispatch_icall_nop(*(void **)((longlong)param_1 + 0x10),param_1,lVar5 << 2);
  }
  else {
    FUN_140848a70((longlong)param_1 + 0x10,iVar1,uVar3,4);
  }
  if (uVar3 != 0) {
    pvVar4 = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      pvVar4 = param_1;
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)pvVar4 + lVar5 * 4),0,(longlong)(int)(uVar3 - iVar1) << 2);
  }
  return;
}



// FUNCTION 141bb2e70 FUN_141bb2e70 body=493 status=ok
// SIG undefined FUN_141bb2e70(void)

void FUN_141bb2e70(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong *plVar13;
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
  
  uVar7 = *(uint *)(param_1 + 9);
  plVar1 = param_1 + 9;
  if (uVar7 != 0) {
    plVar2 = param_1 + 7;
    TInlineAllocator<1,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::ResizeAllocation
              (plVar2,0);
    if (0 < (int)uVar7) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar7;
      do {
        uVar8 = (longlong)(int)*plVar1 - 1U & uVar10;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar2;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar5 + uVar8 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar7 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        lVar9 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar6 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar6;
        if (bVar4) goto LAB_141bb2f8f;
        uVar7 = puVar12[lVar9 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
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
      if (iVar3 < iStack_44) {
LAB_141bb2f8f:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        plVar13 = (longlong *)((longlong)iStack_1c * 0x10 + *param_1);
        uVar7 = *(uint *)(*plVar13 + 0x58) & (int)*plVar1 - 1U;
        *(uint *)((longlong)plVar13 + 0xc) = uVar7;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar2;
        }
        *(undefined4 *)(plVar13 + 1) =
             *(undefined4 *)
              ((longlong)plVar5 + ((longlong)(int)*plVar1 - 1U & (longlong)(int)uVar7) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar2;
        }
        *(int *)((longlong)plVar5 + ((longlong)(int)*plVar1 - 1U & (longlong)(int)uVar7) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141bb3060 FUN_141bb3060 body=545 status=ok
// SIG undefined FUN_141bb3060(void)

void FUN_141bb3060(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      local_68 = 0;
      iStack_50 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141bb318f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141bb318f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x140 + *param_1;
        uVar5 = FCrc::MemCrc_DEPRECATED(lVar6,0xc);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x134) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x130) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141bb3290 Rehash body=538 status=ok
// SIG undefined Rehash(void)

void TSet<TStaticMeshDrawList<FVelocityDrawingPolicy>::FDrawingPolicyLink,TStaticMeshDrawList<FVelocityDrawingPolicy>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141bb33bf;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141bb33bf:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0xe0 + *param_1;
        uVar5 = TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::
                FDrawingPolicyKeyFuncs::GetKeyHash(lVar6 + 0x20);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0xdc) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0xd8) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141bb34b0 FUN_141bb34b0 body=96 status=ok
// SIG undefined FUN_141bb34b0(void)

void FUN_141bb34b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    FUN_141ace450(lVar1 + 8);
    FUN_141ace450(lVar1 + 0x30);
    FUN_141ace450(lVar1 + 0x58);
    FUN_141ace450(lVar1 + 0x80);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x78,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x80,0);
  return;
}



// FUNCTION 141bb3510 Remove body=482 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<int,FCachedShadowMapData>,TDefaultMapHashableKeyFuncs<int,FCachedShadowMapData,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  iVar6 = *(int *)((longlong)plVar9 + ((longlong)param_2 & uVar8) * 4);
  if (iVar6 != -1) {
    lVar10 = *param_1;
    do {
      lVar4 = (longlong)iVar6 * 0x270;
      if (*(int *)(lVar4 + lVar10) == param_2) {
        lVar4 = (longlong)iVar6 * 0x270;
        uVar8 = (longlong)*(int *)(lVar4 + lVar10 + 0x264) & uVar8;
        piVar5 = (int *)((longlong)plVar9 + uVar8 * 4);
        iVar7 = *(int *)((longlong)plVar9 + uVar8 * 4);
        if (iVar7 != -1) goto LAB_141bb35c2;
        goto LAB_141bb35f0;
      }
      iVar6 = *(int *)(lVar4 + 0x260 + lVar10);
    } while (iVar6 != -1);
  }
  return 0;
  while( true ) {
    piVar5 = (int *)((longlong)iVar7 * 0x270 + 0x260 + lVar10);
    iVar7 = *piVar5;
    if (iVar7 == -1) break;
LAB_141bb35c2:
    if (iVar7 == iVar6) {
      *piVar5 = *(int *)(lVar4 + lVar10 + 0x260);
      break;
    }
  }
LAB_141bb35f0:
  lVar10 = *param_1 + lVar4;
  if (*(longlong **)(lVar10 + 0x250) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar10 + 0x250) + 0x30))();
  }
  plVar9 = *(longlong **)(lVar10 + 0x240);
  for (iVar7 = *(int *)(lVar10 + 0x248); iVar7 != 0; iVar7 = iVar7 + -1) {
    if ((longlong *)*plVar9 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar9 + 0x30))();
    }
    plVar9 = plVar9 + 1;
  }
  if (*(longlong *)(lVar10 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(lVar10 + 0x140) != 0) {
    FMemory::Free();
  }
  bVar2 = (byte)iVar6 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)((longlong)(int)param_1[6] * 0x270 + *param_1) = iVar6;
  }
  lVar10 = *param_1;
  uVar3 = 0xffffffff;
  *(undefined4 *)(lVar10 + lVar4) = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = (undefined4)param_1[6];
  }
  ((undefined4 *)(lVar10 + lVar4))[1] = uVar3;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = iVar6;
  plVar9 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
  return 1;
}



// FUNCTION 141bb3700 Remove body=238 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar5 = *param_1;
    lVar6 = (longlong)param_2 * 0x40;
    lVar3 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar6 + 0x3c + lVar5));
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    piVar4 = (int *)((longlong)plVar2 + lVar3 * 4);
    iVar1 = *(int *)((longlong)plVar2 + lVar3 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar4 = *(int *)(lVar6 + 0x38 + lVar5);
        break;
      }
      piVar4 = (int *)(lVar5 + 0x38 + (longlong)iVar1 * 0x40);
      iVar1 = *piVar4;
    }
  }
  lVar3 = 2;
  lVar5 = (longlong)param_2 * 0x40 + 0x18 + *param_1;
  do {
    plVar2 = (longlong *)(lVar5 + -8);
    lVar5 = lVar5 + -8;
    lVar3 = lVar3 + -1;
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x30))();
    }
  } while (lVar3 != 0);
  TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 141bb37f0 Remove body=899 status=ok
// SIG undefined Remove(void)

void TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElementHandle::
     Remove(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  iVar8 = *(int *)(param_1 + 0x1c);
  lVar13 = (longlong)iVar8;
  plVar12 = (longlong *)((longlong)*(int *)(param_1 + 0x18) * 0xe0 + *(longlong *)(lVar2 + 0x40));
  if (param_2 != '\0') {
    FUN_141d78430(*(undefined8 *)(lVar13 * 0x38 + 8 + plVar12[2]),param_1);
  }
  iVar16 = 0;
  *(undefined8 *)(lVar13 * 0x38 + 8 + plVar12[2]) = 0;
  iVar6 = *(int *)((longlong)plVar12 + 0x1c);
  iVar15 = *(int *)((longlong)plVar12 + 0xc);
  TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
  ::RemoveAtSwapImpl(plVar12 + 2,iVar8,1,1);
  iVar5 = (int)plVar12[1];
  iVar4 = (iVar5 - iVar8) + -1;
  if (0 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*plVar12 + lVar13 * 4),(void *)(*plVar12 + (longlong)(iVar5 - iVar4) * 4),
               (longlong)iVar4 << 2);
    iVar5 = (int)plVar12[1];
  }
  *(int *)(plVar12 + 1) = iVar5 + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar12);
  DAT_146a81050 =
       DAT_146a81050 -
       (ulonglong)
       (uint)((iVar6 * 0xe + iVar15) * 4 +
             (*(int *)((longlong)plVar12 + 0x1c) * 0xe + *(int *)((longlong)plVar12 + 0xc)) * -4);
  iVar6 = (int)plVar12[3];
  if (iVar8 < iVar6) {
    *(int *)(*(longlong *)(lVar13 * 0x38 + 0x30 + plVar12[2]) + 0x1c) = iVar8;
    iVar6 = (int)plVar12[3];
  }
  if (iVar6 == 0) {
    DAT_146a81050 =
         DAT_146a81050 +
         ((-0xd8 - (ulonglong)(uint)(*(int *)((longlong)plVar12 + 0x1c) * 0x38)) -
         (ulonglong)(uint)(*(int *)((longlong)plVar12 + 0xc) << 2));
    iVar6 = *(int *)(lVar2 + 0x38);
    iVar8 = iVar6 + -1;
    if (0 < iVar8) {
      lVar13 = *(longlong *)(lVar2 + 0x40);
      iVar15 = iVar16;
      do {
        iVar5 = (iVar8 + iVar15) / 2;
        lVar9 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar5 * 4) * 0xe0;
        uVar3 = *(ulonglong *)(lVar9 + 0x38 + lVar13);
        if (uVar3 < (ulonglong)plVar12[7]) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = 1;
          if (uVar3 <= (ulonglong)plVar12[7]) {
            iVar16 = *(int *)(lVar9 + 0x74 + lVar13);
            if (iVar16 < *(int *)((longlong)plVar12 + 0x74)) {
              uVar7 = 0xffffffff;
            }
            else if (iVar16 <= *(int *)((longlong)plVar12 + 0x74)) {
              iVar16 = *(int *)(lVar9 + 0x70 + lVar13);
              if (iVar16 < (int)plVar12[0xe]) {
                uVar7 = 0xffffffff;
              }
              else {
                uVar7 = (uint)((int)plVar12[0xe] < iVar16);
              }
            }
          }
        }
        iVar16 = iVar5 + 1;
        if (-1 < (int)uVar7) {
          iVar16 = iVar15;
          iVar8 = iVar5;
        }
        iVar15 = iVar16;
      } while (iVar16 < iVar8);
    }
    if (iVar16 < iVar6) {
      lVar13 = (longlong)iVar16;
      piVar11 = (int *)(*(longlong *)(lVar2 + 0x30) + lVar13 * 4);
      do {
        if (*piVar11 == *(int *)(param_1 + 0x18)) break;
        iVar16 = iVar16 + 1;
        lVar13 = lVar13 + 1;
        piVar11 = piVar11 + 1;
      } while (lVar13 < iVar6);
    }
    plVar1 = (longlong *)(lVar2 + 0x30);
    if (iVar16 < iVar6) {
      iVar8 = *(int *)(lVar2 + 0x38);
      iVar6 = (iVar8 - iVar16) + -1;
      if (iVar6 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + (longlong)iVar16 * 4),
                   (void *)(*plVar1 + (longlong)(iVar16 + 1) * 4),(longlong)iVar6 << 2);
        iVar8 = *(int *)(lVar2 + 0x38);
      }
      *(int *)(lVar2 + 0x38) = iVar8 + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar1);
    }
    else {
      piVar11 = (int *)*plVar1;
      if (piVar11 != piVar11 + *(int *)(lVar2 + 0x38)) {
        piVar10 = piVar11;
        do {
          if (*piVar10 == *(int *)((longlong)plVar12 + 0xc4)) {
            iVar8 = (int)((longlong)piVar10 - (longlong)piVar11 >> 2);
            if (iVar8 != -1) {
              ::_guard_xfg_dispatch_icall_nop
                        (piVar11 + iVar8,piVar11 + iVar8 + 1,
                         (longlong)((*(int *)(lVar2 + 0x38) - iVar8) + -1) << 2);
              *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + -1;
            }
            break;
          }
          piVar10 = piVar10 + 1;
        } while (piVar10 != piVar11 + *(int *)(lVar2 + 0x38));
      }
    }
    iVar8 = *(int *)((longlong)plVar12 + 0xc4);
    if (*(int *)(lVar2 + 0x48) != *(int *)(lVar2 + 0x74)) {
      lVar13 = *(longlong *)(lVar2 + 0x40);
      lVar14 = (longlong)iVar8 * 0xe0;
      lVar9 = *(longlong *)(lVar2 + 0x80);
      if (*(longlong *)(lVar2 + 0x80) == 0) {
        lVar9 = lVar2 + 0x78;
      }
      piVar11 = (int *)((longlong)
                        (int)(*(int *)(lVar2 + 0x88) - 1U & *(uint *)(lVar14 + 0xdc + lVar13)) * 4 +
                       lVar9);
      iVar6 = *piVar11;
      while (iVar6 != -1) {
        if (iVar6 == iVar8) {
          *piVar11 = *(int *)(lVar14 + 0xd8 + lVar13);
          break;
        }
        piVar11 = (int *)(lVar13 + 0xd8 + (longlong)iVar6 * 0xe0);
        iVar6 = *piVar11;
      }
    }
    plVar12 = (longlong *)((longlong)iVar8 * 0xe0 + *(longlong *)(lVar2 + 0x40));
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar12 + 0xd);
    TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
    ::
    ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
              (plVar12 + 2);
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(lVar2 + 0x40,iVar8,1);
  }
  return;
}



// FUNCTION 141bb3b80 RemoveAtUninitialized body=181 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 0xe0;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xe0 + *param_1) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 0xe0;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141bb3c40 FUN_141bb3c40 body=1714 status=ok
// SIG undefined FUN_141bb3c40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bb3c40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  float fVar19;
  undefined1 auStack_1d28 [32];
  longlong local_1d08;
  undefined8 local_1d00;
  int iStack_1cf8;
  undefined4 uStack_1cf4;
  undefined8 local_1ce8;
  longlong lStack_1ce0;
  undefined4 local_1cb8;
  undefined4 uStack_1cb4;
  undefined4 uStack_1cb0;
  undefined4 uStack_1cac;
  undefined1 local_1ca8 [768];
  undefined1 *local_19a8;
  undefined8 local_1998;
  longlong local_1988;
  longlong lStack_1980;
  undefined8 local_1978;
  undefined8 uStack_1970;
  undefined8 local_1968;
  undefined8 uStack_1960;
  undefined8 local_1958;
  undefined8 uStack_1950;
  undefined1 local_1948 [6336];
  undefined1 *local_88;
  undefined8 local_78;
  ulonglong local_68;
  undefined8 uStack_40;
  
  uStack_40 = 0x141bb3c5d;
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1d28;
  lVar8 = *param_2;
  iVar14 = (int)param_2[1];
  iVar5 = *(int *)(lVar8 + 0x310);
  iVar16 = (iVar5 - iVar14) + -1;
  if (0 < iVar16) {
    iVar16 = 1;
  }
  local_1d08 = param_1;
  if (iVar16 != 0) {
    lVar15 = *(longlong *)(lVar8 + 0x300);
    if (*(longlong *)(lVar8 + 0x300) == 0) {
      lVar15 = lVar8;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar14 * 0x30 + lVar15),
               (void *)((longlong)(iVar5 - iVar16) * 0x30 + lVar15),(longlong)iVar16 * 0x30);
    iVar5 = *(int *)(lVar8 + 0x310);
  }
  *(int *)(lVar8 + 0x310) = iVar5 + -1;
  TArray<FLightSceneInfoCompact,TInlineAllocator<16,FDefaultAllocator>_>::ResizeShrink(lVar8);
  lVar15 = 0;
  *(longlong *)(param_1 + 0x3a8) = (longlong)(*(int *)(param_1 + 0x3a8) + -0x30);
  if (iVar14 < *(int *)(lVar8 + 0x310)) {
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar6 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    lVar7 = *(longlong *)(lVar8 + 0x300);
    if (*(longlong *)(lVar8 + 0x300) == 0) {
      lVar7 = lVar8;
    }
    lVar7 = *(longlong *)(lVar7 + 0x20 + (longlong)iVar14 * 0x30);
    *(int *)(lVar7 + 0x60) = (int)*param_2;
    *(undefined4 *)(lVar7 + 100) = uVar2;
    *(int *)(lVar7 + 0x68) = (int)lVar6;
    *(undefined4 *)(lVar7 + 0x6c) = uVar3;
  }
  do {
    uVar9 = *(uint *)(lVar8 + 0x368);
    uVar9 = (uVar9 - 1 ^ uVar9) & 0x7fffffff ^ uVar9;
    *(uint *)(lVar8 + 0x368) = uVar9;
    plVar1 = (longlong *)(lVar8 + 800);
    lVar6 = lVar8;
    if (6 < (uVar9 & 0x7fffffff)) {
      lVar6 = lVar15;
    }
    lVar8 = *plVar1;
    lVar15 = lVar6;
  } while (*plVar1 != 0);
  if (lVar6 != 0) {
    local_19a8 = (undefined1 *)0x0;
    local_1998 = 0;
    if ((*(uint *)(lVar6 + 0x368) & 0x7fffffff) != 0) {
      TArray<FLightSceneInfoCompact,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::ResizeTo
                (local_1ca8);
    }
    local_1978 = *(undefined8 *)(param_1 + 0x370);
    uStack_1970 = *(undefined8 *)(param_1 + 0x378);
    local_1968 = *(undefined8 *)(param_1 + 0x380);
    uStack_1960 = *(undefined8 *)(param_1 + 0x388);
    local_1958 = *(undefined8 *)(param_1 + 0x390);
    uStack_1950 = *(undefined8 *)(param_1 + 0x398);
    local_88 = (undefined1 *)0x0;
    local_78 = 0;
    local_1988 = lVar6;
    do {
      lVar8 = local_1988;
      for (iVar14 = 0; (uVar18 = local_1998, -1 < iVar14 && (iVar14 < *(int *)(lVar8 + 0x310)));
          iVar14 = iVar14 + 1) {
        iVar5 = (int)local_1998;
        lVar17 = (longlong)(int)local_1998;
        lVar7 = (longlong)iVar14;
        iVar16 = (int)local_1998 + 1;
        local_1998 = CONCAT44(local_1998._4_4_,iVar16);
        lVar15 = *(longlong *)(lVar8 + 0x300);
        if (*(longlong *)(lVar8 + 0x300) == 0) {
          lVar15 = lVar8;
        }
        if (local_1998._4_4_ < iVar16) {
          TArray<FLightSceneInfoCompact,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
                    (local_1ca8,uVar18 & 0xffffffff);
        }
        puVar12 = (undefined8 *)(lVar15 + lVar7 * 0x30);
        uVar4 = puVar12[1];
        iStack_1cf8 = iVar5;
        puVar10 = local_1ca8;
        if (local_19a8 != (undefined1 *)0x0) {
          puVar10 = local_19a8;
        }
        *(undefined8 *)(puVar10 + lVar17 * 0x30) = *puVar12;
        *(undefined8 *)((longlong)(puVar10 + lVar17 * 0x30) + 8) = uVar4;
        puVar12 = (undefined8 *)(lVar15 + 0x10 + lVar7 * 0x30);
        uVar4 = puVar12[1];
        *(undefined8 *)(puVar10 + lVar17 * 0x30 + 0x10) = *puVar12;
        *(undefined8 *)((longlong)(puVar10 + lVar17 * 0x30 + 0x10) + 8) = uVar4;
        puVar12 = (undefined8 *)(lVar15 + 0x20 + lVar7 * 0x30);
        uVar4 = puVar12[1];
        *(undefined8 *)(puVar10 + lVar17 * 0x30 + 0x20) = *puVar12;
        *(undefined8 *)((longlong)(puVar10 + lVar17 * 0x30 + 0x20) + 8) = uVar4;
        local_1d00._0_4_ = (undefined4)lVar6;
        local_1d00._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
        lVar15 = *(longlong *)(lVar8 + 0x300);
        if (*(longlong *)(lVar8 + 0x300) == 0) {
          lVar15 = lVar8;
        }
        lVar15 = *(longlong *)(lVar15 + 0x20 + lVar7 * 0x30);
        *(undefined4 *)(lVar15 + 0x60) = (undefined4)local_1d00;
        *(undefined4 *)(lVar15 + 100) = local_1d00._4_4_;
        *(int *)(lVar15 + 0x68) = iVar5;
        *(undefined4 *)(lVar15 + 0x6c) = uStack_1cf4;
        local_1d00 = lVar6;
      }
      uVar9 = 0;
      do {
        uVar18 = local_78;
        lVar15 = *(longlong *)(lVar8 + 0x328 + (ulonglong)(uVar9 & 7) * 8);
        if ((lVar15 != 0) && ((*(uint *)(lVar15 + 0x368) & 0x7fffffff) != 0)) {
          lVar15 = (longlong)(int)local_78;
          iVar14 = (int)local_78 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar14);
          if (local_78._4_4_ < iVar14) {
            TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
            ::ResizeGrow(local_1948,uVar18 & 0xffffffff);
          }
          puVar12 = (undefined8 *)0x0;
          puVar10 = local_1948;
          if (local_88 != (undefined1 *)0x0) {
            puVar10 = local_88;
          }
          puVar11 = (undefined8 *)(puVar10 + lVar15 * 0x40);
          if (puVar11 != (undefined8 *)0x0) {
            puVar11[2] = 0;
            *(undefined4 *)(puVar11 + 3) = 0;
            *(undefined8 *)((longlong)puVar11 + 0x1c) = 0x3f800000;
            *(undefined8 *)((longlong)puVar11 + 0x24) = 0;
            *(undefined4 *)((longlong)puVar11 + 0x2c) = 0x3f800000;
            *puVar11 = 0;
            puVar12 = puVar11;
          }
          *puVar12 = *(undefined8 *)(local_1988 + 0x328 + (ulonglong)(uVar9 & 7) * 8);
          *(float *)(puVar12 + 2) =
               local_1958._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar9 & 1) * 4) +
               (float)local_1978;
          *(float *)((longlong)puVar12 + 0x14) =
               local_1958._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar9 >> 1 & 1) * 4) +
               local_1978._4_4_;
          fVar19 = *(float *)(&DAT_146534f00 + (ulonglong)(uVar9 >> 2 & 1) * 4);
          *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
          *(float *)(puVar12 + 3) = local_1958._4_4_ * fVar19 + (float)uStack_1970;
          *(float *)(puVar12 + 4) = (float)local_1958;
          *(float *)((longlong)puVar12 + 0x24) = (float)local_1958;
          *(float *)(puVar12 + 5) = (float)local_1958;
          *(undefined4 *)((longlong)puVar12 + 0x2c) = 0;
          fVar19 = (float)local_1958 * 0.5 * 1.0625;
          *(float *)(puVar12 + 6) = fVar19;
          *(float *)((longlong)puVar12 + 0x34) = (float)local_1958 - fVar19;
        }
        if (((byte)uVar9 & 7) < 7) {
          uVar9 = uVar9 ^ (uVar9 + 1 ^ uVar9) & 7;
        }
        else {
          uVar9 = uVar9 | 8;
        }
      } while (uVar9 >> 3 == 0);
      if ((int)local_78 == 0) {
        local_1ce8 = 0;
        local_1988 = 0;
        lStack_1980 = lStack_1ce0;
        local_1958 = CONCAT44(uStack_1cb4,local_1cb8);
        uStack_1950 = CONCAT44(uStack_1cac,uStack_1cb0);
        local_1978 = 0;
        uStack_1970 = 0x3f80000000000000;
        local_1968 = 0;
        uStack_1960 = 0x3f80000000000000;
      }
      else {
        iVar14 = (int)local_78 + -1;
        puVar10 = local_1948;
        if (local_88 != (undefined1 *)0x0) {
          puVar10 = local_88;
        }
        lVar8 = (longlong)iVar14 * 0x40;
        local_1988 = *(longlong *)(puVar10 + lVar8);
        lStack_1980 = *(longlong *)((longlong)(puVar10 + lVar8) + 8);
        local_1978 = *(undefined8 *)(puVar10 + lVar8 + 0x10);
        uStack_1970 = *(undefined8 *)((longlong)(puVar10 + lVar8 + 0x10) + 8);
        local_1968 = *(undefined8 *)(puVar10 + lVar8 + 0x20);
        uStack_1960 = *(undefined8 *)((longlong)(puVar10 + lVar8 + 0x20) + 8);
        local_1958 = *(undefined8 *)(puVar10 + lVar8 + 0x30);
        uStack_1950 = *(undefined8 *)((longlong)(puVar10 + lVar8 + 0x30) + 8);
        iVar5 = ((int)local_78 - iVar14) + -1;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (puVar10 + (longlong)iVar14 * 0x40,puVar10 + (longlong)(int)local_78 * 0x40,
                     (longlong)iVar5 << 6);
        }
        local_78 = CONCAT44(local_78._4_4_,(int)local_78 + -1);
        TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
        ::ResizeShrink(local_1948);
      }
    } while (local_1988 != 0);
    if (local_88 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    FUN_141b83e40(lVar6,local_1ca8);
    lVar8 = local_1d08;
    *(uint *)(lVar6 + 0x368) = *(uint *)(lVar6 + 0x368) | 0x80000000;
    uVar9 = 0;
    do {
      uVar18 = (ulonglong)(uVar9 & 7);
      if (*(longlong *)(lVar6 + 0x328 + uVar18 * 8) != 0) {
        *(longlong *)(lVar8 + 0x3a8) = (longlong)(*(int *)(lVar8 + 0x3a8) + -0x370);
        lVar15 = *(longlong *)(lVar6 + 0x328 + uVar18 * 8);
        if (lVar15 != 0) {
          uVar13 = 0;
          do {
            lVar7 = *(longlong *)(lVar15 + 0x328 + (ulonglong)(uVar13 & 7) * 8);
            if (lVar7 != 0) {
              TOctree<FLightSceneInfoCompact,FLightOctreeSemantics>::FNode::
              _scalar_deleting_destructor_(lVar7,1);
            }
            if (((byte)uVar13 & 7) < 7) {
              uVar13 = uVar13 ^ (uVar13 + 1 ^ uVar13) & 7;
            }
            else {
              uVar13 = uVar13 | 8;
            }
          } while (uVar13 >> 3 == 0);
          if (*(longlong *)(lVar15 + 0x300) != 0) {
            FMemory::Free();
          }
          FMemory::operator_delete(lVar15,0x370);
        }
      }
      *(undefined8 *)(lVar6 + 0x328 + uVar18 * 8) = 0;
      if (((byte)uVar9 & 7) < 7) {
        uVar9 = uVar9 ^ (uVar9 + 1 ^ uVar9) & 7;
      }
      else {
        uVar9 = uVar9 | 8;
      }
    } while (uVar9 >> 3 == 0);
    if (local_19a8 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141bb4300 FUN_141bb4300 body=135 status=ok
// SIG undefined FUN_141bb4300(void)

void FUN_141bb4300(longlong param_1)

{
  longlong lVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x60);
    uStack_14 = *(undefined4 *)(param_1 + 100);
    uStack_10 = *(undefined4 *)(param_1 + 0x68);
    uStack_c = *(undefined4 *)(param_1 + 0x6c);
    FUN_141bb3c40(*(longlong *)(param_1 + 0xa8) + 0x1a70,&local_18);
  }
  TSet<TTuple<int,FCachedShadowMapData>,TDefaultMapHashableKeyFuncs<int,FCachedShadowMapData,0>,FDefaultSetAllocator>
  ::Remove(*(longlong *)(param_1 + 0xa8) + 0x1798,*(undefined4 *)(param_1 + 0x58));
  lVar1 = *(longlong *)(param_1 + 0x38);
  while (lVar1 != 0) {
    FUN_141d66190(lVar1);
    lVar1 = *(longlong *)(param_1 + 0x38);
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  while (lVar1 != 0) {
    FUN_141d66190(lVar1);
    lVar1 = *(longlong *)(param_1 + 0x40);
  }
  return;
}



// FUNCTION 141bb4390 FUN_141bb4390 body=4605 status=ok
// SIG undefined FUN_141bb4390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bb4390(longlong param_1,longlong param_2)

{
  int *piVar1;
  wchar_t wVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  DWORD DVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  wchar_t *pwVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  longlong lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  longlong *plVar30;
  undefined8 *puVar31;
  longlong lVar32;
  ulonglong *puVar33;
  float fVar34;
  undefined1 auStack_3e8 [32];
  undefined8 local_3c8;
  undefined1 local_3c0;
  undefined1 local_3b8;
  char local_3b7;
  char local_3b6;
  char local_3b5;
  uint local_3b4;
  undefined1 local_3b0 [8];
  undefined8 *local_3a8;
  longlong local_3a0;
  longlong local_398;
  undefined8 *local_390;
  uint local_388;
  uint local_384;
  longlong local_380;
  longlong *local_378;
  undefined8 *local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined8 local_34c;
  undefined8 uStack_344;
  undefined8 local_33c;
  undefined4 local_334;
  undefined8 *local_330;
  undefined8 local_328;
  longlong local_320;
  char local_318;
  undefined8 local_310;
  longlong local_308;
  longlong *local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined8 *local_2e8;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  longlong *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  longlong *local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined *local_2b8;
  undefined1 *puStack_2b0;
  undefined *local_2a8;
  undefined1 *puStack_2a0;
  undefined8 *local_298;
  uint uStack_290;
  undefined4 uStack_28c;
  undefined8 *local_288;
  undefined8 uStack_280;
  undefined8 *local_278;
  undefined8 uStack_270;
  longlong *local_268;
  undefined8 uStack_260;
  longlong *local_258;
  undefined8 uStack_250;
  undefined *local_248;
  undefined1 *puStack_240;
  undefined *local_238;
  undefined1 *puStack_230;
  undefined1 local_218 [48];
  longlong local_1e8;
  int local_1e0;
  int local_1dc;
  longlong local_1a8 [2];
  undefined4 local_198;
  undefined2 local_194;
  undefined1 local_190 [168];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  undefined8 *puVar25;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  FRHICommandListImmediate::SetCurrentStat(param_2,local_3b8);
  FUN_141d6bf80(param_1);
  if ((*(uint *)(param_1 + 0x3c) & 0x800000) == 0) {
    return;
  }
  FUN_141d7b8a0(param_1,param_2);
  iVar9 = FSceneViewFamily::GetFeatureLevel(param_1 + 0x10);
  if ((DAT_1464c338c == '\0') || (DAT_1464c3388 < iVar9)) {
    FUN_141dd3910(&PTR_PTR_1464c32e0,param_2,iVar9);
  }
  local_3a0 = FSceneRenderTargets::Get(param_2);
  FUN_141cda560(local_3a0,param_2,param_1);
  FUN_141d06530(&PTR_PTR_1464c2560,param_2);
  FUN_141b9fc10(param_1,param_2);
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  FUN_141ec65b0();
  FUN_141ec6070(0);
  lVar14 = DAT_146b17150;
  bVar3 = false;
  plVar23 = (longlong *)(DAT_146b17150 + 0x9b8);
  *(int *)(DAT_146b17150 + 0x9cc) = *(int *)(DAT_146b17150 + 0x9cc) + 1;
  iVar9 = *(int *)(lVar14 + 0x9cc);
  iVar10 = *(int *)(lVar14 + 0x9c0) + -1;
  lVar32 = (longlong)iVar10;
  if (-1 < iVar10) {
    lVar26 = lVar32 << 4;
    bVar3 = false;
    do {
      if (((*(int *)(*plVar23 + 8 + lVar26) == 0) ||
          (plVar30 = *(longlong **)(*plVar23 + lVar26), plVar30 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar30 + 0x40))(), cVar6 == '\0')) {
        bVar3 = true;
      }
      lVar26 = lVar26 + -0x10;
      lVar32 = lVar32 + -1;
    } while (-1 < lVar32);
    iVar9 = *(int *)(lVar14 + 0x9cc);
  }
  puVar27 = (undefined8 *)0x0;
  *(int *)(lVar14 + 0x9cc) = iVar9 + -1;
  bVar4 = false;
  if ((bVar3) && (iVar9 + -1 < 1)) {
    iVar9 = *(int *)(lVar14 + 0x9c0);
    puVar15 = puVar27;
    puVar19 = puVar27;
    iVar10 = iVar9;
    if (0 < iVar9) {
      do {
        if (((*(int *)(*plVar23 + 8 + (longlong)puVar19) == 0) ||
            (plVar30 = *(longlong **)(*plVar23 + (longlong)puVar19), plVar30 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*plVar30 + 0x10))(), cVar6 != '\0')) {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(plVar23,puVar15,1,1);
        }
        else {
          puVar15 = (undefined8 *)(ulonglong)((int)puVar15 + 1);
          puVar19 = puVar19 + 2;
        }
        iVar10 = *(int *)(lVar14 + 0x9c0);
      } while ((int)puVar15 < iVar10);
    }
    iVar11 = iVar10 * 2;
    if (iVar10 * 2 < 3) {
      iVar11 = 2;
    }
    *(int *)(lVar14 + 0x9c8) = iVar11;
    if ((iVar11 < iVar9) && (*(int *)(lVar14 + 0x9c4) != iVar10)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar23);
    }
  }
  uVar13 = FUN_141ee2d40();
  FUN_141edffd0(uVar13);
  uVar13 = FUN_141ee2ba0();
  FUN_141edfcb0(uVar13);
  uVar13 = FUN_141ee2c80();
  FUN_141edfd60(uVar13);
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
  }
  plVar23 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x18);
  if (((plVar23 != (longlong *)0x0) && (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x1204) == '\0'))
     && ((*(byte *)(param_1 + 0x3c) & 0x80) != 0)) {
    (**(code **)(*plVar23 + 0x40))(plVar23,param_2,0);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
  }
  plVar23 = (longlong *)(param_1 + 0xc0);
  FUN_141d45170(&DAT_1464c2590,*plVar23);
  FRHICommandListImmediate::SetCurrentStat(param_2,local_3b8);
  FUN_141da84f0(param_1,param_2);
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
  }
  FUN_141dd8740(param_1,param_2,plVar23);
  local_398 = *plVar23;
  local_384 = 0;
  local_3a8 = (undefined8 *)0x0;
  local_390 = (undefined8 *)0x0;
  local_3b4 = 0;
  local_388 = 0;
  puVar15 = puVar27;
  puVar19 = puVar27;
  puVar25 = puVar27;
  puVar28 = puVar27;
  puVar31 = puVar27;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      lVar14 = *(longlong *)(param_1 + 0xc0);
      if (*(int *)(lVar14 + 0xf60 + (longlong)puVar31) != 3) {
        iVar9 = (int)puVar25;
        local_388 = iVar9 + 1;
        if ((int)puVar15 < (int)local_388) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_390,puVar25);
          puVar15 = (undefined8 *)(ulonglong)local_384;
          puVar28 = local_390;
        }
        puVar25 = (undefined8 *)(ulonglong)local_388;
        puVar28[iVar9] = (longlong)(int)puVar19 * 0x30d0 + lVar14;
      }
      uVar21 = (int)puVar19 + 1;
      puVar19 = (undefined8 *)(ulonglong)uVar21;
      puVar31 = puVar31 + 0x61a;
    } while ((int)uVar21 < *(int *)(param_1 + 200));
    local_3b4 = (uint)puVar25;
    local_3a8 = puVar28;
  }
  lVar14 = local_398;
  plVar30 = (longlong *)(param_1 + 0xc0);
  cVar6 = FUN_142753a10();
  local_3b6 = cVar6 == '\0';
  plVar23 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
  if (*plVar23 == 0) {
    puVar15 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))();
  }
  else {
    plVar23 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
    local_2f0 = *(undefined4 *)(*plVar23 + 0x60);
    puVar15 = (undefined8 *)&local_2f0;
    uStack_2ec = *(undefined4 *)(*plVar23 + 100);
  }
  if ((*(int *)(param_1 + 0x2b0) < (int)*puVar15) ||
     (*(int *)(param_1 + 0x2b4) < (int)((ulonglong)*puVar15 >> 0x20))) {
    local_3b5 = '\x01';
  }
  else {
    local_3b5 = '\0';
  }
  if ((((*(uint *)(*(longlong *)(lVar14 + 0x10) + 0x2c) & 0x3000000) == 0x3000000) ||
      (local_3b5 != '\0')) ||
     ((cVar7 = FUN_141d76c80(lVar14), cVar7 != '\0' ||
      ((*(char *)(lVar14 + 0x1202) != '\0' || (local_3b7 = '\0', *(char *)(lVar14 + 0x1203) != '\0')
       ))))) {
    local_3b7 = '\x01';
  }
  lVar32 = local_3a0;
  bVar3 = false;
  if (cVar6 == '\0') {
    if (local_3b7 != '\0') goto LAB_141bb47e6;
    local_378 = (longlong *)FUN_141d69900(param_1,local_3a0);
    uVar21 = local_3b4;
    if (*(char *)(lVar14 + 0x120b) == '\0') {
      lVar14 = *(longlong *)(*(longlong *)(lVar32 + 0x60) + 0x10);
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
        local_3a8 = local_390;
        uVar21 = local_388;
      }
      bVar4 = true;
      local_308 = lVar14;
    }
    else {
      lVar14 = *(longlong *)(*(longlong *)(lVar32 + 0x1f8) + 8);
      local_380 = lVar14;
      if (lVar14 == 0) {
        bVar3 = true;
      }
      else {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
        bVar3 = true;
        local_3a8 = local_390;
        uVar21 = local_388;
      }
    }
    if (bVar4) {
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_308);
    }
    if (bVar3) {
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_380);
    }
    local_3c0 = 0;
    local_3c8 = CONCAT44(local_3c8._4_4_,0x22);
    FUN_141ad74f0(param_2,local_378,lVar14,5);
  }
  else {
    FUN_141d6fe00(param_1,param_2);
LAB_141bb47e6:
    iVar9 = FSceneViewFamily::GetFeatureLevel(param_1 + 0x10);
    lVar14 = local_3a0;
    if (((uint)(&DAT_1464c9c48)[iVar9] < 0x1e) &&
       ((0x303a0000U >> ((&DAT_1464c9c48)[iVar9] & 0x1f) & 1) != 0)) {
      plVar23 = (longlong *)FSceneRenderTargets::GetSceneColorSurface(local_3a0);
      local_1a8[0] = *plVar23;
      local_e8 = *(undefined8 *)(*(longlong *)(lVar14 + 0x60) + 8);
      local_c8 = 0xffffffffffffffff;
      uStack_c0 = 0xffffffffffffffff;
      local_b8 = 0xffffffffffffffff;
      uStack_b0 = 0xffffffff;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_d0 = 0;
      local_cc = 0xffffffff;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0xffffffff;
      local_94 = 0;
      local_90 = 0;
      local_58 = 0;
      local_1a8[1] = 0;
      local_198 = 0xffffffff;
      local_194 = 0x900;
      local_50 = 1 < *(uint *)(local_1a8[0] + 0x38);
      local_e0 = 0;
      local_d8 = 0x99;
      local_d4 = 0x22;
      _guard_xfg_dispatch_icall_nop(local_190,0,0xa8);
      puVar15 = puVar27;
      if (0 < *(int *)(param_1 + 200)) {
        uVar29 = (ulonglong)*(uint *)(param_1 + 200);
        piVar20 = (int *)(*plVar30 + 0x2f68);
        do {
          piVar1 = piVar20 + -10;
          iVar9 = *piVar20;
          piVar20 = piVar20 + 0xc34;
          puVar15 = (undefined8 *)(ulonglong)(uint)((int)puVar15 + *piVar1 + iVar9);
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
      }
      local_a0._0_5_ = CONCAT14((int)puVar15 != 0,(int)puVar15);
      uVar24 = *(longlong *)(param_2 + 0x30) + 1U & 0xfffffffffffffffe;
      uVar29 = uVar24 + 0x12;
      if (*(ulonglong *)(param_2 + 0x38) < uVar29) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x14);
        uVar24 = *(longlong *)(param_2 + 0x30) + 1U & 0xfffffffffffffffe;
        uVar29 = uVar24 + 0x12;
      }
      pwVar17 = L"BasePass";
      *(ulonglong *)(param_2 + 0x30) = uVar29;
      do {
        wVar2 = *pwVar17;
        *(wchar_t *)((uVar24 - 0x144df5d38) + (longlong)pwVar17) = wVar2;
        pwVar17 = pwVar17 + 1;
      } while (wVar2 != L'\0');
      uVar18 = *(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8;
      uVar29 = uVar18 + 0x178;
      if (*(ulonglong *)(param_2 + 0x38) < uVar29) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x180);
        uVar18 = *(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8;
        uVar29 = uVar18 + 0x178;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar29;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(ulonglong **)(param_2 + 8) = uVar18;
      *(ulonglong *)(param_2 + 8) = uVar18 + 8;
      FUN_140499730(uVar18,local_1a8,uVar24);
      *(undefined1 *)(param_2 + 0x1ac) = 1;
      FUN_14049c2a0(param_2,local_1a8);
      *(undefined1 *)(param_2 + 0x1ac) = 1;
      FRHIRenderPassInfo::~FRHIRenderPassInfo(local_1a8);
      uVar21 = local_3b4;
    }
    else {
      local_3c8 = CONCAT71(local_3c8._1_7_,1);
      FUN_141cdeb70(local_3a0,param_2,5);
      FSceneRenderTargets::GetSceneColorSurface(local_3a0);
      uVar21 = local_3b4;
    }
  }
  FRHICommandListImmediate::SetCurrentStat(param_2,local_3b8);
  local_298 = local_3a8;
  uStack_280 = CONCAT44(uStack_28c,uVar21);
  local_288 = local_3a8;
  uStack_290 = uVar21;
  FUN_141bb93a0(param_1,param_2,&local_288);
  FRHICommandListImmediate::SetCurrentStat(param_2,local_3b8);
  cVar6 = FUN_141d66670(param_1,*(undefined4 *)(param_1 + 0x2a0));
  if (cVar6 != '\0') {
    FUN_141d5e420(param_1,param_2,1);
    FUN_141d689e0(param_1,param_2);
    if (*(int *)(DAT_146a29410 + 4) != 1) {
      puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 2;
      if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
        puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar19 + 2;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar15;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar19;
      *(undefined8 **)(param_2 + 8) = puVar19 + 1;
      puVar19[1] = 0;
      *puVar19 = &PTR_LAB_143f594a0;
    }
  }
  FRHICommandListImmediate::SetCurrentStat(param_2,local_3b8);
  if (*(char *)(param_2 + 0x1ac) != '\0') {
    puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar19 + 2;
    if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
      puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 2;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar15;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar19;
    *(undefined8 **)(param_2 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    *puVar19 = &PTR_LAB_143f59460;
    *(undefined1 *)(param_2 + 0x1ac) = 0;
  }
  local_3b4 = 0;
  if (0 < *(int *)(param_1 + 0x98)) {
    iVar9 = *(int *)(param_1 + 0x18);
    puVar15 = puVar27;
    puVar19 = puVar27;
    do {
      puVar25 = puVar27;
      uVar16 = (uint)puVar15;
      if (0 < iVar9) {
        do {
          plVar23 = *(longlong **)((longlong)puVar19 + *(longlong *)(param_1 + 0x90));
          (**(code **)(*plVar23 + 0x40))(plVar23,param_2,(longlong)(int)puVar25 * 0x30d0 + *plVar30)
          ;
          iVar9 = *(int *)(param_1 + 0x18);
          uVar22 = (int)puVar25 + 1;
          puVar25 = (undefined8 *)(ulonglong)uVar22;
          uVar16 = local_3b4;
        } while ((int)uVar22 < iVar9);
      }
      local_3b4 = uVar16 + 1;
      puVar15 = (undefined8 *)(ulonglong)local_3b4;
      puVar19 = puVar19 + 2;
    } while ((int)local_3b4 < *(int *)(param_1 + 0x98));
  }
  lVar14 = local_398;
  FUN_141b932c0(param_1,param_2,local_398);
  if (((*(uint *)(param_1 + 0x38) & 0x1000) != 0) && (*(char *)(lVar14 + 0x1204) == '\0')) {
    FUN_141bb5590(param_1,param_2);
  }
  plVar23 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x18);
  if (((plVar23 != (longlong *)0x0) && (*(char *)(*plVar30 + 0x1204) == '\0')) &&
     ((*(byte *)(param_1 + 0x3c) & 0x80) != 0)) {
    local_3c8 = 0;
    (**(code **)(*plVar23 + 0x48))(plVar23,param_2,0,0);
  }
  FRHICommandListImmediate::SetCurrentStat(param_2,local_3b8);
  if (*(char *)(lVar14 + 0x1204) == '\0') {
    FUN_141da6d00(param_1,param_2);
  }
  if ((*(uint *)(param_1 + 0x3c) & 0x200) != 0) {
    iVar9 = FUN_141b33eb0(param_1 + 0x10);
    if (0 < iVar9) {
      FUN_141b39f10(param_1,param_2);
    }
    local_2e8 = local_3a8;
    uStack_270 = CONCAT44(uStack_2dc,uVar21);
    local_278 = local_3a8;
    uStack_2e0 = uVar21;
    FUN_141c2a040(param_1,param_2,&local_278);
  }
  if (((*(char *)(param_1 + 0x5c) != '\0') && (*(int *)(param_1 + 0x58) != 0)) &&
     (*(int *)(param_1 + 0x18) == 3)) {
    lVar14 = *plVar30;
    local_300 = (longlong *)0x0;
    local_2f8 = 1;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_300,0);
    plVar23 = local_300;
    *local_300 = lVar14 + 0x61a0;
    FUN_141c29950(param_1,param_2);
    uVar5 = (undefined4)local_2f8;
    uStack_2d0 = (undefined4)local_2f8;
    local_2d8 = plVar23;
    uStack_260 = CONCAT44(uStack_2cc,(undefined4)local_2f8);
    local_268 = plVar23;
    FUN_141bb93a0(param_1,param_2,&local_268);
    local_2c8 = plVar23;
    uStack_2c0 = uVar5;
    uStack_250 = CONCAT44(uStack_2bc,uVar5);
    local_258 = plVar23;
    FUN_141c2a040(param_1,param_2,&local_258);
    FUN_141c15860(param_1,param_2);
    lVar14 = local_398;
    if (plVar23 != (longlong *)0x0) {
      FMemory::Free(plVar23);
      lVar14 = local_398;
    }
  }
  if (*(char *)(lVar14 + 0x120c) == '\0') {
    FUN_141b950e0(param_1,param_2);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a495d8) && (_Init_thread_header(&DAT_146a495d8), DAT_146a495d8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar23 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileMSAA");
    puVar15 = puVar27;
    if (plVar23 != (longlong *)0x0) {
      puVar15 = (undefined8 *)(**(code **)(*plVar23 + 0x38))(plVar23);
    }
    DAT_146a495d0 = puVar15;
    _Init_thread_footer(&DAT_146a495d8);
  }
  if (((DAT_1464c9c5a == '\0') || (DAT_146ab62dd == '\0')) || ((*(byte *)(param_1 + 0x38) & 1) == 0)
     ) {
LAB_141bb4f40:
    cVar6 = '\0';
  }
  else {
    if ((*(char *)(lVar14 + 0x3010) == '\0') &&
       (fVar34 = (float)FUN_141c7d060(lVar14), fVar34 <= 0.0)) {
      iVar9 = FSceneViewFamily::GetFeatureLevel(param_1 + 0x10);
      puVar15 = DAT_146a495d0;
      if (((&DAT_1464c9c48)[iVar9] != 0xb) || (DAT_146a495d0 == (undefined8 *)0x0))
      goto LAB_141bb4f40;
      cVar6 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar12 = GetCurrentThreadId();
        puVar19 = (undefined8 *)&DAT_00000004;
        if (DVar12 == DAT_1468c21c0) goto LAB_141bb4f32;
      }
      else {
LAB_141bb4f32:
        puVar19 = puVar27;
      }
      if (*(int *)((longlong)puVar15 + (longlong)puVar19) < 2) goto LAB_141bb4f40;
    }
    cVar6 = '\x01';
  }
  if (local_3b6 == '\0') {
    if (cVar6 != '\0') {
      puStack_2b0 = local_3b0;
      local_3b0[0] = 0;
      local_2b8 = &DAT_14060d670;
      uVar13 = *(undefined8 *)(local_3a0 + 0x378);
      local_248 = &DAT_14060d670;
      puStack_240 = puStack_2b0;
      lVar32 = FUN_1415d8310(&local_248,&DAT_146216a38);
      local_330 = (undefined8 *)(lVar32 + 0x18);
      local_328 = *local_330;
      local_320 = *(longlong *)(lVar32 + 0x28);
      local_318 = '\0';
      local_310 = *(undefined8 *)(lVar32 + 0x30);
      *(undefined8 ***)(lVar32 + 0x30) = &local_330;
      *(int *)(lVar32 + 0x38) = *(int *)(lVar32 + 0x38) + 1;
      FUN_141cd7760(local_218,param_2,lVar14);
      puStack_2a0 = &local_3b8;
      local_3b8 = 0;
      local_2a8 = &DAT_14060d670;
      local_238 = &DAT_14060d670;
      puStack_230 = puStack_2a0;
      lVar14 = FUN_1415d8310(&local_238,&DAT_146216a38);
      puVar19 = (undefined8 *)operator_new(0xb8,lVar14 + 0x18,1);
      iVar9 = local_1e0;
      puVar15 = puVar27;
      if (puVar19 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar19 + 1) = 0;
        puVar19[2] = 0;
        *(undefined4 *)(puVar19 + 3) = 0;
        puVar19[4] = 1;
        puVar19[5] = 0;
        puVar19[6] = 0;
        puVar19[7] = 0;
        puVar19[8] = 1;
        *(undefined2 *)(puVar19 + 9) = 1;
        puVar19[0xc] = L"UnknownTexture";
        *(undefined8 *)((longlong)puVar19 + 0x4c) = 0;
        *(undefined4 *)((longlong)puVar19 + 0x54) = 0;
        *(undefined1 *)(puVar19 + 0xb) = 0;
        *(undefined2 *)(puVar19 + 0xd) = 1;
        puVar19[0xe] = 0;
        *(undefined4 *)(puVar19 + 0xf) = 0;
        puVar19[0x10] = 0;
        puVar19[0x11] = 0;
        puVar19[0x13] = 0;
        puVar19[0x14] = 0;
        puVar19[0x12] = 0;
        *puVar19 = &PTR__scalar_deleting_destructor__144e0aad8;
        puVar19[0x15] = uVar13;
        *(undefined1 *)(puVar19 + 0x16) = 1;
        puVar15 = puVar19;
      }
      lVar14 = (longlong)local_1e0;
      local_1e0 = local_1e0 + 1;
      if (local_1dc < local_1e0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1e8,iVar9);
      }
      local_370 = (undefined8 *)0x0;
      local_368 = 1;
      *(undefined8 **)(local_1e8 + lVar14 * 8) = puVar15;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_370,0);
      *local_370 = puVar15;
      FUN_141cf2100(local_218,&local_370,L"OnChipAlphaTransform");
      if (local_370 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      FRenderingCompositePassContext::~FRenderingCompositePassContext(local_218);
      if (local_318 == '\0') {
        local_318 = '\x01';
        *(int *)(local_330 + 4) = *(int *)(local_330 + 4) + -1;
        if (local_320 != local_330[2]) {
          FMemStackBase::FreeChunks();
        }
        *local_330 = local_328;
        local_330[3] = local_310;
      }
    }
LAB_141bb5194:
    local_354 = *(undefined4 *)(param_1 + 0x2b0);
    local_350 = *(undefined4 *)(param_1 + 0x2b4);
    local_360 = 0;
    local_358 = 0;
    local_34c = 0xffffffffffffffff;
    uStack_344 = 0xffffffffffffffff;
    local_33c = 0;
    local_334 = 0;
    plVar23 = (longlong *)FSceneRenderTargets::GetSceneColorTexture(local_3a0);
    local_380 = *plVar23;
    puVar15 = (undefined8 *)FSceneRenderTargets::GetSceneColorSurface(local_3a0);
    puVar33 = (ulonglong *)(param_2 + 0x30);
    puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_378 = (longlong *)*puVar15;
    puVar15 = puVar19 + 10;
    if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(puVar33,0x58);
      puVar19 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar19 + 10;
    }
    *puVar33 = (ulonglong)puVar15;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar19;
    *(undefined8 **)(param_2 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    *puVar19 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar19 + 2) = (undefined4)local_360;
    *(undefined4 *)((longlong)puVar19 + 0x14) = local_360._4_4_;
    *(undefined4 *)(puVar19 + 3) = local_358;
    *(undefined4 *)((longlong)puVar19 + 0x1c) = local_354;
    *(undefined4 *)(puVar19 + 4) = local_350;
    *(undefined4 *)((longlong)puVar19 + 0x24) = (undefined4)local_34c;
    *(undefined4 *)(puVar19 + 5) = local_34c._4_4_;
    *(undefined4 *)((longlong)puVar19 + 0x2c) = (undefined4)uStack_344;
    *(undefined4 *)(puVar19 + 6) = uStack_344._4_4_;
    *(undefined4 *)((longlong)puVar19 + 0x34) = (undefined4)local_33c;
    *(undefined4 *)(puVar19 + 7) = local_33c._4_4_;
    *(undefined4 *)((longlong)puVar19 + 0x3c) = local_334;
    puVar19[9] = local_380;
    puVar19[8] = local_378;
    lVar14 = (**(code **)(*local_378 + 8))();
    if ((lVar14 == 0) && (lVar14 = (**(code **)(*(longlong *)puVar19[8] + 0x18))(), lVar14 == 0)) {
      (**(code **)(*(longlong *)puVar19[8] + 0x20))();
    }
    lVar14 = (**(code **)(*(longlong *)puVar19[9] + 8))();
    if ((lVar14 == 0) && (lVar14 = (**(code **)(*(longlong *)puVar19[9] + 0x18))(), lVar14 == 0)) {
      (**(code **)(*(longlong *)puVar19[9] + 0x20))();
    }
    if ((((*(int *)(DAT_146a293f8 + 4) == 1) || (*(char *)(param_1 + 0x2e1) != '\0')) ||
        (0 < *(int *)(local_398 + 0x1d74))) ||
       ((*(char *)(local_398 + 0x1202) != '\0' &&
        ((*(int *)(param_1 + 0x74) == 0 || (*(int *)(param_1 + 0x74) == 3)))))) goto LAB_141bb5386;
  }
  else if (local_3b7 != '\0') goto LAB_141bb5194;
  puVar33 = (ulonglong *)(param_2 + 0x30);
  puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar19 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
    FMemStackBase::AllocateNewChunk(puVar33,0x20);
    puVar19 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar19 + 3;
  }
  *puVar33 = (ulonglong)puVar15;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar19;
  *(undefined8 **)(param_2 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_144e0a8f8;
  *(undefined4 *)(puVar19 + 2) = 0;
  *(undefined2 *)((longlong)puVar19 + 0x14) = 0x101;
LAB_141bb5386:
  puVar33 = (ulonglong *)(param_2 + 0x30);
  cVar7 = FUN_141d66670(param_1,*(undefined4 *)(param_1 + 0x2a0));
  if ((cVar7 != '\0') && (*(int *)(DAT_146a29410 + 4) == 1)) {
    puVar19 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar19 + 2;
    if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(puVar33,0x18);
      puVar19 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar19 + 2;
    }
    *puVar33 = (ulonglong)puVar15;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar19;
    *(undefined8 **)(param_2 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    *puVar19 = &PTR_LAB_143f594a0;
  }
  cVar7 = local_3b5;
  if (*(char *)(param_1 + 0x72) != '\0') {
    if (local_3b6 == '\0') {
      if (0 < *(int *)(param_1 + 200)) {
        do {
          FUN_141c55450(&DAT_146a503f0,param_2,(longlong)(int)puVar27 * 0x30d0 + *plVar30,cVar6);
          uVar21 = (int)puVar27 + 1;
          puVar27 = (undefined8 *)(ulonglong)uVar21;
        } while ((int)uVar21 < *(int *)(param_1 + 200));
      }
    }
    else if ((local_3b7 != '\0') && (0 < *(int *)(param_1 + 200))) {
      do {
        lVar14 = (longlong)(int)puVar27 * 0x30d0 + *plVar30;
        uVar8 = FUN_141d76c80(lVar14);
        local_3c8 = CONCAT71(local_3c8._1_7_,uVar8);
        FUN_141b90610(param_1,param_2,lVar14,cVar7);
        uVar21 = (int)puVar27 + 1;
        puVar27 = (undefined8 *)(ulonglong)uVar21;
      } while ((int)uVar21 < *(int *)(param_1 + 200));
    }
  }
  FRHICommandListImmediate::SetCurrentStat(param_2,local_3b8);
  FUN_141d70910(param_1,param_2);
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  if (local_3a8 != (undefined8 *)0x0) {
    FMemory::Free(local_3a8);
  }
  return;
}



// FUNCTION 141bb5590 FUN_141bb5590 body=2649 status=ok
// SIG undefined FUN_141bb5590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bb5590(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  undefined8 *puVar18;
  float *pfVar19;
  float *pfVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_2a8 [32];
  undefined1 *local_288;
  char local_278;
  char local_277;
  float local_270 [4];
  undefined1 local_260;
  int local_25c;
  int local_258;
  longlong local_250;
  longlong local_248;
  undefined8 local_240;
  longlong local_238;
  undefined1 local_230 [8];
  longlong local_228;
  undefined1 local_220 [8];
  longlong local_218;
  longlong local_210;
  undefined4 local_208;
  longlong local_200;
  float local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8 [24];
  undefined1 local_190 [24];
  undefined1 local_178 [64];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  int local_78;
  char local_74;
  ulonglong local_70;
  
  local_70 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  if ((*(int *)(*(longlong *)(param_1 + 8) + 0x1198) !=
       *(int *)(*(longlong *)(param_1 + 8) + 0x11c4)) &&
     (local_210 = param_1, cVar10 = FUN_142753a10(), cVar10 != '\0')) {
    iVar11 = FSceneViewFamily::GetFeatureLevel(param_1 + 0x10);
    if ((&DAT_1464c9c48)[iVar11] != 0xb) {
      uVar12 = FSceneRenderTargets::Get(param_2);
      local_208 = 0x11;
      local_288 = (undefined1 *)CONCAT71(local_288._1_7_,1);
      FUN_141cdeb70(uVar12,param_2,0,0x11);
    }
    local_ec = 0x26;
    local_f8 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f0 = 0;
    local_e4 = 0;
    local_dc = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_94 = 0;
    local_8c = 0;
    local_84 = 0;
    FUN_14049afe0(param_2,&local_138);
    local_258 = 0;
    if (0 < *(int *)(param_1 + 200)) {
      local_218 = 0;
      cVar10 = local_277;
      do {
        local_248 = 0;
        lVar22 = local_218 * 0x30d0 + *(longlong *)(param_1 + 0xc0);
        local_240 = 0;
        local_250 = lVar22;
        FUN_141afd5d0(*(undefined8 *)(param_1 + 8),lVar22,3);
        if ((int)local_240 != 0) {
          uVar3 = *(undefined4 *)(lVar22 + 0x1aac);
          uVar4 = *(undefined4 *)(lVar22 + 0x1aa8);
          puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          uVar5 = *(undefined4 *)(lVar22 + 0x1aa4);
          uVar6 = *(undefined4 *)(lVar22 + 0x1aa0);
          puVar13 = puVar18 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar13 = puVar18 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar13;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar18;
          *(undefined8 **)(param_2 + 8) = puVar18 + 1;
          puVar18[1] = 0;
          *(undefined4 *)((longlong)puVar18 + 0x14) = uVar5;
          lVar22 = 0;
          *puVar18 = &PTR_LAB_143f59420;
          *(undefined4 *)(puVar18 + 3) = 0;
          *(undefined4 *)(puVar18 + 2) = uVar6;
          *(undefined4 *)((longlong)puVar18 + 0x1c) = uVar4;
          *(undefined4 *)(puVar18 + 4) = uVar3;
          *(undefined4 *)((longlong)puVar18 + 0x24) = 0x3f800000;
          puVar13 = (undefined8 *)FUN_141ee3600();
          puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          uVar12 = *puVar13;
          puVar13 = puVar18 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar13 = puVar18 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar13;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          local_25c = 0;
          local_74 = '\0';
          **(undefined8 **)(param_2 + 8) = puVar18;
          *(undefined8 **)(param_2 + 8) = puVar18 + 1;
          puVar18[1] = 0;
          *puVar18 = &PTR_LAB_143f489e0;
          *(undefined4 *)(puVar18 + 2) = 0;
          puVar18[3] = uVar12;
          *(undefined4 *)(puVar18 + 4) = 0;
          local_278 = '\0';
          iVar11 = FUN_14274f1e0();
          local_277 = iVar11 == 4;
          if ((bool)local_277) {
            local_108 = FUN_1404a0ce0();
          }
          local_200 = (longlong)(int)local_240;
          lVar21 = local_250;
          if (0 < local_200) {
            do {
              lVar15 = *(longlong *)(local_248 + 0x10 + lVar22 * 0x28);
              lVar2 = local_248 + lVar22 * 0x28;
              local_1e8 = *(undefined8 *)(lVar15 + 0x80);
              uStack_1e0 = *(undefined8 *)(lVar15 + 0x88);
              local_1d8 = *(undefined8 *)(lVar15 + 0x90);
              uStack_1d0 = *(undefined8 *)(lVar15 + 0x98);
              local_1c8 = *(undefined4 *)(lVar15 + 0xa0);
              uStack_1c4 = *(undefined4 *)(lVar15 + 0xa4);
              uStack_1c0 = *(undefined4 *)(lVar15 + 0xa8);
              uStack_1bc = *(undefined4 *)(lVar15 + 0xac);
              local_1b8 = *(float *)(lVar15 + 0xb0);
              fStack_1b4 = *(float *)(lVar15 + 0xb4);
              fStack_1b0 = *(float *)(lVar15 + 0xb8);
              uStack_1ac = *(undefined4 *)(lVar15 + 0xbc);
              FUN_141afe480(local_178,lVar21,&local_1e8);
              local_1f0 = *(float *)(lVar21 + 0x8e4);
              fVar25 = (float)*(undefined8 *)(lVar21 + 0x8dc) - local_1b8;
              fVar26 = (float)((ulonglong)*(undefined8 *)(lVar21 + 0x8dc) >> 0x20) - fStack_1b4;
              local_270[0] = 1.0;
              local_270[1] = 1.0;
              local_270[2] = 1.0;
              fVar24 = *(float *)(lVar21 + 0x11b0) + *(float *)(lVar21 + 0x11b0) +
                       *(float *)(lVar2 + 0x1c) * 1.05;
              bVar8 = fVar26 * fVar26 + fVar25 * fVar25 +
                      (local_1f0 - fStack_1b0) * (local_1f0 - fStack_1b0) < fVar24 * fVar24;
              pfVar20 = (float *)(lVar15 + 0x98);
              uVar14 = 0;
              do {
                fVar24 = pfVar20[-6] * pfVar20[-6] + pfVar20[-5] * pfVar20[-5] +
                         pfVar20[-4] * pfVar20[-4];
                iVar11 = (int)uVar14;
                if (fVar24 <= 1e-08) {
                  if (iVar11 == 0) {
                    pfVar19 = local_270;
                  }
                  else {
                    pfVar19 = local_270 + 1;
                    if (iVar11 != 1) {
                      pfVar19 = local_270 + 2;
                    }
                  }
                  *pfVar19 = 0.0;
                  fVar24 = local_270[0];
                }
                else {
                  fVar24 = SQRT(fVar24);
                  if (iVar11 != 0) {
                    pfVar19 = local_270 + 1;
                    if (iVar11 != 1) {
                      pfVar19 = local_270 + 2;
                    }
                    *pfVar19 = fVar24;
                    fVar24 = local_270[0];
                  }
                }
                local_270[0] = fVar24;
                fVar24 = pfVar20[-2] * pfVar20[-2] + pfVar20[-1] * pfVar20[-1] + *pfVar20 * *pfVar20
                ;
                if (fVar24 <= 1e-08) {
                  if (iVar11 == -1) {
                    pfVar19 = local_270;
                  }
                  else {
                    pfVar19 = local_270 + 1;
                    if (iVar11 != 0) {
                      pfVar19 = local_270 + 2;
                    }
                  }
                  *pfVar19 = 0.0;
                  fVar24 = local_270[0];
                }
                else {
                  fVar24 = SQRT(fVar24);
                  if (iVar11 != -1) {
                    pfVar19 = local_270 + 1;
                    if (iVar11 != 0) {
                      pfVar19 = local_270 + 2;
                    }
                    *pfVar19 = fVar24;
                    fVar24 = local_270[0];
                  }
                }
                local_270[0] = fVar24;
                fVar24 = pfVar20[2] * pfVar20[2] + pfVar20[3] * pfVar20[3] + pfVar20[4] * pfVar20[4]
                ;
                if (fVar24 <= 1e-08) {
                  if (iVar11 == -2) {
                    pfVar19 = local_270;
                  }
                  else {
                    pfVar19 = local_270 + 1;
                    if (iVar11 != -1) {
                      pfVar19 = local_270 + 2;
                    }
                  }
                  *pfVar19 = 0.0;
                  fVar24 = local_270[0];
                }
                else {
                  fVar24 = SQRT(fVar24);
                  if (iVar11 != -2) {
                    pfVar19 = local_270 + 1;
                    if (iVar11 != -1) {
                      pfVar19 = local_270 + 2;
                    }
                    *pfVar19 = fVar24;
                    fVar24 = local_270[0];
                  }
                }
                local_270[0] = fVar24;
                uVar14 = (ulonglong)(iVar11 + 3U);
                pfVar20 = pfVar20 + 0xc;
              } while ((int)(iVar11 + 3U) < 3);
              bVar23 = bVar8;
              if (*(char *)(lVar21 + 0x11b4) != '\0') {
                bVar23 = !bVar8;
              }
              if (local_270[1] * local_270[0] * local_270[2] < 0.0) {
                bVar23 = !bVar23;
              }
              uVar17 = (uint)bVar23;
              iVar11 = uVar17 + 1;
              local_260 = bVar8;
              uVar14 = uStack_100;
              if (local_25c != iVar11) {
                local_25c = iVar11;
                if (uVar17 == 0) {
                  uVar14 = FUN_141ac06b0();
                }
                else {
                  uVar14 = 0;
                  if (uVar17 == 1) {
                    uVar14 = FUN_141ac0570();
                  }
                }
              }
              uStack_100 = uVar14;
              if ((local_278 == '\0') || ((bool)cVar10 != bVar8)) {
                local_278 = '\x01';
                if (bVar8) {
                  lVar15 = DAT_146a49618;
                  if (DAT_146a49618 == 0) {
                    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
                      cVar10 = IsInRenderingThread();
                      if (cVar10 == '\0') {
                        FScopedEvent::FScopedEvent(local_230);
                        plVar16 = (longlong *)FUN_14049e3d0(local_1a8,0,0xff);
                        lVar21 = *plVar16;
                        *(undefined1 **)(lVar21 + 0x10) = &LAB_141b9e820;
                        *(undefined1 **)(lVar21 + 0x18) = local_230;
                        lVar21 = *plVar16;
                        lVar9 = plVar16[2];
                        lVar15 = plVar16[1];
                        lVar7 = *(longlong *)(lVar21 + 0x28);
                        piVar1 = (int *)(lVar7 + 0x48);
                        if (lVar7 != 0) {
                          LOCK();
                          *piVar1 = *piVar1 + 1;
                          UNLOCK();
                        }
                        local_238 = lVar7;
                        FUN_1404a4fe0(lVar21,lVar15,(int)lVar9,1);
                        if (lVar7 != 0) {
                          LOCK();
                          iVar11 = *piVar1;
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (iVar11 == 1) {
                            FGraphEvent::Recycle(local_238);
                          }
                        }
                        FScopedEvent::~FScopedEvent(local_230);
                        lVar15 = DAT_146a49618;
                        lVar21 = local_250;
                      }
                      else {
                        lVar15 = operator_new(0x38);
                        if (lVar15 == 0) {
                          DAT_146a49618 = 0;
                          lVar15 = DAT_146a49618;
                        }
                        else {
                          DAT_146a49618 =
                               TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,128,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                               ::FStaticStateResource::FStaticStateResource(lVar15);
                          lVar15 = DAT_146a49618;
                        }
                      }
                    }
                    else {
                      lVar15 = operator_new();
                      if (lVar15 == 0) {
                        LOCK();
                        if (DAT_146a49618 == 0) {
                          DAT_146a49618 = 0;
                        }
                        UNLOCK();
                        lVar15 = DAT_146a49618;
                      }
                      else {
                        lVar15 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,128,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                                 ::FStaticStateResource::FStaticStateResource(lVar15);
                        LOCK();
                        if (DAT_146a49618 != 0) {
                          lVar15 = DAT_146a49618;
                        }
                        DAT_146a49618 = lVar15;
                        UNLOCK();
                        lVar15 = DAT_146a49618;
                      }
                    }
                  }
                }
                else {
                  lVar15 = DAT_146a49610;
                  if (DAT_146a49610 == 0) {
                    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
                      cVar10 = IsInRenderingThread();
                      if (cVar10 == '\0') {
                        FScopedEvent::FScopedEvent(local_220);
                        plVar16 = (longlong *)FUN_14049e3d0(local_190,0,0xff);
                        lVar21 = *plVar16;
                        *(undefined1 **)(lVar21 + 0x10) = &LAB_141b9e810;
                        *(undefined1 **)(lVar21 + 0x18) = local_220;
                        lVar21 = *plVar16;
                        lVar9 = plVar16[2];
                        lVar15 = plVar16[1];
                        lVar7 = *(longlong *)(lVar21 + 0x28);
                        piVar1 = (int *)(lVar7 + 0x48);
                        if (lVar7 != 0) {
                          LOCK();
                          *piVar1 = *piVar1 + 1;
                          UNLOCK();
                        }
                        local_228 = lVar7;
                        FUN_1404a4fe0(lVar21,lVar15,(int)lVar9,1);
                        if (lVar7 != 0) {
                          LOCK();
                          iVar11 = *piVar1;
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (iVar11 == 1) {
                            FGraphEvent::Recycle(local_228);
                          }
                        }
                        FScopedEvent::~FScopedEvent(local_220);
                        lVar15 = DAT_146a49610;
                        lVar21 = local_250;
                      }
                      else {
                        lVar15 = operator_new(0x38);
                        if (lVar15 == 0) {
                          DAT_146a49610 = 0;
                          lVar15 = DAT_146a49610;
                        }
                        else {
                          DAT_146a49610 =
                               TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,0,0,0,0,7,0,0,0,128,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                               ::FStaticStateResource::FStaticStateResource(lVar15);
                          lVar15 = DAT_146a49610;
                        }
                      }
                    }
                    else {
                      lVar15 = operator_new();
                      if (lVar15 == 0) {
                        LOCK();
                        if (DAT_146a49610 == 0) {
                          DAT_146a49610 = 0;
                        }
                        UNLOCK();
                        lVar15 = DAT_146a49610;
                      }
                      else {
                        lVar15 = TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,0,0,0,0,7,0,0,0,128,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                                 ::FStaticStateResource::FStaticStateResource(lVar15);
                        LOCK();
                        if (DAT_146a49610 != 0) {
                          lVar15 = DAT_146a49610;
                        }
                        DAT_146a49610 = lVar15;
                        UNLOCK();
                        lVar15 = DAT_146a49610;
                      }
                    }
                  }
                }
                local_f8 = *(undefined8 *)(lVar15 + 0x30);
                cVar10 = bVar8;
              }
              if ((local_277 == '\0') &&
                 ((local_74 == '\0' || (local_78 != *(int *)(lVar2 + 0x20))))) {
                if ((int *)(lVar2 + 0x20) == &local_78) {
                  iVar11 = *(int *)(lVar2 + 0x20);
                }
                else {
                  iVar11 = *(int *)(lVar2 + 0x20);
                  local_74 = '\x01';
                  local_78 = iVar11;
                }
                if (iVar11 == 0) {
                  local_108 = FUN_141abdaf0();
                }
                else if (iVar11 == 1) {
                  local_108 = FUN_141b9d980();
                }
                else if (iVar11 == 3) {
                  local_108 = FUN_141abd370();
                }
                else if (iVar11 == 0xd) {
                  local_108 = FUN_141b9d700();
                }
              }
              local_288 = local_178;
              FUN_141b17ea0(param_2,&local_138,lVar21);
              plVar16 = (longlong *)FUN_141ee35f0();
              lVar2 = *plVar16;
              if (lVar2 == 0) {
                LowLevelFatalErrorHandler
                          ("Unknown",0x8d8,
                           L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
                FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x8d8);
              }
              puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar13 = puVar18 + 7;
              if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x40);
                puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar13 = puVar18 + 7;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar13;
              lVar22 = lVar22 + 1;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar18;
              *(undefined8 **)(param_2 + 8) = puVar18 + 1;
              puVar18[1] = 0;
              *puVar18 = &PTR_LAB_143f489d0;
              puVar18[2] = lVar2;
              puVar18[3] = 0;
              *(undefined4 *)(puVar18 + 4) = 0;
              *(undefined8 *)((longlong)puVar18 + 0x24) = 8;
              *(undefined4 *)((longlong)puVar18 + 0x2c) = 0xc;
              *(undefined4 *)(puVar18 + 6) = 1;
            } while (lVar22 < local_200);
          }
        }
        local_258 = local_258 + 1;
        local_218 = local_218 + 1;
        param_1 = local_210;
      } while (local_258 < *(int *)(local_210 + 200));
    }
  }
  return;
}



// FUNCTION 141bb5ff0 FUN_141bb5ff0 body=4802 status=ok
// SIG undefined FUN_141bb5ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bb5ff0(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,char param_5
                  )

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  bool bVar9;
  ulonglong uVar10;
  char cVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_398 [32];
  ulonglong local_378;
  undefined8 local_370;
  float local_368;
  float local_360;
  float local_358;
  undefined8 local_350;
  undefined8 local_348;
  longlong local_340;
  undefined4 local_338;
  undefined4 local_330;
  uint local_328;
  ulonglong local_320;
  float local_318;
  float local_314;
  longlong local_310;
  uint local_308;
  float local_304;
  int local_300;
  uint local_2fc;
  longlong local_2f8;
  longlong local_2f0;
  int local_2e8;
  int local_2e4;
  undefined4 local_2e0;
  int local_2dc;
  uint local_2d8;
  int local_2d4;
  int local_2d0;
  undefined4 local_2cc;
  int local_2c8 [2];
  longlong local_2c0;
  undefined1 local_2b8 [8];
  longlong local_2b0;
  undefined1 local_2a8 [8];
  int local_2a0;
  int iStack_29c;
  ulonglong local_298;
  longlong local_290;
  longlong local_288;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230 [2];
  float local_220;
  undefined8 local_218;
  undefined *local_210;
  undefined4 local_208;
  undefined *local_200;
  undefined4 local_1f8;
  undefined *local_1f0;
  int local_1e8;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined *local_1c0;
  int local_1b8;
  char local_1ab;
  undefined1 local_1a0 [24];
  undefined1 local_188 [32];
  undefined8 local_168;
  longlong *plStack_160;
  undefined1 local_158 [16];
  longlong *local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined1 local_120;
  undefined3 uStack_11f;
  ulonglong local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  uVar24 = 0;
  local_2fc = 0;
  local_158 = ZEXT816(0);
  local_168 = 0;
  plStack_160 = (longlong *)0x0;
  local_148 = (longlong *)0x0;
  uStack_140 = 0;
  local_128 = 0;
  local_120 = 0;
  uStack_11f = 0;
  local_11c = 0x26;
  local_114 = 0;
  local_10c = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  local_320 = param_3;
  local_310 = param_2;
  local_2f0 = param_1;
  local_290 = param_4;
  local_138 = local_158;
  FUN_14049afe0(param_2,&local_168);
  uVar12 = FUN_141b33400();
  local_138._0_8_ = uVar12;
  local_11c = local_11c & 0xffffffff00000000;
  (**(code **)(**(longlong **)(param_3 + 0x30) + 0x10))(*(longlong **)(param_3 + 0x30),&local_280);
  local_300 = 0;
  local_308 = *(uint *)(*(longlong *)(param_3 + 0x30) + 0x180) >> 8;
  if (0 < *(int *)(local_2f0 + 200)) {
    local_298 = (ulonglong)_tls_index;
    local_288 = 0;
    uVar22 = uVar24;
    do {
      lVar23 = local_288 * 0x30d0 + *(longlong *)(local_2f0 + 0xc0);
      local_2f8 = lVar23;
      cVar11 = FUN_141be7b80(param_3,lVar23);
      lVar8 = local_310;
      if (cVar11 != '\0') {
        local_304 = (float)(*(int *)(param_3 + 0xb0) + uVar24);
        local_328 = uVar24 + 1;
        if ((*(byte *)(*(longlong *)(lVar23 + 0x10) + 0x2c) & 2) == 0) {
          uVar24 = 0;
        }
        else {
          lVar13 = *(longlong *)(*(longlong *)(param_3 + 0x30) + 0x178);
          if (lVar13 == 0) {
            uVar24 = 0;
          }
          else {
            uVar24 = (uint)(*(longlong *)(lVar13 + 0x60) != 0);
          }
        }
        puVar1 = (ulonglong *)(local_310 + 0x30);
        uVar4 = *(undefined4 *)(lVar23 + 0x1aac);
        uVar5 = *(undefined4 *)(lVar23 + 0x1aa8);
        puVar16 = (undefined8 *)(*(longlong *)(local_310 + 0x30) + 7U & 0xfffffffffffffff8);
        uVar6 = *(undefined4 *)(lVar23 + 0x1aa4);
        uVar7 = *(undefined4 *)(lVar23 + 0x1aa0);
        puVar21 = puVar16 + 5;
        if (*(undefined8 **)(local_310 + 0x38) < puVar21) {
          FMemStackBase::AllocateNewChunk(puVar1,0x30);
          puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar21 = puVar16 + 5;
        }
        lVar23 = local_2f8;
        uVar10 = local_320;
        *puVar1 = (ulonglong)puVar21;
        *(int *)(local_310 + 0x14) = *(int *)(local_310 + 0x14) + 1;
        **(undefined8 **)(local_310 + 8) = puVar16;
        *(undefined8 **)(local_310 + 8) = puVar16 + 1;
        *(undefined4 *)((longlong)puVar16 + 0x14) = uVar6;
        puVar16[1] = 0;
        *puVar16 = &PTR_LAB_143f59420;
        *(undefined4 *)(puVar16 + 2) = uVar7;
        *(undefined4 *)(puVar16 + 3) = 0;
        *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar5;
        *(undefined4 *)(puVar16 + 4) = uVar4;
        *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
        if (*(char *)(*(longlong *)(local_320 + 0x30) + 0x188) == '\0') {
          local_120 = 0;
          local_210 = &DAT_146a2df00;
          plVar15 = (longlong *)0x0;
          lVar8 = *(longlong *)(local_2f8 + 0x3090);
          local_208 = 0;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar8 + 0x38,&local_2e8,&local_210);
          plVar14 = plVar15;
          if (local_2e8 != -1) {
            plVar14 = (longlong *)((longlong)local_2e8 * 0x20 + *(longlong *)(lVar8 + 0x38));
          }
          plVar20 = plVar14 + 2;
          if (plVar14 == (longlong *)0x0) {
            plVar20 = plVar15;
          }
          lVar8 = *plVar20;
          if (DAT_146864320 == 0) {
            if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
              cVar11 = IsInRenderingThread();
              if (cVar11 == '\0') {
                FScopedEvent::FScopedEvent(local_2b8);
                plVar14 = (longlong *)FUN_14049e3d0(local_1a0,0,0xff);
                lVar13 = *plVar14;
                *(undefined1 **)(lVar13 + 0x10) = &LAB_140985690;
                *(undefined1 **)(lVar13 + 0x18) = local_2b8;
                lVar13 = *plVar14;
                lVar18 = plVar14[2];
                lVar19 = plVar14[1];
                lVar17 = *(longlong *)(lVar13 + 0x28);
                piVar2 = (int *)(lVar17 + 0x48);
                if (lVar17 != 0) {
                  LOCK();
                  *piVar2 = *piVar2 + 1;
                  UNLOCK();
                }
                local_2c0 = lVar17;
                FUN_1404a4fe0(lVar13,lVar19,(int)lVar18,1);
                if (lVar17 != 0) {
                  LOCK();
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    FGraphEvent::Recycle(local_2c0);
                  }
                }
                FScopedEvent::~FScopedEvent(local_2b8);
              }
              else {
                lVar13 = operator_new(0x38);
                if (lVar13 == 0) {
                  DAT_146864320 = 0;
                }
                else {
                  DAT_146864320 =
                       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar13);
                }
              }
            }
            else {
              lVar13 = operator_new(0x38);
              if (lVar13 == 0) {
                LOCK();
                if (DAT_146864320 == 0) {
                  DAT_146864320 = 0;
                }
                UNLOCK();
              }
              else {
                lVar13 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                         ::FStaticStateResource::FStaticStateResource(lVar13);
                LOCK();
                if (DAT_146864320 != 0) {
                  lVar13 = DAT_146864320;
                }
                DAT_146864320 = lVar13;
                UNLOCK();
              }
            }
          }
          local_138._8_8_ = *(undefined8 *)(DAT_146864320 + 0x30);
          if (DAT_146864318 == 0) {
            if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
              cVar11 = IsInRenderingThread();
              if (cVar11 == '\0') {
                FScopedEvent::FScopedEvent(local_2a8);
                plVar14 = (longlong *)FUN_14049e3d0(local_188,0,0xff);
                lVar13 = *plVar14;
                *(undefined1 **)(lVar13 + 0x10) = &LAB_140985680;
                *(undefined1 **)(lVar13 + 0x18) = local_2a8;
                lVar13 = *plVar14;
                lVar18 = plVar14[2];
                lVar19 = plVar14[1];
                lVar17 = *(longlong *)(lVar13 + 0x28);
                piVar2 = (int *)(lVar17 + 0x48);
                if (lVar17 != 0) {
                  LOCK();
                  *piVar2 = *piVar2 + 1;
                  UNLOCK();
                }
                local_2b0 = lVar17;
                FUN_1404a4fe0(lVar13,lVar19,(int)lVar18,1);
                if (lVar17 != 0) {
                  LOCK();
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    FGraphEvent::Recycle(local_2b0);
                  }
                }
                FScopedEvent::~FScopedEvent(local_2a8);
              }
              else {
                lVar13 = operator_new(0x38);
                if (lVar13 == 0) {
                  DAT_146864318 = 0;
                }
                else {
                  DAT_146864318 =
                       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar13);
                }
              }
            }
            else {
              lVar13 = operator_new(0x38);
              if (lVar13 == 0) {
                LOCK();
                if (DAT_146864318 == 0) {
                  DAT_146864318 = 0;
                }
                UNLOCK();
              }
              else {
                lVar13 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                         ::FStaticStateResource::FStaticStateResource(lVar13);
                LOCK();
                if (DAT_146864318 != 0) {
                  lVar13 = DAT_146864318;
                }
                DAT_146864318 = lVar13;
                UNLOCK();
              }
            }
          }
          local_128 = *(undefined8 *)(DAT_146864318 + 0x30);
          lVar13 = *(longlong *)(lVar23 + 0x3090);
          if (param_5 == '\0') {
            local_1f0 = &DAT_146a287a0;
            local_1e8 = ((*(uint *)(lVar23 + 0x28cc) >> 10 & 1) + (local_308 & 1) * 2) * 0x18;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar13 + 0x38,&local_2dc,&local_1f0);
            plVar14 = plVar15;
            if (local_2dc != -1) {
              plVar14 = (longlong *)((longlong)local_2dc * 0x20 + *(longlong *)(lVar13 + 0x38));
            }
            plVar20 = plVar14 + 2;
            if (plVar14 == (longlong *)0x0) {
              plVar20 = plVar15;
            }
            lVar13 = *plVar20;
            local_168 = DAT_1464c2720;
            if (lVar8 == 0) {
              uVar22 = uVar22 | 4;
              local_260 = 0;
              plStack_160 = plVar15;
            }
            else {
              lVar19 = *(longlong *)(lVar8 + 0x48);
              if (*(char *)(lVar19 + 0x28) == '\0') {
                FUN_1419f3850(lVar19);
              }
              plStack_160 = *(longlong **)(lVar19 + 0x38);
            }
            if ((uVar22 & 4) != 0) {
              uVar22 = uVar22 & 0xfffffffb;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_260);
            }
            if (lVar13 == 0) {
              uVar22 = uVar22 | 8;
              local_258 = 0;
            }
            else {
              lVar19 = *(longlong *)(lVar13 + 0x48);
              if (*(char *)(lVar19 + 0x28) == '\0') {
                FUN_1419f3850(lVar19);
              }
              plVar15 = *(longlong **)(lVar19 + 0x40);
            }
            local_148 = plVar15;
            if ((uVar22 & 8) != 0) {
              uVar22 = uVar22 & 0xfffffff7;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_258);
            }
            lVar19 = local_310;
            FUN_141ed6ac0(local_310,&local_168,2,1);
            local_368 = local_304;
            local_370 = *(undefined8 *)(*(longlong *)(local_2f0 + 8) + 0x60e0);
            local_378 = local_290;
            FUN_141bbe780(lVar13,lVar19,lVar23,local_320);
          }
          else {
            local_1f8 = 0;
            local_200 = &DAT_146a2e2f0;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar13 + 0x38,&local_2e4,&local_200);
            plVar14 = plVar15;
            if (local_2e4 != -1) {
              plVar14 = (longlong *)((longlong)local_2e4 * 0x20 + *(longlong *)(lVar13 + 0x38));
            }
            plVar20 = plVar14 + 2;
            if (plVar14 == (longlong *)0x0) {
              plVar20 = plVar15;
            }
            lVar13 = *plVar20;
            local_168 = DAT_1464c2720;
            if (lVar8 == 0) {
              uVar22 = uVar22 | 1;
              local_218 = 0;
              plStack_160 = plVar15;
            }
            else {
              lVar19 = *(longlong *)(lVar8 + 0x48);
              if (*(char *)(lVar19 + 0x28) == '\0') {
                FUN_1419f3850(lVar19);
              }
              plStack_160 = *(longlong **)(lVar19 + 0x38);
            }
            if ((uVar22 & 1) != 0) {
              uVar22 = uVar22 & 0xfffffffe;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_218);
            }
            if (lVar13 == 0) {
              uVar22 = uVar22 | 2;
              local_270 = 0;
            }
            else {
              lVar19 = *(longlong *)(lVar13 + 0x48);
              if (*(char *)(lVar19 + 0x28) == '\0') {
                FUN_1419f3850(lVar19);
              }
              plVar15 = *(longlong **)(lVar19 + 0x40);
            }
            local_148 = plVar15;
            if ((uVar22 & 2) != 0) {
              uVar22 = uVar22 & 0xfffffffd;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_270);
            }
            lVar19 = local_310;
            FUN_141ed6ac0(local_310,&local_168,2,1);
            lVar17 = *(longlong *)(lVar13 + 0x48);
            if (*(char *)(lVar17 + 0x28) == '\0') {
              FUN_1419f3850(lVar17);
            }
            uVar12 = *(undefined8 *)(lVar17 + 0x40);
            local_268 = uVar12;
            FUN_141aa9590(lVar13,lVar19,uVar12,*(undefined8 *)(lVar23 + 0x20));
            uVar10 = local_320;
            if (*(int *)(*(longlong *)(local_320 + 0x30) + 0x14c) == -1) {
              local_2e0 = 0;
            }
            else {
              local_2e0 = 0x3f800000;
            }
            local_378 = local_378 & 0xffffffff00000000;
            SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                      (lVar19,uVar12,lVar13 + 0xc0,&local_2e0);
            local_378 = CONCAT44(local_378._4_4_,0xf);
            FUN_141aa6800(lVar13 + 200,lVar19,&local_268,*(undefined4 *)(lVar23 + 0x1a38));
            lVar17 = 0;
            if (0 < *(int *)(lVar13 + 0x10)) {
              do {
                if (*(undefined **)(*(longlong *)(lVar13 + 8) + lVar17 * 8) == &DAT_146a286e0) {
                  if (lVar17 != -1) {
                    puVar21 = *(undefined8 **)(*(longlong *)(lVar13 + 0x18) + lVar17 * 8);
                    *(undefined4 *)puVar21 = *(undefined4 *)(lVar13 + 0xb8);
                    goto LAB_141bb675c;
                  }
                  break;
                }
                lVar17 = lVar17 + 1;
              } while (lVar17 < *(int *)(lVar13 + 0x10));
            }
            if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + local_298 * 8) + 0x38)
                 < DAT_146a253f8) && (_Init_thread_header(&DAT_146a253f8), DAT_146a253f8 == -1)) {
              DAT_146a253f0._0_4_ = 0;
              DAT_146a253f0._4_2_ = 0;
              DAT_146a253f0._6_1_ = 0;
              _Init_thread_footer(&DAT_146a253f8);
            }
            puVar21 = &DAT_146a253f0;
LAB_141bb675c:
            local_378 = lVar23;
            FUN_141b51280(lVar19,uVar12,puVar21,uVar10);
          }
          lVar13 = *(longlong *)(lVar8 + 0x48);
          uVar12 = *(undefined8 *)(lVar23 + 0x20);
          if (*(char *)(lVar13 + 0x28) == '\0') {
            FUN_1419f3850(lVar13);
          }
          FUN_141aa9800(lVar8,lVar19,*(undefined8 *)(lVar13 + 0x38),uVar12);
          param_3 = local_320;
          local_378 = local_320;
          FUN_141bbc490(lVar8 + 0xc0,lVar19,lVar8,lVar23);
          lVar13 = *(longlong *)(lVar8 + 0x48);
          local_2d8 = *(uint *)(param_3 + 0x90) >> 1 & 1;
          if (*(char *)(lVar13 + 0x28) == '\0') {
            FUN_1419f3850(lVar13);
          }
          local_378 = local_378 & 0xffffffff00000000;
          FUN_1404986d0(lVar19,*(undefined8 *)(lVar13 + 0x38),lVar8 + 0xd8,&local_2d8);
          lVar13 = FSceneRenderTargets::Get(lVar19);
          iStack_29c = *(int *)(lVar23 + 0x1aac) - *(int *)(lVar23 + 0x1aa4);
          local_348 = *(undefined8 *)(lVar13 + 0x378);
          local_2a0 = *(int *)(lVar23 + 0x1aa8) - *(int *)(lVar23 + 0x1aa0);
          local_330 = 1;
          local_338 = 1;
          local_358 = (float)iStack_29c;
          local_350 = CONCAT44(iStack_29c,local_2a0);
          local_360 = (float)local_2a0;
          local_368 = (float)*(int *)(lVar23 + 0x1aa4);
          local_370 = CONCAT44(local_370._4_4_,(float)*(int *)(lVar23 + 0x1aa0));
          local_378 = CONCAT44(local_378._4_4_,local_358);
          local_340 = lVar8;
          DrawRectangle(lVar19);
          uVar24 = local_328;
        }
        else {
          if ((DAT_146ab62ec == '\0') || (local_120 = 1, DAT_1464c1f68 == 0)) {
            local_120 = 0;
          }
          local_1e0 = &DAT_146a2e050;
          local_1d8 = 0;
          lVar13 = *(longlong *)(local_2f8 + 0x3090);
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar13 + 0x38,&local_2d4,&local_1e0);
          if (local_2d4 == -1) {
            lVar13 = 0;
          }
          else {
            lVar13 = (longlong)local_2d4 * 0x20 + *(longlong *)(lVar13 + 0x38);
          }
          local_220 = *(float *)(lVar23 + 0x8e4);
          fVar27 = (float)*(undefined8 *)(lVar23 + 0x8dc) - local_280;
          plVar15 = (longlong *)(lVar13 + 0x10);
          if (lVar13 == 0) {
            plVar15 = (longlong *)0x0;
          }
          fVar26 = (float)((ulonglong)*(undefined8 *)(lVar23 + 0x8dc) >> 0x20) - local_27c;
          lVar13 = *plVar15;
          fVar25 = *(float *)(lVar23 + 0x11b0) + *(float *)(lVar23 + 0x11b0) + local_274 * 1.05;
          if ((fVar27 * fVar27 + fVar26 * fVar26 + (local_220 - local_278) * (local_220 - local_278)
               < fVar25 * fVar25) ||
             (1.0 < *(float *)(lVar23 + 0x3cc) || *(float *)(lVar23 + 0x3cc) == 1.0)) {
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
          if (bVar9) {
            if (*(char *)(lVar23 + 0x11b4) == '\0') {
              uVar12 = FUN_141ac06b0();
              local_138._8_8_ = uVar12;
              local_128 = FUN_1409853f0();
            }
            else {
              uVar12 = FUN_141ac0570();
              local_138._8_8_ = uVar12;
              local_128 = FUN_1409853f0();
            }
          }
          else {
            if (*(char *)(lVar23 + 0x11b4) == '\0') {
              uVar12 = FUN_141ac0570();
            }
            else {
              uVar12 = FUN_141ac06b0();
            }
            local_138._8_8_ = uVar12;
            local_128 = FUN_141abfb70();
          }
          if (param_5 == '\0') {
            cVar11 = (**(code **)(**(longlong **)(uVar10 + 0x30) + 0x38))();
            local_1ab = (**(code **)(**(longlong **)(uVar10 + 0x30) + 0x30))();
            local_1c0 = &DAT_146a287a0;
            local_1b8 = (cVar11 != '\0') + 1 +
                        ((-(uint)(local_1ab != '\0') & 2) + uVar24 +
                        ((*(uint *)(lVar23 + 0x28cc) >> 10 & 1) + (local_308 & 1) * 2) * 8) * 3;
            lVar19 = *(longlong *)(lVar23 + 0x3090);
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar19 + 0x38,local_2c8,&local_1c0);
            if (local_2c8[0] == -1) {
              lVar19 = 0;
            }
            else {
              lVar19 = (longlong)local_2c8[0] * 0x20 + *(longlong *)(lVar19 + 0x38);
            }
            plVar15 = (longlong *)0x0;
            plVar14 = (longlong *)(lVar19 + 0x10);
            if (lVar19 == 0) {
              plVar14 = plVar15;
            }
            lVar19 = *plVar14;
            puVar21 = (undefined8 *)FUN_141ee3620();
            local_168 = *puVar21;
            if (lVar13 == 0) {
              uVar22 = uVar22 | 0x40;
              local_238 = 0;
            }
            else {
              lVar17 = *(longlong *)(lVar13 + 0x48);
              if (*(char *)(lVar17 + 0x28) == '\0') {
                FUN_1419f3850(lVar17);
              }
              plVar15 = *(longlong **)(lVar17 + 0x38);
            }
            plStack_160 = plVar15;
            if ((uVar22 & 0x40) != 0) {
              uVar22 = uVar22 & 0xffffffbf;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_238);
            }
            if (lVar19 == 0) {
              uVar22 = uVar22 | 0x80;
              local_230[0] = 0;
              local_148 = (longlong *)0x0;
            }
            else {
              lVar17 = *(longlong *)(lVar19 + 0x48);
              if (*(char *)(lVar17 + 0x28) == '\0') {
                FUN_1419f3850(lVar17);
              }
              local_148 = *(longlong **)(lVar17 + 0x40);
            }
            if ((char)uVar22 < '\0') {
              uVar22 = uVar22 & 0xffffff7f;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_230);
            }
            lVar17 = local_310;
            FUN_141ed6ac0(local_310,&local_168,2,1);
            local_368 = local_304;
            local_370 = *(undefined8 *)(*(longlong *)(local_2f0 + 8) + 0x60e0);
            local_378 = local_290;
            FUN_141bbe780(lVar19,lVar17,lVar23,local_320);
          }
          else {
            lVar19 = *(longlong *)(lVar23 + 0x3090);
            local_1d0 = &DAT_146a2e1a0;
            plVar15 = (longlong *)0x0;
            local_1c8 = 0;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar19 + 0x38,&local_2d0,&local_1d0);
            plVar14 = plVar15;
            if (local_2d0 != -1) {
              plVar14 = (longlong *)((longlong)local_2d0 * 0x20 + *(longlong *)(lVar19 + 0x38));
            }
            plVar20 = plVar14 + 2;
            if (plVar14 == (longlong *)0x0) {
              plVar20 = plVar15;
            }
            lVar19 = *plVar20;
            puVar21 = (undefined8 *)FUN_141ee3620();
            local_168 = *puVar21;
            if (lVar13 == 0) {
              uVar22 = uVar22 | 0x10;
              local_250 = 0;
            }
            else {
              lVar17 = *(longlong *)(lVar13 + 0x48);
              if (*(char *)(lVar17 + 0x28) == '\0') {
                FUN_1419f3850(lVar17);
              }
              plVar15 = *(longlong **)(lVar17 + 0x38);
            }
            plVar14 = (longlong *)0x0;
            plStack_160 = plVar15;
            if ((uVar22 & 0x10) != 0) {
              uVar22 = uVar22 & 0xffffffef;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_250);
            }
            if (lVar19 == 0) {
              uVar22 = uVar22 | 0x20;
              local_248 = 0;
            }
            else {
              lVar17 = *(longlong *)(lVar19 + 0x48);
              if (*(char *)(lVar17 + 0x28) == '\0') {
                FUN_1419f3850(lVar17);
              }
              plVar14 = *(longlong **)(lVar17 + 0x40);
            }
            local_148 = plVar14;
            if ((uVar22 & 0x20) != 0) {
              uVar22 = uVar22 & 0xffffffdf;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_248);
            }
            lVar17 = local_310;
            FUN_141ed6ac0(local_310,&local_168,2,1);
            lVar18 = *(longlong *)(lVar19 + 0x48);
            if (*(char *)(lVar18 + 0x28) == '\0') {
              FUN_1419f3850(lVar18);
            }
            uVar12 = *(undefined8 *)(lVar18 + 0x40);
            local_240 = uVar12;
            FUN_141aa9590(lVar19,lVar17,uVar12,*(undefined8 *)(lVar23 + 0x20));
            if (*(int *)(*(longlong *)(local_320 + 0x30) + 0x14c) == -1) {
              local_2cc = 0;
            }
            else {
              local_2cc = 0x3f800000;
            }
            local_378 = local_378 & 0xffffffff00000000;
            SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                      (lVar17,uVar12,lVar19 + 0xc0,&local_2cc);
            local_378 = CONCAT44(local_378._4_4_,0xf);
            FUN_141aa6800(lVar19 + 200,lVar17,&local_240,*(undefined4 *)(lVar23 + 0x1a38));
            lVar18 = 0;
            if (0 < *(int *)(lVar19 + 0x10)) {
              do {
                if (*(undefined **)(*(longlong *)(lVar19 + 8) + lVar18 * 8) == &DAT_146a286e0) {
                  if (lVar18 != -1) {
                    puVar21 = *(undefined8 **)(*(longlong *)(lVar19 + 0x18) + lVar18 * 8);
                    *(undefined4 *)puVar21 = *(undefined4 *)(lVar19 + 0xb8);
                    goto LAB_141bb6d4a;
                  }
                  break;
                }
                lVar18 = lVar18 + 1;
              } while (lVar18 < *(int *)(lVar19 + 0x10));
            }
            if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + local_298 * 8) + 0x38)
                 < DAT_146a253f8) && (_Init_thread_header(&DAT_146a253f8), DAT_146a253f8 == -1)) {
              DAT_146a253f0._0_4_ = 0;
              DAT_146a253f0._4_2_ = 0;
              DAT_146a253f0._6_1_ = 0;
              _Init_thread_footer(&DAT_146a253f8);
            }
            puVar21 = &DAT_146a253f0;
LAB_141bb6d4a:
            local_378 = lVar23;
            FUN_141b51280(lVar17,uVar12,puVar21,local_320);
          }
          lVar19 = *(longlong *)(lVar13 + 0x48);
          uVar12 = *(undefined8 *)(lVar23 + 0x20);
          if (*(char *)(lVar19 + 0x28) == '\0') {
            FUN_1419f3850(lVar19);
          }
          FUN_141aa9800(lVar13,lVar17,*(undefined8 *)(lVar19 + 0x38),uVar12);
          param_3 = local_320;
          local_378 = local_320;
          FUN_141bbc490(lVar13 + 0xc0,lVar17,lVar13,lVar23);
          lVar19 = *(longlong *)(lVar13 + 0x48);
          local_2fc = *(uint *)(param_3 + 0x90) >> 1 & 1;
          if (*(char *)(lVar19 + 0x28) == '\0') {
            FUN_1419f3850(lVar19);
          }
          local_378 = local_378 & 0xffffffff00000000;
          FUN_1404986d0(lVar17,*(undefined8 *)(lVar19 + 0x38),lVar13 + 0xd8,&local_2fc);
          if ((DAT_146ab62ec != '\0') && (DAT_1464c1f68 != 0)) {
            local_318 = 1.0;
            local_314 = 0.0;
            FUN_141b90c60(lVar23,&local_280,&local_318,&local_314);
            if (local_318 <= local_314) {
              local_318 = 1.0;
              local_314 = 0.0;
            }
            fVar25 = local_314;
            fVar27 = local_318;
            puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar21 = puVar16 + 3;
            if (*(undefined8 **)(lVar8 + 0x38) < puVar21) {
              FMemStackBase::AllocateNewChunk(puVar1,0x20);
              puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar21 = puVar16 + 3;
            }
            *puVar1 = (ulonglong)puVar21;
            *(int *)(lVar17 + 0x14) = *(int *)(lVar17 + 0x14) + 1;
            **(undefined8 **)(lVar17 + 8) = puVar16;
            *(undefined8 **)(lVar17 + 8) = puVar16 + 1;
            puVar16[1] = 0;
            *puVar16 = &PTR_LAB_144e0a8d8;
            *(float *)(puVar16 + 2) = fVar25;
            *(float *)((longlong)puVar16 + 0x14) = fVar27;
          }
          uVar12 = DAT_1464c2118;
          cVar11 = *(char *)(*(longlong *)(param_3 + 0x30) + 0x188);
          if ((cVar11 - 1U & 0xfd) == 0) {
            FUN_141b97230(lVar17);
            uVar24 = local_328;
          }
          else {
            uVar24 = local_328;
            if (cVar11 == '\x02') {
              puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar21 = puVar16 + 5;
              if (*(undefined8 **)(lVar8 + 0x38) < puVar21) {
                FMemStackBase::AllocateNewChunk(puVar1,0x30);
                puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                puVar21 = puVar16 + 5;
              }
              *puVar1 = (ulonglong)puVar21;
              *(int *)(lVar17 + 0x14) = *(int *)(lVar17 + 0x14) + 1;
              **(undefined8 **)(lVar17 + 8) = puVar16;
              *(undefined8 **)(lVar17 + 8) = puVar16 + 1;
              puVar16[3] = uVar12;
              puVar16[1] = 0;
              *puVar16 = &PTR_LAB_143f489e0;
              *(undefined4 *)(puVar16 + 2) = 0;
              *(undefined4 *)(puVar16 + 4) = 0;
              lVar23 = DAT_1464c21e0;
              iVar3 = DAT_1464c21f0 / 3;
              if (DAT_1464c21e0 == 0) {
                LowLevelFatalErrorHandler
                          ("Unknown",0x8d8,
                           L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
                FDebug::AssertFailed
                          (&DAT_143f3f584,"Unknown",0x8d8,
                           L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
              }
              puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar21 = puVar16 + 7;
              if (*(undefined8 **)(lVar8 + 0x38) < puVar21) {
                FMemStackBase::AllocateNewChunk(puVar1,0x40);
                puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                puVar21 = puVar16 + 7;
              }
              *puVar1 = (ulonglong)puVar21;
              *(int *)(lVar17 + 0x14) = *(int *)(lVar17 + 0x14) + 1;
              **(undefined8 **)(lVar17 + 8) = puVar16;
              *(undefined8 **)(lVar17 + 8) = puVar16 + 1;
              puVar16[1] = 0;
              *puVar16 = &PTR_LAB_143f489d0;
              puVar16[2] = lVar23;
              puVar16[3] = 0;
              *(undefined4 *)(puVar16 + 4) = 0;
              *(undefined8 *)((longlong)puVar16 + 0x24) = 0x1b0;
              *(int *)((longlong)puVar16 + 0x2c) = iVar3;
              *(undefined4 *)(puVar16 + 6) = 1;
              uVar24 = local_328;
            }
          }
        }
      }
      local_300 = local_300 + 1;
      local_288 = local_288 + 1;
    } while (local_300 < *(int *)(local_2f0 + 200));
  }
  return;
}



// FUNCTION 141bb72c0 FUN_141bb72c0 body=710 status=ok
// SIG undefined FUN_141bb72c0(void)

void FUN_141bb72c0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int local_res8;
  int local_res18 [2];
  int local_res20 [2];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48 [2];
  
  if ((DAT_1464c2008 != 0) && ((*(uint *)(param_1 + 0x3c) & 0x81000) == 0x81000)) {
    lVar3 = *(longlong *)(param_1 + 8);
    local_68 = (longlong *)0x0;
    local_60 = (longlong *)0x0;
    local_res8 = 0;
    if (0 < *(int *)(lVar3 + 0x10c0)) {
      local_50 = 0;
      do {
        lVar3 = *(longlong *)(local_50 + *(longlong *)(lVar3 + 0x10b8));
        if ((*(byte *)(lVar3 + 0x90) & 8) != 0) {
          bVar1 = false;
          iVar6 = 0;
          if (0 < *(int *)(param_1 + 200)) {
            do {
              cVar2 = FUN_141be7c20((longlong)iVar6 * 0x30d0 + *(longlong *)(param_1 + 0xc0),lVar3);
              if (cVar2 != '\0') {
                bVar1 = true;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(param_1 + 200));
            if (bVar1) {
              FUN_141b8ee60(param_2,&local_68,L"LightShafts0");
              FUN_141b8ee60(param_2,&local_60,L"LightShafts1");
              iVar6 = 0;
              if (0 < *(int *)(param_1 + 200)) {
                lVar8 = 0;
                do {
                  lVar7 = *(longlong *)(param_1 + 0xc0) + lVar8;
                  cVar2 = FUN_141be7c20(lVar7,lVar3);
                  if (cVar2 != '\0') {
                    FUN_141b80f20(param_2,lVar7,lVar3,&local_68,&local_60);
                    lVar4 = 0;
                    if (*(longlong *)(lVar7 + 0x18) != 0) {
                      plVar5 = (longlong *)(*(longlong *)(lVar7 + 0x18) + 0x1238);
                      local_48[0] = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x10);
                      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
                      ::FindId(plVar5,local_res18,local_48[0],0);
                      if ((local_res18[0] == -1) ||
                         (lVar4 = (longlong)local_res18[0] * 0x40 + *plVar5, lVar4 == 0)) {
                        local_58 = local_48;
                        FUN_141b83870(plVar5,local_res20,&local_58,0);
                        lVar4 = (longlong)local_res20[0] * 0x40 + *plVar5;
                      }
                      lVar4 = lVar4 + 8;
                    }
                    local_58 = (longlong *)0x0;
                    FUN_141b90170(param_2,lVar7,L"LSBloomHistory",lVar4,&local_68,&local_58);
                    FUN_141b8f4c0(param_2,lVar7,lVar3,&local_58,&local_68,&local_60);
                    FUN_141b8efe0(param_2,lVar7,param_1,lVar3,&local_68);
                    if (local_58 != (longlong *)0x0) {
                      (**(code **)(*local_58 + 0x30))();
                    }
                  }
                  iVar6 = iVar6 + 1;
                  lVar8 = lVar8 + 0x30d0;
                } while (iVar6 < *(int *)(param_1 + 200));
              }
            }
          }
        }
        local_res8 = local_res8 + 1;
        lVar3 = *(longlong *)(param_1 + 8);
        local_50 = local_50 + 8;
      } while (local_res8 < *(int *)(lVar3 + 0x10c0));
      if (local_60 != (longlong *)0x0) {
        (**(code **)(*local_60 + 0x30))();
      }
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x30))();
      }
    }
  }
  return;
}



// FUNCTION 141bb7590 FUN_141bb7590 body=1667 status=ok
// SIG undefined FUN_141bb7590(void)

void FUN_141bb7590(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  int local_res8;
  int local_res20;
  longlong **in_stack_ffffffffffffff38;
  longlong **in_stack_ffffffffffffff40;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60 [4];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  longlong local_50;
  
  if ((DAT_1464c2008 != 0) && ((*(uint *)(param_1 + 0x3c) & 0x81000) == 0x81000)) {
    lVar9 = *(longlong *)(param_1 + 8);
    local_98 = (longlong *)0x0;
    local_a0 = (longlong *)0x0;
    local_res8 = 0;
    if (0 < *(int *)(lVar9 + 0x10b0)) {
      local_78 = 0;
      do {
        lVar9 = *(longlong *)(local_78 + *(longlong *)(lVar9 + 0x10a8));
        local_50 = lVar9;
        cVar6 = (**(code **)(**(longlong **)(lVar9 + 0x30) + 0x78))
                          (*(longlong **)(lVar9 + 0x30),local_54,local_58);
        if ((cVar6 != '\0') && (*(char *)(*(longlong *)(lVar9 + 0x30) + 0x188) == '\0')) {
          bVar4 = false;
          iVar14 = 0;
          if (0 < *(int *)(param_1 + 200)) {
            do {
              cVar6 = FUN_141be7c20((longlong)iVar14 * 0x30d0 + *(longlong *)(param_1 + 0xc0),lVar9)
              ;
              if (cVar6 != '\0') {
                bVar4 = true;
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)(param_1 + 200));
            if (bVar4) {
              bVar4 = false;
              iVar14 = 0;
              if (0 < *(int *)(param_1 + 200)) {
                do {
                  cVar6 = FUN_141be7c20((longlong)iVar14 * 0x30d0 + *(longlong *)(param_1 + 0xc0),
                                        lVar9);
                  if (cVar6 != '\0') {
                    bVar4 = true;
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < *(int *)(param_1 + 200));
                if (bVar4) {
                  FUN_141b8ee60(param_2,&local_98,L"LightShafts0");
                  FUN_141b8ee60(param_2,&local_a0,L"LightShafts1");
                  local_res20 = 0;
                  if (0 < *(int *)(param_1 + 200)) {
                    local_80 = 0;
                    do {
                      lVar15 = *(longlong *)(param_1 + 0xc0) + local_80;
                      cVar6 = FUN_141be7c20(lVar15,lVar9);
                      if (cVar6 == '\0') {
                        uVar7 = GetLightShaftDownsampleFactor();
                        uVar3 = *(ulonglong *)(lVar15 + 0x1aa0);
                        local_64 = 0xffffffff;
                        local_60[0] = 0x101;
                        iVar8 = (int)((longlong)
                                      ((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 |
                                      uVar3 & 0xffffffff) / (longlong)(int)uVar7);
                        local_a8._4_4_ = (int)(uVar3 >> 0x20);
                        iVar5 = local_a8._4_4_;
                        uStack_88 = 0x1010101;
                        uStack_84 = 0x22;
                        local_a8 = (longlong *)CONCAT44(local_a8._4_4_ / (int)uVar7,iVar8);
                        iVar14 = *(int *)(lVar15 + 0x1aa8);
                        iVar19 = *(int *)(lVar15 + 0x1aac);
                        local_70 = local_a0[1];
                        local_68 = 0;
                        local_90 = 0;
                        *(undefined4 *)(param_2 + 0x98) = 1;
                        uVar12 = 0;
                        do {
                          uVar11 = (int)uVar12 + 1;
                          lVar9 = *(longlong *)(&local_68 + uVar12 * 6);
                          uVar1 = *(undefined8 *)(local_60 + uVar12 * 0xc);
                          plVar2 = (longlong *)(param_2 + 0xa0 + uVar12 * 0x18);
                          *plVar2 = (&local_70)[uVar12 * 3];
                          plVar2[1] = lVar9;
                          *(undefined8 *)(param_2 + 0xb0 + uVar12 * 0x18) = uVar1;
                          uVar12 = (ulonglong)uVar11;
                        } while (uVar11 < *(uint *)(param_2 + 0x98));
                        *(undefined4 *)(param_2 + 0x160) = 0;
                        *(undefined4 *)(param_2 + 0x164) = 0;
                        *(undefined4 *)(param_2 + 0x168) = 0x1010101;
                        *(undefined4 *)(param_2 + 0x16c) = 0x22;
                        puVar13 = (undefined8 *)
                                  (*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                        puVar10 = puVar13 + 0x26;
                        if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
                          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x138);
                          puVar13 = (undefined8 *)
                                    (*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                          puVar10 = puVar13 + 0x26;
                        }
                        uVar12 = 0;
                        *(undefined8 **)(param_2 + 0x30) = puVar10;
                        iVar17 = 0;
                        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                        **(undefined8 **)(param_2 + 8) = puVar13;
                        *(undefined8 **)(param_2 + 8) = puVar13 + 1;
                        puVar13[1] = 0;
                        *puVar13 = &PTR_LAB_143f59440;
                        *(undefined4 *)(puVar13 + 2) = 1;
                        puVar13[3] = 0;
                        *(undefined4 *)(puVar13 + 4) = 0;
                        *(undefined4 *)((longlong)puVar13 + 0x24) = 0xffffffff;
                        *(undefined2 *)(puVar13 + 5) = 0;
                        puVar13[6] = 0;
                        *(undefined4 *)(puVar13 + 7) = 0;
                        *(undefined4 *)((longlong)puVar13 + 0x3c) = 0xffffffff;
                        *(undefined2 *)(puVar13 + 8) = 0;
                        puVar13[9] = 0;
                        *(undefined4 *)(puVar13 + 10) = 0;
                        *(undefined4 *)((longlong)puVar13 + 0x54) = 0xffffffff;
                        *(undefined2 *)(puVar13 + 0xb) = 0;
                        puVar13[0xc] = 0;
                        *(undefined4 *)(puVar13 + 0xd) = 0;
                        *(undefined4 *)((longlong)puVar13 + 0x6c) = 0xffffffff;
                        *(undefined2 *)(puVar13 + 0xe) = 0;
                        puVar13[0xf] = 0;
                        *(undefined4 *)(puVar13 + 0x10) = 0;
                        *(undefined4 *)((longlong)puVar13 + 0x84) = 0xffffffff;
                        *(undefined2 *)(puVar13 + 0x11) = 0;
                        puVar13[0x12] = 0;
                        *(undefined4 *)(puVar13 + 0x13) = 0;
                        *(undefined4 *)((longlong)puVar13 + 0x9c) = 0xffffffff;
                        *(undefined2 *)(puVar13 + 0x14) = 0;
                        puVar13[0x15] = 0;
                        *(undefined4 *)(puVar13 + 0x16) = 0;
                        *(undefined4 *)((longlong)puVar13 + 0xb4) = 0xffffffff;
                        *(undefined2 *)(puVar13 + 0x17) = 0;
                        puVar13[0x18] = 0;
                        *(undefined4 *)(puVar13 + 0x19) = 0;
                        *(undefined4 *)((longlong)puVar13 + 0xcc) = 0xffffffff;
                        *(undefined2 *)(puVar13 + 0x1a) = 0;
                        puVar13[0x1b] = 0;
                        *(undefined4 *)(puVar13 + 0x1c) = 0;
                        *(undefined8 *)((longlong)puVar13 + 0xe4) = 0;
                        uVar16 = uVar12;
                        if (*(int *)(puVar13 + 2) != 0) {
                          do {
                            uVar11 = (int)uVar16 + 1;
                            lVar9 = *(longlong *)(&local_68 + uVar16 * 6);
                            puVar13[uVar16 * 3 + 3] = (&local_70)[uVar16 * 3];
                            (puVar13 + uVar16 * 3 + 3)[1] = lVar9;
                            puVar13[uVar16 * 3 + 5] = *(undefined8 *)(local_60 + uVar16 * 0xc);
                            uVar16 = (ulonglong)uVar11;
                          } while (uVar11 < *(uint *)(puVar13 + 2));
                          iVar17 = *(int *)(puVar13 + 0x1d);
                        }
                        if (iVar17 != 0) {
                          do {
                            uVar11 = (int)uVar12 + 1;
                            puVar13[uVar12 + 0x1e] = *(undefined8 *)(uVar12 * 8);
                            uVar12 = (ulonglong)uVar11;
                          } while (uVar11 < *(uint *)(puVar13 + 0x1d));
                        }
                        iVar17 = local_a8._4_4_;
                        iVar19 = (uint)(iVar19 - iVar5) / uVar7 + local_a8._4_4_;
                        *(undefined4 *)(puVar13 + 0x1b) = (undefined4)local_90;
                        *(undefined4 *)((longlong)puVar13 + 0xdc) = local_90._4_4_;
                        *(undefined4 *)(puVar13 + 0x1c) = uStack_88;
                        *(undefined4 *)((longlong)puVar13 + 0xe4) = uStack_84;
                        puVar13 = (undefined8 *)
                                  (*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                        puVar10 = puVar13 + 5;
                        if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
                          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
                          puVar13 = (undefined8 *)
                                    (*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                          puVar10 = puVar13 + 5;
                        }
                        *(undefined8 **)(param_2 + 0x30) = puVar10;
                        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                        **(undefined8 **)(param_2 + 8) = puVar13;
                        *(undefined8 **)(param_2 + 8) = puVar13 + 1;
                        puVar13[1] = 0;
                        *(undefined4 *)(puVar13 + 3) = 0;
                        *puVar13 = &PTR_LAB_143f59420;
                        *(int *)(puVar13 + 2) = iVar8;
                        *(int *)((longlong)puVar13 + 0x14) = iVar17;
                        *(uint *)((longlong)puVar13 + 0x1c) =
                             (uint)(iVar14 - (int)uVar3) / uVar7 + iVar8;
                        *(int *)(puVar13 + 4) = iVar19;
                        *(undefined4 *)((longlong)puVar13 + 0x24) = 0x3f800000;
                        in_stack_ffffffffffffff40 =
                             (longlong **)
                             ((ulonglong)in_stack_ffffffffffffff40 & 0xffffffff00000000);
                        in_stack_ffffffffffffff38 =
                             (longlong **)
                             ((ulonglong)in_stack_ffffffffffffff38 & 0xffffffffffffff00);
                        DrawClearQuadMRT(param_2,1,1,&DAT_1464aa6c0,in_stack_ffffffffffffff38,
                                         in_stack_ffffffffffffff40,0,0);
                        lVar9 = local_50;
                      }
                      else {
                        FUN_141b80570(param_2,lVar15,lVar9,&local_98,&local_a0);
                        local_a8 = (longlong *)0x0;
                        lVar18 = *(longlong *)(lVar15 + 0x18) + 0x1208;
                        if (*(longlong *)(lVar15 + 0x18) == 0) {
                          lVar18 = 0;
                        }
                        FUN_141b90170(param_2,lVar15,L"LSOcclusionHistory",lVar18,&local_98,
                                      &local_a8);
                        in_stack_ffffffffffffff40 = &local_a0;
                        FUN_141b8f4c0(param_2,lVar15,lVar9,&local_a8,&local_98,
                                      in_stack_ffffffffffffff40);
                        in_stack_ffffffffffffff38 = &local_a0;
                        FUN_141b9ba90(param_2,lVar15,lVar9,&local_98,in_stack_ffffffffffffff38);
                        plVar2 = (longlong *)*param_3;
                        *param_3 = (longlong)local_a0;
                        if (local_a0 != (longlong *)0x0) {
                          (**(code **)(*local_a0 + 0x28))();
                        }
                        if (plVar2 != (longlong *)0x0) {
                          (**(code **)(*plVar2 + 0x30))(plVar2);
                        }
                        if (local_a8 != (longlong *)0x0) {
                          (**(code **)(*local_a8 + 0x30))();
                        }
                      }
                      local_res20 = local_res20 + 1;
                      local_80 = local_80 + 0x30d0;
                    } while (local_res20 < *(int *)(param_1 + 200));
                  }
                }
              }
            }
          }
        }
        local_res8 = local_res8 + 1;
        lVar9 = *(longlong *)(param_1 + 8);
        local_78 = local_78 + 8;
      } while (local_res8 < *(int *)(lVar9 + 0x10b0));
      if (local_a0 != (longlong *)0x0) {
        (**(code **)(*local_a0 + 0x30))();
      }
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 0x30))();
      }
    }
  }
  return;
}



// FUNCTION 141bb7c20 FUN_141bb7c20 body=6012 status=ok
// SIG undefined FUN_141bb7c20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141bb7c20(longlong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  undefined2 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int *piVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  longlong *plVar22;
  ulonglong *puVar23;
  longlong *plVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  longlong *plVar28;
  uint uVar29;
  int iVar30;
  longlong lVar31;
  uint *puVar32;
  longlong *plVar33;
  longlong lVar34;
  byte bVar35;
  int iVar36;
  int iVar37;
  longlong *plVar38;
  longlong lVar39;
  bool bVar40;
  undefined1 auStack_228 [32];
  wchar_t *local_208;
  uint local_200;
  undefined1 local_1f8;
  undefined4 local_1f0;
  char local_1e8 [4];
  uint local_1e4;
  ulonglong *local_1e0;
  longlong local_1d8;
  ulonglong *local_1d0;
  uint local_1c8;
  int local_1c4;
  ulonglong *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  uint uStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  longlong local_188;
  ulonglong local_180;
  longlong local_178;
  ulonglong local_170;
  ulonglong *local_168;
  uint local_160;
  uint local_15c;
  longlong local_158;
  ulonglong local_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  ulonglong *local_128;
  undefined8 uStack_120;
  uint local_118;
  uint uStack_114;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  wchar_t *local_b8;
  undefined2 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [8];
  undefined1 *local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  plVar33 = (longlong *)0x0;
  local_190 = local_190 & 0xffffffff00000000;
  lVar31 = (longlong)(int)param_1[3];
  local_1c8 = 0;
  if (lVar31 < 1) {
    return;
  }
  plVar22 = (longlong *)param_1[2];
  plVar28 = plVar33;
  do {
    lVar39 = *plVar22;
    plVar22 = plVar22 + 1;
    uVar29 = (uint)plVar28 + 1;
    if (*(char *)(lVar39 + 0x1a98) == '\0') {
      uVar29 = (uint)plVar28;
    }
    plVar28 = (longlong *)(ulonglong)uVar29;
    lVar31 = lVar31 + -1;
  } while (lVar31 != 0);
  if ((int)uVar29 < 1) {
    return;
  }
  local_108 = 0;
  uStack_100 = 0;
  local_1e0 = (ulonglong *)0x0;
  local_1d8 = param_2;
  FScopedGPUStatEvent::Begin(&local_108,param_2,&DAT_146a286d0);
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  if (DAT_1464c1f6c != 0) {
    local_1e4 = 0;
    local_1b0 = (longlong *)0x0;
    uStack_1a8 = (uint *)((ulonglong)uStack_1a8 & 0xffffffff);
    plVar28 = plVar33;
    plVar24 = plVar33;
    plVar22 = plVar33;
    plVar38 = plVar33;
    if (0 < (int)param_1[0x19]) {
      do {
        iVar36 = 0;
        lVar31 = param_1[0x18];
        uVar29 = (uint)plVar33;
        if (0 < *(int *)((longlong)plVar38 + lVar31 + 0x1c68)) {
          local_1e0 = (ulonglong *)0x0;
          do {
            lVar39 = *(longlong *)
                      ((longlong)local_1e0 + *(longlong *)((longlong)plVar38 + lVar31 + 0x1c60));
            if ((*(uint *)(*(longlong *)((longlong)plVar38 + lVar31 + 0x1b30) + 4 +
                          (longlong)*(int *)(lVar39 + 0xe8) * 8) & 0x40000) != 0) {
              iVar37 = (int)plVar24;
              for (plVar33 = plVar28; plVar33 != plVar28 + iVar37; plVar33 = plVar33 + 1) {
                if (*plVar33 == lVar39) {
                  if ((int)((longlong)plVar33 - (longlong)plVar28 >> 3) != -1) goto LAB_141bb7de2;
                  break;
                }
              }
              uVar29 = iVar37 + 1;
              plVar33 = (longlong *)(ulonglong)uVar29;
              uStack_1a8 = (uint *)CONCAT44(uStack_1a8._4_4_,uVar29);
              if ((int)plVar22 < (int)uVar29) {
                FUN_140822430(&local_1b0,plVar24);
                plVar22 = (longlong *)((ulonglong)uStack_1a8 >> 0x20);
                plVar33 = (longlong *)((ulonglong)uStack_1a8 & 0xffffffff);
                plVar28 = local_1b0;
              }
              plVar28[iVar37] = lVar39;
              plVar24 = plVar33;
            }
LAB_141bb7de2:
            local_1e0 = local_1e0 + 1;
            iVar36 = iVar36 + 1;
            uVar29 = local_1e4;
          } while (iVar36 < *(int *)((longlong)plVar38 + lVar31 + 0x1c68));
        }
        local_1e4 = uVar29 + 1;
        plVar33 = (longlong *)(ulonglong)local_1e4;
        plVar38 = plVar38 + 0x61a;
      } while ((int)local_1e4 < (int)param_1[0x19]);
      if (0 < (int)plVar24) {
        do {
          (**(code **)(**(longlong **)(*plVar28 + 8) + 0x80))
                    (*(longlong **)(*plVar28 + 8),param_1 + 2,&local_158);
          plVar28 = plVar28 + 1;
          plVar24 = (longlong *)((longlong)plVar24 + -1);
        } while (plVar24 != (longlong *)0x0);
      }
    }
  }
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  FUN_141bbb810(&local_a8,100);
  local_1c0 = (ulonglong *)0x0;
  local_1b8 = 0;
  FUN_141bbc290(&local_1c0,100);
  if ((*(byte *)((longlong)param_1 + 0x3c) & 0x40) == 0) {
LAB_141bb7ed9:
    local_1e8[0] = '\0';
  }
  else {
    iVar36 = FUN_141d9d740();
    local_1e8[0] = '\x01';
    if (iVar36 == 0) goto LAB_141bb7ed9;
  }
  local_1e4 = 0;
  if (0 < (int)param_1[0x19]) {
    local_1e0 = (ulonglong *)0x0;
    do {
      lVar31 = param_1[0x18];
      lVar39 = (longlong)local_1e0 * 0x30d0;
      local_1b0 = (longlong *)0x100000000;
      uStack_1a8 = (uint *)(lVar31 + 0x1e08 + lVar39);
      uStack_19c = 0;
      iStack_198 = 0;
      uVar29 = uStack_1a8[6];
      if (uVar29 != 0) {
        puVar32 = *(uint **)(lVar39 + 0x1e18 + lVar31);
        if (puVar32 == (uint *)0x0) {
          puVar32 = uStack_1a8;
        }
        uVar11 = *puVar32;
        iVar36 = 0;
        while (uVar11 == 0) {
          iStack_198 = iStack_198 + 0x20;
          local_1b0._4_4_ = (uint)((ulonglong)local_1b0 >> 0x20);
          local_1b0 = (longlong *)CONCAT44(local_1b0._4_4_,iVar36 + 1);
          if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar36)
          goto LAB_141bb7fd1;
          uVar11 = puVar32[(longlong)iVar36 + 1];
          iVar36 = iVar36 + 1;
        }
        uVar11 = -uVar11 & uVar11;
        iVar36 = 0x1f;
        if (uVar11 != 0) {
          for (; uVar11 >> iVar36 == 0; iVar36 = iVar36 + -1) {
          }
        }
        local_1b0 = (longlong *)CONCAT44(uVar11,(uint)local_1b0);
        if (uVar11 == 0) {
          iVar36 = 0x20;
        }
        else {
          iVar36 = 0x1f - iVar36;
        }
        uStack_19c = (iStack_198 - iVar36) + 0x1f;
        if ((int)uVar29 < (int)uStack_19c) {
LAB_141bb7fd1:
          uStack_19c = uVar29;
        }
      }
      local_1a0 = 0xffffffff;
      uVar29 = uStack_1a8[6];
      uStack_e0 = CONCAT44(uStack_19c,0xffffffff);
      uStack_d8 = CONCAT44(uStack_194,iStack_198);
      local_f8 = (longlong *)(lVar31 + 0x1df8 + lVar39);
      uStack_f0 = local_1b0;
      uStack_114 = *(uint *)(local_f8 + 5);
      local_118 = -1 << ((byte)uStack_114 & 0x1f);
      uVar11 = uStack_114 & 0xffffffe0;
      plVar33 = local_f8;
      uStack_e8 = uStack_1a8;
      uVar21 = uStack_114;
      if (uStack_114 != uVar29) {
        puVar32 = (uint *)local_f8[4];
        if ((uint *)local_f8[4] == (uint *)0x0) {
          puVar32 = uStack_1a8;
        }
        uVar21 = puVar32[(int)uStack_114 >> 5] & local_118;
        iVar36 = (int)uStack_114 >> 5;
        while (uVar21 == 0) {
          uVar11 = uVar11 + 0x20;
          if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar36)
          goto LAB_141bb8095;
          uVar21 = puVar32[(longlong)iVar36 + 1];
          local_118 = 0xffffffff;
          iVar36 = iVar36 + 1;
        }
        uVar21 = -uVar21 & uVar21;
        iVar36 = 0x1f;
        if (uVar21 != 0) {
          for (; uVar21 >> iVar36 == 0; iVar36 = iVar36 + -1) {
          }
        }
        if (uVar21 == 0) {
          iVar36 = 0x20;
        }
        else {
          iVar36 = 0x1f - iVar36;
        }
        uStack_114 = (uVar11 - iVar36) + 0x1f;
        if ((int)uVar29 < (int)uStack_114) {
LAB_141bb8095:
          uStack_114 = uVar29;
        }
        plVar33 = (longlong *)(lVar31 + 0x1df8 + lVar39);
        uVar21 = uStack_114;
      }
      while( true ) {
        if (((uStack_e0._4_4_ == uVar21) && (uStack_e8 == uStack_1a8)) && (local_f8 == plVar33))
        break;
        lVar34 = *(longlong *)((longlong)(int)uStack_e0._4_4_ * 0x78 + 0x70 + *local_f8);
        puVar17 = *(ulonglong **)(lVar34 + 0x20);
        uVar16 = puVar17[6];
        local_168 = puVar17;
        if (((((1e-05 <= *(float *)(uVar16 + 0x100) * *(float *)(uVar16 + 0x100)) ||
              (1e-05 <= *(float *)(uVar16 + 0x104) * *(float *)(uVar16 + 0x104))) ||
             (1e-05 <= *(float *)(uVar16 + 0x108) * *(float *)(uVar16 + 0x108))) &&
            ((uVar29 = *(uint *)(uVar16 + 0x180), (uVar29 >> 2 & 1) == 0 ||
             ((((puVar17[0x12] & 1) == 0 || (DAT_1464c1f74 <= (int)(uint)puVar17[0x14])) &&
              ((uVar29 >> 3 & 1) != 0)))))) && (*(char *)(lVar39 + 0x1a98 + lVar31) != '\0')) {
          if ((puVar17[0x12] & 4) == 0) {
LAB_141bb81c7:
            if (((*(char *)(lVar39 + 0x1208 + lVar31) == '\0') || ((uVar29 >> 3 & 1) != 0)) &&
               (((*(byte *)(uVar16 + 0x189) & 1) != 0 ||
                ((*(uint *)(lVar39 + 0x28cc + lVar31) & 0x400) != 0)))) {
              if ((int)local_a0 != local_74) {
                puVar19 = local_70;
                if (local_68 != (undefined1 *)0x0) {
                  puVar19 = local_68;
                }
                for (iVar36 = *(int *)(puVar19 +
                                      (longlong)(int)(local_60 - 1U & (uint)puVar17[0xb]) * 4);
                    iVar36 != -1; iVar36 = *(int *)(local_a8 + 8 + (longlong)iVar36 * 0x10)) {
                  if (*(ulonglong **)(local_a8 + (longlong)iVar36 * 0x10) == puVar17) {
                    if (iVar36 != -1) goto LAB_141bb837d;
                    break;
                  }
                }
              }
              FUN_141b83360(&local_a8,&local_190,&local_168);
              uVar16 = local_1b8;
              lVar25 = (longlong)(int)local_1b8;
              iVar36 = (int)local_1b8 + 1;
              local_1b8 = CONCAT44(local_1b8._4_4_,iVar36);
              if (local_1b8._4_4_ < iVar36) {
                FUN_141bbbc00(&local_1c0,uVar16 & 0xffffffff);
              }
              puVar23 = local_1c0 + lVar25 * 2;
              *(uint *)puVar23 = 0;
              puVar23[1] = (ulonglong)puVar17;
              uVar29 = *(uint *)(lVar34 + 0x28) & 3;
              *(uint *)puVar23 = uVar29;
              if ((((*(byte *)((longlong)param_1 + 0x3c) & 2) == 0) ||
                  (*(longlong *)(puVar17[6] + 0x178) == 0)) ||
                 (*(longlong *)(*(longlong *)(puVar17[6] + 0x178) + 0x60) == 0)) {
                uVar11 = 0;
              }
              else {
                uVar11 = 4;
              }
              *(uint *)puVar23 = uVar11 | uVar29;
              if (local_1e8[0] == '\0') {
LAB_141bb82fb:
                uVar29 = 0;
              }
              else {
                cVar8 = FUN_141d90d70(param_1,puVar17);
                uVar29 = 0x10;
                if (cVar8 == '\0') goto LAB_141bb82fb;
              }
              *(uint *)puVar23 = (uint)*puVar23 & 0xffffffef;
              *(uint *)puVar23 = (uint)*puVar23 | uVar29;
              if ((*(byte *)((longlong)param_1 + 0x3c) & 4) == 0) {
LAB_141bb831d:
                uVar29 = 0;
              }
              else {
                cVar8 = FUN_141b57a40(param_1,puVar17);
                uVar29 = 8;
                if (cVar8 == '\0') goto LAB_141bb831d;
              }
              uVar11 = (uint)*puVar23;
              *(uint *)puVar23 = uVar11 & 0xfffffff7 | uVar29;
              if (((*(uint *)(lVar39 + 0x28cc + param_1[0x18]) & 0x400) == 0) ||
                 (uVar12 = 0x20, *(char *)(puVar17[6] + 0x189) == '\x01')) {
                uVar12 = 0;
              }
              *(uint *)puVar23 = uVar11 & 0xffffffd7 | uVar29 | uVar12;
              if (((*(uint *)(puVar17[6] + 0x180) >> 0x13 & 1) == 0) ||
                 (uVar13 = 0, ((uVar11 & 0x14) != 0 || uVar29 != 0) || uVar12 != 0)) {
                uVar13 = 0x40;
              }
              *(uint *)puVar23 = uVar11 & 0xffffff97 | uVar29 | uVar12 | uVar13;
            }
          }
          else {
            uVar11 = (uint)puVar17[0xb];
            if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)(lVar39 + 0x1e20 + lVar31))) {
              lVar14 = lVar31 + 0x1e08 + lVar39;
              lVar25 = *(longlong *)(lVar14 + 0x10);
              if (lVar25 == 0) {
                lVar25 = lVar14;
              }
              uVar12 = uVar11;
              if ((int)uVar11 < 0) {
                uVar12 = uVar11 + 0x1f;
              }
              if ((*(uint *)(lVar25 + (longlong)((int)uVar12 >> 5) * 4) >> (uVar11 & 0x1f) & 1) != 0
                 ) goto LAB_141bb81c7;
            }
          }
        }
LAB_141bb837d:
        uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_f0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
        plVar33 = (longlong *)(lVar31 + 0x1df8 + lVar39);
      }
      local_1e4 = local_1e4 + 1;
      local_1e0 = (ulonglong *)((longlong)local_1e0 + 1);
    } while ((int)local_1e4 < (int)param_1[0x19]);
  }
  AlgoImpl::
  IntroSortInternal<FSortedLightSceneInfo,FIdentityFunctor,TDereferenceWrapper<FSortedLightSceneInfo,_FDeferredShadingSceneRenderer::RenderLights_::_2_::FCompareFSortedLightSceneInfo>_>
            (local_1c0,(longlong)(int)local_1b8,local_1e8[0]);
  if (0 < (int)local_1b8) {
    lVar31 = param_1[0x18];
    iVar36 = 0;
    lVar39 = (longlong)(int)param_1[0x19] * 0x30d0 + lVar31;
    for (; lVar31 != lVar39; lVar31 = lVar31 + 0x30d0) {
      iVar36 = iVar36 + (*(int *)(lVar31 + 0x1e00) - *(int *)(lVar31 + 0x1e2c));
    }
    local_200 = 1;
    local_208 = (wchar_t *)CONCAT44(local_208._4_4_,iVar36 * 0xe0);
    lVar31 = (**(code **)(*DAT_146ab6358 + 0x5c0))
                       (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1[1] + 0x60d8));
    iVar36 = 0;
    puVar17 = local_1c0 + (longlong)(int)local_1b8 * 2;
    local_1e0 = puVar17;
    if (local_1c0 != puVar17) {
      puVar23 = local_1c0 + 1;
      do {
        *(int *)(*puVar23 + 0xb0) = iVar36;
        lVar39 = param_1[0x18];
        lVar34 = (longlong)(int)param_1[0x19] * 0x30d0 + lVar39;
        for (; lVar39 != lVar34; lVar39 = lVar39 + 0x30d0) {
          uVar16 = *puVar23;
          cVar8 = FUN_141be7b80(uVar16,lVar39);
          if (cVar8 != '\0') {
            FUN_141b98460((longlong)iVar36 * 0xe0 + lVar31,uVar16,lVar39);
            iVar36 = iVar36 + 1;
          }
          puVar17 = local_1e0;
        }
        puVar1 = puVar23 + 1;
        puVar23 = puVar23 + 2;
      } while (puVar1 != puVar17);
    }
    (**(code **)(*DAT_146ab6358 + 0x5c8))
              (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1[1] + 0x60d8));
  }
  lVar31 = local_1d8;
  lVar39 = FSceneRenderTargets::Get(local_1d8);
  iVar30 = 0;
  local_1c4 = (int)local_1b8;
  puVar17 = local_1c0;
  iVar36 = (int)local_1b8;
  iVar37 = local_1c4;
  if (0 < (int)local_1b8) {
    do {
      uVar29 = (uint)*puVar17;
      if (((uVar29 & 0x40) != 0) && (iVar36 == (int)local_1b8)) {
        iVar36 = iVar30;
      }
      iVar37 = iVar30;
      if ((((uVar29 >> 4 & 1) != 0) || ((uVar29 >> 3 & 1) != 0)) || ((uVar29 >> 5 & 1) != 0)) break;
      iVar30 = iVar30 + 1;
      puVar17 = puVar17 + 2;
      iVar37 = local_1c4;
    } while (iVar30 < (int)local_1b8);
  }
  local_1c4 = iVar37;
  iVar37 = local_1c4;
  local_178 = lVar39;
  if ((DAT_146a0e904 != 0) && (DAT_146ab62f0 != '\0')) {
    puVar17 = (ulonglong *)(lVar31 + 0x30);
    lVar34 = param_1[0x5d];
    puVar20 = (undefined8 *)(*(longlong *)(lVar31 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar20 + 3;
    if (*(undefined8 **)(lVar31 + 0x38) < puVar18) {
      FMemStackBase::AllocateNewChunk(puVar17);
      puVar20 = (undefined8 *)(*puVar17 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar20 + 3;
    }
    *puVar17 = (ulonglong)puVar18;
    *(int *)(lVar31 + 0x14) = *(int *)(lVar31 + 0x14) + 1;
    **(undefined8 **)(lVar31 + 8) = puVar20;
    *(undefined8 **)(lVar31 + 8) = puVar20 + 1;
    puVar20[1] = 0;
    *puVar20 = &PTR_LAB_144dc9cc0;
    puVar20[2] = lVar34;
  }
  iVar30 = 0;
  bVar40 = 0 < (int)local_150;
  cVar8 = FUN_141dc4ba0(param_1);
  if (cVar8 != '\0') {
    bVar7 = false;
    if (0 < (int)param_1[0x19]) {
      lVar31 = 0;
      piVar15 = (int *)(param_1[0x18] + 0xf60);
      do {
        if (*piVar15 != 0) {
          bVar7 = true;
          break;
        }
        lVar31 = lVar31 + 1;
        piVar15 = piVar15 + 0xc34;
      } while (lVar31 < (int)param_1[0x19]);
    }
    cVar8 = FDeferredShadingSceneRenderer::ShouldUseTiledDeferred
                      (param_1,iVar36,local_150 & 0xffffffff);
    lVar31 = local_1d8;
    if ((cVar8 != '\0') && (!bVar7)) {
      local_208 = (wchar_t *)&local_158;
      FUN_141ddc230(param_1,local_1d8,&local_1c0,iVar36);
      iVar30 = iVar36;
      goto LAB_141bb86f6;
    }
  }
  lVar31 = local_1d8;
  if (bVar40) {
    local_208 = (wchar_t *)CONCAT71(local_208._1_7_,1);
    FUN_141cdeb70(lVar39,local_1d8,0,0x21);
    FUN_141bbb050(param_1,lVar31,&local_158);
  }
LAB_141bb86f6:
  local_208 = (wchar_t *)CONCAT71(local_208._1_7_,1);
  FUN_141cdeb70(lVar39,lVar31,0);
  lVar34 = (longlong)iVar30;
  lVar39 = (longlong)iVar37;
  local_188 = lVar39;
  if (lVar34 < lVar39) {
    lVar25 = lVar34 << 4;
    lVar34 = lVar39 - lVar34;
    do {
      local_200 = local_200 & 0xffffff00;
      local_208 = (wchar_t *)((ulonglong)local_208 & 0xffffffffffffff00);
      FUN_141bb5ff0(param_1,lVar31,*(undefined8 *)((longlong)local_1c0 + lVar25 + 8));
      lVar25 = lVar25 + 0x10;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
  }
  if ((DAT_1464c32c4 != 0) && (DAT_1464c9c1a != '\0')) {
    if (iVar37 != 0) {
      FUN_141dd3770(param_1,lVar31,&local_1c0);
    }
    if (0 < (int)local_150) {
      uVar26 = (ulonglong)(int)param_1[0x19];
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar26;
      uVar16 = SUB168(ZEXT816(0x30) * auVar5,0);
      if (SUB168(ZEXT816(0x30) * auVar5,8) != 0) {
        uVar16 = 0xffffffffffffffff;
      }
      lVar39 = uVar16 + 8;
      if (0xfffffffffffffff7 < uVar16) {
        lVar39 = -1;
      }
      puVar17 = (ulonglong *)operator_new(lVar39);
      uVar16 = 0;
      if (puVar17 == (ulonglong *)0x0) {
        local_1d0 = (ulonglong *)0x0;
      }
      else {
        *puVar17 = uVar26;
        local_1d0 = puVar17 + 1;
        if (uVar26 != 0) {
          lVar39 = (longlong)puVar17 + 0x24;
          puVar17 = local_1d0;
          do {
            *puVar17 = 0;
            puVar17 = puVar17 + 6;
            *(undefined8 *)(lVar39 + -0x14) = 0;
            *(undefined8 *)(lVar39 + -0xc) = 0;
            *(undefined8 *)(lVar39 + -4) = 0;
            *(undefined8 *)(lVar39 + 4) = 0;
            *(undefined8 *)(lVar39 + 0xc) = 0;
            lVar39 = lVar39 + 0x30;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
        }
      }
      local_1e4 = 0;
      if ((int)local_150 < 1) {
        iVar36 = (int)param_1[0x19];
      }
      else {
        local_190 = 0;
        uVar26 = uVar16;
        iVar30 = (int)local_150;
        do {
          iVar37 = 0;
          if ((int)param_1[0x19] < 1) {
            iVar36 = (int)param_1[0x19];
            local_1e4 = (uint)uVar16;
          }
          else {
            puVar17 = local_1d0 + 3;
            do {
              lVar31 = local_158;
              if (iVar30 == (int)local_140) {
                iVar36 = (int)uVar16;
              }
              else {
                iVar36 = 0;
                if ((int)((ulonglong)*(undefined8 *)(local_138 + local_190) >> 0x20) != 0) {
                  iVar36 = iVar37;
                }
                iVar36 = ((uint)*(undefined8 *)(local_138 + local_190) & 0x7fffffff) + iVar36;
              }
              iVar30 = (int)puVar17[-2];
              uVar2 = *(undefined8 *)(local_148 + (longlong)iVar36 * 0xc);
              uVar3 = *(undefined4 *)(local_148 + (longlong)iVar36 * 0xc + 8);
              *(int *)(puVar17 + -2) = iVar30 + 1;
              if (*(int *)((longlong)puVar17 + -0xc) < iVar30 + 1) {
                FUN_141bbbef0(puVar17 + -3,iVar30);
              }
              uVar16 = puVar17[-3];
              uVar6 = ((undefined8 *)(uVar26 + lVar31))[1];
              lVar39 = (longlong)iVar30 * 0x1c;
              *(undefined8 *)(lVar39 + uVar16) = *(undefined8 *)(uVar26 + lVar31);
              ((undefined8 *)(lVar39 + uVar16))[1] = uVar6;
              *(undefined8 *)(lVar39 + 0x10 + uVar16) = *(undefined8 *)(uVar26 + 0x10 + lVar31);
              *(undefined4 *)(lVar39 + 0x18 + uVar16) = *(undefined4 *)(uVar26 + 0x18 + lVar31);
              iVar36 = (int)*puVar17;
              *(int *)puVar17 = iVar36 + 1;
              if (*(int *)((longlong)puVar17 + 4) < iVar36 + 1) {
                FUN_141bbc030(puVar17 + -1,iVar36);
              }
              uVar4 = puVar17[-1];
              uVar16 = (ulonglong)local_1e4;
              iVar37 = iVar37 + 1;
              puVar17 = puVar17 + 6;
              *(undefined8 *)(uVar4 + (longlong)iVar36 * 0xc) = uVar2;
              *(undefined4 *)(uVar4 + 8 + (longlong)iVar36 * 0xc) = uVar3;
              iVar36 = (int)param_1[0x19];
              iVar30 = (int)local_150;
            } while (iVar37 < iVar36);
          }
          local_1e4 = local_1e4 + 1;
          uVar16 = (ulonglong)local_1e4;
          local_190 = local_190 + 8;
          uVar26 = uVar26 + 0x1c;
          lVar31 = local_1d8;
          iVar37 = local_1c4;
        } while ((int)local_1e4 < iVar30);
      }
      puVar17 = local_1d0;
      iVar30 = 0;
      if (0 < iVar36) {
        puVar23 = local_1d0 + 1;
        do {
          if (0 < (int)*puVar23) {
            local_208 = (wchar_t *)CONCAT44(local_208._4_4_,iVar30);
            FUN_141dd1750(param_1,lVar31,puVar17 + (longlong)iVar30 * 6);
          }
          iVar30 = iVar30 + 1;
          puVar23 = puVar23 + 6;
        } while (iVar30 < (int)param_1[0x19]);
      }
      lVar39 = local_188;
      if (puVar17 != (ulonglong *)0x0) {
        FMemory::operator_delete(puVar17 + -1);
        lVar39 = local_188;
      }
    }
  }
  iVar30 = FUN_1419ef5f0((&DAT_1464c9c48)[(int)param_1[0x54]]);
  iVar36 = (int)local_1b8;
  if (2 < iVar30) {
    bVar40 = false;
    if (iVar37 < (int)local_1b8) {
      lVar39 = lVar39 << 4;
      iVar30 = iVar37;
      do {
        lVar34 = *(longlong *)(*(longlong *)((longlong)local_1c0 + lVar39 + 8) + 0x30);
        if ((lVar34 != 0) && ((*(uint *)(lVar34 + 0x180) & 0xc000) == 0xc000)) {
          FUN_141d9ee20(param_1,lVar31);
          bVar40 = true;
          iVar36 = (int)local_1b8;
        }
        iVar30 = iVar30 + 1;
        lVar39 = lVar39 + 0x10;
      } while (iVar30 < iVar36);
      if ((bVar40) && (local_1e4 = 0, 0 < iVar36)) {
        lVar31 = 0;
        do {
          lVar34 = local_1d8;
          uVar16 = 0;
          lVar39 = *(longlong *)((longlong)local_1c0 + lVar31 + 8);
          if ((((lVar39 != 0) && (*(longlong *)(lVar39 + 0x30) != 0)) &&
              (uVar29 = *(uint *)(*(longlong *)(lVar39 + 0x30) + 0x180), (uVar29 >> 0xe & 1) != 0))
             && (((uVar29 >> 0xf & 1) == 0 && (uVar26 = uVar16, 0 < (int)param_1[0x19])))) {
            do {
              lVar25 = param_1[0x18] + uVar16;
              cVar8 = FUN_141be7b80(lVar39,lVar25);
              if ((((cVar8 != '\0') &&
                   ((lVar14 = *(longlong *)(lVar25 + 0x18), lVar14 != 0 &&
                    (2 < *(int *)(lVar25 + 0x1a38))))) && (*(char *)(lVar14 + 0x4e8) == '\0')) &&
                 ((*(longlong *)(lVar14 + 0x4e0) != 0 && (*(longlong *)(lVar39 + 0x30) != 0)))) {
                FUN_141ba0590(*(longlong *)(lVar14 + 0x4e0),lVar34);
              }
              uVar29 = (int)uVar26 + 1;
              uVar16 = uVar16 + 0x30d0;
              uVar26 = (ulonglong)uVar29;
            } while ((int)uVar29 < (int)param_1[0x19]);
            iVar36 = (int)local_1b8;
          }
          local_1e4 = local_1e4 + 1;
          lVar31 = lVar31 + 0x10;
          iVar37 = local_1c4;
        } while ((int)local_1e4 < iVar36);
      }
    }
    lVar31 = local_1d8;
    uVar26 = 0;
    uVar16 = uVar26;
    if (0 < (int)param_1[0x19]) {
      do {
        lVar34 = param_1[0x18] + uVar26;
        lVar39 = *(longlong *)(lVar34 + 0x18);
        if ((((lVar39 != 0) && (2 < *(int *)(lVar34 + 0x1a38))) &&
            (*(char *)(lVar39 + 0x4e8) == '\0')) &&
           (lVar39 = *(longlong *)(lVar39 + 0x4e0), lVar39 != 0)) {
          local_1e0 = (ulonglong *)0x0;
          local_1b0 = (longlong *)0x0;
          uStack_1a8 = (uint *)0x0;
          FScopedGPUStatEvent::Begin(&local_1b0,lVar31,&DAT_146a27658);
          FUN_141be9100(lVar39,lVar31,lVar34);
          if (local_1b0 != (longlong *)0x0) {
            FScopedGPUStatEvent::End(&local_1b0);
          }
        }
        uVar29 = (int)uVar16 + 1;
        uVar26 = uVar26 + 0x30d0;
        uVar16 = (ulonglong)uVar29;
      } while ((int)uVar29 < (int)param_1[0x19]);
      iVar37 = local_1c4;
      iVar36 = (int)local_1b8;
    }
  }
  local_1d0 = (ulonglong *)0x0;
  if (iVar37 < iVar36) {
    local_188 = local_188 << 4;
    local_1e0 = local_128;
    local_168 = local_128;
    puVar17 = local_128;
    puVar23 = local_128;
    do {
      puVar1 = local_1c0;
      bVar35 = 0;
      uVar16 = *(ulonglong *)((longlong)local_1c0 + local_188 + 8);
      local_15c = *(uint *)((longlong)local_1c0 + local_188) >> 4 & 0xffffff01;
      local_160 = *(uint *)((longlong)local_1c0 + local_188) >> 3 & 0xffffff01;
      local_1e8[0] = '\0';
      local_190 = CONCAT44(local_190._4_4_,
                           CONCAT31((uint3)(*(uint *)(uVar16 + 0x90) >> 9),
                                    ~(byte)(*(uint *)(uVar16 + 0x90) >> 1))) & 0xffffffffffffff01;
      cVar8 = (char)local_15c;
      puVar27 = puVar17;
      local_170 = uVar16;
      if ((cVar8 != '\0') || (lVar31 = local_1d8, (char)local_160 != '\0')) {
        if (local_1d0 == (ulonglong *)0x0) {
          if (*(int *)(DAT_146a10070 + 4) == 1) {
            FUN_141cdd7b0(local_178,local_1d8,&local_1d0);
          }
          else {
            local_180 = *(ulonglong *)(local_178 + 0x378);
            uStack_e8 = (uint *)CONCAT44((int)local_180,DAT_1464c9cb0);
            uStack_e0 = local_180 >> 0x20;
            local_d0 = CONCAT62(local_d0._2_6_,1);
            local_c4 = 1;
            local_b0 = 1;
            local_c8 = DAT_146a9da78;
            local_f8 = _DAT_1464c9ca0;
            uStack_f0 = plRam00000001464c9ca8;
            uStack_d8 = 0x1000000000001;
            local_d0 = CONCAT44(2,(undefined4)local_d0);
            local_c0 = 0;
            local_b8 = L"UnknownTexture2D";
            uVar10 = FUN_141ce5010(*(undefined4 *)(local_178 + 0x3c8));
            local_d0 = CONCAT62(local_d0._2_6_,uVar10);
            local_1f8 = 1;
            local_200 = CONCAT31(local_200._1_3_,1);
            local_208 = L"ScreenShadowMaskTexture";
            FUN_141ce20b0(&PTR_PTR_1464c2560,local_1d8,&local_f8);
          }
        }
        lVar31 = local_1d8;
        if (cVar8 != '\0') {
          iVar37 = 0;
          iVar36 = iVar37;
          if (0 < (int)param_1[0x19]) {
            do {
              lVar39 = (longlong)iVar36 * 0x30d0 + param_1[0x18];
              FUN_141b57b90(lVar39 + 0x3018,lVar39,lVar31,uVar16);
              iVar36 = iVar36 + 1;
              puVar17 = local_1e0;
            } while (iVar36 < (int)param_1[0x19]);
          }
          lVar39 = local_1d8;
          local_200 = CONCAT31(local_200._1_3_,1);
          local_208 = (wchar_t *)CONCAT44(local_208._4_4_,0x21);
          uVar29 = *(uint *)((longlong)puVar1 + local_188);
          if (*(int *)(DAT_146a10070 + 4) == 0) {
            iVar37 = 4;
          }
          FUN_141ad74f0(local_1d8,local_1d0[1],*(undefined8 *)(*(longlong *)(local_178 + 0x60) + 8),
                        iVar37);
          lVar31 = lVar39;
          if (((uVar29 & 3) != 0) &&
             (local_180 = local_180 & 0xffffffff00000000, 0 < (int)param_1[0x19])) {
            lVar34 = 0;
            do {
              puVar23 = (ulonglong *)(param_1[0x18] + lVar34);
              local_1b0 = (longlong *)0x0;
              uStack_1a8 = (uint *)0x0;
              puVar17 = puVar23 + 0x354;
              local_128 = puVar23;
              cVar8 = (**(code **)(**(longlong **)(uVar16 + 0x30) + 0xd8))
                                (*(longlong **)(uVar16 + 0x30),&local_1b0,puVar23,puVar17);
              uVar16 = local_170;
              if (cVar8 == '\0') {
                local_1b0 = (longlong *)*puVar17;
                uStack_1a8 = (uint *)puVar23[0x355];
                local_1e4 = (uint)*puVar17;
                uVar11 = (uint)puVar23[0x355];
                uVar21 = *(uint *)((longlong)puVar23 + 0x1aac);
                uVar29 = *(uint *)((longlong)puVar23 + 0x1aa4);
              }
              else {
                local_1e4 = (uint)local_1b0;
                uVar11 = (uint)uStack_1a8;
                uVar21 = uStack_1a8._4_4_;
                uVar29 = local_1b0._4_4_;
              }
              if (((int)local_1e4 < (int)uVar11) && ((int)uVar29 < (int)uVar21)) {
                puVar20 = (undefined8 *)(*(longlong *)(lVar39 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar18 = puVar20 + 5;
                if (*(undefined8 **)(lVar39 + 0x38) < puVar18) {
                  FMemStackBase::AllocateNewChunk(lVar39 + 0x30,0x30);
                  puVar20 = (undefined8 *)(*(longlong *)(lVar39 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar18 = puVar20 + 5;
                }
                *(undefined8 **)(lVar39 + 0x30) = puVar18;
                *(int *)(lVar39 + 0x14) = *(int *)(lVar39 + 0x14) + 1;
                local_1f0 = 0;
                **(undefined8 **)(lVar39 + 8) = puVar20;
                *(undefined8 **)(lVar39 + 8) = puVar20 + 1;
                puVar20[1] = 0;
                *puVar20 = &PTR_LAB_143f59420;
                *(uint *)(puVar20 + 2) = local_1e4;
                *(uint *)((longlong)puVar20 + 0x14) = uVar29;
                *(undefined4 *)(puVar20 + 3) = 0;
                *(uint *)((longlong)puVar20 + 0x1c) = uVar11;
                *(uint *)(puVar20 + 4) = uVar21;
                *(undefined4 *)((longlong)puVar20 + 0x24) = 0x3f800000;
                local_1f8 = 0;
                local_200 = 0;
                local_128 = (ulonglong *)0x3f8000003f800000;
                uStack_120 = 0x3f8000003f800000;
                local_208 = (wchar_t *)((ulonglong)local_208 & 0xffffffffffffff00);
                DrawClearQuadMRT(lVar39,1,1,&local_128);
                uVar16 = local_170;
              }
              else {
                (**(code **)(**(longlong **)(local_170 + 0x30) + 0xd8))
                          (*(longlong **)(local_170 + 0x30),&local_1b0,local_128,puVar17);
              }
              lVar34 = lVar34 + 0x30d0;
              iVar36 = (int)local_180 + 1;
              local_180 = CONCAT44(local_180._4_4_,iVar36);
              puVar17 = local_1e0;
              puVar23 = local_168;
              lVar31 = local_1d8;
            } while (iVar36 < (int)param_1[0x19]);
          }
          local_208 = (wchar_t *)local_1e8;
          FUN_141da9e80(param_1,lVar31,uVar16);
          bVar35 = 1;
          puVar27 = puVar17;
        }
      }
      iVar36 = 0;
      if (0 < (int)param_1[0x19]) {
        do {
          lVar39 = (longlong)iVar36 * 0x30d0 + param_1[0x18];
          FUN_141b5b700(lVar39 + 0x3018,lVar39,lVar31);
          iVar36 = iVar36 + 1;
        } while (iVar36 < (int)param_1[0x19]);
      }
      if ((char)local_160 != '\0') {
        local_200 = local_200 & 0xffffff00;
        local_208 = (wchar_t *)CONCAT71(local_208._1_7_,(char)local_15c);
        bVar9 = FUN_141b6a890(param_1,lVar31,uVar16);
        bVar35 = bVar35 | bVar9;
      }
      lVar39 = lVar31;
      if (bVar35 != 0) {
        local_f8 = (longlong *)0xffffffff00000000;
        uStack_f0 = (longlong *)&DAT_ffffffffffffffff;
        puVar20 = (undefined8 *)(*(longlong *)(lVar31 + 0x30) + 7U & 0xfffffffffffffff8);
        uStack_d8 = 0xffffffff;
        local_d0 = 0;
        uStack_e8 = (uint *)&DAT_ffffffffffffffff;
        uStack_e0 = 0xffffffffffffffff;
        local_170 = local_1d0[2];
        local_128 = (ulonglong *)local_1d0[1];
        puVar18 = puVar20 + 10;
        if (*(undefined8 **)(lVar31 + 0x38) < puVar18) {
          FMemStackBase::AllocateNewChunk(lVar31 + 0x30,0x58);
          puVar20 = (undefined8 *)(*(longlong *)(lVar31 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar18 = puVar20 + 10;
        }
        lVar39 = local_1d8;
        *(undefined8 **)(lVar31 + 0x30) = puVar18;
        *(int *)(local_1d8 + 0x14) = *(int *)(local_1d8 + 0x14) + 1;
        **(undefined8 **)(local_1d8 + 8) = puVar20;
        *(undefined8 **)(local_1d8 + 8) = puVar20 + 1;
        puVar20[1] = 0;
        *puVar20 = &PTR_LAB_143f489f0;
        *(undefined4 *)(puVar20 + 2) = (undefined4)local_f8;
        *(undefined4 *)((longlong)puVar20 + 0x14) = local_f8._4_4_;
        *(undefined4 *)(puVar20 + 3) = (undefined4)uStack_f0;
        *(uint *)((longlong)puVar20 + 0x1c) = uStack_f0._4_4_;
        *(undefined4 *)(puVar20 + 4) = (undefined4)uStack_e8;
        *(undefined4 *)((longlong)puVar20 + 0x24) = uStack_e8._4_4_;
        *(uint *)(puVar20 + 5) = (uint)uStack_e0;
        *(uint *)((longlong)puVar20 + 0x2c) = uStack_e0._4_4_;
        *(undefined4 *)(puVar20 + 6) = (undefined4)uStack_d8;
        *(undefined4 *)((longlong)puVar20 + 0x34) = uStack_d8._4_4_;
        *(undefined4 *)(puVar20 + 7) = (undefined4)local_d0;
        *(undefined4 *)((longlong)puVar20 + 0x3c) = local_d0._4_4_;
        puVar20[9] = local_170;
        puVar20[8] = local_128;
        lVar31 = (**(code **)(*local_128 + 8))();
        if ((lVar31 == 0) && (lVar31 = (**(code **)(*(longlong *)puVar20[8] + 0x18))(), lVar31 == 0)
           ) {
          (**(code **)(*(longlong *)puVar20[8] + 0x20))();
        }
        lVar31 = (**(code **)(*(longlong *)puVar20[9] + 8))();
        if ((lVar31 == 0) && (lVar31 = (**(code **)(*(longlong *)puVar20[9] + 0x18))(), lVar31 == 0)
           ) {
          (**(code **)(*(longlong *)puVar20[9] + 0x20))();
        }
      }
      if ((((char)local_190 != '\0') && (local_1e8[0] == '\0')) &&
         (uVar29 = 0, 0 < (int)param_1[0x19])) {
        do {
          local_208 = (wchar_t *)((longlong)(int)uVar29 * 0x30d0 + param_1[0x18]);
          local_200 = uVar29;
          (**(code **)(*param_1 + 0x18))(param_1,lVar39,uVar16,0);
          uVar29 = uVar29 + 1;
        } while ((int)uVar29 < (int)param_1[0x19]);
      }
      if (bVar35 != 0) {
        AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
      }
      local_208 = (wchar_t *)CONCAT71(local_208._1_7_,1);
      FUN_141cdeb70(local_178,lVar39,0,0x21);
      puVar17 = local_1d0;
      if (bVar35 == 0) {
        uVar29 = local_1c8 | 2;
        puVar23 = (ulonglong *)0x0;
        local_168 = (ulonglong *)0x0;
        puVar17 = puVar27;
        local_1c8 = uVar29;
      }
      else {
        uVar29 = local_1c8 | 1;
        local_1e0 = local_1d0;
        local_1c8 = uVar29;
        if (local_1d0 != (ulonglong *)0x0) {
          (**(code **)(*local_1d0 + 0x28))(local_1d0);
        }
      }
      local_200 = CONCAT31(local_200._1_3_,1);
      local_208 = (wchar_t *)((ulonglong)local_208 & 0xffffffffffffff00);
      FUN_141bb5ff0(param_1,lVar39,uVar16);
      if (((uVar29 & 2) != 0) &&
         (uVar29 = uVar29 & 0xfffffffd, local_1c8 = uVar29, puVar23 != (ulonglong *)0x0)) {
        (**(code **)(*puVar23 + 0x30))(puVar23);
      }
      if (((uVar29 & 1) != 0) && (local_1c8 = uVar29 & 0xfffffffe, puVar17 != (ulonglong *)0x0)) {
        (**(code **)(*puVar17 + 0x30))(puVar17);
      }
      local_1c4 = local_1c4 + 1;
      local_188 = local_188 + 0x10;
    } while (local_1c4 < (int)local_1b8);
    if (local_1d0 != (ulonglong *)0x0) {
      (**(code **)(*local_1d0 + 0x30))();
    }
  }
  bVar40 = local_a0._4_4_ != 0;
  local_60 = 0;
  local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
  if (bVar40) {
    FUN_141bbc290(&local_a8,0);
  }
  bVar40 = local_80._4_4_ != 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_80 = (ulonglong)local_80._4_4_ << 0x20;
  if (bVar40) {
    local_80 = 0;
    TBitArray<SceneRenderingBitArrayAllocator>::Realloc(local_98,0);
  }
  if (local_108 != 0) {
    FScopedGPUStatEvent::End(&local_108);
  }
  return;
}



// FUNCTION 141bb93a0 FUN_141bb93a0 body=5663 status=ok
// SIG undefined FUN_141bb93a0(void)

void FUN_141bb93a0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *pbVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 local_res20 [8];
  byte *in_stack_fffffffffffffa18;
  undefined4 uVar16;
  undefined8 uVar15;
  byte *in_stack_fffffffffffffa28;
  longlong *in_stack_fffffffffffffa30;
  undefined4 uVar18;
  undefined8 uVar17;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined4 local_598;
  longlong local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined4 local_578;
  undefined1 local_574;
  int local_570;
  undefined1 local_56c [4];
  longlong local_568;
  undefined8 local_560;
  undefined8 local_558 [2];
  byte *local_548;
  longlong local_540;
  longlong local_538;
  longlong lStack_530;
  longlong local_528;
  longlong lStack_520;
  longlong local_518;
  longlong lStack_510;
  longlong local_508;
  longlong lStack_500;
  byte *local_4f8;
  longlong lStack_4f0;
  byte *local_4e8;
  longlong lStack_4e0;
  longlong local_4d8;
  longlong lStack_4d0;
  byte *local_4c8;
  longlong lStack_4c0;
  byte *local_4b8;
  longlong lStack_4b0;
  longlong local_4a8;
  longlong local_4a0;
  undefined8 local_498;
  undefined4 local_490;
  undefined8 local_488;
  undefined4 local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined4 local_468;
  longlong local_460;
  undefined8 local_458;
  longlong local_450;
  undefined4 local_448;
  undefined1 local_444;
  undefined8 local_440;
  undefined8 local_438;
  undefined4 local_430;
  longlong local_428;
  undefined8 local_420;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined1 local_40c;
  undefined8 local_408;
  undefined8 local_400;
  undefined4 local_3f8;
  longlong local_3f0;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined1 local_3d4;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  longlong local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined1 local_39c;
  undefined8 local_398;
  undefined8 local_390;
  undefined4 local_388;
  longlong local_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined1 local_364;
  undefined8 local_360;
  undefined8 local_358;
  undefined4 local_350;
  longlong local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined1 local_32c;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  longlong local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined1 local_2f4;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined1 local_2bc;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined1 local_284;
  undefined8 local_280;
  undefined8 local_278;
  undefined4 local_270;
  longlong local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined1 local_24c;
  undefined8 local_248;
  undefined8 local_240;
  undefined4 local_238;
  longlong local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined1 local_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined1 local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  longlong local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined1 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  longlong local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined1 local_48;
  
  iVar4 = *(int *)(DAT_146a29240 + 4);
  if ((2 < iVar4 - 1U) &&
     (((local_570 = iVar4, cVar3 = FUN_141636a40(), cVar3 != '\0' &&
       ((DAT_1464c9c18 != '\0' || (DAT_146ab6383 == '\0')))) || (iVar4 = 3, DAT_146ab62e3 != '\0')))
     ) {
    iVar4 = 1;
  }
  iVar14 = *(int *)(DAT_146a29258 + 4);
  if (*(int *)(DAT_146a29258 + 4) < 1) {
    iVar14 = 0x7fffffff;
  }
  lVar8 = 0;
  local_570 = iVar4;
  if (iVar4 == 2) {
    lVar12 = 3;
    do {
      local_498 = *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x900);
      local_490 = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x908);
      FUN_141be7ec0(*(longlong *)(param_1 + 8) + 0xc50 + lVar8,&local_498);
      local_488 = *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x900);
      local_480 = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x908);
      FUN_141be7ec0(*(longlong *)(param_1 + 8) + 0xe18 + lVar8,&local_488);
      lVar8 = lVar8 + 0x98;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  uVar9 = 0;
  if (((((iVar14 == 0x7fffffff) && ((int)param_3[1] != 0)) &&
       (iVar4 = local_570, *(char *)(*(longlong *)(param_1 + 0xc0) + 0x120b) == '\0')) &&
      (((local_570 != 3 && (cVar3 = FUN_141636a40(), iVar4 = local_570, cVar3 != '\0')) &&
       ((DAT_1464c9c18 != '\0' || (DAT_146ab6383 == '\0')))))) && (*(int *)(DAT_146a29228 + 4) != 0)
     ) {
    local_48 = 1;
    uVar13 = uVar9;
    local_50 = param_2;
    if (0 < *(int *)(param_1 + 200)) {
      do {
        lVar8 = *(longlong *)(param_1 + 0xc0) + uVar9;
        cVar3 = FUN_141ae26c0(lVar8);
        if (cVar3 != '\0') {
          local_560 = 0;
          FUN_141b95fb0(param_2,lVar8,0,&local_560);
          local_468 = 0x11;
          local_478 = 0;
          uStack_470 = 0;
          local_460 = *(longlong *)(lVar8 + 0x20);
          if (local_460 != 0) {
            LOCK();
            *(int *)(local_460 + 8) = *(int *)(local_460 + 8) + 1;
            UNLOCK();
          }
          local_458 = local_560;
          local_448 = 0;
          local_444 = 0;
          local_450 = (ulonglong)
                      ((uint)(*(char *)(lVar8 + 0x1205) != '\0') |
                      -(uint)(*(char *)(lVar8 + 0x11b4) != '\0') & 8) << 0x20;
          FUN_141bc0740(param_2,lVar8,&local_478);
          FUN_141bbadf0(param_1,lVar8,param_2,param_1 + 0xc0,&local_478);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_460);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_560);
        }
        uVar11 = (int)uVar13 + 1;
        uVar9 = uVar9 + 0x30d0;
        uVar13 = (ulonglong)uVar11;
      } while ((int)uVar11 < *(int *)(param_1 + 200));
    }
    FScopedCommandListWaitForTasks::~FScopedCommandListWaitForTasks(&local_50);
  }
  else {
    lVar8 = (longlong)(int)param_3[1];
    if (0 < lVar8) {
      lVar12 = *param_3;
      local_4a8 = 0;
      local_568 = lVar8;
      local_4a0 = lVar12;
      do {
        lVar1 = *(longlong *)(lVar12 + local_4a8 * 8);
        if (((*(byte *)(lVar1 + 0x28cc) & 8) == 0) && (*(char *)(lVar1 + 0x1a98) != '\0')) {
          if (*(char *)(lVar1 + 0x1209) == '\0') {
            if (*(char *)(lVar1 + 0x120b) != '\0') {
LAB_141bb96f8:
              if (((*(int *)(lVar1 + 0xf60) == 2) ||
                  (lVar8 = local_568, *(longlong *)(lVar1 + 0x10) == 0)) ||
                 (*(int *)(*(longlong *)(lVar1 + 0x10) + 8) < 2)) goto LAB_141bba97e;
            }
          }
          else if (*(int *)(lVar1 + 0xf60) == 2) {
            if (*(char *)(lVar1 + 0x120b) != '\0') goto LAB_141bb96f8;
            goto LAB_141bba97e;
          }
          local_558[0] = 0;
          FUN_141b95fb0(param_2,lVar1,0,local_558);
          local_598 = 0x11;
          local_5a8 = 0;
          uStack_5a0 = 0;
          local_590 = *(longlong *)(lVar1 + 0x20);
          if (local_590 != 0) {
            LOCK();
            *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
            UNLOCK();
          }
          local_588 = local_558[0];
          local_578 = 0;
          local_574 = 0;
          local_580 = (ulonglong)
                      ((uint)(*(char *)(lVar1 + 0x1205) != '\0') |
                      -(uint)(*(char *)(lVar1 + 0x11b4) != '\0') & 8) << 0x20;
          FUN_141bc0740(param_2,lVar1,&local_5a8);
          cVar3 = *(char *)(lVar1 + 0x120b);
          local_538 = 0;
          lStack_530 = 0;
          local_528 = 0;
          lStack_520 = 0;
          local_518 = 0;
          lStack_510 = 0;
          pbVar10 = (byte *)0x0;
          if ((*(byte *)(lVar1 + 0x2740) & 1) != 0) {
            pbVar10 = (byte *)(lVar1 + 0x2740);
          }
          local_4f8 = (byte *)0x0;
          lStack_4f0 = 0;
          local_4e8 = (byte *)0x0;
          lStack_4e0 = 0;
          local_4d8 = 0;
          lStack_4d0 = 0;
          local_4c8 = (byte *)0x0;
          lStack_4c0 = 0;
          local_4b8 = (byte *)0x0;
          lStack_4b0 = 0;
          local_540 = 0;
          if (cVar3 != '\0') {
            local_538 = *(longlong *)(param_1 + 0xc0);
            local_528 = local_538 + 0x1b40;
            local_518 = local_538 + 0x1c50;
            lStack_520 = local_538 + 0x4c10;
            lStack_510 = local_538 + 0x4d20;
            lStack_530 = local_538 + 0x30d0;
            if (pbVar10 != (byte *)0x0) {
              local_540 = local_538 + 0x5810;
              local_4f8 = pbVar10 + 0x28;
              local_4e8 = pbVar10 + 0x48;
              lStack_4f0 = local_538 + 0x5838;
              lStack_4e0 = local_538 + 0x5858;
              local_4c8 = pbVar10 + 0x58;
              local_4b8 = pbVar10 + 0x78;
              lStack_4c0 = local_538 + 0x5868;
              lStack_4b0 = local_538 + 0x5888;
              local_4d8 = local_538;
              lStack_4d0 = lStack_530;
            }
          }
          lVar8 = *(longlong *)(param_1 + 8);
          local_548 = pbVar10;
          local_508 = local_4d8;
          lStack_500 = lStack_4d0;
          if (iVar4 == 3) {
            if (cVar3 == '\0') {
              if (pbVar10 == (byte *)0x0) {
                local_328 = local_5a8;
                local_320 = uStack_5a0;
                local_318 = local_598;
                local_310 = local_590;
                if (local_590 != 0) {
                  LOCK();
                  *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
                  UNLOCK();
                }
                local_308 = local_588;
                in_stack_fffffffffffffa30 = (longlong *)0x0;
                local_300 = (undefined4)local_580;
                local_2fc = local_580._4_4_;
                in_stack_fffffffffffffa28 = (byte *)(lVar1 + 0x1c50);
                in_stack_fffffffffffffa18 =
                     (byte *)((ulonglong)in_stack_fffffffffffffa18 & 0xffffffffffffff00);
                local_2f4 = 0;
                local_2f8 = local_578;
                iVar4 = FUN_141b82680(lVar8 + 0xc50,param_2,lVar1,&local_328,
                                      in_stack_fffffffffffffa18,lVar1 + 0x1b40,
                                      in_stack_fffffffffffffa28,0,iVar14);
                TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_310);
                iVar14 = iVar14 - iVar4;
              }
              else {
                local_398 = local_5a8;
                local_390 = uStack_5a0;
                local_388 = local_598;
                local_380 = local_590;
                if (local_590 != 0) {
                  LOCK();
                  *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
                  UNLOCK();
                }
                local_378 = local_588;
                local_370 = (undefined4)local_580;
                local_36c = local_580._4_4_;
                uVar9 = (ulonglong)in_stack_fffffffffffffa18 & 0xffffffffffffff00;
                local_364 = 0;
                local_368 = local_578;
                iVar4 = FUN_141b82680(lVar8 + 0xe18,param_2,lVar1,&local_398,uVar9,pbVar10 + 0x28,
                                      pbVar10 + 0x48,0,iVar14);
                TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_380);
                local_360 = local_5a8;
                local_358 = uStack_5a0;
                local_350 = local_598;
                local_348 = local_590;
                if (local_590 != 0) {
                  LOCK();
                  *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
                  UNLOCK();
                  pbVar10 = local_548;
                }
                local_340 = local_588;
                local_338 = (undefined4)local_580;
                in_stack_fffffffffffffa30 = (longlong *)0x0;
                local_334 = local_580._4_4_;
                in_stack_fffffffffffffa28 = pbVar10 + 0x78;
                local_330 = local_578;
                local_32c = 0;
                in_stack_fffffffffffffa18 = (byte *)(uVar9 & 0xffffffffffffff00);
                iVar5 = FUN_141b82680(lVar8 + 0xc50,param_2,lVar1,&local_360,
                                      in_stack_fffffffffffffa18,pbVar10 + 0x58,
                                      in_stack_fffffffffffffa28,0,iVar14);
                TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_348);
                iVar14 = iVar14 - (iVar4 + iVar5);
              }
            }
            else if (pbVar10 == (byte *)0x0) {
              local_3d0 = local_5a8;
              local_3c8 = uStack_5a0;
              local_3c0 = local_598;
              local_3b8 = local_590;
              if (local_590 != 0) {
                LOCK();
                *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
                UNLOCK();
              }
              local_3b0 = local_588;
              local_3a8 = (undefined4)local_580;
              local_3a4 = local_580._4_4_;
              in_stack_fffffffffffffa30 = &local_538;
              in_stack_fffffffffffffa28 = (byte *)0x0;
              in_stack_fffffffffffffa18 =
                   (byte *)((ulonglong)in_stack_fffffffffffffa18 & 0xffffffffffffff00);
              local_39c = 0;
              local_3a0 = local_578;
              iVar4 = FUN_141b82010(lVar8 + 0xc50,param_2,local_538,&local_3d0,
                                    in_stack_fffffffffffffa18,0,0,in_stack_fffffffffffffa30,iVar14);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3b8);
              iVar14 = iVar14 - iVar4;
            }
            else {
              local_440 = local_5a8;
              local_438 = uStack_5a0;
              local_430 = local_598;
              local_428 = local_590;
              if (local_590 != 0) {
                LOCK();
                *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
                UNLOCK();
              }
              local_420 = local_588;
              local_418 = (undefined4)local_580;
              local_414 = local_580._4_4_;
              uVar9 = (ulonglong)in_stack_fffffffffffffa18 & 0xffffffffffffff00;
              local_40c = 0;
              local_410 = local_578;
              iVar4 = FUN_141b82010(lVar8 + 0xe18,param_2,local_4d8,&local_440,uVar9,0,0,&local_4d8,
                                    iVar14);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_428);
              local_408 = local_5a8;
              local_400 = uStack_5a0;
              local_3f8 = local_598;
              local_3f0 = local_590;
              if (local_590 != 0) {
                LOCK();
                *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
                UNLOCK();
                pbVar10 = local_548;
              }
              local_3e8 = local_588;
              local_3e0 = (undefined4)local_580;
              local_3dc = local_580._4_4_;
              in_stack_fffffffffffffa28 = (byte *)0x0;
              in_stack_fffffffffffffa18 = (byte *)(uVar9 & 0xffffffffffffff00);
              local_3d8 = local_578;
              local_3d4 = 0;
              in_stack_fffffffffffffa30 = &local_508;
              iVar5 = FUN_141b82010(lVar8 + 0xc50,param_2,local_508,&local_408,
                                    in_stack_fffffffffffffa18,0,0,&local_508,iVar14);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3f0);
              iVar14 = iVar14 - (iVar4 + iVar5);
            }
          }
          else if (cVar3 == '\0') {
            if (pbVar10 == (byte *)0x0) {
              pbVar6 = (byte *)(lVar1 + 0x1c50);
              in_stack_fffffffffffffa18 = (byte *)(lVar1 + 0x1b40);
            }
            else {
              FUN_141b97530(lVar8 + 0xe18,param_2,lVar1,&local_5a8,pbVar10 + 0x28,pbVar10 + 0x48);
              pbVar6 = pbVar10 + 0x78;
              in_stack_fffffffffffffa18 = pbVar10 + 0x58;
            }
            FUN_141b97530(lVar8 + 0xc50,param_2,lVar1,&local_5a8,in_stack_fffffffffffffa18,pbVar6);
          }
          else if (pbVar10 == (byte *)0x0) {
            local_280 = local_5a8;
            local_278 = uStack_5a0;
            local_270 = local_598;
            local_268 = local_590;
            if (local_590 != 0) {
              LOCK();
              *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
              UNLOCK();
            }
            local_260 = local_588;
            local_258 = (undefined4)local_580;
            local_254 = local_580._4_4_;
            local_250 = local_578;
            in_stack_fffffffffffffa30 = &local_538;
            in_stack_fffffffffffffa18 = (byte *)&local_280;
            in_stack_fffffffffffffa28 = (byte *)0x0;
            local_24c = 0;
            FUN_141b82c30(lVar8 + 0xc50,param_2,local_538,0,in_stack_fffffffffffffa18,0,0,
                          in_stack_fffffffffffffa30,0,*(int *)(lVar8 + 0xc88) + -1,0);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_268);
          }
          else {
            local_2f0 = local_5a8;
            local_2e8 = uStack_5a0;
            local_2e0 = local_598;
            local_2d8 = local_590;
            if (local_590 != 0) {
              LOCK();
              *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
              UNLOCK();
            }
            local_2d0 = local_588;
            local_2c8 = (undefined4)local_580;
            local_2c4 = local_580._4_4_;
            local_2c0 = local_578;
            local_2bc = 0;
            FUN_141b82c30(lVar8 + 0xe18,param_2,local_4d8,0,&local_2f0,0,0,&local_4d8,0,
                          *(int *)(lVar8 + 0xe50) + -1,0);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2d8);
            local_2b8 = local_5a8;
            local_2b0 = uStack_5a0;
            local_2a8 = local_598;
            local_2a0 = local_590;
            if (local_590 != 0) {
              LOCK();
              *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
              UNLOCK();
              pbVar10 = local_548;
            }
            local_298 = local_588;
            local_290 = (undefined4)local_580;
            local_28c = local_580._4_4_;
            local_288 = local_578;
            in_stack_fffffffffffffa18 = (byte *)&local_2b8;
            in_stack_fffffffffffffa28 = (byte *)0x0;
            local_284 = 0;
            in_stack_fffffffffffffa30 = &local_508;
            FUN_141b82c30(lVar8 + 0xc50,param_2,local_508,0,in_stack_fffffffffffffa18,0,0,&local_508
                          ,0,*(int *)(lVar8 + 0xc88) + -1,0);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2a0);
          }
          if (DAT_146ab6e8c != 0) {
            FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
          }
          uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffa18 >> 0x20);
          uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffa30 >> 0x20);
          lVar8 = (longlong)*(int *)(lVar1 + 0x2288);
          if (0 < *(int *)(lVar1 + 0x2288)) {
            lVar12 = 0;
            do {
              lVar2 = *(longlong *)(lVar1 + 0x2280);
              if ((*(byte *)(lVar12 + 0x10 + lVar2) & 1) != 0) {
                in_stack_fffffffffffffa30 =
                     (longlong *)
                     CONCAT44((int)((ulonglong)in_stack_fffffffffffffa30 >> 0x20),
                              *(undefined4 *)(*(longlong *)(lVar12 + lVar2) + 0xb0));
                in_stack_fffffffffffffa28 = *(byte **)(lVar12 + 8 + lVar2);
                in_stack_fffffffffffffa18 =
                     (byte *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffa18 >> 8),1);
                FUN_141b970f0(param_2,lVar1,0,*(longlong *)(lVar12 + lVar2),
                              in_stack_fffffffffffffa18,&local_5a8,in_stack_fffffffffffffa28,
                              in_stack_fffffffffffffa30);
              }
              uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffa18 >> 0x20);
              uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffa30 >> 0x20);
              lVar12 = lVar12 + 0x18;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          if (DAT_146ab6e8c != 0) {
            FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
          }
          uVar9 = CONCAT44(uVar16,1);
          FUN_14274ac60(lVar1 + 0x22e0,param_2,&local_5a8,lVar1,uVar9);
          if ((((&DAT_1464c9c48)[*(int *)(param_1 + 0x2a0)] - 8 < 3) ||
              ((&DAT_1464c9c48)[*(int *)(param_1 + 0x2a0)] == 0x18)) &&
             (cVar3 = FUN_142753a10(), cVar3 == '\0')) {
            uVar7 = 1;
          }
          else {
            uVar7 = 0;
          }
          uVar9 = uVar9 & 0xffffffffffffff00;
          local_res20[0] = 0;
          FUN_141b81e30(param_2,lVar1,&local_5a8,local_res20,uVar9,1);
          uVar17 = CONCAT44(uVar18,0x3f800000);
          uVar13 = (ulonglong)in_stack_fffffffffffffa28 & 0xffffffffffffff00;
          uVar15 = CONCAT71((int7)(uVar9 >> 8),uVar7);
          FUN_1422e9400(lVar1 + 0x1e40,param_2,&local_5a8,*(undefined4 *)(param_1 + 0x2a0),uVar15,
                        lVar1,uVar13,uVar17,3);
          uVar16 = (undefined4)((ulonglong)uVar17 >> 0x20);
          local_56c[0] = 0;
          uVar15 = CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
          FUN_141b81e30(param_2,lVar1,&local_5a8,local_56c,uVar15,1);
          in_stack_fffffffffffffa30 = (longlong *)CONCAT44(uVar16,0x3f800000);
          in_stack_fffffffffffffa28 = (byte *)(uVar13 & 0xffffffffffffff00);
          uVar9 = CONCAT71((int7)((ulonglong)uVar15 >> 8),uVar7);
          FUN_1422e9400(lVar1 + 0x2048,param_2,&local_5a8,*(undefined4 *)(param_1 + 0x2a0),uVar9,
                        lVar1,in_stack_fffffffffffffa28,in_stack_fffffffffffffa30,3);
          lVar8 = *(longlong *)(param_1 + 8);
          if (local_570 == 3) {
            if (*(char *)(lVar1 + 0x120b) == '\0') {
              if (pbVar10 == (byte *)0x0) {
                local_130 = local_5a8;
                local_128 = uStack_5a0;
                local_120 = local_598;
                local_118 = local_590;
                if (local_590 != 0) {
                  LOCK();
                  *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
                  UNLOCK();
                }
                local_110 = local_588;
                local_108 = (undefined4)local_580;
                in_stack_fffffffffffffa30 = (longlong *)0x0;
                local_104 = local_580._4_4_;
                in_stack_fffffffffffffa28 = (byte *)(lVar1 + 0x1c50);
                local_100 = local_578;
                local_fc = 0;
                in_stack_fffffffffffffa18 = (byte *)(uVar9 & 0xffffffffffffff00);
                iVar4 = FUN_141b82680(lVar8 + 0xce8,param_2,lVar1,&local_130,
                                      in_stack_fffffffffffffa18,lVar1 + 0x1b40,
                                      in_stack_fffffffffffffa28,0,iVar14);
                TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
                iVar14 = iVar14 - iVar4;
              }
              else {
                local_1a0 = local_5a8;
                local_198 = uStack_5a0;
                local_190 = local_598;
                local_188 = local_590;
                if (local_590 != 0) {
                  LOCK();
                  *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
                  UNLOCK();
                  pbVar10 = local_548;
                }
                local_180 = local_588;
                local_178 = (undefined4)local_580;
                local_174 = local_580._4_4_;
                local_170 = local_578;
                local_16c = 0;
                uVar9 = uVar9 & 0xffffffffffffff00;
                iVar4 = FUN_141b82680(lVar8 + 0xeb0,param_2,lVar1,&local_1a0,uVar9,pbVar10 + 0x28,
                                      pbVar10 + 0x48,0,iVar14);
                TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_188);
                local_168 = local_5a8;
                local_160 = uStack_5a0;
                local_158 = local_598;
                local_150 = local_590;
                if (local_590 != 0) {
                  LOCK();
                  *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
                  UNLOCK();
                  pbVar10 = local_548;
                }
                local_148 = local_588;
                local_140 = (undefined4)local_580;
                in_stack_fffffffffffffa30 = (longlong *)0x0;
                local_13c = local_580._4_4_;
                in_stack_fffffffffffffa28 = pbVar10 + 0x78;
                local_138 = local_578;
                local_134 = 0;
                in_stack_fffffffffffffa18 = (byte *)(uVar9 & 0xffffffffffffff00);
                iVar5 = FUN_141b82680(lVar8 + 0xce8,param_2,lVar1,&local_168,
                                      in_stack_fffffffffffffa18,pbVar10 + 0x58,
                                      in_stack_fffffffffffffa28,0,iVar14);
                TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
                iVar14 = iVar14 - (iVar4 + iVar5);
              }
            }
            else if (pbVar10 == (byte *)0x0) {
              local_1d8 = local_5a8;
              local_1d0 = uStack_5a0;
              local_1c8 = local_598;
              local_1c0 = local_590;
              if (local_590 != 0) {
                LOCK();
                *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
                UNLOCK();
              }
              local_1b8 = local_588;
              local_1b0 = (undefined4)local_580;
              local_1ac = local_580._4_4_;
              in_stack_fffffffffffffa30 = &local_538;
              in_stack_fffffffffffffa28 = (byte *)0x0;
              in_stack_fffffffffffffa18 = (byte *)(uVar9 & 0xffffffffffffff00);
              local_1a8 = local_578;
              local_1a4 = 0;
              iVar4 = FUN_141b82010(lVar8 + 0xce8,param_2,local_538,&local_1d8,
                                    in_stack_fffffffffffffa18,0,0,in_stack_fffffffffffffa30,iVar14);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1c0);
              iVar14 = iVar14 - iVar4;
            }
            else {
              local_248 = local_5a8;
              local_240 = uStack_5a0;
              local_238 = local_598;
              local_230 = local_590;
              if (local_590 != 0) {
                LOCK();
                *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
                UNLOCK();
              }
              local_228 = local_588;
              local_220 = (undefined4)local_580;
              local_21c = local_580._4_4_;
              uVar9 = uVar9 & 0xffffffffffffff00;
              local_218 = local_578;
              local_214 = 0;
              iVar4 = FUN_141b82010(lVar8 + 0xeb0,param_2,local_4d8,&local_248,uVar9,0,0,&local_4d8,
                                    iVar14);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_230);
              local_210 = local_5a8;
              local_208 = uStack_5a0;
              local_200 = local_598;
              local_1f8 = local_590;
              if (local_590 != 0) {
                LOCK();
                *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
                UNLOCK();
              }
              local_1f0 = local_588;
              local_1e8 = (undefined4)local_580;
              local_1e4 = local_580._4_4_;
              in_stack_fffffffffffffa28 = (byte *)0x0;
              in_stack_fffffffffffffa18 = (byte *)(uVar9 & 0xffffffffffffff00);
              local_1e0 = local_578;
              local_1dc = 0;
              in_stack_fffffffffffffa30 = &local_508;
              iVar5 = FUN_141b82010(lVar8 + 0xce8,param_2,local_508,&local_210,
                                    in_stack_fffffffffffffa18,0,0,&local_508,iVar14);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1f8);
              iVar14 = iVar14 - (iVar4 + iVar5);
            }
          }
          else if (*(char *)(lVar1 + 0x120b) == '\0') {
            if (pbVar10 == (byte *)0x0) {
              pbVar6 = (byte *)(lVar1 + 0x1c50);
              in_stack_fffffffffffffa18 = (byte *)(lVar1 + 0x1b40);
            }
            else {
              FUN_141b97530(lVar8 + 0xeb0,param_2,lVar1,&local_5a8,pbVar10 + 0x28,pbVar10 + 0x48);
              pbVar6 = pbVar10 + 0x78;
              in_stack_fffffffffffffa18 = pbVar10 + 0x58;
            }
            FUN_141b97530(lVar8 + 0xce8,param_2,lVar1,&local_5a8,in_stack_fffffffffffffa18,pbVar6);
          }
          else if (pbVar10 == (byte *)0x0) {
            local_88 = local_5a8;
            local_80 = uStack_5a0;
            local_78 = local_598;
            local_70 = local_590;
            if (local_590 != 0) {
              LOCK();
              *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
              UNLOCK();
            }
            local_68 = local_588;
            local_60 = (undefined4)local_580;
            local_5c = local_580._4_4_;
            local_58 = local_578;
            in_stack_fffffffffffffa30 = &local_538;
            in_stack_fffffffffffffa18 = (byte *)&local_88;
            in_stack_fffffffffffffa28 = (byte *)0x0;
            local_54 = 0;
            FUN_141b82c30(lVar8 + 0xce8,param_2,local_538,0,in_stack_fffffffffffffa18,0,0,
                          in_stack_fffffffffffffa30,0,*(int *)(lVar8 + 0xd20) + -1,0);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_70);
          }
          else {
            local_f8 = local_5a8;
            local_f0 = uStack_5a0;
            local_e8 = local_598;
            local_e0 = local_590;
            if (local_590 != 0) {
              LOCK();
              *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
              UNLOCK();
            }
            local_d8 = local_588;
            local_d0 = (undefined4)local_580;
            local_cc = local_580._4_4_;
            local_c8 = local_578;
            local_c4 = 0;
            FUN_141b82c30(lVar8 + 0xeb0,param_2,local_4d8,0,&local_f8,0,0,&local_4d8,0,
                          *(int *)(lVar8 + 0xee8) + -1,0);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_e0);
            local_c0 = local_5a8;
            local_b8 = uStack_5a0;
            local_b0 = local_598;
            local_a8 = local_590;
            if (local_590 != 0) {
              LOCK();
              *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
              UNLOCK();
            }
            local_a0 = local_588;
            local_98 = (undefined4)local_580;
            local_94 = local_580._4_4_;
            local_90 = local_578;
            in_stack_fffffffffffffa18 = (byte *)&local_c0;
            in_stack_fffffffffffffa28 = (byte *)0x0;
            local_8c = 0;
            in_stack_fffffffffffffa30 = &local_508;
            FUN_141b82c30(lVar8 + 0xce8,param_2,local_508,0,in_stack_fffffffffffffa18,0,0,&local_508
                          ,0,*(int *)(lVar8 + 0xd20) + -1,0);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
          }
          lVar8 = 0;
          if (DAT_146ab6e8c != 0) {
            FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
          }
          lVar12 = (longlong)*(int *)(lVar1 + 0x2288);
          if (0 < *(int *)(lVar1 + 0x2288)) {
            do {
              lVar2 = *(longlong *)(lVar1 + 0x2280);
              if ((*(uint *)(lVar8 + 0x10 + lVar2) >> 1 & 1) != 0) {
                in_stack_fffffffffffffa30 =
                     (longlong *)
                     CONCAT44((int)((ulonglong)in_stack_fffffffffffffa30 >> 0x20),
                              *(undefined4 *)(*(longlong *)(lVar8 + lVar2) + 0xb0));
                in_stack_fffffffffffffa28 = *(byte **)(lVar8 + 8 + lVar2);
                in_stack_fffffffffffffa18 =
                     (byte *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffa18 >> 8),1);
                FUN_141b970f0(param_2,lVar1,0,*(longlong *)(lVar8 + lVar2),in_stack_fffffffffffffa18
                              ,&local_5a8,in_stack_fffffffffffffa28,in_stack_fffffffffffffa30);
              }
              lVar8 = lVar8 + 0x18;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
          if (DAT_146ab6e8c != 0) {
            FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
          }
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_590);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_558);
          lVar8 = local_568;
          lVar12 = local_4a0;
        }
LAB_141bba97e:
        local_4a8 = local_4a8 + 1;
        iVar4 = local_570;
      } while (local_4a8 < lVar8);
    }
  }
  return;
}



// FUNCTION 141bba9c0 FUN_141bba9c0 body=240 status=ok
// SIG undefined FUN_141bba9c0(void)

void FUN_141bba9c0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  int param_5,char param_6,int param_7,int param_8)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(param_3 + 0x2288) <= param_8) {
    param_8 = *(int *)(param_3 + 0x2288);
  }
  lVar2 = (longlong)param_7;
  if ((param_7 < param_8) && (lVar2 < param_8)) {
    lVar4 = lVar2 * 0x18;
    lVar2 = param_8 - lVar2;
    do {
      plVar3 = (longlong *)(*(longlong *)(param_3 + 0x2280) + lVar4);
      if (param_5 == 0) {
        bVar1 = *(byte *)(plVar3 + 2);
LAB_141bbaa52:
        if ((bVar1 & 1) == 0) goto LAB_141bbaa54;
LAB_141bbaa59:
        FUN_141b970f0(param_2,param_3,0,*plVar3,1,param_4,plVar3[1],*(undefined4 *)(*plVar3 + 0xb0))
        ;
      }
      else {
        if (param_5 == 1) {
          bVar1 = (byte)(*(uint *)(plVar3 + 2) >> 1);
          goto LAB_141bbaa52;
        }
LAB_141bbaa54:
        if (param_6 != '\0') goto LAB_141bbaa59;
      }
      lVar4 = lVar4 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 141bbaab0 FUN_141bbaab0 body=817 status=ok
// SIG undefined FUN_141bbaab0(void)

/* WARNING: Removing unreachable block (ram,0x000141bbac97) */
/* WARNING: Removing unreachable block (ram,0x000141bbaca5) */
/* WARNING: Removing unreachable block (ram,0x000141bbacb4) */

void FUN_141bbaab0(longlong param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  longlong local_78;
  longlong local_70 [2];
  longlong local_60;
  longlong local_58;
  
  iVar14 = 0;
  iVar3 = *(int *)(*(longlong *)(param_2 + 8) + 0x2288);
  if (0 < iVar3) {
    iVar4 = *(int *)(param_2 + 0x6c);
    if (iVar3 / 2 <= *(int *)(param_2 + 0x6c)) {
      iVar4 = iVar3 / 2;
    }
    iVar13 = iVar14;
    if (0 < iVar4) {
      do {
        plVar12 = (longlong *)0x0;
        iVar6 = (uint)(iVar14 < iVar3 - (iVar3 / iVar4) * iVar4) + iVar13 + iVar3 / iVar4;
        local_60 = FUN_141d6b6f0(param_2);
        pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar8 = TlsGetValue(*pDVar7);
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)operator_new(0x18);
          if (plVar8 != (longlong *)0x0) {
            *plVar8 = 0;
            plVar8[1] = 0;
            *(undefined4 *)(plVar8 + 2) = 0;
            plVar12 = plVar8;
          }
          TlsSetValue(*pDVar7,plVar12);
          plVar8 = plVar12;
        }
        plVar12 = (longlong *)plVar8[1];
        if (plVar12 == (longlong *)0x0) {
          if (*plVar8 == 0) {
            lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
            plVar8[1] = lVar9;
            if (lVar9 == 0) {
              puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar8[1] = (longlong)puVar10;
              lVar9 = 0x1f;
              do {
                puVar2 = puVar10 + 0x20;
                *puVar10 = puVar2;
                lVar9 = lVar9 + -1;
                puVar10 = puVar2;
              } while (lVar9 != 0);
              *puVar2 = 0;
            }
          }
          else {
            plVar8[1] = *plVar8;
            *plVar8 = 0;
          }
          plVar12 = (longlong *)plVar8[1];
          iVar11 = 0x20;
          *(undefined4 *)(plVar8 + 2) = 0x20;
        }
        else {
          iVar11 = (int)plVar8[2];
        }
        plVar8[1] = *plVar12;
        *(int *)(plVar8 + 2) = iVar11 + -1;
        plVar8 = (longlong *)FUN_1415914c0(local_70);
        local_58 = *plVar8;
        *plVar8 = 0;
        *plVar12 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar12 + 1) = 0xff;
        *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
        *plVar12 = (longlong)&PTR_FUN_144e0aa88;
        *(undefined1 *)(plVar12 + 0xe) = 0;
        plVar12[0xf] = local_58;
        if (local_70[0] != 0) {
          LOCK();
          piVar1 = (int *)(local_70[0] + 0x48);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            FGraphEvent::Recycle();
          }
        }
        lVar5 = local_60;
        lVar9 = *(longlong *)(param_2 + 8);
        plVar12[2] = param_1;
        plVar12[3] = local_60;
        plVar12[4] = lVar9;
        plVar12[5] = *(longlong *)(param_2 + 0x18);
        plVar12[6] = *(longlong *)(param_2 + 0x20);
        *(undefined4 *)(plVar12 + 7) = *(undefined4 *)(param_2 + 0x28);
        lVar9 = *(longlong *)(param_2 + 0x30);
        plVar12[8] = lVar9;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          UNLOCK();
        }
        plVar12[9] = *(longlong *)(param_2 + 0x38);
        *(undefined4 *)(plVar12 + 10) = *(undefined4 *)(param_2 + 0x40);
        *(undefined4 *)((longlong)plVar12 + 0x54) = *(undefined4 *)(param_2 + 0x44);
        *(undefined4 *)(plVar12 + 0xb) = *(undefined4 *)(param_2 + 0x48);
        *(undefined1 *)((longlong)plVar12 + 0x5c) = 0;
        *(undefined4 *)(plVar12 + 0xd) = param_3;
        *(int *)(plVar12 + 0xc) = iVar13;
        *(undefined1 *)((longlong)plVar12 + 0x6c) = param_4;
        *(int *)((longlong)plVar12 + 100) = iVar6;
        local_78 = plVar12[0xf];
        if (local_78 != 0) {
          LOCK();
          *(int *)(local_78 + 0x48) = *(int *)(local_78 + 0x48) + 1;
          UNLOCK();
        }
        FUN_141bc09d0(plVar12,0,3,1);
        FParallelCommandListSet::AddParallelCommandList(param_2,lVar5,&local_78,0xffffffff);
        if (local_78 != 0) {
          LOCK();
          piVar1 = (int *)(local_78 + 0x48);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            FGraphEvent::Recycle();
          }
        }
        iVar14 = iVar14 + 1;
        iVar13 = iVar6;
      } while (iVar14 < iVar4);
    }
  }
  return;
}



// FUNCTION 141bbadf0 FUN_141bbadf0 body=600 status=ok
// SIG undefined FUN_141bbadf0(void)

void FUN_141bbadf0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  longlong lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  bool bVar5;
  ulonglong in_stack_ffffffffffffff00;
  undefined ***pppuVar6;
  undefined **local_e8;
  undefined8 local_e0;
  undefined1 local_d0 [56];
  undefined8 local_98;
  longlong local_30;
  
  FUN_141b8b6c0(&local_e8,param_2,param_4);
  ppuVar1 = local_e8;
  bVar5 = local_e8 != (undefined **)0x0;
  FUN_141d59a10(&local_e8,bVar5,param_2,param_1,param_3,
                in_stack_ffffffffffffff00 & 0xffffffffffffff00,0,param_5);
  local_e8 = &PTR_FUN_144e0aa78;
  local_30 = param_1 + 0x10;
  FUN_141bc0740(local_98,local_e0,local_d0);
  pppuVar6 = &local_e8;
  if (ppuVar1 == (undefined **)0x0) {
    FUN_141b97600(*(longlong *)(param_1 + 8) + 0xc50,0,param_2 + 0x1b40,param_2 + 0x1c50,0,pppuVar6)
    ;
  }
  else {
    FUN_141b97600(*(longlong *)(param_1 + 8) + 0xe18,0,ppuVar1 + 5,ppuVar1 + 9,0,pppuVar6);
    pppuVar6 = &local_e8;
    FUN_141b97600(*(longlong *)(param_1 + 8) + 0xc50,0,ppuVar1 + 0xb,ppuVar1 + 0xf,0,pppuVar6);
  }
  ppuVar4 = (undefined **)(param_2 + 0x1c50);
  ppuVar3 = (undefined **)(param_2 + 0x1b40);
  FUN_141bbaab0(param_1,&local_e8,0,0);
  local_e8 = &PTR_FUN_144e0aa78;
  FUN_141d662d0(&local_e8,0);
  FParallelCommandListSet::~FParallelCommandListSet(&local_e8);
  FUN_141d59a10(&local_e8,bVar5,param_2,param_1,param_3,(ulonglong)pppuVar6 & 0xffffffffffffff00,0,
                param_5);
  local_30 = param_1 + 0x10;
  local_e8 = &PTR_FUN_144e0aa78;
  FUN_141bc0740(local_98,local_e0,local_d0);
  lVar2 = *(longlong *)(param_1 + 8);
  if (bVar5) {
    FUN_141b97600(lVar2 + 0xeb0,0,ppuVar1 + 5,ppuVar1 + 9,0,&local_e8);
    lVar2 = *(longlong *)(param_1 + 8);
    ppuVar4 = ppuVar1 + 0xf;
    ppuVar3 = ppuVar1 + 0xb;
  }
  FUN_141b97600(lVar2 + 0xce8,0,ppuVar3,ppuVar4,0,&local_e8);
  FUN_141bbaab0(param_1,&local_e8,1);
  local_e8 = &PTR_FUN_144e0aa78;
  FUN_141d662d0(&local_e8,0);
  FParallelCommandListSet::~FParallelCommandListSet(&local_e8);
  return;
}



// FUNCTION 141bbb050 FUN_141bbb050 body=1972 status=ok
// SIG undefined FUN_141bbb050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bbb050(longlong param_1,longlong param_2,longlong *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 uVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_2a8 [32];
  ulonglong local_288;
  int local_278;
  int local_274;
  undefined4 local_270;
  int local_26c;
  int local_268;
  int local_264;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong *local_248;
  longlong local_240;
  longlong local_238;
  ulonglong local_228 [2];
  undefined8 local_218;
  float local_210;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  float local_1c0;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined *local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  ulonglong local_13c;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  local_270 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_f0 = 0;
  local_dc = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_13c = 0x26;
  local_134 = 0;
  local_12c = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_d4 = 0;
  local_248 = param_3;
  local_240 = param_1;
  FUN_14049afe0(param_2,&local_188);
  local_158 = FUN_141b33400();
  iVar19 = (int)param_3[1];
  local_250 = (longlong)*(int *)(param_1 + 200);
  local_278 = 0;
  local_13c = local_13c & 0xffffffff00000000;
  if (0 < iVar19) {
    local_260 = 0;
    local_238 = 0;
    local_1d0 = local_250;
    do {
      lVar25 = *param_3 + local_238;
      local_274 = 0;
      if (0 < local_250) {
        local_258 = 0;
        local_1f8 = lVar25;
        do {
          iVar19 = local_278;
          if ((int)param_3[1] != (int)param_3[3]) {
            iVar19 = 0;
            if ((int)((ulonglong)*(undefined8 *)(local_260 + param_3[4]) >> 0x20) != 0) {
              iVar19 = local_274;
            }
            iVar19 = ((uint)*(undefined8 *)(local_260 + param_3[4]) & 0x7fffffff) + iVar19;
          }
          lVar22 = *(longlong *)(param_1 + 0xc0) + local_258;
          local_218 = *(undefined8 *)(param_3[2] + (longlong)iVar19 * 0xc);
          local_228[0] = param_3[2] + (longlong)iVar19 * 0xc;
          fVar1 = *(float *)(lVar25 + 0xc);
          uVar2 = *(undefined4 *)(lVar22 + 0x1aac);
          puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          uVar3 = *(undefined4 *)(lVar22 + 0x1aa8);
          uVar4 = *(undefined4 *)(lVar22 + 0x1aa4);
          uVar5 = *(undefined4 *)(lVar22 + 0x1aa0);
          local_210 = *(float *)(local_228[0] + 8);
          puVar16 = puVar20 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar16) {
            FMemStackBase::AllocateNewChunk((longlong *)(param_2 + 0x30),0x30);
            puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar16 = puVar20 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar16;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar20;
          *(undefined8 **)(param_2 + 8) = puVar20 + 1;
          puVar20[1] = 0;
          *(undefined4 *)((longlong)puVar20 + 0x14) = uVar4;
          plVar23 = (longlong *)0x0;
          *puVar20 = &PTR_LAB_143f59420;
          *(undefined4 *)(puVar20 + 3) = 0;
          *(undefined4 *)(puVar20 + 2) = uVar5;
          *(undefined4 *)((longlong)puVar20 + 0x1c) = uVar3;
          *(undefined4 *)(puVar20 + 4) = uVar2;
          *(undefined4 *)((longlong)puVar20 + 0x24) = 0x3f800000;
          lVar25 = *(longlong *)(lVar22 + 0x3090);
          local_1b8 = &DAT_146a2e050;
          local_1b0 = 0;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar25 + 0x38,&local_26c,&local_1b8);
          fVar15 = local_210;
          plVar21 = plVar23;
          if (local_26c != -1) {
            plVar21 = (longlong *)((longlong)local_26c * 0x20 + *(longlong *)(lVar25 + 0x38));
          }
          fVar13 = (float)local_218;
          fVar14 = local_218._4_4_;
          local_1c0 = *(float *)(lVar22 + 0x8e4);
          fVar27 = (float)*(undefined8 *)(lVar22 + 0x8dc) - (float)local_218;
          fVar28 = (float)((ulonglong)*(undefined8 *)(lVar22 + 0x8dc) >> 0x20) - local_218._4_4_;
          plVar17 = plVar21 + 2;
          if (plVar21 == (longlong *)0x0) {
            plVar17 = plVar23;
          }
          lVar6 = *plVar17;
          fVar26 = *(float *)(lVar22 + 0x11b0) + *(float *)(lVar22 + 0x11b0) + fVar1 * 1.05;
          if ((fVar28 * fVar28 + fVar27 * fVar27 + (local_1c0 - local_210) * (local_1c0 - local_210)
               < fVar26 * fVar26) ||
             (1.0 < *(float *)(lVar22 + 0x3cc) || *(float *)(lVar22 + 0x3cc) == 1.0)) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            if (*(char *)(lVar22 + 0x11b4) == '\0') {
              uStack_150 = FUN_141ac06b0();
              local_148 = FUN_1409853f0();
            }
            else {
              uStack_150 = FUN_141ac0570();
              local_148 = FUN_1409853f0();
            }
          }
          else {
            if (*(char *)(lVar22 + 0x11b4) == '\0') {
              uStack_150 = FUN_141ac0570();
            }
            else {
              uStack_150 = FUN_141ac06b0();
            }
            local_148 = FUN_141abfb70();
          }
          lVar25 = local_1f8;
          lVar24 = *(longlong *)(lVar22 + 0x3090);
          if (*(float *)(local_1f8 + 0x10) == 0.0) {
            local_1a8 = &DAT_146a287a0;
            local_1a0 = 199;
            if (DAT_1464c1f70 != 0) {
              local_1a0 = 0x127;
            }
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar24 + 0x38,&local_268,&local_1a8);
            plVar21 = plVar23;
            if (local_268 != -1) {
              plVar21 = (longlong *)((longlong)local_268 * 0x20 + *(longlong *)(lVar24 + 0x38));
            }
            plVar17 = plVar21 + 2;
            if (plVar21 == (longlong *)0x0) {
              plVar17 = plVar23;
            }
            lVar24 = *plVar17;
            puVar16 = (undefined8 *)FUN_141ee3620();
            local_188 = *puVar16;
            if (lVar6 == 0) {
              bVar9 = true;
              uStack_180 = 0;
              local_1f0 = 0;
            }
            else {
              lVar7 = *(longlong *)(lVar6 + 0x48);
              if (*(char *)(lVar7 + 0x28) == '\0') {
                FUN_1419f3850(lVar7);
              }
              uStack_180 = *(undefined8 *)(lVar7 + 0x38);
            }
            uVar18 = 0;
            if (bVar9) {
              bVar9 = false;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1f0);
            }
            if (lVar24 == 0) {
              bVar10 = true;
              local_1e8 = 0;
            }
            else {
              lVar7 = *(longlong *)(lVar24 + 0x48);
              if (*(char *)(lVar7 + 0x28) == '\0') {
                FUN_1419f3850(lVar7);
              }
              uVar18 = *(undefined8 *)(lVar7 + 0x40);
            }
            local_168 = uVar18;
            if (bVar10) {
              bVar10 = false;
              puVar16 = &local_1e8;
LAB_141bbb5f3:
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar16);
            }
          }
          else {
            local_198 = &DAT_146a287a0;
            local_190 = 0xc1;
            if (DAT_1464c1f70 != 0) {
              local_190 = 0x121;
            }
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar24 + 0x38,&local_264,&local_198);
            plVar21 = plVar23;
            if (local_264 != -1) {
              plVar21 = (longlong *)((longlong)local_264 * 0x20 + *(longlong *)(lVar24 + 0x38));
            }
            plVar17 = plVar21 + 2;
            if (plVar21 == (longlong *)0x0) {
              plVar17 = plVar23;
            }
            lVar24 = *plVar17;
            puVar16 = (undefined8 *)FUN_141ee3620();
            local_188 = *puVar16;
            if (lVar6 == 0) {
              bVar11 = true;
              uStack_180 = 0;
              local_1e0 = 0;
            }
            else {
              lVar7 = *(longlong *)(lVar6 + 0x48);
              if (*(char *)(lVar7 + 0x28) == '\0') {
                FUN_1419f3850(lVar7);
              }
              uStack_180 = *(undefined8 *)(lVar7 + 0x38);
            }
            uVar18 = 0;
            if (bVar11) {
              bVar11 = false;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1e0);
            }
            if (lVar24 == 0) {
              bVar12 = true;
              local_1d8 = 0;
            }
            else {
              lVar7 = *(longlong *)(lVar24 + 0x48);
              if (*(char *)(lVar7 + 0x28) == '\0') {
                FUN_1419f3850(lVar7);
              }
              uVar18 = *(undefined8 *)(lVar7 + 0x40);
            }
            local_168 = uVar18;
            if (bVar12) {
              bVar12 = false;
              puVar16 = &local_1d8;
              goto LAB_141bbb5f3;
            }
          }
          FUN_141ed6ac0(param_2,&local_188,2,1);
          local_288 = local_228[0];
          FUN_141bc0340(lVar24,param_2,lVar22,lVar25);
          lVar24 = *(longlong *)(lVar6 + 0x48);
          uVar18 = *(undefined8 *)(lVar22 + 0x20);
          if (*(char *)(lVar24 + 0x28) == '\0') {
            FUN_1419f3850(lVar24);
          }
          FUN_141aa9800(lVar6,param_2,*(undefined8 *)(lVar24 + 0x38),uVar18);
          local_208 = fVar13 + *(float *)(lVar22 + 0x8d0);
          local_204 = fVar14 + *(float *)(lVar22 + 0x8d4);
          local_200 = fVar15 + *(float *)(lVar22 + 0x8d8);
          lVar22 = *(longlong *)(lVar6 + 0x48);
          local_1fc = fVar1 * 1.0352762;
          if (*(char *)(lVar22 + 0x28) == '\0') {
            FUN_1419f3850(lVar22);
          }
          local_288 = local_288 & 0xffffffff00000000;
          SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
                    (param_2,*(undefined8 *)(lVar22 + 0x38),lVar6 + 0xc0,&local_208);
          lVar22 = *(longlong *)(lVar6 + 0x48);
          local_228[0] = 0;
          local_228[1] = 0;
          if (*(char *)(lVar22 + 0x28) == '\0') {
            FUN_1419f3850(lVar22);
          }
          local_288 = local_288 & 0xffffffff00000000;
          SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
                    (param_2,*(undefined8 *)(lVar22 + 0x38),lVar6 + 0xc6,local_228);
          lVar22 = *(longlong *)(lVar6 + 0x48);
          local_270 = 0;
          if (*(char *)(lVar22 + 0x28) == '\0') {
            FUN_1419f3850(lVar22);
          }
          local_288 = local_288 & 0xffffffff00000000;
          FUN_1404986d0(param_2,*(undefined8 *)(lVar22 + 0x38),lVar6 + 0xd8,&local_270);
          FUN_141b97230(param_2);
          local_274 = local_274 + 1;
          local_258 = local_258 + 0x30d0;
          local_250 = local_250 + -1;
          param_3 = local_248;
          param_1 = local_240;
        } while (local_250 != 0);
        iVar19 = (int)local_248[1];
        local_250 = local_1d0;
      }
      local_278 = local_278 + 1;
      local_238 = local_238 + 0x1c;
      local_260 = local_260 + 8;
    } while (local_278 < iVar19);
  }
  return;
}



// FUNCTION 141bbb810 FUN_141bbb810 body=336 status=ok
// SIG undefined FUN_141bbb810(void)

void FUN_141bbb810(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      FUN_141bbbc00(param_1,iVar2);
    }
    iVar9 = param_2 + -1;
    lVar10 = (longlong)iVar9;
    if (iVar2 <= lVar10) {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
      lVar7 = lVar10 << 4;
      lVar10 = (lVar10 - iVar2) + 1;
      do {
        if (iVar3 != 0) {
          *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar9;
        }
        *(undefined4 *)(lVar7 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar7 + 4 + *param_1) = uVar5;
        lVar7 = lVar7 + -0x10;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar9;
        iVar9 = iVar9 + -1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if (0 < param_2 - iVar2) {
      uVar8 = (ulonglong)(uint)(param_2 - iVar2);
      do {
        iVar2 = (int)param_1[5];
        *(int *)(param_1 + 5) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar2) {
          uVar4 = (int)(iVar2 + 0x20 + (iVar2 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar4 < 5) {
            iVar9 = 4;
          }
          else {
            iVar9 = (int)((ulonglong)((longlong)(int)uVar4 * 3) >> 3) + 0x10 + uVar4;
            if (iVar9 < (int)uVar4) {
              iVar9 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar9 << 5;
          TBitArray<SceneRenderingBitArrayAllocator>::Realloc(param_1 + 2,iVar2);
        }
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = param_1 + 2;
        }
        iVar9 = iVar2;
        if (iVar2 < 0) {
          iVar9 = iVar2 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar9 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}



// FUNCTION 141bbb960 FUN_141bbb960 body=161 status=ok
// SIG undefined FUN_141bbb960(void)

void FUN_141bbb960(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xd0);
  if (param_3 < 0xe) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 4);
    pvVar1 = *(void **)((longlong)param_1 + 0xd0);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0xd0) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 4);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xd0) = uVar2;
  return;
}



// FUNCTION 141bbba10 FUN_141bbba10 body=163 status=ok
// SIG undefined FUN_141bbba10(void)

void FUN_141bbba10(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xa0);
  if (param_3 < 0xe) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0xc);
    pvVar1 = *(void **)((longlong)param_1 + 0xa0);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0xa0) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0xc);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xa0) = uVar2;
  return;
}



// FUNCTION 141bbbac0 ResizeAllocation body=163 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<16,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfoCompact>::
     ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x300);
  if (param_3 < 0x11) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x30);
    pvVar1 = *(void **)((longlong)param_1 + 0x300);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x300) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x30);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x300) = uVar2;
  return;
}



// FUNCTION 141bbbb70 ResizeAllocation body=139 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<1,TMemStackAllocator<0>_>::ForElementType<FSetElementId>::ResizeAllocation
               (void *param_1,int param_2,uint param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if (param_3 < 2) {
    if (_Src != (void *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(param_1,_Src,(longlong)param_2 << 2);
      return;
    }
  }
  else {
    if (_Src == (void *)0x0) {
      FUN_140848a70((longlong)param_1 + 8,0);
      ::_guard_xfg_dispatch_icall_nop
                (*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 2);
      return;
    }
    FUN_140848a70((longlong)param_1 + 8,param_2);
  }
  return;
}



// FUNCTION 141bbbc00 FUN_141bbbc00 body=65 status=ok
// SIG undefined FUN_141bbbc00(void)

void FUN_141bbbc00(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  uVar1 = *(uint *)(param_1 + 8);
  if ((*(int *)(param_1 + 0xc) != 0) || (4 < uVar1)) {
    iVar2 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
  }
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  FUN_140848a70(param_1,param_2,iVar2,0x10);
  return;
}



// FUNCTION 141bbbc50 ResizeGrow body=128 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FVector4,TInlineAllocator<5,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  if (uVar1 < 6) {
    iVar2 = 5;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 100) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 4,0);
    iVar2 = (int)(uVar3 >> 4);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 100) = iVar2;
  TInlineAllocator<5,FDefaultAllocator>::ForElementType<FIntVector4>::ResizeAllocation
            (param_1,param_2,iVar2,0x10);
  return;
}



// FUNCTION 141bbbcd0 ResizeGrow body=137 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FVector4,TInlineAllocator<13,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0xe0);
  if (uVar1 < 0xe) {
    iVar2 = 0xd;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0xe4) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 4,0);
    iVar2 = (int)(uVar3 >> 4);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xe4) = iVar2;
  FUN_141bbb960(param_1,param_2,iVar2,0x10);
  return;
}



// FUNCTION 141bbbd60 ResizeGrow body=157 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FVector,TInlineAllocator<13,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (uVar1 < 0xe) {
    iVar4 = 0xd;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0xac) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0xc,0);
    iVar4 = (int)(uVar3 / 0xc);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xac) = iVar4;
  FUN_141bbba10(param_1,param_2,iVar4,0xc);
  return;
}



// FUNCTION 141bbbe00 ResizeGrow body=157 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FLightSceneInfoCompact,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x310);
  if (uVar1 < 0x11) {
    iVar4 = 0x10;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x314) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x30,0);
    iVar4 = (int)(uVar3 / 0x30);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x314) = iVar4;
  TInlineAllocator<16,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfoCompact>::
  ResizeAllocation(param_1,param_2,iVar4,0x30);
  return;
}



// FUNCTION 141bbbea0 ResizeGrow body=65 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNodeReference,TMemStackAllocator<0>_>
     ::ResizeGrow(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  uVar1 = *(uint *)(param_1 + 8);
  if ((*(int *)(param_1 + 0xc) != 0) || (4 < uVar1)) {
    iVar2 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
  }
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  FUN_141b6c650(param_1,param_2,iVar2,0x40);
  return;
}



// FUNCTION 141bbbef0 FUN_141bbbef0 body=307 status=ok
// SIG undefined FUN_141bbbef0(void)

void FUN_141bbbef0(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  
  uVar2 = *(uint *)(param_1 + 1);
  iVar6 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar2)) {
    iVar6 = uVar2 + 0x10 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3);
  }
  if (iVar6 < (int)uVar2) {
    iVar6 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar6;
  _Src = (void *)*param_1;
  if (iVar6 != 0) {
    puStack_30 = local_res8;
    local_38 = &DAT_14060d670;
    local_res8[0] = 0;
    iVar8 = iVar6 * 0x1c;
    lVar3 = FUN_1415d8310(&local_38,&DAT_146216a38);
    uVar5 = 8;
    uVar2 = uVar5;
    if (0xf < iVar8) {
      uVar2 = 0x10;
    }
    uVar7 = (ulonglong)uVar2;
    puVar1 = (ulonglong *)(lVar3 + 0x18);
    _Dst = (void *)(*(longlong *)(lVar3 + 0x18) + -1 + uVar7 & ~(uVar7 - 1));
    uVar4 = (longlong)iVar8 + (longlong)_Dst;
    if (*(ulonglong *)(lVar3 + 0x20) < uVar4) {
      if (0xf < iVar8) {
        uVar5 = 0x10;
      }
      FMemStackBase::AllocateNewChunk(puVar1,uVar5 + iVar8);
      _Dst = (void *)((*puVar1 - 1) + uVar7 & ~(uVar7 - 1));
      uVar4 = (longlong)iVar8 + (longlong)_Dst;
    }
    *puVar1 = uVar4;
    *param_1 = _Dst;
    if ((_Src != (void *)0x0) && (param_2 != 0)) {
      if (iVar6 <= param_2) {
        param_2 = iVar6;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(param_2 * 0x1c));
    }
  }
  return;
}



// FUNCTION 141bbc030 FUN_141bbc030 body=314 status=ok
// SIG undefined FUN_141bbc030(void)

void FUN_141bbc030(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  
  uVar2 = *(uint *)(param_1 + 1);
  iVar6 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar2)) {
    iVar6 = uVar2 + 0x10 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3);
  }
  if (iVar6 < (int)uVar2) {
    iVar6 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar6;
  _Src = (void *)*param_1;
  if (iVar6 != 0) {
    puStack_30 = local_res8;
    local_38 = &DAT_14060d670;
    local_res8[0] = 0;
    iVar8 = iVar6 * 0xc;
    lVar3 = FUN_1415d8310(&local_38,&DAT_146216a38);
    uVar5 = 8;
    uVar2 = uVar5;
    if (0xf < iVar8) {
      uVar2 = 0x10;
    }
    uVar7 = (ulonglong)uVar2;
    puVar1 = (ulonglong *)(lVar3 + 0x18);
    _Dst = (void *)(*(longlong *)(lVar3 + 0x18) + -1 + uVar7 & ~(uVar7 - 1));
    uVar4 = (longlong)iVar8 + (longlong)_Dst;
    if (*(ulonglong *)(lVar3 + 0x20) < uVar4) {
      if (0xf < iVar8) {
        uVar5 = 0x10;
      }
      FMemStackBase::AllocateNewChunk(puVar1,uVar5 + iVar8);
      _Dst = (void *)((*puVar1 - 1) + uVar7 & ~(uVar7 - 1));
      uVar4 = (longlong)iVar8 + (longlong)_Dst;
    }
    *puVar1 = uVar4;
    *param_1 = _Dst;
    if ((_Src != (void *)0x0) && (param_2 != 0)) {
      if (iVar6 <= param_2) {
        param_2 = iVar6;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(param_2 * 0xc));
    }
  }
  return;
}



// FUNCTION 141bbc170 ResizeShrink body=178 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FLightSceneInfoCompact,TInlineAllocator<16,FDefaultAllocator>_>::ResizeShrink
               (longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x310);
  uVar3 = *(uint *)(param_1 + 0x314);
  if (uVar2 < 0x11) {
    uVar2 = 0x10;
    goto LAB_141bbc1f5;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) * 0x30)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 * 0x30,0);
        uVar3 = *(uint *)(param_1 + 0x314);
        uVar2 = (uint)(uVar1 / 0x30);
      }
      goto LAB_141bbc1f5;
    }
    if (uVar2 == 0) goto LAB_141bbc1f5;
  }
  uVar2 = uVar3;
LAB_141bbc1f5:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x314) = uVar2;
    TInlineAllocator<16,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfoCompact>::
    ResizeAllocation(param_1,*(undefined4 *)(param_1 + 0x310),uVar2,0x30);
    return;
  }
  return;
}



// FUNCTION 141bbc230 ResizeShrink body=84 status=ok
// SIG undefined ResizeShrink(void)

void TArray<TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNodeReference,TMemStackAllocator<0>_>
     ::ResizeShrink(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 8);
  if ((((ulonglong)((longlong)(iVar1 - iVar2) << 6) < 0x4000) && (iVar1 * 2 <= iVar2 * 3)) ||
     ((iVar3 = iVar2, (uint)(iVar1 - iVar2) < 0x41 && (iVar2 != 0)))) {
    iVar3 = iVar1;
  }
  if (iVar3 == iVar1) {
    return;
  }
  *(int *)(param_1 + 0xc) = iVar3;
  FUN_141b6c650(param_1,iVar2,iVar3,0x40);
  return;
}



// FUNCTION 141bbc290 FUN_141bbc290 body=26 status=ok
// SIG undefined FUN_141bbc290(void)

void FUN_141bbc290(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_140848a70(param_1,*(undefined4 *)(param_1 + 8),param_2,0x10);
    return;
  }
  return;
}



// FUNCTION 141bbc2b0 ResizeTo body=101 status=ok
// SIG undefined ResizeTo(void)

void TArray<FVector4,TInlineAllocator<5,FDefaultAllocator>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 6) {
      iVar1 = 5;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 100)) {
    *(int *)(param_1 + 100) = iVar1;
    TInlineAllocator<5,FDefaultAllocator>::ForElementType<FIntVector4>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x60),iVar1,0x10);
  }
  return;
}



// FUNCTION 141bbc320 FUN_141bbc320 body=110 status=ok
// SIG undefined FUN_141bbc320(void)

void FUN_141bbc320(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0xe) {
      iVar1 = 0xd;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0xe4)) {
    *(int *)(param_1 + 0xe4) = iVar1;
    FUN_141bbb960(param_1,*(undefined4 *)(param_1 + 0xe0),iVar1,0x10);
  }
  return;
}



// FUNCTION 141bbc390 FUN_141bbc390 body=127 status=ok
// SIG undefined FUN_141bbc390(void)

void FUN_141bbc390(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0xe) {
      iVar2 = 0xd;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0xc,0);
      iVar2 = (int)(uVar1 / 0xc);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xac)) {
    *(int *)(param_1 + 0xac) = iVar2;
    FUN_141bbba10(param_1,*(undefined4 *)(param_1 + 0xa8),iVar2,0xc);
  }
  return;
}



// FUNCTION 141bbc410 ResizeTo body=127 status=ok
// SIG undefined ResizeTo(void)

void TArray<FLightSceneInfoCompact,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      iVar2 = 0x10;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x30,0);
      iVar2 = (int)(uVar1 / 0x30);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x314)) {
    *(int *)(param_1 + 0x314) = iVar2;
    TInlineAllocator<16,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfoCompact>::
    ResizeAllocation(param_1,*(undefined4 *)(param_1 + 0x310),iVar2,0x30);
  }
  return;
}



// FUNCTION 141bbc490 FUN_141bbc490 body=734 status=ok
// SIG undefined FUN_141bbc490(void)

void FUN_141bbc490(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  void *_Dst;
  ulonglong _Size;
  undefined4 uVar11;
  undefined4 uVar12;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_58 = 0.0;
  fStack_54 = 0.0;
  fStack_50 = 0.0;
  fStack_4c = 1.0;
  plVar3 = *(longlong **)(param_5 + 0x30);
  if (((char)plVar3[0x31] - 1U & 0xfd) == 0) {
    pfVar9 = (float *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_48);
    lVar4 = *(longlong *)(param_3 + 0x48);
    local_58 = *pfVar9 + *(float *)(param_4 + 0x8d0);
    fStack_54 = pfVar9[1] + *(float *)(param_4 + 0x8d4);
    fStack_50 = pfVar9[2] + *(float *)(param_4 + 0x8d8);
    fStack_4c = pfVar9[3] * 1.0352762;
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,*(undefined8 *)(lVar4 + 0x38),param_1,&local_58,0);
    lVar4 = *(longlong *)(param_3 + 0x48);
    local_48 = 0;
    uStack_40 = 0;
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,*(undefined8 *)(lVar4 + 0x38),param_1 + 6,&local_48,0);
  }
  else if ((char)plVar3[0x31] == '\x02') {
    lVar4 = *(longlong *)(param_3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,*(undefined8 *)(lVar4 + 0x38),param_1 + 0xc,plVar3 + 0xe,0);
    uVar11 = (**(code **)(**(longlong **)(param_5 + 0x30) + 0x18))();
    uVar12 = (**(code **)(**(longlong **)(param_5 + 0x30) + 0x20))();
    lVar4 = *(longlong *)(param_3 + 0x48);
    local_48 = 0x4140000041900000;
    uStack_40 = CONCAT44(uVar11,uVar12);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,*(undefined8 *)(lVar4 + 0x38),param_1 + 6,&local_48,0);
    lVar4 = *(longlong *)(param_3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x38);
    uVar6 = (uint)*(ushort *)(param_1 + 0x16);
    if (0xb < *(ushort *)(param_1 + 0x16)) {
      uVar6 = 0xc;
    }
    _Size = (ulonglong)uVar6;
    if (uVar6 != 0) {
      uVar1 = *(ushort *)(param_1 + 0x14);
      uVar2 = *(ushort *)(param_1 + 0x12);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = (longlong)_Dst + _Size;
      if (*(ulonglong *)(param_2 + 0x38) < uVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar6 + 0x10);
        _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar7 = (longlong)_Dst + _Size;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar7;
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)(param_4 + 0x8d0),_Size);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar10 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar8;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_143f4d340;
      *(uint *)(puVar10 + 4) = (uint)uVar2;
      *(uint *)((longlong)puVar10 + 0x24) = (uint)uVar1;
      puVar10[2] = uVar5;
      puVar10[3] = _Dst;
      *(uint *)(puVar10 + 5) = uVar6;
    }
  }
  return;
}



// FUNCTION 141bbc770 SetContents body=178 status=ok
// SIG undefined SetContents(void)

void TUniformBuffer<FLpvWriteUniformBufferParameters>::SetContents
               (longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0x40);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FMemory::Malloc(0xc0,0x10);
    *(undefined8 **)(param_1 + 0x40) = puVar5;
  }
  uVar4 = param_2[1];
  *puVar5 = *param_2;
  puVar5[1] = uVar4;
  uVar4 = param_2[3];
  puVar5[2] = param_2[2];
  puVar5[3] = uVar4;
  uVar4 = param_2[5];
  puVar5[4] = param_2[4];
  puVar5[5] = uVar4;
  uVar4 = param_2[7];
  puVar5[6] = param_2[6];
  puVar5[7] = uVar4;
  uVar4 = param_2[9];
  puVar5[8] = param_2[8];
  puVar5[9] = uVar4;
  uVar4 = param_2[0xb];
  puVar5[10] = param_2[10];
  puVar5[0xb] = uVar4;
  uVar4 = param_2[0xd];
  puVar5[0xc] = param_2[0xc];
  puVar5[0xd] = uVar4;
  uVar4 = param_2[0xf];
  puVar5[0xe] = param_2[0xe];
  puVar5[0xf] = uVar4;
  uVar4 = param_2[0x11];
  puVar5[0x10] = param_2[0x10];
  puVar5[0x11] = uVar4;
  uVar4 = param_2[0x13];
  puVar5[0x12] = param_2[0x12];
  puVar5[0x13] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0x15);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(puVar5 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)puVar5 + 0xa4) = uVar1;
  *(undefined4 *)(puVar5 + 0x15) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0xac) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xb4);
  uVar2 = *(undefined4 *)(param_2 + 0x17);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xbc);
  *(undefined4 *)(puVar5 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)puVar5 + 0xb4) = uVar1;
  *(undefined4 *)(puVar5 + 0x17) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0xbc) = uVar3;
  FRenderResource::UpdateRHI(param_1);
  return;
}



// FUNCTION 141bbc830 FUN_141bbc830 body=362 status=ok
// SIG undefined FUN_141bbc830(void)

void FUN_141bbc830(longlong param_1,short *param_2,float param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  short *psVar4;
  undefined1 local_res18 [16];
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  short *local_48;
  int local_40;
  longlong *local_38;
  longlong *local_30;
  
  FString::PrintfImpl(&local_48,&DAT_144dd47e8,(double)param_3);
  psVar4 = &DAT_143f3eda8;
  if (local_40 != 0) {
    psVar4 = local_48;
  }
  local_50 = 0;
  local_58 = 0;
  lVar1 = -1;
  if ((psVar4 != (short *)0x0) && (lVar3 = lVar1, *psVar4 != 0)) {
    do {
      lVar3 = lVar3 + 1;
    } while (psVar4[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_50 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    FGenericPlatformString::Memcpy(local_58,psVar4,(longlong)(int)uVar2 * 2);
  }
  local_68 = 0;
  local_60 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    do {
      lVar1 = lVar1 + 1;
    } while (param_2[lVar1] != 0);
    uVar2 = (int)lVar1 + 1;
    local_60 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    }
    FGenericPlatformString::Memcpy(local_68,param_2,(longlong)(int)uVar2 * 2);
  }
  local_38 = &local_68;
  local_30 = &local_58;
  FUN_140497620(param_1 + 0x200,local_res18,&local_38,0);
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_48 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141bbc9a0 FUN_141bbc9a0 body=2419 status=ok
// SIG undefined FUN_141bbc9a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bbc9a0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,undefined8 param_8,
                  undefined8 param_9,int param_10)

{
  ushort uVar1;
  undefined8 uVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  char cVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  float *pfVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  ulonglong local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_238;
  float local_230 [2];
  undefined8 local_228 [2];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  float local_200;
  float local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  longlong local_1e8;
  ulonglong local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong lStack_1b0;
  longlong local_1a8 [2];
  undefined1 local_198 [64];
  undefined1 local_158 [64];
  longlong local_118 [10];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  local_1b8 = param_5;
  local_1d0 = param_6;
  lVar17 = *(longlong *)(param_1 + 0x48);
  local_1c0 = param_8;
  local_1c8 = param_9;
  local_1f8 = (float)param_4;
  uStack_1f4 = (undefined4)((ulonglong)param_4 >> 0x20);
  local_1e8 = param_7;
  local_208 = param_1;
  local_1d8 = param_3;
  if (*(char *)(lVar17 + 0x28) == '\0') {
    FUN_1419f3850(lVar17);
  }
  uVar21 = *(undefined8 *)(lVar17 + 0x40);
  uVar16 = 0;
  uVar18 = uVar16;
  if (param_7 != 0) {
    uVar18 = *(ulonglong *)(param_7 + 0x140);
  }
  local_228[0] = uVar21;
  local_1e0 = uVar18;
  if (((*(short *)(param_1 + 0x188) == 0) && (*(short *)(param_1 + 400) == 0)) &&
     (*(short *)(param_1 + 0x19a) == 0)) {
    lVar17 = param_7;
    if ((*(short *)(param_1 + 0x162) != 0) &&
       ((uVar18 == 0 ||
        (cVar9 = FUN_141be9c30(*(undefined8 *)(uVar18 + 0xd8)), lVar17 = param_7, cVar9 == '\0'))))
    {
      fVar22 = 1.0;
      local_218 = 0;
      uStack_210 = 0;
      lVar17 = DAT_146ac3e58;
      if ((uVar18 != 0) &&
         (((lVar11 = *(longlong *)(uVar18 + 0x68), lVar11 != 0 &&
           (lVar13 = *(longlong *)(lVar11 + 0x10), lVar13 != 0)) &&
          (*(char *)(lVar13 + 0x28) != '\0')))) {
        fVar22 = *(float *)(lVar11 + 0x18);
        lVar17 = lVar13;
      }
      if ((*(short *)(param_1 + 0x162) != 0) &&
         (*(undefined8 *)(lVar17 + 0x48) = DAT_1468b5a78, *(short *)(param_1 + 0x162) != 0)) {
        uVar21 = *(undefined8 *)(lVar17 + 0x30);
        uVar1 = *(ushort *)(param_1 + 0x160);
        puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar15 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar10 = puVar15 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar10;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar15;
        *(undefined8 **)(param_2 + 8) = puVar15 + 1;
        puVar15[1] = 0;
        *puVar15 = &PTR_LAB_143f59c80;
        *(uint *)(puVar15 + 3) = (uint)uVar1;
        puVar15[2] = local_228[0];
        puVar15[4] = uVar21;
        uVar21 = local_228[0];
      }
      if (*(short *)(param_1 + 0x166) != 0) {
        uVar2 = *(undefined8 *)(lVar17 + 0x38);
        uVar1 = *(ushort *)(param_1 + 0x164);
        puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar15 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar10 = puVar15 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar10;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar15;
        *(undefined8 **)(param_2 + 8) = puVar15 + 1;
        puVar15[1] = 0;
        *puVar15 = &PTR_LAB_143f59c70;
        puVar15[2] = uVar21;
        *(uint *)(puVar15 + 3) = (uint)uVar1;
        puVar15[4] = uVar2;
      }
      local_1f8 = 1.0 / fVar22;
      local_268._0_4_ = 0;
      uStack_1f4 = 0;
      uStack_1f0 = 0;
      SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
                (param_2,uVar21,param_1 + 0x168,&local_1f8);
      local_268 = (ulonglong)local_268._4_4_ << 0x20;
      SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                (param_2,uVar21,param_1 + 0x174,&local_218);
      lVar17 = local_1e8;
    }
  }
  else {
    local_118[3] = param_1 + 0x160;
    local_118[4] = param_1 + 0x186;
    local_118[5] = param_1 + 0x18e;
    local_118[6] = param_1 + 0x164;
    local_118[7] = param_1 + 0x18a;
    local_118[8] = param_1 + 0x192;
    local_118[0] = DAT_146ac3e58;
    local_118[1] = DAT_146ac3e58;
    local_118[2] = DAT_146ac3e58;
    local_238 = 0x3f8000003f800000;
    local_230[0] = 1.0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    fVar22 = 1.0;
    fVar23 = 1.0;
    if (uVar18 != 0) {
      puVar20 = (undefined4 *)((longlong)&uStack_b0 + 4);
      plVar12 = (longlong *)(uVar18 + 0x98);
      do {
        lVar17 = plVar12[-1];
        iVar14 = (int)uVar16;
        if (lVar17 != 0) {
          local_218 = *(undefined8 *)(lVar17 + 0x20);
          uVar7 = *(undefined4 *)(lVar17 + 0x28);
          uVar5 = *(undefined4 *)(lVar17 + 0x24);
          uVar6 = *(undefined4 *)(lVar17 + 0x28);
          puVar20[-7] = *(undefined4 *)(lVar17 + 0x20);
          puVar20[-6] = uVar5;
          puVar20[-5] = uVar6;
          puVar20[-4] = 0x3f800000;
          puVar20[-4] = *(undefined4 *)(lVar17 + 0x2c);
          lVar11 = *(longlong *)(lVar17 + 0x10);
          uStack_210 = CONCAT44(0x3f800000,uVar7);
          if ((lVar11 != 0) && (*(char *)(lVar11 + 0x28) != '\0')) {
            *(longlong *)(((longlong)&lStack_1b0 - uVar18) + (longlong)plVar12) = lVar11;
          }
          if (iVar14 == 0) {
            pfVar19 = (float *)&local_238;
          }
          else {
            pfVar19 = (float *)((longlong)&local_238 + 4);
            if (iVar14 != 1) {
              pfVar19 = local_230;
            }
          }
          *pfVar19 = *(float *)(lVar17 + 0x18);
        }
        lVar17 = *plVar12;
        if (lVar17 != 0) {
          local_218 = *(undefined8 *)(lVar17 + 0x20);
          uVar7 = *(undefined4 *)(lVar17 + 0x28);
          uVar5 = *(undefined4 *)(lVar17 + 0x24);
          uVar6 = *(undefined4 *)(lVar17 + 0x28);
          puVar20[-3] = *(undefined4 *)(lVar17 + 0x20);
          puVar20[-2] = uVar5;
          puVar20[-1] = uVar6;
          *puVar20 = 0x3f800000;
          *puVar20 = *(undefined4 *)(lVar17 + 0x2c);
          lVar11 = *(longlong *)(lVar17 + 0x10);
          uStack_210 = CONCAT44(0x3f800000,uVar7);
          if ((lVar11 != 0) && (*(char *)(lVar11 + 0x28) != '\0')) {
            *(longlong *)(((longlong)local_1a8 - uVar18) + (longlong)plVar12) = lVar11;
          }
          if (iVar14 == -1) {
            pfVar19 = (float *)&local_238;
          }
          else {
            pfVar19 = (float *)((longlong)&local_238 + 4);
            if (iVar14 != 0) {
              pfVar19 = local_230;
            }
          }
          *pfVar19 = *(float *)(lVar17 + 0x18);
        }
        lVar17 = plVar12[1];
        if (lVar17 != 0) {
          local_218 = *(undefined8 *)(lVar17 + 0x20);
          uVar7 = *(undefined4 *)(lVar17 + 0x28);
          uVar5 = *(undefined4 *)(lVar17 + 0x24);
          uVar6 = *(undefined4 *)(lVar17 + 0x28);
          puVar20[1] = *(undefined4 *)(lVar17 + 0x20);
          puVar20[2] = uVar5;
          puVar20[3] = uVar6;
          puVar20[4] = 0x3f800000;
          puVar20[4] = *(undefined4 *)(lVar17 + 0x2c);
          lVar11 = *(longlong *)(lVar17 + 0x10);
          uStack_210 = CONCAT44(0x3f800000,uVar7);
          if ((lVar11 != 0) && (*(char *)(lVar11 + 0x28) != '\0')) {
            *(longlong *)((longlong)local_1a8 + (8 - uVar18) + (longlong)plVar12) = lVar11;
          }
          if (iVar14 == -2) {
            pfVar19 = (float *)&local_238;
          }
          else {
            pfVar19 = (float *)((longlong)&local_238 + 4);
            if (iVar14 != -1) {
              pfVar19 = local_230;
            }
          }
          *pfVar19 = *(float *)(lVar17 + 0x18);
        }
        uVar16 = (ulonglong)(iVar14 + 3U);
        puVar20 = puVar20 + 0xc;
        plVar12 = plVar12 + 3;
      } while ((int)(iVar14 + 3U) < 3);
      fVar22 = (float)local_238;
      fVar23 = local_238._4_4_;
    }
    fVar8 = local_230[0];
    lVar17 = 0;
    local_238 = 3;
    do {
      puVar3 = *(ushort **)((longlong)local_118 + lVar17 + 0x18);
      lVar11 = local_238;
      if (puVar3[1] != 0) {
        lVar13 = *(longlong *)((longlong)local_118 + lVar17);
        puVar4 = *(ushort **)((longlong)local_118 + lVar17 + 0x30);
        *(undefined8 *)(lVar13 + 0x48) = DAT_1468b5a78;
        if (puVar3[1] != 0) {
          uVar1 = *puVar3;
          uVar21 = *(undefined8 *)(lVar13 + 0x30);
          puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar10 = puVar15 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30);
            puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar10 = puVar15 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar10;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar15;
          *(undefined8 **)(param_2 + 8) = puVar15 + 1;
          puVar15[1] = 0;
          *puVar15 = &PTR_LAB_143f59c80;
          *(uint *)(puVar15 + 3) = (uint)uVar1;
          puVar15[4] = uVar21;
          puVar15[2] = local_228[0];
        }
        lVar11 = local_238;
        if (puVar4[1] != 0) {
          uVar21 = *(undefined8 *)(lVar13 + 0x38);
          uVar1 = *puVar4;
          puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar10 = puVar15 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30);
            puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar10 = puVar15 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar10;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar15;
          *(undefined8 **)(param_2 + 8) = puVar15 + 1;
          puVar15[1] = 0;
          puVar15[2] = local_228[0];
          *puVar15 = &PTR_LAB_143f59c70;
          *(uint *)(puVar15 + 3) = (uint)uVar1;
          puVar15[4] = uVar21;
        }
      }
      param_1 = local_208;
      uVar21 = local_228[0];
      lVar17 = lVar17 + 8;
      local_238 = lVar11 + -1;
    } while (local_238 != 0);
    if (*(short *)(local_208 + 0x19a) != 0) {
      local_260 = local_260 & 0xffffffff00000000;
      local_268 = CONCAT44(local_268._4_4_,3);
      SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
                (param_2,local_228[0],local_208 + 0x196,&local_c8);
    }
    local_268 = local_268 & 0xffffffff00000000;
    local_200 = 1.0 / fVar8;
    local_208 = CONCAT44(1.0 / fVar23,1.0 / fVar22);
    SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
              (param_2,uVar21,param_1 + 0x168,&local_208);
    param_4 = CONCAT44(uStack_1f4,local_1f8);
    lVar17 = local_1e8;
  }
  lVar11 = 0;
  if (0 < param_10) {
    FUN_141b8b490(local_1a8,lVar17);
    if (param_10 == 0x7fffffff) {
      local_268 = local_268 & 0xffffffff00000000;
      SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                (param_2,uVar21,param_1 + 0x180,local_1a8);
    }
    local_260 = local_260 & 0xffffffff00000000;
    SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
              (param_2,uVar21,param_1 + 0x16e,local_198);
    local_260 = local_260 & 0xffffffff00000000;
    local_268 = CONCAT44(local_268._4_4_,(undefined4)local_1a8[0]);
    SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
              (param_2,uVar21,param_1 + 0x17a,local_158);
  }
  if (*(short *)(param_1 + 0x1ea) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a49670) &&
       (_Init_thread_header(&DAT_146a49670), DAT_146a49670 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar12 = (longlong *)
                (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Mobile.Shadow.CSMDebugHint");
      lVar13 = lVar11;
      if (plVar12 != (longlong *)0x0) {
        lVar13 = (**(code **)(*plVar12 + 0x40))(plVar12);
      }
      DAT_146a49668 = lVar13;
      _Init_thread_footer(&DAT_146a49670);
    }
    local_268 = local_268 & 0xffffffff00000000;
    local_228[0] = CONCAT44(local_228[0]._4_4_,*(undefined4 *)(DAT_146a49668 + 4));
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,uVar21,param_1 + 0x1e6,local_228);
  }
  if (local_1e0 != 0) {
    lVar11 = *(longlong *)(local_1e0 + 0x60);
  }
  local_268 = lVar11;
  FUN_141c2b3f0(param_1 + 0x19c,param_2,uVar21,param_4);
  local_268 = local_1d8;
  local_260 = param_4;
  FUN_141d87c00(param_1,param_2,uVar21,local_1d0);
  local_248 = 0;
  local_250 = local_1c8;
  local_258 = local_1c0;
  local_268 = param_4;
  local_260 = lVar17;
  FUN_141d84bb0(param_1,param_2,uVar21,local_1b8);
  return;
}



// FUNCTION 141bbd320 FUN_141bbd320 body=213 status=ok
// SIG undefined FUN_141bbd320(void)

void FUN_141bbd320(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  undefined8 param_9,undefined8 param_10,longlong param_11)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_11 == 0) ||
      (lVar2 = *(longlong *)(param_11 + 0x20), *(longlong *)(param_11 + 0x20) == 0)) &&
     ((param_4 == 0 ||
      ((*(longlong *)(param_4 + 0x140) == 0 ||
       (lVar2 = *(longlong *)(*(longlong *)(param_4 + 0x140) + 0x58), lVar2 == 0)))))) {
    lVar2 = DAT_1464c2238;
  }
  if ((param_5 != 0) && (*(char *)(param_5 + 6) != '\0')) {
    lVar1 = *(longlong *)(param_7 + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,*(undefined8 *)(lVar1 + 0x38),param_5,lVar2);
  }
  if ((param_6 != 0) && (*(char *)(param_6 + 6) != '\0')) {
    lVar1 = *(longlong *)(param_8 + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,*(undefined8 *)(lVar1 + 0x40),param_6,lVar2);
  }
  return;
}



// FUNCTION 141bbd400 FUN_141bbd400 body=994 status=ok
// SIG undefined FUN_141bbd400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141bbd400(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,int param_6,undefined8 param_7,undefined8 *param_8)

{
  byte bVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  undefined8 uVar17;
  
  uVar5 = *(ulonglong *)(param_5 + 0xa0);
  uVar3 = *(undefined8 *)(param_5 + 0xa8);
  FUN_141a0cff0(uVar5,*(undefined4 *)(param_3 + 0x1a38),param_2);
  lVar4 = *(longlong *)(param_1 + 0x40);
  lVar16 = *(longlong *)(param_1 + 0x38);
  lVar14 = lVar4 + 0x150;
  if (lVar4 == 0) {
    lVar14 = 0;
  }
  lVar13 = lVar16 + 0x150;
  if (lVar16 == 0) {
    lVar13 = 0;
  }
  uVar9 = uVar5;
  uVar17 = uVar3;
  FUN_141bbd320(param_1 + 0x50,param_2,param_3,param_4,lVar13,lVar14,lVar16,lVar4,uVar5,uVar3,
                *param_8);
  uVar12 = (undefined4)((ulonglong)uVar17 >> 0x20);
  lVar4 = *(longlong *)(param_1 + 0x38);
  lVar16 = *(longlong *)(param_5 + 0x78);
  if (*(longlong *)(param_5 + 0x78) == 0) {
    lVar16 = param_5;
  }
  lVar14 = *(longlong *)(lVar4 + 0x48);
  uVar17 = *(undefined8 *)(param_1 + 0x18);
  lVar16 = lVar16 + (longlong)param_6 * 0x78;
  if (*(char *)(lVar14 + 0x28) == '\0') {
    FUN_1419f3850(lVar14);
  }
  FUN_141d88300(lVar4,param_2,*(undefined8 *)(lVar14 + 0x38),uVar3,uVar17,param_3);
  lVar14 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar14 + 0x28) == '\0') {
    FUN_1419f3850(lVar14);
  }
  FUN_141d84f90(lVar4,param_2,*(undefined8 *)(lVar14 + 0x38),uVar5,param_3,param_4,lVar16,param_7,
                uVar9 & 0xffffffff00000000);
  FUN_141bbc9a0(*(undefined8 *)(param_1 + 0x40),param_2,*(undefined8 *)(param_1 + 0x18),param_3,
                uVar5,uVar3,param_4,lVar16,param_7,CONCAT44(uVar12,*(undefined4 *)(param_1 + 0x54)))
  ;
  lVar4 = *(longlong *)(param_1 + 0x40);
  uVar5 = 0;
  iVar15 = 0;
  if (0 < *(int *)(lVar4 + 0x10)) {
    uVar9 = uVar5;
    do {
      iVar8 = (int)uVar9;
      if (*(undefined **)(*(longlong *)(lVar4 + 8) + uVar5 * 8) == &DAT_146b09820) {
        if (iVar8 != -1) {
          puVar11 = *(undefined4 **)(*(longlong *)(lVar4 + 0x18) + (longlong)iVar8 * 8);
          *puVar11 = *(undefined4 *)(lVar4 + 0xb8);
          goto LAB_141bbd61e;
        }
        break;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)*(int *)(lVar4 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a496a0) && (_Init_thread_header(&DAT_146a496a0), DAT_146a496a0 == -1))
  {
    _DAT_146a49698 = 0;
    DAT_146a4969c = 0;
    DAT_146a4969e = 0;
    _Init_thread_footer(&DAT_146a496a0);
  }
  puVar11 = (undefined4 *)&DAT_146a49698;
LAB_141bbd61e:
  cVar7 = *(char *)((longlong)puVar11 + 6);
  if (cVar7 != '\0') {
    if (param_4 != 0) {
      bVar1 = *(byte *)(param_4 + 0x2c);
      if (bVar1 == 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = 0;
        if (bVar1 != 0) {
          for (; (bVar1 >> iVar15 & 1) == 0; iVar15 = iVar15 + 1) {
          }
        }
        iVar15 = iVar15 + 1;
      }
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
      cVar7 = *(char *)((longlong)puVar11 + 6);
    }
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    if (cVar7 != '\0') {
      uVar2 = *(ushort *)(puVar11 + 1);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      uVar17 = *(undefined8 *)(param_3 + 0x38 + (longlong)iVar15 * 8);
      puVar6 = puVar10 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar10 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_144d920a0;
      puVar10[2] = uVar3;
      *(uint *)(puVar10 + 3) = (uint)uVar2;
      puVar10[4] = uVar17;
    }
  }
  if (((*(byte *)(param_1 + 0x5c) & 1) != 0) && ((*(uint *)(param_3 + 0x28cc) & 0x4000) != 0)) {
    if ((param_4 == 0) || (uVar12 = 0x80, (*(uint *)(param_4 + 0x18) >> 4 & 1) != 0)) {
      uVar12 = 0;
    }
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar10 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f489c0;
    *(undefined4 *)(puVar10 + 2) = uVar12;
  }
  return;
}



// FUNCTION 141bbd7f0 FUN_141bbd7f0 body=427 status=ok
// SIG undefined FUN_141bbd7f0(void)

void FUN_141bbd7f0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141aa9590(param_1,param_2,*(undefined8 *)(lVar2 + 0x40),uVar3);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59c80;
    puVar5[4] = param_5;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59c70;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = param_4;
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_res8 = *(undefined8 *)(lVar2 + 0x40);
  FUN_141aa6800(param_1 + 200,param_2,&local_res8,*(undefined4 *)(param_3 + 0x1a38),0xf);
  return;
}



// FUNCTION 141bbd9a0 FUN_141bbd9a0 body=193 status=ok
// SIG undefined FUN_141bbd9a0(void)

void FUN_141bbd9a0(longlong param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  float local_res8;
  float local_resc;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141aa9800(param_1,param_2,*(undefined8 *)(lVar1 + 0x38),uVar2);
  if (*(short *)(param_1 + 0xc4) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    local_res8 = 1.0 / (float)*param_4;
    local_resc = 1.0 / (float)param_4[1];
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    FUN_140498810(param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,&local_res8,0);
  }
  return;
}



// FUNCTION 141bbda70 FUN_141bbda70 body=1734 status=ok
// SIG undefined FUN_141bbda70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141bbda70(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  undefined1 local_res8 [8];
  float local_88 [4];
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 0x10) + 0x20) + 0x210))();
  uVar14 = (ulonglong)_tls_index;
  if ((((lVar6 != 0) && (*(int *)(lVar6 + 0x1228) == 0)) &&
      (lVar6 = *(longlong *)(lVar6 + 0x1150), lVar6 != 0)) &&
     ((plVar2 = *(longlong **)(lVar6 + 8), plVar2 != (longlong *)0x0 && (plVar2[6] != 0)))) {
    fVar17 = 1.0;
    local_78 = 0;
    uStack_70 = 0;
    plVar15 = DAT_146ac3e58;
    if ((0 < *(int *)(param_3 + 0x1a38)) && ((plVar2 != (longlong *)0x0 && (plVar2[6] != 0)))) {
      fVar17 = *(float *)(lVar6 + 0x100);
      uVar5 = (**(code **)(*plVar2 + 0x40))(plVar2);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x38) <
          DAT_1468509dc) {
        _Init_thread_header(&DAT_1468509dc);
        if (DAT_1468509dc == -1) {
          DAT_1468509d8 = 1.442695;
          _Init_thread_footer(&DAT_1468509dc);
        }
      }
      fVar16 = _guard_xfg_dispatch_icall_nop((float)uVar5);
      local_78 = CONCAT44(local_78._4_4_,fVar16 * DAT_1468509d8);
      plVar15 = plVar2;
    }
    lVar6 = *(longlong *)(param_1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    uVar3 = *(undefined8 *)(lVar6 + 0x40);
    if (*(short *)(param_1 + 0x162) != 0) {
      plVar15[9] = DAT_1468b5a78;
      if (*(short *)(param_1 + 0x162) != 0) {
        lVar6 = plVar15[6];
        uVar1 = *(ushort *)(param_1 + 0x160);
        puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar9 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar8 = puVar9 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar8;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar9;
        *(undefined8 **)(param_2 + 8) = puVar9 + 1;
        puVar9[1] = 0;
        *(uint *)(puVar9 + 3) = (uint)uVar1;
        uVar14 = (ulonglong)_tls_index;
        *puVar9 = &PTR_LAB_143f59c80;
        puVar9[2] = uVar3;
        puVar9[4] = lVar6;
      }
    }
    if (*(short *)(param_1 + 0x166) != 0) {
      lVar6 = plVar15[7];
      uVar1 = *(ushort *)(param_1 + 0x164);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar9 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar8;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar9;
      *(undefined8 **)(param_2 + 8) = puVar9 + 1;
      puVar9[1] = 0;
      *puVar9 = &PTR_LAB_143f59c70;
      puVar9[2] = uVar3;
      *(uint *)(puVar9 + 3) = (uint)uVar1;
      puVar9[4] = lVar6;
    }
    local_88[0] = 1.0 / fVar17;
    local_88[1] = 0.0;
    local_88[2] = 0.0;
    SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
              (param_2,uVar3,param_1 + 0x168,local_88,0);
    SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
              (param_2,uVar3,param_1 + 0x174,&local_78,0);
  }
  uVar7 = 0;
  lVar6 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  uVar3 = *(undefined8 *)(lVar6 + 0x40);
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar12 = uVar7;
    do {
      iVar11 = (int)uVar12;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar7 * 8) == &DAT_146b096e0) {
        if (iVar11 != -1) {
          puVar13 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 8);
          *puVar13 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141bbdd9f;
        }
        break;
      }
      uVar12 = (ulonglong)(iVar11 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x38) <
      DAT_146a0e8b8) {
    _Init_thread_header(&DAT_146a0e8b8);
    if (DAT_146a0e8b8 == -1) {
      _DAT_146a0e8b0 = 0;
      DAT_146a0e8b4 = 0;
      DAT_146a0e8b6 = 0;
      _Init_thread_footer(&DAT_146a0e8b8);
    }
  }
  puVar13 = (undefined4 *)&DAT_146a0e8b0;
LAB_141bbdd9f:
  FUN_141aad5c0(param_2,uVar3,puVar13,param_4 + 0x18);
  if (*(short *)(param_1 + 0xd2) != 0) {
    puVar8 = (undefined8 *)FUN_141d9d800(param_1,local_res8,param_2,param_3);
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar4 = *puVar8;
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d8e600;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar4;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x60);
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d8e600;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 0x70);
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d8e600;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar4;
  }
  if ((*(char *)(param_3 + 0x120d) != '\0') && (0 < *(int *)(*(longlong *)(param_3 + 0x10) + 8))) {
    lVar6 = FSceneViewFamily::GetStereoEyeView
                      (*(longlong *)(param_3 + 0x10),-(*(int *)(param_3 + 0xf60) != 0) & 2);
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar10 = 0;
      do {
        if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar10 * 8) == &DAT_146b09780) {
          if (iVar11 != -1) {
            puVar13 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 8);
            *puVar13 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141bbdfd4;
          }
          break;
        }
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(param_1 + 0x10));
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x38) <
        DAT_146a0e8c8) {
      _Init_thread_header(&DAT_146a0e8c8);
      if (DAT_146a0e8c8 == -1) {
        _DAT_146a0e8c0 = 0;
        _DAT_146a0e8c4 = 0;
        DAT_146a0e8c6 = 0;
        _Init_thread_footer(&DAT_146a0e8c8);
      }
    }
    puVar13 = (undefined4 *)&DAT_146a0e8c0;
LAB_141bbdfd4:
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,uVar3,puVar13,*(undefined8 *)(lVar6 + 0x20));
  }
  lVar6 = *(longlong *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_4 + 0x20);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
            (param_2,*(undefined8 *)(lVar6 + 0x40),param_1 + 0x110,uVar3);
  return;
}



// FUNCTION 141bbe140 FUN_141bbe140 body=994 status=ok
// SIG undefined FUN_141bbe140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141bbe140(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  
  lVar6 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  uVar2 = *(undefined8 *)(lVar6 + 0x38);
  uVar4 = 0;
  uVar12 = (ulonglong)_tls_index;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar10 = uVar4;
    do {
      iVar9 = (int)uVar10;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146b096e0) {
        if (iVar9 != -1) {
          puVar11 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 8);
          *puVar11 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141bbe1e8;
        }
        break;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x38) <
      DAT_146a0e8b8) {
    _Init_thread_header(&DAT_146a0e8b8);
    if (DAT_146a0e8b8 == -1) {
      _DAT_146a0e8b0 = 0;
      DAT_146a0e8b4 = 0;
      DAT_146a0e8b6 = 0;
      _Init_thread_footer(&DAT_146a0e8b8);
    }
  }
  puVar11 = (undefined4 *)&DAT_146a0e8b0;
LAB_141bbe1e8:
  FUN_141aad730(param_2,uVar2,puVar11,param_4 + 0x18);
  if (*(short *)(param_1 + 0xd2) != 0) {
    puVar5 = (undefined8 *)FUN_141d9d800(param_1,local_res8,param_2,param_3);
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar3 = *puVar5;
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144165218;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar3;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x60);
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144165218;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar3;
    uVar3 = *(undefined8 *)(param_3 + 0x70);
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144165218;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar3;
  }
  if ((*(char *)(param_3 + 0x120d) != '\0') && (0 < *(int *)(*(longlong *)(param_3 + 0x10) + 8))) {
    lVar6 = FSceneViewFamily::GetStereoEyeView
                      (*(longlong *)(param_3 + 0x10),-(*(int *)(param_3 + 0xf60) != 0) & 2);
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar8 = 0;
      do {
        if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar8 * 8) == &DAT_146b09780) {
          if (iVar9 != -1) {
            puVar11 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 8);
            *puVar11 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141bbe410;
          }
          break;
        }
        iVar9 = iVar9 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_1 + 0x10));
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x38) <
        DAT_146a0e8c8) {
      _Init_thread_header(&DAT_146a0e8c8);
      if (DAT_146a0e8c8 == -1) {
        _DAT_146a0e8c0 = 0;
        _DAT_146a0e8c4 = 0;
        DAT_146a0e8c6 = 0;
        _Init_thread_footer(&DAT_146a0e8c8);
      }
    }
    puVar11 = (undefined4 *)&DAT_146a0e8c0;
LAB_141bbe410:
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,uVar2,puVar11,*(undefined8 *)(lVar6 + 0x20));
  }
  lVar6 = *(longlong *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_4 + 0x20);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
            (param_2,*(undefined8 *)(lVar6 + 0x38),param_1 + 0x110,uVar2);
  return;
}



// FUNCTION 141bbe530 FUN_141bbe530 body=584 status=ok
// SIG undefined FUN_141bbe530(void)

void FUN_141bbe530(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,int *param_5
                  ,int *param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141aa9590(param_1,param_2,*(undefined8 *)(lVar2 + 0x40),uVar3);
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(*param_4 + 0x10);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  uVar5 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar4;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar3;
  }
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar4;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_28 = ((float)*param_6 + 0.5) * (1.0 / (float)*param_5);
  local_24 = ((float)param_6[1] + 0.5) * (1.0 / (float)param_5[1]);
  local_20 = ((float)param_6[2] - 0.5) * (1.0 / (float)*param_5);
  local_1c = ((float)param_6[3] - 0.5) * (1.0 / (float)param_5[1]);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,*(undefined8 *)(lVar2 + 0x40),param_1 + 200,&local_28,0);
  return;
}



// FUNCTION 141bbe780 FUN_141bbe780 body=299 status=ok
// SIG undefined FUN_141bbe780(void)

void FUN_141bbe780(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  ulonglong param_5,undefined8 param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  lVar2 = *(longlong *)(*(longlong *)(param_4 + 0x30) + 0x178);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x60);
  }
  FUN_141bbfb50(param_1,param_2,uVar3,param_3,param_5,uVar4);
  if (*(short *)(param_1 + 0x106) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x104);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d8e600;
    puVar6[4] = param_6;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x108,&stack0x00000038,param_5 & 0xffffffff00000000);
  return;
}



// FUNCTION 141bbe8b0 SetParameters body=833 status=ok
// SIG undefined SetParameters(void)

void FLpvInject_GenerateVplListsCS::SetParameters
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  FUN_141bbec00(param_1,param_2,param_3);
  uVar4 = FUN_141a156e0();
  uVar5 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0x13a) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x138);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d92090;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = param_4;
  }
  if (*(short *)(param_1 + 0x146) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x144);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dcb3b8;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  if (*(short *)(param_1 + 0x13e) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x13c);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d92090;
    puVar7[4] = param_5;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0x146) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x144);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dcb3b8;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  if (*(short *)(param_1 + 0x142) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x140);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d92090;
    puVar7[4] = param_6;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0x14a) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x148);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dcb3b8;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  return;
}



// FUNCTION 141bbec00 FUN_141bbec00 body=3563 status=ok
// SIG undefined FUN_141bbec00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141bbec00(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  short *psVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  undefined1 local_80 [8];
  longlong local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  
  lVar16 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar16 + 0x28) == '\0') {
    FUN_1419f3850(lVar16);
  }
  uVar19 = *(undefined8 *)(lVar16 + 0x60);
  uVar9 = 0;
  local_98 = uVar19;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar18 = uVar9;
    do {
      iVar8 = (int)uVar18;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar9 * 8) == &DAT_146a277d0) {
        if (iVar8 != -1) {
          puVar15 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
          *puVar15 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141bbeca7;
        }
        break;
      }
      uVar18 = (ulonglong)(iVar8 + 1);
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < (longlong)*(int *)(param_1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a49680) && (_Init_thread_header(&DAT_146a49680), DAT_146a49680 == -1))
  {
    _DAT_146a49678 = 0;
    DAT_146a4967c = 0;
    DAT_146a4967e = 0;
    _Init_thread_footer(&DAT_146a49680);
  }
  puVar15 = (undefined4 *)&DAT_146a49678;
LAB_141bbeca7:
  if (*(char *)((longlong)puVar15 + 6) != '\0') {
    uVar4 = *param_3;
    uVar2 = *(ushort *)(puVar15 + 1);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar17) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar17 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar17;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_144dcb3c8;
    puVar11[2] = uVar19;
    *(uint *)(puVar11 + 3) = (uint)uVar2;
    puVar11[4] = uVar4;
  }
  local_a8 = 0;
  psVar20 = (short *)(param_1 + 0xc2);
  local_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_90 = 7;
  puVar17 = param_3;
  do {
    puVar11 = puVar17 + 1;
    if (*psVar20 != 0) {
      uVar4 = *puVar11;
      uVar2 = psVar20[-1];
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar12 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar13;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar12;
      *(undefined8 **)(param_2 + 8) = puVar12 + 1;
      puVar12[1] = 0;
      *(uint *)(puVar12 + 3) = (uint)uVar2;
      *puVar12 = &PTR_LAB_144d92090;
      puVar12[2] = uVar19;
      puVar12[4] = uVar4;
    }
    uVar9 = local_a0;
    if (psVar20[0xe] != 0) {
      lVar16 = (longlong)(int)local_a0;
      uVar2 = psVar20[0xd];
      iVar8 = (int)local_a0 + 1;
      local_a0 = CONCAT44(local_a0._4_4_,iVar8);
      if (local_a0._4_4_ < iVar8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_a8,uVar9 & 0xffffffff);
      }
      uVar9 = local_b0;
      *(uint *)(local_a8 + lVar16 * 4) = (uint)uVar2;
      lVar16 = (longlong)(int)local_b0;
      iVar8 = (int)local_b0 + 1;
      local_b0 = CONCAT44(local_b0._4_4_,iVar8);
      if (local_b0._4_4_ < iVar8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_b8,uVar9 & 0xffffffff);
      }
      *(undefined8 *)(local_b8 + lVar16 * 8) = puVar17[8];
    }
    if (DAT_1469fc430 == 0) {
      if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
        cVar7 = IsInRenderingThread();
        if (cVar7 == '\0') {
          FScopedEvent::FScopedEvent(local_80);
          plVar10 = (longlong *)FUN_14049e3d0(local_68,0,0xff);
          lVar16 = *plVar10;
          *(undefined1 **)(lVar16 + 0x10) = &LAB_141a15860;
          *(undefined1 **)(lVar16 + 0x18) = local_80;
          lVar16 = *plVar10;
          lVar6 = plVar10[2];
          lVar22 = plVar10[1];
          lVar5 = *(longlong *)(lVar16 + 0x28);
          piVar1 = (int *)(lVar5 + 0x48);
          if (lVar5 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_88 = lVar5;
          FUN_1404a4fe0(lVar16,lVar22,(int)lVar6,1);
          if (lVar5 != 0) {
            LOCK();
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              FGraphEvent::Recycle(local_88);
            }
          }
          FScopedEvent::~FScopedEvent(local_80);
        }
        else {
          lVar16 = operator_new(0x38);
          if (lVar16 == 0) {
            DAT_1469fc430 = 0;
          }
          else {
            DAT_1469fc430 =
                 TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                 ::FStaticStateResource::FStaticStateResource(lVar16);
          }
        }
      }
      else {
        lVar16 = operator_new();
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar16);
        }
        LOCK();
        if (DAT_1469fc430 != 0) {
          lVar16 = DAT_1469fc430;
        }
        DAT_1469fc430 = lVar16;
        UNLOCK();
      }
    }
    uVar19 = *puVar11;
    uVar4 = *(undefined8 *)(DAT_1469fc430 + 0x30);
    if (*psVar20 != 0) {
      uVar2 = psVar20[-1];
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar17 = puVar13 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar17) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar17 = puVar13 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar17;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar13;
      *(undefined8 **)(param_2 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      *puVar13 = &PTR_LAB_144d92090;
      *(uint *)(puVar13 + 3) = (uint)uVar2;
      puVar13[2] = local_98;
      puVar13[4] = uVar19;
    }
    if (*(short *)(param_1 + 0xfa) != 0) {
      uVar2 = *(ushort *)(param_1 + 0xf8);
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar17 = puVar13 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar17) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar17 = puVar13 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar17;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar13;
      *(undefined8 **)(param_2 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      *puVar13 = &PTR_LAB_144dcb3b8;
      puVar13[2] = local_98;
      *(uint *)(puVar13 + 3) = (uint)uVar2;
      puVar13[4] = uVar4;
    }
    psVar20 = psVar20 + 2;
    local_90 = local_90 + -1;
    uVar19 = local_98;
    puVar17 = puVar11;
  } while (local_90 != 0);
  if (*(short *)(param_1 + 0xfe) != 0) {
    uVar19 = param_3[0xf];
    uVar2 = *(ushort *)(param_1 + 0xfc);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar17) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar17 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar17;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    *puVar11 = &PTR_LAB_144dcb360;
    puVar11[2] = local_98;
    puVar11[1] = 0;
    *(uint *)(puVar11 + 3) = (uint)uVar2;
    puVar11[4] = uVar19;
  }
  uVar19 = local_98;
  uVar9 = local_a0;
  if (*(short *)(param_1 + 0x102) != 0) {
    lVar16 = (longlong)(int)local_a0;
    uVar2 = *(ushort *)(param_1 + 0x100);
    iVar8 = (int)local_a0 + 1;
    local_a0 = CONCAT44(local_a0._4_4_,iVar8);
    if (local_a0._4_4_ < iVar8) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_a8,uVar9 & 0xffffffff);
    }
    uVar9 = local_b0;
    *(uint *)(local_a8 + lVar16 * 4) = (uint)uVar2;
    lVar16 = (longlong)(int)local_b0;
    iVar8 = (int)local_b0 + 1;
    local_b0 = CONCAT44(local_b0._4_4_,iVar8);
    if (local_b0._4_4_ < iVar8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_b8,uVar9 & 0xffffffff);
    }
    *(undefined8 *)(local_b8 + lVar16 * 8) = param_3[0x10];
  }
  if (*(short *)(param_1 + 0x106) != 0) {
    uVar4 = param_3[0x11];
    uVar2 = *(ushort *)(param_1 + 0x104);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar17) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar17 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar17;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_144dcb360;
    puVar11[2] = uVar19;
    *(uint *)(puVar11 + 3) = (uint)uVar2;
    puVar11[4] = uVar4;
  }
  uVar9 = local_a0;
  if (*(short *)(param_1 + 0x10a) != 0) {
    lVar16 = (longlong)(int)local_a0;
    uVar2 = *(ushort *)(param_1 + 0x108);
    iVar8 = (int)local_a0 + 1;
    local_a0 = CONCAT44(local_a0._4_4_,iVar8);
    if (local_a0._4_4_ < iVar8) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_a8,uVar9 & 0xffffffff);
    }
    uVar9 = local_b0;
    *(uint *)(local_a8 + lVar16 * 4) = (uint)uVar2;
    lVar16 = (longlong)(int)local_b0;
    iVar8 = (int)local_b0 + 1;
    local_b0 = CONCAT44(local_b0._4_4_,iVar8);
    if (local_b0._4_4_ < iVar8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_b8,uVar9 & 0xffffffff);
    }
    *(undefined8 *)(local_b8 + lVar16 * 8) = param_3[0x12];
  }
  puVar17 = param_3 + 0x13;
  local_90 = 2;
  psVar20 = (short *)(param_1 + 0x10e);
  do {
    if (*psVar20 != 0) {
      uVar4 = *puVar17;
      uVar2 = psVar20[-1];
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar13 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar13 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar11;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar13;
      *(undefined8 **)(param_2 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      *(uint *)(puVar13 + 3) = (uint)uVar2;
      *puVar13 = &PTR_LAB_144d92090;
      puVar13[2] = uVar19;
      puVar13[4] = uVar4;
    }
    uVar9 = local_a0;
    if (psVar20[4] != 0) {
      lVar16 = (longlong)(int)local_a0;
      uVar2 = psVar20[3];
      iVar8 = (int)local_a0 + 1;
      local_a0 = CONCAT44(local_a0._4_4_,iVar8);
      if (local_a0._4_4_ < iVar8) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_a8,uVar9 & 0xffffffff);
      }
      uVar9 = local_b0;
      *(uint *)(local_a8 + lVar16 * 4) = (uint)uVar2;
      lVar16 = (longlong)(int)local_b0;
      iVar8 = (int)local_b0 + 1;
      local_b0 = CONCAT44(local_b0._4_4_,iVar8);
      if (local_b0._4_4_ < iVar8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_b8,uVar9 & 0xffffffff);
      }
      *(undefined8 *)(local_b8 + lVar16 * 8) = puVar17[3];
    }
    if (DAT_1469fc430 == 0) {
      if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
        cVar7 = IsInRenderingThread();
        if (cVar7 == '\0') {
          FScopedEvent::FScopedEvent(local_70);
          plVar10 = (longlong *)FUN_14049e3d0(local_50,0,0xff);
          lVar16 = *plVar10;
          *(undefined1 **)(lVar16 + 0x10) = &LAB_141a15860;
          *(undefined1 **)(lVar16 + 0x18) = local_70;
          lVar16 = *plVar10;
          lVar6 = plVar10[2];
          lVar22 = plVar10[1];
          lVar5 = *(longlong *)(lVar16 + 0x28);
          piVar1 = (int *)(lVar5 + 0x48);
          if (lVar5 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_78 = lVar5;
          FUN_1404a4fe0(lVar16,lVar22,(int)lVar6,1);
          if (lVar5 != 0) {
            LOCK();
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              FGraphEvent::Recycle(local_78);
            }
          }
          FScopedEvent::~FScopedEvent(local_70);
        }
        else {
          lVar16 = operator_new(0x38);
          if (lVar16 == 0) {
            DAT_1469fc430 = 0;
          }
          else {
            DAT_1469fc430 =
                 TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                 ::FStaticStateResource::FStaticStateResource(lVar16);
          }
        }
      }
      else {
        lVar16 = operator_new(0x38);
        if (lVar16 == 0) {
          LOCK();
          if (DAT_1469fc430 == 0) {
            DAT_1469fc430 = 0;
          }
          UNLOCK();
        }
        else {
          lVar16 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar16);
          LOCK();
          if (DAT_1469fc430 != 0) {
            lVar16 = DAT_1469fc430;
          }
          DAT_1469fc430 = lVar16;
          UNLOCK();
        }
      }
    }
    uVar19 = *puVar17;
    uVar4 = *(undefined8 *)(DAT_1469fc430 + 0x30);
    if (*psVar20 != 0) {
      uVar2 = psVar20[-1];
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar13 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar13 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar11;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar13;
      *(undefined8 **)(param_2 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      *puVar13 = &PTR_LAB_144d92090;
      *(uint *)(puVar13 + 3) = (uint)uVar2;
      puVar13[2] = local_98;
      puVar13[4] = uVar19;
    }
    if (*(short *)(param_1 + 0xfa) != 0) {
      uVar2 = *(ushort *)(param_1 + 0xf8);
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar13 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar13 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar11;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar13;
      *(undefined8 **)(param_2 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      *puVar13 = &PTR_LAB_144dcb3b8;
      puVar13[2] = local_98;
      *(uint *)(puVar13 + 3) = (uint)uVar2;
      puVar13[4] = uVar4;
    }
    uVar9 = local_a0;
    puVar17 = puVar17 + 1;
    psVar20 = psVar20 + 2;
    local_90 = local_90 + -1;
    uVar19 = local_98;
  } while (local_90 != 0);
  if (*(short *)(param_1 + 0x122) != 0) {
    lVar16 = (longlong)(int)local_a0;
    uVar2 = *(ushort *)(param_1 + 0x120);
    iVar8 = (int)local_a0 + 1;
    local_a0 = CONCAT44(local_a0._4_4_,iVar8);
    if (local_a0._4_4_ < iVar8) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_a8,uVar9 & 0xffffffff);
    }
    uVar9 = local_b0;
    *(uint *)(local_a8 + lVar16 * 4) = (uint)uVar2;
    lVar16 = (longlong)(int)local_b0;
    iVar8 = (int)local_b0 + 1;
    local_b0 = CONCAT44(local_b0._4_4_,iVar8);
    if (local_b0._4_4_ < iVar8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_b8,uVar9 & 0xffffffff);
    }
    *(undefined8 *)(local_b8 + lVar16 * 8) = param_3[0x1c];
  }
  uVar9 = local_a0;
  if (*(short *)(param_1 + 0x12a) != 0) {
    lVar16 = (longlong)(int)local_a0;
    uVar2 = *(ushort *)(param_1 + 0x128);
    iVar8 = (int)local_a0 + 1;
    local_a0 = CONCAT44(local_a0._4_4_,iVar8);
    if (local_a0._4_4_ < iVar8) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_a8,uVar9 & 0xffffffff);
    }
    uVar9 = local_b0;
    *(uint *)(local_a8 + lVar16 * 4) = (uint)uVar2;
    lVar16 = (longlong)(int)local_b0;
    iVar8 = (int)local_b0 + 1;
    local_b0 = CONCAT44(local_b0._4_4_,iVar8);
    if (local_b0._4_4_ < iVar8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_b8,uVar9 & 0xffffffff);
    }
    *(undefined8 *)(local_b8 + lVar16 * 8) = param_3[0x1a];
  }
  if (*(short *)(param_1 + 0x11e) != 0) {
    uVar19 = param_3[0x1b];
    uVar2 = *(ushort *)(param_1 + 0x11c);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar17) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar17 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar17;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_144dcb360;
    puVar11[2] = local_98;
    *(uint *)(puVar11 + 3) = (uint)uVar2;
    puVar11[4] = uVar19;
  }
  uVar19 = local_98;
  if (*(short *)(param_1 + 0x126) != 0) {
    uVar4 = param_3[0x19];
    uVar2 = *(ushort *)(param_1 + 0x124);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar17) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar17 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar17;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_144dcb360;
    puVar11[2] = uVar19;
    *(uint *)(puVar11 + 3) = (uint)uVar2;
    puVar11[4] = uVar4;
  }
  uVar9 = local_a0;
  if (*(short *)(param_1 + 0x12e) != 0) {
    lVar16 = (longlong)(int)local_a0;
    uVar2 = *(ushort *)(param_1 + 300);
    iVar8 = (int)local_a0 + 1;
    local_a0 = CONCAT44(local_a0._4_4_,iVar8);
    if (local_a0._4_4_ < iVar8) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_a8,uVar9 & 0xffffffff);
    }
    uVar9 = local_b0;
    *(uint *)(local_a8 + lVar16 * 4) = (uint)uVar2;
    lVar16 = (longlong)(int)local_b0;
    iVar8 = (int)local_b0 + 1;
    local_b0 = CONCAT44(local_b0._4_4_,iVar8);
    if (local_b0._4_4_ < iVar8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_b8,uVar9 & 0xffffffff);
    }
    *(undefined8 *)(local_b8 + lVar16 * 8) = param_3[0x1d];
  }
  if (*(short *)(param_1 + 0x132) != 0) {
    uVar4 = param_3[0x1e];
    uVar2 = *(ushort *)(param_1 + 0x130);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar17) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar17 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar17;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_144d92090;
    puVar11[2] = uVar19;
    *(uint *)(puVar11 + 3) = (uint)uVar2;
    puVar11[4] = uVar4;
  }
  lVar16 = local_b8;
  uVar18 = 0;
  iVar8 = (int)local_b0;
  lVar22 = (longlong)(int)local_b0;
  puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  iVar14 = (int)local_b0 * 8;
  uVar9 = (longlong)iVar14 + (longlong)puVar17;
  if (*(ulonglong *)(param_2 + 0x38) < uVar9) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,iVar14 + 8);
    puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar9 = (longlong)iVar14 + (longlong)puVar17;
  }
  *(ulonglong *)(param_2 + 0x30) = uVar9;
  if (0 < iVar8) {
    puVar11 = puVar17;
    do {
      *puVar11 = *(undefined8 *)((lVar16 - (longlong)puVar17) + (longlong)puVar11);
      puVar11 = puVar11 + 1;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar13 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar11;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar13;
  *(undefined8 **)(param_2 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *(int *)(puVar13 + 2) = iVar8;
  *puVar13 = &PTR_LAB_144d91e60;
  puVar13[3] = puVar17;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar9 = uVar18;
  uVar23 = uVar18;
  if (0 < (int)local_a0) {
    do {
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      uVar19 = *(undefined8 *)(uVar9 + local_b8);
      uVar3 = *(undefined4 *)(uVar18 + local_a8);
      puVar17 = puVar11 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar17) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar17 = puVar11 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar17;
      uVar21 = (int)uVar23 + 1;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      uVar18 = uVar18 + 4;
      **(undefined8 **)(param_2 + 8) = puVar11;
      *(undefined8 **)(param_2 + 8) = puVar11 + 1;
      puVar11[1] = 0;
      *puVar11 = &PTR_LAB_144d91e40;
      puVar11[2] = local_98;
      *(undefined4 *)(puVar11 + 3) = uVar3;
      puVar11[4] = uVar19;
      uVar9 = uVar9 + 8;
      uVar23 = (ulonglong)uVar21;
    } while ((int)uVar21 < (int)local_a0);
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141bbfa00 SetParameters body=331 status=ok
// SIG undefined SetParameters(void)

void FScreenPS::SetParameters
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    *puVar5 = &PTR_LAB_143f59c80;
    puVar5[2] = uVar3;
    puVar5[4] = param_4;
  }
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59c70;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = param_3;
  }
  return;
}



// FUNCTION 141bbfb50 FUN_141bbfb50 body=2032 status=ok
// SIG undefined FUN_141bbfb50(void)

void FUN_141bbfb50(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_res18;
  longlong local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_141aa9590();
  FUN_141aa6800(param_1 + 0xc0,param_2,&local_res18,*(undefined4 *)(param_4 + 0x1a38),0x1f);
  lVar3 = FSceneRenderTargets::Get(param_2);
  if (*(short *)(param_1 + 0xd2) != 0) {
    if (param_5 == 0) {
      puVar6 = (undefined8 *)(DAT_146ac3d68 + 0x30);
    }
    else {
      puVar6 = (undefined8 *)(param_5 + 0x10);
    }
    uVar2 = *puVar6;
    uVar4 = FUN_141ac0bb0();
    if (*(short *)(param_1 + 0xd2) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xd0);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      *puVar7 = &PTR_LAB_143f59c80;
      puVar7[2] = param_3;
      puVar7[4] = uVar2;
    }
    if (*(short *)(param_1 + 0xd6) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xd4);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_143f59c70;
      puVar7[2] = param_3;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar4;
    }
  }
  uVar2 = *(undefined8 *)(DAT_1464c3350 + 0x10);
  uVar4 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xda) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar2;
  }
  if (*(short *)(param_1 + 0xde) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xdc);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  uVar2 = *(undefined8 *)(DAT_1464c3358 + 0x10);
  uVar4 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xe2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar2;
  }
  if (*(short *)(param_1 + 0xe6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  if (param_6 == 0) {
    puVar6 = (undefined8 *)(DAT_1464c3310 + 8);
  }
  else {
    puVar6 = (undefined8 *)(param_6 + 0x30);
  }
  uVar2 = *puVar6;
  uVar4 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xea) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe8);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar2;
  }
  if (*(short *)(param_1 + 0xee) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xec);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  if (*(short *)(param_1 + 0xf2) != 0) {
    if (((*(uint *)(local_res20 + 0x28cc) & 0x400) == 0) || (*(longlong *)(lVar3 + 0x80) == 0)) {
      puVar6 = (undefined8 *)(DAT_146ac3e08 + 0x30);
    }
    else {
      puVar6 = (undefined8 *)(*(longlong *)(lVar3 + 0x80) + 0x10);
    }
    uVar2 = *puVar6;
    uVar4 = FUN_1404a0e20();
    if (*(short *)(param_1 + 0xf2) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xf0);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_143f59c80;
      puVar7[2] = param_3;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar2;
    }
    if (*(short *)(param_1 + 0xf6) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xf4);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_143f59c70;
      puVar7[2] = param_3;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar4;
    }
  }
  if (*(short *)(param_1 + 0xfa) != 0) {
    FSceneRenderTargets::Get(param_2);
    lVar3 = GetSubsufaceProfileTexture_RT(param_2);
    if (lVar3 == 0) {
      lVar3 = DAT_1464c3318;
    }
    uVar2 = *(undefined8 *)(lVar3 + 0x10);
    uVar4 = FUN_141a156e0();
    if (*(short *)(param_1 + 0xfa) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xf8);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_143f59c80;
      puVar7[2] = param_3;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar2;
    }
    if (*(short *)(param_1 + 0xfe) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xfc);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_143f59c70;
      puVar7[2] = param_3;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar4;
    }
  }
  if ((*(short *)(param_1 + 0x102) != 0) && (*(char *)(local_res20 + 0x1201) != '\0')) {
    plVar5 = (longlong *)GetEyeAdaptation(local_res20);
    lVar3 = *plVar5;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
      param_3 = local_res18;
    }
    local_res20 = lVar3;
    if (*(short *)(param_1 + 0x102) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x100);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_143f59c80;
      puVar7[2] = param_3;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = lVar3;
    }
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  }
  return;
}



// FUNCTION 141bc0340 FUN_141bc0340 body=581 status=ok
// SIG undefined FUN_141bc0340(void)

void FUN_141bc0340(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 local_f8;
  undefined4 local_f0;
  float local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  uVar3 = 0;
  FUN_141bbfb50(param_1,param_2,uVar2,param_3,0,0);
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar5 = uVar3;
    do {
      iVar4 = (int)uVar5;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar3 * 8) == &DAT_146a286e0) {
        if (iVar4 != -1) {
          puVar6 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 8);
          *(undefined4 *)puVar6 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141bc0403;
        }
        break;
      }
      uVar5 = (ulonglong)(iVar4 + 1);
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a253f8) {
    _Init_thread_header(&DAT_146a253f8);
    if (DAT_146a253f8 == -1) {
      DAT_146a253f0._0_4_ = 0;
      DAT_146a253f0._4_2_ = 0;
      DAT_146a253f0._6_1_ = 0;
      _Init_thread_footer(&DAT_146a253f8);
    }
  }
  puVar6 = &DAT_146a253f0;
LAB_141bc0403:
  local_ec = *(float *)((longlong)param_4 + 0xc);
  if (local_ec <= 0.0001) {
    local_ec = 0.0001;
  }
  local_f8 = *param_5;
  local_f0 = *(undefined4 *)(param_5 + 1);
  local_ec = 1.0 / local_ec;
  local_e0 = *(undefined4 *)(param_4 + 1);
  local_d0 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_78 = 0;
  local_e8 = *param_4;
  local_dc = *(undefined4 *)(param_4 + 2);
  local_d8 = 0x3f800000;
  local_c8 = 0x3f800000;
  local_b8 = 0x3f800000c0000000;
  uStack_b0 = 0x3f800000;
  local_88 = 0;
  uStack_80 = 0;
  local_28 = *(undefined8 *)(DAT_146ac3d68 + 0x30);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_6c = (uint)*(byte *)((longlong)param_4 + 0x19);
  FUN_141b87500(param_2,uVar2,puVar6,&local_f8);
  return;
}



// FUNCTION 141bc0590 SetRsmUniformBuffer body=68 status=ok
// SIG undefined SetRsmUniformBuffer(void)

void FLightPropagationVolume::SetRsmUniformBuffer(longlong param_1)

{
  if (*(char *)(param_1 + 0x208) == '\0') {
    (**(code **)(*(longlong *)(param_1 + 0x1e0) + 0x28))(param_1 + 0x1e0);
  }
  TUniformBuffer<FLpvWriteUniformBufferParameters>::SetContents
            (param_1 + 0x1e0,*(undefined8 *)(param_1 + 0xa8));
  return;
}



// FUNCTION 141bc0600 FUN_141bc0600 body=309 status=ok
// SIG undefined FUN_141bc0600(void)

void FUN_141bc0600(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_1 + 0x4e0) == 0) {
    iVar1 = *(int *)(param_2 + 0x1a38);
    if (((*(uint *)(param_2 + 0xf60) & 0xfffffffc) == 0) && (*(uint *)(param_2 + 0xf60) != 2)) {
      if (((2 < iVar1) && (*(int *)(DAT_146a27678 + 4) != 0)) &&
         (cVar3 = FUN_141ba1700((&DAT_1464c9c48)[iVar1]), cVar3 != '\0')) {
        lVar4 = operator_new(0x230);
        if (lVar4 == 0) {
          TRefCountPtr<FLightPropagationVolume>::operator=(param_1 + 0x4e0,0);
          return;
        }
        uVar5 = FUN_141b8ace0(lVar4);
        TRefCountPtr<FLightPropagationVolume>::operator=(param_1 + 0x4e0,uVar5);
        return;
      }
    }
    else if ((*(int *)(*(longlong *)*param_3 + 0xf60) == 1) &&
            ((plVar2 = *(longlong **)(*(longlong *)*param_3 + 0x18), plVar2 != (longlong *)0x0 &&
             (lVar4 = (**(code **)(*plVar2 + 8))(), lVar4 != 0)))) {
      if (iVar1 < 3) {
        uVar5 = 0;
      }
      else if (*(char *)(lVar4 + 0x4e8) == '\0') {
        uVar5 = *(undefined8 *)(lVar4 + 0x4e0);
      }
      else {
        uVar5 = 0;
      }
      TRefCountPtr<FLightPropagationVolume>::operator=(param_1 + 0x4e0,uVar5);
      if (*(longlong *)(param_1 + 0x4e0) != 0) {
        *(undefined1 *)(param_1 + 0x4e8) = 1;
      }
    }
  }
  return;
}



// FUNCTION 141bc0740 FUN_141bc0740 body=243 status=ok
// SIG undefined FUN_141bc0740(void)

void FUN_141bc0740(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (*(char *)(param_2 + 0x1204) == '\0') {
    uVar5 = FUN_1404a0ce0();
  }
  else {
    uVar5 = FUN_141b9dfc0();
  }
  *param_3 = uVar5;
  uVar5 = FUN_141abf3f0();
  param_3[1] = uVar5;
  *(undefined4 *)(param_3 + 5) = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x1aac);
  uVar2 = *(undefined4 *)(param_2 + 0x1aa8);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *(undefined4 *)(param_2 + 0x1aa4);
  uVar4 = *(undefined4 *)(param_2 + 0x1aa0);
  puVar6 = puVar7 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar6;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar7;
  *(undefined8 **)(param_1 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar2;
  *(undefined4 *)(puVar7 + 4) = uVar1;
  *puVar7 = &PTR_LAB_143f59420;
  *(undefined4 *)(puVar7 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar7 + 0x14) = uVar3;
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 0x3f800000;
  return;
}



// FUNCTION 141bc0840 FUN_141bc0840 body=399 status=ok
// SIG undefined FUN_141bc0840(void)

void FUN_141bc0840(longlong param_1,undefined8 *param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar4 = FUN_14274f1e0();
  if (iVar4 == 4) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))();
    if (iVar4 == 5) goto LAB_141bc087c;
    bVar1 = true;
  }
  else {
LAB_141bc087c:
    bVar1 = false;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a49638) {
    _Init_thread_header(&DAT_146a49638);
    if (DAT_146a49638 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.MonoscopicFarField");
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_146a49630 = lVar7;
      _Init_thread_footer(&DAT_146a49638);
    }
  }
  if ((DAT_146a49630 == 0) || (*(int *)(DAT_146a49630 + 4) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar1) {
    uVar5 = FUN_1404a0ce0();
  }
  else {
    iVar4 = *(int *)(param_1 + 0x58);
    if (iVar4 == 2) {
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x68))();
      if (cVar3 == '\0') {
        if (bVar2) {
          uVar5 = FUN_141b9e100();
        }
        else {
          uVar5 = FUN_141b9d840();
        }
      }
      else {
        uVar5 = FUN_141b9dc00();
      }
    }
    else if (iVar4 == 3) {
      uVar5 = FUN_141b9d5c0();
    }
    else if (iVar4 == 4) {
      uVar5 = FUN_141abdd70();
    }
    else {
      if (iVar4 != 5) goto LAB_141bc092d;
      uVar5 = FUN_141abe3b0();
    }
  }
  *param_2 = uVar5;
LAB_141bc092d:
  if (((*(byte *)(param_1 + 0x5c) & 1) != 0) && ((*(uint *)(param_3 + 0x28cc) & 0x4000) != 0)) {
    uVar5 = FUN_141b9e380();
    param_2[1] = uVar5;
    *(undefined4 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 141bc09d0 FUN_141bc09d0 body=691 status=ok
// SIG undefined FUN_141bc09d0(void)

void FUN_141bc09d0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0x70) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146ac32c8 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146ac32c8 != 0x1000)) ||
     (uVar3 = DAT_146ac32d0, iVar4 != 0)) {
    uVar3 = DAT_146ac32cc | DAT_146ac32c8;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_141bc0bd7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_141bc0bd7:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 141bc0cb0 FUN_141bc0cb0 body=473 status=ok
// SIG undefined FUN_141bc0cb0(void)

ulonglong FUN_141bc0cb0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar8 < DAT_146a260c8) {
    _Init_thread_header(&DAT_146a260c8);
    if (DAT_146a260c8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_146a260c0 = lVar7;
      _Init_thread_footer(&DAT_146a260c8);
    }
  }
  if (*piVar8 < DAT_146a260e0) {
    _Init_thread_header(&DAT_146a260e0);
    if (DAT_146a260e0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations")
      ;
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_146a260d0 = lVar7;
      _Init_thread_footer(&DAT_146a260e0);
    }
  }
  lVar7 = DAT_146a260d0;
  lVar9 = 4;
  if (DAT_146a260d0 == 0) {
LAB_141bc0d4c:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      if (DVar3 == DAT_1468c21c0) goto LAB_141bc0d3f;
      lVar4 = 4;
    }
    else {
LAB_141bc0d3f:
      lVar4 = 0;
    }
    if (*(int *)(lVar4 + lVar7) == 0) goto LAB_141bc0d4c;
    bVar1 = true;
  }
  lVar7 = DAT_146a260c0;
  if (DAT_146a260c0 != 0) {
    uVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((char)uVar5 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      uVar5 = CONCAT71((int7)(CONCAT44(extraout_var,DVar3) >> 8),DVar3 == DAT_1468c21c0);
      if (DVar3 == DAT_1468c21c0) goto LAB_141bc0d86;
    }
    else {
LAB_141bc0d86:
      lVar9 = 0;
    }
    if ((*(int *)(lVar9 + lVar7) == 0) && (!bVar1)) goto LAB_141bc0d9f;
  }
  uVar5 = (**(code **)(*param_2 + 0x1f8))(param_2);
LAB_141bc0d9f:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 141bc0e90 FUN_141bc0e90 body=366 status=ok
// SIG undefined FUN_141bc0e90(void)

ulonglong FUN_141bc0e90(void)

{
  uint uVar1;
  DWORD DVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint *puVar7;
  
  lVar6 = 0;
  puVar7 = (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if (((int)*puVar7 < DAT_146a26070) && (_Init_thread_header(&DAT_146a26070), DAT_146a26070 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a26068 = lVar4;
    _Init_thread_footer(&DAT_146a26070);
  }
  uVar1 = *puVar7;
  uVar3 = (ulonglong)uVar1;
  if (((int)uVar1 < DAT_146a2608c) &&
     (uVar3 = _Init_thread_header(&DAT_146a2608c), DAT_146a2608c == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a26080 = lVar6;
    uVar3 = _Init_thread_footer(&DAT_146a2608c);
  }
  if (((DAT_146a26080 != 0) && (uVar3 = FUN_1415ad720(&DAT_1468e2448), (char)uVar3 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    uVar3 = CONCAT44(extraout_var,DVar2);
  }
  if (((DAT_146a26068 != 0) && (uVar3 = FUN_1415ad720(&DAT_1468e2448), (char)uVar3 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    uVar3 = CONCAT44(extraout_var_00,DVar2);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141bc1000 FUN_141bc1000 body=473 status=ok
// SIG undefined FUN_141bc1000(void)

ulonglong FUN_141bc1000(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar8 < DAT_146a25ee0) {
    _Init_thread_header(&DAT_146a25ee0);
    if (DAT_146a25ee0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_146a25ed8 = lVar7;
      _Init_thread_footer(&DAT_146a25ee0);
    }
  }
  if (*piVar8 < DAT_146a25ef0) {
    _Init_thread_header(&DAT_146a25ef0);
    if (DAT_146a25ef0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations")
      ;
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_146a25ee8 = lVar7;
      _Init_thread_footer(&DAT_146a25ef0);
    }
  }
  lVar7 = DAT_146a25ee8;
  lVar9 = 4;
  if (DAT_146a25ee8 == 0) {
LAB_141bc109c:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      if (DVar3 == DAT_1468c21c0) goto LAB_141bc108f;
      lVar4 = 4;
    }
    else {
LAB_141bc108f:
      lVar4 = 0;
    }
    if (*(int *)(lVar4 + lVar7) == 0) goto LAB_141bc109c;
    bVar1 = true;
  }
  lVar7 = DAT_146a25ed8;
  if (DAT_146a25ed8 != 0) {
    uVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((char)uVar5 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      uVar5 = CONCAT71((int7)(CONCAT44(extraout_var,DVar3) >> 8),DVar3 == DAT_1468c21c0);
      if (DVar3 == DAT_1468c21c0) goto LAB_141bc10d6;
    }
    else {
LAB_141bc10d6:
      lVar9 = 0;
    }
    if ((*(int *)(lVar9 + lVar7) == 0) && (!bVar1)) goto LAB_141bc10ef;
  }
  uVar5 = (**(code **)(*param_2 + 0x1f8))(param_2);
LAB_141bc10ef:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 141bc11e0 FUN_141bc11e0 body=366 status=ok
// SIG undefined FUN_141bc11e0(void)

ulonglong FUN_141bc11e0(void)

{
  uint uVar1;
  DWORD DVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint *puVar7;
  
  lVar6 = 0;
  puVar7 = (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if (((int)*puVar7 < DAT_146a25e88) && (_Init_thread_header(&DAT_146a25e88), DAT_146a25e88 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a25e80 = lVar4;
    _Init_thread_footer(&DAT_146a25e88);
  }
  uVar1 = *puVar7;
  uVar3 = (ulonglong)uVar1;
  if (((int)uVar1 < DAT_146a25ea0) &&
     (uVar3 = _Init_thread_header(&DAT_146a25ea0), DAT_146a25ea0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a25e90 = lVar6;
    uVar3 = _Init_thread_footer(&DAT_146a25ea0);
  }
  if (((DAT_146a25e90 != 0) && (uVar3 = FUN_1415ad720(&DAT_1468e2448), (char)uVar3 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    uVar3 = CONCAT44(extraout_var,DVar2);
  }
  if (((DAT_146a25e80 != 0) && (uVar3 = FUN_1415ad720(&DAT_1468e2448), (char)uVar3 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    uVar3 = CONCAT44(extraout_var_00,DVar2);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141bc1350 FUN_141bc1350 body=473 status=ok
// SIG undefined FUN_141bc1350(void)

ulonglong FUN_141bc1350(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar8 < DAT_146a261b0) {
    _Init_thread_header(&DAT_146a261b0);
    if (DAT_146a261b0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_146a261a8 = lVar7;
      _Init_thread_footer(&DAT_146a261b0);
    }
  }
  if (*piVar8 < DAT_146a261d0) {
    _Init_thread_header(&DAT_146a261d0);
    if (DAT_146a261d0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations")
      ;
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_146a261c8 = lVar7;
      _Init_thread_footer(&DAT_146a261d0);
    }
  }
  lVar7 = DAT_146a261c8;
  lVar9 = 4;
  if (DAT_146a261c8 == 0) {
LAB_141bc13ec:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      if (DVar3 == DAT_1468c21c0) goto LAB_141bc13df;
      lVar4 = 4;
    }
    else {
LAB_141bc13df:
      lVar4 = 0;
    }
    if (*(int *)(lVar4 + lVar7) == 0) goto LAB_141bc13ec;
    bVar1 = true;
  }
  lVar7 = DAT_146a261a8;
  if (DAT_146a261a8 != 0) {
    uVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((char)uVar5 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      uVar5 = CONCAT71((int7)(CONCAT44(extraout_var,DVar3) >> 8),DVar3 == DAT_1468c21c0);
      if (DVar3 == DAT_1468c21c0) goto LAB_141bc1426;
    }
    else {
LAB_141bc1426:
      lVar9 = 0;
    }
    if ((*(int *)(lVar9 + lVar7) == 0) && (!bVar1)) goto LAB_141bc143f;
  }
  uVar5 = (**(code **)(*param_2 + 0x1f8))(param_2);
LAB_141bc143f:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 141bc1530 FUN_141bc1530 body=366 status=ok
// SIG undefined FUN_141bc1530(void)

ulonglong FUN_141bc1530(void)

{
  uint uVar1;
  DWORD DVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint *puVar7;
  
  lVar6 = 0;
  puVar7 = (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if (((int)*puVar7 < DAT_146a26168) && (_Init_thread_header(&DAT_146a26168), DAT_146a26168 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a26158 = lVar4;
    _Init_thread_footer(&DAT_146a26168);
  }
  uVar1 = *puVar7;
  uVar3 = (ulonglong)uVar1;
  if (((int)uVar1 < DAT_146a26180) &&
     (uVar3 = _Init_thread_header(&DAT_146a26180), DAT_146a26180 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a26170 = lVar6;
    uVar3 = _Init_thread_footer(&DAT_146a26180);
  }
  if (((DAT_146a26170 != 0) && (uVar3 = FUN_1415ad720(&DAT_1468e2448), (char)uVar3 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    uVar3 = CONCAT44(extraout_var,DVar2);
  }
  if (((DAT_146a26158 != 0) && (uVar3 = FUN_1415ad720(&DAT_1468e2448), (char)uVar3 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    uVar3 = CONCAT44(extraout_var_00,DVar2);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141bc16a0 FUN_141bc16a0 body=473 status=ok
// SIG undefined FUN_141bc16a0(void)

ulonglong FUN_141bc16a0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar8 < DAT_146a25fd8) {
    _Init_thread_header(&DAT_146a25fd8);
    if (DAT_146a25fd8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_146a25fd0 = lVar7;
      _Init_thread_footer(&DAT_146a25fd8);
    }
  }
  if (*piVar8 < DAT_146a25ff0) {
    _Init_thread_header(&DAT_146a25ff0);
    if (DAT_146a25ff0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations")
      ;
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_146a25fe0 = lVar7;
      _Init_thread_footer(&DAT_146a25ff0);
    }
  }
  lVar7 = DAT_146a25fe0;
  lVar9 = 4;
  if (DAT_146a25fe0 == 0) {
LAB_141bc173c:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      if (DVar3 == DAT_1468c21c0) goto LAB_141bc172f;
      lVar4 = 4;
    }
    else {
LAB_141bc172f:
      lVar4 = 0;
    }
    if (*(int *)(lVar4 + lVar7) == 0) goto LAB_141bc173c;
    bVar1 = true;
  }
  lVar7 = DAT_146a25fd0;
  if (DAT_146a25fd0 != 0) {
    uVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((char)uVar5 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      uVar5 = CONCAT71((int7)(CONCAT44(extraout_var,DVar3) >> 8),DVar3 == DAT_1468c21c0);
      if (DVar3 == DAT_1468c21c0) goto LAB_141bc1776;
    }
    else {
LAB_141bc1776:
      lVar9 = 0;
    }
    if ((*(int *)(lVar9 + lVar7) == 0) && (!bVar1)) goto LAB_141bc178f;
  }
  uVar5 = (**(code **)(*param_2 + 0x1f8))(param_2);
LAB_141bc178f:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 141bc1880 FUN_141bc1880 body=366 status=ok
// SIG undefined FUN_141bc1880(void)

ulonglong FUN_141bc1880(void)

{
  uint uVar1;
  DWORD DVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint *puVar7;
  
  lVar6 = 0;
  puVar7 = (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if (((int)*puVar7 < DAT_146a25f80) && (_Init_thread_header(&DAT_146a25f80), DAT_146a25f80 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a25f78 = lVar4;
    _Init_thread_footer(&DAT_146a25f80);
  }
  uVar1 = *puVar7;
  uVar3 = (ulonglong)uVar1;
  if (((int)uVar1 < DAT_146a25f98) &&
     (uVar3 = _Init_thread_header(&DAT_146a25f98), DAT_146a25f98 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a25f88 = lVar6;
    uVar3 = _Init_thread_footer(&DAT_146a25f98);
  }
  if (((DAT_146a25f88 != 0) && (uVar3 = FUN_1415ad720(&DAT_1468e2448), (char)uVar3 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    uVar3 = CONCAT44(extraout_var,DVar2);
  }
  if (((DAT_146a25f78 != 0) && (uVar3 = FUN_1415ad720(&DAT_1468e2448), (char)uVar3 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    uVar3 = CONCAT44(extraout_var_00,DVar2);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141bc19f0 FUN_141bc19f0 body=473 status=ok
// SIG undefined FUN_141bc19f0(void)

ulonglong FUN_141bc19f0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar8 < DAT_146a25de8) {
    _Init_thread_header(&DAT_146a25de8);
    if (DAT_146a25de8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_146a25de0 = lVar7;
      _Init_thread_footer(&DAT_146a25de8);
    }
  }
  if (*piVar8 < DAT_146a25df8) {
    _Init_thread_header(&DAT_146a25df8);
    if (DAT_146a25df8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations")
      ;
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_146a25df0 = lVar7;
      _Init_thread_footer(&DAT_146a25df8);
    }
  }
  lVar7 = DAT_146a25df0;
  lVar9 = 4;
  if (DAT_146a25df0 == 0) {
LAB_141bc1a8c:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      if (DVar3 == DAT_1468c21c0) goto LAB_141bc1a7f;
      lVar4 = 4;
    }
    else {
LAB_141bc1a7f:
      lVar4 = 0;
    }
    if (*(int *)(lVar4 + lVar7) == 0) goto LAB_141bc1a8c;
    bVar1 = true;
  }
  lVar7 = DAT_146a25de0;
  if (DAT_146a25de0 != 0) {
    uVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((char)uVar5 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      uVar5 = CONCAT71((int7)(CONCAT44(extraout_var,DVar3) >> 8),DVar3 == DAT_1468c21c0);
      if (DVar3 == DAT_1468c21c0) goto LAB_141bc1ac6;
    }
    else {
LAB_141bc1ac6:
      lVar9 = 0;
    }
    if ((*(int *)(lVar9 + lVar7) == 0) && (!bVar1)) goto LAB_141bc1adf;
  }
  uVar5 = (**(code **)(*param_2 + 0x1f8))(param_2);
LAB_141bc1adf:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 141bc1bd0 FUN_141bc1bd0 body=366 status=ok
// SIG undefined FUN_141bc1bd0(void)

ulonglong FUN_141bc1bd0(void)

{
  uint uVar1;
  DWORD DVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint *puVar7;
  
  lVar6 = 0;
  puVar7 = (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if (((int)*puVar7 < DAT_146a25d88) && (_Init_thread_header(&DAT_146a25d88), DAT_146a25d88 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a25d80 = lVar4;
    _Init_thread_footer(&DAT_146a25d88);
  }
  uVar1 = *puVar7;
  uVar3 = (ulonglong)uVar1;
  if (((int)uVar1 < DAT_146a25d98) &&
     (uVar3 = _Init_thread_header(&DAT_146a25d98), DAT_146a25d98 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a25d90 = lVar6;
    uVar3 = _Init_thread_footer(&DAT_146a25d98);
  }
  if (((DAT_146a25d90 != 0) && (uVar3 = FUN_1415ad720(&DAT_1468e2448), (char)uVar3 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    uVar3 = CONCAT44(extraout_var,DVar2);
  }
  if (((DAT_146a25d80 != 0) && (uVar3 = FUN_1415ad720(&DAT_1468e2448), (char)uVar3 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    uVar3 = CONCAT44(extraout_var_00,DVar2);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141bc1d40 FUN_141bc1d40 body=541 status=ok
// SIG undefined FUN_141bc1d40(void)

undefined8 FUN_141bc1d40(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26648) && (_Init_thread_header(&DAT_146a26648), DAT_146a26648 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26640 = lVar10;
    _Init_thread_footer(&DAT_146a26648);
  }
  if ((*piVar11 < DAT_146a26658) && (_Init_thread_header(&DAT_146a26658), DAT_146a26658 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26650 = lVar10;
    _Init_thread_footer(&DAT_146a26658);
  }
  lVar10 = DAT_146a26640;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26650;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc1f60 FUN_141bc1f60 body=541 status=ok
// SIG undefined FUN_141bc1f60(void)

undefined8 FUN_141bc1f60(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26548) && (_Init_thread_header(&DAT_146a26548), DAT_146a26548 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26540 = lVar10;
    _Init_thread_footer(&DAT_146a26548);
  }
  if ((*piVar11 < DAT_146a26558) && (_Init_thread_header(&DAT_146a26558), DAT_146a26558 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26550 = lVar10;
    _Init_thread_footer(&DAT_146a26558);
  }
  lVar10 = DAT_146a26540;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26550;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc2180 FUN_141bc2180 body=541 status=ok
// SIG undefined FUN_141bc2180(void)

undefined8 FUN_141bc2180(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26448) && (_Init_thread_header(&DAT_146a26448), DAT_146a26448 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26440 = lVar10;
    _Init_thread_footer(&DAT_146a26448);
  }
  if ((*piVar11 < DAT_146a26458) && (_Init_thread_header(&DAT_146a26458), DAT_146a26458 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26450 = lVar10;
    _Init_thread_footer(&DAT_146a26458);
  }
  lVar10 = DAT_146a26440;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26450;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc23a0 FUN_141bc23a0 body=541 status=ok
// SIG undefined FUN_141bc23a0(void)

undefined8 FUN_141bc23a0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26368) && (_Init_thread_header(&DAT_146a26368), DAT_146a26368 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26358 = lVar10;
    _Init_thread_footer(&DAT_146a26368);
  }
  if ((*piVar11 < DAT_146a26378) && (_Init_thread_header(&DAT_146a26378), DAT_146a26378 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26370 = lVar10;
    _Init_thread_footer(&DAT_146a26378);
  }
  lVar10 = DAT_146a26358;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26370;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc25c0 FUN_141bc25c0 body=461 status=ok
// SIG undefined FUN_141bc25c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bc25c0(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a26748) && (_Init_thread_header(&DAT_146a26748), DAT_146a26748 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a26740 = uVar3;
    _Init_thread_footer(&DAT_146a26748);
  }
  if ((*piVar6 < DAT_146a26758) && (_Init_thread_header(&DAT_146a26758), DAT_146a26758 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a26750 = uVar5;
    _Init_thread_footer(&DAT_146a26758);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141ae17b0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 == '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141bc2790 FUN_141bc2790 body=553 status=ok
// SIG undefined FUN_141bc2790(void)

undefined8 FUN_141bc2790(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26288) && (_Init_thread_header(&DAT_146a26288), DAT_146a26288 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26278 = lVar10;
    _Init_thread_footer(&DAT_146a26288);
  }
  if ((*piVar11 < DAT_146a26298) && (_Init_thread_header(&DAT_146a26298), DAT_146a26298 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26290 = lVar10;
    _Init_thread_footer(&DAT_146a26298);
  }
  lVar10 = DAT_146a26278;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26290;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc29c0 FUN_141bc29c0 body=525 status=ok
// SIG undefined FUN_141bc29c0(void)

undefined8 FUN_141bc29c0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a266c8) && (_Init_thread_header(&DAT_146a266c8), DAT_146a266c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a266c0 = lVar10;
    _Init_thread_footer(&DAT_146a266c8);
  }
  if ((*piVar11 < DAT_146a266d8) && (_Init_thread_header(&DAT_146a266d8), DAT_146a266d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a266d0 = lVar10;
    _Init_thread_footer(&DAT_146a266d8);
  }
  lVar10 = DAT_146a266c0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a266d0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc2bd0 FUN_141bc2bd0 body=525 status=ok
// SIG undefined FUN_141bc2bd0(void)

undefined8 FUN_141bc2bd0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a265c8) && (_Init_thread_header(&DAT_146a265c8), DAT_146a265c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a265c0 = lVar10;
    _Init_thread_footer(&DAT_146a265c8);
  }
  if ((*piVar11 < DAT_146a265d8) && (_Init_thread_header(&DAT_146a265d8), DAT_146a265d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a265d0 = lVar10;
    _Init_thread_footer(&DAT_146a265d8);
  }
  lVar10 = DAT_146a265c0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a265d0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc2de0 FUN_141bc2de0 body=525 status=ok
// SIG undefined FUN_141bc2de0(void)

undefined8 FUN_141bc2de0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a264c8) && (_Init_thread_header(&DAT_146a264c8), DAT_146a264c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a264c0 = lVar10;
    _Init_thread_footer(&DAT_146a264c8);
  }
  if ((*piVar11 < DAT_146a264d8) && (_Init_thread_header(&DAT_146a264d8), DAT_146a264d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a264d0 = lVar10;
    _Init_thread_footer(&DAT_146a264d8);
  }
  lVar10 = DAT_146a264c0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a264d0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc2ff0 FUN_141bc2ff0 body=525 status=ok
// SIG undefined FUN_141bc2ff0(void)

undefined8 FUN_141bc2ff0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a263c8) && (_Init_thread_header(&DAT_146a263c8), DAT_146a263c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a263c0 = lVar10;
    _Init_thread_footer(&DAT_146a263c8);
  }
  if ((*piVar11 < DAT_146a263d8) && (_Init_thread_header(&DAT_146a263d8), DAT_146a263d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a263d0 = lVar10;
    _Init_thread_footer(&DAT_146a263d8);
  }
  lVar10 = DAT_146a263c0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a263d0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc3200 FUN_141bc3200 body=452 status=ok
// SIG undefined FUN_141bc3200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bc3200(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a267c8) && (_Init_thread_header(&DAT_146a267c8), DAT_146a267c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a267c0 = uVar2;
    _Init_thread_footer(&DAT_146a267c8);
  }
  if ((*piVar5 < DAT_146a267d8) && (_Init_thread_header(&DAT_146a267d8), DAT_146a267d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a267d0 = uVar4;
    _Init_thread_footer(&DAT_146a267d8);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141ae17b0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141bc33d0 FUN_141bc33d0 body=546 status=ok
// SIG undefined FUN_141bc33d0(void)

undefined8 FUN_141bc33d0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a262f8) && (_Init_thread_header(&DAT_146a262f8), DAT_146a262f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a262e8 = lVar10;
    _Init_thread_footer(&DAT_146a262f8);
  }
  if ((*piVar11 < DAT_146a26308) && (_Init_thread_header(&DAT_146a26308), DAT_146a26308 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26300 = lVar10;
    _Init_thread_footer(&DAT_146a26308);
  }
  lVar10 = DAT_146a262e8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26300;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc3600 FUN_141bc3600 body=541 status=ok
// SIG undefined FUN_141bc3600(void)

undefined8 FUN_141bc3600(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26688) && (_Init_thread_header(&DAT_146a26688), DAT_146a26688 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26680 = lVar10;
    _Init_thread_footer(&DAT_146a26688);
  }
  if ((*piVar11 < DAT_146a26698) && (_Init_thread_header(&DAT_146a26698), DAT_146a26698 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26690 = lVar10;
    _Init_thread_footer(&DAT_146a26698);
  }
  lVar10 = DAT_146a26680;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26690;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc3820 FUN_141bc3820 body=541 status=ok
// SIG undefined FUN_141bc3820(void)

undefined8 FUN_141bc3820(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26588) && (_Init_thread_header(&DAT_146a26588), DAT_146a26588 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26580 = lVar10;
    _Init_thread_footer(&DAT_146a26588);
  }
  if ((*piVar11 < DAT_146a26598) && (_Init_thread_header(&DAT_146a26598), DAT_146a26598 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26590 = lVar10;
    _Init_thread_footer(&DAT_146a26598);
  }
  lVar10 = DAT_146a26580;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26590;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc3a40 FUN_141bc3a40 body=541 status=ok
// SIG undefined FUN_141bc3a40(void)

undefined8 FUN_141bc3a40(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26488) && (_Init_thread_header(&DAT_146a26488), DAT_146a26488 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26480 = lVar10;
    _Init_thread_footer(&DAT_146a26488);
  }
  if ((*piVar11 < DAT_146a26498) && (_Init_thread_header(&DAT_146a26498), DAT_146a26498 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26490 = lVar10;
    _Init_thread_footer(&DAT_146a26498);
  }
  lVar10 = DAT_146a26480;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26490;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc3c60 FUN_141bc3c60 body=541 status=ok
// SIG undefined FUN_141bc3c60(void)

undefined8 FUN_141bc3c60(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26388) && (_Init_thread_header(&DAT_146a26388), DAT_146a26388 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26380 = lVar10;
    _Init_thread_footer(&DAT_146a26388);
  }
  if ((*piVar11 < DAT_146a26398) && (_Init_thread_header(&DAT_146a26398), DAT_146a26398 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26390 = lVar10;
    _Init_thread_footer(&DAT_146a26398);
  }
  lVar10 = DAT_146a26380;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26390;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc3e80 FUN_141bc3e80 body=461 status=ok
// SIG undefined FUN_141bc3e80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bc3e80(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a26788) && (_Init_thread_header(&DAT_146a26788), DAT_146a26788 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a26780 = uVar3;
    _Init_thread_footer(&DAT_146a26788);
  }
  if ((*piVar6 < DAT_146a26798) && (_Init_thread_header(&DAT_146a26798), DAT_146a26798 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a26790 = uVar5;
    _Init_thread_footer(&DAT_146a26798);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141ae17b0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 != '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141bc4050 FUN_141bc4050 body=553 status=ok
// SIG undefined FUN_141bc4050(void)

undefined8 FUN_141bc4050(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a262c0) && (_Init_thread_header(&DAT_146a262c0), DAT_146a262c0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a262b0 = lVar10;
    _Init_thread_footer(&DAT_146a262c0);
  }
  if ((*piVar11 < DAT_146a262d0) && (_Init_thread_header(&DAT_146a262d0), DAT_146a262d0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a262c8 = lVar10;
    _Init_thread_footer(&DAT_146a262d0);
  }
  lVar10 = DAT_146a262b0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a262c8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc4280 FUN_141bc4280 body=525 status=ok
// SIG undefined FUN_141bc4280(void)

undefined8 FUN_141bc4280(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26708) && (_Init_thread_header(&DAT_146a26708), DAT_146a26708 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26700 = lVar10;
    _Init_thread_footer(&DAT_146a26708);
  }
  if ((*piVar11 < DAT_146a26718) && (_Init_thread_header(&DAT_146a26718), DAT_146a26718 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26710 = lVar10;
    _Init_thread_footer(&DAT_146a26718);
  }
  lVar10 = DAT_146a26700;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26710;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc4490 FUN_141bc4490 body=525 status=ok
// SIG undefined FUN_141bc4490(void)

undefined8 FUN_141bc4490(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26608) && (_Init_thread_header(&DAT_146a26608), DAT_146a26608 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26600 = lVar10;
    _Init_thread_footer(&DAT_146a26608);
  }
  if ((*piVar11 < DAT_146a26618) && (_Init_thread_header(&DAT_146a26618), DAT_146a26618 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26610 = lVar10;
    _Init_thread_footer(&DAT_146a26618);
  }
  lVar10 = DAT_146a26600;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26610;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc46a0 FUN_141bc46a0 body=525 status=ok
// SIG undefined FUN_141bc46a0(void)

undefined8 FUN_141bc46a0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26508) && (_Init_thread_header(&DAT_146a26508), DAT_146a26508 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26500 = lVar10;
    _Init_thread_footer(&DAT_146a26508);
  }
  if ((*piVar11 < DAT_146a26518) && (_Init_thread_header(&DAT_146a26518), DAT_146a26518 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26510 = lVar10;
    _Init_thread_footer(&DAT_146a26518);
  }
  lVar10 = DAT_146a26500;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26510;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc48b0 FUN_141bc48b0 body=525 status=ok
// SIG undefined FUN_141bc48b0(void)

undefined8 FUN_141bc48b0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26408) && (_Init_thread_header(&DAT_146a26408), DAT_146a26408 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26400 = lVar10;
    _Init_thread_footer(&DAT_146a26408);
  }
  if ((*piVar11 < DAT_146a26418) && (_Init_thread_header(&DAT_146a26418), DAT_146a26418 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26410 = lVar10;
    _Init_thread_footer(&DAT_146a26418);
  }
  lVar10 = DAT_146a26400;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26410;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc4ac0 FUN_141bc4ac0 body=452 status=ok
// SIG undefined FUN_141bc4ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bc4ac0(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a26808) && (_Init_thread_header(&DAT_146a26808), DAT_146a26808 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26800 = uVar2;
    _Init_thread_footer(&DAT_146a26808);
  }
  if ((*piVar5 < DAT_146a26818) && (_Init_thread_header(&DAT_146a26818), DAT_146a26818 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26810 = uVar4;
    _Init_thread_footer(&DAT_146a26818);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141ae17b0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 != '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141bc4c90 FUN_141bc4c90 body=546 status=ok
// SIG undefined FUN_141bc4c90(void)

undefined8 FUN_141bc4c90(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26330) && (_Init_thread_header(&DAT_146a26330), DAT_146a26330 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26320 = lVar10;
    _Init_thread_footer(&DAT_146a26330);
  }
  if ((*piVar11 < DAT_146a26340) && (_Init_thread_header(&DAT_146a26340), DAT_146a26340 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26338 = lVar10;
    _Init_thread_footer(&DAT_146a26340);
  }
  lVar10 = DAT_146a26320;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26338;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141ae17b0(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc4ec0 FUN_141bc4ec0 body=525 status=ok
// SIG undefined FUN_141bc4ec0(void)

undefined8 FUN_141bc4ec0(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26c20) && (_Init_thread_header(&DAT_146a26c20), DAT_146a26c20 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26c18 = lVar10;
    _Init_thread_footer(&DAT_146a26c20);
  }
  if ((*piVar11 < DAT_146a26c30) && (_Init_thread_header(&DAT_146a26c30), DAT_146a26c30 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26c28 = lVar10;
    _Init_thread_footer(&DAT_146a26c30);
  }
  lVar10 = DAT_146a26c18;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26c28;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar5 = FUN_142753a10(), cVar5 != '\0')) && ((iVar7 != 0 && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc50d0 FUN_141bc50d0 body=525 status=ok
// SIG undefined FUN_141bc50d0(void)

undefined8 FUN_141bc50d0(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26b20) && (_Init_thread_header(&DAT_146a26b20), DAT_146a26b20 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26b18 = lVar10;
    _Init_thread_footer(&DAT_146a26b20);
  }
  if ((*piVar11 < DAT_146a26b30) && (_Init_thread_header(&DAT_146a26b30), DAT_146a26b30 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26b28 = lVar10;
    _Init_thread_footer(&DAT_146a26b30);
  }
  lVar10 = DAT_146a26b18;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26b28;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar5 = FUN_142753a10(), cVar5 != '\0')) && ((iVar7 != 0 && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc52e0 FUN_141bc52e0 body=525 status=ok
// SIG undefined FUN_141bc52e0(void)

undefined8 FUN_141bc52e0(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26a20) && (_Init_thread_header(&DAT_146a26a20), DAT_146a26a20 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26a18 = lVar10;
    _Init_thread_footer(&DAT_146a26a20);
  }
  if ((*piVar11 < DAT_146a26a30) && (_Init_thread_header(&DAT_146a26a30), DAT_146a26a30 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26a28 = lVar10;
    _Init_thread_footer(&DAT_146a26a30);
  }
  lVar10 = DAT_146a26a18;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26a28;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar5 = FUN_142753a10(), cVar5 != '\0')) && ((iVar7 != 0 && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc54f0 FUN_141bc54f0 body=525 status=ok
// SIG undefined FUN_141bc54f0(void)

undefined8 FUN_141bc54f0(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26940) && (_Init_thread_header(&DAT_146a26940), DAT_146a26940 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26930 = lVar10;
    _Init_thread_footer(&DAT_146a26940);
  }
  if ((*piVar11 < DAT_146a26950) && (_Init_thread_header(&DAT_146a26950), DAT_146a26950 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26948 = lVar10;
    _Init_thread_footer(&DAT_146a26950);
  }
  lVar10 = DAT_146a26930;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26948;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar5 = FUN_142753a10(), cVar5 != '\0')) && ((iVar7 != 0 && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc5700 FUN_141bc5700 body=431 status=ok
// SIG undefined FUN_141bc5700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bc5700(uint param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a26d20) && (_Init_thread_header(&DAT_146a26d20), DAT_146a26d20 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a26d18 = uVar3;
    _Init_thread_footer(&DAT_146a26d20);
  }
  if ((*piVar6 < DAT_146a26d30) && (_Init_thread_header(&DAT_146a26d30), DAT_146a26d30 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a26d28 = uVar5;
    _Init_thread_footer(&DAT_146a26d30);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar1 = FUN_142753a10(), cVar1 != '\0')) && (iVar2 != 0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 141bc58b0 FUN_141bc58b0 body=537 status=ok
// SIG undefined FUN_141bc58b0(void)

undefined8 FUN_141bc58b0(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26860) && (_Init_thread_header(&DAT_146a26860), DAT_146a26860 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26850 = lVar10;
    _Init_thread_footer(&DAT_146a26860);
  }
  if ((*piVar11 < DAT_146a26870) && (_Init_thread_header(&DAT_146a26870), DAT_146a26870 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26868 = lVar10;
    _Init_thread_footer(&DAT_146a26870);
  }
  lVar10 = DAT_146a26850;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26868;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar5 = FUN_142753a10(), cVar5 != '\0')) && ((iVar7 != 0 && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc5ad0 FUN_141bc5ad0 body=509 status=ok
// SIG undefined FUN_141bc5ad0(void)

undefined8 FUN_141bc5ad0(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26ca0) && (_Init_thread_header(&DAT_146a26ca0), DAT_146a26ca0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26c98 = lVar10;
    _Init_thread_footer(&DAT_146a26ca0);
  }
  if ((*piVar11 < DAT_146a26cb0) && (_Init_thread_header(&DAT_146a26cb0), DAT_146a26cb0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26ca8 = lVar10;
    _Init_thread_footer(&DAT_146a26cb0);
  }
  lVar10 = DAT_146a26c98;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26ca8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar5 = FUN_142753a10(), cVar5 != '\0')) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc5cd0 FUN_141bc5cd0 body=509 status=ok
// SIG undefined FUN_141bc5cd0(void)

undefined8 FUN_141bc5cd0(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26ba0) && (_Init_thread_header(&DAT_146a26ba0), DAT_146a26ba0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26b98 = lVar10;
    _Init_thread_footer(&DAT_146a26ba0);
  }
  if ((*piVar11 < DAT_146a26bb0) && (_Init_thread_header(&DAT_146a26bb0), DAT_146a26bb0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26ba8 = lVar10;
    _Init_thread_footer(&DAT_146a26bb0);
  }
  lVar10 = DAT_146a26b98;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26ba8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar5 = FUN_142753a10(), cVar5 != '\0')) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc5ed0 FUN_141bc5ed0 body=509 status=ok
// SIG undefined FUN_141bc5ed0(void)

undefined8 FUN_141bc5ed0(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26aa0) && (_Init_thread_header(&DAT_146a26aa0), DAT_146a26aa0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26a98 = lVar10;
    _Init_thread_footer(&DAT_146a26aa0);
  }
  if ((*piVar11 < DAT_146a26ab0) && (_Init_thread_header(&DAT_146a26ab0), DAT_146a26ab0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26aa8 = lVar10;
    _Init_thread_footer(&DAT_146a26ab0);
  }
  lVar10 = DAT_146a26a98;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26aa8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar5 = FUN_142753a10(), cVar5 != '\0')) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc60d0 FUN_141bc60d0 body=509 status=ok
// SIG undefined FUN_141bc60d0(void)

undefined8 FUN_141bc60d0(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a269a0) && (_Init_thread_header(&DAT_146a269a0), DAT_146a269a0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26998 = lVar10;
    _Init_thread_footer(&DAT_146a269a0);
  }
  if ((*piVar11 < DAT_146a269b0) && (_Init_thread_header(&DAT_146a269b0), DAT_146a269b0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a269a8 = lVar10;
    _Init_thread_footer(&DAT_146a269b0);
  }
  lVar10 = DAT_146a26998;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a269a8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar5 = FUN_142753a10(), cVar5 != '\0')) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc62d0 FUN_141bc62d0 body=424 status=ok
// SIG undefined FUN_141bc62d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bc62d0(uint param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a26da0) && (_Init_thread_header(&DAT_146a26da0), DAT_146a26da0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26d98 = uVar2;
    _Init_thread_footer(&DAT_146a26da0);
  }
  if ((*piVar5 < DAT_146a26db0) && (_Init_thread_header(&DAT_146a26db0), DAT_146a26db0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26da8 = uVar4;
    _Init_thread_footer(&DAT_146a26db0);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     (cVar1 = FUN_142753a10(), cVar1 != '\0')) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 141bc6480 FUN_141bc6480 body=530 status=ok
// SIG undefined FUN_141bc6480(void)

undefined8 FUN_141bc6480(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a268d0) && (_Init_thread_header(&DAT_146a268d0), DAT_146a268d0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a268c0 = lVar10;
    _Init_thread_footer(&DAT_146a268d0);
  }
  if ((*piVar11 < DAT_146a268e0) && (_Init_thread_header(&DAT_146a268e0), DAT_146a268e0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a268d8 = lVar10;
    _Init_thread_footer(&DAT_146a268e0);
  }
  lVar10 = DAT_146a268c0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a268d8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc66a0 FUN_141bc66a0 body=525 status=ok
// SIG undefined FUN_141bc66a0(void)

undefined8 FUN_141bc66a0(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26c60) && (_Init_thread_header(&DAT_146a26c60), DAT_146a26c60 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26c58 = lVar10;
    _Init_thread_footer(&DAT_146a26c60);
  }
  if ((*piVar11 < DAT_146a26c70) && (_Init_thread_header(&DAT_146a26c70), DAT_146a26c70 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26c68 = lVar10;
    _Init_thread_footer(&DAT_146a26c70);
  }
  lVar10 = DAT_146a26c58;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26c68;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar5 = FUN_142753a10(), cVar5 == '\0')) && ((iVar7 != 0 && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc68b0 FUN_141bc68b0 body=525 status=ok
// SIG undefined FUN_141bc68b0(void)

undefined8 FUN_141bc68b0(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26b60) && (_Init_thread_header(&DAT_146a26b60), DAT_146a26b60 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26b58 = lVar10;
    _Init_thread_footer(&DAT_146a26b60);
  }
  if ((*piVar11 < DAT_146a26b70) && (_Init_thread_header(&DAT_146a26b70), DAT_146a26b70 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26b68 = lVar10;
    _Init_thread_footer(&DAT_146a26b70);
  }
  lVar10 = DAT_146a26b58;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26b68;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar5 = FUN_142753a10(), cVar5 == '\0')) && ((iVar7 != 0 && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc6ac0 FUN_141bc6ac0 body=525 status=ok
// SIG undefined FUN_141bc6ac0(void)

undefined8 FUN_141bc6ac0(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26a60) && (_Init_thread_header(&DAT_146a26a60), DAT_146a26a60 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26a58 = lVar10;
    _Init_thread_footer(&DAT_146a26a60);
  }
  if ((*piVar11 < DAT_146a26a70) && (_Init_thread_header(&DAT_146a26a70), DAT_146a26a70 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26a68 = lVar10;
    _Init_thread_footer(&DAT_146a26a70);
  }
  lVar10 = DAT_146a26a58;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26a68;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar5 = FUN_142753a10(), cVar5 == '\0')) && ((iVar7 != 0 && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc6cd0 FUN_141bc6cd0 body=525 status=ok
// SIG undefined FUN_141bc6cd0(void)

undefined8 FUN_141bc6cd0(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26960) && (_Init_thread_header(&DAT_146a26960), DAT_146a26960 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26958 = lVar10;
    _Init_thread_footer(&DAT_146a26960);
  }
  if ((*piVar11 < DAT_146a26970) && (_Init_thread_header(&DAT_146a26970), DAT_146a26970 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26968 = lVar10;
    _Init_thread_footer(&DAT_146a26970);
  }
  lVar10 = DAT_146a26958;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26968;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar5 = FUN_142753a10(), cVar5 == '\0')) && ((iVar7 != 0 && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc6ee0 FUN_141bc6ee0 body=431 status=ok
// SIG undefined FUN_141bc6ee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bc6ee0(uint param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a26d60) && (_Init_thread_header(&DAT_146a26d60), DAT_146a26d60 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a26d58 = uVar3;
    _Init_thread_footer(&DAT_146a26d60);
  }
  if ((*piVar6 < DAT_146a26d70) && (_Init_thread_header(&DAT_146a26d70), DAT_146a26d70 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a26d68 = uVar5;
    _Init_thread_footer(&DAT_146a26d70);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar1 = FUN_142753a10(), cVar1 == '\0')) && (iVar2 != 0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 141bc7090 FUN_141bc7090 body=537 status=ok
// SIG undefined FUN_141bc7090(void)

undefined8 FUN_141bc7090(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26898) && (_Init_thread_header(&DAT_146a26898), DAT_146a26898 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26888 = lVar10;
    _Init_thread_footer(&DAT_146a26898);
  }
  if ((*piVar11 < DAT_146a268a8) && (_Init_thread_header(&DAT_146a268a8), DAT_146a268a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a268a0 = lVar10;
    _Init_thread_footer(&DAT_146a268a8);
  }
  lVar10 = DAT_146a26888;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a268a0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar5 = FUN_142753a10(), cVar5 == '\0')) && ((iVar7 != 0 && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc72b0 FUN_141bc72b0 body=509 status=ok
// SIG undefined FUN_141bc72b0(void)

undefined8 FUN_141bc72b0(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26ce0) && (_Init_thread_header(&DAT_146a26ce0), DAT_146a26ce0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26cd8 = lVar10;
    _Init_thread_footer(&DAT_146a26ce0);
  }
  if ((*piVar11 < DAT_146a26cf0) && (_Init_thread_header(&DAT_146a26cf0), DAT_146a26cf0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26ce8 = lVar10;
    _Init_thread_footer(&DAT_146a26cf0);
  }
  lVar10 = DAT_146a26cd8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26ce8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar5 = FUN_142753a10(), cVar5 == '\0')) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc74b0 FUN_141bc74b0 body=509 status=ok
// SIG undefined FUN_141bc74b0(void)

undefined8 FUN_141bc74b0(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26be0) && (_Init_thread_header(&DAT_146a26be0), DAT_146a26be0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26bd8 = lVar10;
    _Init_thread_footer(&DAT_146a26be0);
  }
  if ((*piVar11 < DAT_146a26bf0) && (_Init_thread_header(&DAT_146a26bf0), DAT_146a26bf0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26be8 = lVar10;
    _Init_thread_footer(&DAT_146a26bf0);
  }
  lVar10 = DAT_146a26bd8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26be8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar5 = FUN_142753a10(), cVar5 == '\0')) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc76b0 FUN_141bc76b0 body=509 status=ok
// SIG undefined FUN_141bc76b0(void)

undefined8 FUN_141bc76b0(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26ae0) && (_Init_thread_header(&DAT_146a26ae0), DAT_146a26ae0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26ad8 = lVar10;
    _Init_thread_footer(&DAT_146a26ae0);
  }
  if ((*piVar11 < DAT_146a26af0) && (_Init_thread_header(&DAT_146a26af0), DAT_146a26af0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26ae8 = lVar10;
    _Init_thread_footer(&DAT_146a26af0);
  }
  lVar10 = DAT_146a26ad8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26ae8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar5 = FUN_142753a10(), cVar5 == '\0')) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc78b0 FUN_141bc78b0 body=509 status=ok
// SIG undefined FUN_141bc78b0(void)

undefined8 FUN_141bc78b0(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a269e0) && (_Init_thread_header(&DAT_146a269e0), DAT_146a269e0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a269d8 = lVar10;
    _Init_thread_footer(&DAT_146a269e0);
  }
  if ((*piVar11 < DAT_146a269f0) && (_Init_thread_header(&DAT_146a269f0), DAT_146a269f0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a269e8 = lVar10;
    _Init_thread_footer(&DAT_146a269f0);
  }
  lVar10 = DAT_146a269d8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a269e8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      (cVar5 = FUN_142753a10(), cVar5 == '\0')) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc7ab0 FUN_141bc7ab0 body=424 status=ok
// SIG undefined FUN_141bc7ab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bc7ab0(uint param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a26de0) && (_Init_thread_header(&DAT_146a26de0), DAT_146a26de0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26dd8 = uVar2;
    _Init_thread_footer(&DAT_146a26de0);
  }
  if ((*piVar5 < DAT_146a26df0) && (_Init_thread_header(&DAT_146a26df0), DAT_146a26df0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26de8 = uVar4;
    _Init_thread_footer(&DAT_146a26df0);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     (cVar1 = FUN_142753a10(), cVar1 == '\0')) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 141bc7c60 FUN_141bc7c60 body=530 status=ok
// SIG undefined FUN_141bc7c60(void)

undefined8 FUN_141bc7c60(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26908) && (_Init_thread_header(&DAT_146a26908), DAT_146a26908 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a268f8 = lVar10;
    _Init_thread_footer(&DAT_146a26908);
  }
  if ((*piVar11 < DAT_146a26918) && (_Init_thread_header(&DAT_146a26918), DAT_146a26918 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26910 = lVar10;
    _Init_thread_footer(&DAT_146a26918);
  }
  lVar10 = DAT_146a268f8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26910;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc7e80 FUN_141bc7e80 body=541 status=ok
// SIG undefined FUN_141bc7e80(void)

undefined8 FUN_141bc7e80(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25508) && (_Init_thread_header(&DAT_146a25508), DAT_146a25508 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25500 = lVar10;
    _Init_thread_footer(&DAT_146a25508);
  }
  if ((*piVar11 < DAT_146a25518) && (_Init_thread_header(&DAT_146a25518), DAT_146a25518 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25510 = lVar10;
    _Init_thread_footer(&DAT_146a25518);
  }
  lVar10 = DAT_146a25500;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25510;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc80a0 FUN_141bc80a0 body=541 status=ok
// SIG undefined FUN_141bc80a0(void)

undefined8 FUN_141bc80a0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25488) && (_Init_thread_header(&DAT_146a25488), DAT_146a25488 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25480 = lVar10;
    _Init_thread_footer(&DAT_146a25488);
  }
  if ((*piVar11 < DAT_146a25498) && (_Init_thread_header(&DAT_146a25498), DAT_146a25498 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25490 = lVar10;
    _Init_thread_footer(&DAT_146a25498);
  }
  lVar10 = DAT_146a25480;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25490;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc82c0 FUN_141bc82c0 body=541 status=ok
// SIG undefined FUN_141bc82c0(void)

undefined8 FUN_141bc82c0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a29908) && (_Init_thread_header(&DAT_146a29908), DAT_146a29908 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29900 = lVar10;
    _Init_thread_footer(&DAT_146a29908);
  }
  if ((*piVar11 < DAT_146a29918) && (_Init_thread_header(&DAT_146a29918), DAT_146a29918 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29910 = lVar10;
    _Init_thread_footer(&DAT_146a29918);
  }
  lVar10 = DAT_146a29900;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a29910;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc84e0 FUN_141bc84e0 body=541 status=ok
// SIG undefined FUN_141bc84e0(void)

undefined8 FUN_141bc84e0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a29888) && (_Init_thread_header(&DAT_146a29888), DAT_146a29888 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29880 = lVar10;
    _Init_thread_footer(&DAT_146a29888);
  }
  if ((*piVar11 < DAT_146a29898) && (_Init_thread_header(&DAT_146a29898), DAT_146a29898 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29890 = lVar10;
    _Init_thread_footer(&DAT_146a29898);
  }
  lVar10 = DAT_146a29880;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a29890;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc8700 FUN_141bc8700 body=461 status=ok
// SIG undefined FUN_141bc8700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bc8700(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a25588) && (_Init_thread_header(&DAT_146a25588), DAT_146a25588 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a25580 = uVar3;
    _Init_thread_footer(&DAT_146a25588);
  }
  if ((*piVar6 < DAT_146a25598) && (_Init_thread_header(&DAT_146a25598), DAT_146a25598 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a25590 = uVar5;
    _Init_thread_footer(&DAT_146a25598);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 == '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141bc88d0 FUN_141bc88d0 body=553 status=ok
// SIG undefined FUN_141bc88d0(void)

undefined8 FUN_141bc88d0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a29808) && (_Init_thread_header(&DAT_146a29808), DAT_146a29808 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29800 = lVar10;
    _Init_thread_footer(&DAT_146a29808);
  }
  if ((*piVar11 < DAT_146a29818) && (_Init_thread_header(&DAT_146a29818), DAT_146a29818 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29810 = lVar10;
    _Init_thread_footer(&DAT_146a29818);
  }
  lVar10 = DAT_146a29800;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a29810;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc8b00 FUN_141bc8b00 body=525 status=ok
// SIG undefined FUN_141bc8b00(void)

undefined8 FUN_141bc8b00(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25548) && (_Init_thread_header(&DAT_146a25548), DAT_146a25548 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25540 = lVar10;
    _Init_thread_footer(&DAT_146a25548);
  }
  if ((*piVar11 < DAT_146a25558) && (_Init_thread_header(&DAT_146a25558), DAT_146a25558 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25550 = lVar10;
    _Init_thread_footer(&DAT_146a25558);
  }
  lVar10 = DAT_146a25540;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25550;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc8d10 FUN_141bc8d10 body=525 status=ok
// SIG undefined FUN_141bc8d10(void)

undefined8 FUN_141bc8d10(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a254c8) && (_Init_thread_header(&DAT_146a254c8), DAT_146a254c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a254c0 = lVar10;
    _Init_thread_footer(&DAT_146a254c8);
  }
  if ((*piVar11 < DAT_146a254d8) && (_Init_thread_header(&DAT_146a254d8), DAT_146a254d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a254d0 = lVar10;
    _Init_thread_footer(&DAT_146a254d8);
  }
  lVar10 = DAT_146a254c0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a254d0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc8f20 FUN_141bc8f20 body=525 status=ok
// SIG undefined FUN_141bc8f20(void)

undefined8 FUN_141bc8f20(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25448) && (_Init_thread_header(&DAT_146a25448), DAT_146a25448 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25440 = lVar10;
    _Init_thread_footer(&DAT_146a25448);
  }
  if ((*piVar11 < DAT_146a25458) && (_Init_thread_header(&DAT_146a25458), DAT_146a25458 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25450 = lVar10;
    _Init_thread_footer(&DAT_146a25458);
  }
  lVar10 = DAT_146a25440;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25450;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc9130 FUN_141bc9130 body=525 status=ok
// SIG undefined FUN_141bc9130(void)

undefined8 FUN_141bc9130(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a298c8) && (_Init_thread_header(&DAT_146a298c8), DAT_146a298c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a298c0 = lVar10;
    _Init_thread_footer(&DAT_146a298c8);
  }
  if ((*piVar11 < DAT_146a298d8) && (_Init_thread_header(&DAT_146a298d8), DAT_146a298d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a298d0 = lVar10;
    _Init_thread_footer(&DAT_146a298d8);
  }
  lVar10 = DAT_146a298c0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a298d0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc9340 FUN_141bc9340 body=452 status=ok
// SIG undefined FUN_141bc9340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bc9340(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a255c8) && (_Init_thread_header(&DAT_146a255c8), DAT_146a255c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a255c0 = uVar2;
    _Init_thread_footer(&DAT_146a255c8);
  }
  if ((*piVar5 < DAT_146a255d8) && (_Init_thread_header(&DAT_146a255d8), DAT_146a255d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a255d0 = uVar4;
    _Init_thread_footer(&DAT_146a255d8);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141bc9510 FUN_141bc9510 body=546 status=ok
// SIG undefined FUN_141bc9510(void)

undefined8 FUN_141bc9510(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a29848) && (_Init_thread_header(&DAT_146a29848), DAT_146a29848 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29840 = lVar10;
    _Init_thread_footer(&DAT_146a29848);
  }
  if ((*piVar11 < DAT_146a29858) && (_Init_thread_header(&DAT_146a29858), DAT_146a29858 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29850 = lVar10;
    _Init_thread_footer(&DAT_146a29858);
  }
  lVar10 = DAT_146a29840;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a29850;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc9740 FUN_141bc9740 body=541 status=ok
// SIG undefined FUN_141bc9740(void)

undefined8 FUN_141bc9740(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25528) && (_Init_thread_header(&DAT_146a25528), DAT_146a25528 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25520 = lVar10;
    _Init_thread_footer(&DAT_146a25528);
  }
  if ((*piVar11 < DAT_146a25538) && (_Init_thread_header(&DAT_146a25538), DAT_146a25538 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25530 = lVar10;
    _Init_thread_footer(&DAT_146a25538);
  }
  lVar10 = DAT_146a25520;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25530;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc9960 FUN_141bc9960 body=541 status=ok
// SIG undefined FUN_141bc9960(void)

undefined8 FUN_141bc9960(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a254a8) && (_Init_thread_header(&DAT_146a254a8), DAT_146a254a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a254a0 = lVar10;
    _Init_thread_footer(&DAT_146a254a8);
  }
  if ((*piVar11 < DAT_146a254b8) && (_Init_thread_header(&DAT_146a254b8), DAT_146a254b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a254b0 = lVar10;
    _Init_thread_footer(&DAT_146a254b8);
  }
  lVar10 = DAT_146a254a0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a254b0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc9b80 FUN_141bc9b80 body=541 status=ok
// SIG undefined FUN_141bc9b80(void)

undefined8 FUN_141bc9b80(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a29928) && (_Init_thread_header(&DAT_146a29928), DAT_146a29928 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29920 = lVar10;
    _Init_thread_footer(&DAT_146a29928);
  }
  if ((*piVar11 < DAT_146a29938) && (_Init_thread_header(&DAT_146a29938), DAT_146a29938 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29930 = lVar10;
    _Init_thread_footer(&DAT_146a29938);
  }
  lVar10 = DAT_146a29920;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a29930;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc9da0 FUN_141bc9da0 body=541 status=ok
// SIG undefined FUN_141bc9da0(void)

undefined8 FUN_141bc9da0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a298a8) && (_Init_thread_header(&DAT_146a298a8), DAT_146a298a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a298a0 = lVar10;
    _Init_thread_footer(&DAT_146a298a8);
  }
  if ((*piVar11 < DAT_146a298b8) && (_Init_thread_header(&DAT_146a298b8), DAT_146a298b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a298b0 = lVar10;
    _Init_thread_footer(&DAT_146a298b8);
  }
  lVar10 = DAT_146a298a0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a298b0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bc9fc0 FUN_141bc9fc0 body=461 status=ok
// SIG undefined FUN_141bc9fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bc9fc0(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a255a8) && (_Init_thread_header(&DAT_146a255a8), DAT_146a255a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a255a0 = uVar3;
    _Init_thread_footer(&DAT_146a255a8);
  }
  if ((*piVar6 < DAT_146a255b8) && (_Init_thread_header(&DAT_146a255b8), DAT_146a255b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a255b0 = uVar5;
    _Init_thread_footer(&DAT_146a255b8);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 != '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141bca190 FUN_141bca190 body=553 status=ok
// SIG undefined FUN_141bca190(void)

undefined8 FUN_141bca190(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a29828) && (_Init_thread_header(&DAT_146a29828), DAT_146a29828 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29820 = lVar10;
    _Init_thread_footer(&DAT_146a29828);
  }
  if ((*piVar11 < DAT_146a29838) && (_Init_thread_header(&DAT_146a29838), DAT_146a29838 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29830 = lVar10;
    _Init_thread_footer(&DAT_146a29838);
  }
  lVar10 = DAT_146a29820;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a29830;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bca3c0 FUN_141bca3c0 body=525 status=ok
// SIG undefined FUN_141bca3c0(void)

undefined8 FUN_141bca3c0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25568) && (_Init_thread_header(&DAT_146a25568), DAT_146a25568 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25560 = lVar10;
    _Init_thread_footer(&DAT_146a25568);
  }
  if ((*piVar11 < DAT_146a25578) && (_Init_thread_header(&DAT_146a25578), DAT_146a25578 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25570 = lVar10;
    _Init_thread_footer(&DAT_146a25578);
  }
  lVar10 = DAT_146a25560;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25570;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bca5d0 FUN_141bca5d0 body=525 status=ok
// SIG undefined FUN_141bca5d0(void)

undefined8 FUN_141bca5d0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a254e8) && (_Init_thread_header(&DAT_146a254e8), DAT_146a254e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a254e0 = lVar10;
    _Init_thread_footer(&DAT_146a254e8);
  }
  if ((*piVar11 < DAT_146a254f8) && (_Init_thread_header(&DAT_146a254f8), DAT_146a254f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a254f0 = lVar10;
    _Init_thread_footer(&DAT_146a254f8);
  }
  lVar10 = DAT_146a254e0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a254f0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bca7e0 FUN_141bca7e0 body=525 status=ok
// SIG undefined FUN_141bca7e0(void)

undefined8 FUN_141bca7e0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25468) && (_Init_thread_header(&DAT_146a25468), DAT_146a25468 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25460 = lVar10;
    _Init_thread_footer(&DAT_146a25468);
  }
  if ((*piVar11 < DAT_146a25478) && (_Init_thread_header(&DAT_146a25478), DAT_146a25478 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25470 = lVar10;
    _Init_thread_footer(&DAT_146a25478);
  }
  lVar10 = DAT_146a25460;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25470;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bca9f0 FUN_141bca9f0 body=525 status=ok
// SIG undefined FUN_141bca9f0(void)

undefined8 FUN_141bca9f0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a298e8) && (_Init_thread_header(&DAT_146a298e8), DAT_146a298e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a298e0 = lVar10;
    _Init_thread_footer(&DAT_146a298e8);
  }
  if ((*piVar11 < DAT_146a298f8) && (_Init_thread_header(&DAT_146a298f8), DAT_146a298f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a298f0 = lVar10;
    _Init_thread_footer(&DAT_146a298f8);
  }
  lVar10 = DAT_146a298e0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a298f0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcac00 FUN_141bcac00 body=452 status=ok
// SIG undefined FUN_141bcac00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bcac00(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a255e8) && (_Init_thread_header(&DAT_146a255e8), DAT_146a255e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a255e0 = uVar2;
    _Init_thread_footer(&DAT_146a255e8);
  }
  if ((*piVar5 < DAT_146a255f8) && (_Init_thread_header(&DAT_146a255f8), DAT_146a255f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a255f0 = uVar4;
    _Init_thread_footer(&DAT_146a255f8);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 != '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141bcadd0 FUN_141bcadd0 body=546 status=ok
// SIG undefined FUN_141bcadd0(void)

undefined8 FUN_141bcadd0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a29868) && (_Init_thread_header(&DAT_146a29868), DAT_146a29868 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29860 = lVar10;
    _Init_thread_footer(&DAT_146a29868);
  }
  if ((*piVar11 < DAT_146a29878) && (_Init_thread_header(&DAT_146a29878), DAT_146a29878 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29870 = lVar10;
    _Init_thread_footer(&DAT_146a29878);
  }
  lVar10 = DAT_146a29860;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a29870;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcb000 FUN_141bcb000 body=541 status=ok
// SIG undefined FUN_141bcb000(void)

undefined8 FUN_141bcb000(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a29708) && (_Init_thread_header(&DAT_146a29708), DAT_146a29708 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29700 = lVar10;
    _Init_thread_footer(&DAT_146a29708);
  }
  if ((*piVar11 < DAT_146a29718) && (_Init_thread_header(&DAT_146a29718), DAT_146a29718 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29710 = lVar10;
    _Init_thread_footer(&DAT_146a29718);
  }
  lVar10 = DAT_146a29700;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a29710;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcb220 FUN_141bcb220 body=541 status=ok
// SIG undefined FUN_141bcb220(void)

undefined8 FUN_141bcb220(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a29688) && (_Init_thread_header(&DAT_146a29688), DAT_146a29688 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29680 = lVar10;
    _Init_thread_footer(&DAT_146a29688);
  }
  if ((*piVar11 < DAT_146a29698) && (_Init_thread_header(&DAT_146a29698), DAT_146a29698 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29690 = lVar10;
    _Init_thread_footer(&DAT_146a29698);
  }
  lVar10 = DAT_146a29680;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a29690;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcb440 FUN_141bcb440 body=541 status=ok
// SIG undefined FUN_141bcb440(void)

undefined8 FUN_141bcb440(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a29608) && (_Init_thread_header(&DAT_146a29608), DAT_146a29608 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29600 = lVar10;
    _Init_thread_footer(&DAT_146a29608);
  }
  if ((*piVar11 < DAT_146a29618) && (_Init_thread_header(&DAT_146a29618), DAT_146a29618 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29610 = lVar10;
    _Init_thread_footer(&DAT_146a29618);
  }
  lVar10 = DAT_146a29600;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a29610;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcb660 FUN_141bcb660 body=541 status=ok
// SIG undefined FUN_141bcb660(void)

undefined8 FUN_141bcb660(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27540) && (_Init_thread_header(&DAT_146a27540), DAT_146a27540 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27538 = lVar10;
    _Init_thread_footer(&DAT_146a27540);
  }
  if ((*piVar11 < DAT_146a27550) && (_Init_thread_header(&DAT_146a27550), DAT_146a27550 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27548 = lVar10;
    _Init_thread_footer(&DAT_146a27550);
  }
  lVar10 = DAT_146a27538;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27548;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcb880 FUN_141bcb880 body=461 status=ok
// SIG undefined FUN_141bcb880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bcb880(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a29788) && (_Init_thread_header(&DAT_146a29788), DAT_146a29788 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a29780 = uVar3;
    _Init_thread_footer(&DAT_146a29788);
  }
  if ((*piVar6 < DAT_146a29798) && (_Init_thread_header(&DAT_146a29798), DAT_146a29798 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a29790 = uVar5;
    _Init_thread_footer(&DAT_146a29798);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 == '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141bcba50 FUN_141bcba50 body=553 status=ok
// SIG undefined FUN_141bcba50(void)

undefined8 FUN_141bcba50(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a274c0) && (_Init_thread_header(&DAT_146a274c0), DAT_146a274c0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a274b8 = lVar10;
    _Init_thread_footer(&DAT_146a274c0);
  }
  if ((*piVar11 < DAT_146a274d0) && (_Init_thread_header(&DAT_146a274d0), DAT_146a274d0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a274c8 = lVar10;
    _Init_thread_footer(&DAT_146a274d0);
  }
  lVar10 = DAT_146a274b8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a274c8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcbc80 FUN_141bcbc80 body=525 status=ok
// SIG undefined FUN_141bcbc80(void)

undefined8 FUN_141bcbc80(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a29748) && (_Init_thread_header(&DAT_146a29748), DAT_146a29748 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29740 = lVar10;
    _Init_thread_footer(&DAT_146a29748);
  }
  if ((*piVar11 < DAT_146a29758) && (_Init_thread_header(&DAT_146a29758), DAT_146a29758 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29750 = lVar10;
    _Init_thread_footer(&DAT_146a29758);
  }
  lVar10 = DAT_146a29740;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a29750;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcbe90 FUN_141bcbe90 body=525 status=ok
// SIG undefined FUN_141bcbe90(void)

undefined8 FUN_141bcbe90(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a296c8) && (_Init_thread_header(&DAT_146a296c8), DAT_146a296c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a296c0 = lVar10;
    _Init_thread_footer(&DAT_146a296c8);
  }
  if ((*piVar11 < DAT_146a296d8) && (_Init_thread_header(&DAT_146a296d8), DAT_146a296d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a296d0 = lVar10;
    _Init_thread_footer(&DAT_146a296d8);
  }
  lVar10 = DAT_146a296c0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a296d0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcc0a0 FUN_141bcc0a0 body=525 status=ok
// SIG undefined FUN_141bcc0a0(void)

undefined8 FUN_141bcc0a0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a29648) && (_Init_thread_header(&DAT_146a29648), DAT_146a29648 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29640 = lVar10;
    _Init_thread_footer(&DAT_146a29648);
  }
  if ((*piVar11 < DAT_146a29658) && (_Init_thread_header(&DAT_146a29658), DAT_146a29658 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29650 = lVar10;
    _Init_thread_footer(&DAT_146a29658);
  }
  lVar10 = DAT_146a29640;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a29650;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcc2b0 FUN_141bcc2b0 body=525 status=ok
// SIG undefined FUN_141bcc2b0(void)

undefined8 FUN_141bcc2b0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27580) && (_Init_thread_header(&DAT_146a27580), DAT_146a27580 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27578 = lVar10;
    _Init_thread_footer(&DAT_146a27580);
  }
  if ((*piVar11 < DAT_146a27590) && (_Init_thread_header(&DAT_146a27590), DAT_146a27590 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27588 = lVar10;
    _Init_thread_footer(&DAT_146a27590);
  }
  lVar10 = DAT_146a27578;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27588;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcc4c0 FUN_141bcc4c0 body=452 status=ok
// SIG undefined FUN_141bcc4c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bcc4c0(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a297c8) && (_Init_thread_header(&DAT_146a297c8), DAT_146a297c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a297c0 = uVar2;
    _Init_thread_footer(&DAT_146a297c8);
  }
  if ((*piVar5 < DAT_146a297d8) && (_Init_thread_header(&DAT_146a297d8), DAT_146a297d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a297d0 = uVar4;
    _Init_thread_footer(&DAT_146a297d8);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141bcc690 FUN_141bcc690 body=546 status=ok
// SIG undefined FUN_141bcc690(void)

undefined8 FUN_141bcc690(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27500) && (_Init_thread_header(&DAT_146a27500), DAT_146a27500 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a274f8 = lVar10;
    _Init_thread_footer(&DAT_146a27500);
  }
  if ((*piVar11 < DAT_146a27510) && (_Init_thread_header(&DAT_146a27510), DAT_146a27510 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27508 = lVar10;
    _Init_thread_footer(&DAT_146a27510);
  }
  lVar10 = DAT_146a274f8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27508;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcc8c0 FUN_141bcc8c0 body=541 status=ok
// SIG undefined FUN_141bcc8c0(void)

undefined8 FUN_141bcc8c0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a29728) && (_Init_thread_header(&DAT_146a29728), DAT_146a29728 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29720 = lVar10;
    _Init_thread_footer(&DAT_146a29728);
  }
  if ((*piVar11 < DAT_146a29738) && (_Init_thread_header(&DAT_146a29738), DAT_146a29738 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29730 = lVar10;
    _Init_thread_footer(&DAT_146a29738);
  }
  lVar10 = DAT_146a29720;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a29730;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bccae0 FUN_141bccae0 body=541 status=ok
// SIG undefined FUN_141bccae0(void)

undefined8 FUN_141bccae0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a296a8) && (_Init_thread_header(&DAT_146a296a8), DAT_146a296a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a296a0 = lVar10;
    _Init_thread_footer(&DAT_146a296a8);
  }
  if ((*piVar11 < DAT_146a296b8) && (_Init_thread_header(&DAT_146a296b8), DAT_146a296b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a296b0 = lVar10;
    _Init_thread_footer(&DAT_146a296b8);
  }
  lVar10 = DAT_146a296a0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a296b0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bccd00 FUN_141bccd00 body=541 status=ok
// SIG undefined FUN_141bccd00(void)

undefined8 FUN_141bccd00(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a29628) && (_Init_thread_header(&DAT_146a29628), DAT_146a29628 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29620 = lVar10;
    _Init_thread_footer(&DAT_146a29628);
  }
  if ((*piVar11 < DAT_146a29638) && (_Init_thread_header(&DAT_146a29638), DAT_146a29638 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29630 = lVar10;
    _Init_thread_footer(&DAT_146a29638);
  }
  lVar10 = DAT_146a29620;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a29630;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bccf20 FUN_141bccf20 body=541 status=ok
// SIG undefined FUN_141bccf20(void)

undefined8 FUN_141bccf20(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27560) && (_Init_thread_header(&DAT_146a27560), DAT_146a27560 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27558 = lVar10;
    _Init_thread_footer(&DAT_146a27560);
  }
  if ((*piVar11 < DAT_146a27570) && (_Init_thread_header(&DAT_146a27570), DAT_146a27570 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27568 = lVar10;
    _Init_thread_footer(&DAT_146a27570);
  }
  lVar10 = DAT_146a27558;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27568;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcd140 FUN_141bcd140 body=461 status=ok
// SIG undefined FUN_141bcd140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bcd140(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a297a8) && (_Init_thread_header(&DAT_146a297a8), DAT_146a297a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a297a0 = uVar3;
    _Init_thread_footer(&DAT_146a297a8);
  }
  if ((*piVar6 < DAT_146a297b8) && (_Init_thread_header(&DAT_146a297b8), DAT_146a297b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a297b0 = uVar5;
    _Init_thread_footer(&DAT_146a297b8);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 != '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141bcd310 FUN_141bcd310 body=553 status=ok
// SIG undefined FUN_141bcd310(void)

undefined8 FUN_141bcd310(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a274e0) && (_Init_thread_header(&DAT_146a274e0), DAT_146a274e0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a274d8 = lVar10;
    _Init_thread_footer(&DAT_146a274e0);
  }
  if ((*piVar11 < DAT_146a274f0) && (_Init_thread_header(&DAT_146a274f0), DAT_146a274f0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a274e8 = lVar10;
    _Init_thread_footer(&DAT_146a274f0);
  }
  lVar10 = DAT_146a274d8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a274e8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcd540 FUN_141bcd540 body=525 status=ok
// SIG undefined FUN_141bcd540(void)

undefined8 FUN_141bcd540(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a29768) && (_Init_thread_header(&DAT_146a29768), DAT_146a29768 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29760 = lVar10;
    _Init_thread_footer(&DAT_146a29768);
  }
  if ((*piVar11 < DAT_146a29778) && (_Init_thread_header(&DAT_146a29778), DAT_146a29778 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29770 = lVar10;
    _Init_thread_footer(&DAT_146a29778);
  }
  lVar10 = DAT_146a29760;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a29770;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcd750 FUN_141bcd750 body=525 status=ok
// SIG undefined FUN_141bcd750(void)

undefined8 FUN_141bcd750(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a296e8) && (_Init_thread_header(&DAT_146a296e8), DAT_146a296e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a296e0 = lVar10;
    _Init_thread_footer(&DAT_146a296e8);
  }
  if ((*piVar11 < DAT_146a296f8) && (_Init_thread_header(&DAT_146a296f8), DAT_146a296f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a296f0 = lVar10;
    _Init_thread_footer(&DAT_146a296f8);
  }
  lVar10 = DAT_146a296e0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a296f0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcd960 FUN_141bcd960 body=525 status=ok
// SIG undefined FUN_141bcd960(void)

undefined8 FUN_141bcd960(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a29668) && (_Init_thread_header(&DAT_146a29668), DAT_146a29668 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29660 = lVar10;
    _Init_thread_footer(&DAT_146a29668);
  }
  if ((*piVar11 < DAT_146a29678) && (_Init_thread_header(&DAT_146a29678), DAT_146a29678 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a29670 = lVar10;
    _Init_thread_footer(&DAT_146a29678);
  }
  lVar10 = DAT_146a29660;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a29670;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcdb70 FUN_141bcdb70 body=525 status=ok
// SIG undefined FUN_141bcdb70(void)

undefined8 FUN_141bcdb70(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a275a0) && (_Init_thread_header(&DAT_146a275a0), DAT_146a275a0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27598 = lVar10;
    _Init_thread_footer(&DAT_146a275a0);
  }
  if ((*piVar11 < DAT_146a275b0) && (_Init_thread_header(&DAT_146a275b0), DAT_146a275b0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a275a8 = lVar10;
    _Init_thread_footer(&DAT_146a275b0);
  }
  lVar10 = DAT_146a27598;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a275a8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcdd80 FUN_141bcdd80 body=452 status=ok
// SIG undefined FUN_141bcdd80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bcdd80(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a297e8) && (_Init_thread_header(&DAT_146a297e8), DAT_146a297e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a297e0 = uVar2;
    _Init_thread_footer(&DAT_146a297e8);
  }
  if ((*piVar5 < DAT_146a297f8) && (_Init_thread_header(&DAT_146a297f8), DAT_146a297f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a297f0 = uVar4;
    _Init_thread_footer(&DAT_146a297f8);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be75a0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 != '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141bcdf50 FUN_141bcdf50 body=546 status=ok
// SIG undefined FUN_141bcdf50(void)

undefined8 FUN_141bcdf50(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27520) && (_Init_thread_header(&DAT_146a27520), DAT_146a27520 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27518 = lVar10;
    _Init_thread_footer(&DAT_146a27520);
  }
  if ((*piVar11 < DAT_146a27530) && (_Init_thread_header(&DAT_146a27530), DAT_146a27530 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27528 = lVar10;
    _Init_thread_footer(&DAT_146a27530);
  }
  lVar10 = DAT_146a27518;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27528;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be75a0(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bce180 FUN_141bce180 body=541 status=ok
// SIG undefined FUN_141bce180(void)

undefined8 FUN_141bce180(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a273c0) && (_Init_thread_header(&DAT_146a273c0), DAT_146a273c0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a273b8 = lVar10;
    _Init_thread_footer(&DAT_146a273c0);
  }
  if ((*piVar11 < DAT_146a273d0) && (_Init_thread_header(&DAT_146a273d0), DAT_146a273d0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a273c8 = lVar10;
    _Init_thread_footer(&DAT_146a273d0);
  }
  lVar10 = DAT_146a273b8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a273c8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bce3a0 FUN_141bce3a0 body=541 status=ok
// SIG undefined FUN_141bce3a0(void)

undefined8 FUN_141bce3a0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27340) && (_Init_thread_header(&DAT_146a27340), DAT_146a27340 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27338 = lVar10;
    _Init_thread_footer(&DAT_146a27340);
  }
  if ((*piVar11 < DAT_146a27350) && (_Init_thread_header(&DAT_146a27350), DAT_146a27350 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27348 = lVar10;
    _Init_thread_footer(&DAT_146a27350);
  }
  lVar10 = DAT_146a27338;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27348;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bce5c0 FUN_141bce5c0 body=541 status=ok
// SIG undefined FUN_141bce5c0(void)

undefined8 FUN_141bce5c0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a272c0) && (_Init_thread_header(&DAT_146a272c0), DAT_146a272c0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a272b8 = lVar10;
    _Init_thread_footer(&DAT_146a272c0);
  }
  if ((*piVar11 < DAT_146a272d0) && (_Init_thread_header(&DAT_146a272d0), DAT_146a272d0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a272c8 = lVar10;
    _Init_thread_footer(&DAT_146a272d0);
  }
  lVar10 = DAT_146a272b8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a272c8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bce7e0 FUN_141bce7e0 body=541 status=ok
// SIG undefined FUN_141bce7e0(void)

undefined8 FUN_141bce7e0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27240) && (_Init_thread_header(&DAT_146a27240), DAT_146a27240 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27238 = lVar10;
    _Init_thread_footer(&DAT_146a27240);
  }
  if ((*piVar11 < DAT_146a27250) && (_Init_thread_header(&DAT_146a27250), DAT_146a27250 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27248 = lVar10;
    _Init_thread_footer(&DAT_146a27250);
  }
  lVar10 = DAT_146a27238;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27248;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcea00 FUN_141bcea00 body=461 status=ok
// SIG undefined FUN_141bcea00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bcea00(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a27440) && (_Init_thread_header(&DAT_146a27440), DAT_146a27440 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a27438 = uVar3;
    _Init_thread_footer(&DAT_146a27440);
  }
  if ((*piVar6 < DAT_146a27450) && (_Init_thread_header(&DAT_146a27450), DAT_146a27450 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a27448 = uVar5;
    _Init_thread_footer(&DAT_146a27450);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 == '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141bcebd0 FUN_141bcebd0 body=553 status=ok
// SIG undefined FUN_141bcebd0(void)

undefined8 FUN_141bcebd0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a271c0) && (_Init_thread_header(&DAT_146a271c0), DAT_146a271c0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a271b8 = lVar10;
    _Init_thread_footer(&DAT_146a271c0);
  }
  if ((*piVar11 < DAT_146a271d0) && (_Init_thread_header(&DAT_146a271d0), DAT_146a271d0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a271c8 = lVar10;
    _Init_thread_footer(&DAT_146a271d0);
  }
  lVar10 = DAT_146a271b8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a271c8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcee00 FUN_141bcee00 body=525 status=ok
// SIG undefined FUN_141bcee00(void)

undefined8 FUN_141bcee00(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27400) && (_Init_thread_header(&DAT_146a27400), DAT_146a27400 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a273f8 = lVar10;
    _Init_thread_footer(&DAT_146a27400);
  }
  if ((*piVar11 < DAT_146a27410) && (_Init_thread_header(&DAT_146a27410), DAT_146a27410 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27408 = lVar10;
    _Init_thread_footer(&DAT_146a27410);
  }
  lVar10 = DAT_146a273f8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27408;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcf010 FUN_141bcf010 body=525 status=ok
// SIG undefined FUN_141bcf010(void)

undefined8 FUN_141bcf010(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27380) && (_Init_thread_header(&DAT_146a27380), DAT_146a27380 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27378 = lVar10;
    _Init_thread_footer(&DAT_146a27380);
  }
  if ((*piVar11 < DAT_146a27390) && (_Init_thread_header(&DAT_146a27390), DAT_146a27390 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27388 = lVar10;
    _Init_thread_footer(&DAT_146a27390);
  }
  lVar10 = DAT_146a27378;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27388;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcf220 FUN_141bcf220 body=525 status=ok
// SIG undefined FUN_141bcf220(void)

undefined8 FUN_141bcf220(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27300) && (_Init_thread_header(&DAT_146a27300), DAT_146a27300 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a272f8 = lVar10;
    _Init_thread_footer(&DAT_146a27300);
  }
  if ((*piVar11 < DAT_146a27310) && (_Init_thread_header(&DAT_146a27310), DAT_146a27310 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27308 = lVar10;
    _Init_thread_footer(&DAT_146a27310);
  }
  lVar10 = DAT_146a272f8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27308;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcf430 FUN_141bcf430 body=525 status=ok
// SIG undefined FUN_141bcf430(void)

undefined8 FUN_141bcf430(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27280) && (_Init_thread_header(&DAT_146a27280), DAT_146a27280 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27278 = lVar10;
    _Init_thread_footer(&DAT_146a27280);
  }
  if ((*piVar11 < DAT_146a27290) && (_Init_thread_header(&DAT_146a27290), DAT_146a27290 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27288 = lVar10;
    _Init_thread_footer(&DAT_146a27290);
  }
  lVar10 = DAT_146a27278;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27288;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcf640 FUN_141bcf640 body=452 status=ok
// SIG undefined FUN_141bcf640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bcf640(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a27480) && (_Init_thread_header(&DAT_146a27480), DAT_146a27480 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a27478 = uVar2;
    _Init_thread_footer(&DAT_146a27480);
  }
  if ((*piVar5 < DAT_146a27490) && (_Init_thread_header(&DAT_146a27490), DAT_146a27490 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a27488 = uVar4;
    _Init_thread_footer(&DAT_146a27490);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141bcf810 FUN_141bcf810 body=546 status=ok
// SIG undefined FUN_141bcf810(void)

undefined8 FUN_141bcf810(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27200) && (_Init_thread_header(&DAT_146a27200), DAT_146a27200 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a271f8 = lVar10;
    _Init_thread_footer(&DAT_146a27200);
  }
  if ((*piVar11 < DAT_146a27210) && (_Init_thread_header(&DAT_146a27210), DAT_146a27210 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27208 = lVar10;
    _Init_thread_footer(&DAT_146a27210);
  }
  lVar10 = DAT_146a271f8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27208;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcfa40 FUN_141bcfa40 body=541 status=ok
// SIG undefined FUN_141bcfa40(void)

undefined8 FUN_141bcfa40(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a273e0) && (_Init_thread_header(&DAT_146a273e0), DAT_146a273e0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a273d8 = lVar10;
    _Init_thread_footer(&DAT_146a273e0);
  }
  if ((*piVar11 < DAT_146a273f0) && (_Init_thread_header(&DAT_146a273f0), DAT_146a273f0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a273e8 = lVar10;
    _Init_thread_footer(&DAT_146a273f0);
  }
  lVar10 = DAT_146a273d8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a273e8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcfc60 FUN_141bcfc60 body=541 status=ok
// SIG undefined FUN_141bcfc60(void)

undefined8 FUN_141bcfc60(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27360) && (_Init_thread_header(&DAT_146a27360), DAT_146a27360 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27358 = lVar10;
    _Init_thread_footer(&DAT_146a27360);
  }
  if ((*piVar11 < DAT_146a27370) && (_Init_thread_header(&DAT_146a27370), DAT_146a27370 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27368 = lVar10;
    _Init_thread_footer(&DAT_146a27370);
  }
  lVar10 = DAT_146a27358;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27368;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bcfe80 FUN_141bcfe80 body=541 status=ok
// SIG undefined FUN_141bcfe80(void)

undefined8 FUN_141bcfe80(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a272e0) && (_Init_thread_header(&DAT_146a272e0), DAT_146a272e0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a272d8 = lVar10;
    _Init_thread_footer(&DAT_146a272e0);
  }
  if ((*piVar11 < DAT_146a272f0) && (_Init_thread_header(&DAT_146a272f0), DAT_146a272f0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a272e8 = lVar10;
    _Init_thread_footer(&DAT_146a272f0);
  }
  lVar10 = DAT_146a272d8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a272e8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd00a0 FUN_141bd00a0 body=541 status=ok
// SIG undefined FUN_141bd00a0(void)

undefined8 FUN_141bd00a0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27260) && (_Init_thread_header(&DAT_146a27260), DAT_146a27260 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27258 = lVar10;
    _Init_thread_footer(&DAT_146a27260);
  }
  if ((*piVar11 < DAT_146a27270) && (_Init_thread_header(&DAT_146a27270), DAT_146a27270 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27268 = lVar10;
    _Init_thread_footer(&DAT_146a27270);
  }
  lVar10 = DAT_146a27258;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27268;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd02c0 FUN_141bd02c0 body=461 status=ok
// SIG undefined FUN_141bd02c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bd02c0(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a27460) && (_Init_thread_header(&DAT_146a27460), DAT_146a27460 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a27458 = uVar3;
    _Init_thread_footer(&DAT_146a27460);
  }
  if ((*piVar6 < DAT_146a27470) && (_Init_thread_header(&DAT_146a27470), DAT_146a27470 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a27468 = uVar5;
    _Init_thread_footer(&DAT_146a27470);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 != '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141bd0490 FUN_141bd0490 body=553 status=ok
// SIG undefined FUN_141bd0490(void)

undefined8 FUN_141bd0490(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a271e0) && (_Init_thread_header(&DAT_146a271e0), DAT_146a271e0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a271d8 = lVar10;
    _Init_thread_footer(&DAT_146a271e0);
  }
  if ((*piVar11 < DAT_146a271f0) && (_Init_thread_header(&DAT_146a271f0), DAT_146a271f0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a271e8 = lVar10;
    _Init_thread_footer(&DAT_146a271f0);
  }
  lVar10 = DAT_146a271d8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a271e8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd06c0 FUN_141bd06c0 body=525 status=ok
// SIG undefined FUN_141bd06c0(void)

undefined8 FUN_141bd06c0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27420) && (_Init_thread_header(&DAT_146a27420), DAT_146a27420 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27418 = lVar10;
    _Init_thread_footer(&DAT_146a27420);
  }
  if ((*piVar11 < DAT_146a27430) && (_Init_thread_header(&DAT_146a27430), DAT_146a27430 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27428 = lVar10;
    _Init_thread_footer(&DAT_146a27430);
  }
  lVar10 = DAT_146a27418;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27428;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd08d0 FUN_141bd08d0 body=525 status=ok
// SIG undefined FUN_141bd08d0(void)

undefined8 FUN_141bd08d0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a273a0) && (_Init_thread_header(&DAT_146a273a0), DAT_146a273a0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27398 = lVar10;
    _Init_thread_footer(&DAT_146a273a0);
  }
  if ((*piVar11 < DAT_146a273b0) && (_Init_thread_header(&DAT_146a273b0), DAT_146a273b0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a273a8 = lVar10;
    _Init_thread_footer(&DAT_146a273b0);
  }
  lVar10 = DAT_146a27398;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a273a8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd0ae0 FUN_141bd0ae0 body=525 status=ok
// SIG undefined FUN_141bd0ae0(void)

undefined8 FUN_141bd0ae0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27320) && (_Init_thread_header(&DAT_146a27320), DAT_146a27320 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27318 = lVar10;
    _Init_thread_footer(&DAT_146a27320);
  }
  if ((*piVar11 < DAT_146a27330) && (_Init_thread_header(&DAT_146a27330), DAT_146a27330 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27328 = lVar10;
    _Init_thread_footer(&DAT_146a27330);
  }
  lVar10 = DAT_146a27318;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27328;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd0cf0 FUN_141bd0cf0 body=525 status=ok
// SIG undefined FUN_141bd0cf0(void)

undefined8 FUN_141bd0cf0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a272a0) && (_Init_thread_header(&DAT_146a272a0), DAT_146a272a0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27298 = lVar10;
    _Init_thread_footer(&DAT_146a272a0);
  }
  if ((*piVar11 < DAT_146a272b0) && (_Init_thread_header(&DAT_146a272b0), DAT_146a272b0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a272a8 = lVar10;
    _Init_thread_footer(&DAT_146a272b0);
  }
  lVar10 = DAT_146a27298;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a272a8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd0f00 FUN_141bd0f00 body=452 status=ok
// SIG undefined FUN_141bd0f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bd0f00(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a274a0) && (_Init_thread_header(&DAT_146a274a0), DAT_146a274a0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a27498 = uVar2;
    _Init_thread_footer(&DAT_146a274a0);
  }
  if ((*piVar5 < DAT_146a274b0) && (_Init_thread_header(&DAT_146a274b0), DAT_146a274b0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a274a8 = uVar4;
    _Init_thread_footer(&DAT_146a274b0);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 != '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141bd10d0 FUN_141bd10d0 body=546 status=ok
// SIG undefined FUN_141bd10d0(void)

undefined8 FUN_141bd10d0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27220) && (_Init_thread_header(&DAT_146a27220), DAT_146a27220 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27218 = lVar10;
    _Init_thread_footer(&DAT_146a27220);
  }
  if ((*piVar11 < DAT_146a27230) && (_Init_thread_header(&DAT_146a27230), DAT_146a27230 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27228 = lVar10;
    _Init_thread_footer(&DAT_146a27230);
  }
  lVar10 = DAT_146a27218;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27228;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd1300 FUN_141bd1300 body=541 status=ok
// SIG undefined FUN_141bd1300(void)

undefined8 FUN_141bd1300(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a270c0) && (_Init_thread_header(&DAT_146a270c0), DAT_146a270c0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a270b8 = lVar10;
    _Init_thread_footer(&DAT_146a270c0);
  }
  if ((*piVar11 < DAT_146a270d0) && (_Init_thread_header(&DAT_146a270d0), DAT_146a270d0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a270c8 = lVar10;
    _Init_thread_footer(&DAT_146a270d0);
  }
  lVar10 = DAT_146a270b8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a270c8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd1520 FUN_141bd1520 body=541 status=ok
// SIG undefined FUN_141bd1520(void)

undefined8 FUN_141bd1520(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27040) && (_Init_thread_header(&DAT_146a27040), DAT_146a27040 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27038 = lVar10;
    _Init_thread_footer(&DAT_146a27040);
  }
  if ((*piVar11 < DAT_146a27050) && (_Init_thread_header(&DAT_146a27050), DAT_146a27050 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27048 = lVar10;
    _Init_thread_footer(&DAT_146a27050);
  }
  lVar10 = DAT_146a27038;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27048;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd1740 FUN_141bd1740 body=541 status=ok
// SIG undefined FUN_141bd1740(void)

undefined8 FUN_141bd1740(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26fc0) && (_Init_thread_header(&DAT_146a26fc0), DAT_146a26fc0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26fb8 = lVar10;
    _Init_thread_footer(&DAT_146a26fc0);
  }
  if ((*piVar11 < DAT_146a26fd0) && (_Init_thread_header(&DAT_146a26fd0), DAT_146a26fd0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26fc8 = lVar10;
    _Init_thread_footer(&DAT_146a26fd0);
  }
  lVar10 = DAT_146a26fb8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26fc8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd1960 FUN_141bd1960 body=541 status=ok
// SIG undefined FUN_141bd1960(void)

undefined8 FUN_141bd1960(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26f40) && (_Init_thread_header(&DAT_146a26f40), DAT_146a26f40 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26f38 = lVar10;
    _Init_thread_footer(&DAT_146a26f40);
  }
  if ((*piVar11 < DAT_146a26f50) && (_Init_thread_header(&DAT_146a26f50), DAT_146a26f50 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26f48 = lVar10;
    _Init_thread_footer(&DAT_146a26f50);
  }
  lVar10 = DAT_146a26f38;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26f48;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd1b80 FUN_141bd1b80 body=461 status=ok
// SIG undefined FUN_141bd1b80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bd1b80(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a27140) && (_Init_thread_header(&DAT_146a27140), DAT_146a27140 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a27138 = uVar3;
    _Init_thread_footer(&DAT_146a27140);
  }
  if ((*piVar6 < DAT_146a27150) && (_Init_thread_header(&DAT_146a27150), DAT_146a27150 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a27148 = uVar5;
    _Init_thread_footer(&DAT_146a27150);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be77f0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 == '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141bd1d50 FUN_141bd1d50 body=553 status=ok
// SIG undefined FUN_141bd1d50(void)

undefined8 FUN_141bd1d50(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26ec0) && (_Init_thread_header(&DAT_146a26ec0), DAT_146a26ec0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26eb8 = lVar10;
    _Init_thread_footer(&DAT_146a26ec0);
  }
  if ((*piVar11 < DAT_146a26ed0) && (_Init_thread_header(&DAT_146a26ed0), DAT_146a26ed0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26ec8 = lVar10;
    _Init_thread_footer(&DAT_146a26ed0);
  }
  lVar10 = DAT_146a26eb8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26ec8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd1f80 FUN_141bd1f80 body=525 status=ok
// SIG undefined FUN_141bd1f80(void)

undefined8 FUN_141bd1f80(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27100) && (_Init_thread_header(&DAT_146a27100), DAT_146a27100 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a270f8 = lVar10;
    _Init_thread_footer(&DAT_146a27100);
  }
  if ((*piVar11 < DAT_146a27110) && (_Init_thread_header(&DAT_146a27110), DAT_146a27110 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27108 = lVar10;
    _Init_thread_footer(&DAT_146a27110);
  }
  lVar10 = DAT_146a270f8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27108;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd2190 FUN_141bd2190 body=525 status=ok
// SIG undefined FUN_141bd2190(void)

undefined8 FUN_141bd2190(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27080) && (_Init_thread_header(&DAT_146a27080), DAT_146a27080 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27078 = lVar10;
    _Init_thread_footer(&DAT_146a27080);
  }
  if ((*piVar11 < DAT_146a27090) && (_Init_thread_header(&DAT_146a27090), DAT_146a27090 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27088 = lVar10;
    _Init_thread_footer(&DAT_146a27090);
  }
  lVar10 = DAT_146a27078;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27088;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd23a0 FUN_141bd23a0 body=525 status=ok
// SIG undefined FUN_141bd23a0(void)

undefined8 FUN_141bd23a0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27000) && (_Init_thread_header(&DAT_146a27000), DAT_146a27000 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26ff8 = lVar10;
    _Init_thread_footer(&DAT_146a27000);
  }
  if ((*piVar11 < DAT_146a27010) && (_Init_thread_header(&DAT_146a27010), DAT_146a27010 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27008 = lVar10;
    _Init_thread_footer(&DAT_146a27010);
  }
  lVar10 = DAT_146a26ff8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27008;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd25b0 FUN_141bd25b0 body=525 status=ok
// SIG undefined FUN_141bd25b0(void)

undefined8 FUN_141bd25b0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26f80) && (_Init_thread_header(&DAT_146a26f80), DAT_146a26f80 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26f78 = lVar10;
    _Init_thread_footer(&DAT_146a26f80);
  }
  if ((*piVar11 < DAT_146a26f90) && (_Init_thread_header(&DAT_146a26f90), DAT_146a26f90 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26f88 = lVar10;
    _Init_thread_footer(&DAT_146a26f90);
  }
  lVar10 = DAT_146a26f78;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26f88;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd27c0 FUN_141bd27c0 body=452 status=ok
// SIG undefined FUN_141bd27c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bd27c0(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a27180) && (_Init_thread_header(&DAT_146a27180), DAT_146a27180 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a27178 = uVar2;
    _Init_thread_footer(&DAT_146a27180);
  }
  if ((*piVar5 < DAT_146a27190) && (_Init_thread_header(&DAT_146a27190), DAT_146a27190 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a27188 = uVar4;
    _Init_thread_footer(&DAT_146a27190);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be77f0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141bd2990 FUN_141bd2990 body=546 status=ok
// SIG undefined FUN_141bd2990(void)

undefined8 FUN_141bd2990(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26f00) && (_Init_thread_header(&DAT_146a26f00), DAT_146a26f00 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26ef8 = lVar10;
    _Init_thread_footer(&DAT_146a26f00);
  }
  if ((*piVar11 < DAT_146a26f10) && (_Init_thread_header(&DAT_146a26f10), DAT_146a26f10 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26f08 = lVar10;
    _Init_thread_footer(&DAT_146a26f10);
  }
  lVar10 = DAT_146a26ef8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26f08;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd2bc0 FUN_141bd2bc0 body=541 status=ok
// SIG undefined FUN_141bd2bc0(void)

undefined8 FUN_141bd2bc0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a270e0) && (_Init_thread_header(&DAT_146a270e0), DAT_146a270e0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a270d8 = lVar10;
    _Init_thread_footer(&DAT_146a270e0);
  }
  if ((*piVar11 < DAT_146a270f0) && (_Init_thread_header(&DAT_146a270f0), DAT_146a270f0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a270e8 = lVar10;
    _Init_thread_footer(&DAT_146a270f0);
  }
  lVar10 = DAT_146a270d8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a270e8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd2de0 FUN_141bd2de0 body=541 status=ok
// SIG undefined FUN_141bd2de0(void)

undefined8 FUN_141bd2de0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27060) && (_Init_thread_header(&DAT_146a27060), DAT_146a27060 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27058 = lVar10;
    _Init_thread_footer(&DAT_146a27060);
  }
  if ((*piVar11 < DAT_146a27070) && (_Init_thread_header(&DAT_146a27070), DAT_146a27070 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27068 = lVar10;
    _Init_thread_footer(&DAT_146a27070);
  }
  lVar10 = DAT_146a27058;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27068;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd3000 FUN_141bd3000 body=541 status=ok
// SIG undefined FUN_141bd3000(void)

undefined8 FUN_141bd3000(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26fe0) && (_Init_thread_header(&DAT_146a26fe0), DAT_146a26fe0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26fd8 = lVar10;
    _Init_thread_footer(&DAT_146a26fe0);
  }
  if ((*piVar11 < DAT_146a26ff0) && (_Init_thread_header(&DAT_146a26ff0), DAT_146a26ff0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26fe8 = lVar10;
    _Init_thread_footer(&DAT_146a26ff0);
  }
  lVar10 = DAT_146a26fd8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26fe8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd3220 FUN_141bd3220 body=541 status=ok
// SIG undefined FUN_141bd3220(void)

undefined8 FUN_141bd3220(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26f60) && (_Init_thread_header(&DAT_146a26f60), DAT_146a26f60 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26f58 = lVar10;
    _Init_thread_footer(&DAT_146a26f60);
  }
  if ((*piVar11 < DAT_146a26f70) && (_Init_thread_header(&DAT_146a26f70), DAT_146a26f70 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26f68 = lVar10;
    _Init_thread_footer(&DAT_146a26f70);
  }
  lVar10 = DAT_146a26f58;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26f68;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd3440 FUN_141bd3440 body=461 status=ok
// SIG undefined FUN_141bd3440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bd3440(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a27160) && (_Init_thread_header(&DAT_146a27160), DAT_146a27160 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a27158 = uVar3;
    _Init_thread_footer(&DAT_146a27160);
  }
  if ((*piVar6 < DAT_146a27170) && (_Init_thread_header(&DAT_146a27170), DAT_146a27170 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a27168 = uVar5;
    _Init_thread_footer(&DAT_146a27170);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be77f0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 != '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141bd3610 FUN_141bd3610 body=553 status=ok
// SIG undefined FUN_141bd3610(void)

undefined8 FUN_141bd3610(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26ee0) && (_Init_thread_header(&DAT_146a26ee0), DAT_146a26ee0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26ed8 = lVar10;
    _Init_thread_footer(&DAT_146a26ee0);
  }
  if ((*piVar11 < DAT_146a26ef0) && (_Init_thread_header(&DAT_146a26ef0), DAT_146a26ef0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26ee8 = lVar10;
    _Init_thread_footer(&DAT_146a26ef0);
  }
  lVar10 = DAT_146a26ed8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26ee8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd3840 FUN_141bd3840 body=525 status=ok
// SIG undefined FUN_141bd3840(void)

undefined8 FUN_141bd3840(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27120) && (_Init_thread_header(&DAT_146a27120), DAT_146a27120 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27118 = lVar10;
    _Init_thread_footer(&DAT_146a27120);
  }
  if ((*piVar11 < DAT_146a27130) && (_Init_thread_header(&DAT_146a27130), DAT_146a27130 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27128 = lVar10;
    _Init_thread_footer(&DAT_146a27130);
  }
  lVar10 = DAT_146a27118;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27128;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd3a50 FUN_141bd3a50 body=525 status=ok
// SIG undefined FUN_141bd3a50(void)

undefined8 FUN_141bd3a50(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a270a0) && (_Init_thread_header(&DAT_146a270a0), DAT_146a270a0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27098 = lVar10;
    _Init_thread_footer(&DAT_146a270a0);
  }
  if ((*piVar11 < DAT_146a270b0) && (_Init_thread_header(&DAT_146a270b0), DAT_146a270b0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a270a8 = lVar10;
    _Init_thread_footer(&DAT_146a270b0);
  }
  lVar10 = DAT_146a27098;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a270a8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd3c60 FUN_141bd3c60 body=525 status=ok
// SIG undefined FUN_141bd3c60(void)

undefined8 FUN_141bd3c60(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a27020) && (_Init_thread_header(&DAT_146a27020), DAT_146a27020 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27018 = lVar10;
    _Init_thread_footer(&DAT_146a27020);
  }
  if ((*piVar11 < DAT_146a27030) && (_Init_thread_header(&DAT_146a27030), DAT_146a27030 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a27028 = lVar10;
    _Init_thread_footer(&DAT_146a27030);
  }
  lVar10 = DAT_146a27018;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a27028;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd3e70 FUN_141bd3e70 body=525 status=ok
// SIG undefined FUN_141bd3e70(void)

undefined8 FUN_141bd3e70(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26fa0) && (_Init_thread_header(&DAT_146a26fa0), DAT_146a26fa0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26f98 = lVar10;
    _Init_thread_footer(&DAT_146a26fa0);
  }
  if ((*piVar11 < DAT_146a26fb0) && (_Init_thread_header(&DAT_146a26fb0), DAT_146a26fb0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26fa8 = lVar10;
    _Init_thread_footer(&DAT_146a26fb0);
  }
  lVar10 = DAT_146a26f98;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26fa8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd4080 FUN_141bd4080 body=452 status=ok
// SIG undefined FUN_141bd4080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bd4080(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a271a0) && (_Init_thread_header(&DAT_146a271a0), DAT_146a271a0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a27198 = uVar2;
    _Init_thread_footer(&DAT_146a271a0);
  }
  if ((*piVar5 < DAT_146a271b0) && (_Init_thread_header(&DAT_146a271b0), DAT_146a271b0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a271a8 = uVar4;
    _Init_thread_footer(&DAT_146a271b0);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be77f0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 != '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141bd4250 FUN_141bd4250 body=546 status=ok
// SIG undefined FUN_141bd4250(void)

undefined8 FUN_141bd4250(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26f20) && (_Init_thread_header(&DAT_146a26f20), DAT_146a26f20 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26f18 = lVar10;
    _Init_thread_footer(&DAT_146a26f20);
  }
  if ((*piVar11 < DAT_146a26f30) && (_Init_thread_header(&DAT_146a26f30), DAT_146a26f30 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26f28 = lVar10;
    _Init_thread_footer(&DAT_146a26f30);
  }
  lVar10 = DAT_146a26f18;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26f28;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be77f0(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd4480 FUN_141bd4480 body=541 status=ok
// SIG undefined FUN_141bd4480(void)

undefined8 FUN_141bd4480(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26d80) && (_Init_thread_header(&DAT_146a26d80), DAT_146a26d80 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26d78 = lVar10;
    _Init_thread_footer(&DAT_146a26d80);
  }
  if ((*piVar11 < DAT_146a26d90) && (_Init_thread_header(&DAT_146a26d90), DAT_146a26d90 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26d88 = lVar10;
    _Init_thread_footer(&DAT_146a26d90);
  }
  lVar10 = DAT_146a26d78;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26d88;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd46a0 FUN_141bd46a0 body=541 status=ok
// SIG undefined FUN_141bd46a0(void)

undefined8 FUN_141bd46a0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26c80) && (_Init_thread_header(&DAT_146a26c80), DAT_146a26c80 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26c78 = lVar10;
    _Init_thread_footer(&DAT_146a26c80);
  }
  if ((*piVar11 < DAT_146a26c90) && (_Init_thread_header(&DAT_146a26c90), DAT_146a26c90 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26c88 = lVar10;
    _Init_thread_footer(&DAT_146a26c90);
  }
  lVar10 = DAT_146a26c78;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26c88;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd48c0 FUN_141bd48c0 body=541 status=ok
// SIG undefined FUN_141bd48c0(void)

undefined8 FUN_141bd48c0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26b80) && (_Init_thread_header(&DAT_146a26b80), DAT_146a26b80 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26b78 = lVar10;
    _Init_thread_footer(&DAT_146a26b80);
  }
  if ((*piVar11 < DAT_146a26b90) && (_Init_thread_header(&DAT_146a26b90), DAT_146a26b90 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26b88 = lVar10;
    _Init_thread_footer(&DAT_146a26b90);
  }
  lVar10 = DAT_146a26b78;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26b88;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd4ae0 FUN_141bd4ae0 body=541 status=ok
// SIG undefined FUN_141bd4ae0(void)

undefined8 FUN_141bd4ae0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26a80) && (_Init_thread_header(&DAT_146a26a80), DAT_146a26a80 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26a78 = lVar10;
    _Init_thread_footer(&DAT_146a26a80);
  }
  if ((*piVar11 < DAT_146a26a90) && (_Init_thread_header(&DAT_146a26a90), DAT_146a26a90 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26a88 = lVar10;
    _Init_thread_footer(&DAT_146a26a90);
  }
  lVar10 = DAT_146a26a78;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26a88;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd4d00 FUN_141bd4d00 body=461 status=ok
// SIG undefined FUN_141bd4d00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bd4d00(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a26e40) && (_Init_thread_header(&DAT_146a26e40), DAT_146a26e40 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a26e38 = uVar3;
    _Init_thread_footer(&DAT_146a26e40);
  }
  if ((*piVar6 < DAT_146a26e50) && (_Init_thread_header(&DAT_146a26e50), DAT_146a26e50 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a26e48 = uVar5;
    _Init_thread_footer(&DAT_146a26e50);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be76d0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 == '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141bd4ed0 FUN_141bd4ed0 body=553 status=ok
// SIG undefined FUN_141bd4ed0(void)

undefined8 FUN_141bd4ed0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26980) && (_Init_thread_header(&DAT_146a26980), DAT_146a26980 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26978 = lVar10;
    _Init_thread_footer(&DAT_146a26980);
  }
  if ((*piVar11 < DAT_146a26990) && (_Init_thread_header(&DAT_146a26990), DAT_146a26990 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26988 = lVar10;
    _Init_thread_footer(&DAT_146a26990);
  }
  lVar10 = DAT_146a26978;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26988;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd5100 FUN_141bd5100 body=525 status=ok
// SIG undefined FUN_141bd5100(void)

undefined8 FUN_141bd5100(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26e00) && (_Init_thread_header(&DAT_146a26e00), DAT_146a26e00 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26df8 = lVar10;
    _Init_thread_footer(&DAT_146a26e00);
  }
  if ((*piVar11 < DAT_146a26e10) && (_Init_thread_header(&DAT_146a26e10), DAT_146a26e10 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26e08 = lVar10;
    _Init_thread_footer(&DAT_146a26e10);
  }
  lVar10 = DAT_146a26df8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26e08;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd5310 FUN_141bd5310 body=525 status=ok
// SIG undefined FUN_141bd5310(void)

undefined8 FUN_141bd5310(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26d00) && (_Init_thread_header(&DAT_146a26d00), DAT_146a26d00 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26cf8 = lVar10;
    _Init_thread_footer(&DAT_146a26d00);
  }
  if ((*piVar11 < DAT_146a26d10) && (_Init_thread_header(&DAT_146a26d10), DAT_146a26d10 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26d08 = lVar10;
    _Init_thread_footer(&DAT_146a26d10);
  }
  lVar10 = DAT_146a26cf8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26d08;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd5520 FUN_141bd5520 body=525 status=ok
// SIG undefined FUN_141bd5520(void)

undefined8 FUN_141bd5520(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26c00) && (_Init_thread_header(&DAT_146a26c00), DAT_146a26c00 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26bf8 = lVar10;
    _Init_thread_footer(&DAT_146a26c00);
  }
  if ((*piVar11 < DAT_146a26c10) && (_Init_thread_header(&DAT_146a26c10), DAT_146a26c10 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26c08 = lVar10;
    _Init_thread_footer(&DAT_146a26c10);
  }
  lVar10 = DAT_146a26bf8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26c08;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd5730 FUN_141bd5730 body=525 status=ok
// SIG undefined FUN_141bd5730(void)

undefined8 FUN_141bd5730(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26b00) && (_Init_thread_header(&DAT_146a26b00), DAT_146a26b00 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26af8 = lVar10;
    _Init_thread_footer(&DAT_146a26b00);
  }
  if ((*piVar11 < DAT_146a26b10) && (_Init_thread_header(&DAT_146a26b10), DAT_146a26b10 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26b08 = lVar10;
    _Init_thread_footer(&DAT_146a26b10);
  }
  lVar10 = DAT_146a26af8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26b08;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd5940 FUN_141bd5940 body=452 status=ok
// SIG undefined FUN_141bd5940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bd5940(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a26e80) && (_Init_thread_header(&DAT_146a26e80), DAT_146a26e80 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26e78 = uVar2;
    _Init_thread_footer(&DAT_146a26e80);
  }
  if ((*piVar5 < DAT_146a26e90) && (_Init_thread_header(&DAT_146a26e90), DAT_146a26e90 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26e88 = uVar4;
    _Init_thread_footer(&DAT_146a26e90);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be76d0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141bd5b10 FUN_141bd5b10 body=546 status=ok
// SIG undefined FUN_141bd5b10(void)

undefined8 FUN_141bd5b10(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26a00) && (_Init_thread_header(&DAT_146a26a00), DAT_146a26a00 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a269f8 = lVar10;
    _Init_thread_footer(&DAT_146a26a00);
  }
  if ((*piVar11 < DAT_146a26a10) && (_Init_thread_header(&DAT_146a26a10), DAT_146a26a10 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26a08 = lVar10;
    _Init_thread_footer(&DAT_146a26a10);
  }
  lVar10 = DAT_146a269f8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26a08;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd5d40 FUN_141bd5d40 body=541 status=ok
// SIG undefined FUN_141bd5d40(void)

undefined8 FUN_141bd5d40(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26dc0) && (_Init_thread_header(&DAT_146a26dc0), DAT_146a26dc0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26db8 = lVar10;
    _Init_thread_footer(&DAT_146a26dc0);
  }
  if ((*piVar11 < DAT_146a26dd0) && (_Init_thread_header(&DAT_146a26dd0), DAT_146a26dd0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26dc8 = lVar10;
    _Init_thread_footer(&DAT_146a26dd0);
  }
  lVar10 = DAT_146a26db8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26dc8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd5f60 FUN_141bd5f60 body=541 status=ok
// SIG undefined FUN_141bd5f60(void)

undefined8 FUN_141bd5f60(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26cc0) && (_Init_thread_header(&DAT_146a26cc0), DAT_146a26cc0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26cb8 = lVar10;
    _Init_thread_footer(&DAT_146a26cc0);
  }
  if ((*piVar11 < DAT_146a26cd0) && (_Init_thread_header(&DAT_146a26cd0), DAT_146a26cd0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26cc8 = lVar10;
    _Init_thread_footer(&DAT_146a26cd0);
  }
  lVar10 = DAT_146a26cb8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26cc8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd6180 FUN_141bd6180 body=541 status=ok
// SIG undefined FUN_141bd6180(void)

undefined8 FUN_141bd6180(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26bc0) && (_Init_thread_header(&DAT_146a26bc0), DAT_146a26bc0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26bb8 = lVar10;
    _Init_thread_footer(&DAT_146a26bc0);
  }
  if ((*piVar11 < DAT_146a26bd0) && (_Init_thread_header(&DAT_146a26bd0), DAT_146a26bd0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26bc8 = lVar10;
    _Init_thread_footer(&DAT_146a26bd0);
  }
  lVar10 = DAT_146a26bb8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26bc8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd63a0 FUN_141bd63a0 body=541 status=ok
// SIG undefined FUN_141bd63a0(void)

undefined8 FUN_141bd63a0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26ac0) && (_Init_thread_header(&DAT_146a26ac0), DAT_146a26ac0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26ab8 = lVar10;
    _Init_thread_footer(&DAT_146a26ac0);
  }
  if ((*piVar11 < DAT_146a26ad0) && (_Init_thread_header(&DAT_146a26ad0), DAT_146a26ad0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26ac8 = lVar10;
    _Init_thread_footer(&DAT_146a26ad0);
  }
  lVar10 = DAT_146a26ab8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26ac8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd65c0 FUN_141bd65c0 body=461 status=ok
// SIG undefined FUN_141bd65c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bd65c0(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a26e60) && (_Init_thread_header(&DAT_146a26e60), DAT_146a26e60 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a26e58 = uVar3;
    _Init_thread_footer(&DAT_146a26e60);
  }
  if ((*piVar6 < DAT_146a26e70) && (_Init_thread_header(&DAT_146a26e70), DAT_146a26e70 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a26e68 = uVar5;
    _Init_thread_footer(&DAT_146a26e70);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be76d0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 != '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141bd6790 FUN_141bd6790 body=553 status=ok
// SIG undefined FUN_141bd6790(void)

undefined8 FUN_141bd6790(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a269c0) && (_Init_thread_header(&DAT_146a269c0), DAT_146a269c0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a269b8 = lVar10;
    _Init_thread_footer(&DAT_146a269c0);
  }
  if ((*piVar11 < DAT_146a269d0) && (_Init_thread_header(&DAT_146a269d0), DAT_146a269d0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a269c8 = lVar10;
    _Init_thread_footer(&DAT_146a269d0);
  }
  lVar10 = DAT_146a269b8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a269c8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}


