// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1402cb260 FUN_1402cb260 body=337 status=ok
// SIG undefined FUN_1402cb260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cb260(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a81030) {
    _Init_thread_header(&DAT_146a81030);
    if (DAT_146a81030 == -1) {
      FString::PrintfImpl(&DAT_146a81020,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8
                          ,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e94eb0);
      _Init_thread_footer(&DAT_146a81030);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a81028 != 0) {
    puVar1 = DAT_146a81020;
  }
  FShaderType::FShaderType
            (&DAT_146a83d30,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a83d30 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a83e60 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a83e68 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a83e70 = BuildSettings::IsPromotedBuild;
  _DAT_146a83e78 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,1,1,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e935e0);
  return;
}



// FUNCTION 1402cb3c0 FUN_1402cb3c0 body=344 status=ok
// SIG undefined FUN_1402cb3c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cb3c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a81018) {
    _Init_thread_header(&DAT_146a81018);
    if (DAT_146a81018 == -1) {
      FString::PrintfImpl(&DAT_146a81008,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8
                          ,&DAT_143f600c8,&DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e94ed0);
      _Init_thread_footer(&DAT_146a81018);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a81010 != 0) {
    puVar1 = DAT_146a81008;
  }
  FShaderType::FShaderType
            (&DAT_146a83e80,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a83e80 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a83fb0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a83fb8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a83fc0 = BuildSettings::IsPromotedBuild;
  _DAT_146a83fc8 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,1,1,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e935f0);
  return;
}



// FUNCTION 1402cb520 FUN_1402cb520 body=344 status=ok
// SIG undefined FUN_1402cb520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cb520(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a81000) {
    _Init_thread_header(&DAT_146a81000);
    if (DAT_146a81000 == -1) {
      FString::PrintfImpl(&DAT_146a80ff0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8
                          ,&DAT_143f600c8,L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e94ef0);
      _Init_thread_footer(&DAT_146a81000);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80ff8 != 0) {
    puVar1 = DAT_146a80ff0;
  }
  FShaderType::FShaderType
            (&DAT_146a83fd0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a83fd0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a84100 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a84108 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a84110 = BuildSettings::IsPromotedBuild;
  _DAT_146a84118 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,1,1,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93600);
  return;
}



// FUNCTION 1402cb680 FUN_1402cb680 body=344 status=ok
// SIG undefined FUN_1402cb680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cb680(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80fe8) {
    _Init_thread_header(&DAT_146a80fe8);
    if (DAT_146a80fe8 == -1) {
      FString::PrintfImpl(&DAT_146a80fd8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8
                          ,&DAT_143f600c8,L"false",L"false");
      atexit((_func_5014 *)&LAB_143e94f10);
      _Init_thread_footer(&DAT_146a80fe8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80fe0 != 0) {
    puVar1 = DAT_146a80fd8;
  }
  FShaderType::FShaderType
            (&DAT_146a84120,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a84120 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a84250 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a84258 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a84260 = BuildSettings::IsPromotedBuild;
  _DAT_146a84268 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,1,1,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93610);
  return;
}



// FUNCTION 1402cb7e0 FUN_1402cb7e0 body=344 status=ok
// SIG undefined FUN_1402cb7e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cb7e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80fd0) {
    _Init_thread_header(&DAT_146a80fd0);
    if (DAT_146a80fd0 == -1) {
      FString::PrintfImpl(&DAT_146a80fc0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8
                          ,L"false",&DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e94f30);
      _Init_thread_footer(&DAT_146a80fd0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80fc8 != 0) {
    puVar1 = DAT_146a80fc0;
  }
  FShaderType::FShaderType
            (&DAT_146a84270,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a84270 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a843a0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a843a8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a843b0 = BuildSettings::IsPromotedBuild;
  _DAT_146a843b8 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,1,1,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93620);
  return;
}



// FUNCTION 1402cb940 FUN_1402cb940 body=344 status=ok
// SIG undefined FUN_1402cb940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cb940(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80fb8) {
    _Init_thread_header(&DAT_146a80fb8);
    if (DAT_146a80fb8 == -1) {
      FString::PrintfImpl(&DAT_146a80fa8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8
                          ,L"false",&DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e94f50);
      _Init_thread_footer(&DAT_146a80fb8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80fb0 != 0) {
    puVar1 = DAT_146a80fa8;
  }
  FShaderType::FShaderType
            (&DAT_146a843c0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a843c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a844f0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a844f8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a84500 = BuildSettings::IsPromotedBuild;
  _DAT_146a84508 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,1,1,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93630);
  return;
}



// FUNCTION 1402cbaa0 FUN_1402cbaa0 body=344 status=ok
// SIG undefined FUN_1402cbaa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cbaa0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80fa0) {
    _Init_thread_header(&DAT_146a80fa0);
    if (DAT_146a80fa0 == -1) {
      FString::PrintfImpl(&DAT_146a80f90,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8
                          ,L"false",L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e94f70);
      _Init_thread_footer(&DAT_146a80fa0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80f98 != 0) {
    puVar1 = DAT_146a80f90;
  }
  FShaderType::FShaderType
            (&DAT_146a84510,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a84510 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a84640 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a84648 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a84650 = BuildSettings::IsPromotedBuild;
  _DAT_146a84658 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,1,1,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93640);
  return;
}



// FUNCTION 1402cbc00 FUN_1402cbc00 body=344 status=ok
// SIG undefined FUN_1402cbc00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cbc00(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80f88) {
    _Init_thread_header(&DAT_146a80f88);
    if (DAT_146a80f88 == -1) {
      FString::PrintfImpl(&DAT_146a80f78,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8
                          ,L"false",L"false",L"false");
      atexit((_func_5014 *)&LAB_143e94f90);
      _Init_thread_footer(&DAT_146a80f88);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80f80 != 0) {
    puVar1 = DAT_146a80f78;
  }
  FShaderType::FShaderType
            (&DAT_146a84660,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a84660 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a84790 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a84798 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a847a0 = BuildSettings::IsPromotedBuild;
  _DAT_146a847a8 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,1,1,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93650);
  return;
}



// FUNCTION 1402cbd60 FUN_1402cbd60 body=344 status=ok
// SIG undefined FUN_1402cbd60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cbd60(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80f70) {
    _Init_thread_header(&DAT_146a80f70);
    if (DAT_146a80f70 == -1) {
      FString::PrintfImpl(&DAT_146a80f60,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e94fb0);
      _Init_thread_footer(&DAT_146a80f70);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80f68 != 0) {
    puVar1 = DAT_146a80f60;
  }
  FShaderType::FShaderType
            (&DAT_146a847b0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a847b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a848e0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a848e8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a848f0 = BuildSettings::IsPromotedBuild;
  _DAT_146a848f8 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,1,0,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93660);
  return;
}



// FUNCTION 1402cbec0 FUN_1402cbec0 body=344 status=ok
// SIG undefined FUN_1402cbec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cbec0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80f58) {
    _Init_thread_header(&DAT_146a80f58);
    if (DAT_146a80f58 == -1) {
      FString::PrintfImpl(&DAT_146a80f48,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e94fd0);
      _Init_thread_footer(&DAT_146a80f58);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80f50 != 0) {
    puVar1 = DAT_146a80f48;
  }
  FShaderType::FShaderType
            (&DAT_146a84900,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a84900 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a84a30 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a84a38 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a84a40 = BuildSettings::IsPromotedBuild;
  _DAT_146a84a48 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,1,0,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93670);
  return;
}



// FUNCTION 1402cc020 FUN_1402cc020 body=344 status=ok
// SIG undefined FUN_1402cc020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cc020(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80f40) {
    _Init_thread_header(&DAT_146a80f40);
    if (DAT_146a80f40 == -1) {
      FString::PrintfImpl(&DAT_146a80f30,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e94ff0);
      _Init_thread_footer(&DAT_146a80f40);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80f38 != 0) {
    puVar1 = DAT_146a80f30;
  }
  FShaderType::FShaderType
            (&DAT_146a84a50,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a84a50 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a84b80 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a84b88 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a84b90 = BuildSettings::IsPromotedBuild;
  _DAT_146a84b98 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,1,0,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93680);
  return;
}



// FUNCTION 1402cc180 FUN_1402cc180 body=344 status=ok
// SIG undefined FUN_1402cc180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cc180(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80f28) {
    _Init_thread_header(&DAT_146a80f28);
    if (DAT_146a80f28 == -1) {
      FString::PrintfImpl(&DAT_146a80f18,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8,L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95010);
      _Init_thread_footer(&DAT_146a80f28);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80f20 != 0) {
    puVar1 = DAT_146a80f18;
  }
  FShaderType::FShaderType
            (&DAT_146a84ba0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a84ba0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a84cd0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a84cd8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a84ce0 = BuildSettings::IsPromotedBuild;
  _DAT_146a84ce8 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,1,0,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93690);
  return;
}



// FUNCTION 1402cc2e0 FUN_1402cc2e0 body=344 status=ok
// SIG undefined FUN_1402cc2e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cc2e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80f10) {
    _Init_thread_header(&DAT_146a80f10);
    if (DAT_146a80f10 == -1) {
      FString::PrintfImpl(&DAT_146a80f00,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",
                          L"false",&DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95030);
      _Init_thread_footer(&DAT_146a80f10);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80f08 != 0) {
    puVar1 = DAT_146a80f00;
  }
  FShaderType::FShaderType
            (&DAT_146a84cf0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a84cf0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a84e20 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a84e28 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a84e30 = BuildSettings::IsPromotedBuild;
  _DAT_146a84e38 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,1,0,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e936a0);
  return;
}



// FUNCTION 1402cc440 FUN_1402cc440 body=344 status=ok
// SIG undefined FUN_1402cc440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cc440(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80ef8) {
    _Init_thread_header(&DAT_146a80ef8);
    if (DAT_146a80ef8 == -1) {
      FString::PrintfImpl(&DAT_146a80ee8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",
                          L"false",&DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95050);
      _Init_thread_footer(&DAT_146a80ef8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80ef0 != 0) {
    puVar1 = DAT_146a80ee8;
  }
  FShaderType::FShaderType
            (&DAT_146a84e40,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a84e40 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a84f70 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a84f78 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a84f80 = BuildSettings::IsPromotedBuild;
  _DAT_146a84f88 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,1,0,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e936b0);
  return;
}



// FUNCTION 1402cc5a0 FUN_1402cc5a0 body=344 status=ok
// SIG undefined FUN_1402cc5a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cc5a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80ee0) {
    _Init_thread_header(&DAT_146a80ee0);
    if (DAT_146a80ee0 == -1) {
      FString::PrintfImpl(&DAT_146a80ed0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",
                          L"false",L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95070);
      _Init_thread_footer(&DAT_146a80ee0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80ed8 != 0) {
    puVar1 = DAT_146a80ed0;
  }
  FShaderType::FShaderType
            (&DAT_146a84f90,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a84f90 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a850c0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a850c8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a850d0 = BuildSettings::IsPromotedBuild;
  _DAT_146a850d8 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,1,0,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e936c0);
  return;
}



// FUNCTION 1402cc700 FUN_1402cc700 body=344 status=ok
// SIG undefined FUN_1402cc700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cc700(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80ec8) {
    _Init_thread_header(&DAT_146a80ec8);
    if (DAT_146a80ec8 == -1) {
      FString::PrintfImpl(&DAT_146a80eb8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",
                          L"false",L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95090);
      _Init_thread_footer(&DAT_146a80ec8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80ec0 != 0) {
    puVar1 = DAT_146a80eb8;
  }
  FShaderType::FShaderType
            (&DAT_146a850e0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a850e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a85210 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a85218 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a85220 = BuildSettings::IsPromotedBuild;
  _DAT_146a85228 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,1,0,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e936d0);
  return;
}



// FUNCTION 1402cc860 FUN_1402cc860 body=344 status=ok
// SIG undefined FUN_1402cc860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cc860(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80eb0) {
    _Init_thread_header(&DAT_146a80eb0);
    if (DAT_146a80eb0 == -1) {
      FString::PrintfImpl(&DAT_146a80ea0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e950b0);
      _Init_thread_footer(&DAT_146a80eb0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80ea8 != 0) {
    puVar1 = DAT_146a80ea0;
  }
  FShaderType::FShaderType
            (&DAT_146a85230,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a85230 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a85360 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a85368 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a85370 = BuildSettings::IsPromotedBuild;
  _DAT_146a85378 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,0,1,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e936e0);
  return;
}



// FUNCTION 1402cc9c0 FUN_1402cc9c0 body=344 status=ok
// SIG undefined FUN_1402cc9c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cc9c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80e98) {
    _Init_thread_header(&DAT_146a80e98);
    if (DAT_146a80e98 == -1) {
      FString::PrintfImpl(&DAT_146a80e88,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e950d0);
      _Init_thread_footer(&DAT_146a80e98);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80e90 != 0) {
    puVar1 = DAT_146a80e88;
  }
  FShaderType::FShaderType
            (&DAT_146a85380,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a85380 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a854b0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a854b8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a854c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a854c8 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,0,1,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e936f0);
  return;
}



// FUNCTION 1402ccb20 FUN_1402ccb20 body=344 status=ok
// SIG undefined FUN_1402ccb20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ccb20(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80e80) {
    _Init_thread_header(&DAT_146a80e80);
    if (DAT_146a80e80 == -1) {
      FString::PrintfImpl(&DAT_146a80e70,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8,L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e950f0);
      _Init_thread_footer(&DAT_146a80e80);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80e78 != 0) {
    puVar1 = DAT_146a80e70;
  }
  FShaderType::FShaderType
            (&DAT_146a854d0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a854d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a85600 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a85608 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a85610 = BuildSettings::IsPromotedBuild;
  _DAT_146a85618 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,0,1,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93700);
  return;
}



// FUNCTION 1402ccc80 FUN_1402ccc80 body=344 status=ok
// SIG undefined FUN_1402ccc80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ccc80(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80e68) {
    _Init_thread_header(&DAT_146a80e68);
    if (DAT_146a80e68 == -1) {
      FString::PrintfImpl(&DAT_146a80e58,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8,L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95110);
      _Init_thread_footer(&DAT_146a80e68);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80e60 != 0) {
    puVar1 = DAT_146a80e58;
  }
  FShaderType::FShaderType
            (&DAT_146a85620,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a85620 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a85750 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a85758 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a85760 = BuildSettings::IsPromotedBuild;
  _DAT_146a85768 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,0,1,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93710);
  return;
}



// FUNCTION 1402ccde0 FUN_1402ccde0 body=344 status=ok
// SIG undefined FUN_1402ccde0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ccde0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80e50) {
    _Init_thread_header(&DAT_146a80e50);
    if (DAT_146a80e50 == -1) {
      FString::PrintfImpl(&DAT_146a80e40,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,
                          L"false",&DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95130);
      _Init_thread_footer(&DAT_146a80e50);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80e48 != 0) {
    puVar1 = DAT_146a80e40;
  }
  FShaderType::FShaderType
            (&DAT_146a85770,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a85770 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a858a0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a858a8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a858b0 = BuildSettings::IsPromotedBuild;
  _DAT_146a858b8 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,0,1,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93720);
  return;
}



// FUNCTION 1402ccf40 FUN_1402ccf40 body=344 status=ok
// SIG undefined FUN_1402ccf40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ccf40(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80e38) {
    _Init_thread_header(&DAT_146a80e38);
    if (DAT_146a80e38 == -1) {
      FString::PrintfImpl(&DAT_146a80e28,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,
                          L"false",&DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95150);
      _Init_thread_footer(&DAT_146a80e38);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80e30 != 0) {
    puVar1 = DAT_146a80e28;
  }
  FShaderType::FShaderType
            (&DAT_146a858c0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a858c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a859f0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a859f8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a85a00 = BuildSettings::IsPromotedBuild;
  _DAT_146a85a08 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,0,1,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93730);
  return;
}



// FUNCTION 1402cd0a0 FUN_1402cd0a0 body=344 status=ok
// SIG undefined FUN_1402cd0a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cd0a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80e20) {
    _Init_thread_header(&DAT_146a80e20);
    if (DAT_146a80e20 == -1) {
      FString::PrintfImpl(&DAT_146a80e10,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,
                          L"false",L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95170);
      _Init_thread_footer(&DAT_146a80e20);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80e18 != 0) {
    puVar1 = DAT_146a80e10;
  }
  FShaderType::FShaderType
            (&DAT_146a85a10,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a85a10 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a85b40 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a85b48 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a85b50 = BuildSettings::IsPromotedBuild;
  _DAT_146a85b58 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,0,1,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93740);
  return;
}



// FUNCTION 1402cd200 FUN_1402cd200 body=344 status=ok
// SIG undefined FUN_1402cd200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cd200(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80e08) {
    _Init_thread_header(&DAT_146a80e08);
    if (DAT_146a80e08 == -1) {
      FString::PrintfImpl(&DAT_146a80df8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,
                          L"false",L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95190);
      _Init_thread_footer(&DAT_146a80e08);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80e00 != 0) {
    puVar1 = DAT_146a80df8;
  }
  FShaderType::FShaderType
            (&DAT_146a85b60,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a85b60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a85c90 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a85c98 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a85ca0 = BuildSettings::IsPromotedBuild;
  _DAT_146a85ca8 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,0,1,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93750);
  return;
}



// FUNCTION 1402cd360 FUN_1402cd360 body=344 status=ok
// SIG undefined FUN_1402cd360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cd360(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80df0) {
    _Init_thread_header(&DAT_146a80df0);
    if (DAT_146a80df0 == -1) {
      FString::PrintfImpl(&DAT_146a80de0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e951b0);
      _Init_thread_footer(&DAT_146a80df0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80de8 != 0) {
    puVar1 = DAT_146a80de0;
  }
  FShaderType::FShaderType
            (&DAT_146a85cb0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a85cb0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a85de0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a85de8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a85df0 = BuildSettings::IsPromotedBuild;
  _DAT_146a85df8 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,0,0,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93760);
  return;
}



// FUNCTION 1402cd4c0 FUN_1402cd4c0 body=344 status=ok
// SIG undefined FUN_1402cd4c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cd4c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80dd8) {
    _Init_thread_header(&DAT_146a80dd8);
    if (DAT_146a80dd8 == -1) {
      FString::PrintfImpl(&DAT_146a80dc8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e951d0);
      _Init_thread_footer(&DAT_146a80dd8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80dd0 != 0) {
    puVar1 = DAT_146a80dc8;
  }
  FShaderType::FShaderType
            (&DAT_146a85e00,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a85e00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a85f30 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a85f38 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a85f40 = BuildSettings::IsPromotedBuild;
  _DAT_146a85f48 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,0,0,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93770);
  return;
}



// FUNCTION 1402cd620 FUN_1402cd620 body=344 status=ok
// SIG undefined FUN_1402cd620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cd620(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80dc0) {
    _Init_thread_header(&DAT_146a80dc0);
    if (DAT_146a80dc0 == -1) {
      FString::PrintfImpl(&DAT_146a80db0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e951f0);
      _Init_thread_footer(&DAT_146a80dc0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80db8 != 0) {
    puVar1 = DAT_146a80db0;
  }
  FShaderType::FShaderType
            (&DAT_146a85f50,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a85f50 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a86080 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a86088 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a86090 = BuildSettings::IsPromotedBuild;
  _DAT_146a86098 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,0,0,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93780);
  return;
}



// FUNCTION 1402cd780 FUN_1402cd780 body=344 status=ok
// SIG undefined FUN_1402cd780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cd780(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80da8) {
    _Init_thread_header(&DAT_146a80da8);
    if (DAT_146a80da8 == -1) {
      FString::PrintfImpl(&DAT_146a80d98,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",
                          &DAT_143f600c8,L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95210);
      _Init_thread_footer(&DAT_146a80da8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80da0 != 0) {
    puVar1 = DAT_146a80d98;
  }
  FShaderType::FShaderType
            (&DAT_146a860a0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a860a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a861d0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a861d8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a861e0 = BuildSettings::IsPromotedBuild;
  _DAT_146a861e8 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,0,0,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93790);
  return;
}



// FUNCTION 1402cd8e0 FUN_1402cd8e0 body=344 status=ok
// SIG undefined FUN_1402cd8e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cd8e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80d90) {
    _Init_thread_header(&DAT_146a80d90);
    if (DAT_146a80d90 == -1) {
      FString::PrintfImpl(&DAT_146a80d80,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95230);
      _Init_thread_footer(&DAT_146a80d90);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80d88 != 0) {
    puVar1 = DAT_146a80d80;
  }
  FShaderType::FShaderType
            (&DAT_146a861f0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a861f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a86320 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a86328 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a86330 = BuildSettings::IsPromotedBuild;
  _DAT_146a86338 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,0,0,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e937a0);
  return;
}



// FUNCTION 1402cda40 FUN_1402cda40 body=344 status=ok
// SIG undefined FUN_1402cda40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cda40(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80d78) {
    _Init_thread_header(&DAT_146a80d78);
    if (DAT_146a80d78 == -1) {
      FString::PrintfImpl(&DAT_146a80d68,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95250);
      _Init_thread_footer(&DAT_146a80d78);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80d70 != 0) {
    puVar1 = DAT_146a80d68;
  }
  FShaderType::FShaderType
            (&DAT_146a86340,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a86340 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a86470 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a86478 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a86480 = BuildSettings::IsPromotedBuild;
  _DAT_146a86488 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,0,0,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e937b0);
  return;
}



// FUNCTION 1402cdba0 FUN_1402cdba0 body=344 status=ok
// SIG undefined FUN_1402cdba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cdba0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80d60) {
    _Init_thread_header(&DAT_146a80d60);
    if (DAT_146a80d60 == -1) {
      FString::PrintfImpl(&DAT_146a80d50,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",
                          L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95270);
      _Init_thread_footer(&DAT_146a80d60);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80d58 != 0) {
    puVar1 = DAT_146a80d50;
  }
  FShaderType::FShaderType
            (&DAT_146a86490,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a86490 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a865c0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a865c8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a865d0 = BuildSettings::IsPromotedBuild;
  _DAT_146a865d8 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,0,0,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e937c0);
  return;
}



// FUNCTION 1402cdd00 FUN_1402cdd00 body=344 status=ok
// SIG undefined FUN_1402cdd00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cdd00(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80d48) {
    _Init_thread_header(&DAT_146a80d48);
    if (DAT_146a80d48 == -1) {
      FString::PrintfImpl(&DAT_146a80d38,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",
                          L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95290);
      _Init_thread_footer(&DAT_146a80d48);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80d40 != 0) {
    puVar1 = DAT_146a80d38;
  }
  FShaderType::FShaderType
            (&DAT_146a865e0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a865e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a86710 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a86718 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a86720 = BuildSettings::IsPromotedBuild;
  _DAT_146a86728 =
       TReflectionEnvironmentSkyLightingPS<1,1,1,0,0,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e937d0);
  return;
}



// FUNCTION 1402cde60 FUN_1402cde60 body=344 status=ok
// SIG undefined FUN_1402cde60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cde60(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80d30) {
    _Init_thread_header(&DAT_146a80d30);
    if (DAT_146a80d30 == -1) {
      FString::PrintfImpl(&DAT_146a80d20,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e952b0);
      _Init_thread_footer(&DAT_146a80d30);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80d28 != 0) {
    puVar1 = DAT_146a80d20;
  }
  FShaderType::FShaderType
            (&DAT_146a86730,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a86730 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a86860 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a86868 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a86870 = BuildSettings::IsPromotedBuild;
  _DAT_146a86878 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,1,1,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e937e0);
  return;
}



// FUNCTION 1402cdfc0 FUN_1402cdfc0 body=344 status=ok
// SIG undefined FUN_1402cdfc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cdfc0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80d18) {
    _Init_thread_header(&DAT_146a80d18);
    if (DAT_146a80d18 == -1) {
      FString::PrintfImpl(&DAT_146a80d08,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e952d0);
      _Init_thread_footer(&DAT_146a80d18);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80d10 != 0) {
    puVar1 = DAT_146a80d08;
  }
  FShaderType::FShaderType
            (&DAT_146a86880,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a86880 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a869b0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a869b8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a869c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a869c8 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,1,1,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e937f0);
  return;
}



// FUNCTION 1402ce120 FUN_1402ce120 body=344 status=ok
// SIG undefined FUN_1402ce120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ce120(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80d00) {
    _Init_thread_header(&DAT_146a80d00);
    if (DAT_146a80d00 == -1) {
      FString::PrintfImpl(&DAT_146a80cf0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e952f0);
      _Init_thread_footer(&DAT_146a80d00);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80cf8 != 0) {
    puVar1 = DAT_146a80cf0;
  }
  FShaderType::FShaderType
            (&DAT_146a869d0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a869d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a86b00 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a86b08 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a86b10 = BuildSettings::IsPromotedBuild;
  _DAT_146a86b18 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,1,1,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93800);
  return;
}



// FUNCTION 1402ce280 FUN_1402ce280 body=344 status=ok
// SIG undefined FUN_1402ce280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ce280(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80ce8) {
    _Init_thread_header(&DAT_146a80ce8);
    if (DAT_146a80ce8 == -1) {
      FString::PrintfImpl(&DAT_146a80cd8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95310);
      _Init_thread_footer(&DAT_146a80ce8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80ce0 != 0) {
    puVar1 = DAT_146a80cd8;
  }
  FShaderType::FShaderType
            (&DAT_146a86b20,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a86b20 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a86c50 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a86c58 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a86c60 = BuildSettings::IsPromotedBuild;
  _DAT_146a86c68 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,1,1,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93810);
  return;
}



// FUNCTION 1402ce3e0 FUN_1402ce3e0 body=344 status=ok
// SIG undefined FUN_1402ce3e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ce3e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80cd0) {
    _Init_thread_header(&DAT_146a80cd0);
    if (DAT_146a80cd0 == -1) {
      FString::PrintfImpl(&DAT_146a80cc0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,
                          L"false",&DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95330);
      _Init_thread_footer(&DAT_146a80cd0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80cc8 != 0) {
    puVar1 = DAT_146a80cc0;
  }
  FShaderType::FShaderType
            (&DAT_146a86c70,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a86c70 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a86da0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a86da8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a86db0 = BuildSettings::IsPromotedBuild;
  _DAT_146a86db8 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,1,1,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93820);
  return;
}



// FUNCTION 1402ce540 FUN_1402ce540 body=344 status=ok
// SIG undefined FUN_1402ce540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ce540(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80cb8) {
    _Init_thread_header(&DAT_146a80cb8);
    if (DAT_146a80cb8 == -1) {
      FString::PrintfImpl(&DAT_146a80ca8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,
                          L"false",&DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95350);
      _Init_thread_footer(&DAT_146a80cb8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80cb0 != 0) {
    puVar1 = DAT_146a80ca8;
  }
  FShaderType::FShaderType
            (&DAT_146a86dc0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a86dc0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a86ef0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a86ef8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a86f00 = BuildSettings::IsPromotedBuild;
  _DAT_146a86f08 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,1,1,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93830);
  return;
}



// FUNCTION 1402ce6a0 FUN_1402ce6a0 body=344 status=ok
// SIG undefined FUN_1402ce6a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ce6a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80ca0) {
    _Init_thread_header(&DAT_146a80ca0);
    if (DAT_146a80ca0 == -1) {
      FString::PrintfImpl(&DAT_146a80c90,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,
                          L"false",L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95370);
      _Init_thread_footer(&DAT_146a80ca0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80c98 != 0) {
    puVar1 = DAT_146a80c90;
  }
  FShaderType::FShaderType
            (&DAT_146a86f10,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a86f10 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a87040 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a87048 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a87050 = BuildSettings::IsPromotedBuild;
  _DAT_146a87058 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,1,1,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93840);
  return;
}



// FUNCTION 1402ce800 FUN_1402ce800 body=344 status=ok
// SIG undefined FUN_1402ce800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ce800(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80c88) {
    _Init_thread_header(&DAT_146a80c88);
    if (DAT_146a80c88 == -1) {
      FString::PrintfImpl(&DAT_146a80c78,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,
                          L"false",L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95390);
      _Init_thread_footer(&DAT_146a80c88);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80c80 != 0) {
    puVar1 = DAT_146a80c78;
  }
  FShaderType::FShaderType
            (&DAT_146a87060,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a87060 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a87190 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a87198 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a871a0 = BuildSettings::IsPromotedBuild;
  _DAT_146a871a8 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,1,1,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93850);
  return;
}



// FUNCTION 1402ce960 FUN_1402ce960 body=344 status=ok
// SIG undefined FUN_1402ce960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ce960(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80c70) {
    _Init_thread_header(&DAT_146a80c70);
    if (DAT_146a80c70 == -1) {
      FString::PrintfImpl(&DAT_146a80c60,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e953b0);
      _Init_thread_footer(&DAT_146a80c70);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80c68 != 0) {
    puVar1 = DAT_146a80c60;
  }
  FShaderType::FShaderType
            (&DAT_146a871b0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a871b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a872e0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a872e8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a872f0 = BuildSettings::IsPromotedBuild;
  _DAT_146a872f8 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,1,0,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93860);
  return;
}



// FUNCTION 1402ceac0 FUN_1402ceac0 body=344 status=ok
// SIG undefined FUN_1402ceac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ceac0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80c58) {
    _Init_thread_header(&DAT_146a80c58);
    if (DAT_146a80c58 == -1) {
      FString::PrintfImpl(&DAT_146a80c48,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e953d0);
      _Init_thread_footer(&DAT_146a80c58);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80c50 != 0) {
    puVar1 = DAT_146a80c48;
  }
  FShaderType::FShaderType
            (&DAT_146a87300,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a87300 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a87430 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a87438 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a87440 = BuildSettings::IsPromotedBuild;
  _DAT_146a87448 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,1,0,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93870);
  return;
}



// FUNCTION 1402cec20 FUN_1402cec20 body=344 status=ok
// SIG undefined FUN_1402cec20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cec20(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80c40) {
    _Init_thread_header(&DAT_146a80c40);
    if (DAT_146a80c40 == -1) {
      FString::PrintfImpl(&DAT_146a80c30,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e953f0);
      _Init_thread_footer(&DAT_146a80c40);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80c38 != 0) {
    puVar1 = DAT_146a80c30;
  }
  FShaderType::FShaderType
            (&DAT_146a87450,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a87450 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a87580 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a87588 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a87590 = BuildSettings::IsPromotedBuild;
  _DAT_146a87598 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,1,0,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93880);
  return;
}



// FUNCTION 1402ced80 FUN_1402ced80 body=344 status=ok
// SIG undefined FUN_1402ced80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ced80(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80c28) {
    _Init_thread_header(&DAT_146a80c28);
    if (DAT_146a80c28 == -1) {
      FString::PrintfImpl(&DAT_146a80c18,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",
                          &DAT_143f600c8,L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95410);
      _Init_thread_footer(&DAT_146a80c28);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80c20 != 0) {
    puVar1 = DAT_146a80c18;
  }
  FShaderType::FShaderType
            (&DAT_146a875a0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a875a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a876d0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a876d8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a876e0 = BuildSettings::IsPromotedBuild;
  _DAT_146a876e8 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,1,0,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93890);
  return;
}



// FUNCTION 1402ceee0 FUN_1402ceee0 body=344 status=ok
// SIG undefined FUN_1402ceee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ceee0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80c10) {
    _Init_thread_header(&DAT_146a80c10);
    if (DAT_146a80c10 == -1) {
      FString::PrintfImpl(&DAT_146a80c00,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95430);
      _Init_thread_footer(&DAT_146a80c10);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80c08 != 0) {
    puVar1 = DAT_146a80c00;
  }
  FShaderType::FShaderType
            (&DAT_146a876f0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a876f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a87820 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a87828 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a87830 = BuildSettings::IsPromotedBuild;
  _DAT_146a87838 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,1,0,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e938a0);
  return;
}



// FUNCTION 1402cf040 FUN_1402cf040 body=344 status=ok
// SIG undefined FUN_1402cf040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cf040(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80bf8) {
    _Init_thread_header(&DAT_146a80bf8);
    if (DAT_146a80bf8 == -1) {
      FString::PrintfImpl(&DAT_146a80be8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95450);
      _Init_thread_footer(&DAT_146a80bf8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80bf0 != 0) {
    puVar1 = DAT_146a80be8;
  }
  FShaderType::FShaderType
            (&DAT_146a87840,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a87840 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a87970 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a87978 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a87980 = BuildSettings::IsPromotedBuild;
  _DAT_146a87988 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,1,0,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e938b0);
  return;
}



// FUNCTION 1402cf1a0 FUN_1402cf1a0 body=344 status=ok
// SIG undefined FUN_1402cf1a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cf1a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80be0) {
    _Init_thread_header(&DAT_146a80be0);
    if (DAT_146a80be0 == -1) {
      FString::PrintfImpl(&DAT_146a80bd0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",
                          L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95470);
      _Init_thread_footer(&DAT_146a80be0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80bd8 != 0) {
    puVar1 = DAT_146a80bd0;
  }
  FShaderType::FShaderType
            (&DAT_146a87990,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a87990 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a87ac0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a87ac8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a87ad0 = BuildSettings::IsPromotedBuild;
  _DAT_146a87ad8 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,1,0,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e938c0);
  return;
}



// FUNCTION 1402cf300 FUN_1402cf300 body=344 status=ok
// SIG undefined FUN_1402cf300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cf300(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80bc8) {
    _Init_thread_header(&DAT_146a80bc8);
    if (DAT_146a80bc8 == -1) {
      FString::PrintfImpl(&DAT_146a80bb8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",
                          L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95490);
      _Init_thread_footer(&DAT_146a80bc8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80bc0 != 0) {
    puVar1 = DAT_146a80bb8;
  }
  FShaderType::FShaderType
            (&DAT_146a87ae0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a87ae0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a87c10 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a87c18 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a87c20 = BuildSettings::IsPromotedBuild;
  _DAT_146a87c28 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,1,0,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e938d0);
  return;
}



// FUNCTION 1402cf460 FUN_1402cf460 body=344 status=ok
// SIG undefined FUN_1402cf460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cf460(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80bb0) {
    _Init_thread_header(&DAT_146a80bb0);
    if (DAT_146a80bb0 == -1) {
      FString::PrintfImpl(&DAT_146a80ba0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e954b0);
      _Init_thread_footer(&DAT_146a80bb0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80ba8 != 0) {
    puVar1 = DAT_146a80ba0;
  }
  FShaderType::FShaderType
            (&DAT_146a87c30,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a87c30 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a87d60 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a87d68 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a87d70 = BuildSettings::IsPromotedBuild;
  _DAT_146a87d78 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,0,1,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e938e0);
  return;
}



// FUNCTION 1402cf5c0 FUN_1402cf5c0 body=344 status=ok
// SIG undefined FUN_1402cf5c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cf5c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80b98) {
    _Init_thread_header(&DAT_146a80b98);
    if (DAT_146a80b98 == -1) {
      FString::PrintfImpl(&DAT_146a80b88,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e954d0);
      _Init_thread_footer(&DAT_146a80b98);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80b90 != 0) {
    puVar1 = DAT_146a80b88;
  }
  FShaderType::FShaderType
            (&DAT_146a87d80,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a87d80 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a87eb0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a87eb8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a87ec0 = BuildSettings::IsPromotedBuild;
  _DAT_146a87ec8 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,0,1,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e938f0);
  return;
}



// FUNCTION 1402cf720 FUN_1402cf720 body=344 status=ok
// SIG undefined FUN_1402cf720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cf720(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80b80) {
    _Init_thread_header(&DAT_146a80b80);
    if (DAT_146a80b80 == -1) {
      FString::PrintfImpl(&DAT_146a80b70,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,
                          &DAT_143f600c8,L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e954f0);
      _Init_thread_footer(&DAT_146a80b80);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80b78 != 0) {
    puVar1 = DAT_146a80b70;
  }
  FShaderType::FShaderType
            (&DAT_146a87ed0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a87ed0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a88000 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a88008 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a88010 = BuildSettings::IsPromotedBuild;
  _DAT_146a88018 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,0,1,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93900);
  return;
}



// FUNCTION 1402cf880 FUN_1402cf880 body=344 status=ok
// SIG undefined FUN_1402cf880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cf880(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80b68) {
    _Init_thread_header(&DAT_146a80b68);
    if (DAT_146a80b68 == -1) {
      FString::PrintfImpl(&DAT_146a80b58,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,
                          &DAT_143f600c8,L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95510);
      _Init_thread_footer(&DAT_146a80b68);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80b60 != 0) {
    puVar1 = DAT_146a80b58;
  }
  FShaderType::FShaderType
            (&DAT_146a88020,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a88020 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a88150 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a88158 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a88160 = BuildSettings::IsPromotedBuild;
  _DAT_146a88168 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,0,1,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93910);
  return;
}



// FUNCTION 1402cf9e0 FUN_1402cf9e0 body=344 status=ok
// SIG undefined FUN_1402cf9e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cf9e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80b50) {
    _Init_thread_header(&DAT_146a80b50);
    if (DAT_146a80b50 == -1) {
      FString::PrintfImpl(&DAT_146a80b40,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95530);
      _Init_thread_footer(&DAT_146a80b50);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80b48 != 0) {
    puVar1 = DAT_146a80b40;
  }
  FShaderType::FShaderType
            (&DAT_146a88170,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a88170 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a882a0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a882a8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a882b0 = BuildSettings::IsPromotedBuild;
  _DAT_146a882b8 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,0,1,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93920);
  return;
}



// FUNCTION 1402cfb40 FUN_1402cfb40 body=344 status=ok
// SIG undefined FUN_1402cfb40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cfb40(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80b38) {
    _Init_thread_header(&DAT_146a80b38);
    if (DAT_146a80b38 == -1) {
      FString::PrintfImpl(&DAT_146a80b28,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95550);
      _Init_thread_footer(&DAT_146a80b38);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80b30 != 0) {
    puVar1 = DAT_146a80b28;
  }
  FShaderType::FShaderType
            (&DAT_146a882c0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a882c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a883f0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a883f8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a88400 = BuildSettings::IsPromotedBuild;
  _DAT_146a88408 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,0,1,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93930);
  return;
}



// FUNCTION 1402cfca0 FUN_1402cfca0 body=344 status=ok
// SIG undefined FUN_1402cfca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cfca0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80b20) {
    _Init_thread_header(&DAT_146a80b20);
    if (DAT_146a80b20 == -1) {
      FString::PrintfImpl(&DAT_146a80b10,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",
                          L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95570);
      _Init_thread_footer(&DAT_146a80b20);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80b18 != 0) {
    puVar1 = DAT_146a80b10;
  }
  FShaderType::FShaderType
            (&DAT_146a88410,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a88410 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a88540 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a88548 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a88550 = BuildSettings::IsPromotedBuild;
  _DAT_146a88558 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,0,1,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93940);
  return;
}



// FUNCTION 1402cfe00 FUN_1402cfe00 body=344 status=ok
// SIG undefined FUN_1402cfe00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cfe00(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80b08) {
    _Init_thread_header(&DAT_146a80b08);
    if (DAT_146a80b08 == -1) {
      FString::PrintfImpl(&DAT_146a80af8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",
                          L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95590);
      _Init_thread_footer(&DAT_146a80b08);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80b00 != 0) {
    puVar1 = DAT_146a80af8;
  }
  FShaderType::FShaderType
            (&DAT_146a88560,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a88560 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a88690 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a88698 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a886a0 = BuildSettings::IsPromotedBuild;
  _DAT_146a886a8 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,0,1,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93950);
  return;
}



// FUNCTION 1402cff60 FUN_1402cff60 body=344 status=ok
// SIG undefined FUN_1402cff60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402cff60(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80af0) {
    _Init_thread_header(&DAT_146a80af0);
    if (DAT_146a80af0 == -1) {
      FString::PrintfImpl(&DAT_146a80ae0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e955b0);
      _Init_thread_footer(&DAT_146a80af0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80ae8 != 0) {
    puVar1 = DAT_146a80ae0;
  }
  FShaderType::FShaderType
            (&DAT_146a886b0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a886b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a887e0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a887e8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a887f0 = BuildSettings::IsPromotedBuild;
  _DAT_146a887f8 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,0,0,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93960);
  return;
}



// FUNCTION 1402d00c0 FUN_1402d00c0 body=344 status=ok
// SIG undefined FUN_1402d00c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d00c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80ad8) {
    _Init_thread_header(&DAT_146a80ad8);
    if (DAT_146a80ad8 == -1) {
      FString::PrintfImpl(&DAT_146a80ac8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e955d0);
      _Init_thread_footer(&DAT_146a80ad8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80ad0 != 0) {
    puVar1 = DAT_146a80ac8;
  }
  FShaderType::FShaderType
            (&DAT_146a88800,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a88800 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a88930 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a88938 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a88940 = BuildSettings::IsPromotedBuild;
  _DAT_146a88948 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,0,0,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93970);
  return;
}



// FUNCTION 1402d0220 FUN_1402d0220 body=344 status=ok
// SIG undefined FUN_1402d0220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d0220(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80ac0) {
    _Init_thread_header(&DAT_146a80ac0);
    if (DAT_146a80ac0 == -1) {
      FString::PrintfImpl(&DAT_146a80ab0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,
                          L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e955f0);
      _Init_thread_footer(&DAT_146a80ac0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80ab8 != 0) {
    puVar1 = DAT_146a80ab0;
  }
  FShaderType::FShaderType
            (&DAT_146a88950,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a88950 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a88a80 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a88a88 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a88a90 = BuildSettings::IsPromotedBuild;
  _DAT_146a88a98 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,0,0,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93980);
  return;
}



// FUNCTION 1402d0380 FUN_1402d0380 body=344 status=ok
// SIG undefined FUN_1402d0380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d0380(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80aa8) {
    _Init_thread_header(&DAT_146a80aa8);
    if (DAT_146a80aa8 == -1) {
      FString::PrintfImpl(&DAT_146a80a98,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,
                          L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95610);
      _Init_thread_footer(&DAT_146a80aa8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80aa0 != 0) {
    puVar1 = DAT_146a80a98;
  }
  FShaderType::FShaderType
            (&DAT_146a88aa0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a88aa0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a88bd0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a88bd8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a88be0 = BuildSettings::IsPromotedBuild;
  _DAT_146a88be8 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,0,0,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93990);
  return;
}



// FUNCTION 1402d04e0 FUN_1402d04e0 body=344 status=ok
// SIG undefined FUN_1402d04e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d04e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80a90) {
    _Init_thread_header(&DAT_146a80a90);
    if (DAT_146a80a90 == -1) {
      FString::PrintfImpl(&DAT_146a80a80,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",L"false",
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95630);
      _Init_thread_footer(&DAT_146a80a90);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80a88 != 0) {
    puVar1 = DAT_146a80a80;
  }
  FShaderType::FShaderType
            (&DAT_146a88bf0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a88bf0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a88d20 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a88d28 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a88d30 = BuildSettings::IsPromotedBuild;
  _DAT_146a88d38 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,0,0,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e939a0);
  return;
}



// FUNCTION 1402d0640 FUN_1402d0640 body=344 status=ok
// SIG undefined FUN_1402d0640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d0640(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80a78) {
    _Init_thread_header(&DAT_146a80a78);
    if (DAT_146a80a78 == -1) {
      FString::PrintfImpl(&DAT_146a80a68,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",L"false",
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95650);
      _Init_thread_footer(&DAT_146a80a78);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80a70 != 0) {
    puVar1 = DAT_146a80a68;
  }
  FShaderType::FShaderType
            (&DAT_146a88d40,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a88d40 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a88e70 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a88e78 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a88e80 = BuildSettings::IsPromotedBuild;
  _DAT_146a88e88 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,0,0,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e939b0);
  return;
}



// FUNCTION 1402d07a0 FUN_1402d07a0 body=344 status=ok
// SIG undefined FUN_1402d07a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d07a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80a60) {
    _Init_thread_header(&DAT_146a80a60);
    if (DAT_146a80a60 == -1) {
      FString::PrintfImpl(&DAT_146a80a50,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",L"false",L"false"
                          ,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95670);
      _Init_thread_footer(&DAT_146a80a60);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80a58 != 0) {
    puVar1 = DAT_146a80a50;
  }
  FShaderType::FShaderType
            (&DAT_146a88e90,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a88e90 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a88fc0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a88fc8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a88fd0 = BuildSettings::IsPromotedBuild;
  _DAT_146a88fd8 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,0,0,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e939c0);
  return;
}



// FUNCTION 1402d0900 FUN_1402d0900 body=348 status=ok
// SIG undefined FUN_1402d0900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d0900(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80a48) {
    _Init_thread_header(&DAT_146a80a48);
    if (DAT_146a80a48 == -1) {
      FString::PrintfImpl(&DAT_146a80a38,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",L"false",L"false"
                          ,L"false");
      atexit((_func_5014 *)&LAB_143e95690);
      _Init_thread_footer(&DAT_146a80a48);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80a40 != 0) {
    puVar1 = DAT_146a80a38;
  }
  FShaderType::FShaderType
            (&DAT_146a88fe0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a88fe0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a89110 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a89118 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a89120 = BuildSettings::IsPromotedBuild;
  _DAT_146a89128 =
       TReflectionEnvironmentSkyLightingPS<1,1,0,0,0,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e939d0);
  return;
}



// FUNCTION 1402d0a60 FUN_1402d0a60 body=341 status=ok
// SIG undefined FUN_1402d0a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d0a60(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80a30) {
    _Init_thread_header(&DAT_146a80a30);
    if (DAT_146a80a30 == -1) {
      FString::PrintfImpl(&DAT_146a80a20,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e956b0);
      _Init_thread_footer(&DAT_146a80a30);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80a28 != 0) {
    puVar1 = DAT_146a80a20;
  }
  FShaderType::FShaderType
            (&DAT_146a89130,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a89130 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a89260 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a89268 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a89270 = BuildSettings::IsPromotedBuild;
  _DAT_146a89278 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,1,1,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e939e0);
  return;
}



// FUNCTION 1402d0bc0 FUN_1402d0bc0 body=341 status=ok
// SIG undefined FUN_1402d0bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d0bc0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80a18) {
    _Init_thread_header(&DAT_146a80a18);
    if (DAT_146a80a18 == -1) {
      FString::PrintfImpl(&DAT_146a80a08,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e956d0);
      _Init_thread_footer(&DAT_146a80a18);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80a10 != 0) {
    puVar1 = DAT_146a80a08;
  }
  FShaderType::FShaderType
            (&DAT_146a89280,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a89280 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a893b0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a893b8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a893c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a893c8 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,1,1,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e939f0);
  return;
}



// FUNCTION 1402d0d20 FUN_1402d0d20 body=341 status=ok
// SIG undefined FUN_1402d0d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d0d20(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80a00) {
    _Init_thread_header(&DAT_146a80a00);
    if (DAT_146a80a00 == -1) {
      FString::PrintfImpl(&DAT_146a809f0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e956f0);
      _Init_thread_footer(&DAT_146a80a00);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a809f8 != 0) {
    puVar1 = DAT_146a809f0;
  }
  FShaderType::FShaderType
            (&DAT_146a893d0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a893d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a89500 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a89508 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a89510 = BuildSettings::IsPromotedBuild;
  _DAT_146a89518 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,1,1,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93a00);
  return;
}



// FUNCTION 1402d0e80 FUN_1402d0e80 body=341 status=ok
// SIG undefined FUN_1402d0e80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d0e80(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a809e8) {
    _Init_thread_header(&DAT_146a809e8);
    if (DAT_146a809e8 == -1) {
      FString::PrintfImpl(&DAT_146a809d8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95710);
      _Init_thread_footer(&DAT_146a809e8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a809e0 != 0) {
    puVar1 = DAT_146a809d8;
  }
  FShaderType::FShaderType
            (&DAT_146a89520,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a89520 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a89650 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a89658 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a89660 = BuildSettings::IsPromotedBuild;
  _DAT_146a89668 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,1,1,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93a10);
  return;
}



// FUNCTION 1402d0fe0 FUN_1402d0fe0 body=341 status=ok
// SIG undefined FUN_1402d0fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d0fe0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a809d0) {
    _Init_thread_header(&DAT_146a809d0);
    if (DAT_146a809d0 == -1) {
      FString::PrintfImpl(&DAT_146a809c0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          L"false",&DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95730);
      _Init_thread_footer(&DAT_146a809d0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a809c8 != 0) {
    puVar1 = DAT_146a809c0;
  }
  FShaderType::FShaderType
            (&DAT_146a89670,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a89670 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a897a0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a897a8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a897b0 = BuildSettings::IsPromotedBuild;
  _DAT_146a897b8 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,1,1,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93a20);
  return;
}



// FUNCTION 1402d1140 FUN_1402d1140 body=341 status=ok
// SIG undefined FUN_1402d1140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d1140(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a809b8) {
    _Init_thread_header(&DAT_146a809b8);
    if (DAT_146a809b8 == -1) {
      FString::PrintfImpl(&DAT_146a809a8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          L"false",&DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95750);
      _Init_thread_footer(&DAT_146a809b8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a809b0 != 0) {
    puVar1 = DAT_146a809a8;
  }
  FShaderType::FShaderType
            (&DAT_146a897c0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a897c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a898f0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a898f8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a89900 = BuildSettings::IsPromotedBuild;
  _DAT_146a89908 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,1,1,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93a30);
  return;
}



// FUNCTION 1402d12a0 FUN_1402d12a0 body=341 status=ok
// SIG undefined FUN_1402d12a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d12a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a809a0) {
    _Init_thread_header(&DAT_146a809a0);
    if (DAT_146a809a0 == -1) {
      FString::PrintfImpl(&DAT_146a80990,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          L"false",L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95770);
      _Init_thread_footer(&DAT_146a809a0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80998 != 0) {
    puVar1 = DAT_146a80990;
  }
  FShaderType::FShaderType
            (&DAT_146a89910,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a89910 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a89a40 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a89a48 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a89a50 = BuildSettings::IsPromotedBuild;
  _DAT_146a89a58 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,1,1,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93a40);
  return;
}



// FUNCTION 1402d1400 FUN_1402d1400 body=341 status=ok
// SIG undefined FUN_1402d1400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d1400(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80988) {
    _Init_thread_header(&DAT_146a80988);
    if (DAT_146a80988 == -1) {
      FString::PrintfImpl(&DAT_146a80978,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          L"false",L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95790);
      _Init_thread_footer(&DAT_146a80988);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80980 != 0) {
    puVar1 = DAT_146a80978;
  }
  FShaderType::FShaderType
            (&DAT_146a89a60,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a89a60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a89b90 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a89b98 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a89ba0 = BuildSettings::IsPromotedBuild;
  _DAT_146a89ba8 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,1,1,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93a50);
  return;
}



// FUNCTION 1402d1560 FUN_1402d1560 body=341 status=ok
// SIG undefined FUN_1402d1560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d1560(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80970) {
    _Init_thread_header(&DAT_146a80970);
    if (DAT_146a80970 == -1) {
      FString::PrintfImpl(&DAT_146a80960,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e957b0);
      _Init_thread_footer(&DAT_146a80970);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80968 != 0) {
    puVar1 = DAT_146a80960;
  }
  FShaderType::FShaderType
            (&DAT_146a89bb0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a89bb0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a89ce0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a89ce8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a89cf0 = BuildSettings::IsPromotedBuild;
  _DAT_146a89cf8 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,1,0,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93a60);
  return;
}



// FUNCTION 1402d16c0 FUN_1402d16c0 body=341 status=ok
// SIG undefined FUN_1402d16c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d16c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80958) {
    _Init_thread_header(&DAT_146a80958);
    if (DAT_146a80958 == -1) {
      FString::PrintfImpl(&DAT_146a80948,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e957d0);
      _Init_thread_footer(&DAT_146a80958);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80950 != 0) {
    puVar1 = DAT_146a80948;
  }
  FShaderType::FShaderType
            (&DAT_146a89d00,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a89d00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a89e30 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a89e38 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a89e40 = BuildSettings::IsPromotedBuild;
  _DAT_146a89e48 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,1,0,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93a70);
  return;
}



// FUNCTION 1402d1820 FUN_1402d1820 body=341 status=ok
// SIG undefined FUN_1402d1820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d1820(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80940) {
    _Init_thread_header(&DAT_146a80940);
    if (DAT_146a80940 == -1) {
      FString::PrintfImpl(&DAT_146a80930,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e957f0);
      _Init_thread_footer(&DAT_146a80940);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80938 != 0) {
    puVar1 = DAT_146a80930;
  }
  FShaderType::FShaderType
            (&DAT_146a89e50,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a89e50 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a89f80 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a89f88 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a89f90 = BuildSettings::IsPromotedBuild;
  _DAT_146a89f98 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,1,0,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93a80);
  return;
}



// FUNCTION 1402d1980 FUN_1402d1980 body=341 status=ok
// SIG undefined FUN_1402d1980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d1980(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80928) {
    _Init_thread_header(&DAT_146a80928);
    if (DAT_146a80928 == -1) {
      FString::PrintfImpl(&DAT_146a80918,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8,L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95810);
      _Init_thread_footer(&DAT_146a80928);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80920 != 0) {
    puVar1 = DAT_146a80918;
  }
  FShaderType::FShaderType
            (&DAT_146a89fa0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a89fa0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8a0d0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8a0d8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8a0e0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8a0e8 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,1,0,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93a90);
  return;
}



// FUNCTION 1402d1ae0 FUN_1402d1ae0 body=341 status=ok
// SIG undefined FUN_1402d1ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d1ae0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80910) {
    _Init_thread_header(&DAT_146a80910);
    if (DAT_146a80910 == -1) {
      FString::PrintfImpl(&DAT_146a80900,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95830);
      _Init_thread_footer(&DAT_146a80910);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80908 != 0) {
    puVar1 = DAT_146a80900;
  }
  FShaderType::FShaderType
            (&DAT_146a8a0f0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8a0f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8a220 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8a228 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8a230 = BuildSettings::IsPromotedBuild;
  _DAT_146a8a238 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,1,0,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93aa0);
  return;
}



// FUNCTION 1402d1c40 FUN_1402d1c40 body=341 status=ok
// SIG undefined FUN_1402d1c40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d1c40(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a808f8) {
    _Init_thread_header(&DAT_146a808f8);
    if (DAT_146a808f8 == -1) {
      FString::PrintfImpl(&DAT_146a808e8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95850);
      _Init_thread_footer(&DAT_146a808f8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a808f0 != 0) {
    puVar1 = DAT_146a808e8;
  }
  FShaderType::FShaderType
            (&DAT_146a8a240,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8a240 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8a370 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8a378 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8a380 = BuildSettings::IsPromotedBuild;
  _DAT_146a8a388 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,1,0,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93ab0);
  return;
}



// FUNCTION 1402d1da0 FUN_1402d1da0 body=341 status=ok
// SIG undefined FUN_1402d1da0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d1da0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a808e0) {
    _Init_thread_header(&DAT_146a808e0);
    if (DAT_146a808e0 == -1) {
      FString::PrintfImpl(&DAT_146a808d0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",
                          L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95870);
      _Init_thread_footer(&DAT_146a808e0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a808d8 != 0) {
    puVar1 = DAT_146a808d0;
  }
  FShaderType::FShaderType
            (&DAT_146a8a390,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8a390 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8a4c0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8a4c8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8a4d0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8a4d8 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,1,0,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93ac0);
  return;
}



// FUNCTION 1402d1f00 FUN_1402d1f00 body=341 status=ok
// SIG undefined FUN_1402d1f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d1f00(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a808c8) {
    _Init_thread_header(&DAT_146a808c8);
    if (DAT_146a808c8 == -1) {
      FString::PrintfImpl(&DAT_146a808b8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",
                          L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95890);
      _Init_thread_footer(&DAT_146a808c8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a808c0 != 0) {
    puVar1 = DAT_146a808b8;
  }
  FShaderType::FShaderType
            (&DAT_146a8a4e0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8a4e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8a610 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8a618 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8a620 = BuildSettings::IsPromotedBuild;
  _DAT_146a8a628 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,1,0,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93ad0);
  return;
}



// FUNCTION 1402d2060 FUN_1402d2060 body=341 status=ok
// SIG undefined FUN_1402d2060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d2060(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a808b0) {
    _Init_thread_header(&DAT_146a808b0);
    if (DAT_146a808b0 == -1) {
      FString::PrintfImpl(&DAT_146a808a0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e958b0);
      _Init_thread_footer(&DAT_146a808b0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a808a8 != 0) {
    puVar1 = DAT_146a808a0;
  }
  FShaderType::FShaderType
            (&DAT_146a8a630,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8a630 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8a760 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8a768 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8a770 = BuildSettings::IsPromotedBuild;
  _DAT_146a8a778 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,0,1,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93ae0);
  return;
}



// FUNCTION 1402d21c0 FUN_1402d21c0 body=341 status=ok
// SIG undefined FUN_1402d21c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d21c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80898) {
    _Init_thread_header(&DAT_146a80898);
    if (DAT_146a80898 == -1) {
      FString::PrintfImpl(&DAT_146a80888,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e958d0);
      _Init_thread_footer(&DAT_146a80898);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80890 != 0) {
    puVar1 = DAT_146a80888;
  }
  FShaderType::FShaderType
            (&DAT_146a8a780,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8a780 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8a8b0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8a8b8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8a8c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8a8c8 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,0,1,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93af0);
  return;
}



// FUNCTION 1402d2320 FUN_1402d2320 body=341 status=ok
// SIG undefined FUN_1402d2320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d2320(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80880) {
    _Init_thread_header(&DAT_146a80880);
    if (DAT_146a80880 == -1) {
      FString::PrintfImpl(&DAT_146a80870,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8,L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e958f0);
      _Init_thread_footer(&DAT_146a80880);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80878 != 0) {
    puVar1 = DAT_146a80870;
  }
  FShaderType::FShaderType
            (&DAT_146a8a8d0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8a8d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8aa00 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8aa08 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8aa10 = BuildSettings::IsPromotedBuild;
  _DAT_146a8aa18 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,0,1,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93b00);
  return;
}



// FUNCTION 1402d2480 FUN_1402d2480 body=341 status=ok
// SIG undefined FUN_1402d2480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d2480(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80868) {
    _Init_thread_header(&DAT_146a80868);
    if (DAT_146a80868 == -1) {
      FString::PrintfImpl(&DAT_146a80858,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8,L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95910);
      _Init_thread_footer(&DAT_146a80868);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80860 != 0) {
    puVar1 = DAT_146a80858;
  }
  FShaderType::FShaderType
            (&DAT_146a8aa20,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8aa20 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8ab50 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8ab58 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8ab60 = BuildSettings::IsPromotedBuild;
  _DAT_146a8ab68 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,0,1,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93b10);
  return;
}



// FUNCTION 1402d25e0 FUN_1402d25e0 body=341 status=ok
// SIG undefined FUN_1402d25e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d25e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80850) {
    _Init_thread_header(&DAT_146a80850);
    if (DAT_146a80850 == -1) {
      FString::PrintfImpl(&DAT_146a80840,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95930);
      _Init_thread_footer(&DAT_146a80850);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80848 != 0) {
    puVar1 = DAT_146a80840;
  }
  FShaderType::FShaderType
            (&DAT_146a8ab70,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8ab70 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8aca0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8aca8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8acb0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8acb8 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,0,1,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93b20);
  return;
}



// FUNCTION 1402d2740 FUN_1402d2740 body=341 status=ok
// SIG undefined FUN_1402d2740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d2740(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80838) {
    _Init_thread_header(&DAT_146a80838);
    if (DAT_146a80838 == -1) {
      FString::PrintfImpl(&DAT_146a80828,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95950);
      _Init_thread_footer(&DAT_146a80838);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80830 != 0) {
    puVar1 = DAT_146a80828;
  }
  FShaderType::FShaderType
            (&DAT_146a8acc0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8acc0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8adf0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8adf8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8ae00 = BuildSettings::IsPromotedBuild;
  _DAT_146a8ae08 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,0,1,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93b30);
  return;
}



// FUNCTION 1402d28a0 FUN_1402d28a0 body=341 status=ok
// SIG undefined FUN_1402d28a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d28a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80820) {
    _Init_thread_header(&DAT_146a80820);
    if (DAT_146a80820 == -1) {
      FString::PrintfImpl(&DAT_146a80810,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",
                          L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95970);
      _Init_thread_footer(&DAT_146a80820);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80818 != 0) {
    puVar1 = DAT_146a80810;
  }
  FShaderType::FShaderType
            (&DAT_146a8ae10,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8ae10 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8af40 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8af48 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8af50 = BuildSettings::IsPromotedBuild;
  _DAT_146a8af58 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,0,1,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93b40);
  return;
}



// FUNCTION 1402d2a00 FUN_1402d2a00 body=341 status=ok
// SIG undefined FUN_1402d2a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d2a00(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80808) {
    _Init_thread_header(&DAT_146a80808);
    if (DAT_146a80808 == -1) {
      FString::PrintfImpl(&DAT_146a807f8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",
                          L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95990);
      _Init_thread_footer(&DAT_146a80808);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80800 != 0) {
    puVar1 = DAT_146a807f8;
  }
  FShaderType::FShaderType
            (&DAT_146a8af60,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8af60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8b090 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8b098 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8b0a0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8b0a8 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,0,1,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93b50);
  return;
}



// FUNCTION 1402d2b60 FUN_1402d2b60 body=341 status=ok
// SIG undefined FUN_1402d2b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d2b60(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a807f0) {
    _Init_thread_header(&DAT_146a807f0);
    if (DAT_146a807f0 == -1) {
      FString::PrintfImpl(&DAT_146a807e0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e959b0);
      _Init_thread_footer(&DAT_146a807f0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a807e8 != 0) {
    puVar1 = DAT_146a807e0;
  }
  FShaderType::FShaderType
            (&DAT_146a8b0b0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8b0b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8b1e0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8b1e8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8b1f0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8b1f8 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,0,0,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93b60);
  return;
}



// FUNCTION 1402d2cc0 FUN_1402d2cc0 body=341 status=ok
// SIG undefined FUN_1402d2cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d2cc0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a807d8) {
    _Init_thread_header(&DAT_146a807d8);
    if (DAT_146a807d8 == -1) {
      FString::PrintfImpl(&DAT_146a807c8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e959d0);
      _Init_thread_footer(&DAT_146a807d8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a807d0 != 0) {
    puVar1 = DAT_146a807c8;
  }
  FShaderType::FShaderType
            (&DAT_146a8b200,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8b200 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8b330 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8b338 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8b340 = BuildSettings::IsPromotedBuild;
  _DAT_146a8b348 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,0,0,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93b70);
  return;
}



// FUNCTION 1402d2e20 FUN_1402d2e20 body=341 status=ok
// SIG undefined FUN_1402d2e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d2e20(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a807c0) {
    _Init_thread_header(&DAT_146a807c0);
    if (DAT_146a807c0 == -1) {
      FString::PrintfImpl(&DAT_146a807b0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,
                          L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e959f0);
      _Init_thread_footer(&DAT_146a807c0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a807b8 != 0) {
    puVar1 = DAT_146a807b0;
  }
  FShaderType::FShaderType
            (&DAT_146a8b350,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8b350 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8b480 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8b488 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8b490 = BuildSettings::IsPromotedBuild;
  _DAT_146a8b498 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,0,0,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93b80);
  return;
}



// FUNCTION 1402d2f80 FUN_1402d2f80 body=341 status=ok
// SIG undefined FUN_1402d2f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d2f80(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a807a8) {
    _Init_thread_header(&DAT_146a807a8);
    if (DAT_146a807a8 == -1) {
      FString::PrintfImpl(&DAT_146a80798,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,
                          L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95a10);
      _Init_thread_footer(&DAT_146a807a8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a807a0 != 0) {
    puVar1 = DAT_146a80798;
  }
  FShaderType::FShaderType
            (&DAT_146a8b4a0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8b4a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8b5d0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8b5d8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8b5e0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8b5e8 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,0,0,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93b90);
  return;
}



// FUNCTION 1402d30e0 FUN_1402d30e0 body=341 status=ok
// SIG undefined FUN_1402d30e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d30e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80790) {
    _Init_thread_header(&DAT_146a80790);
    if (DAT_146a80790 == -1) {
      FString::PrintfImpl(&DAT_146a80780,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",L"false",
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95a30);
      _Init_thread_footer(&DAT_146a80790);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80788 != 0) {
    puVar1 = DAT_146a80780;
  }
  FShaderType::FShaderType
            (&DAT_146a8b5f0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8b5f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8b720 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8b728 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8b730 = BuildSettings::IsPromotedBuild;
  _DAT_146a8b738 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,0,0,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93ba0);
  return;
}



// FUNCTION 1402d3240 FUN_1402d3240 body=341 status=ok
// SIG undefined FUN_1402d3240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d3240(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80778) {
    _Init_thread_header(&DAT_146a80778);
    if (DAT_146a80778 == -1) {
      FString::PrintfImpl(&DAT_146a80768,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",L"false",
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95a50);
      _Init_thread_footer(&DAT_146a80778);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80770 != 0) {
    puVar1 = DAT_146a80768;
  }
  FShaderType::FShaderType
            (&DAT_146a8b740,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8b740 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8b870 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8b878 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8b880 = BuildSettings::IsPromotedBuild;
  _DAT_146a8b888 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,0,0,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93bb0);
  return;
}



// FUNCTION 1402d33a0 FUN_1402d33a0 body=341 status=ok
// SIG undefined FUN_1402d33a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d33a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80760) {
    _Init_thread_header(&DAT_146a80760);
    if (DAT_146a80760 == -1) {
      FString::PrintfImpl(&DAT_146a80750,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",L"false",L"false"
                          ,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95a70);
      _Init_thread_footer(&DAT_146a80760);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80758 != 0) {
    puVar1 = DAT_146a80750;
  }
  FShaderType::FShaderType
            (&DAT_146a8b890,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8b890 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8b9c0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8b9c8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8b9d0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8b9d8 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,0,0,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93bc0);
  return;
}



// FUNCTION 1402d3500 FUN_1402d3500 body=341 status=ok
// SIG undefined FUN_1402d3500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d3500(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80748) {
    _Init_thread_header(&DAT_146a80748);
    if (DAT_146a80748 == -1) {
      FString::PrintfImpl(&DAT_146a80738,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",L"false",L"false"
                          ,L"false");
      atexit((_func_5014 *)&LAB_143e95a90);
      _Init_thread_footer(&DAT_146a80748);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80740 != 0) {
    puVar1 = DAT_146a80738;
  }
  FShaderType::FShaderType
            (&DAT_146a8b9e0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8b9e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8bb10 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8bb18 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8bb20 = BuildSettings::IsPromotedBuild;
  _DAT_146a8bb28 =
       TReflectionEnvironmentSkyLightingPS<1,0,1,0,0,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93bd0);
  return;
}



// FUNCTION 1402d3660 FUN_1402d3660 body=341 status=ok
// SIG undefined FUN_1402d3660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d3660(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80730) {
    _Init_thread_header(&DAT_146a80730);
    if (DAT_146a80730 == -1) {
      FString::PrintfImpl(&DAT_146a80720,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95ab0);
      _Init_thread_footer(&DAT_146a80730);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80728 != 0) {
    puVar1 = DAT_146a80720;
  }
  FShaderType::FShaderType
            (&DAT_146a8bb30,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8bb30 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8bc60 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8bc68 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8bc70 = BuildSettings::IsPromotedBuild;
  _DAT_146a8bc78 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,1,1,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93be0);
  return;
}



// FUNCTION 1402d37c0 FUN_1402d37c0 body=341 status=ok
// SIG undefined FUN_1402d37c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d37c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80718) {
    _Init_thread_header(&DAT_146a80718);
    if (DAT_146a80718 == -1) {
      FString::PrintfImpl(&DAT_146a80708,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95ad0);
      _Init_thread_footer(&DAT_146a80718);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80710 != 0) {
    puVar1 = DAT_146a80708;
  }
  FShaderType::FShaderType
            (&DAT_146a8bc80,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8bc80 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8bdb0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8bdb8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8bdc0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8bdc8 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,1,1,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93bf0);
  return;
}



// FUNCTION 1402d3920 FUN_1402d3920 body=341 status=ok
// SIG undefined FUN_1402d3920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d3920(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80700) {
    _Init_thread_header(&DAT_146a80700);
    if (DAT_146a80700 == -1) {
      FString::PrintfImpl(&DAT_146a806f0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95af0);
      _Init_thread_footer(&DAT_146a80700);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a806f8 != 0) {
    puVar1 = DAT_146a806f0;
  }
  FShaderType::FShaderType
            (&DAT_146a8bdd0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8bdd0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8bf00 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8bf08 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8bf10 = BuildSettings::IsPromotedBuild;
  _DAT_146a8bf18 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,1,1,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93c00);
  return;
}



// FUNCTION 1402d3a80 FUN_1402d3a80 body=341 status=ok
// SIG undefined FUN_1402d3a80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d3a80(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a806e8) {
    _Init_thread_header(&DAT_146a806e8);
    if (DAT_146a806e8 == -1) {
      FString::PrintfImpl(&DAT_146a806d8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95b10);
      _Init_thread_footer(&DAT_146a806e8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a806e0 != 0) {
    puVar1 = DAT_146a806d8;
  }
  FShaderType::FShaderType
            (&DAT_146a8bf20,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8bf20 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8c050 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8c058 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8c060 = BuildSettings::IsPromotedBuild;
  _DAT_146a8c068 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,1,1,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93c10);
  return;
}



// FUNCTION 1402d3be0 FUN_1402d3be0 body=341 status=ok
// SIG undefined FUN_1402d3be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d3be0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a806d0) {
    _Init_thread_header(&DAT_146a806d0);
    if (DAT_146a806d0 == -1) {
      FString::PrintfImpl(&DAT_146a806c0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95b30);
      _Init_thread_footer(&DAT_146a806d0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a806c8 != 0) {
    puVar1 = DAT_146a806c0;
  }
  FShaderType::FShaderType
            (&DAT_146a8c070,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8c070 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8c1a0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8c1a8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8c1b0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8c1b8 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,1,1,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93c20);
  return;
}



// FUNCTION 1402d3d40 FUN_1402d3d40 body=341 status=ok
// SIG undefined FUN_1402d3d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d3d40(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a806b8) {
    _Init_thread_header(&DAT_146a806b8);
    if (DAT_146a806b8 == -1) {
      FString::PrintfImpl(&DAT_146a806a8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95b50);
      _Init_thread_footer(&DAT_146a806b8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a806b0 != 0) {
    puVar1 = DAT_146a806a8;
  }
  FShaderType::FShaderType
            (&DAT_146a8c1c0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8c1c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8c2f0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8c2f8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8c300 = BuildSettings::IsPromotedBuild;
  _DAT_146a8c308 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,1,1,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93c30);
  return;
}



// FUNCTION 1402d3ea0 FUN_1402d3ea0 body=341 status=ok
// SIG undefined FUN_1402d3ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d3ea0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a806a0) {
    _Init_thread_header(&DAT_146a806a0);
    if (DAT_146a806a0 == -1) {
      FString::PrintfImpl(&DAT_146a80690,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",
                          L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95b70);
      _Init_thread_footer(&DAT_146a806a0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80698 != 0) {
    puVar1 = DAT_146a80690;
  }
  FShaderType::FShaderType
            (&DAT_146a8c310,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8c310 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8c440 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8c448 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8c450 = BuildSettings::IsPromotedBuild;
  _DAT_146a8c458 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,1,1,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93c40);
  return;
}



// FUNCTION 1402d4000 FUN_1402d4000 body=341 status=ok
// SIG undefined FUN_1402d4000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d4000(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80688) {
    _Init_thread_header(&DAT_146a80688);
    if (DAT_146a80688 == -1) {
      FString::PrintfImpl(&DAT_146a80678,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",
                          L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95b90);
      _Init_thread_footer(&DAT_146a80688);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80680 != 0) {
    puVar1 = DAT_146a80678;
  }
  FShaderType::FShaderType
            (&DAT_146a8c460,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8c460 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8c590 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8c598 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8c5a0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8c5a8 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,1,1,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93c50);
  return;
}



// FUNCTION 1402d4160 FUN_1402d4160 body=341 status=ok
// SIG undefined FUN_1402d4160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d4160(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80670) {
    _Init_thread_header(&DAT_146a80670);
    if (DAT_146a80670 == -1) {
      FString::PrintfImpl(&DAT_146a80660,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95bb0);
      _Init_thread_footer(&DAT_146a80670);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80668 != 0) {
    puVar1 = DAT_146a80660;
  }
  FShaderType::FShaderType
            (&DAT_146a8c5b0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8c5b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8c6e0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8c6e8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8c6f0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8c6f8 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,1,0,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93c60);
  return;
}



// FUNCTION 1402d42c0 FUN_1402d42c0 body=341 status=ok
// SIG undefined FUN_1402d42c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d42c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80658) {
    _Init_thread_header(&DAT_146a80658);
    if (DAT_146a80658 == -1) {
      FString::PrintfImpl(&DAT_146a80648,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95bd0);
      _Init_thread_footer(&DAT_146a80658);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80650 != 0) {
    puVar1 = DAT_146a80648;
  }
  FShaderType::FShaderType
            (&DAT_146a8c700,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8c700 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8c830 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8c838 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8c840 = BuildSettings::IsPromotedBuild;
  _DAT_146a8c848 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,1,0,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93c70);
  return;
}



// FUNCTION 1402d4420 FUN_1402d4420 body=341 status=ok
// SIG undefined FUN_1402d4420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d4420(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80640) {
    _Init_thread_header(&DAT_146a80640);
    if (DAT_146a80640 == -1) {
      FString::PrintfImpl(&DAT_146a80630,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,
                          L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95bf0);
      _Init_thread_footer(&DAT_146a80640);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80638 != 0) {
    puVar1 = DAT_146a80630;
  }
  FShaderType::FShaderType
            (&DAT_146a8c850,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8c850 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8c980 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8c988 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8c990 = BuildSettings::IsPromotedBuild;
  _DAT_146a8c998 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,1,0,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93c80);
  return;
}



// FUNCTION 1402d4580 FUN_1402d4580 body=341 status=ok
// SIG undefined FUN_1402d4580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d4580(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80628) {
    _Init_thread_header(&DAT_146a80628);
    if (DAT_146a80628 == -1) {
      FString::PrintfImpl(&DAT_146a80618,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,
                          L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95c10);
      _Init_thread_footer(&DAT_146a80628);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80620 != 0) {
    puVar1 = DAT_146a80618;
  }
  FShaderType::FShaderType
            (&DAT_146a8c9a0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8c9a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8cad0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8cad8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8cae0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8cae8 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,1,0,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93c90);
  return;
}



// FUNCTION 1402d46e0 FUN_1402d46e0 body=341 status=ok
// SIG undefined FUN_1402d46e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d46e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80610) {
    _Init_thread_header(&DAT_146a80610);
    if (DAT_146a80610 == -1) {
      FString::PrintfImpl(&DAT_146a80600,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",L"false",
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95c30);
      _Init_thread_footer(&DAT_146a80610);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80608 != 0) {
    puVar1 = DAT_146a80600;
  }
  FShaderType::FShaderType
            (&DAT_146a8caf0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8caf0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8cc20 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8cc28 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8cc30 = BuildSettings::IsPromotedBuild;
  _DAT_146a8cc38 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,1,0,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93ca0);
  return;
}



// FUNCTION 1402d4840 FUN_1402d4840 body=341 status=ok
// SIG undefined FUN_1402d4840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d4840(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a805f8) {
    _Init_thread_header(&DAT_146a805f8);
    if (DAT_146a805f8 == -1) {
      FString::PrintfImpl(&DAT_146a805e8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",L"false",
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95c50);
      _Init_thread_footer(&DAT_146a805f8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a805f0 != 0) {
    puVar1 = DAT_146a805e8;
  }
  FShaderType::FShaderType
            (&DAT_146a8cc40,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8cc40 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8cd70 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8cd78 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8cd80 = BuildSettings::IsPromotedBuild;
  _DAT_146a8cd88 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,1,0,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93cb0);
  return;
}



// FUNCTION 1402d49a0 FUN_1402d49a0 body=341 status=ok
// SIG undefined FUN_1402d49a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d49a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a805e0) {
    _Init_thread_header(&DAT_146a805e0);
    if (DAT_146a805e0 == -1) {
      FString::PrintfImpl(&DAT_146a805d0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",L"false",L"false"
                          ,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95c70);
      _Init_thread_footer(&DAT_146a805e0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a805d8 != 0) {
    puVar1 = DAT_146a805d0;
  }
  FShaderType::FShaderType
            (&DAT_146a8cd90,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8cd90 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8cec0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8cec8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8ced0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8ced8 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,1,0,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93cc0);
  return;
}



// FUNCTION 1402d4b00 FUN_1402d4b00 body=341 status=ok
// SIG undefined FUN_1402d4b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d4b00(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a805c8) {
    _Init_thread_header(&DAT_146a805c8);
    if (DAT_146a805c8 == -1) {
      FString::PrintfImpl(&DAT_146a805b8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",L"false",L"false"
                          ,L"false");
      atexit((_func_5014 *)&LAB_143e95c90);
      _Init_thread_footer(&DAT_146a805c8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a805c0 != 0) {
    puVar1 = DAT_146a805b8;
  }
  FShaderType::FShaderType
            (&DAT_146a8cee0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8cee0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8d010 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8d018 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8d020 = BuildSettings::IsPromotedBuild;
  _DAT_146a8d028 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,1,0,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93cd0);
  return;
}



// FUNCTION 1402d4c60 FUN_1402d4c60 body=341 status=ok
// SIG undefined FUN_1402d4c60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d4c60(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a805b0) {
    _Init_thread_header(&DAT_146a805b0);
    if (DAT_146a805b0 == -1) {
      FString::PrintfImpl(&DAT_146a805a0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95cb0);
      _Init_thread_footer(&DAT_146a805b0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a805a8 != 0) {
    puVar1 = DAT_146a805a0;
  }
  FShaderType::FShaderType
            (&DAT_146a8d030,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8d030 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8d160 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8d168 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8d170 = BuildSettings::IsPromotedBuild;
  _DAT_146a8d178 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,0,1,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93ce0);
  return;
}



// FUNCTION 1402d4dc0 FUN_1402d4dc0 body=341 status=ok
// SIG undefined FUN_1402d4dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d4dc0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80598) {
    _Init_thread_header(&DAT_146a80598);
    if (DAT_146a80598 == -1) {
      FString::PrintfImpl(&DAT_146a80588,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95cd0);
      _Init_thread_footer(&DAT_146a80598);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80590 != 0) {
    puVar1 = DAT_146a80588;
  }
  FShaderType::FShaderType
            (&DAT_146a8d180,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8d180 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8d2b0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8d2b8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8d2c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8d2c8 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,0,1,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93cf0);
  return;
}



// FUNCTION 1402d4f20 FUN_1402d4f20 body=341 status=ok
// SIG undefined FUN_1402d4f20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d4f20(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80580) {
    _Init_thread_header(&DAT_146a80580);
    if (DAT_146a80580 == -1) {
      FString::PrintfImpl(&DAT_146a80570,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,
                          L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95cf0);
      _Init_thread_footer(&DAT_146a80580);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80578 != 0) {
    puVar1 = DAT_146a80570;
  }
  FShaderType::FShaderType
            (&DAT_146a8d2d0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8d2d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8d400 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8d408 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8d410 = BuildSettings::IsPromotedBuild;
  _DAT_146a8d418 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,0,1,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93d00);
  return;
}



// FUNCTION 1402d5080 FUN_1402d5080 body=341 status=ok
// SIG undefined FUN_1402d5080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d5080(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80568) {
    _Init_thread_header(&DAT_146a80568);
    if (DAT_146a80568 == -1) {
      FString::PrintfImpl(&DAT_146a80558,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,
                          L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95d10);
      _Init_thread_footer(&DAT_146a80568);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80560 != 0) {
    puVar1 = DAT_146a80558;
  }
  FShaderType::FShaderType
            (&DAT_146a8d420,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8d420 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8d550 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8d558 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8d560 = BuildSettings::IsPromotedBuild;
  _DAT_146a8d568 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,0,1,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93d10);
  return;
}



// FUNCTION 1402d51e0 FUN_1402d51e0 body=341 status=ok
// SIG undefined FUN_1402d51e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d51e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80550) {
    _Init_thread_header(&DAT_146a80550);
    if (DAT_146a80550 == -1) {
      FString::PrintfImpl(&DAT_146a80540,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,L"false",
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95d30);
      _Init_thread_footer(&DAT_146a80550);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80548 != 0) {
    puVar1 = DAT_146a80540;
  }
  FShaderType::FShaderType
            (&DAT_146a8d570,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8d570 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8d6a0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8d6a8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8d6b0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8d6b8 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,0,1,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93d20);
  return;
}



// FUNCTION 1402d5340 FUN_1402d5340 body=341 status=ok
// SIG undefined FUN_1402d5340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d5340(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80538) {
    _Init_thread_header(&DAT_146a80538);
    if (DAT_146a80538 == -1) {
      FString::PrintfImpl(&DAT_146a80528,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,L"false",
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95d50);
      _Init_thread_footer(&DAT_146a80538);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80530 != 0) {
    puVar1 = DAT_146a80528;
  }
  FShaderType::FShaderType
            (&DAT_146a8d6c0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8d6c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8d7f0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8d7f8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8d800 = BuildSettings::IsPromotedBuild;
  _DAT_146a8d808 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,0,1,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93d30);
  return;
}



// FUNCTION 1402d54a0 FUN_1402d54a0 body=341 status=ok
// SIG undefined FUN_1402d54a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d54a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80520) {
    _Init_thread_header(&DAT_146a80520);
    if (DAT_146a80520 == -1) {
      FString::PrintfImpl(&DAT_146a80510,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,L"false",L"false"
                          ,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95d70);
      _Init_thread_footer(&DAT_146a80520);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80518 != 0) {
    puVar1 = DAT_146a80510;
  }
  FShaderType::FShaderType
            (&DAT_146a8d810,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8d810 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8d940 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8d948 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8d950 = BuildSettings::IsPromotedBuild;
  _DAT_146a8d958 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,0,1,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93d40);
  return;
}



// FUNCTION 1402d5600 FUN_1402d5600 body=341 status=ok
// SIG undefined FUN_1402d5600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d5600(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80508) {
    _Init_thread_header(&DAT_146a80508);
    if (DAT_146a80508 == -1) {
      FString::PrintfImpl(&DAT_146a804f8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,L"false",L"false"
                          ,L"false");
      atexit((_func_5014 *)&LAB_143e95d90);
      _Init_thread_footer(&DAT_146a80508);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80500 != 0) {
    puVar1 = DAT_146a804f8;
  }
  FShaderType::FShaderType
            (&DAT_146a8d960,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8d960 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8da90 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8da98 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8daa0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8daa8 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,0,1,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93d50);
  return;
}



// FUNCTION 1402d5760 FUN_1402d5760 body=341 status=ok
// SIG undefined FUN_1402d5760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d5760(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a804f0) {
    _Init_thread_header(&DAT_146a804f0);
    if (DAT_146a804f0 == -1) {
      FString::PrintfImpl(&DAT_146a804e0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",L"false",L"false",&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95db0);
      _Init_thread_footer(&DAT_146a804f0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a804e8 != 0) {
    puVar1 = DAT_146a804e0;
  }
  FShaderType::FShaderType
            (&DAT_146a8dab0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8dab0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8dbe0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8dbe8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8dbf0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8dbf8 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,0,0,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93d60);
  return;
}



// FUNCTION 1402d58c0 FUN_1402d58c0 body=341 status=ok
// SIG undefined FUN_1402d58c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d58c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a804d8) {
    _Init_thread_header(&DAT_146a804d8);
    if (DAT_146a804d8 == -1) {
      FString::PrintfImpl(&DAT_146a804c8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",L"false",L"false",&DAT_143f600c8,
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95dd0);
      _Init_thread_footer(&DAT_146a804d8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a804d0 != 0) {
    puVar1 = DAT_146a804c8;
  }
  FShaderType::FShaderType
            (&DAT_146a8dc00,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8dc00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8dd30 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8dd38 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8dd40 = BuildSettings::IsPromotedBuild;
  _DAT_146a8dd48 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,0,0,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93d70);
  return;
}



// FUNCTION 1402d5a20 FUN_1402d5a20 body=341 status=ok
// SIG undefined FUN_1402d5a20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d5a20(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a804c0) {
    _Init_thread_header(&DAT_146a804c0);
    if (DAT_146a804c0 == -1) {
      FString::PrintfImpl(&DAT_146a804b0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",L"false",L"false",&DAT_143f600c8,L"false"
                          ,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95df0);
      _Init_thread_footer(&DAT_146a804c0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a804b8 != 0) {
    puVar1 = DAT_146a804b0;
  }
  FShaderType::FShaderType
            (&DAT_146a8dd50,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8dd50 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8de80 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8de88 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8de90 = BuildSettings::IsPromotedBuild;
  _DAT_146a8de98 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,0,0,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93d80);
  return;
}



// FUNCTION 1402d5b80 FUN_1402d5b80 body=341 status=ok
// SIG undefined FUN_1402d5b80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d5b80(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a804a8) {
    _Init_thread_header(&DAT_146a804a8);
    if (DAT_146a804a8 == -1) {
      FString::PrintfImpl(&DAT_146a80498,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",L"false",L"false",&DAT_143f600c8,L"false"
                          ,L"false");
      atexit((_func_5014 *)&LAB_143e95e10);
      _Init_thread_footer(&DAT_146a804a8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a804a0 != 0) {
    puVar1 = DAT_146a80498;
  }
  FShaderType::FShaderType
            (&DAT_146a8dea0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8dea0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8dfd0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8dfd8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8dfe0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8dfe8 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,0,0,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93d90);
  return;
}



// FUNCTION 1402d5ce0 FUN_1402d5ce0 body=341 status=ok
// SIG undefined FUN_1402d5ce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d5ce0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80490) {
    _Init_thread_header(&DAT_146a80490);
    if (DAT_146a80490 == -1) {
      FString::PrintfImpl(&DAT_146a80480,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",L"false",L"false",L"false",&DAT_143f600c8
                          ,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95e30);
      _Init_thread_footer(&DAT_146a80490);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80488 != 0) {
    puVar1 = DAT_146a80480;
  }
  FShaderType::FShaderType
            (&DAT_146a8dff0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8dff0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8e120 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8e128 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8e130 = BuildSettings::IsPromotedBuild;
  _DAT_146a8e138 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,0,0,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93da0);
  return;
}



// FUNCTION 1402d5e40 FUN_1402d5e40 body=341 status=ok
// SIG undefined FUN_1402d5e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d5e40(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80478) {
    _Init_thread_header(&DAT_146a80478);
    if (DAT_146a80478 == -1) {
      FString::PrintfImpl(&DAT_146a80468,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",L"false",L"false",L"false",&DAT_143f600c8
                          ,L"false");
      atexit((_func_5014 *)&LAB_143e95e50);
      _Init_thread_footer(&DAT_146a80478);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80470 != 0) {
    puVar1 = DAT_146a80468;
  }
  FShaderType::FShaderType
            (&DAT_146a8e140,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8e140 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8e270 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8e278 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8e280 = BuildSettings::IsPromotedBuild;
  _DAT_146a8e288 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,0,0,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93db0);
  return;
}



// FUNCTION 1402d5fa0 FUN_1402d5fa0 body=341 status=ok
// SIG undefined FUN_1402d5fa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d5fa0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80460) {
    _Init_thread_header(&DAT_146a80460);
    if (DAT_146a80460 == -1) {
      FString::PrintfImpl(&DAT_146a80450,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",L"false",L"false",L"false",L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95e70);
      _Init_thread_footer(&DAT_146a80460);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80458 != 0) {
    puVar1 = DAT_146a80450;
  }
  FShaderType::FShaderType
            (&DAT_146a8e290,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8e290 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8e3c0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8e3c8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8e3d0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8e3d8 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,0,0,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93dc0);
  return;
}



// FUNCTION 1402d6100 FUN_1402d6100 body=341 status=ok
// SIG undefined FUN_1402d6100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d6100(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80448) {
    _Init_thread_header(&DAT_146a80448);
    if (DAT_146a80448 == -1) {
      FString::PrintfImpl(&DAT_146a80438,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",
                          &DAT_143f600c8,L"false",L"false",L"false",L"false",L"false",L"false",
                          L"false");
      atexit((_func_5014 *)&LAB_143e95e90);
      _Init_thread_footer(&DAT_146a80448);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80440 != 0) {
    puVar1 = DAT_146a80438;
  }
  FShaderType::FShaderType
            (&DAT_146a8e3e0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8e3e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8e510 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8e518 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8e520 = BuildSettings::IsPromotedBuild;
  _DAT_146a8e528 =
       TReflectionEnvironmentSkyLightingPS<1,0,0,0,0,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93dd0);
  return;
}



// FUNCTION 1402d6260 FUN_1402d6260 body=341 status=ok
// SIG undefined FUN_1402d6260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d6260(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80430) {
    _Init_thread_header(&DAT_146a80430);
    if (DAT_146a80430 == -1) {
      FString::PrintfImpl(&DAT_146a80420,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8
                          ,&DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95eb0);
      _Init_thread_footer(&DAT_146a80430);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80428 != 0) {
    puVar1 = DAT_146a80420;
  }
  FShaderType::FShaderType
            (&DAT_146a8e530,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8e530 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8e660 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8e668 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8e670 = BuildSettings::IsPromotedBuild;
  _DAT_146a8e678 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,1,1,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93de0);
  return;
}



// FUNCTION 1402d63c0 FUN_1402d63c0 body=341 status=ok
// SIG undefined FUN_1402d63c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d63c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80418) {
    _Init_thread_header(&DAT_146a80418);
    if (DAT_146a80418 == -1) {
      FString::PrintfImpl(&DAT_146a80408,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8
                          ,&DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95ed0);
      _Init_thread_footer(&DAT_146a80418);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80410 != 0) {
    puVar1 = DAT_146a80408;
  }
  FShaderType::FShaderType
            (&DAT_146a8e680,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8e680 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8e7b0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8e7b8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8e7c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8e7c8 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,1,1,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93df0);
  return;
}



// FUNCTION 1402d6520 FUN_1402d6520 body=341 status=ok
// SIG undefined FUN_1402d6520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d6520(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80400) {
    _Init_thread_header(&DAT_146a80400);
    if (DAT_146a80400 == -1) {
      FString::PrintfImpl(&DAT_146a803f0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8
                          ,L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95ef0);
      _Init_thread_footer(&DAT_146a80400);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a803f8 != 0) {
    puVar1 = DAT_146a803f0;
  }
  FShaderType::FShaderType
            (&DAT_146a8e7d0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8e7d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8e900 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8e908 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8e910 = BuildSettings::IsPromotedBuild;
  _DAT_146a8e918 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,1,1,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93e00);
  return;
}



// FUNCTION 1402d6680 FUN_1402d6680 body=341 status=ok
// SIG undefined FUN_1402d6680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d6680(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a803e8) {
    _Init_thread_header(&DAT_146a803e8);
    if (DAT_146a803e8 == -1) {
      FString::PrintfImpl(&DAT_146a803d8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8
                          ,L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95f10);
      _Init_thread_footer(&DAT_146a803e8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a803e0 != 0) {
    puVar1 = DAT_146a803d8;
  }
  FShaderType::FShaderType
            (&DAT_146a8e920,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8e920 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8ea50 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8ea58 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8ea60 = BuildSettings::IsPromotedBuild;
  _DAT_146a8ea68 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,1,1,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93e10);
  return;
}



// FUNCTION 1402d67e0 FUN_1402d67e0 body=341 status=ok
// SIG undefined FUN_1402d67e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d67e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a803d0) {
    _Init_thread_header(&DAT_146a803d0);
    if (DAT_146a803d0 == -1) {
      FString::PrintfImpl(&DAT_146a803c0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95f30);
      _Init_thread_footer(&DAT_146a803d0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a803c8 != 0) {
    puVar1 = DAT_146a803c0;
  }
  FShaderType::FShaderType
            (&DAT_146a8ea70,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8ea70 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8eba0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8eba8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8ebb0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8ebb8 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,1,1,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93e20);
  return;
}



// FUNCTION 1402d6940 FUN_1402d6940 body=341 status=ok
// SIG undefined FUN_1402d6940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d6940(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a803b8) {
    _Init_thread_header(&DAT_146a803b8);
    if (DAT_146a803b8 == -1) {
      FString::PrintfImpl(&DAT_146a803a8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95f50);
      _Init_thread_footer(&DAT_146a803b8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a803b0 != 0) {
    puVar1 = DAT_146a803a8;
  }
  FShaderType::FShaderType
            (&DAT_146a8ebc0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8ebc0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8ecf0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8ecf8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8ed00 = BuildSettings::IsPromotedBuild;
  _DAT_146a8ed08 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,1,1,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93e30);
  return;
}



// FUNCTION 1402d6aa0 FUN_1402d6aa0 body=341 status=ok
// SIG undefined FUN_1402d6aa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d6aa0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a803a0) {
    _Init_thread_header(&DAT_146a803a0);
    if (DAT_146a803a0 == -1) {
      FString::PrintfImpl(&DAT_146a80390,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",
                          L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95f70);
      _Init_thread_footer(&DAT_146a803a0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80398 != 0) {
    puVar1 = DAT_146a80390;
  }
  FShaderType::FShaderType
            (&DAT_146a8ed10,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8ed10 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8ee40 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8ee48 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8ee50 = BuildSettings::IsPromotedBuild;
  _DAT_146a8ee58 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,1,1,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93e40);
  return;
}



// FUNCTION 1402d6c00 FUN_1402d6c00 body=341 status=ok
// SIG undefined FUN_1402d6c00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d6c00(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80388) {
    _Init_thread_header(&DAT_146a80388);
    if (DAT_146a80388 == -1) {
      FString::PrintfImpl(&DAT_146a80378,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",
                          L"false",L"false");
      atexit((_func_5014 *)&LAB_143e95f90);
      _Init_thread_footer(&DAT_146a80388);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80380 != 0) {
    puVar1 = DAT_146a80378;
  }
  FShaderType::FShaderType
            (&DAT_146a8ee60,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8ee60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8ef90 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8ef98 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8efa0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8efa8 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,1,1,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93e50);
  return;
}



// FUNCTION 1402d6d60 FUN_1402d6d60 body=341 status=ok
// SIG undefined FUN_1402d6d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d6d60(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80370) {
    _Init_thread_header(&DAT_146a80370);
    if (DAT_146a80370 == -1) {
      FString::PrintfImpl(&DAT_146a80360,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95fb0);
      _Init_thread_footer(&DAT_146a80370);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80368 != 0) {
    puVar1 = DAT_146a80360;
  }
  FShaderType::FShaderType
            (&DAT_146a8efb0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8efb0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8f0e0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8f0e8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8f0f0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8f0f8 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,1,0,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93e60);
  return;
}



// FUNCTION 1402d6ec0 FUN_1402d6ec0 body=341 status=ok
// SIG undefined FUN_1402d6ec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d6ec0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80358) {
    _Init_thread_header(&DAT_146a80358);
    if (DAT_146a80358 == -1) {
      FString::PrintfImpl(&DAT_146a80348,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e95fd0);
      _Init_thread_footer(&DAT_146a80358);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80350 != 0) {
    puVar1 = DAT_146a80348;
  }
  FShaderType::FShaderType
            (&DAT_146a8f100,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8f100 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8f230 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8f238 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8f240 = BuildSettings::IsPromotedBuild;
  _DAT_146a8f248 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,1,0,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93e70);
  return;
}



// FUNCTION 1402d7020 FUN_1402d7020 body=341 status=ok
// SIG undefined FUN_1402d7020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d7020(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80340) {
    _Init_thread_header(&DAT_146a80340);
    if (DAT_146a80340 == -1) {
      FString::PrintfImpl(&DAT_146a80330,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,
                          L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e95ff0);
      _Init_thread_footer(&DAT_146a80340);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80338 != 0) {
    puVar1 = DAT_146a80330;
  }
  FShaderType::FShaderType
            (&DAT_146a8f250,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8f250 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8f380 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8f388 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8f390 = BuildSettings::IsPromotedBuild;
  _DAT_146a8f398 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,1,0,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93e80);
  return;
}



// FUNCTION 1402d7180 FUN_1402d7180 body=341 status=ok
// SIG undefined FUN_1402d7180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d7180(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80328) {
    _Init_thread_header(&DAT_146a80328);
    if (DAT_146a80328 == -1) {
      FString::PrintfImpl(&DAT_146a80318,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,
                          L"false",L"false");
      atexit((_func_5014 *)&LAB_143e96010);
      _Init_thread_footer(&DAT_146a80328);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80320 != 0) {
    puVar1 = DAT_146a80318;
  }
  FShaderType::FShaderType
            (&DAT_146a8f3a0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8f3a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8f4d0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8f4d8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8f4e0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8f4e8 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,1,0,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93e90);
  return;
}



// FUNCTION 1402d72e0 FUN_1402d72e0 body=341 status=ok
// SIG undefined FUN_1402d72e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d72e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80310) {
    _Init_thread_header(&DAT_146a80310);
    if (DAT_146a80310 == -1) {
      FString::PrintfImpl(&DAT_146a80300,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96030);
      _Init_thread_footer(&DAT_146a80310);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80308 != 0) {
    puVar1 = DAT_146a80300;
  }
  FShaderType::FShaderType
            (&DAT_146a8f4f0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8f4f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8f620 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8f628 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8f630 = BuildSettings::IsPromotedBuild;
  _DAT_146a8f638 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,1,0,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93ea0);
  return;
}



// FUNCTION 1402d7440 FUN_1402d7440 body=341 status=ok
// SIG undefined FUN_1402d7440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d7440(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a802f8) {
    _Init_thread_header(&DAT_146a802f8);
    if (DAT_146a802f8 == -1) {
      FString::PrintfImpl(&DAT_146a802e8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e96050);
      _Init_thread_footer(&DAT_146a802f8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a802f0 != 0) {
    puVar1 = DAT_146a802e8;
  }
  FShaderType::FShaderType
            (&DAT_146a8f640,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8f640 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8f770 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8f778 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8f780 = BuildSettings::IsPromotedBuild;
  _DAT_146a8f788 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,1,0,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93eb0);
  return;
}



// FUNCTION 1402d75a0 FUN_1402d75a0 body=341 status=ok
// SIG undefined FUN_1402d75a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d75a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a802e0) {
    _Init_thread_header(&DAT_146a802e0);
    if (DAT_146a802e0 == -1) {
      FString::PrintfImpl(&DAT_146a802d0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96070);
      _Init_thread_footer(&DAT_146a802e0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a802d8 != 0) {
    puVar1 = DAT_146a802d0;
  }
  FShaderType::FShaderType
            (&DAT_146a8f790,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8f790 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8f8c0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8f8c8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8f8d0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8f8d8 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,1,0,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93ec0);
  return;
}



// FUNCTION 1402d7700 FUN_1402d7700 body=341 status=ok
// SIG undefined FUN_1402d7700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d7700(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a802c8) {
    _Init_thread_header(&DAT_146a802c8);
    if (DAT_146a802c8 == -1) {
      FString::PrintfImpl(&DAT_146a802b8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",
                          L"false");
      atexit((_func_5014 *)&LAB_143e96090);
      _Init_thread_footer(&DAT_146a802c8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a802c0 != 0) {
    puVar1 = DAT_146a802b8;
  }
  FShaderType::FShaderType
            (&DAT_146a8f8e0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8f8e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8fa10 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8fa18 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8fa20 = BuildSettings::IsPromotedBuild;
  _DAT_146a8fa28 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,1,0,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93ed0);
  return;
}



// FUNCTION 1402d7860 FUN_1402d7860 body=341 status=ok
// SIG undefined FUN_1402d7860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d7860(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a802b0) {
    _Init_thread_header(&DAT_146a802b0);
    if (DAT_146a802b0 == -1) {
      FString::PrintfImpl(&DAT_146a802a0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e960b0);
      _Init_thread_footer(&DAT_146a802b0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a802a8 != 0) {
    puVar1 = DAT_146a802a0;
  }
  FShaderType::FShaderType
            (&DAT_146a8fa30,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8fa30 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8fb60 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8fb68 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8fb70 = BuildSettings::IsPromotedBuild;
  _DAT_146a8fb78 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,0,1,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93ee0);
  return;
}



// FUNCTION 1402d79c0 FUN_1402d79c0 body=341 status=ok
// SIG undefined FUN_1402d79c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d79c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80298) {
    _Init_thread_header(&DAT_146a80298);
    if (DAT_146a80298 == -1) {
      FString::PrintfImpl(&DAT_146a80288,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e960d0);
      _Init_thread_footer(&DAT_146a80298);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80290 != 0) {
    puVar1 = DAT_146a80288;
  }
  FShaderType::FShaderType
            (&DAT_146a8fb80,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8fb80 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8fcb0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8fcb8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8fcc0 = BuildSettings::IsPromotedBuild;
  _DAT_146a8fcc8 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,0,1,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93ef0);
  return;
}



// FUNCTION 1402d7b20 FUN_1402d7b20 body=341 status=ok
// SIG undefined FUN_1402d7b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d7b20(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80280) {
    _Init_thread_header(&DAT_146a80280);
    if (DAT_146a80280 == -1) {
      FString::PrintfImpl(&DAT_146a80270,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,
                          L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e960f0);
      _Init_thread_footer(&DAT_146a80280);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80278 != 0) {
    puVar1 = DAT_146a80270;
  }
  FShaderType::FShaderType
            (&DAT_146a8fcd0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8fcd0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8fe00 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8fe08 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8fe10 = BuildSettings::IsPromotedBuild;
  _DAT_146a8fe18 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,0,1,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93f00);
  return;
}



// FUNCTION 1402d7c80 FUN_1402d7c80 body=341 status=ok
// SIG undefined FUN_1402d7c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d7c80(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80268) {
    _Init_thread_header(&DAT_146a80268);
    if (DAT_146a80268 == -1) {
      FString::PrintfImpl(&DAT_146a80258,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,
                          L"false",L"false");
      atexit((_func_5014 *)&LAB_143e96110);
      _Init_thread_footer(&DAT_146a80268);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80260 != 0) {
    puVar1 = DAT_146a80258;
  }
  FShaderType::FShaderType
            (&DAT_146a8fe20,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8fe20 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a8ff50 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a8ff58 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a8ff60 = BuildSettings::IsPromotedBuild;
  _DAT_146a8ff68 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,0,1,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93f10);
  return;
}



// FUNCTION 1402d7de0 FUN_1402d7de0 body=341 status=ok
// SIG undefined FUN_1402d7de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d7de0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80250) {
    _Init_thread_header(&DAT_146a80250);
    if (DAT_146a80250 == -1) {
      FString::PrintfImpl(&DAT_146a80240,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96130);
      _Init_thread_footer(&DAT_146a80250);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80248 != 0) {
    puVar1 = DAT_146a80240;
  }
  FShaderType::FShaderType
            (&DAT_146a8ff70,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a8ff70 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a900a0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a900a8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a900b0 = BuildSettings::IsPromotedBuild;
  _DAT_146a900b8 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,0,1,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93f20);
  return;
}



// FUNCTION 1402d7f40 FUN_1402d7f40 body=341 status=ok
// SIG undefined FUN_1402d7f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d7f40(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80238) {
    _Init_thread_header(&DAT_146a80238);
    if (DAT_146a80238 == -1) {
      FString::PrintfImpl(&DAT_146a80228,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e96150);
      _Init_thread_footer(&DAT_146a80238);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80230 != 0) {
    puVar1 = DAT_146a80228;
  }
  FShaderType::FShaderType
            (&DAT_146a900c0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a900c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a901f0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a901f8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a90200 = BuildSettings::IsPromotedBuild;
  _DAT_146a90208 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,0,1,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93f30);
  return;
}



// FUNCTION 1402d80a0 FUN_1402d80a0 body=341 status=ok
// SIG undefined FUN_1402d80a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d80a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80220) {
    _Init_thread_header(&DAT_146a80220);
    if (DAT_146a80220 == -1) {
      FString::PrintfImpl(&DAT_146a80210,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96170);
      _Init_thread_footer(&DAT_146a80220);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80218 != 0) {
    puVar1 = DAT_146a80210;
  }
  FShaderType::FShaderType
            (&DAT_146a90210,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a90210 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a90340 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a90348 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a90350 = BuildSettings::IsPromotedBuild;
  _DAT_146a90358 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,0,1,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93f40);
  return;
}



// FUNCTION 1402d8200 FUN_1402d8200 body=341 status=ok
// SIG undefined FUN_1402d8200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d8200(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80208) {
    _Init_thread_header(&DAT_146a80208);
    if (DAT_146a80208 == -1) {
      FString::PrintfImpl(&DAT_146a801f8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",
                          L"false");
      atexit((_func_5014 *)&LAB_143e96190);
      _Init_thread_footer(&DAT_146a80208);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80200 != 0) {
    puVar1 = DAT_146a801f8;
  }
  FShaderType::FShaderType
            (&DAT_146a90360,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a90360 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a90490 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a90498 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a904a0 = BuildSettings::IsPromotedBuild;
  _DAT_146a904a8 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,0,1,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93f50);
  return;
}



// FUNCTION 1402d8360 FUN_1402d8360 body=341 status=ok
// SIG undefined FUN_1402d8360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d8360(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a801f0) {
    _Init_thread_header(&DAT_146a801f0);
    if (DAT_146a801f0 == -1) {
      FString::PrintfImpl(&DAT_146a801e0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e961b0);
      _Init_thread_footer(&DAT_146a801f0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a801e8 != 0) {
    puVar1 = DAT_146a801e0;
  }
  FShaderType::FShaderType
            (&DAT_146a904b0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a904b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a905e0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a905e8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a905f0 = BuildSettings::IsPromotedBuild;
  _DAT_146a905f8 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,0,0,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93f60);
  return;
}



// FUNCTION 1402d84c0 FUN_1402d84c0 body=341 status=ok
// SIG undefined FUN_1402d84c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d84c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a801d8) {
    _Init_thread_header(&DAT_146a801d8);
    if (DAT_146a801d8 == -1) {
      FString::PrintfImpl(&DAT_146a801c8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e961d0);
      _Init_thread_footer(&DAT_146a801d8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a801d0 != 0) {
    puVar1 = DAT_146a801c8;
  }
  FShaderType::FShaderType
            (&DAT_146a90600,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a90600 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a90730 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a90738 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a90740 = BuildSettings::IsPromotedBuild;
  _DAT_146a90748 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,0,0,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93f70);
  return;
}



// FUNCTION 1402d8620 FUN_1402d8620 body=341 status=ok
// SIG undefined FUN_1402d8620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d8620(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a801c0) {
    _Init_thread_header(&DAT_146a801c0);
    if (DAT_146a801c0 == -1) {
      FString::PrintfImpl(&DAT_146a801b0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e961f0);
      _Init_thread_footer(&DAT_146a801c0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a801b8 != 0) {
    puVar1 = DAT_146a801b0;
  }
  FShaderType::FShaderType
            (&DAT_146a90750,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a90750 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a90880 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a90888 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a90890 = BuildSettings::IsPromotedBuild;
  _DAT_146a90898 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,0,0,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93f80);
  return;
}



// FUNCTION 1402d8780 FUN_1402d8780 body=341 status=ok
// SIG undefined FUN_1402d8780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d8780(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a801a8) {
    _Init_thread_header(&DAT_146a801a8);
    if (DAT_146a801a8 == -1) {
      FString::PrintfImpl(&DAT_146a80198,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",
                          L"false");
      atexit((_func_5014 *)&LAB_143e96210);
      _Init_thread_footer(&DAT_146a801a8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a801a0 != 0) {
    puVar1 = DAT_146a80198;
  }
  FShaderType::FShaderType
            (&DAT_146a908a0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a908a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a909d0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a909d8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a909e0 = BuildSettings::IsPromotedBuild;
  _DAT_146a909e8 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,0,0,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93f90);
  return;
}



// FUNCTION 1402d88e0 FUN_1402d88e0 body=341 status=ok
// SIG undefined FUN_1402d88e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d88e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80190) {
    _Init_thread_header(&DAT_146a80190);
    if (DAT_146a80190 == -1) {
      FString::PrintfImpl(&DAT_146a80180,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96230);
      _Init_thread_footer(&DAT_146a80190);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80188 != 0) {
    puVar1 = DAT_146a80180;
  }
  FShaderType::FShaderType
            (&DAT_146a909f0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a909f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a90b20 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a90b28 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a90b30 = BuildSettings::IsPromotedBuild;
  _DAT_146a90b38 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,0,0,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93fa0);
  return;
}



// FUNCTION 1402d8a40 FUN_1402d8a40 body=341 status=ok
// SIG undefined FUN_1402d8a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d8a40(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a80178) {
    _Init_thread_header(&DAT_146a80178);
    if (DAT_146a80178 == -1) {
      FString::PrintfImpl(&DAT_146a80168,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,
                          L"false");
      atexit((_func_5014 *)&LAB_143e96250);
      _Init_thread_footer(&DAT_146a80178);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a80170 != 0) {
    puVar1 = DAT_146a80168;
  }
  FShaderType::FShaderType
            (&DAT_146a90b40,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a90b40 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a90c70 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a90c78 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a90c80 = BuildSettings::IsPromotedBuild;
  _DAT_146a90c88 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,0,0,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93fb0);
  return;
}



// FUNCTION 1402d8ba0 FUN_1402d8ba0 body=341 status=ok
// SIG undefined FUN_1402d8ba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d8ba0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a83038) {
    _Init_thread_header(&DAT_146a83038);
    if (DAT_146a83038 == -1) {
      FString::PrintfImpl(&DAT_146a83028,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96270);
      _Init_thread_footer(&DAT_146a83038);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a83030 != 0) {
    puVar1 = DAT_146a83028;
  }
  FShaderType::FShaderType
            (&DAT_146a90c90,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a90c90 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a90dc0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a90dc8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a90dd0 = BuildSettings::IsPromotedBuild;
  _DAT_146a90dd8 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,0,0,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93fc0);
  return;
}



// FUNCTION 1402d8d00 FUN_1402d8d00 body=341 status=ok
// SIG undefined FUN_1402d8d00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d8d00(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a83020) {
    _Init_thread_header(&DAT_146a83020);
    if (DAT_146a83020 == -1) {
      FString::PrintfImpl(&DAT_146a83010,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",L"false",L"false"
                         );
      atexit((_func_5014 *)&LAB_143e96290);
      _Init_thread_footer(&DAT_146a83020);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a83018 != 0) {
    puVar1 = DAT_146a83010;
  }
  FShaderType::FShaderType
            (&DAT_146a90de0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a90de0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a90f10 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a90f18 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a90f20 = BuildSettings::IsPromotedBuild;
  _DAT_146a90f28 =
       TReflectionEnvironmentSkyLightingPS<0,1,1,0,0,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93fd0);
  return;
}



// FUNCTION 1402d8e60 FUN_1402d8e60 body=341 status=ok
// SIG undefined FUN_1402d8e60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d8e60(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a83008) {
    _Init_thread_header(&DAT_146a83008);
    if (DAT_146a83008 == -1) {
      FString::PrintfImpl(&DAT_146a82ff8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e962b0);
      _Init_thread_footer(&DAT_146a83008);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a83000 != 0) {
    puVar1 = DAT_146a82ff8;
  }
  FShaderType::FShaderType
            (&DAT_146a90f30,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a90f30 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a91060 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a91068 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a91070 = BuildSettings::IsPromotedBuild;
  _DAT_146a91078 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,1,1,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93fe0);
  return;
}



// FUNCTION 1402d8fc0 FUN_1402d8fc0 body=341 status=ok
// SIG undefined FUN_1402d8fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d8fc0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82ff0) {
    _Init_thread_header(&DAT_146a82ff0);
    if (DAT_146a82ff0 == -1) {
      FString::PrintfImpl(&DAT_146a82fe0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e962d0);
      _Init_thread_footer(&DAT_146a82ff0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82fe8 != 0) {
    puVar1 = DAT_146a82fe0;
  }
  FShaderType::FShaderType
            (&DAT_146a91080,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a91080 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a911b0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a911b8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a911c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a911c8 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,1,1,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e93ff0);
  return;
}



// FUNCTION 1402d9120 FUN_1402d9120 body=341 status=ok
// SIG undefined FUN_1402d9120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d9120(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82fd8) {
    _Init_thread_header(&DAT_146a82fd8);
    if (DAT_146a82fd8 == -1) {
      FString::PrintfImpl(&DAT_146a82fc8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e962f0);
      _Init_thread_footer(&DAT_146a82fd8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82fd0 != 0) {
    puVar1 = DAT_146a82fc8;
  }
  FShaderType::FShaderType
            (&DAT_146a911d0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a911d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a91300 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a91308 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a91310 = BuildSettings::IsPromotedBuild;
  _DAT_146a91318 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,1,1,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94000);
  return;
}



// FUNCTION 1402d9280 FUN_1402d9280 body=341 status=ok
// SIG undefined FUN_1402d9280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d9280(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82fc0) {
    _Init_thread_header(&DAT_146a82fc0);
    if (DAT_146a82fc0 == -1) {
      FString::PrintfImpl(&DAT_146a82fb0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          L"false",L"false");
      atexit((_func_5014 *)&LAB_143e96310);
      _Init_thread_footer(&DAT_146a82fc0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82fb8 != 0) {
    puVar1 = DAT_146a82fb0;
  }
  FShaderType::FShaderType
            (&DAT_146a91320,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a91320 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a91450 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a91458 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a91460 = BuildSettings::IsPromotedBuild;
  _DAT_146a91468 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,1,1,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94010);
  return;
}



// FUNCTION 1402d93e0 FUN_1402d93e0 body=341 status=ok
// SIG undefined FUN_1402d93e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d93e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82fa8) {
    _Init_thread_header(&DAT_146a82fa8);
    if (DAT_146a82fa8 == -1) {
      FString::PrintfImpl(&DAT_146a82f98,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96330);
      _Init_thread_footer(&DAT_146a82fa8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82fa0 != 0) {
    puVar1 = DAT_146a82f98;
  }
  FShaderType::FShaderType
            (&DAT_146a91470,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a91470 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a915a0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a915a8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a915b0 = BuildSettings::IsPromotedBuild;
  _DAT_146a915b8 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,1,1,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94020);
  return;
}



// FUNCTION 1402d9540 FUN_1402d9540 body=341 status=ok
// SIG undefined FUN_1402d9540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d9540(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82f90) {
    _Init_thread_header(&DAT_146a82f90);
    if (DAT_146a82f90 == -1) {
      FString::PrintfImpl(&DAT_146a82f80,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e96350);
      _Init_thread_footer(&DAT_146a82f90);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82f88 != 0) {
    puVar1 = DAT_146a82f80;
  }
  FShaderType::FShaderType
            (&DAT_146a915c0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a915c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a916f0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a916f8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a91700 = BuildSettings::IsPromotedBuild;
  _DAT_146a91708 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,1,1,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94030);
  return;
}



// FUNCTION 1402d96a0 FUN_1402d96a0 body=341 status=ok
// SIG undefined FUN_1402d96a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d96a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82f78) {
    _Init_thread_header(&DAT_146a82f78);
    if (DAT_146a82f78 == -1) {
      FString::PrintfImpl(&DAT_146a82f68,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96370);
      _Init_thread_footer(&DAT_146a82f78);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82f70 != 0) {
    puVar1 = DAT_146a82f68;
  }
  FShaderType::FShaderType
            (&DAT_146a91710,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a91710 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a91840 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a91848 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a91850 = BuildSettings::IsPromotedBuild;
  _DAT_146a91858 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,1,1,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94040);
  return;
}



// FUNCTION 1402d9800 FUN_1402d9800 body=341 status=ok
// SIG undefined FUN_1402d9800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d9800(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82f60) {
    _Init_thread_header(&DAT_146a82f60);
    if (DAT_146a82f60 == -1) {
      FString::PrintfImpl(&DAT_146a82f50,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",
                          L"false");
      atexit((_func_5014 *)&LAB_143e96390);
      _Init_thread_footer(&DAT_146a82f60);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82f58 != 0) {
    puVar1 = DAT_146a82f50;
  }
  FShaderType::FShaderType
            (&DAT_146a91860,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a91860 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a91990 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a91998 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a919a0 = BuildSettings::IsPromotedBuild;
  _DAT_146a919a8 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,1,1,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94050);
  return;
}



// FUNCTION 1402d9960 FUN_1402d9960 body=341 status=ok
// SIG undefined FUN_1402d9960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d9960(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82f48) {
    _Init_thread_header(&DAT_146a82f48);
    if (DAT_146a82f48 == -1) {
      FString::PrintfImpl(&DAT_146a82f38,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e963b0);
      _Init_thread_footer(&DAT_146a82f48);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82f40 != 0) {
    puVar1 = DAT_146a82f38;
  }
  FShaderType::FShaderType
            (&DAT_146a919b0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a919b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a91ae0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a91ae8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a91af0 = BuildSettings::IsPromotedBuild;
  _DAT_146a91af8 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,1,0,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94060);
  return;
}



// FUNCTION 1402d9ac0 FUN_1402d9ac0 body=341 status=ok
// SIG undefined FUN_1402d9ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d9ac0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82f30) {
    _Init_thread_header(&DAT_146a82f30);
    if (DAT_146a82f30 == -1) {
      FString::PrintfImpl(&DAT_146a82f20,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e963d0);
      _Init_thread_footer(&DAT_146a82f30);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82f28 != 0) {
    puVar1 = DAT_146a82f20;
  }
  FShaderType::FShaderType
            (&DAT_146a91b00,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a91b00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a91c30 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a91c38 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a91c40 = BuildSettings::IsPromotedBuild;
  _DAT_146a91c48 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,1,0,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94070);
  return;
}



// FUNCTION 1402d9c20 FUN_1402d9c20 body=341 status=ok
// SIG undefined FUN_1402d9c20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d9c20(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82f18) {
    _Init_thread_header(&DAT_146a82f18);
    if (DAT_146a82f18 == -1) {
      FString::PrintfImpl(&DAT_146a82f08,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e963f0);
      _Init_thread_footer(&DAT_146a82f18);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82f10 != 0) {
    puVar1 = DAT_146a82f08;
  }
  FShaderType::FShaderType
            (&DAT_146a91c50,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a91c50 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a91d80 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a91d88 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a91d90 = BuildSettings::IsPromotedBuild;
  _DAT_146a91d98 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,1,0,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94080);
  return;
}



// FUNCTION 1402d9d80 FUN_1402d9d80 body=341 status=ok
// SIG undefined FUN_1402d9d80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d9d80(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82f00) {
    _Init_thread_header(&DAT_146a82f00);
    if (DAT_146a82f00 == -1) {
      FString::PrintfImpl(&DAT_146a82ef0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",
                          L"false");
      atexit((_func_5014 *)&LAB_143e96410);
      _Init_thread_footer(&DAT_146a82f00);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82ef8 != 0) {
    puVar1 = DAT_146a82ef0;
  }
  FShaderType::FShaderType
            (&DAT_146a91da0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a91da0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a91ed0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a91ed8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a91ee0 = BuildSettings::IsPromotedBuild;
  _DAT_146a91ee8 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,1,0,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94090);
  return;
}



// FUNCTION 1402d9ee0 FUN_1402d9ee0 body=341 status=ok
// SIG undefined FUN_1402d9ee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d9ee0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82ee8) {
    _Init_thread_header(&DAT_146a82ee8);
    if (DAT_146a82ee8 == -1) {
      FString::PrintfImpl(&DAT_146a82ed8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96430);
      _Init_thread_footer(&DAT_146a82ee8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82ee0 != 0) {
    puVar1 = DAT_146a82ed8;
  }
  FShaderType::FShaderType
            (&DAT_146a91ef0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a91ef0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a92020 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a92028 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a92030 = BuildSettings::IsPromotedBuild;
  _DAT_146a92038 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,1,0,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e940a0);
  return;
}



// FUNCTION 1402da040 FUN_1402da040 body=341 status=ok
// SIG undefined FUN_1402da040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402da040(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82ed0) {
    _Init_thread_header(&DAT_146a82ed0);
    if (DAT_146a82ed0 == -1) {
      FString::PrintfImpl(&DAT_146a82ec0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,
                          L"false");
      atexit((_func_5014 *)&LAB_143e96450);
      _Init_thread_footer(&DAT_146a82ed0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82ec8 != 0) {
    puVar1 = DAT_146a82ec0;
  }
  FShaderType::FShaderType
            (&DAT_146a92040,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a92040 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a92170 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a92178 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a92180 = BuildSettings::IsPromotedBuild;
  _DAT_146a92188 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,1,0,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e940b0);
  return;
}



// FUNCTION 1402da1a0 FUN_1402da1a0 body=341 status=ok
// SIG undefined FUN_1402da1a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402da1a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82eb8) {
    _Init_thread_header(&DAT_146a82eb8);
    if (DAT_146a82eb8 == -1) {
      FString::PrintfImpl(&DAT_146a82ea8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96470);
      _Init_thread_footer(&DAT_146a82eb8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82eb0 != 0) {
    puVar1 = DAT_146a82ea8;
  }
  FShaderType::FShaderType
            (&DAT_146a92190,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a92190 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a922c0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a922c8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a922d0 = BuildSettings::IsPromotedBuild;
  _DAT_146a922d8 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,1,0,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e940c0);
  return;
}



// FUNCTION 1402da300 FUN_1402da300 body=341 status=ok
// SIG undefined FUN_1402da300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402da300(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82ea0) {
    _Init_thread_header(&DAT_146a82ea0);
    if (DAT_146a82ea0 == -1) {
      FString::PrintfImpl(&DAT_146a82e90,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",L"false",L"false"
                         );
      atexit((_func_5014 *)&LAB_143e96490);
      _Init_thread_footer(&DAT_146a82ea0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82e98 != 0) {
    puVar1 = DAT_146a82e90;
  }
  FShaderType::FShaderType
            (&DAT_146a922e0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a922e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a92410 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a92418 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a92420 = BuildSettings::IsPromotedBuild;
  _DAT_146a92428 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,1,0,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e940d0);
  return;
}



// FUNCTION 1402da460 FUN_1402da460 body=341 status=ok
// SIG undefined FUN_1402da460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402da460(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82e88) {
    _Init_thread_header(&DAT_146a82e88);
    if (DAT_146a82e88 == -1) {
      FString::PrintfImpl(&DAT_146a82e78,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e964b0);
      _Init_thread_footer(&DAT_146a82e88);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82e80 != 0) {
    puVar1 = DAT_146a82e78;
  }
  FShaderType::FShaderType
            (&DAT_146a92430,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a92430 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a92560 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a92568 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a92570 = BuildSettings::IsPromotedBuild;
  _DAT_146a92578 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,0,1,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e940e0);
  return;
}



// FUNCTION 1402da5c0 FUN_1402da5c0 body=341 status=ok
// SIG undefined FUN_1402da5c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402da5c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82e70) {
    _Init_thread_header(&DAT_146a82e70);
    if (DAT_146a82e70 == -1) {
      FString::PrintfImpl(&DAT_146a82e60,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e964d0);
      _Init_thread_footer(&DAT_146a82e70);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82e68 != 0) {
    puVar1 = DAT_146a82e60;
  }
  FShaderType::FShaderType
            (&DAT_146a92580,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a92580 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a926b0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a926b8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a926c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a926c8 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,0,1,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e940f0);
  return;
}



// FUNCTION 1402da720 FUN_1402da720 body=341 status=ok
// SIG undefined FUN_1402da720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402da720(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82e58) {
    _Init_thread_header(&DAT_146a82e58);
    if (DAT_146a82e58 == -1) {
      FString::PrintfImpl(&DAT_146a82e48,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e964f0);
      _Init_thread_footer(&DAT_146a82e58);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82e50 != 0) {
    puVar1 = DAT_146a82e48;
  }
  FShaderType::FShaderType
            (&DAT_146a926d0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a926d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a92800 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a92808 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a92810 = BuildSettings::IsPromotedBuild;
  _DAT_146a92818 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,0,1,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94100);
  return;
}



// FUNCTION 1402da880 FUN_1402da880 body=341 status=ok
// SIG undefined FUN_1402da880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402da880(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82e40) {
    _Init_thread_header(&DAT_146a82e40);
    if (DAT_146a82e40 == -1) {
      FString::PrintfImpl(&DAT_146a82e30,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",
                          L"false");
      atexit((_func_5014 *)&LAB_143e96510);
      _Init_thread_footer(&DAT_146a82e40);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82e38 != 0) {
    puVar1 = DAT_146a82e30;
  }
  FShaderType::FShaderType
            (&DAT_146a92820,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a92820 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a92950 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a92958 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a92960 = BuildSettings::IsPromotedBuild;
  _DAT_146a92968 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,0,1,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94110);
  return;
}



// FUNCTION 1402da9e0 FUN_1402da9e0 body=341 status=ok
// SIG undefined FUN_1402da9e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402da9e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82e28) {
    _Init_thread_header(&DAT_146a82e28);
    if (DAT_146a82e28 == -1) {
      FString::PrintfImpl(&DAT_146a82e18,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96530);
      _Init_thread_footer(&DAT_146a82e28);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82e20 != 0) {
    puVar1 = DAT_146a82e18;
  }
  FShaderType::FShaderType
            (&DAT_146a92970,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a92970 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a92aa0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a92aa8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a92ab0 = BuildSettings::IsPromotedBuild;
  _DAT_146a92ab8 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,0,1,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94120);
  return;
}



// FUNCTION 1402dab40 FUN_1402dab40 body=341 status=ok
// SIG undefined FUN_1402dab40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dab40(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82e10) {
    _Init_thread_header(&DAT_146a82e10);
    if (DAT_146a82e10 == -1) {
      FString::PrintfImpl(&DAT_146a82e00,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,
                          L"false");
      atexit((_func_5014 *)&LAB_143e96550);
      _Init_thread_footer(&DAT_146a82e10);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82e08 != 0) {
    puVar1 = DAT_146a82e00;
  }
  FShaderType::FShaderType
            (&DAT_146a92ac0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a92ac0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a92bf0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a92bf8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a92c00 = BuildSettings::IsPromotedBuild;
  _DAT_146a92c08 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,0,1,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94130);
  return;
}



// FUNCTION 1402daca0 FUN_1402daca0 body=341 status=ok
// SIG undefined FUN_1402daca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402daca0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82df8) {
    _Init_thread_header(&DAT_146a82df8);
    if (DAT_146a82df8 == -1) {
      FString::PrintfImpl(&DAT_146a82de8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96570);
      _Init_thread_footer(&DAT_146a82df8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82df0 != 0) {
    puVar1 = DAT_146a82de8;
  }
  FShaderType::FShaderType
            (&DAT_146a92c10,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a92c10 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a92d40 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a92d48 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a92d50 = BuildSettings::IsPromotedBuild;
  _DAT_146a92d58 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,0,1,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94140);
  return;
}



// FUNCTION 1402dae00 FUN_1402dae00 body=341 status=ok
// SIG undefined FUN_1402dae00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dae00(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82de0) {
    _Init_thread_header(&DAT_146a82de0);
    if (DAT_146a82de0 == -1) {
      FString::PrintfImpl(&DAT_146a82dd0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",L"false",L"false"
                         );
      atexit((_func_5014 *)&LAB_143e96590);
      _Init_thread_footer(&DAT_146a82de0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82dd8 != 0) {
    puVar1 = DAT_146a82dd0;
  }
  FShaderType::FShaderType
            (&DAT_146a92d60,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a92d60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a92e90 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a92e98 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a92ea0 = BuildSettings::IsPromotedBuild;
  _DAT_146a92ea8 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,0,1,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94150);
  return;
}



// FUNCTION 1402daf60 FUN_1402daf60 body=341 status=ok
// SIG undefined FUN_1402daf60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402daf60(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82dc8) {
    _Init_thread_header(&DAT_146a82dc8);
    if (DAT_146a82dc8 == -1) {
      FString::PrintfImpl(&DAT_146a82db8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e965b0);
      _Init_thread_footer(&DAT_146a82dc8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82dc0 != 0) {
    puVar1 = DAT_146a82db8;
  }
  FShaderType::FShaderType
            (&DAT_146a92eb0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a92eb0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a92fe0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a92fe8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a92ff0 = BuildSettings::IsPromotedBuild;
  _DAT_146a92ff8 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,0,0,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94160);
  return;
}



// FUNCTION 1402db0c0 FUN_1402db0c0 body=341 status=ok
// SIG undefined FUN_1402db0c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402db0c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82db0) {
    _Init_thread_header(&DAT_146a82db0);
    if (DAT_146a82db0 == -1) {
      FString::PrintfImpl(&DAT_146a82da0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,
                          L"false");
      atexit((_func_5014 *)&LAB_143e965d0);
      _Init_thread_footer(&DAT_146a82db0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82da8 != 0) {
    puVar1 = DAT_146a82da0;
  }
  FShaderType::FShaderType
            (&DAT_146a93000,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a93000 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a93130 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a93138 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a93140 = BuildSettings::IsPromotedBuild;
  _DAT_146a93148 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,0,0,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94170);
  return;
}



// FUNCTION 1402db220 FUN_1402db220 body=341 status=ok
// SIG undefined FUN_1402db220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402db220(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82d98) {
    _Init_thread_header(&DAT_146a82d98);
    if (DAT_146a82d98 == -1) {
      FString::PrintfImpl(&DAT_146a82d88,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e965f0);
      _Init_thread_footer(&DAT_146a82d98);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82d90 != 0) {
    puVar1 = DAT_146a82d88;
  }
  FShaderType::FShaderType
            (&DAT_146a93150,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a93150 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a93280 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a93288 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a93290 = BuildSettings::IsPromotedBuild;
  _DAT_146a93298 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,0,0,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94180);
  return;
}



// FUNCTION 1402db380 FUN_1402db380 body=341 status=ok
// SIG undefined FUN_1402db380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402db380(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82d80) {
    _Init_thread_header(&DAT_146a82d80);
    if (DAT_146a82d80 == -1) {
      FString::PrintfImpl(&DAT_146a82d70,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,L"false",L"false"
                         );
      atexit((_func_5014 *)&LAB_143e96610);
      _Init_thread_footer(&DAT_146a82d80);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82d78 != 0) {
    puVar1 = DAT_146a82d70;
  }
  FShaderType::FShaderType
            (&DAT_146a932a0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a932a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a933d0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a933d8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a933e0 = BuildSettings::IsPromotedBuild;
  _DAT_146a933e8 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,0,0,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94190);
  return;
}



// FUNCTION 1402db4e0 FUN_1402db4e0 body=341 status=ok
// SIG undefined FUN_1402db4e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402db4e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82d68) {
    _Init_thread_header(&DAT_146a82d68);
    if (DAT_146a82d68 == -1) {
      FString::PrintfImpl(&DAT_146a82d58,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",L"false",L"false",L"false",&DAT_143f600c8,
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96630);
      _Init_thread_footer(&DAT_146a82d68);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82d60 != 0) {
    puVar1 = DAT_146a82d58;
  }
  FShaderType::FShaderType
            (&DAT_146a933f0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a933f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a93520 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a93528 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a93530 = BuildSettings::IsPromotedBuild;
  _DAT_146a93538 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,0,0,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e941a0);
  return;
}



// FUNCTION 1402db640 FUN_1402db640 body=341 status=ok
// SIG undefined FUN_1402db640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402db640(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82d50) {
    _Init_thread_header(&DAT_146a82d50);
    if (DAT_146a82d50 == -1) {
      FString::PrintfImpl(&DAT_146a82d40,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",L"false",L"false",L"false",&DAT_143f600c8,L"false"
                         );
      atexit((_func_5014 *)&LAB_143e96650);
      _Init_thread_footer(&DAT_146a82d50);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82d48 != 0) {
    puVar1 = DAT_146a82d40;
  }
  FShaderType::FShaderType
            (&DAT_146a93540,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a93540 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a93670 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a93678 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a93680 = BuildSettings::IsPromotedBuild;
  _DAT_146a93688 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,0,0,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e941b0);
  return;
}



// FUNCTION 1402db7a0 FUN_1402db7a0 body=341 status=ok
// SIG undefined FUN_1402db7a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402db7a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82d38) {
    _Init_thread_header(&DAT_146a82d38);
    if (DAT_146a82d38 == -1) {
      FString::PrintfImpl(&DAT_146a82d28,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",L"false",L"false",L"false",L"false",&DAT_143f600c8
                         );
      atexit((_func_5014 *)&LAB_143e96670);
      _Init_thread_footer(&DAT_146a82d38);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82d30 != 0) {
    puVar1 = DAT_146a82d28;
  }
  FShaderType::FShaderType
            (&DAT_146a93690,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a93690 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a937c0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a937c8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a937d0 = BuildSettings::IsPromotedBuild;
  _DAT_146a937d8 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,0,0,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e941c0);
  return;
}



// FUNCTION 1402db900 FUN_1402db900 body=341 status=ok
// SIG undefined FUN_1402db900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402db900(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82d20) {
    _Init_thread_header(&DAT_146a82d20);
    if (DAT_146a82d20 == -1) {
      FString::PrintfImpl(&DAT_146a82d10,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          &DAT_143f600c8,L"false",L"false",L"false",L"false",L"false",L"false");
      atexit((_func_5014 *)&LAB_143e96690);
      _Init_thread_footer(&DAT_146a82d20);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82d18 != 0) {
    puVar1 = DAT_146a82d10;
  }
  FShaderType::FShaderType
            (&DAT_146a937e0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a937e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a93910 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a93918 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a93920 = BuildSettings::IsPromotedBuild;
  _DAT_146a93928 =
       TReflectionEnvironmentSkyLightingPS<0,1,0,0,0,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e941d0);
  return;
}



// FUNCTION 1402dba60 FUN_1402dba60 body=348 status=ok
// SIG undefined FUN_1402dba60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dba60(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82d08) {
    _Init_thread_header(&DAT_146a82d08);
    if (DAT_146a82d08 == -1) {
      FString::PrintfImpl(&DAT_146a82cf8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e966b0);
      _Init_thread_footer(&DAT_146a82d08);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82d00 != 0) {
    puVar1 = DAT_146a82cf8;
  }
  FShaderType::FShaderType
            (&DAT_146a93930,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a93930 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a93a60 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a93a68 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a93a70 = BuildSettings::IsPromotedBuild;
  _DAT_146a93a78 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,1,1,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e941e0);
  return;
}



// FUNCTION 1402dbbc0 FUN_1402dbbc0 body=344 status=ok
// SIG undefined FUN_1402dbbc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dbbc0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82cf0) {
    _Init_thread_header(&DAT_146a82cf0);
    if (DAT_146a82cf0 == -1) {
      FString::PrintfImpl(&DAT_146a82ce0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e966d0);
      _Init_thread_footer(&DAT_146a82cf0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82ce8 != 0) {
    puVar1 = DAT_146a82ce0;
  }
  FShaderType::FShaderType
            (&DAT_146a93a80,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a93a80 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a93bb0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a93bb8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a93bc0 = BuildSettings::IsPromotedBuild;
  _DAT_146a93bc8 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,1,1,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e941f0);
  return;
}



// FUNCTION 1402dbd20 FUN_1402dbd20 body=344 status=ok
// SIG undefined FUN_1402dbd20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dbd20(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82cd8) {
    _Init_thread_header(&DAT_146a82cd8);
    if (DAT_146a82cd8 == -1) {
      FString::PrintfImpl(&DAT_146a82cc8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          L"false",&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e966f0);
      _Init_thread_footer(&DAT_146a82cd8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82cd0 != 0) {
    puVar1 = DAT_146a82cc8;
  }
  FShaderType::FShaderType
            (&DAT_146a93bd0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a93bd0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a93d00 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a93d08 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a93d10 = BuildSettings::IsPromotedBuild;
  _DAT_146a93d18 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,1,1,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94200);
  return;
}



// FUNCTION 1402dbe80 FUN_1402dbe80 body=344 status=ok
// SIG undefined FUN_1402dbe80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dbe80(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82cc0) {
    _Init_thread_header(&DAT_146a82cc0);
    if (DAT_146a82cc0 == -1) {
      FString::PrintfImpl(&DAT_146a82cb0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          L"false",L"false");
      atexit((_func_5014 *)&LAB_143e96710);
      _Init_thread_footer(&DAT_146a82cc0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82cb8 != 0) {
    puVar1 = DAT_146a82cb0;
  }
  FShaderType::FShaderType
            (&DAT_146a93d20,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a93d20 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a93e50 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a93e58 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a93e60 = BuildSettings::IsPromotedBuild;
  _DAT_146a93e68 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,1,1,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94210);
  return;
}



// FUNCTION 1402dbfe0 FUN_1402dbfe0 body=344 status=ok
// SIG undefined FUN_1402dbfe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dbfe0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82ca8) {
    _Init_thread_header(&DAT_146a82ca8);
    if (DAT_146a82ca8 == -1) {
      FString::PrintfImpl(&DAT_146a82c98,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96730);
      _Init_thread_footer(&DAT_146a82ca8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82ca0 != 0) {
    puVar1 = DAT_146a82c98;
  }
  FShaderType::FShaderType
            (&DAT_146a93e70,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a93e70 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a93fa0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a93fa8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a93fb0 = BuildSettings::IsPromotedBuild;
  _DAT_146a93fb8 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,1,1,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94220);
  return;
}



// FUNCTION 1402dc140 FUN_1402dc140 body=344 status=ok
// SIG undefined FUN_1402dc140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dc140(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82c90) {
    _Init_thread_header(&DAT_146a82c90);
    if (DAT_146a82c90 == -1) {
      FString::PrintfImpl(&DAT_146a82c80,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e96750);
      _Init_thread_footer(&DAT_146a82c90);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82c88 != 0) {
    puVar1 = DAT_146a82c80;
  }
  FShaderType::FShaderType
            (&DAT_146a93fc0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a93fc0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a940f0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a940f8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a94100 = BuildSettings::IsPromotedBuild;
  _DAT_146a94108 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,1,1,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94230);
  return;
}



// FUNCTION 1402dc2a0 FUN_1402dc2a0 body=344 status=ok
// SIG undefined FUN_1402dc2a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dc2a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82c78) {
    _Init_thread_header(&DAT_146a82c78);
    if (DAT_146a82c78 == -1) {
      FString::PrintfImpl(&DAT_146a82c68,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96770);
      _Init_thread_footer(&DAT_146a82c78);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82c70 != 0) {
    puVar1 = DAT_146a82c68;
  }
  FShaderType::FShaderType
            (&DAT_146a94110,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a94110 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a94240 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a94248 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a94250 = BuildSettings::IsPromotedBuild;
  _DAT_146a94258 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,1,1,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94240);
  return;
}



// FUNCTION 1402dc400 FUN_1402dc400 body=344 status=ok
// SIG undefined FUN_1402dc400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dc400(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82c60) {
    _Init_thread_header(&DAT_146a82c60);
    if (DAT_146a82c60 == -1) {
      FString::PrintfImpl(&DAT_146a82c50,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",
                          L"false");
      atexit((_func_5014 *)&LAB_143e96790);
      _Init_thread_footer(&DAT_146a82c60);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82c58 != 0) {
    puVar1 = DAT_146a82c50;
  }
  FShaderType::FShaderType
            (&DAT_146a94260,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a94260 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a94390 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a94398 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a943a0 = BuildSettings::IsPromotedBuild;
  _DAT_146a943a8 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,1,1,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94250);
  return;
}



// FUNCTION 1402dc560 FUN_1402dc560 body=344 status=ok
// SIG undefined FUN_1402dc560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dc560(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82c48) {
    _Init_thread_header(&DAT_146a82c48);
    if (DAT_146a82c48 == -1) {
      FString::PrintfImpl(&DAT_146a82c38,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e967b0);
      _Init_thread_footer(&DAT_146a82c48);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82c40 != 0) {
    puVar1 = DAT_146a82c38;
  }
  FShaderType::FShaderType
            (&DAT_146a943b0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a943b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a944e0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a944e8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a944f0 = BuildSettings::IsPromotedBuild;
  _DAT_146a944f8 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,1,0,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94260);
  return;
}



// FUNCTION 1402dc6c0 FUN_1402dc6c0 body=344 status=ok
// SIG undefined FUN_1402dc6c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dc6c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82c30) {
    _Init_thread_header(&DAT_146a82c30);
    if (DAT_146a82c30 == -1) {
      FString::PrintfImpl(&DAT_146a82c20,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e967d0);
      _Init_thread_footer(&DAT_146a82c30);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82c28 != 0) {
    puVar1 = DAT_146a82c20;
  }
  FShaderType::FShaderType
            (&DAT_146a94500,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a94500 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a94630 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a94638 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a94640 = BuildSettings::IsPromotedBuild;
  _DAT_146a94648 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,1,0,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94270);
  return;
}



// FUNCTION 1402dc820 FUN_1402dc820 body=344 status=ok
// SIG undefined FUN_1402dc820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dc820(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82c18) {
    _Init_thread_header(&DAT_146a82c18);
    if (DAT_146a82c18 == -1) {
      FString::PrintfImpl(&DAT_146a82c08,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e967f0);
      _Init_thread_footer(&DAT_146a82c18);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82c10 != 0) {
    puVar1 = DAT_146a82c08;
  }
  FShaderType::FShaderType
            (&DAT_146a94650,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a94650 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a94780 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a94788 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a94790 = BuildSettings::IsPromotedBuild;
  _DAT_146a94798 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,1,0,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94280);
  return;
}



// FUNCTION 1402dc980 FUN_1402dc980 body=344 status=ok
// SIG undefined FUN_1402dc980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dc980(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82c00) {
    _Init_thread_header(&DAT_146a82c00);
    if (DAT_146a82c00 == -1) {
      FString::PrintfImpl(&DAT_146a82bf0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",
                          L"false");
      atexit((_func_5014 *)&LAB_143e96810);
      _Init_thread_footer(&DAT_146a82c00);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82bf8 != 0) {
    puVar1 = DAT_146a82bf0;
  }
  FShaderType::FShaderType
            (&DAT_146a947a0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a947a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a948d0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a948d8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a948e0 = BuildSettings::IsPromotedBuild;
  _DAT_146a948e8 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,1,0,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94290);
  return;
}



// FUNCTION 1402dcae0 FUN_1402dcae0 body=344 status=ok
// SIG undefined FUN_1402dcae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dcae0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82be8) {
    _Init_thread_header(&DAT_146a82be8);
    if (DAT_146a82be8 == -1) {
      FString::PrintfImpl(&DAT_146a82bd8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96830);
      _Init_thread_footer(&DAT_146a82be8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82be0 != 0) {
    puVar1 = DAT_146a82bd8;
  }
  FShaderType::FShaderType
            (&DAT_146a948f0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a948f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a94a20 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a94a28 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a94a30 = BuildSettings::IsPromotedBuild;
  _DAT_146a94a38 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,1,0,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e942a0);
  return;
}



// FUNCTION 1402dcc40 FUN_1402dcc40 body=344 status=ok
// SIG undefined FUN_1402dcc40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dcc40(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82bd0) {
    _Init_thread_header(&DAT_146a82bd0);
    if (DAT_146a82bd0 == -1) {
      FString::PrintfImpl(&DAT_146a82bc0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,
                          L"false");
      atexit((_func_5014 *)&LAB_143e96850);
      _Init_thread_footer(&DAT_146a82bd0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82bc8 != 0) {
    puVar1 = DAT_146a82bc0;
  }
  FShaderType::FShaderType
            (&DAT_146a94a40,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a94a40 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a94b70 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a94b78 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a94b80 = BuildSettings::IsPromotedBuild;
  _DAT_146a94b88 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,1,0,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e942b0);
  return;
}



// FUNCTION 1402dcda0 FUN_1402dcda0 body=344 status=ok
// SIG undefined FUN_1402dcda0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dcda0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82bb8) {
    _Init_thread_header(&DAT_146a82bb8);
    if (DAT_146a82bb8 == -1) {
      FString::PrintfImpl(&DAT_146a82ba8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96870);
      _Init_thread_footer(&DAT_146a82bb8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82bb0 != 0) {
    puVar1 = DAT_146a82ba8;
  }
  FShaderType::FShaderType
            (&DAT_146a94b90,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a94b90 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a94cc0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a94cc8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a94cd0 = BuildSettings::IsPromotedBuild;
  _DAT_146a94cd8 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,1,0,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e942c0);
  return;
}



// FUNCTION 1402dcf00 FUN_1402dcf00 body=344 status=ok
// SIG undefined FUN_1402dcf00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dcf00(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82ba0) {
    _Init_thread_header(&DAT_146a82ba0);
    if (DAT_146a82ba0 == -1) {
      FString::PrintfImpl(&DAT_146a82b90,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false",L"false"
                         );
      atexit((_func_5014 *)&LAB_143e96890);
      _Init_thread_footer(&DAT_146a82ba0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82b98 != 0) {
    puVar1 = DAT_146a82b90;
  }
  FShaderType::FShaderType
            (&DAT_146a94ce0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a94ce0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a94e10 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a94e18 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a94e20 = BuildSettings::IsPromotedBuild;
  _DAT_146a94e28 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,1,0,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e942d0);
  return;
}



// FUNCTION 1402dd060 FUN_1402dd060 body=344 status=ok
// SIG undefined FUN_1402dd060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dd060(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82b88) {
    _Init_thread_header(&DAT_146a82b88);
    if (DAT_146a82b88 == -1) {
      FString::PrintfImpl(&DAT_146a82b78,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e968b0);
      _Init_thread_footer(&DAT_146a82b88);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82b80 != 0) {
    puVar1 = DAT_146a82b78;
  }
  FShaderType::FShaderType
            (&DAT_146a94e30,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a94e30 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a94f60 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a94f68 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a94f70 = BuildSettings::IsPromotedBuild;
  _DAT_146a94f78 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,0,1,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e942e0);
  return;
}



// FUNCTION 1402dd1c0 FUN_1402dd1c0 body=344 status=ok
// SIG undefined FUN_1402dd1c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dd1c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82b70) {
    _Init_thread_header(&DAT_146a82b70);
    if (DAT_146a82b70 == -1) {
      FString::PrintfImpl(&DAT_146a82b60,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e968d0);
      _Init_thread_footer(&DAT_146a82b70);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82b68 != 0) {
    puVar1 = DAT_146a82b60;
  }
  FShaderType::FShaderType
            (&DAT_146a94f80,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a94f80 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a950b0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a950b8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a950c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a950c8 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,0,1,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e942f0);
  return;
}



// FUNCTION 1402dd320 FUN_1402dd320 body=344 status=ok
// SIG undefined FUN_1402dd320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dd320(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82b58) {
    _Init_thread_header(&DAT_146a82b58);
    if (DAT_146a82b58 == -1) {
      FString::PrintfImpl(&DAT_146a82b48,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e968f0);
      _Init_thread_footer(&DAT_146a82b58);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82b50 != 0) {
    puVar1 = DAT_146a82b48;
  }
  FShaderType::FShaderType
            (&DAT_146a950d0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a950d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a95200 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a95208 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a95210 = BuildSettings::IsPromotedBuild;
  _DAT_146a95218 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,0,1,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94300);
  return;
}



// FUNCTION 1402dd480 FUN_1402dd480 body=344 status=ok
// SIG undefined FUN_1402dd480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dd480(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82b40) {
    _Init_thread_header(&DAT_146a82b40);
    if (DAT_146a82b40 == -1) {
      FString::PrintfImpl(&DAT_146a82b30,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",
                          L"false");
      atexit((_func_5014 *)&LAB_143e96910);
      _Init_thread_footer(&DAT_146a82b40);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82b38 != 0) {
    puVar1 = DAT_146a82b30;
  }
  FShaderType::FShaderType
            (&DAT_146a95220,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a95220 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a95350 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a95358 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a95360 = BuildSettings::IsPromotedBuild;
  _DAT_146a95368 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,0,1,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94310);
  return;
}



// FUNCTION 1402dd5e0 FUN_1402dd5e0 body=344 status=ok
// SIG undefined FUN_1402dd5e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dd5e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82b28) {
    _Init_thread_header(&DAT_146a82b28);
    if (DAT_146a82b28 == -1) {
      FString::PrintfImpl(&DAT_146a82b18,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96930);
      _Init_thread_footer(&DAT_146a82b28);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82b20 != 0) {
    puVar1 = DAT_146a82b18;
  }
  FShaderType::FShaderType
            (&DAT_146a95370,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a95370 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a954a0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a954a8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a954b0 = BuildSettings::IsPromotedBuild;
  _DAT_146a954b8 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,0,1,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94320);
  return;
}



// FUNCTION 1402dd740 FUN_1402dd740 body=344 status=ok
// SIG undefined FUN_1402dd740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dd740(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82b10) {
    _Init_thread_header(&DAT_146a82b10);
    if (DAT_146a82b10 == -1) {
      FString::PrintfImpl(&DAT_146a82b00,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,
                          L"false");
      atexit((_func_5014 *)&LAB_143e96950);
      _Init_thread_footer(&DAT_146a82b10);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82b08 != 0) {
    puVar1 = DAT_146a82b00;
  }
  FShaderType::FShaderType
            (&DAT_146a954c0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a954c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a955f0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a955f8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a95600 = BuildSettings::IsPromotedBuild;
  _DAT_146a95608 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,0,1,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94330);
  return;
}



// FUNCTION 1402dd8a0 FUN_1402dd8a0 body=344 status=ok
// SIG undefined FUN_1402dd8a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dd8a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82af8) {
    _Init_thread_header(&DAT_146a82af8);
    if (DAT_146a82af8 == -1) {
      FString::PrintfImpl(&DAT_146a82ae8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96970);
      _Init_thread_footer(&DAT_146a82af8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82af0 != 0) {
    puVar1 = DAT_146a82ae8;
  }
  FShaderType::FShaderType
            (&DAT_146a95610,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a95610 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a95740 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a95748 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a95750 = BuildSettings::IsPromotedBuild;
  _DAT_146a95758 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,0,1,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94340);
  return;
}



// FUNCTION 1402dda00 FUN_1402dda00 body=344 status=ok
// SIG undefined FUN_1402dda00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dda00(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82ae0) {
    _Init_thread_header(&DAT_146a82ae0);
    if (DAT_146a82ae0 == -1) {
      FString::PrintfImpl(&DAT_146a82ad0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false",L"false"
                         );
      atexit((_func_5014 *)&LAB_143e96990);
      _Init_thread_footer(&DAT_146a82ae0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82ad8 != 0) {
    puVar1 = DAT_146a82ad0;
  }
  FShaderType::FShaderType
            (&DAT_146a95760,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a95760 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a95890 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a95898 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a958a0 = BuildSettings::IsPromotedBuild;
  _DAT_146a958a8 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,0,1,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94350);
  return;
}



// FUNCTION 1402ddb60 FUN_1402ddb60 body=344 status=ok
// SIG undefined FUN_1402ddb60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ddb60(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82ac8) {
    _Init_thread_header(&DAT_146a82ac8);
    if (DAT_146a82ac8 == -1) {
      FString::PrintfImpl(&DAT_146a82ab8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e969b0);
      _Init_thread_footer(&DAT_146a82ac8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82ac0 != 0) {
    puVar1 = DAT_146a82ab8;
  }
  FShaderType::FShaderType
            (&DAT_146a958b0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a958b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a959e0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a959e8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a959f0 = BuildSettings::IsPromotedBuild;
  _DAT_146a959f8 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,0,0,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94360);
  return;
}



// FUNCTION 1402ddcc0 FUN_1402ddcc0 body=344 status=ok
// SIG undefined FUN_1402ddcc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ddcc0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82ab0) {
    _Init_thread_header(&DAT_146a82ab0);
    if (DAT_146a82ab0 == -1) {
      FString::PrintfImpl(&DAT_146a82aa0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,
                          L"false");
      atexit((_func_5014 *)&LAB_143e969d0);
      _Init_thread_footer(&DAT_146a82ab0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82aa8 != 0) {
    puVar1 = DAT_146a82aa0;
  }
  FShaderType::FShaderType
            (&DAT_146a95a00,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a95a00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a95b30 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a95b38 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a95b40 = BuildSettings::IsPromotedBuild;
  _DAT_146a95b48 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,0,0,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94370);
  return;
}



// FUNCTION 1402dde20 FUN_1402dde20 body=344 status=ok
// SIG undefined FUN_1402dde20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dde20(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82a98) {
    _Init_thread_header(&DAT_146a82a98);
    if (DAT_146a82a98 == -1) {
      FString::PrintfImpl(&DAT_146a82a88,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e969f0);
      _Init_thread_footer(&DAT_146a82a98);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82a90 != 0) {
    puVar1 = DAT_146a82a88;
  }
  FShaderType::FShaderType
            (&DAT_146a95b50,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a95b50 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a95c80 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a95c88 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a95c90 = BuildSettings::IsPromotedBuild;
  _DAT_146a95c98 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,0,0,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94380);
  return;
}



// FUNCTION 1402ddf80 FUN_1402ddf80 body=344 status=ok
// SIG undefined FUN_1402ddf80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ddf80(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82a80) {
    _Init_thread_header(&DAT_146a82a80);
    if (DAT_146a82a80 == -1) {
      FString::PrintfImpl(&DAT_146a82a70,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false",L"false"
                         );
      atexit((_func_5014 *)&LAB_143e96a10);
      _Init_thread_footer(&DAT_146a82a80);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82a78 != 0) {
    puVar1 = DAT_146a82a70;
  }
  FShaderType::FShaderType
            (&DAT_146a95ca0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a95ca0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a95dd0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a95dd8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a95de0 = BuildSettings::IsPromotedBuild;
  _DAT_146a95de8 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,0,0,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94390);
  return;
}



// FUNCTION 1402de0e0 FUN_1402de0e0 body=344 status=ok
// SIG undefined FUN_1402de0e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402de0e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82a68) {
    _Init_thread_header(&DAT_146a82a68);
    if (DAT_146a82a68 == -1) {
      FString::PrintfImpl(&DAT_146a82a58,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96a30);
      _Init_thread_footer(&DAT_146a82a68);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82a60 != 0) {
    puVar1 = DAT_146a82a58;
  }
  FShaderType::FShaderType
            (&DAT_146a95df0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a95df0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a95f20 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a95f28 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a95f30 = BuildSettings::IsPromotedBuild;
  _DAT_146a95f38 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,0,0,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e943a0);
  return;
}



// FUNCTION 1402de240 FUN_1402de240 body=344 status=ok
// SIG undefined FUN_1402de240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402de240(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82a50) {
    _Init_thread_header(&DAT_146a82a50);
    if (DAT_146a82a50 == -1) {
      FString::PrintfImpl(&DAT_146a82a40,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8,L"false"
                         );
      atexit((_func_5014 *)&LAB_143e96a50);
      _Init_thread_footer(&DAT_146a82a50);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82a48 != 0) {
    puVar1 = DAT_146a82a40;
  }
  FShaderType::FShaderType
            (&DAT_146a95f40,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a95f40 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a96070 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a96078 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a96080 = BuildSettings::IsPromotedBuild;
  _DAT_146a96088 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,0,0,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e943b0);
  return;
}



// FUNCTION 1402de3a0 FUN_1402de3a0 body=344 status=ok
// SIG undefined FUN_1402de3a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402de3a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82a38) {
    _Init_thread_header(&DAT_146a82a38);
    if (DAT_146a82a38 == -1) {
      FString::PrintfImpl(&DAT_146a82a28,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,L"false",L"false",L"false",L"false",&DAT_143f600c8
                         );
      atexit((_func_5014 *)&LAB_143e96a70);
      _Init_thread_footer(&DAT_146a82a38);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82a30 != 0) {
    puVar1 = DAT_146a82a28;
  }
  FShaderType::FShaderType
            (&DAT_146a96090,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a96090 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a961c0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a961c8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a961d0 = BuildSettings::IsPromotedBuild;
  _DAT_146a961d8 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,0,0,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e943c0);
  return;
}



// FUNCTION 1402de500 FUN_1402de500 body=344 status=ok
// SIG undefined FUN_1402de500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402de500(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82a20) {
    _Init_thread_header(&DAT_146a82a20);
    if (DAT_146a82a20 == -1) {
      FString::PrintfImpl(&DAT_146a82a10,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",&DAT_143f600c8,L"false",L"false",L"false",L"false",L"false");
      atexit((_func_5014 *)&LAB_143e96a90);
      _Init_thread_footer(&DAT_146a82a20);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82a18 != 0) {
    puVar1 = DAT_146a82a10;
  }
  FShaderType::FShaderType
            (&DAT_146a961e0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a961e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a96310 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a96318 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a96320 = BuildSettings::IsPromotedBuild;
  _DAT_146a96328 =
       TReflectionEnvironmentSkyLightingPS<0,0,1,0,0,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e943d0);
  return;
}



// FUNCTION 1402de660 FUN_1402de660 body=344 status=ok
// SIG undefined FUN_1402de660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402de660(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82a08) {
    _Init_thread_header(&DAT_146a82a08);
    if (DAT_146a82a08 == -1) {
      FString::PrintfImpl(&DAT_146a829f8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,&DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96ab0);
      _Init_thread_footer(&DAT_146a82a08);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82a00 != 0) {
    puVar1 = DAT_146a829f8;
  }
  FShaderType::FShaderType
            (&DAT_146a96330,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a96330 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a96460 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a96468 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a96470 = BuildSettings::IsPromotedBuild;
  _DAT_146a96478 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,1,1,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e943e0);
  return;
}



// FUNCTION 1402de7c0 FUN_1402de7c0 body=344 status=ok
// SIG undefined FUN_1402de7c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402de7c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a829f0) {
    _Init_thread_header(&DAT_146a829f0);
    if (DAT_146a829f0 == -1) {
      FString::PrintfImpl(&DAT_146a829e0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8,L"false");
      atexit((_func_5014 *)&LAB_143e96ad0);
      _Init_thread_footer(&DAT_146a829f0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a829e8 != 0) {
    puVar1 = DAT_146a829e0;
  }
  FShaderType::FShaderType
            (&DAT_146a96480,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a96480 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a965b0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a965b8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a965c0 = BuildSettings::IsPromotedBuild;
  _DAT_146a965c8 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,1,1,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e943f0);
  return;
}



// FUNCTION 1402de920 FUN_1402de920 body=344 status=ok
// SIG undefined FUN_1402de920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402de920(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a829d8) {
    _Init_thread_header(&DAT_146a829d8);
    if (DAT_146a829d8 == -1) {
      FString::PrintfImpl(&DAT_146a829c8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96af0);
      _Init_thread_footer(&DAT_146a829d8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a829d0 != 0) {
    puVar1 = DAT_146a829c8;
  }
  FShaderType::FShaderType
            (&DAT_146a965d0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a965d0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a96700 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a96708 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a96710 = BuildSettings::IsPromotedBuild;
  _DAT_146a96718 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,1,1,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94400);
  return;
}



// FUNCTION 1402dea80 FUN_1402dea80 body=344 status=ok
// SIG undefined FUN_1402dea80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dea80(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a829c0) {
    _Init_thread_header(&DAT_146a829c0);
    if (DAT_146a829c0 == -1) {
      FString::PrintfImpl(&DAT_146a829b0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,L"false",
                          L"false");
      atexit((_func_5014 *)&LAB_143e96b10);
      _Init_thread_footer(&DAT_146a829c0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a829b8 != 0) {
    puVar1 = DAT_146a829b0;
  }
  FShaderType::FShaderType
            (&DAT_146a96720,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a96720 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a96850 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a96858 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a96860 = BuildSettings::IsPromotedBuild;
  _DAT_146a96868 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,1,1,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94410);
  return;
}



// FUNCTION 1402debe0 FUN_1402debe0 body=344 status=ok
// SIG undefined FUN_1402debe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402debe0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a829a8) {
    _Init_thread_header(&DAT_146a829a8);
    if (DAT_146a829a8 == -1) {
      FString::PrintfImpl(&DAT_146a82998,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96b30);
      _Init_thread_footer(&DAT_146a829a8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a829a0 != 0) {
    puVar1 = DAT_146a82998;
  }
  FShaderType::FShaderType
            (&DAT_146a96870,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a96870 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a969a0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a969a8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a969b0 = BuildSettings::IsPromotedBuild;
  _DAT_146a969b8 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,1,1,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94420);
  return;
}



// FUNCTION 1402ded40 FUN_1402ded40 body=344 status=ok
// SIG undefined FUN_1402ded40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ded40(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82990) {
    _Init_thread_header(&DAT_146a82990);
    if (DAT_146a82990 == -1) {
      FString::PrintfImpl(&DAT_146a82980,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",&DAT_143f600c8,
                          L"false");
      atexit((_func_5014 *)&LAB_143e96b50);
      _Init_thread_footer(&DAT_146a82990);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82988 != 0) {
    puVar1 = DAT_146a82980;
  }
  FShaderType::FShaderType
            (&DAT_146a969c0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a969c0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a96af0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a96af8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a96b00 = BuildSettings::IsPromotedBuild;
  _DAT_146a96b08 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,1,1,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94430);
  return;
}



// FUNCTION 1402deea0 FUN_1402deea0 body=344 status=ok
// SIG undefined FUN_1402deea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402deea0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82978) {
    _Init_thread_header(&DAT_146a82978);
    if (DAT_146a82978 == -1) {
      FString::PrintfImpl(&DAT_146a82968,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96b70);
      _Init_thread_footer(&DAT_146a82978);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82970 != 0) {
    puVar1 = DAT_146a82968;
  }
  FShaderType::FShaderType
            (&DAT_146a96b10,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a96b10 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a96c40 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a96c48 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a96c50 = BuildSettings::IsPromotedBuild;
  _DAT_146a96c58 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,1,1,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94440);
  return;
}



// FUNCTION 1402df000 FUN_1402df000 body=344 status=ok
// SIG undefined FUN_1402df000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402df000(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82960) {
    _Init_thread_header(&DAT_146a82960);
    if (DAT_146a82960 == -1) {
      FString::PrintfImpl(&DAT_146a82950,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",L"false",L"false"
                         );
      atexit((_func_5014 *)&LAB_143e96b90);
      _Init_thread_footer(&DAT_146a82960);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82958 != 0) {
    puVar1 = DAT_146a82950;
  }
  FShaderType::FShaderType
            (&DAT_146a96c60,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a96c60 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a96d90 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a96d98 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a96da0 = BuildSettings::IsPromotedBuild;
  _DAT_146a96da8 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,1,1,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94450);
  return;
}



// FUNCTION 1402df160 FUN_1402df160 body=344 status=ok
// SIG undefined FUN_1402df160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402df160(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82948) {
    _Init_thread_header(&DAT_146a82948);
    if (DAT_146a82948 == -1) {
      FString::PrintfImpl(&DAT_146a82938,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96bb0);
      _Init_thread_footer(&DAT_146a82948);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82940 != 0) {
    puVar1 = DAT_146a82938;
  }
  FShaderType::FShaderType
            (&DAT_146a96db0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a96db0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a96ee0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a96ee8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a96ef0 = BuildSettings::IsPromotedBuild;
  _DAT_146a96ef8 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,1,0,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94460);
  return;
}



// FUNCTION 1402df2c0 FUN_1402df2c0 body=344 status=ok
// SIG undefined FUN_1402df2c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402df2c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82930) {
    _Init_thread_header(&DAT_146a82930);
    if (DAT_146a82930 == -1) {
      FString::PrintfImpl(&DAT_146a82920,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,&DAT_143f600c8,
                          L"false");
      atexit((_func_5014 *)&LAB_143e96bd0);
      _Init_thread_footer(&DAT_146a82930);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82928 != 0) {
    puVar1 = DAT_146a82920;
  }
  FShaderType::FShaderType
            (&DAT_146a96f00,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a96f00 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a97030 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a97038 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a97040 = BuildSettings::IsPromotedBuild;
  _DAT_146a97048 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,1,0,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94470);
  return;
}



// FUNCTION 1402df420 FUN_1402df420 body=344 status=ok
// SIG undefined FUN_1402df420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402df420(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82918) {
    _Init_thread_header(&DAT_146a82918);
    if (DAT_146a82918 == -1) {
      FString::PrintfImpl(&DAT_146a82908,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96bf0);
      _Init_thread_footer(&DAT_146a82918);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82910 != 0) {
    puVar1 = DAT_146a82908;
  }
  FShaderType::FShaderType
            (&DAT_146a97050,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a97050 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a97180 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a97188 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a97190 = BuildSettings::IsPromotedBuild;
  _DAT_146a97198 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,1,0,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94480);
  return;
}



// FUNCTION 1402df580 FUN_1402df580 body=344 status=ok
// SIG undefined FUN_1402df580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402df580(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82900) {
    _Init_thread_header(&DAT_146a82900);
    if (DAT_146a82900 == -1) {
      FString::PrintfImpl(&DAT_146a828f0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,L"false",L"false"
                         );
      atexit((_func_5014 *)&LAB_143e96c10);
      _Init_thread_footer(&DAT_146a82900);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a828f8 != 0) {
    puVar1 = DAT_146a828f0;
  }
  FShaderType::FShaderType
            (&DAT_146a971a0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a971a0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a972d0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a972d8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a972e0 = BuildSettings::IsPromotedBuild;
  _DAT_146a972e8 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,1,0,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94490);
  return;
}



// FUNCTION 1402df6e0 FUN_1402df6e0 body=344 status=ok
// SIG undefined FUN_1402df6e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402df6e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a828e8) {
    _Init_thread_header(&DAT_146a828e8);
    if (DAT_146a828e8 == -1) {
      FString::PrintfImpl(&DAT_146a828d8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96c30);
      _Init_thread_footer(&DAT_146a828e8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a828e0 != 0) {
    puVar1 = DAT_146a828d8;
  }
  FShaderType::FShaderType
            (&DAT_146a972f0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a972f0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a97420 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a97428 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a97430 = BuildSettings::IsPromotedBuild;
  _DAT_146a97438 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,1,0,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e944a0);
  return;
}



// FUNCTION 1402df840 FUN_1402df840 body=344 status=ok
// SIG undefined FUN_1402df840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402df840(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a828d0) {
    _Init_thread_header(&DAT_146a828d0);
    if (DAT_146a828d0 == -1) {
      FString::PrintfImpl(&DAT_146a828c0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",&DAT_143f600c8,L"false",L"false",&DAT_143f600c8,L"false"
                         );
      atexit((_func_5014 *)&LAB_143e96c50);
      _Init_thread_footer(&DAT_146a828d0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a828c8 != 0) {
    puVar1 = DAT_146a828c0;
  }
  FShaderType::FShaderType
            (&DAT_146a97440,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a97440 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a97570 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a97578 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a97580 = BuildSettings::IsPromotedBuild;
  _DAT_146a97588 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,1,0,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e944b0);
  return;
}



// FUNCTION 1402df9a0 FUN_1402df9a0 body=344 status=ok
// SIG undefined FUN_1402df9a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402df9a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a828b8) {
    _Init_thread_header(&DAT_146a828b8);
    if (DAT_146a828b8 == -1) {
      FString::PrintfImpl(&DAT_146a828a8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",&DAT_143f600c8,L"false",L"false",L"false",&DAT_143f600c8
                         );
      atexit((_func_5014 *)&LAB_143e96c70);
      _Init_thread_footer(&DAT_146a828b8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a828b0 != 0) {
    puVar1 = DAT_146a828a8;
  }
  FShaderType::FShaderType
            (&DAT_146a97590,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a97590 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a976c0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a976c8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a976d0 = BuildSettings::IsPromotedBuild;
  _DAT_146a976d8 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,1,0,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e944c0);
  return;
}



// FUNCTION 1402dfb00 FUN_1402dfb00 body=344 status=ok
// SIG undefined FUN_1402dfb00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dfb00(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a828a0) {
    _Init_thread_header(&DAT_146a828a0);
    if (DAT_146a828a0 == -1) {
      FString::PrintfImpl(&DAT_146a82890,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",&DAT_143f600c8,L"false",L"false",L"false",L"false");
      atexit((_func_5014 *)&LAB_143e96c90);
      _Init_thread_footer(&DAT_146a828a0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82898 != 0) {
    puVar1 = DAT_146a82890;
  }
  FShaderType::FShaderType
            (&DAT_146a976e0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a976e0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a97810 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a97818 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a97820 = BuildSettings::IsPromotedBuild;
  _DAT_146a97828 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,1,0,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e944d0);
  return;
}



// FUNCTION 1402dfc60 FUN_1402dfc60 body=344 status=ok
// SIG undefined FUN_1402dfc60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dfc60(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82888) {
    _Init_thread_header(&DAT_146a82888);
    if (DAT_146a82888 == -1) {
      FString::PrintfImpl(&DAT_146a82878,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96cb0);
      _Init_thread_footer(&DAT_146a82888);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82880 != 0) {
    puVar1 = DAT_146a82878;
  }
  FShaderType::FShaderType
            (&DAT_146a97830,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a97830 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a97960 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a97968 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a97970 = BuildSettings::IsPromotedBuild;
  _DAT_146a97978 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,0,1,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e944e0);
  return;
}



// FUNCTION 1402dfdc0 FUN_1402dfdc0 body=344 status=ok
// SIG undefined FUN_1402dfdc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dfdc0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82870) {
    _Init_thread_header(&DAT_146a82870);
    if (DAT_146a82870 == -1) {
      FString::PrintfImpl(&DAT_146a82860,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,&DAT_143f600c8,
                          L"false");
      atexit((_func_5014 *)&LAB_143e96cd0);
      _Init_thread_footer(&DAT_146a82870);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82868 != 0) {
    puVar1 = DAT_146a82860;
  }
  FShaderType::FShaderType
            (&DAT_146a97980,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a97980 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a97ab0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a97ab8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a97ac0 = BuildSettings::IsPromotedBuild;
  _DAT_146a97ac8 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,0,1,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e944f0);
  return;
}



// FUNCTION 1402dff20 FUN_1402dff20 body=344 status=ok
// SIG undefined FUN_1402dff20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402dff20(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82858) {
    _Init_thread_header(&DAT_146a82858);
    if (DAT_146a82858 == -1) {
      FString::PrintfImpl(&DAT_146a82848,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96cf0);
      _Init_thread_footer(&DAT_146a82858);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82850 != 0) {
    puVar1 = DAT_146a82848;
  }
  FShaderType::FShaderType
            (&DAT_146a97ad0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a97ad0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a97c00 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a97c08 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a97c10 = BuildSettings::IsPromotedBuild;
  _DAT_146a97c18 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,0,1,1,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94500);
  return;
}



// FUNCTION 1402e0080 FUN_1402e0080 body=344 status=ok
// SIG undefined FUN_1402e0080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e0080(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82840) {
    _Init_thread_header(&DAT_146a82840);
    if (DAT_146a82840 == -1) {
      FString::PrintfImpl(&DAT_146a82830,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,L"false",L"false"
                         );
      atexit((_func_5014 *)&LAB_143e96d10);
      _Init_thread_footer(&DAT_146a82840);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82838 != 0) {
    puVar1 = DAT_146a82830;
  }
  FShaderType::FShaderType
            (&DAT_146a97c20,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a97c20 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a97d50 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a97d58 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a97d60 = BuildSettings::IsPromotedBuild;
  _DAT_146a97d68 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,0,1,1,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94510);
  return;
}



// FUNCTION 1402e01e0 FUN_1402e01e0 body=344 status=ok
// SIG undefined FUN_1402e01e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e01e0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82828) {
    _Init_thread_header(&DAT_146a82828);
    if (DAT_146a82828 == -1) {
      FString::PrintfImpl(&DAT_146a82818,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96d30);
      _Init_thread_footer(&DAT_146a82828);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82820 != 0) {
    puVar1 = DAT_146a82818;
  }
  FShaderType::FShaderType
            (&DAT_146a97d70,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a97d70 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a97ea0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a97ea8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a97eb0 = BuildSettings::IsPromotedBuild;
  _DAT_146a97eb8 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,0,1,0,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94520);
  return;
}



// FUNCTION 1402e0340 FUN_1402e0340 body=344 status=ok
// SIG undefined FUN_1402e0340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e0340(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a82810) {
    _Init_thread_header(&DAT_146a82810);
    if (DAT_146a82810 == -1) {
      FString::PrintfImpl(&DAT_146a82800,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",L"false",&DAT_143f600c8,L"false",&DAT_143f600c8,L"false"
                         );
      atexit((_func_5014 *)&LAB_143e96d50);
      _Init_thread_footer(&DAT_146a82810);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a82808 != 0) {
    puVar1 = DAT_146a82800;
  }
  FShaderType::FShaderType
            (&DAT_146a97ec0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a97ec0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a97ff0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a97ff8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a98000 = BuildSettings::IsPromotedBuild;
  _DAT_146a98008 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,0,1,0,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94530);
  return;
}



// FUNCTION 1402e04a0 FUN_1402e04a0 body=344 status=ok
// SIG undefined FUN_1402e04a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e04a0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a827f8) {
    _Init_thread_header(&DAT_146a827f8);
    if (DAT_146a827f8 == -1) {
      FString::PrintfImpl(&DAT_146a827e8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",L"false",&DAT_143f600c8,L"false",L"false",&DAT_143f600c8
                         );
      atexit((_func_5014 *)&LAB_143e96d70);
      _Init_thread_footer(&DAT_146a827f8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a827f0 != 0) {
    puVar1 = DAT_146a827e8;
  }
  FShaderType::FShaderType
            (&DAT_146a98010,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a98010 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a98140 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a98148 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a98150 = BuildSettings::IsPromotedBuild;
  _DAT_146a98158 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,0,1,0,0,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94540);
  return;
}



// FUNCTION 1402e0600 FUN_1402e0600 body=344 status=ok
// SIG undefined FUN_1402e0600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e0600(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a827e0) {
    _Init_thread_header(&DAT_146a827e0);
    if (DAT_146a827e0 == -1) {
      FString::PrintfImpl(&DAT_146a827d0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",L"false",&DAT_143f600c8,L"false",L"false",L"false");
      atexit((_func_5014 *)&LAB_143e96d90);
      _Init_thread_footer(&DAT_146a827e0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a827d8 != 0) {
    puVar1 = DAT_146a827d0;
  }
  FShaderType::FShaderType
            (&DAT_146a98160,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a98160 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a98290 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a98298 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a982a0 = BuildSettings::IsPromotedBuild;
  _DAT_146a982a8 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,0,1,0,0,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94550);
  return;
}



// FUNCTION 1402e0760 FUN_1402e0760 body=344 status=ok
// SIG undefined FUN_1402e0760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e0760(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a827c8) {
    _Init_thread_header(&DAT_146a827c8);
    if (DAT_146a827c8 == -1) {
      FString::PrintfImpl(&DAT_146a827b8,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,
                          &DAT_143f600c8);
      atexit((_func_5014 *)&LAB_143e96db0);
      _Init_thread_footer(&DAT_146a827c8);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a827c0 != 0) {
    puVar1 = DAT_146a827b8;
  }
  FShaderType::FShaderType
            (&DAT_146a982b0,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a982b0 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a983e0 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a983e8 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a983f0 = BuildSettings::IsPromotedBuild;
  _DAT_146a983f8 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,0,0,1,1,1>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94560);
  return;
}



// FUNCTION 1402e08c0 FUN_1402e08c0 body=344 status=ok
// SIG undefined FUN_1402e08c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e08c0(void)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a827b0) {
    _Init_thread_header(&DAT_146a827b0);
    if (DAT_146a827b0 == -1) {
      FString::PrintfImpl(&DAT_146a827a0,
                          L"TReflectionEnvironmentSkyLightingPS(%s,%s,%s,%s,%s,%s,%s,%s)",L"false",
                          L"false",L"false",L"false",L"false",&DAT_143f600c8,&DAT_143f600c8,L"false"
                         );
      atexit((_func_5014 *)&LAB_143e96dd0);
      _Init_thread_footer(&DAT_146a827b0);
    }
  }
  puVar1 = &DAT_143f3eda8;
  if (DAT_146a827a8 != 0) {
    puVar1 = DAT_146a827a0;
  }
  FShaderType::FShaderType
            (&DAT_146a98400,0,puVar1,L"/Engine/Private/ReflectionEnvironmentPixelShader.usf",
             L"ReflectionEnvironmentSkyLighting",3,1,FUN_141d25580,
             AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_146a98400 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_146a98530 =
       FEncodedSimpleElement<FSimpleElementDistanceFieldGammaPS,1>::ConstructCompiledInstance;
  _DAT_146a98538 = FClearReplacementPS::ShouldCompilePermutation;
  _DAT_146a98540 = BuildSettings::IsPromotedBuild;
  _DAT_146a98548 =
       TReflectionEnvironmentSkyLightingPS<0,0,0,0,0,1,1,0>::ModifyCompilationEnvironment;
  atexit((_func_5014 *)&LAB_143e94570);
  return;
}


