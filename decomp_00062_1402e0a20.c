// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1402e0a20 FUN_1402e0a20 body=344 status=ok
// SIG undefined FUN_1402e0a20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e0a20(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82798) {
    _Init_thread_header(&DAT_146a82798);
    if (DAT_146a82798 == -1) {
      FString::PrintfImpl(&DAT_146a82788,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",L"false",L"false",&DAT_143f600c8,L"false",&DAT_143f600c8
                         );
      atexit((_func_5014 *)&LAB_143e96df0);
      _Init_thread_footer(&DAT_146a82798);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82790 != 0) {
    puVar1 = DAT_146a82788;
  }
  FShaderType::FShaderType
            (&DAT_146a98550,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a98550 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a98680 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a98688 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a98690 = BuildSettings::IsPromotedBuild;
  _DAT_146a98698 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,0,0,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94580);
  return;
}



// FUNCTION 1402e0b80 FUN_1402e0b80 body=344 status=ok
// SIG undefined FUN_1402e0b80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e0b80(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82780) {
    _Init_thread_header(&DAT_146a82780);
    if (DAT_146a82780 == -1) {
      FString::PrintfImpl(&DAT_146a82770,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",L"false",L"false",&DAT_143f600c8,L"false",L"false");
      atexit((_func_5014 *)&LAB_143e96e10);
      _Init_thread_footer(&DAT_146a82780);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82778 != 0) {
    puVar1 = DAT_146a82770;
  }
  FShaderType::FShaderType
            (&DAT_146a986a0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a986a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a987d0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a987d8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a987e0 = BuildSettings::IsPromotedBuild;
  _DAT_146a987e8 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,0,0,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94590);
  return;
}



// FUNCTION 1402e0ce0 FUN_1402e0ce0 body=344 status=ok
// SIG undefined FUN_1402e0ce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e0ce0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82768) {
    _Init_thread_header(&DAT_146a82768);
    if (DAT_146a82768 == -1) {
      FString::PrintfImpl(&DAT_146a82758,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",L"false",L"false",L"false",&DAT_143f600c8,&DAT_143f600c8
                         );
      atexit((_func_5014 *)&LAB_143e96e30);
      _Init_thread_footer(&DAT_146a82768);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82760 != 0) {
    puVar1 = DAT_146a82758;
  }
  FShaderType::FShaderType
            (&DAT_146a987f0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a987f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a98920 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a98928 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a98930 = BuildSettings::IsPromotedBuild;
  _DAT_146a98938 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,0,0,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e945a0);
  return;
}



// FUNCTION 1402e0e40 FUN_1402e0e40 body=344 status=ok
// SIG undefined FUN_1402e0e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e0e40(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82750) {
    _Init_thread_header(&DAT_146a82750);
    if (DAT_146a82750 == -1) {
      FString::PrintfImpl(&DAT_146a82740,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",L"false",L"false",L"false",&DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e96e50);
      _Init_thread_footer(&DAT_146a82750);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82748 != 0) {
    puVar1 = DAT_146a82740;
  }
  FShaderType::FShaderType
            (&DAT_146a98940,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a98940 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a98a70 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a98a78 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a98a80 = BuildSettings::IsPromotedBuild;
  _DAT_146a98a88 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,0,0,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e945b0);
  return;
}



// FUNCTION 1402e0fa0 FUN_1402e0fa0 body=344 status=ok
// SIG undefined FUN_1402e0fa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e0fa0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82738) {
    _Init_thread_header(&DAT_146a82738);
    if (DAT_146a82738 == -1) {
      FString::PrintfImpl(&DAT_146a82728,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",L"false",L"false",L"false",L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96e70);
      _Init_thread_footer(&DAT_146a82738);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82730 != 0) {
    puVar1 = DAT_146a82728;
  }
  FShaderType::FShaderType
            (&DAT_146a98a90,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a98a90 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a98bc0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a98bc8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a98bd0 = BuildSettings::IsPromotedBuild;
  _DAT_146a98bd8 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,0,0,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e945c0);
  return;
}



// FUNCTION 1402e1100 FUN_1402e1100 body=337 status=ok
// SIG undefined FUN_1402e1100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e1100(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82720) {
    _Init_thread_header(&DAT_146a82720);
    if (DAT_146a82720 == -1) {
      FString::PrintfImpl(&DAT_146a82710,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",L"false",L"false",L"false",L"false",L"false");
      atexit((_func_5014 *)&LAB_143e96e90);
      _Init_thread_footer(&DAT_146a82720);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82718 != 0) {
    puVar1 = DAT_146a82710;
  }
  FShaderType::FShaderType
            (&DAT_146a98be0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a98be0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a98d10 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a98d18 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a98d20 = BuildSettings::IsPromotedBuild;
  _DAT_146a98d28 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,0,0,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e945d0);
  return;
}



// FUNCTION 1402e1260 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'VisualizeTexturePS<2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a83190,0,L"VisualizeTexturePSTexture2DNoMSAA",
             L"/Engine/Private/VisualizeTexture.usf",L"VisualizeTexturePS",3,1,FUN_141d255c0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a83190 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a832c0 = FUN_141d24940;
  _DAT_146a832c8 = BuildSettings::IsPromotedBuild;
  _DAT_146a832d0 = BuildSettings::IsPromotedBuild;
  _DAT_146a832d8 = &LAB_141d44a50;
  atexit((_func_5014 *)&LAB_143e945e0);
  return;
}



// FUNCTION 1402e1310 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'VisualizeTexturePS<3>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a832e0,0,L"VisualizeTexturePSTexture3D",L"/Engine/Private/VisualizeTexture.usf"
             ,L"VisualizeTexturePS",3,1,FUN_141d255c0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a832e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a83410 = FUN_141d24940;
  _DAT_146a83418 = BuildSettings::IsPromotedBuild;
  _DAT_146a83420 = BuildSettings::IsPromotedBuild;
  _DAT_146a83428 = &LAB_141d44a70;
  atexit((_func_5014 *)&LAB_143e945f0);
  return;
}



// FUNCTION 1402e13c0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'VisualizeTexturePS<4>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a83430,0,L"VisualizeTexturePSCubeArray",L"/Engine/Private/VisualizeTexture.usf"
             ,L"VisualizeTexturePS",3,1,FUN_141d255c0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a83430 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a83560 = FUN_141d24940;
  _DAT_146a83568 = BuildSettings::IsPromotedBuild;
  _DAT_146a83570 = BuildSettings::IsPromotedBuild;
  _DAT_146a83578 = &LAB_141d44a90;
  atexit((_func_5014 *)&LAB_143e94600);
  return;
}



// FUNCTION 1402e1470 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'VisualizeTexturePS<5>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a83580,0,L"VisualizeTexturePSTexture2DMSAA",
             L"/Engine/Private/VisualizeTexture.usf",L"VisualizeTexturePS",3,1,FUN_141d255c0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a83580 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a836b0 = FUN_141d24940;
  _DAT_146a836b8 = BuildSettings::IsPromotedBuild;
  _DAT_146a836c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a836c8 = &LAB_141d44ab0;
  atexit((_func_5014 *)&LAB_143e94610);
  return;
}



// FUNCTION 1402e1520 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'VisualizeTexturePS<6>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a836d0,0,L"VisualizeTexturePSTexture2DDepthStencilNoMSAA",
             L"/Engine/Private/VisualizeTexture.usf",L"VisualizeTexturePS",3,1,FUN_141d255c0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a836d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a83800 = FUN_141d24940;
  _DAT_146a83808 = BuildSettings::IsPromotedBuild;
  _DAT_146a83810 = BuildSettings::IsPromotedBuild;
  _DAT_146a83818 = &LAB_141d44ad0;
  atexit((_func_5014 *)&LAB_143e94620);
  return;
}



// FUNCTION 1402e15d0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'VisualizeTexturePS<7>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a83820,0,L"VisualizeTexturePSTexture2DUINT8",
             L"/Engine/Private/VisualizeTexture.usf",L"VisualizeTexturePS",3,1,FUN_141d255c0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a83820 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a83950 = FUN_141d24940;
  _DAT_146a83958 = BuildSettings::IsPromotedBuild;
  _DAT_146a83960 = BuildSettings::IsPromotedBuild;
  _DAT_146a83968 = &LAB_141d44af0;
  atexit((_func_5014 *)&LAB_143e94630);
  return;
}



// FUNCTION 1402e1680 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'VisualizeTexturePS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a83040,0,L"VisualizeTexturePSCube",L"/Engine/Private/VisualizeTexture.usf",
             L"VisualizeTexturePS",3,1,FUN_141d255c0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a83040 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a83170 = FUN_141d24940;
  _DAT_146a83178 = BuildSettings::IsPromotedBuild;
  _DAT_146a83180 = BuildSettings::IsPromotedBuild;
  _DAT_146a83188 = &LAB_141d44b10;
  atexit((_func_5014 *)&LAB_143e94640);
  return;
}



// FUNCTION 1402e1730 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FAccumulateCubeFacesPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a823f0,0,L"FAccumulateCubeFacesPS",
             L"/Engine/Private/ReflectionEnvironmentShaders.usf",L"AccumulateCubeFacesPS",3,1,
             FUN_141d25630,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a823f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a82520 = FAccumulateCubeFacesPS::ConstructCompiledInstance;
  _DAT_146a82528 = BuildSettings::IsPromotedBuild;
  _DAT_146a82530 = BuildSettings::IsPromotedBuild;
  _DAT_146a82538 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e94650);
  return;
}



// FUNCTION 1402e17e0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FAccumulateDiffuseIrradiancePS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a822a0,0,L"FAccumulateDiffuseIrradiancePS",
             L"/Engine/Private/ReflectionEnvironmentShaders.usf",L"DiffuseIrradianceAccumulatePS",3,
             1,FUN_141d25680,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a822a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a823d0 = FAccumulateDiffuseIrradiancePS::ConstructCompiledInstance;
  _DAT_146a823d8 = BuildSettings::IsPromotedBuild;
  _DAT_146a823e0 = BuildSettings::IsPromotedBuild;
  _DAT_146a823e8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e94660);
  return;
}



// FUNCTION 1402e1890 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FComputeBrightnessPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a81c10,0,L"FComputeBrightnessPS",
             L"/Engine/Private/ReflectionEnvironmentShaders.usf",L"ComputeBrightnessMain",3,1,
             FUN_141a14600,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a81c10 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a81d40 = FComputeBrightnessPS::ConstructCompiledInstance;
  _DAT_146a81d48 = BuildSettings::IsPromotedBuild;
  _DAT_146a81d50 = BuildSettings::IsPromotedBuild;
  _DAT_146a81d58 = &LAB_141d44b30;
  atexit((_func_5014 *)&LAB_143e94670);
  return;
}



// FUNCTION 1402e1940 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCopyCubemapToCubeFacePS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a82000,0,L"FCopyCubemapToCubeFacePS",
             L"/Engine/Private/ReflectionEnvironmentShaders.usf",L"CopyCubemapToCubeFaceColorPS",3,1
             ,FUN_141d256e0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a82000 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a82130 = FCopyCubemapToCubeFacePS::ConstructCompiledInstance;
  _DAT_146a82138 = BuildSettings::IsPromotedBuild;
  _DAT_146a82140 = BuildSettings::IsPromotedBuild;
  _DAT_146a82148 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e94680);
  return;
}



// FUNCTION 1402e19f0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCopyDiffuseIrradiancePS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a82150,0,L"FCopyDiffuseIrradiancePS",
             L"/Engine/Private/ReflectionEnvironmentShaders.usf",L"DiffuseIrradianceCopyPS",3,1,
             FUN_141d25740,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a82150 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a82280 = FUN_141d24d90;
  _DAT_146a82288 = BuildSettings::IsPromotedBuild;
  _DAT_146a82290 = BuildSettings::IsPromotedBuild;
  _DAT_146a82298 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e94690);
  return;
}



// FUNCTION 1402e1aa0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCopySceneColorToCubeFacePS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a81eb0,0,L"FCopySceneColorToCubeFacePS",
             L"/Engine/Private/ReflectionEnvironmentShaders.usf",L"CopySceneColorToCubeFaceColorPS",
             3,1,TCapsuleShadowingUpsamplePS<1,1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a81eb0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a81fe0 = TCapsuleShadowingUpsamplePS<1,1>::ConstructCompiledInstance;
  _DAT_146a81fe8 = BuildSettings::IsPromotedBuild;
  _DAT_146a81ff0 = BuildSettings::IsPromotedBuild;
  _DAT_146a81ff8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e946a0);
  return;
}



// FUNCTION 1402e1b50 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCopyToCubeFaceVS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a81d60,0,L"FCopyToCubeFaceVS",
             L"/Engine/Private/ReflectionEnvironmentShaders.usf",L"CopyToCubeFaceVS",0,1,
             FUN_14049d790,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a81d60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a81e90 = FUN_14049d5b0;
  _DAT_146a81e98 = BuildSettings::IsPromotedBuild;
  _DAT_146a81ea0 = BuildSettings::IsPromotedBuild;
  _DAT_146a81ea8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e946b0);
  return;
}



// FUNCTION 1402e1c00 FUN_1402e1c00 body=170 status=ok
// SIG undefined FUN_1402e1c00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e1c00(void)

{
  FShaderType::FShaderType
            (&DAT_146a81ac0,0,L"FCubeCopyPS",L"/Engine/Private/ReflectionEnvironmentShaders.usf",
             L"CubeCopyPS",3,1,FUN_141d257b0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a81ac0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a81bf0 = FUN_141d24ee0;
  _DAT_146a81bf8 = BuildSettings::IsPromotedBuild;
  _DAT_146a81c00 = BuildSettings::IsPromotedBuild;
  _DAT_146a81c08 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e946c0);
  return;
}



// FUNCTION 1402e1cb0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FCubeFilterPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a81970,0,L"FCubeFilterPS",L"/Engine/Private/ReflectionEnvironmentShaders.usf",
             L"DownsamplePS",3,1,FUN_141ab77a0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a81970 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a81aa0 = FUN_141d25020;
  _DAT_146a81aa8 = BuildSettings::IsPromotedBuild;
  _DAT_146a81ab0 = BuildSettings::IsPromotedBuild;
  _DAT_146a81ab8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e946d0);
  return;
}



// FUNCTION 1402e1d60 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FPostProcessScreenSpaceReflectionsPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a81230,0,L"FPostProcessScreenSpaceReflectionsPS",
             L"/Engine/Private/ScreenSpaceReflections.usf",L"ScreenSpaceReflectionsPS",3,0xc,
             FUN_141d25810,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a81230 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a81360 = FUN_141d25050;
  _DAT_146a81368 = FPostProcessScreenSpaceReflectionsPS::ShouldCompilePermutationImpl;
  _DAT_146a81370 = BuildSettings::IsPromotedBuild;
  _DAT_146a81378 = FPostProcessScreenSpaceReflectionsPS::ModifyCompilationEnvironmentImpl;
  atexit((_func_5014 *)&LAB_143e946e0);
  return;
}



// FUNCTION 1402e1e10 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FPostProcessScreenSpaceReflectionsStencilPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a810e0,0,L"FPostProcessScreenSpaceReflectionsStencilPS",
             L"/Engine/Private/ScreenSpaceReflections.usf",L"ScreenSpaceReflectionsStencilPS",3,1,
             FPostProcessAmbientOcclusionSetupPS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a810e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a81210 = FUN_141d251c0;
  _DAT_146a81218 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a81220 = BuildSettings::IsPromotedBuild;
  _DAT_146a81228 = FPostProcessScreenSpaceReflectionsStencilPS::ModifyCompilationEnvironmentImpl;
  atexit((_func_5014 *)&LAB_143e946f0);
  return;
}



// FUNCTION 1402e1ec0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FPostProcessVisualizeShadingModelsPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a81380,0,L"FPostProcessVisualizeShadingModelsPS",
             L"/Engine/Private/VisualizeShadingModels.usf",L"MainPS",3,1,
             FPostProcessAmbientOcclusionSetupPS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a81380 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a814b0 = FUN_141d252b0;
  _DAT_146a814b8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a814c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a814c8 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e94700);
  return;
}



// FUNCTION 1402e1f70 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FPrimitiveDistanceAccuracyPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a81620,0,L"FPrimitiveDistanceAccuracyPS",
             L"/Engine/Private/PrimitiveDistanceAccuracyPixelShader.usf",L"Main",3,1,
             FPrimitiveDistanceAccuracyPS::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a81620 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a81750 = FPrimitiveDistanceAccuracyPS::ConstructCompiledInstance;
  _DAT_146a81758 = FOutputDevice::CanBeUsedOnAnyThread;
  _DAT_146a81760 = BuildSettings::IsPromotedBuild;
  _DAT_146a81768 = FUN_141d44b50;
  atexit((_func_5014 *)&LAB_143e94710);
  return;
}



// FUNCTION 1402e2020 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FVisualizeTexturePresentPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a814d0,0,L"FVisualizeTexturePresentPS",L"/Engine/Private/VisualizeTexture.usf",
             L"PresentPS",3,1,FUN_141b2daa0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a814d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a81600 = FVisualizeTexturePresentPS::ConstructCompiledInstance;
  _DAT_146a81608 = BuildSettings::IsPromotedBuild;
  _DAT_146a81610 = BuildSettings::IsPromotedBuild;
  _DAT_146a81618 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e94720);
  return;
}



// FUNCTION 1402e20d0 FUN_1402e20d0 body=117 status=ok
// SIG undefined FUN_1402e20d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e20d0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a82570 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.AnimatingTransformThreshold",0x38d1b717,
                  L"Number of squared centimeters a skeletal mesh should move before updating the transform."
                  ,0);
  _DAT_146a82568 = &PTR_FUN_143f3ecf8;
  _DAT_146a82578 = (**(code **)(*DAT_146a82570 + 0x40))(DAT_146a82570);
  atexit(FUN_143e94730);
  return;
}



// FUNCTION 1402e2150 `dynamic_initializer_for_'CVarDoLazyStaticMeshUpdate'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDoLazyStaticMeshUpdate''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDoLazyStaticMeshUpdate__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a82618 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DoLazyStaticMeshUpdate",0,
                  L"If true, then do not add meshes to the static mesh draw lists until they are visible. Experiemental option."
                  ,0);
  _DAT_146a82610 = &PTR_FUN_143f3ecf8;
  DAT_146a82620 = (**(code **)(*DAT_146a82618 + 0x38))(DAT_146a82618);
  atexit(FUN_143e94780);
  return;
}



// FUNCTION 1402e21c0 FUN_1402e21c0 body=277 status=ok
// SIG undefined FUN_1402e21c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e21c0(void)

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
    plVar1[1] = (longlong)FUN_141d297b0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  _DAT_146a82628 = &PTR_FUN_143f3ece8;
  DAT_146a82630 = &local_18;
  _DAT_146a82638 = 0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  puVar3 = (undefined8 *)
           (**(code **)(*DAT_1468b1f88 + 0x40))(DAT_1468b1f88,local_res8,DAT_146a82630);
  _DAT_146a82638 = *puVar3;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402e22c4;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402e22c4:
  atexit((_func_5014 *)&LAB_143e947d0);
  return;
}



// FUNCTION 1402e22e0 `dynamic_initializer_for_'CVarDoTiledReflections'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDoTiledReflections''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDoTiledReflections__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a81800 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DoTiledReflections",1,
                  L"Compute Reflection Environment with Tiled compute shader..\n 0: off\n 1: on (default)"
                  ,0x20);
  _DAT_146a817f8 = &PTR_FUN_143f3ecf8;
  _DAT_146a81808 = (**(code **)(*DAT_146a81800 + 0x38))(DAT_146a81800);
  atexit(FUN_143e947e0);
  return;
}



// FUNCTION 1402e2360 FUN_1402e2360 body=115 status=ok
// SIG undefined FUN_1402e2360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e2360(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a81960 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.RenderCore.AllowPSOCacheFlushing",1,
                  L"If 1, FlushPSOCache is called on scene teardown",0x20);
  _DAT_146a81958 = &PTR_FUN_143f3ecf8;
  _DAT_146a81968 = (**(code **)(*DAT_146a81960 + 0x38))(DAT_146a81960);
  atexit(FUN_143e94830);
  return;
}



// FUNCTION 1402e23e0 `dynamic_initializer_for_'CVarReflectionCaptureGPUArrayCopy'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarReflectionCaptureGPUArrayCopy''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarReflectionCaptureGPUArrayCopy__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a81830 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ReflectionCaptureGPUArrayCopy",1,
                  L"Do a fast copy of the reflection capture array when resizing if possible. This avoids hitches on the rendering thread when the cubemap array needs to grow.\n 0 is off, 1 is on (default)"
                  ,4);
  _DAT_146a81828 = &PTR_FUN_143f3ecf8;
  DAT_146a81838 = (**(code **)(*DAT_146a81830 + 0x38))(DAT_146a81830);
  atexit(FUN_143e94880);
  return;
}



// FUNCTION 1402e2460 `dynamic_initializer_for_'CVarReflectionEnvironment'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarReflectionEnvironment''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarReflectionEnvironment__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a81798 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ReflectionEnvironment",1,
                  L"Whether to render the reflection environment feature, which implements local reflections through Reflection Capture actors.\n 0: off\n 1: on and blend with scene (default) 2: on and overwrite scene (only in non-shipping builds)"
                  ,0x60);
  _DAT_146a81790 = &PTR_FUN_143f3ecf8;
  DAT_146a817a0 = (**(code **)(*DAT_146a81798 + 0x38))(DAT_146a81798);
  atexit(FUN_143e948d0);
  return;
}



// FUNCTION 1402e24e0 `dynamic_initializer_for_'CVarReflectionEnvironmentBeginMixingRoughness'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarReflectionEnvironmentBeginMixingRoughness''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarReflectionEnvironmentBeginMixingRoughness__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a817d0 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.ReflectionEnvironmentBeginMixingRoughness",&DAT_1464c2e4c,
                  L"Min roughness value at which to begin mixing reflection captures with lightmap indirect diffuse."
                  ,0x60);
  _DAT_146a817c8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e94920);
  return;
}



// FUNCTION 1402e2550 `dynamic_initializer_for_'CVarReflectionEnvironmentEndMixingRoughness'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarReflectionEnvironmentEndMixingRoughness''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarReflectionEnvironmentEndMixingRoughness__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a817e0 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.ReflectionEnvironmentEndMixingRoughness",&DAT_1464c2e50,
                  L"Min roughness value at which to end mixing reflection captures with lightmap indirect diffuse."
                  ,0x60);
  _DAT_146a817d8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e94970);
  return;
}



// FUNCTION 1402e25c0 `dynamic_initializer_for_'CVarReflectionEnvironmentLightmapMixBasedOnRoughness'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarReflectionEnvironmentLightmapMixBasedOnRoughness''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarReflectionEnvironmentLightmapMixBasedOnRoughness__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a817c0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.ReflectionEnvironmentLightmapMixBasedOnRoughness",&DAT_1464c2e48
                  ,
                  L"Whether to reduce lightmap mixing with reflection captures for very smooth surfaces.  This is useful to make sure reflection captures match SSR / planar reflections in brightness."
                  ,0x60);
  _DAT_146a817b8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e949c0);
  return;
}



// FUNCTION 1402e2630 `dynamic_initializer_for_'CVarReflectionEnvironmentLightmapMixLargestWeight'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarReflectionEnvironmentLightmapMixLargestWeight''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarReflectionEnvironmentLightmapMixLargestWeight__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a817f0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.ReflectionEnvironmentLightmapMixLargestWeight",&DAT_1464c2e54,
                  L"When set to 1 can be used to clamp lightmap mixing such that only darkening from lightmaps are applied to reflection captures."
                  ,0x60);
  _DAT_146a817e8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e94a10);
  return;
}



// FUNCTION 1402e26a0 `dynamic_initializer_for_'CVarReflectionEnvironmentLightmapMixing'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarReflectionEnvironmentLightmapMixing''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarReflectionEnvironmentLightmapMixing__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a817b0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.ReflectionEnvironmentLightmapMixing",&DAT_1464c2e44,
                  L"Whether to mix indirect specular from reflection captures with indirect diffuse from lightmaps for rough surfaces."
                  ,0x60);
  _DAT_146a817a8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e94a60);
  return;
}



// FUNCTION 1402e2710 FUN_1402e2710 body=112 status=ok
// SIG undefined FUN_1402e2710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e2710(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a810d0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Reflection.Vrs",0,
                  L" 2: on and overwrite scene (only in non-shipping builds)",0x20);
  _DAT_146a810c8 = &PTR_FUN_143f3ecf8;
  DAT_146a810d8 = (**(code **)(*DAT_146a810d0 + 0x38))(DAT_146a810d0);
  atexit(FUN_143e94ab0);
  return;
}



// FUNCTION 1402e2780 FUN_1402e2780 body=115 status=ok
// SIG undefined FUN_1402e2780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e2780(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a82558 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RemoveBlackLightsFromScene",1,
                  L"0: Lights that get updated to 0 intensity are left in the scene (default UE4 behavior) \n1: Lights that get updated to 0 intensity are removed from the scene, and added back if intensity becomes >0"
                  ,0);
  _DAT_146a82550 = &PTR_FUN_143f3ecf8;
  DAT_146a82560 = (**(code **)(*DAT_146a82558 + 0x38))(DAT_146a82558);
  atexit(FUN_143e94b00);
  return;
}



// FUNCTION 1402e2800 `dynamic_initializer_for_'CVarSSRCone'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSSRCone''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSSRCone__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a810a8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.SSR.Cone",0,
                  L"Defines if we use cone traced screen space reflection\n 0 is off (default), 1 is on"
                  ,0x20);
  _DAT_146a810a0 = &PTR_FUN_143f3ecf8;
  DAT_146a810b0 = (**(code **)(*DAT_146a810a8 + 0x38))(DAT_146a810a8);
  atexit(FUN_143e94b50);
  return;
}



// FUNCTION 1402e2870 `dynamic_initializer_for_'CVarSSRQuality'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSSRQuality''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSSRQuality__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a81060 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.SSR.Quality",3,
                  L"Whether to use screen space reflections and at what quality setting.\n(limits the setting in the post process settings which has a different scale)\n(costs performance, adds more visual realism but the technique has limits)\n 0: off (default)\n 1: low (no glossy)\n 2: medium (no glossy)\n 3: high (glossy/using roughness, few samples)\n 4: very high (likely too slow for real-time)"
                  ,0x60);
  _DAT_146a81058 = &PTR_FUN_143f3ecf8;
  DAT_146a81068 = (**(code **)(*DAT_146a81060 + 0x38))(DAT_146a81060);
  atexit(FUN_143e94ba0);
  return;
}



// FUNCTION 1402e28f0 `dynamic_initializer_for_'CVarSSRStencil'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSSRStencil''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSSRStencil__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a81090 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.SSR.Stencil",0,
                  L"Defines if we use the stencil prepass for the screen space reflection\n 0 is off (default), 1 is on"
                  ,0x20);
  _DAT_146a81088 = &PTR_FUN_143f3ecf8;
  DAT_146a81098 = (**(code **)(*DAT_146a81090 + 0x38))(DAT_146a81090);
  atexit(FUN_143e94bf0);
  return;
}



// FUNCTION 1402e2960 `dynamic_initializer_for_'CVarSSRTemporal'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSSRTemporal''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSSRTemporal__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a81078 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.SSR.Temporal",0,
                  L"Defines if we use the temporal smoothing for the screen space reflection\n 0 is off (for debugging), 1 is on (default)"
                  ,0x20);
  _DAT_146a81070 = &PTR_FUN_143f3ecf8;
  DAT_146a81080 = (**(code **)(*DAT_146a81078 + 0x38))(DAT_146a81078);
  atexit(FUN_143e94c40);
  return;
}



// FUNCTION 1402e29d0 `dynamic_initializer_for_'CVarSkySpecularOcclusionStrength'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSkySpecularOcclusionStrength''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSkySpecularOcclusionStrength__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a81818 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.SkySpecularOcclusionStrength",0x3f800000,
                  L"Strength of skylight specular occlusion from DFAO (default is 1.0)",0x20);
  _DAT_146a81810 = &PTR_FUN_143f3ecf8;
  DAT_146a81820 = (**(code **)(*DAT_146a81818 + 0x40))(DAT_146a81818);
  atexit(FUN_143e94c90);
  return;
}



// FUNCTION 1402e2a50 `dynamic_initializer_for_'CVarWarningOnRedundantTransformUpdate'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarWarningOnRedundantTransformUpdate''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarWarningOnRedundantTransformUpdate__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a82648 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.WarningOnRedundantTransformUpdate",&DAT_146a81040,
                  L"Produce a warning when UpdatePrimitiveTransform_RenderThread is called redundantly."
                  ,0);
  _DAT_146a82640 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e94ce0);
  return;
}



// FUNCTION 1402e2af0 `dynamic_initializer_for_'GDistanceCullFadedInUniformBuffer'' body=153 status=ok
// SIG undefined `dynamic_initializer_for_'GDistanceCullFadedInUniformBuffer''(void)

void _dynamic_initializer_for__GDistanceCullFadedInUniformBuffer__(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar2 = (undefined4 *)FMemory::Malloc(0x10);
  DAT_1464c2ea0 = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0x3f800000;
  puVar2[2] = uStack_30;
  puVar2[3] = uStack_2c;
  FRenderResource::UpdateRHI(&PTR_PTR_1464c2e60);
  PTR_PTR_1464c2e60 = (undefined *)&PTR_FUN_144e46eb0;
  cVar1 = IsInRenderingThread();
  if (cVar1 == '\0') {
    FUN_141edf270(&PTR_PTR_1464c2e60);
  }
  else {
    (**(code **)(PTR_PTR_1464c2e60 + 0x28))();
  }
  atexit(FUN_143e94d40);
  return;
}



// FUNCTION 1402e2b90 FUN_1402e2b90 body=67 status=ok
// SIG undefined FUN_1402e2b90(void)

void FUN_1402e2b90(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1464c2f00 + 0x28))();
    atexit(FUN_143e94da0);
    return;
  }
  FUN_141edf270(&PTR_PTR_1464c2f00);
  atexit(FUN_143e94da0);
  return;
}



// FUNCTION 1402e2be0 FUN_1402e2be0 body=269 status=ok
// SIG undefined FUN_1402e2be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e2be0(void)

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
    plVar1[1] = (longlong)FUN_141d2b470;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a82678 =
       (**(code **)(*DAT_1468b1f88 + 0x88))
                 (DAT_1468b1f88,L"r.DumpDrawListStats",
                  L"Dumps static mesh draw list statistics for all scenes associated with world objects."
                  ,&local_18,0);
  _DAT_146a82670 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402e2cdc;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402e2cdc:
  atexit(FUN_143e94e00);
  return;
}



// FUNCTION 1402e2cf0 FUN_1402e2cf0 body=67 status=ok
// SIG undefined FUN_1402e2cf0(void)

void FUN_1402e2cf0(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1464c2eb0 + 0x28))();
    atexit(_dynamic_atexit_destructor_for__GReflectionCaptureRenderTarget__);
    return;
  }
  FUN_141edf270(&PTR_PTR_1464c2eb0);
  atexit(_dynamic_atexit_destructor_for__GReflectionCaptureRenderTarget__);
  return;
}



// FUNCTION 1402e2d40 `dynamic_initializer_for_'ModuleRegistrantRenderer'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantRenderer''(void)

void _dynamic_initializer_for__ModuleRegistrantRenderer__(void)

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
    plVar1[1] = (longlong)&DAT_146a818c8;
    plVar1[2] = (longlong)FUN_141d380d0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"Renderer",1);
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



// FUNCTION 1402e2e70 FUN_1402e2e70 body=39 status=ok
// SIG undefined FUN_1402e2e70(void)

void FUN_1402e2e70(void)

{
  FStaticSelfRegisteringExec::FStaticSelfRegisteringExec
            (&DAT_146a82540,FOutputDevice::CanBeUsedOnAnyThread);
  atexit((_func_5014 *)&LAB_143e96ed0);
  return;
}



// FUNCTION 1402e2f80 FUN_1402e2f80 body=288 status=ok
// SIG undefined FUN_1402e2f80(void)

void FUN_1402e2f80(void)

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
  
  FUN_141d7b920(&local_48,local_res8[0]);
  iVar3 = local_40;
  lVar5 = (longlong)local_40;
  local_38 = L"UpdateSizeY";
  puStack_30 = &DAT_143f3eda8;
  uStack_10 = 0;
  local_40 = local_40 + 1;
  local_28 = 0x30;
  uStack_24 = 3;
  uStack_1c = 1;
  local_18 = 1;
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
  uVar4 = FName::FName(local_res8,L"FBuildHZBUniformShaderParameters",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_146a9d090,uVar4,L"FBuildHZBUniformShaderParameters",L"HZBBuildCSParameters",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x40,&local_48,1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143e96f40);
  return;
}



// FUNCTION 1402e30a0 FUN_1402e30a0 body=170 status=ok
// SIG undefined FUN_1402e30a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e30a0(void)

{
  FShaderType::FShaderType
            (&DAT_146a9ea90,0,L"THZBBuildCS<HZBBUILDCS_TEMPLATE_ARGS(1, 3)>",
             L"/Engine/Private/HZBOcclusion.usf",L"HZBBuildCS",5,1,FUN_141d63300,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a9ea90 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a9ebc0 = FUN_141d62a20;
  _DAT_146a9ebc8 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a9ebd0 = BuildSettings::IsPromotedBuild;
  _DAT_146a9ebd8 = FUN_141d6b340;
  atexit((_func_5014 *)&LAB_143e96f50);
  return;
}



// FUNCTION 1402e3150 FUN_1402e3150 body=170 status=ok
// SIG undefined FUN_1402e3150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e3150(void)

{
  FShaderType::FShaderType
            (&DAT_146a9e940,0,L"THZBBuildCS<HZBBUILDCS_TEMPLATE_ARGS(0, 3)>",
             L"/Engine/Private/HZBOcclusion.usf",L"HZBBuildCS",5,1,FUN_141d63300,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a9e940 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a9ea70 = FUN_141d62b50;
  _DAT_146a9ea78 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_146a9ea80 = BuildSettings::IsPromotedBuild;
  _DAT_146a9ea88 = FUN_141d6b380;
  atexit((_func_5014 *)&LAB_143e96f60);
  return;
}



// FUNCTION 1402e3200 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'THZBBuildPS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a9e7f0,0,L"THZBBuildPS<1>",L"/Engine/Private/HZBOcclusion.usf",L"HZBBuildPS",3,
             1,THZBBuildPS<1>::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a9e7f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a9e920 = THZBBuildPS<1>::ConstructCompiledInstance;
  _DAT_146a9e928 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a9e930 = BuildSettings::IsPromotedBuild;
  _DAT_146a9e938 = THZBBuildPS<1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e96f70);
  return;
}



// FUNCTION 1402e32b0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'THZBBuildPS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a9e6a0,0,L"THZBBuildPS<0>",L"/Engine/Private/HZBOcclusion.usf",L"HZBBuildPS",3,
             1,THZBBuildPS<1>::ConstructSerializedInstance,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a9e6a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a9e7d0 = THZBBuildPS<1>::ConstructCompiledInstance;
  _DAT_146a9e7d8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a9e7e0 = BuildSettings::IsPromotedBuild;
  _DAT_146a9e7e8 = THZBBuildPS<0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e96f80);
  return;
}



// FUNCTION 1402e3360 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TSceneCapturePS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a9de10,0,L"TSceneCapturePS<SCS_SceneColorHDRNoAlpha>",
             L"/Engine/Private/SceneCapturePixelShader.usf",L"Main",3,1,
             FMobileCopySceneAlphaPS::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a9de10 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a9df40 = FMobileCopySceneAlphaPS::ConstructCompiledInstance;
  _DAT_146a9df48 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a9df50 = BuildSettings::IsPromotedBuild;
  _DAT_146a9df58 = &LAB_141d6b480;
  atexit((_func_5014 *)&LAB_143e96f90);
  return;
}



// FUNCTION 1402e3410 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TSceneCapturePS<3>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a9df60,0,L"TSceneCapturePS<SCS_SceneColorSceneDepth>",
             L"/Engine/Private/SceneCapturePixelShader.usf",L"Main",3,1,
             FMobileCopySceneAlphaPS::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a9df60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a9e090 = FMobileCopySceneAlphaPS::ConstructCompiledInstance;
  _DAT_146a9e098 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a9e0a0 = BuildSettings::IsPromotedBuild;
  _DAT_146a9e0a8 = &LAB_141d6b4a0;
  atexit((_func_5014 *)&LAB_143e96fa0);
  return;
}



// FUNCTION 1402e34c0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TSceneCapturePS<4>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a9e0b0,0,L"TSceneCapturePS<SCS_SceneDepth>",
             L"/Engine/Private/SceneCapturePixelShader.usf",L"Main",3,1,
             FMobileCopySceneAlphaPS::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a9e0b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a9e1e0 = FMobileCopySceneAlphaPS::ConstructCompiledInstance;
  _DAT_146a9e1e8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a9e1f0 = BuildSettings::IsPromotedBuild;
  _DAT_146a9e1f8 = &LAB_141d6b4c0;
  atexit((_func_5014 *)&LAB_143e96fb0);
  return;
}



// FUNCTION 1402e3570 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TSceneCapturePS<5>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a9e200,0,L"TSceneCapturePS<SCS_DeviceDepth>",
             L"/Engine/Private/SceneCapturePixelShader.usf",L"Main",3,1,
             FMobileCopySceneAlphaPS::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a9e200 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a9e330 = FMobileCopySceneAlphaPS::ConstructCompiledInstance;
  _DAT_146a9e338 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a9e340 = BuildSettings::IsPromotedBuild;
  _DAT_146a9e348 = &LAB_141d6b4e0;
  atexit((_func_5014 *)&LAB_143e96fc0);
  return;
}



// FUNCTION 1402e3620 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TSceneCapturePS<6>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a9e350,0,L"TSceneCapturePS<SCS_Normal>",
             L"/Engine/Private/SceneCapturePixelShader.usf",L"Main",3,1,
             FMobileCopySceneAlphaPS::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a9e350 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a9e480 = FMobileCopySceneAlphaPS::ConstructCompiledInstance;
  _DAT_146a9e488 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a9e490 = BuildSettings::IsPromotedBuild;
  _DAT_146a9e498 = &LAB_141d6b500;
  atexit((_func_5014 *)&LAB_143e96fd0);
  return;
}



// FUNCTION 1402e36d0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TSceneCapturePS<7>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a9e4a0,0,L"TSceneCapturePS<SCS_BaseColor>",
             L"/Engine/Private/SceneCapturePixelShader.usf",L"Main",3,1,
             FMobileCopySceneAlphaPS::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a9e4a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a9e5d0 = FMobileCopySceneAlphaPS::ConstructCompiledInstance;
  _DAT_146a9e5d8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a9e5e0 = BuildSettings::IsPromotedBuild;
  _DAT_146a9e5e8 = &LAB_141d6b520;
  atexit((_func_5014 *)&LAB_143e96fe0);
  return;
}



// FUNCTION 1402e3780 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TSceneCapturePS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a9dcc0,0,L"TSceneCapturePS<SCS_SceneColorHDR>",
             L"/Engine/Private/SceneCapturePixelShader.usf",L"Main",3,1,
             FMobileCopySceneAlphaPS::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a9dcc0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a9ddf0 = FMobileCopySceneAlphaPS::ConstructCompiledInstance;
  _DAT_146a9ddf8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a9de00 = BuildSettings::IsPromotedBuild;
  _DAT_146a9de08 = &LAB_141d6b540;
  atexit((_func_5014 *)&LAB_143e96ff0);
  return;
}



// FUNCTION 1402e3830 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FHZBTestPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a9cf40,0,L"FHZBTestPS",L"/Engine/Private/HZBOcclusion.usf",L"HZBTestPS",3,1,
             FUN_141d633f0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a9cf40 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a9d070 = FHZBTestPS::ConstructCompiledInstance;
  _DAT_146a9d078 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a9d080 = BuildSettings::IsPromotedBuild;
  _DAT_146a9d088 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e97000);
  return;
}



// FUNCTION 1402e38e0 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FHitProxyDS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a99320,2,L"FHitProxyDS",L"/Engine/Private/HitProxyVertexShader.usf",
             L"MainDomain",2,1,TTranslucencyShadowDepthVS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a99320 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a99450 = FUN_141affc40;
  _DAT_146a99458 = FUN_141d76b70;
  _DAT_146a99460 = BuildSettings::IsPromotedBuild;
  _DAT_146a99468 = FUN_141ac7cb0;
  atexit((_func_5014 *)&LAB_143e97010);
  return;
}



// FUNCTION 1402e3990 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FHitProxyHS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a991d0,2,L"FHitProxyHS",L"/Engine/Private/HitProxyVertexShader.usf",L"MainHull"
             ,1,1,TTranslucencyShadowDepthVS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a991d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a99300 = FUN_141affc40;
  _DAT_146a99308 = FUN_141d76b70;
  _DAT_146a99310 = BuildSettings::IsPromotedBuild;
  _DAT_146a99318 = FUN_141ac7cb0;
  atexit((_func_5014 *)&LAB_143e97020);
  return;
}



// FUNCTION 1402e3a40 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FHitProxyPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a99470,2,L"FHitProxyPS",L"/Engine/Private/HitProxyPixelShader.usf",L"Main",3,1,
             FUN_141b008c0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a99470 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a995a0 = FUN_141d62fa0;
  _DAT_146a995a8 = FUN_141d76c20;
  _DAT_146a995b0 = BuildSettings::IsPromotedBuild;
  _DAT_146a995b8 = FUN_141ac7cb0;
  atexit((_func_5014 *)&LAB_143e97030);
  return;
}



// FUNCTION 1402e3af0 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FHitProxyVS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a99080,2,L"FHitProxyVS",L"/Engine/Private/HitProxyVertexShader.usf",L"Main",0,1
             ,TTranslucencyShadowDepthVS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a99080 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a991b0 = FUN_141d63030;
  _DAT_146a991b8 = FUN_141d76c20;
  _DAT_146a991c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a991c8 = FUN_141ac7cb0;
  atexit((_func_5014 *)&LAB_143e97040);
  return;
}



// FUNCTION 1402e3ba0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FODSCapturePS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a98ef0,0,L"FODSCapturePS",L"/Engine/Private/ODSCapture.usf",L"MainPS",3,1,
             FUN_141d63490,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a98ef0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a99020 = FODSCapturePS::ConstructCompiledInstance;
  _DAT_146a99028 = BuildSettings::IsPromotedBuild;
  _DAT_146a99030 = BuildSettings::IsPromotedBuild;
  _DAT_146a99038 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e97050);
  return;
}



// FUNCTION 1402e3c50 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FOcclusionQueryVS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a9cdf0,0,L"FOcclusionQueryVS",L"/Engine/Private/OcclusionQueryVertexShader.usf"
             ,L"Main",0,1,FUN_141d634e0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a9cdf0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a9cf20 = FOcclusionQueryVS::ConstructCompiledInstance;
  _DAT_146a9cf28 = TOneColorPixelShaderMRT<2>::ShouldCompilePermutation;
  _DAT_146a9cf30 = BuildSettings::IsPromotedBuild;
  _DAT_146a9cf38 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e97060);
  return;
}



// FUNCTION 1402e3d00 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FRequiredTextureResolutionPS::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a98d60,2,L"FRequiredTextureResolutionPS",
             L"/Engine/Private/RequiredTextureResolutionPixelShader.usf",L"Main",3,1,FUN_141d63540,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a98d60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a98e90 = FUN_141d63210;
  _DAT_146a98e98 = FOutputDevice::CanBeUsedOnAnyThread;
  _DAT_146a98ea0 = BuildSettings::IsPromotedBuild;
  _DAT_146a98ea8 = FUN_141d6b560;
  atexit((_func_5014 *)&LAB_143e97070);
  return;
}



// FUNCTION 1402e3dc0 FUN_1402e3dc0 body=269 status=ok
// SIG undefined FUN_1402e3dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e3dc0(void)

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
    plVar1[1] = (longlong)FUN_141d62460;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d200 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"Scene.MarkRenderStateDirtyAll",L"Marks all render states dirty.",
                  &local_18,0);
  _DAT_146a9d1f8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402e3ebc;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402e3ebc:
  atexit(FUN_143e97080);
  return;
}



// FUNCTION 1402e3ed0 FUN_1402e3ed0 body=269 status=ok
// SIG undefined FUN_1402e3ed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e3ed0(void)

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
    plVar1[1] = (longlong)FUN_141d62530;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d1f0 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"Scene.ReattachAll",L"Reattaches all lights in the scene.",
                  &local_18,0);
  _DAT_146a9d1e8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402e3fcc;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402e3fcc:
  atexit(FUN_143e970d0);
  return;
}



// FUNCTION 1402e3fe0 `dynamic_initializer_for_'CVarAllowOcclusionQueries'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAllowOcclusionQueries''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAllowOcclusionQueries__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d288 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.AllowOcclusionQueries",1,
                  L"If zero, occlusion queries will not be used to cull primitives.",0x20);
  _DAT_146a9d280 = &PTR_FUN_143f3ecf8;
  DAT_146a9d290 = (**(code **)(*DAT_146a9d288 + 0x38))(DAT_146a9d288);
  atexit(FUN_143e97120);
  return;
}



// FUNCTION 1402e4060 `dynamic_initializer_for_'CVarAllowPrecomputedVisibility'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAllowPrecomputedVisibility''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAllowPrecomputedVisibility__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a995c8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AllowPrecomputedVisibility",&DAT_1464c2fdc,
                  L"If zero, precomputed visibility will not be used to cull primitives.",0x20);
  _DAT_146a995c0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e97170);
  return;
}



// FUNCTION 1402e40d0 `dynamic_initializer_for_'CVarCustomDepthTemporalAAJitter'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarCustomDepthTemporalAAJitter''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarCustomDepthTemporalAAJitter__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d160 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.CustomDepthTemporalAAJitter",1,
                  L"If disabled the Engine will remove the TemporalAA Jitter from the Custom Depth Pass. Only has effect when TemporalAA is used."
                  ,0x20);
  _DAT_146a9d158 = &PTR_FUN_143f3ecf8;
  DAT_146a9d168 = (**(code **)(*DAT_146a9d160 + 0x38))(DAT_146a9d160);
  atexit(FUN_143e971c0);
  return;
}



// FUNCTION 1402e4150 `dynamic_initializer_for_'CVarDebugCanvasInLayer'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDebugCanvasInLayer''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDebugCanvasInLayer__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d390 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"vr.DebugCanvasInLayer",0,
                  L"Experimental0 to disable (default), 1 to enable.",0x60);
  _DAT_146a9d388 = &PTR_FUN_143f3ecf8;
  _DAT_146a9d398 = (**(code **)(*DAT_146a9d390 + 0x38))(DAT_146a9d390);
  atexit(FUN_143e97210);
  return;
}



// FUNCTION 1402e41c0 `dynamic_initializer_for_'CVarDelaySceneRenderCompletion'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDelaySceneRenderCompletion''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDelaySceneRenderCompletion__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9dae0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DelaySceneRenderCompletion",0,
                  L"Experimental option to postpone the cleanup of the scene renderer until later. This does NOT currently work because it is possible for the scene to be modified before ~FSceneRenderer, and that assumes the scene is unchanged."
                  ,0x20);
  _DAT_146a9dad8 = &PTR_FUN_143f3ecf8;
  DAT_146a9dae8 = (**(code **)(*DAT_146a9dae0 + 0x38))(DAT_146a9dae0);
  atexit(FUN_143e97260);
  return;
}



// FUNCTION 1402e4230 `dynamic_initializer_for_'CVarDemosaicVposOffset'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDemosaicVposOffset''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDemosaicVposOffset__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d2a0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.DemosaicVposOffset",0,
                  L"This offset is added to the rasterized position used for demosaic in the ES2 tonemapping shader. It exists to workaround driver bugs on some Android devices that have a half-pixel offset."
                  ,0x20);
  _DAT_146a9d298 = &PTR_FUN_143f3ecf8;
  DAT_146a9d2a8 = (**(code **)(*DAT_146a9d2a0 + 0x40))(DAT_146a9d2a0);
  atexit(FUN_143e972b0);
  return;
}



// FUNCTION 1402e42a0 FUN_1402e42a0 body=115 status=ok
// SIG undefined FUN_1402e42a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e42a0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d210 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.DynamicShadowCasterWarningLevel",2,
                  L"Shows an on screen warning if more than 1 of any dynamic shadow casting light type is active \nor if there are more than 2 total dynamic shadow casting lights, regardless of type. \nFor example, 1 directional and 1 point light shadows are allowed, but not 2 directional light shadows. \n0: Not shown \n1: Shown in game \n2: Shown in game and PIE \n3: Shown in game, PIE and in editor \n4: Shown in game, PIE and in editor, if there is more than just 1 dynamic light shadow caster"
                  ,0x20);
  _DAT_146a9d208 = &PTR_FUN_143f3ecf8;
  _DAT_146a9d218 = (**(code **)(*DAT_146a9d210 + 0x38))(DAT_146a9d210);
  atexit(FUN_143e97300);
  return;
}



// FUNCTION 1402e4320 `dynamic_initializer_for_'CVarFastVRam_BokehDOF'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_BokehDOF''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_BokehDOF__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d618 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"r.FastVRam.BokehDOF",1,&DAT_144e49bcc,0)
  ;
  _DAT_146a9d610 = &PTR_FUN_143f3ecf8;
  DAT_146a9d620 = (**(code **)(*DAT_146a9d618 + 0x38))(DAT_146a9d618);
  atexit(FUN_143e97350);
  return;
}



// FUNCTION 1402e43a0 `dynamic_initializer_for_'CVarFastVRam_CircleDOF'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_CircleDOF''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_CircleDOF__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d630 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.CircleDOF",1,&DAT_144e49bf4,0);
  _DAT_146a9d628 = &PTR_FUN_143f3ecf8;
  DAT_146a9d638 = (**(code **)(*DAT_146a9d630 + 0x38))(DAT_146a9d630);
  atexit(FUN_143e973a0);
  return;
}



// FUNCTION 1402e4420 `dynamic_initializer_for_'CVarFastVRam_CombineLUTs'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_CombineLUTs''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_CombineLUTs__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d648 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.CombineLUTs",1,&DAT_144e49c1c,0);
  _DAT_146a9d640 = &PTR_FUN_143f3ecf8;
  DAT_146a9d650 = (**(code **)(*DAT_146a9d648 + 0x38))(DAT_146a9d648);
  atexit(FUN_143e973f0);
  return;
}



// FUNCTION 1402e44a0 `dynamic_initializer_for_'CVarFastVRam_CustomDepth'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_CustomDepth''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_CustomDepth__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d948 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.CustomDepth",0,&DAT_144e4dba4,0);
  _DAT_146a9d940 = &PTR_FUN_143f3ecf8;
  DAT_146a9d950 = (**(code **)(*DAT_146a9d948 + 0x38))(DAT_146a9d948);
  atexit(FUN_143e97440);
  return;
}



// FUNCTION 1402e4510 `dynamic_initializer_for_'CVarFastVRam_DBufferA'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_DBufferA''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_DBufferA__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d888 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"r.FastVRam.DBufferA",0,&DAT_144e4c8e4,0)
  ;
  _DAT_146a9d880 = &PTR_FUN_143f3ecf8;
  DAT_146a9d890 = (**(code **)(*DAT_146a9d888 + 0x38))(DAT_146a9d888);
  atexit(FUN_143e97490);
  return;
}



// FUNCTION 1402e4580 `dynamic_initializer_for_'CVarFastVRam_DBufferB'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_DBufferB''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_DBufferB__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d8a0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"r.FastVRam.DBufferB",0,&DAT_144e4c924,0)
  ;
  _DAT_146a9d898 = &PTR_FUN_143f3ecf8;
  DAT_146a9d8a8 = (**(code **)(*DAT_146a9d8a0 + 0x38))(DAT_146a9d8a0);
  atexit(FUN_143e974e0);
  return;
}



// FUNCTION 1402e45f0 `dynamic_initializer_for_'CVarFastVRam_DBufferC'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_DBufferC''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_DBufferC__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d8b8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"r.FastVRam.DBufferC",0,&DAT_144e4c964,0)
  ;
  _DAT_146a9d8b0 = &PTR_FUN_143f3ecf8;
  DAT_146a9d8c0 = (**(code **)(*DAT_146a9d8b8 + 0x38))(DAT_146a9d8b8);
  atexit(FUN_143e97530);
  return;
}



// FUNCTION 1402e4660 FUN_1402e4660 body=112 status=ok
// SIG undefined FUN_1402e4660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e4660(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d8d0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"r.FastVRam.DBufferD",0,&DAT_144e4cc9c,0)
  ;
  _DAT_146a9d8c8 = &PTR_FUN_143f3ecf8;
  DAT_146a9d8d8 = (**(code **)(*DAT_146a9d8d0 + 0x38))(DAT_146a9d8d0);
  atexit(FUN_143e97580);
  return;
}



// FUNCTION 1402e46d0 `dynamic_initializer_for_'CVarFastVRam_DBufferMask'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_DBufferMask''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_DBufferMask__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d8e8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.DBufferMask",0,&DAT_144e4cf0c,0);
  _DAT_146a9d8e0 = &PTR_FUN_143f3ecf8;
  DAT_146a9d8f0 = (**(code **)(*DAT_146a9d8e8 + 0x38))(DAT_146a9d8e8);
  atexit(FUN_143e975d0);
  return;
}



// FUNCTION 1402e4740 `dynamic_initializer_for_'CVarFastVRam_DOFPostfilter'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_DOFPostfilter''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_DOFPostfilter__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d930 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.DOFPostfilter",1,&DAT_144e4d6c4,0);
  _DAT_146a9d928 = &PTR_FUN_143f3ecf8;
  DAT_146a9d938 = (**(code **)(*DAT_146a9d930 + 0x38))(DAT_146a9d930);
  atexit(FUN_143e97620);
  return;
}



// FUNCTION 1402e47c0 `dynamic_initializer_for_'CVarFastVRam_DOFReduce'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_DOFReduce''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_DOFReduce__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d918 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.DOFReduce",1,&DAT_144e4d424,0);
  _DAT_146a9d910 = &PTR_FUN_143f3ecf8;
  DAT_146a9d920 = (**(code **)(*DAT_146a9d918 + 0x38))(DAT_146a9d918);
  atexit(FUN_143e97670);
  return;
}



// FUNCTION 1402e4840 `dynamic_initializer_for_'CVarFastVRam_DOFSetup'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_DOFSetup''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_DOFSetup__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d900 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"r.FastVRam.DOFSetup",1,&DAT_144e4d064,0)
  ;
  _DAT_146a9d8f8 = &PTR_FUN_143f3ecf8;
  DAT_146a9d908 = (**(code **)(*DAT_146a9d900 + 0x38))(DAT_146a9d900);
  atexit(FUN_143e976c0);
  return;
}



// FUNCTION 1402e48c0 `dynamic_initializer_for_'CVarFastVRam_DistanceFieldAOBentNormal'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_DistanceFieldAOBentNormal''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_DistanceFieldAOBentNormal__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d780 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.DistanceFieldAOBentNormal",0,&DAT_144e4b2f4,0);
  _DAT_146a9d778 = &PTR_FUN_143f3ecf8;
  DAT_146a9d788 = (**(code **)(*DAT_146a9d780 + 0x38))(DAT_146a9d780);
  atexit(FUN_143e97710);
  return;
}



// FUNCTION 1402e4930 `dynamic_initializer_for_'CVarFastVRam_DistanceFieldAODownsampledBentNormal'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_DistanceFieldAODownsampledBentNormal''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_DistanceFieldAODownsampledBentNormal__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d768 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.DistanceFieldAODownsampledBentNormal",1,&DAT_144e4a734,
                  0);
  _DAT_146a9d760 = &PTR_FUN_143f3ecf8;
  DAT_146a9d770 = (**(code **)(*DAT_146a9d768 + 0x38))(DAT_146a9d768);
  atexit(FUN_143e97760);
  return;
}



// FUNCTION 1402e49b0 `dynamic_initializer_for_'CVarFastVRam_DistanceFieldAOHistory'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_DistanceFieldAOHistory''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_DistanceFieldAOHistory__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d750 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.DistanceFieldAOHistory",1,&DAT_144e4a594,0);
  _DAT_146a9d748 = &PTR_FUN_143f3ecf8;
  DAT_146a9d758 = (**(code **)(*DAT_146a9d750 + 0x38))(DAT_146a9d750);
  atexit(FUN_143e977b0);
  return;
}



// FUNCTION 1402e4a30 `dynamic_initializer_for_'CVarFastVRam_DistanceFieldAOScreenGridResources'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_DistanceFieldAOScreenGridResources''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_DistanceFieldAOScreenGridResources__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d9d8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.DistanceFieldAOScreenGridResources",1,&DAT_144e4f104,0)
  ;
  _DAT_146a9d9d0 = &PTR_FUN_143f3ecf8;
  DAT_146a9d9e0 = (**(code **)(*DAT_146a9d9d8 + 0x38))(DAT_146a9d9d8);
  atexit(FUN_143e97800);
  return;
}



// FUNCTION 1402e4ab0 `dynamic_initializer_for_'CVarFastVRam_DistanceFieldCulledObjectBuffers'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_DistanceFieldCulledObjectBuffers''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_DistanceFieldCulledObjectBuffers__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d9a8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.DistanceFieldCulledObjectBuffers",1,&DAT_144e4e964,0);
  _DAT_146a9d9a0 = &PTR_FUN_143f3ecf8;
  DAT_146a9d9b0 = (**(code **)(*DAT_146a9d9a8 + 0x38))(DAT_146a9d9a8);
  atexit(FUN_143e97850);
  return;
}



// FUNCTION 1402e4b30 `dynamic_initializer_for_'CVarFastVRam_DistanceFieldIrradiance'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_DistanceFieldIrradiance''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_DistanceFieldIrradiance__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d798 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.DistanceFieldIrradiance",0,&DAT_144e4b394,0);
  _DAT_146a9d790 = &PTR_FUN_143f3ecf8;
  DAT_146a9d7a0 = (**(code **)(*DAT_146a9d798 + 0x38))(DAT_146a9d798);
  atexit(FUN_143e978a0);
  return;
}



// FUNCTION 1402e4ba0 `dynamic_initializer_for_'CVarFastVRam_DistanceFieldNormal'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_DistanceFieldNormal''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_DistanceFieldNormal__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d738 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.DistanceFieldNormal",1,&DAT_144e4a584,0);
  _DAT_146a9d730 = &PTR_FUN_143f3ecf8;
  DAT_146a9d740 = (**(code **)(*DAT_146a9d738 + 0x38))(DAT_146a9d738);
  atexit(FUN_143e978f0);
  return;
}



// FUNCTION 1402e4c20 `dynamic_initializer_for_'CVarFastVRam_DistanceFieldShadows'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_DistanceFieldShadows''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_DistanceFieldShadows__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d7b0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.DistanceFieldShadows",1,&DAT_144e4b53c,0);
  _DAT_146a9d7a8 = &PTR_FUN_143f3ecf8;
  DAT_146a9d7b8 = (**(code **)(*DAT_146a9d7b0 + 0x38))(DAT_146a9d7b0);
  atexit(FUN_143e97940);
  return;
}



// FUNCTION 1402e4ca0 `dynamic_initializer_for_'CVarFastVRam_DistanceFieldTileIntersectionResources'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_DistanceFieldTileIntersectionResources''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_DistanceFieldTileIntersectionResources__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d9c0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.DistanceFieldTileIntersectionResources",1,
                  &DAT_144e4ea74,0);
  _DAT_146a9d9b8 = &PTR_FUN_143f3ecf8;
  DAT_146a9d9c8 = (**(code **)(*DAT_146a9d9c0 + 0x38))(DAT_146a9d9c0);
  atexit(FUN_143e97990);
  return;
}



// FUNCTION 1402e4d20 `dynamic_initializer_for_'CVarFastVRam_Distortion'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_Distortion''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_Distortion__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d7c8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.Distortion",1,&DAT_144e4b714,0);
  _DAT_146a9d7c0 = &PTR_FUN_143f3ecf8;
  DAT_146a9d7d0 = (**(code **)(*DAT_146a9d7c8 + 0x38))(DAT_146a9d7c8);
  atexit(FUN_143e979e0);
  return;
}



// FUNCTION 1402e4da0 `dynamic_initializer_for_'CVarFastVRam_Downsample'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_Downsample''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_Downsample__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d660 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.Downsample",1,&DAT_144e49c3c,0);
  _DAT_146a9d658 = &PTR_FUN_143f3ecf8;
  DAT_146a9d668 = (**(code **)(*DAT_146a9d660 + 0x38))(DAT_146a9d660);
  atexit(FUN_143e97a30);
  return;
}



// FUNCTION 1402e4e20 `dynamic_initializer_for_'CVarFastVRam_EyeAdaptation'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_EyeAdaptation''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_EyeAdaptation__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d678 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.EyeAdaptation",1,&DAT_144e49c5c,0);
  _DAT_146a9d670 = &PTR_FUN_143f3ecf8;
  DAT_146a9d680 = (**(code **)(*DAT_146a9d678 + 0x38))(DAT_146a9d678);
  atexit(FUN_143e97a80);
  return;
}



// FUNCTION 1402e4ea0 `dynamic_initializer_for_'CVarFastVRam_ForwardLightingCullingResources'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_ForwardLightingCullingResources''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_ForwardLightingCullingResources__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d9f0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.ForwardLightingCullingResources",1,&DAT_144e4f574,0);
  _DAT_146a9d9e8 = &PTR_FUN_143f3ecf8;
  DAT_146a9d9f8 = (**(code **)(*DAT_146a9d9f0 + 0x38))(DAT_146a9d9f0);
  atexit(FUN_143e97ad0);
  return;
}



// FUNCTION 1402e4f20 `dynamic_initializer_for_'CVarFastVRam_GBufferA'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_GBufferA''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_GBufferA__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d528 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"r.FastVRam.GBufferA",0,&DAT_144e49804,0)
  ;
  _DAT_146a9d520 = &PTR_FUN_143f3ecf8;
  DAT_146a9d530 = (**(code **)(*DAT_146a9d528 + 0x38))(DAT_146a9d528);
  atexit(FUN_143e97b20);
  return;
}



// FUNCTION 1402e4f90 `dynamic_initializer_for_'CVarFastVRam_GBufferB'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_GBufferB''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_GBufferB__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d540 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"r.FastVRam.GBufferB",1,&DAT_144e4997c,0)
  ;
  _DAT_146a9d538 = &PTR_FUN_143f3ecf8;
  DAT_146a9d548 = (**(code **)(*DAT_146a9d540 + 0x38))(DAT_146a9d540);
  atexit(FUN_143e97b70);
  return;
}



// FUNCTION 1402e5010 `dynamic_initializer_for_'CVarFastVRam_GBufferC'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_GBufferC''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_GBufferC__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d558 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"r.FastVRam.GBufferC",0,&DAT_144e4999c,0)
  ;
  _DAT_146a9d550 = &PTR_FUN_143f3ecf8;
  DAT_146a9d560 = (**(code **)(*DAT_146a9d558 + 0x38))(DAT_146a9d558);
  atexit(FUN_143e97bc0);
  return;
}



// FUNCTION 1402e5080 `dynamic_initializer_for_'CVarFastVRam_GBufferD'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_GBufferD''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_GBufferD__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d570 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"r.FastVRam.GBufferD",0,&DAT_144e499ac,0)
  ;
  _DAT_146a9d568 = &PTR_FUN_143f3ecf8;
  DAT_146a9d578 = (**(code **)(*DAT_146a9d570 + 0x38))(DAT_146a9d570);
  atexit(FUN_143e97c10);
  return;
}



// FUNCTION 1402e50f0 `dynamic_initializer_for_'CVarFastVRam_GBufferE'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_GBufferE''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_GBufferE__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d588 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"r.FastVRam.GBufferE",0,&DAT_144e499bc,0)
  ;
  _DAT_146a9d580 = &PTR_FUN_143f3ecf8;
  DAT_146a9d590 = (**(code **)(*DAT_146a9d588 + 0x38))(DAT_146a9d588);
  atexit(FUN_143e97c60);
  return;
}



// FUNCTION 1402e5160 `dynamic_initializer_for_'CVarFastVRam_GBufferVelocity'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_GBufferVelocity''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_GBufferVelocity__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d5a0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.GBufferVelocity",0,&DAT_144e49a24,0);
  _DAT_146a9d598 = &PTR_FUN_143f3ecf8;
  DAT_146a9d5a8 = (**(code **)(*DAT_146a9d5a0 + 0x38))(DAT_146a9d5a0);
  atexit(FUN_143e97cb0);
  return;
}



// FUNCTION 1402e51d0 `dynamic_initializer_for_'CVarFastVRam_HZB'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_HZB''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_HZB__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d5b8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"r.FastVRam.HZB",1,&DAT_144e49b2c,0);
  _DAT_146a9d5b0 = &PTR_FUN_143f3ecf8;
  DAT_146a9d5c0 = (**(code **)(*DAT_146a9d5b8 + 0x38))(DAT_146a9d5b8);
  atexit(FUN_143e97d00);
  return;
}



// FUNCTION 1402e5250 `dynamic_initializer_for_'CVarFastVRam_Histogram'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_Histogram''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_Histogram__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d690 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.Histogram",1,&DAT_144e49d14,0);
  _DAT_146a9d688 = &PTR_FUN_143f3ecf8;
  DAT_146a9d698 = (**(code **)(*DAT_146a9d690 + 0x38))(DAT_146a9d690);
  atexit(FUN_143e97d50);
  return;
}



// FUNCTION 1402e52d0 `dynamic_initializer_for_'CVarFastVRam_HistogramReduce'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_HistogramReduce''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_HistogramReduce__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d6a8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.HistogramReduce",1,&DAT_144e49d94,0);
  _DAT_146a9d6a0 = &PTR_FUN_143f3ecf8;
  DAT_146a9d6b0 = (**(code **)(*DAT_146a9d6a8 + 0x38))(DAT_146a9d6a8);
  atexit(FUN_143e97da0);
  return;
}



// FUNCTION 1402e5350 `dynamic_initializer_for_'CVarFastVRam_LPV'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_LPV''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_LPV__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d600 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"r.FastVRam.LPV",1,&DAT_144e49ba4,0);
  _DAT_146a9d5f8 = &PTR_FUN_143f3ecf8;
  DAT_146a9d608 = (**(code **)(*DAT_146a9d600 + 0x38))(DAT_146a9d600);
  atexit(FUN_143e97df0);
  return;
}



// FUNCTION 1402e53d0 `dynamic_initializer_for_'CVarFastVRam_LightAccumulation'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_LightAccumulation''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_LightAccumulation__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d828 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.LightAccumulation",0,&DAT_144e4c25c,0);
  _DAT_146a9d820 = &PTR_FUN_143f3ecf8;
  DAT_146a9d830 = (**(code **)(*DAT_146a9d828 + 0x38))(DAT_146a9d828);
  atexit(FUN_143e97e40);
  return;
}



// FUNCTION 1402e5440 `dynamic_initializer_for_'CVarFastVRam_LightAttenuation'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_LightAttenuation''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_LightAttenuation__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d840 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.LightAttenuation",0,&DAT_144e4c35c,0);
  _DAT_146a9d838 = &PTR_FUN_143f3ecf8;
  DAT_146a9d848 = (**(code **)(*DAT_146a9d840 + 0x38))(DAT_146a9d840);
  atexit(FUN_143e97e90);
  return;
}



// FUNCTION 1402e54b0 `dynamic_initializer_for_'CVarFastVRam_MotionBlur'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_MotionBlur''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_MotionBlur__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d6f0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.MotionBlur",1,&DAT_144e4a3c4,0);
  _DAT_146a9d6e8 = &PTR_FUN_143f3ecf8;
  DAT_146a9d6f8 = (**(code **)(*DAT_146a9d6f0 + 0x38))(DAT_146a9d6f0);
  atexit(FUN_143e97ee0);
  return;
}



// FUNCTION 1402e5530 `dynamic_initializer_for_'CVarFastVRam_SSR'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_SSR''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_SSR__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d870 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"r.FastVRam.SSR",0,&DAT_144e4c674,0);
  _DAT_146a9d868 = &PTR_FUN_143f3ecf8;
  DAT_146a9d878 = (**(code **)(*DAT_146a9d870 + 0x38))(DAT_146a9d870);
  atexit(FUN_143e97f30);
  return;
}



// FUNCTION 1402e55a0 `dynamic_initializer_for_'CVarFastVRam_SceneColor'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_SceneColor''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_SceneColor__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d5e8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.SceneColor",1,&DAT_144e49b7c,0);
  _DAT_146a9d5e0 = &PTR_FUN_143f3ecf8;
  DAT_146a9d5f0 = (**(code **)(*DAT_146a9d5e8 + 0x38))(DAT_146a9d5e8);
  atexit(FUN_143e97f80);
  return;
}



// FUNCTION 1402e5620 `dynamic_initializer_for_'CVarFastVRam_SceneDepth'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_SceneDepth''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_SceneDepth__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d5d0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.SceneDepth",1,&DAT_144e49b54,0);
  _DAT_146a9d5c8 = &PTR_FUN_143f3ecf8;
  DAT_146a9d5d8 = (**(code **)(*DAT_146a9d5d0 + 0x38))(DAT_146a9d5d0);
  atexit(FUN_143e97fd0);
  return;
}



// FUNCTION 1402e56a0 `dynamic_initializer_for_'CVarFastVRam_ScreenSpaceAO'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_ScreenSpaceAO''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_ScreenSpaceAO__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d858 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.ScreenSpaceAO",0,&DAT_144e4c38c,0);
  _DAT_146a9d850 = &PTR_FUN_143f3ecf8;
  DAT_146a9d860 = (**(code **)(*DAT_146a9d858 + 0x38))(DAT_146a9d858);
  atexit(FUN_143e98020);
  return;
}



// FUNCTION 1402e5710 `dynamic_initializer_for_'CVarFastVRam_ScreenSpaceShadowMask'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_ScreenSpaceShadowMask''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_ScreenSpaceShadowMask__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d7e0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.ScreenSpaceShadowMask",1,&DAT_144e4ba4c,0);
  _DAT_146a9d7d8 = &PTR_FUN_143f3ecf8;
  DAT_146a9d7e8 = (**(code **)(*DAT_146a9d7e0 + 0x38))(DAT_146a9d7e0);
  atexit(FUN_143e98070);
  return;
}



// FUNCTION 1402e5790 `dynamic_initializer_for_'CVarFastVRam_SeparateTranslucency'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_SeparateTranslucency''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_SeparateTranslucency__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d810 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.SeparateTranslucency",0,&DAT_144e4be14,0);
  _DAT_146a9d808 = &PTR_FUN_143f3ecf8;
  DAT_146a9d818 = (**(code **)(*DAT_146a9d810 + 0x38))(DAT_146a9d810);
  atexit(FUN_143e980c0);
  return;
}



// FUNCTION 1402e5800 `dynamic_initializer_for_'CVarFastVRam_ShadowCSM'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_ShadowCSM''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_ShadowCSM__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d990 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.ShadowCSM",0,&DAT_144e4e524,0);
  _DAT_146a9d988 = &PTR_FUN_143f3ecf8;
  DAT_146a9d998 = (**(code **)(*DAT_146a9d990 + 0x38))(DAT_146a9d990);
  atexit(FUN_143e98110);
  return;
}



// FUNCTION 1402e5870 `dynamic_initializer_for_'CVarFastVRam_ShadowPerObject'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_ShadowPerObject''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_ShadowPerObject__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d978 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.ShadowPerObject",0,&DAT_144e4e1d4,0);
  _DAT_146a9d970 = &PTR_FUN_143f3ecf8;
  DAT_146a9d980 = (**(code **)(*DAT_146a9d978 + 0x38))(DAT_146a9d978);
  atexit(FUN_143e98160);
  return;
}



// FUNCTION 1402e58e0 `dynamic_initializer_for_'CVarFastVRam_ShadowPointLight'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_ShadowPointLight''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_ShadowPointLight__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d960 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.ShadowPointLight",0,&DAT_144e4dc24,0);
  _DAT_146a9d958 = &PTR_FUN_143f3ecf8;
  DAT_146a9d968 = (**(code **)(*DAT_146a9d960 + 0x38))(DAT_146a9d960);
  atexit(FUN_143e981b0);
  return;
}



// FUNCTION 1402e5950 `dynamic_initializer_for_'CVarFastVRam_Tonemap'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_Tonemap''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_Tonemap__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d708 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"r.FastVRam.Tonemap",1,&DAT_144e4a4d4,0);
  _DAT_146a9d700 = &PTR_FUN_143f3ecf8;
  DAT_146a9d710 = (**(code **)(*DAT_146a9d708 + 0x38))(DAT_146a9d708);
  atexit(FUN_143e98200);
  return;
}



// FUNCTION 1402e59d0 `dynamic_initializer_for_'CVarFastVRam_Upscale'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_Upscale''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_Upscale__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d720 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))(DAT_1468b1f88,L"r.FastVRam.Upscale",1,&DAT_144e4a504,0);
  _DAT_146a9d718 = &PTR_FUN_143f3ecf8;
  DAT_146a9d728 = (**(code **)(*DAT_146a9d720 + 0x38))(DAT_146a9d720);
  atexit(FUN_143e98250);
  return;
}



// FUNCTION 1402e5a50 `dynamic_initializer_for_'CVarFastVRam_VelocityFlat'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_VelocityFlat''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_VelocityFlat__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d6c0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.VelocityFlat",1,&DAT_144e4a084,0);
  _DAT_146a9d6b8 = &PTR_FUN_143f3ecf8;
  DAT_146a9d6c8 = (**(code **)(*DAT_146a9d6c0 + 0x38))(DAT_146a9d6c0);
  atexit(FUN_143e982a0);
  return;
}



// FUNCTION 1402e5ad0 `dynamic_initializer_for_'CVarFastVRam_VelocityMax'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_VelocityMax''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_VelocityMax__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d6d8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.VelocityMax",1,&DAT_144e4a2fc,0);
  _DAT_146a9d6d0 = &PTR_FUN_143f3ecf8;
  DAT_146a9d6e0 = (**(code **)(*DAT_146a9d6d8 + 0x38))(DAT_146a9d6d8);
  atexit(FUN_143e982f0);
  return;
}



// FUNCTION 1402e5b50 `dynamic_initializer_for_'CVarFastVRam_VolumetricFog'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarFastVRam_VolumetricFog''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarFastVRam_VolumetricFog__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d7f8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.FastVRam.VolumetricFog",0,&DAT_144e4bb8c,0);
  _DAT_146a9d7f0 = &PTR_FUN_143f3ecf8;
  DAT_146a9d800 = (**(code **)(*DAT_146a9d7f8 + 0x38))(DAT_146a9d7f8);
  atexit(FUN_143e98340);
  return;
}



// FUNCTION 1402e5bc0 FUN_1402e5bc0 body=117 status=ok
// SIG undefined FUN_1402e5bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e5bc0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d138 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.GBXCustomLitLightingHDRBoost",0x40000000,
                  L"When in HDR the light brightness is multiplied by this value for GbxCustomLit Lights"
                  ,0x20);
  _DAT_146a9d130 = &PTR_FUN_143f3ecf8;
  DAT_146a9d140 = (**(code **)(*DAT_146a9d138 + 0x40))(DAT_146a9d138);
  atexit(FUN_143e98390);
  return;
}



// FUNCTION 1402e5c40 FUN_1402e5c40 body=115 status=ok
// SIG undefined FUN_1402e5c40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e5c40(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d1c0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.RenderCore.AllowRedrawOnResize",1,
                  L"If 1 then FSceneViewport::Resize() is allowed to call ::Draw()",0x20);
  _DAT_146a9d1b8 = &PTR_FUN_143f3ecf8;
  _DAT_146a9d1c8 = (**(code **)(*DAT_146a9d1c0 + 0x38))(DAT_146a9d1c0);
  atexit(FUN_143e983e0);
  return;
}



// FUNCTION 1402e5cc0 FUN_1402e5cc0 body=112 status=ok
// SIG undefined FUN_1402e5cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e5cc0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d1a8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.RenderCore.AllowRedrawViewportsOnFinishLoad",0,
                  L"If 1 the engine is alllowed to call RedrawViewports(false) after loading a map to prime texture streaming"
                  ,0x20);
  _DAT_146a9d1a0 = &PTR_FUN_143f3ecf8;
  _DAT_146a9d1b0 = (**(code **)(*DAT_146a9d1a8 + 0x38))(DAT_146a9d1a8);
  atexit(FUN_143e98430);
  return;
}



// FUNCTION 1402e5d30 `dynamic_initializer_for_'CVarRayTracingReflectionsSortSize'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRayTracingReflectionsSortSize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRayTracingReflectionsSortSize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d190 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.RenderCore.ForceCleanupFirstNFramesOfScene",5,
                  L"Forces a flush after rendering first n frames in Scene",0x20);
  _DAT_146a9d188 = &PTR_FUN_143f3ecf8;
  DAT_146a9d198 = (**(code **)(*DAT_146a9d190 + 0x38))(DAT_146a9d190);
  atexit(FUN_143e98480);
  return;
}



// FUNCTION 1402e5db0 FUN_1402e5db0 body=112 status=ok
// SIG undefined FUN_1402e5db0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e5db0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d178 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"gbx.RenderCore.SkipFirstNFramesOfScene",0,
                  L"Skips rendering first n frames in Scene",0x20);
  _DAT_146a9d170 = &PTR_FUN_143f3ecf8;
  DAT_146a9d180 = (**(code **)(*DAT_146a9d178 + 0x38))(DAT_146a9d178);
  atexit(FUN_143e984d0);
  return;
}



// FUNCTION 1402e5e20 FUN_1402e5e20 body=100 status=ok
// SIG undefined FUN_1402e5e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e5e20(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a99618 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.HZBMipsBuildWithCompute",&DAT_1464c2fe0,
                  L"Whether to build HZBMips with compute shader. 0 - Disable. 1 - Use compute on graphics queue. 2 - Use async compute if efficient. 3 - Force async compute.\n"
                  ,0x20);
  _DAT_146a99610 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e98520);
  return;
}



// FUNCTION 1402e5e90 `dynamic_initializer_for_'CVarInstancedStereo'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarInstancedStereo''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarInstancedStereo__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d2d0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"vr.InstancedStereo",0,
                  L"0 to disable instanced stereo (default), 1 to enable.",0x24);
  _DAT_146a9d2c8 = &PTR_FUN_143f3ecf8;
  _DAT_146a9d2d8 = (**(code **)(*DAT_146a9d2d0 + 0x38))(DAT_146a9d2d0);
  atexit(FUN_143e98570);
  return;
}



// FUNCTION 1402e5f00 `dynamic_initializer_for_'CVarMaxMobileShadowCascades'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMaxMobileShadowCascades''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMaxMobileShadowCascades__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d3f0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Shadow.CSM.MaxMobileCascades",2,
                  L"The maximum number of cascades with which to render dynamic directional light shadows when using the mobile renderer."
                  ,0x60);
  _DAT_146a9d3e8 = &PTR_FUN_143f3ecf8;
  DAT_146a9d3f8 = (**(code **)(*DAT_146a9d3f0 + 0x38))(DAT_146a9d3f0);
  atexit(FUN_143e985c0);
  return;
}



// FUNCTION 1402e5f80 `dynamic_initializer_for_'CVarMaxShadowCascades'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMaxShadowCascades''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMaxShadowCascades__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d3c0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Shadow.CSM.MaxCascades",10,
                  L"The maximum number of cascades with which to render dynamic directional light shadows."
                  ,0x60);
  _DAT_146a9d3b8 = &PTR_FUN_143f3ecf8;
  DAT_146a9d3c8 = (**(code **)(*DAT_146a9d3c0 + 0x38))(DAT_146a9d3c0);
  atexit(FUN_143e98610);
  return;
}



// FUNCTION 1402e6000 FUN_1402e6000 body=115 status=ok
// SIG undefined FUN_1402e6000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e6000(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d3d8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.Shadow.CSM.MaxCascades.SplitScreen",2,
                  L"The maximum number of cascades with which to render dynamic directional light shadows when playing in splitcreen\nNote: r.Shadow.CSM.MaxCascades is ignored when playing in splitscreen"
                  ,0x60);
  _DAT_146a9d3d0 = &PTR_FUN_143f3ecf8;
  _DAT_146a9d3e0 = (**(code **)(*DAT_146a9d3d8 + 0x38))(DAT_146a9d3d8);
  atexit(FUN_143e98660);
  return;
}



// FUNCTION 1402e6080 `dynamic_initializer_for_'CVarMobileAllowSoftwareOcclusion'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMobileAllowSoftwareOcclusion''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMobileAllowSoftwareOcclusion__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a99608 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Mobile.AllowSoftwareOcclusion",&DAT_146a98d44,
                  L"Whether to allow rasterizing scene on CPU for primitive occlusion.\n",0x20);
  _DAT_146a99600 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e986b0);
  return;
}



// FUNCTION 1402e60f0 `dynamic_initializer_for_'CVarMobileMultiView'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMobileMultiView''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMobileMultiView__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d300 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"vr.MobileMultiView",0,
                  L"0 to disable mobile multi-view, 1 to enable.\n",0x24);
  _DAT_146a9d2f8 = &PTR_FUN_143f3ecf8;
  _DAT_146a9d308 = (**(code **)(*DAT_146a9d300 + 0x38))(DAT_146a9d300);
  atexit(FUN_143e98700);
  return;
}



// FUNCTION 1402e6160 `dynamic_initializer_for_'CVarMobileMultiViewDirect'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMobileMultiViewDirect''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMobileMultiViewDirect__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d318 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"vr.MobileMultiView.Direct",0,
                  L"0 to disable mobile multi-view direct, 1 to enable.\nWhen enabled the scene color render target array is provided by the hmd plugin so we can skip the blit.\n"
                  ,0x24);
  _DAT_146a9d310 = &PTR_FUN_143f3ecf8;
  _DAT_146a9d320 = (**(code **)(*DAT_146a9d318 + 0x38))(DAT_146a9d318);
  atexit(FUN_143e98750);
  return;
}



// FUNCTION 1402e61d0 `dynamic_initializer_for_'CVarMonoscopicFarField'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMonoscopicFarField''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMonoscopicFarField__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d330 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"vr.MonoscopicFarField",0,L"0 to disable (default), 1 to enable.",
                  0x24);
  _DAT_146a9d328 = &PTR_FUN_143f3ecf8;
  _DAT_146a9d338 = (**(code **)(*DAT_146a9d330 + 0x38))(DAT_146a9d330);
  atexit(FUN_143e987a0);
  return;
}



// FUNCTION 1402e6240 `dynamic_initializer_for_'CVarMonoscopicFarFieldMode'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMonoscopicFarFieldMode''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMonoscopicFarFieldMode__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d348 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"vr.MonoscopicFarFieldMode",1,
                  L"Experimental, mobile only, 0 to disable, 1 to enable (default), 2 stereo near field only, 3 stereo near field with far field pixel depth test disabled, 4 mono far field only"
                  ,0x60);
  _DAT_146a9d340 = &PTR_FUN_143f3ecf8;
  _DAT_146a9d350 = (**(code **)(*DAT_146a9d348 + 0x38))(DAT_146a9d348);
  atexit(FUN_143e987f0);
  return;
}



// FUNCTION 1402e62c0 `dynamic_initializer_for_'CVarMultiView'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarMultiView''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarMultiView__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d2e8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"vr.MultiView",0,
                  L"0 to disable multi-view instanced stereo, 1 to enable.\nCurrently only supported by the PS4 & Metal RHIs."
                  ,0x24);
  _DAT_146a9d2e0 = &PTR_FUN_143f3ecf8;
  _DAT_146a9d2f0 = (**(code **)(*DAT_146a9d2e8 + 0x38))(DAT_146a9d2e8);
  atexit(FUN_143e98840);
  return;
}



// FUNCTION 1402e6330 `dynamic_initializer_for_'CVarNormalCurvatureToRoughnessBias'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarNormalCurvatureToRoughnessBias''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarNormalCurvatureToRoughnessBias__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d438 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.NormalCurvatureToRoughnessBias",0,
                  L"Biases the roughness resulting from screen space normal changes for materials with NormalCurvatureToRoughness enabled.  Valid range [-1, 1]"
                  ,0x60);
  _DAT_146a9d430 = &PTR_FUN_143f3ecf8;
  DAT_146a9d440 = (**(code **)(*DAT_146a9d438 + 0x40))(DAT_146a9d438);
  atexit(FUN_143e98890);
  return;
}



// FUNCTION 1402e63a0 `dynamic_initializer_for_'CVarNormalCurvatureToRoughnessExponent'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarNormalCurvatureToRoughnessExponent''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarNormalCurvatureToRoughnessExponent__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d450 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.NormalCurvatureToRoughnessExponent",0x3eaa7efa,
                  L"Exponent on the roughness resulting from screen space normal changes for materials with NormalCurvatureToRoughness enabled."
                  ,0x60);
  _DAT_146a9d448 = &PTR_FUN_143f3ecf8;
  DAT_146a9d458 = (**(code **)(*DAT_146a9d450 + 0x40))(DAT_146a9d450);
  atexit(FUN_143e988e0);
  return;
}



// FUNCTION 1402e6420 `dynamic_initializer_for_'CVarNormalCurvatureToRoughnessScale'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarNormalCurvatureToRoughnessScale''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarNormalCurvatureToRoughnessScale__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d468 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.NormalCurvatureToRoughnessScale",0x3f800000,
                  L"Scales the roughness resulting from screen space normal changes for materials with NormalCurvatureToRoughness enabled.  Valid range [0, 2]"
                  ,0x60);
  _DAT_146a9d460 = &PTR_FUN_143f3ecf8;
  DAT_146a9d470 = (**(code **)(*DAT_146a9d468 + 0x40))(DAT_146a9d468);
  atexit(FUN_143e98930);
  return;
}



// FUNCTION 1402e64a0 `dynamic_initializer_for_'CVarODSCapture'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarODSCapture''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarODSCapture__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d378 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"vr.ODSCapture",0,
                  L"Experimental0 to disable Omni-directional stereo capture (default), 1 to enable."
                  ,0x24);
  _DAT_146a9d370 = &PTR_FUN_143f3ecf8;
  _DAT_146a9d380 = (**(code **)(*DAT_146a9d378 + 0x38))(DAT_146a9d378);
  atexit(FUN_143e98980);
  return;
}



// FUNCTION 1402e6510 `dynamic_initializer_for_'CVarOcclusionCullCascadedShadowMaps'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarOcclusionCullCascadedShadowMaps''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarOcclusionCullCascadedShadowMaps__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a995f8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Shadow.OcclusionCullCascadedShadowMaps",&DAT_146a98d40,
                  L"Whether to use occlusion culling on cascaded shadow maps.  Disabled by default because rapid view changes reveal new regions too quickly for latent occlusion queries to work with."
                  ,0x60);
  _DAT_146a995f0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e989d0);
  return;
}



// FUNCTION 1402e6580 `dynamic_initializer_for_'CVarRHICmdBalanceParallelLists'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdBalanceParallelLists''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdBalanceParallelLists__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d498 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdBalanceParallelLists",2,
                  L"Allows to enable a preprocess of the drawlists to try to balance the load equally among the command lists.\n 0: off \n 1: enabled 2: experiemental, uses previous frame results (does not do anything in split screen etc)"
                  ,0);
  _DAT_146a9d490 = &PTR_FUN_143f3ecf8;
  DAT_146a9d4a0 = (**(code **)(*DAT_146a9d498 + 0x38))(DAT_146a9d498);
  atexit(FUN_143e98a20);
  return;
}



// FUNCTION 1402e6600 `dynamic_initializer_for_'CVarRHICmdMinCmdlistForParallelSubmit'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdMinCmdlistForParallelSubmit''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdMinCmdlistForParallelSubmit__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d4b0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdMinCmdlistForParallelSubmit",1,
                  L"Minimum number of parallel translate command lists to submit. If there are fewer than this number, they just run on the RHI thread and immediate context."
                  ,0);
  _DAT_146a9d4a8 = &PTR_FUN_143f3ecf8;
  DAT_146a9d4b8 = (**(code **)(*DAT_146a9d4b0 + 0x38))(DAT_146a9d4b0);
  atexit(FUN_143e98a70);
  return;
}



// FUNCTION 1402e6680 `dynamic_initializer_for_'CVarRHICmdMinDrawsPerParallelCmdList'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdMinDrawsPerParallelCmdList''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdMinDrawsPerParallelCmdList__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d4c8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdMinDrawsPerParallelCmdList",0x40,
                  L"The minimum number of draws per cmdlist. If the total number of draws is less than this, then no parallel work will be done at all. This can\'t always be honored or done correctly. More effective with RHICmdBalanceParallelLists."
                  ,0);
  _DAT_146a9d4c0 = &PTR_FUN_143f3ecf8;
  DAT_146a9d4d0 = (**(code **)(*DAT_146a9d4c8 + 0x38))(DAT_146a9d4c8);
  atexit(FUN_143e98ac0);
  return;
}



// FUNCTION 1402e6700 `dynamic_initializer_for_'CVarRHICmdSpewParallelListBalance'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRHICmdSpewParallelListBalance''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRHICmdSpewParallelListBalance__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d480 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RHICmdSpewParallelListBalance",0,
                  L"For debugging, spews the size of the parallel command lists. This stalls and otherwise wrecks performance.\n 0: off (default)\n 1: enabled (default)"
                  ,0);
  _DAT_146a9d478 = &PTR_FUN_143f3ecf8;
  DAT_146a9d488 = (**(code **)(*DAT_146a9d480 + 0x38))(DAT_146a9d480);
  atexit(FUN_143e98b10);
  return;
}



// FUNCTION 1402e6770 `dynamic_initializer_for_'CVarRefractionQuality'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRefractionQuality''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRefractionQuality__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d2b8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.RefractionQuality",2,
                  L"Defines the distorion/refraction quality which allows to adjust for quality or performance.\n<=0: off (fastest)\n  1: low quality (not yet implemented)\n  2: normal quality (default)\n  3: high quality (e.g. color fringe, not yet implemented)"
                  ,0x60);
  _DAT_146a9d2b0 = &PTR_FUN_143f3ecf8;
  _DAT_146a9d2c0 = (**(code **)(*DAT_146a9d2b8 + 0x38))(DAT_146a9d2b8);
  atexit(FUN_143e98b60);
  return;
}



// FUNCTION 1402e67f0 `dynamic_initializer_for_'CVarSOMaxDistanceForOccluder'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSOMaxDistanceForOccluder''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSOMaxDistanceForOccluder__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9dbb8 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.so.MaxDistanceForOccluder",&DAT_1464c2f84,
                  L"Max radius where to look for occluders.",0x20);
  _DAT_146a9dbb0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e98bb0);
  return;
}



// FUNCTION 1402e6860 `dynamic_initializer_for_'CVarSOMaxOccluderNum'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSOMaxOccluderNum''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSOMaxOccluderNum__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9dbc8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.so.MaxOccluderNum",&DAT_1464c2f88,
                  L"Maximum number of primitives that can be rendered as occluders",0x20);
  _DAT_146a9dbc0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e98c00);
  return;
}



// FUNCTION 1402e68d0 `dynamic_initializer_for_'CVarSOMinScreenRadiusForOccluder'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSOMinScreenRadiusForOccluder''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSOMinScreenRadiusForOccluder__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9dba8 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.so.MinScreenRadiusForOccluder",&DAT_1464c2f80,
                  L"Threshold below which meshes will be culled from beeing an occluder.",0x20);
  _DAT_146a9dba0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e98c50);
  return;
}



// FUNCTION 1402e6940 `dynamic_initializer_for_'CVarSOSIMD'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSOSIMD''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSOSIMD__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9dbd8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.so.SIMD",&DAT_1464c2f8c,
                  L"Use SIMD routines in software occlusion",0x20);
  _DAT_146a9dbd0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e98ca0);
  return;
}



// FUNCTION 1402e69b0 `dynamic_initializer_for_'CVarSOThreadName'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSOThreadName''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSOThreadName__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9dc28 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.so.ThreadName",&DAT_1464c2fd0,
                  L"0 = AnyHiPriThreadNormalTask1 = AnyHiPriThreadHiPriTask2 = AnyNormalThreadNormalTask (Default)3 = AnyNormalThreadHiPriTask4 = AnyBackgroundThreadNormalTask5 = AnyBackgroundHiPriTask"
                  ,0x20);
  _DAT_146a9dc20 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e98cf0);
  return;
}



// FUNCTION 1402e6a20 `dynamic_initializer_for_'CVarSOVisualizeBuffer'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSOVisualizeBuffer''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSOVisualizeBuffer__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9dbe8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.so.VisualizeBuffer",&DAT_146a98d30,
                  L"Visualize rasterized occlusion buffer",0x20);
  _DAT_146a9dbe0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e98d40);
  return;
}



// FUNCTION 1402e6a90 FUN_1402e6a90 body=115 status=ok
// SIG undefined FUN_1402e6a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e6a90(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a98d50 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"SceneCapture.AllowPostProcessGrainQuantization",1,
                  L"0: Disabled, regardless of r.Tonemapper.GrainQuantization value\n1: Enabled if r.Tonemapper.GrainQuantization is true\n2: Enabled, regardless of r.Tonemapper.GrainQuantization value"
                  ,0);
  _DAT_146a98d48 = &PTR_FUN_143f3ecf8;
  _DAT_146a98d58 = (**(code **)(*DAT_146a98d50 + 0x38))(DAT_146a98d50);
  atexit(FUN_143e98d90);
  return;
}



// FUNCTION 1402e6b10 FUN_1402e6b10 body=112 status=ok
// SIG undefined FUN_1402e6b10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e6b10(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d120 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"SceneCapture.DeferredUpdateBehavior",0,
                  L"0: Before main scene (default)\n1: after main scene\n2: disabled",0x20);
  _DAT_146a9d118 = &PTR_FUN_143f3ecf8;
  DAT_146a9d128 = (**(code **)(*DAT_146a9d120 + 0x38))(DAT_146a9d120);
  atexit(FUN_143e98de0);
  return;
}



// FUNCTION 1402e6b80 FUN_1402e6b80 body=112 status=ok
// SIG undefined FUN_1402e6b80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e6b80(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a98eb8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"SceneCapture.FlushRenderThreadOnSceneRenderDelete",0,
                  &DAT_144e48e24,0);
  _DAT_146a98eb0 = &PTR_FUN_143f3ecf8;
  DAT_146a98ec0 = (**(code **)(*DAT_146a98eb8 + 0x38))(DAT_146a98eb8);
  atexit(FUN_143e98e30);
  return;
}



// FUNCTION 1402e6bf0 FUN_1402e6bf0 body=115 status=ok
// SIG undefined FUN_1402e6bf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e6bf0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a98ed0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"SceneCapture.RecreatePersistentRendererOnReInit",1,
                  L"1: Recreates scene renderer when ReInit is requested\n0: Attempts to run InitViews() on existing renderer (broken atm)"
                  ,0);
  _DAT_146a98ec8 = &PTR_FUN_143f3ecf8;
  DAT_146a98ed8 = (**(code **)(*DAT_146a98ed0 + 0x38))(DAT_146a98ed0);
  atexit(FUN_143e98e80);
  return;
}



// FUNCTION 1402e6c70 FUN_1402e6c70 body=115 status=ok
// SIG undefined FUN_1402e6c70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e6c70(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d1d8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"Scene.MaxPrimitivesForSceneCapture",1000,
                  L"The max number of primitives in a scene which is used for scenecapture before log warnings are emitted"
                  ,0);
  _DAT_146a9d1d0 = &PTR_FUN_143f3ecf8;
  _DAT_146a9d1e0 = (**(code **)(*DAT_146a9d1d8 + 0x38))(DAT_146a9d1d8);
  atexit(FUN_143e98ed0);
  return;
}



// FUNCTION 1402e6cf0 `dynamic_initializer_for_'CVarShowPrecomputedVisibilityCells'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarShowPrecomputedVisibilityCells''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarShowPrecomputedVisibilityCells__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a995d8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.ShowPrecomputedVisibilityCells",&DAT_146a98d38,
                  L"If not zero, draw all precomputed visibility cells.",0x20);
  _DAT_146a995d0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e98f20);
  return;
}



// FUNCTION 1402e6d60 `dynamic_initializer_for_'CVarShowRelevantPrecomputedVisibilityCells'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarShowRelevantPrecomputedVisibilityCells''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarShowRelevantPrecomputedVisibilityCells__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a995e8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.ShowRelevantPrecomputedVisibilityCells",&DAT_146a98d3c,
                  L"If not zero, draw relevant precomputed visibility cells only.",0x20);
  _DAT_146a995e0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e98f70);
  return;
}



// FUNCTION 1402e6dd0 `dynamic_initializer_for_'CVarSimpleForwardShading'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSimpleForwardShading''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSimpleForwardShading__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d420 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.SimpleForwardShading",0,
                  L"Whether to use the simple forward shading base pass shaders which only support lightmaps + stationary directional light + stationary skylight\nAll other lighting features are disabled when true.  This is useful for supporting very low end hardware, and is only supported on PC platforms.\n0:off, 1:on"
                  ,0x60);
  _DAT_146a9d418 = &PTR_FUN_143f3ecf8;
  _DAT_146a9d428 = (**(code **)(*DAT_146a9d420 + 0x38))(DAT_146a9d420);
  atexit(FUN_143e98fc0);
  return;
}



// FUNCTION 1402e6e40 `dynamic_initializer_for_'CVarSupportSimpleForwardShading'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSupportSimpleForwardShading''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSupportSimpleForwardShading__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d408 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.SupportSimpleForwardShading",0,
                  L"Whether to compile the shaders to support r.SimpleForwardShading being enabled (PC only)."
                  ,0x24);
  _DAT_146a9d400 = &PTR_FUN_143f3ecf8;
  _DAT_146a9d410 = (**(code **)(*DAT_146a9d408 + 0x38))(DAT_146a9d408);
  atexit(FUN_143e99010);
  return;
}



// FUNCTION 1402e6eb0 `dynamic_initializer_for_'CVarTransientResourceAliasing_Buffers'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarTransientResourceAliasing_Buffers''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarTransientResourceAliasing_Buffers__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d4f8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.TransientResourceAliasing.Buffers",1,
                  L"Enables transient resource aliasing for specified buffers. Used only if GSupportsTransientResourceAliasing is true.\n"
                  ,4);
  _DAT_146a9d4f0 = &PTR_FUN_143f3ecf8;
  DAT_146a9d500 = (**(code **)(*DAT_146a9d4f8 + 0x38))(DAT_146a9d4f8);
  atexit(FUN_143e99060);
  return;
}



// FUNCTION 1402e6f30 `dynamic_initializer_for_'CVarUnbuiltPreviewShadowsInGame'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUnbuiltPreviewShadowsInGame''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarUnbuiltPreviewShadowsInGame__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a99068 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.Shadow.UnbuiltPreviewInGame",&DAT_1464c2fd4,
                  L"Whether to render unbuilt preview shadows in game.  When enabled and lighting is not built, expensive preview shadows will be rendered in game.  When disabled, lighting in game and editor won\'t match which can appear to be a bug."
                  ,0x60);
  _DAT_146a99060 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e990b0);
  return;
}



// FUNCTION 1402e6fa0 `dynamic_initializer_for_'CVarUsePreExposure'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUsePreExposure''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarUsePreExposure__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d360 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.UsePreExposure",0,
                  L"0 to disable pre-exposure (default), 1 to enable.",0x24);
  _DAT_146a9d358 = &PTR_FUN_143f3ecf8;
  _DAT_146a9d368 = (**(code **)(*DAT_146a9d360 + 0x38))(DAT_146a9d360);
  atexit(FUN_143e99100);
  return;
}



// FUNCTION 1402e7010 `dynamic_initializer_for_'CVarViewRectUseScreenBottom'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarViewRectUseScreenBottom''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarViewRectUseScreenBottom__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d3a8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ViewRectUseScreenBottom",0,
                  L"WARNING: This is an experimental, unsupported feature and does not work with all postprocesses (e.g DOF and DFAO)\nIf enabled, the view rectangle will use the bottom left corner instead of top left"
                  ,0x20);
  _DAT_146a9d3a0 = &PTR_FUN_143f3ecf8;
  DAT_146a9d3b0 = (**(code **)(*DAT_146a9d3a8 + 0x38))(DAT_146a9d3a8);
  atexit(FUN_143e99150);
  return;
}



// FUNCTION 1402e7080 FUN_1402e7080 body=117 status=ok
// SIG undefined FUN_1402e7080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e7080(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d270 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.VolumetricLightmap.SkyBentNormalWorldNormalModulation",
                  0x3f800000,&DAT_144e493fc,0x20);
  _DAT_146a9d268 = &PTR_FUN_143f3ecf8;
  DAT_146a9d278 = (**(code **)(*DAT_146a9d270 + 0x40))(DAT_146a9d270);
  atexit(FUN_143e991a0);
  return;
}



// FUNCTION 1402e7100 FUN_1402e7100 body=117 status=ok
// SIG undefined FUN_1402e7100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e7100(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d240 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.VolumetricLightmap.SkyWorldNormalAngleDiv",0x40000000,
                  &DAT_144e49344,0x20);
  _DAT_146a9d238 = &PTR_FUN_143f3ecf8;
  DAT_146a9d248 = (**(code **)(*DAT_146a9d240 + 0x40))(DAT_146a9d240);
  atexit(FUN_143e991f0);
  return;
}



// FUNCTION 1402e7180 FUN_1402e7180 body=117 status=ok
// SIG undefined FUN_1402e7180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e7180(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d228 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.VolumetricLightmap.SkyWorldNormalContribution",0x3f800000,
                  L"0-1 how much WorldNormal contributes to Volumetric Lightmap SkyOcclusion and SkyBentNormal \n"
                  ,0x20);
  _DAT_146a9d220 = &PTR_FUN_143f3ecf8;
  DAT_146a9d230 = (**(code **)(*DAT_146a9d228 + 0x40))(DAT_146a9d228);
  atexit(FUN_143e99240);
  return;
}



// FUNCTION 1402e7200 FUN_1402e7200 body=117 status=ok
// SIG undefined FUN_1402e7200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e7200(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d258 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.VolumetricLightmap.SkyWorldNormalFade",0x3f400000,
                  L"0-1 how much WorldNormal contributes to Volumetric Lightmap SkyOcclusion and SkyBentNormal \n"
                  ,0x20);
  _DAT_146a9d250 = &PTR_FUN_143f3ecf8;
  DAT_146a9d260 = (**(code **)(*DAT_146a9d258 + 0x40))(DAT_146a9d258);
  atexit(FUN_143e99290);
  return;
}



// FUNCTION 1402e7280 `dynamic_initializer_for_'CVarWideCustomResolve'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarWideCustomResolve''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarWideCustomResolve__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9d4e0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.WideCustomResolve",0,
                  L"Use a wide custom resolve filter when MSAA is enabled0: Disabled [hardware box filter]1: Wide (r=1.25, 12 samples)2: Wider (r=1.4, 16 samples)3: Widest (r=1.5, 20 samples)"
                  ,0x60);
  _DAT_146a9d4d8 = &PTR_FUN_143f3ecf8;
  DAT_146a9d4e8 = (**(code **)(*DAT_146a9d4e0 + 0x38))(DAT_146a9d4e0);
  atexit(FUN_143e992e0);
  return;
}



// FUNCTION 1402e7360 FUN_1402e7360 body=67 status=ok
// SIG undefined FUN_1402e7360(void)

void FUN_1402e7360(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1464c3040 + 0x28))();
    atexit(FUN_143e99360);
    return;
  }
  FUN_141edf270(&PTR_PTR_1464c3040);
  atexit(FUN_143e99360);
  return;
}



// FUNCTION 1402e7450 FUN_1402e7450 body=67 status=ok
// SIG undefined FUN_1402e7450(void)

void FUN_1402e7450(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1464c3080 + 0x28))();
    atexit(FUN_143e99410);
    return;
  }
  FUN_141edf270(&PTR_PTR_1464c3080);
  atexit(FUN_143e99410);
  return;
}



// FUNCTION 1402e7510 FUN_1402e7510 body=103 status=ok
// SIG undefined FUN_1402e7510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e7510(void)

{
  _guard_xfg_dispatch_icall_nop(&DAT_146a9db20,0,0x60);
  _DAT_146a9daf0 = 0x4062dfc5;
  uRam0000000146a9daf8 = 0x40447a8e;
  _DAT_146a9db00 = 0;
  uRam0000000146a9db08 = 0;
  _DAT_146a9db10 = 0;
  uRam0000000146a9db18 = 0;
  _DAT_146a9db20 = 0x4062dfc5;
  uRam0000000146a9db28 = 0x40447a8e;
  _DAT_146a9db30 = 0;
  uRam0000000146a9db38 = 0;
  _DAT_146a9db40 = 0;
  uRam0000000146a9db48 = 0;
  _DAT_146a9db50 = 0x4062dfc5;
  uRam0000000146a9db58 = 0x40447a8e;
  _DAT_146a9db60 = 0;
  uRam0000000146a9db68 = 0;
  _DAT_146a9db70 = 0;
  uRam0000000146a9db78 = 0;
  return;
}



// FUNCTION 1402e75c0 `dynamic_initializer_for_'_GCsvStat_CustomDepth'' body=323 status=ok
// SIG undefined `dynamic_initializer_for_'_GCsvStat_CustomDepth''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for___GCsvStat_CustomDepth__(void)

{
  wchar_t *pwVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int iVar7;
  bool bVar8;
  undefined2 *local_28;
  undefined8 local_20;
  undefined2 *local_18;
  undefined8 local_10;
  
  uVar2 = DAT_146b094c8;
  local_10 = 0xc;
  local_18 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"__CSVSTAT__",0x18);
  iVar7 = (int)local_10;
  iVar4 = local_10._4_4_;
  bVar8 = (int)local_10 != 0;
  local_28 = local_18;
  local_18 = (undefined2 *)0x0;
  local_20._0_4_ = (int)local_10;
  local_20._4_4_ = local_10._4_4_;
  local_10 = 0;
  if (iVar4 < (int)((0xc - (uint)bVar8) + iVar7)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    iVar7 = (int)local_20;
  }
  iVar4 = (0xc - (uint)(iVar7 != 0)) + iVar7;
  local_20 = CONCAT44(local_20._4_4_,iVar4);
  if (local_20._4_4_ < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar7);
  }
  puVar3 = local_28;
  lVar5 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
  pwVar1 = local_28 + lVar5;
  pwVar1[0] = L'C';
  pwVar1[1] = L'u';
  pwVar1[2] = L's';
  pwVar1[3] = L't';
  pwVar1[4] = L'o';
  pwVar1[5] = L'm';
  pwVar1[6] = L'D';
  pwVar1[7] = L'e';
  *(undefined4 *)(local_28 + lVar5 + 8) = 0x740070;
  local_28[lVar5 + 10] = 0x68;
  local_28[lVar5 + 0xb] = 0;
  puVar6 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar6 = local_28;
  }
  local_28 = (undefined2 *)0x0;
  local_20 = 0;
  FName::FName(&DAT_146a9d148,puVar6,1);
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  _DAT_146a9d150 = uVar2;
  return;
}



// FUNCTION 1402e7730 CVarAllowCachedUniformExpressions'' body=100 status=ok
// SIG undefined CVarAllowCachedUniformExpressions''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FMaterialShader::CVarAllowCachedUniformExpressions__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146a9ef40 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AllowCachedUniformExpressions",&DAT_1464c314c,
                  L"Allow uniform expressions to be cached.",0x20);
  _DAT_146a9ef38 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e994b0);
  return;
}



// FUNCTION 1402e77a0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TComplexityAccumulatePS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a9fd10,0,L"TQuadComplexityAccumulatePS",
             L"/Engine/Private/QuadComplexityAccumulatePixelShader.usf",L"Main",3,1,
             TComplexityAccumulatePS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a9fd10 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a9fe40 = TComplexityAccumulatePS<1>::ConstructCompiledInstance;
  _DAT_146a9fe48 = FOutputDevice::CanBeUsedOnAnyThread;
  _DAT_146a9fe50 = BuildSettings::IsPromotedBuild;
  _DAT_146a9fe58 = FUN_141da0070;
  atexit((_func_5014 *)&LAB_143e99500);
  return;
}



// FUNCTION 1402e7850 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TComplexityAccumulatePS<0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a9fbc0,0,L"TShaderComplexityAccumulatePS",
             L"/Engine/Private/ShaderComplexityAccumulatePixelShader.usf",L"Main",3,1,
             TComplexityAccumulatePS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a9fbc0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a9fcf0 = TComplexityAccumulatePS<1>::ConstructCompiledInstance;
  _DAT_146a9fcf8 = FOutputDevice::CanBeUsedOnAnyThread;
  _DAT_146a9fd00 = BuildSettings::IsPromotedBuild;
  _DAT_146a9fd08 = FUN_141da0070;
  atexit((_func_5014 *)&LAB_143e99510);
  return;
}



// FUNCTION 1402e7900 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDirectionalPercentageCloserShadowProjectionPS<5,1>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146aa5bb0,0,L"TDirectionalPercentageCloserShadowProjectionPS5true",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94c50,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa5bb0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa5ce0 = TModulatedShadowProjection<1>::ConstructCompiledInstance;
  _DAT_146aa5ce8 = TDirectionalPercentageCloserShadowProjectionPS<5,1>::ShouldCompilePermutation;
  _DAT_146aa5cf0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa5cf8 = TDirectionalPercentageCloserShadowProjectionPS<5,1>::ModifyCompilationEnvironment
  ;
  atexit((_func_5014 *)&LAB_143e99520);
  return;
}



// FUNCTION 1402e79b0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TDirectionalPercentageCloserShadowProjectionPS<5,0>::StaticType__
               (void)

{
  FShaderType::FShaderType
            (&DAT_146aa5a60,0,L"TDirectionalPercentageCloserShadowProjectionPS5false",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94ca0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa5a60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa5b90 = TModulatedShadowProjection<1>::ConstructCompiledInstance;
  _DAT_146aa5b98 = TDirectionalPercentageCloserShadowProjectionPS<5,1>::ShouldCompilePermutation;
  _DAT_146aa5ba0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa5ba8 = TDirectionalPercentageCloserShadowProjectionPS<5,0>::ModifyCompilationEnvironment
  ;
  atexit((_func_5014 *)&LAB_143e99530);
  return;
}



// FUNCTION 1402e7a60 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TModulatedShadowProjection<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa4020,0,L"TModulatedShadowProjection<1>",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94cf0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa4020 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa4150 = TModulatedShadowProjection<1>::ConstructCompiledInstance;
  _DAT_146aa4158 = &LAB_141bc0c90;
  _DAT_146aa4160 = BuildSettings::IsPromotedBuild;
  _DAT_146aa4168 = TModulatedShadowProjection<1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e99540);
  return;
}



// FUNCTION 1402e7b10 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TModulatedShadowProjection<2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa4170,0,L"TModulatedShadowProjection<2>",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94cf0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa4170 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa42a0 = TModulatedShadowProjection<1>::ConstructCompiledInstance;
  _DAT_146aa42a8 = &LAB_141bc0c90;
  _DAT_146aa42b0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa42b8 = TModulatedShadowProjection<2>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e99550);
  return;
}



// FUNCTION 1402e7bc0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TModulatedShadowProjection<3>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa42c0,0,L"TModulatedShadowProjection<3>",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94cf0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa42c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa43f0 = TModulatedShadowProjection<1>::ConstructCompiledInstance;
  _DAT_146aa43f8 = &LAB_141bc0c90;
  _DAT_146aa4400 = BuildSettings::IsPromotedBuild;
  _DAT_146aa4408 = TModulatedShadowProjection<3>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e99560);
  return;
}



// FUNCTION 1402e7c70 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TModulatedShadowProjection<4>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa4410,0,L"TModulatedShadowProjection<4>",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94cf0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa4410 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa4540 = TModulatedShadowProjection<1>::ConstructCompiledInstance;
  _DAT_146aa4548 = &LAB_141bc0c90;
  _DAT_146aa4550 = BuildSettings::IsPromotedBuild;
  _DAT_146aa4558 = TModulatedShadowProjection<4>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e99570);
  return;
}



// FUNCTION 1402e7d20 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TModulatedShadowProjection<5>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa4560,0,L"TModulatedShadowProjection<5>",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94cf0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa4560 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa4690 = TModulatedShadowProjection<1>::ConstructCompiledInstance;
  _DAT_146aa4698 = &LAB_141bc0c90;
  _DAT_146aa46a0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa46a8 = TModulatedShadowProjection<5>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e99580);
  return;
}



// FUNCTION 1402e7dd0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TOnePassPointShadowProjectionPS<1,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa53d0,0,L"FOnePassPointShadowProjectionPS1true",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
             FUN_141d94d40,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa53d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa5500 = FUN_141d94540;
  _DAT_146aa5508 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa5510 = BuildSettings::IsPromotedBuild;
  _DAT_146aa5518 = TOnePassPointShadowProjectionPS<1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e99590);
  return;
}



// FUNCTION 1402e7e80 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TOnePassPointShadowProjectionPS<1,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa4d40,0,L"FOnePassPointShadowProjectionPS1false",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
             FUN_141d94d40,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa4d40 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa4e70 = FUN_141d94540;
  _DAT_146aa4e78 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa4e80 = BuildSettings::IsPromotedBuild;
  _DAT_146aa4e88 = TOnePassPointShadowProjectionPS<1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e995a0);
  return;
}



// FUNCTION 1402e7f30 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TOnePassPointShadowProjectionPS<2,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa5520,0,L"FOnePassPointShadowProjectionPS2true",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
             FUN_141d94d40,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa5520 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa5650 = FUN_141d94540;
  _DAT_146aa5658 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa5660 = BuildSettings::IsPromotedBuild;
  _DAT_146aa5668 = TOnePassPointShadowProjectionPS<2,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e995b0);
  return;
}



// FUNCTION 1402e7fe0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TOnePassPointShadowProjectionPS<2,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa4e90,0,L"FOnePassPointShadowProjectionPS2false",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
             FUN_141d94d40,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa4e90 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa4fc0 = FUN_141d94540;
  _DAT_146aa4fc8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa4fd0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa4fd8 = TOnePassPointShadowProjectionPS<2,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e995c0);
  return;
}



// FUNCTION 1402e8090 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TOnePassPointShadowProjectionPS<3,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa5670,0,L"FOnePassPointShadowProjectionPS3true",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
             FUN_141d94d40,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa5670 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa57a0 = FUN_141d94540;
  _DAT_146aa57a8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa57b0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa57b8 = TOnePassPointShadowProjectionPS<3,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e995d0);
  return;
}



// FUNCTION 1402e8140 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TOnePassPointShadowProjectionPS<3,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa4fe0,0,L"FOnePassPointShadowProjectionPS3false",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
             FUN_141d94d40,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa4fe0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa5110 = FUN_141d94540;
  _DAT_146aa5118 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa5120 = BuildSettings::IsPromotedBuild;
  _DAT_146aa5128 = TOnePassPointShadowProjectionPS<3,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e995e0);
  return;
}



// FUNCTION 1402e81f0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TOnePassPointShadowProjectionPS<4,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa57c0,0,L"FOnePassPointShadowProjectionPS4true",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
             FUN_141d94d40,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa57c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa58f0 = FUN_141d94540;
  _DAT_146aa58f8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa5900 = BuildSettings::IsPromotedBuild;
  _DAT_146aa5908 = TOnePassPointShadowProjectionPS<4,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e995f0);
  return;
}



// FUNCTION 1402e82a0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TOnePassPointShadowProjectionPS<4,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa5130,0,L"FOnePassPointShadowProjectionPS4false",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
             FUN_141d94d40,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa5130 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa5260 = FUN_141d94540;
  _DAT_146aa5268 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa5270 = BuildSettings::IsPromotedBuild;
  _DAT_146aa5278 = TOnePassPointShadowProjectionPS<4,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e99600);
  return;
}



// FUNCTION 1402e8350 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TOnePassPointShadowProjectionPS<5,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa5910,0,L"FOnePassPointShadowProjectionPS5true",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
             FUN_141d94d40,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa5910 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa5a40 = FUN_141d94540;
  _DAT_146aa5a48 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa5a50 = BuildSettings::IsPromotedBuild;
  _DAT_146aa5a58 = TOnePassPointShadowProjectionPS<5,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e99610);
  return;
}



// FUNCTION 1402e8400 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TOnePassPointShadowProjectionPS<5,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa5280,0,L"FOnePassPointShadowProjectionPS5false",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
             FUN_141d94d40,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa5280 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa53b0 = FUN_141d94540;
  _DAT_146aa53b8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa53c0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa53c8 = TOnePassPointShadowProjectionPS<5,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e99620);
  return;
}



// FUNCTION 1402e84b0 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthDS<1,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa0e20,2,L"TShadowDepthDSVertexShadowDepth_OutputDepthtrue",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"MainDomain",2,1,FUN_141d94d70,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa0e20 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa0f50 = FUN_141d94570;
  _DAT_146aa0f58 = FUN_141db1c50;
  _DAT_146aa0f60 = BuildSettings::IsPromotedBuild;
  _DAT_146aa0f68 = FUN_141da0700;
  atexit((_func_5014 *)&LAB_143e99630);
  return;
}



// FUNCTION 1402e8560 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthDS<1,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa1360,2,L"TShadowDepthDSVertexShadowDepth_OutputDepthfalse",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"MainDomain",2,1,FUN_141d94d70,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa1360 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa1490 = FUN_141d94570;
  _DAT_146aa1498 = FUN_141db1cd0;
  _DAT_146aa14a0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa14a8 = FUN_141da0770;
  atexit((_func_5014 *)&LAB_143e99640);
  return;
}



// FUNCTION 1402e8610 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthDS<2,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa1750,2,L"TShadowDepthDSVertexShadowDepth_OnePassPointLightfalse",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"MainDomain",2,1,FUN_141d94d70,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa1750 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa1880 = FUN_141d94570;
  _DAT_146aa1888 = FUN_141db1d50;
  _DAT_146aa1890 = BuildSettings::IsPromotedBuild;
  _DAT_146aa1898 = FUN_141da07e0;
  atexit((_func_5014 *)&LAB_143e99650);
  return;
}



// FUNCTION 1402e86c0 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthDS<0,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa03a0,2,L"TShadowDepthDSVertexShadowDepth_PerspectiveCorrecttrue",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"MainDomain",2,1,FUN_141d94d70,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa03a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa04d0 = FUN_141d94570;
  _DAT_146aa04d8 = FUN_141db1dd0;
  _DAT_146aa04e0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa04e8 = &LAB_141da0850;
  atexit((_func_5014 *)&LAB_143e99660);
  return;
}



// FUNCTION 1402e8770 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthDS<0,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa08e0,2,L"TShadowDepthDSVertexShadowDepth_PerspectiveCorrectfalse",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"MainDomain",2,1,FUN_141d94d70,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa08e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa0a10 = FUN_141d94570;
  _DAT_146aa0a18 = FUN_141db1e50;
  _DAT_146aa0a20 = BuildSettings::IsPromotedBuild;
  _DAT_146aa0a28 = FUN_141da0860;
  atexit((_func_5014 *)&LAB_143e99670);
  return;
}



// FUNCTION 1402e8820 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthHS<1,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa0cd0,2,L"TShadowDepthHSVertexShadowDepth_OutputDepthtrue",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"MainHull",1,1,
             TTranslucencyShadowDepthVS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa0cd0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa0e00 = FUN_141affc40;
  _DAT_146aa0e08 = FUN_141db1c50;
  _DAT_146aa0e10 = BuildSettings::IsPromotedBuild;
  _DAT_146aa0e18 = FUN_141da0700;
  atexit((_func_5014 *)&LAB_143e99680);
  return;
}



// FUNCTION 1402e88d0 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthHS<1,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa1210,2,L"TShadowDepthHSVertexShadowDepth_OutputDepthfalse",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"MainHull",1,1,
             TTranslucencyShadowDepthVS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa1210 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa1340 = FUN_141affc40;
  _DAT_146aa1348 = FUN_141db1cd0;
  _DAT_146aa1350 = BuildSettings::IsPromotedBuild;
  _DAT_146aa1358 = FUN_141da0770;
  atexit((_func_5014 *)&LAB_143e99690);
  return;
}



// FUNCTION 1402e8980 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthHS<2,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa1600,2,L"TShadowDepthHSVertexShadowDepth_OnePassPointLightfalse",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"MainHull",1,1,
             TTranslucencyShadowDepthVS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa1600 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa1730 = FUN_141affc40;
  _DAT_146aa1738 = FUN_141db1d50;
  _DAT_146aa1740 = BuildSettings::IsPromotedBuild;
  _DAT_146aa1748 = FUN_141da07e0;
  atexit((_func_5014 *)&LAB_143e996a0);
  return;
}



// FUNCTION 1402e8a30 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthHS<0,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa0250,2,L"TShadowDepthHSVertexShadowDepth_PerspectiveCorrecttrue",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"MainHull",1,1,
             TTranslucencyShadowDepthVS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa0250 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa0380 = FUN_141affc40;
  _DAT_146aa0388 = FUN_141db1dd0;
  _DAT_146aa0390 = BuildSettings::IsPromotedBuild;
  _DAT_146aa0398 = &LAB_141da0850;
  atexit((_func_5014 *)&LAB_143e996b0);
  return;
}



// FUNCTION 1402e8ae0 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthHS<0,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa0790,2,L"TShadowDepthHSVertexShadowDepth_PerspectiveCorrectfalse",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"MainHull",1,1,
             TTranslucencyShadowDepthVS<1>::ConstructSerializedInstance,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa0790 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa08c0 = FUN_141affc40;
  _DAT_146aa08c8 = FUN_141db1e50;
  _DAT_146aa08d0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa08d8 = FUN_141da0860;
  atexit((_func_5014 *)&LAB_143e996c0);
  return;
}



// FUNCTION 1402e8b90 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthPS<1,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa2080,2,L"TShadowDepthPSPixelShadowDepth_PerspectiveCorrecttrue",
             L"/Engine/Private/ShadowDepthPixelShader.usf",L"Main",3,1,FUN_141d94dc0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa2080 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa21b0 = FUN_141d945c0;
  _DAT_146aa21b8 = FUN_141db1ed0;
  _DAT_146aa21c0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa21c8 = FUN_141da08d0;
  atexit((_func_5014 *)&LAB_143e996d0);
  return;
}



// FUNCTION 1402e8c40 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthPS<1,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa21d0,2,L"TShadowDepthPSPixelShadowDepth_PerspectiveCorrectfalse",
             L"/Engine/Private/ShadowDepthPixelShader.usf",L"Main",3,1,FUN_141d94dc0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa21d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa2300 = FUN_141d945c0;
  _DAT_146aa2308 = FUN_141db2070;
  _DAT_146aa2310 = BuildSettings::IsPromotedBuild;
  _DAT_146aa2318 = FUN_141da0930;
  atexit((_func_5014 *)&LAB_143e996e0);
  return;
}



// FUNCTION 1402e8cf0 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthPS<2,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa2320,2,L"TShadowDepthPSPixelShadowDepth_OnePassPointLighttrue",
             L"/Engine/Private/ShadowDepthPixelShader.usf",L"Main",3,1,FUN_141d94dc0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa2320 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa2450 = FUN_141d945c0;
  _DAT_146aa2458 = FUN_141db2130;
  _DAT_146aa2460 = BuildSettings::IsPromotedBuild;
  _DAT_146aa2468 = FUN_141da0990;
  atexit((_func_5014 *)&LAB_143e996f0);
  return;
}



// FUNCTION 1402e8da0 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthPS<2,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa2470,2,L"TShadowDepthPSPixelShadowDepth_OnePassPointLightfalse",
             L"/Engine/Private/ShadowDepthPixelShader.usf",L"Main",3,1,FUN_141d94dc0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa2470 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa25a0 = FUN_141d945c0;
  _DAT_146aa25a8 = FUN_141db22c0;
  _DAT_146aa25b0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa25b8 = FUN_141da09f0;
  atexit((_func_5014 *)&LAB_143e99700);
  return;
}



// FUNCTION 1402e8e50 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthPS<0,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa1de0,2,L"TShadowDepthPSPixelShadowDepth_NonPerspectiveCorrecttrue",
             L"/Engine/Private/ShadowDepthPixelShader.usf",L"Main",3,1,FUN_141d94dc0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa1de0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa1f10 = FUN_141d945c0;
  _DAT_146aa1f18 = FUN_141db2370;
  _DAT_146aa1f20 = BuildSettings::IsPromotedBuild;
  _DAT_146aa1f28 = FUN_141da0a50;
  atexit((_func_5014 *)&LAB_143e99710);
  return;
}



// FUNCTION 1402e8f00 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthPS<0,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa1f30,2,L"TShadowDepthPSPixelShadowDepth_NonPerspectiveCorrectfalse",
             L"/Engine/Private/ShadowDepthPixelShader.usf",L"Main",3,1,FUN_141d94dc0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa1f30 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa2060 = FUN_141d945c0;
  _DAT_146aa2068 = FUN_141db2510;
  _DAT_146aa2070 = BuildSettings::IsPromotedBuild;
  _DAT_146aa2078 = FUN_141da0ab0;
  atexit((_func_5014 *)&LAB_143e99720);
  return;
}



// FUNCTION 1402e8fb0 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthVS<1,1,0,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa0b80,2,L"TShadowDepthVSForGSVertexShadowDepth_OutputDepthtrue",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"MainForGS",0,1,FUN_141d94e30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa0b80 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa0cb0 = TShadowDepthPS<1,1>::ConstructCompiledInstance;
  _DAT_146aa0cb8 = FUN_141db2590;
  _DAT_146aa0cc0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa0cc8 = FUN_141da0b00;
  atexit((_func_5014 *)&LAB_143e99730);
  return;
}



// FUNCTION 1402e9060 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthVS<1,1,0,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa0a30,2,L"TShadowDepthVSVertexShadowDepth_OutputDepthtrue",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"Main",0,1,FUN_141d94e30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa0a30 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa0b60 = TShadowDepthPS<1,1>::ConstructCompiledInstance;
  _DAT_146aa0b68 = FUN_141db2820;
  _DAT_146aa0b70 = BuildSettings::IsPromotedBuild;
  _DAT_146aa0b78 = FUN_141da0700;
  atexit((_func_5014 *)&LAB_143e99740);
  return;
}



// FUNCTION 1402e9110 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthVS<1,0,1,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa19f0,2,L"TShadowDepthVSVertexShadowDepth_OutputDepthPositionOnly",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"PositionOnlyMain",0,1,FUN_141d94e30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa19f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa1b20 = TShadowDepthPS<1,1>::ConstructCompiledInstance;
  _DAT_146aa1b28 = FUN_141db2a30;
  _DAT_146aa1b30 = BuildSettings::IsPromotedBuild;
  _DAT_146aa1b38 = FUN_141da0bb0;
  atexit((_func_5014 *)&LAB_143e99750);
  return;
}



// FUNCTION 1402e91c0 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthVS<1,0,0,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa10c0,2,L"TShadowDepthVSForGSVertexShadowDepth_OutputDepthfalse",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"MainForGS",0,1,FUN_141d94e30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa10c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa11f0 = TShadowDepthPS<1,1>::ConstructCompiledInstance;
  _DAT_146aa11f8 = FUN_141db2b70;
  _DAT_146aa1200 = BuildSettings::IsPromotedBuild;
  _DAT_146aa1208 = FUN_141da0c20;
  atexit((_func_5014 *)&LAB_143e99760);
  return;
}



// FUNCTION 1402e9270 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthVS<1,0,0,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa0f70,2,L"TShadowDepthVSVertexShadowDepth_OutputDepthfalse",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"Main",0,1,FUN_141d94e30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa0f70 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa10a0 = TShadowDepthPS<1,1>::ConstructCompiledInstance;
  _DAT_146aa10a8 = FUN_141db2d50;
  _DAT_146aa10b0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa10b8 = FUN_141da0770;
  atexit((_func_5014 *)&LAB_143e99770);
  return;
}



// FUNCTION 1402e9320 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthVS<2,0,1,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa1c90,2,L"TShadowDepthVSForGSVertexShadowDepth_OnePassPointLightPositionOnly",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"PositionOnlyMainForGS",0,1,
             FUN_141d94e30,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa1c90 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa1dc0 = TShadowDepthPS<1,1>::ConstructCompiledInstance;
  _DAT_146aa1dc8 = FUN_141db2e80;
  _DAT_146aa1dd0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa1dd8 = FUN_141da0cd0;
  atexit((_func_5014 *)&LAB_143e99780);
  return;
}



// FUNCTION 1402e93d0 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthVS<2,0,1,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa1b40,2,L"TShadowDepthVSVertexShadowDepth_OnePassPointLightPositionOnly",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"PositionOnlyMain",0,1,FUN_141d94e30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa1b40 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa1c70 = TShadowDepthPS<1,1>::ConstructCompiledInstance;
  _DAT_146aa1c78 = FUN_141db3070;
  _DAT_146aa1c80 = BuildSettings::IsPromotedBuild;
  _DAT_146aa1c88 = FUN_141da0d80;
  atexit((_func_5014 *)&LAB_143e99790);
  return;
}



// FUNCTION 1402e9480 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthVS<2,0,0,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a9fe60,2,L"TShadowDepthVSForGSVertexShadowDepth_OnePassPointLightfalse",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"MainForGS",0,1,FUN_141d94e30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a9fe60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a9ff90 = TShadowDepthPS<1,1>::ConstructCompiledInstance;
  _DAT_146a9ff98 = FUN_141db31d0;
  _DAT_146a9ffa0 = BuildSettings::IsPromotedBuild;
  _DAT_146a9ffa8 = FUN_141da0df0;
  atexit((_func_5014 *)&LAB_143e997a0);
  return;
}



// FUNCTION 1402e9530 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthVS<2,0,0,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa14b0,2,L"TShadowDepthVSVertexShadowDepth_OnePassPointLightfalse",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"Main",0,1,FUN_141d94e30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa14b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa15e0 = TShadowDepthPS<1,1>::ConstructCompiledInstance;
  _DAT_146aa15e8 = FUN_141db33b0;
  _DAT_146aa15f0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa15f8 = FUN_141da07e0;
  atexit((_func_5014 *)&LAB_143e997b0);
  return;
}



// FUNCTION 1402e95e0 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthVS<0,1,0,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa0100,2,L"TShadowDepthVSForGSVertexShadowDepth_PerspectiveCorrecttrue",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"MainForGS",0,1,FUN_141d94e30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa0100 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa0230 = TShadowDepthPS<1,1>::ConstructCompiledInstance;
  _DAT_146aa0238 = FUN_141db3500;
  _DAT_146aa0240 = BuildSettings::IsPromotedBuild;
  _DAT_146aa0248 = FUN_141da0ea0;
  atexit((_func_5014 *)&LAB_143e997c0);
  return;
}



// FUNCTION 1402e9690 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthVS<0,1,0,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146a9ffb0,2,L"TShadowDepthVSVertexShadowDepth_PerspectiveCorrecttrue",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"Main",0,1,FUN_141d94e30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a9ffb0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa00e0 = TShadowDepthPS<1,1>::ConstructCompiledInstance;
  _DAT_146aa00e8 = FUN_141db3790;
  _DAT_146aa00f0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa00f8 = FUN_141da0f50;
  atexit((_func_5014 *)&LAB_143e997d0);
  return;
}



// FUNCTION 1402e9740 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthVS<0,0,1,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa18a0,2,L"TShadowDepthVSVertexShadowDepth_PerspectiveCorrectPositionOnly",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"PositionOnlyMain",0,1,FUN_141d94e30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa18a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa19d0 = TShadowDepthPS<1,1>::ConstructCompiledInstance;
  _DAT_146aa19d8 = FUN_141db39a0;
  _DAT_146aa19e0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa19e8 = FUN_141da0fc0;
  atexit((_func_5014 *)&LAB_143e997e0);
  return;
}



// FUNCTION 1402e97f0 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthVS<0,0,0,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa0640,2,L"TShadowDepthVSForGSVertexShadowDepth_PerspectiveCorrectfalse",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"MainForGS",0,1,FUN_141d94e30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa0640 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa0770 = TShadowDepthPS<1,1>::ConstructCompiledInstance;
  _DAT_146aa0778 = FUN_141db3b00;
  _DAT_146aa0780 = BuildSettings::IsPromotedBuild;
  _DAT_146aa0788 = FUN_141da1030;
  atexit((_func_5014 *)&LAB_143e997f0);
  return;
}



// FUNCTION 1402e98a0 StaticType'' body=173 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowDepthVS<0,0,0,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa04f0,2,L"TShadowDepthVSVertexShadowDepth_PerspectiveCorrectfalse",
             L"/Engine/Private/ShadowDepthVertexShader.usf",L"Main",0,1,FUN_141d94e30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa04f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa0620 = TShadowDepthPS<1,1>::ConstructCompiledInstance;
  _DAT_146aa0628 = FUN_141db3ce0;
  _DAT_146aa0630 = BuildSettings::IsPromotedBuild;
  _DAT_146aa0638 = FUN_141da0860;
  atexit((_func_5014 *)&LAB_143e99800);
  return;
}



// FUNCTION 1402e9950 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowProjectionFromTranslucencyPS<1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa46b0,0,L"TShadowProjectionFromTranslucencyPS<1>",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94e90,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa46b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa47e0 = FUN_141d94660;
  _DAT_146aa47e8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa47f0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa47f8 = TShadowProjectionFromTranslucencyPS<1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e99810);
  return;
}



// FUNCTION 1402e9a00 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowProjectionFromTranslucencyPS<2>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa4800,0,L"TShadowProjectionFromTranslucencyPS<2>",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94e90,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa4800 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa4930 = FUN_141d94660;
  _DAT_146aa4938 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa4940 = BuildSettings::IsPromotedBuild;
  _DAT_146aa4948 = TShadowProjectionFromTranslucencyPS<2>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e99820);
  return;
}



// FUNCTION 1402e9ab0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowProjectionFromTranslucencyPS<3>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa4950,0,L"TShadowProjectionFromTranslucencyPS<3>",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94e90,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa4950 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa4a80 = FUN_141d94660;
  _DAT_146aa4a88 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa4a90 = BuildSettings::IsPromotedBuild;
  _DAT_146aa4a98 = TShadowProjectionFromTranslucencyPS<3>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e99830);
  return;
}



// FUNCTION 1402e9b60 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowProjectionFromTranslucencyPS<4>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa4aa0,0,L"TShadowProjectionFromTranslucencyPS<4>",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94e90,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa4aa0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa4bd0 = FUN_141d94660;
  _DAT_146aa4bd8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa4be0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa4be8 = TShadowProjectionFromTranslucencyPS<4>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e99840);
  return;
}



// FUNCTION 1402e9c10 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowProjectionFromTranslucencyPS<5>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa4bf0,0,L"TShadowProjectionFromTranslucencyPS<5>",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94ee0,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa4bf0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa4d20 = FUN_141d946d0;
  _DAT_146aa4d28 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa4d30 = BuildSettings::IsPromotedBuild;
  _DAT_146aa4d38 = TShadowProjectionFromTranslucencyPS<5>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e99850);
  return;
}



// FUNCTION 1402e9cc0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowProjectionPS<1,1,0,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa3990,0,L"FShadowProjectionPS1truetrue",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94f30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa3990 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa3ac0 = FUN_141d94740;
  _DAT_146aa3ac8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa3ad0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa3ad8 = TShadowProjectionPS<1,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e99860);
  return;
}



// FUNCTION 1402e9d70 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowProjectionPS<1,1,0,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa3300,0,L"FShadowProjectionPS1truefalse",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94f30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa3300 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa3430 = FUN_141d94740;
  _DAT_146aa3438 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa3440 = BuildSettings::IsPromotedBuild;
  _DAT_146aa3448 = TShadowProjectionPS<1,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e99870);
  return;
}



// FUNCTION 1402e9e20 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowProjectionPS<1,0,0,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa2c70,0,L"FShadowProjectionPS1falsetrue",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94f30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa2c70 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa2da0 = FUN_141d94740;
  _DAT_146aa2da8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa2db0 = BuildSettings::IsPromotedBuild;
  _DAT_146aa2db8 = TShadowProjectionPS<1,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e99880);
  return;
}



// FUNCTION 1402e9ed0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowProjectionPS<1,0,0,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa25e0,0,L"FShadowProjectionPS1falsefalse",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94f30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa25e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa2710 = FUN_141d94740;
  _DAT_146aa2718 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa2720 = BuildSettings::IsPromotedBuild;
  _DAT_146aa2728 = TShadowProjectionPS<1,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e99890);
  return;
}



// FUNCTION 1402e9f80 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowProjectionPS<2,1,0,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa3ae0,0,L"FShadowProjectionPS2truetrue",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94f30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa3ae0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa3c10 = FUN_141d94740;
  _DAT_146aa3c18 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa3c20 = BuildSettings::IsPromotedBuild;
  _DAT_146aa3c28 = TShadowProjectionPS<2,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e998a0);
  return;
}



// FUNCTION 1402ea030 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowProjectionPS<2,1,0,0>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa3450,0,L"FShadowProjectionPS2truefalse",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94f30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa3450 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa3580 = FUN_141d94740;
  _DAT_146aa3588 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa3590 = BuildSettings::IsPromotedBuild;
  _DAT_146aa3598 = TShadowProjectionPS<2,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e998b0);
  return;
}



// FUNCTION 1402ea0e0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'TShadowProjectionPS<2,0,0,1>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_146aa2dc0,0,L"FShadowProjectionPS2falsetrue",
             L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,FUN_141d94f30,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146aa2dc0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146aa2ef0 = FUN_141d94740;
  _DAT_146aa2ef8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146aa2f00 = BuildSettings::IsPromotedBuild;
  _DAT_146aa2f08 = TShadowProjectionPS<2,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e998c0);
  return;
}


