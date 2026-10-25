// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141a13300 FUN_141a13300 body=265 status=ok
// SIG undefined FUN_141a13300(void)

undefined8 * FUN_141a13300(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91c50;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xce) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"ClearValue",1);
    FShaderParameter::Bind((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"MinBounds",1);
    FShaderParameter::Bind((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"MaxBounds",1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91c80;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"ClearResource",1)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a13410 FUN_141a13410 body=129 status=ok
// SIG undefined FUN_141a13410(void)

undefined8 * FUN_141a13410(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d91d50;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"ClearResource",1)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a134a0 FUN_141a134a0 body=135 status=ok
// SIG undefined FUN_141a134a0(void)

undefined8 * FUN_141a134a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d910f0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xce) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"ClearValue",1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91ba8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a13530 FUN_141a13530 body=100 status=ok
// SIG undefined FUN_141a13530(void)

undefined8 * FUN_141a13530(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d91c20;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a135a0 FUN_141a135a0 body=133 status=ok
// SIG undefined FUN_141a135a0(void)

undefined8 * FUN_141a135a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d91b48;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xdc) = 0;
    FShaderParameter::Bind(puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"Depth",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a13630 FUN_141a13630 body=221 status=ok
// SIG undefined FUN_141a13630(void)

undefined8 * FUN_141a13630(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91ad0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xca) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    FShaderParameter::Bind
              ((undefined4 *)((longlong)puVar1 + 0xc6),*(undefined8 *)(param_1 + 0x18),L"MinBounds",
               1);
    FShaderParameter::Bind((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"MaxBounds",1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91b00;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xdc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a13710 FUN_141a13710 body=113 status=ok
// SIG undefined FUN_141a13710(void)

undefined8 * FUN_141a13710(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d91aa0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xdc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a13790 FUN_141a13790 body=77 status=ok
// SIG undefined FUN_141a13790(void)

undefined8 * FUN_141a13790(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xc0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d919f8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a137e0 ConstructCompiledInstance body=157 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FClearBufferReplacementCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d911d8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc6) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"ClearBufferCSParams",1);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"ClearBufferRW",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a13880 ConstructCompiledInstance body=112 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FClearReplacementPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91120;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"ClearColor",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a138f0 ConstructCompiledInstance body=208 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FClearTexture2DReplacementScissorCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91168;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xce) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"ClearColor",1);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"TargetBounds",1);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"ClearTextureRW",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a139c0 FUN_141a139c0 body=258 status=ok
// SIG undefined FUN_141a139c0(void)

undefined8 * FUN_141a139c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91ea8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd2) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"Mode",1);
    FShaderParameter::Bind((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"Strength",1);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"SourceTexture",1);
    FShaderResourceParameter::Bind(puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"DestTexture",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a13ad0 ConstructCompiledInstance body=290 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FFillTextureCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91d80;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xd6) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xda) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"FillValue",1);
    FShaderParameter::Bind((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"Params0",1);
    FShaderParameter::Bind((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"Params1",1);
    FShaderParameter::Bind((longlong)puVar1 + 0xd2,*(undefined8 *)(param_1 + 0x18),L"Params2",0);
    FShaderResourceParameter::Bind(puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"FillTexture",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a13c00 ConstructCompiledInstance body=150 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FHdrCustomResolveFMask2xPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91290;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"InTexture",1);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"InTextureSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a13ca0 ConstructCompiledInstance body=198 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FOculusCubemapPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91300;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"InTextureCube",1)
    ;
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"InTextureSampler",0);
    FShaderParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"CubeFaceIndex",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a13d70 FUN_141a13d70 body=332 status=ok
// SIG undefined FUN_141a13d70(void)

undefined8 * FUN_141a13d70(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91598;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd6) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xde) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"TargetHeight",1);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"ScaleFactorX",1);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"ScaleFactorY",1);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xd2,*(undefined8 *)(param_1 + 0x18),L"TextureYOffset",1);
    FShaderResourceParameter::Bind(puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"SrcTexture",1);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xdc,*(undefined8 *)(param_1 + 0x18),L"OutTexture",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a13ec0 ConstructCompiledInstance body=108 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FResolveDepth2XPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d913d8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"UnresolvedSurface",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a13f30 ConstructCompiledInstance body=108 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FResolveDepthNonMSPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d913d8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"UnresolvedSurfaceNonMS",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a13fa0 ConstructCompiledInstance body=160 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FResolveSingleSamplePS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91498;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"UnresolvedSurface",1);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"SingleSampleIndex",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a14040 FUN_141a14040 body=164 status=ok
// SIG undefined FUN_141a14040(void)

undefined8 * FUN_141a14040(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d914f0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xca) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"PositionMinMax",1);
    FShaderParameter::Bind((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"UVMinMax",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a140f0 FUN_141a140f0 body=73 status=ok
// SIG undefined FUN_141a140f0(void)

undefined8 * FUN_141a140f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d911d8;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a14140 FUN_141a14140 body=86 status=ok
// SIG undefined FUN_141a14140(void)

undefined8 * FUN_141a14140(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d8e6a0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a141a0 FUN_141a141a0 body=86 status=ok
// SIG undefined FUN_141a141a0(void)

undefined8 * FUN_141a141a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d91c80;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a14200 FUN_141a14200 body=86 status=ok
// SIG undefined FUN_141a14200(void)

undefined8 * FUN_141a14200(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d91d50;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a14260 FUN_141a14260 body=80 status=ok
// SIG undefined FUN_141a14260(void)

undefined8 * FUN_141a14260(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d91ba8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a142b0 FUN_141a142b0 body=80 status=ok
// SIG undefined FUN_141a142b0(void)

undefined8 * FUN_141a142b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d91c20;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a14300 FUN_141a14300 body=93 status=ok
// SIG undefined FUN_141a14300(void)

undefined8 * FUN_141a14300(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d91b48;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xdc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a14360 FUN_141a14360 body=93 status=ok
// SIG undefined FUN_141a14360(void)

undefined8 * FUN_141a14360(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d91b00;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xdc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a143c0 FUN_141a143c0 body=93 status=ok
// SIG undefined FUN_141a143c0(void)

undefined8 * FUN_141a143c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d91aa0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xdc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a14420 FUN_141a14420 body=57 status=ok
// SIG undefined FUN_141a14420(void)

undefined8 * FUN_141a14420(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xc0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d919f8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a14460 ConstructSerializedInstance body=72 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FClearReplacementPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91120;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a144b0 FUN_141a144b0 body=73 status=ok
// SIG undefined FUN_141a144b0(void)

undefined8 * FUN_141a144b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91168;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a14500 FUN_141a14500 body=79 status=ok
// SIG undefined FUN_141a14500(void)

undefined8 * FUN_141a14500(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91ea8;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a14550 FUN_141a14550 body=86 status=ok
// SIG undefined FUN_141a14550(void)

undefined8 * FUN_141a14550(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91d80;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a145b0 FUN_141a145b0 body=66 status=ok
// SIG undefined FUN_141a145b0(void)

undefined8 * FUN_141a145b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91290;
    puVar1[0x18] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a14600 FUN_141a14600 body=79 status=ok
// SIG undefined FUN_141a14600(void)

undefined8 * FUN_141a14600(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91300;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a14650 FUN_141a14650 body=87 status=ok
// SIG undefined FUN_141a14650(void)

undefined8 * FUN_141a14650(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91598;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a146b0 ConstructSerializedInstance body=65 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FResolveDepth2XPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d913d8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a14700 FUN_141a14700 body=73 status=ok
// SIG undefined FUN_141a14700(void)

undefined8 * FUN_141a14700(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91498;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a14750 FUN_141a14750 body=72 status=ok
// SIG undefined FUN_141a14750(void)

undefined8 * FUN_141a14750(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d914f0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a147a0 ConstructUniformBufferParameter body=34 status=ok
// SIG undefined ConstructUniformBufferParameter(void)

void FManaUniformBufferNV12::ConstructUniformBufferParameter(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    return;
  }
  return;
}



// FUNCTION 141a147d0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x100;
  local_84 = 1;
  local_80 = 0x1000001;
  local_7c = 0x1000000;
  local_78 = 0x10000;
  local_74 = 0x10000;
  local_70 = 0x100;
  local_6c = 0x100;
  local_68 = 1;
  local_64 = 0x1000001;
  local_60 = 0x1000000;
  local_5c = 0x10000;
  local_58 = 0x10000;
  local_54 = 0x100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141a148a0 DrawClearQuadMRT body=276 status=ok
// SIG undefined DrawClearQuadMRT(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void DrawClearQuadMRT(undefined8 param_1)

{
  undefined1 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined1 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_70 = in_stack_00000040;
  local_78 = in_stack_00000038;
  local_80 = in_stack_00000030;
  local_88 = CONCAT31(local_88._1_3_,in_stack_00000028);
  FUN_141a128b0();
  local_60 = in_stack_00000030;
  local_50 = in_stack_00000030;
  local_40 = in_stack_00000030;
  local_30 = in_stack_00000030;
  local_68 = 0xbf800000;
  local_64 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_4c = 0x3f800000;
  local_48 = 0xbf800000;
  local_44 = 0xbf800000;
  local_3c = 0x3f800000;
  local_38 = 0x3f800000;
  local_34 = 0xbf800000;
  local_2c = 0x3f800000;
  local_88 = 0x10;
  FUN_141a14d80(param_1,1,2,&local_68);
  return;
}



// FUNCTION 141a149c0 FUN_141a149c0 body=935 status=ok
// SIG undefined FUN_141a149c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a149c0(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  undefined1 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined1 in_stack_00000038;
  undefined4 in_stack_00000040;
  int iStack0000000000000048;
  int iStack000000000000004c;
  int *in_stack_00000050;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined1 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  float local_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float local_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  if ((((*in_stack_00000050 != DAT_1468b5ca0) || (in_stack_00000050[1] != DAT_1468b5ca4)) ||
      (in_stack_00000050[2] != iStack0000000000000048)) ||
     (in_stack_00000050[3] != iStack000000000000004c)) {
    local_180 = in_stack_00000040;
    local_188 = in_stack_00000038;
    local_190 = in_stack_00000030;
    local_198 = CONCAT31(local_198._1_3_,in_stack_00000028);
    FUN_141a128b0();
    if (0 < in_stack_00000050[2] - *in_stack_00000050) {
      if (0 < in_stack_00000050[3] - in_stack_00000050[1]) {
        local_128 = 0x3f800000;
        uStack_124 = 0x3f800000;
        uStack_11c = 0x3f800000;
        uStack_15c = 0x3f800000;
        uStack_16c = 0x3f800000;
        local_138 = 0xbf800000;
        uStack_134 = 0x3f800000;
        uStack_12c = 0x3f800000;
        local_118 = 0x3f800000;
        uStack_114 = 0xbf800000;
        uStack_10c = 0x3f800000;
        uStack_14c = 0x3f800000;
        local_108 = 0xbf800000;
        uStack_104 = 0xbf800000;
        uStack_fc = 0x3f800000;
        uStack_13c = 0x3f800000;
        fVar2 = (float)(in_stack_00000050[3] + -1) * (1.0 / (float)iStack000000000000004c);
        fVar1 = (float)in_stack_00000050[1] * (1.0 / (float)iStack000000000000004c);
        fStack_e4 = 1.0 - (fVar1 + fVar1);
        local_d8 = 0x3f800000;
        uStack_d4 = 0x3f800000;
        uStack_d0 = in_stack_00000030;
        uStack_cc = 0x3f800000;
        local_c8 = (float)(in_stack_00000050[2] + -1) * (2.0 / (float)iStack0000000000000048) - 1.0;
        local_f8 = 0xbf800000;
        uStack_f4 = 0x3f800000;
        uStack_f0 = in_stack_00000030;
        uStack_ec = 0x3f800000;
        local_e8 = (float)*in_stack_00000050 * (2.0 / (float)iStack0000000000000048) - 1.0;
        fStack_a4 = 1.0 - (fVar2 + fVar2);
        local_b8 = 0x3f800000;
        uStack_b4 = 0xbf800000;
        uStack_b0 = in_stack_00000030;
        uStack_ac = 0x3f800000;
        uStack_c0 = in_stack_00000030;
        uStack_bc = 0x3f800000;
        uStack_e0 = in_stack_00000030;
        uStack_dc = 0x3f800000;
        uStack_a0 = in_stack_00000030;
        uStack_9c = 0x3f800000;
        local_98 = 0xbf800000;
        uStack_94 = 0xbf800000;
        uStack_90 = in_stack_00000030;
        uStack_8c = 0x3f800000;
        local_78 = 0xbf800000;
        uStack_74 = 0x3f800000;
        uStack_70 = in_stack_00000030;
        uStack_6c = 0x3f800000;
        uStack_60 = in_stack_00000030;
        uStack_5c = 0x3f800000;
        uStack_80 = in_stack_00000030;
        uStack_7c = 0x3f800000;
        local_198 = 0x10;
        fStack_c4 = fStack_e4;
        local_a8 = local_c8;
        local_88 = local_e8;
        fStack_84 = fStack_a4;
        local_68 = local_e8;
        fStack_64 = fStack_e4;
        FUN_141a14d80(param_1,1,8,&local_f8);
        return;
      }
    }
    uStack_170 = in_stack_00000030;
    uStack_160 = in_stack_00000030;
    uStack_150 = in_stack_00000030;
    uStack_140 = in_stack_00000030;
    local_178 = 0xbf800000;
    uStack_174 = 0x3f800000;
    uStack_16c = 0x3f800000;
    local_168 = 0x3f800000;
    uStack_164 = 0x3f800000;
    uStack_15c = 0x3f800000;
    local_158 = 0xbf800000;
    uStack_154 = 0xbf800000;
    uStack_14c = 0x3f800000;
    local_148 = 0x3f800000;
    uStack_144 = 0xbf800000;
    uStack_13c = 0x3f800000;
    local_198 = 0x10;
    FUN_141a14d80(param_1,1,2,&local_178);
  }
  return;
}



// FUNCTION 141a14d80 FUN_141a14d80 body=492 status=ok
// SIG undefined FUN_141a14d80(void)

void FUN_141a14d80(longlong param_1,int param_2,int param_3,void *param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  void *_Dst;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  
  switch(param_2) {
  case 0:
    iVar8 = param_3 * 3;
    break;
  case 1:
    iVar8 = param_3 + 2;
    break;
  case 2:
    iVar8 = param_3 * 2;
    break;
  default:
    LowLevelFatalErrorHandler("Unknown",0x3a6,L"Unknown primitive type: %u",param_2);
    FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x3a6,L"Unknown primitive type: %u",param_2);
    iVar8 = 0;
    break;
  case 4:
    iVar8 = param_3;
    break;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
    iVar8 = (param_2 + -5) * param_3;
  }
  uVar10 = iVar8 * param_5;
  _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
  uVar6 = (longlong)(int)uVar10 + (longlong)_Dst;
  if (*(ulonglong *)(param_1 + 0x38) < uVar6) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar10 + 0x10);
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar6 = (longlong)(int)uVar10 + (longlong)_Dst;
  }
  *(ulonglong *)(param_1 + 0x30) = uVar6;
  *(int *)(param_1 + 0x170) = param_2;
  *(int *)(param_1 + 0x174) = param_3;
  *(int *)(param_1 + 0x178) = iVar8;
  *(int *)(param_1 + 0x17c) = param_5;
  *(void **)(param_1 + 0x180) = _Dst;
  _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar10);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar7;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar9;
  uVar5 = *(undefined8 *)(param_1 + 0x180);
  uVar1 = *(undefined4 *)(param_1 + 0x178);
  uVar2 = *(undefined4 *)(param_1 + 0x17c);
  uVar3 = *(undefined4 *)(param_1 + 0x174);
  uVar4 = *(undefined4 *)(param_1 + 0x170);
  *(undefined8 **)(param_1 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d91e10;
  *(undefined4 *)(puVar9 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar9 + 0x14) = uVar3;
  *(undefined4 *)(puVar9 + 3) = uVar1;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar2;
  puVar9[4] = uVar5;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  return;
}



// FUNCTION 141a14fc0 FUN_141a14fc0 body=28 status=ok
// SIG undefined FUN_141a14fc0(void)

void FUN_141a14fc0(longlong param_1)

{
  FUN_141ec28d0();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x28);
  return;
}



// FUNCTION 141a15060 FUN_141a15060 body=383 status=ok
// SIG undefined FUN_141a15060(void)

void FUN_141a15060(longlong param_1,longlong param_2,undefined8 param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 1;
  local_res8 = param_3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *puVar6 = local_res8;
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar5 + 2) = 1;
  puVar5[3] = puVar6;
  *(undefined4 *)(puVar5 + 4) = 2;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 3;
  puVar5[5] = 0;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_res8 = 0;
  if (*(short *)(param_1 + 200) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc6);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d91e40;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  return;
}



// FUNCTION 141a151e0 FUN_141a151e0 body=320 status=ok
// SIG undefined FUN_141a151e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141a151e0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_1469fc450 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141a15820;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_1469fc450 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_1469fc450 = 0;
        return _DAT_00000030;
      }
      DAT_1469fc450 =
           TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_1469fc450 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_1469fc450 != 0) {
      lVar7 = DAT_1469fc450;
    }
    DAT_1469fc450 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_1469fc450 + 0x30);
}



// FUNCTION 141a15320 FUN_141a15320 body=320 status=ok
// SIG undefined FUN_141a15320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141a15320(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_1469fc448 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141a15830;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_1469fc448 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_1469fc448 = 0;
        return _DAT_00000030;
      }
      DAT_1469fc448 =
           TStaticStateRHI<TStaticDepthStencilState<1,7,1,7,2,2,2,0,7,2,2,2,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_1469fc448 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,7,1,7,2,2,2,0,7,2,2,2,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_1469fc448 != 0) {
      lVar7 = DAT_1469fc448;
    }
    DAT_1469fc448 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_1469fc448 + 0x30);
}



// FUNCTION 141a15460 FUN_141a15460 body=320 status=ok
// SIG undefined FUN_141a15460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141a15460(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_1469fc440 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141a15840;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_1469fc440 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_1469fc440 = 0;
        return _DAT_00000030;
      }
      DAT_1469fc440 =
           TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_1469fc440 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_1469fc440 != 0) {
      lVar7 = DAT_1469fc440;
    }
    DAT_1469fc440 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_1469fc440 + 0x30);
}



// FUNCTION 141a155a0 FUN_141a155a0 body=320 status=ok
// SIG undefined FUN_141a155a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141a155a0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_1469fc438 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141a15850;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_1469fc438 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_1469fc438 = 0;
        return _DAT_00000030;
      }
      DAT_1469fc438 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,2,2,2,0,7,2,2,2,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_1469fc438 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,2,2,2,0,7,2,2,2,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_1469fc438 != 0) {
      lVar7 = DAT_1469fc438;
    }
    DAT_1469fc438 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_1469fc438 + 0x30);
}



// FUNCTION 141a156e0 FUN_141a156e0 body=320 status=ok
// SIG undefined FUN_141a156e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141a156e0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_1469fc430 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141a15860;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_1469fc430 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_1469fc430 = 0;
        return _DAT_00000030;
      }
      DAT_1469fc430 =
           TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_1469fc430 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_1469fc430 != 0) {
      lVar7 = DAT_1469fc430;
    }
    DAT_1469fc430 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_1469fc430 + 0x30);
}



// FUNCTION 141a15870 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141a158a0 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<1,7,1,7,2,2,2,0,7,2,2,2,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010701;
  local_14 = 0x20202;
  local_10 = 0x2020207;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141a15900 InitRHI body=86 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7000701;
  local_10 = 7;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141a15960 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,2,2,2,0,7,2,2,2,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010700;
  local_14 = 0x20202;
  local_10 = 0x2020207;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141a159c0 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x1010101;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141a15a30 FUN_141a15a30 body=1270 status=ok
// SIG undefined FUN_141a15a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a15a30(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined1 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 *local_190;
  longlong local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
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
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_98 = 1;
  local_a8 = 0;
  uStack_a0 = 0;
  uVar14 = (ulonglong)param_2;
  local_84 = 0;
  plVar15 = (longlong *)0x0;
  local_190 = &local_a8;
  local_198 = 1;
  local_1a0 = 1;
  local_94 = _DAT_1468b5d78;
  uStack_90 = uRam00000001468b5d7c;
  uStack_8c = uRam00000001468b5d80;
  uStack_88 = uRam00000001468b5d84;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_1a8 = 1;
  local_1b0 = 2;
  local_1b8 = 0x438;
  (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,&local_170,&DAT_146ab6e78,0x780);
  lVar8 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_128 = 0;
  local_120 = 0;
  local_11c = 0x26;
  local_114 = 0;
  local_10c = 0;
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
  local_180 = (undefined8 *)0x0;
  FUN_141a19150(param_1,local_170,0,1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_180);
  FUN_14049afe0(param_1,&local_168);
  local_138 = FUN_1404a0ce0();
  uStack_130 = FUN_140985530();
  local_128 = FUN_1409853f0();
  local_178 = 0;
  local_180 = (undefined8 *)&DAT_1469f93a0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar8 + 0x38,&local_188,&local_180);
  plVar11 = plVar15;
  if ((int)local_188 != -1) {
    plVar11 = (longlong *)((longlong)(int)local_188 * 0x20 + *(longlong *)(lVar8 + 0x38));
  }
  local_178 = 0;
  plVar12 = plVar11 + 2;
  if (plVar11 == (longlong *)0x0) {
    plVar12 = plVar15;
  }
  local_180 = (undefined8 *)&DAT_1469f6750;
  lVar5 = *plVar12;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar8 + 0x38,&local_188,&local_180);
  plVar11 = plVar15;
  if ((int)local_188 != -1) {
    plVar11 = (longlong *)((longlong)(int)local_188 * 0x20 + *(longlong *)(lVar8 + 0x38));
  }
  plVar12 = plVar11 + 2;
  if (plVar11 == (longlong *)0x0) {
    plVar12 = plVar15;
  }
  lVar8 = *plVar12;
  local_168 = DAT_1464c0eb0;
  lVar5 = *(longlong *)(lVar5 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  uStack_160 = *(undefined8 *)(lVar5 + 0x38);
  lVar8 = *(longlong *)(lVar8 + 0x48);
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  local_148 = *(undefined8 *)(lVar8 + 0x40);
  local_11c = CONCAT44(local_11c._4_4_,1);
  FUN_141ed6ac0(param_1,&local_168,2,1);
  if (param_2 == 0xffffffff) {
    uVar14 = (ulonglong)DAT_1469f60b0;
    bVar16 = DAT_1469f60b0 == 0;
    uVar7 = DAT_1469f60b0;
    if (!bVar16) goto LAB_141a15daa;
    if ((DAT_1469f68a0 == 0) || (DAT_1469f68a8 == 0)) {
      uVar14 = 5;
    }
    else {
      local_180 = (undefined8 *)0x0;
      local_188 = 0;
      (**(code **)(*DAT_146ab6358 + 0x340))(DAT_146ab6358,DAT_1469f68a0,&local_180,1);
      (**(code **)(*DAT_146ab6358 + 0x340))(DAT_146ab6358,DAT_1469f68a8,&local_188,1);
      fVar17 = (float)(local_188 - (longlong)local_180);
      if (local_188 - (longlong)local_180 < 0) {
        fVar17 = fVar17 + 1.8446744e+19;
      }
      uVar7 = (int)ROUND((500000.0 / fVar17 + 500000.0 / fVar17) - 0.5) >> 1;
      if ((int)uVar7 < 1) {
        uVar14 = 1;
      }
      else {
        uVar6 = 200;
        if ((int)uVar7 < 200) {
          uVar6 = uVar7;
        }
        uVar14 = (ulonglong)uVar6;
      }
    }
    DAT_1469f60b0 = (uint)uVar14;
  }
  uVar7 = (uint)uVar14;
  bVar16 = uVar7 == 0;
LAB_141a15daa:
  if (!bVar16 && -1 < (int)uVar7) {
    do {
      local_180 = (undefined8 *)0x0;
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      puVar10 = puVar9 + 8;
      if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x50);
        puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
        puVar10 = puVar9 + 8;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar10;
      *(undefined8 **)(param_1 + 0x180) = puVar9;
      *(undefined4 *)(param_1 + 0x170) = 1;
      *(undefined4 *)(param_1 + 0x174) = 2;
      *(undefined4 *)(param_1 + 0x178) = 4;
      *(undefined4 *)(param_1 + 0x17c) = 0x10;
      *puVar9 = 0x3f800000bf800000;
      puVar9[1] = 0x3f80000000000000;
      puVar9[2] = 0x3f8000003f800000;
      puVar9[3] = 0x3f80000000000000;
      puVar9[4] = 0xbf800000bf800000;
      puVar9[5] = 0x3f80000000000000;
      puVar9[6] = 0xbf8000003f800000;
      puVar9[7] = 0x3f80000000000000;
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar13 + 5;
      local_180 = puVar9;
      if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
        puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar13 + 5;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar10;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar13;
      uVar1 = *(undefined4 *)(param_1 + 0x178);
      uVar2 = *(undefined4 *)(param_1 + 0x17c);
      uVar3 = *(undefined4 *)(param_1 + 0x174);
      uVar4 = *(undefined4 *)(param_1 + 0x170);
      *(undefined8 **)(param_1 + 8) = puVar13 + 1;
      puVar13[4] = *(undefined8 *)(param_1 + 0x180);
      puVar13[1] = 0;
      *puVar13 = &PTR_LAB_144d91e10;
      *(undefined4 *)(puVar13 + 2) = uVar4;
      *(undefined4 *)((longlong)puVar13 + 0x14) = uVar3;
      *(undefined4 *)(puVar13 + 3) = uVar1;
      *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar2;
      *(undefined8 *)(param_1 + 0x180) = 0;
      *(undefined4 *)(param_1 + 0x178) = 0;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_170);
  return;
}



// FUNCTION 141a15f30 FUN_141a15f30 body=481 status=ok
// SIG undefined FUN_141a15f30(void)

void FUN_141a15f30(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 local_res10 [8];
  
  if ((DAT_1469f68a0 == 0) || (DAT_1469f68a8 == 0)) {
    lVar4 = 0;
    if ((DAT_146ab6383 != '\0') && (cVar1 = FUN_141ed7f80(), cVar1 != '\0')) {
      lVar4 = param_1;
    }
    (**(code **)(*DAT_146ab6358 + 0x338))(DAT_146ab6358,local_res10,2);
    if (lVar4 != 0) {
      FRHICommandListImmediate::UnStallRHIThread(lVar4);
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_1469f68a0,local_res10);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res10);
    lVar4 = 0;
    if ((DAT_146ab6383 != '\0') && (cVar1 = FUN_141ed7f80(param_1), cVar1 != '\0')) {
      lVar4 = param_1;
    }
    (**(code **)(*DAT_146ab6358 + 0x338))(DAT_146ab6358,local_res10,2);
    if (lVar4 != 0) {
      FRHICommandListImmediate::UnStallRHIThread(lVar4);
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_1469f68a8,local_res10);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res10);
    lVar4 = DAT_1469f68a0;
    if ((DAT_1469f68a0 != 0) && (DAT_1469f68a8 != 0)) {
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 3;
      if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar2 = puVar3 + 3;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar2;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar3;
      *(undefined8 **)(param_1 + 8) = puVar3 + 1;
      *puVar3 = &PTR_LAB_143f59490;
      puVar3[2] = lVar4;
      puVar3[1] = 0;
      FUN_141a15a30(param_1,5);
      lVar4 = DAT_1469f68a8;
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 3;
      if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar2 = puVar3 + 3;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar2;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar3;
      *(undefined8 **)(param_1 + 8) = puVar3 + 1;
      *puVar3 = &PTR_LAB_143f59490;
      puVar3[1] = 0;
      puVar3[2] = lVar4;
    }
  }
  return;
}



// FUNCTION 141a16160 FUN_141a16160 body=175 status=ok
// SIG undefined FUN_141a16160(void)

void FUN_141a16160(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_CLEAR_VALUE",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_BOUNDS",0);
  FUN_1404a3a40(param_2,L"VALUE_TYPE",L"uint4");
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_X",8);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Y",8);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Z",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"RESOURCE_TYPE",1);
  return;
}



// FUNCTION 141a16210 FUN_141a16210 body=178 status=ok
// SIG undefined FUN_141a16210(void)

void FUN_141a16210(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_CLEAR_VALUE",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_BOUNDS",1);
  FUN_1404a3a40(param_2,L"VALUE_TYPE",L"float4");
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_X",8);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Y",8);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Z",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"RESOURCE_TYPE",1);
  return;
}



// FUNCTION 141a162d0 FUN_141a162d0 body=175 status=ok
// SIG undefined FUN_141a162d0(void)

void FUN_141a162d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_CLEAR_VALUE",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_BOUNDS",0);
  FUN_1404a3a40(param_2,L"VALUE_TYPE",L"float4");
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_X",8);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Y",8);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Z",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"RESOURCE_TYPE",1);
  return;
}



// FUNCTION 141a16380 FUN_141a16380 body=172 status=ok
// SIG undefined FUN_141a16380(void)

void FUN_141a16380(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_CLEAR_VALUE",0);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_BOUNDS",0);
  FUN_1404a3a40(param_2,L"VALUE_TYPE",L"uint");
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_X",8);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Y",8);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Z",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"RESOURCE_TYPE",2);
  return;
}



// FUNCTION 141a16430 FUN_141a16430 body=175 status=ok
// SIG undefined FUN_141a16430(void)

void FUN_141a16430(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_CLEAR_VALUE",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_BOUNDS",0);
  FUN_1404a3a40(param_2,L"VALUE_TYPE",L"uint");
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_X",8);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Y",8);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Z",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"RESOURCE_TYPE",2);
  return;
}



// FUNCTION 141a164e0 FUN_141a164e0 body=175 status=ok
// SIG undefined FUN_141a164e0(void)

void FUN_141a164e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_CLEAR_VALUE",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_BOUNDS",0);
  FUN_1404a3a40(param_2,L"VALUE_TYPE",L"uint4");
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_X",8);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Y",8);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Z",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"RESOURCE_TYPE",2);
  return;
}



// FUNCTION 141a16590 FUN_141a16590 body=175 status=ok
// SIG undefined FUN_141a16590(void)

void FUN_141a16590(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_CLEAR_VALUE",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_BOUNDS",0);
  FUN_1404a3a40(param_2,L"VALUE_TYPE",L"float4");
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_X",8);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Y",8);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Z",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"RESOURCE_TYPE",2);
  return;
}



// FUNCTION 141a16640 FUN_141a16640 body=175 status=ok
// SIG undefined FUN_141a16640(void)

void FUN_141a16640(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_CLEAR_VALUE",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_BOUNDS",0);
  FUN_1404a3a40(param_2,L"VALUE_TYPE",L"uint4");
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_X",4);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Y",4);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Z",4);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"RESOURCE_TYPE",3);
  return;
}



// FUNCTION 141a166f0 FUN_141a166f0 body=175 status=ok
// SIG undefined FUN_141a166f0(void)

void FUN_141a166f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_CLEAR_VALUE",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_BOUNDS",0);
  FUN_1404a3a40(param_2,L"VALUE_TYPE",L"float4");
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_X",4);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Y",4);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Z",4);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"RESOURCE_TYPE",3);
  return;
}



// FUNCTION 141a167a0 FUN_141a167a0 body=169 status=ok
// SIG undefined FUN_141a167a0(void)

void FUN_141a167a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_CLEAR_VALUE",0);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_BOUNDS",0);
  FUN_1404a3a40(param_2,L"VALUE_TYPE",L"uint");
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_X",0x40);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Y",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Z",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"RESOURCE_TYPE",0);
  return;
}



// FUNCTION 141a16850 FUN_141a16850 body=175 status=ok
// SIG undefined FUN_141a16850(void)

void FUN_141a16850(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_CLEAR_VALUE",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_BOUNDS",1);
  FUN_1404a3a40(param_2,L"VALUE_TYPE",L"uint");
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_X",0x40);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Y",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Z",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"RESOURCE_TYPE",0);
  return;
}



// FUNCTION 141a16900 FUN_141a16900 body=172 status=ok
// SIG undefined FUN_141a16900(void)

void FUN_141a16900(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_CLEAR_VALUE",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_BOUNDS",0);
  FUN_1404a3a40(param_2,L"VALUE_TYPE",L"uint");
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_X",0x40);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Y",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Z",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"RESOURCE_TYPE",0);
  return;
}



// FUNCTION 141a169b0 FUN_141a169b0 body=172 status=ok
// SIG undefined FUN_141a169b0(void)

void FUN_141a169b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_CLEAR_VALUE",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"ENABLE_BOUNDS",0);
  FUN_1404a3a40(param_2,L"VALUE_TYPE",L"uint4");
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_X",0x40);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Y",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"THREADGROUPSIZE_Z",1);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"RESOURCE_TYPE",0);
  return;
}



// FUNCTION 141a16a60 FUN_141a16a60 body=172 status=ok
// SIG undefined FUN_141a16a60(void)

void FUN_141a16a60(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ENABLE_CLEAR_VALUE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ENABLE_BOUNDS",0);
  FUN_1404a3a40(param_2,L"VALUE_TYPE",L"float4");
  local_18 = local_res18;
  local_res18[0] = 0;
  local_10 = local_res10;
  local_res10[0] = 1;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
            (param_2 + 0xc0,local_res20,&local_18,0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ENABLE_DEPTH",0);
  return;
}



// FUNCTION 141a16b10 FUN_141a16b10 body=111 status=ok
// SIG undefined FUN_141a16b10(void)

void FUN_141a16b10(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ENABLE_CLEAR_VALUE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ENABLE_BOUNDS",0);
  FUN_1404a3a40(param_2,L"VALUE_TYPE",L"float4");
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ENABLE_DEPTH",0);
  return;
}



// FUNCTION 141a16b80 FUN_141a16b80 body=114 status=ok
// SIG undefined FUN_141a16b80(void)

void FUN_141a16b80(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ENABLE_CLEAR_VALUE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ENABLE_BOUNDS",0);
  FUN_1404a3a40(param_2,L"VALUE_TYPE",L"float4");
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ENABLE_DEPTH",0);
  return;
}



// FUNCTION 141a16c00 FUN_141a16c00 body=114 status=ok
// SIG undefined FUN_141a16c00(void)

void FUN_141a16c00(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ENABLE_CLEAR_VALUE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ENABLE_BOUNDS",0);
  FUN_1404a3a40(param_2,L"VALUE_TYPE",L"float4");
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ENABLE_DEPTH",1);
  return;
}



// FUNCTION 141a16c80 FUN_141a16c80 body=114 status=ok
// SIG undefined FUN_141a16c80(void)

void FUN_141a16c80(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ENABLE_CLEAR_VALUE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ENABLE_BOUNDS",1);
  FUN_1404a3a40(param_2,L"VALUE_TYPE",L"float4");
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ENABLE_DEPTH",0);
  return;
}



// FUNCTION 141a16e00 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TOneColorVS<1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USING_NDC_POSITIONS",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USING_LAYERS",1);
  return;
}



// FUNCTION 141a16e40 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TOneColorVS<1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USING_NDC_POSITIONS",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USING_LAYERS",0);
  return;
}



// FUNCTION 141a16e80 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TOneColorVS<0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USING_NDC_POSITIONS",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USING_LAYERS",1);
  return;
}



// FUNCTION 141a16ec0 ModifyCompilationEnvironment body=54 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TOneColorVS<0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USING_NDC_POSITIONS",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USING_LAYERS",0);
  return;
}



// FUNCTION 141a16f00 ModifyCompilationEnvironment body=67 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FClearReplacementPS::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  local_18 = local_res18;
  local_res18[0] = 0;
  local_10 = local_res10;
  local_res10[0] = 1;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
            (param_2 + 0xc0,local_res20,&local_18,0);
  return;
}



// FUNCTION 141a16fb0 Remove body=352 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FName,FUniformBufferStruct_*>,TDefaultMapHashableKeyFuncs<FName,FUniformBufferStruct_*,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar10 = (longlong)(int)param_1[9] - 1;
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  iVar11 = *(int *)((longlong)plVar9 +
                   ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) & uVar10) * 4);
  if (iVar11 != -1) {
    lVar5 = *param_1;
    do {
      lVar8 = (longlong)iVar11;
      if (*(longlong *)(lVar5 + lVar8 * 0x18) == param_2) {
        lVar8 = lVar8 * 0x18;
        uVar10 = (longlong)*(int *)(lVar8 + 0x14 + lVar5) & uVar10;
        puVar2 = (undefined4 *)((longlong)plVar9 + uVar10 * 4);
        iVar4 = *(int *)((longlong)plVar9 + uVar10 * 4);
        goto joined_r0x000141a17060;
      }
      iVar11 = *(int *)(lVar5 + 0x10 + lVar8 * 0x18);
    } while (iVar11 != -1);
  }
  return 0;
joined_r0x000141a17060:
  if (iVar4 == -1) {
LAB_141a17085:
    bVar6 = (byte)iVar11 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar11;
    }
    lVar5 = *param_1;
    uVar7 = 0xffffffff;
    *(undefined4 *)(lVar5 + lVar8) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar7 = (undefined4)param_1[6];
    }
    ((undefined4 *)(lVar5 + lVar8))[1] = uVar7;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar11;
    plVar9 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar9 = param_1 + 2;
    }
    puVar3 = (uint *)((longlong)plVar9 +
                     (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar3 = *puVar3 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
    return 1;
  }
  if (iVar4 == iVar11) {
    *puVar2 = *(undefined4 *)(lVar8 + lVar5 + 0x10);
    goto LAB_141a17085;
  }
  lVar1 = (longlong)iVar4 * 3 + 2;
  iVar4 = *(int *)(lVar5 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar5 + lVar1 * 8);
  goto joined_r0x000141a17060;
}



// FUNCTION 141a17110 FUN_141a17110 body=105 status=ok
// SIG undefined FUN_141a17110(void)

ulonglong FUN_141a17110(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xc6);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xcc);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0xd0);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141a17180 SetDefine body=355 status=ok
// SIG undefined SetDefine(void)

void FShaderCompilerDefinitions::SetDefine(undefined8 param_1,short *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  short *psVar4;
  undefined1 local_res8 [8];
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  short *local_48;
  int local_40;
  longlong *local_38;
  longlong *local_30;
  
  FString::PrintfImpl(&local_48,&DAT_144550a50);
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
  FUN_140497620(param_1,local_res8,&local_38,0);
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



// FUNCTION 141a172f0 FUN_141a172f0 body=359 status=ok
// SIG undefined FUN_141a172f0(void)

void FUN_141a172f0(longlong param_1,short *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  short *psVar4;
  undefined1 local_res8 [8];
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  short *local_48;
  int local_40;
  longlong *local_38;
  longlong *local_30;
  
  FString::PrintfImpl(&local_48,&DAT_143f3edc0);
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
  FUN_140497620(param_1 + 0x200,local_res8,&local_38,0);
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



// FUNCTION 141a17460 FUN_141a17460 body=579 status=ok
// SIG undefined FUN_141a17460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a17460(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  byte param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong local_res8;
  longlong local_res18;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_88 = *param_4;
  uStack_80 = param_4[1];
  local_78 = param_4[2];
  uStack_70 = param_4[3];
  local_68 = *(undefined4 *)(param_4 + 4);
  uStack_64 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_60 = *(undefined4 *)(param_4 + 5);
  uStack_5c = *(undefined4 *)((longlong)param_4 + 0x2c);
  local_58 = *(undefined4 *)(param_4 + 6);
  uStack_54 = *(undefined4 *)((longlong)param_4 + 0x34);
  uStack_50 = *(undefined4 *)(param_4 + 7);
  uStack_4c = *(undefined4 *)((longlong)param_4 + 0x3c);
  local_38 = FUN_141a156e0();
  local_48 = (uint)param_5;
  local_40 = *param_3;
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res8,&local_88,&DAT_1469f6a28,1);
  local_res18 = local_res8;
  if (local_res8 != 0) {
    LOCK();
    *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = uVar4;
    do {
      iVar6 = (int)uVar7;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_1469f6a00) {
        if (iVar6 != -1) {
          puVar9 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *puVar9 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141a17582;
        }
        break;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469fc460) {
    _Init_thread_header(&DAT_1469fc460);
    if (DAT_1469fc460 == -1) {
      _DAT_1469fc458 = 0;
      DAT_1469fc45c = 0;
      DAT_1469fc45e = 0;
      _Init_thread_footer(&DAT_1469fc460);
    }
  }
  puVar9 = (undefined4 *)&DAT_1469fc458;
LAB_141a17582:
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (*(char *)((longlong)puVar9 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar9 + 1);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    *puVar8 = &PTR_LAB_144d920a0;
    puVar8[2] = uVar3;
    puVar8[4] = local_res8;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_3);
  return;
}



// FUNCTION 141a176b0 FUN_141a176b0 body=592 status=ok
// SIG undefined FUN_141a176b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a176b0(longlong param_1,longlong param_2,longlong *param_3,int *param_4,byte param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong local_res8;
  longlong local_res18;
  uint local_48 [2];
  float local_40;
  float local_3c;
  longlong local_38;
  undefined8 local_30;
  
  local_38 = *param_3;
  local_48[0] = (uint)param_5;
  local_3c = (float)param_4[1] / (float)*(uint *)(local_38 + 100);
  local_40 = (float)*param_4 / (float)*(uint *)(local_38 + 0x60);
  local_30 = FUN_141a156e0();
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res8,local_48,&DAT_1469f6c08,1);
  local_res18 = local_res8;
  if (local_res8 != 0) {
    LOCK();
    *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = uVar4;
    do {
      iVar6 = (int)uVar7;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_1469f6be0) {
        if (iVar6 != -1) {
          puVar9 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *puVar9 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141a177e2;
        }
        break;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469fc470) {
    _Init_thread_header(&DAT_1469fc470);
    if (DAT_1469fc470 == -1) {
      _DAT_1469fc468 = 0;
      DAT_1469fc46c = 0;
      DAT_1469fc46e = 0;
      _Init_thread_footer(&DAT_1469fc470);
    }
  }
  puVar9 = (undefined4 *)&DAT_1469fc468;
LAB_141a177e2:
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (*(char *)((longlong)puVar9 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar9 + 1);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    *puVar8 = &PTR_LAB_144d920a0;
    puVar8[2] = uVar3;
    puVar8[4] = local_res8;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_3);
  return;
}



// FUNCTION 141a17900 FUN_141a17900 body=628 status=ok
// SIG undefined FUN_141a17900(void)

void FUN_141a17900(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *_Dst;
  ulonglong _Size;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  local_38 = param_5;
  local_30 = 0;
  uVar5 = (uint)*(ushort *)(param_1 + 0xc4);
  if (0xf < *(ushort *)(param_1 + 0xc4)) {
    uVar5 = 0x10;
  }
  _Size = (ulonglong)uVar5;
  local_34 = param_4;
  if (uVar5 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar2 = *(ushort *)(param_1 + 0xc2);
    uVar6 = _Size + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = _Size + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar6;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_38,_Size);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d92080;
    *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar2;
    *(uint *)(puVar8 + 4) = (uint)uVar1;
    puVar8[2] = uVar4;
    puVar8[3] = _Dst;
    *(uint *)(puVar8 + 5) = uVar5;
  }
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *puVar8 = param_3;
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar9 + 2) = 1;
  puVar9[3] = puVar8;
  puVar9[4] = 2;
  puVar9[5] = 0;
  uVar1 = *(ushort *)(param_1 + 0xc6);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d91e40;
  puVar8[2] = uVar4;
  *(uint *)(puVar8 + 3) = (uint)uVar1;
  puVar8[4] = param_3;
  return;
}



// FUNCTION 141a17b80 FUN_141a17b80 body=622 status=ok
// SIG undefined FUN_141a17b80(void)

void FUN_141a17b80(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong _Size;
  void *_Dst;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar6 = (uint)*(ushort *)(param_1 + 0xc4);
  if (3 < *(ushort *)(param_1 + 0xc4)) {
    uVar6 = 4;
  }
  _Size = (ulonglong)uVar6;
  if (uVar6 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc2);
    uVar2 = *(ushort *)(param_1 + 0xc0);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar7 = (longlong)_Dst + _Size;
    if (*(ulonglong *)(param_2 + 0x38) < uVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = (longlong)_Dst + _Size;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar7;
    _guard_xfg_dispatch_icall_nop(_Dst,&stack0x00000028,_Size);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d92080;
    *(uint *)(puVar9 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar1;
    puVar9[2] = uVar4;
    puVar9[3] = _Dst;
    *(uint *)(puVar9 + 5) = uVar6;
  }
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar4,param_1 + 0xc6,&stack0x00000030,0);
  uVar5 = *param_3;
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
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
    *puVar9 = &PTR_LAB_144d92090;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar5;
  }
  if (*(short *)(param_1 + 0xd2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd0);
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
    *puVar9 = &PTR_LAB_144d91e40;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = param_4;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_3);
  return;
}



// FUNCTION 141a17df0 FUN_141a17df0 body=663 status=ok
// SIG undefined FUN_141a17df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a17df0(longlong param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 *param_5,byte param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 *local_res8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  uint local_54;
  float local_50;
  float local_4c;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_98 = *param_5;
  uStack_90 = param_5[1];
  local_88 = param_5[2];
  uStack_80 = param_5[3];
  local_78 = *(undefined4 *)(param_5 + 4);
  uStack_74 = *(undefined4 *)((longlong)param_5 + 0x24);
  uStack_70 = *(undefined4 *)(param_5 + 5);
  uStack_6c = *(undefined4 *)((longlong)param_5 + 0x2c);
  local_68 = param_5[6];
  uStack_60 = param_5[7];
  local_58 = *param_4;
  local_40 = FUN_141a156e0();
  local_38 = FUN_1404a0e20();
  local_54 = (uint)param_6;
  local_48 = *param_3;
  local_4c = (float)param_4[1] / (float)*(uint *)(local_48 + 100);
  local_50 = (float)*param_4 / (float)*(uint *)(local_48 + 0x60);
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&param_5,&local_98,&DAT_1469f6de8,1);
  puVar4 = param_5;
  local_res8 = param_5;
  if (param_5 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_5 + 1) = *(int *)(param_5 + 1) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_5);
  uVar5 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar8 = uVar5;
    do {
      iVar7 = (int)uVar8;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar5 * 8) == &DAT_1469f6dc0) {
        if (iVar7 != -1) {
          puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar7 * 8);
          *puVar10 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141a17f66;
        }
        break;
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469fc480) {
    _Init_thread_header(&DAT_1469fc480);
    if (DAT_1469fc480 == -1) {
      _DAT_1469fc478 = 0;
      DAT_1469fc47c = 0;
      DAT_1469fc47e = 0;
      _Init_thread_footer(&DAT_1469fc480);
    }
  }
  puVar10 = (undefined4 *)&DAT_1469fc478;
LAB_141a17f66:
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (*(char *)((longlong)puVar10 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar10 + 1);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    *puVar9 = &PTR_LAB_144d920a0;
    puVar9[2] = uVar3;
    puVar9[4] = puVar4;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_3);
  return;
}



// FUNCTION 141a18090 FUN_141a18090 body=664 status=ok
// SIG undefined FUN_141a18090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a18090(longlong param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 *param_5,byte param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 *local_res8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  uint local_54;
  float local_50;
  float local_4c;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_98 = *param_5;
  uStack_90 = param_5[1];
  local_88 = param_5[2];
  uStack_80 = param_5[3];
  local_78 = *(undefined4 *)(param_5 + 4);
  uStack_74 = *(undefined4 *)((longlong)param_5 + 0x24);
  uStack_70 = *(undefined4 *)(param_5 + 5);
  uStack_6c = *(undefined4 *)((longlong)param_5 + 0x2c);
  local_68 = param_5[6];
  uStack_60 = param_5[7];
  local_58 = param_4[1];
  local_40 = FUN_141a156e0();
  local_38 = FUN_1404a0e20();
  local_54 = (uint)param_6;
  local_48 = *param_3;
  local_4c = (float)param_4[1] / (float)*(uint *)(local_48 + 100);
  local_50 = (float)*param_4 / (float)*(uint *)(local_48 + 0x60);
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&param_5,&local_98,&DAT_1469f6fc8,1);
  puVar4 = param_5;
  local_res8 = param_5;
  if (param_5 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_5 + 1) = *(int *)(param_5 + 1) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_5);
  uVar5 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar8 = uVar5;
    do {
      iVar7 = (int)uVar8;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar5 * 8) == &DAT_1469f6fa0) {
        if (iVar7 != -1) {
          puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar7 * 8);
          *puVar10 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141a18207;
        }
        break;
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469fc490) {
    _Init_thread_header(&DAT_1469fc490);
    if (DAT_1469fc490 == -1) {
      _DAT_1469fc488 = 0;
      DAT_1469fc48c = 0;
      DAT_1469fc48e = 0;
      _Init_thread_footer(&DAT_1469fc490);
    }
  }
  puVar10 = (undefined4 *)&DAT_1469fc488;
LAB_141a18207:
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (*(char *)((longlong)puVar10 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar10 + 1);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    *puVar9 = &PTR_LAB_144d920a0;
    puVar9[2] = uVar3;
    puVar9[4] = puVar4;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_3);
  return;
}



// FUNCTION 141a18330 FUN_141a18330 body=577 status=ok
// SIG undefined FUN_141a18330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a18330(longlong param_1,longlong param_2,longlong *param_3,int *param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong local_res8;
  longlong local_res18;
  float local_48;
  float local_44;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = FUN_141a156e0();
  local_40 = *param_3;
  local_44 = (float)param_4[1] / (float)*(uint *)(local_40 + 100);
  local_48 = (float)*param_4 / (float)*(uint *)(local_40 + 0x60);
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res8,&local_48,&DAT_1469f71a8,1);
  local_res18 = local_res8;
  if (local_res8 != 0) {
    LOCK();
    *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = uVar4;
    do {
      iVar6 = (int)uVar7;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_1469f7180) {
        if (iVar6 != -1) {
          puVar9 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *puVar9 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141a18453;
        }
        break;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469fc4a0) {
    _Init_thread_header(&DAT_1469fc4a0);
    if (DAT_1469fc4a0 == -1) {
      _DAT_1469fc498 = 0;
      DAT_1469fc49c = 0;
      DAT_1469fc49e = 0;
      _Init_thread_footer(&DAT_1469fc4a0);
    }
  }
  puVar9 = (undefined4 *)&DAT_1469fc498;
LAB_141a18453:
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (*(char *)((longlong)puVar9 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar9 + 1);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    *puVar8 = &PTR_LAB_144d920a0;
    puVar8[2] = uVar3;
    puVar8[4] = local_res8;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_3);
  return;
}



// FUNCTION 141a18580 SetParameters body=305 status=ok
// SIG undefined SetParameters(void)

void FResolveSingleSamplePS::SetParameters(longlong param_1,longlong param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  ulonglong _Size;
  undefined4 local_res18 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_res18[0] = param_3;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x40);
  uVar5 = (uint)*(ushort *)(param_1 + 200);
  if (3 < *(ushort *)(param_1 + 200)) {
    uVar5 = 4;
  }
  _Size = (ulonglong)uVar5;
  if (uVar5 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc6);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar2 = *(ushort *)(param_1 + 0xc4);
    uVar6 = _Size + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = _Size + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar6;
    ::_guard_xfg_dispatch_icall_nop(_Dst,local_res18,_Size);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar1;
    *puVar8 = &PTR_LAB_143f594b0;
    puVar8[2] = uVar4;
    puVar8[3] = _Dst;
    *(uint *)(puVar8 + 5) = uVar5;
  }
  return;
}



// FUNCTION 141a186c0 FUN_141a186c0 body=596 status=ok
// SIG undefined FUN_141a186c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a186c0(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                  byte param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong local_res8;
  longlong local_res18;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 local_44;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_88 = *param_4;
  uStack_80 = param_4[1];
  local_78 = param_4[2];
  uStack_70 = param_4[3];
  local_68 = *(undefined4 *)(param_4 + 4);
  uStack_64 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_60 = *(undefined4 *)(param_4 + 5);
  uStack_5c = *(undefined4 *)((longlong)param_4 + 0x2c);
  local_58 = *(undefined4 *)(param_4 + 6);
  uStack_54 = *(undefined4 *)((longlong)param_4 + 0x34);
  uStack_50 = *(undefined4 *)(param_4 + 7);
  uStack_4c = *(undefined4 *)((longlong)param_4 + 0x3c);
  local_38 = FUN_141a156e0();
  local_30 = FUN_1404a0e20();
  local_48 = (uint)param_5;
  local_40 = *param_3;
  local_44 = *(undefined4 *)(local_40 + 0x60);
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res8,&local_88,&DAT_1469f76b8,1);
  local_res18 = local_res8;
  if (local_res8 != 0) {
    LOCK();
    *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = uVar4;
    do {
      iVar6 = (int)uVar7;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_1469f7690) {
        if (iVar6 != -1) {
          puVar9 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *puVar9 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141a187f3;
        }
        break;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469fc4b0) {
    _Init_thread_header(&DAT_1469fc4b0);
    if (DAT_1469fc4b0 == -1) {
      _DAT_1469fc4a8 = 0;
      DAT_1469fc4ac = 0;
      DAT_1469fc4ae = 0;
      _Init_thread_footer(&DAT_1469fc4b0);
    }
  }
  puVar9 = (undefined4 *)&DAT_1469fc4a8;
LAB_141a187f3:
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (*(char *)((longlong)puVar9 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar9 + 1);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    *puVar8 = &PTR_LAB_144d920a0;
    puVar8[2] = uVar3;
    puVar8[4] = local_res8;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_3);
  return;
}



// FUNCTION 141a18920 FUN_141a18920 body=794 status=ok
// SIG undefined FUN_141a18920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a18920(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,int *param_6,undefined4 *param_7,undefined4 *param_8,
                  byte param_9)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  float local_80;
  float local_7c;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  local_c8 = *param_7;
  uStack_c4 = param_7[1];
  uStack_c0 = param_7[2];
  local_b8 = param_7[4];
  uStack_b4 = param_7[5];
  uStack_b0 = param_7[6];
  local_a8 = param_7[8];
  uStack_a4 = param_7[9];
  uStack_a0 = param_7[10];
  local_98 = param_7[0xc];
  uStack_94 = param_7[0xd];
  uStack_90 = param_7[0xe];
  uStack_bc = *param_8;
  uStack_ac = param_8[1];
  uStack_9c = param_8[2];
  local_88 = (uint)param_9;
  local_78 = *param_3;
  local_70 = *param_4;
  local_68 = *param_5;
  uStack_8c = 0x3f800000;
  local_60 = FUN_141a156e0();
  local_58 = FUN_141a156e0();
  local_50 = FUN_141a156e0();
  local_7c = (float)param_6[1] / (float)*(uint *)(*param_3 + 100);
  local_80 = (float)*param_6 / (float)*(uint *)(*param_3 + 0x60);
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&param_7,&local_c8,&DAT_1469f7898,1);
  puVar3 = param_7;
  param_8 = param_7;
  if (param_7 != (undefined4 *)0x0) {
    LOCK();
    param_7[2] = param_7[2] + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_7);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar4 = 0;
    do {
      if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar4 * 8) == &DAT_1469f7870) {
        if (iVar6 != -1) {
          puVar8 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *puVar8 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141a18b06;
        }
        break;
      }
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469fc4c0) {
    _Init_thread_header(&DAT_1469fc4c0);
    if (DAT_1469fc4c0 == -1) {
      _DAT_1469fc4b8 = 0;
      DAT_1469fc4bc = 0;
      DAT_1469fc4be = 0;
      _Init_thread_footer(&DAT_1469fc4c0);
    }
  }
  puVar8 = (undefined4 *)&DAT_1469fc4b8;
LAB_141a18b06:
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uVar2 = *(undefined8 *)(lVar4 + 0x40);
  if (*(char *)((longlong)puVar8 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar8 + 1);
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
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    *puVar7 = &PTR_LAB_144d920a0;
    puVar7[2] = uVar2;
    puVar7[4] = puVar3;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_3);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_4);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_5);
  return;
}



// FUNCTION 141a18c40 FUN_141a18c40 body=675 status=ok
// SIG undefined FUN_141a18c40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a18c40(longlong param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 *param_5,byte param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 *local_res8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  uint local_54;
  float local_50;
  float local_4c;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_98 = *param_5;
  uStack_90 = param_5[1];
  local_88 = param_5[2];
  uStack_80 = param_5[3];
  local_78 = *(undefined4 *)(param_5 + 4);
  uStack_74 = *(undefined4 *)((longlong)param_5 + 0x24);
  uStack_70 = *(undefined4 *)(param_5 + 5);
  uStack_6c = *(undefined4 *)((longlong)param_5 + 0x2c);
  local_68 = param_5[6];
  uStack_60 = param_5[7];
  local_58 = *param_4;
  local_40 = FUN_141a156e0();
  local_38 = FUN_1404a0e20();
  local_54 = (uint)param_6;
  local_48 = *param_3;
  local_4c = (float)param_4[1] / (float)*(uint *)(local_48 + 100);
  local_50 = (0.5 / (float)*(uint *)(local_48 + 0x60)) * (float)*param_4;
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&param_5,&local_98,&DAT_1469f7a78,1);
  puVar4 = param_5;
  local_res8 = param_5;
  if (param_5 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_5 + 1) = *(int *)(param_5 + 1) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_5);
  uVar5 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar8 = uVar5;
    do {
      iVar7 = (int)uVar8;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar5 * 8) == &DAT_1469f7a50) {
        if (iVar7 != -1) {
          puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar7 * 8);
          *puVar10 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141a18dc2;
        }
        break;
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469fc4d0) {
    _Init_thread_header(&DAT_1469fc4d0);
    if (DAT_1469fc4d0 == -1) {
      _DAT_1469fc4c8 = 0;
      DAT_1469fc4cc = 0;
      DAT_1469fc4ce = 0;
      _Init_thread_footer(&DAT_1469fc4d0);
    }
  }
  puVar10 = (undefined4 *)&DAT_1469fc4c8;
LAB_141a18dc2:
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (*(char *)((longlong)puVar10 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar10 + 1);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    *puVar9 = &PTR_LAB_144d920a0;
    puVar9[2] = uVar3;
    puVar9[4] = puVar4;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_3);
  return;
}



// FUNCTION 141a18ef0 FUN_141a18ef0 body=596 status=ok
// SIG undefined FUN_141a18ef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a18ef0(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                  byte param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong local_res8;
  longlong local_res18;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 local_44;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_88 = *param_4;
  uStack_80 = param_4[1];
  local_78 = param_4[2];
  uStack_70 = param_4[3];
  local_68 = *(undefined4 *)(param_4 + 4);
  uStack_64 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_60 = *(undefined4 *)(param_4 + 5);
  uStack_5c = *(undefined4 *)((longlong)param_4 + 0x2c);
  local_58 = *(undefined4 *)(param_4 + 6);
  uStack_54 = *(undefined4 *)((longlong)param_4 + 0x34);
  uStack_50 = *(undefined4 *)(param_4 + 7);
  uStack_4c = *(undefined4 *)((longlong)param_4 + 0x3c);
  local_38 = FUN_141a156e0();
  local_30 = FUN_1404a0e20();
  local_48 = (uint)param_5;
  local_40 = *param_3;
  local_44 = *(undefined4 *)(local_40 + 0x60);
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res8,&local_88,&DAT_1469f7c58,1);
  local_res18 = local_res8;
  if (local_res8 != 0) {
    LOCK();
    *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = uVar4;
    do {
      iVar6 = (int)uVar7;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_1469f7c30) {
        if (iVar6 != -1) {
          puVar9 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *puVar9 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141a19023;
        }
        break;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469fc4e0) {
    _Init_thread_header(&DAT_1469fc4e0);
    if (DAT_1469fc4e0 == -1) {
      _DAT_1469fc4d8 = 0;
      DAT_1469fc4dc = 0;
      DAT_1469fc4de = 0;
      _Init_thread_footer(&DAT_1469fc4e0);
    }
  }
  puVar9 = (undefined4 *)&DAT_1469fc4d8;
LAB_141a19023:
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (*(char *)((longlong)puVar9 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar9 + 1);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    *puVar8 = &PTR_LAB_144d920a0;
    puVar8[2] = uVar3;
    puVar8[4] = local_res8;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_3);
  return;
}



// FUNCTION 141a19150 FUN_141a19150 body=846 status=ok
// SIG undefined FUN_141a19150(void)

void FUN_141a19150(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong local_48 [3];
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28 [8];
  
  uVar9 = 0;
  local_48[2] = param_2;
  iVar8 = 0;
  local_30 = 0;
  local_2c = 0xffffffff;
  local_28[0] = 0x101;
  if (param_4 != '\0') {
    bVar12 = param_2 != 0;
    uVar10 = (uint)bVar12;
    if (bVar12) {
      local_48[0] = param_2;
    }
    if (param_3 != 0) {
      uVar10 = uVar10 + 1;
      local_48[bVar12] = param_3;
    }
    uVar6 = uVar10 * 8;
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar7 = (ulonglong)uVar6 + (longlong)puVar11;
    if (*(ulonglong *)(param_1 + 0x38) < uVar7) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 8);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      uVar7 = (ulonglong)uVar6 + (longlong)puVar11;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar7;
    uVar7 = (ulonglong)uVar10;
    if (uVar10 != 0) {
      puVar4 = puVar11;
      do {
        *puVar4 = *(undefined8 *)(((longlong)local_48 - (longlong)puVar11) + (longlong)puVar4);
        puVar4 = puVar4 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *(uint *)(puVar5 + 2) = uVar10;
    *puVar5 = &PTR_LAB_143f59470;
    puVar5[3] = puVar11;
    *(undefined4 *)(puVar5 + 4) = 1;
    *(undefined1 *)((longlong)puVar5 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 1;
  uVar7 = uVar9;
  do {
    uVar10 = (int)uVar7 + 1;
    lVar3 = *(longlong *)(&local_30 + uVar7 * 6);
    uVar2 = *(undefined8 *)(local_28 + uVar7 * 0xc);
    plVar1 = (longlong *)(param_1 + 0xa0 + uVar7 * 0x18);
    *plVar1 = local_48[uVar7 * 3 + 2];
    plVar1[1] = lVar3;
    *(undefined8 *)(param_1 + 0xb0 + uVar7 * 0x18) = uVar2;
    uVar7 = (ulonglong)uVar10;
  } while (uVar10 < *(uint *)(param_1 + 0x98));
  local_58 = (undefined4)param_3;
  uStack_54 = (undefined4)((ulonglong)param_3 >> 0x20);
  *(undefined4 *)(param_1 + 0x160) = local_58;
  *(undefined4 *)(param_1 + 0x164) = uStack_54;
  *(undefined4 *)(param_1 + 0x168) = 0x1010101;
  *(undefined4 *)(param_1 + 0x16c) = 0x22;
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar4 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar4 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar11;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar4;
  *(undefined8 **)(param_1 + 8) = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar4 + 2) = 1;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar4 + 5) = 0;
  puVar4[6] = 0;
  *(undefined4 *)(puVar4 + 7) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar4 + 8) = 0;
  puVar4[9] = 0;
  *(undefined4 *)(puVar4 + 10) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar4 + 0xb) = 0;
  puVar4[0xc] = 0;
  *(undefined4 *)(puVar4 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar4 + 0xe) = 0;
  puVar4[0xf] = 0;
  *(undefined4 *)(puVar4 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar4 + 0x11) = 0;
  puVar4[0x12] = 0;
  *(undefined4 *)(puVar4 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar4 + 0x14) = 0;
  puVar4[0x15] = 0;
  *(undefined4 *)(puVar4 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar4 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar4 + 0x17) = 0;
  puVar4[0x18] = 0;
  *(undefined4 *)(puVar4 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar4 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar4 + 0x1a) = 0;
  puVar4[0x1b] = 0;
  *(undefined4 *)(puVar4 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar4 + 0xe4) = 0;
  uVar7 = uVar9;
  if (*(int *)(puVar4 + 2) != 0) {
    do {
      uVar10 = (int)uVar7 + 1;
      lVar3 = *(longlong *)(&local_30 + uVar7 * 6);
      puVar4[uVar7 * 3 + 3] = local_48[uVar7 * 3 + 2];
      (puVar4 + uVar7 * 3 + 3)[1] = lVar3;
      puVar4[uVar7 * 3 + 5] = *(undefined8 *)(local_28 + uVar7 * 0xc);
      uVar7 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(puVar4 + 2));
    iVar8 = *(int *)(puVar4 + 0x1d);
  }
  if (iVar8 != 0) {
    do {
      uVar10 = (int)uVar9 + 1;
      puVar4[uVar9 + 0x1e] = *(undefined8 *)(uVar9 * 8);
      uVar9 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(puVar4 + 0x1d));
  }
  puVar4[0x1b] = param_3;
  puVar4[0x1c] = 0x2201010101;
  return;
}



// FUNCTION 141a194a0 ShouldCompilePermutation body=22 status=ok
// SIG undefined ShouldCompilePermutation(void)

bool FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1419ef5f0(*param_1);
  return 2 < iVar1;
}



// FUNCTION 141a194c0 ShouldCompilePermutation body=22 status=ok
// SIG undefined ShouldCompilePermutation(void)

bool TOneColorPixelShaderMRT<2>::ShouldCompilePermutation(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1419ef5f0(*param_1);
  return 0 < iVar1;
}



// FUNCTION 141a194e0 FUN_141a194e0 body=21 status=ok
// SIG undefined FUN_141a194e0(void)

bool FUN_141a194e0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1419ef5f0(*param_1);
  return -1 < iVar1;
}



// FUNCTION 141a19500 ShouldCompilePermutation body=22 status=ok
// SIG undefined ShouldCompilePermutation(void)

bool FClearReplacementPS::ShouldCompilePermutation(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1419ef5f0(*param_1);
  return 1 < iVar1;
}



// FUNCTION 141a19520 ShouldCompilePermutation body=40 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined1 FRGBAToYUV420CS::ShouldCompilePermutation(int *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  if (*param_1 == 2) {
    uVar1 = FUN_14168dc80();
    uVar2 = FModuleManager::ModuleExists(uVar1,L"Morpheus");
    return uVar2;
  }
  return 0;
}



// FUNCTION 141a19550 ShouldCompilePermutation body=22 status=ok
// SIG undefined ShouldCompilePermutation(void)

bool FResolveDepthNonMSPS::ShouldCompilePermutation(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1419ef5f0(*param_1);
  return iVar1 < 3;
}



// FUNCTION 141a19570 FUN_141a19570 body=7 status=ok
// SIG undefined FUN_141a19570(void)

bool FUN_141a19570(int *param_1)

{
  return *param_1 == 0;
}



// FUNCTION 141a19580 FUN_141a19580 body=186 status=ok
// SIG undefined FUN_141a19580(void)

void FUN_141a19580(longlong param_1,longlong param_2)

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
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  if (*(short *)(param_1 + 0xd2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d91e40;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = 0;
  }
  return;
}



// FUNCTION 141a19640 zzGetMembersBefore body=605 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FNV12ConvertUB::zzGetMembersBefore(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"ColorTransform";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 4;
  *(undefined4 *)(puVar3 + 4) = 4;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"OutputWidth";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x40;
  puVar1[1] = 3;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"SrgbToLinear";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x44;
  puVar1[1] = 3;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"UVScale";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x48;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"Texture";
  puVar3[1] = L"Texture2D";
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x900000050;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141a198a0 zzGetMembersBefore body=612 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FUYVYConvertUB::zzGetMembersBefore(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"ColorTransform";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 4;
  *(undefined4 *)(puVar3 + 4) = 4;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"SrgbToLinear";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x40;
  puVar1[1] = 3;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"Width";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x44;
  puVar1[1] = 3;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"Texture";
  puVar3[1] = L"Texture2D";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x48;
  puVar1[1] = 9;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"SamplerB";
  puVar3[1] = L"SamplerState";
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x800000050;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141a19b10 zzGetMembersBefore body=612 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FYCbCrConvertUB::zzGetMembersBefore(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"ColorTransform";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 4;
  *(undefined4 *)(puVar3 + 4) = 4;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"SrgbToLinear";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x40;
  puVar1[1] = 3;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"LumaTexture";
  puVar3[1] = L"Texture2D";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x48;
  puVar1[1] = 9;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"CbCrTexture";
  puVar3[1] = L"Texture2D";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x50;
  puVar1[1] = 9;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"LumaSampler";
  puVar3[1] = L"SamplerState";
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x800000058;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141a19d80 zzGetMembersBefore body=605 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FYUVConvertUB::zzGetMembersBefore(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"ColorTransform";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 4;
  *(undefined4 *)(puVar3 + 4) = 4;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"SrgbToLinear";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x40;
  puVar1[1] = 3;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"UVScale";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x48;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"YTexture";
  puVar3[1] = L"Texture2D";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x50;
  puVar1[1] = 9;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"UTexture";
  puVar3[1] = L"Texture2D";
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x900000058;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141a19fe0 zzGetMembersBefore body=514 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FYUVConvertUB::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"VTexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x60;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"YSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x68;
  puVar2[1] = 8;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"USampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x70;
  puVar2[1] = 8;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"VSampler";
  puVar1[1] = L"SamplerState";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x800000078;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141a1a1f0 StartupModule body=532 status=ok
// SIG undefined StartupModule(void)

void FD3D11DynamicRHIModule::StartupModule(void)

{
  LPCWSTR _Src;
  int iVar1;
  void *_Src_00;
  int iVar2;
  undefined8 *puVar3;
  HMODULE pHVar4;
  LPCWSTR pWVar5;
  int iVar6;
  longlong lVar7;
  LPCWSTR pWVar8;
  LPCWSTR pWVar9;
  LPCWSTR local_38;
  int local_30;
  int iStack_2c;
  void *local_28;
  int local_20;
  int local_1c;
  
  puVar3 = (undefined8 *)FPaths::EngineDir(&local_38);
  pWVar5 = (LPCWSTR)0x0;
  iVar2 = *(int *)(puVar3 + 1);
  local_28 = (void *)*puVar3;
  *puVar3 = 0;
  local_20 = *(int *)(puVar3 + 1);
  local_1c = *(int *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  if (local_1c < (int)((0x2f - (uint)(iVar2 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
  }
  FString::PathAppend(&local_28,L"Binaries/ThirdParty/NVIDIA/NVaftermath/Win64/",0x2d);
  if (local_38 != (LPCWSTR)0x0) {
    FMemory::Free();
  }
  local_38 = (LPCWSTR)0x0;
  local_30 = 0x1c;
  iStack_2c = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  _Src = local_38;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_38,0x1c,"GFSDK_Aftermath_Lib.x64.dll",0x1c,0x3f);
  _Src_00 = local_28;
  lVar7 = (longlong)local_20;
  pWVar8 = _Src;
  pWVar9 = pWVar5;
  iVar2 = local_30;
  if (1 < local_20) {
    iVar6 = 0;
    if (local_30 != 0) {
      iVar6 = local_30 + -1;
    }
    if ((local_20 != 0) || (iVar2 = 1, iVar6 == 0)) {
      iVar2 = 0;
    }
    local_38 = (LPCWSTR)0x0;
    local_30 = local_20;
    if ((local_20 == 0) && (iVar2 + iVar6 == 0)) {
      iStack_2c = 0;
      iVar2 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_20 + iVar2 + iVar6,0);
      pWVar5 = local_38;
      ::_guard_xfg_dispatch_icall_nop(local_38,_Src_00,lVar7 * 2);
      iVar2 = local_30;
    }
    pWVar8 = pWVar5;
    pWVar9 = _Src;
    if (iVar6 != 0) {
      local_30 = iVar2 + (uint)(iVar2 == 0) + iVar6;
      if (iStack_2c < local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar2);
        pWVar5 = local_38;
      }
      iVar1 = local_30;
      ::_guard_xfg_dispatch_icall_nop
                (pWVar5 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)),_Src,(longlong)iVar6 * 2);
      (pWVar5 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)))[iVar6] = L'\0';
      pWVar8 = pWVar5;
      iVar2 = iVar1;
    }
  }
  pWVar5 = L"";
  if (iVar2 != 0) {
    pWVar5 = pWVar8;
  }
  pHVar4 = LoadLibraryW(pWVar5);
  if (pWVar8 != (LPCWSTR)0x0) {
    FMemory::Free(pWVar8);
  }
  if (pWVar9 != (LPCWSTR)0x0) {
    FMemory::Free(pWVar9);
  }
  DAT_1469fc509 = pHVar4 != (HMODULE)0x0;
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141a1a410 IsSupported body=80 status=ok
// SIG undefined IsSupported(void)

ulonglong FD3D11DynamicRHIModule::IsSupported(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 == 0) || (*(int *)(param_1 + 8) < 0)) {
    FUN_141a2deb0();
    uVar1 = *(uint *)(param_1 + 0xc);
  }
  uVar2 = (ulonglong)uVar1;
  if ((uVar1 != 0) && (-1 < *(int *)(param_1 + 8))) {
    uVar1 = *(int *)(param_1 + 0xc) - 0x9100;
    uVar2 = (ulonglong)uVar1;
    if (((uVar1 & 0xfffffcff) != 0) || (*(int *)(param_1 + 0xc) == 0x9400)) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141a1a460 FUN_141a1a460 body=108 status=ok
// SIG undefined FUN_141a1a460(void)

undefined8 FUN_141a1a460(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *local_res18 [2];
  
  uVar2 = 0;
  local_res18[0] = (longlong *)0x0;
  SafeCreateDXGIFactory(local_res18);
  lVar1 = operator_new(0x17f20);
  if (lVar1 != 0) {
    uVar2 = FUN_141a225d0(lVar1,local_res18[0],*(undefined4 *)(param_1 + 0xc),
                          *(undefined4 *)(param_1 + 8),param_1 + 0x10);
  }
  if (local_res18[0] != (longlong *)0x0) {
    (**(code **)(*local_res18[0] + 0x10))();
  }
  return uVar2;
}



// FUNCTION 141a1a4d0 FUN_141a1a4d0 body=43 status=ok
// SIG undefined FUN_141a1a4d0(void)

undefined8 * FUN_141a1a4d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 141a1a500 FUN_141a1a500 body=197 status=ok
// SIG undefined FUN_141a1a500(void)

void * FUN_141a1a500(undefined8 *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  _Src = (void *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  iVar1 = *(int *)((longlong)_Src + 0x400);
  *(int *)((longlong)param_2 + 0x400) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x404) = 0;
  }
  else {
    FUN_141a42a00(param_2,iVar1,0);
    _guard_xfg_dispatch_icall_nop(param_2,_Src,(longlong)iVar1 << 5);
  }
  *(undefined4 *)((longlong)param_2 + 0x408) = *(undefined4 *)((longlong)_Src + 0x408);
  uVar3 = *(undefined8 *)((longlong)_Src + 0x414);
  *(undefined8 *)((longlong)param_2 + 0x40c) = *(undefined8 *)((longlong)_Src + 0x40c);
  *(undefined8 *)((longlong)param_2 + 0x414) = uVar3;
  uVar3 = *(undefined8 *)((longlong)_Src + 0x424);
  *(undefined8 *)((longlong)param_2 + 0x41c) = *(undefined8 *)((longlong)_Src + 0x41c);
  *(undefined8 *)((longlong)param_2 + 0x424) = uVar3;
  uVar3 = *(undefined8 *)((longlong)_Src + 0x434);
  *(undefined8 *)((longlong)param_2 + 0x42c) = *(undefined8 *)((longlong)_Src + 0x42c);
  *(undefined8 *)((longlong)param_2 + 0x434) = uVar3;
  uVar3 = *(undefined8 *)((longlong)_Src + 0x444);
  *(undefined8 *)((longlong)param_2 + 0x43c) = *(undefined8 *)((longlong)_Src + 0x43c);
  *(undefined8 *)((longlong)param_2 + 0x444) = uVar3;
  *(undefined8 *)((longlong)param_2 + 0x450) = *puVar2;
  *puVar2 = 0;
  return param_2;
}



// FUNCTION 141a1a5d0 FUN_141a1a5d0 body=308 status=ok
// SIG undefined FUN_141a1a5d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a1a5d0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [2];
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar5 = (ulonglong)*(int *)(param_1 + 0x3fdc);
  if (-1 < *(int *)(param_1 + 0x3fdc)) {
    lVar3 = uVar5 * 8 + 0x1420;
    do {
      if (*(longlong *)(param_1 + 0x27a8 + lVar3) != 0) {
        *(undefined8 *)(param_1 + 0x27a8 + lVar3) = 0;
        iVar2 = *(int *)(param_1 + 0x3fdc);
        if (iVar2 == (int)uVar5) {
          do {
            iVar2 = iVar2 + -1;
            *(int *)(param_1 + 0x3fdc) = iVar2;
            if (iVar2 < 0) break;
          } while (*(longlong *)(param_1 + 0x3bc8 + (longlong)iVar2 * 8) == 0);
        }
        plVar1 = *(longlong **)(lVar3 + 0x218 + param_1);
        local_98[0] = 0;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          *(undefined8 *)(lVar3 + 0x218 + param_1) = local_98[0];
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0x218))
                    (*(longlong **)(param_1 + 0x230),uVar5 & 0xffffffff,1,local_98);
        }
      }
      lVar3 = lVar3 + -8;
      uVar4 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar4;
    } while (-1 < (int)uVar4);
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x25e8),0,0xe0);
  _guard_xfg_dispatch_icall_nop(local_88,0,0x70);
  (**(code **)(**(longlong **)(param_1 + 0x230) + 0x238))
            (*(longlong **)(param_1 + 0x230),0,0xe,local_88);
  return;
}



// FUNCTION 141a1a710 FUN_141a1a710 body=2907 status=ok
// SIG undefined FUN_141a1a710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141a1a710(longlong param_1,uint param_2,uint param_3,uint param_4,char param_5,byte param_6,
             byte param_7,uint param_8,uint param_9,uint param_10,longlong *param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  void *pvVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  uint uVar19;
  longlong *plVar20;
  undefined1 auStack_208 [32];
  uint *local_1e8;
  uint local_1e0;
  longlong **local_1d8;
  longlong *local_1d0;
  uint local_1c8;
  uint local_1c0;
  longlong *local_1b8;
  byte local_1a8;
  char local_1a7;
  char local_1a6;
  byte local_1a5;
  undefined1 local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  longlong *local_190;
  undefined4 local_188;
  uint local_184;
  uint local_180 [2];
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  int local_160;
  uint uStack_15c;
  longlong *local_158;
  int local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  undefined4 local_140;
  ulonglong local_13c;
  uint local_134;
  undefined4 local_130;
  uint local_12c;
  int local_128;
  undefined4 local_124;
  uint local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  uint uStack_114;
  longlong *local_110;
  longlong *local_108;
  void *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  uint local_e4;
  uint local_e0;
  longlong local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  longlong *local_b0;
  longlong local_a8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  uint local_8c;
  undefined4 local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  longlong local_70 [6];
  
  local_70[4] = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_110 = param_11;
  local_1a8 = param_6;
  local_1a5 = param_7;
  local_1a0 = param_8;
  if (DAT_1464c9c14 == 0) {
    param_10 = param_10 & 0xffffffef;
  }
  uVar13 = param_10 & 0x1000000;
  if (uVar13 == 0) {
    iVar14 = (&DAT_1464ca1cc)[(ulonglong)param_7 * 10];
  }
  else {
    iVar14 = 0x57;
  }
  local_198 = param_4;
  local_194 = param_3;
  local_150 = iVar14;
  local_148 = param_2;
  local_a8 = param_1;
  local_188 = FUN_141a2ea30(iVar14,CONCAT31((uint3)(param_10 >> 0xc),(char)(param_10 >> 4)) &
                                   0xffffff01);
  if ((8 < param_9) || (uVar13 != 0)) {
    param_9 = 1;
  }
  local_14c = 6;
  if (param_9 < 2) {
    local_14c = 4;
  }
  local_f0 = 5;
  if (param_9 < 2) {
    local_f0 = 3;
  }
  if ((((param_8 == 0) || (param_2 != local_194)) || (1 << ((char)param_8 - 1U & 0x1f) != param_2))
     || (plVar12 = (longlong *)(ulonglong)(param_9 < 2), uVar13 != 0)) {
    plVar12 = (longlong *)0x0;
  }
  local_88 = 0;
  local_9c = local_194;
  local_98 = param_8;
  local_180[0] = param_10 & 0x40000;
  local_80 = 0;
  if (local_180[0] == 0) {
    local_80 = 8;
  }
  local_94 = local_198;
  local_84 = -(uint)(local_180[0] != 0) & 3;
  local_78 = (uint)param_6 << 2;
  local_7c = -(uint)(local_180[0] != 0) & 0x20000;
  if (uVar13 != 0) {
    local_78 = local_78 | 2;
  }
  if ((param_10 & 0x1000) != 0) {
    local_78 = local_78 | 1;
  }
  plVar18 = (longlong *)0x0;
  if ((param_10 & 0x1000) == 0) {
    plVar18 = plVar12;
  }
  bVar4 = false;
  bVar3 = false;
  local_1a7 = '\0';
  local_1a6 = '\0';
  local_1a4 = 0;
  if ((param_10 & 1) == 0) {
    if ((param_10 & 4) == 0) {
      if ((param_10 & 2) == 0) goto LAB_141a1a94c;
      if (((local_1a5 - 0xb & 0xf6) != 0) || (local_1a5 == 0x13)) goto LAB_141a1a933;
    }
    bVar3 = true;
    local_80 = 0x40;
    if (local_180[0] == 0) {
      local_80 = 0x48;
    }
    local_1a6 = '\x01';
  }
  else {
LAB_141a1a933:
    bVar4 = true;
    local_80 = 0x20;
    if (local_180[0] == 0) {
      local_80 = 0x28;
    }
    local_1a7 = '\x01';
  }
LAB_141a1a94c:
  if ((param_10 & 0x10000) != 0) {
    local_80 = local_80 | 0x80;
  }
  plVar20 = (longlong *)0x0;
  plVar12 = plVar20;
  if ((param_10 & 0x10000) == 0) {
    plVar12 = plVar18;
  }
  local_144 = (uint)plVar12;
  if (((bVar3) || (bVar4)) || ((param_6 != 0 || (param_5 != '\0')))) {
    plVar12 = (longlong *)0x0;
    local_144 = 0;
  }
  local_184 = param_10 & 0xffbfffff;
  local_d0 = 0;
  if ((char)plVar12 != '\0') {
    local_b0 = plVar20;
  }
  local_190 = (longlong *)0x0;
  local_108 = (longlong *)0x0;
  local_170 = (longlong *)0x0;
  local_168 = (longlong *)0x0;
  local_160 = 0;
  uStack_15c = 0;
  local_100 = (void *)0x0;
  local_f8 = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  plVar12 = plVar20;
  local_a0 = param_2;
  local_90 = iVar14;
  local_8c = param_9;
  if ((longlong *)*local_110 != (longlong *)0x0) {
    local_158 = (longlong *)(**(code **)(*(longlong *)*local_110 + 8))();
    iVar14 = param_8 * local_198;
    local_f8 = CONCAT44(local_f8._4_4_,iVar14);
    if (0 < iVar14) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_100);
    }
    pvVar15 = local_100;
    _guard_xfg_dispatch_icall_nop(local_100,0,(longlong)iVar14 << 4);
    uVar9 = (ulonglong)local_198;
    iVar16 = 0;
    iVar14 = iVar16;
    if (local_198 != 0) {
      do {
        uVar19 = 0;
        uVar13 = 0;
        if (local_1a0 != 0) {
          uVar8 = (ulonglong)local_1a5;
          uVar13 = uVar19;
          do {
            uVar6 = (local_148 >> ((byte)uVar19 & 0x1f)) / (uint)(&DAT_1464ca1b8)[uVar8 * 10];
            if (uVar6 < 2) {
              uVar6 = 1;
            }
            uVar7 = (local_194 >> ((byte)uVar19 & 0x1f)) / (uint)(&DAT_1464ca1bc)[uVar8 * 10];
            lVar17 = (longlong)(int)(iVar16 + uVar19);
            if (uVar7 < 2) {
              uVar7 = 1;
            }
            *(ulonglong *)((longlong)pvVar15 + lVar17 * 0x10) =
                 (ulonglong)(uVar13 + iVar14) + (longlong)local_158;
            *(uint *)((longlong)pvVar15 + lVar17 * 0x10 + 8) = (&DAT_1464ca1c4)[uVar8 * 10] * uVar6;
            lVar11 = (longlong)(int)uVar19;
            uVar19 = uVar19 + 1;
            *(uint *)((longlong)pvVar15 + lVar17 * 0x10 + 0xc) =
                 *(int *)((longlong)pvVar15 + lVar11 * 0x10 + 8) * uVar7 * uVar6;
            uVar13 = uVar13 + *(int *)((longlong)pvVar15 + lVar11 * 0x10 + 8) * uVar7;
          } while (uVar19 < local_1a0);
        }
        iVar16 = iVar16 + local_1a0;
        uVar9 = uVar9 - 1;
        iVar14 = iVar14 + uVar13;
      } while (uVar9 != 0);
      plVar12 = (longlong *)(ulonglong)uStack_15c;
      local_178 = (longlong *)0x0;
      pvVar15 = local_100;
      plVar20 = local_170;
      param_1 = local_a8;
    }
    if (*local_110 != 0) goto LAB_141a1ab49;
  }
  pvVar15 = (void *)0x0;
LAB_141a1ab49:
  iVar14 = 0;
  if (local_190 != (longlong *)0x0) {
    (**(code **)(*local_190 + 0x10))();
  }
  plVar18 = *(longlong **)(param_1 + 0x210);
  iVar16 = (**(code **)(*plVar18 + 0x28))(plVar18,&local_a0,pvVar15,&local_190);
  if (iVar16 < 0) {
    local_1c0 = local_80;
    local_1c8 = local_98;
    local_1d0 = (longlong *)CONCAT71(local_1d0._1_7_,(undefined1)local_90);
    local_1d8 = (longlong **)CONCAT44(local_1d8._4_4_,local_94);
    local_1e0 = local_9c;
    local_1e8 = (uint *)CONCAT44(local_1e8._4_4_,local_a0);
    local_1b8 = plVar18;
    FUN_141a444e0(iVar16,"Direct3DDevice->CreateTexture2D(TextureDesc,SubResourceData,OutTexture2D)"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                  ,0x259);
  }
  plVar18 = local_170;
  if ((local_1a7 != '\0') && (uVar13 = 0, local_1a0 != 0)) {
    uVar6 = local_184 & 0x800000;
    uVar19 = local_1a0;
    local_19c = uVar6;
    do {
      uVar7 = 0;
      if ((uVar6 == 0) || ((param_5 == '\0' && (local_1a8 == 0)))) {
        local_e8 = local_188;
        local_dc = 0;
        if ((param_5 == '\0') && (local_1a8 == 0)) {
          local_e4 = local_14c;
        }
        else {
          local_e4 = 5;
          local_dc = (ulonglong)local_94 << 0x20;
        }
        local_178 = (longlong *)0x0;
        local_e0 = uVar13;
        iVar16 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x48))
                           (*(longlong **)(param_1 + 0x210),local_190,&local_e8,&local_178);
        if (iVar16 < 0) {
          local_1e8 = *(uint **)(param_1 + 0x210);
          FUN_141a447e0(iVar16,
                        "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,RenderTargetView.GetInitReference())"
                        ,
                        "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                        ,0x389);
        }
        lVar17 = (longlong)iVar14;
        local_160 = iVar14 + 1;
        if ((int)plVar12 < local_160) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168);
          plVar12 = (longlong *)(ulonglong)uStack_15c;
          plVar20 = local_168;
        }
        iVar14 = local_160;
        plVar20[lVar17] = (longlong)local_178;
        uVar6 = local_19c;
        plVar18 = local_170;
        if ((local_178 != (longlong *)0x0) &&
           ((**(code **)(*local_178 + 8))(), uVar6 = local_19c, plVar18 = local_170,
           local_178 != (longlong *)0x0)) {
          (**(code **)(*local_178 + 0x10))();
          uVar6 = local_19c;
          plVar18 = local_170;
        }
      }
      else {
        local_1a4 = 1;
        uVar19 = local_1a0;
        plVar18 = local_170;
        if (local_94 != 0) {
          do {
            local_c8 = local_188;
            local_158 = (longlong *)0x0;
            local_b8 = 1;
            local_c4 = 5;
            local_c0 = uVar13;
            local_bc = uVar7;
            iVar16 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x48))
                               (*(longlong **)(param_1 + 0x210),local_190,&local_c8,&local_158);
            if (iVar16 < 0) {
              local_1e8 = *(uint **)(param_1 + 0x210);
              FUN_141a447e0(iVar16,
                            "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,RenderTargetView.GetInitReference())"
                            ,
                            "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                            ,0x372);
            }
            lVar17 = (longlong)iVar14;
            local_160 = iVar14 + 1;
            if ((int)plVar12 < local_160) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,iVar14);
              plVar12 = (longlong *)(ulonglong)uStack_15c;
              plVar20 = local_168;
            }
            iVar14 = local_160;
            plVar20[lVar17] = (longlong)local_158;
            if ((local_158 != (longlong *)0x0) &&
               ((**(code **)(*local_158 + 8))(), local_158 != (longlong *)0x0)) {
              (**(code **)(*local_158 + 0x10))();
            }
            uVar7 = uVar7 + 1;
            uVar19 = local_1a0;
            uVar6 = local_19c;
            plVar18 = plVar20;
          } while (uVar7 < local_94);
        }
      }
      local_170 = plVar18;
      uVar13 = uVar13 + 1;
      plVar18 = plVar20;
    } while (uVar13 < uVar19);
  }
  local_170 = plVar18;
  if (local_1a6 != '\0') {
    uVar13 = 0;
    local_120 = 0;
    uStack_114 = 0;
    if (local_150 == 0x13) {
      local_128 = 0x14;
    }
    else if (local_150 == 0x27) {
      local_128 = 0x28;
    }
    else if (local_150 == 0x2c) {
      local_128 = 0x2d;
    }
    else {
      local_128 = 0x37;
      if (local_150 != 0x35) {
        local_128 = local_150;
      }
    }
    if ((param_5 == '\0') && (local_1a8 == 0)) {
      local_124 = local_f0;
    }
    else {
      uStack_114 = local_94;
      local_124 = 4;
    }
    uStack_118 = 0;
    local_11c = 0;
    plVar12 = local_70;
    do {
      iVar16 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x128))();
      if (((iVar16 == 0xb000) ||
          (iVar16 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x128))(), iVar16 == 0xb100)) &&
         ((local_120 = (uint)((uVar13 & 0x21) != 0), local_128 == 0x14 || (local_128 == 0x2d)))) {
        local_120 = -(uint)((uVar13 & 0x12) != 0) & 2 | local_120;
      }
      plVar18 = (longlong *)*plVar12;
      plVar20 = *(longlong **)(param_1 + 0x210);
      *plVar12 = 0;
      if (plVar18 != (longlong *)0x0) {
        (**(code **)(*plVar18 + 0x10))();
      }
      iVar16 = (**(code **)(*plVar20 + 0x50))(plVar20,local_190,&local_128,plVar12);
      if (iVar16 < 0) {
        local_1e8 = *(uint **)(param_1 + 0x210);
        FUN_141a447e0(iVar16,
                      "Direct3DDevice->CreateDepthStencilView(TextureResource,&DSVDesc,DepthStencilViews[AccessType].GetInitReference())"
                      ,
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                      ,0x3af);
      }
      uVar13 = uVar13 + 1;
      plVar12 = plVar12 + 1;
      plVar20 = local_170;
    } while (uVar13 < 4);
  }
  if (local_100 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_180[0] == 0) {
    local_140 = local_188;
    if (local_1a8 == 0) {
      if (param_5 == '\0') {
        local_13c = (ulonglong)local_14c;
      }
      else {
        local_12c = local_94;
        local_13c = 5;
        local_130 = 0;
      }
    }
    else if (param_5 == '\0') {
      local_13c = 9;
    }
    else {
      local_13c = 10;
      local_130 = 0;
      local_12c = local_198 / 6;
    }
    local_134 = local_1a0;
    plVar12 = *(longlong **)(param_1 + 0x210);
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 0x10))();
    }
    iVar16 = (**(code **)(*plVar12 + 0x38))(plVar12,local_190,&local_140,&local_108);
    if (iVar16 < 0) {
      local_1e8 = *(uint **)(param_1 + 0x210);
      FUN_141a447e0(iVar16,
                    "Direct3DDevice->CreateShaderResourceView(TextureResource,&SRVDesc,ShaderResourceView.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                    ,0x3d8);
    }
  }
  puVar10 = (undefined8 *)operator_new(0xf8);
  plVar12 = local_110;
  uVar13 = local_184;
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    *puVar10 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar10 + 1) = 0;
    *puVar10 = &PTR_FUN_144d838f0;
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    *(undefined2 *)(puVar10 + 2) = 0x100;
    puVar10[3] = 0;
    uVar1 = *(undefined4 *)((longlong)local_110 + 0x14);
    lVar17 = local_110[3];
    uVar2 = *(undefined4 *)((longlong)local_110 + 0x1c);
    *(int *)(puVar10 + 4) = (int)local_110[2];
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar1;
    *(int *)(puVar10 + 5) = (int)lVar17;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar2;
    *(int *)(puVar10 + 6) = (int)local_110[4];
    *(uint *)((longlong)puVar10 + 0x34) = local_1a0;
    *(uint *)(puVar10 + 7) = param_9;
    *(uint *)((longlong)puVar10 + 0x3c) = (uint)local_1a5;
    puVar10[9] = puVar10 + 10;
    *(uint *)(puVar10 + 8) = local_184;
    puVar10[10] = 0xc7efffffe0000000;
    puVar10[0xb] = 0;
    *(uint *)(puVar10 + 0xc) = local_148;
    *(uint *)((longlong)puVar10 + 100) = local_194;
    *puVar10 = &PTR_FUN_144d83940;
    local_1d0 = local_70;
    local_1d8 = &local_168;
    local_1e0 = CONCAT31(local_1e0._1_3_,local_1a4);
    local_1e8 = (uint *)CONCAT44(local_1e8._4_4_,local_94);
    FD3D11TextureBase::FD3D11TextureBase(puVar10 + 0xd,param_1,local_190,local_108);
    *(uint *)((longlong)puVar10 + 0xf4) = *(uint *)((longlong)puVar10 + 0xf4) & 0xfffffffe;
    *puVar10 = &PTR_FUN_144da0fb8;
    *(uint *)(puVar10 + 0x1e) = uVar13;
    puVar10[0xd] = &PTR_LAB_144da1010;
    *(uint *)((longlong)puVar10 + 0xf4) =
         ((uint)local_1a8 | *(uint *)((longlong)puVar10 + 0xf4)) & 0xfffffffd |
         (local_144 & 0xff) * 2;
  }
  puVar10[3] = local_d0;
  if ((uVar13 & 1) != 0) {
    *(undefined4 *)(puVar10 + 0xe) = 1;
  }
  D3D11TextureAllocated<FD3D11BaseTexture2D>(puVar10);
  cVar5 = IsRHIDeviceIntel();
  if ((cVar5 != '\0') && ((uVar13 >> 0x1d & 1) != 0)) {
    local_170 = (longlong *)0x0;
    FUN_14004ce50(*(undefined8 *)(param_1 + 0x210),puVar10[0x14],&local_170);
    local_1e8 = local_180;
    puVar10[0x11] = local_170;
    local_180[0] = 1;
    FUN_14004cf30(*(undefined8 *)(param_1 + 0x210),local_170,1,1);
  }
  if ((longlong *)*plVar12 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar12 + 0x18))();
  }
  plVar12 = local_70 + 4;
  lVar17 = 4;
  do {
    plVar18 = plVar12 + -1;
    plVar12 = plVar12 + -1;
    lVar17 = lVar17 + -1;
    if ((longlong *)*plVar18 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar18 + 0x10))();
    }
    plVar18 = plVar20;
  } while (lVar17 != 0);
  for (; iVar14 != 0; iVar14 = iVar14 + -1) {
    if ((longlong *)*plVar18 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar18 + 0x10))();
    }
    plVar18 = plVar18 + 1;
  }
  if (plVar20 != (longlong *)0x0) {
    FMemory::Free(plVar20);
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x10))();
  }
  if (local_190 != (longlong *)0x0) {
    (**(code **)(*local_190 + 0x10))();
  }
  return puVar10;
}



// FUNCTION 141a1b270 FUN_141a1b270 body=2891 status=ok
// SIG undefined FUN_141a1b270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141a1b270(longlong param_1,uint param_2,uint param_3,uint param_4,char param_5,byte param_6,
             byte param_7,uint param_8,uint param_9,uint param_10,longlong *param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  void *pvVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  uint uVar19;
  longlong *plVar20;
  undefined1 auStack_208 [32];
  uint *local_1e8;
  uint local_1e0;
  longlong **local_1d8;
  longlong *local_1d0;
  uint local_1c8;
  uint local_1c0;
  longlong *local_1b8;
  byte local_1a8;
  char local_1a7;
  char local_1a6;
  byte local_1a5;
  undefined1 local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  longlong *local_190;
  undefined4 local_188;
  uint local_184;
  uint local_180 [2];
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  int local_160;
  uint uStack_15c;
  longlong *local_158;
  int local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  undefined4 local_140;
  ulonglong local_13c;
  uint local_134;
  undefined4 local_130;
  uint local_12c;
  int local_128;
  undefined4 local_124;
  uint local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  uint uStack_114;
  longlong *local_110;
  longlong *local_108;
  void *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  uint local_e4;
  uint local_e0;
  longlong local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  longlong *local_b0;
  longlong local_a8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  uint local_8c;
  undefined4 local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  longlong local_70 [6];
  
  local_70[4] = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_110 = param_11;
  local_1a8 = param_6;
  local_1a5 = param_7;
  local_1a0 = param_8;
  if (DAT_1464c9c14 == 0) {
    param_10 = param_10 & 0xffffffef;
  }
  uVar13 = param_10 & 0x1000000;
  if (uVar13 == 0) {
    iVar14 = (&DAT_1464ca1cc)[(ulonglong)param_7 * 10];
  }
  else {
    iVar14 = 0x57;
  }
  local_198 = param_4;
  local_194 = param_3;
  local_150 = iVar14;
  local_148 = param_2;
  local_a8 = param_1;
  local_188 = FUN_141a2ea30(iVar14,CONCAT31((uint3)(param_10 >> 0xc),(char)(param_10 >> 4)) &
                                   0xffffff01);
  if ((8 < param_9) || (local_8c = param_9, uVar13 != 0)) {
    local_8c = 1;
  }
  local_14c = 6;
  if (local_8c < 2) {
    local_14c = 4;
  }
  local_f0 = 5;
  if (local_8c < 2) {
    local_f0 = 3;
  }
  if ((((param_8 == 0) || (param_2 != local_194)) || (1 << ((char)param_8 - 1U & 0x1f) != param_2))
     || (plVar12 = (longlong *)(ulonglong)(local_8c < 2), uVar13 != 0)) {
    plVar12 = (longlong *)0x0;
  }
  local_88 = 0;
  local_9c = local_194;
  local_98 = param_8;
  local_180[0] = param_10 & 0x40000;
  local_80 = 0;
  if (local_180[0] == 0) {
    local_80 = 8;
  }
  local_94 = local_198;
  local_84 = -(uint)(local_180[0] != 0) & 3;
  local_78 = (uint)param_6 << 2;
  local_7c = -(uint)(local_180[0] != 0) & 0x20000;
  if (uVar13 != 0) {
    local_78 = local_78 | 2;
  }
  if ((param_10 & 0x1000) != 0) {
    local_78 = local_78 | 1;
  }
  plVar17 = (longlong *)0x0;
  if ((param_10 & 0x1000) == 0) {
    plVar17 = plVar12;
  }
  bVar4 = false;
  bVar3 = false;
  local_1a7 = '\0';
  local_1a6 = '\0';
  local_1a4 = 0;
  if ((param_10 & 1) == 0) {
    if ((param_10 & 4) == 0) {
      if ((param_10 & 2) == 0) goto LAB_141a1b4a6;
      if (((local_1a5 - 0xb & 0xf6) != 0) || (local_1a5 == 0x13)) goto LAB_141a1b48d;
    }
    bVar3 = true;
    local_80 = 0x40;
    if (local_180[0] == 0) {
      local_80 = 0x48;
    }
    local_1a6 = '\x01';
  }
  else {
LAB_141a1b48d:
    bVar4 = true;
    local_80 = 0x20;
    if (local_180[0] == 0) {
      local_80 = 0x28;
    }
    local_1a7 = '\x01';
  }
LAB_141a1b4a6:
  if ((param_10 & 0x10000) != 0) {
    local_80 = local_80 | 0x80;
  }
  plVar20 = (longlong *)0x0;
  plVar12 = plVar20;
  if ((param_10 & 0x10000) == 0) {
    plVar12 = plVar17;
  }
  local_144 = (uint)plVar12;
  if (((bVar3) || (bVar4)) || ((param_6 != 0 || (param_5 != '\0')))) {
    plVar12 = (longlong *)0x0;
    local_144 = 0;
  }
  local_184 = param_10 & 0xffbfffff;
  local_d0 = 0;
  if ((char)plVar12 != '\0') {
    local_b0 = plVar20;
  }
  local_190 = (longlong *)0x0;
  local_108 = (longlong *)0x0;
  local_170 = (longlong *)0x0;
  local_168 = (longlong *)0x0;
  local_160 = 0;
  uStack_15c = 0;
  local_100 = (void *)0x0;
  local_f8 = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  plVar12 = plVar20;
  local_a0 = param_2;
  local_90 = iVar14;
  if ((longlong *)*local_110 != (longlong *)0x0) {
    local_158 = (longlong *)(**(code **)(*(longlong *)*local_110 + 8))();
    iVar14 = param_8 * local_198;
    local_f8 = CONCAT44(local_f8._4_4_,iVar14);
    if (0 < iVar14) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_100);
    }
    pvVar15 = local_100;
    _guard_xfg_dispatch_icall_nop(local_100,0,(longlong)iVar14 << 4);
    uVar9 = (ulonglong)local_198;
    iVar16 = 0;
    iVar14 = iVar16;
    if (local_198 != 0) {
      do {
        uVar19 = 0;
        uVar13 = 0;
        if (local_1a0 != 0) {
          uVar8 = (ulonglong)local_1a5;
          uVar13 = uVar19;
          do {
            uVar6 = (local_148 >> ((byte)uVar19 & 0x1f)) / (uint)(&DAT_1464ca1b8)[uVar8 * 10];
            if (uVar6 < 2) {
              uVar6 = 1;
            }
            uVar7 = (local_194 >> ((byte)uVar19 & 0x1f)) / (uint)(&DAT_1464ca1bc)[uVar8 * 10];
            lVar18 = (longlong)(int)(iVar16 + uVar19);
            if (uVar7 < 2) {
              uVar7 = 1;
            }
            *(ulonglong *)((longlong)pvVar15 + lVar18 * 0x10) =
                 (ulonglong)(uVar13 + iVar14) + (longlong)local_158;
            *(uint *)((longlong)pvVar15 + lVar18 * 0x10 + 8) = (&DAT_1464ca1c4)[uVar8 * 10] * uVar6;
            lVar11 = (longlong)(int)uVar19;
            uVar19 = uVar19 + 1;
            *(uint *)((longlong)pvVar15 + lVar18 * 0x10 + 0xc) =
                 uVar7 * uVar6 * *(int *)((longlong)pvVar15 + lVar11 * 0x10 + 8);
            uVar13 = uVar13 + uVar7 * *(int *)((longlong)pvVar15 + lVar11 * 0x10 + 8);
          } while (uVar19 < local_1a0);
        }
        iVar16 = iVar16 + local_1a0;
        uVar9 = uVar9 - 1;
        iVar14 = iVar14 + uVar13;
      } while (uVar9 != 0);
      plVar12 = (longlong *)(ulonglong)uStack_15c;
      local_178 = (longlong *)0x0;
      pvVar15 = local_100;
      plVar20 = local_170;
      param_1 = local_a8;
    }
    if (*local_110 != 0) goto LAB_141a1b6a8;
  }
  pvVar15 = (void *)0x0;
LAB_141a1b6a8:
  iVar14 = 0;
  if (local_190 != (longlong *)0x0) {
    (**(code **)(*local_190 + 0x10))();
  }
  plVar17 = *(longlong **)(param_1 + 0x210);
  iVar16 = (**(code **)(*plVar17 + 0x28))(plVar17,&local_a0,pvVar15,&local_190);
  if (iVar16 < 0) {
    local_1c0 = local_80;
    local_1c8 = local_98;
    local_1d0 = (longlong *)CONCAT71(local_1d0._1_7_,(undefined1)local_90);
    local_1d8 = (longlong **)CONCAT44(local_1d8._4_4_,local_94);
    local_1e0 = local_9c;
    local_1e8 = (uint *)CONCAT44(local_1e8._4_4_,local_a0);
    local_1b8 = plVar17;
    FUN_141a444e0(iVar16,"Direct3DDevice->CreateTexture2D(TextureDesc,SubResourceData,OutTexture2D)"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                  ,0x259);
  }
  plVar17 = local_170;
  if ((local_1a7 != '\0') && (uVar13 = 0, local_1a0 != 0)) {
    uVar6 = local_184 & 0x800000;
    uVar19 = local_1a0;
    local_19c = uVar6;
    do {
      uVar7 = 0;
      if ((uVar6 == 0) || ((param_5 == '\0' && (local_1a8 == 0)))) {
        local_e8 = local_188;
        local_dc = 0;
        if ((param_5 == '\0') && (local_1a8 == 0)) {
          local_e4 = local_14c;
        }
        else {
          local_e4 = 5;
          local_dc = (ulonglong)local_94 << 0x20;
        }
        local_178 = (longlong *)0x0;
        local_e0 = uVar13;
        iVar16 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x48))
                           (*(longlong **)(param_1 + 0x210),local_190,&local_e8,&local_178);
        if (iVar16 < 0) {
          local_1e8 = *(uint **)(param_1 + 0x210);
          FUN_141a447e0(iVar16,
                        "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,RenderTargetView.GetInitReference())"
                        ,
                        "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                        ,0x389);
        }
        lVar18 = (longlong)iVar14;
        local_160 = iVar14 + 1;
        if ((int)plVar12 < local_160) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168);
          plVar12 = (longlong *)(ulonglong)uStack_15c;
          plVar20 = local_168;
        }
        iVar14 = local_160;
        plVar20[lVar18] = (longlong)local_178;
        uVar6 = local_19c;
        plVar17 = local_170;
        if ((local_178 != (longlong *)0x0) &&
           ((**(code **)(*local_178 + 8))(), uVar6 = local_19c, plVar17 = local_170,
           local_178 != (longlong *)0x0)) {
          (**(code **)(*local_178 + 0x10))();
          uVar6 = local_19c;
          plVar17 = local_170;
        }
      }
      else {
        local_1a4 = 1;
        uVar19 = local_1a0;
        plVar17 = local_170;
        if (local_94 != 0) {
          do {
            local_c8 = local_188;
            local_158 = (longlong *)0x0;
            local_b8 = 1;
            local_c4 = 5;
            local_c0 = uVar13;
            local_bc = uVar7;
            iVar16 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x48))
                               (*(longlong **)(param_1 + 0x210),local_190,&local_c8,&local_158);
            if (iVar16 < 0) {
              local_1e8 = *(uint **)(param_1 + 0x210);
              FUN_141a447e0(iVar16,
                            "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,RenderTargetView.GetInitReference())"
                            ,
                            "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                            ,0x372);
            }
            lVar18 = (longlong)iVar14;
            local_160 = iVar14 + 1;
            if ((int)plVar12 < local_160) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,iVar14);
              plVar12 = (longlong *)(ulonglong)uStack_15c;
              plVar20 = local_168;
            }
            iVar14 = local_160;
            plVar20[lVar18] = (longlong)local_158;
            if ((local_158 != (longlong *)0x0) &&
               ((**(code **)(*local_158 + 8))(), local_158 != (longlong *)0x0)) {
              (**(code **)(*local_158 + 0x10))();
            }
            uVar7 = uVar7 + 1;
            uVar19 = local_1a0;
            uVar6 = local_19c;
            plVar17 = plVar20;
          } while (uVar7 < local_94);
        }
      }
      local_170 = plVar17;
      uVar13 = uVar13 + 1;
      plVar17 = plVar20;
    } while (uVar13 < uVar19);
  }
  local_170 = plVar17;
  if (local_1a6 != '\0') {
    uVar13 = 0;
    local_120 = 0;
    uStack_114 = 0;
    if (local_150 == 0x13) {
      local_128 = 0x14;
    }
    else if (local_150 == 0x27) {
      local_128 = 0x28;
    }
    else if (local_150 == 0x2c) {
      local_128 = 0x2d;
    }
    else {
      local_128 = 0x37;
      if (local_150 != 0x35) {
        local_128 = local_150;
      }
    }
    if ((param_5 == '\0') && (local_1a8 == 0)) {
      local_124 = local_f0;
    }
    else {
      uStack_114 = local_94;
      local_124 = 4;
    }
    uStack_118 = 0;
    local_11c = 0;
    plVar12 = local_70;
    do {
      iVar16 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x128))();
      if (((iVar16 == 0xb000) ||
          (iVar16 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x128))(), iVar16 == 0xb100)) &&
         ((local_120 = (uint)((uVar13 & 0x21) != 0), local_128 == 0x14 || (local_128 == 0x2d)))) {
        local_120 = -(uint)((uVar13 & 0x12) != 0) & 2 | local_120;
      }
      plVar17 = (longlong *)*plVar12;
      plVar20 = *(longlong **)(param_1 + 0x210);
      *plVar12 = 0;
      if (plVar17 != (longlong *)0x0) {
        (**(code **)(*plVar17 + 0x10))();
      }
      iVar16 = (**(code **)(*plVar20 + 0x50))(plVar20,local_190,&local_128,plVar12);
      if (iVar16 < 0) {
        local_1e8 = *(uint **)(param_1 + 0x210);
        FUN_141a447e0(iVar16,
                      "Direct3DDevice->CreateDepthStencilView(TextureResource,&DSVDesc,DepthStencilViews[AccessType].GetInitReference())"
                      ,
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                      ,0x3af);
      }
      uVar13 = uVar13 + 1;
      plVar12 = plVar12 + 1;
      plVar20 = local_170;
    } while (uVar13 < 4);
  }
  if (local_100 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_180[0] == 0) {
    local_140 = local_188;
    if (local_1a8 == 0) {
      if (param_5 == '\0') {
        local_13c = (ulonglong)local_14c;
      }
      else {
        local_12c = local_94;
        local_13c = 5;
        local_130 = 0;
      }
    }
    else if (param_5 == '\0') {
      local_13c = 9;
    }
    else {
      local_13c = 10;
      local_130 = 0;
      local_12c = local_198 / 6;
    }
    local_134 = local_1a0;
    plVar12 = *(longlong **)(param_1 + 0x210);
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 0x10))();
    }
    iVar16 = (**(code **)(*plVar12 + 0x38))(plVar12,local_190,&local_140,&local_108);
    if (iVar16 < 0) {
      local_1e8 = *(uint **)(param_1 + 0x210);
      FUN_141a447e0(iVar16,
                    "Direct3DDevice->CreateShaderResourceView(TextureResource,&SRVDesc,ShaderResourceView.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                    ,0x3d8);
    }
  }
  puVar10 = (undefined8 *)operator_new(0x100);
  plVar12 = local_110;
  uVar13 = local_184;
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    *puVar10 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar10 + 1) = 0;
    *puVar10 = &PTR_FUN_144d838f0;
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    *(undefined2 *)(puVar10 + 2) = 0x100;
    puVar10[3] = 0;
    uVar1 = *(undefined4 *)((longlong)local_110 + 0x14);
    lVar18 = local_110[3];
    uVar2 = *(undefined4 *)((longlong)local_110 + 0x1c);
    *(int *)(puVar10 + 4) = (int)local_110[2];
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar1;
    *(int *)(puVar10 + 5) = (int)lVar18;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar2;
    *(int *)(puVar10 + 6) = (int)local_110[4];
    *(uint *)((longlong)puVar10 + 0x34) = local_1a0;
    *(undefined4 *)(puVar10 + 7) = 1;
    *(uint *)((longlong)puVar10 + 0x3c) = (uint)local_1a5;
    puVar10[9] = puVar10 + 10;
    *(uint *)(puVar10 + 8) = local_184;
    puVar10[10] = 0xc7efffffe0000000;
    puVar10[0xb] = 0;
    *(uint *)(puVar10 + 0xc) = local_148;
    *(uint *)((longlong)puVar10 + 100) = local_194;
    *(uint *)(puVar10 + 0xd) = local_198;
    *puVar10 = &PTR_FUN_144d83998;
    local_1d0 = local_70;
    local_1d8 = &local_168;
    local_1e0 = CONCAT31(local_1e0._1_3_,local_1a4);
    local_1e8 = (uint *)CONCAT44(local_1e8._4_4_,local_94);
    FD3D11TextureBase::FD3D11TextureBase(puVar10 + 0xe,param_1,local_190,local_108);
    *(uint *)((longlong)puVar10 + 0xfc) = *(uint *)((longlong)puVar10 + 0xfc) & 0xfffffffe;
    *puVar10 = &PTR__scalar_deleting_destructor__144da1d68;
    *(uint *)(puVar10 + 0x1f) = uVar13;
    puVar10[0xe] = &PTR_LAB_144da1db8;
    *(uint *)((longlong)puVar10 + 0xfc) =
         ((uint)local_1a8 | *(uint *)((longlong)puVar10 + 0xfc)) & 0xfffffffd |
         (local_144 & 0xff) * 2;
  }
  puVar10[3] = local_d0;
  if ((uVar13 & 1) != 0) {
    *(undefined4 *)(puVar10 + 0xf) = 1;
  }
  FUN_141a1d850(puVar10);
  cVar5 = IsRHIDeviceIntel();
  if ((cVar5 != '\0') && ((uVar13 >> 0x1d & 1) != 0)) {
    local_170 = (longlong *)0x0;
    FUN_14004ce50(*(undefined8 *)(param_1 + 0x210),puVar10[0x15],&local_170);
    local_1e8 = local_180;
    puVar10[0x12] = local_170;
    local_180[0] = 1;
    FUN_14004cf30(*(undefined8 *)(param_1 + 0x210),local_170,1,1);
  }
  if ((longlong *)*plVar12 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar12 + 0x18))();
  }
  plVar12 = local_70 + 4;
  lVar18 = 4;
  do {
    plVar17 = plVar12 + -1;
    plVar12 = plVar12 + -1;
    lVar18 = lVar18 + -1;
    if ((longlong *)*plVar17 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar17 + 0x10))();
    }
    plVar17 = plVar20;
  } while (lVar18 != 0);
  for (; iVar14 != 0; iVar14 = iVar14 + -1) {
    if ((longlong *)*plVar17 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar17 + 0x10))();
    }
    plVar17 = plVar17 + 1;
  }
  if (plVar20 != (longlong *)0x0) {
    FMemory::Free(plVar20);
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x10))();
  }
  if (local_190 != (longlong *)0x0) {
    (**(code **)(*local_190 + 0x10))();
  }
  return puVar10;
}



// FUNCTION 141a1bdc0 FUN_141a1bdc0 body=2923 status=ok
// SIG undefined FUN_141a1bdc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141a1bdc0(longlong param_1,uint param_2,uint param_3,uint param_4,char param_5,byte param_6,
             byte param_7,uint param_8,uint param_9,uint param_10,longlong *param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  void *pvVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  uint uVar19;
  longlong *plVar20;
  undefined1 auStack_218 [32];
  uint *local_1f8;
  uint local_1f0;
  longlong **local_1e8;
  longlong *local_1e0;
  uint local_1d8;
  uint local_1d0;
  longlong *local_1c8;
  byte local_1b8;
  char local_1b7;
  char local_1b6;
  byte local_1b5;
  undefined1 local_1b4;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  longlong *local_1a0;
  undefined4 local_198;
  uint local_194;
  uint local_190 [2];
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  int local_170;
  uint uStack_16c;
  longlong *local_168;
  int local_160;
  uint local_15c;
  uint local_158;
  undefined4 local_150;
  ulonglong local_14c;
  uint local_144;
  undefined4 local_140;
  uint local_13c;
  int local_138;
  undefined4 local_134;
  uint local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  uint uStack_124;
  longlong *local_120;
  longlong *local_118;
  void *local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  uint local_f4;
  uint local_f0;
  longlong local_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  uint local_d0;
  uint local_cc;
  undefined4 local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  longlong local_78 [7];
  
  local_78[4] = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_120 = param_11;
  local_1b8 = param_6;
  local_1b5 = param_7;
  local_1b0 = param_8;
  if (DAT_1464c9c14 == 0) {
    param_10 = param_10 & 0xffffffef;
  }
  uVar13 = param_10 & 0x1000000;
  if (uVar13 == 0) {
    iVar14 = (&DAT_1464ca1cc)[(ulonglong)param_7 * 10];
  }
  else {
    iVar14 = 0x57;
  }
  local_1ac = param_3;
  local_1a8 = param_4;
  local_1a4 = param_2;
  local_160 = iVar14;
  local_b0 = param_1;
  local_198 = FUN_141a2ea30(iVar14,CONCAT31((uint3)(param_10 >> 0xc),(char)(param_10 >> 4)) &
                                   0xffffff01);
  if ((8 < param_9) || (local_94 = param_9, uVar13 != 0)) {
    local_94 = 1;
  }
  local_15c = 6;
  if (local_94 < 2) {
    local_15c = 4;
  }
  local_100 = 5;
  if (local_94 < 2) {
    local_100 = 3;
  }
  if ((((param_8 == 0) || (local_1a4 != param_3)) || (1 << ((char)param_8 - 1U & 0x1f) != local_1a4)
      ) || (plVar12 = (longlong *)(ulonglong)(local_94 < 2), uVar13 != 0)) {
    plVar12 = (longlong *)0x0;
  }
  local_a8 = local_1a4;
  local_90 = 0;
  local_a0 = param_8;
  local_190[0] = param_10 & 0x40000;
  local_88 = 0;
  if (local_190[0] == 0) {
    local_88 = 8;
  }
  local_9c = local_1a8;
  local_8c = -(uint)(local_190[0] != 0) & 3;
  local_80 = (uint)param_6 << 2;
  local_84 = -(uint)(local_190[0] != 0) & 0x20000;
  if (uVar13 != 0) {
    local_80 = local_80 | 2;
  }
  if ((param_10 & 0x1000) != 0) {
    local_80 = local_80 | 1;
  }
  plVar17 = (longlong *)0x0;
  if ((param_10 & 0x1000) == 0) {
    plVar17 = plVar12;
  }
  bVar4 = false;
  bVar3 = false;
  local_1b7 = '\0';
  local_1b6 = '\0';
  local_1b4 = 0;
  if ((param_10 & 1) == 0) {
    if ((param_10 & 4) == 0) {
      if ((param_10 & 2) == 0) goto LAB_141a1c000;
      if (((local_1b5 - 0xb & 0xf6) != 0) || (local_1b5 == 0x13)) goto LAB_141a1bfe7;
    }
    bVar3 = true;
    local_88 = 0x40;
    if (local_190[0] == 0) {
      local_88 = 0x48;
    }
    local_1b6 = '\x01';
  }
  else {
LAB_141a1bfe7:
    bVar4 = true;
    local_88 = 0x20;
    if (local_190[0] == 0) {
      local_88 = 0x28;
    }
    local_1b7 = '\x01';
  }
LAB_141a1c000:
  if ((param_10 & 0x10000) != 0) {
    local_88 = local_88 | 0x80;
  }
  plVar20 = (longlong *)0x0;
  plVar12 = plVar20;
  if ((param_10 & 0x10000) == 0) {
    plVar12 = plVar17;
  }
  local_158 = (uint)plVar12;
  if (((bVar3) || (bVar4)) || ((param_6 != 0 || (param_5 != '\0')))) {
    plVar12 = (longlong *)0x0;
    local_158 = 0;
  }
  local_194 = param_10 & 0xffbfffff;
  local_e0 = 0;
  if ((char)plVar12 != '\0') {
    local_c0 = plVar20;
  }
  local_1a0 = (longlong *)0x0;
  local_118 = (longlong *)0x0;
  local_180 = (longlong *)0x0;
  local_178 = (longlong *)0x0;
  local_170 = 0;
  uStack_16c = 0;
  local_110 = (void *)0x0;
  local_108 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  plVar12 = plVar20;
  local_a4 = param_3;
  local_98 = iVar14;
  if ((longlong *)*local_120 != (longlong *)0x0) {
    local_b8 = (**(code **)(*(longlong *)*local_120 + 8))();
    iVar14 = param_8 * local_1a8;
    local_108 = CONCAT44(local_108._4_4_,iVar14);
    if (0 < iVar14) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_110);
    }
    pvVar15 = local_110;
    _guard_xfg_dispatch_icall_nop(local_110,0,(longlong)iVar14 << 4);
    uVar9 = (ulonglong)local_1a8;
    iVar16 = 0;
    iVar14 = iVar16;
    if (local_1a8 != 0) {
      do {
        uVar19 = 0;
        uVar13 = 0;
        if (local_1b0 != 0) {
          uVar8 = (ulonglong)local_1b5;
          uVar13 = uVar19;
          do {
            uVar6 = (local_1a4 >> ((byte)uVar19 & 0x1f)) / (uint)(&DAT_1464ca1b8)[uVar8 * 10];
            if (uVar6 < 2) {
              uVar6 = 1;
            }
            uVar7 = (local_1ac >> ((byte)uVar19 & 0x1f)) / (uint)(&DAT_1464ca1bc)[uVar8 * 10];
            lVar18 = (longlong)(int)(iVar16 + uVar19);
            if (uVar7 < 2) {
              uVar7 = 1;
            }
            *(ulonglong *)((longlong)local_110 + lVar18 * 0x10) =
                 (ulonglong)(uVar13 + iVar14) + local_b8;
            *(uint *)((longlong)local_110 + lVar18 * 0x10 + 8) =
                 (&DAT_1464ca1c4)[uVar8 * 10] * uVar6;
            lVar11 = (longlong)(int)uVar19;
            uVar19 = uVar19 + 1;
            *(uint *)((longlong)local_110 + lVar18 * 0x10 + 0xc) =
                 *(int *)((longlong)local_110 + lVar11 * 0x10 + 8) * uVar7 * uVar6;
            uVar13 = uVar13 + *(int *)((longlong)local_110 + lVar11 * 0x10 + 8) * uVar7;
          } while (uVar19 < local_1b0);
        }
        iVar16 = iVar16 + local_1b0;
        uVar9 = uVar9 - 1;
        iVar14 = iVar14 + uVar13;
      } while (uVar9 != 0);
      plVar12 = (longlong *)(ulonglong)uStack_16c;
      local_188 = (longlong *)0x0;
      pvVar15 = local_110;
      plVar20 = local_180;
      param_1 = local_b0;
    }
    if (*local_120 != 0) goto LAB_141a1c210;
  }
  pvVar15 = (void *)0x0;
LAB_141a1c210:
  iVar14 = 0;
  if (local_1a0 != (longlong *)0x0) {
    (**(code **)(*local_1a0 + 0x10))();
  }
  plVar17 = *(longlong **)(param_1 + 0x210);
  iVar16 = (**(code **)(*plVar17 + 0x28))(plVar17,&local_a8,pvVar15,&local_1a0);
  if (iVar16 < 0) {
    local_1d0 = local_88;
    local_1d8 = local_a0;
    local_1e0 = (longlong *)CONCAT71(local_1e0._1_7_,(undefined1)local_98);
    local_1e8 = (longlong **)CONCAT44(local_1e8._4_4_,local_9c);
    local_1f0 = local_a4;
    local_1f8 = (uint *)CONCAT44(local_1f8._4_4_,local_a8);
    local_1c8 = plVar17;
    FUN_141a444e0(iVar16,"Direct3DDevice->CreateTexture2D(TextureDesc,SubResourceData,OutTexture2D)"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                  ,0x259);
  }
  plVar17 = local_180;
  if ((local_1b7 != '\0') && (uVar13 = 0, local_1b0 != 0)) {
    uVar6 = local_194 & 0x800000;
    uVar19 = local_1b0;
    local_1ac = uVar6;
    do {
      uVar7 = 0;
      if ((uVar6 == 0) || ((param_5 == '\0' && (local_1b8 == 0)))) {
        local_f8 = local_198;
        local_ec = 0;
        if ((param_5 == '\0') && (local_1b8 == 0)) {
          local_f4 = local_15c;
        }
        else {
          local_f4 = 5;
          local_ec = (ulonglong)local_9c << 0x20;
        }
        local_188 = (longlong *)0x0;
        local_f0 = uVar13;
        iVar16 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x48))
                           (*(longlong **)(param_1 + 0x210),local_1a0,&local_f8,&local_188);
        if (iVar16 < 0) {
          local_1f8 = *(uint **)(param_1 + 0x210);
          FUN_141a447e0(iVar16,
                        "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,RenderTargetView.GetInitReference())"
                        ,
                        "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                        ,0x389);
        }
        lVar18 = (longlong)iVar14;
        local_170 = iVar14 + 1;
        if ((int)plVar12 < local_170) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_178);
          plVar12 = (longlong *)(ulonglong)uStack_16c;
          plVar20 = local_178;
        }
        iVar14 = local_170;
        plVar20[lVar18] = (longlong)local_188;
        uVar6 = local_1ac;
        plVar17 = local_180;
        if ((local_188 != (longlong *)0x0) &&
           ((**(code **)(*local_188 + 8))(), uVar6 = local_1ac, plVar17 = local_180,
           local_188 != (longlong *)0x0)) {
          (**(code **)(*local_188 + 0x10))();
          uVar6 = local_1ac;
          plVar17 = local_180;
        }
      }
      else {
        local_1b4 = 1;
        uVar19 = local_1b0;
        plVar17 = local_180;
        if (local_9c != 0) {
          do {
            local_d8 = local_198;
            local_168 = (longlong *)0x0;
            local_c8 = 1;
            local_d4 = 5;
            local_d0 = uVar13;
            local_cc = uVar7;
            iVar16 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x48))
                               (*(longlong **)(param_1 + 0x210),local_1a0,&local_d8,&local_168);
            if (iVar16 < 0) {
              local_1f8 = *(uint **)(param_1 + 0x210);
              FUN_141a447e0(iVar16,
                            "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,RenderTargetView.GetInitReference())"
                            ,
                            "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                            ,0x372);
            }
            lVar18 = (longlong)iVar14;
            local_170 = iVar14 + 1;
            if ((int)plVar12 < local_170) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_178,iVar14);
              plVar12 = (longlong *)(ulonglong)uStack_16c;
              plVar20 = local_178;
            }
            iVar14 = local_170;
            plVar20[lVar18] = (longlong)local_168;
            if ((local_168 != (longlong *)0x0) &&
               ((**(code **)(*local_168 + 8))(), local_168 != (longlong *)0x0)) {
              (**(code **)(*local_168 + 0x10))();
            }
            uVar7 = uVar7 + 1;
            uVar19 = local_1b0;
            uVar6 = local_1ac;
            plVar17 = plVar20;
          } while (uVar7 < local_9c);
        }
      }
      local_180 = plVar17;
      uVar13 = uVar13 + 1;
      plVar17 = plVar20;
    } while (uVar13 < uVar19);
  }
  local_180 = plVar17;
  if (local_1b6 != '\0') {
    uVar13 = 0;
    local_130 = 0;
    uStack_124 = 0;
    if (local_160 == 0x13) {
      local_138 = 0x14;
    }
    else if (local_160 == 0x27) {
      local_138 = 0x28;
    }
    else if (local_160 == 0x2c) {
      local_138 = 0x2d;
    }
    else {
      local_138 = 0x37;
      if (local_160 != 0x35) {
        local_138 = local_160;
      }
    }
    if ((param_5 == '\0') && (local_1b8 == 0)) {
      local_134 = local_100;
    }
    else {
      uStack_124 = local_9c;
      local_134 = 4;
    }
    uStack_128 = 0;
    local_12c = 0;
    plVar12 = local_78;
    do {
      iVar16 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x128))();
      if (((iVar16 == 0xb000) ||
          (iVar16 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x128))(), iVar16 == 0xb100)) &&
         ((local_130 = (uint)((uVar13 & 0x21) != 0), local_138 == 0x14 || (local_138 == 0x2d)))) {
        local_130 = -(uint)((uVar13 & 0x12) != 0) & 2 | local_130;
      }
      plVar17 = (longlong *)*plVar12;
      plVar20 = *(longlong **)(param_1 + 0x210);
      *plVar12 = 0;
      if (plVar17 != (longlong *)0x0) {
        (**(code **)(*plVar17 + 0x10))();
      }
      iVar16 = (**(code **)(*plVar20 + 0x50))(plVar20,local_1a0,&local_138,plVar12);
      if (iVar16 < 0) {
        local_1f8 = *(uint **)(param_1 + 0x210);
        FUN_141a447e0(iVar16,
                      "Direct3DDevice->CreateDepthStencilView(TextureResource,&DSVDesc,DepthStencilViews[AccessType].GetInitReference())"
                      ,
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                      ,0x3af);
      }
      uVar13 = uVar13 + 1;
      plVar12 = plVar12 + 1;
      plVar20 = local_180;
    } while (uVar13 < 4);
  }
  if (local_110 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_190[0] == 0) {
    local_150 = local_198;
    if (local_1b8 == 0) {
      if (param_5 == '\0') {
        local_14c = (ulonglong)local_15c;
      }
      else {
        local_13c = local_9c;
        local_14c = 5;
        local_140 = 0;
      }
    }
    else if (param_5 == '\0') {
      local_14c = 9;
    }
    else {
      local_14c = 10;
      local_140 = 0;
      local_13c = local_1a8 / 6;
    }
    local_144 = local_1b0;
    plVar12 = *(longlong **)(param_1 + 0x210);
    if (local_118 != (longlong *)0x0) {
      (**(code **)(*local_118 + 0x10))();
    }
    iVar16 = (**(code **)(*plVar12 + 0x38))(plVar12,local_1a0,&local_150,&local_118);
    if (iVar16 < 0) {
      local_1f8 = *(uint **)(param_1 + 0x210);
      FUN_141a447e0(iVar16,
                    "Direct3DDevice->CreateShaderResourceView(TextureResource,&SRVDesc,ShaderResourceView.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                    ,0x3d8);
    }
  }
  puVar10 = (undefined8 *)operator_new(0xf8);
  plVar12 = local_120;
  uVar13 = local_194;
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    *puVar10 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar10 + 1) = 0;
    *puVar10 = &PTR_FUN_144d838f0;
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    *(undefined2 *)(puVar10 + 2) = 0x100;
    puVar10[3] = 0;
    uVar1 = *(undefined4 *)((longlong)local_120 + 0x14);
    lVar18 = local_120[3];
    uVar2 = *(undefined4 *)((longlong)local_120 + 0x1c);
    *(int *)(puVar10 + 4) = (int)local_120[2];
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar1;
    *(int *)(puVar10 + 5) = (int)lVar18;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar2;
    *(int *)(puVar10 + 6) = (int)local_120[4];
    *(uint *)((longlong)puVar10 + 0x34) = local_1b0;
    *(undefined4 *)(puVar10 + 7) = 1;
    *(uint *)((longlong)puVar10 + 0x3c) = (uint)local_1b5;
    puVar10[9] = puVar10 + 10;
    *(uint *)(puVar10 + 8) = local_194;
    puVar10[10] = 0xc7efffffe0000000;
    puVar10[0xb] = 0;
    *(uint *)(puVar10 + 0xc) = local_1a4;
    *puVar10 = &PTR_FUN_144d83a38;
    local_1e0 = local_78;
    local_1e8 = &local_178;
    local_1f0 = CONCAT31(local_1f0._1_3_,local_1b4);
    local_1f8 = (uint *)CONCAT44(local_1f8._4_4_,local_9c);
    FD3D11TextureBase::FD3D11TextureBase(puVar10 + 0xd,param_1,local_1a0,local_118);
    *(uint *)((longlong)puVar10 + 0xf4) = *(uint *)((longlong)puVar10 + 0xf4) & 0xfffffffe;
    *puVar10 = &PTR_FUN_144da1dd8;
    *(uint *)(puVar10 + 0x1e) = uVar13;
    puVar10[0xd] = &PTR_LAB_144da1e28;
    *(uint *)((longlong)puVar10 + 0xf4) =
         ((uint)local_1b8 | *(uint *)((longlong)puVar10 + 0xf4)) & 0xfffffffd |
         (local_158 & 0xff) * 2;
  }
  puVar10[3] = local_e0;
  if ((uVar13 & 1) != 0) {
    *(undefined4 *)(puVar10 + 0xe) = 1;
  }
  D3D11TextureAllocated<FD3D11BaseTexture2D>(puVar10);
  cVar5 = IsRHIDeviceIntel();
  if ((cVar5 != '\0') && ((uVar13 >> 0x1d & 1) != 0)) {
    local_180 = (longlong *)0x0;
    FUN_14004ce50(*(undefined8 *)(param_1 + 0x210),puVar10[0x14],&local_180);
    local_1f8 = local_190;
    puVar10[0x11] = local_180;
    local_190[0] = 1;
    FUN_14004cf30(*(undefined8 *)(param_1 + 0x210),local_180,1,1);
  }
  if ((longlong *)*plVar12 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar12 + 0x18))();
  }
  plVar12 = local_78 + 4;
  lVar18 = 4;
  do {
    plVar17 = plVar12 + -1;
    plVar12 = plVar12 + -1;
    lVar18 = lVar18 + -1;
    if ((longlong *)*plVar17 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar17 + 0x10))();
    }
    plVar17 = plVar20;
  } while (lVar18 != 0);
  for (; iVar14 != 0; iVar14 = iVar14 + -1) {
    if ((longlong *)*plVar17 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar17 + 0x10))();
    }
    plVar17 = plVar17 + 1;
  }
  if (plVar20 != (longlong *)0x0) {
    FMemory::Free(plVar20);
  }
  if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 0x10))();
  }
  if (local_1a0 != (longlong *)0x0) {
    (**(code **)(*local_1a0 + 0x10))();
  }
  return puVar10;
}



// FUNCTION 141a1c930 FUN_141a1c930 body=1807 status=ok
// SIG undefined FUN_141a1c930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141a1c930(longlong param_1,char param_2,byte param_3,int param_4,uint param_5,
             undefined4 *param_6,longlong *param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined1 local_160;
  longlong **local_158;
  longlong *local_150;
  char local_148;
  byte local_147;
  undefined1 local_146;
  undefined4 local_144;
  uint local_140;
  uint local_13c;
  longlong *local_138;
  uint local_130;
  longlong *local_128;
  uint local_120;
  uint uStack_11c;
  int local_118;
  undefined4 local_114;
  undefined4 local_110;
  ulonglong local_10c;
  undefined4 local_100;
  uint local_fc;
  int local_f8;
  undefined4 local_f4;
  uint local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  int local_c8;
  undefined4 local_c0;
  uint local_bc;
  int local_b8;
  longlong local_b4;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88;
  uint local_84;
  uint local_7c;
  uint local_70;
  longlong local_60 [5];
  
  local_60[4] = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_13c = param_5;
  local_138 = param_7;
  local_148 = param_2;
  local_147 = param_3;
  local_c8 = param_4;
  (**(code **)(*param_7 + 0x50))(param_7,&local_90);
  if ((param_5 >> 0x18 & 1) == 0) {
    iVar6 = (&DAT_1464ca1cc)[(longlong)param_4 * 10];
  }
  else {
    iVar6 = 0x57;
  }
  local_118 = iVar6;
  local_144 = FUN_141a2ea30(iVar6,param_5 >> 4 & 0xffffff01);
  uVar9 = 4;
  local_130 = 4;
  local_114 = 3;
  if (1 < local_7c) {
    uVar9 = 6;
    local_114 = 5;
    local_130 = 6;
  }
  plVar11 = (longlong *)0x0;
  local_d0 = (longlong *)0x0;
  local_146 = 0;
  local_128 = (longlong *)0x0;
  local_120 = 0;
  uStack_11c = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  plVar16 = plVar11;
  if (((local_70 & 0x20) != 0) && (local_88 != 0)) {
    uVar5 = local_13c & 0x800000;
    plVar10 = plVar11;
    plVar13 = plVar11;
    local_140 = uVar5;
    uVar8 = local_144;
    do {
      uVar12 = 0;
      iVar14 = (int)plVar10;
      if ((uVar5 == 0) || ((local_148 == '\0' && (local_147 == 0)))) {
        local_b4 = 0;
        if ((local_148 != '\0') || (local_bc = uVar9, local_147 != 0)) {
          local_bc = 5;
          local_b4 = (ulonglong)local_84 << 0x20;
        }
        local_d8 = (longlong *)0x0;
        local_c0 = uVar8;
        local_b8 = iVar14;
        iVar6 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x48))
                          (*(longlong **)(param_1 + 0x210),param_7,&local_c0);
        if (iVar6 < 0) {
          local_168 = *(undefined8 *)(param_1 + 0x210);
          FUN_141a447e0(iVar6,
                        "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,RenderTargetView.GetInitReference())"
                        ,
                        "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                       );
        }
        iVar6 = (int)plVar11;
        local_120 = iVar6 + 1;
        if ((int)plVar13 < (int)local_120) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_128,plVar11);
          plVar13 = (longlong *)(ulonglong)uStack_11c;
          plVar16 = local_128;
        }
        plVar11 = (longlong *)(ulonglong)local_120;
        plVar16[iVar6] = (longlong)local_d8;
        param_7 = local_138;
        uVar5 = local_140;
        uVar8 = local_144;
        if ((local_d8 != (longlong *)0x0) &&
           ((**(code **)(*local_d8 + 8))(), param_7 = local_138, uVar5 = local_140,
           uVar8 = local_144, local_d8 != (longlong *)0x0)) {
          (**(code **)(*local_d8 + 0x10))();
          param_7 = local_138;
          uVar5 = local_140;
          uVar8 = local_144;
        }
      }
      else {
        local_146 = 1;
        if (local_84 != 0) {
          do {
            local_a8 = uVar8;
            local_e0 = (longlong *)0x0;
            local_a4 = 5;
            local_98 = 1;
            local_a0 = iVar14;
            local_9c = uVar12;
            iVar6 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x48))
                              (*(longlong **)(param_1 + 0x210),param_7,&local_a8,&local_e0);
            if (iVar6 < 0) {
              local_168 = *(undefined8 *)(param_1 + 0x210);
              FUN_141a447e0(iVar6,
                            "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,RenderTargetView.GetInitReference())"
                            ,
                            "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                            ,0x8a3);
            }
            iVar6 = (int)plVar11;
            local_120 = iVar6 + 1;
            if ((int)plVar13 < (int)local_120) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_128,plVar11);
              plVar13 = (longlong *)(ulonglong)uStack_11c;
              plVar16 = local_128;
            }
            plVar11 = (longlong *)(ulonglong)local_120;
            plVar16[iVar6] = (longlong)local_e0;
            if ((local_e0 != (longlong *)0x0) &&
               ((**(code **)(*local_e0 + 8))(), local_e0 != (longlong *)0x0)) {
              (**(code **)(*local_e0 + 0x10))();
            }
            uVar12 = uVar12 + 1;
            param_7 = local_138;
            uVar5 = local_140;
            uVar8 = local_144;
          } while (uVar12 < local_84);
        }
      }
      plVar10 = (longlong *)(ulonglong)(iVar14 + 1U);
      iVar6 = local_118;
      uVar9 = local_130;
    } while (iVar14 + 1U < local_88);
  }
  plVar10 = local_138;
  uVar9 = 0;
  if ((local_70 & 0x40) != 0) {
    local_f0 = 0;
    uStack_e4 = 0;
    if (iVar6 == 0x13) {
      local_f8 = 0x14;
    }
    else if (iVar6 == 0x27) {
      local_f8 = 0x28;
    }
    else if (iVar6 == 0x2c) {
      local_f8 = 0x2d;
    }
    else {
      local_f8 = 0x37;
      if (iVar6 != 0x35) {
        local_f8 = iVar6;
      }
    }
    if ((local_148 == '\0') && (local_147 == 0)) {
      local_f4 = local_114;
    }
    else {
      uStack_e4 = local_84;
      local_f4 = 4;
    }
    uStack_e8 = 0;
    local_ec = 0;
    plVar13 = local_60;
    do {
      iVar6 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x128))();
      if (((iVar6 == 0xb000) ||
          (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x128))(), iVar6 == 0xb100)) &&
         ((local_f0 = (uint)((uVar9 & 0x21) != 0), local_f8 == 0x14 || (local_f8 == 0x2d)))) {
        local_f0 = -(uint)((uVar9 & 0x12) != 0) & 2 | local_f0;
      }
      plVar1 = (longlong *)*plVar13;
      plVar2 = *(longlong **)(param_1 + 0x210);
      *plVar13 = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      iVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,plVar10,&local_f8,plVar13);
      if (iVar6 < 0) {
        local_168 = *(undefined8 *)(param_1 + 0x210);
        FUN_141a447e0(iVar6,
                      "Direct3DDevice->CreateDepthStencilView(TextureResource,&DSVDesc,DepthStencilViews[AccessType].GetInitReference())"
                      ,
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                      ,0x8e0);
      }
      uVar9 = uVar9 + 1;
      plVar13 = plVar13 + 1;
    } while (uVar9 < 4);
  }
  lVar15 = 4;
  if ((local_70 & 8) != 0) {
    local_110 = local_144;
    if (local_147 == 0) {
      if (local_148 == '\0') {
        local_10c = (ulonglong)local_130;
      }
      else {
        local_fc = local_84;
        local_10c = 5;
        local_100 = 0;
      }
    }
    else if (local_148 == '\0') {
      local_10c = 9;
    }
    else {
      local_10c = 10;
      local_100 = 0;
      local_fc = local_84 / 6;
    }
    plVar10 = *(longlong **)(param_1 + 0x210);
    if (local_d0 != (longlong *)0x0) {
      (**(code **)(*local_d0 + 0x10))();
    }
    iVar6 = (**(code **)(*plVar10 + 0x38))(plVar10,local_138,&local_110,&local_d0);
    if (iVar6 < 0) {
      local_168 = *(undefined8 *)(param_1 + 0x210);
      FUN_141a447e0(iVar6,
                    "Direct3DDevice->CreateShaderResourceView(TextureResource,&SRVDesc,ShaderResourceView.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                    ,0x907);
    }
  }
  puVar7 = (undefined8 *)operator_new(0xf8);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    *puVar7 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &PTR_FUN_144d838f0;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *(undefined2 *)(puVar7 + 2) = 0x100;
    puVar7[3] = 0;
    uVar8 = param_6[1];
    uVar3 = param_6[2];
    uVar4 = param_6[3];
    *(undefined4 *)(puVar7 + 4) = *param_6;
    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar8;
    *(undefined4 *)(puVar7 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar4;
    *(undefined4 *)(puVar7 + 6) = param_6[4];
    *(int *)((longlong)puVar7 + 0x3c) = local_c8;
    *(uint *)(puVar7 + 8) = local_13c;
    puVar7[9] = puVar7 + 10;
    *(uint *)((longlong)puVar7 + 0x34) = local_88;
    *(uint *)(puVar7 + 7) = local_7c;
    puVar7[10] = 0xc7efffffe0000000;
    puVar7[0xb] = 0;
    *puVar7 = &PTR_FUN_144d83940;
    local_150 = local_60;
    local_158 = &local_128;
    local_160 = local_146;
    local_168 = CONCAT44(local_168._4_4_,local_84);
    *(undefined4 *)(puVar7 + 0xc) = local_90;
    *(undefined4 *)((longlong)puVar7 + 100) = local_8c;
    FD3D11TextureBase::FD3D11TextureBase(puVar7 + 0xd,param_1,local_138,local_d0);
    *puVar7 = &PTR_FUN_144da0fb8;
    puVar7[0xd] = &PTR_LAB_144da1010;
    *(uint *)(puVar7 + 0x1e) = local_13c;
    *(uint *)((longlong)puVar7 + 0xf4) =
         (*(uint *)((longlong)puVar7 + 0xf4) & 0xfffffffe | (uint)local_147) & 0xfffffffd;
  }
  if ((local_13c & 1) != 0) {
    *(undefined4 *)(puVar7 + 0xe) = 1;
  }
  D3D11TextureAllocated<FD3D11BaseTexture2D>(puVar7);
  plVar10 = local_60 + 4;
  do {
    plVar13 = plVar10 + -1;
    plVar10 = plVar10 + -1;
    lVar15 = lVar15 + -1;
    if ((longlong *)*plVar13 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar13 + 0x10))();
    }
  } while (lVar15 != 0);
  uVar9 = (uint)plVar11;
  plVar10 = plVar16;
  while (uVar9 != 0) {
    if ((longlong *)*plVar10 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar10 + 0x10))();
    }
    plVar10 = plVar10 + 1;
    uVar9 = (int)plVar11 - 1;
    plVar11 = (longlong *)(ulonglong)uVar9;
  }
  if (plVar16 != (longlong *)0x0) {
    FMemory::Free(plVar16);
  }
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))();
  }
  return puVar7;
}



// FUNCTION 141a1d040 FUN_141a1d040 body=1791 status=ok
// SIG undefined FUN_141a1d040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141a1d040(longlong param_1,char param_2,byte param_3,int param_4,uint param_5,
             undefined4 *param_6,longlong *param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined1 local_160;
  longlong **local_158;
  longlong *local_150;
  char local_148;
  byte local_147;
  undefined1 local_146;
  undefined4 local_144;
  uint local_140;
  uint local_13c;
  longlong *local_138;
  uint local_130;
  longlong *local_128;
  uint local_120;
  uint uStack_11c;
  int local_118;
  undefined4 local_114;
  undefined4 local_110;
  ulonglong local_10c;
  undefined4 local_100;
  uint local_fc;
  int local_f8;
  undefined4 local_f4;
  uint local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  int local_c8;
  undefined4 local_c0;
  uint local_bc;
  int local_b8;
  longlong local_b4;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_90 [2];
  uint local_88;
  uint local_84;
  uint local_7c;
  uint local_70;
  longlong local_60 [5];
  
  local_60[4] = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_13c = param_5;
  local_138 = param_7;
  local_148 = param_2;
  local_147 = param_3;
  local_c8 = param_4;
  (**(code **)(*param_7 + 0x50))(param_7,local_90);
  if ((param_5 >> 0x18 & 1) == 0) {
    iVar6 = (&DAT_1464ca1cc)[(longlong)param_4 * 10];
  }
  else {
    iVar6 = 0x57;
  }
  local_118 = iVar6;
  local_144 = FUN_141a2ea30(iVar6);
  uVar9 = 4;
  local_130 = 4;
  local_114 = 3;
  if (1 < local_7c) {
    uVar9 = 6;
    local_114 = 5;
    local_130 = 6;
  }
  plVar13 = (longlong *)0x0;
  local_d0 = (longlong *)0x0;
  local_146 = 0;
  local_128 = (longlong *)0x0;
  local_120 = 0;
  uStack_11c = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  plVar16 = plVar13;
  if (((local_70 & 0x20) != 0) && (local_88 != 0)) {
    uVar5 = local_13c & 0x800000;
    plVar10 = plVar13;
    plVar12 = plVar13;
    local_140 = uVar5;
    uVar8 = local_144;
    do {
      uVar11 = 0;
      iVar14 = (int)plVar10;
      if ((uVar5 == 0) || ((local_148 == '\0' && (local_147 == 0)))) {
        local_b4 = 0;
        if ((local_148 != '\0') || (local_bc = uVar9, local_147 != 0)) {
          local_bc = 5;
          local_b4 = (ulonglong)local_84 << 0x20;
        }
        local_d8 = (longlong *)0x0;
        local_c0 = uVar8;
        local_b8 = iVar14;
        iVar6 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x48))
                          (*(longlong **)(param_1 + 0x210),param_7,&local_c0);
        if (iVar6 < 0) {
          local_168 = *(undefined8 *)(param_1 + 0x210);
          FUN_141a447e0(iVar6,
                        "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,RenderTargetView.GetInitReference())"
                        ,
                        "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                       );
        }
        iVar6 = (int)plVar13;
        local_120 = iVar6 + 1;
        if ((int)plVar12 < (int)local_120) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_128);
          plVar12 = (longlong *)(ulonglong)uStack_11c;
          plVar16 = local_128;
        }
        plVar13 = (longlong *)(ulonglong)local_120;
        plVar16[iVar6] = (longlong)local_d8;
        param_7 = local_138;
        uVar5 = local_140;
        uVar8 = local_144;
        if ((local_d8 != (longlong *)0x0) &&
           ((**(code **)(*local_d8 + 8))(), param_7 = local_138, uVar5 = local_140,
           uVar8 = local_144, local_d8 != (longlong *)0x0)) {
          (**(code **)(*local_d8 + 0x10))();
          param_7 = local_138;
          uVar5 = local_140;
          uVar8 = local_144;
        }
      }
      else {
        local_146 = 1;
        if (local_84 != 0) {
          do {
            local_a8 = uVar8;
            local_e0 = (longlong *)0x0;
            local_a4 = 5;
            local_98 = 1;
            local_a0 = iVar14;
            local_9c = uVar11;
            iVar6 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x48))
                              (*(longlong **)(param_1 + 0x210),param_7,&local_a8,&local_e0);
            if (iVar6 < 0) {
              local_168 = *(undefined8 *)(param_1 + 0x210);
              FUN_141a447e0(iVar6,
                            "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,RenderTargetView.GetInitReference())"
                            ,
                            "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                            ,0x8a3);
            }
            iVar6 = (int)plVar13;
            local_120 = iVar6 + 1;
            if ((int)plVar12 < (int)local_120) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_128);
              plVar12 = (longlong *)(ulonglong)uStack_11c;
              plVar16 = local_128;
            }
            plVar13 = (longlong *)(ulonglong)local_120;
            plVar16[iVar6] = (longlong)local_e0;
            if ((local_e0 != (longlong *)0x0) &&
               ((**(code **)(*local_e0 + 8))(), local_e0 != (longlong *)0x0)) {
              (**(code **)(*local_e0 + 0x10))();
            }
            uVar11 = uVar11 + 1;
            param_7 = local_138;
            uVar5 = local_140;
            uVar8 = local_144;
          } while (uVar11 < local_84);
        }
      }
      plVar10 = (longlong *)(ulonglong)(iVar14 + 1U);
      iVar6 = local_118;
      uVar9 = local_130;
    } while (iVar14 + 1U < local_88);
  }
  plVar10 = local_138;
  uVar9 = 0;
  if ((local_70 & 0x40) != 0) {
    local_f0 = 0;
    uStack_e4 = 0;
    if (iVar6 == 0x13) {
      local_f8 = 0x14;
    }
    else if (iVar6 == 0x27) {
      local_f8 = 0x28;
    }
    else if (iVar6 == 0x2c) {
      local_f8 = 0x2d;
    }
    else {
      local_f8 = 0x37;
      if (iVar6 != 0x35) {
        local_f8 = iVar6;
      }
    }
    if ((local_148 == '\0') && (local_147 == 0)) {
      local_f4 = local_114;
    }
    else {
      uStack_e4 = local_84;
      local_f4 = 4;
    }
    uStack_e8 = 0;
    local_ec = 0;
    plVar12 = local_60;
    do {
      iVar6 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x128))();
      if (((iVar6 == 0xb000) ||
          (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x128))(), iVar6 == 0xb100)) &&
         ((local_f0 = (uint)((uVar9 & 0x21) != 0), local_f8 == 0x14 || (local_f8 == 0x2d)))) {
        local_f0 = -(uint)((uVar9 & 0x12) != 0) & 2 | local_f0;
      }
      plVar1 = (longlong *)*plVar12;
      plVar2 = *(longlong **)(param_1 + 0x210);
      *plVar12 = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      iVar6 = (**(code **)(*plVar2 + 0x50))(plVar2,plVar10,&local_f8,plVar12);
      if (iVar6 < 0) {
        local_168 = *(undefined8 *)(param_1 + 0x210);
        FUN_141a447e0(iVar6,
                      "Direct3DDevice->CreateDepthStencilView(TextureResource,&DSVDesc,DepthStencilViews[AccessType].GetInitReference())"
                      ,
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                      ,0x8e0);
      }
      uVar9 = uVar9 + 1;
      plVar12 = plVar12 + 1;
    } while (uVar9 < 4);
  }
  lVar15 = 4;
  plVar10 = local_138;
  if ((local_70 & 8) != 0) {
    local_110 = local_144;
    if (local_147 == 0) {
      if (local_148 == '\0') {
        local_10c = (ulonglong)local_130;
      }
      else {
        local_fc = local_84;
        local_10c = 5;
        local_100 = 0;
      }
    }
    else if (local_148 == '\0') {
      local_10c = 9;
    }
    else {
      local_10c = 10;
      local_100 = 0;
      local_fc = local_84 / 6;
    }
    plVar12 = *(longlong **)(param_1 + 0x210);
    if (local_d0 != (longlong *)0x0) {
      (**(code **)(*local_d0 + 0x10))();
    }
    plVar10 = local_138;
    iVar6 = (**(code **)(*plVar12 + 0x38))(plVar12,local_138,&local_110,&local_d0);
    if (iVar6 < 0) {
      local_168 = *(undefined8 *)(param_1 + 0x210);
      FUN_141a447e0(iVar6,
                    "Direct3DDevice->CreateShaderResourceView(TextureResource,&SRVDesc,ShaderResourceView.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                    ,0x907);
    }
  }
  puVar7 = (undefined8 *)operator_new(0xf8);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    *puVar7 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &PTR_FUN_144d838f0;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *(undefined2 *)(puVar7 + 2) = 0x100;
    puVar7[3] = 0;
    uVar8 = param_6[1];
    uVar3 = param_6[2];
    uVar4 = param_6[3];
    *(undefined4 *)(puVar7 + 4) = *param_6;
    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar8;
    *(undefined4 *)(puVar7 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar4;
    *(undefined4 *)(puVar7 + 6) = param_6[4];
    *(int *)((longlong)puVar7 + 0x3c) = local_c8;
    *(uint *)(puVar7 + 8) = local_13c;
    puVar7[9] = puVar7 + 10;
    *(uint *)((longlong)puVar7 + 0x34) = local_88;
    *(undefined4 *)(puVar7 + 7) = 1;
    puVar7[10] = 0xc7efffffe0000000;
    puVar7[0xb] = 0;
    *puVar7 = &PTR_FUN_144d83a38;
    local_150 = local_60;
    *(undefined4 *)(puVar7 + 0xc) = local_90[0];
    local_158 = &local_128;
    local_160 = local_146;
    local_168 = CONCAT44(local_168._4_4_,local_84);
    FD3D11TextureBase::FD3D11TextureBase(puVar7 + 0xd,param_1,plVar10,local_d0);
    *puVar7 = &PTR_FUN_144da1dd8;
    puVar7[0xd] = &PTR_LAB_144da1e28;
    *(uint *)(puVar7 + 0x1e) = local_13c;
    *(uint *)((longlong)puVar7 + 0xf4) =
         (*(uint *)((longlong)puVar7 + 0xf4) & 0xfffffffe | (uint)local_147) & 0xfffffffd;
  }
  if ((local_13c & 1) != 0) {
    *(undefined4 *)(puVar7 + 0xe) = 1;
  }
  D3D11TextureAllocated<FD3D11BaseTexture2D>(puVar7);
  plVar10 = local_60 + 4;
  do {
    plVar12 = plVar10 + -1;
    plVar10 = plVar10 + -1;
    lVar15 = lVar15 + -1;
    if ((longlong *)*plVar12 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar12 + 0x10))();
    }
  } while (lVar15 != 0);
  uVar9 = (uint)plVar13;
  plVar10 = plVar16;
  while (uVar9 != 0) {
    if ((longlong *)*plVar10 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar10 + 0x10))();
    }
    plVar10 = plVar10 + 1;
    uVar9 = (int)plVar13 - 1;
    plVar13 = (longlong *)(ulonglong)uVar9;
  }
  if (plVar16 != (longlong *)0x0) {
    FMemory::Free(plVar16);
  }
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))();
  }
  return puVar7;
}



// FUNCTION 141a1d740 D3D11TextureAllocated<FD3D11BaseTexture2D> body=261 status=ok
// SIG undefined D3D11TextureAllocated<FD3D11BaseTexture2D>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong D3D11TextureAllocated<FD3D11BaseTexture2D>(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar3;
  ulonglong uVar2;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  byte local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    if ((*(uint *)(param_1 + 0xf0) & 0x400000) != 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      return local_18;
    }
    (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    local_18 = CalcTextureSize(local_48,local_44,*(undefined4 *)(param_1 + 0x3c),local_40);
    lVar4 = local_18 * local_3c;
    *(int *)(param_1 + 0x90) = (int)lVar4;
    if (lVar4 != 0) {
      if (lVar4 < 1) {
        lVar4 = -((longlong)
                  ((0x3ffU - lVar4 & 0xfffffffffffffc00) +
                  (ulonglong)((uint)((longlong)(0x3ffU - lVar4) >> 0x3f) & 0x3ff)) >> 10);
      }
      else {
        lVar4 = (longlong)
                ((lVar4 + 0x3ffU & 0xfffffffffffffc00) +
                (ulonglong)((uint)((longlong)(lVar4 + 0x3ffU) >> 0x3f) & 0x3ff)) >> 10;
      }
      uVar3 = (undefined4)((ulonglong)lVar4 >> 0x20);
      if ((local_28 & 0xe0) == 0) {
        LOCK();
        uVar2 = CONCAT44(uVar3,DAT_146ab6300);
        DAT_146ab6300 = DAT_146ab6300 + (int)lVar4;
        UNLOCK();
        return uVar2;
      }
      LOCK();
      local_18 = CONCAT44(uVar3,DAT_146ab6304);
      UNLOCK();
      DAT_146ab6304 = DAT_146ab6304 + (int)lVar4;
    }
  }
  return local_18;
}



// FUNCTION 141a1d850 FUN_141a1d850 body=261 status=ok
// SIG undefined FUN_141a1d850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141a1d850(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar3;
  ulonglong uVar2;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  byte local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    if ((*(uint *)(param_1 + 0xf8) & 0x400000) != 0) {
      *(undefined4 *)(param_1 + 0x98) = 0;
      return local_18;
    }
    (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    local_18 = CalcTextureSize(local_48,local_44,*(undefined4 *)(param_1 + 0x3c),local_40);
    lVar4 = local_18 * local_3c;
    *(int *)(param_1 + 0x98) = (int)lVar4;
    if (lVar4 != 0) {
      if (lVar4 < 1) {
        lVar4 = -((longlong)
                  ((0x3ffU - lVar4 & 0xfffffffffffffc00) +
                  (ulonglong)((uint)((longlong)(0x3ffU - lVar4) >> 0x3f) & 0x3ff)) >> 10);
      }
      else {
        lVar4 = (longlong)
                ((lVar4 + 0x3ffU & 0xfffffffffffffc00) +
                (ulonglong)((uint)((longlong)(lVar4 + 0x3ffU) >> 0x3f) & 0x3ff)) >> 10;
      }
      uVar3 = (undefined4)((ulonglong)lVar4 >> 0x20);
      if ((local_28 & 0xe0) == 0) {
        LOCK();
        uVar2 = CONCAT44(uVar3,DAT_146ab6300);
        DAT_146ab6300 = DAT_146ab6300 + (int)lVar4;
        UNLOCK();
        return uVar2;
      }
      LOCK();
      local_18 = CONCAT44(uVar3,DAT_146ab6304);
      UNLOCK();
      DAT_146ab6304 = DAT_146ab6304 + (int)lVar4;
    }
  }
  return local_18;
}



// FUNCTION 141a1d960 Emplace<TPairInitializer<FD3D11LockedKey_&&,FD3D11LockedData_const_&>_> body=486 status=ok
// SIG undefined Emplace<TPairInitializer<FD3D11LockedKey_&&,FD3D11LockedData_const_&>_>(void)

int * TSet<TTuple<FD3D11LockedKey,FD3D11LockedData>,TDefaultMapHashableKeyFuncs<FD3D11LockedKey,FD3D11LockedData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FD3D11LockedKey_&&,FD3D11LockedData_const_&>_>
                (longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  void *_Dst;
  uint uVar11;
  bool bVar12;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  plVar7 = (longlong *)param_3[1];
  *param_2 = local_38[0];
  puVar1 = (undefined4 *)*param_3;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)local_30 = *puVar1;
  *(undefined4 *)((longlong)local_30 + 4) = uVar3;
  *(undefined4 *)(local_30 + 1) = uVar4;
  *(undefined4 *)((longlong)local_30 + 0xc) = uVar5;
  plVar2 = (longlong *)*plVar7;
  local_30[2] = (ulonglong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(local_30 + 3) = (int)plVar7[1];
  *(undefined4 *)((longlong)local_30 + 0x1c) = *(undefined4 *)((longlong)plVar7 + 0xc);
  local_30[4] = plVar7[2];
  bVar12 = false;
  *(char *)(local_30 + 5) = (char)plVar7[3];
  *(undefined4 *)(local_30 + 6) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    FindId(param_1,local_res8,local_30);
    bVar12 = local_res8[0] != -1;
    if (bVar12) {
      _Dst = (void *)((longlong)local_res8[0] * 0x38 + *param_1);
      plVar7 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_30,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_141a1db23;
    }
  }
  cVar6 = TSet<TTuple<TSharedRef<FString,1>,FTextId>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,FTextId,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar6 == '\0') {
    iVar10 = (int)(*local_30 >> 4);
    uVar9 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar11 = -(uVar9 + iVar10) ^ uVar9 >> 0xd;
    uVar8 = (iVar10 - uVar9) - uVar11 ^ uVar11 >> 0xc;
    uVar9 = (uVar9 - uVar8) - uVar11 ^ uVar8 << 0x10;
    uVar11 = (uVar11 - uVar9) - uVar8 ^ uVar9 >> 5;
    uVar8 = (uVar8 - uVar9) - uVar11 ^ uVar11 >> 3;
    uVar9 = (uVar9 - uVar8) - uVar11 ^ uVar8 << 10;
    uVar8 = ((uVar11 - uVar9) - uVar8 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x34) = uVar8;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 6) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_141a1db23:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 141a1db50 Emplace<TPairInitializer<unsigned_int_&,FString_&&>_> body=440 status=ok
// SIG undefined Emplace<TPairInitializer<unsigned_int_&,FString_&&>_>(void)

int * TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_&,FString_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_28 [2];
  uint *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  puVar1 = (undefined8 *)param_3[1];
  bVar7 = false;
  *param_2 = local_28[0];
  *local_20 = *(uint *)*param_3;
  local_20[2] = 0;
  local_20[3] = 0;
  *(undefined8 *)(local_20 + 2) = *puVar1;
  *puVar1 = 0;
  local_20[4] = *(uint *)(puVar1 + 1);
  local_20[5] = *(uint *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_20[6] = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_20) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)((longlong)iVar4 * 0x20 + *param_1) == *local_20) goto LAB_141a1dc2b;
          iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_141a1dc2b:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)iVar4 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_141a1dcdd;
    }
  }
  cVar2 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_20;
    local_20[7] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_20[6] = *(uint *)((longlong)plVar3 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_141a1dcdd:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 141a1dd10 Emplace<TPairInitializer<unsigned_int_const_&,FString_&>_> body=424 status=ok
// SIG undefined Emplace<TPairInitializer<unsigned_int_const_&,FString_&>_>(void)

int * TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,FString_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_28 [2];
  uint *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  uVar1 = param_3[1];
  *param_2 = local_28[0];
  *local_20 = *(uint *)*param_3;
  FString::FString(local_20 + 2,uVar1);
  local_20[6] = 0xffffffff;
  bVar7 = false;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_20) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)((longlong)iVar4 * 0x20 + *param_1) == *local_20) goto LAB_141a1dddb;
          iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_141a1dddb:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)iVar4 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_141a1de8d;
    }
  }
  cVar2 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_20;
    local_20[7] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_20[6] = *(uint *)((longlong)plVar3 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_141a1de8d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 141a1dec0 FUN_141a1dec0 body=664 status=ok
// SIG undefined FUN_141a1dec0(void)

uint * FUN_141a1dec0(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  void *_Dst;
  char cVar11;
  void *_Src;
  undefined4 uVar12;
  bool bVar13;
  uint local_res8 [2];
  
  iVar9 = 1;
  uVar12 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<1120,8>_>,TSizedDefaultAllocator<32>_>
      ::ResizeGrow(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)((longlong)(int)uVar10 * 0x460 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x460 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar10;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar10 & 0x1f);
  _Src = (void *)((longlong)(int)uVar10 * 0x460 + *param_1);
  FUN_141a1a500(param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0x458) = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (uVar10 != 1) {
    FUN_141a2e820(param_1,local_res8,_Src);
    uVar4 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _Dst = (void *)(lVar8 * 0x460 + *param_1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>((longlong)_Dst + 0x450);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x458);
      uVar10 = *param_2;
      bVar2 = (byte)uVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x460 + *param_1) = uVar10;
      }
      puVar5 = (undefined4 *)((longlong)(int)uVar10 * 0x460 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar5[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar10;
      plVar6 = (longlong *)param_1[4];
      *param_2 = uVar4;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_141a1e12f;
    }
  }
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar11 = '\0';
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar9;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar10 = (int)param_1[9] - 1U & *(uint *)((longlong)_Src + 0x408);
    *(uint *)((longlong)_Src + 0x45c) = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x458) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    FUN_141a41c30(param_1);
  }
LAB_141a1e12f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141a1e160 HeapSortInternal<D3D11_INPUT_ELEMENT_DESC,FIdentityFunctor,TDereferenceWrapper<D3D11_INPUT_ELEMENT_DESC,`FD3D11VertexDeclarationKey::FD3D11VertexDeclarationKey'::`2'::FCompareDesc>_> body=515 status=ok
// SIG undefined HeapSortInternal<D3D11_INPUT_ELEMENT_DESC,FIdentityFunctor,TDereferenceWrapper<D3D11_INPUT_ELEMENT_DESC,`FD3D11VertexDeclarationKey::FD3D11VertexDeclarationKey'::`2'::FCompareDesc>_>(void)

void AlgoImpl::
     HeapSortInternal<D3D11_INPUT_ELEMENT_DESC,FIdentityFunctor,TDereferenceWrapper<D3D11_INPUT_ELEMENT_DESC,_FD3D11VertexDeclarationKey::FD3D11VertexDeclarationKey_::_2_::FCompareDesc>_>
               (undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar1 = iVar8;
    iVar9 = iVar7;
joined_r0x000141a1e18a:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar11 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          if ((uint)(*(int *)(param_1 + ((longlong)iVar8 + 2) * 4 + 2) * 0xffff +
                    *(int *)(((longlong)iVar8 + 2) * 0x20 + 0x14 + (longlong)param_1)) <
              (uint)(*(int *)(param_1 + (longlong)iVar11 * 4 + 2) * 0xffff +
                    *(int *)((longlong)iVar11 * 0x20 + 0x14 + (longlong)param_1))) {
            iVar11 = iVar8;
          }
          iVar11 = iVar11 + 1;
        }
        puVar12 = param_1 + (longlong)iVar7 * 4;
        puVar10 = param_1 + (longlong)iVar11 * 4;
        if ((uint)(*(int *)(puVar12 + 2) * 0xffff + *(int *)((longlong)puVar12 + 0x14)) <
            (uint)(*(int *)(puVar10 + 2) * 0xffff + *(int *)((longlong)puVar10 + 0x14))) {
          if (puVar12 != puVar10) {
            uVar2 = puVar10[1];
            uVar3 = *puVar12;
            uVar4 = puVar12[1];
            uVar5 = puVar12[2];
            uVar6 = puVar12[3];
            *puVar12 = *puVar10;
            puVar12[1] = uVar2;
            uVar2 = puVar10[3];
            puVar12[2] = puVar10[2];
            puVar12[3] = uVar2;
            *puVar10 = uVar3;
            puVar10[1] = uVar4;
            puVar10[2] = uVar5;
            puVar10[3] = uVar6;
          }
          iVar8 = iVar11 * 2 + 1;
          iVar7 = iVar11;
          goto joined_r0x000141a1e18a;
        }
      }
      iVar8 = iVar1 + -2;
      iVar7 = iVar9 + -1;
      iVar1 = iVar8;
      iVar9 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar10 = param_1 + (longlong)param_2 * 4;
    do {
      if (param_1 != puVar10) {
        uVar2 = puVar10[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        *param_1 = *puVar10;
        param_1[1] = uVar2;
        uVar2 = puVar10[3];
        param_1[2] = puVar10[2];
        param_1[3] = uVar2;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        puVar10[2] = uVar5;
        puVar10[3] = uVar6;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar7 * 2;
          iVar8 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if ((uint)(*(int *)(param_1 + ((longlong)iVar1 + 2) * 4 + 2) * 0xffff +
                      *(int *)(((longlong)iVar1 + 2) * 0x20 + 0x14 + (longlong)param_1)) <
                (uint)(*(int *)(param_1 + (longlong)iVar8 * 4 + 2) * 0xffff +
                      *(int *)((longlong)iVar8 * 0x20 + 0x14 + (longlong)param_1))) {
              iVar8 = iVar1;
            }
            iVar8 = iVar8 + 1;
          }
          puVar13 = param_1 + (longlong)iVar7 * 4;
          puVar12 = param_1 + (longlong)iVar8 * 4;
          if ((uint)(*(int *)(puVar12 + 2) * 0xffff + *(int *)((longlong)puVar12 + 0x14)) <=
              (uint)(*(int *)(puVar13 + 2) * 0xffff + *(int *)((longlong)puVar13 + 0x14))) break;
          if (puVar13 != puVar12) {
            uVar2 = puVar12[1];
            uVar3 = *puVar13;
            uVar4 = puVar13[1];
            uVar5 = puVar13[2];
            uVar6 = puVar13[3];
            *puVar13 = *puVar12;
            puVar13[1] = uVar2;
            uVar2 = puVar12[3];
            puVar13[2] = puVar12[2];
            puVar13[3] = uVar2;
            *puVar12 = uVar3;
            puVar12[1] = uVar4;
            puVar12[2] = uVar5;
            puVar12[3] = uVar6;
          }
          iVar7 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -4;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141a1e370 FUN_141a1e370 body=268 status=ok
// SIG undefined FUN_141a1e370(void)

void FUN_141a1e370(longlong param_1,longlong param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *local_res10;
  
  if (param_2 == 0) {
    if (param_3 != (longlong *)0x0) {
      return;
    }
  }
  else if (param_3 == (longlong *)0x0) {
    return;
  }
  lVar1 = param_1 + (longlong)(int)param_4 * 8;
  if (param_2 == 0) {
    if (*(longlong *)(lVar1 + 0x2bc8) != 0) {
      *(undefined8 *)(lVar1 + 0x2bc8) = 0;
      uVar2 = *(uint *)(param_1 + 0x3fcc);
      if (uVar2 == param_4) {
        do {
          uVar2 = uVar2 - 1;
          *(uint *)(param_1 + 0x3fcc) = uVar2;
          if ((int)uVar2 < 0) break;
        } while (*(longlong *)(param_1 + 0x2bc8 + (longlong)(int)uVar2 * 8) == 0);
      }
    }
  }
  else {
    uVar2 = param_4;
    if ((int)param_4 <= (int)*(uint *)(param_1 + 0x3fcc)) {
      uVar2 = *(uint *)(param_1 + 0x3fcc);
    }
    *(uint *)(param_1 + 0x3fcc) = uVar2;
    *(longlong *)(lVar1 + 0x2bc8) = param_2;
  }
  lVar1 = param_1 + 0x218 + (ulonglong)param_4 * 8;
  plVar3 = *(longlong **)(lVar1 + 0x420);
  if (plVar3 != param_3) {
    local_res10 = param_3;
    if (param_3 != (longlong *)0x0) {
      (**(code **)(*param_3 + 8))(param_3);
      plVar3 = *(longlong **)(lVar1 + 0x420);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *(longlong **)(lVar1 + 0x420) = local_res10;
    (**(code **)(**(longlong **)(param_1 + 0x230) + 0x1d8))
              (*(longlong **)(param_1 + 0x230),(ulonglong)param_4,1,&local_res10);
  }
  return;
}



// FUNCTION 141a1e480 FUN_141a1e480 body=268 status=ok
// SIG undefined FUN_141a1e480(void)

void FUN_141a1e480(longlong param_1,longlong param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *local_res10;
  
  if (param_2 == 0) {
    if (param_3 != (longlong *)0x0) {
      return;
    }
  }
  else if (param_3 == (longlong *)0x0) {
    return;
  }
  lVar1 = param_1 + (longlong)(int)param_4 * 8;
  if (param_2 == 0) {
    if (*(longlong *)(lVar1 + 0x2fc8) != 0) {
      *(undefined8 *)(lVar1 + 0x2fc8) = 0;
      uVar2 = *(uint *)(param_1 + 0x3fd0);
      if (uVar2 == param_4) {
        do {
          uVar2 = uVar2 - 1;
          *(uint *)(param_1 + 0x3fd0) = uVar2;
          if ((int)uVar2 < 0) break;
        } while (*(longlong *)(param_1 + 0x2fc8 + (longlong)(int)uVar2 * 8) == 0);
      }
    }
  }
  else {
    uVar2 = param_4;
    if ((int)param_4 <= (int)*(uint *)(param_1 + 0x3fd0)) {
      uVar2 = *(uint *)(param_1 + 0x3fd0);
    }
    *(uint *)(param_1 + 0x3fd0) = uVar2;
    *(longlong *)(lVar1 + 0x2fc8) = param_2;
  }
  lVar1 = param_1 + 0x218 + (ulonglong)param_4 * 8;
  plVar3 = *(longlong **)(lVar1 + 0x820);
  if (plVar3 != param_3) {
    local_res10 = param_3;
    if (param_3 != (longlong *)0x0) {
      (**(code **)(*param_3 + 8))(param_3);
      plVar3 = *(longlong **)(lVar1 + 0x820);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *(longlong **)(lVar1 + 0x820) = local_res10;
    (**(code **)(**(longlong **)(param_1 + 0x230) + 0x1f8))
              (*(longlong **)(param_1 + 0x230),(ulonglong)param_4,1,&local_res10);
  }
  return;
}



// FUNCTION 141a1e590 FUN_141a1e590 body=265 status=ok
// SIG undefined FUN_141a1e590(void)

void FUN_141a1e590(longlong param_1,longlong param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *local_res10;
  
  if (param_2 == 0) {
    if (param_3 != (longlong *)0x0) {
      return;
    }
  }
  else if (param_3 == (longlong *)0x0) {
    return;
  }
  lVar1 = param_1 + (longlong)(int)param_4 * 8;
  if (param_2 == 0) {
    if (*(longlong *)(lVar1 + 0x33c8) != 0) {
      *(undefined8 *)(lVar1 + 0x33c8) = 0;
      uVar2 = *(uint *)(param_1 + 0x3fd4);
      if (uVar2 == param_4) {
        do {
          uVar2 = uVar2 - 1;
          *(uint *)(param_1 + 0x3fd4) = uVar2;
          if ((int)uVar2 < 0) break;
        } while (*(longlong *)(param_1 + 0x33c8 + (longlong)(int)uVar2 * 8) == 0);
      }
    }
  }
  else {
    uVar2 = param_4;
    if ((int)param_4 <= (int)*(uint *)(param_1 + 0x3fd4)) {
      uVar2 = *(uint *)(param_1 + 0x3fd4);
    }
    *(uint *)(param_1 + 0x3fd4) = uVar2;
    *(longlong *)(lVar1 + 0x33c8) = param_2;
  }
  lVar1 = param_1 + 0x218 + (ulonglong)param_4 * 8;
  plVar3 = *(longlong **)(lVar1 + 0xc20);
  if (plVar3 != param_3) {
    local_res10 = param_3;
    if (param_3 != (longlong *)0x0) {
      (**(code **)(*param_3 + 8))(param_3);
      plVar3 = *(longlong **)(lVar1 + 0xc20);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *(longlong **)(lVar1 + 0xc20) = local_res10;
    (**(code **)(**(longlong **)(param_1 + 0x230) + 0x40))
              (*(longlong **)(param_1 + 0x230),(ulonglong)param_4,1,&local_res10);
  }
  return;
}



// FUNCTION 141a1e6a0 FUN_141a1e6a0 body=268 status=ok
// SIG undefined FUN_141a1e6a0(void)

void FUN_141a1e6a0(longlong param_1,longlong param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *local_res10;
  
  if (param_2 == 0) {
    if (param_3 != (longlong *)0x0) {
      return;
    }
  }
  else if (param_3 == (longlong *)0x0) {
    return;
  }
  lVar1 = param_1 + (longlong)(int)param_4 * 8;
  if (param_2 == 0) {
    if (*(longlong *)(lVar1 + 0x37c8) != 0) {
      *(undefined8 *)(lVar1 + 0x37c8) = 0;
      uVar2 = *(uint *)(param_1 + 0x3fd8);
      if (uVar2 == param_4) {
        do {
          uVar2 = uVar2 - 1;
          *(uint *)(param_1 + 0x3fd8) = uVar2;
          if ((int)uVar2 < 0) break;
        } while (*(longlong *)(param_1 + 0x37c8 + (longlong)(int)uVar2 * 8) == 0);
      }
    }
  }
  else {
    uVar2 = param_4;
    if ((int)param_4 <= (int)*(uint *)(param_1 + 0x3fd8)) {
      uVar2 = *(uint *)(param_1 + 0x3fd8);
    }
    *(uint *)(param_1 + 0x3fd8) = uVar2;
    *(longlong *)(lVar1 + 0x37c8) = param_2;
  }
  lVar1 = param_1 + 0x218 + (ulonglong)param_4 * 8;
  plVar3 = *(longlong **)(lVar1 + 0x1020);
  if (plVar3 != param_3) {
    local_res10 = param_3;
    if (param_3 != (longlong *)0x0) {
      (**(code **)(*param_3 + 8))(param_3);
      plVar3 = *(longlong **)(lVar1 + 0x1020);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *(longlong **)(lVar1 + 0x1020) = local_res10;
    (**(code **)(**(longlong **)(param_1 + 0x230) + 0xf8))
              (*(longlong **)(param_1 + 0x230),(ulonglong)param_4,1,&local_res10);
  }
  return;
}



// FUNCTION 141a1e7b0 FUN_141a1e7b0 body=268 status=ok
// SIG undefined FUN_141a1e7b0(void)

void FUN_141a1e7b0(longlong param_1,longlong param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *local_res10;
  
  if (param_2 == 0) {
    if (param_3 != (longlong *)0x0) {
      return;
    }
  }
  else if (param_3 == (longlong *)0x0) {
    return;
  }
  lVar1 = param_1 + (longlong)(int)param_4 * 8;
  if (param_2 == 0) {
    if (*(longlong *)(lVar1 + 0x3bc8) != 0) {
      *(undefined8 *)(lVar1 + 0x3bc8) = 0;
      uVar2 = *(uint *)(param_1 + 0x3fdc);
      if (uVar2 == param_4) {
        do {
          uVar2 = uVar2 - 1;
          *(uint *)(param_1 + 0x3fdc) = uVar2;
          if ((int)uVar2 < 0) break;
        } while (*(longlong *)(param_1 + 0x3bc8 + (longlong)(int)uVar2 * 8) == 0);
      }
    }
  }
  else {
    uVar2 = param_4;
    if ((int)param_4 <= (int)*(uint *)(param_1 + 0x3fdc)) {
      uVar2 = *(uint *)(param_1 + 0x3fdc);
    }
    *(uint *)(param_1 + 0x3fdc) = uVar2;
    *(longlong *)(lVar1 + 0x3bc8) = param_2;
  }
  lVar1 = param_1 + 0x218 + (ulonglong)param_4 * 8;
  plVar3 = *(longlong **)(lVar1 + 0x1420);
  if (plVar3 != param_3) {
    local_res10 = param_3;
    if (param_3 != (longlong *)0x0) {
      (**(code **)(*param_3 + 8))(param_3);
      plVar3 = *(longlong **)(lVar1 + 0x1420);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *(longlong **)(lVar1 + 0x1420) = local_res10;
    (**(code **)(**(longlong **)(param_1 + 0x230) + 0x218))
              (*(longlong **)(param_1 + 0x230),(ulonglong)param_4,1,&local_res10);
  }
  return;
}



// FUNCTION 141a1e8c0 FUN_141a1e8c0 body=260 status=ok
// SIG undefined FUN_141a1e8c0(void)

void FUN_141a1e8c0(longlong param_1,longlong param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *local_res10;
  
  uVar4 = (ulonglong)param_4;
  if (param_2 == 0) {
    if (param_3 != (longlong *)0x0) {
      return;
    }
  }
  else if (param_3 == (longlong *)0x0) {
    return;
  }
  lVar1 = param_1 + (longlong)(int)param_4 * 8;
  if (param_2 == 0) {
    if (*(longlong *)(lVar1 + 0x27c8) != 0) {
      *(undefined8 *)(lVar1 + 0x27c8) = 0;
      uVar2 = *(uint *)(param_1 + 0x3fc8);
      if (uVar2 == param_4) {
        do {
          uVar2 = uVar2 - 1;
          *(uint *)(param_1 + 0x3fc8) = uVar2;
          if ((int)uVar2 < 0) break;
        } while (*(longlong *)(param_1 + 0x27c8 + (longlong)(int)uVar2 * 8) == 0);
      }
    }
  }
  else {
    if ((int)param_4 <= (int)*(uint *)(param_1 + 0x3fc8)) {
      param_4 = *(uint *)(param_1 + 0x3fc8);
    }
    *(uint *)(param_1 + 0x3fc8) = param_4;
    *(longlong *)(lVar1 + 0x27c8) = param_2;
  }
  plVar3 = *(longlong **)(param_1 + 0x238 + uVar4 * 8);
  lVar1 = param_1 + 0x218 + uVar4 * 8;
  if (plVar3 != param_3) {
    local_res10 = param_3;
    if (param_3 != (longlong *)0x0) {
      (**(code **)(*param_3 + 8))(param_3);
      plVar3 = *(longlong **)(lVar1 + 0x20);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *(longlong **)(lVar1 + 0x20) = local_res10;
    (**(code **)(**(longlong **)(param_1 + 0x230) + 200))
              (*(longlong **)(param_1 + 0x230),uVar4,1,&local_res10);
  }
  return;
}



// FUNCTION 141a1e9d0 IntroSortInternal<D3D11_INPUT_ELEMENT_DESC,FIdentityFunctor,TDereferenceWrapper<D3D11_INPUT_ELEMENT_DESC,`FD3D11VertexDeclarationKey::FD3D11VertexDeclarationKey'::`2'::FCompareDesc>_> body=772 status=ok
// SIG undefined IntroSortInternal<D3D11_INPUT_ELEMENT_DESC,FIdentityFunctor,TDereferenceWrapper<D3D11_INPUT_ELEMENT_DESC,`FD3D11VertexDeclarationKey::FD3D11VertexDeclarationKey'::`2'::FCompareDesc>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<D3D11_INPUT_ELEMENT_DESC,FIdentityFunctor,TDereferenceWrapper<D3D11_INPUT_ELEMENT_DESC,_FD3D11VertexDeclarationKey::FD3D11VertexDeclarationKey_::_2_::FCompareDesc>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  float fVar23;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x20 + -0x20 + param_1;
    fVar23 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar23 = fVar23 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar23 = ::_guard_xfg_dispatch_icall_nop(fVar23);
    local_318 = (undefined4)(longlong)(fVar23 + fVar23);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar17 = &local_328;
    do {
      puVar22 = (undefined8 *)*plVar17;
      puVar20 = (undefined8 *)plVar17[1];
      lVar2 = plVar17[2];
      local_338._0_4_ = (int)lVar2;
      lVar15 = ((longlong)puVar20 - (longlong)puVar22 >> 5) + 1;
      puVar21 = puVar22;
      if ((int)local_338 != 0) {
LAB_141a1eaa0:
        if (8 < lVar15) {
          puVar22 = puVar21 + (lVar15 / 2) * 4;
          if (puVar22 != puVar21) {
            uVar3 = *(undefined4 *)((longlong)puVar21 + 4);
            uVar4 = *(undefined4 *)(puVar21 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar21 + 0xc);
            uVar6 = *(undefined4 *)puVar22;
            uVar7 = *(undefined4 *)((longlong)puVar22 + 4);
            uVar8 = *(undefined4 *)(puVar22 + 1);
            uVar9 = *(undefined4 *)((longlong)puVar22 + 0xc);
            uVar11 = puVar22[2];
            uVar12 = puVar22[3];
            *(undefined4 *)puVar22 = *(undefined4 *)puVar21;
            *(undefined4 *)((longlong)puVar22 + 4) = uVar3;
            *(undefined4 *)(puVar22 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar22 + 0xc) = uVar5;
            uVar10 = puVar21[3];
            puVar22[2] = puVar21[2];
            puVar22[3] = uVar10;
            *(undefined4 *)puVar21 = uVar6;
            *(undefined4 *)((longlong)puVar21 + 4) = uVar7;
            *(undefined4 *)(puVar21 + 1) = uVar8;
            *(undefined4 *)((longlong)puVar21 + 0xc) = uVar9;
            puVar21[2] = uVar11;
            puVar21[3] = uVar12;
          }
          puVar18 = puVar20 + 4;
          puVar22 = puVar21;
LAB_141a1eaf0:
          puVar16 = puVar22;
          puVar22 = puVar16 + 4;
          if (puVar22 <= puVar20) goto code_r0x000141a1eaf9;
          goto LAB_141a1eb13;
        }
        for (; puVar22 = puVar21, puVar18 = puVar21, puVar21 < puVar20; puVar20 = puVar20 + -4) {
          while (puVar16 = puVar22, puVar22 = puVar18 + 4, puVar22 <= puVar20) {
            piVar1 = (int *)((longlong)puVar18 + 0x34);
            puVar18 = puVar22;
            if ((uint)(*(int *)(puVar22 + 2) * 0xffff + *piVar1) <=
                (uint)(*(int *)(puVar16 + 2) * 0xffff + *(int *)((longlong)puVar16 + 0x14))) {
              puVar22 = puVar16;
            }
          }
          if (puVar16 != puVar20) {
            uVar10 = puVar20[1];
            uVar11 = *puVar16;
            uVar12 = puVar16[1];
            uVar13 = puVar16[2];
            uVar14 = puVar16[3];
            *puVar16 = *puVar20;
            puVar16[1] = uVar10;
            uVar10 = puVar20[3];
            puVar16[2] = puVar20[2];
            puVar16[3] = uVar10;
            *puVar20 = uVar11;
            puVar20[1] = uVar12;
            puVar20[2] = uVar13;
            puVar20[3] = uVar14;
          }
        }
        goto LAB_141a1ec16;
      }
LAB_141a1ec07:
      local_338 = lVar2;
      HeapSortInternal<D3D11_INPUT_ELEMENT_DESC,FIdentityFunctor,TDereferenceWrapper<D3D11_INPUT_ELEMENT_DESC,_FD3D11VertexDeclarationKey::FD3D11VertexDeclarationKey_::_2_::FCompareDesc>_>
                (puVar22,lVar15,param_3,param_4);
LAB_141a1ec16:
      plVar17 = plVar17 + -3;
    } while (&local_328 <= plVar17);
  }
  return;
code_r0x000141a1eaf9:
  if ((uint)(*(int *)(puVar16 + 6) * 0xffff + *(int *)((longlong)puVar16 + 0x34)) <=
      (uint)(*(int *)(puVar21 + 2) * 0xffff + *(int *)((longlong)puVar21 + 0x14)))
  goto LAB_141a1eaf0;
LAB_141a1eb13:
  do {
    puVar19 = puVar18;
    puVar18 = puVar19 + -4;
    if (puVar18 <= puVar21) break;
  } while ((uint)(*(int *)(puVar21 + 2) * 0xffff + *(int *)((longlong)puVar21 + 0x14)) <=
           (uint)(*(int *)(puVar19 + -2) * 0xffff + *(int *)((longlong)puVar19 + -0xc)));
  if (puVar22 <= puVar18) {
    if (puVar22 != puVar18) {
      uVar3 = *(undefined4 *)((longlong)puVar19 + -0x1c);
      uVar4 = *(undefined4 *)(puVar19 + -3);
      uVar5 = *(undefined4 *)((longlong)puVar19 + -0x14);
      uVar6 = *(undefined4 *)puVar22;
      uVar7 = *(undefined4 *)((longlong)puVar16 + 0x24);
      uVar8 = *(undefined4 *)(puVar16 + 5);
      uVar9 = *(undefined4 *)((longlong)puVar16 + 0x2c);
      uVar11 = puVar16[6];
      uVar12 = puVar16[7];
      *(undefined4 *)puVar22 = *(undefined4 *)puVar18;
      *(undefined4 *)((longlong)puVar16 + 0x24) = uVar3;
      *(undefined4 *)(puVar16 + 5) = uVar4;
      *(undefined4 *)((longlong)puVar16 + 0x2c) = uVar5;
      uVar10 = puVar19[-1];
      puVar16[6] = puVar19[-2];
      puVar16[7] = uVar10;
      *(undefined4 *)puVar18 = uVar6;
      *(undefined4 *)((longlong)puVar19 + -0x1c) = uVar7;
      *(undefined4 *)(puVar19 + -3) = uVar8;
      *(undefined4 *)((longlong)puVar19 + -0x14) = uVar9;
      puVar19[-2] = uVar11;
      puVar19[-1] = uVar12;
    }
    goto LAB_141a1eaf0;
  }
  if (puVar21 != puVar18) {
    uVar3 = *(undefined4 *)((longlong)puVar19 + -0x1c);
    uVar4 = *(undefined4 *)(puVar19 + -3);
    uVar5 = *(undefined4 *)((longlong)puVar19 + -0x14);
    uVar6 = *(undefined4 *)puVar21;
    uVar7 = *(undefined4 *)((longlong)puVar21 + 4);
    uVar8 = *(undefined4 *)(puVar21 + 1);
    uVar9 = *(undefined4 *)((longlong)puVar21 + 0xc);
    uVar11 = puVar21[2];
    uVar12 = puVar21[3];
    *(undefined4 *)puVar21 = *(undefined4 *)puVar18;
    *(undefined4 *)((longlong)puVar21 + 4) = uVar3;
    *(undefined4 *)(puVar21 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar21 + 0xc) = uVar5;
    uVar10 = puVar19[-1];
    puVar21[2] = puVar19[-2];
    puVar21[3] = uVar10;
    *(undefined4 *)puVar18 = uVar6;
    *(undefined4 *)((longlong)puVar19 + -0x1c) = uVar7;
    *(undefined4 *)(puVar19 + -3) = uVar8;
    *(undefined4 *)((longlong)puVar19 + -0x14) = uVar9;
    puVar19[-2] = uVar11;
    puVar19[-1] = uVar12;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar18 + (-0x20 - (longlong)puVar21) & 0xffffffffffffffe0U) <
      (longlong)((longlong)puVar20 - (longlong)puVar22 & 0xffffffffffffffe0U)) {
    if (puVar22 < puVar20) {
      *plVar17 = (longlong)puVar22;
      plVar17[1] = (longlong)puVar20;
      *(int *)(plVar17 + 2) = (int)local_338;
      plVar17 = plVar17 + 3;
    }
    if (puVar18 <= puVar21 + 4) goto LAB_141a1ec16;
    puVar20 = puVar19 + -8;
    puVar22 = puVar21;
  }
  else {
    if (puVar21 + 4 < puVar18) {
      *plVar17 = (longlong)puVar21;
      plVar17[1] = (longlong)(puVar19 + -8);
      *(int *)(plVar17 + 2) = (int)local_338;
      plVar17 = plVar17 + 3;
    }
    if (puVar20 <= puVar22) goto LAB_141a1ec16;
  }
  lVar15 = ((longlong)puVar20 - (longlong)puVar22 >> 5) + 1;
  puVar21 = puVar22;
  if ((int)local_338 == 0) goto LAB_141a1ec07;
  goto LAB_141a1eaa0;
}



// FUNCTION 141a1ece0 FUN_141a1ece0 body=2069 status=ok
// SIG undefined FUN_141a1ece0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141a1f315) */
/* WARNING: Removing unreachable block (ram,0x000141a1f3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a1ece0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,undefined8 param_6,uint *param_7,int *param_8,int *param_9,
                  longlong *param_10)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong *puVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_268 [32];
  ulonglong local_248;
  undefined4 local_240;
  char local_238;
  ulonglong local_230;
  undefined *local_228;
  undefined4 local_220;
  uint local_218;
  ulonglong local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined8 local_194;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 local_13c;
  undefined4 local_134;
  longlong local_128 [4];
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_210 = param_5;
  local_208 = param_6;
  local_218 = 0;
  local_230 = local_230 & 0xffffffff00000000;
  iVar6 = *(int *)(param_1 + 0x1aa0);
  if (0 < iVar6) {
    iVar6 = 1;
  }
  iVar11 = 0x10;
  if (iVar6 < 0x11) {
    iVar11 = iVar6;
  }
  local_1f8 = param_4;
  local_1f0 = param_3;
  if (iVar11 < 1) {
    _guard_xfg_dispatch_icall_nop(local_128 + (longlong)iVar11 * 3,0,(longlong)(1 - iVar11) * 0x18);
  }
  else {
    _guard_xfg_dispatch_icall_nop(local_128,(void *)(param_1 + 0x1aa4),(longlong)iVar11 * 0x18);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
  }
  local_1a8 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_1a0 = 0;
  local_19c = 0x26;
  local_194 = 0;
  local_18c = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_144 = 0;
  local_13c = 0;
  local_134 = 0;
  FUN_14049afe0(param_2,&local_1e8);
  local_1b8 = FUN_1404a0ce0();
  uStack_1b0 = FUN_140985530();
  if (param_4 != 0) {
    FUN_141a28980(param_1,param_4 + 0x68);
  }
  if ((((*param_9 != 0) || (param_9[1] != 0)) || (param_9[2] != *param_7)) ||
     (local_238 = '\x01', param_9[3] != param_7[1])) {
    local_238 = '\0';
  }
  plVar5 = *(longlong **)(param_1 + 0x27c0);
  uVar2 = *(undefined4 *)(param_1 + 0x42ac);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if ((param_7[8] & 0x40) == 0) {
    if (local_238 != '\0') {
      if ((*(char *)(param_1 + 0x17c40) != '\0') && (*(longlong *)(param_1 + 0x17c70) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x17c70) + 0x10);
        *piVar1 = *piVar1 + 1;
      }
      local_208 = 0;
      uStack_200 = 0;
      (**(code **)(*param_10 + 400))(param_10,local_210,&local_208);
    }
    local_1a8 = FUN_1409853f0();
    puVar15 = &local_210;
    uVar16 = 0;
  }
  else {
    if (local_238 != '\0') {
      if ((*(char *)(param_1 + 0x17c40) != '\0') && (*(longlong *)(param_1 + 0x17c70) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x17c70) + 0x10);
        *piVar1 = *piVar1 + 1;
      }
      local_248 = local_248 & 0xffffffffffffff00;
      (**(code **)(*param_10 + 0x1a8))(param_10,local_208,3,0);
    }
    *(undefined4 *)(param_1 + 0x42ac) = 0x22;
    local_1a8 = FUN_141a15460();
    puVar15 = &local_230;
    local_230 = 0;
    uVar16 = local_208;
  }
  (**(code **)(*param_10 + 0x108))(param_10,1,puVar15,uVar16);
  uVar13 = param_7[1];
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_230 = CONCAT44(local_230._4_4_,*param_7);
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
  *puVar9 = &PTR_LAB_143f59420;
  *(int *)((longlong)puVar9 + 0x1c) = (int)local_230;
  puVar9[2] = 0;
  *(undefined4 *)(puVar9 + 3) = 0;
  *(uint *)(puVar9 + 4) = uVar13;
  *(undefined4 *)((longlong)puVar9 + 0x24) = 0x3f800000;
  iVar6 = *param_8;
  iVar11 = param_8[1];
  iVar3 = param_8[2];
  iVar4 = param_8[3];
  fVar18 = (float)*param_9 * (2.0 / (float)*param_7) - 1.0;
  fVar19 = (float)param_9[2] * (2.0 / (float)*param_7) - 1.0;
  fVar20 = 1.0 - (float)param_9[1] * (2.0 / (float)param_7[1]);
  fVar17 = 1.0 - (float)param_9[3] * (2.0 / (float)param_7[1]);
  lVar7 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  lVar10 = 0;
  local_228 = &DAT_1469f8fb0;
  local_220 = 0;
  plVar12 = (longlong *)(lVar7 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar12,&local_230,&local_228);
  if ((int)local_230 != -1) {
    lVar10 = (longlong)(int)local_230 * 0x20 + *plVar12;
  }
  plVar14 = (longlong *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    plVar14 = (longlong *)0x0;
  }
  local_220 = 0;
  local_228 = &DAT_1469f8d10;
  lVar7 = *plVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar12,&local_230,&local_228);
  if ((int)local_230 == -1) {
    lVar10 = 0;
  }
  else {
    lVar10 = (longlong)(int)local_230 * 0x20 + *plVar12;
  }
  plVar12 = (longlong *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    plVar12 = (longlong *)0x0;
  }
  lVar10 = *plVar12;
  local_1e8 = DAT_146534c78;
  if (lVar7 == 0) {
    local_228 = (undefined *)0x0;
    uVar13 = 1;
    uStack_1e0 = 0;
  }
  else {
    lVar7 = *(longlong *)(lVar7 + 0x48);
    if (*(char *)(lVar7 + 0x28) == '\0') {
      FUN_1419f3850(lVar7);
    }
    uStack_1e0 = *(undefined8 *)(lVar7 + 0x38);
    uVar13 = local_218;
  }
  if ((uVar13 & 1) != 0) {
    uVar13 = uVar13 & 0xfffffffe;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_228);
  }
  if (lVar10 == 0) {
    uVar13 = uVar13 | 2;
    local_1c8 = 0;
    local_228 = (undefined *)0x0;
  }
  else {
    local_228 = *(undefined **)(lVar10 + 0x48);
    if (local_228[0x28] == '\0') {
      FUN_1419f3850(local_228);
    }
    local_1c8 = *(undefined8 *)(local_228 + 0x40);
  }
  if ((uVar13 & 2) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_228);
  }
  plVar14 = *(longlong **)(param_1 + 0x27c0);
  local_19c = CONCAT44(local_19c._4_4_,1);
  plVar12 = (longlong *)(local_1f8 + 0x68);
  if (local_1f8 == 0) {
    plVar12 = (longlong *)0x0;
  }
  *(longlong **)(param_1 + 0x27c0) = plVar12;
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 8))();
  }
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  FUN_141ed6ac0(param_2,&local_1e8,2,1);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 4;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 4;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144da0be8;
  uVar16 = _DAT_1464aa6c8;
  puVar9[2] = _DAT_1464aa6c0;
  puVar9[3] = uVar16;
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
  }
  lVar7 = local_1f0;
  if (local_1f0 != 0) {
    local_248 = *(ulonglong *)(local_1f0 + 0x58);
    local_240 = 0;
    FUN_141a1e590(param_1,local_1f0 + 0x68,*(undefined8 *)(local_1f0 + 0xa8),
                  *(undefined2 *)(lVar10 + 0xc0));
  }
  local_248 = CONCAT44(local_248._4_4_,0x10);
  local_108 = fVar19;
  local_104 = fVar20;
  local_100 = (float)iVar3;
  local_fc = (float)iVar11;
  local_f8 = fVar19;
  local_f4 = fVar17;
  local_f0 = (float)iVar3;
  local_ec = (float)iVar4;
  local_e8 = fVar18;
  local_e4 = fVar20;
  local_e0 = (float)iVar6;
  local_dc = (float)iVar11;
  local_d8 = fVar18;
  local_d4 = fVar17;
  local_d0 = (float)iVar6;
  local_cc = (float)iVar4;
  FUN_141a14d80(param_2,1,2,&local_108);
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
  }
  if (lVar7 != 0) {
    FUN_141a28980(param_1,lVar7 + 0x68);
  }
  FUN_141a28750(param_1);
  if ((((*(int *)(param_1 + 0x1aa0) != 1) || (*(longlong *)(param_1 + 0x1aa4) != local_128[0])) ||
      (*(longlong *)(param_1 + 0x1aac) != local_128[1])) ||
     (*(longlong *)(param_1 + 0x1ab4) != local_128[2])) {
    *(longlong *)(param_1 + 0x1aa4) = local_128[0];
    *(longlong *)(param_1 + 0x1aac) = local_128[1];
    *(longlong *)(param_1 + 0x1ab4) = local_128[2];
    *(undefined4 *)(param_1 + 0x1aa0) = 1;
    (**(code **)(**(longlong **)(param_1 + 0x230) + 0x160))
              (*(longlong **)(param_1 + 0x230),1,local_128);
  }
  *(undefined4 *)(param_1 + 0x42ac) = uVar2;
  plVar12 = *(longlong **)(param_1 + 0x27c0);
  *(longlong **)(param_1 + 0x27c0) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return;
}



// FUNCTION 141a1f500 FUN_141a1f500 body=2069 status=ok
// SIG undefined FUN_141a1f500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141a1fb35) */
/* WARNING: Removing unreachable block (ram,0x000141a1fc04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a1f500(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,undefined8 param_6,uint *param_7,int *param_8,int *param_9,
                  longlong *param_10)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong *puVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_268 [32];
  ulonglong local_248;
  undefined4 local_240;
  char local_238;
  ulonglong local_230;
  undefined *local_228;
  undefined4 local_220;
  uint local_218;
  ulonglong local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined8 local_194;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 local_13c;
  undefined4 local_134;
  longlong local_128 [4];
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_210 = param_5;
  local_208 = param_6;
  local_218 = 0;
  local_230 = local_230 & 0xffffffff00000000;
  iVar6 = *(int *)(param_1 + 0x1aa0);
  if (0 < iVar6) {
    iVar6 = 1;
  }
  iVar11 = 0x10;
  if (iVar6 < 0x11) {
    iVar11 = iVar6;
  }
  local_1f8 = param_4;
  local_1f0 = param_3;
  if (iVar11 < 1) {
    _guard_xfg_dispatch_icall_nop(local_128 + (longlong)iVar11 * 3,0,(longlong)(1 - iVar11) * 0x18);
  }
  else {
    _guard_xfg_dispatch_icall_nop(local_128,(void *)(param_1 + 0x1aa4),(longlong)iVar11 * 0x18);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
  }
  local_1a8 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_1a0 = 0;
  local_19c = 0x26;
  local_194 = 0;
  local_18c = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_144 = 0;
  local_13c = 0;
  local_134 = 0;
  FUN_14049afe0(param_2,&local_1e8);
  local_1b8 = FUN_1404a0ce0();
  uStack_1b0 = FUN_140985530();
  if (param_4 != 0) {
    FUN_141a28980(param_1,param_4 + 0x68);
  }
  if ((((*param_9 != 0) || (param_9[1] != 0)) || (param_9[2] != *param_7)) ||
     (local_238 = '\x01', param_9[3] != param_7[1])) {
    local_238 = '\0';
  }
  plVar5 = *(longlong **)(param_1 + 0x27c0);
  uVar2 = *(undefined4 *)(param_1 + 0x42ac);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if ((param_7[8] & 0x40) == 0) {
    if (local_238 != '\0') {
      if ((*(char *)(param_1 + 0x17c40) != '\0') && (*(longlong *)(param_1 + 0x17c70) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x17c70) + 0x10);
        *piVar1 = *piVar1 + 1;
      }
      local_208 = 0;
      uStack_200 = 0;
      (**(code **)(*param_10 + 400))(param_10,local_210,&local_208);
    }
    local_1a8 = FUN_1409853f0();
    puVar15 = &local_210;
    uVar16 = 0;
  }
  else {
    if (local_238 != '\0') {
      if ((*(char *)(param_1 + 0x17c40) != '\0') && (*(longlong *)(param_1 + 0x17c70) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x17c70) + 0x10);
        *piVar1 = *piVar1 + 1;
      }
      local_248 = local_248 & 0xffffffffffffff00;
      (**(code **)(*param_10 + 0x1a8))(param_10,local_208,3,0);
    }
    *(undefined4 *)(param_1 + 0x42ac) = 0x22;
    local_1a8 = FUN_141a15460();
    puVar15 = &local_230;
    local_230 = 0;
    uVar16 = local_208;
  }
  (**(code **)(*param_10 + 0x108))(param_10,1,puVar15,uVar16);
  uVar13 = param_7[1];
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_230 = CONCAT44(local_230._4_4_,*param_7);
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
  *puVar9 = &PTR_LAB_143f59420;
  *(int *)((longlong)puVar9 + 0x1c) = (int)local_230;
  puVar9[2] = 0;
  *(undefined4 *)(puVar9 + 3) = 0;
  *(uint *)(puVar9 + 4) = uVar13;
  *(undefined4 *)((longlong)puVar9 + 0x24) = 0x3f800000;
  iVar6 = *param_8;
  iVar11 = param_8[1];
  iVar3 = param_8[2];
  iVar4 = param_8[3];
  fVar18 = (float)*param_9 * (2.0 / (float)*param_7) - 1.0;
  fVar19 = (float)param_9[2] * (2.0 / (float)*param_7) - 1.0;
  fVar20 = 1.0 - (float)param_9[1] * (2.0 / (float)param_7[1]);
  fVar17 = 1.0 - (float)param_9[3] * (2.0 / (float)param_7[1]);
  lVar7 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  lVar10 = 0;
  local_228 = &DAT_1469f8fb0;
  local_220 = 0;
  plVar12 = (longlong *)(lVar7 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar12,&local_230,&local_228);
  if ((int)local_230 != -1) {
    lVar10 = (longlong)(int)local_230 * 0x20 + *plVar12;
  }
  plVar14 = (longlong *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    plVar14 = (longlong *)0x0;
  }
  local_220 = 0;
  local_228 = &DAT_1469f87d0;
  lVar7 = *plVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar12,&local_230,&local_228);
  if ((int)local_230 == -1) {
    lVar10 = 0;
  }
  else {
    lVar10 = (longlong)(int)local_230 * 0x20 + *plVar12;
  }
  plVar12 = (longlong *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    plVar12 = (longlong *)0x0;
  }
  lVar10 = *plVar12;
  local_1e8 = DAT_146534c78;
  if (lVar7 == 0) {
    local_228 = (undefined *)0x0;
    uVar13 = 1;
    uStack_1e0 = 0;
  }
  else {
    lVar7 = *(longlong *)(lVar7 + 0x48);
    if (*(char *)(lVar7 + 0x28) == '\0') {
      FUN_1419f3850(lVar7);
    }
    uStack_1e0 = *(undefined8 *)(lVar7 + 0x38);
    uVar13 = local_218;
  }
  if ((uVar13 & 1) != 0) {
    uVar13 = uVar13 & 0xfffffffe;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_228);
  }
  if (lVar10 == 0) {
    uVar13 = uVar13 | 2;
    local_1c8 = 0;
    local_228 = (undefined *)0x0;
  }
  else {
    local_228 = *(undefined **)(lVar10 + 0x48);
    if (local_228[0x28] == '\0') {
      FUN_1419f3850(local_228);
    }
    local_1c8 = *(undefined8 *)(local_228 + 0x40);
  }
  if ((uVar13 & 2) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_228);
  }
  plVar14 = *(longlong **)(param_1 + 0x27c0);
  local_19c = CONCAT44(local_19c._4_4_,1);
  plVar12 = (longlong *)(local_1f8 + 0x68);
  if (local_1f8 == 0) {
    plVar12 = (longlong *)0x0;
  }
  *(longlong **)(param_1 + 0x27c0) = plVar12;
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 8))();
  }
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  FUN_141ed6ac0(param_2,&local_1e8,2,1);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 4;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 4;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144da0be8;
  uVar16 = _DAT_1464aa6c8;
  puVar9[2] = _DAT_1464aa6c0;
  puVar9[3] = uVar16;
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
  }
  lVar7 = local_1f0;
  if (local_1f0 != 0) {
    local_248 = *(ulonglong *)(local_1f0 + 0x58);
    local_240 = 0;
    FUN_141a1e590(param_1,local_1f0 + 0x68,*(undefined8 *)(local_1f0 + 0xa8),
                  *(undefined2 *)(lVar10 + 0xc0));
  }
  local_248 = CONCAT44(local_248._4_4_,0x10);
  local_108 = fVar19;
  local_104 = fVar20;
  local_100 = (float)iVar3;
  local_fc = (float)iVar11;
  local_f8 = fVar19;
  local_f4 = fVar17;
  local_f0 = (float)iVar3;
  local_ec = (float)iVar4;
  local_e8 = fVar18;
  local_e4 = fVar20;
  local_e0 = (float)iVar6;
  local_dc = (float)iVar11;
  local_d8 = fVar18;
  local_d4 = fVar17;
  local_d0 = (float)iVar6;
  local_cc = (float)iVar4;
  FUN_141a14d80(param_2,1,2,&local_108);
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
  }
  if (lVar7 != 0) {
    FUN_141a28980(param_1,lVar7 + 0x68);
  }
  FUN_141a28750(param_1);
  if ((((*(int *)(param_1 + 0x1aa0) != 1) || (*(longlong *)(param_1 + 0x1aa4) != local_128[0])) ||
      (*(longlong *)(param_1 + 0x1aac) != local_128[1])) ||
     (*(longlong *)(param_1 + 0x1ab4) != local_128[2])) {
    *(longlong *)(param_1 + 0x1aa4) = local_128[0];
    *(longlong *)(param_1 + 0x1aac) = local_128[1];
    *(longlong *)(param_1 + 0x1ab4) = local_128[2];
    *(undefined4 *)(param_1 + 0x1aa0) = 1;
    (**(code **)(**(longlong **)(param_1 + 0x230) + 0x160))
              (*(longlong **)(param_1 + 0x230),1,local_128);
  }
  *(undefined4 *)(param_1 + 0x42ac) = uVar2;
  plVar12 = *(longlong **)(param_1 + 0x27c0);
  *(longlong **)(param_1 + 0x27c0) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return;
}



// FUNCTION 141a1fd20 FUN_141a1fd20 body=2087 status=ok
// SIG undefined FUN_141a1fd20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141a20367) */
/* WARNING: Removing unreachable block (ram,0x000141a20436) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a1fd20(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,undefined8 param_6,uint *param_7,int *param_8,int *param_9,
                  longlong *param_10,undefined4 param_11)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong *puVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_268 [32];
  ulonglong local_248;
  undefined4 local_240;
  char local_238;
  ulonglong local_230;
  undefined *local_228;
  undefined4 local_220;
  uint local_218;
  ulonglong local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined8 local_194;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 local_13c;
  undefined4 local_134;
  longlong local_128 [4];
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_210 = param_5;
  local_208 = param_6;
  local_218 = 0;
  local_230 = local_230 & 0xffffffff00000000;
  iVar6 = *(int *)(param_1 + 0x1aa0);
  if (0 < iVar6) {
    iVar6 = 1;
  }
  iVar11 = 0x10;
  if (iVar6 < 0x11) {
    iVar11 = iVar6;
  }
  local_1f8 = param_4;
  local_1f0 = param_3;
  if (iVar11 < 1) {
    _guard_xfg_dispatch_icall_nop(local_128 + (longlong)iVar11 * 3,0,(longlong)(1 - iVar11) * 0x18);
  }
  else {
    _guard_xfg_dispatch_icall_nop(local_128,(void *)(param_1 + 0x1aa4),(longlong)iVar11 * 0x18);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
  }
  local_1a8 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_1a0 = 0;
  local_19c = 0x26;
  local_194 = 0;
  local_18c = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_144 = 0;
  local_13c = 0;
  local_134 = 0;
  FUN_14049afe0(param_2,&local_1e8);
  local_1b8 = FUN_1404a0ce0();
  uStack_1b0 = FUN_140985530();
  if (param_4 != 0) {
    FUN_141a28980(param_1,param_4 + 0x68);
  }
  if ((((*param_9 != 0) || (param_9[1] != 0)) || (param_9[2] != *param_7)) ||
     (local_238 = '\x01', param_9[3] != param_7[1])) {
    local_238 = '\0';
  }
  plVar5 = *(longlong **)(param_1 + 0x27c0);
  uVar2 = *(undefined4 *)(param_1 + 0x42ac);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if ((param_7[8] & 0x40) == 0) {
    if (local_238 != '\0') {
      if ((*(char *)(param_1 + 0x17c40) != '\0') && (*(longlong *)(param_1 + 0x17c70) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x17c70) + 0x10);
        *piVar1 = *piVar1 + 1;
      }
      local_208 = 0;
      uStack_200 = 0;
      (**(code **)(*param_10 + 400))(param_10,local_210,&local_208);
    }
    local_1a8 = FUN_1409853f0();
    puVar15 = &local_210;
    uVar16 = 0;
  }
  else {
    if (local_238 != '\0') {
      if ((*(char *)(param_1 + 0x17c40) != '\0') && (*(longlong *)(param_1 + 0x17c70) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x17c70) + 0x10);
        *piVar1 = *piVar1 + 1;
      }
      local_248 = local_248 & 0xffffffffffffff00;
      (**(code **)(*param_10 + 0x1a8))(param_10,local_208,3,0);
    }
    *(undefined4 *)(param_1 + 0x42ac) = 0x22;
    local_1a8 = FUN_141a15460();
    puVar15 = &local_230;
    local_230 = 0;
    uVar16 = local_208;
  }
  (**(code **)(*param_10 + 0x108))(param_10,1,puVar15,uVar16);
  uVar12 = param_7[1];
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_230 = CONCAT44(local_230._4_4_,*param_7);
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
  *puVar9 = &PTR_LAB_143f59420;
  *(int *)((longlong)puVar9 + 0x1c) = (int)local_230;
  puVar9[2] = 0;
  *(undefined4 *)(puVar9 + 3) = 0;
  *(uint *)(puVar9 + 4) = uVar12;
  *(undefined4 *)((longlong)puVar9 + 0x24) = 0x3f800000;
  iVar6 = *param_8;
  iVar11 = param_8[1];
  iVar3 = param_8[2];
  iVar4 = param_8[3];
  fVar18 = (float)*param_9 * (2.0 / (float)*param_7) - 1.0;
  fVar19 = (float)param_9[2] * (2.0 / (float)*param_7) - 1.0;
  fVar20 = 1.0 - (float)param_9[1] * (2.0 / (float)param_7[1]);
  fVar17 = 1.0 - (float)param_9[3] * (2.0 / (float)param_7[1]);
  lVar7 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  lVar10 = 0;
  local_228 = &DAT_1469f8fb0;
  local_220 = 0;
  plVar14 = (longlong *)(lVar7 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar14,&local_230,&local_228);
  if ((int)local_230 != -1) {
    lVar10 = (longlong)(int)local_230 * 0x20 + *plVar14;
  }
  plVar13 = (longlong *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    plVar13 = (longlong *)0x0;
  }
  local_220 = 0;
  local_228 = &DAT_1469f8e60;
  lVar7 = *plVar13;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar14,&local_230,&local_228);
  if ((int)local_230 == -1) {
    lVar10 = 0;
  }
  else {
    lVar10 = (longlong)(int)local_230 * 0x20 + *plVar14;
  }
  plVar14 = (longlong *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    plVar14 = (longlong *)0x0;
  }
  lVar10 = *plVar14;
  local_1e8 = DAT_146534c78;
  if (lVar7 == 0) {
    local_228 = (undefined *)0x0;
    uVar12 = 1;
    uStack_1e0 = 0;
  }
  else {
    lVar7 = *(longlong *)(lVar7 + 0x48);
    if (*(char *)(lVar7 + 0x28) == '\0') {
      FUN_1419f3850(lVar7);
    }
    uStack_1e0 = *(undefined8 *)(lVar7 + 0x38);
    uVar12 = local_218;
  }
  if ((uVar12 & 1) != 0) {
    uVar12 = uVar12 & 0xfffffffe;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_228);
  }
  if (lVar10 == 0) {
    uVar12 = uVar12 | 2;
    local_1c8 = 0;
    local_228 = (undefined *)0x0;
  }
  else {
    local_228 = *(undefined **)(lVar10 + 0x48);
    if (local_228[0x28] == '\0') {
      FUN_1419f3850(local_228);
    }
    local_1c8 = *(undefined8 *)(local_228 + 0x40);
  }
  if ((uVar12 & 2) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_228);
  }
  plVar13 = *(longlong **)(param_1 + 0x27c0);
  local_19c = CONCAT44(local_19c._4_4_,1);
  plVar14 = (longlong *)(local_1f8 + 0x68);
  if (local_1f8 == 0) {
    plVar14 = (longlong *)0x0;
  }
  *(longlong **)(param_1 + 0x27c0) = plVar14;
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  FUN_141ed6ac0(param_2,&local_1e8,2,1);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 4;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 4;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144da0be8;
  uVar16 = _DAT_1464aa6c8;
  puVar9[2] = _DAT_1464aa6c0;
  puVar9[3] = uVar16;
  FResolveSingleSamplePS::SetParameters(lVar10,param_2,param_11);
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
  }
  lVar7 = local_1f0;
  if (local_1f0 != 0) {
    local_248 = *(ulonglong *)(local_1f0 + 0x58);
    local_240 = 0;
    FUN_141a1e590(param_1,local_1f0 + 0x68,*(undefined8 *)(local_1f0 + 0xa8),
                  *(undefined2 *)(lVar10 + 0xc0));
  }
  local_248 = CONCAT44(local_248._4_4_,0x10);
  local_108 = fVar19;
  local_104 = fVar20;
  local_100 = (float)iVar3;
  local_fc = (float)iVar11;
  local_f8 = fVar19;
  local_f4 = fVar17;
  local_f0 = (float)iVar3;
  local_ec = (float)iVar4;
  local_e8 = fVar18;
  local_e4 = fVar20;
  local_e0 = (float)iVar6;
  local_dc = (float)iVar11;
  local_d8 = fVar18;
  local_d4 = fVar17;
  local_d0 = (float)iVar6;
  local_cc = (float)iVar4;
  FUN_141a14d80(param_2,1,2,&local_108);
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
  }
  if (lVar7 != 0) {
    FUN_141a28980(param_1,lVar7 + 0x68);
  }
  FUN_141a28750(param_1);
  if ((((*(int *)(param_1 + 0x1aa0) != 1) || (*(longlong *)(param_1 + 0x1aa4) != local_128[0])) ||
      (*(longlong *)(param_1 + 0x1aac) != local_128[1])) ||
     (*(longlong *)(param_1 + 0x1ab4) != local_128[2])) {
    *(longlong *)(param_1 + 0x1aa4) = local_128[0];
    *(longlong *)(param_1 + 0x1aac) = local_128[1];
    *(longlong *)(param_1 + 0x1ab4) = local_128[2];
    *(undefined4 *)(param_1 + 0x1aa0) = 1;
    (**(code **)(**(longlong **)(param_1 + 0x230) + 0x160))
              (*(longlong **)(param_1 + 0x230),1,local_128);
  }
  *(undefined4 *)(param_1 + 0x42ac) = uVar2;
  plVar14 = *(longlong **)(param_1 + 0x27c0);
  *(longlong **)(param_1 + 0x27c0) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return;
}



// FUNCTION 141a20550 FUN_141a20550 body=1149 status=ok
// SIG undefined FUN_141a20550(void)

void FUN_141a20550(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  float fVar12;
  longlong local_res8;
  longlong local_res10;
  uint local_res18;
  uint local_res20;
  longlong in_stack_ffffffffffffff18;
  undefined4 uVar13;
  ulonglong in_stack_ffffffffffffff20;
  undefined4 uVar14;
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [5];
  
  local_c0 = *(uint *)(param_2 + 0x38) & (uint)*(ushort *)(param_1 + 0x42aa);
  local_res10 = param_2;
  if (local_c0 == 0) {
    *(undefined2 *)(param_1 + 0x42aa) = 0;
    return;
  }
  do {
    local_res20 = -local_c0 & local_c0;
    uVar7 = 0x1f;
    if (local_res20 != 0) {
      for (; local_res20 >> uVar7 == 0; uVar7 = uVar7 - 1) {
      }
    }
    fVar12 = (float)DAT_1468b5a78;
    uVar6 = 0;
    if (local_res20 != 0) {
      uVar6 = uVar7;
    }
    lVar3 = *(longlong *)(param_2 + 0x80);
    local_a0 = (longlong)(int)uVar6;
    local_res8 = CONCAT44(local_res8._4_4_,uVar6);
    local_b0 = *(longlong *)(param_1 + 0x4230 + local_a0 * 8);
    lVar9 = *(longlong *)(local_b0 + 0x48);
    uVar7 = *(uint *)(lVar3 + local_a0 * 4);
    local_c8 = *(undefined8 *)(*(longlong *)(local_b0 + 0x18) + 0x28);
    local_res18 = local_c0;
    uVar10 = local_c0 ^ local_res20;
    local_a8 = local_c8;
    if (uVar7 != 0) {
      uVar10 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      puVar11 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
      local_c0 = local_c0 ^ local_res20;
      do {
        uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        puVar11 = puVar11 + 1;
        uVar7 = uVar10 >> 8;
        plVar1 = *(longlong **)(lVar9 + (ulonglong)(uVar7 & 0xffff) * 8);
        if (plVar1 == (longlong *)0x0) {
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_98);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          uVar5 = CONCAT44(uVar13,uVar10) & 0xffffffff000000ff;
          LowLevelFatalErrorHandler
                    ("Unknown",0x584,L"Null texture (resource %d bind %d) on UB Layout %s",
                     uVar7 & 0xffff,uVar5,puVar4);
          uVar13 = (undefined4)(uVar5 >> 0x20);
          uVar14 = (undefined4)((ulonglong)puVar4 >> 0x20);
          if (local_98[0] != 0) {
            FMemory::Free();
          }
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_88);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          in_stack_ffffffffffffff20 = CONCAT44(uVar14,uVar10) & 0xffffffff000000ff;
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x584,
                     L"Null texture (resource %d bind %d) on UB Layout %s",
                     CONCAT44(uVar13,uVar7) & 0xffffffff0000ffff,in_stack_ffffffffffffff20,puVar4);
          if (local_88[0] != 0) {
            FMemory::Free();
          }
        }
        if ((double)fVar12 != *(double *)plVar1[9]) {
          *(double *)plVar1[9] = (double)fVar12;
        }
        lVar3 = (**(code **)(*plVar1 + 0x48))(plVar1);
        in_stack_ffffffffffffff18 = plVar1[0xb];
        in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffff00000000;
        FUN_141a1e7b0(param_1,*(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x40),
                      uVar10 & 0xff,in_stack_ffffffffffffff18,in_stack_ffffffffffffff20);
        uVar10 = *puVar11;
      } while (uVar10 >> 0x18 == uVar6);
      lVar9 = *(longlong *)(local_b0 + 0x48);
      param_2 = local_res10;
      uVar6 = (uint)local_res8;
      uVar10 = local_c0;
    }
    local_c0 = uVar10;
    lVar3 = *(longlong *)(param_2 + 0x40);
    uVar7 = *(uint *)(lVar3 + local_a0 * 4);
    lVar8 = local_a0;
    local_c8 = local_a8;
    if (uVar7 != 0) {
      uVar6 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      puVar11 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
      local_b8 = 0;
      do {
        uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        puVar11 = puVar11 + 1;
        uVar7 = uVar6 >> 8;
        lVar3 = *(longlong *)(lVar9 + (ulonglong)(uVar7 & 0xffff) * 8);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_78);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          uVar5 = CONCAT44(uVar13,uVar6) & 0xffffffff000000ff;
          LowLevelFatalErrorHandler
                    ("Unknown",0x5ac,L"Null SRV (resource %d bind %d) on UB Layout %s",
                     uVar7 & 0xffff,uVar5,puVar4);
          uVar13 = (undefined4)(uVar5 >> 0x20);
          uVar14 = (undefined4)((ulonglong)puVar4 >> 0x20);
          if (local_78[0] != 0) {
            FMemory::Free();
          }
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_68);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          in_stack_ffffffffffffff20 = CONCAT44(uVar14,uVar6) & 0xffffffff000000ff;
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x5ac,
                     L"Null SRV (resource %d bind %d) on UB Layout %s",
                     CONCAT44(uVar13,uVar7) & 0xffffffff0000ffff,in_stack_ffffffffffffff20,puVar4);
          if (local_68[0] != 0) {
            FMemory::Free();
          }
        }
        in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffff00000000;
        in_stack_ffffffffffffff18 = 0;
        FUN_141a1e7b0(param_1,*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x18),
                      uVar6 & 0xff,0,in_stack_ffffffffffffff20);
        uVar6 = *puVar11;
        lVar8 = (longlong)(int)(uint)local_res8;
      } while (uVar6 >> 0x18 == (uint)local_res8);
      lVar9 = *(longlong *)(local_b0 + 0x48);
      param_2 = local_res10;
      uVar6 = (uint)local_res8;
    }
    lVar3 = *(longlong *)(param_2 + 0x50);
    uVar7 = *(uint *)(lVar3 + lVar8 * 4);
    if (uVar7 != 0) {
      puVar11 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
      uVar7 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      do {
        puVar11 = puVar11 + 1;
        uVar5 = (ulonglong)(uVar7 & 0xff);
        local_res8 = *(longlong *)
                      (*(longlong *)(lVar9 + (ulonglong)(uVar7 >> 8 & 0xffff) * 8) + 0x18);
        if (*(longlong *)(param_1 + 0x2108 + uVar5 * 8) != local_res8) {
          *(longlong *)(param_1 + 0x2108 + uVar5 * 8) = local_res8;
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0x230))
                    (*(longlong **)(param_1 + 0x230),uVar5,1,&local_res8);
        }
        uVar7 = *puVar11;
        param_2 = local_res10;
      } while (uVar7 >> 0x18 == uVar6);
    }
  } while (local_res20 != local_res18);
  *(undefined2 *)(param_1 + 0x42aa) = 0;
  return;
}



// FUNCTION 141a209d0 FUN_141a209d0 body=1133 status=ok
// SIG undefined FUN_141a209d0(void)

void FUN_141a209d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  float fVar12;
  longlong local_res8;
  longlong local_res10;
  uint local_res18;
  uint local_res20;
  longlong in_stack_ffffffffffffff18;
  undefined4 uVar13;
  ulonglong in_stack_ffffffffffffff20;
  undefined4 uVar14;
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [5];
  
  local_c0 = *(uint *)(param_2 + 0x30) & (uint)*(ushort *)(param_1 + 0x42a4);
  local_res10 = param_2;
  if (local_c0 == 0) {
    *(undefined2 *)(param_1 + 0x42a4) = 0;
    return;
  }
  do {
    local_res20 = -local_c0 & local_c0;
    uVar7 = 0x1f;
    if (local_res20 != 0) {
      for (; local_res20 >> uVar7 == 0; uVar7 = uVar7 - 1) {
      }
    }
    fVar12 = (float)DAT_1468b5a78;
    uVar6 = 0;
    if (local_res20 != 0) {
      uVar6 = uVar7;
    }
    lVar3 = *(longlong *)(param_2 + 0x78);
    local_a0 = (longlong)(int)uVar6;
    local_res8 = CONCAT44(local_res8._4_4_,uVar6);
    local_b0 = *(longlong *)(param_1 + 0x40e0 + local_a0 * 8);
    lVar9 = *(longlong *)(local_b0 + 0x48);
    uVar7 = *(uint *)(lVar3 + local_a0 * 4);
    local_c8 = *(undefined8 *)(*(longlong *)(local_b0 + 0x18) + 0x28);
    local_res18 = local_c0;
    uVar10 = local_c0 ^ local_res20;
    local_a8 = local_c8;
    if (uVar7 != 0) {
      uVar10 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      puVar11 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
      local_c0 = local_c0 ^ local_res20;
      do {
        uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        puVar11 = puVar11 + 1;
        uVar7 = uVar10 >> 8;
        plVar1 = *(longlong **)(lVar9 + (ulonglong)(uVar7 & 0xffff) * 8);
        if (plVar1 == (longlong *)0x0) {
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_98);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          uVar5 = CONCAT44(uVar13,uVar10) & 0xffffffff000000ff;
          LowLevelFatalErrorHandler
                    ("Unknown",0x584,L"Null texture (resource %d bind %d) on UB Layout %s",
                     uVar7 & 0xffff,uVar5,puVar4);
          uVar13 = (undefined4)(uVar5 >> 0x20);
          uVar14 = (undefined4)((ulonglong)puVar4 >> 0x20);
          if (local_98[0] != 0) {
            FMemory::Free();
          }
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_88);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          in_stack_ffffffffffffff20 = CONCAT44(uVar14,uVar10) & 0xffffffff000000ff;
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x584,
                     L"Null texture (resource %d bind %d) on UB Layout %s",
                     CONCAT44(uVar13,uVar7) & 0xffffffff0000ffff,in_stack_ffffffffffffff20,puVar4);
          if (local_88[0] != 0) {
            FMemory::Free();
          }
        }
        if ((double)fVar12 != *(double *)plVar1[9]) {
          *(double *)plVar1[9] = (double)fVar12;
        }
        lVar3 = (**(code **)(*plVar1 + 0x48))(plVar1);
        in_stack_ffffffffffffff18 = plVar1[0xb];
        in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffff00000000;
        FUN_141a1e480(param_1,*(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x40),
                      uVar10 & 0xff,in_stack_ffffffffffffff18,in_stack_ffffffffffffff20);
        uVar10 = *puVar11;
      } while (uVar10 >> 0x18 == uVar6);
      lVar9 = *(longlong *)(local_b0 + 0x48);
      param_2 = local_res10;
      uVar6 = (uint)local_res8;
      uVar10 = local_c0;
    }
    local_c0 = uVar10;
    lVar3 = *(longlong *)(param_2 + 0x38);
    uVar7 = *(uint *)(lVar3 + local_a0 * 4);
    lVar8 = local_a0;
    local_c8 = local_a8;
    if (uVar7 != 0) {
      uVar6 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      puVar11 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
      local_b8 = 0;
      do {
        uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        puVar11 = puVar11 + 1;
        uVar7 = uVar6 >> 8;
        lVar3 = *(longlong *)(lVar9 + (ulonglong)(uVar7 & 0xffff) * 8);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_78);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          uVar5 = CONCAT44(uVar13,uVar6) & 0xffffffff000000ff;
          LowLevelFatalErrorHandler
                    ("Unknown",0x5ac,L"Null SRV (resource %d bind %d) on UB Layout %s",
                     uVar7 & 0xffff,uVar5,puVar4);
          uVar13 = (undefined4)(uVar5 >> 0x20);
          uVar14 = (undefined4)((ulonglong)puVar4 >> 0x20);
          if (local_78[0] != 0) {
            FMemory::Free();
          }
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_68);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          in_stack_ffffffffffffff20 = CONCAT44(uVar14,uVar6) & 0xffffffff000000ff;
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x5ac,
                     L"Null SRV (resource %d bind %d) on UB Layout %s",
                     CONCAT44(uVar13,uVar7) & 0xffffffff0000ffff,in_stack_ffffffffffffff20,puVar4);
          if (local_68[0] != 0) {
            FMemory::Free();
          }
        }
        in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffff00000000;
        in_stack_ffffffffffffff18 = 0;
        FUN_141a1e480(param_1,*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x18),
                      uVar6 & 0xff,0,in_stack_ffffffffffffff20);
        uVar6 = *puVar11;
        lVar8 = (longlong)(int)(uint)local_res8;
      } while (uVar6 >> 0x18 == (uint)local_res8);
      lVar9 = *(longlong *)(local_b0 + 0x48);
      param_2 = local_res10;
      uVar6 = (uint)local_res8;
    }
    lVar3 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(uint *)(lVar3 + lVar8 * 4);
    if (uVar7 != 0) {
      puVar11 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
      uVar7 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      do {
        puVar11 = puVar11 + 1;
        uVar5 = (ulonglong)(uVar7 & 0xff);
        local_res8 = *(longlong *)
                      (*(longlong *)(lVar9 + (ulonglong)(uVar7 >> 8 & 0xffff) * 8) + 0x18);
        if (*(longlong *)(param_1 + 0x1f88 + uVar5 * 8) != local_res8) {
          *(longlong *)(param_1 + 0x1f88 + uVar5 * 8) = local_res8;
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0x208))
                    (*(longlong **)(param_1 + 0x230),uVar5,1,&local_res8);
        }
        uVar7 = *puVar11;
        param_2 = local_res10;
      } while (uVar7 >> 0x18 == uVar6);
    }
  } while (local_res20 != local_res18);
  *(undefined2 *)(param_1 + 0x42a4) = 0;
  return;
}



// FUNCTION 141a20e40 FUN_141a20e40 body=1133 status=ok
// SIG undefined FUN_141a20e40(void)

void FUN_141a20e40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  float fVar12;
  longlong local_res8;
  longlong local_res10;
  uint local_res18;
  uint local_res20;
  longlong in_stack_ffffffffffffff18;
  undefined4 uVar13;
  ulonglong in_stack_ffffffffffffff20;
  undefined4 uVar14;
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [5];
  
  local_c0 = *(uint *)(param_2 + 0x30) & (uint)*(ushort *)(param_1 + 0x42a8);
  local_res10 = param_2;
  if (local_c0 == 0) {
    *(undefined2 *)(param_1 + 0x42a8) = 0;
    return;
  }
  do {
    local_res20 = -local_c0 & local_c0;
    uVar7 = 0x1f;
    if (local_res20 != 0) {
      for (; local_res20 >> uVar7 == 0; uVar7 = uVar7 - 1) {
      }
    }
    fVar12 = (float)DAT_1468b5a78;
    uVar6 = 0;
    if (local_res20 != 0) {
      uVar6 = uVar7;
    }
    lVar3 = *(longlong *)(param_2 + 0x78);
    local_a0 = (longlong)(int)uVar6;
    local_res8 = CONCAT44(local_res8._4_4_,uVar6);
    local_b0 = *(longlong *)(param_1 + 0x41c0 + local_a0 * 8);
    lVar9 = *(longlong *)(local_b0 + 0x48);
    uVar7 = *(uint *)(lVar3 + local_a0 * 4);
    local_c8 = *(undefined8 *)(*(longlong *)(local_b0 + 0x18) + 0x28);
    local_res18 = local_c0;
    uVar10 = local_c0 ^ local_res20;
    local_a8 = local_c8;
    if (uVar7 != 0) {
      uVar10 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      puVar11 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
      local_c0 = local_c0 ^ local_res20;
      do {
        uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        puVar11 = puVar11 + 1;
        uVar7 = uVar10 >> 8;
        plVar1 = *(longlong **)(lVar9 + (ulonglong)(uVar7 & 0xffff) * 8);
        if (plVar1 == (longlong *)0x0) {
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_98);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          uVar5 = CONCAT44(uVar13,uVar10) & 0xffffffff000000ff;
          LowLevelFatalErrorHandler
                    ("Unknown",0x584,L"Null texture (resource %d bind %d) on UB Layout %s",
                     uVar7 & 0xffff,uVar5,puVar4);
          uVar13 = (undefined4)(uVar5 >> 0x20);
          uVar14 = (undefined4)((ulonglong)puVar4 >> 0x20);
          if (local_98[0] != 0) {
            FMemory::Free();
          }
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_88);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          in_stack_ffffffffffffff20 = CONCAT44(uVar14,uVar10) & 0xffffffff000000ff;
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x584,
                     L"Null texture (resource %d bind %d) on UB Layout %s",
                     CONCAT44(uVar13,uVar7) & 0xffffffff0000ffff,in_stack_ffffffffffffff20,puVar4);
          if (local_88[0] != 0) {
            FMemory::Free();
          }
        }
        if ((double)fVar12 != *(double *)plVar1[9]) {
          *(double *)plVar1[9] = (double)fVar12;
        }
        lVar3 = (**(code **)(*plVar1 + 0x48))(plVar1);
        in_stack_ffffffffffffff18 = plVar1[0xb];
        in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffff00000000;
        FUN_141a1e6a0(param_1,*(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x40),
                      uVar10 & 0xff,in_stack_ffffffffffffff18,in_stack_ffffffffffffff20);
        uVar10 = *puVar11;
      } while (uVar10 >> 0x18 == uVar6);
      lVar9 = *(longlong *)(local_b0 + 0x48);
      param_2 = local_res10;
      uVar6 = (uint)local_res8;
      uVar10 = local_c0;
    }
    local_c0 = uVar10;
    lVar3 = *(longlong *)(param_2 + 0x38);
    uVar7 = *(uint *)(lVar3 + local_a0 * 4);
    lVar8 = local_a0;
    local_c8 = local_a8;
    if (uVar7 != 0) {
      uVar6 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      puVar11 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
      local_b8 = 0;
      do {
        uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        puVar11 = puVar11 + 1;
        uVar7 = uVar6 >> 8;
        lVar3 = *(longlong *)(lVar9 + (ulonglong)(uVar7 & 0xffff) * 8);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_78);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          uVar5 = CONCAT44(uVar13,uVar6) & 0xffffffff000000ff;
          LowLevelFatalErrorHandler
                    ("Unknown",0x5ac,L"Null SRV (resource %d bind %d) on UB Layout %s",
                     uVar7 & 0xffff,uVar5,puVar4);
          uVar13 = (undefined4)(uVar5 >> 0x20);
          uVar14 = (undefined4)((ulonglong)puVar4 >> 0x20);
          if (local_78[0] != 0) {
            FMemory::Free();
          }
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_68);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          in_stack_ffffffffffffff20 = CONCAT44(uVar14,uVar6) & 0xffffffff000000ff;
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x5ac,
                     L"Null SRV (resource %d bind %d) on UB Layout %s",
                     CONCAT44(uVar13,uVar7) & 0xffffffff0000ffff,in_stack_ffffffffffffff20,puVar4);
          if (local_68[0] != 0) {
            FMemory::Free();
          }
        }
        in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffff00000000;
        in_stack_ffffffffffffff18 = 0;
        FUN_141a1e6a0(param_1,*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x18),
                      uVar6 & 0xff,0,in_stack_ffffffffffffff20);
        uVar6 = *puVar11;
        lVar8 = (longlong)(int)(uint)local_res8;
      } while (uVar6 >> 0x18 == (uint)local_res8);
      lVar9 = *(longlong *)(local_b0 + 0x48);
      param_2 = local_res10;
      uVar6 = (uint)local_res8;
    }
    lVar3 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(uint *)(lVar3 + lVar8 * 4);
    if (uVar7 != 0) {
      puVar11 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
      uVar7 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      do {
        puVar11 = puVar11 + 1;
        uVar5 = (ulonglong)(uVar7 & 0xff);
        local_res8 = *(longlong *)
                      (*(longlong *)(lVar9 + (ulonglong)(uVar7 >> 8 & 0xffff) * 8) + 0x18);
        if (*(longlong *)(param_1 + 0x2088 + uVar5 * 8) != local_res8) {
          *(longlong *)(param_1 + 0x2088 + uVar5 * 8) = local_res8;
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0x100))
                    (*(longlong **)(param_1 + 0x230),uVar5,1,&local_res8);
        }
        uVar7 = *puVar11;
        param_2 = local_res10;
      } while (uVar7 >> 0x18 == uVar6);
    }
  } while (local_res20 != local_res18);
  *(undefined2 *)(param_1 + 0x42a8) = 0;
  return;
}



// FUNCTION 141a212b0 FUN_141a212b0 body=1133 status=ok
// SIG undefined FUN_141a212b0(void)

void FUN_141a212b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  float fVar12;
  longlong local_res8;
  longlong local_res10;
  uint local_res18;
  uint local_res20;
  longlong in_stack_ffffffffffffff18;
  undefined4 uVar13;
  ulonglong in_stack_ffffffffffffff20;
  undefined4 uVar14;
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [5];
  
  local_c0 = *(uint *)(param_2 + 0x30) & (uint)*(ushort *)(param_1 + 0x42a2);
  local_res10 = param_2;
  if (local_c0 == 0) {
    *(undefined2 *)(param_1 + 0x42a2) = 0;
    return;
  }
  do {
    local_res20 = -local_c0 & local_c0;
    uVar7 = 0x1f;
    if (local_res20 != 0) {
      for (; local_res20 >> uVar7 == 0; uVar7 = uVar7 - 1) {
      }
    }
    fVar12 = (float)DAT_1468b5a78;
    uVar6 = 0;
    if (local_res20 != 0) {
      uVar6 = uVar7;
    }
    lVar3 = *(longlong *)(param_2 + 0x78);
    local_a0 = (longlong)(int)uVar6;
    local_res8 = CONCAT44(local_res8._4_4_,uVar6);
    local_b0 = *(longlong *)(param_1 + 0x4070 + local_a0 * 8);
    lVar9 = *(longlong *)(local_b0 + 0x48);
    uVar7 = *(uint *)(lVar3 + local_a0 * 4);
    local_c8 = *(undefined8 *)(*(longlong *)(local_b0 + 0x18) + 0x28);
    local_res18 = local_c0;
    uVar10 = local_c0 ^ local_res20;
    local_a8 = local_c8;
    if (uVar7 != 0) {
      uVar10 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      puVar11 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
      local_c0 = local_c0 ^ local_res20;
      do {
        uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        puVar11 = puVar11 + 1;
        uVar7 = uVar10 >> 8;
        plVar1 = *(longlong **)(lVar9 + (ulonglong)(uVar7 & 0xffff) * 8);
        if (plVar1 == (longlong *)0x0) {
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_98);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          uVar5 = CONCAT44(uVar13,uVar10) & 0xffffffff000000ff;
          LowLevelFatalErrorHandler
                    ("Unknown",0x584,L"Null texture (resource %d bind %d) on UB Layout %s",
                     uVar7 & 0xffff,uVar5,puVar4);
          uVar13 = (undefined4)(uVar5 >> 0x20);
          uVar14 = (undefined4)((ulonglong)puVar4 >> 0x20);
          if (local_98[0] != 0) {
            FMemory::Free();
          }
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_88);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          in_stack_ffffffffffffff20 = CONCAT44(uVar14,uVar10) & 0xffffffff000000ff;
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x584,
                     L"Null texture (resource %d bind %d) on UB Layout %s",
                     CONCAT44(uVar13,uVar7) & 0xffffffff0000ffff,in_stack_ffffffffffffff20,puVar4);
          if (local_88[0] != 0) {
            FMemory::Free();
          }
        }
        if ((double)fVar12 != *(double *)plVar1[9]) {
          *(double *)plVar1[9] = (double)fVar12;
        }
        lVar3 = (**(code **)(*plVar1 + 0x48))(plVar1);
        in_stack_ffffffffffffff18 = plVar1[0xb];
        in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffff00000000;
        FUN_141a1e370(param_1,*(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x40),
                      uVar10 & 0xff,in_stack_ffffffffffffff18,in_stack_ffffffffffffff20);
        uVar10 = *puVar11;
      } while (uVar10 >> 0x18 == uVar6);
      lVar9 = *(longlong *)(local_b0 + 0x48);
      param_2 = local_res10;
      uVar6 = (uint)local_res8;
      uVar10 = local_c0;
    }
    local_c0 = uVar10;
    lVar3 = *(longlong *)(param_2 + 0x38);
    uVar7 = *(uint *)(lVar3 + local_a0 * 4);
    lVar8 = local_a0;
    local_c8 = local_a8;
    if (uVar7 != 0) {
      uVar6 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      puVar11 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
      local_b8 = 0;
      do {
        uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        puVar11 = puVar11 + 1;
        uVar7 = uVar6 >> 8;
        lVar3 = *(longlong *)(lVar9 + (ulonglong)(uVar7 & 0xffff) * 8);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_78);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          uVar5 = CONCAT44(uVar13,uVar6) & 0xffffffff000000ff;
          LowLevelFatalErrorHandler
                    ("Unknown",0x5ac,L"Null SRV (resource %d bind %d) on UB Layout %s",
                     uVar7 & 0xffff,uVar5,puVar4);
          uVar13 = (undefined4)(uVar5 >> 0x20);
          uVar14 = (undefined4)((ulonglong)puVar4 >> 0x20);
          if (local_78[0] != 0) {
            FMemory::Free();
          }
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_68);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          in_stack_ffffffffffffff20 = CONCAT44(uVar14,uVar6) & 0xffffffff000000ff;
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x5ac,
                     L"Null SRV (resource %d bind %d) on UB Layout %s",
                     CONCAT44(uVar13,uVar7) & 0xffffffff0000ffff,in_stack_ffffffffffffff20,puVar4);
          if (local_68[0] != 0) {
            FMemory::Free();
          }
        }
        in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffff00000000;
        in_stack_ffffffffffffff18 = 0;
        FUN_141a1e370(param_1,*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x18),
                      uVar6 & 0xff,0,in_stack_ffffffffffffff20);
        uVar6 = *puVar11;
        lVar8 = (longlong)(int)(uint)local_res8;
      } while (uVar6 >> 0x18 == (uint)local_res8);
      lVar9 = *(longlong *)(local_b0 + 0x48);
      param_2 = local_res10;
      uVar6 = (uint)local_res8;
    }
    lVar3 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(uint *)(lVar3 + lVar8 * 4);
    if (uVar7 != 0) {
      puVar11 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
      uVar7 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      do {
        puVar11 = puVar11 + 1;
        uVar5 = (ulonglong)(uVar7 & 0xff);
        local_res8 = *(longlong *)
                      (*(longlong *)(lVar9 + (ulonglong)(uVar7 >> 8 & 0xffff) * 8) + 0x18);
        if (*(longlong *)(param_1 + 0x1f08 + uVar5 * 8) != local_res8) {
          *(longlong *)(param_1 + 0x1f08 + uVar5 * 8) = local_res8;
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0x1e8))
                    (*(longlong **)(param_1 + 0x230),uVar5,1,&local_res8);
        }
        uVar7 = *puVar11;
        param_2 = local_res10;
      } while (uVar7 >> 0x18 == uVar6);
    }
  } while (local_res20 != local_res18);
  *(undefined2 *)(param_1 + 0x42a2) = 0;
  return;
}



// FUNCTION 141a21720 FUN_141a21720 body=1130 status=ok
// SIG undefined FUN_141a21720(void)

void FUN_141a21720(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  float fVar12;
  longlong local_res8;
  longlong local_res10;
  uint local_res18;
  uint local_res20;
  longlong in_stack_ffffffffffffff18;
  undefined4 uVar13;
  ulonglong in_stack_ffffffffffffff20;
  undefined4 uVar14;
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [5];
  
  local_c0 = *(uint *)(param_2 + 0x30) & (uint)*(ushort *)(param_1 + 0x42a6);
  local_res10 = param_2;
  if (local_c0 == 0) {
    *(undefined2 *)(param_1 + 0x42a6) = 0;
    return;
  }
  do {
    local_res20 = -local_c0 & local_c0;
    uVar7 = 0x1f;
    if (local_res20 != 0) {
      for (; local_res20 >> uVar7 == 0; uVar7 = uVar7 - 1) {
      }
    }
    fVar12 = (float)DAT_1468b5a78;
    uVar6 = 0;
    if (local_res20 != 0) {
      uVar6 = uVar7;
    }
    lVar3 = *(longlong *)(param_2 + 0x78);
    local_a0 = (longlong)(int)uVar6;
    local_res8 = CONCAT44(local_res8._4_4_,uVar6);
    local_b0 = *(longlong *)(param_1 + 0x4150 + local_a0 * 8);
    lVar9 = *(longlong *)(local_b0 + 0x48);
    uVar7 = *(uint *)(lVar3 + local_a0 * 4);
    local_c8 = *(undefined8 *)(*(longlong *)(local_b0 + 0x18) + 0x28);
    local_res18 = local_c0;
    uVar10 = local_c0 ^ local_res20;
    local_a8 = local_c8;
    if (uVar7 != 0) {
      uVar10 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      puVar11 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
      local_c0 = local_c0 ^ local_res20;
      do {
        uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        puVar11 = puVar11 + 1;
        uVar7 = uVar10 >> 8;
        plVar1 = *(longlong **)(lVar9 + (ulonglong)(uVar7 & 0xffff) * 8);
        if (plVar1 == (longlong *)0x0) {
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_98);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          uVar5 = CONCAT44(uVar13,uVar10) & 0xffffffff000000ff;
          LowLevelFatalErrorHandler
                    ("Unknown",0x584,L"Null texture (resource %d bind %d) on UB Layout %s",
                     uVar7 & 0xffff,uVar5,puVar4);
          uVar13 = (undefined4)(uVar5 >> 0x20);
          uVar14 = (undefined4)((ulonglong)puVar4 >> 0x20);
          if (local_98[0] != 0) {
            FMemory::Free();
          }
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_88);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          in_stack_ffffffffffffff20 = CONCAT44(uVar14,uVar10) & 0xffffffff000000ff;
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x584,
                     L"Null texture (resource %d bind %d) on UB Layout %s",
                     CONCAT44(uVar13,uVar7) & 0xffffffff0000ffff,in_stack_ffffffffffffff20,puVar4);
          if (local_88[0] != 0) {
            FMemory::Free();
          }
        }
        if ((double)fVar12 != *(double *)plVar1[9]) {
          *(double *)plVar1[9] = (double)fVar12;
        }
        lVar3 = (**(code **)(*plVar1 + 0x48))(plVar1);
        in_stack_ffffffffffffff18 = plVar1[0xb];
        in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffff00000000;
        FUN_141a1e590(param_1,*(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x40),
                      uVar10 & 0xff,in_stack_ffffffffffffff18,in_stack_ffffffffffffff20);
        uVar10 = *puVar11;
      } while (uVar10 >> 0x18 == uVar6);
      lVar9 = *(longlong *)(local_b0 + 0x48);
      param_2 = local_res10;
      uVar6 = (uint)local_res8;
      uVar10 = local_c0;
    }
    local_c0 = uVar10;
    lVar3 = *(longlong *)(param_2 + 0x38);
    uVar7 = *(uint *)(lVar3 + local_a0 * 4);
    lVar8 = local_a0;
    local_c8 = local_a8;
    if (uVar7 != 0) {
      uVar6 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      puVar11 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
      local_b8 = 0;
      do {
        uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        puVar11 = puVar11 + 1;
        uVar7 = uVar6 >> 8;
        lVar3 = *(longlong *)(lVar9 + (ulonglong)(uVar7 & 0xffff) * 8);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_78);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          uVar5 = CONCAT44(uVar13,uVar6) & 0xffffffff000000ff;
          LowLevelFatalErrorHandler
                    ("Unknown",0x5ac,L"Null SRV (resource %d bind %d) on UB Layout %s",
                     uVar7 & 0xffff,uVar5,puVar4);
          uVar13 = (undefined4)(uVar5 >> 0x20);
          uVar14 = (undefined4)((ulonglong)puVar4 >> 0x20);
          if (local_78[0] != 0) {
            FMemory::Free();
          }
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_68);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          in_stack_ffffffffffffff20 = CONCAT44(uVar14,uVar6) & 0xffffffff000000ff;
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x5ac,
                     L"Null SRV (resource %d bind %d) on UB Layout %s",
                     CONCAT44(uVar13,uVar7) & 0xffffffff0000ffff,in_stack_ffffffffffffff20,puVar4);
          if (local_68[0] != 0) {
            FMemory::Free();
          }
        }
        in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffff00000000;
        in_stack_ffffffffffffff18 = 0;
        FUN_141a1e590(param_1,*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x18),
                      uVar6 & 0xff,0,in_stack_ffffffffffffff20);
        uVar6 = *puVar11;
        lVar8 = (longlong)(int)(uint)local_res8;
      } while (uVar6 >> 0x18 == (uint)local_res8);
      lVar9 = *(longlong *)(local_b0 + 0x48);
      param_2 = local_res10;
      uVar6 = (uint)local_res8;
    }
    lVar3 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(uint *)(lVar3 + lVar8 * 4);
    if (uVar7 != 0) {
      puVar11 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
      uVar7 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      do {
        puVar11 = puVar11 + 1;
        uVar5 = (ulonglong)(uVar7 & 0xff);
        local_res8 = *(longlong *)
                      (*(longlong *)(lVar9 + (ulonglong)(uVar7 >> 8 & 0xffff) * 8) + 0x18);
        if (*(longlong *)(param_1 + 0x2008 + uVar5 * 8) != local_res8) {
          *(longlong *)(param_1 + 0x2008 + uVar5 * 8) = local_res8;
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0x50))
                    (*(longlong **)(param_1 + 0x230),uVar5,1,&local_res8);
        }
        uVar7 = *puVar11;
        param_2 = local_res10;
      } while (uVar7 >> 0x18 == uVar6);
    }
  } while (local_res20 != local_res18);
  *(undefined2 *)(param_1 + 0x42a6) = 0;
  return;
}



// FUNCTION 141a21b90 FUN_141a21b90 body=1133 status=ok
// SIG undefined FUN_141a21b90(void)

void FUN_141a21b90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  float fVar12;
  longlong local_res8;
  longlong local_res10;
  uint local_res18;
  uint local_res20;
  longlong in_stack_ffffffffffffff18;
  undefined4 uVar13;
  ulonglong in_stack_ffffffffffffff20;
  undefined4 uVar14;
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [5];
  
  local_c0 = *(uint *)(param_2 + 0x30) & (uint)*(ushort *)(param_1 + 0x42a0);
  local_res10 = param_2;
  if (local_c0 == 0) {
    *(undefined2 *)(param_1 + 0x42a0) = 0;
    return;
  }
  do {
    local_res20 = -local_c0 & local_c0;
    uVar7 = 0x1f;
    if (local_res20 != 0) {
      for (; local_res20 >> uVar7 == 0; uVar7 = uVar7 - 1) {
      }
    }
    fVar12 = (float)DAT_1468b5a78;
    uVar6 = 0;
    if (local_res20 != 0) {
      uVar6 = uVar7;
    }
    lVar3 = *(longlong *)(param_2 + 0x78);
    local_a0 = (longlong)(int)uVar6;
    local_res8 = CONCAT44(local_res8._4_4_,uVar6);
    local_b0 = *(longlong *)(param_1 + 0x4000 + local_a0 * 8);
    lVar9 = *(longlong *)(local_b0 + 0x48);
    uVar7 = *(uint *)(lVar3 + local_a0 * 4);
    local_c8 = *(undefined8 *)(*(longlong *)(local_b0 + 0x18) + 0x28);
    local_res18 = local_c0;
    uVar10 = local_c0 ^ local_res20;
    local_a8 = local_c8;
    if (uVar7 != 0) {
      uVar10 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      puVar11 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
      local_c0 = local_c0 ^ local_res20;
      do {
        uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        puVar11 = puVar11 + 1;
        uVar7 = uVar10 >> 8;
        plVar1 = *(longlong **)(lVar9 + (ulonglong)(uVar7 & 0xffff) * 8);
        if (plVar1 == (longlong *)0x0) {
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_98);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          uVar5 = CONCAT44(uVar13,uVar10) & 0xffffffff000000ff;
          LowLevelFatalErrorHandler
                    ("Unknown",0x584,L"Null texture (resource %d bind %d) on UB Layout %s",
                     uVar7 & 0xffff,uVar5,puVar4);
          uVar13 = (undefined4)(uVar5 >> 0x20);
          uVar14 = (undefined4)((ulonglong)puVar4 >> 0x20);
          if (local_98[0] != 0) {
            FMemory::Free();
          }
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_88);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          in_stack_ffffffffffffff20 = CONCAT44(uVar14,uVar10) & 0xffffffff000000ff;
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x584,
                     L"Null texture (resource %d bind %d) on UB Layout %s",
                     CONCAT44(uVar13,uVar7) & 0xffffffff0000ffff,in_stack_ffffffffffffff20,puVar4);
          if (local_88[0] != 0) {
            FMemory::Free();
          }
        }
        if ((double)fVar12 != *(double *)plVar1[9]) {
          *(double *)plVar1[9] = (double)fVar12;
        }
        lVar3 = (**(code **)(*plVar1 + 0x48))(plVar1);
        in_stack_ffffffffffffff18 = plVar1[0xb];
        in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffff00000000;
        FUN_141a1e8c0(param_1,*(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x40),
                      uVar10 & 0xff,in_stack_ffffffffffffff18,in_stack_ffffffffffffff20);
        uVar10 = *puVar11;
      } while (uVar10 >> 0x18 == uVar6);
      lVar9 = *(longlong *)(local_b0 + 0x48);
      param_2 = local_res10;
      uVar6 = (uint)local_res8;
      uVar10 = local_c0;
    }
    local_c0 = uVar10;
    lVar3 = *(longlong *)(param_2 + 0x38);
    uVar7 = *(uint *)(lVar3 + local_a0 * 4);
    lVar8 = local_a0;
    local_c8 = local_a8;
    if (uVar7 != 0) {
      uVar6 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      puVar11 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
      local_b8 = 0;
      do {
        uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        puVar11 = puVar11 + 1;
        uVar7 = uVar6 >> 8;
        lVar3 = *(longlong *)(lVar9 + (ulonglong)(uVar7 & 0xffff) * 8);
        if (lVar3 == 0) {
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_78);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          uVar5 = CONCAT44(uVar13,uVar6) & 0xffffffff000000ff;
          LowLevelFatalErrorHandler
                    ("Unknown",0x5ac,L"Null SRV (resource %d bind %d) on UB Layout %s",
                     uVar7 & 0xffff,uVar5,puVar4);
          uVar13 = (undefined4)(uVar5 >> 0x20);
          uVar14 = (undefined4)((ulonglong)puVar4 >> 0x20);
          if (local_78[0] != 0) {
            FMemory::Free();
          }
          puVar2 = (undefined8 *)FName::ToString(&local_c8,local_68);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*puVar2;
          }
          in_stack_ffffffffffffff20 = CONCAT44(uVar14,uVar6) & 0xffffffff000000ff;
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x5ac,
                     L"Null SRV (resource %d bind %d) on UB Layout %s",
                     CONCAT44(uVar13,uVar7) & 0xffffffff0000ffff,in_stack_ffffffffffffff20,puVar4);
          if (local_68[0] != 0) {
            FMemory::Free();
          }
        }
        in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffff00000000;
        in_stack_ffffffffffffff18 = 0;
        FUN_141a1e8c0(param_1,*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x18),
                      uVar6 & 0xff,0,in_stack_ffffffffffffff20);
        uVar6 = *puVar11;
        lVar8 = (longlong)(int)(uint)local_res8;
      } while (uVar6 >> 0x18 == (uint)local_res8);
      lVar9 = *(longlong *)(local_b0 + 0x48);
      param_2 = local_res10;
      uVar6 = (uint)local_res8;
    }
    lVar3 = *(longlong *)(param_2 + 0x48);
    uVar7 = *(uint *)(lVar3 + lVar8 * 4);
    if (uVar7 != 0) {
      puVar11 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
      uVar7 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      do {
        puVar11 = puVar11 + 1;
        uVar5 = (ulonglong)(uVar7 & 0xff);
        local_res8 = *(longlong *)
                      (*(longlong *)(lVar9 + (ulonglong)(uVar7 >> 8 & 0xffff) * 8) + 0x18);
        if (*(longlong *)(param_1 + 0x1e88 + uVar5 * 8) != local_res8) {
          *(longlong *)(param_1 + 0x1e88 + uVar5 * 8) = local_res8;
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0xd0))
                    (*(longlong **)(param_1 + 0x230),uVar5,1,&local_res8);
        }
        uVar7 = *puVar11;
        param_2 = local_res10;
      } while (uVar7 >> 0x18 == uVar6);
    }
  } while (local_res20 != local_res18);
  *(undefined2 *)(param_1 + 0x42a0) = 0;
  return;
}



// FUNCTION 141a22000 FUN_141a22000 body=1265 status=ok
// SIG undefined FUN_141a22000(void)

/* WARNING: Removing unreachable block (ram,0x000141a22436) */
/* WARNING: Removing unreachable block (ram,0x000141a22440) */

undefined8 *
FUN_141a22000(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
             longlong param_5,longlong param_6,longlong param_7,longlong *param_8)

{
  longlong **pplVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  longlong **pplVar13;
  longlong **pplVar14;
  longlong *plVar15;
  longlong *local_res8;
  longlong *local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144da0d78;
  *(undefined2 *)(param_1 + 2) = 0x100;
  local_res18 = param_3;
  local_res20 = param_4;
  FCachedBoundShaderStateLink::FCachedBoundShaderStateLink
            (param_1 + 3,param_2,param_3,param_4,param_5,param_6,param_7,param_1,1);
  plVar15 = param_1 + 0x13;
  *plVar15 = 0;
  pplVar14 = (longlong **)(param_1 + 0x15);
  param_1[0x14] = 0;
  *pplVar14 = (longlong *)0x0;
  pplVar1 = (longlong **)(param_1 + 0x16);
  *pplVar1 = (longlong *)0x0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  local_68 = (longlong *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  if (param_2 == 0) {
    plVar3 = (longlong *)*plVar15;
    *plVar15 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x428);
    pplVar13 = (longlong **)(param_2 + 0x18);
    param_1[0xb] = *(undefined8 *)(param_2 + 0x420);
    param_1[0xc] = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x438);
    param_1[0xd] = *(undefined8 *)(param_2 + 0x430);
    param_1[0xe] = uVar7;
    uVar4 = *(undefined4 *)(param_2 + 0x444);
    uVar5 = *(undefined4 *)(param_2 + 0x448);
    uVar6 = *(undefined4 *)(param_2 + 0x44c);
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x440);
    *(undefined4 *)((longlong)param_1 + 0x7c) = uVar4;
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar6;
    uVar4 = *(undefined4 *)(param_2 + 0x454);
    uVar5 = *(undefined4 *)(param_2 + 0x458);
    uVar6 = *(undefined4 *)(param_2 + 0x45c);
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x450);
    *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
    *(undefined4 *)(param_1 + 0x12) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x94) = uVar6;
    iVar12 = *(int *)(param_2 + 0x418);
    if (iVar12 == 0) {
      pplVar13 = &local_68;
    }
    plVar3 = (longlong *)*plVar15;
    *plVar15 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    iVar11 = 0;
    uVar2 = *(uint *)(local_res18 + 0xb0);
    if (3 < uVar2) {
      iVar11 = *(int *)((longlong)(int)uVar2 + -4 + *(longlong *)(local_res18 + 0xa8));
    }
    iVar12 = (**(code **)(*param_8 + 0x58))
                       (param_8,pplVar13,iVar12,
                        *(longlong *)(local_res18 + 0xa8) + (longlong)*(int *)(local_res18 + 0xb8),
                        (uVar2 - *(int *)(local_res18 + 0xb8)) - iVar11,plVar15);
    if (iVar12 < 0) {
      FUN_141a447e0(iVar12,
                    "Direct3DDevice->CreateInputLayout( InVertexDeclaration && InVertexDeclaration->VertexElements.Num() ? InVertexDeclaration->VertexElements.GetData() : &NullInputElement, InVertexDeclaration ? InVertexDeclaration->VertexElements.Num() : 0, &InVertexShader->Code[ InVertexShader->Offset ], VertexShaderCode.GetActualShaderCodeSize() - InVertexShader->Offset, InputLayout.GetInitReference() )"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Shaders.cpp"
                    ,0x101,param_8);
    }
  }
  plVar15 = (longlong *)param_1[0x14];
  plVar3 = *(longlong **)(local_res18 + 0xa0);
  param_1[0x14] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (plVar15 != (longlong *)0x0) {
    (**(code **)(*plVar15 + 0x10))();
  }
  if (local_res20 == 0) {
    pplVar13 = &local_res10;
    local_res10 = (longlong *)0x0;
    bVar9 = true;
    bVar8 = false;
    plVar15 = local_res8;
  }
  else {
    plVar15 = *(longlong **)(local_res20 + 0xa0);
    local_res8 = plVar15;
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 8))(plVar15);
    }
    pplVar13 = &local_res8;
    bVar9 = false;
    bVar8 = true;
  }
  if (pplVar14 != pplVar13) {
    plVar3 = *pplVar14;
    *pplVar14 = *pplVar13;
    *pplVar13 = (longlong *)0x0;
    plVar15 = local_res8;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      plVar15 = local_res8;
    }
  }
  if ((bVar9) && (local_res10 != (longlong *)0x0)) {
    (**(code **)(*local_res10 + 0x10))();
  }
  if ((bVar8) && (plVar15 != (longlong *)0x0)) {
    (**(code **)(*plVar15 + 0x10))();
  }
  if (param_5 == 0) {
    pplVar14 = &local_90;
    bVar9 = false;
    bVar8 = true;
    local_90 = (longlong *)0x0;
    plVar15 = local_98;
  }
  else {
    plVar15 = *(longlong **)(param_5 + 0xa0);
    local_98 = plVar15;
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 8))(plVar15);
    }
    pplVar14 = &local_98;
    bVar9 = true;
    bVar8 = false;
  }
  if (pplVar1 != pplVar14) {
    plVar3 = *pplVar1;
    *pplVar1 = *pplVar14;
    *pplVar14 = (longlong *)0x0;
    plVar15 = local_98;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      plVar15 = local_98;
    }
  }
  if ((bVar8) && (local_90 != (longlong *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
  }
  if ((bVar9) && (plVar15 != (longlong *)0x0)) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  if (param_6 == 0) {
    pplVar14 = &local_80;
    bVar9 = false;
    bVar8 = true;
    local_80 = (longlong *)0x0;
    plVar15 = local_88;
  }
  else {
    plVar15 = *(longlong **)(param_6 + 0xa0);
    local_88 = plVar15;
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 8))(plVar15);
    }
    pplVar14 = &local_88;
    bVar9 = true;
    bVar8 = false;
  }
  pplVar1 = (longlong **)(param_1 + 0x17);
  if (pplVar1 != pplVar14) {
    plVar3 = *pplVar1;
    *pplVar1 = *pplVar14;
    *pplVar14 = (longlong *)0x0;
    plVar15 = local_88;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      plVar15 = local_88;
    }
  }
  if ((bVar8) && (local_80 != (longlong *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
  }
  if ((bVar9) && (plVar15 != (longlong *)0x0)) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  if (param_7 == 0) {
    pplVar14 = &local_70;
    bVar8 = false;
    local_70 = (longlong *)0x0;
    plVar15 = local_78;
  }
  else {
    plVar15 = *(longlong **)(param_7 + 0xa0);
    local_78 = plVar15;
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 8))(plVar15);
    }
    pplVar14 = &local_78;
    bVar8 = true;
  }
  pplVar1 = (longlong **)(param_1 + 0x18);
  if (pplVar1 != pplVar14) {
    plVar3 = *pplVar1;
    *pplVar1 = *pplVar14;
    *pplVar14 = (longlong *)0x0;
    plVar15 = local_78;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      plVar15 = local_78;
    }
  }
  if ((bVar8) && (plVar15 != (longlong *)0x0)) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(local_res18 + 0x98);
  uVar10 = 0;
  if (param_5 != 0) {
    uVar10 = *(undefined1 *)(param_5 + 0x98);
  }
  *(undefined1 *)((longlong)param_1 + 0xc9) = uVar10;
  if (param_6 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined1 *)(param_6 + 0x98);
  }
  *(undefined1 *)((longlong)param_1 + 0xca) = uVar10;
  uVar10 = 0;
  if (local_res20 != 0) {
    uVar10 = *(undefined1 *)(local_res20 + 0x98);
  }
  *(undefined1 *)((longlong)param_1 + 0xcb) = uVar10;
  if (param_7 == 0) {
    *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0xcc) = *(undefined1 *)(param_7 + 0x98);
  }
  return param_1;
}



// FUNCTION 141a22500 FUN_141a22500 body=199 status=ok
// SIG undefined FUN_141a22500(void)

undefined8 * FUN_141a22500(undefined8 *param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144da0ce8;
  param_1[6] = &PTR_LAB_144da0d28;
  param_1[10] = 0;
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_1 + 10);
  param_1[0x10] = param_2;
  *(undefined4 *)(param_1 + 0x11) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  while ((iVar1 < 4 && (iVar1 = *param_4, iVar1 != 0))) {
    iVar2 = *(int *)(param_1 + 10);
    param_4 = param_4 + 1;
    *(int *)(param_1 + 10) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x54) < iVar2 + 1) {
      FUN_141a42a20(param_1 + 8,iVar2);
    }
    *(int *)((longlong)param_1 + (longlong)iVar2 * 4 + 0x40) = iVar1;
    iVar1 = *(int *)(param_1 + 10);
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141a225d0 FUN_141a225d0 body=3326 status=ok
// SIG undefined FUN_141a225d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_141a225d0(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5)

{
  uint uVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  void *_Dst;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_48 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  lVar13 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = &PTR__purecall_144d83e88;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 8,0,0x160);
  *param_1 = &PTR_FUN_144da1250;
  param_1[6] = &PTR_StartProfileThreadUsage_144da19e8;
  param_1[7] = &PTR_FUN_144da1ce8;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = &PTR__scalar_deleting_destructor__144da1078;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  param_1[0x46] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x47,0,0x1800);
  param_1[0x4da] = 0;
  param_1[0x4db] = 0;
  param_1[0x4dc] = 0;
  *(undefined4 *)(param_1 + 0x4dd) = param_3;
  param_1[0x4de] = 0;
  *(undefined1 *)((longlong)param_1 + 0x272c) = 0;
  *(undefined4 *)(param_1 + 0x4e6) = 0x26;
  param_1[0x4e7] = 0;
  param_1[0x4e8] = 0;
  param_1[0x4e9] = 0;
  param_1[0x4ea] = 0;
  param_1[0x4eb] = 0;
  param_1[0x4ec] = 0;
  param_1[0x4ed] = 0;
  param_1[0x4ee] = 0;
  param_1[0x4ef] = 0;
  param_1[0x4f0] = 0;
  param_1[0x4f1] = 0;
  param_1[0x4f2] = 0;
  param_1[0x4f3] = 0;
  param_1[0x4f4] = 0;
  param_1[0x4f5] = 0;
  param_1[0x4f6] = 0;
  param_1[0x4f7] = 0;
  param_1[0x4f8] = 0;
  param_1[0x7fc] = 0;
  param_1[0x7fd] = 0;
  param_1[0x7fe] = 0;
  *(undefined1 *)(param_1 + 0x7ff) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3ffc) = 0xffffffff;
  param_1[0x800] = 0;
  param_1[0x801] = 0;
  param_1[0x802] = 0;
  param_1[0x803] = 0;
  param_1[0x804] = 0;
  param_1[0x805] = 0;
  param_1[0x806] = 0;
  param_1[0x807] = 0;
  param_1[0x808] = 0;
  param_1[0x809] = 0;
  param_1[0x80a] = 0;
  param_1[0x80b] = 0;
  param_1[0x80c] = 0;
  param_1[0x80d] = 0;
  param_1[0x80e] = 0;
  param_1[0x80f] = 0;
  param_1[0x810] = 0;
  param_1[0x811] = 0;
  param_1[0x812] = 0;
  param_1[0x813] = 0;
  param_1[0x814] = 0;
  param_1[0x815] = 0;
  param_1[0x816] = 0;
  param_1[0x817] = 0;
  param_1[0x818] = 0;
  param_1[0x819] = 0;
  param_1[0x81a] = 0;
  param_1[0x81b] = 0;
  param_1[0x81c] = 0;
  param_1[0x81d] = 0;
  param_1[0x81e] = 0;
  param_1[0x81f] = 0;
  param_1[0x820] = 0;
  param_1[0x821] = 0;
  param_1[0x822] = 0;
  param_1[0x823] = 0;
  param_1[0x824] = 0;
  param_1[0x825] = 0;
  plVar3 = param_1 + 0x869;
  param_1[0x826] = 0;
  param_1[0x827] = 0;
  param_1[0x828] = 0;
  param_1[0x829] = 0;
  param_1[0x82a] = 0;
  param_1[0x82b] = 0;
  param_1[0x82c] = 0;
  param_1[0x82d] = 0;
  param_1[0x82e] = 0;
  param_1[0x82f] = 0;
  param_1[0x830] = 0;
  param_1[0x831] = 0;
  param_1[0x832] = 0;
  param_1[0x833] = 0;
  param_1[0x834] = 0;
  param_1[0x835] = 0;
  param_1[0x836] = 0;
  param_1[0x837] = 0;
  param_1[0x838] = 0;
  param_1[0x839] = 0;
  param_1[0x83a] = 0;
  param_1[0x83b] = 0;
  param_1[0x83c] = 0;
  param_1[0x83d] = 0;
  param_1[0x83e] = 0;
  param_1[0x83f] = 0;
  param_1[0x840] = 0;
  param_1[0x841] = 0;
  param_1[0x842] = 0;
  param_1[0x843] = 0;
  param_1[0x844] = 0;
  param_1[0x845] = 0;
  param_1[0x846] = 0;
  param_1[0x847] = 0;
  param_1[0x848] = 0;
  param_1[0x849] = 0;
  param_1[0x84a] = 0;
  param_1[0x84b] = 0;
  param_1[0x84c] = 0;
  param_1[0x84d] = 0;
  param_1[0x84e] = 0;
  param_1[0x84f] = 0;
  param_1[0x850] = 0;
  param_1[0x851] = 0;
  param_1[0x852] = 0;
  param_1[0x853] = 0;
  *(undefined4 *)((longlong)param_1 + 0x42ac) = 0x22;
  *(undefined2 *)(param_1 + 0x856) = 0;
  param_1[0x857] = 0;
  param_1[0x858] = 0;
  param_1[0x859] = 0;
  param_1[0x85a] = 0;
  param_1[0x85b] = 0;
  *(undefined4 *)(param_1 + 0x85c) = 0;
  param_1[0x85d] = 0;
  param_1[0x85e] = 0;
  param_1[0x85f] = 0;
  param_1[0x860] = 0;
  param_1[0x861] = 0;
  param_1[0x862] = 0;
  param_1[0x863] = 0;
  param_1[0x864] = 0;
  param_1[0x865] = 0;
  param_1[0x866] = 0;
  param_1[0x867] = 0;
  param_1[0x868] = 0;
  *(undefined4 *)(param_1 + 0x86a) = 4;
  param_1[0x86b] = 0;
  param_1[0x86c] = 0;
  *plVar3 = (longlong)&PTR__scalar_deleting_destructor__144da11d0;
  *(undefined1 *)(param_1 + 0x86e) = 0;
  puVar19 = param_1 + 0x86f;
  for (lVar15 = 10000; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar19 = 0;
    puVar19 = puVar19 + 1;
  }
  *(undefined4 *)(param_1 + 0x2f7f) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f80));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2f80),4000);
  *plVar3 = (longlong)&PTR__scalar_deleting_destructor__144da1210;
  cVar9 = IsInRenderingThread();
  if (cVar9 == '\0') {
    FUN_141edf270(plVar3);
  }
  else {
    (**(code **)(*plVar3 + 0x28))();
  }
  param_1[0x2f85] = 0;
  FUN_141a23ee0(param_1 + 0x2f87,param_1);
  lVar15 = 2;
  *(undefined4 *)(param_1 + 0x2fbd) = param_4;
  puVar19 = param_1 + 0x2fbe;
  do {
    puVar16 = param_5;
    puVar11 = puVar19;
    uVar7 = puVar16[1];
    *puVar11 = *puVar16;
    puVar11[1] = uVar7;
    uVar7 = puVar16[3];
    puVar11[2] = puVar16[2];
    puVar11[3] = uVar7;
    uVar7 = puVar16[5];
    puVar11[4] = puVar16[4];
    puVar11[5] = uVar7;
    uVar7 = puVar16[7];
    puVar11[6] = puVar16[6];
    puVar11[7] = uVar7;
    uVar7 = puVar16[9];
    puVar11[8] = puVar16[8];
    puVar11[9] = uVar7;
    uVar7 = puVar16[0xb];
    puVar11[10] = puVar16[10];
    puVar11[0xb] = uVar7;
    uVar7 = puVar16[0xd];
    puVar11[0xc] = puVar16[0xc];
    puVar11[0xd] = uVar7;
    uVar7 = puVar16[0xf];
    puVar11[0xe] = puVar16[0xe];
    puVar11[0xf] = uVar7;
    lVar15 = lVar15 + -1;
    puVar19 = puVar11 + 0x10;
    param_5 = puVar16 + 0x10;
  } while (lVar15 != 0);
  uVar7 = puVar16[0x11];
  puVar11[0x10] = puVar16[0x10];
  puVar11[0x11] = uVar7;
  uVar4 = *(undefined4 *)((longlong)puVar16 + 0x94);
  uVar5 = *(undefined4 *)(puVar16 + 0x13);
  uVar6 = *(undefined4 *)((longlong)puVar16 + 0x9c);
  *(undefined4 *)(puVar11 + 0x12) = *(undefined4 *)(puVar16 + 0x12);
  *(undefined4 *)((longlong)puVar11 + 0x94) = uVar4;
  *(undefined4 *)(puVar11 + 0x13) = uVar5;
  *(undefined4 *)((longlong)puVar11 + 0x9c) = uVar6;
  uVar4 = *(undefined4 *)((longlong)puVar16 + 0xa4);
  uVar5 = *(undefined4 *)(puVar16 + 0x15);
  uVar6 = *(undefined4 *)((longlong)puVar16 + 0xac);
  *(undefined4 *)(puVar11 + 0x14) = *(undefined4 *)(puVar16 + 0x14);
  *(undefined4 *)((longlong)puVar11 + 0xa4) = uVar4;
  *(undefined4 *)(puVar11 + 0x15) = uVar5;
  *(undefined4 *)((longlong)puVar11 + 0xac) = uVar6;
  lVar15 = DAT_1469fc5b8;
  cVar9 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar10 = GetCurrentThreadId();
    lVar12 = 4;
    if (DVar10 == DAT_1468c21c0) goto LAB_141a22ca1;
  }
  else {
LAB_141a22ca1:
    lVar12 = lVar13;
  }
  iVar14 = 0;
  if (-1 < *(int *)(lVar15 + lVar12)) {
    iVar14 = *(int *)(lVar15 + lVar12);
  }
  *(int *)(param_1 + 0x4e5) = iVar14 << 0x14;
  _Dst = (void *)FMemory::Malloc();
  param_1[0x4e4] = _Dst;
  _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)*(uint *)(param_1 + 0x4e5));
  local_58 = &DAT_1468e2360;
  DAT_146ab6310 = 0;
  DAT_146ab6308 = 0;
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"TextureStreaming",L"PoolSizeVRAMPercentage",&DAT_146ab6310);
  if (*(int *)(param_1 + 0x4dd) == 0xa000) {
    DAT_1464c9c11 = 0;
  }
  cVar9 = FUN_141ed07f0(local_48);
  lVar15 = DAT_1469fc580;
  if (cVar9 == '\0') {
    if ((*(int *)(param_1 + 0x4dd) - 0xb000U & 0xfffffeff) == 0) {
      DAT_1464c9c14 = 3;
      DAT_146ab62cc = 0;
    }
    else if (*(int *)(param_1 + 0x4dd) == 0xa000) {
      DAT_1464c9c14 = 2;
      DAT_146ab62cc = 5;
    }
  }
  else {
    DAT_1464c9c14 = local_48[0];
    if (local_48[0] == 0) {
      DAT_146ab62cc = 7;
    }
    else if (local_48[0] == 1) {
      DAT_146ab62cc = 0xe;
    }
  }
  DAT_1464ca1cc = 0;
  DAT_1464ca1f4 = 2;
  DAT_1464ca21c = 0x5a;
  DAT_1464ca244 = 0x3d;
  DAT_1464ca26c = 0x38;
  DAT_1464ca294 = 0x46;
  DAT_1464ca2bc = 0x49;
  DAT_1464ca2e4 = 0x4c;
  _DAT_1464ca7e4 = 0x50;
  DAT_1464ca30c = 0;
  cVar9 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar10 = GetCurrentThreadId();
    lVar12 = 4;
    if (DVar10 == DAT_1468c21c0) goto LAB_141a22e3f;
  }
  else {
LAB_141a22e3f:
    lVar12 = lVar13;
  }
  lVar8 = DAT_1469fc598;
  if (*(int *)(lVar15 + lVar12) == 0) {
    DAT_1464ca384 = 0x2c;
    DAT_1464ca37c = 4;
    _DAT_1464ca8ac = 0x2f;
    DAT_1464ca8a4 = 4;
  }
  else {
    DAT_1464ca384 = 0x13;
    DAT_1464ca37c = 5;
    _DAT_1464ca8ac = 0x16;
    DAT_1464ca8a4 = 5;
  }
  cVar9 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar10 = GetCurrentThreadId();
    lVar15 = 4;
    if (DVar10 != DAT_1468c21c0) goto LAB_141a22ed5;
  }
  lVar15 = lVar13;
LAB_141a22ed5:
  if (*(int *)(lVar15 + lVar8) == 0) {
    DAT_1464ca3ac = 0x35;
    DAT_1464ca3a4 = 2;
  }
  else {
    DAT_1464ca3ac = 0x27;
    DAT_1464ca3a4 = 4;
  }
  DAT_1464ca3d4 = 0x29;
  _DAT_1464cab54 = 0x1f;
  DAT_1464ca3fc = 0x23;
  DAT_1464ca424 = 0x22;
  _DAT_1464ca44c = 0x22;
  _DAT_1464ca474 = 0x10;
  _DAT_1464ca49c = 0x18;
  _DAT_1464ca4c4 = 0xb;
  _DAT_1464ca4ec = 0x2c;
  _DAT_1464ca514 = 0x36;
  _DAT_1464ca53c = 0x36;
  DAT_1464ca334 = 0x1a;
  DAT_1464ca32c = 4;
  DAT_1464ca35c = 10;
  DAT_1464ca354 = 8;
  _DAT_1464ca5dc = 0x1a;
  DAT_1464ca5d4 = 4;
  DAT_1464ca5e0 = 1;
  _DAT_1464ca58c = 0x33;
  _DAT_1464ca564 = 0x53;
  _DAT_1464ca5b4 = 0x42;
  _DAT_1464ca604 = 0x41;
  DAT_1464ca62c = 0x2a;
  _DAT_1464ca654 = 0x2b;
  DAT_1464ca6cc = 0x39;
  _DAT_1464ca6f4 = 0x3b;
  _DAT_1464ca71c = 0xc;
  _DAT_1464ca744 = 0xe;
  _DAT_1464ca76c = 0x55;
  _DAT_1464ca794 = 0x1b;
  _DAT_1464cab2c = 0x1e;
  _DAT_1464ca80c = 0x31;
  _DAT_1464ca94c = 3;
  _DAT_1464ca974 = 0x24;
  _DAT_1464caa64 = 0x5f;
  _DAT_1464caa8c = 0x61;
  _DAT_1464caab4 = 0x3e;
  _DAT_1464cabcc = 0x56;
  _DAT_1464cab7c = 0xb;
  _DAT_1464caba4 = 0xd;
  if (*(int *)(param_1 + 0x4dd) < 0xb000) {
    if (0x9fff < *(int *)(param_1 + 0x4dd)) {
      _DAT_1464c9c28 = 0x200;
      DAT_1464c9c64 = 0x2000;
      _DAT_1464c9c68 = 0x2000;
    }
  }
  else {
    DAT_146ab62e8 = 1;
    DAT_1464c9c64 = 0x4000;
    _DAT_1464c9c68 = 0x4000;
    _DAT_1464c9c28 = 0x800;
    DAT_146ab6329 = 1;
  }
  iVar14 = 0x1f;
  if (DAT_1464c9c64 != 0) {
    for (; DAT_1464c9c64 >> iVar14 == 0; iVar14 = iVar14 + -1) {
    }
  }
  iVar18 = 0x20;
  iVar17 = iVar18;
  if (DAT_1464c9c64 != 0) {
    iVar17 = 0x1f - iVar14;
  }
  uVar1 = DAT_1464c9c64 - 1;
  iVar14 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> iVar14 == 0; iVar14 = iVar14 + -1) {
    }
  }
  if (uVar1 != 0) {
    iVar18 = 0x1f - iVar14;
  }
  DAT_146ab62df = 1;
  DAT_146ab62ff = 1;
  DAT_146ab6325 = 1;
  DAT_146ab62e0 = 1;
  DAT_1464c9c0c = (0x20U - iVar18 & ~((iVar17 << 0x1a) >> 0x1f)) + 1;
  if (0xd < DAT_1464c9c0c) {
    DAT_1464c9c0c = 0xe;
  }
  DAT_1464c9c5c = DAT_1464c9c64;
  DAT_1464c9c60 = DAT_1464c9c64;
  FUN_141a31210(param_1);
  local_40 = 0x80;
  local_3c = 0x400;
  local_38 = 0x10000;
  local_34 = 0x100000;
  lVar12 = operator_new(0x90);
  lVar15 = lVar13;
  if (lVar12 != 0) {
    lVar15 = FUN_141a22500(lVar12,param_1,1,&local_40);
  }
  lVar12 = param_1[0x857];
  param_1[0x857] = lVar15;
  if (lVar15 != 0) {
    *(int *)(lVar15 + 0x38) = *(int *)(lVar15 + 0x38) + 1;
  }
  if (lVar12 != 0) {
    piVar2 = (int *)(lVar12 + 0x38);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (*(code *)**(undefined8 **)(lVar12 + 0x30))((undefined8 *)(lVar12 + 0x30),1);
    }
  }
  local_40 = 0x80;
  local_3c = 0x400;
  local_38 = 0x10000;
  local_34 = 0x100000;
  lVar15 = operator_new(0x90);
  if (lVar15 != 0) {
    lVar13 = FUN_141a22500(lVar15,param_1,2,&local_40);
  }
  lVar15 = param_1[0x858];
  param_1[0x858] = lVar13;
  if (lVar13 != 0) {
    *(int *)(lVar13 + 0x38) = *(int *)(lVar13 + 0x38) + 1;
  }
  if (lVar15 != 0) {
    piVar2 = (int *)(lVar15 + 0x38);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (*(code *)**(undefined8 **)(lVar15 + 0x30))((undefined8 *)(lVar15 + 0x30),1);
    }
  }
  param_1[0x854] = 0;
  *(undefined4 *)(param_1 + 0x855) = 0;
  plVar3 = (longlong *)param_1[0x3f];
  puVar19 = (undefined8 *)param_1[0x3e];
  param_1[0x3f] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  (**(code **)*puVar19)(puVar19,&DAT_144da1e48,param_1 + 0x3f);
  return param_1;
}



// FUNCTION 141a232d0 FD3D11ShaderResourceView body=100 status=ok
// SIG undefined FD3D11ShaderResourceView(void)

undefined8 *
FD3D11ShaderResourceView::FD3D11ShaderResourceView
          (undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_144da0f08;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  param_1[4] = param_3;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))(param_3);
  }
  return param_1;
}



// FUNCTION 141a23340 FD3D11TextureBase body=343 status=ok
// SIG undefined FD3D11TextureBase(void)

undefined8 *
FD3D11TextureBase::FD3D11TextureBase
          (undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
          undefined4 param_5,undefined1 param_6,undefined8 *param_7,longlong param_8)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144da0d80;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = param_2;
  param_1[6] = param_1;
  param_1[7] = param_3;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))(param_3);
  }
  param_1[8] = param_4;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4);
  }
  param_1[9] = 0;
  iVar3 = *(int *)(param_7 + 1);
  plVar2 = (longlong *)*param_7;
  *(int *)(param_1 + 10) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 9,iVar3,0);
    plVar5 = (longlong *)param_1[9];
    do {
      plVar1 = (longlong *)*plVar2;
      *plVar5 = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar5 = plVar5 + 1;
      plVar2 = plVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  plVar2 = param_1 + 0xc;
  *(undefined1 *)(param_1 + 0xb) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x5c) = param_5;
  *plVar2 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_8 != 0) {
    lVar4 = 4;
    do {
      plVar5 = *(longlong **)((param_8 - (longlong)param_1) + -0x60 + (longlong)plVar2);
      plVar1 = (longlong *)*plVar2;
      *plVar2 = (longlong)plVar5;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
      if (*plVar2 != 0) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
      plVar2 = plVar2 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return param_1;
}



// FUNCTION 141a234a0 FUN_141a234a0 body=153 status=ok
// SIG undefined FUN_141a234a0(void)

undefined8 *
FUN_141a234a0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,longlong *param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144d838e0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = *param_3;
  *param_1 = &PTR_FUN_144da0eb0;
  param_1[5] = param_4;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4);
  }
  uVar1 = param_5[1];
  param_1[6] = *param_5;
  param_1[7] = uVar1;
  param_1[8] = param_5[2];
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = param_2;
  return param_1;
}



// FUNCTION 141a23540 FD3D11UnorderedAccessView body=114 status=ok
// SIG undefined FD3D11UnorderedAccessView(void)

undefined8 *
FD3D11UnorderedAccessView::FD3D11UnorderedAccessView
          (undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144da0f10;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  param_1[4] = param_3;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))(param_3);
  }
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 141a235c0 FUN_141a235c0 body=718 status=ok
// SIG undefined FUN_141a235c0(void)

longlong FUN_141a235c0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  undefined4 uStack_3c;
  
  iVar11 = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x40c) = 0;
  uVar12 = 0;
  *(undefined8 *)(param_1 + 0x414) = 0;
  *(undefined8 *)(param_1 + 0x41c) = 0;
  *(undefined8 *)(param_1 + 0x424) = 0;
  *(undefined8 *)(param_1 + 0x42c) = 0;
  *(undefined8 *)(param_1 + 0x434) = 0;
  *(undefined8 *)(param_1 + 0x43c) = 0;
  *(undefined8 *)(param_1 + 0x444) = 0;
  if (0 < *(int *)(param_2 + 0x100)) {
    puVar10 = (undefined1 *)(param_2 + 2);
    do {
      bVar3 = puVar10[-2];
      bVar4 = puVar10[-1];
      uStack_3c = 0;
      switch(*puVar10) {
      case 1:
        uStack_3c = 0x29;
        break;
      case 2:
        uStack_3c = 0x10;
        break;
      case 3:
        uStack_3c = 6;
        break;
      case 4:
        uStack_3c = 2;
        break;
      case 5:
        uStack_3c = 0x1f;
        break;
      case 6:
        uStack_3c = 0x1e;
        break;
      case 7:
        uStack_3c = 0x1c;
        break;
      case 8:
        uStack_3c = 0x57;
        break;
      case 9:
        uStack_3c = 0x26;
        break;
      case 10:
        uStack_3c = 0xe;
        break;
      case 0xb:
        uStack_3c = 0x25;
        break;
      case 0xc:
        uStack_3c = 0x22;
        break;
      case 0xd:
        uStack_3c = 10;
        break;
      case 0xe:
        uStack_3c = 0xd;
        break;
      case 0xf:
        uStack_3c = 0x24;
        break;
      case 0x10:
        uStack_3c = 0xc;
        break;
      case 0x11:
        uStack_3c = 0x23;
        break;
      case 0x12:
        uStack_3c = 0xb;
        break;
      case 0x13:
        uStack_3c = 0x18;
        break;
      default:
        LowLevelFatalErrorHandler("Unknown",0x36,L"Unknown RHI vertex element type %u");
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0x36,L"Unknown RHI vertex element type %u",*puVar10);
      }
      bVar5 = puVar10[1];
      sVar7 = *(short *)(puVar10 + 4);
      bVar6 = puVar10[-2];
      if (((uVar12 & 0xffff) >> (bVar6 & 0x1f) & 1) == 0) {
        uVar12 = uVar12 & 0xffff | 1 << (bVar6 & 0x1f);
        *(undefined2 *)(param_1 + 0x40c + (ulonglong)(uint)bVar6 * 2) = *(undefined2 *)(puVar10 + 2)
        ;
      }
      iVar8 = *(int *)(param_1 + 0x400);
      *(int *)(param_1 + 0x400) = iVar8 + 1;
      if (*(int *)(param_1 + 0x404) < iVar8 + 1) {
        TArray<D3D11_INPUT_ELEMENT_DESC,TFixedAllocator<32>_>::ResizeGrow(param_1,iVar8);
      }
      iVar11 = iVar11 + 1;
      puVar10 = puVar10 + 8;
      puVar1 = (undefined4 *)((longlong)iVar8 * 0x20 + param_1);
      *puVar1 = 0x44da1eb8;
      puVar1[1] = 1;
      puVar1[2] = (uint)bVar5;
      puVar1[3] = uStack_3c;
      puVar2 = (uint *)((longlong)iVar8 * 0x20 + 0x10 + param_1);
      *puVar2 = (uint)bVar3;
      puVar2[1] = (uint)bVar4;
      puVar2[2] = (uint)(sVar7 != 0);
      puVar2[3] = (uint)(sVar7 != 0);
    } while (iVar11 < *(int *)(param_2 + 0x100));
  }
  AlgoImpl::
  IntroSortInternal<D3D11_INPUT_ELEMENT_DESC,FIdentityFunctor,TDereferenceWrapper<D3D11_INPUT_ELEMENT_DESC,_FD3D11VertexDeclarationKey::FD3D11VertexDeclarationKey_::_2_::FCompareDesc>_>
            (param_1,(longlong)*(int *)(param_1 + 0x400),local_res8[0],local_res8);
  uVar9 = FCrc::MemCrc_DEPRECATED(param_1,*(int *)(param_1 + 0x400) << 5,0);
  *(undefined4 *)(param_1 + 0x408) = uVar9;
  uVar9 = FCrc::MemCrc_DEPRECATED(param_1 + 0x40c,0x40,uVar9);
  *(undefined4 *)(param_1 + 0x408) = uVar9;
  return param_1;
}



// FUNCTION 141a238e0 FUN_141a238e0 body=1524 status=ok
// SIG undefined FUN_141a238e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141a238e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  longlong **local_148;
  undefined4 local_138;
  int local_134;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118 [2];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_68;
  uint local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  *param_1 = &PTR_FUN_143f3ece8;
  plVar2 = param_1 + 0x11;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144da0f78;
  *(undefined4 *)(param_1 + 10) = param_5;
  *(undefined1 *)(param_1 + 0xb) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x5c) = param_7;
  param_1[3] = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = param_3;
  *(undefined4 *)(param_1 + 9) = 3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x54) = 1;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *plVar2 = 0;
  *(undefined4 *)(param_1 + 0x14) = 4;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = &PTR__scalar_deleting_destructor__144da0f38;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = param_2;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  lVar1 = param_1[3];
  iVar5 = *(int *)(lVar1 + 0x26d8);
  *(int *)(lVar1 + 0x26d8) = iVar5 + 1;
  if (*(int *)(lVar1 + 0x26dc) < iVar5 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar1 + 0x26d0,iVar5);
  }
  *(undefined8 **)(*(longlong *)(lVar1 + 0x26d0) + (longlong)iVar5 * 8) = param_1;
  (**(code **)(*(longlong *)param_1[3] + 0x740))();
  local_130 = (longlong *)0x0;
  iVar5 = (**(code **)**(undefined8 **)(param_1[3] + 0x210))
                    (*(undefined8 **)(param_1[3] + 0x210),&DAT_145ac6340,&local_130);
  if (iVar5 < 0) {
    local_158 = *(undefined8 *)(param_1[3] + 0x210);
    FUN_141a447e0(iVar5,
                  "D3DRHI->GetDevice()->QueryInterface(IID_IDXGIDevice, (void**)DXGIDevice.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Viewport.cpp"
                  ,0x2f);
  }
  local_138 = *(undefined4 *)(param_1[3] + 0x17c30);
  uVar7 = FCommandLine::Get();
  cVar4 = FParse::Value(uVar7,L"FullscreenDisplay=",&local_138);
  *(char *)(param_1 + 0x12) = cVar4;
  if ((cVar4 == '\0') && ((DAT_146ab632a == '\0' || (DAT_1469fc50a != '\0')))) {
    plVar9 = (longlong *)*plVar2;
    *plVar2 = 0;
  }
  else {
    local_128 = (longlong *)0x0;
    (**(code **)(*local_130 + 0x38))(local_130,&local_128);
    plVar3 = local_128;
    plVar9 = (longlong *)*plVar2;
    *plVar2 = 0;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    iVar5 = (**(code **)(*plVar3 + 0x38))(plVar3,local_138,plVar2);
    plVar9 = local_128;
    if (iVar5 != 0) {
      plVar9 = (longlong *)*plVar2;
      *plVar2 = 0;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      *(undefined1 *)(param_1 + 0x12) = 0;
      plVar9 = local_128;
    }
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x10))();
  }
  if (DAT_1469fc5a2 != '\0') {
    plVar2 = *(longlong **)(param_1[3] + 0x1f0);
    iVar5 = (**(code **)(*plVar2 + 0x70))(plVar2);
    if (iVar5 == 0) {
      DAT_1469fc5a2 = '\0';
    }
    else {
      local_148 = &local_120;
      local_b8 = 0;
      local_94 = 4;
      local_a8 = 1;
      uStack_b0 = 0x100000018;
      local_a0 = 0x30;
      local_9c = 2;
      local_98 = 1;
      local_8c = 2;
      local_120 = (longlong *)0x0;
      local_150 = 0;
      local_158 = 0;
      iVar5 = (**(code **)(*plVar2 + 0x78))
                        (plVar2,*(undefined8 *)(param_1[3] + 0x210),param_1[8],&local_b8);
      if (iVar5 < 0) {
        local_158 = *(undefined8 *)(param_1[3] + 0x210);
        FUN_141a447e0(iVar5,
                      "(Factory2->CreateSwapChainForHwnd(D3DRHI->GetDevice(), WindowHandle, &SwapChainDesc1, nullptr, nullptr, &SwapChain1))"
                      ,
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Viewport.cpp"
                      ,0x68);
      }
      plVar2 = (longlong *)param_1[0xd];
      param_1[0xd] = local_120;
      if (local_120 != (longlong *)0x0) {
        (**(code **)(*local_120 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (param_1[0xd] == 0) {
    local_b8 = *(undefined8 *)((longlong)param_1 + 0x4c);
    local_e0 = 1;
    local_c8 = 2;
    uStack_b0 = 0;
    uVar6 = FUN_141a30560(*(undefined4 *)((longlong)param_1 + 0x5c));
    lVar1 = param_1[3];
    local_d8 = param_1[8];
    local_a8 = (ulonglong)uVar6;
    local_d0 = (uint)(*(char *)(param_1 + 0xb) == '\0');
    local_108 = (undefined4)local_b8;
    uStack_104 = local_b8._4_4_;
    uStack_100 = (undefined4)uStack_b0;
    uStack_fc = uStack_b0._4_4_;
    local_f8 = local_a8;
    local_f0 = 0;
    local_ec = 1;
    local_e4 = 0x30;
    local_cc = 0;
    if ((*(longlong *)(lVar1 + 0x1f8) == 0) || (DAT_1469fc50a == '\0')) {
      plVar2 = *(longlong **)(lVar1 + 0x1f0);
      param_1[0xd] = 0;
      iVar5 = (**(code **)(*plVar2 + 0x50))(plVar2,local_130,&local_108,param_1 + 0xd);
      if (iVar5 < 0) {
        local_158 = *(undefined8 *)(param_1[3] + 0x210);
        FUN_141a447e0(iVar5,
                      "D3DRHI->GetFactory()->CreateSwapChain(DXGIDevice, &SwapChainDesc, SwapChain.GetInitReference())"
                      ,
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Viewport.cpp"
                      ,0x9c);
      }
    }
    else {
      local_148 = local_118;
      local_118[0] = (longlong *)0x0;
      local_68 = 0;
      local_44 = 4;
      local_5c = 0;
      local_58 = 1;
      local_50 = 0x30;
      local_4c = 2;
      local_48 = 1;
      local_3c = 2;
      *(undefined4 *)((longlong)param_1 + 0x54) = 2;
      local_150 = 0;
      local_158 = 0;
      local_60 = uVar6;
      iVar5 = (**(code **)(**(longlong **)(lVar1 + 0x1f8) + 0x78))
                        (*(longlong **)(lVar1 + 0x1f8),*(undefined8 *)(lVar1 + 0x210),local_d8,
                         &local_68);
      if (iVar5 < 0) {
        local_158 = *(undefined8 *)(param_1[3] + 0x210);
        FUN_141a447e0(iVar5,
                      "D3DRHI->GetDXGIFactory2()->CreateSwapChainForHwnd(D3DRHI->GetDevice(), WindowHandle, &SwapChainDesc1, nullptr, nullptr, &SwapChain1)"
                      ,
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Viewport.cpp"
                      ,0x97);
      }
      plVar2 = (longlong *)param_1[0xd];
      param_1[0xd] = local_118[0];
      if (local_118[0] != (longlong *)0x0) {
        (**(code **)(*local_118[0] + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    local_134 = 0;
    iVar5 = (**(code **)(*(longlong *)param_1[0xd] + 0x58))((longlong *)param_1[0xd],&local_134,0);
    if ((-1 < iVar5) && (local_134 != 0)) {
      local_88 = *(undefined4 *)((longlong)param_1 + 0x4c);
      local_84 = *(undefined4 *)(param_1 + 10);
      local_80 = 0;
      local_78 = FUN_141a30560(*(undefined4 *)((longlong)param_1 + 0x5c));
      local_74 = 0;
      (**(code **)(*(longlong *)param_1[0xd] + 0x70))((longlong *)param_1[0xd],&local_88);
    }
  }
  (**(code **)(**(longlong **)(param_1[3] + 0x1f0) + 0x40))
            (*(longlong **)(param_1[3] + 0x1f0),param_1[8],1);
  lVar8 = FUN_141a308d0(param_1[3],*(undefined4 *)((longlong)param_1 + 0x5c),param_1[0xd]);
  lVar1 = param_1[0xe];
  param_1[0xe] = lVar8;
  if (lVar8 != 0) {
    (**(code **)(*(longlong *)(lVar8 + 0x68) + 8))(lVar8 + 0x68);
  }
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x68) + 0x10))(lVar1 + 0x68);
  }
  PostMessageW((HWND)param_1[8],0xf,0,0);
  FUN_141edf270(param_1 + 0x13);
  if (local_130 != (longlong *)0x0) {
    (**(code **)(*local_130 + 0x10))();
  }
  return param_1;
}



// FUNCTION 141a23ee0 FUN_141a23ee0 body=547 status=ok
// SIG undefined FUN_141a23ee0(void)

undefined8 * FUN_141a23ee0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined4 *local_38;
  undefined8 *local_30;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_144da0ca0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xc),4000);
  plVar1 = param_1 + 0x11;
  *plVar1 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  lVar4 = (longlong)DAT_1464c9c3c;
  iVar2 = *(int *)(param_1 + 0x12);
  iVar3 = iVar2 + DAT_1464c9c3c;
  *(int *)(param_1 + 0x12) = iVar3;
  if (*(int *)((longlong)param_1 + 0x94) < iVar3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar2 * 0x10 + *plVar1),0,lVar4 << 4);
  lVar4 = (longlong)DAT_1464c9c3c;
  iVar2 = *(int *)(param_1 + 0xb);
  iVar3 = iVar2 + DAT_1464c9c3c;
  *(int *)(param_1 + 0xb) = iVar3;
  if (*(int *)((longlong)param_1 + 0x5c) < iVar3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 10);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar2 * 0x10 + param_1[10]),0,lVar4 << 4);
  *param_1 = &PTR__scalar_deleting_destructor__144da1188;
  *(undefined4 *)(param_1 + 0x1a) = 4;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = &PTR_FUN_144da1090;
  param_1[0x1f] = &PTR_LAB_144da10d0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x21] = param_2;
  *(undefined4 *)(param_1 + 0x22) = 4;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x27] = param_2;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  (**(code **)(param_1[0x19] + 0x28))();
  local_38 = &DAT_1469fc5c0;
  local_30 = &DAT_1464c1070;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FString_&>_>
            (param_1 + 0x2a,local_res8,&local_38,0);
  return param_1;
}



// FUNCTION 141a24110 FGPUProfilerEventNode body=184 status=ok
// SIG undefined FGPUProfilerEventNode(void)

undefined8 *
FGPUProfilerEventNode::FGPUProfilerEventNode(undefined8 *param_1,short *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_144da0c28;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_1 + 7) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 6,0);
    }
    FGenericPlatformString::Memcpy(param_1[6],param_2,(longlong)iVar1 * 2);
  }
  param_1[8] = param_3;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 141a241d0 ~TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator> body=101 status=ok
// SIG undefined ~TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>(void)

void TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>::
     ~TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 1);
  plVar3 = (longlong *)*param_1;
  if (iVar4 != 0) {
    do {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        piVar1 = (int *)(lVar2 + 0x38);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (*(code *)**(undefined8 **)(lVar2 + 0x30))((undefined8 *)(lVar2 + 0x30),1);
        }
      }
      plVar3 = plVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar3 = (longlong *)*param_1;
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  return;
}



// FUNCTION 141a24240 ~TBoundShaderStateHistory<10000,1> body=258 status=ok
// SIG undefined ~TBoundShaderStateHistory<10000,1>(void)

void TBoundShaderStateHistory<10000,1>::~TBoundShaderStateHistory<10000,1>(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138b8));
  lVar8 = 10000;
  lVar7 = param_1 + 0x138b0;
  do {
    puVar3 = *(undefined8 **)(lVar7 + -8);
    lVar7 = lVar7 + -8;
    lVar8 = lVar8 + -1;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar9 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar9) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar9) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar5 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar6 + 8) = puVar3;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  } while (lVar8 != 0);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 141a24350 FUN_141a24350 body=398 status=ok
// SIG undefined FUN_141a24350(void)

void FUN_141a24350(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_141a24411;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
    if (iVar2 < iStack_44) {
LAB_141a24411:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                ((longlong)iStack_1c * 0x460 + 0x450 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<1120,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141a244e0 ~TSparseArray<TSetElement<TTuple<FD3D11LockedKey,FD3D11LockedData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=398 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FD3D11LockedKey,FD3D11LockedData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FD3D11LockedKey,FD3D11LockedData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FD3D11LockedKey,FD3D11LockedData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar3 = *puVar8;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar6 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar7 = local_58 + 1;
      bVar5 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar7;
      if (bVar5) goto LAB_141a245a1;
      uVar3 = puVar8[lVar6 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar7 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_44 = (iStack_40 - iVar7) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_141a245a1:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      plVar4 = *(longlong **)((longlong)iStack_1c * 0x38 + *param_1 + 0x10);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141a24670 FUN_141a24670 body=797 status=ok
// SIG undefined FUN_141a24670(void)

void FUN_141a24670(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  bool bVar11;
  
  *param_1 = &PTR_FUN_144da1250;
  param_1[6] = &PTR_StartProfileThreadUsage_144da19e8;
  param_1[7] = &PTR_FUN_144da1ce8;
  FUN_141a24d30(param_1 + 0x2f87);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x2f85);
  param_1[0x869] = &PTR__scalar_deleting_destructor__144da1210;
  FRenderResource::ReleaseResource(param_1 + 0x869);
  TBoundShaderStateHistory<10000,1>::~TBoundShaderStateHistory<10000,1>(param_1 + 0x869);
  TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>(param_1 + 0x867);
  TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>(param_1 + 0x865);
  TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>(param_1 + 0x863);
  TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>(param_1 + 0x861);
  TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>(param_1 + 0x85f);
  TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>(param_1 + 0x85d);
  lVar8 = param_1[0x858];
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x38);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (*(code *)**(undefined8 **)(lVar8 + 0x30))((undefined8 *)(lVar8 + 0x30),1);
    }
  }
  lVar8 = param_1[0x857];
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x38);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (*(code *)**(undefined8 **)(lVar8 + 0x30))((undefined8 *)(lVar8 + 0x30),1);
    }
  }
  lVar8 = 0x54;
  puVar10 = param_1 + 0x854;
  do {
    puVar4 = (undefined8 *)puVar10[-1];
    puVar10 = puVar10 + -1;
    lVar8 = lVar8 + -1;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if ((*(char *)(puVar4 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          LOCK();
          bVar11 = *(int *)((longlong)puVar4 + 0xc) == 0;
          if (bVar11) {
            *(int *)((longlong)puVar4 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar11) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar6 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar7 + 8) = puVar4;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
  } while (lVar8 != 0);
  if ((longlong *)param_1[0x4f8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4f8] + 0x10))();
  }
  plVar9 = param_1 + 0x4f7;
  if ((longlong *)*plVar9 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar9 + 0x10))();
  }
  lVar8 = 8;
  lVar7 = 8;
  do {
    plVar2 = plVar9 + -1;
    plVar9 = plVar9 + -1;
    lVar7 = lVar7 + -1;
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x10))();
    }
  } while (lVar7 != 0);
  puVar10 = param_1 + 0x4ef;
  do {
    plVar9 = puVar10 + -1;
    puVar10 = puVar10 + -1;
    lVar8 = lVar8 + -1;
    if ((longlong *)*plVar9 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar9 + 0x10))();
    }
  } while (lVar8 != 0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x4dc);
  if (param_1[0x4da] != 0) {
    FMemory::Free();
  }
  param_1[0x43] = &PTR__scalar_deleting_destructor__144da1078;
  if ((longlong *)param_1[0x42] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x42] + 0x10))();
  }
  if ((longlong *)param_1[0x40] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x40] + 0x10))();
  }
  if ((longlong *)param_1[0x3f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3f] + 0x10))();
  }
  if ((longlong *)param_1[0x3e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3e] + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (param_1[0x3c] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FD3D11LockedKey,FD3D11LockedData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FD3D11LockedKey,FD3D11LockedData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x34);
  param_1[6] = &PTR_StartProfileThreadUsage_144d83b88;
  param_1[7] = &PTR__purecall_144d83e88;
  FRHIRenderPassInfo::~FRHIRenderPassInfo(param_1 + 8);
  *param_1 = &PTR__scalar_deleting_destructor__144d83eb0;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  return;
}



// FUNCTION 141a24990 FUN_141a24990 body=146 status=ok
// SIG undefined FUN_141a24990(void)

void FUN_141a24990(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144da1158;
  (**(code **)(param_1[3] + 0x30))(param_1 + 3);
  (**(code **)(param_1[0x11] + 0x30))(param_1 + 0x11);
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
  }
  FUN_141edd2d0(param_1 + 0x11);
  param_1[9] = &PTR_FUN_144da0c80;
  FUN_141edd2d0(param_1 + 3);
  *param_1 = &PTR_FUN_144da0c50;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141a24a30 ~FD3D11ShaderData body=104 status=ok
// SIG undefined ~FD3D11ShaderData(void)

void FD3D11ShaderData::~FD3D11ShaderData(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141a24aa0 ~FD3D11TextureBase body=182 status=ok
// SIG undefined ~FD3D11TextureBase(void)

void FD3D11TextureBase::~FD3D11TextureBase(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__144da0d80;
  puVar4 = param_1 + 0x10;
  lVar1 = 4;
  do {
    plVar2 = puVar4 + -1;
    puVar4 = puVar4 + -1;
    lVar1 = lVar1 + -1;
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x10))();
    }
  } while (lVar1 != 0);
  iVar3 = *(int *)(param_1 + 10);
  plVar2 = (longlong *)param_1[9];
  if (iVar3 != 0) {
    do {
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x10))();
      }
      plVar2 = plVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = (longlong *)param_1[9];
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  *param_1 = &PTR_FUN_144024f50;
  return;
}



// FUNCTION 141a24b60 FUN_141a24b60 body=461 status=ok
// SIG undefined FUN_141a24b60(void)

void FUN_141a24b60(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  *param_1 = &PTR__scalar_deleting_destructor__144da0f78;
  (**(code **)(*(longlong *)param_1[3] + 0x750))();
  iVar2 = (**(code **)(*(longlong *)param_1[0xd] + 0x50))((longlong *)param_1[0xd],0,0);
  if (iVar2 < 0) {
    FUN_141a447e0(iVar2,"SwapChain->SetFullscreenState(false,NULL)",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
                  ,0xb3,*(undefined8 *)(param_1[3] + 0x210));
  }
  (**(code **)(param_1[0x13] + 0x30))(param_1 + 0x13);
  lVar1 = param_1[3];
  lVar3 = (longlong)*(int *)(lVar1 + 0x26d8);
  if (*(int *)(lVar1 + 0x26d8) != 0) {
    iVar7 = 0;
    bVar8 = (undefined8 *)**(longlong **)(lVar1 + 0x26d0) != param_1;
    lVar5 = 0;
    iVar2 = 0;
    do {
      lVar5 = lVar5 + 1;
      iVar6 = iVar2 + 1;
      if (lVar5 < lVar3) {
        plVar4 = (longlong *)(*(longlong *)(lVar1 + 0x26d0) + lVar5 * 8);
        do {
          if (bVar8 != ((undefined8 *)*plVar4 != param_1)) break;
          iVar6 = iVar6 + 1;
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar5 < lVar3);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar2) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar1 + 0x26d0) + (longlong)iVar7 * 8),
                     (void *)(*(longlong *)(lVar1 + 0x26d0) + (longlong)iVar2 * 8),
                     (longlong)(iVar6 - iVar2) << 3);
        }
        iVar7 = iVar7 + (iVar6 - iVar2);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar2 = iVar6;
    } while (lVar5 < lVar3);
    *(int *)(lVar1 + 0x26d8) = iVar7;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x1b);
  if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1a] + 0x10))();
  }
  FUN_141edd2d0(param_1 + 0x13);
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x10))();
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x68) + 0x10))(lVar1 + 0x68);
  }
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
  }
  *param_1 = &PTR_FUN_143f3ece8;
  return;
}



// FUNCTION 141a24d30 FUN_141a24d30 body=177 status=ok
// SIG undefined FUN_141a24d30(void)

void FUN_141a24d30(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x150,0);
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FMemory::Free();
  }
  FUN_141a2cc40(param_1 + 0x140,0);
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xf8) = &PTR_FUN_144da0c80;
  FUN_141edd2d0();
  FUN_141a24df0(param_1);
  return;
}



// FUNCTION 141a24df0 FUN_141a24df0 body=199 status=ok
// SIG undefined FUN_141a24df0(void)

void FUN_141a24df0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144da0ca0;
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x12);
  plVar1 = (longlong *)param_1[0x11];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0x11];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  iVar2 = *(int *)(param_1 + 0xb);
  plVar1 = (longlong *)param_1[10];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[10];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 141a24ec0 ~FPooledTexture2D body=16 status=ok
// SIG undefined ~FPooledTexture2D(void)

void FPooledTexture2D::~FPooledTexture2D(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141a24ecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 141a24ed0 operator= body=61 status=ok
// SIG undefined operator=(void)

longlong * TRefCountPtr<ID3D11Device>::operator=(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  *param_1 = (longlong)param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return param_1;
}



// FUNCTION 141a24f10 operator_float body=104 status=ok
// SIG undefined operator_float(void)

uint FD3DFloat16::operator_float(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  uVar1 = *param_1;
  fVar4 = (float)(uVar1 & 0x3ff) * 8192.0;
  uVar2 = (int)ROUND((fVar4 + fVar4) - 0.5) >> 1;
  uVar3 = 0x7fffff;
  if (uVar2 < 0x800000) {
    uVar3 = uVar2;
  }
  return uVar3 & 0x7fffff | ((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0xffff8000) << 0x10;
}



// FUNCTION 141a24f80 operator_FLinearColor body=291 status=ok
// SIG undefined operator_FLinearColor(void)

uint * FD3DFloatR11G11B10::operator_FLinearColor(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  uVar1 = *param_1;
  param_2[3] = 0x3f800000;
  fVar4 = (float)(uVar1 & 0x3f) * 262144.0;
  uVar2 = (int)ROUND((fVar4 + fVar4) - 0.5) >> 1;
  uVar3 = 0x7fffff;
  if (uVar2 < 0x800000) {
    uVar3 = uVar2;
  }
  *param_2 = uVar3 & 0x7fffff | ((uVar1 & 0x7c0) + 0x1c00) * 0x20000;
  fVar4 = (float)(uVar1 >> 0xb & 0x3f) * 131072.0;
  uVar2 = (int)ROUND((fVar4 + fVar4) - 0.5) >> 1;
  uVar3 = 0x7fffff;
  if (uVar2 < 0x800000) {
    uVar3 = uVar2;
  }
  fVar4 = (float)(uVar1 >> 0x16 & 0x1f) * 131072.0;
  uVar2 = (int)ROUND((fVar4 + fVar4) - 0.5) >> 1;
  param_2[1] = uVar3 & 0x7fffff | ((uVar1 & 0x3e0000) + 0xe00000) * 0x40;
  uVar3 = 0x7fffff;
  if (uVar2 < 0x800000) {
    uVar3 = uVar2;
  }
  param_2[2] = uVar3 & 0x7fffff | (uVar1 >> 4) + 0x38000000 & 0x7f800000;
  return param_2;
}



// FUNCTION 141a250b0 FUN_141a250b0 body=988 status=ok
// SIG undefined FUN_141a250b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a250b0(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_308 [32];
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  undefined2 *local_2d8;
  undefined2 *local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  uint local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_28c;
  undefined1 local_278 [256];
  longlong local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined1 local_158 [256];
  longlong local_58;
  undefined1 *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  *(undefined4 *)(*param_1 + 0x4c) = *(undefined4 *)param_1[1];
  *(undefined4 *)(*param_1 + 0x50) = *(undefined4 *)param_1[2];
  *(undefined4 *)(*param_1 + 0x5c) = *(undefined4 *)param_1[3];
  lVar9 = *param_1;
  uVar6 = FUN_141a30560(*(undefined4 *)(lVar9 + 0x5c));
  local_2e0 = (undefined1 *)CONCAT44(local_2e0._4_4_,2);
  local_2e8 = (undefined1 *)CONCAT44(local_2e8._4_4_,uVar6);
  iVar7 = (**(code **)(**(longlong **)(lVar9 + 0x68) + 0x68))
                    (*(longlong **)(lVar9 + 0x68),*(undefined4 *)(lVar9 + 0x54),
                     *(undefined4 *)(lVar9 + 0x4c),*(undefined4 *)(lVar9 + 0x50));
  if (iVar7 < 0) {
    lVar9 = *param_1;
    uVar1 = *(undefined4 *)(lVar9 + 0x50);
    uVar2 = *(undefined4 *)(lVar9 + 0x4c);
    uVar3 = *(undefined8 *)(*(longlong *)(lVar9 + 0x18) + 0x210);
    GetD3D11ErrorString(&local_2a0,iVar7,0);
    local_2a8 = FUN_141a2fdb0((char)uVar6);
    FUN_141a43f70(iVar7,uVar3);
    if (iVar7 == -0x7ff8fff2) {
      FUN_1416a8180(1);
    }
    local_50 = local_158;
    puVar4 = (undefined2 *)CONCAT44(uStack_29c,local_2a0);
    local_58 = 0;
    local_48 = 0x4c;
    local_2e8._0_2_ = 0x3f;
    puVar8 = &DAT_143f3eda8;
    if ((int)local_298 != 0) {
      puVar8 = puVar4;
    }
    FGenericPlatformString::Convert<char,wchar_t>
              (local_158,0x4d,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
              );
    puVar5 = local_50;
    local_170 = local_278;
    local_178 = 0;
    local_168 = 0x6b;
    local_2e8 = (undefined1 *)CONCAT62(local_2e8._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_278,0x6c,
               "SwapChain->ResizeBuffers(BufferCount,SizeX,SizeY,RenderTargetFormat,DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH)"
              );
    local_2b8 = CONCAT44(local_2b8._4_4_,uVar6) & 0xffffffff000000ff;
    local_2c0 = local_2a8;
    local_2d0 = (undefined2 *)CONCAT44(local_2d0._4_4_,uVar2);
    local_2e0 = (undefined1 *)CONCAT44(local_2e0._4_4_,0x11f);
    local_2e8 = puVar5;
    local_2d8 = puVar8;
    local_2c8 = uVar1;
    LowLevelFatalErrorHandler
              ("Unknown",0x15a,
               L"%s failed \n at %s:%u \n with error %s, \n Size=%ix%i Format=%s(0x%08X)",local_170)
    ;
    if (local_178 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    local_170 = local_278;
    local_178 = 0;
    local_168 = 0x4c;
    local_2e8._0_2_ = 0x3f;
    puVar8 = &DAT_143f3eda8;
    if ((int)local_298 != 0) {
      puVar8 = puVar4;
    }
    FGenericPlatformString::Convert<char,wchar_t>
              (local_278,0x4d,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Viewport.cpp"
              );
    puVar5 = local_170;
    local_50 = local_158;
    local_58 = 0;
    local_48 = 0x6b;
    local_2e8 = (undefined1 *)CONCAT62(local_2e8._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_158,0x6c,
               "SwapChain->ResizeBuffers(BufferCount,SizeX,SizeY,RenderTargetFormat,DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH)"
              );
    local_2b0 = uVar6 & 0xff;
    local_2b8 = local_2a8;
    local_2c0 = CONCAT44(local_2c0._4_4_,uVar1);
    local_2d8 = (undefined2 *)CONCAT44(local_2d8._4_4_,0x11f);
    local_2e0 = puVar5;
    local_2e8 = local_50;
    local_2d0 = puVar8;
    local_2c8 = uVar2;
    FDebug::AssertFailed
              (&DAT_144d9235e,"Unknown",0x15a,
               L"%s failed \n at %s:%u \n with error %s, \n Size=%ix%i Format=%s(0x%08X)");
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_178 != 0) {
      FMemory::Free();
    }
    if (puVar4 != (undefined2 *)0x0) {
      FMemory::Free(puVar4);
    }
  }
  if (*(char *)param_1[4] != '\0') {
    lVar9 = *param_1;
    local_2a0 = *(undefined4 *)(lVar9 + 0x4c);
    uStack_29c = *(undefined4 *)(lVar9 + 0x50);
    local_298 = 0;
    local_290 = FUN_141a30560(*(undefined4 *)(lVar9 + 0x5c));
    local_28c = 0;
    iVar7 = (**(code **)(**(longlong **)(lVar9 + 0x68) + 0x70))
                      (*(longlong **)(lVar9 + 0x68),&local_2a0);
    if (iVar7 < 0) {
      FUN_141a28da0(*param_1,1);
    }
  }
  return;
}



// FUNCTION 141a25520 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TBoundShaderStateHistory<10000,1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TBoundShaderStateHistory<10000,1>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x138e0);
  }
  return param_1;
}



// FUNCTION 141a25560 FUN_141a25560 body=304 status=ok
// SIG undefined FUN_141a25560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141a25560(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  byte local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_144da0fb8;
  param_1[0xd] = &PTR_LAB_144da1010;
  plVar1 = (longlong *)param_1[0x14];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    if ((*(uint *)(param_1 + 8) & 0x400000) == 0) {
      lVar3 = CalcTextureSize(local_48,local_44,*(undefined4 *)((longlong)param_1 + 0x3c),local_40);
      lVar3 = lVar3 * (ulonglong)local_3c;
    }
    else {
      lVar3 = (longlong)*(int *)(param_1 + 0x12);
    }
    lVar4 = -lVar3;
    if (lVar4 != 0) {
      if (lVar4 < 1) {
        iVar2 = -(int)((longlong)
                       ((lVar3 + 0x3ffU & 0xfffffffffffffc00) +
                       (ulonglong)((uint)((longlong)(lVar3 + 0x3ffU) >> 0x3f) & 0x3ff)) >> 10);
      }
      else {
        iVar2 = (int)((longlong)
                      ((lVar4 + 0x3ffU & 0xfffffffffffffc00) +
                      (ulonglong)((uint)((longlong)(lVar4 + 0x3ffU) >> 0x3f) & 0x3ff)) >> 10);
      }
      if ((local_28 & 0xe0) == 0) {
        LOCK();
        DAT_146ab6300 = DAT_146ab6300 + iVar2;
        UNLOCK();
      }
      else {
        LOCK();
        DAT_146ab6304 = DAT_146ab6304 + iVar2;
        UNLOCK();
      }
    }
  }
  FD3D11TextureBase::~FD3D11TextureBase(param_1 + 0xd);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 141a25690 `scalar_deleting_destructor' body=304 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
TD3D11Texture2D<FD3D11BaseTexture2DArray>::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  byte local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *param_1 = &PTR__scalar_deleting_destructor__144da1d68;
  param_1[0xe] = &PTR_LAB_144da1db8;
  plVar1 = (longlong *)param_1[0x15];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    if ((*(uint *)(param_1 + 8) & 0x400000) == 0) {
      lVar3 = CalcTextureSize(local_48,local_44,*(undefined4 *)((longlong)param_1 + 0x3c),local_40);
      lVar3 = lVar3 * (ulonglong)local_3c;
    }
    else {
      lVar3 = (longlong)*(int *)(param_1 + 0x13);
    }
    lVar4 = -lVar3;
    if (lVar4 != 0) {
      if (lVar4 < 1) {
        iVar2 = -(int)((longlong)
                       ((lVar3 + 0x3ffU & 0xfffffffffffffc00) +
                       (ulonglong)((uint)((longlong)(lVar3 + 0x3ffU) >> 0x3f) & 0x3ff)) >> 10);
      }
      else {
        iVar2 = (int)((longlong)
                      ((lVar4 + 0x3ffU & 0xfffffffffffffc00) +
                      (ulonglong)((uint)((longlong)(lVar4 + 0x3ffU) >> 0x3f) & 0x3ff)) >> 10);
      }
      if ((local_28 & 0xe0) == 0) {
        LOCK();
        DAT_146ab6300 = DAT_146ab6300 + iVar2;
        UNLOCK();
      }
      else {
        LOCK();
        DAT_146ab6304 = DAT_146ab6304 + iVar2;
        UNLOCK();
      }
    }
  }
  FD3D11TextureBase::~FD3D11TextureBase(param_1 + 0xe);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 141a257c0 FUN_141a257c0 body=304 status=ok
// SIG undefined FUN_141a257c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141a257c0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  byte local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_144da1dd8;
  param_1[0xd] = &PTR_LAB_144da1e28;
  plVar1 = (longlong *)param_1[0x14];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    if ((*(uint *)(param_1 + 8) & 0x400000) == 0) {
      lVar3 = CalcTextureSize(local_48,local_44,*(undefined4 *)((longlong)param_1 + 0x3c),local_40);
      lVar3 = lVar3 * (ulonglong)local_3c;
    }
    else {
      lVar3 = (longlong)*(int *)(param_1 + 0x12);
    }
    lVar4 = -lVar3;
    if (lVar4 != 0) {
      if (lVar4 < 1) {
        iVar2 = -(int)((longlong)
                       ((lVar3 + 0x3ffU & 0xfffffffffffffc00) +
                       (ulonglong)((uint)((longlong)(lVar3 + 0x3ffU) >> 0x3f) & 0x3ff)) >> 10);
      }
      else {
        iVar2 = (int)((longlong)
                      ((lVar4 + 0x3ffU & 0xfffffffffffffc00) +
                      (ulonglong)((uint)((longlong)(lVar4 + 0x3ffU) >> 0x3f) & 0x3ff)) >> 10);
      }
      if ((local_28 & 0xe0) == 0) {
        LOCK();
        DAT_146ab6300 = DAT_146ab6300 + iVar2;
        UNLOCK();
      }
      else {
        LOCK();
        DAT_146ab6304 = DAT_146ab6304 + iVar2;
        UNLOCK();
      }
    }
  }
  FD3D11TextureBase::~FD3D11TextureBase(param_1 + 0xd);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 141a258f0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<TBoundShaderStateHistory<10000,1>_>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144da1210;
  FRenderResource::ReleaseResource();
  TBoundShaderStateHistory<10000,1>::~TBoundShaderStateHistory<10000,1>(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x138e0);
  }
  return param_1;
}



// FUNCTION 141a25940 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FD3D11BlendState::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141a25990 `scalar_deleting_destructor' body=185 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FD3D11BoundShaderState::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144da0d78;
  if ((longlong *)param_1[0x18] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x18] + 0x10))();
  }
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
  }
  if ((longlong *)param_1[0x16] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x16] + 0x10))();
  }
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
  }
  if ((longlong *)param_1[0x14] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x14] + 0x10))();
  }
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
  }
  FCachedBoundShaderStateLink::~FCachedBoundShaderStateLink(param_1 + 3);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 141a25a50 FUN_141a25a50 body=63 status=ok
// SIG undefined FUN_141a25a50(void)

longlong FUN_141a25a50(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_144da0c80;
  FUN_141edd2d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141a25a90 `scalar_deleting_destructor' body=85 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FD3D11ComputeShader::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
  }
  FD3D11ShaderData::~FD3D11ShaderData(param_1 + 7);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 141a25af0 `scalar_deleting_destructor' body=92 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FD3D11ConstantBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144da1030;
  param_1[6] = &PTR_LAB_144da1070;
  FRenderResource::ReleaseResource();
  param_1[6] = &PTR_FUN_1440104c8;
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141a25b50 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FD3D11DepthStencilState::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141a25ba0 `scalar_deleting_destructor' body=71 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FD3D11DisjointTimeStampQuery::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141a25bf0 FUN_141a25bf0 body=85 status=ok
// SIG undefined FUN_141a25bf0(void)

undefined8 * FUN_141a25bf0(undefined8 *param_1,ulonglong param_2)

{
  if ((longlong *)param_1[0x14] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x14] + 0x10))();
  }
  FD3D11ShaderData::~FD3D11ShaderData(param_1 + 6);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 141a25c50 `scalar_deleting_destructor' body=149 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FD3D11DynamicBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144da0ce8;
  param_1[6] = &PTR_LAB_144da0d28;
  FRenderResource::ReleaseResource();
  plVar1 = param_1 + 0xb;
  for (iVar2 = *(int *)(param_1 + 0xf); iVar2 != 0; iVar2 = iVar2 + -1) {
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
    plVar1 = plVar1 + 1;
  }
  param_1[6] = &PTR_FUN_1440104c8;
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 141a25cf0 FUN_141a25cf0 body=52 status=ok
// SIG undefined FUN_141a25cf0(void)

undefined8 FUN_141a25cf0(undefined8 param_1,ulonglong param_2)

{
  FUN_141a24670();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x17f20);
  }
  return param_1;
}



// FUNCTION 141a25d30 FUN_141a25d30 body=96 status=ok
// SIG undefined FUN_141a25d30(void)

undefined8 * FUN_141a25d30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144da0c28;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141a25d90 FUN_141a25d90 body=52 status=ok
// SIG undefined FUN_141a25d90(void)

undefined8 FUN_141a25d90(undefined8 param_1,ulonglong param_2)

{
  FUN_141a24990();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141a25dd0 `scalar_deleting_destructor' body=71 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FD3D11EventQuery::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  }
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141a25e20 FUN_141a25e20 body=148 status=ok
// SIG undefined FUN_141a25e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141a25e20(undefined8 *param_1,uint param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_144da0eb8;
  param_1[5] = &PTR_LAB_144da0ec0;
  (**(code **)(*(longlong *)param_1[8] + 0x50))((longlong *)param_1[8],local_28);
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  param_1[5] = &PTR_FUN_144024f50;
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141a25ec0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FD3D11RenderQuery::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141a25f10 FUN_141a25f10 body=123 status=ok
// SIG undefined FUN_141a25f10(void)

undefined8 * FUN_141a25f10(undefined8 *param_1,ulonglong param_2)

{
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUN_1415b1b00(&DAT_1469fc710,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141a25f90 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FD3D11StateCacheBase::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144da1078;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x24b8);
  }
  return param_1;
}



// FUNCTION 141a25fc0 `scalar_deleting_destructor' body=286 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FD3D11Texture3D::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  byte local_20;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *param_1 = &PTR__scalar_deleting_destructor__144da0da0;
  param_1[0xe] = &PTR_LAB_144da0df0;
  plVar1 = (longlong *)param_1[0x15];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,&local_38);
    local_48 = local_2c;
    lVar3 = CalcTextureSize3D(local_38,local_34,local_30,*(undefined4 *)((longlong)param_1 + 0x3c));
    lVar4 = -lVar3;
    if (lVar4 != 0) {
      if (lVar4 < 1) {
        iVar2 = -(int)((longlong)
                       ((lVar3 + 0x3ffU & 0xfffffffffffffc00) +
                       (ulonglong)((uint)((longlong)(lVar3 + 0x3ffU) >> 0x3f) & 0x3ff)) >> 10);
      }
      else {
        iVar2 = (int)((longlong)
                      ((lVar4 + 0x3ffU & 0xfffffffffffffc00) +
                      (ulonglong)((uint)((longlong)(lVar4 + 0x3ffU) >> 0x3f) & 0x3ff)) >> 10);
      }
      if ((local_20 & 0xe0) == 0) {
        LOCK();
        DAT_146ab6300 = DAT_146ab6300 + iVar2;
        UNLOCK();
      }
      else {
        LOCK();
        DAT_146ab6304 = DAT_146ab6304 + iVar2;
        UNLOCK();
      }
    }
  }
  FD3D11TextureBase::~FD3D11TextureBase(param_1 + 0xe);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 141a260e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FD3D11TextureBase::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FD3D11TextureBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 141a26120 `scalar_deleting_destructor' body=75 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FD3D11TextureReference::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FD3D11TextureBase::~FD3D11TextureBase(param_1 + 0xd);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0xc);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 141a26170 FUN_141a26170 body=341 status=ok
// SIG undefined FUN_141a26170(void)

undefined8 * FUN_141a26170(undefined8 *param_1,ulonglong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  *param_1 = &PTR_FUN_144da0eb0;
  if (((param_1[6] == 0) && (plVar4 = (longlong *)param_1[5], plVar4 != (longlong *)0x0)) &&
     (*(char *)(param_1 + 0xb) != '\0')) {
    (**(code **)(*plVar4 + 8))(plVar4);
    iVar5 = DAT_1464aaa90;
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x5c);
    uVar1 = DAT_1464aaa90 - 1;
    uVar6 = GetPoolBucketIndex(uVar2);
    lVar8 = (ulonglong)uVar6 + (longlong)(int)(uVar1 % 3) * 0x11;
    iVar3 = (&DAT_1469fc868)[lVar8 * 4];
    (&DAT_1469fc868)[lVar8 * 4] = iVar3 + 1;
    if ((int)(&DAT_1469fc86c)[lVar8 * 4] < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1469fc860 + lVar8 * 2,iVar3);
    }
    plVar7 = (longlong *)((longlong)iVar3 * 0x10 + (&DAT_1469fc860)[lVar8 * 2]);
    *plVar7 = (longlong)plVar4;
    (**(code **)(*plVar4 + 8))(plVar4);
    *(undefined4 *)(plVar7 + 1) = uVar2;
    *(int *)((longlong)plVar7 + 0xc) = iVar5;
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>::
  ~TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>(param_1 + 9);
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUN_1415b1b00(&DAT_1469fc6f0,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 141a262d0 FUN_141a262d0 body=123 status=ok
// SIG undefined FUN_141a262d0(void)

undefined8 * FUN_141a262d0(undefined8 *param_1,ulonglong param_2)

{
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUN_1415b1b00(&DAT_1469fc730,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141a26350 FUN_141a26350 body=148 status=ok
// SIG undefined FUN_141a26350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141a26350(undefined8 *param_1,uint param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_144da0ee0;
  param_1[4] = &PTR_LAB_144da0ee8;
  (**(code **)(*(longlong *)param_1[7] + 0x50))((longlong *)param_1[7],local_28);
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  param_1[4] = &PTR_FUN_144024f50;
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141a263f0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SUniformGridPanel>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x460);
  }
  return param_1;
}



// FUNCTION 141a26420 `scalar_deleting_destructor' body=102 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FD3D11VertexShader::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0x14] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x14] + 0x10))();
  }
  FD3D11ShaderData::~FD3D11ShaderData(param_1 + 6);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 141a26490 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FFillTextureCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141a24b60();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 141a264d0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FWmfMediaTracks::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141a24d30();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 141a26510 FUN_141a26510 body=52 status=ok
// SIG undefined FUN_141a26510(void)

undefined8 FUN_141a26510(undefined8 param_1,ulonglong param_2)

{
  FUN_141a24df0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141a26550 FUN_141a26550 body=96 status=ok
// SIG undefined FUN_141a26550(void)

undefined8 * FUN_141a26550(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144da0c28;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141a265b0 FUN_141a265b0 body=72 status=ok
// SIG undefined FUN_141a265b0(void)

undefined8 * FUN_141a265b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144da0c50;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141a26600 FUN_141a26600 body=43 status=ok
// SIG undefined FUN_141a26600(void)

undefined8 * FUN_141a26600(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141a26630 FUN_141a26630 body=43 status=ok
// SIG undefined FUN_141a26630(void)

undefined8 * FUN_141a26630(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144da0c80;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141a26660 `scalar_deleting_destructor' body=92 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FWinD3D11ConstantBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144da1030;
  param_1[6] = &PTR_LAB_144da1070;
  FRenderResource::ReleaseResource();
  param_1[6] = &PTR_FUN_1440104c8;
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141a26700 AliasResources body=352 status=ok
// SIG undefined AliasResources(void)

void FD3D11TextureBase::AliasResources(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x38);
  plVar6 = *(longlong **)(param_2 + 0x38);
  *(longlong **)(param_1 + 0x38) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  plVar7 = *(longlong **)(param_2 + 0x40);
  plVar6 = *(longlong **)(param_1 + 0x40);
  *(longlong **)(param_1 + 0x40) = plVar7;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  puVar1 = (undefined8 *)(param_1 + 0x48);
  uVar4 = 0;
  if (puVar1 != (undefined8 *)(param_2 + 0x48)) {
    plVar7 = (longlong *)*puVar1;
    for (iVar5 = *(int *)(param_1 + 0x50); iVar5 != 0; iVar5 = iVar5 + -1) {
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar7 + 0x10))();
      }
      plVar7 = plVar7 + 1;
    }
    iVar5 = *(int *)(param_2 + 0x50);
    plVar7 = *(longlong **)(param_2 + 0x48);
    *(int *)(param_1 + 0x50) = iVar5;
    if ((iVar5 == 0) && (*(int *)(param_1 + 0x54) == 0)) {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar5);
      plVar6 = (longlong *)*puVar1;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        plVar2 = (longlong *)*plVar7;
        *plVar6 = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        plVar6 = plVar6 + 1;
        plVar7 = plVar7 + 1;
      }
    }
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    do {
      plVar7 = *(longlong **)(param_2 + 0x60 + uVar4 * 8);
      plVar6 = *(longlong **)(param_1 + 0x60 + uVar4 * 8);
      *(longlong **)(param_1 + 0x60 + uVar4 * 8) = plVar7;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 0x80));
  }
  return;
}



// FUNCTION 141a26860 FUN_141a26860 body=595 status=ok
// SIG undefined FUN_141a26860(void)

ulonglong FUN_141a26860(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar3 = TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop();
  if (uVar3 == 0) {
    uVar8 = 0;
    do {
      lVar4 = FMemory::Malloc(0x3fe8,0);
      uVar3 = uVar8;
      do {
        uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
        uVar7 = uVar8;
        if (uVar2 != 0) {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(uVar7 + 8) = (ulonglong)(uint)((int)uVar3 * 0x28) + lVar4;
        do {
          LOCK();
          uVar7 = *(ulonglong *)(param_1 + 8);
          if (uVar7 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar7 = 0;
          }
          UNLOCK();
          uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
          if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          uVar5 = uVar8;
          if (uVar2 != 0) {
            uVar5 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
          }
          *(uint *)(uVar5 + 0x10) = (uint)uVar7 & 0x3ffffff;
          LOCK();
          bVar9 = uVar7 == *(ulonglong *)(param_1 + 8);
          if (bVar9) {
            *(ulonglong *)(param_1 + 8) = uVar2 | uVar6;
          }
          UNLOCK();
        } while (!bVar9);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 0x199);
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x199;
      UNLOCK();
      LOCK();
      uVar3 = *(ulonglong *)(param_1 + 8);
      if (uVar3 == 0) {
        *(ulonglong *)(param_1 + 8) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      uVar2 = (uint)uVar3;
      while (uVar1 = uVar2 & 0x3ffffff, (uVar3 & 0x3ffffff) != 0) {
        uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (uVar7 < (uVar3 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        uVar6 = uVar8;
        if (uVar1 != 0) {
          uVar6 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        LOCK();
        bVar9 = uVar3 == *(ulonglong *)(param_1 + 8);
        if (bVar9) {
          *(ulonglong *)(param_1 + 8) = *(uint *)(uVar6 + 0x10) | uVar7;
        }
        UNLOCK();
        if (bVar9) {
          *(undefined4 *)(uVar6 + 0x10) = 0;
          break;
        }
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 8);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)uVar3;
      }
      uVar3 = uVar8;
      if (uVar1 != 0) {
        uVar3 = *(ulonglong *)
                 ((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar2 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
      }
    } while (uVar3 == 0);
  }
  return uVar3;
}



// FUNCTION 141a26ac0 FUN_141a26ac0 body=595 status=ok
// SIG undefined FUN_141a26ac0(void)

ulonglong FUN_141a26ac0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar3 = TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop();
  if (uVar3 == 0) {
    uVar8 = 0;
    do {
      lVar4 = FMemory::Malloc(0x3ff0,0);
      uVar3 = uVar8;
      do {
        uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
        uVar7 = uVar8;
        if (uVar2 != 0) {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(uVar7 + 8) = (ulonglong)(uint)((int)uVar3 * 0x30) + lVar4;
        do {
          LOCK();
          uVar7 = *(ulonglong *)(param_1 + 8);
          if (uVar7 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar7 = 0;
          }
          UNLOCK();
          uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
          if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          uVar5 = uVar8;
          if (uVar2 != 0) {
            uVar5 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
          }
          *(uint *)(uVar5 + 0x10) = (uint)uVar7 & 0x3ffffff;
          LOCK();
          bVar9 = uVar7 == *(ulonglong *)(param_1 + 8);
          if (bVar9) {
            *(ulonglong *)(param_1 + 8) = uVar2 | uVar6;
          }
          UNLOCK();
        } while (!bVar9);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 0x155);
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x155;
      UNLOCK();
      LOCK();
      uVar3 = *(ulonglong *)(param_1 + 8);
      if (uVar3 == 0) {
        *(ulonglong *)(param_1 + 8) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      uVar2 = (uint)uVar3;
      while (uVar1 = uVar2 & 0x3ffffff, (uVar3 & 0x3ffffff) != 0) {
        uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (uVar7 < (uVar3 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        uVar6 = uVar8;
        if (uVar1 != 0) {
          uVar6 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        LOCK();
        bVar9 = uVar3 == *(ulonglong *)(param_1 + 8);
        if (bVar9) {
          *(ulonglong *)(param_1 + 8) = *(uint *)(uVar6 + 0x10) | uVar7;
        }
        UNLOCK();
        if (bVar9) {
          *(undefined4 *)(uVar6 + 0x10) = 0;
          break;
        }
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 8);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)uVar3;
      }
      uVar3 = uVar8;
      if (uVar1 != 0) {
        uVar3 = *(ulonglong *)
                 ((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar2 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
      }
    } while (uVar3 == 0);
  }
  return uVar3;
}



// FUNCTION 141a26d20 FUN_141a26d20 body=579 status=ok
// SIG undefined FUN_141a26d20(void)

ulonglong FUN_141a26d20(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar3 = TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop();
  if (uVar3 == 0) {
    uVar8 = 0;
    do {
      lVar4 = FMemory::Malloc(0x3fc8,0);
      uVar3 = uVar8;
      do {
        uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
        uVar7 = uVar8;
        if (uVar2 != 0) {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(uVar7 + 8) = (ulonglong)(uint)((int)uVar3 * 0x68) + lVar4;
        do {
          LOCK();
          uVar7 = *(ulonglong *)(param_1 + 8);
          if (uVar7 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar7 = 0;
          }
          UNLOCK();
          uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
          if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          uVar5 = uVar8;
          if (uVar2 != 0) {
            uVar5 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
          }
          *(uint *)(uVar5 + 0x10) = (uint)uVar7 & 0x3ffffff;
          LOCK();
          bVar9 = uVar7 == *(ulonglong *)(param_1 + 8);
          if (bVar9) {
            *(ulonglong *)(param_1 + 8) = uVar2 | uVar6;
          }
          UNLOCK();
        } while (!bVar9);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 0x9d);
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x9d;
      UNLOCK();
      LOCK();
      uVar3 = *(ulonglong *)(param_1 + 8);
      if (uVar3 == 0) {
        *(ulonglong *)(param_1 + 8) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      uVar2 = (uint)uVar3;
      while (uVar1 = uVar2 & 0x3ffffff, (uVar3 & 0x3ffffff) != 0) {
        uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (uVar7 < (uVar3 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        uVar6 = uVar8;
        if (uVar1 != 0) {
          uVar6 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        LOCK();
        bVar9 = uVar3 == *(ulonglong *)(param_1 + 8);
        if (bVar9) {
          *(ulonglong *)(param_1 + 8) = *(uint *)(uVar6 + 0x10) | uVar7;
        }
        UNLOCK();
        if (bVar9) {
          *(undefined4 *)(uVar6 + 0x10) = 0;
          break;
        }
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 8);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)uVar3;
      }
      uVar3 = uVar8;
      if (uVar1 != 0) {
        uVar3 = *(ulonglong *)
                 ((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar2 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
      }
    } while (uVar3 == 0);
  }
  return uVar3;
}



// FUNCTION 141a26f70 FUN_141a26f70 body=812 status=ok
// SIG undefined FUN_141a26f70(void)

void FUN_141a26f70(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int *piVar6;
  longlong *plVar7;
  bool bVar8;
  
  cVar1 = FUN_141ec9940();
  if (cVar1 == '\0') {
    return;
  }
  plVar7 = (longlong *)0x0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  param_1[7] = 0;
  if ((*piVar6 < DAT_1469fcd58) && (_Init_thread_header(&DAT_1469fcd58), DAT_1469fcd58 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.gpucrash.collectionenable");
    plVar3 = plVar7;
    if (plVar4 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469fcd50 = plVar3;
    _Init_thread_footer(&DAT_1469fcd58);
  }
  if ((*piVar6 < DAT_1469fcd68) && (_Init_thread_header(&DAT_1469fcd68), DAT_1469fcd68 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.gpucrash.datadepth")
    ;
    plVar3 = plVar7;
    if (plVar4 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469fcd60 = plVar3;
    _Init_thread_footer(&DAT_1469fcd68);
  }
  bVar8 = false;
  if (DAT_1469fcd50 != (longlong *)0x0) {
    bVar8 = *(int *)((longlong)DAT_1469fcd50 + 4) != 0;
  }
  *(bool *)((longlong)param_1 + 9) = bVar8;
  if (DAT_1469fcd60 == (longlong *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)((longlong)DAT_1469fcd60 + 4);
  }
  *(undefined4 *)(param_1 + 5) = uVar5;
  *(undefined1 *)((longlong)param_1 + 10) = DAT_146ab62fc;
  cVar1 = DAT_146ab62fd;
  *(char *)((longlong)param_1 + 0xb) = DAT_146ab62fd;
  if (cVar1 == '\0') {
    if (*(char *)((longlong)param_1 + 10) == '\0') goto LAB_141a27029;
LAB_141a27033:
    uVar2 = FUN_14164b510();
    *(undefined1 *)((longlong)param_1 + 0xd) = uVar2;
    if (*(char *)((longlong)param_1 + 10) == '\0') goto LAB_141a27041;
    if (*(char *)((longlong)param_1 + 0xb) != '\0') goto LAB_141a27073;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 10) = 0;
LAB_141a27029:
    if ((*(char *)((longlong)param_1 + 0xc) == '\0') && (cVar1 != '\0')) goto LAB_141a27033;
LAB_141a27041:
    if (*(char *)((longlong)param_1 + 0xb) == '\0') {
      if (*(char *)((longlong)param_1 + 0xc) != '\0') {
        FUN_141a2cc40(param_1 + 0x28,0);
        SetEmitDrawEvents(*(undefined1 *)((longlong)param_1 + 0xd));
      }
      goto LAB_141a2715c;
    }
LAB_141a27073:
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + -1;
      goto LAB_141a2715c;
    }
  }
  SetEmitDrawEvents(1);
  *(undefined1 *)(param_1 + 1) = 1;
  plVar3 = (longlong *)operator_new(200);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar7 = plVar3 + 0x11;
    *plVar3 = (longlong)&PTR_FUN_144da1158;
    *(undefined4 *)(plVar3 + 4) = 4;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[3] = (longlong)&PTR_FUN_144da1090;
    plVar3[9] = (longlong)&PTR_LAB_144da10d0;
    *(undefined1 *)(plVar3 + 8) = 0;
    plVar3[0xb] = param_2;
    *(undefined4 *)(plVar3 + 0xc) = 1;
    *(undefined4 *)((longlong)plVar3 + 100) = 0xffffffff;
    *(undefined4 *)(plVar3 + 0xd) = 0;
    plVar3[0xe] = 0;
    plVar3[0xf] = 0;
    *(undefined1 *)(plVar3 + 0x10) = 0;
    *(undefined4 *)(plVar3 + 0x12) = 4;
    plVar3[0x13] = 0;
    plVar3[0x14] = 0;
    *(undefined1 *)(plVar3 + 0x16) = 0;
    *plVar7 = (longlong)&PTR__scalar_deleting_destructor__144da10f0;
    plVar3[0x17] = 0;
    plVar3[0x18] = param_2;
    (**(code **)(plVar3[3] + 0x28))();
    (**(code **)(*plVar7 + 0x28))(plVar7);
    plVar7 = plVar3;
  }
  param_1[6] = (longlong)plVar7;
  (**(code **)(*plVar7 + 8))(plVar7);
LAB_141a2715c:
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_1 + 0xb);
  (**(code **)(param_1[0x1f] + 8))(param_1 + 0x1f,0,0);
  cVar1 = FUN_14164b510();
  if (cVar1 == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a271b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,L"FRAME",0xff00ff00);
  return;
}



// FUNCTION 141a272a0 FUN_141a272a0 body=915 status=ok
// SIG undefined FUN_141a272a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a272a0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  ulonglong local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  LARGE_INTEGER local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_60 = 3;
  uVar3 = 0;
  local_48 = (longlong *)0x0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0xc0))
                    (*(longlong **)(param_1 + 0x210),&local_60,&local_48);
  if (iVar2 == 0) {
    local_60 = 2;
    local_40 = (longlong *)0x0;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0xc0))
                      (*(longlong **)(param_1 + 0x210),&local_60,&local_40);
    if (iVar2 == 0) {
      local_58 = (longlong *)0x0;
      local_68 = 0;
      local_50 = (longlong *)0x0;
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0xc0))
                        (*(longlong **)(param_1 + 0x210),&local_68,&local_50);
      if (iVar2 == 0) {
        plVar1 = *(longlong **)(param_1 + 0x210);
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 0x10))();
        }
        iVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1,&local_68,&local_58);
        if (iVar2 == 0) {
          plVar1 = *(longlong **)(param_1 + 0x200);
          (**(code **)(*plVar1 + 0xe0))(plVar1,local_50);
          (**(code **)(*plVar1 + 0x378))(plVar1);
          local_68 = local_68 & 0xffffffff00000000;
          local_78 = 0;
          (**(code **)(*plVar1 + 0xe8))(plVar1,local_50,&local_68,4);
          while ((int)local_68 == 0) {
            FUN_1416b1760(0x3a83126f);
            local_68 = local_68 & 0xffffffff00000000;
            local_78 = 0;
            (**(code **)(*plVar1 + 0xe8))(plVar1,local_50,&local_68,4);
          }
          do {
            (**(code **)(*plVar1 + 0xd8))(plVar1,local_48);
            (**(code **)(*plVar1 + 0xe0))(plVar1,local_40);
            (**(code **)(*plVar1 + 0xe0))(plVar1,local_48);
            (**(code **)(*plVar1 + 0xe0))(plVar1,local_58);
            (**(code **)(*plVar1 + 0x378))(plVar1);
            local_60 = 0;
            do {
              local_68 = local_68 & 0xffffffff00000000;
              QueryPerformanceCounter(&local_38);
              local_78 = 0;
              (**(code **)(*plVar1 + 0xe8))(plVar1,local_58,&local_68,4);
            } while ((int)local_68 == 0);
            local_78 = 0;
            local_30 = 0;
            local_28 = 0;
            iVar2 = (**(code **)(*plVar1 + 0xe8))(plVar1,local_48,&local_30,0x10);
            if ((iVar2 == 0) && ((int)local_28 == 0)) {
              local_78 = 0;
              iVar2 = (**(code **)(*plVar1 + 0xe8))(plVar1,local_40,&local_60,8);
              if ((iVar2 == 0) && (local_60 != 0)) {
                dVar4 = (double)FGenericPlatformTime::GetSecondsPerCycle64();
                dVar5 = (double)local_38.QuadPart;
                if (local_38.QuadPart < 0) {
                  dVar5 = dVar5 + 1.8446744073709552e+19;
                }
                _DAT_146ab6350 = 0;
                dVar4 = dVar4 * dVar5 * 1000000.0;
                if ((9.223372036854776e+18 <= dVar4) &&
                   (dVar4 = dVar4 - 9.223372036854776e+18, dVar4 < 9.223372036854776e+18)) {
                  _DAT_146ab6350 = -0x8000000000000000;
                }
                _DAT_146ab6350 = (longlong)dVar4 + _DAT_146ab6350;
                dVar4 = (double)DAT_146ab6340;
                if (DAT_146ab6340 < 0) {
                  dVar4 = dVar4 + 1.8446744073709552e+19;
                }
                dVar5 = (double)local_60;
                if (local_60 < 0) {
                  dVar5 = dVar5 + 1.8446744073709552e+19;
                }
                dVar5 = (1000000.0 / dVar4) * dVar5;
                _DAT_146ab6348 = 0;
                if ((9.223372036854776e+18 <= dVar5) &&
                   (dVar5 = dVar5 - 9.223372036854776e+18, dVar5 < 9.223372036854776e+18)) {
                  _DAT_146ab6348 = -0x8000000000000000;
                }
                _DAT_146ab6348 = (longlong)dVar5 + _DAT_146ab6348;
                break;
              }
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < 10);
        }
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  return;
}



// FUNCTION 141a27640 FUN_141a27640 body=391 status=ok
// SIG undefined FUN_141a27640(void)

undefined8 FUN_141a27640(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int local_28 [2];
  longlong local_20;
  int *local_18;
  uint local_10;
  
  if ((DAT_1469fc508 == '\0') || (*(char *)(param_1 + 0x17c41) == '\0')) {
    return 1;
  }
  iVar1 = _guard_xfg_dispatch_icall_nop(local_28);
  if (iVar1 != 1) {
    lVar3 = *(longlong *)(param_1 + 0x17d70);
    if (lVar3 == 0) {
      return 1;
    }
    if ((DAT_1469fc508 != '\0') && (*(longlong *)(lVar3 + 0x208) != 0)) {
      SetEmitDrawEvents(0);
      uVar2 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar3 + 0x208));
      if ((uVar2 & 0xfff00000) != 0xbad00000) {
        *(undefined8 *)(lVar3 + 0x208) = 0;
      }
    }
    DAT_1469fc508 = 0;
    return 1;
  }
  if (local_28[0] == 0) {
    return 1;
  }
  DAT_1468e222a = 1;
  lVar3 = *(longlong *)(param_1 + 0x17d70);
  local_20 = *(longlong *)(lVar3 + 0x208);
  if (local_20 != 0) {
    iVar1 = _guard_xfg_dispatch_icall_nop(1,&local_20,&local_18);
    if (iVar1 == 1) {
      if (local_10 >> 2 == 0) {
        return 0;
      }
      uVar4 = (ulonglong)(local_10 >> 2);
      do {
        if (*(int *)(param_1 + 0x17d90) != *(int *)(param_1 + 0x17dbc)) {
          lVar3 = *(longlong *)(param_1 + 0x17dc8);
          if (*(longlong *)(param_1 + 0x17dc8) == 0) {
            lVar3 = param_1 + 0x17dc0;
          }
          iVar1 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x17dd0) - 1U & (longlong)*local_18
                                   ) * 4);
          if (iVar1 != -1) {
            do {
              if (*(int *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x17d88)) == *local_18)
              break;
              iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x17d88));
            } while (iVar1 != -1);
          }
        }
        local_18 = local_18 + 1;
        uVar4 = uVar4 - 1;
        if (uVar4 == 0) {
          return 0;
        }
      } while( true );
    }
    lVar3 = *(longlong *)(param_1 + 0x17d70);
  }
  if (lVar3 != 0) {
    FUN_141a439c0();
    DAT_1469fc508 = '\0';
  }
  return 0;
}



// FUNCTION 141a277d0 FUN_141a277d0 body=856 status=ok
// SIG undefined FUN_141a277d0(void)

void FUN_141a277d0(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong *local_res20;
  
  if (DAT_146ab62c8 == '\0') {
    return;
  }
  DAT_146ab62c8 = 0;
  puVar3 = (undefined8 *)FRenderResource::GetResourceList();
  for (puVar3 = (undefined8 *)*puVar3; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3)
  {
    (**(code **)(*(longlong *)puVar3[2] + 0x20))();
  }
  puVar3 = (undefined8 *)FRenderResource::GetResourceList();
  for (puVar3 = (undefined8 *)*puVar3; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3)
  {
    (**(code **)(*(longlong *)puVar3[2] + 0x10))();
  }
  EmptyD3DSamplerStateCache();
  lVar5 = *(longlong *)(param_1 + 0x42b8);
  *(undefined8 *)(param_1 + 0x42b8) = 0;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x38);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (*(code *)**(undefined8 **)(lVar5 + 0x30))((undefined8 *)(lVar5 + 0x30),1);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x42c0);
  *(undefined8 *)(param_1 + 0x42c0) = 0;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x38);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (*(code *)**(undefined8 **)(lVar5 + 0x30))((undefined8 *)(lVar5 + 0x30),1);
    }
  }
  lVar5 = param_1 + 0x4000;
  lVar6 = 6;
  do {
    lVar9 = 0xe;
    do {
      TRefCountPtr<FRHIIndexBuffer>::operator=(lVar5,0);
      lVar5 = lVar5 + 8;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  (**(code **)(*(longlong *)(param_1 + 0x218) + 8))((longlong *)(param_1 + 0x218),0);
  FUN_141ec6070(0);
  plVar7 = &DAT_1469fc750;
  do {
    lVar5 = *plVar7;
    for (iVar8 = (int)plVar7[1]; iVar8 != 0; iVar8 = iVar8 + -1) {
      FPooledTexture2D::~FPooledTexture2D(lVar5);
      lVar5 = lVar5 + 0x10;
    }
    *(undefined4 *)(plVar7 + 1) = 0;
    if (*(int *)((longlong)plVar7 + 0xc) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar7,0);
    }
    plVar7 = plVar7 + 2;
  } while ((longlong)plVar7 < 0x1469fc860);
  plVar7 = &DAT_1469fc860;
  do {
    lVar5 = 0x11;
    do {
      lVar6 = *plVar7;
      for (iVar8 = (int)plVar7[1]; iVar8 != 0; iVar8 = iVar8 + -1) {
        FPooledTexture2D::~FPooledTexture2D(lVar6);
        lVar6 = lVar6 + 0x10;
      }
      *(undefined4 *)(plVar7 + 1) = 0;
      if (*(int *)((longlong)plVar7 + 0xc) != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar7,0);
      }
      plVar7 = plVar7 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  } while ((longlong)plVar7 < 0x1469fcb90);
  plVar7 = &DAT_1469fc5d0;
  do {
    lVar5 = 3;
    do {
      lVar6 = *plVar7;
      for (iVar8 = (int)plVar7[1]; iVar8 != 0; iVar8 = iVar8 + -1) {
        FPooledTexture2D::~FPooledTexture2D(lVar6);
        lVar6 = lVar6 + 8;
      }
      *(undefined4 *)(plVar7 + 1) = 0;
      if (*(int *)((longlong)plVar7 + 0xc) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar7,0);
      }
      plVar7 = plVar7 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  } while ((longlong)plVar7 < 0x1469fc6f0);
  if (*(longlong *)(param_1 + 0x26f0) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x10))();
    agsDriverExtensionsDX11_DestroyDevice
              (*(undefined8 *)(param_1 + 0x26f0),*(undefined8 *)(param_1 + 0x210),0,
               *(undefined8 *)(param_1 + 0x200),0);
    agsDeInit(*(undefined8 *)(param_1 + 0x26f0));
    DAT_146ab62dc = 0;
    *(undefined8 *)(param_1 + 0x26f0) = 0;
  }
  uVar4 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar4,L"d3ddebug");
  if (cVar2 == '\0') {
    uVar4 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar4,L"d3debug");
    if (cVar2 == '\0') {
      uVar4 = FCommandLine::Get();
      cVar2 = FParse::Param(uVar4,L"dxdebug");
      if (cVar2 == '\0') goto LAB_141a27ae2;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x200) + 0x370))();
  (**(code **)(**(longlong **)(param_1 + 0x200) + 0x378))();
  (**(code **)**(undefined8 **)(param_1 + 0x210))
            (*(undefined8 **)(param_1 + 0x210),&DAT_144da1e58,&local_res20);
  if (local_res20 != (longlong *)0x0) {
    (**(code **)(*local_res20 + 0x50))(local_res20,2);
  }
LAB_141a27ae2:
  plVar7 = *(longlong **)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x10))();
  }
  plVar7 = *(longlong **)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x210) = 0;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}



// FUNCTION 141a27b40 FUN_141a27b40 body=1126 status=ok
// SIG undefined FUN_141a27b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a27b40(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [2];
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar5 = (ulonglong)*(int *)(param_1 + 0x3fc8);
  if (-1 < *(int *)(param_1 + 0x3fc8)) {
    lVar3 = uVar5 * 8 + 0x20;
    do {
      if (*(longlong *)(param_1 + 0x27a8 + lVar3) != 0) {
        *(undefined8 *)(param_1 + 0x27a8 + lVar3) = 0;
        iVar2 = *(int *)(param_1 + 0x3fc8);
        if (iVar2 == (int)uVar5) {
          do {
            iVar2 = iVar2 + -1;
            *(int *)(param_1 + 0x3fc8) = iVar2;
            if (iVar2 < 0) break;
          } while (*(longlong *)(param_1 + 0x27c8 + (longlong)iVar2 * 8) == 0);
        }
        plVar1 = *(longlong **)(lVar3 + 0x218 + param_1);
        local_a8[0] = 0;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          *(undefined8 *)(lVar3 + 0x218 + param_1) = local_a8[0];
          (**(code **)(**(longlong **)(param_1 + 0x230) + 200))
                    (*(longlong **)(param_1 + 0x230),uVar5 & 0xffffffff,1,local_a8);
        }
      }
      lVar3 = lVar3 + -8;
      uVar4 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar4;
    } while (-1 < (int)uVar4);
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x2188),0,0xe0);
  _guard_xfg_dispatch_icall_nop(local_98,0,0x70);
  (**(code **)(**(longlong **)(param_1 + 0x230) + 0x38))
            (*(longlong **)(param_1 + 0x230),0,0xe,local_98);
  uVar5 = (ulonglong)*(int *)(param_1 + 0x3fcc);
  if (-1 < *(int *)(param_1 + 0x3fcc)) {
    lVar3 = uVar5 * 8 + 0x420;
    do {
      if (*(longlong *)(lVar3 + 0x27a8 + param_1) != 0) {
        *(undefined8 *)(lVar3 + 0x27a8 + param_1) = 0;
        iVar2 = *(int *)(param_1 + 0x3fcc);
        if (iVar2 == (int)uVar5) {
          do {
            iVar2 = iVar2 + -1;
            *(int *)(param_1 + 0x3fcc) = iVar2;
            if (iVar2 < 0) break;
          } while (*(longlong *)(param_1 + 0x2bc8 + (longlong)iVar2 * 8) == 0);
        }
        plVar1 = *(longlong **)(param_1 + 0x218 + lVar3);
        local_a8[0] = 0;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          *(undefined8 *)(param_1 + 0x218 + lVar3) = local_a8[0];
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0x1d8))
                    (*(longlong **)(param_1 + 0x230),uVar5 & 0xffffffff,1,local_a8);
        }
      }
      lVar3 = lVar3 + -8;
      uVar4 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar4;
    } while (-1 < (int)uVar4);
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x2268),0,0xe0);
  _guard_xfg_dispatch_icall_nop(local_98,0,0x70);
  (**(code **)(**(longlong **)(param_1 + 0x230) + 0x1f0))
            (*(longlong **)(param_1 + 0x230),0,0xe,local_98);
  uVar5 = (ulonglong)*(int *)(param_1 + 0x3fd0);
  if (-1 < *(int *)(param_1 + 0x3fd0)) {
    lVar3 = uVar5 * 8 + 0x820;
    do {
      if (*(longlong *)(lVar3 + 0x27a8 + param_1) != 0) {
        *(undefined8 *)(lVar3 + 0x27a8 + param_1) = 0;
        iVar2 = *(int *)(param_1 + 0x3fd0);
        if (iVar2 == (int)uVar5) {
          do {
            iVar2 = iVar2 + -1;
            *(int *)(param_1 + 0x3fd0) = iVar2;
            if (iVar2 < 0) break;
          } while (*(longlong *)(param_1 + 0x2fc8 + (longlong)iVar2 * 8) == 0);
        }
        plVar1 = *(longlong **)(lVar3 + 0x218 + param_1);
        local_a8[0] = 0;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          *(undefined8 *)(lVar3 + 0x218 + param_1) = local_a8[0];
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0x1f8))
                    (*(longlong **)(param_1 + 0x230),uVar5 & 0xffffffff,1,local_a8);
        }
      }
      lVar3 = lVar3 + -8;
      uVar4 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar4;
    } while (-1 < (int)uVar4);
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x2348),0,0xe0);
  _guard_xfg_dispatch_icall_nop(local_98,0,0x70);
  (**(code **)(**(longlong **)(param_1 + 0x230) + 0x210))
            (*(longlong **)(param_1 + 0x230),0,0xe,local_98);
  uVar5 = (ulonglong)*(int *)(param_1 + 0x3fd8);
  if (-1 < *(int *)(param_1 + 0x3fd8)) {
    lVar3 = uVar5 * 8 + 0x1020;
    do {
      if (*(longlong *)(lVar3 + 0x27a8 + param_1) != 0) {
        *(undefined8 *)(lVar3 + 0x27a8 + param_1) = 0;
        iVar2 = *(int *)(param_1 + 0x3fd8);
        if (iVar2 == (int)uVar5) {
          do {
            iVar2 = iVar2 + -1;
            *(int *)(param_1 + 0x3fd8) = iVar2;
            if (iVar2 < 0) break;
          } while (*(longlong *)(param_1 + 0x37c8 + (longlong)iVar2 * 8) == 0);
        }
        plVar1 = *(longlong **)(param_1 + 0x218 + lVar3);
        local_a8[0] = 0;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          *(undefined8 *)(param_1 + 0x218 + lVar3) = local_a8[0];
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0xf8))
                    (*(longlong **)(param_1 + 0x230),uVar5 & 0xffffffff,1,local_a8);
        }
      }
      lVar3 = lVar3 + -8;
      uVar4 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar4;
    } while (-1 < (int)uVar4);
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x2508),0,0xe0);
  _guard_xfg_dispatch_icall_nop(local_98,0,0x70);
  (**(code **)(**(longlong **)(param_1 + 0x230) + 0xb0))
            (*(longlong **)(param_1 + 0x230),0,0xe,local_98);
  uVar5 = (ulonglong)*(int *)(param_1 + 0x3fd4);
  if (-1 < *(int *)(param_1 + 0x3fd4)) {
    lVar3 = uVar5 * 8 + 0xc20;
    do {
      if (*(longlong *)(lVar3 + 0x27a8 + param_1) != 0) {
        *(undefined8 *)(lVar3 + 0x27a8 + param_1) = 0;
        iVar2 = *(int *)(param_1 + 0x3fd4);
        if (iVar2 == (int)uVar5) {
          do {
            iVar2 = iVar2 + -1;
            *(int *)(param_1 + 0x3fd4) = iVar2;
            if (iVar2 < 0) break;
          } while (*(longlong *)(param_1 + 0x33c8 + (longlong)iVar2 * 8) == 0);
        }
        plVar1 = *(longlong **)(lVar3 + 0x218 + param_1);
        local_a8[0] = 0;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          *(undefined8 *)(lVar3 + 0x218 + param_1) = local_a8[0];
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0x40))
                    (*(longlong **)(param_1 + 0x230),uVar5 & 0xffffffff,1,local_a8);
        }
      }
      lVar3 = lVar3 + -8;
      uVar4 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar4;
    } while (-1 < (int)uVar4);
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x2428),0,0xe0);
  _guard_xfg_dispatch_icall_nop(local_98,0,0x70);
  (**(code **)(**(longlong **)(param_1 + 0x230) + 0x80))
            (*(longlong **)(param_1 + 0x230),0,0xe,local_98);
  FUN_141a1a5d0(param_1);
  return;
}



// FUNCTION 141a27fb0 ClearState body=645 status=ok
// SIG undefined ClearState(void)

void FD3D11StateCacheBase::ClearState(longlong param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x370))();
  }
  lVar3 = 6;
  plVar2 = (longlong *)(param_1 + 0x20);
  lVar5 = 6;
  do {
    lVar4 = 0x80;
    do {
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x10))();
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined8 *)(param_1 + 0x1820) = 0;
  *(undefined4 *)(param_1 + 0x1828) = 0;
  *(undefined8 *)(param_1 + 0x1830) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1838) = 0;
  *(undefined8 *)(param_1 + 0x1840) = 0;
  *(undefined8 *)(param_1 + 0x1848) = 0;
  *(undefined8 *)(param_1 + 0x1850) = 0;
  *(undefined8 *)(param_1 + 0x1858) = 0;
  *(undefined8 *)(param_1 + 0x1860) = 0;
  *(undefined4 *)(param_1 + 0x1868) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x186c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1870) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1874) = 0x3f800000;
  ::_guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x188c),0,0x180);
  *(undefined4 *)(param_1 + 0x1888) = 0;
  *(undefined4 *)(param_1 + 0x1878) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1880) = 0;
  *(undefined8 *)(param_1 + 0x1c28) = 0;
  ::_guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x1a10),0,0x200);
  ::_guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x1c70),0,0x300);
  puVar1 = (undefined4 *)(param_1 + 0x1f88);
  *(undefined8 *)(param_1 + 0x1c10) = 0;
  *(undefined8 *)(param_1 + 0x1c18) = 0;
  *(undefined4 *)(param_1 + 0x1c20) = 0;
  do {
    *(undefined8 *)(puVar1 + -6) = 0;
    puVar1[-4] = 0;
    puVar1[-3] = 0x1000;
    *(undefined8 *)(puVar1 + -2) = 0;
    *puVar1 = 0;
    puVar1[1] = 0x1000;
    *(undefined8 *)(puVar1 + 2) = 0;
    puVar1[4] = 0;
    puVar1[5] = 0x1000;
    *(undefined8 *)(puVar1 + 6) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0x1000;
    *(undefined8 *)(puVar1 + 10) = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0x1000;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0x1000;
    *(undefined8 *)(puVar1 + 0x12) = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0x1000;
    *(undefined8 *)(puVar1 + 0x16) = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0x1000;
    *(undefined8 *)(puVar1 + 0x1a) = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0x1000;
    *(undefined8 *)(puVar1 + 0x1e) = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0x1000;
    *(undefined8 *)(puVar1 + 0x22) = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0x1000;
    *(undefined8 *)(puVar1 + 0x26) = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0x1000;
    *(undefined8 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0x1000;
    *(undefined8 *)(puVar1 + 0x2e) = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0x1000;
    puVar1 = puVar1 + 0x38;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 141a28240 FUN_141a28240 body=158 status=ok
// SIG undefined FUN_141a28240(void)

void FUN_141a28240(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong local_res10 [3];
  
  lVar1 = **(longlong **)(param_1 + 0x4338);
  if (lVar1 != 0) {
    cVar2 = FUN_141a282e0(lVar1,*(undefined1 *)(param_1 + 0x42b0));
    if (cVar2 != '\0') {
      local_res10[0] =
           *(longlong *)(*(longlong *)(lVar1 + 0x60) + (ulonglong)*(uint *)(lVar1 + 0x68) * 8);
      if (((*(longlong *)(param_1 + 0x25e8) != local_res10[0]) || (*(int *)(param_1 + 0x25f0) != 0))
         || (*(int *)(param_1 + 0x25f4) != 0x1000)) {
        *(longlong *)(param_1 + 0x25e8) = local_res10[0];
        *(undefined4 *)(param_1 + 0x25f0) = 0;
        *(undefined4 *)(param_1 + 0x25f4) = 0x1000;
        (**(code **)(**(longlong **)(param_1 + 0x230) + 0x238))
                  (*(longlong **)(param_1 + 0x230),0,1,local_res10);
      }
    }
  }
  return;
}



// FUNCTION 141a282e0 FUN_141a282e0 body=184 status=ok
// SIG undefined FUN_141a282e0(void)

undefined8 FUN_141a282e0(longlong param_1,char param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x58);
  if (uVar4 == 0) {
    return 0;
  }
  if (param_2 == '\0') {
    uVar2 = *(uint *)(param_1 + 0x5c);
    if (*(uint *)(param_1 + 0x5c) <= uVar4) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2;
    *(uint *)(param_1 + 0x5c) = uVar4;
  }
  else {
    *(uint *)(param_1 + 0x5c) = uVar4;
  }
  uVar2 = 1;
  uVar3 = *(uint *)(param_1 + 0x48) >> 1;
  if (uVar4 <= uVar3) {
    uVar2 = 1;
    do {
      if (*(uint *)(param_1 + 0x6c) <= uVar2) break;
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 >> 1;
      *(uint *)(param_1 + 0x68) = uVar2;
    } while (*(uint *)(param_1 + 0x5c) <= uVar3);
  }
  *(uint *)(param_1 + 0x68) = uVar2 - 1;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x200);
  (**(code **)(*plVar1 + 0x180))
            (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar2 - 1) * 8),0,0,
             *(undefined8 *)(param_1 + 0x50),uVar3 * 2,uVar3 * 2);
  *(undefined4 *)(param_1 + 0x58) = 0;
  return 1;
}



// FUNCTION 141a283a0 FUN_141a283a0 body=133 status=ok
// SIG undefined FUN_141a283a0(void)

void FUN_141a283a0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x17bf8) == 0) {
    uVar2 = 9999;
  }
  else {
    uVar2 = (ulonglong)(*(int *)(param_1 + 0x17bf8) - 1);
  }
  lVar1 = *(longlong *)(param_1 + 0x4378 + uVar2 * 8);
  if (*(longlong *)(lVar1 + 0x28) != 0) {
    FUN_141a21b90();
  }
  if (*(longlong *)(lVar1 + 0x30) != 0) {
    FUN_141a21720(param_1);
  }
  if (*(longlong *)(lVar1 + 0x38) != 0) {
    FUN_141a212b0(param_1);
  }
  if (*(longlong *)(lVar1 + 0x40) != 0) {
    FUN_141a209d0(param_1);
  }
  if (*(longlong *)(lVar1 + 0x48) != 0) {
    FUN_141a20e40(param_1);
  }
  return;
}



// FUNCTION 141a28430 FUN_141a28430 body=796 status=ok
// SIG undefined FUN_141a28430(void)

void FUN_141a28430(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong local_res8;
  
  if (*(int *)(param_1 + 0x17bf8) == 0) {
    uVar4 = 9999;
  }
  else {
    uVar4 = (ulonglong)(*(int *)(param_1 + 0x17bf8) - 1);
  }
  lVar1 = *(longlong *)(param_1 + 0x4378 + uVar4 * 8);
  if ((*(char *)(lVar1 + 200) != '\0') && (lVar2 = **(longlong **)(param_1 + 0x42e8), lVar2 != 0)) {
    cVar3 = FUN_141a282e0(lVar2,*(undefined1 *)(param_1 + 0x42b0));
    if (cVar3 != '\0') {
      local_res8 = *(longlong *)
                    (*(longlong *)(lVar2 + 0x60) + (ulonglong)*(uint *)(lVar2 + 0x68) * 8);
      if (((*(longlong *)(param_1 + 0x2188) != local_res8) || (*(int *)(param_1 + 0x2190) != 0)) ||
         (*(int *)(param_1 + 0x2194) != 0x1000)) {
        *(longlong *)(param_1 + 0x2188) = local_res8;
        *(undefined4 *)(param_1 + 0x2190) = 0;
        *(undefined4 *)(param_1 + 0x2194) = 0x1000;
        (**(code **)(**(longlong **)(param_1 + 0x230) + 0x38))
                  (*(longlong **)(param_1 + 0x230),0,1,&local_res8);
      }
    }
  }
  if (*(char *)(param_1 + 0x42b1) != '\0') {
    if ((*(char *)(lVar1 + 0xc9) != '\0') && (lVar2 = **(longlong **)(param_1 + 0x42f8), lVar2 != 0)
       ) {
      cVar3 = FUN_141a282e0(lVar2,*(undefined1 *)(param_1 + 0x42b0));
      if (cVar3 != '\0') {
        local_res8 = *(longlong *)
                      (*(longlong *)(lVar2 + 0x60) + (ulonglong)*(uint *)(lVar2 + 0x68) * 8);
        if (((*(longlong *)(param_1 + 0x2268) != local_res8) || (*(int *)(param_1 + 0x2270) != 0))
           || (*(int *)(param_1 + 0x2274) != 0x1000)) {
          *(longlong *)(param_1 + 0x2268) = local_res8;
          *(undefined4 *)(param_1 + 0x2270) = 0;
          *(undefined4 *)(param_1 + 0x2274) = 0x1000;
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0x1f0))
                    (*(longlong **)(param_1 + 0x230),0,1,&local_res8);
        }
      }
    }
    if ((*(char *)(lVar1 + 0xca) != '\0') && (lVar2 = **(longlong **)(param_1 + 0x4308), lVar2 != 0)
       ) {
      cVar3 = FUN_141a282e0(lVar2,*(undefined1 *)(param_1 + 0x42b0));
      if (cVar3 != '\0') {
        local_res8 = *(longlong *)
                      (*(longlong *)(lVar2 + 0x60) + (ulonglong)*(uint *)(lVar2 + 0x68) * 8);
        if (((*(longlong *)(param_1 + 0x2348) != local_res8) || (*(int *)(param_1 + 0x2350) != 0))
           || (*(int *)(param_1 + 0x2354) != 0x1000)) {
          *(longlong *)(param_1 + 0x2348) = local_res8;
          *(undefined4 *)(param_1 + 0x2350) = 0;
          *(undefined4 *)(param_1 + 0x2354) = 0x1000;
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0x210))
                    (*(longlong **)(param_1 + 0x230),0,1,&local_res8);
        }
      }
    }
  }
  if ((*(char *)(lVar1 + 0xcc) != '\0') && (lVar2 = **(longlong **)(param_1 + 0x4328), lVar2 != 0))
  {
    cVar3 = FUN_141a282e0(lVar2,*(undefined1 *)(param_1 + 0x42b0));
    if (cVar3 != '\0') {
      local_res8 = *(longlong *)
                    (*(longlong *)(lVar2 + 0x60) + (ulonglong)*(uint *)(lVar2 + 0x68) * 8);
      if (((*(longlong *)(param_1 + 0x2508) != local_res8) || (*(int *)(param_1 + 0x2510) != 0)) ||
         (*(int *)(param_1 + 0x2514) != 0x1000)) {
        *(longlong *)(param_1 + 0x2508) = local_res8;
        *(undefined4 *)(param_1 + 0x2510) = 0;
        *(undefined4 *)(param_1 + 0x2514) = 0x1000;
        (**(code **)(**(longlong **)(param_1 + 0x230) + 0xb0))
                  (*(longlong **)(param_1 + 0x230),0,1,&local_res8);
      }
    }
  }
  if ((*(char *)(lVar1 + 0xcb) != '\0') && (lVar1 = **(longlong **)(param_1 + 0x4318), lVar1 != 0))
  {
    cVar3 = FUN_141a282e0(lVar1,*(undefined1 *)(param_1 + 0x42b0));
    if (cVar3 != '\0') {
      local_res8 = *(longlong *)
                    (*(longlong *)(lVar1 + 0x60) + (ulonglong)*(uint *)(lVar1 + 0x68) * 8);
      if (((*(longlong *)(param_1 + 0x2428) != local_res8) || (*(int *)(param_1 + 0x2430) != 0)) ||
         (*(int *)(param_1 + 0x2434) != 0x1000)) {
        *(longlong *)(param_1 + 0x2428) = local_res8;
        *(undefined4 *)(param_1 + 0x2430) = 0;
        *(undefined4 *)(param_1 + 0x2434) = 0x1000;
        (**(code **)(**(longlong **)(param_1 + 0x230) + 0x80))
                  (*(longlong **)(param_1 + 0x230),0,1,&local_res8);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x42b0) = 0;
  return;
}



// FUNCTION 141a28750 FUN_141a28750 body=259 status=ok
// SIG undefined FUN_141a28750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a28750(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 auStack_f8 [32];
  uint local_d8;
  uint local_d0;
  undefined1 *local_c8;
  undefined4 *local_c0;
  undefined4 local_b8 [8];
  undefined1 local_98 [64];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar1 = *(uint *)(param_1 + 0x3fe0);
  if (uVar1 != 0) {
    _guard_xfg_dispatch_icall_nop(local_98,(void *)(param_1 + 0x2738),(ulonglong)uVar1 << 3);
  }
  uVar2 = *(uint *)(param_1 + 0x3fe4);
  if (uVar2 != 0) {
    puVar5 = local_b8;
    for (uVar4 = (ulonglong)uVar2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    _guard_xfg_dispatch_icall_nop(local_58,(void *)(param_1 + 0x2778),(ulonglong)uVar2 << 3);
  }
  plVar3 = *(longlong **)(param_1 + 0x200);
  if (uVar2 == 0) {
    (**(code **)(*plVar3 + 0x108))(plVar3,uVar1,local_98,*(undefined8 *)(param_1 + 0x27b8));
  }
  else {
    local_c0 = local_b8;
    local_c8 = local_58;
    local_d8 = uVar1;
    local_d0 = uVar2;
    (**(code **)(*plVar3 + 0x110))(plVar3,uVar1);
  }
  return;
}



// FUNCTION 141a28860 FUN_141a28860 body=82 status=ok
// SIG undefined FUN_141a28860(void)

undefined8 FUN_141a28860(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 2:
    return 0x10;
  case 10:
  case 0xb:
  case 0x10:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    return 8;
  case 0x18:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x23:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x57:
  case 0x5a:
  case 0x5b:
    return 4;
  case 0x35:
  case 0x37:
    return 2;
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 141a28930 FUN_141a28930 body=74 status=ok
// SIG undefined FUN_141a28930(void)

float FUN_141a28930(longlong param_1,float param_2)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
    fVar1 = ABS(1.0 / ((param_2 * 0.1 - 0.1) * *(float *)(param_1 + 0xc)));
  }
  else {
    fVar1 = 0.0;
    if (0.0 <= param_2) {
      if (1.0 <= param_2) {
        param_2 = 1.0;
      }
      return param_2;
    }
  }
  return fVar1;
}



// FUNCTION 141a28980 FUN_141a28980 body=1050 status=ok
// SIG undefined FUN_141a28980(void)

void FUN_141a28980(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 local_res8;
  
  uVar6 = (ulonglong)*(int *)(param_1 + 0x3fc8);
  if (-1 < *(int *)(param_1 + 0x3fc8)) {
    lVar4 = uVar6 * 8 + 0x20;
    do {
      lVar1 = *(longlong *)(param_1 + 0x27a8 + lVar4);
      if (lVar1 == param_2) {
        if (lVar1 != 0) {
          *(undefined8 *)(param_1 + 0x27a8 + lVar4) = 0;
          iVar3 = *(int *)(param_1 + 0x3fc8);
          if (iVar3 == (int)uVar6) {
            do {
              iVar3 = iVar3 + -1;
              *(int *)(param_1 + 0x3fc8) = iVar3;
              if (iVar3 < 0) break;
            } while (*(longlong *)(param_1 + 0x27c8 + (longlong)iVar3 * 8) == 0);
          }
        }
        plVar2 = *(longlong **)(lVar4 + 0x218 + param_1);
        local_res8 = 0;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))();
          *(undefined8 *)(lVar4 + 0x218 + param_1) = local_res8;
          (**(code **)(**(longlong **)(param_1 + 0x230) + 200))
                    (*(longlong **)(param_1 + 0x230),uVar6 & 0xffffffff,1,&local_res8);
        }
      }
      lVar4 = lVar4 + -8;
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar5;
    } while (-1 < (int)uVar5);
  }
  uVar6 = (ulonglong)*(int *)(param_1 + 0x3fcc);
  if (-1 < *(int *)(param_1 + 0x3fcc)) {
    lVar4 = uVar6 * 8 + 0x420;
    do {
      lVar1 = *(longlong *)(lVar4 + 0x27a8 + param_1);
      if (lVar1 == param_2) {
        if (lVar1 != 0) {
          *(undefined8 *)(lVar4 + 0x27a8 + param_1) = 0;
          iVar3 = *(int *)(param_1 + 0x3fcc);
          if (iVar3 == (int)uVar6) {
            do {
              iVar3 = iVar3 + -1;
              *(int *)(param_1 + 0x3fcc) = iVar3;
              if (iVar3 < 0) break;
            } while (*(longlong *)(param_1 + 0x2bc8 + (longlong)iVar3 * 8) == 0);
          }
        }
        plVar2 = *(longlong **)(lVar4 + 0x218 + param_1);
        local_res8 = 0;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))();
          *(undefined8 *)(lVar4 + 0x218 + param_1) = local_res8;
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0x1d8))
                    (*(longlong **)(param_1 + 0x230),uVar6 & 0xffffffff,1,&local_res8);
        }
      }
      lVar4 = lVar4 + -8;
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar5;
    } while (-1 < (int)uVar5);
  }
  uVar6 = (ulonglong)*(int *)(param_1 + 0x3fd0);
  if (-1 < *(int *)(param_1 + 0x3fd0)) {
    lVar4 = uVar6 * 8 + 0x820;
    do {
      lVar1 = *(longlong *)(lVar4 + 0x27a8 + param_1);
      if (lVar1 == param_2) {
        if (lVar1 != 0) {
          *(undefined8 *)(lVar4 + 0x27a8 + param_1) = 0;
          iVar3 = *(int *)(param_1 + 0x3fd0);
          if (iVar3 == (int)uVar6) {
            do {
              iVar3 = iVar3 + -1;
              *(int *)(param_1 + 0x3fd0) = iVar3;
              if (iVar3 < 0) break;
            } while (*(longlong *)(param_1 + 0x2fc8 + (longlong)iVar3 * 8) == 0);
          }
        }
        plVar2 = *(longlong **)(lVar4 + 0x218 + param_1);
        local_res8 = 0;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))();
          *(undefined8 *)(lVar4 + 0x218 + param_1) = local_res8;
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0x1f8))
                    (*(longlong **)(param_1 + 0x230),uVar6 & 0xffffffff,1,&local_res8);
        }
      }
      lVar4 = lVar4 + -8;
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar5;
    } while (-1 < (int)uVar5);
  }
  uVar6 = (ulonglong)*(int *)(param_1 + 0x3fd4);
  if (-1 < *(int *)(param_1 + 0x3fd4)) {
    lVar4 = uVar6 * 8 + 0xc20;
    do {
      lVar1 = *(longlong *)(lVar4 + 0x27a8 + param_1);
      if (lVar1 == param_2) {
        if (lVar1 != 0) {
          *(undefined8 *)(lVar4 + 0x27a8 + param_1) = 0;
          iVar3 = *(int *)(param_1 + 0x3fd4);
          if (iVar3 == (int)uVar6) {
            do {
              iVar3 = iVar3 + -1;
              *(int *)(param_1 + 0x3fd4) = iVar3;
              if (iVar3 < 0) break;
            } while (*(longlong *)(param_1 + 0x33c8 + (longlong)iVar3 * 8) == 0);
          }
        }
        plVar2 = *(longlong **)(lVar4 + 0x218 + param_1);
        local_res8 = 0;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))();
          *(undefined8 *)(lVar4 + 0x218 + param_1) = local_res8;
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0x40))
                    (*(longlong **)(param_1 + 0x230),uVar6 & 0xffffffff,1,&local_res8);
        }
      }
      lVar4 = lVar4 + -8;
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar5;
    } while (-1 < (int)uVar5);
  }
  uVar6 = (ulonglong)*(int *)(param_1 + 0x3fd8);
  if (-1 < *(int *)(param_1 + 0x3fd8)) {
    lVar4 = uVar6 * 8 + 0x1020;
    do {
      lVar1 = *(longlong *)(lVar4 + 0x27a8 + param_1);
      if (lVar1 == param_2) {
        if (lVar1 != 0) {
          *(undefined8 *)(lVar4 + 0x27a8 + param_1) = 0;
          iVar3 = *(int *)(param_1 + 0x3fd8);
          if (iVar3 == (int)uVar6) {
            do {
              iVar3 = iVar3 + -1;
              *(int *)(param_1 + 0x3fd8) = iVar3;
              if (iVar3 < 0) break;
            } while (*(longlong *)(param_1 + 0x37c8 + (longlong)iVar3 * 8) == 0);
          }
        }
        plVar2 = *(longlong **)(lVar4 + 0x218 + param_1);
        local_res8 = 0;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))();
          *(undefined8 *)(lVar4 + 0x218 + param_1) = local_res8;
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0xf8))
                    (*(longlong **)(param_1 + 0x230),uVar6 & 0xffffffff,1,&local_res8);
        }
      }
      lVar4 = lVar4 + -8;
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar5;
    } while (-1 < (int)uVar5);
  }
  uVar6 = (ulonglong)*(int *)(param_1 + 0x3fdc);
  if (-1 < *(int *)(param_1 + 0x3fdc)) {
    lVar4 = uVar6 * 8 + 0x1420;
    do {
      lVar1 = *(longlong *)(param_1 + 0x27a8 + lVar4);
      if (lVar1 == param_2) {
        if (lVar1 != 0) {
          *(undefined8 *)(param_1 + 0x27a8 + lVar4) = 0;
          iVar3 = *(int *)(param_1 + 0x3fdc);
          if (iVar3 == (int)uVar6) {
            do {
              iVar3 = iVar3 + -1;
              *(int *)(param_1 + 0x3fdc) = iVar3;
              if (iVar3 < 0) break;
            } while (*(longlong *)(param_1 + 0x3bc8 + (longlong)iVar3 * 8) == 0);
          }
        }
        plVar2 = *(longlong **)(param_1 + 0x218 + lVar4);
        local_res8 = 0;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))();
          *(undefined8 *)(param_1 + 0x218 + lVar4) = local_res8;
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0x218))
                    (*(longlong **)(param_1 + 0x230),uVar6 & 0xffffffff,1,&local_res8);
        }
      }
      lVar4 = lVar4 + -8;
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar5;
    } while (-1 < (int)uVar5);
  }
  return;
}



// FUNCTION 141a28da0 FUN_141a28da0 body=443 status=ok
// SIG undefined FUN_141a28da0(void)

void FUN_141a28da0(longlong param_1,char param_2)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  HWND pHVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  char cVar7;
  longlong *plVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  plVar6 = (longlong *)0x0;
  local_res8 = 0;
  pHVar4 = GetFocus();
  bVar9 = pHVar4 == *(HWND *)(param_1 + 0x40);
  BVar2 = IsIconic(*(HWND *)(param_1 + 0x40));
  bVar10 = BVar2 != 0;
  cVar1 = *(char *)(param_1 + 0x58);
  if ((cVar1 == '\0') || (bVar9)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (((cVar1 == '\0') || (bVar10)) || (!bVar9)) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\x01';
  }
  if (*(char *)(param_1 + 0x60) == '\0') {
    if (((param_2 != '\0') || ((bVar9 && (!bVar10)))) || (bVar11)) {
      FUN_141ee24f0(0);
      bVar11 = cVar7 == '\0';
      plVar8 = plVar6;
      if (!bVar11) {
        puVar5 = (undefined8 *)FUN_141a30060(param_1,&local_res8);
        plVar6 = (longlong *)CONCAT44(uStackX_c,local_res8);
        plVar8 = (longlong *)*puVar5;
      }
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x50))
                        (*(longlong **)(param_1 + 0x68),cVar7,plVar8);
      if ((bVar11) && (plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      if ((!bVar11) && ((longlong *)CONCAT44(uStackX_c,local_res8) != (longlong *)0x0)) {
        (**(code **)(*(longlong *)CONCAT44(uStackX_c,local_res8) + 0x10))();
      }
      *(undefined1 *)(param_1 + 0x60) = 1;
      if ((iVar3 < 0) && (cVar7 != '\0')) {
        *(undefined1 *)(param_1 + 0x58) = 0;
      }
    }
    cVar1 = *(char *)(param_1 + 0x58);
    if (((cVar1 != '\0') && (cVar7 == '\0')) && (!bVar10)) {
      ShowWindow(*(HWND *)(param_1 + 0x40),6);
      cVar1 = *(char *)(param_1 + 0x58);
    }
  }
  if (cVar1 != '\0') {
    if (bVar10) {
      if (*(char *)(param_1 + 0x80) != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x750))();
        *(undefined1 *)(param_1 + 0x80) = 0;
        return;
      }
    }
    else if (((bVar9) && (*(char *)(param_1 + 0x80) == '\0')) &&
            (cVar1 = FUN_141ee42d0(), cVar1 != '\0')) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x748))();
      *(undefined1 *)(param_1 + 0x80) = 1;
    }
  }
  return;
}



// FUNCTION 141a28f60 FUN_141a28f60 body=3506 status=ok
// SIG undefined FUN_141a28f60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a28f60(int param_1,uint param_2,uint param_3,uint *param_4,int param_5,longlong param_6,
                  longlong param_7)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  float *pfVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  int *piVar16;
  ushort *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 local_res8;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  
  uVar4 = *(undefined1 *)(param_7 + 8);
  uVar21 = (ulonglong)param_2;
  local_res8 = (float)CONCAT31(local_res8._1_3_,uVar4);
  if (param_1 == 0x35) {
    uVar19 = 0;
    if (param_3 != 0) {
      do {
        puVar17 = (ushort *)((ulonglong)(uVar19 * param_5) + (longlong)param_4);
        puVar11 = (undefined4 *)(param_6 + (ulonglong)(uVar19 * param_2) * 4);
        uVar22 = uVar21;
        if (param_2 != 0) {
          do {
            local_108._4_4_ = (float)*puVar17 * 1.5259022e-05;
            local_108._0_4_ = local_108._4_4_;
            fStack_100 = (float)local_108._4_4_;
            fStack_fc = 1.0;
            puVar10 = (undefined4 *)FLinearColor::Quantize(local_108,&local_res8);
            puVar17 = puVar17 + 1;
            *puVar11 = *puVar10;
            uVar22 = uVar22 - 1;
            puVar11 = puVar11 + 1;
          } while (uVar22 != 0);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < param_3);
    }
  }
  else if (param_1 - 0x1bU < 3) {
    uVar19 = 0;
    if (param_3 != 0) {
      do {
        if (param_2 != 0) {
          puVar14 = (undefined1 *)((ulonglong)(uVar19 * param_5) + (longlong)param_4);
          uVar22 = uVar21;
          do {
            local_res8 = (float)CONCAT13(puVar14[3],
                                         CONCAT21(CONCAT11(*puVar14,puVar14[1]),puVar14[2]));
            *(float *)(puVar14 + 4 +
                      (((ulonglong)(uVar19 * param_2) * 4 - (ulonglong)(uVar19 * param_5)) -
                      (longlong)param_4) + param_6 + -4) = local_res8;
            uVar22 = uVar22 - 1;
            puVar14 = puVar14 + 4;
          } while (uVar22 != 0);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < param_3);
    }
  }
  else if ((param_1 - 0x5aU < 2) || (param_1 == 0x57)) {
    uVar19 = 0;
    if (param_3 != 0) {
      do {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(param_6 + (ulonglong)(uVar19 * param_2) * 4),
                   (void *)((ulonglong)(uVar19 * param_5) + (longlong)param_4),uVar21 << 2);
        uVar19 = uVar19 + 1;
      } while (uVar19 < param_3);
    }
  }
  else if (param_1 == 0x18) {
    uVar19 = 0;
    if (param_3 != 0) {
      do {
        puVar18 = (uint *)((ulonglong)(uVar19 * param_5) + (longlong)param_4);
        if (param_2 != 0) {
          lVar12 = (ulonglong)(uVar19 * param_2) * 4 - (longlong)puVar18;
          uVar22 = uVar21;
          do {
            uVar20 = *puVar18;
            local_108._4_4_ = (float)(uVar20 >> 10 & 0x3ff) * 0.0009775171;
            local_108._0_4_ = (float)(uVar20 & 0x3ff) * 0.0009775171;
            fStack_100 = (float)(uVar20 >> 0x14 & 0x3ff) * 0.0009775171;
            fStack_fc = (float)(uVar20 >> 0x1e) * 0.33333334;
            puVar11 = (undefined4 *)FLinearColor::Quantize(local_108,&local_res8);
            puVar18 = puVar18 + 1;
            *(undefined4 *)(param_6 + lVar12 + -4 + (longlong)puVar18) = *puVar11;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < param_3);
    }
  }
  else if (param_1 == 10) {
    fVar44 = 1.0;
    param_7._0_4_ = 0.0;
    fVar43 = 0.0;
    local_e8 = 1.0;
    fVar45 = 0.0;
    local_e4 = 1.0;
    fVar46 = 0.0;
    fVar47 = 0.0;
    fVar48 = 1.0;
    fVar49 = 1.0;
    fVar50 = 1.0;
    if (param_3 != 0) {
      do {
        lVar12 = (ulonglong)(uint)((int)(float)param_7 * param_5) + (longlong)param_4;
        fVar24 = local_e8;
        fVar51 = local_e4;
        if (param_2 != 0) {
          lVar23 = lVar12 + 4;
          uVar22 = uVar21;
          do {
            auVar25._0_8_ = FD3DFloat16::operator_float(lVar12);
            auVar25._8_8_ = extraout_XMM0_Qb;
            if (fVar43 <= (float)auVar25._0_8_) {
              auVar26._4_12_ = auVar25._4_12_;
              auVar26._0_4_ = fVar43;
              auVar25._0_8_ = auVar26._0_8_;
            }
            fVar43 = (float)auVar25._0_8_;
            auVar27._0_8_ = FD3DFloat16::operator_float(lVar23 + -2);
            auVar27._8_8_ = extraout_XMM0_Qb_00;
            if (fVar45 <= (float)auVar27._0_8_) {
              auVar28._4_12_ = auVar27._4_12_;
              auVar28._0_4_ = fVar45;
              auVar27._0_8_ = auVar28._0_8_;
            }
            fVar45 = (float)auVar27._0_8_;
            auVar29._0_8_ = FD3DFloat16::operator_float(lVar23);
            auVar29._8_8_ = extraout_XMM0_Qb_01;
            if (fVar46 <= (float)auVar29._0_8_) {
              auVar30._4_12_ = auVar29._4_12_;
              auVar30._0_4_ = fVar46;
              auVar29._0_8_ = auVar30._0_8_;
            }
            fVar46 = (float)auVar29._0_8_;
            auVar31._0_8_ = FD3DFloat16::operator_float(lVar23 + 2);
            auVar31._8_8_ = extraout_XMM0_Qb_02;
            if (fVar47 <= (float)auVar31._0_8_) {
              auVar32._4_12_ = auVar31._4_12_;
              auVar32._0_4_ = fVar47;
              auVar31._0_8_ = auVar32._0_8_;
            }
            fVar47 = (float)auVar31._0_8_;
            auVar33._0_8_ = FD3DFloat16::operator_float(lVar12);
            auVar33._8_8_ = extraout_XMM0_Qb_03;
            if ((float)auVar33._0_8_ <= fVar44) {
              auVar34._4_12_ = auVar33._4_12_;
              auVar34._0_4_ = fVar44;
              auVar33._0_8_ = auVar34._0_8_;
            }
            fVar44 = (float)auVar33._0_8_;
            auVar35._0_8_ = FD3DFloat16::operator_float(lVar23 + -2);
            auVar35._8_8_ = extraout_XMM0_Qb_04;
            if ((float)auVar35._0_8_ <= fVar48) {
              auVar36._4_12_ = auVar35._4_12_;
              auVar36._0_4_ = fVar48;
              auVar35._0_8_ = auVar36._0_8_;
            }
            fVar48 = (float)auVar35._0_8_;
            auVar37._0_8_ = FD3DFloat16::operator_float(lVar23);
            auVar37._8_8_ = extraout_XMM0_Qb_05;
            if ((float)auVar37._0_8_ <= fVar49) {
              auVar38._4_12_ = auVar37._4_12_;
              auVar38._0_4_ = fVar49;
              auVar37._0_8_ = auVar38._0_8_;
            }
            fVar49 = (float)auVar37._0_8_;
            fVar24 = (float)FD3DFloat16::operator_float(lVar23 + 2);
            if (fVar24 <= fVar50) {
              fVar24 = fVar50;
            }
            fVar50 = fVar24;
            lVar12 = lVar12 + 8;
            lVar23 = lVar23 + 8;
            uVar22 = uVar22 - 1;
            fVar24 = fVar44;
            fVar51 = fVar48;
          } while (uVar22 != 0);
        }
        local_e4 = fVar51;
        local_e8 = fVar24;
        param_7._0_4_ = (float)((int)(float)param_7 + 1);
      } while ((uint)(float)param_7 < param_3);
      uVar4 = (undefined1)local_res8;
      uVar19 = 0;
      if (param_3 != 0) {
        do {
          puVar17 = (ushort *)((ulonglong)(uVar19 * param_5) + (longlong)param_4);
          puVar11 = (undefined4 *)(param_6 + (ulonglong)(uVar19 * param_2) * 4);
          if (param_2 != 0) {
            fVar24 = fVar44 - fVar43;
            fVar51 = fVar48 - fVar45;
            uVar22 = uVar21;
            do {
              uVar6 = puVar17[3];
              fVar44 = (float)(uVar6 & 0x3ff) * 8192.0;
              uVar8 = (int)ROUND((fVar44 + fVar44) - 0.5) >> 1;
              uVar20 = 0x7fffff;
              if (uVar8 < 0x800000) {
                uVar20 = uVar8;
              }
              fVar44 = (float)(uVar20 & 0x7fffff | ((uVar6 >> 10 & 0x1f) + 0x70) * 0x800000 |
                              (uVar6 & 0xffff8000) << 0x10);
              uVar6 = puVar17[2];
              local_f8._0_4_ = fVar44;
              fVar48 = (float)(uVar6 & 0x3ff) * 8192.0;
              uVar8 = (int)ROUND((fVar48 + fVar48) - 0.5) >> 1;
              uVar20 = 0x7fffff;
              if (uVar8 < 0x800000) {
                uVar20 = uVar8;
              }
              local_e0 = (float)(uVar20 & 0x7fffff | ((uVar6 >> 10 & 0x1f) + 0x70) * 0x800000 |
                                (uVar6 & 0xffff8000) << 0x10);
              uVar6 = puVar17[1];
              fVar48 = (float)(uVar6 & 0x3ff) * 8192.0;
              uVar8 = (int)ROUND((fVar48 + fVar48) - 0.5) >> 1;
              uVar20 = 0x7fffff;
              if (uVar8 < 0x800000) {
                uVar20 = uVar8;
              }
              uVar7 = *puVar17;
              fVar48 = (float)(uVar7 & 0x3ff) * 8192.0;
              uVar9 = (int)ROUND((fVar48 + fVar48) - 0.5) >> 1;
              uVar8 = 0x7fffff;
              if (uVar9 < 0x800000) {
                uVar8 = uVar9;
              }
              local_114 = ((float)(uVar20 & 0x7fffff | ((uVar6 >> 10 & 0x1f) + 0x70) * 0x800000 |
                                  (uVar6 & 0xffff8000) << 0x10) - fVar45) / fVar51;
              local_res8 = (float)(uVar8 & 0x7fffff | ((uVar7 >> 10 & 0x1f) + 0x70) * 0x800000 |
                                  (uVar7 & 0xffff8000) << 0x10);
              local_118 = (local_res8 - fVar43) / fVar24;
              local_10c = (fVar44 - fVar47) / (fVar50 - fVar47);
              local_110 = (local_e0 - fVar46) / (fVar49 - fVar46);
              FLinearColor::ToFColor(&local_118,local_108,uVar4);
              puVar17 = puVar17 + 4;
              *puVar11 = local_108._0_4_;
              puVar11 = puVar11 + 1;
              uVar22 = uVar22 - 1;
              fVar44 = local_e8;
              fVar48 = local_e4;
            } while (uVar22 != 0);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < param_3);
      }
    }
  }
  else if (param_1 == 0x1a) {
    uVar19 = 0;
    if (param_3 != 0) {
      do {
        lVar12 = (ulonglong)(uVar19 * param_5) + (longlong)param_4;
        if (param_2 != 0) {
          lVar23 = (ulonglong)(uVar19 * param_2) * 4 - lVar12;
          uVar22 = uVar21;
          do {
            FD3DFloatR11G11B10::operator_FLinearColor(lVar12,&local_118);
            FLinearColor::ToFColor(&local_118,&local_res8,uVar4);
            *(float *)(param_6 + lVar23 + lVar12) = local_res8;
            lVar12 = lVar12 + 4;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < param_3);
    }
  }
  else if (param_1 == 2) {
    uVar20 = 0;
    _local_f8 = _DAT_143f39af0;
    auVar41 = _local_f8;
    local_f8._4_4_ = DAT_143f39af0._4_4_;
    uVar19 = 0;
    local_f8._0_4_ = (undefined4)DAT_143f39af0;
    fStack_ec = DAT_143f39af0._12_4_;
    fStack_f0 = DAT_143f39af0._8_4_;
    fStack_fc = 0.0;
    fStack_100 = 0.0;
    fVar48 = 0.0;
    fVar44 = 0.0;
    local_res8 = (float)local_f8._4_4_;
    param_7._0_4_ = (float)local_f8._0_4_;
    fVar43 = fStack_100;
    fVar45 = fStack_fc;
    fVar46 = fStack_ec;
    fVar47 = fStack_f0;
    fVar49 = (float)local_f8._4_4_;
    fVar50 = (float)local_f8._0_4_;
    if (param_3 != 0) {
      do {
        pfVar13 = (float *)((ulonglong)(uVar19 * param_5) + (longlong)param_4);
        uVar22 = uVar21;
        if (param_2 != 0) {
          do {
            fVar24 = *pfVar13;
            if (fVar24 <= fVar44) {
              fVar44 = fVar24;
            }
            fVar51 = pfVar13[1];
            if (fVar51 <= fVar48) {
              fVar48 = fVar51;
            }
            fVar2 = pfVar13[2];
            if (fVar2 <= fVar43) {
              fVar43 = fVar2;
            }
            fVar3 = pfVar13[3];
            if (fVar3 <= fVar45) {
              fVar45 = fVar3;
            }
            if (fVar50 <= fVar24) {
              fVar50 = fVar24;
            }
            if (fVar49 <= fVar51) {
              fVar49 = fVar51;
            }
            if (fVar47 <= fVar2) {
              fVar47 = fVar2;
            }
            if (fVar46 <= fVar3) {
              fVar46 = fVar3;
            }
            pfVar13 = pfVar13 + 4;
            uVar22 = uVar22 - 1;
            local_res8 = fVar49;
            param_7._0_4_ = fVar50;
          } while (uVar22 != 0);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < param_3);
      _local_108 = ZEXT816(0);
      _local_f8 = auVar41;
      if (param_3 != 0) {
        do {
          puVar11 = (undefined4 *)(param_6 + (ulonglong)(uVar20 * param_2) * 4);
          if (param_2 != 0) {
            pfVar13 = (float *)(param_4 + 2);
            fVar24 = fVar50 - fVar44;
            fVar51 = fVar49 - fVar48;
            uVar22 = uVar21;
            do {
              local_118 = (pfVar13[-2] - fVar44) / fVar24;
              local_114 = (pfVar13[-1] - fVar48) / fVar51;
              local_110 = (*pfVar13 - fVar43) / (fVar47 - fVar43);
              local_10c = (pfVar13[1] - fVar45) / (fVar46 - fVar45);
              FLinearColor::ToFColor(&local_118,local_108,uVar4);
              pfVar13 = pfVar13 + 4;
              *puVar11 = local_108._0_4_;
              puVar11 = puVar11 + 1;
              uVar22 = uVar22 - 1;
              fVar49 = local_res8;
              fVar50 = (float)param_7;
            } while (uVar22 != 0);
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < param_3);
      }
    }
  }
  else if (param_1 == 0x2c) {
    uVar19 = 0;
    if (param_3 != 0) {
      do {
        if (param_2 != 0) {
          lVar12 = (ulonglong)(param_2 * uVar19) * 4;
          if (*(char *)(param_7 + 0x10) == '\0') {
            uVar22 = uVar21;
            puVar18 = param_4;
            do {
              auVar39._0_8_ = FUN_141a28930(param_7,(float)(*puVar18 & 0xffffff) * 5.9604645e-08);
              auVar39._8_8_ = extraout_XMM0_Qb_06;
              if (1.0 <= (float)auVar39._0_8_) {
                auVar40._4_12_ = auVar39._4_12_;
                auVar40._0_4_ = 0x3f800000;
                auVar39._0_8_ = auVar40._0_8_;
              }
              local_10c = 0.0;
              local_118 = (float)auVar39._0_8_;
              local_114 = local_118;
              local_110 = local_118;
              puVar11 = (undefined4 *)FLinearColor::ToFColor(&local_118,local_108,uVar4);
              *(undefined4 *)((longlong)puVar18 + param_6 + (lVar12 - (longlong)param_4)) = *puVar11
              ;
              uVar22 = uVar22 - 1;
              puVar18 = puVar18 + 1;
            } while (uVar22 != 0);
          }
          else {
            local_res8 = -1.7014118e+38;
            puVar11 = (undefined4 *)(lVar12 + param_6);
            uVar22 = uVar21;
            do {
              uVar5 = *(undefined1 *)
                       ((longlong)param_4 + ((ulonglong)(param_2 * uVar19) * -4 - param_6) + 3 +
                       (longlong)puVar11);
              local_res8 = (float)CONCAT31(CONCAT21(CONCAT11(local_res8._3_1_,uVar5),uVar5),uVar5);
              *puVar11 = local_res8;
              uVar22 = uVar22 - 1;
              puVar11 = puVar11 + 1;
            } while (uVar22 != 0);
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < param_3);
    }
  }
  else if (param_1 == 0x13) {
    uVar19 = 0;
    if (param_3 != 0) {
      do {
        lVar12 = (ulonglong)(uVar19 * param_5) + (longlong)param_4;
        if (param_2 != 0) {
          lVar23 = (ulonglong)(uVar19 * param_2) * 4 - lVar12;
          uVar22 = uVar21;
          do {
            auVar41._0_8_ = FUN_141a28930(param_7);
            auVar41._8_8_ = extraout_XMM0_Qb_07;
            if (1.0 <= (float)auVar41._0_8_) {
              auVar42._4_12_ = auVar41._4_12_;
              auVar42._0_4_ = 0x3f800000;
              auVar41._0_8_ = auVar42._0_8_;
            }
            local_10c = 0.0;
            local_118 = (float)auVar41._0_8_;
            local_114 = local_118;
            local_110 = local_118;
            FLinearColor::ToFColor(&local_118,&local_res8,uVar4);
            *(float *)(lVar12 + param_6 + lVar23) = local_res8;
            lVar12 = lVar12 + 4;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < param_3);
    }
  }
  else if (param_1 == 0xb) {
    uVar19 = 0;
    if (param_3 != 0) {
      do {
        puVar17 = (ushort *)((ulonglong)(uVar19 * param_5) + (longlong)param_4);
        puVar11 = (undefined4 *)(param_6 + (ulonglong)(uVar19 * param_2) * 4);
        uVar22 = uVar21;
        if (param_2 != 0) {
          do {
            local_118 = (float)*puVar17 * 1.5259022e-05;
            local_114 = (float)puVar17[1] * 1.5259022e-05;
            local_110 = (float)puVar17[2] * 1.5259022e-05;
            local_10c = (float)puVar17[3] * 1.5259022e-05;
            puVar10 = (undefined4 *)FLinearColor::Quantize(&local_118,&local_res8);
            puVar17 = puVar17 + 4;
            *puVar11 = *puVar10;
            uVar22 = uVar22 - 1;
            puVar11 = puVar11 + 1;
          } while (uVar22 != 0);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < param_3);
    }
  }
  else if (param_1 == 0x23) {
    uVar19 = 0;
    if (param_3 != 0) {
      do {
        puVar17 = (ushort *)((ulonglong)(uVar19 * param_5) + (longlong)param_4);
        if (param_2 != 0) {
          puVar11 = (undefined4 *)((ulonglong)(uVar19 * param_2) * 4 + param_6);
          uVar22 = uVar21;
          do {
            local_110 = 0.0;
            local_10c = 1.0;
            local_118 = (float)*puVar17 * 1.5259022e-05;
            local_114 = (float)*(ushort *)
                                ((longlong)param_4 +
                                 (((ulonglong)(uVar19 * param_5) +
                                  (ulonglong)(uVar19 * param_2) * -4) - param_6) + 2 +
                                (longlong)puVar11) * 1.5259022e-05;
            puVar10 = (undefined4 *)FLinearColor::Quantize(&local_118,&local_res8);
            puVar17 = puVar17 + 2;
            *puVar11 = *puVar10;
            uVar22 = uVar22 - 1;
            puVar11 = puVar11 + 1;
          } while (uVar22 != 0);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < param_3);
    }
  }
  else if (param_1 - 0x3cU < 5) {
    uVar19 = 0;
    if (param_3 != 0) {
      do {
        pbVar15 = (byte *)((ulonglong)(uVar19 * param_5) + (longlong)param_4);
        piVar16 = (int *)(param_6 + (ulonglong)(uVar19 * param_2) * 4);
        uVar22 = uVar21;
        if (param_2 != 0) {
          do {
            local_res8 = (float)((uint)*pbVar15 << 0x10);
            pbVar15 = pbVar15 + 1;
            *piVar16 = (int)local_res8;
            uVar22 = uVar22 - 1;
            piVar16 = piVar16 + 1;
          } while (uVar22 != 0);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < param_3);
    }
  }
  else if ((param_1 - 0x30U < 5) && (uVar19 = 0, param_3 != 0)) {
    do {
      puVar14 = (undefined1 *)((ulonglong)(uVar19 * param_5) + (longlong)param_4);
      piVar16 = (int *)(param_6 + (ulonglong)(uVar19 * param_2) * 4);
      uVar22 = uVar21;
      if (param_2 != 0) {
        do {
          uVar4 = *puVar14;
          puVar1 = puVar14 + 1;
          puVar14 = puVar14 + 2;
          local_res8 = (float)((uint)CONCAT11(uVar4,*puVar1) << 8);
          *piVar16 = (int)local_res8;
          uVar22 = uVar22 - 1;
          piVar16 = piVar16 + 1;
        } while (uVar22 != 0);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < param_3);
  }
  return;
}



// FUNCTION 141a29d20 FUN_141a29d20 body=8865 status=ok
// SIG undefined FUN_141a29d20(void)

void FUN_141a29d20(undefined4 param_1,uint param_2,uint param_3,float *param_4,int param_5,
                  void *param_6,longlong param_7)

{
  ushort *puVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined8 *puVar34;
  undefined1 (*pauVar35) [16];
  uint uVar36;
  uint uVar37;
  uint uVar38;
  undefined1 auVar39 [8];
  undefined1 *puVar40;
  undefined8 *puVar41;
  float fVar42;
  undefined4 *puVar43;
  uint uVar44;
  longlong lVar45;
  uint *puVar46;
  ushort *puVar47;
  float *pfVar48;
  uint uVar49;
  float fVar50;
  float *pfVar51;
  void *pvVar52;
  uint uVar53;
  float *pfVar54;
  float fVar55;
  undefined1 (*pauVar56) [16];
  ulonglong uVar57;
  undefined1 in_XMM0 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 extraout_var [12];
  undefined1 auVar62 [12];
  undefined1 auVar61 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined4 local_res8;
  uint local_res10;
  uint local_res18;
  float *local_res20;
  undefined1 local_128 [8];
  undefined8 uStack_120;
  undefined1 local_118 [16];
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  
  uVar44 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  switch(param_1) {
  case 2:
    if (*(int *)(param_7 + 4) == 3) {
      _guard_xfg_dispatch_icall_nop(param_6,param_4,(longlong)(int)(param_2 * param_3 * 0x10));
    }
    else {
      local_res8 = 1.0;
      fVar68 = 0.0;
      local_f8 = 0.0;
      fVar67 = 0.0;
      local_104 = 0.0;
      fVar71 = 0.0;
      local_108 = 0.0;
      fVar65 = 0.0;
      local_fc = 0.0;
      fVar66 = 1.0;
      local_100 = 1.0;
      fVar63 = 1.0;
      local_128._0_4_ = 1.0;
      fVar70 = 1.0;
      local_118._0_4_ = 1.0;
      fVar69 = 1.0;
      uVar44 = 0;
      if (param_3 != 0) {
        do {
          uVar36 = 0;
          pfVar51 = (float *)((ulonglong)(uVar44 * param_5) + (longlong)param_4);
          if (3 < param_2) {
            uVar36 = (param_2 - 4 >> 2) + 1;
            uVar57 = (ulonglong)uVar36;
            uVar36 = uVar36 * 4;
            do {
              fVar66 = *pfVar51;
              fVar63 = pfVar51[1];
              fVar68 = fVar66;
              if (local_f8 <= fVar66) {
                fVar68 = local_f8;
              }
              fVar70 = pfVar51[2];
              if (fVar66 <= local_res8) {
                fVar66 = local_res8;
              }
              if (pfVar51[4] <= fVar68) {
                fVar68 = pfVar51[4];
              }
              if (pfVar51[8] <= fVar68) {
                fVar68 = pfVar51[8];
              }
              if (pfVar51[0xc] <= fVar68) {
                fVar68 = pfVar51[0xc];
              }
              fVar67 = fVar63;
              if (local_104 <= fVar63) {
                fVar67 = local_104;
              }
              if (fVar63 <= local_100) {
                fVar63 = local_100;
              }
              if (pfVar51[5] <= fVar67) {
                fVar67 = pfVar51[5];
              }
              if (fVar63 <= pfVar51[5]) {
                fVar63 = pfVar51[5];
              }
              if (pfVar51[9] <= fVar67) {
                fVar67 = pfVar51[9];
              }
              if (fVar63 <= pfVar51[9]) {
                fVar63 = pfVar51[9];
              }
              if (pfVar51[0xd] <= fVar67) {
                fVar67 = pfVar51[0xd];
              }
              if (fVar63 <= pfVar51[0xd]) {
                fVar63 = pfVar51[0xd];
              }
              fVar71 = fVar70;
              if (local_108 <= fVar70) {
                fVar71 = local_108;
              }
              if (fVar70 <= (float)local_128._0_4_) {
                fVar70 = (float)local_128._0_4_;
              }
              if (pfVar51[6] <= fVar71) {
                fVar71 = pfVar51[6];
              }
              if (fVar70 <= pfVar51[6]) {
                fVar70 = pfVar51[6];
              }
              if (pfVar51[10] <= fVar71) {
                fVar71 = pfVar51[10];
              }
              if (fVar70 <= pfVar51[10]) {
                fVar70 = pfVar51[10];
              }
              if (pfVar51[0xe] <= fVar71) {
                fVar71 = pfVar51[0xe];
              }
              if (fVar70 <= pfVar51[0xe]) {
                fVar70 = pfVar51[0xe];
              }
              fVar65 = pfVar51[3];
              if (local_fc <= pfVar51[3]) {
                fVar65 = local_fc;
              }
              if (pfVar51[7] <= fVar65) {
                fVar65 = pfVar51[7];
              }
              if (pfVar51[0xb] <= fVar65) {
                fVar65 = pfVar51[0xb];
              }
              if (pfVar51[0xf] <= fVar65) {
                fVar65 = pfVar51[0xf];
              }
              if (fVar66 <= pfVar51[4]) {
                fVar66 = pfVar51[4];
              }
              if (fVar66 <= pfVar51[8]) {
                fVar66 = pfVar51[8];
              }
              if (fVar66 <= pfVar51[0xc]) {
                fVar66 = pfVar51[0xc];
              }
              fVar69 = pfVar51[3];
              if (pfVar51[3] <= (float)local_118._0_4_) {
                fVar69 = (float)local_118._0_4_;
              }
              if (fVar69 <= pfVar51[7]) {
                fVar69 = pfVar51[7];
              }
              if (fVar69 <= pfVar51[0xb]) {
                fVar69 = pfVar51[0xb];
              }
              if (fVar69 <= pfVar51[0xf]) {
                fVar69 = pfVar51[0xf];
              }
              pfVar51 = pfVar51 + 0x10;
              uVar57 = uVar57 - 1;
              local_res8 = fVar66;
              local_108 = fVar71;
              local_104 = fVar67;
              local_100 = fVar63;
              local_fc = fVar65;
              local_f8 = fVar68;
              local_128._0_4_ = fVar70;
              local_118._0_4_ = fVar69;
            } while (uVar57 != 0);
          }
          if (uVar36 < param_2) {
            pfVar51 = pfVar51 + 2;
            uVar57 = (ulonglong)(param_2 - uVar36);
            fVar64 = fVar66;
            fVar55 = fVar69;
            fVar42 = fVar70;
            fVar50 = fVar67;
            do {
              fVar66 = pfVar51[-2];
              fVar63 = pfVar51[-1];
              fVar70 = *pfVar51;
              fVar69 = pfVar51[1];
              fVar67 = fVar66;
              if (fVar68 <= fVar66) {
                fVar67 = fVar68;
              }
              fVar68 = fVar67;
              fVar67 = fVar63;
              if (fVar50 <= fVar63) {
                fVar67 = fVar50;
              }
              if (fVar66 <= fVar64) {
                fVar66 = fVar64;
              }
              pfVar51 = pfVar51 + 4;
              if (fVar63 <= local_100) {
                fVar63 = local_100;
              }
              fVar64 = fVar70;
              if (fVar71 <= fVar70) {
                fVar64 = fVar71;
              }
              fVar71 = fVar64;
              if (fVar70 <= fVar42) {
                fVar70 = fVar42;
              }
              fVar64 = fVar69;
              if (fVar65 <= fVar69) {
                fVar64 = fVar65;
              }
              fVar65 = fVar64;
              if (fVar69 <= fVar55) {
                fVar69 = fVar55;
              }
              uVar57 = uVar57 - 1;
              fVar64 = fVar66;
              fVar55 = fVar69;
              fVar42 = fVar70;
              fVar50 = fVar67;
              local_res8 = fVar66;
              local_108 = fVar71;
              local_104 = fVar67;
              local_100 = fVar63;
              local_fc = fVar65;
              local_f8 = fVar68;
              local_128._0_4_ = fVar70;
              local_118._0_4_ = fVar69;
            } while (uVar57 != 0);
          }
          uVar44 = uVar44 + 1;
        } while (uVar44 < param_3);
      }
      uVar44 = 0;
      if (param_3 != 0) {
        do {
          uVar36 = 0;
          pfVar51 = (float *)((ulonglong)(uVar44 * param_2) * 0x10 + (longlong)param_6);
          if (3 < param_2) {
            pfVar48 = pfVar51 + 8;
            uVar36 = (param_2 - 4 >> 2) + 1;
            uVar57 = (ulonglong)uVar36;
            fVar55 = 1.0 / (fVar66 - fVar68);
            uVar36 = uVar36 * 4;
            fVar42 = 1.0 / (fVar63 - fVar67);
            fVar50 = 1.0 / (fVar70 - fVar71);
            fVar64 = 1.0 / (fVar69 - fVar65);
            do {
              fVar66 = param_4[1];
              fVar3 = param_4[2];
              fVar4 = param_4[3];
              *pfVar51 = (*param_4 - fVar68) * fVar55;
              pfVar51[1] = (fVar66 - fVar67) * fVar42;
              pfVar51[2] = (fVar3 - fVar71) * fVar50;
              pfVar51[3] = (fVar4 - fVar65) * fVar64;
              pfVar51 = pfVar51 + 0x10;
              fVar66 = param_4[5];
              fVar3 = param_4[6];
              fVar4 = param_4[7];
              pfVar48[-4] = (param_4[4] - fVar68) * fVar55;
              pfVar48[-3] = (fVar66 - fVar67) * fVar42;
              pfVar48[-2] = (fVar3 - fVar71) * fVar50;
              pfVar48[-1] = (fVar4 - fVar65) * fVar64;
              fVar66 = param_4[9];
              fVar3 = param_4[10];
              fVar4 = param_4[0xb];
              *pfVar48 = (param_4[8] - fVar68) * fVar55;
              pfVar48[1] = (fVar66 - fVar67) * fVar42;
              pfVar48[2] = (fVar3 - fVar71) * fVar50;
              pfVar48[3] = (fVar4 - fVar65) * fVar64;
              fVar66 = param_4[0xd];
              fVar3 = param_4[0xe];
              fVar4 = param_4[0xf];
              pfVar48[4] = (param_4[0xc] - fVar68) * fVar55;
              pfVar48[5] = (fVar66 - fVar67) * fVar42;
              pfVar48[6] = (fVar3 - fVar71) * fVar50;
              pfVar48[7] = (fVar4 - fVar65) * fVar64;
              pfVar48 = pfVar48 + 0x10;
              param_4 = param_4 + 0x10;
              uVar57 = uVar57 - 1;
              fVar66 = local_res8;
            } while (uVar57 != 0);
          }
          if (uVar36 < param_2) {
            uVar57 = (ulonglong)(param_2 - uVar36);
            do {
              fVar64 = *param_4;
              fVar55 = param_4[1];
              fVar42 = param_4[2];
              fVar50 = param_4[3];
              param_4 = param_4 + 4;
              *pfVar51 = (fVar64 - fVar68) * (1.0 / (fVar66 - fVar68));
              pfVar51[1] = (fVar55 - fVar67) * (1.0 / (fVar63 - fVar67));
              pfVar51[2] = (fVar42 - fVar71) * (1.0 / (fVar70 - fVar71));
              pfVar51[3] = (fVar50 - fVar65) * (1.0 / (fVar69 - fVar65));
              pfVar51 = pfVar51 + 4;
              uVar57 = uVar57 - 1;
            } while (uVar57 != 0);
          }
          uVar44 = uVar44 + 1;
        } while (uVar44 < param_3);
      }
    }
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xb:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x25:
  case 0x27:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x58:
    break;
  case 0xc:
  case 0xe:
    uVar44 = 0;
    if (param_3 != 0) {
      do {
        uVar36 = 0;
        pfVar51 = (float *)((ulonglong)(uVar44 * param_2) * 0x10 + (longlong)param_6);
        puVar47 = (ushort *)((ulonglong)(uVar44 * param_5) + (longlong)param_4);
        if (3 < param_2) {
          uVar36 = (param_2 - 4 >> 2) + 1;
          uVar57 = (ulonglong)uVar36;
          uVar36 = uVar36 * 4;
          pfVar48 = pfVar51 + 8;
          do {
            uVar7 = puVar47[1];
            uVar8 = puVar47[2];
            uVar9 = puVar47[3];
            *pfVar51 = (float)*puVar47 * 1.5259022e-05;
            pfVar51[1] = (float)uVar7 * 1.5259022e-05;
            pfVar51[2] = (float)uVar8 * 1.5259022e-05;
            pfVar51[3] = (float)uVar9 * 1.5259022e-05;
            uVar7 = puVar47[5];
            uVar8 = puVar47[6];
            uVar9 = puVar47[7];
            pfVar48[-4] = (float)puVar47[4] * 1.5259022e-05;
            pfVar48[-3] = (float)uVar7 * 1.5259022e-05;
            pfVar48[-2] = (float)uVar8 * 1.5259022e-05;
            pfVar48[-1] = (float)uVar9 * 1.5259022e-05;
            uVar7 = puVar47[9];
            uVar8 = puVar47[10];
            uVar9 = puVar47[0xb];
            *pfVar48 = (float)puVar47[8] * 1.5259022e-05;
            pfVar48[1] = (float)uVar7 * 1.5259022e-05;
            pfVar48[2] = (float)uVar8 * 1.5259022e-05;
            pfVar48[3] = (float)uVar9 * 1.5259022e-05;
            puVar1 = puVar47 + 0xc;
            uVar7 = puVar47[0xd];
            uVar8 = puVar47[0xe];
            uVar9 = puVar47[0xf];
            pfVar51 = pfVar51 + 0x10;
            puVar47 = puVar47 + 0x10;
            pfVar48[4] = (float)*puVar1 * 1.5259022e-05;
            pfVar48[5] = (float)uVar7 * 1.5259022e-05;
            pfVar48[6] = (float)uVar8 * 1.5259022e-05;
            pfVar48[7] = (float)uVar9 * 1.5259022e-05;
            uVar57 = uVar57 - 1;
            pfVar48 = pfVar48 + 0x10;
          } while (uVar57 != 0);
        }
        if (uVar36 < param_2) {
          uVar57 = (ulonglong)(param_2 - uVar36);
          puVar47 = puVar47 + 2;
          do {
            uVar7 = puVar47[-1];
            uVar8 = *puVar47;
            uVar9 = puVar47[1];
            *pfVar51 = (float)puVar47[-2] * 1.5259022e-05;
            pfVar51[1] = (float)uVar7 * 1.5259022e-05;
            pfVar51[2] = (float)uVar8 * 1.5259022e-05;
            pfVar51[3] = (float)uVar9 * 1.5259022e-05;
            uVar57 = uVar57 - 1;
            puVar47 = puVar47 + 4;
            pfVar51 = pfVar51 + 4;
          } while (uVar57 != 0);
        }
        uVar44 = uVar44 + 1;
      } while (uVar44 < param_3);
    }
    break;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    if (param_3 != 0) {
      do {
        uVar36 = 0;
        pfVar51 = (float *)((ulonglong)(uVar44 * param_5) + (longlong)param_4);
        pfVar48 = (float *)((ulonglong)(uVar44 * param_2) * 0x10 + (longlong)param_6);
        if (3 < param_2) {
          cVar5 = *(char *)(param_7 + 0x11);
          pfVar54 = pfVar48 + 8;
          uVar36 = (param_2 - 4 >> 2) + 1;
          uStack_120 = 0;
          uVar57 = (ulonglong)uVar36;
          uVar36 = uVar36 * 4;
          do {
            fVar63 = *pfVar51;
            if (cVar5 == '\0') {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
              fVar63 = ABS(1.0 / ((fVar63 * 0.1 - 0.1) * *(float *)(param_7 + 0xc)));
            }
            else if (0.0 <= fVar63) {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
            }
            else {
              fVar63 = 0.0;
            }
            bVar6 = *(byte *)(pfVar51 + 1);
            if (1.0 <= fVar63) {
              fVar63 = 1.0;
            }
            fVar70 = (float)uStack_120;
            fVar68 = uStack_120._4_4_;
            *pfVar48 = fVar63;
            pfVar48[1] = (float)bVar6;
            pfVar48[2] = (float)uStack_120;
            pfVar48[3] = uStack_120._4_4_;
            fVar63 = pfVar51[2];
            auVar15._4_8_ = uStack_120;
            auVar15._0_4_ = (float)bVar6;
            local_128 = (undefined1  [8])(auVar15._0_8_ << 0x20);
            _local_128 = CONCAT48(fVar70,local_128);
            _local_128 = CONCAT412(fVar68,_local_128);
            if (cVar5 == '\0') {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
              fVar63 = ABS(1.0 / ((fVar63 * 0.1 - 0.1) * *(float *)(param_7 + 0xc)));
            }
            else if (0.0 <= fVar63) {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
            }
            else {
              fVar63 = 0.0;
            }
            bVar6 = *(byte *)(pfVar51 + 3);
            if (1.0 <= fVar63) {
              fVar63 = 1.0;
            }
            pfVar54[-4] = fVar63;
            pfVar54[-3] = (float)bVar6;
            pfVar54[-2] = fVar70;
            pfVar54[-1] = fVar68;
            fVar63 = pfVar51[4];
            auVar16._4_8_ = uStack_120;
            auVar16._0_4_ = (float)bVar6;
            local_128 = (undefined1  [8])(auVar16._0_8_ << 0x20);
            _local_128 = CONCAT48(fVar70,local_128);
            _local_128 = CONCAT412(fVar68,_local_128);
            if (cVar5 == '\0') {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
              fVar63 = ABS(1.0 / ((fVar63 * 0.1 - 0.1) * *(float *)(param_7 + 0xc)));
            }
            else if (0.0 <= fVar63) {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
            }
            else {
              fVar63 = 0.0;
            }
            bVar6 = *(byte *)(pfVar51 + 5);
            if (1.0 <= fVar63) {
              fVar63 = 1.0;
            }
            *pfVar54 = fVar63;
            pfVar54[1] = (float)bVar6;
            pfVar54[2] = fVar70;
            pfVar54[3] = fVar68;
            fVar63 = pfVar51[6];
            auVar17._4_8_ = uStack_120;
            auVar17._0_4_ = (float)bVar6;
            local_128 = (undefined1  [8])(auVar17._0_8_ << 0x20);
            _local_128 = CONCAT48(fVar70,local_128);
            _local_128 = CONCAT412(fVar68,_local_128);
            if (cVar5 == '\0') {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
              fVar63 = ABS(1.0 / ((fVar63 * 0.1 - 0.1) * *(float *)(param_7 + 0xc)));
            }
            else if (0.0 <= fVar63) {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
            }
            else {
              fVar63 = 0.0;
            }
            bVar6 = *(byte *)(pfVar51 + 7);
            if (1.0 <= fVar63) {
              fVar63 = 1.0;
            }
            pfVar48 = pfVar48 + 0x10;
            pfVar51 = pfVar51 + 8;
            pfVar54[4] = fVar63;
            pfVar54[5] = (float)bVar6;
            pfVar54[6] = fVar70;
            pfVar54[7] = fVar68;
            pfVar54 = pfVar54 + 0x10;
            auVar18._4_8_ = uStack_120;
            auVar18._0_4_ = (float)bVar6;
            local_128 = (undefined1  [8])(auVar18._0_8_ << 0x20);
            _local_128 = CONCAT48(fVar70,local_128);
            _local_128 = CONCAT412(fVar68,_local_128);
            uVar57 = uVar57 - 1;
          } while (uVar57 != 0);
        }
        if (uVar36 < param_2) {
          cVar5 = *(char *)(param_7 + 0x11);
          uVar57 = (ulonglong)(param_2 - uVar36);
          uStack_120 = 0;
          do {
            fVar63 = *pfVar51;
            if (cVar5 == '\0') {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
              fVar63 = ABS(1.0 / ((fVar63 * 0.1 - 0.1) * *(float *)(param_7 + 0xc)));
            }
            else if (0.0 <= fVar63) {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
            }
            else {
              fVar63 = 0.0;
            }
            bVar6 = *(byte *)(pfVar51 + 1);
            if (1.0 <= fVar63) {
              fVar63 = 1.0;
            }
            fVar70 = (float)uStack_120;
            fVar68 = uStack_120._4_4_;
            pfVar51 = pfVar51 + 2;
            *pfVar48 = fVar63;
            pfVar48[1] = (float)bVar6;
            pfVar48[2] = (float)uStack_120;
            pfVar48[3] = uStack_120._4_4_;
            pfVar48 = pfVar48 + 4;
            auVar19._4_8_ = uStack_120;
            auVar19._0_4_ = (float)bVar6;
            local_128 = (undefined1  [8])(auVar19._0_8_ << 0x20);
            _local_128 = CONCAT48(fVar70,local_128);
            _local_128 = CONCAT412(fVar68,_local_128);
            uVar57 = uVar57 - 1;
          } while (uVar57 != 0);
        }
        uVar44 = uVar44 + 1;
      } while (uVar44 < param_3);
    }
    break;
  case 0x1a:
    uVar44 = 0;
    if (param_3 != 0) {
      do {
        lVar45 = (ulonglong)(uVar44 * param_5) + (longlong)param_4;
        if (param_2 != 0) {
          uVar57 = (ulonglong)param_2;
          puVar41 = (undefined8 *)((ulonglong)(uVar44 * param_2) * 0x10 + (longlong)param_6);
          do {
            puVar34 = (undefined8 *)FD3DFloatR11G11B10::operator_FLinearColor(lVar45,local_128);
            lVar45 = lVar45 + 4;
            uVar11 = puVar34[1];
            *puVar41 = *puVar34;
            puVar41[1] = uVar11;
            uVar57 = uVar57 - 1;
            puVar41 = puVar41 + 2;
            param_2 = local_res10;
          } while (uVar57 != 0);
        }
        uVar44 = uVar44 + 1;
      } while (uVar44 < param_3);
    }
    break;
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x20:
    uVar44 = 0;
    if (param_3 != 0) {
      do {
        puVar40 = (undefined1 *)((ulonglong)(uVar44 * param_5) + (longlong)param_4);
        if (param_2 != 0) {
          uVar57 = (ulonglong)param_2;
          puVar41 = (undefined8 *)((ulonglong)(uVar44 * param_2) * 0x10 + (longlong)param_6);
          do {
            local_res8 = (float)CONCAT13(puVar40[3],
                                         CONCAT21(CONCAT11(*puVar40,puVar40[1]),puVar40[2]));
            puVar34 = (undefined8 *)FLinearColor::FLinearColor(local_128,&local_res8);
            puVar40 = puVar40 + 4;
            uVar11 = puVar34[1];
            *puVar41 = *puVar34;
            puVar41[1] = uVar11;
            uVar57 = uVar57 - 1;
            puVar41 = puVar41 + 2;
            param_2 = local_res10;
          } while (uVar57 != 0);
        }
        uVar44 = uVar44 + 1;
      } while (uVar44 < param_3);
    }
    break;
  case 0x24:
  case 0x26:
    uVar44 = 0;
    if (param_3 != 0) {
      do {
        uVar36 = 0;
        pfVar51 = (float *)((ulonglong)(uVar44 * param_2) * 0x10 + (longlong)param_6);
        puVar47 = (ushort *)((ulonglong)(uVar44 * param_5) + (longlong)param_4);
        if (3 < param_2) {
          uStack_120._0_4_ = 0.0;
          uVar36 = (param_2 - 4 >> 2) + 1;
          uStack_120._4_4_ = 1.0;
          uVar57 = (ulonglong)uVar36;
          uVar36 = uVar36 * 4;
          pfVar48 = pfVar51 + 8;
          do {
            fVar63 = (float)uStack_120;
            fVar70 = uStack_120._4_4_;
            uVar7 = puVar47[1];
            *pfVar51 = (float)*puVar47 * 1.5259022e-05;
            pfVar51[1] = (float)uVar7 * 1.5259022e-05;
            pfVar51[2] = (float)uStack_120;
            pfVar51[3] = uStack_120._4_4_;
            pfVar51 = pfVar51 + 0x10;
            uVar7 = puVar47[3];
            pfVar48[-4] = (float)puVar47[2] * 1.5259022e-05;
            pfVar48[-3] = (float)uVar7 * 1.5259022e-05;
            pfVar48[-2] = (float)uStack_120;
            pfVar48[-1] = uStack_120._4_4_;
            uVar7 = puVar47[5];
            *pfVar48 = (float)puVar47[4] * 1.5259022e-05;
            pfVar48[1] = (float)uVar7 * 1.5259022e-05;
            pfVar48[2] = (float)uStack_120;
            pfVar48[3] = uStack_120._4_4_;
            puVar1 = puVar47 + 6;
            uVar7 = puVar47[7];
            puVar47 = puVar47 + 8;
            pfVar48[4] = (float)*puVar1 * 1.5259022e-05;
            pfVar48[5] = (float)uVar7 * 1.5259022e-05;
            pfVar48[6] = (float)uStack_120;
            pfVar48[7] = uStack_120._4_4_;
            auVar20._4_8_ = uStack_120;
            auVar20._0_4_ = (float)uVar7 * 1.5259022e-05;
            local_128 = (undefined1  [8])(auVar20._0_8_ << 0x20);
            _local_128 = CONCAT48(fVar63,local_128);
            _local_128 = CONCAT412(fVar70,_local_128);
            uVar57 = uVar57 - 1;
            pfVar48 = pfVar48 + 0x10;
          } while (uVar57 != 0);
        }
        if (uVar36 < param_2) {
          uStack_120._0_4_ = 0.0;
          uVar57 = (ulonglong)(param_2 - uVar36);
          uStack_120._4_4_ = 1.0;
          do {
            fVar63 = (float)uStack_120;
            fVar70 = uStack_120._4_4_;
            uVar7 = puVar47[1];
            *pfVar51 = (float)*puVar47 * 1.5259022e-05;
            pfVar51[1] = (float)uVar7 * 1.5259022e-05;
            pfVar51[2] = (float)uStack_120;
            pfVar51[3] = uStack_120._4_4_;
            auVar21._4_8_ = uStack_120;
            auVar21._0_4_ = (float)uVar7 * 1.5259022e-05;
            local_128 = (undefined1  [8])(auVar21._0_8_ << 0x20);
            _local_128 = CONCAT48(fVar63,local_128);
            _local_128 = CONCAT412(fVar70,_local_128);
            uVar57 = uVar57 - 1;
            puVar47 = puVar47 + 2;
            pfVar51 = pfVar51 + 4;
          } while (uVar57 != 0);
        }
        uVar44 = uVar44 + 1;
      } while (uVar44 < param_3);
    }
    break;
  case 0x28:
    uVar44 = 0;
    if (param_3 != 0) {
      do {
        pauVar56 = (undefined1 (*) [16])((ulonglong)(uVar44 * param_2) * 0x10 + (longlong)param_6);
        pfVar51 = (float *)((ulonglong)(uVar44 * param_5) + (longlong)param_4);
        uVar36 = 0;
        if (3 < param_2) {
          cVar5 = *(char *)(param_7 + 0x11);
          pauVar35 = pauVar56 + 2;
          uVar36 = (param_2 - 4 >> 2) + 1;
          uVar57 = (ulonglong)uVar36;
          _local_128 = ZEXT812(0) << 0x20;
          uStack_120._4_4_ = 0.0;
          uVar36 = uVar36 * 4;
          do {
            fVar63 = *pfVar51;
            if (cVar5 == '\0') {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
              fVar63 = ABS(1.0 / ((fVar63 * 0.1 - 0.1) * *(float *)(param_7 + 0xc)));
            }
            else if (0.0 <= fVar63) {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
            }
            else {
              fVar63 = 0.0;
            }
            if (1.0 <= fVar63) {
              fVar63 = 1.0;
            }
            uVar22 = local_128._8_8_;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar22;
            auVar58._4_12_ = SUB1612(auVar23 << 0x40,4);
            auVar58._0_4_ = fVar63;
            *pauVar56 = auVar58;
            fVar63 = pfVar51[1];
            if (cVar5 == '\0') {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
              fVar63 = ABS(1.0 / ((fVar63 * 0.1 - 0.1) * *(float *)(param_7 + 0xc)));
            }
            else if (0.0 <= fVar63) {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
            }
            else {
              fVar63 = 0.0;
            }
            if (1.0 <= fVar63) {
              fVar63 = 1.0;
            }
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar22;
            auVar59._4_12_ = SUB1612(auVar24 << 0x40,4);
            auVar59._0_4_ = fVar63;
            pauVar35[-1] = auVar59;
            fVar63 = pfVar51[2];
            if (cVar5 == '\0') {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
              fVar63 = ABS(1.0 / ((fVar63 * 0.1 - 0.1) * *(float *)(param_7 + 0xc)));
            }
            else if (0.0 <= fVar63) {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
            }
            else {
              fVar63 = 0.0;
            }
            if (1.0 <= fVar63) {
              fVar63 = 1.0;
            }
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar22;
            auVar60._4_12_ = SUB1612(auVar25 << 0x40,4);
            auVar60._0_4_ = fVar63;
            *pauVar35 = auVar60;
            fVar63 = pfVar51[3];
            if (cVar5 == '\0') {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
              fVar63 = ABS(1.0 / ((fVar63 * 0.1 - 0.1) * *(float *)(param_7 + 0xc)));
            }
            else if (0.0 <= fVar63) {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
            }
            else {
              fVar63 = 0.0;
            }
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar22;
            pauVar56 = pauVar56 + 4;
            pfVar51 = pfVar51 + 4;
            if (1.0 <= fVar63) {
              fVar63 = 1.0;
            }
            register0x00001204 = SUB1612(auVar26 << 0x40,4);
            local_128._0_4_ = fVar63;
            pauVar35[1] = _local_128;
            pauVar35 = pauVar35 + 4;
            uVar57 = uVar57 - 1;
          } while (uVar57 != 0);
        }
        if (uVar36 < param_2) {
          cVar5 = *(char *)(param_7 + 0x11);
          uVar57 = (ulonglong)(param_2 - uVar36);
          _local_128 = ZEXT812(0) << 0x20;
          uStack_120._4_4_ = 0.0;
          do {
            fVar63 = *pfVar51;
            if (cVar5 == '\0') {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
              fVar63 = ABS(1.0 / ((fVar63 * 0.1 - 0.1) * *(float *)(param_7 + 0xc)));
            }
            else if (0.0 <= fVar63) {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
            }
            else {
              fVar63 = 0.0;
            }
            auVar27._8_8_ = 0;
            auVar27._0_8_ = local_128._8_8_;
            pfVar51 = pfVar51 + 1;
            if (1.0 <= fVar63) {
              fVar63 = 1.0;
            }
            register0x00001204 = SUB1612(auVar27 << 0x40,4);
            local_128._0_4_ = fVar63;
            *pauVar56 = _local_128;
            pauVar56 = pauVar56 + 1;
            uVar57 = uVar57 - 1;
          } while (uVar57 != 0);
        }
        uVar44 = uVar44 + 1;
      } while (uVar44 < param_3);
    }
    break;
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
    uVar44 = 0;
    if (param_3 != 0) {
      do {
        uVar36 = 0;
        pauVar56 = (undefined1 (*) [16])((ulonglong)(uVar44 * param_2) * 0x10 + (longlong)param_6);
        pfVar51 = param_4;
        if (3 < param_2) {
          cVar5 = *(char *)(param_7 + 0x11);
          pauVar35 = pauVar56 + 2;
          uVar36 = (param_2 - 4 >> 2) + 1;
          uStack_120 = 0;
          uVar57 = (ulonglong)uVar36;
          uVar36 = uVar36 * 4;
          do {
            bVar6 = *(byte *)((longlong)pfVar51 + 3);
            fVar63 = (float)((uint)*pfVar51 & 0xffffff) * 5.9604645e-08;
            if (cVar5 == '\0') {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
              fVar63 = ABS(1.0 / ((fVar63 * 0.1 - 0.1) * *(float *)(param_7 + 0xc)));
            }
            else if (0.0 <= fVar63) {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
            }
            else {
              fVar63 = 0.0;
            }
            if (1.0 <= fVar63) {
              fVar63 = 1.0;
            }
            *(float *)*pauVar56 = fVar63;
            *(float *)(*pauVar56 + 4) = (float)bVar6;
            *(float *)(*pauVar56 + 8) = (float)uStack_120;
            *(float *)(*pauVar56 + 0xc) = uStack_120._4_4_;
            bVar6 = *(byte *)((longlong)pfVar51 + 7);
            fVar63 = (float)((uint)pfVar51[1] & 0xffffff) * 5.9604645e-08;
            if (cVar5 == '\0') {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
              fVar63 = ABS(1.0 / ((fVar63 * 0.1 - 0.1) * *(float *)(param_7 + 0xc)));
            }
            else if (0.0 <= fVar63) {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
            }
            else {
              fVar63 = 0.0;
            }
            if (1.0 <= fVar63) {
              fVar63 = 1.0;
            }
            *(float *)pauVar35[-1] = fVar63;
            *(float *)(pauVar35[-1] + 4) = (float)bVar6;
            *(float *)(pauVar35[-1] + 8) = (float)uStack_120;
            *(float *)(pauVar35[-1] + 0xc) = uStack_120._4_4_;
            bVar6 = *(byte *)((longlong)pfVar51 + 0xb);
            fVar63 = (float)((uint)pfVar51[2] & 0xffffff) * 5.9604645e-08;
            if (cVar5 == '\0') {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
              fVar63 = ABS(1.0 / ((fVar63 * 0.1 - 0.1) * *(float *)(param_7 + 0xc)));
            }
            else if (0.0 <= fVar63) {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
            }
            else {
              fVar63 = 0.0;
            }
            if (1.0 <= fVar63) {
              fVar63 = 1.0;
            }
            *(float *)*pauVar35 = fVar63;
            *(float *)(*pauVar35 + 4) = (float)bVar6;
            *(float *)(*pauVar35 + 8) = (float)uStack_120;
            *(float *)(*pauVar35 + 0xc) = uStack_120._4_4_;
            pbVar2 = (byte *)((longlong)pfVar51 + 0xf);
            fVar63 = (float)((uint)pfVar51[3] & 0xffffff) * 5.9604645e-08;
            if (cVar5 == '\0') {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
              fVar63 = ABS(1.0 / ((fVar63 * 0.1 - 0.1) * *(float *)(param_7 + 0xc)));
            }
            else if (0.0 <= fVar63) {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
            }
            else {
              fVar63 = 0.0;
            }
            pauVar56 = pauVar56 + 4;
            pfVar51 = pfVar51 + 4;
            if (1.0 <= fVar63) {
              fVar63 = 1.0;
            }
            local_128._4_4_ = (float)*pbVar2;
            local_128._0_4_ = fVar63;
            pauVar35[1] = _local_128;
            pauVar35 = pauVar35 + 4;
            uVar57 = uVar57 - 1;
          } while (uVar57 != 0);
        }
        if (uVar36 < param_2) {
          cVar5 = *(char *)(param_7 + 0x11);
          uVar57 = (ulonglong)(param_2 - uVar36);
          uStack_120 = 0;
          do {
            pbVar2 = (byte *)((longlong)pfVar51 + 3);
            fVar63 = (float)((uint)*pfVar51 & 0xffffff) * 5.9604645e-08;
            if (cVar5 == '\0') {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
              fVar63 = ABS(1.0 / ((fVar63 * 0.1 - 0.1) * *(float *)(param_7 + 0xc)));
            }
            else if (0.0 <= fVar63) {
              if (1.0 <= fVar63) {
                fVar63 = 1.0;
              }
            }
            else {
              fVar63 = 0.0;
            }
            pfVar51 = pfVar51 + 1;
            if (1.0 <= fVar63) {
              fVar63 = 1.0;
            }
            local_128._4_4_ = (float)*pbVar2;
            local_128._0_4_ = fVar63;
            *pauVar56 = _local_128;
            pauVar56 = pauVar56 + 1;
            uVar57 = uVar57 - 1;
          } while (uVar57 != 0);
        }
        uVar44 = uVar44 + 1;
      } while (uVar44 < param_3);
    }
    break;
  case 0x35:
  case 0x36:
    uVar44 = 0;
    if (param_3 != 0) {
      do {
        uVar36 = 0;
        pfVar51 = (float *)((ulonglong)(uVar44 * param_2) * 0x10 + (longlong)param_6);
        puVar47 = (ushort *)((ulonglong)(uVar44 * param_5) + (longlong)param_4);
        if (3 < param_2) {
          uStack_120._4_4_ = 1.0;
          uVar36 = (param_2 - 4 >> 2) + 1;
          uVar57 = (ulonglong)uVar36;
          uVar36 = uVar36 * 4;
          pfVar48 = pfVar51 + 8;
          do {
            fVar63 = uStack_120._4_4_;
            fVar70 = (float)*puVar47 * 1.5259022e-05;
            *pfVar51 = fVar70;
            pfVar51[1] = fVar70;
            pfVar51[2] = fVar70;
            pfVar51[3] = uStack_120._4_4_;
            pfVar51 = pfVar51 + 0x10;
            fVar70 = (float)puVar47[1] * 1.5259022e-05;
            pfVar48[-4] = fVar70;
            pfVar48[-3] = fVar70;
            pfVar48[-2] = fVar70;
            pfVar48[-1] = uStack_120._4_4_;
            fVar70 = (float)puVar47[2] * 1.5259022e-05;
            *pfVar48 = fVar70;
            pfVar48[1] = fVar70;
            pfVar48[2] = fVar70;
            pfVar48[3] = uStack_120._4_4_;
            puVar1 = puVar47 + 3;
            puVar47 = puVar47 + 4;
            fVar70 = (float)*puVar1 * 1.5259022e-05;
            pfVar48[4] = fVar70;
            pfVar48[5] = fVar70;
            pfVar48[6] = fVar70;
            pfVar48[7] = uStack_120._4_4_;
            auVar12._4_8_ = uStack_120;
            auVar12._0_4_ = fVar70;
            local_128 = (undefined1  [8])(auVar12._0_8_ << 0x20);
            uStack_120._0_4_ = fVar70;
            _local_128 = CONCAT412(fVar63,_local_128);
            uVar57 = uVar57 - 1;
            pfVar48 = pfVar48 + 0x10;
          } while (uVar57 != 0);
        }
        if (uVar36 < param_2) {
          uStack_120._4_4_ = 1.0;
          uVar57 = (ulonglong)(param_2 - uVar36);
          do {
            uVar7 = *puVar47;
            puVar47 = puVar47 + 1;
            fVar63 = uStack_120._4_4_;
            fVar70 = (float)uVar7 * 1.5259022e-05;
            *pfVar51 = fVar70;
            pfVar51[1] = fVar70;
            pfVar51[2] = fVar70;
            pfVar51[3] = uStack_120._4_4_;
            auVar13._4_8_ = uStack_120;
            auVar13._0_4_ = fVar70;
            local_128 = (undefined1  [8])(auVar13._0_8_ << 0x20);
            uStack_120._0_4_ = fVar70;
            _local_128 = CONCAT412(fVar63,_local_128);
            uVar57 = uVar57 - 1;
            pfVar51 = pfVar51 + 4;
          } while (uVar57 != 0);
        }
        uVar44 = uVar44 + 1;
      } while (uVar44 < param_3);
    }
    break;
  case 0x37:
    uVar44 = 0;
    if (param_3 != 0) {
      uVar57 = (ulonglong)_tls_index;
      pvVar52 = ThreadLocalStoragePointer;
      do {
        puVar47 = (ushort *)((ulonglong)(uVar44 * param_5) + (longlong)param_4);
        pauVar56 = (undefined1 (*) [16])((ulonglong)(uVar44 * param_2) * 0x10 + (longlong)param_6);
        if (param_2 != 0) {
          auVar39 = (undefined1  [8])CONCAT44(0,param_2);
          local_128 = auVar39;
          local_118 = ZEXT416((uint)local_118._0_4_);
          do {
            uVar7 = *puVar47;
            fVar63 = (float)((uVar7 & 0xffff8000) << 0x10);
            if ((uVar7 & 0x7c00) == 0) {
              uVar36 = uVar7 & 0x3ff;
              if ((uVar7 & 0x3ff) != 0) {
                if ((*(int *)(*(longlong *)((longlong)pvVar52 + uVar57 * 8) + 0x38) < DAT_1468509dc)
                   && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                  DAT_1468509d8 = 1.442695;
                  _Init_thread_footer(&DAT_1468509dc);
                }
                fVar70 = _guard_xfg_dispatch_icall_nop((float)uVar36);
                in_XMM0._0_4_ = fVar70 * DAT_1468509d8;
                in_XMM0._4_12_ = extraout_var;
                uVar57 = (ulonglong)_tls_index;
                auVar39 = local_128;
                pvVar52 = ThreadLocalStoragePointer;
                fVar63 = (float)(uVar36 << ((char)(10 - (int)in_XMM0._0_4_) + 0xdU & 0x1f) &
                                 0x7fffff | (0x71U - (10 - (int)in_XMM0._0_4_) & 0xff) << 0x17 |
                                (uint)fVar63);
              }
            }
            else if ((uVar7 & 0x7c00) == 0x7c00) {
              fVar63 = (float)((uint)fVar63 | 0x477fe000);
            }
            else {
              fVar63 = (float)(((uVar7 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar7 & 0x3ff) << 0xd |
                              (uint)fVar63);
            }
            local_res8 = fVar63;
            if (*(char *)(param_7 + 0x11) == '\0') {
              auVar62 = (undefined1  [12])0x0;
              fVar63 = local_res8;
              if (1.0 <= local_res8) {
                auVar62 = ZEXT812(0);
                fVar63 = 1.0;
              }
              in_XMM0._0_4_ = (fVar63 * 0.1 - 0.1) * *(float *)(param_7 + 0xc);
              in_XMM0._4_12_ = auVar62;
              fVar63 = ABS(1.0 / in_XMM0._0_4_);
            }
            else if (0.0 <= local_res8) {
              fVar63 = local_res8;
              if (1.0 <= local_res8) {
                fVar63 = 1.0;
              }
            }
            else {
              fVar63 = 0.0;
            }
            auVar62._4_8_ = in_XMM0._8_8_;
            auVar62._0_4_ = local_118._4_4_;
            auVar61._0_8_ = auVar62._0_8_ << 0x20;
            auVar61._8_4_ = local_118._8_4_;
            auVar61._12_4_ = local_118._12_4_;
            puVar47 = puVar47 + 1;
            if (1.0 <= fVar63) {
              fVar63 = 1.0;
            }
            in_XMM0._4_12_ = auVar61._4_12_;
            in_XMM0._0_4_ = fVar63;
            *pauVar56 = in_XMM0;
            pauVar56 = pauVar56 + 1;
            auVar39 = (undefined1  [8])((longlong)auVar39 - 1);
            local_128 = auVar39;
            param_2 = local_res10;
            local_118 = in_XMM0;
            param_3 = local_res18;
          } while (auVar39 != (undefined1  [8])0x0);
        }
        uVar44 = uVar44 + 1;
      } while (uVar44 < param_3);
    }
    break;
  case 0x57:
  case 0x5a:
  case 0x5b:
    uVar36 = 0;
    auVar14._12_4_ = 0;
    auVar14._0_12_ = stack0xfffffffffffffedc;
    _local_128 = auVar14 << 0x20;
    if (param_3 != 0) {
      do {
        puVar43 = (undefined4 *)((ulonglong)(uVar36 * param_5) + (longlong)param_4);
        if (param_2 != 0) {
          uVar57 = (ulonglong)param_2;
          pauVar56 = (undefined1 (*) [16])((ulonglong)(uVar36 * param_2) * 0x10 + (longlong)param_6)
          ;
          do {
            local_res8 = (float)*puVar43;
            pauVar35 = (undefined1 (*) [16])FLinearColor::FLinearColor(local_118,&local_res8);
            puVar43 = puVar43 + 1;
            *pauVar56 = *pauVar35;
            uVar57 = uVar57 - 1;
            pauVar56 = pauVar56 + 1;
          } while (uVar57 != 0);
          param_2 = local_res10;
          uVar36 = local_128._0_4_;
        }
        uVar36 = uVar36 + 1;
        local_128._0_4_ = uVar36;
      } while (uVar36 < param_3);
    }
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x59:
    uVar36 = 0;
    if (param_3 != 0) {
      do {
        uVar28 = 0;
        pfVar51 = (float *)((ulonglong)(uVar36 * param_2) * 0x10 + (longlong)param_6);
        puVar46 = (uint *)((ulonglong)(uVar36 * param_5) + (longlong)param_4);
        if (3 < param_2) {
          uVar28 = (param_2 - 4 >> 2) + 1;
          uVar57 = (ulonglong)uVar28;
          uVar28 = uVar28 * 4;
          pfVar48 = pfVar51 + 8;
          do {
            uVar29 = *puVar46;
            *pfVar51 = (float)(uVar29 & 0x3ff) * 0.0009775171;
            pfVar51[1] = (float)(uVar29 >> 10 & 0x3ff) * 0.0009775171;
            pfVar51[2] = (float)(uVar29 >> 0x14 & 0x3ff) * 0.0009775171;
            pfVar51[3] = (float)(uVar29 >> 0x1e) * 0.33333334;
            uVar29 = puVar46[1];
            pfVar48[-4] = (float)(uVar29 & 0x3ff) * 0.0009775171;
            pfVar48[-3] = (float)(uVar29 >> 10 & 0x3ff) * 0.0009775171;
            pfVar48[-2] = (float)(uVar29 >> 0x14 & 0x3ff) * 0.0009775171;
            pfVar48[-1] = (float)(uVar29 >> 0x1e) * 0.33333334;
            uVar29 = puVar46[2];
            pfVar51 = pfVar51 + 0x10;
            *pfVar48 = (float)(uVar29 & 0x3ff) * 0.0009775171;
            pfVar48[1] = (float)(uVar29 >> 10 & 0x3ff) * 0.0009775171;
            pfVar48[2] = (float)(uVar29 >> 0x14 & 0x3ff) * 0.0009775171;
            pfVar48[3] = (float)(uVar29 >> 0x1e) * 0.33333334;
            uVar29 = puVar46[3];
            puVar46 = puVar46 + 4;
            pfVar48[4] = (float)(uVar29 & 0x3ff) * 0.0009775171;
            pfVar48[5] = (float)(uVar29 >> 10 & 0x3ff) * 0.0009775171;
            pfVar48[6] = (float)(uVar29 >> 0x14 & 0x3ff) * 0.0009775171;
            pfVar48[7] = (float)(uVar29 >> 0x1e) * 0.33333334;
            uVar57 = uVar57 - 1;
            pfVar48 = pfVar48 + 0x10;
          } while (uVar57 != 0);
        }
        if (uVar28 < param_2) {
          uVar57 = (ulonglong)(param_2 - uVar28);
          do {
            uVar28 = *puVar46;
            puVar46 = puVar46 + 1;
            *pfVar51 = (float)(uVar28 & 0x3ff) * 0.0009775171;
            pfVar51[1] = (float)(uVar28 >> 10 & 0x3ff) * 0.0009775171;
            pfVar51[2] = (float)(uVar28 >> 0x14 & 0x3ff) * 0.0009775171;
            pfVar51[3] = (float)(uVar28 >> 0x1e) * 0.33333334;
            uVar57 = uVar57 - 1;
            pfVar51 = pfVar51 + 4;
          } while (uVar57 != 0);
        }
        uVar36 = uVar36 + 1;
      } while (uVar36 < param_3);
    }
  case 10:
    if (*(int *)(param_7 + 4) == 3) {
      if (param_3 != 0) {
        do {
          puVar46 = (uint *)((ulonglong)(uVar44 * param_2) * 0x10 + (longlong)param_6);
          puVar47 = (ushort *)((ulonglong)(uVar44 * param_5) + (longlong)param_4);
          if (param_2 != 0) {
            uVar57 = (ulonglong)param_2;
            do {
              uVar7 = puVar47[3];
              fVar63 = (float)(uVar7 & 0x3ff) * 8192.0;
              uVar28 = (int)ROUND((fVar63 + fVar63) - 0.5) >> 1;
              uVar36 = 0x7fffff;
              if (uVar28 < 0x800000) {
                uVar36 = uVar28;
              }
              uVar8 = puVar47[2];
              fVar63 = (float)(uVar8 & 0x3ff) * 8192.0;
              uVar29 = (int)ROUND((fVar63 + fVar63) - 0.5) >> 1;
              uVar28 = 0x7fffff;
              if (uVar29 < 0x800000) {
                uVar28 = uVar29;
              }
              uVar9 = puVar47[1];
              fVar63 = (float)(uVar9 & 0x3ff) * 8192.0;
              uVar30 = (int)ROUND((fVar63 + fVar63) - 0.5) >> 1;
              uVar29 = 0x7fffff;
              if (uVar30 < 0x800000) {
                uVar29 = uVar30;
              }
              uVar10 = *puVar47;
              fVar63 = (float)(uVar10 & 0x3ff) * 8192.0;
              uVar31 = (int)ROUND((fVar63 + fVar63) - 0.5) >> 1;
              uVar30 = 0x7fffff;
              if (uVar31 < 0x800000) {
                uVar30 = uVar31;
              }
              puVar47 = puVar47 + 4;
              *puVar46 = uVar30 & 0x7fffff | ((uVar10 >> 10 & 0x1f) + 0x70) * 0x800000 |
                         (uVar10 & 0xffff8000) << 0x10;
              puVar46[1] = uVar29 & 0x7fffff | ((uVar9 >> 10 & 0x1f) + 0x70) * 0x800000 |
                           (uVar9 & 0xffff8000) << 0x10;
              puVar46[2] = uVar28 & 0x7fffff | ((uVar8 >> 10 & 0x1f) + 0x70) * 0x800000 |
                           (uVar8 & 0xffff8000) << 0x10;
              puVar46[3] = uVar36 & 0x7fffff | ((uVar7 >> 10 & 0x1f) + 0x70) * 0x800000 |
                           (uVar7 & 0xffff8000) << 0x10;
              puVar46 = puVar46 + 4;
              uVar57 = uVar57 - 1;
              param_2 = local_res10;
            } while (uVar57 != 0);
          }
          uVar44 = uVar44 + 1;
        } while (uVar44 < param_3);
      }
    }
    else {
      fVar68 = 1.0;
      fVar65 = 1.0;
      fVar66 = 1.0;
      local_128._0_4_ = 1.0;
      fVar67 = 0.0;
      local_118._0_4_ = 0x3f800000;
      fVar69 = 0.0;
      local_res8 = 0.0;
      fVar63 = 0.0;
      fVar70 = 0.0;
      fVar71 = 1.0;
      if (param_3 != 0) {
        do {
          auVar14 = local_118;
          puVar47 = (ushort *)((ulonglong)(uint)((int)local_res8 * param_5) + (longlong)param_4);
          if (param_2 != 0) {
            local_118._4_4_ = 0;
            local_118._0_4_ = param_2;
            local_118._8_8_ = auVar14._8_8_;
            do {
              uVar7 = *puVar47;
              uVar8 = puVar47[1];
              uVar9 = puVar47[2];
              uVar28 = ((uVar7 >> 10 & 0x1f) + 0x70) * 0x800000;
              fVar64 = (float)(uVar7 & 0x3ff) * 8192.0;
              uVar36 = (int)ROUND((fVar64 + fVar64) - 0.5) >> 1;
              uVar44 = 0x7fffff;
              if (uVar36 < 0x800000) {
                uVar44 = uVar36;
              }
              uVar29 = (uVar7 & 0xffff8000) << 0x10;
              uVar36 = ((uVar8 >> 10 & 0x1f) + 0x70) * 0x800000;
              fVar64 = (float)(uVar29 | uVar44 & 0x7fffff | uVar28);
              if (fVar67 <= fVar64) {
                fVar64 = fVar67;
              }
              fVar67 = fVar64;
              fVar64 = (float)(uVar8 & 0x3ff) * 8192.0;
              uVar31 = (int)ROUND((fVar64 + fVar64) - 0.5) >> 1;
              uVar30 = 0x7fffff;
              if (uVar31 < 0x800000) {
                uVar30 = uVar31;
              }
              uVar31 = (uVar8 & 0xffff8000) << 0x10;
              uVar53 = ((uVar9 >> 10 & 0x1f) + 0x70) * 0x800000;
              fVar64 = (float)(uVar31 | uVar30 & 0x7fffff | uVar36);
              if (fVar69 <= fVar64) {
                fVar64 = fVar69;
              }
              fVar69 = fVar64;
              fVar64 = (float)(uVar9 & 0x3ff) * 8192.0;
              uVar32 = (int)ROUND((fVar64 + fVar64) - 0.5) >> 1;
              uVar49 = 0x7fffff;
              if (uVar32 < 0x800000) {
                uVar49 = uVar32;
              }
              uVar32 = (uVar9 & 0xffff8000) << 0x10;
              uVar7 = puVar47[3];
              fVar64 = (float)(uVar49 & 0x7fffff | uVar53 | uVar32);
              if (fVar63 <= fVar64) {
                fVar64 = fVar63;
              }
              fVar63 = fVar64;
              uVar38 = ((uVar7 >> 10 & 0x1f) + 0x70) * 0x800000;
              fVar64 = (float)(uVar7 & 0x3ff) * 8192.0;
              uVar33 = (int)ROUND((fVar64 + fVar64) - 0.5) >> 1;
              uVar37 = 0x7fffff;
              if (uVar33 < 0x800000) {
                uVar37 = uVar33;
              }
              uVar33 = (uVar7 & 0xffff8000) << 0x10;
              fVar55 = (float)(uVar29 | uVar44 & 0x7fffff | uVar28);
              fVar42 = (float)(uVar31 | uVar30 & 0x7fffff | uVar36);
              fVar64 = (float)(uVar38 | uVar33 | uVar37 & 0x7fffff);
              fVar50 = (float)(uVar49 & 0x7fffff | uVar53 | uVar32);
              if (fVar70 <= fVar64) {
                fVar64 = fVar70;
              }
              fVar70 = fVar64;
              fVar64 = (float)(uVar38 | uVar33 | uVar37 & 0x7fffff);
              puVar47 = puVar47 + 4;
              lVar45 = local_118._0_8_ + -1;
              local_118._0_8_ = lVar45;
              if (fVar55 <= fVar68) {
                fVar55 = fVar68;
              }
              fVar68 = fVar55;
              if (fVar42 <= fVar71) {
                fVar42 = fVar71;
              }
              fVar71 = fVar42;
              if (fVar50 <= fVar65) {
                fVar50 = fVar65;
              }
              fVar65 = fVar50;
              if (fVar64 <= fVar66) {
                fVar64 = fVar66;
              }
              fVar66 = fVar64;
            } while (lVar45 != 0);
            local_118._0_4_ = fVar66;
            param_4 = local_res20;
            param_2 = local_res10;
            param_3 = local_res18;
            local_128._0_4_ = fVar65;
          }
          local_res8 = (float)((int)local_res8 + 1);
        } while ((uint)local_res8 < param_3);
        uVar44 = 0;
        if (param_3 != 0) {
          do {
            pfVar51 = (float *)((ulonglong)(uVar44 * param_2) * 0x10 + (longlong)param_6);
            puVar47 = (ushort *)((ulonglong)(uVar44 * param_5) + (longlong)param_4);
            if (param_2 != 0) {
              uVar57 = (ulonglong)param_2;
              do {
                uVar7 = puVar47[3];
                fVar64 = (float)(uVar7 & 0x3ff) * 8192.0;
                uVar28 = (int)ROUND((fVar64 + fVar64) - 0.5) >> 1;
                uVar36 = 0x7fffff;
                if (uVar28 < 0x800000) {
                  uVar36 = uVar28;
                }
                uVar8 = puVar47[2];
                fVar64 = (float)(uVar8 & 0x3ff) * 8192.0;
                uVar29 = (int)ROUND((fVar64 + fVar64) - 0.5) >> 1;
                uVar28 = 0x7fffff;
                if (uVar29 < 0x800000) {
                  uVar28 = uVar29;
                }
                uVar9 = puVar47[1];
                fVar64 = (float)(uVar9 & 0x3ff) * 8192.0;
                uVar30 = (int)ROUND((fVar64 + fVar64) - 0.5) >> 1;
                uVar29 = 0x7fffff;
                if (uVar30 < 0x800000) {
                  uVar29 = uVar30;
                }
                uVar10 = *puVar47;
                fVar64 = (float)(uVar10 & 0x3ff) * 8192.0;
                uVar31 = (int)ROUND((fVar64 + fVar64) - 0.5) >> 1;
                uVar30 = 0x7fffff;
                if (uVar31 < 0x800000) {
                  uVar30 = uVar31;
                }
                puVar47 = puVar47 + 4;
                *pfVar51 = ((float)(uVar30 & 0x7fffff | ((uVar10 >> 10 & 0x1f) + 0x70) * 0x800000 |
                                   (uVar10 & 0xffff8000) << 0x10) - fVar67) / (fVar68 - fVar67);
                pfVar51[1] = ((float)(uVar29 & 0x7fffff | ((uVar9 >> 10 & 0x1f) + 0x70) * 0x800000 |
                                     (uVar9 & 0xffff8000) << 0x10) - fVar69) / (fVar71 - fVar69);
                pfVar51[2] = ((float)(((uVar8 >> 10 & 0x1f) + 0x70) * 0x800000 | uVar28 & 0x7fffff |
                                     (uVar8 & 0xffff8000) << 0x10) - fVar63) / (fVar65 - fVar63);
                pfVar51[3] = ((float)(((uVar7 >> 10 & 0x1f) + 0x70) * 0x800000 | uVar36 & 0x7fffff |
                                     (uVar7 & 0xffff8000) << 0x10) - fVar70) / (fVar66 - fVar70);
                pfVar51 = pfVar51 + 4;
                uVar57 = uVar57 - 1;
                param_2 = local_res10;
              } while (uVar57 != 0);
            }
            uVar44 = uVar44 + 1;
            fVar65 = (float)local_128._0_4_;
            fVar66 = (float)local_118._0_4_;
          } while (uVar44 < param_3);
        }
      }
    }
    break;
  default:
    goto switchD_141a29dd2_default;
  }
switchD_141a29dd2_default:
  return;
}



// FUNCTION 141a2c060 FUN_141a2c060 body=1621 status=ok
// SIG undefined FUN_141a2c060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141a2c060(longlong param_1,uint param_2,uint param_3,uint param_4,byte param_5,uint param_6,
             uint param_7,longlong *param_8)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  byte bVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  void *pvVar13;
  undefined8 *puVar14;
  longlong lVar15;
  void *pvVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  uint local_190;
  uint local_188;
  undefined1 local_180;
  uint local_178;
  uint local_170;
  undefined8 local_168;
  byte local_158;
  undefined4 local_154;
  uint local_150;
  uint local_14c;
  longlong *local_148;
  longlong *local_140;
  longlong local_138;
  longlong *local_130;
  ulonglong local_128;
  uint local_120;
  uint local_11c;
  uint local_118;
  longlong *local_110;
  longlong *local_108;
  void *local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  uint local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  uint local_b4;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  uint local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  byte local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_158 = param_5;
  local_140 = param_8;
  local_138 = (ulonglong)param_5 * 5;
  uVar1 = (&DAT_1464ca1cc)[(ulonglong)param_5 * 10];
  local_14c = param_7;
  local_120 = param_2;
  local_11c = param_3;
  local_118 = param_4;
  local_f0 = param_1;
  local_154 = FUN_141a2ea30(uVar1);
  pvVar13 = (void *)0x0;
  local_88 = (uint)((param_7 >> 0xc & 1) != 0);
  local_9c = param_6;
  local_94 = 0;
  local_90 = 8;
  if ((param_7 >> 0x10 & 1) != 0) {
    local_90 = 0x88;
  }
  local_8c = 0;
  local_150 = param_7 & 1;
  if (local_150 != 0) {
    local_90 = local_90 | 0x20;
  }
  local_100 = (void *)0x0;
  local_f8 = 0;
  local_a8 = param_2;
  local_a4 = param_3;
  local_a0 = param_4;
  local_98 = uVar1;
  if ((longlong *)*local_140 != (longlong *)0x0) {
    lVar7 = (**(code **)(*(longlong *)*local_140 + 8))();
    local_f8 = CONCAT44(local_f8._4_4_,param_6);
    if (0 < (int)param_6) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_100);
      pvVar13 = local_100;
    }
    _guard_xfg_dispatch_icall_nop(pvVar13,0,(longlong)(int)param_6 << 4);
    uVar10 = 0;
    if (param_6 != 0) {
      uVar18 = 1;
      uVar17 = uVar10;
      do {
        lVar15 = (longlong)(int)uVar10;
        *(ulonglong *)((longlong)pvVar13 + lVar15 * 0x10) = uVar17 + lVar7;
        bVar9 = (byte)uVar10;
        uVar5 = param_2 >> (bVar9 & 0x1f);
        if (uVar5 < 2) {
          uVar5 = uVar18;
        }
        uVar11 = param_3 >> (bVar9 & 0x1f);
        if (uVar11 < 2) {
          uVar11 = uVar18;
        }
        iVar12 = uVar11 * uVar5 * (&DAT_1464ca1c4)[local_138 * 2];
        *(uint *)((longlong)pvVar13 + lVar15 * 0x10 + 8) = uVar5 * (&DAT_1464ca1c4)[local_138 * 2];
        uVar5 = param_4 >> (bVar9 & 0x1f);
        if (uVar5 < 2) {
          uVar5 = uVar18;
        }
        *(int *)((longlong)pvVar13 + lVar15 * 0x10 + 0xc) = iVar12;
        uVar11 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar11;
        uVar17 = (ulonglong)((int)uVar17 + uVar5 * iVar12);
        param_1 = local_f0;
      } while (uVar11 < param_6);
    }
  }
  local_148 = (longlong *)0x0;
  local_e8 = 0;
  pvVar16 = (void *)0x0;
  if (*local_140 != 0) {
    pvVar16 = pvVar13;
  }
  iVar12 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x30))
                     (*(longlong **)(param_1 + 0x210),&local_a8,pvVar16,&local_148);
  uVar1 = local_154;
  if (iVar12 < 0) {
    local_168 = *(undefined8 *)(param_1 + 0x210);
    local_170 = local_90;
    local_178 = param_6;
    local_180 = (undefined1)local_154;
    local_198 = (undefined4 *)CONCAT44(local_198._4_4_,param_2);
    local_190 = param_3;
    local_188 = param_4;
    FUN_141a444e0(iVar12,
                  "Direct3DDevice->CreateTexture3D(&TextureDesc,CreateInfo.BulkData != NULL ? (const D3D11_SUBRESOURCE_DATA*)SubResourceData.GetData() : NULL,TextureResource.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                  ,0x466);
  }
  local_c0 = uVar1;
  puVar14 = (undefined8 *)0x0;
  local_bc = 8;
  local_b4 = param_6;
  local_108 = (longlong *)0x0;
  iVar12 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x38))
                     (*(longlong **)(param_1 + 0x210),local_148,&local_c0,&local_108);
  if (iVar12 < 0) {
    local_198 = *(undefined4 **)(param_1 + 0x210);
    FUN_141a447e0(iVar12,
                  "Direct3DDevice->CreateShaderResourceView(TextureResource,&SRVDesc,ShaderResourceView.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                  ,0x470);
  }
  local_110 = (longlong *)0x0;
  if ((char)local_150 != '\0') {
    local_d8 = uVar1;
    local_d4 = 8;
    local_cc = 0;
    local_c8 = param_4;
    iVar12 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x48))
                       (*(longlong **)(param_1 + 0x210),local_148,&local_d8,&local_110);
    if (iVar12 < 0) {
      local_198 = *(undefined4 **)(param_1 + 0x210);
      FUN_141a447e0(iVar12,
                    "Direct3DDevice->CreateRenderTargetView(TextureResource,&RTVDesc,RenderTargetView.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Texture.cpp"
                    ,0x47f);
    }
  }
  local_130 = (longlong *)0x0;
  local_128 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_130,0);
  plVar19 = local_130;
  local_e0 = local_130;
  *local_130 = (longlong)local_110;
  if (local_110 != (longlong *)0x0) {
    (**(code **)(*local_110 + 8))();
  }
  puVar8 = (undefined8 *)operator_new(0xf8);
  plVar20 = local_108;
  uVar10 = local_128;
  iVar12 = (int)local_128;
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR_FUN_144d838f0;
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *(undefined2 *)(puVar8 + 2) = 0x100;
    puVar8[3] = 0;
    uVar1 = *(undefined4 *)((longlong)local_140 + 0x14);
    lVar7 = local_140[3];
    uVar3 = *(undefined4 *)((longlong)local_140 + 0x1c);
    *(int *)(puVar8 + 4) = (int)local_140[2];
    *(undefined4 *)((longlong)puVar8 + 0x24) = uVar1;
    *(int *)(puVar8 + 5) = (int)lVar7;
    *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar3;
    *(int *)(puVar8 + 6) = (int)local_140[4];
    *(uint *)((longlong)puVar8 + 0x3c) = (uint)local_158;
    *(uint *)(puVar8 + 8) = local_14c;
    puVar8[9] = puVar8 + 10;
    *(uint *)((longlong)puVar8 + 0x34) = param_6;
    puVar14 = puVar8 + 0xe;
    *(undefined4 *)(puVar8 + 7) = 1;
    puVar8[10] = 0xc7efffffe0000000;
    puVar8[0xb] = 0;
    *puVar8 = &PTR_FUN_144d839e8;
    *(uint *)(puVar8 + 0xc) = local_120;
    *(uint *)((longlong)puVar8 + 100) = local_11c;
    *(uint *)(puVar8 + 0xd) = local_118;
    *puVar14 = &PTR__scalar_deleting_destructor__144da0d80;
    *(undefined4 *)(puVar8 + 0xf) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x7c) = 0xffffffff;
    *(undefined1 *)(puVar8 + 0x10) = 0;
    puVar8[0x11] = param_1;
    puVar8[0x12] = 0;
    *(undefined4 *)(puVar8 + 0x13) = 0;
    puVar8[0x14] = puVar14;
    puVar8[0x15] = local_148;
    if (local_148 != (longlong *)0x0) {
      (**(code **)(*local_148 + 8))();
    }
    puVar8[0x16] = plVar20;
    if (plVar20 != (longlong *)0x0) {
      (**(code **)(*plVar20 + 8))(plVar20);
    }
    puVar8[0x17] = 0;
    *(int *)(puVar8 + 0x18) = iVar12;
    if (iVar12 == 0) {
      *(undefined4 *)((longlong)puVar8 + 0xc4) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                (puVar8 + 0x17,uVar10 & 0xffffffff,0);
      plVar20 = (longlong *)puVar8[0x17];
      iVar6 = iVar12;
      do {
        plVar2 = (longlong *)*plVar19;
        *plVar20 = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        plVar20 = plVar20 + 1;
        plVar19 = plVar19 + 1;
        iVar6 = iVar6 + -1;
        param_1 = local_f0;
      } while (iVar6 != 0);
    }
    *(undefined1 *)(puVar8 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar8 + 0xcc) = 1;
    puVar8[0x1a] = 0;
    puVar8[0x1b] = 0;
    puVar8[0x1c] = 0;
    puVar8[0x1d] = 0;
    *(undefined4 *)(puVar8 + 0x1e) = 0;
    *puVar8 = &PTR__scalar_deleting_destructor__144da0da0;
    *puVar14 = &PTR_LAB_144da0df0;
    puVar14 = puVar8;
  }
  puVar14[3] = local_e8;
  if (local_150 != 0) {
    *(undefined4 *)(puVar14 + 0xf) = 1;
  }
  plVar19 = (longlong *)puVar14[0x15];
  plVar20 = local_e0;
  if (plVar19 != (longlong *)0x0) {
    (**(code **)(*plVar19 + 0x50))(plVar19,&local_80);
    local_198 = (undefined4 *)CONCAT44(local_198._4_4_,local_74);
    lVar7 = CalcTextureSize3D(local_80,local_7c,local_78,*(undefined4 *)((longlong)puVar14 + 0x3c));
    *(int *)(puVar14 + 0x13) = (int)lVar7;
    plVar20 = local_e0;
    if (lVar7 != 0) {
      if (lVar7 < 1) {
        iVar6 = -(int)((longlong)
                       ((0x3ffU - lVar7 & 0xfffffffffffffc00) +
                       (ulonglong)((uint)((longlong)(0x3ffU - lVar7) >> 0x3f) & 0x3ff)) >> 10);
      }
      else {
        iVar6 = (int)((longlong)
                      ((lVar7 + 0x3ffU & 0xfffffffffffffc00) +
                      (ulonglong)((uint)((longlong)(lVar7 + 0x3ffU) >> 0x3f) & 0x3ff)) >> 10);
      }
      iVar12 = (int)local_128;
      pvVar13 = local_100;
      plVar20 = local_130;
      if ((local_68 & 0xe0) == 0) {
        LOCK();
        DAT_146ab6300 = DAT_146ab6300 + iVar6;
        UNLOCK();
      }
      else {
        LOCK();
        DAT_146ab6304 = DAT_146ab6304 + iVar6;
        UNLOCK();
      }
    }
  }
  cVar4 = IsRHIDeviceIntel();
  if ((cVar4 != '\0') && ((local_14c & 0x20000000) != 0)) {
    local_138 = 0;
    FUN_14004ce50(*(undefined8 *)(param_1 + 0x210),puVar14[0x15],&local_138);
    local_198 = &local_154;
    puVar14[0x12] = local_138;
    local_154 = 1;
    FUN_14004cf30(*(undefined8 *)(param_1 + 0x210),local_138,1,1);
  }
  plVar19 = plVar20;
  if ((longlong *)*local_140 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*local_140 + 0x18))();
  }
  for (; iVar12 != 0; iVar12 = iVar12 + -1) {
    if ((longlong *)*plVar19 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar19 + 0x10))();
    }
    plVar19 = plVar19 + 1;
  }
  FMemory::Free(plVar20);
  if (local_110 != (longlong *)0x0) {
    (**(code **)(*local_110 + 0x10))();
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x10))();
  }
  if (local_148 != (longlong *)0x0) {
    (**(code **)(*local_148 + 0x10))();
  }
  if (pvVar13 != (void *)0x0) {
    FMemory::Free(pvVar13);
  }
  return puVar14;
}



// FUNCTION 141a2c6c0 FUN_141a2c6c0 body=484 status=ok
// SIG undefined FUN_141a2c6c0(void)

longlong * FUN_141a2c6c0(longlong param_1,short *param_2,longlong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x50);
  iVar7 = *(int *)(param_1 + 0xb8);
  puVar6 = (undefined8 *)0x0;
  iVar1 = *(int *)(param_1 + 0xbc);
  if (*(int *)(lVar4 + 8 + (longlong)iVar7 * 0x10) <= iVar1) {
    puVar2 = (undefined8 *)operator_new(0x60);
    puVar5 = puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar2 + 1) = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      *puVar2 = &PTR_FUN_144da1130;
      puVar2[0xb] = 0;
      puVar5 = puVar2;
    }
    plVar8 = (longlong *)((longlong)*(int *)(param_1 + 0xb8) * 0x10 + *(longlong *)(param_1 + 0x50))
    ;
    iVar7 = (int)plVar8[1];
    *(int *)(plVar8 + 1) = iVar7 + 1;
    if (*(int *)((longlong)plVar8 + 0xc) < iVar7 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8,iVar7);
    }
    *(undefined8 **)(*plVar8 + (longlong)iVar7 * 8) = puVar5;
    iVar1 = *(int *)(param_1 + 0xbc);
    iVar7 = *(int *)(param_1 + 0xb8);
    lVar4 = *(longlong *)(param_1 + 0x50);
  }
  *(int *)(param_1 + 0xbc) = iVar1 + 1;
  plVar8 = *(longlong **)(*(longlong *)(lVar4 + (longlong)iVar7 * 0x10) + (longlong)iVar1 * 8);
  plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x6d8))();
  lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,0);
  puVar5 = puVar6;
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(lVar4 + -0x30);
  }
  plVar8[0xb] = (longlong)puVar5;
  (**(code **)(*plVar8 + 8))(plVar8);
  if ((short *)plVar8[6] != param_2) {
    puVar5 = puVar6;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (param_2[lVar4] != 0);
      puVar5 = (undefined8 *)(ulonglong)((int)lVar4 + 1);
    }
    *(undefined4 *)(plVar8 + 7) = 0;
    iVar7 = (int)puVar5;
    if (*(int *)((longlong)plVar8 + 0x3c) != iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar8 + 6,puVar5);
      puVar6 = (undefined8 *)(ulonglong)*(uint *)(plVar8 + 7);
    }
    iVar1 = iVar7 + (int)puVar6;
    *(int *)(plVar8 + 7) = iVar1;
    if (*(int *)((longlong)plVar8 + 0x3c) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar8 + 6);
    }
    if (iVar7 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)plVar8[6],param_2,(longlong)iVar7 * 2);
    }
  }
  plVar8[8] = param_3;
  *(undefined4 *)(plVar8 + 10) = 0;
  if (*(int *)((longlong)plVar8 + 0x54) != 4) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8 + 9,4);
  }
  return plVar8;
}



// FUNCTION 141a2c8b0 CreateEventNode body=66 status=ok
// SIG undefined CreateEventNode(void)

void FGPUProfiler::CreateEventNode(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x58);
  if (lVar1 != 0) {
    FGPUProfilerEventNode::FGPUProfilerEventNode(lVar1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 141a2c900 FUN_141a2c900 body=28 status=ok
// SIG undefined FUN_141a2c900(void)

longlong FUN_141a2c900(void)

{
  longlong lVar1;
  
  lVar1 = FUN_141a2c920();
  if (lVar1 != 0) {
    return lVar1 + 0x30;
  }
  return 0;
}



// FUNCTION 141a2c920 FUN_141a2c920 body=433 status=ok
// SIG undefined FUN_141a2c920(void)

longlong * FUN_141a2c920(longlong param_1,char param_2)

{
  BOOL BVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  }
  iVar4 = *(int *)(param_1 + 0xc0);
  plVar8 = (longlong *)0x0;
  lVar7 = *(longlong *)(param_1 + 0x88);
  iVar3 = *(int *)(param_1 + 0xc4);
  uVar5 = 0xffffffff;
  if (*(int *)(lVar7 + 8 + (longlong)iVar4 * 0x10) <= iVar3) {
    plVar2 = (longlong *)operator_new(0x70);
    plVar6 = plVar8;
    if (plVar2 != (longlong *)0x0) {
      lVar7 = *(longlong *)(param_1 + 0x138);
      *(undefined4 *)(plVar2 + 1) = 4;
      plVar2[2] = 0;
      plVar2[3] = 0;
      *(undefined1 *)(plVar2 + 5) = 0;
      *plVar2 = (longlong)&PTR_FUN_144da1090;
      plVar2[6] = (longlong)&PTR_LAB_144da10d0;
      plVar2[8] = lVar7;
      *(undefined4 *)(plVar2 + 9) = 1;
      *(undefined4 *)((longlong)plVar2 + 0x4c) = 0xffffffff;
      *(undefined4 *)(plVar2 + 10) = 0;
      plVar2[0xb] = 0;
      plVar2[0xc] = 0;
      *(undefined1 *)(plVar2 + 0xd) = 0;
      plVar6 = plVar2;
    }
    (**(code **)(*plVar6 + 8))(plVar6);
    plVar2 = (longlong *)((longlong)*(int *)(param_1 + 0xc0) * 0x10 + *(longlong *)(param_1 + 0x88))
    ;
    iVar4 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar4 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
    }
    *(longlong **)(*plVar2 + (longlong)iVar4 * 8) = plVar6 + 6;
    iVar3 = *(int *)(param_1 + 0xc4);
    iVar4 = *(int *)(param_1 + 0xc0);
    lVar7 = *(longlong *)(param_1 + 0x88);
  }
  *(int *)(param_1 + 0xc4) = iVar3 + 1;
  lVar7 = *(longlong *)(*(longlong *)(lVar7 + (longlong)iVar4 * 0x10) + (longlong)iVar3 * 8);
  plVar6 = (longlong *)(lVar7 + -0x30);
  if (lVar7 == 0) {
    plVar6 = plVar8;
  }
  if (param_2 != '\0') {
    iVar4 = *(int *)(param_1 + 0xa0);
    plVar2 = plVar6 + 6;
    if (plVar6 == (longlong *)0x0) {
      plVar2 = plVar8;
    }
    *(int *)(param_1 + 0xa0) = iVar4 + 1;
    if (*(int *)(param_1 + 0xa4) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x98,iVar4);
    }
    *(longlong **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = plVar2;
    uVar5 = *(undefined4 *)(param_1 + 0xa0);
  }
  *(undefined4 *)(plVar6 + 7) = uVar5;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  return plVar6;
}



// FUNCTION 141a2cae0 FUN_141a2cae0 body=115 status=ok
// SIG undefined FUN_141a2cae0(void)

undefined1 FUN_141a2cae0(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469fcd48) {
    _Init_thread_header(&DAT_1469fcd48);
    if (DAT_1469fcd48 == -1) {
      uVar2 = FCommandLine::Get();
      cVar1 = FParse::Param(uVar2,L"nod3dasync");
      DAT_1469fcd44 = cVar1 == '\0';
      _Init_thread_footer(&DAT_1469fcd48);
    }
  }
  return DAT_1469fcd44;
}



// FUNCTION 141a2cb60 D3D11RHI_ShouldCreateWithD3DDebug body=88 status=ok
// SIG undefined D3D11RHI_ShouldCreateWithD3DDebug(void)

undefined1 D3D11RHI_ShouldCreateWithD3DDebug(void)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar1,L"d3ddebug");
  if (cVar2 == '\0') {
    uVar1 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar1,L"d3debug");
    if (cVar2 == '\0') {
      uVar1 = FCommandLine::Get();
      cVar2 = FParse::Param(uVar1,L"dxdebug");
      if (cVar2 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 141a2cbc0 Empty body=115 status=ok
// SIG undefined Empty(void)

void TArray<TRefCountPtr<FD3D11ConstantBuffer>,FDefaultAllocator>::Empty
               (undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  plVar3 = (longlong *)*param_1;
  for (iVar4 = *(int *)(param_1 + 1); iVar4 != 0; iVar4 = iVar4 + -1) {
    lVar2 = *plVar3;
    if (lVar2 != 0) {
      piVar1 = (int *)(lVar2 + 0x38);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (*(code *)**(undefined8 **)(lVar2 + 0x30))((undefined8 *)(lVar2 + 0x30),1);
      }
    }
    plVar3 = plVar3 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 141a2cc40 FUN_141a2cc40 body=265 status=ok
// SIG undefined FUN_141a2cc40(void)

void FUN_141a2cc40(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = (longlong *)*param_1;
  for (iVar3 = *(int *)(param_1 + 1); iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = (undefined8 *)*plVar2;
    *puVar1 = &PTR_FUN_144da1158;
    (**(code **)(puVar1[3] + 0x30))(puVar1 + 3);
    (**(code **)(puVar1[0x11] + 0x30))(puVar1 + 0x11);
    if ((longlong *)puVar1[0x17] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar1[0x17] + 0x10))();
    }
    FUN_141edd2d0(puVar1 + 0x11);
    puVar1[9] = &PTR_FUN_144da0c80;
    FUN_141edd2d0(puVar1 + 3);
    *puVar1 = &PTR_FUN_144da0c50;
    if (puVar1[1] != 0) {
      FMemory::Free();
    }
    FMemory::Free(*plVar2);
    plVar2 = plVar2 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 141a2cd50 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 141a2cdd0 EmptyD3DSamplerStateCache body=574 status=ok
// SIG undefined EmptyD3DSamplerStateCache(void)

void EmptyD3DSamplerStateCache(void)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  bool bVar9;
  int local_a8;
  uint uStack_a4;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined8 *local_58;
  undefined2 local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 *local_20;
  
  local_a8 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  iStack_90 = 0;
  iVar8 = (int)DAT_1464c10a8;
  if (iVar8 != 0) {
    puVar7 = DAT_1464c10a0;
    if (DAT_1464c10a0 == (uint *)0x0) {
      puVar7 = (uint *)&DAT_1464c1090;
    }
    uVar4 = *puVar7;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar4 == 0) {
      lVar6 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar5 = local_a8 + 1;
      bVar9 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar5;
      iStack_94 = iVar8;
      if (bVar9) goto LAB_141a2ce9a;
      uVar4 = puVar7[lVar6 + 1];
    }
    uStack_a4 = -uVar4 & uVar4;
    iVar5 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iStack_94 = (iStack_90 - iVar5) + 0x1f;
    if (iVar8 < iStack_94) {
      iStack_94 = iVar8;
    }
  }
LAB_141a2ce9a:
  uStack_70 = CONCAT44(iStack_94,0xffffffff);
  auStack_30._8_4_ = iStack_90;
  auStack_30._0_8_ = uStack_70;
  auStack_30._12_4_ = uStack_8c;
  local_50 = 0;
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  local_20 = &DAT_1464c1080;
  local_48 = &DAT_1464c1080;
  puStack_38 = &DAT_1464c1090;
  local_58 = &DAT_1464c1080;
  local_78 = &DAT_1464c1090;
  local_68._8_4_ = 0x464c1080;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = 1;
  uStack_40 = uStack_80;
  if (iStack_94 < iVar8) {
    do {
      puVar2 = *(undefined8 **)(DAT_1464c1080 + 8 + (longlong)iStack_94 * 0x18);
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        if ((*(char *)(puVar2 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')
            ))) {
          LOCK();
          bVar9 = *(int *)((longlong)puVar2 + 0xc) == 0;
          if (bVar9) {
            *(int *)((longlong)puVar2 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar9) {
            uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar4 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar6 + 8) = puVar2;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_80._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
      iStack_94 = uStack_70._4_4_;
    } while (uStack_70._4_4_ < *(int *)(local_78 + 0x18));
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,*(int *)(local_58 + 1) - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(&DAT_1464c1080,0);
  return;
}



// FUNCTION 141a2d010 FUN_141a2d010 body=242 status=ok
// SIG undefined FUN_141a2d010(void)

void FUN_141a2d010(longlong param_1,undefined1 param_2,float param_3,float param_4)

{
  char cVar1;
  int iVar2;
  float fVar3;
  
  if (param_3 <= param_4) {
    if (0.0 <= param_3) {
      if (1.0 <= param_3) {
        param_3 = 1.0;
      }
    }
    else {
      param_3 = 0.0;
    }
    fVar3 = 0.0;
    if ((0.0 <= param_4) && (fVar3 = param_4, 1.0 <= param_4)) {
      fVar3 = 1.0;
    }
    cVar1 = IsRHIDeviceIntel();
    if (cVar1 == '\0') {
      cVar1 = IsRHIDeviceIntel();
      if (((cVar1 != '\0') &&
          (iVar2 = agsDriverExtensionsDX11_SetDepthBounds
                             (*(undefined8 *)(param_1 + 0x26f0),*(undefined8 *)(param_1 + 0x200),
                              param_2,param_3,fVar3), iVar2 != 0)) && (DAT_1469fcd35 == '\0')) {
        DAT_1469fcd35 = '\x01';
      }
    }
    else {
      iVar2 = FUN_14004d020(*(undefined8 *)(param_1 + 0x210),param_2,param_3,fVar3);
      if ((iVar2 != 0) && (DAT_1469fcd34 == '\0')) {
        DAT_1469fcd34 = '\x01';
      }
    }
    *(float *)(param_1 + 0x228) = fVar3;
    *(float *)(param_1 + 0x224) = param_3;
    *(undefined1 *)(param_1 + 0x220) = param_2;
  }
  return;
}



// FUNCTION 141a2d110 FUN_141a2d110 body=659 status=ok
// SIG undefined FUN_141a2d110(void)

void FUN_141a2d110(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar5 + 0x38) < DAT_1469fce18) &&
     (_Init_thread_header(&DAT_1469fce18), DAT_1469fce18 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
    lVar6 = 0;
    if (plVar4 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469fce10 = lVar6;
    _Init_thread_footer(&DAT_1469fce18);
  }
  if ((*(int *)(lVar5 + 0x38) < DAT_1469fce28) &&
     (_Init_thread_header(&DAT_1469fce28), DAT_1469fce28 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    lVar5 = 0;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469fce20 = lVar5;
    _Init_thread_footer(&DAT_1469fce28);
  }
  if (DAT_146ab632a == '\0') {
    return;
  }
  cVar1 = FUN_141ee41d0();
  lVar5 = DAT_1469fce20;
  if (cVar1 == '\0') {
    return;
  }
  if (DAT_1469fc50b == '\0') {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    lVar6 = 4;
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
      lVar3 = 4;
    }
    else {
      lVar3 = 0;
    }
    if ((*(int *)(lVar3 + lVar5) - 4U & 0xfffffffd) == 0) {
      uVar7 = 0x44fa0000;
    }
    else {
      uVar7 = 0x447a0000;
    }
    cVar1 = IsRHIDeviceIntel();
    lVar5 = DAT_1469fce10;
    if (cVar1 == '\0') {
      cVar1 = IsRHIDeviceIntel();
      lVar5 = DAT_1469fce10;
      if (cVar1 == '\0') {
        IsRHIDeviceIntel();
      }
      else {
        cVar1 = FUN_1415ad720(&DAT_1468e2448);
        if (((cVar1 != '\0') || (DAT_1468c21ae == '\0')) ||
           (DVar2 = GetCurrentThreadId(), DVar2 == DAT_1468c21c0)) {
          lVar6 = 0;
        }
        FUN_141a42e50(*(undefined4 *)(param_1 + 0x17c34),1,*(undefined4 *)(lVar6 + lVar5),uVar7,0,0,
                      0);
      }
    }
    else {
      cVar1 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar1 != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar2 = GetCurrentThreadId(), DVar2 == DAT_1468c21c0)) {
        lVar6 = 0;
      }
      SetHDRMonitorModeNVIDIA
                (*(undefined4 *)(param_1 + 0x17c34),1,*(undefined4 *)(lVar6 + lVar5),uVar7,0,0,0);
    }
    DAT_1469fc50b = 1;
    return;
  }
  return;
}



// FUNCTION 141a2d3b0 FUN_141a2d3b0 body=555 status=ok
// SIG undefined FUN_141a2d3b0(void)

void FUN_141a2d3b0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  
  if (DAT_146ab632a == '\0') {
    return;
  }
  cVar3 = FUN_141ee41d0();
  if (cVar3 != '\0') {
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar8 + 0x38) < DAT_1469fce58) &&
       (_Init_thread_header(&DAT_1469fce58), DAT_1469fce58 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
      lVar6 = 0;
      if (plVar7 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar7 + 0x38))(plVar7);
      }
      DAT_1469fce50 = lVar6;
      _Init_thread_footer(&DAT_1469fce58);
    }
    lVar6 = DAT_1469fce50;
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    lVar9 = 4;
    if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar5 = 4;
    }
    else {
      lVar5 = 0;
    }
    iVar1 = *(int *)(lVar5 + lVar6);
    if ((iVar1 - 4U & 0xfffffffd) == 0) {
      uVar10 = 0x44fa0000;
    }
    else {
      uVar10 = 0x447a0000;
    }
    if ((*(int *)(lVar8 + 0x38) < DAT_1469fce68) &&
       (_Init_thread_header(&DAT_1469fce68), DAT_1469fce68 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
      lVar8 = 0;
      if (plVar7 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
      }
      DAT_1469fce60 = lVar8;
      _Init_thread_footer(&DAT_1469fce68);
    }
    lVar8 = DAT_1469fce60;
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
      lVar9 = 0;
    }
    uVar2 = *(undefined4 *)(lVar9 + lVar8);
    FUN_141a433c0(param_1,1,uVar2,uVar10,0,0,0);
    FUN_141a2dd90(param_1,uVar2,iVar1);
    return;
  }
  return;
}



// FUNCTION 141a2d5e0 FUN_141a2d5e0 body=61 status=ok
// SIG undefined FUN_141a2d5e0(void)

void FUN_141a2d5e0(longlong param_1)

{
  longlong *plVar1;
  
  (**(code **)(*(longlong *)(param_1 + 0x48) + 0x10))(param_1 + 0x48,0,0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x200);
                    /* WARNING: Could not recover jumptable at 0x000141a2d616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe0))(plVar1,*(undefined8 *)(param_1 + 0xb8));
  return;
}



// FUNCTION 141a2d620 FUN_141a2d620 body=1779 status=ok
// SIG undefined FUN_141a2d620(void)

void FUN_141a2d620(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  bool bVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  LARGE_INTEGER local_res8;
  
  iVar6 = (int)param_1[4];
  if (1 < iVar6) {
    *(int *)(param_1 + 4) = iVar6 + -1;
    return;
  }
  if (iVar6 == 0) {
    return;
  }
  uVar12 = 0;
  uVar11 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  cVar3 = FUN_14164b510();
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  (**(code **)(param_1[0x1f] + 0x10))(param_1 + 0x1f,0,0);
  if (DAT_146ab6339 == '\0') {
    DAT_146b17160 = 0;
    uVar9 = uVar12;
  }
  else {
    lVar7 = FUN_141a30de0(param_1 + 0x19,0);
    dVar19 = (double)DAT_146ab6340;
    if (DAT_146ab6340 < 0) {
      dVar19 = dVar19 + 1.8446744073709552e+19;
    }
    dVar20 = (double)lVar7;
    if (lVar7 < 0) {
      dVar20 = dVar20 + 1.8446744073709552e+19;
    }
    DAT_146b17160 = (uint)((dVar20 * (1.0 / dVar19)) / DAT_1468b02f8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469fcd80) &&
       (_Init_thread_header(&DAT_1469fcd80), DAT_1469fcd80 == -1)) {
      atexit((_func_5014 *)&LAB_143e85910);
      _Init_thread_footer(&DAT_1469fcd80);
    }
    if (0 < (int)param_1[0x14]) {
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
      if (BVar4 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
      }
      uVar9 = uVar12;
      uVar10 = uVar12;
      if (0 < (int)param_1[0x14]) {
        do {
          plVar15 = *(longlong **)(uVar10 + param_1[0x13]);
          if (plVar15 == (longlong *)0x0) {
            plVar15 = (longlong *)&DAT_00000030;
          }
          cVar3 = (**(code **)(*plVar15 + 0x18))(plVar15);
          if (cVar3 == '\0') {
            (**(code **)(*plVar15 + 0x10))(plVar15,0,0);
          }
          uVar13 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar13;
          uVar10 = uVar10 + 8;
        } while ((int)uVar13 < (int)param_1[0x14]);
      }
      bVar17 = DAT_1469fcd7c != DAT_1469fcd78;
      DAT_1469fcd78 = 0;
      uVar9 = uVar12;
      if (bVar17) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_1469fcd70);
        uVar9 = (ulonglong)DAT_1469fcd78;
      }
      uVar10 = uVar12;
      uVar16 = uVar12;
      uVar13 = (uint)uVar9;
      if (0 < (int)param_1[0x16]) {
        do {
          uVar9 = *(longlong *)(uVar16 + param_1[0x15]) - 0x30;
          if (*(longlong *)(uVar16 + param_1[0x15]) == 0) {
            uVar9 = uVar12;
          }
          cVar3 = (**(code **)(*(longlong *)(uVar9 + 0x30) + 0x18))(uVar9 + 0x30);
          if (cVar3 != '\0') {
            uVar8 = FUN_141a30de0(uVar9,1);
            uVar13 = DAT_1469fcd78;
            lVar7 = (longlong)(int)DAT_1469fcd78;
            DAT_1469fcd78 = DAT_1469fcd78 + 1;
            if ((int)DAT_1469fcd7c < (int)DAT_1469fcd78) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&DAT_1469fcd70,uVar13);
            }
            *(undefined8 *)(DAT_1469fcd70 + lVar7 * 8) = uVar8;
          }
          uVar14 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar14;
          uVar16 = uVar16 + 8;
          uVar13 = DAT_1469fcd78;
        } while ((int)uVar14 < (int)param_1[0x16]);
      }
      uVar9 = uVar12;
      if (0 < (int)uVar13) {
        if (3 < uVar13) {
          lVar7 = 0;
          lVar22 = 0;
          lVar21 = 0;
          lVar23 = 0;
          uVar14 = uVar13 & 0x80000003;
          if ((int)uVar14 < 0) {
            uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
          }
          uVar10 = uVar12;
          do {
            plVar15 = (longlong *)(DAT_1469fcd70 + uVar9 * 8);
            uVar11 = (int)uVar10 + 4;
            uVar10 = (ulonglong)uVar11;
            lVar7 = *plVar15 + lVar7;
            lVar22 = plVar15[1] + lVar22;
            plVar15 = (longlong *)(DAT_1469fcd70 + 0x10 + uVar9 * 8);
            uVar9 = uVar9 + 4;
            lVar21 = *plVar15 + lVar21;
            lVar23 = plVar15[1] + lVar23;
          } while ((longlong)uVar9 < (longlong)(int)(uVar13 - uVar14));
          uVar9 = lVar7 + lVar21 + lVar22 + lVar23;
        }
        if ((int)uVar11 < (int)uVar13) {
          uVar10 = (ulonglong)(uVar13 - uVar11);
          plVar15 = (longlong *)(DAT_1469fcd70 + (longlong)(int)uVar11 * 8);
          do {
            uVar9 = uVar9 + *plVar15;
            plVar15 = plVar15 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      plVar15 = param_1 + 0x15;
      *(undefined4 *)(param_1 + 0x16) = 0;
      if (*(int *)((longlong)param_1 + 0xb4) != (int)param_1[0x14]) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar15);
      }
      iVar6 = (int)param_1[0x14];
      if (iVar6 != 0) {
        iVar5 = (int)param_1[0x16];
        if (*(int *)((longlong)param_1 + 0xb4) < iVar5 + iVar6) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar15);
          iVar5 = (int)param_1[0x16];
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar15 + (longlong)iVar5 * 8),(void *)param_1[0x13],
                   (longlong)iVar6 << 3);
        *(int *)(param_1 + 0x16) = (int)param_1[0x16] + iVar6;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (*(int *)((longlong)param_1 + 0xa4) != (int)param_1[0x16]) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x13);
      }
      dVar20 = (double)(longlong)uVar9;
      if ((longlong)uVar9 < 0) {
        dVar20 = dVar20 + 1.8446744073709552e+19;
      }
      DAT_146b17164 = (uint)((dVar20 * (1.0 / dVar19)) / DAT_1468b02f8);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
      uVar9 = (ulonglong)DAT_146b17164;
      goto LAB_141a2d9f5;
    }
    uVar9 = (ulonglong)DAT_146b17160;
  }
  DAT_146b17164 = (uint)uVar9;
LAB_141a2d9f5:
  FUN_1415b2020(DAT_146b17160,uVar9,0);
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  dVar19 = DAT_1464c1120;
  if (*(char *)((longlong)param_1 + 10) == '\0') {
    if (*(char *)((longlong)param_1 + 0xb) != '\0') {
      QueryPerformanceCounter(&local_res8);
      dVar19 = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
      if ((char)param_1[1] != '\0') {
        fVar18 = (float)FUN_141ec77a0();
        if ((((float)(dVar19 - DAT_1464c1120) <= fVar18) || (DAT_1464c1120 <= 0.0)) ||
           (lVar7 = param_1[6], lVar7 == 0)) {
          lVar7 = param_1[6];
          if (lVar7 != 0) {
            if (3 < (int)param_1[0x29]) {
              plVar15 = param_1 + 0x28;
              plVar1 = (longlong *)*plVar15;
              puVar2 = (undefined8 *)*plVar1;
              *puVar2 = &PTR_FUN_144da1158;
              (**(code **)(puVar2[3] + 0x30))(puVar2 + 3);
              (**(code **)(puVar2[0x11] + 0x30))(puVar2 + 0x11);
              if ((longlong *)puVar2[0x17] != (longlong *)0x0) {
                (**(code **)(*(longlong *)puVar2[0x17] + 0x10))();
              }
              FUN_141edd2d0(puVar2 + 0x11);
              puVar2[9] = &PTR_FUN_144da0c80;
              FUN_141edd2d0(puVar2 + 3);
              *puVar2 = &PTR_FUN_144da0c50;
              if (puVar2[1] != 0) {
                FMemory::Free();
              }
              FMemory::Free(*plVar1);
              iVar6 = (int)param_1[0x29];
              if (iVar6 + -1 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)*plVar15,(void *)(*plVar15 + 8),(longlong)(iVar6 + -1) << 3);
                iVar6 = (int)param_1[0x29];
              }
              *(int *)(param_1 + 0x29) = iVar6 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar15);
              lVar7 = param_1[6];
            }
            iVar6 = (int)param_1[0x29];
            *(int *)(param_1 + 0x29) = iVar6 + 1;
            if (*(int *)((longlong)param_1 + 0x14c) < iVar6 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x28,iVar6);
            }
            *(longlong *)(param_1[0x28] + (longlong)iVar6 * 8) = lVar7;
            param_1[6] = 0;
          }
        }
        else {
          uVar9 = uVar12;
          if (0 < (int)param_1[0x29]) {
            do {
              FUN_141ec0990(*(undefined8 *)(uVar12 + param_1[0x28]));
              uVar11 = (int)uVar9 + 1;
              uVar12 = uVar12 + 8;
              uVar9 = (ulonglong)uVar11;
            } while ((int)uVar11 < (int)param_1[0x29]);
            lVar7 = param_1[6];
          }
          FUN_141ec0990(lVar7);
          if (*(longlong *)(DAT_146b17150 + 0x7b0) != 0) {
            lVar7 = *(longlong *)(DAT_146b17150 + 0x7b0);
            lVar21 = *(longlong *)(lVar7 + 0x48);
            uVar8 = FUN_141672640();
            (**(code **)(lVar21 + 8))(lVar7 + 0x48,0,L"SCREENSHOT",uVar8);
          }
          *(undefined4 *)((longlong)param_1 + 0x1c) = 5;
          FUN_141a2cc40(param_1 + 0x28,0);
        }
      }
    }
  }
  else if ((char)param_1[1] != '\0') {
    SetEmitDrawEvents(*(undefined1 *)((longlong)param_1 + 0xd));
    FUN_141ec0990(param_1[6]);
    DAT_146ab62fc = 0;
    *(undefined1 *)((longlong)param_1 + 10) = 0;
    cVar3 = FUN_141ed7b80();
    dVar19 = DAT_1464c1120;
    if ((cVar3 != '\0') && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) {
      lVar7 = *(longlong *)(DAT_146b17150 + 0x7b0);
      lVar21 = *(longlong *)(lVar7 + 0x48);
      uVar8 = FUN_141672640();
      (**(code **)(lVar21 + 8))(lVar7 + 0x48,0,L"SCREENSHOT",uVar8);
      dVar19 = DAT_1464c1120;
    }
  }
  DAT_1464c1120 = dVar19;
  FUN_1415b23e0(DAT_146ab632c,DAT_146ab632c,0);
  FUN_141ec2500(param_1);
  return;
}



// FUNCTION 141a2dd20 FUN_141a2dd20 body=97 status=ok
// SIG undefined FUN_141a2dd20(void)

void FUN_141a2dd20(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((DAT_146ab6339 != '\0') && (*(char *)(param_1 + 0x38) != '\0')) {
    if (param_3 == 0) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x200);
    }
    else {
      plVar3 = *(longlong **)(param_3 + 0x1d0);
    }
    (**(code **)(*plVar3 + 0xe0))
              (plVar3,*(undefined8 *)
                       (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x1c) * 8));
    iVar1 = *(int *)(param_1 + 0x20) + 1;
    *(undefined1 *)(param_1 + 0x38) = 0;
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar1 <= *(int *)(param_1 + 0x18)) {
      iVar2 = iVar1;
    }
    *(int *)(param_1 + 0x20) = iVar2;
  }
  return;
}



// FUNCTION 141a2dd90 FUN_141a2dd90 body=234 status=ok
// SIG undefined FUN_141a2dd90(void)

void FUN_141a2dd90(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong *local_res8;
  uint local_res10 [2];
  
  local_res8 = (longlong *)0x0;
  (**(code **)**(undefined8 **)(param_1 + 0x68))
            (*(undefined8 **)(param_1 + 0x68),&DAT_144da1fb0,&local_res8);
  iVar2 = 0;
  switch(param_3) {
  case 0:
  case 1:
    iVar2 = 0;
    if (param_2 == 2) {
      iVar2 = 0x11;
    }
    break;
  case 3:
  case 4:
    iVar2 = 0xc;
    break;
  case 5:
  case 6:
    iVar2 = 1;
  }
  if (*(int *)(param_1 + 0x7c) != iVar2) {
    local_res10[0] = 0;
    iVar1 = (**(code **)(*local_res8 + 0x128))(local_res8,iVar2,local_res10);
    if ((-1 < iVar1) && ((local_res10[0] & 1) != 0)) {
      iVar1 = (**(code **)(*local_res8 + 0x130))(local_res8,iVar2);
      if (iVar1 < 0) {
        FUN_141a447e0(iVar1,"SwapChain4->SetColorSpace1(NewColorSpace)",
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Viewport.cpp"
                      ,0x173,0);
      }
      *(int *)(param_1 + 0x7c) = iVar2;
    }
  }
  if (local_res8 != (longlong *)0x0) {
    (**(code **)(*local_res8 + 0x10))();
  }
  return;
}


